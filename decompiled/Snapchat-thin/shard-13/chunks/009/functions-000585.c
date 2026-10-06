/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ae5c370; end: 10ae5c3d3;  */

void FUN_10ae5c370(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((((*(ushort *)(*(long *)(*param_1 + 0x30) + 0xd4) >> 0xc & 1) != 0) &&
      (uVar1 = param_2, func_0x000107c2b228(param_2,0x2a), (int)uVar1 != 0)) &&
     (uVar1 = param_2, func_0x000107c2b228(param_2,0), (int)uVar1 != 0)) {
    func_0x000107c2b20c(param_2);
  }
  return;
}



/* Entry: 10ae5c3d4; end: 10ae5c3f3;  */

void FUN_10ae5c3d4(long *param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  long lVar5;
  
  lVar5 = *(long *)(*param_1 + 0x98);
  if (param_3 == (undefined8 *)0x0) {
    if (lVar5 == 0) {
      if (*(long *)(param_1[1] + 0xa8) == 0) {
        return;
      }
      func_0x000107c2b29c(0x10,0,0x131,&UNK_10f6cfd23,0xa8f);
      uVar4 = 0x50;
    }
    else {
      if ((*(ushort *)(param_1[1] + 0xe9) & 0x200) != 0) {
        return;
      }
      uVar4 = 0x6d;
    }
  }
  else {
    if (lVar5 != 0) {
      if ((*(ushort *)(param_1[1] + 0xe9) & 0x200) != 0) {
        return;
      }
      puVar1 = (undefined8 *)(*(long *)(*param_1 + 0x30) + 0x238);
      uVar2 = *param_3;
      lVar5 = param_3[1];
      puVar3 = puVar1;
      func_0x000107c2b684(puVar1,lVar5);
      if (lVar5 == 0) {
        return;
      }
      if ((int)puVar3 == 0) {
        return;
      }
      _memcpy(*puVar1,uVar2,lVar5);
      return;
    }
    uVar4 = 0x6e;
  }
  *param_2 = uVar4;
  return;
}



/* Entry: 10ae5c3f4; end: 10ae5c5af;  */

undefined8 FUN_10ae5c3f4(long *param_1,undefined8 param_2,long *param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  short *psVar6;
  byte *pbVar7;
  ulong uVar8;
  ushort *puVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ushort *puVar16;
  ulong uVar17;
  short *psStack_60;
  undefined8 uStack_58;
  
  iVar3 = (int)&psStack_60;
  if (param_3 == (long *)0x0) {
    uVar10 = 1;
  }
  else {
    if (param_3[1] != 0) {
      lVar11 = *(long *)(*param_1 + 0x68);
      uVar12 = *(ulong *)(lVar11 + 0x278);
      pbVar7 = (byte *)*param_3;
      puVar16 = (ushort *)(pbVar7 + 1);
      uVar17 = param_3[1] - 1;
      *param_3 = (long)puVar16;
      param_3[1] = uVar17;
      bVar1 = *pbVar7;
      uVar15 = (ulong)bVar1;
      if (uVar15 <= uVar17) {
        *param_3 = (long)((long)puVar16 + uVar15);
        param_3[1] = uVar17 - uVar15;
        if ((uVar17 - uVar15 == 0 && bVar1 != 0) && (bVar1 & 1) == 0) {
          uVar15 = uVar17 >> 1;
          psStack_60 = (short *)0x0;
          uStack_58 = 0;
          func_0x000107c2b6a8(&psStack_60,uVar15);
          if (iVar3 == 0) {
LAB_10ae5c56c:
            uVar10 = 0;
          }
          else {
            lVar5 = 0;
            uVar13 = uVar12;
            do {
              uVar2 = *puVar16 >> 8 | *puVar16 << 8;
              psStack_60[lVar5] = uVar2;
              uVar14 = uVar13;
              if (uVar12 != 0) {
                uVar8 = 0;
                puVar9 = (ushort *)(*(long *)(lVar11 + 0x280) + 0x10);
                do {
                  if (*puVar9 == uVar2 && *(long *)(puVar9 + -8) != 0) {
                    uVar14 = uVar8;
                    if (uVar13 <= uVar8) {
                      uVar14 = uVar13;
                    }
                    break;
                  }
                  puVar9 = puVar9 + 0xc;
                  uVar8 = uVar8 + 1;
                } while (uVar12 != uVar8);
              }
              lVar5 = lVar5 + 1;
              uVar17 = uVar17 - 2;
              uVar13 = uVar14;
              puVar16 = puVar16 + 1;
            } while (uVar17 != 0);
            _qsort(psStack_60,uStack_58,2,&UNK_100200240);
            if (3 < bVar1) {
              lVar5 = uVar15 - 1;
              psVar6 = psStack_60;
              do {
                if (*psVar6 == psVar6[1]) goto LAB_10ae5c56c;
                lVar5 = lVar5 + -1;
                psVar6 = psVar6 + 1;
              } while (lVar5 != 0);
            }
            if (uVar14 < uVar12) {
              uVar4 = (uint)*param_1;
              func_0x000107c2b89c();
              if (0x303 < uVar4) {
                *(uint *)(param_1 + 0xc3) = *(uint *)(param_1 + 0xc3) | 0x200000;
                *(undefined2 *)(param_1 + 0x57) =
                     *(undefined2 *)(*(long *)(lVar11 + 0x280) + uVar14 * 0x18 + 0x10);
              }
            }
            uVar10 = 1;
          }
          func_0x000107c2b534(psStack_60);
          return uVar10;
        }
      }
    }
    uVar10 = 0;
  }
  return uVar10;
}



/* Entry: 10ae5c5b0; end: 10ae5c5b7;  */

undefined8 FUN_10ae5c5b0(void)

{
  return 1;
}



/* Entry: 10ae5c5b8; end: 10ae5c707;  */

undefined1 * FUN_10ae5c5b8(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  ushort uVar1;
  ulong uVar2;
  uint uVar3;
  undefined1 *puVar4;
  ushort **ppuVar5;
  ushort *puVar6;
  ushort *puStack_30;
  ulong uStack_28;
  
  if (param_3 == (long *)0x0) {
    return (undefined1 *)0x1;
  }
  ppuVar5 = &puStack_30;
  uVar3 = (uint)*param_1;
  func_0x000107c2b89c();
  if (uVar3 < 0x304) {
LAB_10ae5c5e4:
    puVar4 = (undefined1 *)0x1;
  }
  else {
    uVar2 = param_3[1] - 2;
    if (1 < (ulong)param_3[1]) {
      puVar6 = (ushort *)*param_3;
      puStack_30 = puVar6 + 1;
      *param_3 = (long)puStack_30;
      param_3[1] = uVar2;
      uVar1 = *puVar6;
      uStack_28 = (ulong)((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8);
      if (uStack_28 <= uVar2) {
        *param_3 = (long)puStack_30 + uStack_28;
        param_3[1] = uVar2 - uStack_28;
        if (uStack_28 != 0 && uVar2 == uStack_28) {
          FUN_10ae5ac00(&puStack_30,param_1 + 0x51);
          if ((int)ppuVar5 == 0) {
            return (undefined1 *)ppuVar5;
          }
          *(uint *)(param_1 + 0xc3) = *(uint *)(param_1 + 0xc3) | 0x100;
          goto LAB_10ae5c5e4;
        }
      }
    }
    puVar4 = (undefined1 *)0x0;
  }
  return puVar4;
}



/* Entry: 10ae5c708; end: 10ae5c7f7;  */

void FUN_10ae5c708(long *param_1,undefined1 *param_2,undefined8 *param_3,uint param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  long lVar5;
  
  lVar5 = *(long *)(*param_1 + 0x98);
  if (param_3 == (undefined8 *)0x0) {
    if (lVar5 == 0) {
      if (*(long *)(param_1[1] + 0xa8) == 0) {
        return;
      }
      func_0x000107c2b29c(0x10,0,0x131,&UNK_10f6cfd23,0xa8f);
      uVar4 = 0x50;
    }
    else {
      if (param_4 == ((*(ushort *)(param_1[1] + 0xe9) & 0x200) == 0)) {
        return;
      }
      uVar4 = 0x6d;
    }
  }
  else {
    if (lVar5 != 0) {
      if (param_4 == ((*(ushort *)(param_1[1] + 0xe9) & 0x200) == 0)) {
        return;
      }
      puVar1 = (undefined8 *)(*(long *)(*param_1 + 0x30) + 0x238);
      uVar2 = *param_3;
      lVar5 = param_3[1];
      puVar3 = puVar1;
      func_0x000107c2b684(puVar1,lVar5);
      if (lVar5 == 0) {
        return;
      }
      if ((int)puVar3 == 0) {
        return;
      }
      _memcpy(*puVar1,uVar2,lVar5);
      return;
    }
    if ((param_4 & 1) != 0) {
      return;
    }
    uVar4 = 0x6e;
  }
  *param_2 = uVar4;
  return;
}



/* Entry: 10ae5c7f8; end: 10ae5c8cb;  */

void FUN_10ae5c7f8(long *param_1,undefined8 param_2,uint param_3)

{
  ushort uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined1 auStack_40 [32];
  
  iVar2 = (int)auStack_40;
  if ((param_3 == 0) || (*(long *)(*param_1 + 0x98) != 0)) {
    if (*(long *)(param_1[1] + 0xa8) == 0) {
      func_0x000107c2b29c(0x10,0,0x131,&UNK_10f6cfd23,0xac4);
    }
    else {
      uVar1 = *(ushort *)(param_1[1] + 0xe9);
      if (param_3 == (uVar1 & 0x200) >> 9) {
        uVar4 = 0x39;
        if ((uVar1 & 0x200) != 0) {
          uVar4 = 0xffa5;
        }
        uVar3 = param_2;
        func_0x000107c2b228(param_2,uVar4);
        if ((((int)uVar3 != 0) &&
            (uVar3 = param_2, func_0x000107c34f3c(param_2,auStack_40,2), (int)uVar3 != 0)) &&
           (func_0x000107c2b21c(auStack_40,*(undefined8 *)(param_1[1] + 0xa0),
                                *(undefined8 *)(param_1[1] + 0xa8)), iVar2 != 0)) {
          func_0x000107c2b20c(param_2);
        }
      }
    }
  }
  return;
}



/* Entry: 10ae5c8cc; end: 10ae5caa3;  */

/* WARNING: Possible PIC construction at 0x00010021f3e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010021f3ec) */

byte * FUN_10ae5c8cc(byte *param_1,byte *param_2,byte *param_3,long param_4,ulong param_5)

{
  uint uVar1;
  uint uVar2;
  byte **ppbVar3;
  bool bVar4;
  byte **ppbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte bVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *******pppppppuVar13;
  code *pcVar14;
  byte *pbStack_d0;
  byte *pbStack_c8;
  undefined8 ******ppppppuStack_c0;
  code *pcStack_b8;
  int iStack_b0;
  int iStack_ac;
  byte *pbStack_a8;
  ulong uStack_a0;
  byte abStack_98 [64];
  long lStack_58;
  
  ppbVar3 = (byte **)&iStack_b0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(uint *)(*(long *)param_2 + 0xc);
  uVar2 = *(uint *)(*(long *)param_3 + 4);
  uVar12 = (ulong)uVar2;
  pbVar7 = param_1;
  pbVar6 = param_2;
  if (param_5 < uVar1 + uVar12 + 0x11) {
LAB_10ae5c988:
    param_2 = (byte *)0x2;
  }
  else {
    (**(code **)(*(long *)(param_3 + 8) + 0x18))(param_3 + 8,param_4,param_5 - uVar12);
    pbVar6 = abStack_98;
    func_0x000107c2b498(param_3,pbVar6,0);
    if (uVar2 != 0) {
      bVar10 = 0;
      lVar11 = -uVar12;
      pbVar7 = abStack_98;
      do {
        bVar10 = *(byte *)(param_4 + param_5 + lVar11) ^ *pbVar7 | bVar10;
        bVar4 = lVar11 != -1;
        lVar11 = lVar11 + 1;
        pbVar7 = pbVar7 + 1;
      } while (bVar4);
      pbVar7 = param_3;
      if (bVar10 != 0) goto LAB_10ae5c988;
    }
    lVar11 = (ulong)uVar1 + 0x10;
    uVar12 = (param_5 - uVar12) - lVar11;
    pbStack_a8 = (byte *)0x0;
    uStack_a0 = 0;
    if (uVar12 < 0x7fffffff) {
      ppbVar5 = &pbStack_a8;
      func_0x000107c2b684(ppbVar5,uVar12);
      if ((int)ppbVar5 == 0) {
        param_2 = (byte *)0x3;
      }
      else {
        pbVar6 = param_2;
        FUN_10ae34628(param_2,pbStack_a8,&iStack_ac,param_4 + lVar11,uVar12);
        if ((int)pbVar6 != 0) {
          pbVar6 = pbStack_a8 + iStack_ac;
          pbVar7 = param_2;
          FUN_10ae347b8(param_2,pbVar6,&iStack_b0);
          if ((int)pbVar7 != 0) {
            uVar12 = (long)iStack_b0 + (long)iStack_ac;
            if (uStack_a0 < uVar12) goto LAB_10ae5ca8c;
            uStack_a0 = uVar12;
            func_0x000107c2b534(*(undefined8 *)param_1);
            param_2 = (byte *)0x0;
            *(byte **)param_1 = pbStack_a8;
            *(ulong *)(param_1 + 8) = uStack_a0;
            pbStack_a8 = (byte *)0x0;
            uStack_a0 = 0;
            goto LAB_10ae5ca48;
          }
        }
        func_0x000107c2b290();
        param_2 = (byte *)0x2;
      }
    }
    else {
      param_2 = (byte *)0x2;
    }
LAB_10ae5ca48:
    pbVar7 = pbStack_a8;
    pbVar6 = pbStack_a8;
    func_0x000107c2b534();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_2;
  }
  ___stack_chk_fail();
LAB_10ae5ca8c:
  _abort();
  func_0x000107c2b534(pbStack_a8);
  pbVar8 = pbVar7;
  __Unwind_Resume();
  pbVar9 = *(byte **)pbVar8;
  *(byte **)pbVar8 = pbVar6;
  if (pbVar9 == (byte *)0x0) {
    return (byte *)0x0;
  }
  pcStack_b8 = FUN_10ae5caa4;
  if (pbVar9 == (byte *)0x0) {
    return (byte *)0x0;
  }
  if ((*(uint *)(pbVar9 + 0x14) >> 1 & 1) == 0) {
    ppbVar3 = &pbStack_d0;
    pbVar6 = *(byte **)pbVar9;
    pbVar8 = pbVar9;
    pppppppuVar13 = &ppppppuStack_c0;
    pcVar14 = (code *)&UNK_10021f3ec;
  }
  else {
    pbVar6 = pbVar9;
    pbVar8 = pbVar7;
    pppppppuVar13 = (undefined8 *******)&stack0xfffffffffffffff0;
    pcVar14 = pcStack_b8;
    if ((*(uint *)(pbVar9 + 0x14) & 1) == 0) {
      pbVar9[0] = 0;
      pbVar9[1] = 0;
      pbVar9[2] = 0;
      pbVar9[3] = 0;
      pbVar9[4] = 0;
      pbVar9[5] = 0;
      pbVar9[6] = 0;
      pbVar9[7] = 0;
      return pbVar9;
    }
  }
  if (pbVar6 != (byte *)0x0) {
    pbStack_d0 = param_2;
    pbStack_c8 = pbVar7;
    ppppppuStack_c0 = (undefined8 ******)&stack0xfffffffffffffff0;
    *(byte **)((long)ppbVar3 + -0x20) = param_2;
    *(byte **)((long)ppbVar3 + -0x18) = pbVar8;
    *(undefined8 ********)((long)ppbVar3 + -0x10) = pppppppuVar13;
    *(code **)((long)ppbVar3 + -8) = pcVar14;
    pbVar6 = pbVar6 + -8;
    if (*(long *)pbVar6 + 8 != 0) {
      func_0x000107c60ee4(pbVar6,*(long *)pbVar6 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(pbVar6);
    return pbVar6;
  }
  return (byte *)0x0;
}



/* Entry: 10ae5caa4; end: 10ae5cabb;  */

/* WARNING: Possible PIC construction at 0x00010021f3e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010021f3ec) */

void FUN_10ae5caa4(undefined8 *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  
  puVar3 = (undefined8 *)*param_1;
  *param_1 = param_2;
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  puVar1 = &stack0xfffffffffffffff0;
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  if ((*(uint *)((long)puVar3 + 0x14) >> 1 & 1) == 0) {
    unaff_x30 = &UNK_10021f3ec;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    puVar2 = (undefined8 *)*puVar3;
    unaff_x19 = puVar3;
    unaff_x29 = puVar1;
  }
  else {
    puVar2 = puVar3;
    if ((*(uint *)((long)puVar3 + 0x14) & 1) == 0) {
      *puVar3 = 0;
      return;
    }
  }
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    plVar4 = puVar2 + -1;
    if (*plVar4 + 8 != 0) {
      func_0x000107c60ee4(plVar4,*plVar4 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(plVar4);
    return;
  }
  return;
}



/* Entry: 10ae5cabc; end: 10ae5caf7;  */

void FUN_10ae5cabc(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  *param_1 = param_2;
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  func_0x000107c2b448(*puVar2);
  if (puVar2 != (undefined8 *)0x0) {
    plVar1 = puVar2 + -1;
    if (*plVar1 + 8 != 0) {
      func_0x000107c60ee4(plVar1,*plVar1 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(plVar1);
    return;
  }
  return;
}



/* Entry: 10ae5caf8; end: 10ae5cb2b;  */

void FUN_10ae5caf8(code *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = *param_2;
  uStack_20 = *param_3;
  (*param_1)(&uStack_18,&uStack_20);
  return;
}



/* Entry: 10ae5cb2c; end: 10ae5cbbf;  */

/* WARNING: Possible PIC construction at 0x00010ae5cb44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010ae5cb5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010ae5cb74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010ae5cb8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010ae5cba4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ae5cb90) */
/* WARNING: Removing unreachable block (ram,0x00010ae5cb78) */
/* WARNING: Removing unreachable block (ram,0x00010ae5cb60) */
/* WARNING: Removing unreachable block (ram,0x00010ae5cb48) */
/* WARNING: Removing unreachable block (ram,0x00010ae5cba8) */

void FUN_10ae5cb2c(long param_1)

{
  long *plVar1;
  
  if (param_1 == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x98) + -8);
    if (*plVar1 + 8 != 0) {
      func_0x000107c60ee4(plVar1,*plVar1 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(plVar1);
    return;
  }
  return;
}



/* Entry: 10ae5cbc0; end: 10ae5ccbf;  */

undefined8 FUN_10ae5cbc0(undefined8 *param_1,undefined2 *param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 uStack_61;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  long lStack_40;
  long lStack_38;
  
  lVar5 = param_1[0x48];
  if (lVar5 == 0) {
    plVar1 = (long *)*param_1;
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    if ((int)plVar1 == 0) {
      func_0x000107c2b29c(0x10,0,0x44,&UNK_10f6cfe1d,0xb8);
      return 0;
    }
    lStack_40 = *(long *)(param_2 + 4);
    lStack_38 = *(long *)(param_2 + 8);
  }
  else {
    *param_2 = 0x100;
    lStack_40 = param_1[0x47];
    *(long *)(param_2 + 0xc) = lStack_40;
    *(long *)(param_2 + 0x10) = lVar5;
    if ((ulong)param_1[0x48] < 4) {
      puVar3 = param_1;
      _abort();
      pcStack_48 = FUN_10ae5ccc0;
      uStack_61 = 0x2e;
      uVar2 = *puVar3;
      uStack_60 = param_3;
      puStack_58 = param_1;
      puStack_50 = &stack0xfffffffffffffff0;
      if ((*(code **)(puVar3[1] + 0x30) == (code *)0x0) ||
         (uVar4 = uVar2, (**(code **)(puVar3[1] + 0x30))(uVar2,&uStack_61), (int)uVar4 == 1)) {
        func_0x000107c2b29c(0x10,0,0x7d,&UNK_10f6cfe1d,0x1b4);
        if ((int)param_2 != 0) {
          FUN_10ae60390(uVar2,2,uStack_61);
        }
        uVar4 = 1;
      }
      return uVar4;
    }
    lStack_40 = lStack_40 + 4;
    lStack_38 = param_1[0x48] - 4;
    *(long *)(param_2 + 4) = lStack_40;
    *(long *)(param_2 + 8) = lStack_38;
  }
  uVar2 = *param_1;
  FUN_10ae5965c(uVar2,&lStack_40,param_3);
  if (((int)uVar2 != 0) && (lStack_38 == 0)) {
    return 1;
  }
  func_0x000107c2b29c(0x10,0,0x83,&UNK_10f6cfe1d,0xbd);
  FUN_10ae60390(*param_1,2,0x32);
  return 0;
}



/* Entry: 10ae5ccc0; end: 10ae5cd3f;  */

void FUN_10ae5ccc0(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uStack_21;
  
  uStack_21 = 0x2e;
  uVar1 = *param_1;
  if (((*(code **)(param_1[1] + 0x30) == (code *)0x0) ||
      (uVar2 = uVar1, (**(code **)(param_1[1] + 0x30))(uVar1,&uStack_21), (int)uVar2 == 1)) &&
     (func_0x000107c2b29c(0x10,0,0x7d,&UNK_10f6cfe1d,0x1b4), param_2 != 0)) {
    FUN_10ae60390(uVar1,2,uStack_21);
  }
  return;
}



/* Entry: 10ae5cd40; end: 10ae5cf5b;  */

long * FUN_10ae5cd40(long *param_1)

{
  int iVar1;
  ulong *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  byte bVar6;
  long *plVar7;
  long *plVar8;
  ulong *puVar9;
  ulong uVar10;
  undefined1 auStack_1c0 [32];
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  ulong uStack_180;
  ulong *puStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined1 auStack_160 [32];
  ulong auStack_140 [5];
  undefined1 auStack_118 [64];
  long lStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  long *plStack_a8;
  byte abStack_a0 [8];
  long lStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  byte abStack_78 [64];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = (long *)*param_1;
  plVar7 = plVar8;
  (**(code **)(*plVar8 + 0x18))(plVar8,abStack_a0);
  if ((int)plVar7 == 0) {
    plVar7 = (long *)0x3;
  }
  else {
    plVar7 = plVar8;
    func_0x000107c2b6f8(plVar8,abStack_a0,0x14);
    if ((int)plVar7 != 0) {
      lVar4 = param_1[0xbb];
      if (lVar4 == 0) {
        lVar4 = *(long *)(*param_1 + 0x58);
      }
      plVar7 = param_1 + 0x33;
      FUN_10ae65894(plVar7,abStack_78,&plStack_a8,lVar4,(*(byte *)((long)plVar8 + 0xa4) ^ 0xff) & 1)
      ;
      if ((int)plVar7 != 0) {
        if ((abStack_a0[0] & 1) == 0) {
          plVar7 = param_1 + 0x33;
          func_0x000107c2b894(plVar7,uStack_88,uStack_80);
          if ((int)plVar7 == 0) goto LAB_10ae5ce5c;
        }
        param_1 = plStack_a8;
        if (plStack_90 == plStack_a8) {
          if (plStack_a8 == (long *)0x0) {
            if ((*(byte *)((long)plVar8 + 0xa4) & 1) == 0) {
LAB_10ae5cef8:
              *(char *)(plVar8[6] + 0x1b8) = (char)plStack_a8;
            }
            else {
LAB_10ae5cedc:
              *(char *)(plVar8[6] + 0x1b7) = (char)plStack_a8;
            }
            plVar7 = plVar8;
            (**(code **)(*plVar8 + 0x28))();
            if ((int)plVar7 == 0) {
              (**(code **)(*plVar8 + 0x20))(plVar8);
              plVar7 = (long *)0x1;
              goto LAB_10ae5ce5c;
            }
            FUN_10ae60390(plVar8,2,10);
            uVar3 = 0xff;
            uVar5 = 0x203;
          }
          else {
            plVar7 = (long *)0x0;
            bVar6 = 0;
            do {
              bVar6 = abStack_78[(long)plVar7] ^ *(byte *)(lStack_98 + (long)plVar7) | bVar6;
              plVar7 = (long *)((long)plVar7 + 1);
            } while (plStack_a8 != plVar7);
            if (bVar6 != 0) goto LAB_10ae5ce24;
            if (plStack_a8 < (long *)0xd) {
              if ((*(byte *)((long)plVar8 + 0xa4) & 1) == 0) {
                _memcpy(plVar8[6] + 0x1b9,abStack_78,plStack_a8);
                goto LAB_10ae5cef8;
              }
              _memcpy(plVar8[6] + 0x1ab,abStack_78,plStack_a8);
              goto LAB_10ae5cedc;
            }
            uVar3 = 0x44;
            uVar5 = 500;
          }
        }
        else {
LAB_10ae5ce24:
          FUN_10ae60390(plVar8,2,0x33);
          uVar3 = 0x8e;
          uVar5 = 0x1ed;
        }
        func_0x000107c2b29c(0x10,0,uVar3,&UNK_10f6cfe1d,uVar5);
        plVar7 = (long *)0x0;
      }
    }
  }
LAB_10ae5ce5c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar7;
  }
  ___stack_chk_fail();
  iVar1 = (int)auStack_160;
  pcStack_b8 = FUN_10ae5cf5c;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = (ulong *)*plVar7;
  uVar10 = plVar7[0xbb];
  if (uVar10 == 0) {
    uVar10 = puVar9[0xb];
  }
  puVar2 = (ulong *)(plVar7 + 0x33);
  plStack_d0 = param_1;
  plStack_c8 = plVar8;
  puStack_c0 = &stack0xfffffffffffffff0;
  FUN_10ae65894(puVar2,auStack_118,auStack_140 + 4,uVar10,*(byte *)((long)puVar9 + 0xa4) & 1);
  if (((int)puVar2 == 0) ||
     (puVar2 = puVar9,
     func_0x000107c2b790(puVar9,&UNK_10f6cfea9,uVar10 + 0x10,(long)*(int *)(uVar10 + 0xc)),
     (int)puVar2 == 0)) {
LAB_10ae5cff0:
    plVar7 = (long *)0x0;
    uStack_180 = uVar10;
  }
  else {
    if (0xc < auStack_140[4]) {
      puVar2 = (ulong *)0x10;
      func_0x000107c2b29c(0x10,0,0x44,&UNK_10f6cfe1d,0x21f);
      uVar10 = auStack_140[4];
      goto LAB_10ae5cff0;
    }
    if ((*(byte *)((long)puVar9 + 0xa4) & 1) == 0) {
      if (auStack_140[4] != 0) {
        _memcpy(puVar9[6] + 0x1ab,auStack_118,auStack_140[4]);
      }
      *(char *)(puVar9[6] + 0x1b7) = (char)auStack_140[4];
    }
    else {
      if (auStack_140[4] != 0) {
        _memcpy(puVar9[6] + 0x1b9,auStack_118,auStack_140[4]);
      }
      *(char *)(puVar9[6] + 0x1b8) = (char)auStack_140[4];
    }
    auStack_140[1] = 0;
    auStack_140[0] = 0;
    auStack_140[3] = 0;
    auStack_140[2] = 0;
    puVar2 = puVar9;
    (**(code **)(*puVar9 + 0x58))(puVar9,auStack_140,auStack_160,0x14);
    if ((((int)puVar2 == 0) ||
        (func_0x000107c2b21c(auStack_160,auStack_118,auStack_140[4]), iVar1 == 0)) ||
       (func_0x000107c2b6fc(puVar9,auStack_140), ((ulong)puVar9 & 1) == 0)) {
      func_0x000107c2b29c(0x10,0,0x44,&UNK_10f6cfe1d,0x230);
      plVar7 = (long *)0x0;
    }
    else {
      plVar7 = (long *)0x1;
    }
    puVar2 = auStack_140;
    func_0x000107c2b204();
    uStack_180 = auStack_140[4];
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return plVar7;
  }
  ___stack_chk_fail();
  func_0x000107c2b204(auStack_140);
  puVar9 = puVar2;
  __Unwind_Resume();
  pcStack_168 = FUN_10ae5d10c;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  plVar7 = (long *)*puVar9;
  puStack_178 = puVar2;
  ppuStack_170 = &puStack_c0;
  (**(code **)(*plVar7 + 0x58))(plVar7,&uStack_1a0,auStack_1c0,0xb);
  if (((int)plVar7 != 0) && (puVar2 = puVar9, FUN_10ae621f0(puVar9,auStack_1c0), (int)puVar2 != 0))
  {
    uVar10 = *puVar9;
    func_0x000107c2b6fc(uVar10,&uStack_1a0);
    if ((uVar10 & 1) != 0) {
      plVar7 = (long *)0x1;
      goto LAB_10ae5d190;
    }
  }
  func_0x000107c2b29c(0x10,0,0x44,&UNK_10f6cfe1d,0x23e);
  plVar7 = (long *)0x0;
LAB_10ae5d190:
  func_0x000107c2b204(&uStack_1a0);
  return plVar7;
}



/* Entry: 10ae5cf5c; end: 10ae5d10b;  */

undefined8 FUN_10ae5cf5c(undefined8 *param_1)

{
  int iVar1;
  ulong *puVar2;
  long *plVar3;
  ulong *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 auStack_110 [32];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  ulong *puStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined1 auStack_b0 [32];
  ulong auStack_90 [5];
  undefined1 auStack_68 [64];
  long lStack_28;
  
  iVar1 = (int)auStack_b0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = (ulong *)*param_1;
  uVar6 = param_1[0xbb];
  if (uVar6 == 0) {
    uVar6 = puVar4[0xb];
  }
  puVar2 = param_1 + 0x33;
  FUN_10ae65894(puVar2,auStack_68,auStack_90 + 4,uVar6,*(byte *)((long)puVar4 + 0xa4) & 1);
  if (((int)puVar2 == 0) ||
     (puVar2 = puVar4,
     func_0x000107c2b790(puVar4,&UNK_10f6cfea9,uVar6 + 0x10,(long)*(int *)(uVar6 + 0xc)),
     (int)puVar2 == 0)) {
LAB_10ae5cff0:
    uVar5 = 0;
  }
  else {
    uVar6 = auStack_90[4];
    if (0xc < auStack_90[4]) {
      puVar2 = (ulong *)0x10;
      func_0x000107c2b29c(0x10,0,0x44,&UNK_10f6cfe1d,0x21f);
      goto LAB_10ae5cff0;
    }
    if ((*(byte *)((long)puVar4 + 0xa4) & 1) == 0) {
      if (auStack_90[4] != 0) {
        _memcpy(puVar4[6] + 0x1ab,auStack_68,auStack_90[4]);
      }
      *(char *)(puVar4[6] + 0x1b7) = (char)auStack_90[4];
    }
    else {
      if (auStack_90[4] != 0) {
        _memcpy(puVar4[6] + 0x1b9,auStack_68,auStack_90[4]);
      }
      *(char *)(puVar4[6] + 0x1b8) = (char)auStack_90[4];
    }
    auStack_90[1] = 0;
    auStack_90[0] = 0;
    auStack_90[3] = 0;
    auStack_90[2] = 0;
    puVar2 = puVar4;
    (**(code **)(*puVar4 + 0x58))(puVar4,auStack_90,auStack_b0,0x14);
    if ((((int)puVar2 == 0) ||
        (func_0x000107c2b21c(auStack_b0,auStack_68,auStack_90[4]), iVar1 == 0)) ||
       (func_0x000107c2b6fc(puVar4,auStack_90), ((ulong)puVar4 & 1) == 0)) {
      func_0x000107c2b29c(0x10,0,0x44,&UNK_10f6cfe1d,0x230);
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    puVar2 = auStack_90;
    func_0x000107c2b204();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return uVar5;
  }
  ___stack_chk_fail();
  func_0x000107c2b204(auStack_90);
  puVar4 = puVar2;
  __Unwind_Resume();
  pcStack_b8 = FUN_10ae5d10c;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  plVar3 = (long *)*puVar4;
  uStack_d0 = uVar6;
  puStack_c8 = puVar2;
  puStack_c0 = &stack0xfffffffffffffff0;
  (**(code **)(*plVar3 + 0x58))(plVar3,&uStack_f0,auStack_110,0xb);
  if (((int)plVar3 != 0) && (puVar2 = puVar4, FUN_10ae621f0(puVar4,auStack_110), (int)puVar2 != 0))
  {
    uVar6 = *puVar4;
    func_0x000107c2b6fc(uVar6,&uStack_f0);
    if ((uVar6 & 1) != 0) {
      uVar5 = 1;
      goto LAB_10ae5d190;
    }
  }
  func_0x000107c2b29c(0x10,0,0x44,&UNK_10f6cfe1d,0x23e);
  uVar5 = 0;
LAB_10ae5d190:
  func_0x000107c2b204(&uStack_f0);
  return uVar5;
}



/* Entry: 10ae5d10c; end: 10ae5d1bf;  */

undefined8 FUN_10ae5d10c(ulong *param_1)

{
  long *plVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [32];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  plVar1 = (long *)*param_1;
  (**(code **)(*plVar1 + 0x58))(plVar1,&uStack_40,auStack_60,0xb);
  if (((int)plVar1 != 0) && (puVar2 = param_1, FUN_10ae621f0(param_1,auStack_60), (int)puVar2 != 0))
  {
    uVar3 = *param_1;
    func_0x000107c2b6fc(uVar3,&uStack_40);
    if ((uVar3 & 1) != 0) {
      uVar4 = 1;
      goto LAB_10ae5d190;
    }
  }
  func_0x000107c2b29c(0x10,0,0x44,&UNK_10f6cfe1d,0x23e);
  uVar4 = 0;
LAB_10ae5d190:
  func_0x000107c2b204(&uStack_40);
  return uVar4;
}



/* Entry: 10ae5d1c0; end: 10ae5d217;  */

void FUN_10ae5d1c0(long param_1)

{
  func_0x000107c2b534(*(undefined8 *)(param_1 + 0x218));
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  func_0x000107c2b534(*(undefined8 *)(param_1 + 0x208));
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x208) = 0;
  func_0x000107c2b534(*(undefined8 *)(param_1 + 0x248));
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  return;
}



/* Entry: 10ae5d218; end: 10ae5fc1f;  */

/* WARNING: Type propagation algorithm not settling */

ulong ******* FUN_10ae5d218(ulong *******param_1,ulong *******param_2,ulong *******param_3)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  short sVar5;
  ushort uVar6;
  ushort uVar7;
  char cVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  ulong *****pppppuVar17;
  ulong *******pppppppuVar18;
  ulong *******pppppppuVar19;
  ulong ****ppppuVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  byte bVar24;
  undefined8 *puVar25;
  ulong ******ppppppuVar26;
  long lVar27;
  short *psVar28;
  ulong uVar29;
  ulong uVar30;
  ushort *puVar31;
  ushort *puVar32;
  ushort *puVar33;
  long lVar34;
  ulong uVar35;
  ushort *puVar36;
  ulong uVar37;
  byte *pbVar38;
  ulong *******unaff_x21;
  ulong *******unaff_x22;
  ulong *******pppppppuVar39;
  ulong ******ppppppuVar40;
  ulong *******pppppppuVar41;
  ulong *******pppppppuVar42;
  ulong *******pppppppuVar43;
  ulong ******ppppppuVar44;
  ulong ******ppppppuVar45;
  ulong ****ppppuStack_2c8;
  ulong ******ppppppuStack_2c0;
  ulong uStack_2b8;
  ushort *puStack_2b0;
  ulong uStack_2a8;
  ulong *******pppppppuStack_2a0;
  ulong *******pppppppuStack_298;
  ulong uStack_290;
  ulong *******pppppppuStack_288;
  undefined1 *puStack_280;
  code *pcStack_278;
  ulong *******pppppppuStack_270;
  ulong uStack_268;
  uint uStack_25c;
  ulong uStack_258;
  ulong ******ppppppuStack_250;
  ulong *******pppppppuStack_248;
  ulong *******pppppppuStack_240;
  ulong ******ppppppuStack_238;
  ushort *puStack_230;
  ulong uStack_228;
  ulong *******pppppppuStack_220;
  ulong *******pppppppuStack_218;
  ulong *******pppppppuStack_210;
  byte *pbStack_208;
  ulong *******pppppppuStack_200;
  ulong uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined2 uStack_1d2;
  ulong *******pppppppuStack_1d0;
  ulong uStack_1c8;
  ulong *******pppppppuStack_1b0;
  ulong uStack_1a8;
  ulong *******pppppppuStack_1a0;
  ulong *******pppppppuStack_198;
  uint uStack_190;
  undefined4 uStack_18c;
  ulong *******pppppppuStack_188;
  ulong *******pppppppuStack_180;
  ulong *******pppppppuStack_170;
  ulong *******pppppppuStack_168;
  ulong *******pppppppuStack_160;
  ulong *******pppppppuStack_158;
  ulong *******pppppppuStack_150;
  long lStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  ulong *******pppppppuStack_130;
  ulong uStack_128;
  long lStack_120;
  ulong *******pppppppuStack_118;
  ushort *puStack_110;
  ulong uStack_108;
  long lStack_70;
  
  pppppppuVar39 = param_1 + 0xba;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppuStack_210 = param_1 + 0xb2;
  pbStack_208 = (byte *)((long)param_1 + 0x623);
  pppppppuStack_220 = param_1 + 0xbd;
  pppppppuStack_218 = param_1 + 0x5a;
  pppppppuVar19 = param_1;
LAB_10ae5d274:
  uVar3 = *(uint *)((long)param_1 + 0x14);
  pppppppuVar43 = pppppppuVar19;
  switch((ulong)uVar3) {
  case 0:
    pppppppuVar19 = (ulong *******)*param_1;
    ppppppuVar26 = pppppppuVar19[0xc];
    if ((ppppppuVar26 != (ulong ******)0x0) ||
       (ppppppuVar26 = (ulong ******)pppppppuVar19[0xd][0x30], ppppppuVar26 != (ulong ******)0x0)) {
      param_2 = (ulong *******)0x10;
      param_3 = (ulong *******)0x1;
      (*(code *)ppppppuVar26)();
    }
    pppppppuVar43 = (ulong *******)0x1;
    goto code_r0x00010ae5d2e4;
  case 1:
    pppppppuVar41 = (ulong *******)*param_1;
    param_2 = (ulong *******)&pppppppuStack_1a0;
    pppppppuVar43 = pppppppuVar41;
    (*(code *)(*pppppppuVar41)[3])();
    if ((int)pppppppuVar43 == 0) {
code_r0x00010ae5dee0:
      pppppppuVar19 = pppppppuVar43;
      pppppppuVar43 = (ulong *******)0x3;
      goto code_r0x00010ae5f4f4;
    }
    param_2 = (ulong *******)&pppppppuStack_1a0;
    param_3 = (ulong *******)0x1;
    pppppppuVar43 = pppppppuVar41;
    func_0x000107c2b6f8();
    if ((int)pppppppuVar43 == 0) break;
    uStack_1f8 = CONCAT44(uStack_18c,uStack_190);
    pppppppuStack_200 = pppppppuStack_198;
    param_2 = (ulong *******)&pppppppuStack_200;
    param_3 = (ulong *******)&pppppppuStack_170;
    pppppppuVar19 = pppppppuVar41;
    FUN_10ae5965c();
    uVar13 = 0;
    if (uStack_1f8 == 0) {
      uVar13 = (uint)pppppppuVar19;
    }
    if ((uVar13 & 1) == 0) {
      func_0x000107c2b29c(0x10,0,0x89,&UNK_10f6cff9c,0x287);
      param_2 = (ulong *******)0x2;
      param_3 = (ulong *******)0x32;
      FUN_10ae60390();
      pppppppuVar43 = pppppppuVar41;
      break;
    }
    pppppppuVar19 = pppppppuVar41;
    (*(code *)(*pppppppuVar41)[5])();
    if ((int)pppppppuVar19 != 0) {
      FUN_10ae60390(pppppppuVar41,2,10);
      param_3 = (ulong *******)0xff;
      goto code_r0x00010ae5f070;
    }
    if ((*(ushort *)((long)param_1[1] + 0xe9) >> 6 & 1) != 0) {
      pppppppuVar43 = (ulong *******)0x6;
      goto code_r0x00010ae5f4f4;
    }
    pppppppuStack_1b0 = (ulong *******)CONCAT71(pppppppuStack_1b0._1_7_,0x32);
    unaff_x21 = (ulong *******)*param_1;
    iVar15 = (int)&pppppppuStack_170;
    param_2 = (ulong *******)&pppppppuStack_200;
    param_3 = (ulong *******)0xfe0d;
    FUN_10ae59824();
    if (iVar15 == 0) {
code_r0x00010ae5e4a4:
      pppppppuVar19 = param_1;
      FUN_10ae5cbc0(param_1,&pppppppuStack_1a0,&pppppppuStack_170);
      if (((ulong)pppppppuVar19 & 1) == 0) {
        param_3 = (ulong *******)0x44;
        goto code_r0x00010ae5f070;
      }
      param_2 = (ulong *******)&pppppppuStack_1b0;
      param_3 = (ulong *******)&pppppppuStack_170;
      pppppppuVar19 = param_1;
      FUN_10ae5fc20();
      if (((ulong)pppppppuVar19 & 1) == 0) {
        param_3 = (ulong *******)((ulong)pppppppuStack_1b0 & 0xff);
        param_2 = (ulong *******)0x2;
        FUN_10ae60390();
        pppppppuVar43 = pppppppuVar41;
        break;
      }
      iVar15 = 2;
      goto code_r0x00010ae5d52c;
    }
    if (uStack_1f8 == 0) {
      uVar22 = 0x205;
    }
    else {
      if (*(byte *)pppppppuStack_200 != 0) goto code_r0x00010ae5e4a4;
      if ((((2 < uStack_1f8) && (1 < uStack_1f8 - 3)) && (uStack_1f8 != 5)) && (2 < uStack_1f8 - 5))
      {
        uVar29 = (ulong)((uint)(*(ushort *)((long)pppppppuStack_200 + 6) >> 8) |
                        (*(ushort *)((long)pppppppuStack_200 + 6) & 0xff00ff) << 8);
        uVar30 = (uStack_1f8 - 8) - uVar29;
        if ((uVar29 <= uStack_1f8 - 8) && (uVar35 = uVar30 - 2, 1 < uVar30)) {
          pppppppuStack_248 = pppppppuStack_200 + 1;
          ppppppuStack_250 = (ulong ******)((ushort *)((long)pppppppuStack_248 + uVar29) + 1);
          uVar6 = *(ushort *)((long)pppppppuStack_248 + uVar29);
          uVar21 = (ulong)((uint)(uVar6 >> 8) | (uVar6 & 0xff00ff) << 8);
          uVar30 = uVar35 - uVar21;
          if (uVar21 <= uVar35) {
            uVar6 = *(ushort *)((long)pppppppuStack_200 + 1);
            uVar7 = *(ushort *)((long)pppppppuStack_200 + 3);
            ppppppuStack_238 =
                 (ulong ******)
                 CONCAT44(ppppppuStack_238._4_4_,(uint)*(byte *)((long)pppppppuStack_200 + 5));
            pppppppuStack_200 = (ulong *******)((long)ppppppuStack_250 + uVar21);
            uStack_1f8 = uVar30;
            if (uVar30 == 0) {
              unaff_x22 = (ulong *******)unaff_x21[0xd];
              pppppppuVar19 = unaff_x22 + 2;
              uStack_268 = uVar35;
              _pthread_rwlock_rdlock();
              if ((int)pppppppuVar19 == 0) {
                if (unaff_x21[0xd][0x55] != (ulong *****)0x0) {
                  pppppuVar17 = unaff_x21[0xd][0x55] + 3;
                  iVar15 = *(int *)pppppuVar17;
                  do {
                    if (iVar15 == -1) break;
                    iVar2 = *(int *)pppppuVar17;
                    if (iVar2 == iVar15) {
                      cVar8 = '\x01';
                      bVar12 = (bool)ExclusiveMonitorPass(pppppuVar17,0x10);
                      if (bVar12) {
                        *(int *)pppppuVar17 = iVar15 + 1;
                        cVar8 = ExclusiveMonitorsStatus();
                      }
                      bVar12 = cVar8 == '\0';
                    }
                    else {
                      bVar12 = false;
                      ClearExclusiveLocal();
                    }
                    iVar15 = iVar2;
                  } while (!bVar12);
                }
                pppppppuStack_1d0 = (ulong *******)0x0;
                func_0x000107c2b69c(pppppppuStack_220);
                param_2 = (ulong *******)0x0;
                func_0x000107c2b69c(&pppppppuStack_1d0);
                pppppppuVar19 = unaff_x22 + 2;
                _pthread_rwlock_unlock();
                if ((int)pppppppuVar19 == 0) {
                  ppppppuVar26 = *pppppppuStack_220;
                  if ((ppppppuVar26 != (ulong ******)0x0) && (*ppppppuVar26 != (ulong *****)0x0)) {
                    uStack_25c = (uint)(uVar7 >> 8) | (uVar7 & 0xff00ff) << 8;
                    uStack_258 = CONCAT44(uStack_258._4_4_,
                                          (uint)(uVar6 >> 8) | (uVar6 & 0xff00ff) << 8);
                    unaff_x22 = (ulong *******)ppppppuVar26[1];
                    lVar27 = (long)*ppppppuVar26 << 3;
                    do {
                      pppppppuVar19 = pppppppuStack_218;
                      if (*pppppppuStack_218 != (ulong ******)0x0) {
                        (*(code *)(*pppppppuStack_218)[3])(pppppppuStack_218);
                        *pppppppuVar19 = (ulong ******)0x0;
                      }
                      _bzero(param_1 + 0x58,0x2d0);
                      _bzero(pppppppuVar19,600);
                      ppppppuVar26 = *unaff_x22;
                      if ((uint)ppppppuStack_238 == *(byte *)((long)ppppppuVar26 + 0x43)) {
                        FUN_10ae591b4(ppppppuVar26,param_1 + 0x58,(uint)uStack_258 & 0xffff,
                                      uStack_25c & 0xffff,pppppppuStack_248,uVar29);
                        if (((ulong)ppppppuVar26 & 1) == 0) goto code_r0x00010ae5f4a0;
                        pppppppuVar19 = param_1;
                        FUN_10ae5875c(param_1,&pppppppuStack_1b0,&pppppppuStack_1d0,param_1 + 0x47,
                                      &pppppppuStack_170,ppppppuStack_250,uStack_268);
                        if (((ulong)pppppppuVar19 & 1) != 0) {
                          *(byte *)((long)param_1 + 0x622) = (byte)ppppppuStack_238;
                          *(undefined4 *)(unaff_x21[6] + 0x1a) = 1;
                          goto code_r0x00010ae5e4a4;
                        }
                        if (((ulong)pppppppuStack_1d0 & 1) == 0) {
                          func_0x000107c2b29c(0x10,0,0x8a,&UNK_10f6cff9c,0x23a);
                          param_3 = (ulong *******)((ulong)pppppppuStack_1b0 & 0xff);
                          goto code_r0x00010ae5f4e4;
                        }
                        func_0x000107c2b290();
                        pppppppuStack_1b0 = (ulong *******)CONCAT71(pppppppuStack_1b0._1_7_,0x32);
                      }
                      else {
code_r0x00010ae5f4a0:
                        func_0x000107c2b290();
                      }
                      unaff_x22 = unaff_x22 + 1;
                      lVar27 = lVar27 + -8;
                    } while (lVar27 != 0);
                  }
                  *(undefined4 *)(unaff_x21[6] + 0x1a) = 2;
                  goto code_r0x00010ae5e4a4;
                }
              }
              goto code_r0x00010ae5fb20;
            }
          }
        }
      }
      uVar22 = 0x216;
    }
    func_0x000107c2b29c(0x10,0,0x89,&UNK_10f6cff9c,uVar22);
    param_3 = (ulong *******)0x32;
    pppppppuStack_1b0 = (ulong *******)CONCAT71(pppppppuStack_1b0._1_7_,0x32);
code_r0x00010ae5f4e4:
    param_2 = (ulong *******)0x2;
    FUN_10ae60390();
    pppppppuVar43 = pppppppuVar41;
    break;
  case 2:
    pppppppuVar41 = (ulong *******)*param_1;
    param_2 = (ulong *******)&pppppppuStack_1a0;
    param_3 = (ulong *******)&pppppppuStack_170;
    pppppppuVar43 = param_1;
    FUN_10ae5cbc0();
    if ((int)pppppppuVar43 == 0) break;
    if (pppppppuVar41[0xd][0x3b] != (ulong *****)0x0) {
      pppppppuVar19 = (ulong *******)&pppppppuStack_170;
      (*(code *)pppppppuVar41[0xd][0x3b])();
      if ((int)pppppppuVar19 == 0) {
        pppppppuVar43 = (ulong *******)0x5;
        goto code_r0x00010ae5f4f4;
      }
      if ((int)pppppppuVar19 == -1) {
        func_0x000107c2b29c(0x10,0,0x85,&UNK_10f6cff9c,0x2bf);
        param_2 = (ulong *******)0x2;
        param_3 = (ulong *******)0x28;
        FUN_10ae60390();
        pppppppuVar43 = pppppppuVar41;
        break;
      }
    }
    param_2 = (ulong *******)((long)param_1 + 0x1c);
    param_3 = (ulong *******)((long)param_1 + 0x1e);
    pppppppuVar43 = param_1;
    func_0x000107c2b898();
    if ((int)pppppppuVar43 == 0) break;
    pppppppuVar19 = pppppppuStack_130;
    uVar30 = uStack_128;
    if ((*(ushort *)((long)param_1[1] + 0xe9) >> 8 & 1) != 0) {
      do {
        if (uVar30 < 2) {
          uVar30 = 0;
          puVar31 = (ushort *)0x0;
          pbVar38 = &UNK_10e52ad40;
          lVar27 = 0x40;
          puVar32 = (ushort *)0x0;
          uVar35 = 0;
          puVar36 = puStack_110;
          uVar29 = uStack_108;
          bVar24 = 0;
          bVar11 = 0;
          goto code_r0x00010ae5e57c;
        }
        uVar6 = *(ushort *)pppppppuVar19;
        pppppppuVar19 = (ulong *******)((long)pppppppuVar19 + 2);
        uVar30 = uVar30 - 2;
      } while ((ushort)(uVar6 >> 8 | uVar6 << 8) != 0x1303);
    }
    goto code_r0x00010ae5eb08;
  case 3:
    pppppppuVar41 = (ulong *******)*param_1;
    ppppuVar20 = param_1[1][4][9];
    if (ppppuVar20 != (ulong ****)0x0) {
      param_2 = (ulong *******)param_1[1][4][10];
      pppppppuVar19 = pppppppuVar41;
      (*(code *)ppppuVar20)();
      if ((int)pppppppuVar19 == 0) {
        func_0x000107c2b29c(0x10,0,0x7e,&UNK_10f6cff9c,0x2fc);
        param_2 = (ulong *******)0x2;
        param_3 = (ulong *******)0x50;
        FUN_10ae60390();
        pppppppuVar43 = pppppppuVar41;
        break;
      }
      if ((int)pppppppuVar19 < 0) {
        pppppppuVar43 = (ulong *******)0x8;
        goto code_r0x00010ae5f4f4;
      }
    }
    pppppppuVar43 = param_1;
    func_0x00010ae6286c();
    if ((int)pppppppuVar43 != 0) {
      if ((char)*(byte *)(param_1 + 0xc3) < '\0') {
        pppppuVar17 = pppppppuVar41[0xd][0x5a];
        if (pppppuVar17 != (ulong *****)0x0) {
          param_2 = (ulong *******)pppppppuVar41[0xd][0x5b];
          pppppppuVar19 = pppppppuVar41;
          (*(code *)pppppuVar17)();
          if ((int)pppppppuVar19 != 0) {
            if ((int)pppppppuVar19 != 3) {
              func_0x000107c2b29c(0x10,0,0x121,&UNK_10f6cff9c,0x313);
              param_2 = (ulong *******)0x2;
              param_3 = (ulong *******)0x50;
              FUN_10ae60390();
              pppppppuVar43 = pppppppuVar41;
              break;
            }
            *(uint *)(param_1 + 0xc3) = *(uint *)(param_1 + 0xc3) & 0xffffff7f;
          }
        }
      }
      pppppppuVar19 = pppppppuVar41;
      func_0x000107c2b89c();
      if (0x303 < (uint)pppppppuVar19) {
        iVar15 = 4;
code_r0x00010ae5d52c:
        *(int *)((long)param_1 + 0x14) = iVar15;
        goto code_r0x00010ae5e0d0;
      }
      if ((*(byte *)((long)param_1 + 0x61a) >> 4 & 1) != 0) {
        pppppppuVar43 = (ulong *******)0x11;
        goto code_r0x00010ae5f4f4;
      }
      *(undefined4 *)(pppppppuVar41[6] + 0x1f) = 3;
      param_2 = (ulong *******)&pppppppuStack_200;
      param_3 = (ulong *******)&pppppppuStack_170;
      pppppppuVar43 = param_1;
      FUN_10ae5cbc0();
      uVar30 = uStack_128;
      pppppppuVar19 = pppppppuStack_130;
      if ((int)pppppppuVar43 != 0) {
        unaff_x21 = (ulong *******)param_1[1][3];
        if (unaff_x21 == (ulong *******)0x0) {
          unaff_x21 = (ulong *******)pppppppuVar41[0xd][0x1d];
        }
        ppppppuStack_238 = *param_1;
        pppppppuVar43 = (ulong *******)0x0;
        func_0x000107c2b59c();
        pppppppuStack_1d0 = pppppppuVar43;
        if (pppppppuVar43 == (ulong *******)0x0) {
          func_0x000107c2b29c(0x10,0,0x41,&UNK_10f6cff9c,0x113);
          unaff_x22 = pppppppuVar19;
code_r0x00010ae5f188:
          param_1[0xbf] = (ulong ******)0x0;
        }
        else {
          for (; uVar30 != 0; uVar30 = uVar30 - 2) {
            if (uVar30 == 1) {
              uVar22 = 0x94;
              uVar23 = 0x11b;
code_r0x00010ae5f174:
              func_0x000107c2b29c(0x10,0,uVar22,&UNK_10f6cff9c,uVar23);
              func_0x000107c2b534(pppppppuVar43[1]);
              func_0x000107c2b534(pppppppuVar43);
              unaff_x22 = pppppppuVar19;
              goto code_r0x00010ae5f188;
            }
            uStack_190 = (uint)(*(ushort *)pppppppuVar19 >> 8) |
                         (*(ushort *)pppppppuVar19 & 0xff00ff) << 8 | 0x3000000;
            pppppppuVar42 = (ulong *******)&pppppppuStack_1a0;
            param_3 = (ulong *******)0x18;
            _bsearch(pppppppuVar42,&PTR_DAT_110c89f08,0x18,0x28,&UNK_1001fbef4);
            if (pppppppuVar42 != (ulong *******)0x0) {
              param_3 = (ulong *******)*pppppppuVar43;
              pppppppuVar42 = pppppppuVar43;
              func_0x000107c2b5ac();
              if (pppppppuVar42 == (ulong *******)0x0) {
                uVar22 = 0x41;
                uVar23 = 0x121;
                goto code_r0x00010ae5f174;
              }
            }
            pppppppuVar19 = (ulong *******)((long)pppppppuVar19 + 2);
          }
          if ((*(byte *)((long)ppppppuStack_238 + 0x82) >> 6 & 1) == 0) {
            ppppppuVar26 = (ulong ******)0x0;
            pppppppuVar19 = pppppppuVar43;
            pppppppuVar42 = (ulong *******)*unaff_x21;
          }
          else {
            ppppppuVar26 = unaff_x21[1];
            pppppppuVar19 = (ulong *******)*unaff_x21;
            pppppppuVar42 = pppppppuVar43;
          }
          pppppppuVar18 = param_1;
          pppppppuStack_270 = pppppppuVar43;
          pppppppuStack_1b0 = pppppppuVar43;
          FUN_10ae61f18();
          if ((int)pppppppuVar18 == 0) {
            uVar14 = 0;
            uVar13 = 0;
          }
          else {
            iVar15 = *(int *)((long)param_1[0xb9] + 4);
            if (iVar15 == 6) {
              uVar13 = 1;
            }
            else if ((iVar15 == 0x3b5) || (iVar15 == 0x198)) {
              uVar13 = 2;
            }
            else {
              uVar13 = 0;
            }
            uVar14 = (uint)(iVar15 == 6);
          }
          param_2 = (ulong *******)&pppppppuStack_1a0;
          pppppppuVar43 = param_1;
          FUN_10ae5987c();
          uStack_25c = uVar14 | 2;
          if ((int)pppppppuVar43 == 0) {
            uStack_25c = uVar14;
          }
          if (param_1[1][9] != (ulong *****)0x0) {
            uVar13 = uVar13 | 4;
            uStack_25c = uStack_25c | 4;
          }
          uStack_268 = CONCAT44(uStack_268._4_4_,uVar13);
          if ((pppppppuVar19 != (ulong *******)0x0) && (*pppppppuVar19 != (ulong ******)0x0)) {
            ppppppuVar40 = (ulong ******)0x0;
            uStack_258 = 0xffffffff;
            ppppppuStack_250 = ppppppuVar26;
            pppppppuStack_248 = pppppppuVar19;
            pppppppuStack_240 = pppppppuVar39;
            do {
              pppppppuVar39 = (ulong *******)pppppppuStack_248[1][(long)ppppppuVar40];
              uVar13 = *(uint *)((long)pppppppuVar39 + 0x14);
              if (uVar13 == 8) {
                ppppppuVar44 = ppppppuStack_238;
                func_0x000107c2b89c();
                uVar16 = (uint)ppppppuVar44;
                if (uVar16 < 0x304) goto code_r0x00010ae5f8e8;
                uVar14 = 0x304;
code_r0x00010ae5f87c:
                if (((uVar14 < uVar16) || ((uVar13 & uStack_25c) == 0)) ||
                   ((*(uint *)(pppppppuVar39 + 3) & (uint)uStack_268) == 0))
                goto code_r0x00010ae5f8e8;
                param_2 = (ulong *******)&pppppppuStack_1a0;
                pppppppuVar19 = pppppppuVar42;
                FUN_10ae48cd8();
                param_3 = pppppppuVar39;
                if ((int)pppppppuVar19 == 0) goto code_r0x00010ae5f8e8;
                uVar13 = (uint)uStack_258;
                if ((ppppppuVar26 == (ulong ******)0x0) ||
                   (*(byte *)((long)ppppppuVar26 + (long)ppppppuVar40) != 1)) {
                  pppppppuVar19 = pppppppuStack_1a0;
                  if ((uVar13 != 0xffffffff) &&
                     ((ulong *******)(long)(int)uVar13 < pppppppuStack_1a0)) {
                    pppppppuVar19 = (ulong *******)(long)(int)uVar13;
                    pppppppuStack_1a0 = pppppppuVar19;
                  }
                  goto code_r0x00010ae5f928;
                }
                uVar14 = (uint)pppppppuStack_1a0;
                if ((ulong *******)(long)(int)uVar13 <= pppppppuStack_1a0 && uVar13 != 0xffffffff) {
                  uVar14 = uVar13;
                }
                uStack_258 = (ulong)uVar14;
              }
              else {
                iVar15 = *(int *)(pppppppuVar39 + 3);
                if (iVar15 == 8) {
                  uVar14 = 0x304;
                }
                else {
                  uVar14 = 0x300;
                  if (*(int *)((long)pppppppuVar39 + 0x24) != 1) {
                    uVar14 = 0x303;
                  }
                }
                ppppppuVar26 = ppppppuStack_238;
                func_0x000107c2b89c();
                uVar16 = (uint)ppppppuVar26;
                ppppppuVar26 = ppppppuStack_250;
                if (uVar14 <= uVar16) {
                  uVar14 = 0x303;
                  if (iVar15 == 8) {
                    uVar14 = 0x304;
                  }
                  goto code_r0x00010ae5f87c;
                }
code_r0x00010ae5f8e8:
                if (((ppppppuVar26 != (ulong ******)0x0) &&
                    ((*(byte *)((long)ppppppuVar26 + (long)ppppppuVar40) & 1) == 0)) &&
                   ((int)uStack_258 != -1)) {
                  pppppppuVar19 = (ulong *******)(long)(int)uStack_258;
code_r0x00010ae5f928:
                  pppppppuVar39 = pppppppuStack_240;
                  if ((pppppppuVar42 != (ulong *******)0x0) && (pppppppuVar19 < *pppppppuVar42)) {
                    unaff_x21 = (ulong *******)pppppppuVar42[1][(long)pppppppuVar19];
                    goto code_r0x00010ae5f948;
                  }
                  break;
                }
              }
              ppppppuVar40 = (ulong ******)((long)ppppppuVar40 + 1);
              pppppppuVar39 = pppppppuStack_240;
            } while (ppppppuVar40 < *pppppppuStack_248);
          }
          unaff_x21 = (ulong *******)0x0;
code_r0x00010ae5f948:
          unaff_x22 = pppppppuStack_270;
          func_0x000107c2b534(pppppppuStack_270[1]);
          pppppppuVar19 = unaff_x22;
          func_0x000107c2b534();
          param_1[0xbf] = (ulong ******)unaff_x21;
          if (unaff_x21 != (ulong *******)0x0) {
            iVar15 = 5;
            goto code_r0x00010ae5e0cc;
          }
        }
        func_0x000107c2b29c(0x10,0,0xb8,&UNK_10f6cff9c,0x339);
        param_2 = (ulong *******)0x2;
        param_3 = (ulong *******)0x28;
        FUN_10ae60390();
        pppppppuVar43 = pppppppuVar41;
      }
    }
    break;
  case 4:
    pppppppuVar19 = param_1;
    FUN_10ae6832c();
    pppppppuVar43 = pppppppuVar19;
    if ((int)pppppppuVar19 == 1) {
      ((ushort *)((long)param_1 + 0x14))[0] = 0x14;
      ((ushort *)((long)param_1 + 0x14))[1] = 0;
    }
    goto code_r0x00010ae5f4f4;
  case 5:
    pppppppuVar19 = (ulong *******)*param_1;
    param_2 = (ulong *******)&pppppppuStack_1a0;
    pppppppuVar43 = pppppppuVar19;
    (*(code *)(*pppppppuVar19)[3])();
    if ((int)pppppppuVar43 == 0) goto code_r0x00010ae5dee0;
    uStack_1f8 = CONCAT44(uStack_18c,uStack_190);
    pppppppuStack_200 = pppppppuStack_198;
    param_2 = (ulong *******)&pppppppuStack_200;
    param_3 = (ulong *******)&pppppppuStack_170;
    pppppppuVar43 = pppppppuVar19;
    FUN_10ae5965c();
    iVar15 = 0;
    if (uStack_1f8 == 0) {
      iVar15 = (int)pppppppuVar43;
    }
    if (iVar15 != 1) break;
    *(byte *)((long)param_1 + 0x643) = (byte)uStack_138;
    if ((uStack_138 & 0xff) != 0) {
      _memcpy(pbStack_208,uStack_140,uStack_138 & 0xff);
    }
    pppppppuStack_200 = (ulong *******)0x0;
    pppppppuStack_1d0 = (ulong *******)((ulong)pppppppuStack_1d0 & 0xffffffffffffff00);
    pppppppuStack_1b0 = (ulong *******)((ulong)pppppppuStack_1b0 & 0xffffffffffffff00);
    param_2 = (ulong *******)&pppppppuStack_200;
    param_3 = (ulong *******)&pppppppuStack_1d0;
    pppppppuVar43 = param_1;
    FUN_10ae64b98();
    if ((int)pppppppuVar43 == 1) {
      if (pppppppuStack_200 == (ulong *******)0x0) {
code_r0x00010ae5e864:
        param_2 = (ulong *******)0x0;
        *(uint *)(param_1 + 0xc3) =
             *(uint *)(param_1 + 0xc3) & 0xfffe0000 |
             *(uint *)(param_1 + 0xc3) & 0xffff | ((byte)pppppppuStack_1d0 & 1) << 0x10;
        if (pppppppuVar19[0xb] != (ulong ******)0x0) {
          param_2 = (ulong *******)0x0;
          func_0x000107c2b6c0();
        }
        pppppppuVar43 = param_1;
        func_0x000107c2b85c();
        if ((int)pppppppuVar43 != 0) {
          if (((*(byte *)((long)param_1 + 0x61a) & 1) == 0) &&
             ((*(byte *)((long)pppppppuVar19[0xd] + 0x11c) >> 1 & 1) != 0)) {
            ppppppuVar26 = param_1[0xbb];
            *(undefined4 *)(ppppppuVar26 + 8) = 0x20;
            func_0x000107c2b3c4((long)ppppppuVar26 + 0x44,0x20,&UNK_10e525a20);
          }
code_r0x00010ae5e8c8:
          if (pppppppuVar19[0xd][0x3c] != (ulong *****)0x0) {
            iVar15 = (int)&pppppppuStack_170;
            (*(code *)pppppppuVar19[0xd][0x3c])();
            if (iVar15 == 0) {
              func_0x000107c2b29c(0x10,0,0x85,&UNK_10f6cff9c,0x391);
              param_3 = (ulong *******)0x50;
              goto code_r0x00010ae5eae0;
            }
          }
          if (pppppppuVar19[0xb] == (ulong ******)0x0) {
            ppppppuVar40 = param_1[0xbf];
            ppppppuVar26 = param_1[0xbb];
            ppppppuVar26[0x1a] = (ulong *****)ppppppuVar40;
            uVar14 = *(uint *)(param_1 + 0xc3);
            uVar13 = uVar14 & 0xffffffc0 | uVar14 & 0x1f | (*(byte *)(param_1[1] + 0x1d) & 1) << 5;
            *(uint *)(param_1 + 0xc3) = uVar13;
            if ((uVar14 & 0x1000000) != 0 && ((ulong)param_1[1][0x1d] & 4) != 0) {
              uVar13 = uVar14 & 0xffffffdf;
            }
            *(uint *)(param_1 + 0xc3) = uVar13;
            if (((ulong)ppppppuVar40[3] & 3) == 0) {
              uVar13 = uVar13 & 0xffffffdf;
              *(uint *)(param_1 + 0xc3) = uVar13;
            }
            if ((uVar13 >> 5 & 1) == 0) {
              ppppppuVar26[0x17] = (ulong *****)0x0;
            }
          }
          uStack_1d2 = CONCAT11(uStack_1d2._1_1_,0x32);
          pppppppuVar43 = param_1;
          FUN_10ae59a0c(param_1,&uStack_1d2,&pppppppuStack_170);
          if (((ulong)pppppppuVar43 & 1) == 0) {
            param_3 = (ulong *******)(ulong)(byte)uStack_1d2;
          }
          else {
            param_2 = pppppppuVar19;
            func_0x000107c2b89c();
            param_3 = (ulong *******)param_1[0xbf];
            iVar15 = (int)param_1 + 0x198;
            func_0x000107c2b888();
            if (iVar15 != 0) {
              if (((ulong)pppppppuStack_1a0 & 1) == 0) {
                pppppppuVar43 = param_1 + 0x33;
                param_2 = pppppppuStack_188;
                param_3 = pppppppuStack_180;
                func_0x000107c2b894();
                if (((ulong)pppppppuVar43 & 1) == 0) goto code_r0x00010ae5eaac;
              }
              if (((ulong)param_1[0xc3] & 0x80020) == 0) {
                param_2 = (ulong *******)0x0;
                func_0x000107c2b6e0(param_1 + 0x33);
              }
              (*(code *)(*pppppppuVar19)[4])(pppppppuVar19);
              ((ushort *)((long)param_1 + 0x14))[0] = 6;
              ((ushort *)((long)param_1 + 0x14))[1] = 0;
              pppppppuVar43 = (ulong *******)0x1;
              goto code_r0x00010ae5eaf0;
            }
code_r0x00010ae5eaac:
            param_3 = (ulong *******)0x50;
          }
          param_2 = (ulong *******)0x2;
          FUN_10ae60390(pppppppuVar19);
        }
      }
      else {
        if ((((ulong)pppppppuStack_200[0x36] & 1) == 0) ||
           ((*(byte *)((long)param_1 + 0x61a) >> 1 & 1) != 0)) {
          pppppppuVar41 = param_1;
          FUN_10ae64ac0();
          pppppppuVar43 = pppppppuStack_200;
          if ((int)pppppppuVar41 == 0) {
            pppppppuStack_200 = (ulong *******)0x0;
            if (pppppppuVar43 == (ulong *******)0x0) goto code_r0x00010ae5e864;
code_r0x00010ae5e818:
            pppppppuStack_200 = (ulong *******)0x0;
            func_0x000107c2b874(pppppppuVar43);
            if (pppppppuStack_200 == (ulong *******)0x0) goto code_r0x00010ae5e864;
            uVar13 = *(uint *)(param_1 + 0xc3);
          }
          else {
            uVar13 = *(uint *)(param_1 + 0xc3);
            if ((uVar13 >> 0x11 & 1) != (*(byte *)(pppppppuStack_200 + 0x36) & 1))
            goto code_r0x00010ae5e818;
          }
          *(uint *)(param_1 + 0xc3) =
               uVar13 & 0xfffe0000 | uVar13 & 0xffff | ((byte)pppppppuStack_1b0 & 1) << 0x10;
          pppppppuStack_200 = (ulong *******)0x0;
          func_0x000107c2b6c0(pppppppuVar19 + 0xb);
          *(ushort *)((long)pppppppuVar19[6] + 0xd4) =
               *(ushort *)((long)pppppppuVar19[6] + 0xd4) | 0x40;
          *(uint *)(param_1 + 0xc3) = *(uint *)(param_1 + 0xc3) | 0x800000;
          goto code_r0x00010ae5e8c8;
        }
        func_0x000107c2b29c(0x10,0,0xcc,&UNK_10f6cff9c,0x36b);
        param_3 = (ulong *******)0x28;
code_r0x00010ae5eae0:
        param_2 = (ulong *******)0x2;
        FUN_10ae60390(pppppppuVar19);
      }
      pppppppuVar43 = (ulong *******)0x0;
    }
code_r0x00010ae5eaf0:
    pppppppuVar19 = pppppppuStack_200;
    pppppppuStack_200 = (ulong *******)0x0;
    if (pppppppuVar19 != (ulong *******)0x0) {
      func_0x000107c2b874();
    }
    goto code_r0x00010ae5f4f4;
  case 6:
    uVar13 = *(uint *)(param_1 + 0xc3);
    if (((uVar13 >> 0x18 & 1) != 0) && ((*(byte *)((long)param_1[0xbf] + 0x14) >> 1 & 1) == 0)) {
      uVar13 = uVar13 & 0xfeffffff;
      *(uint *)(param_1 + 0xc3) = uVar13;
    }
    ppppppuVar26 = *param_1;
    if ((ppppppuVar26[0xb] != (ulong *****)0x0) && (*(char *)(ppppppuVar26[0xb] + 0x2e) == '\0')) {
      *(uint *)(param_1 + 0xc3) = uVar13 & 0xfeffffff;
    }
    func_0x000107c2b798(ppppppuVar26[0xd],&pppppppuStack_1d0);
    *(char *)(ppppppuVar26[6] + 2) = (char)((ulong)pppppppuStack_1d0 >> 0x18);
    *(char *)((long)ppppppuVar26[6] + 0x11) = (char)((ulong)pppppppuStack_1d0 >> 0x10);
    *(char *)((long)ppppppuVar26[6] + 0x12) = (char)((ulong)pppppppuStack_1d0 >> 8);
    *(char *)((long)ppppppuVar26[6] + 0x13) = (char)pppppppuStack_1d0;
    func_0x000107c2b3c4((long)ppppppuVar26[6] + 0x14,0x1c,&UNK_10e525a20);
    lVar27 = 2;
    if (*(char *)**param_1 == '\0') {
      lVar27 = 6;
    }
    psVar28 = (short *)&UNK_10e52b190;
    if (*(char *)**param_1 == '\0') {
      psVar28 = (short *)&UNK_10e52b194;
    }
    do {
      sVar5 = *psVar28;
      bVar12 = lVar27 != 0;
      lVar27 = lVar27 + -2;
      psVar28 = psVar28 + 1;
    } while (sVar5 != 0x304 && bVar12);
    if (((sVar5 == 0x304) && (*(ushort *)((long)param_1 + 0x1c) < 0x305)) &&
       (0x303 < *(ushort *)((long)param_1 + 0x1e))) {
      ppppppuVar40 = ppppppuVar26;
      func_0x000107c2b89c();
      puVar25 = (undefined8 *)&UNK_10e52b2d8;
      if ((int)ppppppuVar40 == 0x303) {
        puVar25 = (undefined8 *)&UNK_10e52b2e0;
        if ((*(byte *)((long)param_1 + 0x61a) & 0x40) != 0) {
          puVar25 = (undefined8 *)&UNK_10e52b2e8;
        }
      }
      ppppppuVar26[6][5] = (ulong ****)*puVar25;
    }
    if (ppppppuVar26[0xb] == (ulong *****)0x0) {
      pbVar38 = (byte *)((long)param_1[0xbb] + 0x44);
      param_3 = (ulong *******)(ulong)*(uint *)(param_1[0xbb] + 8);
    }
    else {
      param_3 = (ulong *******)(ulong)*(byte *)((long)param_1 + 0x643);
      pbVar38 = pbStack_208;
    }
    pppppppuStack_168 = (ulong *******)0x0;
    pppppppuStack_170 = (ulong *******)0x0;
    pppppppuStack_158 = (ulong *******)0x0;
    pppppppuStack_160 = (ulong *******)0x0;
    ppppppuVar40 = ppppppuVar26;
    (*(code *)(*ppppppuVar26)[0xb])(ppppppuVar26,&pppppppuStack_170,&pppppppuStack_1a0,2);
    if ((int)ppppppuVar40 != 0) {
      pppppppuVar19 = (ulong *******)&pppppppuStack_1a0;
      func_0x000107c2b228(pppppppuVar19,*(undefined2 *)(ppppppuVar26 + 2));
      if ((int)pppppppuVar19 != 0) {
        pppppppuVar19 = (ulong *******)&pppppppuStack_1a0;
        func_0x000107c2b21c(pppppppuVar19,ppppppuVar26[6] + 2,0x20);
        if ((int)pppppppuVar19 != 0) {
          pppppppuVar19 = (ulong *******)&pppppppuStack_1a0;
          func_0x000107c34f3c(pppppppuVar19,&pppppppuStack_200,1);
          if ((int)pppppppuVar19 != 0) {
            pppppppuVar19 = (ulong *******)&pppppppuStack_200;
            func_0x000107c2b21c(pppppppuVar19,pbVar38);
            if ((int)pppppppuVar19 != 0) {
              pppppppuVar19 = (ulong *******)&pppppppuStack_1a0;
              func_0x000107c2b228(pppppppuVar19,*(undefined2 *)(param_1[0xbf] + 2));
              if ((int)pppppppuVar19 != 0) {
                pppppppuVar19 = (ulong *******)&pppppppuStack_1a0;
                func_0x000107c2b218(pppppppuVar19,0);
                if (((int)pppppppuVar19 != 0) &&
                   (pppppppuVar19 = param_1, func_0x00010ae5a300(param_1,&pppppppuStack_1a0),
                   (int)pppppppuVar19 != 0)) {
                  param_2 = (ulong *******)&pppppppuStack_170;
                  ppppppuVar40 = ppppppuVar26;
                  func_0x000107c2b6fc();
                  if (((ulong)ppppppuVar40 & 1) != 0) {
                    iVar15 = 7;
                    if (ppppppuVar26[0xb] != (ulong *****)0x0) {
                      iVar15 = 0x13;
                    }
                    goto code_r0x00010ae5edfc;
                  }
                }
              }
            }
          }
        }
      }
    }
    param_3 = (ulong *******)0x44;
    uVar22 = 0x40f;
    goto code_r0x00010ae5e004;
  case 7:
    ppppppuVar26 = *param_1;
    pppppppuStack_168 = (ulong *******)0x0;
    pppppppuStack_170 = (ulong *******)0x0;
    pppppppuStack_158 = (ulong *******)0x0;
    pppppppuStack_160 = (ulong *******)0x0;
    if (((ulong)param_1[0xbf][3] & 3) != 0) {
      pppppppuVar19 = param_1;
      FUN_10ae61f18();
      if (((ulong)pppppppuVar19 & 1) == 0) {
        param_3 = (ulong *******)0xae;
        uVar22 = 0x421;
      }
      else {
        pppppppuVar19 = param_1;
        FUN_10ae5d10c();
        if ((int)pppppppuVar19 == 0) goto code_r0x00010ae5e008;
        if ((*(byte *)(param_1 + 0xc3) >> 6 & 1) == 0) goto code_r0x00010ae5d570;
        ppppppuVar40 = ppppppuVar26;
        (*(code *)(*ppppppuVar26)[0xb])(ppppppuVar26,&pppppppuStack_170,&pppppppuStack_1a0,0x16);
        if ((int)ppppppuVar40 != 0) {
          pppppppuVar19 = (ulong *******)&pppppppuStack_1a0;
          func_0x000107c2b218(pppppppuVar19,1);
          if ((int)pppppppuVar19 != 0) {
            pppppppuVar19 = (ulong *******)&pppppppuStack_1a0;
            func_0x000107c34f3c(pppppppuVar19,&pppppppuStack_200,3);
            if ((int)pppppppuVar19 != 0) {
              param_3 = (ulong *******)param_1[1][4][0xd][2];
              pppppppuVar19 = (ulong *******)&pppppppuStack_200;
              func_0x000107c2b21c(pppppppuVar19,param_1[1][4][0xd][1]);
              if ((int)pppppppuVar19 != 0) {
                param_2 = (ulong *******)&pppppppuStack_170;
                ppppppuVar40 = ppppppuVar26;
                func_0x000107c2b6fc();
                if (((ulong)ppppppuVar40 & 1) != 0) goto code_r0x00010ae5d570;
              }
            }
          }
        }
        param_3 = (ulong *******)0x44;
        uVar22 = 0x434;
      }
      goto code_r0x00010ae5e004;
    }
code_r0x00010ae5d570:
    uVar13 = *(uint *)((long)param_1[0xbf] + 0x14);
    unaff_x21 = (ulong *******)(ulong)uVar13;
    uVar14 = *(uint *)(param_1[0xbf] + 3);
    unaff_x22 = (ulong *******)(ulong)uVar14;
    if (((uVar13 >> 1 & 1) != 0) ||
       (((uVar14 >> 2 & 1) != 0 && (param_1[1][7] != (ulong *****)0x0)))) {
      iVar15 = (int)&pppppppuStack_170;
      param_2 = (ulong *******)0xc0;
      func_0x000107c2b200();
      if (iVar15 != 0) {
        iVar15 = (int)&pppppppuStack_170;
        param_2 = (ulong *******)(ppppppuVar26[6] + 6);
        param_3 = (ulong *******)0x20;
        func_0x000107c2b21c();
        if (iVar15 != 0) {
          iVar15 = (int)&pppppppuStack_170;
          param_2 = (ulong *******)(ppppppuVar26[6] + 2);
          param_3 = (ulong *******)0x20;
          func_0x000107c2b21c();
          if (iVar15 != 0) {
            if ((uVar14 >> 2 & 1) == 0) {
code_r0x00010ae5ede4:
              if ((uVar13 >> 1 & 1) == 0) {
code_r0x00010ae5ede8:
                uVar30 = 0;
                param_2 = pppppppuStack_210;
                func_0x000107c2b784();
                if ((uVar30 & 1) != 0) goto code_r0x00010ae5edf8;
              }
              else {
                param_2 = (ulong *******)&pppppppuStack_1d0;
                pppppppuVar19 = param_1;
                FUN_10ae5987c();
                if (((ulong)pppppppuVar19 & 1) == 0) {
                  func_0x000107c2b29c(0x10,0,0x44,&UNK_10f6cff9c,0x459);
                  param_2 = (ulong *******)0x2;
                  param_3 = (ulong *******)0x28;
                  FUN_10ae60390(ppppppuVar26);
                }
                else {
                  pppppppuVar43 = (ulong *******)((ulong)pppppppuStack_1d0 & 0xffff);
                  *(undefined2 *)((long)param_1[0xbb] + 6) = pppppppuStack_1d0._0_2_;
                  func_0x000107c2b780(&pppppppuStack_200,pppppppuVar43);
                  ppppppuVar26 = param_1[0x31];
                  param_1[0x31] = (ulong ******)pppppppuStack_200;
                  pppppppuVar19 = pppppppuStack_200;
                  if (ppppppuVar26 != (ulong ******)0x0) {
                    (*(code *)**ppppppuVar26)(ppppppuVar26);
                    func_0x000107c2b534(ppppppuVar26);
                    pppppppuVar19 = (ulong *******)param_1[0x31];
                  }
                  if (pppppppuVar19 != (ulong *******)0x0) {
                    iVar15 = (int)&pppppppuStack_170;
                    param_2 = (ulong *******)0x3;
                    func_0x000107c2b218();
                    if (iVar15 != 0) {
                      iVar15 = (int)&pppppppuStack_170;
                      func_0x000107c2b228();
                      param_2 = pppppppuVar43;
                      if (iVar15 != 0) {
                        iVar15 = (int)&pppppppuStack_170;
                        param_2 = (ulong *******)&pppppppuStack_1a0;
                        param_3 = (ulong *******)0x1;
                        func_0x000107c34f3c();
                        if (iVar15 != 0) {
                          ppppppuVar26 = param_1[0x31];
                          param_2 = (ulong *******)&pppppppuStack_1a0;
                          (*(code *)(*ppppppuVar26)[3])();
                          if (((ulong)ppppppuVar26 & 1) != 0) goto code_r0x00010ae5ede8;
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
              pppppppuVar19 = (ulong *******)param_1[1][7];
              if (pppppppuVar19 == (ulong *******)0x0) {
                pppppppuVar19 = (ulong *******)0x0;
              }
              else {
                _strlen();
              }
              iVar15 = (int)&pppppppuStack_170;
              param_2 = (ulong *******)&pppppppuStack_1a0;
              param_3 = (ulong *******)0x2;
              func_0x000107c34f3c();
              if (iVar15 != 0) {
                param_2 = (ulong *******)param_1[1][7];
                iVar15 = (int)&pppppppuStack_1a0;
                func_0x000107c2b21c();
                param_3 = pppppppuVar19;
                if (iVar15 != 0) goto code_r0x00010ae5ede4;
              }
            }
          }
        }
      }
      goto code_r0x00010ae5e008;
    }
code_r0x00010ae5edf8:
    iVar15 = 8;
code_r0x00010ae5edfc:
    *(int *)((long)param_1 + 0x14) = iVar15;
    pppppppuVar43 = (ulong *******)0x1;
    goto code_r0x00010ae5e00c;
  case 8:
    if (param_1[0xb3] == (ulong ******)0x0) {
      iVar15 = 9;
      goto code_r0x00010ae5e0cc;
    }
    ppppppuVar40 = *param_1;
    pppppppuStack_168 = (ulong *******)0x0;
    pppppppuStack_170 = (ulong *******)0x0;
    pppppppuStack_158 = (ulong *******)0x0;
    pppppppuStack_160 = (ulong *******)0x0;
    param_2 = (ulong *******)&pppppppuStack_170;
    param_3 = (ulong *******)&pppppppuStack_1a0;
    ppppppuVar26 = ppppppuVar40;
    (*(code *)(*ppppppuVar40)[0xb])();
    if (((int)ppppppuVar26 != 0) &&
       (param_3 = (ulong *******)(param_1[0xb3] + -8), (ulong ******)0x3f < param_1[0xb3])) {
      iVar15 = (int)&pppppppuStack_1a0;
      param_2 = (ulong *******)(*pppppppuStack_210 + 8);
      func_0x000107c2b21c();
      if (iVar15 != 0) {
        if (((ulong)param_1[0xbf][3] & 3) == 0) goto code_r0x00010ae5ea70;
        if (((*param_1[1][4] == (ulong ****)0x0) && (param_1[1][4][5] == (ulong ****)0x0)) &&
           (pppppppuVar19 = param_1, func_0x00010ae6295c(), ((ulong)pppppppuVar19 & 1) == 0)) {
          param_2 = (ulong *******)0x2;
          param_3 = (ulong *******)0x50;
          FUN_10ae60390(ppppppuVar40);
        }
        else {
          pppppppuVar19 = param_1;
          FUN_10ae5ad08(param_1,&uStack_1d2);
          if (((ulong)pppppppuVar19 & 1) == 0) {
            param_3 = (ulong *******)0x28;
code_r0x00010ae5e7c0:
            param_2 = (ulong *******)0x2;
            FUN_10ae60390(ppppppuVar40);
          }
          else {
            ppppppuVar26 = ppppppuVar40;
            func_0x000107c2b89c();
            if (0x302 < (uint)ppppppuVar26) {
              pppppppuVar19 = (ulong *******)&pppppppuStack_1a0;
              func_0x000107c2b228(pppppppuVar19,uStack_1d2);
              if ((int)pppppppuVar19 == 0) {
                func_0x000107c2b29c(0x10,0,0x44,&UNK_10f6cff9c,0x497);
                param_3 = (ulong *******)0x50;
                goto code_r0x00010ae5e7c0;
              }
            }
            ppppppuVar26 = param_1[0xb9];
            if (((ppppppuVar26 == (ulong ******)0x0) || (ppppppuVar26[2] == (ulong *****)0x0)) ||
               (ppppuVar20 = ppppppuVar26[2][0xc], ppppuVar20 == (ulong ****)0x0)) {
              pppppppuVar19 = (ulong *******)0x0;
            }
            else {
              (*(code *)ppppuVar20)();
              pppppppuVar19 = (ulong *******)(long)(int)ppppppuVar26;
            }
            iVar15 = (int)&pppppppuStack_1a0;
            param_2 = (ulong *******)&pppppppuStack_200;
            param_3 = (ulong *******)0x2;
            func_0x000107c34f3c();
            if (iVar15 != 0) {
              iVar15 = (int)&pppppppuStack_200;
              param_2 = (ulong *******)&pppppppuStack_1d0;
              FUN_10ae1fa6c();
              param_3 = pppppppuVar19;
              if (iVar15 != 0) {
                param_3 = (ulong *******)&pppppppuStack_1b0;
                pppppppuVar19 = param_1;
                param_2 = pppppppuStack_1d0;
                FUN_10ae637fc();
                iVar15 = (int)pppppppuVar19;
                if (iVar15 == 0) {
                  pppppppuVar43 = (ulong *******)0x0;
                  ppppppuVar26 = (ulong ******)
                                 ((long)pppppppuStack_200[1] + (long)pppppppuStack_1b0);
                  if ((uStack_1f8 == 0) &&
                     (!CARRY8((ulong)pppppppuStack_200[1],(ulong)pppppppuStack_1b0))) {
                    if (ppppppuVar26 <= pppppppuStack_200[2]) {
                      pppppppuStack_200[1] = ppppppuVar26;
                      goto code_r0x00010ae5ea70;
                    }
                    goto code_r0x00010ae5e008;
                  }
                }
                else {
                  if (iVar15 != 1) {
                    if (iVar15 != 2) {
code_r0x00010ae5ea70:
                      *(uint *)(param_1 + 0xc3) = *(uint *)(param_1 + 0xc3) | 0x800000;
                      param_2 = (ulong *******)&pppppppuStack_170;
                      func_0x000107c2b6fc();
                      if ((int)ppppppuVar40 != 0) {
                        func_0x000107c2b534(param_1[0xb2]);
                        *pppppppuStack_210 = (ulong ******)0x0;
                        pppppppuStack_210[1] = (ulong ******)0x0;
                        pppppppuVar43 = (ulong *******)0x1;
                        ((ushort *)((long)param_1 + 0x14))[0] = 9;
                        ((ushort *)((long)param_1 + 0x14))[1] = 0;
                        goto code_r0x00010ae5e00c;
                      }
                    }
                    goto code_r0x00010ae5e008;
                  }
                  pppppppuVar43 = (ulong *******)0x9;
                }
                goto code_r0x00010ae5e00c;
              }
            }
          }
        }
      }
    }
    goto code_r0x00010ae5e008;
  case 9:
    ppppppuVar26 = *param_1;
    pppppppuStack_168 = (ulong *******)0x0;
    pppppppuStack_170 = (ulong *******)0x0;
    pppppppuStack_158 = (ulong *******)0x0;
    pppppppuStack_160 = (ulong *******)0x0;
    if ((*(byte *)(param_1 + 0xc3) >> 5 & 1) == 0) {
code_r0x00010ae5d3d8:
      param_3 = (ulong *******)&pppppppuStack_1a0;
      ppppppuVar40 = ppppppuVar26;
      (*(code *)(*ppppppuVar26)[0xb])(ppppppuVar26,&pppppppuStack_170,param_3,0xe);
      if ((int)ppppppuVar40 != 0) {
        param_2 = (ulong *******)&pppppppuStack_170;
        func_0x000107c2b6fc();
        if (((ulong)ppppppuVar26 & 1) != 0) {
          ((ushort *)((long)param_1 + 0x14))[0] = 10;
          ((ushort *)((long)param_1 + 0x14))[1] = 0;
          pppppppuVar43 = (ulong *******)0x4;
          goto code_r0x00010ae5e00c;
        }
      }
      param_3 = (ulong *******)0x44;
      uVar22 = 0x4d9;
    }
    else {
      ppppppuVar40 = ppppppuVar26;
      (*(code *)(*ppppppuVar26)[0xb])(ppppppuVar26,&pppppppuStack_170,&pppppppuStack_1a0,0xd);
      if ((int)ppppppuVar40 != 0) {
        pppppppuVar19 = (ulong *******)&pppppppuStack_1a0;
        func_0x000107c34f3c(pppppppuVar19,&pppppppuStack_200,1);
        if ((int)pppppppuVar19 != 0) {
          pppppppuVar19 = (ulong *******)&pppppppuStack_200;
          func_0x000107c2b218(pppppppuVar19,1);
          if ((int)pppppppuVar19 != 0) {
            pppppppuVar19 = (ulong *******)&pppppppuStack_200;
            func_0x000107c2b218(pppppppuVar19,0x40);
            if ((int)pppppppuVar19 != 0) {
              ppppppuVar40 = ppppppuVar26;
              func_0x000107c2b89c();
              if (0x302 < (uint)ppppppuVar40) {
                pppppppuVar19 = (ulong *******)&pppppppuStack_1a0;
                func_0x000107c34f3c(pppppppuVar19,&pppppppuStack_1d0,2);
                if (((int)pppppppuVar19 == 0) ||
                   (pppppppuVar19 = param_1, func_0x000107c2b6b0(param_1,&pppppppuStack_1d0),
                   (int)pppppppuVar19 == 0)) goto code_r0x00010ae5dd10;
              }
              pppppppuVar19 = param_1;
              FUN_10ae626b8(param_1,&pppppppuStack_1a0);
              if (((int)pppppppuVar19 != 0) &&
                 (ppppppuVar40 = ppppppuVar26, func_0x000107c2b6fc(ppppppuVar26,&pppppppuStack_170),
                 ((ulong)ppppppuVar40 & 1) != 0)) goto code_r0x00010ae5d3d8;
            }
          }
        }
      }
code_r0x00010ae5dd10:
      param_3 = (ulong *******)0x44;
      uVar22 = 0x4d1;
    }
code_r0x00010ae5e004:
    param_2 = (ulong *******)0x0;
    func_0x000107c2b29c(0x10,0,param_3,&UNK_10f6cff9c,uVar22);
code_r0x00010ae5e008:
    pppppppuVar43 = (ulong *******)0x0;
code_r0x00010ae5e00c:
    pppppppuVar19 = (ulong *******)&pppppppuStack_170;
    func_0x000107c2b204();
    goto code_r0x00010ae5f4f4;
  case 10:
    pppppppuVar41 = (ulong *******)*param_1;
    if (((*(uint *)(param_1 + 0xc3) >> 0x13 & 1) == 0) ||
       (*(int *)((long)param_1[0xbf] + 0x14) != 2)) {
      if ((*(uint *)(param_1 + 0xc3) >> 5 & 1) == 0) {
code_r0x00010ae5db94:
        iVar15 = 0xb;
        goto code_r0x00010ae5e0cc;
      }
      param_2 = (ulong *******)&pppppppuStack_170;
      pppppppuVar43 = pppppppuVar41;
      (*(code *)(*pppppppuVar41)[3])();
      if ((int)pppppppuVar43 == 0) goto code_r0x00010ae5dee0;
      param_2 = (ulong *******)&pppppppuStack_170;
      param_3 = (ulong *******)0xb;
      pppppppuVar43 = pppppppuVar41;
      func_0x000107c2b6f8();
      if ((int)pppppppuVar43 != 0) {
        if (((ulong)pppppppuStack_170 & 1) == 0) {
          pppppppuVar43 = param_1 + 0x33;
          param_2 = pppppppuStack_158;
          param_3 = pppppppuStack_150;
          func_0x000107c2b894();
          if ((int)pppppppuVar43 == 0) break;
        }
        pppppppuStack_198 = pppppppuStack_160;
        pppppppuStack_1a0 = pppppppuStack_168;
        pppppppuStack_200 = (ulong *******)CONCAT71(pppppppuStack_200._1_7_,0x32);
        uVar30 = 0;
        param_2 = (ulong *******)(param_1[0xbb] + 0x12);
        param_3 = pppppppuVar39;
        FUN_10ae61f60();
        if ((uVar30 & 1) == 0) {
          param_3 = (ulong *******)((ulong)pppppppuStack_200 & 0xff);
          param_2 = (ulong *******)0x2;
          FUN_10ae60390();
          pppppppuVar43 = pppppppuVar41;
        }
        else {
          if (pppppppuStack_198 == (ulong *******)0x0) {
            ppppppuVar26 = param_1[0xbb];
            (*(code *)pppppppuVar41[0xd][1][6])();
            if (((ulong)ppppppuVar26 & 1) != 0) {
              ppppppuVar26 = param_1[0xbb];
              if ((ppppppuVar26[0x12] == (ulong *****)0x0) ||
                 (*ppppppuVar26[0x12] == (ulong ****)0x0)) {
                param_2 = (ulong *******)0x0;
                func_0x000107c2b6e0(param_1 + 0x33);
                if ((*(byte *)(param_1[1] + 0x1d) >> 1 & 1) != 0) {
                  func_0x000107c2b29c(0x10,0,0xc0,&UNK_10f6cff9c,0x511);
                  param_2 = (ulong *******)0x2;
                  param_3 = (ulong *******)0x28;
                  FUN_10ae60390();
                  pppppppuVar43 = pppppppuVar41;
                  break;
                }
                param_1[0xbb][0x17] = (ulong *****)0x0;
              }
              else if ((*(ushort *)((long)param_1[1] + 0xe9) >> 5 & 1) != 0) {
                *(byte *)(ppppppuVar26 + 0x36) = *(byte *)(ppppppuVar26 + 0x36) | 2;
              }
              (*(code *)(*pppppppuVar41)[4])();
              pppppppuVar19 = pppppppuVar41;
              goto code_r0x00010ae5db94;
            }
          }
          func_0x000107c2b29c(0x10,0,0x89,&UNK_10f6cff9c,0x506);
          param_2 = (ulong *******)0x2;
          param_3 = (ulong *******)0x32;
          FUN_10ae60390();
          pppppppuVar43 = pppppppuVar41;
        }
      }
      break;
    }
code_r0x00010ae5da44:
    pppppppuVar43 = (ulong *******)0x7;
    goto code_r0x00010ae5f4f4;
  case 0xb:
    if ((param_1[0xbb][0x12] != (ulong *****)0x0) && (*param_1[0xbb][0x12] != (ulong ****)0x0)) {
      pppppppuVar19 = param_1;
      func_0x000107c2b704();
      pppppppuVar43 = pppppppuVar19;
      if ((int)pppppppuVar19 == 1) break;
      if ((int)pppppppuVar19 == 2) {
        pppppppuVar43 = (ulong *******)0x10;
        goto code_r0x00010ae5f4f4;
      }
    }
    iVar15 = 0xc;
    goto code_r0x00010ae5e0cc;
  case 0xc:
    pppppppuVar19 = (ulong *******)*param_1;
    param_2 = (ulong *******)&pppppppuStack_1a0;
    pppppppuVar43 = pppppppuVar19;
    (*(code *)(*pppppppuVar19)[3])();
    if ((int)pppppppuVar43 == 0) goto code_r0x00010ae5dee0;
    param_2 = (ulong *******)&pppppppuStack_1a0;
    param_3 = (ulong *******)0x10;
    pppppppuVar43 = pppppppuVar19;
    func_0x000107c2b6f8();
    if ((int)pppppppuVar43 == 0) break;
    unaff_x22 = (ulong *******)CONCAT44(uStack_18c,uStack_190);
    uVar13 = *(uint *)((long)param_1[0xbf] + 0x14);
    uVar14 = *(uint *)(param_1[0xbf] + 3);
    unaff_x21 = (ulong *******)(ulong)uVar14;
    pppppppuVar43 = pppppppuStack_198;
    if ((uVar14 >> 2 & 1) != 0) {
      pppppppuVar41 = (ulong *******)((long)unaff_x22 + -2);
      if (unaff_x22 < (ulong *******)0x2) {
code_r0x00010ae5e2f8:
        func_0x000107c2b29c(0x10,0,0x89,&UNK_10f6cff9c,0x54a);
        param_3 = (ulong *******)0x32;
      }
      else {
        pppppppuVar43 = (ulong *******)((long)pppppppuStack_198 + 2);
        pppppppuVar42 =
             (ulong *******)
             (ulong)((uint)(*(ushort *)pppppppuStack_198 >> 8) |
                    (*(ushort *)pppppppuStack_198 & 0xff00ff) << 8);
        unaff_x22 = (ulong *******)((long)pppppppuVar41 - (long)pppppppuVar42);
        if ((pppppppuVar41 < pppppppuVar42) ||
           ((pppppppuStack_170 = pppppppuVar43, pppppppuStack_168 = pppppppuVar42,
            (uVar13 >> 2 & 1) != 0 && (unaff_x22 != (ulong *******)0x0))))
        goto code_r0x00010ae5e2f8;
        if ((pppppppuVar42 < (ulong *******)0x81) &&
           ((pppppppuVar42 == (ulong *******)0x0 ||
            (pppppppuVar41 = pppppppuVar43, param_3 = pppppppuVar42, _memchr(pppppppuVar43,0),
            pppppppuVar41 == (ulong *******)0x0)))) {
          pppppppuStack_200 = (ulong *******)0x0;
          pppppppuVar41 = (ulong *******)&pppppppuStack_170;
          FUN_10ae2005c(pppppppuVar41,&pppppppuStack_200);
          if ((int)pppppppuVar41 == 0) {
            func_0x000107c2b29c(0x10,0,0x41,&UNK_10f6cff9c,0x557);
            param_2 = (ulong *******)0x2;
            param_3 = (ulong *******)0x50;
            FUN_10ae60390();
            pppppppuVar43 = pppppppuVar19;
            break;
          }
          pppppuVar17 = param_1[0xbb][0x11];
          param_1[0xbb][0x11] = (ulong *****)pppppppuStack_200;
          if (pppppuVar17 != (ulong *****)0x0) {
            func_0x000107c2b534();
          }
          pppppppuVar43 = (ulong *******)((long)pppppppuVar43 + (long)pppppppuVar42);
          goto code_r0x00010ae5d380;
        }
        func_0x000107c2b29c(0x10,0,0x88,&UNK_10f6cff9c,0x551);
        param_3 = (ulong *******)0x2f;
      }
      param_2 = (ulong *******)0x2;
      FUN_10ae60390();
      pppppppuVar43 = pppppppuVar19;
      break;
    }
code_r0x00010ae5d380:
    pppppppuStack_1b0 = (ulong *******)0x0;
    uStack_1a8 = 0;
    if ((uVar13 & 1) == 0) {
      if ((uVar13 >> 1 & 1) == 0) {
        if ((uVar13 >> 2 & 1) == 0) {
          param_3 = (ulong *******)0x28;
          uVar22 = 0x5c0;
code_r0x00010ae5d398:
          func_0x000107c2b29c(0x10,0,0x44,&UNK_10f6cff9c,uVar22);
          param_2 = (ulong *******)0x2;
          FUN_10ae60390(pppppppuVar19);
        }
        else {
code_r0x00010ae5e70c:
          if ((uVar14 >> 2 & 1) == 0) {
code_r0x00010ae5e710:
            if (((ulong)pppppppuStack_1a0 & 1) == 0) {
              iVar15 = (int)param_1 + 0x198;
              param_2 = pppppppuStack_188;
              param_3 = pppppppuStack_180;
              func_0x000107c2b894();
              if (iVar15 == 0) goto code_r0x00010ae5f784;
            }
            param_2 = (ulong *******)(param_1[0xbb] + 2);
            pppppppuVar43 = param_1;
            param_3 = pppppppuStack_1b0;
            FUN_10ae66a5c();
            ppppppuVar26 = param_1[0xbb];
            *(int *)((long)ppppppuVar26 + 0xc) = (int)pppppppuVar43;
            if ((int)pppppppuVar43 != 0) {
              *(byte *)(ppppppuVar26 + 0x36) =
                   *(byte *)(ppppppuVar26 + 0x36) & 0xfe |
                   (byte)(*(uint *)(param_1 + 0xc3) >> 0x11) & 1;
              *(uint *)(param_1 + 0xc3) = *(uint *)(param_1 + 0xc3) | 0x800000;
              (*(code *)(*pppppppuVar19)[4])(pppppppuVar19);
              ((ushort *)((long)param_1 + 0x14))[0] = 0xd;
              ((ushort *)((long)param_1 + 0x14))[1] = 0;
              pppppppuVar43 = (ulong *******)0x1;
              goto code_r0x00010ae5f788;
            }
          }
          else {
            if (param_1[1][9] == (ulong *****)0x0) {
              param_3 = (ulong *******)0x50;
              uVar22 = 0x5c9;
              goto code_r0x00010ae5d398;
            }
            param_3 = (ulong *******)&pppppppuStack_170;
            pppppppuVar43 = pppppppuVar19;
            (*(code *)param_1[1][9])(pppppppuVar19,param_1[0xbb][0x11],param_3,0x100);
            uVar14 = (uint)pppppppuVar43;
            if (uVar14 < 0x101) {
              if (uVar14 != 0) {
                if ((uVar13 >> 2 & 1) != 0) {
                  param_2 = (ulong *******)((ulong)pppppppuVar43 & 0xffffffff);
                  iVar15 = (int)&pppppppuStack_1b0;
                  func_0x000107c2b684();
                  if (iVar15 == 0) goto code_r0x00010ae5f784;
                  if (uStack_1a8 != 0) {
                    _bzero(pppppppuStack_1b0);
                  }
                }
                uStack_1f8 = 0;
                pppppppuStack_200 = (ulong *******)0x0;
                uStack_1e8 = 0;
                uStack_1f0 = 0;
                pppppppuVar41 = (ulong *******)&pppppppuStack_200;
                func_0x000107c2b200(pppppppuVar41,uStack_1a8 + (uVar14 + 4));
                if ((int)pppppppuVar41 != 0) {
                  pppppppuVar41 = (ulong *******)&pppppppuStack_200;
                  func_0x000107c34f3c(pppppppuVar41,&pppppppuStack_1d0,2);
                  if ((int)pppppppuVar41 != 0) {
                    pppppppuVar41 = (ulong *******)&pppppppuStack_1d0;
                    func_0x000107c2b21c(pppppppuVar41,pppppppuStack_1b0,uStack_1a8);
                    if ((int)pppppppuVar41 != 0) {
                      pppppppuVar41 = (ulong *******)&pppppppuStack_200;
                      func_0x000107c34f3c(pppppppuVar41,&pppppppuStack_1d0,2);
                      if ((int)pppppppuVar41 != 0) {
                        pppppppuVar41 = (ulong *******)&pppppppuStack_1d0;
                        func_0x000107c2b21c(pppppppuVar41,&pppppppuStack_170,
                                            (ulong)pppppppuVar43 & 0xffffffff);
                        if ((int)pppppppuVar41 != 0) {
                          pppppppuVar43 = (ulong *******)&pppppppuStack_200;
                          func_0x000107c2b784(pppppppuVar43,&pppppppuStack_1b0);
                          if (((ulong)pppppppuVar43 & 1) != 0) {
                            func_0x000107c2b204(&pppppppuStack_200);
                            goto code_r0x00010ae5e710;
                          }
                        }
                      }
                    }
                  }
                }
                param_2 = (ulong *******)0x0;
                param_3 = (ulong *******)0x41;
                func_0x000107c2b29c(0x10,0,0x41,&UNK_10f6cff9c,0x5f0);
                func_0x000107c2b204(&pppppppuStack_200);
                goto code_r0x00010ae5f784;
              }
              func_0x000107c2b29c(0x10,0,0xc3,&UNK_10f6cff9c,0x5d8);
              param_3 = (ulong *******)0x73;
            }
            else {
              func_0x000107c2b29c(0x10,0,0x44,&UNK_10f6cff9c,0x5d3);
              param_3 = (ulong *******)0x50;
            }
            param_2 = (ulong *******)0x2;
            FUN_10ae60390(pppppppuVar19);
          }
        }
      }
      else if ((unaff_x22 == (ulong *******)0x0) ||
              ((byte *)((long)unaff_x22 + -1) != (byte *)(ulong)*(byte *)pppppppuVar43)) {
        func_0x000107c2b29c(0x10,0,0x89,&UNK_10f6cff9c,0x5b0);
        param_2 = (ulong *******)0x2;
        param_3 = (ulong *******)0x32;
        FUN_10ae60390(pppppppuVar19);
      }
      else {
        pppppppuStack_170 = (ulong *******)CONCAT71(pppppppuStack_170._1_7_,0x32);
        ppppppuVar26 = param_1[0x31];
        (*(code *)(*ppppppuVar26)[5])
                  (ppppppuVar26,&pppppppuStack_1b0,&pppppppuStack_170,
                   (byte *)((long)pppppppuVar43 + 1));
        if (((ulong)ppppppuVar26 & 1) != 0) {
          ppppppuVar26 = param_1[0x31];
          param_1[0x31] = (ulong ******)0x0;
          if (ppppppuVar26 != (ulong ******)0x0) {
            (*(code *)**ppppppuVar26)(ppppppuVar26);
            func_0x000107c2b534(ppppppuVar26);
          }
          pppppppuVar43 = (ulong *******)param_1[0x32];
          param_1[0x32] = (ulong ******)0x0;
          if (pppppppuVar43 != (ulong *******)0x0) {
            (*(code *)**pppppppuVar43)(pppppppuVar43);
code_r0x00010ae5e708:
            func_0x000107c2b534(pppppppuVar43);
          }
          goto code_r0x00010ae5e70c;
        }
        param_3 = (ulong *******)((ulong)pppppppuStack_170 & 0xff);
        param_2 = (ulong *******)0x2;
        FUN_10ae60390(pppppppuVar19);
      }
code_r0x00010ae5f784:
      pppppppuVar43 = (ulong *******)0x0;
    }
    else {
      if ((unaff_x22 < (ulong *******)0x2) ||
         ((ushort *)((long)unaff_x22 + -2) !=
          (ushort *)
          (ulong)((uint)(*(ushort *)pppppppuVar43 >> 8) | (*(ushort *)pppppppuVar43 & 0xff00ff) << 8
                 ))) {
        func_0x000107c2b29c(0x10,0,0x89,&UNK_10f6cff9c,0x565);
        param_2 = (ulong *******)0x2;
        param_3 = (ulong *******)0x32;
        FUN_10ae60390(pppppppuVar19);
        goto code_r0x00010ae5f784;
      }
      pppppppuStack_170 = (ulong *******)0x0;
      pppppppuStack_168 = (ulong *******)0x0;
      ppppppuVar26 = param_1[0xb9];
      if (((ppppppuVar26 == (ulong ******)0x0) || (ppppppuVar26[2] == (ulong *****)0x0)) ||
         (ppppuVar20 = ppppppuVar26[2][0xc], ppppuVar20 == (ulong ****)0x0)) {
        param_2 = (ulong *******)0x0;
      }
      else {
        (*(code *)ppppuVar20)();
        param_2 = (ulong *******)(long)(int)ppppppuVar26;
      }
      uVar30 = 0;
      func_0x000107c2b684();
      if ((uVar30 & 1) == 0) {
        func_0x000107c2b534(pppppppuStack_170);
        goto code_r0x00010ae5f784;
      }
      param_3 = (ulong *******)&pppppppuStack_200;
      pppppppuVar43 = param_1;
      param_2 = pppppppuStack_170;
      FUN_10ae63990();
      if ((int)pppppppuVar43 == 1) {
        pppppppuVar43 = (ulong *******)0x9;
      }
      else {
        if ((int)pppppppuVar43 != 2) {
          if (pppppppuStack_200 == pppppppuStack_168) {
            iVar15 = (int)&pppppppuStack_1b0;
            param_2 = (ulong *******)0x30;
            func_0x000107c2b684();
            if (iVar15 == 0) goto code_r0x00010ae5f748;
            func_0x000107c2b3c4(pppppppuStack_1b0,uStack_1a8,&UNK_10e525a20);
            if ((ulong *******)(uStack_1a8 + 0xb) <= pppppppuStack_200) {
              lVar27 = (long)pppppppuStack_200 - uStack_1a8;
              uVar30 = ((ulong)*(byte *)((long)pppppppuStack_170 + 1) ^ 2) - 1 &
                       (ulong)*(byte *)pppppppuStack_170 - 1;
              uVar29 = (long)uVar30 >> 0x3f;
              bVar24 = (byte)((long)uVar30 >> 0x3f);
              if (2 < lVar27 - 1U) {
                lVar34 = lVar27 + -3;
                puVar36 = (ushort *)((long)pppppppuStack_170 + 2);
                do {
                  uVar16 = 0;
                  if ((byte)*puVar36 != 0) {
                    uVar16 = (uint)uVar29;
                  }
                  bVar24 = (byte)uVar16;
                  uVar29 = (ulong)uVar16;
                  lVar34 = lVar34 + -1;
                  puVar36 = (ushort *)((long)puVar36 + 1);
                } while (lVar34 != 0);
              }
              pppppppuVar43 = pppppppuStack_170;
              if (uStack_1a8 != 0) {
                uVar30 = 0;
                bVar24 = bVar24 & (char)((byte)((ulong)((uint)*(byte *)((long)pppppppuStack_170 +
                                                                       lVar27) ^
                                                       (uint)(*(ushort *)((long)param_1 + 0x61c) >>
                                                             8)) - 1 >> 0x38) &
                                        (byte)((ulong)*(byte *)((long)pppppppuStack_170 +
                                                               (lVar27 - 1U)) - 1 >> 0x38) &
                                        (byte)((ulong)(*(ushort *)((long)param_1 + 0x61c) & 0xff ^
                                                      (uint)((byte *)((long)pppppppuStack_170 +
                                                                     lVar27))[1]) - 1 >> 0x38)) >> 7
                ;
                do {
                  *(byte *)((long)pppppppuStack_1b0 + uVar30) =
                       ~bVar24 & *(byte *)((long)pppppppuStack_1b0 + uVar30) |
                       bVar24 & *(byte *)((long)pppppppuStack_170 + uVar30 + lVar27);
                  uVar30 = uVar30 + 1;
                } while (uVar30 < uStack_1a8);
              }
              goto code_r0x00010ae5e708;
            }
            uVar22 = 0x590;
          }
          else {
            uVar22 = 0x57f;
          }
          func_0x000107c2b29c(0x10,0,0x8a,&UNK_10f6cff9c,uVar22);
          param_2 = (ulong *******)0x2;
          param_3 = (ulong *******)0x33;
          FUN_10ae60390(pppppppuVar19);
        }
code_r0x00010ae5f748:
        pppppppuVar43 = (ulong *******)0x0;
      }
      func_0x000107c2b534(pppppppuStack_170);
    }
code_r0x00010ae5f788:
    pppppppuVar19 = pppppppuStack_1b0;
    func_0x000107c2b534();
    goto code_r0x00010ae5f4f4;
  case 0xd:
    if (param_1[0xba] == (ulong ******)0x0) {
      pppppppuVar19 = param_1 + 0x33;
      param_2 = (ulong *******)0x0;
      func_0x000107c2b6e0();
code_r0x00010ae5ddf8:
      iVar15 = 0xe;
      goto code_r0x00010ae5e0cc;
    }
    pppppppuVar19 = (ulong *******)*param_1;
    param_2 = (ulong *******)&pppppppuStack_170;
    pppppppuVar43 = pppppppuVar19;
    (*(code *)(*pppppppuVar19)[3])();
    if ((int)pppppppuVar43 == 0) goto code_r0x00010ae5dee0;
    param_2 = (ulong *******)&pppppppuStack_170;
    param_3 = (ulong *******)0xf;
    pppppppuVar43 = pppppppuVar19;
    func_0x000107c2b6f8();
    if ((int)pppppppuVar43 != 0) {
      pppppppuStack_1a0 = (ulong *******)(*param_1[0xbb][0x12][1])[1];
      pppppppuStack_198 = (ulong *******)(*param_1[0xbb][0x12][1])[2];
      pppppppuVar43 = (ulong *******)&pppppppuStack_1a0;
      param_2 = (ulong *******)0x0;
      func_0x000107c2b74c();
      pppppppuVar42 = pppppppuStack_160;
      pppppppuVar41 = pppppppuStack_168;
      if ((int)pppppppuVar43 != 0) {
        pppppppuVar43 = pppppppuVar19;
        func_0x000107c2b89c();
        unaff_x22 = pppppppuVar42;
        unaff_x21 = pppppppuVar41;
        if ((uint)pppppppuVar43 < 0x303) {
          if (*(int *)((long)*pppppppuVar39 + 4) == 0x198) {
            uVar13 = 0x203;
          }
          else {
            if (*(int *)((long)*pppppppuVar39 + 4) != 6) {
              func_0x000107c2b29c(0x10,0,0xc1,&UNK_10f6cff9c,0x637);
              param_2 = (ulong *******)0x2;
              param_3 = (ulong *******)0x2b;
              FUN_10ae60390();
              pppppppuVar43 = pppppppuVar19;
              break;
            }
            uVar13 = 0xff01;
          }
code_r0x00010ae5eeb4:
          unaff_x22 = pppppppuVar42;
          unaff_x21 = pppppppuVar41;
          if ((pppppppuVar42 < (ulong *******)0x2) ||
             (param_3 = (ulong *******)
                        (ulong)((uint)(*(ushort *)pppppppuVar41 >> 8) |
                               (*(ushort *)pppppppuVar41 & 0xff00ff) << 8),
             (ulong *******)((long)pppppppuVar42 + -2) != param_3)) {
            func_0x000107c2b29c(0x10,0,0x89,&UNK_10f6cff9c,0x63f);
            param_2 = (ulong *******)0x2;
            param_3 = (ulong *******)0x32;
            FUN_10ae60390();
            pppppppuVar43 = pppppppuVar19;
          }
          else {
            pppppppuVar43 = pppppppuVar19;
            func_0x000107c2b838(pppppppuVar19,(ushort *)((long)pppppppuVar41 + 2),param_3,uVar13,
                                *pppppppuVar39,param_1[0x33][1],*param_1[0x33]);
            if (((ulong)pppppppuVar43 & 1) != 0) {
              param_2 = (ulong *******)0x0;
              func_0x000107c2b6e0(param_1 + 0x33);
              if (((ulong)pppppppuStack_170 & 1) == 0) {
                pppppppuVar43 = param_1 + 0x33;
                param_2 = pppppppuStack_158;
                param_3 = pppppppuStack_150;
                func_0x000107c2b894();
                if ((int)pppppppuVar43 == 0) break;
              }
              (*(code *)(*pppppppuVar19)[4])();
              goto code_r0x00010ae5ddf8;
            }
            func_0x000107c2b29c(0x10,0,0x72,&UNK_10f6cff9c,0x646);
            param_2 = (ulong *******)0x2;
            param_3 = (ulong *******)0x33;
            FUN_10ae60390();
            pppppppuVar43 = pppppppuVar19;
          }
        }
        else if (pppppppuVar42 < (ulong *******)0x2) {
          func_0x000107c2b29c(0x10,0,0x89,&UNK_10f6cff9c,0x62b);
          param_2 = (ulong *******)0x2;
          param_3 = (ulong *******)0x32;
          FUN_10ae60390();
          pppppppuVar43 = pppppppuVar19;
        }
        else {
          uVar6 = *(ushort *)pppppppuVar41;
          pppppppuStack_200 = (ulong *******)CONCAT71(pppppppuStack_200._1_7_,0x32);
          pppppppuVar43 = param_1;
          func_0x000107c2b6b4(param_1,&pppppppuStack_200,
                              (uint)(uVar6 >> 8) | (uVar6 & 0xff00ff) << 8);
          if ((int)pppppppuVar43 != 0) {
            uVar13 = (uint)(uVar6 >> 8) | (uVar6 & 0xff00ff) << 8;
            pppppppuVar42 = (ulong *******)((long)pppppppuVar42 + -2);
            *(short *)(param_1[0xbb] + 1) = (short)uVar13;
            pppppppuVar41 = (ulong *******)((long)pppppppuVar41 + 2);
            goto code_r0x00010ae5eeb4;
          }
          param_3 = (ulong *******)((ulong)pppppppuStack_200 & 0xff);
          param_2 = (ulong *******)0x2;
          FUN_10ae60390();
          pppppppuVar43 = pppppppuVar19;
          unaff_x21 = (ulong *******)((long)pppppppuVar41 + 2);
        }
      }
    }
    break;
  case 0xe:
    if (((*(byte *)((long)param_1 + 0x61a) >> 3 & 1) != 0) && ((*param_1)[0xb] != (ulong *****)0x0))
    goto code_r0x00010ae5da44;
    pppppppuVar43 = (ulong *******)0xf;
code_r0x00010ae5d2e4:
    *(int *)((long)param_1 + 0x14) = (int)pppppppuVar43;
    goto code_r0x00010ae5f4f4;
  case 0xf:
    pppppppuVar19 = (ulong *******)*param_1;
    param_3 = param_1 + 0xc0;
    param_2 = (ulong *******)0x0;
    FUN_10ae66728();
    pppppppuVar43 = pppppppuVar19;
    if ((int)pppppppuVar19 != 0) {
      iVar15 = 0x10;
      goto code_r0x00010ae5e0cc;
    }
    break;
  case 0x10:
    if (-1 < (char)*(byte *)((long)param_1 + 0x619)) {
code_r0x00010ae5d2c4:
      iVar15 = 0x11;
      goto code_r0x00010ae5e0cc;
    }
    pppppppuVar19 = (ulong *******)*param_1;
    param_2 = (ulong *******)&pppppppuStack_170;
    pppppppuVar43 = pppppppuVar19;
    (*(code *)(*pppppppuVar19)[3])();
    if ((int)pppppppuVar43 == 0) goto code_r0x00010ae5dee0;
    param_2 = (ulong *******)&pppppppuStack_170;
    param_3 = (ulong *******)0x43;
    pppppppuVar43 = pppppppuVar19;
    func_0x000107c2b6f8();
    if ((int)pppppppuVar43 != 0) {
      if (((ulong)pppppppuStack_170 & 1) == 0) {
        pppppppuVar43 = param_1 + 0x33;
        param_2 = pppppppuStack_158;
        param_3 = pppppppuStack_150;
        func_0x000107c2b894();
        if ((int)pppppppuVar43 == 0) break;
      }
      if (pppppppuStack_160 != (ulong *******)0x0) {
        pppppppuVar41 = (ulong *******)((long)pppppppuStack_168 + 1);
        bVar24 = *(byte *)pppppppuStack_168;
        pppppppuVar42 = (ulong *******)(ulong)bVar24;
        if ((pppppppuVar42 < (ulong *******)((long)pppppppuStack_160 + -1)) &&
           ((byte *)((long)pppppppuStack_160 + -1 + ~(ulong)pppppppuVar42) ==
            (byte *)(ulong)*(byte *)((long)pppppppuVar41 + (long)pppppppuVar42))) {
          unaff_x21 = (ulong *******)pppppppuVar19[6];
          pppppppuVar43 = unaff_x21 + 0x3a;
          param_2 = pppppppuVar42;
          func_0x000107c2b684();
          uVar14 = (uint)pppppppuVar43;
          uVar13 = uVar14 ^ 1;
          if (bVar24 == 0) {
            uVar13 = 1;
          }
          if ((uVar13 & 1) == 0) {
            pppppppuVar43 = (ulong *******)unaff_x21[0x3a];
            _memcpy();
            param_2 = pppppppuVar41;
            param_3 = pppppppuVar42;
          }
          if (uVar14 != 0) {
            (*(code *)(*pppppppuVar19)[4])();
            goto code_r0x00010ae5d2c4;
          }
          break;
        }
      }
      func_0x000107c2b29c(0x10,0,0x89,&UNK_10f6cff9c,0x67e);
      param_2 = (ulong *******)0x2;
      param_3 = (ulong *******)0x32;
      FUN_10ae60390();
      pppppppuVar43 = pppppppuVar19;
    }
    break;
  case 0x11:
    if ((*(byte *)((long)param_1 + 0x61b) & 1) == 0) {
code_r0x00010ae5d68c:
      iVar15 = 0x12;
      goto code_r0x00010ae5e0cc;
    }
    pppppppuVar19 = (ulong *******)*param_1;
    param_2 = (ulong *******)&pppppppuStack_170;
    pppppppuVar43 = pppppppuVar19;
    (*(code *)(*pppppppuVar19)[3])();
    if ((int)pppppppuVar43 == 0) goto code_r0x00010ae5dee0;
    param_2 = (ulong *******)&pppppppuStack_170;
    param_3 = (ulong *******)0xcb;
    pppppppuVar43 = pppppppuVar19;
    func_0x000107c2b6f8();
    if ((int)pppppppuVar43 != 0) {
      param_2 = (ulong *******)&pppppppuStack_170;
      pppppppuVar43 = param_1;
      FUN_10ae5aebc();
      if ((int)pppppppuVar43 != 0) {
        if (((ulong)pppppppuStack_170 & 1) == 0) {
          pppppppuVar43 = param_1 + 0x33;
          param_2 = pppppppuStack_158;
          param_3 = pppppppuStack_150;
          func_0x000107c2b894();
          if ((int)pppppppuVar43 == 0) break;
        }
        (*(code *)(*pppppppuVar19)[4])();
        goto code_r0x00010ae5d68c;
      }
    }
    break;
  case 0x12:
    unaff_x21 = (ulong *******)*param_1;
    pppppppuVar19 = param_1;
    FUN_10ae5cd40();
    pppppppuVar43 = pppppppuVar19;
    if ((int)pppppppuVar19 != 1) goto code_r0x00010ae5f4f4;
    if (unaff_x21[0xb] != (ulong ******)0x0) {
      iVar15 = 0x14;
      goto code_r0x00010ae5e0cc;
    }
    ((ushort *)((long)param_1 + 0x14))[0] = 0x13;
    ((ushort *)((long)param_1 + 0x14))[1] = 0;
    if (((*(ushort *)((long)unaff_x21[6] + 0xd4) >> 9 & 1) != 0) &&
       (pppppppuVar43 = param_1, FUN_10ae5b5b8(), pppppppuVar19 = pppppppuVar43,
       (int)pppppppuVar43 == 0)) break;
    goto code_r0x00010ae5e0d0;
  case 0x13:
    pppppppuVar41 = (ulong *******)*param_1;
    if ((*(byte *)((long)param_1 + 0x61a) & 1) == 0) {
code_r0x00010ae5db38:
      pppppppuVar43 = pppppppuVar41;
      (*(code *)(*pppppppuVar41)[0xe])();
      if ((int)pppppppuVar43 != 0) {
        pppppppuVar43 = (ulong *******)*param_1;
        param_3 = param_1 + 0xc0;
        param_2 = (ulong *******)0x1;
        FUN_10ae66728();
        if (((int)pppppppuVar43 != 0) &&
           (pppppppuVar19 = param_1, FUN_10ae5cf5c(), pppppppuVar43 = pppppppuVar19,
           (int)pppppppuVar19 != 0)) {
          if (pppppppuVar41[0xb] == (ulong ******)0x0) {
            iVar15 = 0x14;
          }
          else {
            iVar15 = 0xe;
          }
          *(int *)((long)param_1 + 0x14) = iVar15;
          pppppppuVar43 = (ulong *******)0x4;
          goto code_r0x00010ae5f4f4;
        }
      }
    }
    else {
      pppppppuStack_1d0 = (ulong *******)0x0;
      pppppppuVar19 = (ulong *******)pppppppuVar41[0xb];
      if (pppppppuVar19 == (ulong *******)0x0) {
        func_0x000107c2b850(pppppppuVar41,param_1[0xbb]);
        pppppppuVar42 = (ulong *******)0x0;
        param_3 = (ulong *******)param_1[0xbb];
      }
      else {
        param_2 = (ulong *******)0x2;
        func_0x000107c2b84c(&pppppppuStack_170);
        pppppppuVar42 = pppppppuStack_170;
        pppppppuStack_1d0 = pppppppuStack_170;
        pppppppuVar43 = (ulong *******)0x0;
        if (pppppppuStack_170 == (ulong *******)0x0) goto code_r0x00010ae5f4f4;
        func_0x000107c2b850(pppppppuVar41,pppppppuStack_170);
        param_3 = pppppppuVar42;
      }
      pppppppuStack_168 = (ulong *******)0x0;
      pppppppuStack_170 = (ulong *******)0x0;
      pppppppuStack_158 = (ulong *******)0x0;
      pppppppuStack_160 = (ulong *******)0x0;
      param_2 = (ulong *******)&pppppppuStack_170;
      pppppppuVar19 = (ulong *******)&pppppppuStack_1a0;
      pppppppuVar43 = pppppppuVar41;
      (*(code *)(*pppppppuVar41)[0xb])();
      if ((int)pppppppuVar43 != 0) {
        param_2 = (ulong *******)(ulong)*(uint *)(param_3 + 0x18);
        iVar15 = (int)&pppppppuStack_1a0;
        func_0x00010ae1fafc();
        if (iVar15 != 0) {
          iVar15 = (int)&pppppppuStack_1a0;
          param_2 = (ulong *******)&pppppppuStack_200;
          pppppppuVar19 = (ulong *******)0x2;
          func_0x000107c34f3c();
          if (iVar15 != 0) {
            param_2 = (ulong *******)&pppppppuStack_200;
            pppppppuVar43 = param_1;
            FUN_10ae645f4();
            pppppppuVar19 = param_3;
            if ((int)pppppppuVar43 != 0) {
              param_2 = (ulong *******)&pppppppuStack_170;
              pppppppuVar19 = pppppppuVar41;
              func_0x000107c2b6fc();
              pppppppuVar43 = (ulong *******)&pppppppuStack_170;
              func_0x000107c2b204();
              if (pppppppuVar42 != (ulong *******)0x0) {
                func_0x000107c2b874();
                pppppppuVar43 = pppppppuVar42;
              }
              if (((ulong)pppppppuVar19 & 1) == 0) break;
              goto code_r0x00010ae5db38;
            }
          }
        }
      }
      param_3 = pppppppuVar19;
      pppppppuVar43 = (ulong *******)&pppppppuStack_170;
      func_0x000107c2b204();
      if (pppppppuVar42 != (ulong *******)0x0) {
        func_0x000107c2b874();
        pppppppuVar43 = pppppppuVar42;
      }
    }
    break;
  case 0x14:
    if ((*(byte *)((long)param_1 + 0x61a) >> 3 & 1) != 0) goto code_r0x00010ae5da44;
    pppppppuVar43 = (ulong *******)*param_1;
    (*(code *)(*pppppppuVar43)[0x10])(pppppppuVar43);
    param_2 = (ulong *******)param_1[0xbb];
    if (param_2 == (ulong *******)0x0) {
code_r0x00010ae5e05c:
      param_2 = (ulong *******)pppppppuVar43[0xb];
      if (param_2 != (ulong *******)0x0) {
        iVar15 = *(int *)param_2;
        do {
          if (iVar15 == -1) break;
          iVar2 = *(int *)param_2;
          if (iVar2 == iVar15) {
            cVar8 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(param_2,0x10);
            if (bVar12) {
              *(int *)param_2 = iVar15 + 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
            bVar12 = cVar8 == '\0';
          }
          else {
            bVar12 = false;
            ClearExclusiveLocal();
          }
          iVar15 = iVar2;
        } while (!bVar12);
      }
      pppppppuVar19 = (ulong *******)(pppppppuVar43[6] + 0x39);
      func_0x000107c2b6c0();
      *(uint *)(param_1 + 0xc3) = *(uint *)(param_1 + 0xc3) | 8;
      *(ushort *)((long)pppppppuVar43[6] + 0xd4) = *(ushort *)((long)pppppppuVar43[6] + 0xd4) | 0x20
      ;
    }
    else {
      if ((*(ushort *)((long)param_1[1] + 0xe9) >> 5 & 1) != 0) {
        func_0x000107c2b718(param_2 + 0x12,0);
        (*(code *)pppppppuVar43[0xd][1][8])(param_1[0xbb]);
        param_2 = (ulong *******)param_1[0xbb];
        if (param_2 == (ulong *******)0x0) goto code_r0x00010ae5e05c;
      }
      ppppppuVar26 = pppppppuVar43[6];
      param_1[0xbb] = (ulong ******)0x0;
      func_0x000107c2b6c0(ppppppuVar26 + 0x39);
      *(byte *)(pppppppuVar43[6][0x39] + 0x36) = *(byte *)(pppppppuVar43[6][0x39] + 0x36) & 0xfb;
      *(uint *)(param_1 + 0xc3) = *(uint *)(param_1 + 0xc3) | 8;
      *(ushort *)((long)pppppppuVar43[6] + 0xd4) = *(ushort *)((long)pppppppuVar43[6] + 0xd4) | 0x20
      ;
      func_0x000107c2b868();
      pppppppuVar19 = pppppppuVar43;
    }
    iVar15 = 0x15;
    goto code_r0x00010ae5e0cc;
  case 0x15:
    pppppppuVar19 = (ulong *******)*param_1;
    ppppppuVar26 = pppppppuVar19[0xc];
    if ((ppppppuVar26 != (ulong ******)0x0) ||
       (ppppppuVar26 = (ulong ******)pppppppuVar19[0xd][0x30], ppppppuVar26 != (ulong ******)0x0)) {
      param_2 = (ulong *******)0x20;
      param_3 = (ulong *******)0x1;
      (*(code *)ppppppuVar26)();
    }
    pppppppuVar43 = (ulong *******)0x1;
    goto LAB_10ae5fae0;
  }
  goto LAB_10ae5f4f0;
code_r0x00010ae5e57c:
  do {
    bVar9 = bVar24;
    bVar10 = bVar11;
    if ((uVar29 < 2) || (uVar6 = *puVar36 >> 8 | *puVar36 << 8, uVar6 != *(ushort *)(pbVar38 + -2)))
    {
      puVar33 = puVar32;
      uVar21 = uVar35;
      if ((*pbVar38 & 1) != 0) goto code_r0x00010ae5eb08;
    }
    else {
      if ((uVar29 & 0xfffffffffffffffe) == 2) goto code_r0x00010ae5eb08;
      uVar21 = (ulong)((uint)(puVar36[1] >> 8) | (puVar36[1] & 0xff00ff) << 8);
      uVar37 = uVar29 - 4;
      uVar29 = uVar37 - uVar21;
      if (uVar37 < uVar21) goto code_r0x00010ae5eb08;
      puVar33 = puVar36 + 2;
      puVar36 = (ushort *)((long)puVar33 + uVar21);
      if (uVar6 < 0xd) {
        if (uVar6 != 10) {
          puVar33 = puStack_230;
          uVar21 = uStack_228;
        }
        if (uVar6 != 5) {
          puStack_230 = puVar33;
          uStack_228 = uVar21;
        }
        puVar33 = puVar32;
        uVar21 = uVar35;
        bVar9 = 1;
        if (uVar6 != 5) {
          bVar9 = bVar24;
        }
      }
      else if (uVar6 != 0xd) {
        if (uVar6 != 0x32) {
          uVar21 = uVar30;
          puVar33 = puVar31;
        }
        if (uVar6 != 0x11) {
          uVar30 = uVar21;
          puVar31 = puVar33;
        }
        puVar33 = puVar32;
        uVar21 = uVar35;
        bVar10 = 1;
        if (uVar6 != 0x11) {
          bVar10 = bVar11;
        }
      }
    }
    pbVar38 = pbVar38 + 4;
    lVar27 = lVar27 + -4;
    puVar32 = puVar33;
    uVar35 = uVar21;
    bVar24 = bVar9;
    bVar11 = bVar10;
  } while (lVar27 != 0);
  if (uVar29 == 0) {
    do {
      if (uStack_228 == 0) {
        if (uVar21 == uVar30) goto joined_r0x00010ae5f644;
        goto code_r0x00010ae5f670;
      }
      if (uStack_228 == 1) break;
      puVar36 = puStack_230 + 1;
      uVar6 = *puStack_230;
      uStack_228 = uStack_228 - 2;
      puStack_230 = puVar36;
    } while ((ushort)(uVar6 >> 8 | uVar6 << 8) != 0x1d);
  }
  goto code_r0x00010ae5eb08;
  while( true ) {
    uVar21 = uVar21 - 1;
    cVar8 = *(char *)puVar33;
    cVar4 = *(char *)puVar31;
    puVar31 = (ushort *)((long)puVar31 + 1);
    puVar33 = (ushort *)((long)puVar33 + 1);
    if (cVar8 != cVar4) break;
joined_r0x00010ae5f644:
    if (uVar21 == 0) {
      if (!(bool)(bVar10 ^ bVar9)) {
        uStack_228 = 0;
        *(uint *)(param_1 + 0xc3) = *(uint *)(param_1 + 0xc3) | 0x400000;
        goto code_r0x00010ae5eb08;
      }
      break;
    }
  }
code_r0x00010ae5f670:
  uStack_228 = 0;
code_r0x00010ae5eb08:
  pppppppuStack_1b0 = (ulong *******)CONCAT71(pppppppuStack_1b0._1_7_,0x32);
  ppppppuVar26 = *param_1;
  pppppppuVar19 = (ulong *******)&pppppppuStack_170;
  FUN_10ae59824(pppppppuVar19,&pppppppuStack_200,0x2b);
  if ((int)pppppppuVar19 == 0) {
    uVar30 = 2;
    if ((ushort)pppppppuStack_158 < 0x301) {
      uVar30 = 0;
    }
    uVar29 = 4;
    if ((ushort)pppppppuStack_158 != 0x302) {
      uVar29 = uVar30;
    }
    puVar1 = &UNK_10e52ad84;
    uStack_1c8 = 6;
    if ((ushort)pppppppuStack_158 < 0x303) {
      uStack_1c8 = uVar29;
    }
    uVar30 = 2;
    if (0xfe < (ushort)pppppppuStack_158 >> 8) {
      uVar30 = 0;
    }
    uVar29 = 4;
    if (0xfefd < (ushort)pppppppuStack_158) {
      uVar29 = uVar30;
    }
    if (*(char *)*ppppppuVar26 != '\0') {
      puVar1 = &UNK_10e52ad88;
      uStack_1c8 = uVar29;
    }
    pppppppuStack_1d0 = (ulong *******)(puVar1 + -uStack_1c8);
code_r0x00010ae5ebec:
    pppppppuVar19 = param_1;
    FUN_10ae65970(param_1,&pppppppuStack_1b0,ppppppuVar26 + 2,&pppppppuStack_1d0);
    if (((ulong)pppppppuVar19 & 1) == 0) {
      param_3 = (ulong *******)((ulong)pppppppuStack_1b0 & 0xff);
      goto code_r0x00010ae5ecbc;
    }
    *(ushort *)((long)ppppppuVar26[6] + 0xd4) = *(ushort *)((long)ppppppuVar26[6] + 0xd4) | 2;
    pppppppuVar19 = pppppppuStack_130;
    uVar30 = uStack_128;
    if (*ppppppuVar26[6][0x21] == (ulong ***)0x0) {
      *(undefined2 *)((long)ppppppuVar26[6][0x21] + 0x26e) = *(undefined2 *)(ppppppuVar26 + 2);
    }
    do {
      if (uVar30 < 2) goto code_r0x00010ae5eccc;
      uVar6 = *(ushort *)pppppppuVar19;
      pppppppuVar19 = (ulong *******)((long)pppppppuVar19 + 2);
      uVar30 = uVar30 - 2;
    } while ((ushort)(uVar6 >> 8 | uVar6 << 8) != 0x5600);
    func_0x000107c2b89c();
    if ((uint)ppppppuVar26 < (uint)*(ushort *)((long)param_1 + 0x1e)) {
      func_0x000107c2b29c(0x10,0,0x9d,&UNK_10f6cff9c,0x103);
      param_3 = (ulong *******)0x56;
      goto code_r0x00010ae5eb78;
    }
code_r0x00010ae5eccc:
    pppppppuVar19 = pppppppuStack_118;
    *(ushort *)((long)param_1 + 0x61c) = (ushort)pppppppuStack_158;
    if (lStack_148 == 0x20) {
      ppppppuVar26 = pppppppuVar41[6];
      ppppppuVar45 = *pppppppuStack_150;
      ppppppuVar44 = pppppppuStack_150[3];
      ppppppuVar40 = pppppppuStack_150[2];
      ppppppuVar26[7] = (ulong *****)pppppppuStack_150[1];
      ppppppuVar26[6] = (ulong *****)ppppppuVar45;
      ppppppuVar26[9] = (ulong *****)ppppppuVar44;
      ppppppuVar26[8] = (ulong *****)ppppppuVar40;
      if (((pppppppuStack_118 != (ulong *******)0x0) &&
          (lVar27 = lStack_120, param_3 = pppppppuStack_118, _memchr(lStack_120,0), lVar27 != 0)) &&
         ((pppppppuVar43 = pppppppuVar41, func_0x000107c2b89c(), pppppppuVar19 == (ulong *******)0x1
          || ((uint)pppppppuVar43 < 0x304)))) {
        param_2 = (ulong *******)&pppppppuStack_170;
        pppppppuVar19 = param_1;
        FUN_10ae5a438();
        if (((ulong)pppppppuVar19 & 1) != 0) {
          iVar15 = 3;
code_r0x00010ae5e0cc:
          *(int *)((long)param_1 + 0x14) = iVar15;
code_r0x00010ae5e0d0:
          pppppppuVar43 = (ulong *******)0x1;
          goto code_r0x00010ae5f4f4;
        }
        param_3 = (ulong *******)0xbe;
        goto code_r0x00010ae5f070;
      }
      func_0x000107c2b29c(0x10,0,0x100,&UNK_10f6cff9c,0x2e6);
      param_2 = (ulong *******)0x2;
      param_3 = (ulong *******)0x2f;
      FUN_10ae60390();
      pppppppuVar43 = pppppppuVar41;
    }
    else {
      param_3 = (ulong *******)0x44;
code_r0x00010ae5f070:
      param_2 = (ulong *******)0x0;
      pppppppuVar43 = (ulong *******)0x10;
      func_0x000107c2b29c();
    }
  }
  else {
    if (uStack_1f8 != 0) {
      pppppppuVar19 = (ulong *******)((long)pppppppuStack_200 + 1);
      bVar24 = *(byte *)pppppppuStack_200;
      uVar30 = (ulong)bVar24;
      uStack_1f8 = uStack_1f8 - 1;
      pppppppuStack_200 = pppppppuVar19;
      if ((uVar30 <= uStack_1f8) &&
         (pppppppuStack_1d0 = pppppppuVar19, uStack_1c8 = uVar30,
         uStack_1f8 == uVar30 && bVar24 != 0)) goto code_r0x00010ae5ebec;
    }
    func_0x000107c2b29c(0x10,0,0x89,&UNK_10f6cff9c,0xce);
    param_3 = (ulong *******)0x32;
code_r0x00010ae5eb78:
    pppppppuStack_1b0 = (ulong *******)CONCAT71(pppppppuStack_1b0._1_7_,(char)param_3);
code_r0x00010ae5ecbc:
    param_2 = (ulong *******)0x2;
    FUN_10ae60390();
    pppppppuVar43 = pppppppuVar41;
  }
LAB_10ae5f4f0:
  pppppppuVar19 = pppppppuVar43;
  pppppppuVar43 = (ulong *******)0x0;
code_r0x00010ae5f4f4:
  if (*(uint *)((long)param_1 + 0x14) != uVar3) {
    pppppppuVar19 = (ulong *******)*param_1;
    ppppppuVar26 = pppppppuVar19[0xc];
    if ((ppppppuVar26 != (ulong ******)0x0) ||
       (ppppppuVar26 = (ulong ******)pppppppuVar19[0xd][0x30], ppppppuVar26 != (ulong ******)0x0)) {
      param_2 = (ulong *******)0x2001;
      param_3 = (ulong *******)0x1;
      (*(code *)ppppppuVar26)();
    }
  }
  if ((int)pppppppuVar43 != 1) goto LAB_10ae5fae0;
  goto LAB_10ae5d274;
LAB_10ae5fae0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return pppppppuVar43;
  }
  ___stack_chk_fail();
code_r0x00010ae5fb20:
  _abort();
  func_0x000107c2b204(&pppppppuStack_200);
  func_0x000107c2b534(pppppppuStack_1b0);
  pppppppuVar39 = pppppppuVar19;
  __Unwind_Resume();
  iVar15 = (int)param_3;
  pcStack_278 = FUN_10ae5fc20;
  ppppppuVar26 = *pppppppuVar39;
  pppppppuStack_2a0 = unaff_x22;
  pppppppuStack_298 = unaff_x21;
  uStack_290 = (ulong)uVar3;
  pppppppuStack_288 = pppppppuVar19;
  puStack_280 = &stack0xfffffffffffffff0;
  FUN_10ae59824(param_3,&puStack_2b0,0);
  if (iVar15 == 0) {
    return (ulong *******)0x1;
  }
  if (((1 < uStack_2a8) &&
      (uVar30 = (ulong)((uint)(*puStack_2b0 >> 8) | (*puStack_2b0 & 0xff00ff) << 8),
      uVar30 - 1 < uStack_2a8 - 2)) && (2 < uVar30)) {
    uStack_2b8 = (ulong)CONCAT11(*(char *)((long)puStack_2b0 + 3),(char)puStack_2b0[2]);
    if (uStack_2b8 <= uVar30 - 3) {
      ppppppuVar40 = (ulong ******)((long)puStack_2b0 + 5);
      if (uVar30 - 3 == uStack_2b8 && uStack_2a8 - 2 == uVar30) {
        if ((((char)puStack_2b0[1] == '\0' && *(char *)((long)puStack_2b0 + 3) == '\0') &&
            (uStack_2b8 != 0)) &&
           (ppppppuStack_2c0 = ppppppuVar40, _memchr(ppppppuVar40,0),
           ppppppuVar40 == (ulong ******)0x0)) {
          ppppuStack_2c8 = (ulong ****)0x0;
          pppppppuVar19 = &ppppppuStack_2c0;
          FUN_10ae2005c(pppppppuVar19,&ppppuStack_2c8);
          if ((int)pppppppuVar19 != 0) {
            ppppuVar20 = ppppppuVar26[6][0x3e];
            ppppppuVar26[6][0x3e] = ppppuStack_2c8;
            if (ppppuVar20 != (ulong ****)0x0) {
              func_0x000107c2b534();
            }
            *(uint *)(pppppppuVar39 + 0xc3) = *(uint *)(pppppppuVar39 + 0xc3) | 0x200;
            return pppppppuVar19;
          }
          bVar24 = 0x50;
        }
        else {
          pppppppuVar19 = (ulong *******)0x0;
          bVar24 = 0x70;
        }
        goto LAB_10ae5fcb0;
      }
    }
  }
  pppppppuVar19 = (ulong *******)0x0;
  bVar24 = 0x32;
LAB_10ae5fcb0:
  *(byte *)param_2 = bVar24;
  return pppppppuVar19;
}



/* Entry: 10ae5fc20; end: 10ae5fd3f;  */

long * FUN_10ae5fc20(long *param_1,undefined1 *param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_58;
  long lStack_50;
  ulong uStack_48;
  ushort *puStack_40;
  ulong uStack_38;
  
  lVar5 = *param_1;
  FUN_10ae59824(param_3,&puStack_40,0);
  if ((int)param_3 == 0) {
    return (long *)0x1;
  }
  if (((1 < uStack_38) &&
      (uVar3 = (ulong)((uint)(*puStack_40 >> 8) | (*puStack_40 & 0xff00ff) << 8),
      uVar3 - 1 < uStack_38 - 2)) && (2 < uVar3)) {
    uStack_48 = (ulong)CONCAT11(*(char *)((long)puStack_40 + 3),(char)puStack_40[2]);
    if (uStack_48 <= uVar3 - 3) {
      lVar1 = (long)puStack_40 + 5;
      if (uVar3 - 3 == uStack_48 && uStack_38 - 2 == uVar3) {
        if ((((char)puStack_40[1] == '\0' && *(char *)((long)puStack_40 + 3) == '\0') &&
            (uStack_48 != 0)) && (lStack_50 = lVar1, _memchr(lVar1,0), lVar1 == 0)) {
          uStack_58 = 0;
          plVar4 = &lStack_50;
          FUN_10ae2005c(plVar4,&uStack_58);
          if ((int)plVar4 != 0) {
            lVar1 = *(long *)(*(long *)(lVar5 + 0x30) + 0x1f0);
            *(undefined8 *)(*(long *)(lVar5 + 0x30) + 0x1f0) = uStack_58;
            if (lVar1 != 0) {
              func_0x000107c2b534();
            }
            *(uint *)(param_1 + 0xc3) = *(uint *)(param_1 + 0xc3) | 0x200;
            return plVar4;
          }
          uVar2 = 0x50;
        }
        else {
          plVar4 = (long *)0x0;
          uVar2 = 0x70;
        }
        goto LAB_10ae5fcb0;
      }
    }
  }
  plVar4 = (long *)0x0;
  uVar2 = 0x32;
LAB_10ae5fcb0:
  *param_2 = uVar2;
  return plVar4;
}



/* Entry: 10ae5fd40; end: 10ae60113;  */

undefined1 * FUN_10ae5fd40(ushort *param_1,undefined8 *param_2,byte *param_3,byte *param_4)

{
  ushort uVar1;
  byte *pbVar2;
  byte *pbVar3;
  long lVar4;
  ushort uVar5;
  ulong uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  ushort *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  int iVar13;
  bool bVar14;
  ushort uVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  undefined1 *puVar20;
  long lVar21;
  undefined8 *puVar22;
  byte *pbVar23;
  byte *pbVar24;
  undefined1 auStack_168 [16];
  uint uStack_158;
  undefined1 auStack_e0 [32];
  undefined1 auStack_c0 [32];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_2 = 0;
  if ((param_4 == (byte *)0x1) || (param_4 == (byte *)0x0)) {
LAB_10ae60104:
    _abort();
    goto LAB_10ae600f0;
  }
  pbVar24 = (byte *)((ulong)param_3[1] | ((ulong)*param_3 & 0x7f) << 8);
  if (pbVar24 < (byte *)0x1001) {
    if (pbVar24 < (byte *)0x3) {
      param_3 = (byte *)0xc7;
      goto LAB_10ae5fdcc;
    }
    pbVar3 = pbVar24 + 2;
    if (param_4 < pbVar3) {
      *param_2 = pbVar3;
      puVar20 = (undefined1 *)0x2;
      puVar22 = param_2;
      goto LAB_10ae5fdd4;
    }
    lVar18 = *(long *)(param_1 + 0x18);
    if ((ulong)*(ushort *)(lVar18 + 0x5a) < 2) goto LAB_10ae60104;
    lVar4 = *(long *)(lVar18 + 0x50) + (ulong)*(ushort *)(lVar18 + 0x58);
    pbVar23 = (byte *)((ulong)*(ushort *)(lVar18 + 0x5a) - 2);
    pbVar2 = pbVar23;
    if (pbVar24 <= pbVar23) {
      pbVar2 = pbVar24;
    }
    puVar10 = (ushort *)(*(long *)(lVar18 + 0x110) + 0x198);
    puVar22 = (undefined8 *)(lVar4 + 2);
    param_3 = pbVar2;
    func_0x000107c2b894();
    if ((int)puVar10 != 0) {
      if (*(code **)(param_1 + 0x20) != (code *)0x0) {
        param_4 = (byte *)(lVar4 + 2);
        (**(code **)(param_1 + 0x20))(0,2,0,param_4,pbVar2,param_1,*(undefined8 *)(param_1 + 0x24));
      }
      if ((((pbVar23 != (byte *)0x0) && ((byte *)0x2 < pbVar2)) && ((byte *)0x1 < pbVar2 + -3)) &&
         (((byte *)0x1 < pbVar2 + -5 && ((byte *)0x1 < pbVar2 + -7)))) {
        uVar12 = (uint)(*(ushort *)(lVar4 + 5) >> 8) | (*(ushort *)(lVar4 + 5) & 0xff00ff) << 8;
        pbVar24 = (byte *)(ulong)uVar12;
        uVar6 = (long)(pbVar2 + -9) - (long)pbVar24;
        if (pbVar24 <= pbVar2 + -9) {
          uVar17 = (ulong)((uint)(*(ushort *)(lVar4 + 7) >> 8) |
                          (*(ushort *)(lVar4 + 7) & 0xff00ff) << 8);
          if ((uVar17 <= uVar6) &&
             (uVar19 = (ulong)((uint)(*(ushort *)(lVar4 + 9) >> 8) |
                              (*(ushort *)(lVar4 + 9) & 0xff00ff) << 8), uVar6 - uVar17 == uVar19))
          {
            uVar5 = *(ushort *)(lVar4 + 3);
            lVar4 = lVar4 + 0xb;
            uStack_78 = 0;
            uStack_80 = 0;
            uStack_68 = 0;
            uStack_70 = 0;
            if (uVar19 != 0) {
              if (0x1f < uVar19) {
                uVar19 = 0x20;
              }
              _memcpy(auStack_60 + -uVar19,pbVar24 + uVar17 + lVar4);
            }
            uStack_98 = 0;
            uStack_a0 = 0;
            uStack_88 = 0;
            uStack_90 = 0;
            lVar21 = *(long *)(param_1 + 0x18);
            lVar18 = *(long *)(lVar21 + 0xd8);
            if (lVar18 == 0) {
              func_0x000107c2b1ec();
              func_0x000107c2b6e0((long *)(lVar21 + 0xd8),lVar18);
              lVar18 = *(long *)(*(long *)(param_1 + 0x18) + 0xd8);
              if (lVar18 != 0) goto LAB_10ae5ff5c;
LAB_10ae600c0:
              param_3 = (byte *)0x41;
LAB_10ae600c8:
              param_4 = &UNK_10f6d0013;
              puVar22 = (undefined8 *)0x0;
              func_0x000107c2b29c(0x10);
              puVar20 = (undefined1 *)0x4;
            }
            else {
LAB_10ae5ff5c:
              func_0x000107c2b1f4(lVar18,(uVar12 * 0xaaab >> 0x10 & 0xfffe) + 0x2b & 0xffff);
              if ((int)lVar18 == 0) goto LAB_10ae600c0;
              puVar22 = &uStack_a0;
              FUN_10ae1f958(puVar22,*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 8)
                            ,*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x10));
              if ((int)puVar22 == 0) goto LAB_10ae600c0;
              puVar22 = &uStack_a0;
              func_0x000107c2b218(puVar22,1);
              if ((int)puVar22 == 0) goto LAB_10ae600c0;
              puVar22 = &uStack_a0;
              func_0x000107c34f3c(puVar22,auStack_c0,3);
              if ((int)puVar22 == 0) goto LAB_10ae600c0;
              puVar20 = auStack_c0;
              func_0x000107c2b228(puVar20,uVar5 >> 8 | uVar5 << 8);
              if ((int)puVar20 == 0) goto LAB_10ae600c0;
              puVar20 = auStack_c0;
              func_0x000107c2b21c(puVar20,&uStack_80,0x20);
              if ((int)puVar20 == 0) goto LAB_10ae600c0;
              puVar20 = auStack_c0;
              func_0x000107c2b218(puVar20,0);
              if ((int)puVar20 == 0) goto LAB_10ae600c0;
              puVar20 = auStack_c0;
              func_0x000107c34f3c(puVar20,auStack_e0,2);
              if ((int)puVar20 == 0) goto LAB_10ae600c0;
              while (pbVar24 != (byte *)0x0) {
                bVar8 = pbVar24 < (byte *)0x3;
                pbVar24 = pbVar24 + -3;
                if (bVar8) {
                  param_3 = (byte *)0x89;
                  goto LAB_10ae600c8;
                }
                lVar18 = 0;
                uVar5 = 0;
                do {
                  uVar15 = uVar5;
                  pbVar2 = (byte *)(lVar4 + lVar18);
                  uVar1 = uVar15 << 8;
                  lVar18 = lVar18 + 1;
                  uVar5 = *pbVar2 | uVar1;
                } while (lVar18 != 3);
                if (((uVar15 & 0xff00) == 0) &&
                   (iVar13 = (int)auStack_e0, func_0x000107c2b228(auStack_e0,*pbVar2 | uVar1),
                   iVar13 == 0)) goto LAB_10ae600f0;
                lVar4 = lVar4 + 3;
              }
              puVar20 = auStack_c0;
              func_0x000107c2b218(puVar20,1);
              if ((int)puVar20 == 0) {
LAB_10ae600f0:
                param_3 = (byte *)0x44;
                goto LAB_10ae600c8;
              }
              puVar20 = auStack_c0;
              func_0x000107c2b218(puVar20,0);
              if ((int)puVar20 == 0) goto LAB_10ae600f0;
              param_3 = *(byte **)(*(long *)(param_1 + 0x18) + 0xd8);
              iVar13 = (int)&uStack_a0;
              puVar22 = (undefined8 *)0x0;
              func_0x000107c2b208();
              if (iVar13 == 0) goto LAB_10ae600f0;
              puVar20 = (undefined1 *)0x0;
              *param_2 = pbVar3;
              *(ushort *)(*(long *)(param_1 + 0x18) + 0xd4) =
                   *(ushort *)(*(long *)(param_1 + 0x18) + 0xd4) | 8;
            }
            param_1 = (ushort *)&uStack_a0;
            func_0x000107c2b204();
            goto LAB_10ae5fdd4;
          }
        }
      }
      param_3 = (byte *)0x89;
      goto LAB_10ae5fdcc;
    }
  }
  else {
    param_3 = (byte *)0xc8;
LAB_10ae5fdcc:
    param_4 = &UNK_10f6d0013;
    puVar22 = (undefined8 *)0x0;
    puVar10 = (ushort *)0x10;
    func_0x000107c2b29c();
  }
  puVar20 = (undefined1 *)0x4;
  param_1 = puVar10;
LAB_10ae5fdd4:
  uVar12 = (uint)param_3;
  iVar13 = (int)param_4;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar20;
  }
  ___stack_chk_fail();
  if ((((ulong)puVar22 & 1) == 0) && (puVar22 != (undefined8 *)0x0)) {
    puVar20 = (undefined1 *)0x0;
    bVar7 = false;
    bVar14 = false;
    bVar8 = false;
    do {
      uStack_158 = (uint)(*param_1 >> 8) | (*param_1 & 0xff00ff) << 8 | 0x3000000;
      puVar11 = auStack_168;
      _bsearch(puVar11,&PTR_DAT_110c89f08,0x18,0x28,&UNK_1001fbef4);
      if (puVar11 != (undefined1 *)0x0) {
        if (*(int *)(puVar11 + 0x14) == 8) {
          if (0x303 < uVar12) {
            uVar16 = 0x304;
LAB_10ae601f4:
            if (uVar12 <= uVar16) {
              if (iVar13 == 0x4138) {
                bVar9 = *(int *)(puVar11 + 0x1c) != 8;
              }
              else {
                bVar9 = true;
              }
              if (bVar8) {
                if (bVar9 == bVar14) {
                  if (bVar7) {
LAB_10ae60234:
                    bVar8 = true;
                    goto LAB_10ae60240;
                  }
                }
                else if (bVar9 < bVar14) goto LAB_10ae60234;
              }
              bVar8 = true;
              bVar7 = true;
              puVar20 = puVar11;
              bVar14 = bVar9;
            }
          }
        }
        else {
          if (*(int *)(puVar11 + 0x18) == 8) {
            uVar16 = 0x304;
          }
          else {
            uVar16 = 0x300;
            if (*(int *)(puVar11 + 0x24) != 1) {
              uVar16 = 0x303;
            }
          }
          if (uVar16 <= uVar12) {
            uVar16 = 0x303;
            if (*(int *)(puVar11 + 0x18) == 8) {
              uVar16 = 0x304;
            }
            goto LAB_10ae601f4;
          }
        }
      }
LAB_10ae60240:
      param_1 = param_1 + 1;
      puVar22 = (undefined8 *)((long)puVar22 + -2);
    } while (puVar22 != (undefined8 *)0x0);
  }
  else {
    puVar20 = (undefined1 *)0x0;
  }
  return puVar20;
}



/* Entry: 10ae60114; end: 10ae6028b;  */

void FUN_10ae60114(ushort *param_1,ulong param_2,uint param_3,int param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined1 *puVar4;
  bool bVar5;
  uint uVar6;
  undefined1 auStack_88 [16];
  uint uStack_78;
  
  if (((param_2 & 1) == 0) && (param_2 != 0)) {
    bVar2 = false;
    bVar5 = false;
    bVar1 = false;
    do {
      uStack_78 = (uint)(*param_1 >> 8) | (*param_1 & 0xff00ff) << 8 | 0x3000000;
      puVar4 = auStack_88;
      _bsearch(puVar4,&PTR_DAT_110c89f08,0x18,0x28,&UNK_1001fbef4);
      if (puVar4 != (undefined1 *)0x0) {
        if (*(int *)(puVar4 + 0x14) == 8) {
          if (0x303 < param_3) {
            uVar6 = 0x304;
LAB_10ae601f4:
            if (param_3 <= uVar6) {
              if (param_4 == 0x4138) {
                bVar3 = *(int *)(puVar4 + 0x1c) != 8;
              }
              else {
                bVar3 = true;
              }
              if (bVar1) {
                if (bVar3 == bVar5) {
                  if (bVar2) {
LAB_10ae60234:
                    bVar1 = true;
                    goto LAB_10ae60240;
                  }
                }
                else if (bVar3 < bVar5) goto LAB_10ae60234;
              }
              bVar1 = true;
              bVar2 = true;
              bVar5 = bVar3;
            }
          }
        }
        else {
          if (*(int *)(puVar4 + 0x18) == 8) {
            uVar6 = 0x304;
          }
          else {
            uVar6 = 0x300;
            if (*(int *)(puVar4 + 0x24) != 1) {
              uVar6 = 0x303;
            }
          }
          if (uVar6 <= param_3) {
            uVar6 = 0x303;
            if (*(int *)(puVar4 + 0x18) == 8) {
              uVar6 = 0x304;
            }
            goto LAB_10ae601f4;
          }
        }
      }
LAB_10ae60240:
      param_1 = param_1 + 1;
      param_2 = param_2 - 2;
    } while (param_2 != 0);
  }
  return;
}



/* Entry: 10ae6028c; end: 10ae602b3;  */

void FUN_10ae6028c(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 == 0) {
    return;
  }
  func_0x000107c2b724();
  if (lVar1 != 0) {
    plVar2 = (long *)(lVar1 + -8);
    if (*plVar2 + 8 != 0) {
      func_0x000107c60ee4(plVar2,*plVar2 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(plVar2);
    return;
  }
  return;
}



/* Entry: 10ae602b4; end: 10ae6038f;  */

void FUN_10ae602b4(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 uVar2;
  char *pcStack_38;
  long lStack_30;
  char cStack_21;
  
  pcStack_38 = (char *)0x0;
  lStack_30 = 0;
  uVar1 = param_1;
  func_0x000107c2b920(param_1,&cStack_21,&pcStack_38,param_2,param_3,param_4,param_5);
  if ((int)uVar1 == 0) {
    if (cStack_21 == '\x14') {
      if ((lStack_30 == 1) && (*pcStack_38 == '\x01')) {
        func_0x000107c2b794(param_1,0,0x14,pcStack_38,1);
        return;
      }
      func_0x000107c2b29c(0x10,0,0x67,&UNK_10f6d009d,0x172);
      uVar2 = 0x2f;
    }
    else {
      func_0x000107c2b29c(0x10,0,0xe1,&UNK_10f6d009d,0x16c);
      uVar2 = 10;
    }
    *param_3 = uVar2;
  }
  return;
}



/* Entry: 10ae60390; end: 10ae6040b;  */

/* WARNING: Possible PIC construction at 0x00010ae2a0e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ae2a0ec) */

void FUN_10ae60390(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  long *plVar2;
  long *plVar3;
  long *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  plVar3 = param_1;
  FUN_10ae2a128();
  FUN_10ae6040c(param_1,param_2,param_3);
  FUN_10ae2a27c(plVar3);
  if (plVar3 == (long *)0x0) {
    return;
  }
  if (plVar3 != (long *)0x0) {
    puVar1 = &stack0xfffffffffffffff0;
    if (plVar3[1] == 0) {
      func_0x000107c2b534(*plVar3);
      plVar2 = plVar3;
    }
    else {
      unaff_x20 = 0;
      unaff_x30 = 0x10ae2a0ec;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
      plVar2 = *(long **)(*plVar3 + 8);
      unaff_x19 = plVar3;
      unaff_x29 = puVar1;
    }
    if (plVar2 != (long *)0x0) {
      *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      plVar2 = plVar2 + -1;
      if (*plVar2 + 8 != 0) {
        func_0x000107c60ee4(plVar2,*plVar2 + 8);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_11034c310)(plVar2);
      return;
    }
    return;
  }
  return;
}



/* Entry: 10ae6040c; end: 10ae60493;  */

long * FUN_10ae6040c(long *param_1,int param_2,int param_3)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = param_1[6];
  if (*(int *)(lVar1 + 0xac) == 0) {
    uVar2 = 1;
    if (param_3 != 0 || param_2 != 1) {
      uVar2 = 2;
    }
    *(undefined4 *)(lVar1 + 0xac) = uVar2;
    *(ushort *)(lVar1 + 0xd4) = *(ushort *)(lVar1 + 0xd4) | 0x2000;
    *(char *)(param_1[6] + 0x1c5) = (char)param_2;
    *(char *)(param_1[6] + 0x1c6) = (char)param_3;
    if (*(short *)(param_1[6] + 0x72) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010ae60490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x50))();
      return param_1;
    }
  }
  else {
    func_0x000107c2b29c(0x10,0,0xc2,&UNK_10f6d009d,399);
  }
  return (long *)0xffffffff;
}



/* Entry: 10ae60494; end: 10ae6059b;  */

void FUN_10ae60494(long param_1)

{
  ushort uVar1;
  long lVar2;
  code *pcVar3;
  
  if (*(long *)(param_1 + 0x98) == 0) {
    lVar2 = param_1;
    func_0x000107c2b72c(param_1,0x15,*(long *)(param_1 + 0x30) + 0x1c5,2);
    if ((int)lVar2 < 1) {
      return;
    }
  }
  else {
    lVar2 = param_1;
    (**(code **)(*(long *)(param_1 + 0x98) + 0x20))
              (param_1,*(undefined4 *)(*(long *)(param_1 + 0x30) + 0xc4),
               *(undefined1 *)(*(long *)(param_1 + 0x30) + 0x1c6));
    if ((int)lVar2 == 0) {
      func_0x000107c2b29c(0x10,0,0x12a,&UNK_10f6d009d,0x1ac);
      return;
    }
  }
  *(ushort *)(*(long *)(param_1 + 0x30) + 0xd4) =
       *(ushort *)(*(long *)(param_1 + 0x30) + 0xd4) & 0xdfff;
  lVar2 = *(long *)(param_1 + 0x30);
  if (*(char *)(lVar2 + 0x1c5) == '\x02') {
    func_0x000107c2b1d8(*(undefined8 *)(param_1 + 0x20),0xb,0,0);
    lVar2 = *(long *)(param_1 + 0x30);
  }
  func_0x000107c2b794(param_1,1,0x15,lVar2 + 0x1c5,2);
  uVar1 = *(ushort *)(*(long *)(param_1 + 0x30) + 0x1c5);
  pcVar3 = *(code **)(param_1 + 0x60);
  if ((pcVar3 != (code *)0x0) ||
     (pcVar3 = *(code **)(*(long *)(param_1 + 0x68) + 0x180), pcVar3 != (code *)0x0)) {
    (*pcVar3)(param_1,0x4008,uVar1 >> 8 | uVar1 << 8);
  }
  return;
}



/* Entry: 10ae6059c; end: 10ae60f5b;  */

void FUN_10ae6059c(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  byte bVar1;
  ushort *puVar2;
  undefined1 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long **pplVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  byte bVar10;
  int iVar11;
  byte bVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  int iStack_150;
  int iStack_14c;
  undefined8 uStack_148;
  long lStack_140;
  int iStack_134;
  int iStack_130;
  int iStack_12c;
  long lStack_128;
  ulong uStack_120;
  int iStack_118;
  int iStack_114;
  long *plStack_110;
  long lStack_108;
  undefined1 auStack_100 [20];
  int iStack_ec;
  long lStack_e8;
  long lStack_e0;
  ulong uStack_d8;
  undefined1 auStack_d0 [8];
  long lStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  ushort *puStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  long lStack_98;
  undefined1 auStack_90 [8];
  long lStack_88;
  long *plStack_80;
  long lStack_78;
  ulong uStack_70;
  uint uStack_68;
  
  plVar16 = &lStack_78;
  lStack_78 = param_3;
  func_0x000107c2b884();
  if (plVar16 == (long *)0x0) {
    *param_1 = 0;
    return;
  }
  plStack_80 = plVar16;
  func_0x000107c34f50(param_2,auStack_90,0x20000010,1);
  plVar7 = plVar16;
  if ((int)param_2 == 0) {
LAB_10ae606b8:
    uVar8 = 0xa0;
    uVar9 = 0x240;
LAB_10ae606d0:
    func_0x000107c2b29c(0x10,0,uVar8,&UNK_10f6d01eb,uVar9);
  }
  else {
    puVar3 = auStack_90;
    FUN_10ae200fc(puVar3,&lStack_98);
    if (((int)puVar3 == 0) || (lStack_98 != 1)) goto LAB_10ae606b8;
    puVar3 = auStack_90;
    FUN_10ae200fc(puVar3,&uStack_a0);
    if ((((int)puVar3 == 0) || (uStack_a0 >> 0x10 != 0)) ||
       (((iVar11 = (int)uStack_a0, 3 < iVar11 - 0x301U && (iVar11 != 0xfefd)) && (iVar11 != 0xfeff))
       )) goto LAB_10ae606b8;
    *(short *)((long)plVar16 + 4) = (short)uStack_a0;
    puVar3 = auStack_90;
    func_0x000107c34f50(puVar3,&puStack_b0,4,1);
    puVar2 = puStack_b0;
    if (((int)puVar3 == 0) || (uStack_a8 < 2)) {
LAB_10ae6067c:
      puStack_b0 = puVar2;
      uVar8 = 0xa0;
      uVar9 = 0x24a;
      goto LAB_10ae606d0;
    }
    uStack_a8 = uStack_a8 - 2;
    puVar2 = puStack_b0 + 1;
    if (uStack_a8 != 0) goto LAB_10ae6067c;
    uStack_68 = (uint)(*puStack_b0 >> 8) | (*puStack_b0 & 0xff00ff) << 8 | 0x3000000;
    plVar4 = &lStack_78;
    puStack_b0 = puStack_b0 + 1;
    _bsearch(plVar4,&PTR_DAT_110c89f08,0x18,0x28,&UNK_1001fbef4);
    plVar16[0x1a] = (long)plVar4;
    if (plVar4 == (long *)0x0) {
      uVar8 = 0xed;
      uVar9 = 0x24f;
      goto LAB_10ae606d0;
    }
    puVar3 = auStack_90;
    func_0x000107c34f50(puVar3,&lStack_78,4,1);
    if (((int)puVar3 == 0) || (0x20 < uStack_70)) {
LAB_10ae60784:
      uVar8 = 0xa0;
      uVar9 = 600;
      goto LAB_10ae606d0;
    }
    puVar3 = auStack_90;
    func_0x000107c34f50(puVar3,&uStack_c0,4,1);
    if (((int)puVar3 == 0) || (0x30 < uStack_b8)) goto LAB_10ae60784;
    if (uStack_70 != 0) {
      _memcpy((long)plVar16 + 0x44,lStack_78,uStack_70);
    }
    *(int *)(plVar16 + 8) = (int)uStack_70;
    if (uStack_b8 != 0) {
      _memcpy(plVar16 + 2,uStack_c0,uStack_b8);
    }
    *(int *)((long)plVar16 + 0xc) = (int)uStack_b8;
    puVar3 = auStack_90;
    func_0x000107c34f50(puVar3,auStack_d0,0xa0000001,1);
    if ((int)puVar3 == 0) {
LAB_10ae608a4:
      uVar8 = 0xa0;
      uVar9 = 0x267;
      goto LAB_10ae606d0;
    }
    puVar3 = auStack_d0;
    FUN_10ae200fc(puVar3,plVar16 + 0x19);
    if ((int)puVar3 == 0) goto LAB_10ae608a4;
    puVar3 = auStack_90;
    func_0x000107c34f50(puVar3,auStack_d0,0xa0000002,1);
    if ((int)puVar3 == 0) goto LAB_10ae608a4;
    puVar3 = auStack_d0;
    FUN_10ae200fc(puVar3,&uStack_d8);
    if (((int)puVar3 == 0) || (uStack_d8 >> 0x20 != 0)) goto LAB_10ae608a4;
    *(int *)(plVar16 + 0x18) = (int)uStack_d8;
    puVar3 = auStack_90;
    func_0x000107c2b238(puVar3,&lStack_e8,&iStack_ec,0xa0000003);
    if (((int)puVar3 == 0) || ((iStack_ec != 0 && (lStack_e0 == 0)))) {
      uVar8 = 0xa0;
      uVar9 = 0x271;
      goto LAB_10ae606d0;
    }
    puVar3 = auStack_90;
    FUN_10ae60f5c(puVar3,(long)plVar16 + 0x65,(long)plVar16 + 100,0x20,0xa0000004);
    if ((int)puVar3 != 0) {
      puVar3 = auStack_90;
      FUN_10ae60ff0(puVar3,plVar16 + 0x17);
      if ((int)puVar3 == 0) goto LAB_10ae606d4;
      puVar3 = auStack_90;
      func_0x000107c2b238(puVar3,auStack_100,0,0xa0000006);
      if ((int)puVar3 == 0) {
        uVar8 = 0xa0;
        uVar9 = 0x282;
        goto LAB_10ae606d0;
      }
      puVar3 = auStack_90;
      func_0x00010ae61060(puVar3,plVar16 + 0x11);
      if ((int)puVar3 == 0) goto LAB_10ae606d4;
      puVar3 = auStack_90;
      func_0x00010ae61154(puVar3,(long)plVar16 + 0x174,0xa0000009,0);
      if ((int)puVar3 == 0) goto LAB_10ae606d4;
      puVar3 = auStack_90;
      FUN_10ae611c4(puVar3,plVar16 + 0x1e,0xa000000a);
      if (((ulong)puVar3 & 1) == 0) goto LAB_10ae606d4;
      puVar3 = auStack_90;
      func_0x000107c2b234(puVar3,0xa000000d);
      if ((int)puVar3 != 0) {
        puVar3 = auStack_90;
        func_0x000107c34f50(puVar3,auStack_d0,0xa000000d,1);
        if ((int)puVar3 != 0) {
          puVar3 = auStack_d0;
          func_0x000107c34f50(puVar3,&plStack_110,4,1);
          if ((((int)puVar3 != 0) && (lStack_108 == 0x20)) && (lStack_c8 == 0)) {
            lVar15 = *plStack_110;
            lVar18 = plStack_110[3];
            lVar17 = plStack_110[2];
            plVar16[0x23] = plStack_110[1];
            plVar16[0x22] = lVar15;
            plVar16[0x25] = lVar18;
            plVar16[0x24] = lVar17;
            bVar10 = *(byte *)(plVar16 + 0x36) | 2;
            goto LAB_10ae609f8;
          }
        }
        uVar8 = 0xa0;
        uVar9 = 0x294;
        goto LAB_10ae606d0;
      }
      bVar10 = *(byte *)(plVar16 + 0x36) & 0xfd;
LAB_10ae609f8:
      *(byte *)(plVar16 + 0x36) = bVar10;
      puVar3 = auStack_90;
      FUN_10ae60f5c(puVar3,plVar16 + 0x26,plVar16 + 0x2e,0x40,0xa000000e);
      if ((int)puVar3 == 0) goto LAB_10ae606d4;
      puVar3 = auStack_90;
      func_0x00010ae61258(puVar3,plVar16 + 0x20,0xa000000f,param_4);
      if ((int)puVar3 == 0) goto LAB_10ae606d4;
      puVar3 = auStack_90;
      func_0x00010ae61258(puVar3,plVar16 + 0x21,0xa0000010,param_4);
      if ((int)puVar3 == 0) goto LAB_10ae606d4;
      puVar3 = auStack_90;
      func_0x00010ae202f0(puVar3,&iStack_114,0xa0000011,0);
      if ((int)puVar3 == 0) {
        uVar9 = 0x2ae;
LAB_10ae60ae8:
        uVar8 = 0xa0;
      }
      else {
        bVar10 = *(byte *)(plVar16 + 0x36) & 0xfe;
        if (iStack_114 != 0) {
          bVar10 = bVar10 + 1;
        }
        *(byte *)(plVar16 + 0x36) = bVar10;
        puVar3 = auStack_90;
        FUN_10ae61344(puVar3,(long)plVar16 + 6,0xa0000012);
        if ((int)puVar3 == 0) {
          uVar9 = 0x2b4;
          goto LAB_10ae60ae8;
        }
        plStack_110 = (long *)0x0;
        lStack_108 = 0;
        puVar3 = auStack_90;
        func_0x000107c2b238(puVar3,&plStack_110,&iStack_118,0xa0000013);
        if ((int)puVar3 == 0) {
LAB_10ae60b00:
          uVar8 = 0xa0;
          uVar9 = 0x2be;
          goto LAB_10ae606d0;
        }
        if (iStack_118 != 0) {
          if (lStack_108 == 0) goto LAB_10ae60b00;
          if (iStack_ec == 0) {
            uVar8 = 0xa0;
            uVar9 = 0x2c2;
            goto LAB_10ae606d0;
          }
        }
        if (iStack_ec == 0 && iStack_118 == 0) {
LAB_10ae60bfc:
          puVar3 = auStack_90;
          FUN_10ae201f8(puVar3,&lStack_128,&iStack_12c,0xa0000015);
          if ((int)puVar3 == 0) {
LAB_10ae60ee4:
            *param_1 = 0;
          }
          else {
            uVar13 = uStack_120;
            if (iStack_12c != 0) {
              uVar13 = uStack_120 - 4;
              if (uStack_120 < 4) goto LAB_10ae60ee4;
              lVar15 = 0;
              uVar14 = 0;
              do {
                uVar14 = (uint)*(byte *)(lStack_128 + lVar15) | uVar14 << 8;
                lVar15 = lVar15 + 1;
              } while (lVar15 != 4);
              lStack_128 = lStack_128 + 4;
              uStack_120 = uVar13;
              *(uint *)(plVar16 + 0x2f) = uVar14;
            }
            if (uVar13 != 0) goto LAB_10ae60ee4;
            bVar10 = 0;
            if (iStack_12c != 0) {
              bVar10 = 8;
            }
            *(byte *)(plVar16 + 0x36) = *(byte *)(plVar16 + 0x36) & 0xf7 | bVar10;
            puVar3 = auStack_90;
            func_0x00010ae202f0(puVar3,&iStack_130,0xa0000016,1);
            if ((int)puVar3 == 0) {
              uVar8 = 0xa0;
              uVar9 = 0x2f4;
              goto LAB_10ae60ee0;
            }
            bVar10 = 0;
            if (iStack_130 != 0) {
              bVar10 = 0x10;
            }
            *(byte *)(plVar16 + 0x36) = *(byte *)(plVar16 + 0x36) & 0xef | bVar10;
            puVar3 = auStack_90;
            FUN_10ae61344(puVar3,plVar16 + 1,0xa0000017);
            if ((int)puVar3 == 0) {
LAB_10ae60eac:
              uVar8 = 0xa0;
              uVar9 = 0x309;
              goto LAB_10ae60ee0;
            }
            puVar3 = auStack_90;
            func_0x00010ae61154(puVar3,(long)plVar16 + 0x17c,0xa0000018,0);
            if ((int)puVar3 == 0) goto LAB_10ae60eac;
            puVar3 = auStack_90;
            func_0x00010ae61154(puVar3,(long)plVar16 + 0xc4,0xa0000019,(int)plVar16[0x18]);
            if ((int)puVar3 == 0) goto LAB_10ae60eac;
            puVar3 = auStack_90;
            FUN_10ae611c4(puVar3,plVar16 + 0x30,0xa000001a);
            if ((int)puVar3 == 0) goto LAB_10ae60eac;
            puVar3 = auStack_90;
            func_0x00010ae202f0(puVar3,&iStack_134,0xa000001b,0);
            if ((int)puVar3 == 0) goto LAB_10ae60eac;
            puVar3 = auStack_90;
            FUN_10ae611c4(puVar3,plVar16 + 0x37,0xa000001c);
            if (((ulong)puVar3 & 1) == 0) goto LAB_10ae60eac;
            puVar3 = auStack_90;
            FUN_10ae201f8(puVar3,&uStack_148,&iStack_14c,0xa000001d);
            lVar15 = lStack_140;
            uVar8 = uStack_148;
            if ((int)puVar3 == 0) {
LAB_10ae60ef4:
              uVar8 = 0x316;
LAB_10ae60ef8:
              func_0x000107c2b29c(0x10,0,0xa0,&UNK_10f6d01eb,uVar8);
              plVar16 = (long *)0x0;
            }
            else {
              plVar4 = plVar16 + 0x32;
              func_0x000107c2b684(plVar4,lStack_140);
              uVar14 = (uint)plVar4 ^ 1;
              if (lVar15 == 0) {
                uVar14 = 1;
              }
              if ((uVar14 & 1) == 0) {
                _memcpy(plVar16[0x32],uVar8,lVar15);
              }
              if ((uint)plVar4 == 0) goto LAB_10ae60ef4;
              puVar3 = auStack_90;
              FUN_10ae201f8(puVar3,&uStack_148,&iStack_150,0xa000001e);
              if ((int)puVar3 == 0) goto LAB_10ae60ef4;
              plVar4 = plVar16 + 0x34;
              func_0x000107c2b684(plVar4,lStack_140);
              uVar14 = (uint)plVar4 ^ 1;
              if (lStack_140 == 0) {
                uVar14 = 1;
              }
              if ((uVar14 & 1) == 0) {
                _memcpy(plVar16[0x34],uStack_148,lStack_140);
              }
              uVar14 = 0;
              if (lStack_88 == 0) {
                uVar14 = (uint)plVar4;
              }
              if ((uVar14 & 1) == 0) goto LAB_10ae60ef4;
              bVar1 = *(byte *)(plVar16 + 0x36);
              bVar10 = 0;
              if (iStack_134 != 0) {
                bVar10 = 0x20;
              }
              *(byte *)(plVar16 + 0x36) = bVar1 & 0xdf | bVar10;
              if (iStack_14c != iStack_150) {
LAB_10ae60f24:
                uVar8 = 0x31e;
                goto LAB_10ae60ef8;
              }
              bVar12 = 0;
              if (iStack_14c != 0) {
                if (plVar16[0x31] == 0) goto LAB_10ae60f24;
                bVar12 = 0x40;
              }
              *(byte *)(plVar16 + 0x36) = bVar12 | bVar1 & 0x9f | bVar10;
              plVar4 = plVar16;
              (**(code **)(param_3 + 0x30))();
              if (((ulong)plVar4 & 1) == 0) {
                uVar8 = 0x324;
                goto LAB_10ae60ef8;
              }
              plVar7 = (long *)0x0;
            }
            *param_1 = plVar16;
          }
          if (plVar7 == (long *)0x0) {
            return;
          }
          goto LAB_10ae606dc;
        }
        uVar8 = 0;
        func_0x000107c2b59c(0);
        func_0x000107c2b718(plVar16 + 0x12,uVar8);
        if (plVar16[0x12] == 0) {
          uVar8 = 0x41;
          uVar9 = 0x2c8;
        }
        else {
          if (iStack_ec == 0) {
LAB_10ae60b78:
            do {
              if (lStack_108 == 0) goto LAB_10ae60bfc;
              pplVar6 = &plStack_110;
              func_0x000107c34f4c(pplVar6,&lStack_128,0,0,0,0,0);
              if (((int)pplVar6 == 0) || (uStack_120 == 0)) {
                uVar8 = 0xa0;
                uVar9 = 0x2d9;
                goto LAB_10ae60ee0;
              }
              lVar15 = lStack_128;
              func_0x000107c34fa0(lStack_128,uStack_120,0,param_4);
              if (lVar15 == 0) goto LAB_10ae60be0;
              puVar5 = (undefined8 *)plVar16[0x12];
              func_0x000107c2b5ac(puVar5,lVar15,*puVar5);
            } while (puVar5 != (undefined8 *)0x0);
            func_0x000107c2b588(lVar15);
LAB_10ae60be0:
            uVar8 = 0x41;
            uVar9 = 0x2e0;
LAB_10ae60ee0:
            func_0x000107c2b29c(0x10,0,uVar8,&UNK_10f6d01eb,uVar9);
            goto LAB_10ae60ee4;
          }
          func_0x000107c34fa0(lStack_e8,lStack_e0,0,param_4);
          if (lStack_e8 != 0) {
            puVar5 = (undefined8 *)plVar16[0x12];
            func_0x000107c2b5ac(puVar5,lStack_e8,*puVar5);
            if (puVar5 != (undefined8 *)0x0) goto LAB_10ae60b78;
            func_0x000107c2b588(lStack_e8);
          }
          uVar8 = 0x41;
          uVar9 = 0x2d0;
        }
      }
      goto LAB_10ae606d0;
    }
  }
LAB_10ae606d4:
  *param_1 = 0;
LAB_10ae606dc:
  plStack_80 = (long *)0x0;
  func_0x000107c2b874(plVar7);
  return;
}



/* Entry: 10ae60f5c; end: 10ae60fef;  */

undefined8
FUN_10ae60f5c(undefined8 param_1,undefined8 param_2,undefined1 *param_3,ulong param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  ulong uStack_38;
  
  FUN_10ae201f8(param_1,&uStack_40,0,param_5);
  if (((int)param_1 == 0) || ((param_4 & 0xffffffff) < uStack_38)) {
    func_0x000107c2b29c(0x10,0,0xa0,&UNK_10f6d01eb,0x1fc);
    uVar1 = 0;
  }
  else {
    if (uStack_38 != 0) {
      _memcpy(param_2,uStack_40,uStack_38);
    }
    *param_3 = (char)uStack_38;
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 10ae60ff0; end: 10ae611c3;  */

undefined8 FUN_10ae60ff0(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  long lStack_28;
  
  FUN_10ae20280(param_1,&lStack_28,0xa0000005,0);
  if (((int)param_1 == 0) || (lStack_28 < 0)) {
    func_0x000107c2b29c(0x10,0,0xa0,&UNK_10f6d01eb,0x20a);
    uVar1 = 0;
  }
  else {
    *param_2 = lStack_28;
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 10ae611c4; end: 10ae61343;  */

void FUN_10ae611c4(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  long lStack_38;
  
  FUN_10ae201f8(param_1,&uStack_40,0,param_3);
  if ((int)param_1 == 0) {
    func_0x000107c2b29c(0x10,0,0xa0,&UNK_10f6d01eb,0x1d8);
  }
  else {
    puVar1 = param_2;
    func_0x000107c2b684(param_2,lStack_38);
    if (lStack_38 != 0 && (int)puVar1 != 0) {
      _memcpy(*param_2,uStack_40,lStack_38);
    }
  }
  return;
}



/* Entry: 10ae61344; end: 10ae613af;  */

undefined8 FUN_10ae61344(undefined8 param_1,undefined2 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uStack_28;
  
  FUN_10ae20280(param_1,&uStack_28,param_3,0);
  if (((int)param_1 == 0) || (0xffff < uStack_28)) {
    func_0x000107c2b29c(0x10,0,0xa0,&UNK_10f6d01eb,0x224);
    uVar1 = 0;
  }
  else {
    *param_2 = (short)uStack_28;
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 10ae613b0; end: 10ae61c07;  */

void FUN_10ae613b0(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  uint uVar5;
  long *plVar6;
  ulong *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [32];
  
  if (param_1 == 0) {
    return;
  }
  iVar1 = (int)auStack_a0;
  if (*(long *)(param_1 + 0xd0) == 0) {
    return;
  }
  uVar4 = param_2;
  func_0x000107c2b214(param_2,auStack_60,0x20000010);
  if ((int)uVar4 != 0) {
    puVar2 = auStack_60;
    FUN_10ae1fb3c(puVar2,1);
    if ((int)puVar2 != 0) {
      puVar2 = auStack_60;
      FUN_10ae1fb3c(puVar2,*(undefined2 *)(param_1 + 4));
      if ((int)puVar2 != 0) {
        puVar2 = auStack_60;
        func_0x000107c2b214(puVar2,auStack_80,4);
        if ((int)puVar2 != 0) {
          puVar2 = auStack_80;
          func_0x000107c2b228(puVar2,*(undefined2 *)(*(long *)(param_1 + 0xd0) + 0x10));
          if ((int)puVar2 != 0) {
            if (param_3 == 0) {
              uVar3 = *(undefined4 *)(param_1 + 0x40);
            }
            else {
              uVar3 = 0;
            }
            puVar2 = auStack_60;
            FUN_10ae1fc08(puVar2,param_1 + 0x44,uVar3);
            if ((int)puVar2 != 0) {
              puVar2 = auStack_60;
              FUN_10ae1fc08(puVar2,param_1 + 0x10,(long)*(int *)(param_1 + 0xc));
              if ((int)puVar2 != 0) {
                puVar2 = auStack_60;
                func_0x000107c2b214(puVar2,auStack_80,0xa0000001);
                if ((int)puVar2 != 0) {
                  puVar2 = auStack_80;
                  FUN_10ae1fb3c(puVar2,*(undefined8 *)(param_1 + 200));
                  if ((int)puVar2 != 0) {
                    puVar2 = auStack_60;
                    func_0x000107c2b214(puVar2,auStack_80,0xa0000002);
                    if ((int)puVar2 != 0) {
                      puVar2 = auStack_80;
                      FUN_10ae1fb3c(puVar2,*(undefined4 *)(param_1 + 0xc0));
                      if ((int)puVar2 != 0) {
                        plVar6 = *(long **)(param_1 + 0x90);
                        if (((plVar6 != (long *)0x0) && (*plVar6 != 0)) &&
                           ((*(byte *)(param_1 + 0x1b0) >> 1 & 1) == 0)) {
                          lVar9 = *(long *)plVar6[1];
                          puVar2 = auStack_60;
                          func_0x000107c2b214(puVar2,auStack_80,0xa0000003);
                          if ((int)puVar2 != 0) {
                            puVar2 = auStack_80;
                            func_0x000107c2b21c(puVar2,*(undefined8 *)(lVar9 + 8),
                                                *(undefined8 *)(lVar9 + 0x10));
                            if ((int)puVar2 != 0) goto LAB_10ae6150c;
                          }
                          uVar4 = 0xed;
                          goto LAB_10ae617a8;
                        }
LAB_10ae6150c:
                        puVar2 = auStack_60;
                        func_0x000107c2b214(puVar2,auStack_80,0xa0000004);
                        if ((int)puVar2 != 0) {
                          puVar2 = auStack_80;
                          FUN_10ae1fc08(puVar2,param_1 + 0x65,*(undefined1 *)(param_1 + 100));
                          if ((int)puVar2 != 0) {
                            if (*(long *)(param_1 + 0xb8) != 0) {
                              puVar2 = auStack_60;
                              func_0x000107c2b214(puVar2,auStack_80,0xa0000005);
                              if ((int)puVar2 != 0) {
                                puVar2 = auStack_80;
                                FUN_10ae1fb3c(puVar2,*(undefined8 *)(param_1 + 0xb8));
                                if ((int)puVar2 != 0) goto LAB_10ae61560;
                              }
                              uVar4 = 0xfd;
                              goto LAB_10ae617a8;
                            }
LAB_10ae61560:
                            if (*(long *)(param_1 + 0x88) != 0) {
                              puVar2 = auStack_60;
                              func_0x000107c2b214(puVar2,auStack_80,0xa0000008);
                              if ((int)puVar2 != 0) {
                                uVar10 = *(undefined8 *)(param_1 + 0x88);
                                uVar4 = uVar10;
                                _strlen(uVar10);
                                puVar2 = auStack_80;
                                FUN_10ae1fc08(puVar2,uVar10,uVar4);
                                if ((int)puVar2 != 0) goto LAB_10ae6159c;
                              }
                              uVar4 = 0x107;
                              goto LAB_10ae617a8;
                            }
LAB_10ae6159c:
                            if (*(int *)(param_1 + 0x174) != 0) {
                              puVar2 = auStack_60;
                              func_0x000107c2b214(puVar2,auStack_80,0xa0000009);
                              if ((int)puVar2 != 0) {
                                puVar2 = auStack_80;
                                FUN_10ae1fb3c(puVar2,*(undefined4 *)(param_1 + 0x174));
                                if ((int)puVar2 != 0) goto LAB_10ae615c8;
                              }
                              uVar4 = 0x10f;
                              goto LAB_10ae617a8;
                            }
LAB_10ae615c8:
                            if ((param_3 == 0) && (*(long *)(param_1 + 0xf8) != 0)) {
                              puVar2 = auStack_60;
                              func_0x000107c2b214(puVar2,auStack_80,0xa000000a);
                              if ((int)puVar2 != 0) {
                                puVar2 = auStack_80;
                                FUN_10ae1fc08(puVar2,*(undefined8 *)(param_1 + 0xf0),
                                              *(undefined8 *)(param_1 + 0xf8));
                                if ((int)puVar2 != 0) goto LAB_10ae615f8;
                              }
                              uVar4 = 0x118;
                              goto LAB_10ae617a8;
                            }
LAB_10ae615f8:
                            if ((*(byte *)(param_1 + 0x1b0) >> 1 & 1) != 0) {
                              puVar2 = auStack_60;
                              func_0x000107c2b214(puVar2,auStack_80,0xa000000d);
                              if ((int)puVar2 != 0) {
                                puVar2 = auStack_80;
                                FUN_10ae1fc08(puVar2,param_1 + 0x110,0x20);
                                if ((int)puVar2 != 0) goto LAB_10ae61628;
                              }
                              uVar4 = 0x121;
                              goto LAB_10ae617a8;
                            }
LAB_10ae61628:
                            if (*(char *)(param_1 + 0x170) != '\0') {
                              puVar2 = auStack_60;
                              func_0x000107c2b214(puVar2,auStack_80,0xa000000e);
                              if ((int)puVar2 != 0) {
                                puVar2 = auStack_80;
                                FUN_10ae1fc08(puVar2,param_1 + 0x130,
                                              *(undefined1 *)(param_1 + 0x170));
                                if ((int)puVar2 != 0) goto LAB_10ae61658;
                              }
                              uVar4 = 0x12a;
                              goto LAB_10ae617a8;
                            }
LAB_10ae61658:
                            if (*(long *)(param_1 + 0x100) != 0) {
                              puVar2 = auStack_60;
                              func_0x000107c2b214(puVar2,auStack_80,0xa000000f);
                              if ((int)puVar2 != 0) {
                                puVar2 = auStack_80;
                                FUN_10ae1fc08(puVar2,*(undefined8 *)(*(long *)(param_1 + 0x100) + 8)
                                              ,*(undefined8 *)(*(long *)(param_1 + 0x100) + 0x10));
                                if ((int)puVar2 != 0) goto LAB_10ae61688;
                              }
                              uVar4 = 0x134;
                              goto LAB_10ae617a8;
                            }
LAB_10ae61688:
                            if (*(long *)(param_1 + 0x108) != 0) {
                              puVar2 = auStack_60;
                              func_0x000107c2b214(puVar2,auStack_80,0xa0000010);
                              if ((int)puVar2 != 0) {
                                puVar2 = auStack_80;
                                FUN_10ae1fc08(puVar2,*(undefined8 *)(*(long *)(param_1 + 0x108) + 8)
                                              ,*(undefined8 *)(*(long *)(param_1 + 0x108) + 0x10));
                                if ((int)puVar2 != 0) goto LAB_10ae616b8;
                              }
                              uVar4 = 0x13e;
                              goto LAB_10ae617a8;
                            }
LAB_10ae616b8:
                            if ((*(byte *)(param_1 + 0x1b0) & 1) != 0) {
                              puVar2 = auStack_60;
                              func_0x000107c2b214(puVar2,auStack_80,0xa0000011);
                              if ((int)puVar2 != 0) {
                                puVar2 = auStack_80;
                                FUN_10ae1fc68(puVar2,1);
                                if ((int)puVar2 != 0) goto LAB_10ae616e4;
                              }
                              uVar4 = 0x146;
                              goto LAB_10ae617a8;
                            }
LAB_10ae616e4:
                            if (*(short *)(param_1 + 6) != 0) {
                              puVar2 = auStack_60;
                              func_0x000107c2b214(puVar2,auStack_80,0xa0000012);
                              if ((int)puVar2 != 0) {
                                puVar2 = auStack_80;
                                FUN_10ae1fb3c(puVar2,*(undefined2 *)(param_1 + 6));
                                if ((int)puVar2 != 0) goto LAB_10ae61710;
                              }
                              uVar4 = 0x14e;
                              goto LAB_10ae617a8;
                            }
LAB_10ae61710:
                            uVar5 = (uint)*(byte *)(param_1 + 0x1b0);
                            if (((*(ulong **)(param_1 + 0x90) != (ulong *)0x0) &&
                                ((*(byte *)(param_1 + 0x1b0) >> 1 & 1) == 0)) &&
                               (1 < **(ulong **)(param_1 + 0x90))) {
                              puVar2 = auStack_60;
                              func_0x000107c2b214(puVar2,auStack_80,0xa0000013);
                              if ((int)puVar2 == 0) {
                                uVar4 = 0x158;
                              }
                              else {
                                uVar8 = 1;
                                do {
                                  puVar7 = *(ulong **)(param_1 + 0x90);
                                  if ((puVar7 == (ulong *)0x0) || (*puVar7 <= uVar8)) {
                                    uVar5 = (uint)*(byte *)(param_1 + 0x1b0);
                                    goto LAB_10ae6191c;
                                  }
                                  lVar9 = *(long *)(puVar7[1] + uVar8 * 8);
                                  puVar2 = auStack_80;
                                  func_0x000107c2b21c(puVar2,*(undefined8 *)(lVar9 + 8),
                                                      *(undefined8 *)(lVar9 + 0x10));
                                  uVar8 = uVar8 + 1;
                                } while ((int)puVar2 != 0);
                                uVar4 = 0x15f;
                              }
                              goto LAB_10ae617a8;
                            }
LAB_10ae6191c:
                            if ((uVar5 >> 3 & 1) != 0) {
                              puVar2 = auStack_60;
                              func_0x000107c2b214(puVar2,auStack_80,0xa0000015);
                              if ((int)puVar2 != 0) {
                                puVar2 = auStack_80;
                                func_0x000107c2b214(puVar2,auStack_a0,4);
                                if (((int)puVar2 != 0) &&
                                   (func_0x00010ae1fafc(auStack_a0,*(undefined4 *)(param_1 + 0x178))
                                   , iVar1 != 0)) {
                                  if ((*(byte *)(param_1 + 0x1b0) >> 4 & 1) == 0)
                                  goto LAB_10ae61924;
                                  goto LAB_10ae619a4;
                                }
                              }
                              uVar4 = 0x169;
                              goto LAB_10ae617a8;
                            }
                            if ((uVar5 >> 4 & 1) == 0) {
LAB_10ae61924:
                              puVar2 = auStack_60;
                              func_0x000107c2b214(puVar2,auStack_80,0xa0000016);
                              if ((int)puVar2 != 0) {
                                puVar2 = auStack_80;
                                FUN_10ae1fc68(puVar2,0);
                                if ((int)puVar2 != 0) goto LAB_10ae619a4;
                              }
                              uVar4 = 0x171;
                              goto LAB_10ae617a8;
                            }
LAB_10ae619a4:
                            if (*(short *)(param_1 + 8) != 0) {
                              puVar2 = auStack_60;
                              func_0x000107c2b214(puVar2,auStack_80,0xa0000017);
                              if ((int)puVar2 != 0) {
                                puVar2 = auStack_80;
                                FUN_10ae1fb3c(puVar2,*(undefined2 *)(param_1 + 8));
                                if ((int)puVar2 != 0) goto LAB_10ae619d0;
                              }
                              uVar4 = 0x179;
                              goto LAB_10ae617a8;
                            }
LAB_10ae619d0:
                            if (*(int *)(param_1 + 0x17c) != 0) {
                              puVar2 = auStack_60;
                              func_0x000107c2b214(puVar2,auStack_80,0xa0000018);
                              if ((int)puVar2 != 0) {
                                puVar2 = auStack_80;
                                FUN_10ae1fb3c(puVar2,*(undefined4 *)(param_1 + 0x17c));
                                if ((int)puVar2 != 0) goto LAB_10ae619fc;
                              }
                              uVar4 = 0x180;
                              goto LAB_10ae617a8;
                            }
LAB_10ae619fc:
                            if (*(int *)(param_1 + 0xc0) != *(int *)(param_1 + 0xc4)) {
                              puVar2 = auStack_60;
                              func_0x000107c2b214(puVar2,auStack_80,0xa0000019);
                              if ((int)puVar2 != 0) {
                                puVar2 = auStack_80;
                                FUN_10ae1fb3c(puVar2,*(undefined4 *)(param_1 + 0xc4));
                                if ((int)puVar2 != 0) goto LAB_10ae61a2c;
                              }
                              uVar4 = 0x187;
                              goto LAB_10ae617a8;
                            }
LAB_10ae61a2c:
                            if (*(long *)(param_1 + 0x188) != 0) {
                              puVar2 = auStack_60;
                              func_0x000107c2b214(puVar2,auStack_80,0xa000001a);
                              if ((int)puVar2 != 0) {
                                puVar2 = auStack_80;
                                FUN_10ae1fc08(puVar2,*(undefined8 *)(param_1 + 0x180),
                                              *(undefined8 *)(param_1 + 0x188));
                                if ((int)puVar2 != 0) goto LAB_10ae61a58;
                              }
                              uVar4 = 399;
                              goto LAB_10ae617a8;
                            }
LAB_10ae61a58:
                            if ((*(byte *)(param_1 + 0x1b0) >> 5 & 1) != 0) {
                              puVar2 = auStack_60;
                              func_0x000107c2b214(puVar2,auStack_80,0xa000001b);
                              if ((int)puVar2 != 0) {
                                puVar2 = auStack_80;
                                FUN_10ae1fc68(puVar2,1);
                                if ((int)puVar2 != 0) goto LAB_10ae61a84;
                              }
                              uVar4 = 0x197;
                              goto LAB_10ae617a8;
                            }
LAB_10ae61a84:
                            if (*(long *)(param_1 + 0x1c0) == 0) {
LAB_10ae61ab0:
                              if ((*(byte *)(param_1 + 0x1b0) >> 6 & 1) == 0) {
LAB_10ae61ab8:
                                func_0x000107c2b20c(param_2);
                                return;
                              }
                              puVar2 = auStack_60;
                              func_0x000107c2b214(puVar2,auStack_80,0xa000001d);
                              if ((int)puVar2 != 0) {
                                puVar2 = auStack_80;
                                FUN_10ae1fc08(puVar2,*(undefined8 *)(param_1 + 400),
                                              *(undefined8 *)(param_1 + 0x198));
                                if ((int)puVar2 != 0) {
                                  puVar2 = auStack_60;
                                  func_0x000107c2b214(puVar2,auStack_80,0xa000001e);
                                  if ((int)puVar2 != 0) {
                                    puVar2 = auStack_80;
                                    FUN_10ae1fc08(puVar2,*(undefined8 *)(param_1 + 0x1a0),
                                                  *(undefined8 *)(param_1 + 0x1a8));
                                    if ((int)puVar2 != 0) goto LAB_10ae61ab8;
                                  }
                                }
                              }
                              uVar4 = 0x1ad;
                            }
                            else {
                              puVar2 = auStack_60;
                              func_0x000107c2b214(puVar2,auStack_80,0xa000001c);
                              if ((int)puVar2 != 0) {
                                puVar2 = auStack_80;
                                FUN_10ae1fc08(puVar2,*(undefined8 *)(param_1 + 0x1b8),
                                              *(undefined8 *)(param_1 + 0x1c0));
                                if ((int)puVar2 != 0) goto LAB_10ae61ab0;
                              }
                              uVar4 = 0x1a0;
                            }
                            goto LAB_10ae617a8;
                          }
                        }
                        uVar4 = 0xf6;
                        goto LAB_10ae617a8;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar4 = 0xe2;
LAB_10ae617a8:
  func_0x000107c2b29c(0x10,0,0x41,&UNK_10f6d01eb,uVar4);
  return;
}



/* Entry: 10ae61c08; end: 10ae61ca3;  */

undefined1 * FUN_10ae61c08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  iVar1 = (int)&uStack_50;
  puVar2 = &uStack_50;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  func_0x000107c2b200(&uStack_50,0x100);
  if ((iVar1 == 0) || (FUN_10ae613b0(param_1,&uStack_50,1), (int)param_1 == 0)) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    func_0x000107c2b208(&uStack_50,param_2,param_3);
  }
  func_0x000107c2b204(&uStack_50);
  return (undefined1 *)puVar2;
}



/* Entry: 10ae61ca4; end: 10ae61d1b;  */

long FUN_10ae61ca4(undefined8 param_1,long param_2,long param_3)

{
  long lStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  uStack_30 = param_1;
  lStack_28 = param_2;
  FUN_10ae6059c(&lStack_38,&uStack_30,*(undefined8 *)(param_3 + 8),*(undefined8 *)(param_3 + 0x2c0))
  ;
  if ((lStack_38 != 0) && (lStack_28 != 0)) {
    func_0x000107c2b29c(0x10,0,0xa0,&UNK_10f6d01eb,0x37c);
    func_0x000107c2b874(lStack_38);
    lStack_38 = 0;
  }
  return lStack_38;
}



/* Entry: 10ae61d1c; end: 10ae61e17;  */

void FUN_10ae61d1c(long *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  
  lVar1 = *param_2;
  FUN_10ae61e18(lVar1,*param_1);
  if ((int)lVar1 != 0) {
    if (((int)lVar1 == 2) && (lVar1 = *param_1, *param_1 = 0, lVar1 != 0)) {
      func_0x000107c2b2c0();
    }
    (**(code **)(param_1[6] + 0x28))(param_1);
    param_1 = param_1 + 1;
    plVar4 = (long *)*param_1;
    if (plVar4 == (long *)0x0) {
      uVar2 = 0;
      func_0x000107c2b59c(0);
      func_0x000107c2b718(param_1,uVar2);
      puVar3 = (undefined8 *)*param_1;
      if (puVar3 != (undefined8 *)0x0) {
        lVar1 = *param_2;
        *param_2 = 0;
        func_0x000107c2b5ac(puVar3,lVar1,*puVar3);
        if (puVar3 == (undefined8 *)0x0) {
          if (lVar1 != 0) {
            func_0x000107c2b588(lVar1);
          }
          func_0x000107c2b718(param_1,0);
        }
      }
    }
    else {
      if (*plVar4 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined8 *)plVar4[1];
      }
      func_0x000107c2b588(uVar2);
      param_1 = (long *)*param_1;
      lVar1 = *param_2;
      *param_2 = 0;
      if ((param_1 != (long *)0x0) && (*param_1 != 0)) {
        *(long *)param_1[1] = lVar1;
      }
    }
  }
  return;
}



/* Entry: 10ae61e18; end: 10ae61f17;  */

undefined8 FUN_10ae61e18(long param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = *(undefined8 *)(param_1 + 8);
  uStack_28 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c2b748(&uStack_38,&uStack_30);
  if (uStack_38 == 0) {
    func_0x000107c2b29c(0x10,0,0x89,&UNK_10f6d02cb,0xec);
    return 0;
  }
  iVar1 = *(int *)(uStack_38 + 4);
  if ((iVar1 == 6) || (iVar1 == 0x3b5)) {
LAB_10ae61e74:
    if ((param_2 == 0) || (uVar3 = uStack_38, FUN_10ae62300(uStack_38,param_2), (uVar3 & 1) != 0)) {
      uVar4 = 1;
    }
    else {
      func_0x000107c2b290();
      uVar4 = 2;
    }
  }
  else {
    if (iVar1 == 0x198) {
      puVar2 = &uStack_30;
      func_0x000107c2b74c(puVar2,0);
      if (((ulong)puVar2 & 1) != 0) goto LAB_10ae61e74;
      uVar4 = 0xf9;
    }
    else {
      uVar4 = 0xf1;
    }
    func_0x000107c2b29c(0x10,0,0xe4,&UNK_10f6d02cb,uVar4);
    uVar4 = 0;
  }
  func_0x000107c2b2c0(uStack_38);
  return uVar4;
}



/* Entry: 10ae61f18; end: 10ae61f5f;  */

bool FUN_10ae61f18(long *param_1)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  short *psVar5;
  long *plVar6;
  
  plVar3 = *(long **)(param_1[1] + 0x20);
  plVar6 = (long *)plVar3[1];
  if (((plVar6 == (long *)0x0) || (*plVar6 == 0)) || (*(long *)plVar6[1] == 0)) {
    return false;
  }
  if ((*plVar3 != 0) || (plVar3[5] != 0)) {
    return true;
  }
  lVar2 = *param_1;
  if (((*(byte *)(lVar2 + 0xa4) & 1) != 0) && ((*(byte *)((long)param_1 + 0x619) & 1) != 0)) {
    lVar4 = *(long *)(param_1[1] + 0x20);
    plVar3 = *(long **)(lVar4 + 0x98);
    if (((plVar3 != (long *)0x0) && (*plVar3 != 0)) &&
       ((((*(long *)(lVar4 + 0xa0) != 0 || (*(long *)(lVar4 + 0xa8) != 0)) &&
         (func_0x000107c2b89c(), 0x303 < (uint)lVar2)) && (param_1[0x52] != 0)))) {
      lVar2 = param_1[0x52] * 2;
      psVar5 = (short *)param_1[0x51];
      do {
        lVar2 = lVar2 + -2;
        bVar1 = (short)plVar3[1] == *psVar5;
        psVar5 = psVar5 + 1;
      } while (!bVar1 && lVar2 != 0);
      return bVar1;
    }
  }
  return false;
}



/* Entry: 10ae61f60; end: 10ae621ef;  */

undefined8
FUN_10ae61f60(undefined1 *param_1,undefined8 param_2,long *param_3,long param_4,long *param_5,
             undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lStack_80;
  long lStack_78;
  ulong uStack_70;
  long *plStack_68;
  
  func_0x000107c2b718(param_2,0);
  lVar2 = *param_3;
  *param_3 = 0;
  if (lVar2 != 0) {
    func_0x000107c2b2c0();
  }
  uVar1 = param_5[1] - 3;
  if (2 < (ulong)param_5[1]) {
    lVar2 = 0;
    uVar9 = 0;
    lVar7 = *param_5;
    lVar11 = lVar7 + 3;
    *param_5 = lVar11;
    param_5[1] = uVar1;
    do {
      uVar9 = (ulong)*(byte *)(lVar7 + lVar2) | uVar9 << 8;
      lVar2 = lVar2 + 1;
    } while (lVar2 != 3);
    if (uVar9 <= uVar1) {
      *param_5 = lVar11 + uVar9;
      param_5[1] = uVar1 - uVar9;
      if (uVar9 == 0) {
        return 1;
      }
      plVar3 = (long *)0x0;
      func_0x000107c2b59c();
      plStack_68 = plVar3;
      if (plVar3 == (long *)0x0) {
        *param_1 = 0x50;
        func_0x000107c2b29c(0x10,0,0x41,&UNK_10f6d02cb,0x170);
LAB_10ae621c8:
        uVar8 = 0;
      }
      else {
        lVar2 = 0;
        do {
          uVar1 = uVar9 - 3;
          if (uVar9 < 3) {
LAB_10ae6216c:
            *param_1 = 0x32;
            uVar8 = 0x7f;
            uVar6 = 0x17a;
LAB_10ae621b8:
            func_0x000107c2b29c(0x10,0,uVar8,&UNK_10f6d02cb,uVar6);
            if (lVar2 != 0) {
              func_0x000107c2b2c0(lVar2);
            }
            goto LAB_10ae621c8;
          }
          lVar7 = 0;
          uVar10 = 0;
          do {
            uVar10 = (ulong)*(byte *)(lVar11 + lVar7) | uVar10 << 8;
            lVar7 = lVar7 + 1;
          } while (lVar7 != 3);
          uVar9 = uVar1 - uVar10;
          if ((uVar1 < uVar10) ||
             (lVar11 = lVar11 + 3, lStack_78 = lVar11, uStack_70 = uVar10, uVar10 == 0))
          goto LAB_10ae6216c;
          lVar7 = lVar2;
          if (*plVar3 == 0) {
            func_0x000107c2b748(&lStack_80,&lStack_78);
            lVar7 = lStack_80;
            if (lVar2 != 0) {
              func_0x000107c2b2c0(lVar2);
            }
            if (lVar7 == 0) {
              *param_1 = 0x32;
              goto LAB_10ae621c8;
            }
            if (param_4 != 0) {
              func_0x000107c2b43c(lVar11,uVar10);
            }
          }
          lVar4 = lVar11;
          func_0x000107c34fa0(lVar11,uVar10,0,param_6);
          lVar2 = lVar7;
          if (lVar4 == 0) {
LAB_10ae62198:
            *param_1 = 0x50;
            uVar8 = 0x41;
            uVar6 = 400;
            goto LAB_10ae621b8;
          }
          plVar5 = plVar3;
          func_0x000107c2b5ac(plVar3,lVar4,*plVar3);
          if (plVar5 == (long *)0x0) {
            func_0x000107c2b588(lVar4);
            goto LAB_10ae62198;
          }
          lVar11 = lVar11 + uVar10;
        } while (uVar9 != 0);
        plStack_68 = (long *)0x0;
        func_0x000107c2b718(param_2,plVar3);
        lVar2 = *param_3;
        *param_3 = lVar7;
        if (lVar2 != 0) {
          func_0x000107c2b2c0();
        }
        uVar8 = 1;
      }
      func_0x000107c2b718(&plStack_68,0);
      return uVar8;
    }
  }
  *param_1 = 0x32;
  func_0x000107c2b29c(0x10,0,0x89,&UNK_10f6d02cb,0x165);
  return 0;
}



/* Entry: 10ae621f0; end: 10ae622ff;  */

void FUN_10ae621f0(ulong param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [32];
  
  uVar5 = param_1;
  FUN_10ae61f18();
  if ((uVar5 & 1) == 0) {
    FUN_10ae1fabc(param_2,0);
  }
  else {
    uVar3 = param_2;
    func_0x000107c34f3c(param_2,auStack_50,3);
    if ((int)uVar3 == 0) {
      uVar3 = 0x1a1;
LAB_10ae622e4:
      func_0x000107c2b29c(0x10,0,0x44,&UNK_10f6d02cb,uVar3);
    }
    else {
      puVar4 = *(ulong **)(*(long *)(*(long *)(param_1 + 8) + 0x20) + 8);
      if ((puVar4 != (ulong *)0x0) && (*puVar4 != 0)) {
        uVar5 = 0;
        do {
          lVar6 = *(long *)(puVar4[1] + uVar5 * 8);
          puVar2 = auStack_50;
          func_0x000107c34f3c(puVar2,auStack_70,3);
          if (((int)puVar2 == 0) ||
             (iVar1 = (int)auStack_70,
             func_0x000107c2b21c(auStack_70,*(undefined8 *)(lVar6 + 8),*(undefined8 *)(lVar6 + 0x10)
                                ), iVar1 == 0)) {
LAB_10ae622cc:
            uVar3 = 0x1ad;
            goto LAB_10ae622e4;
          }
          iVar1 = (int)auStack_50;
          func_0x000107c2b20c();
          if (iVar1 == 0) goto LAB_10ae622cc;
          uVar5 = uVar5 + 1;
        } while (uVar5 < *puVar4);
      }
      func_0x000107c2b20c(param_2);
    }
  }
  return;
}



/* Entry: 10ae62300; end: 10ae623c7;  */

void FUN_10ae62300(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  
  if (((*(long *)(param_2 + 0x10) == 0) ||
      (pcVar5 = *(code **)(*(long *)(param_2 + 0x10) + 0x58), pcVar5 == (code *)0x0)) ||
     (lVar2 = param_2, (*pcVar5)(), (int)lVar2 == 0)) {
    FUN_10ae2a5e4(param_1,param_2);
    iVar1 = (int)param_1;
    if (iVar1 < 0) {
      if (iVar1 == -2) {
        uVar3 = 0x80;
        uVar4 = 0x1fe;
      }
      else {
        if (iVar1 != -1) {
          return;
        }
        uVar3 = 0x73;
        uVar4 = 0x1fb;
      }
    }
    else {
      if (iVar1 == 1) {
        return;
      }
      if (iVar1 != 0) {
        return;
      }
      uVar3 = 0x74;
      uVar4 = 0x1f8;
    }
    func_0x000107c2b29c(0xb,0,uVar3,&UNK_10f6d02cb,uVar4);
  }
  return;
}



/* Entry: 10ae623c8; end: 10ae624b3;  */

long FUN_10ae623c8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_2 == 0) {
    func_0x000107c2b29c(0x10,0,0xb5,&UNK_10f6d02cb,0x208);
  }
  else {
    plVar4 = *(long **)(param_1 + 8);
    if (((plVar4 == (long *)0x0) || (*plVar4 == 0)) || (lVar5 = *(long *)plVar4[1], lVar5 == 0)) {
      uVar1 = 0x10;
      uVar2 = 0xad;
      uVar3 = 0x20e;
    }
    else {
      uStack_30 = *(undefined8 *)(lVar5 + 8);
      uStack_28 = *(undefined8 *)(lVar5 + 0x10);
      func_0x000107c2b748(&lStack_38,&uStack_30);
      if (lStack_38 != 0) {
        lVar5 = lStack_38;
        FUN_10ae62300(lStack_38,param_2);
        func_0x000107c2b2c0(lStack_38);
        return lVar5;
      }
      uVar1 = 0xb;
      uVar2 = 0x80;
      uVar3 = 0x217;
    }
    func_0x000107c2b29c(uVar1,0,uVar2,&UNK_10f6d02cb,uVar3);
  }
  return 0;
}



/* Entry: 10ae624b4; end: 10ae626b7;  */

void FUN_10ae624b4(ulong *param_1,long param_2,undefined1 *param_3,long *param_4)

{
  ushort uVar1;
  undefined8 *puVar2;
  ushort *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ushort *puVar7;
  undefined8 uVar8;
  ushort *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puStack_68;
  
  uVar8 = *(undefined8 *)(*(long *)(param_2 + 0x68) + 0x2c0);
  puVar2 = (undefined8 *)0x0;
  func_0x000107c2b59c();
  puStack_68 = puVar2;
  if (puVar2 == (undefined8 *)0x0) {
    *param_3 = 0x50;
    uVar8 = 0x41;
    uVar4 = 0x272;
  }
  else {
    uVar12 = param_4[1] - 2;
    if (1 < (ulong)param_4[1]) {
      puVar7 = (ushort *)*param_4;
      puVar9 = puVar7 + 1;
      *param_4 = (long)puVar9;
      param_4[1] = uVar12;
      uVar1 = *puVar7;
      uVar11 = (ulong)((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8);
      if (uVar11 <= uVar12) {
        *param_4 = (long)puVar9 + uVar11;
        param_4[1] = uVar12 - uVar11;
        uVar12 = *param_1;
        do {
          if (uVar11 == 0) {
            *param_1 = uVar12;
            (*(code *)**(undefined8 **)(*(long *)(param_2 + 0x68) + 8))();
            puVar5 = puStack_68;
            if (((ulong)puVar2 & 1) != 0) {
              puStack_68 = (undefined8 *)0x0;
              goto LAB_10ae62570;
            }
            *param_3 = 0x32;
            uVar8 = 0x89;
            uVar4 = 0x291;
            goto LAB_10ae62568;
          }
          if (uVar11 == 1) {
LAB_10ae62630:
            *param_3 = 0x32;
            uVar8 = 0x7b;
            uVar4 = 0x281;
            goto LAB_10ae62568;
          }
          puVar7 = puVar9 + 1;
          uVar10 = (ulong)((uint)(*puVar9 >> 8) | (*puVar9 & 0xff00ff) << 8);
          uVar6 = uVar11 - 2;
          uVar11 = uVar6 - uVar10;
          if (uVar6 < uVar10) goto LAB_10ae62630;
          puVar3 = puVar7;
          func_0x000107c34fa0(puVar7,uVar10,0,uVar8);
          if (puVar3 == (ushort *)0x0) goto LAB_10ae6260c;
          puVar9 = (ushort *)((long)puVar7 + uVar10);
          puVar5 = puVar2;
          func_0x000107c2b5ac(puVar2,puVar3,*puVar2);
        } while (puVar5 != (undefined8 *)0x0);
        func_0x000107c2b588(puVar3);
LAB_10ae6260c:
        *param_3 = 0x50;
        uVar8 = 0x41;
        uVar4 = 0x28a;
        goto LAB_10ae62568;
      }
    }
    *param_3 = 0x32;
    uVar8 = 0xa2;
    uVar4 = 0x279;
  }
LAB_10ae62568:
  func_0x000107c2b29c(0x10,0,uVar8,&UNK_10f6d02cb,uVar4);
  puVar5 = (undefined8 *)0x0;
LAB_10ae62570:
  *param_1 = (ulong)puVar5;
  func_0x000107c2b718(&puStack_68,0);
  return;
}



/* Entry: 10ae626b8; end: 10ae62787;  */

void FUN_10ae626b8(long *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  long lVar7;
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [32];
  
  uVar2 = param_2;
  func_0x000107c34f3c(param_2,auStack_60,2);
  if ((int)uVar2 != 0) {
    puVar5 = *(ulong **)(param_1[1] + 0x50);
    if (((puVar5 != (ulong *)0x0) ||
        (puVar5 = *(ulong **)(*(long *)(*param_1 + 0x68) + 0x188), puVar5 != (ulong *)0x0)) &&
       (uVar4 = *puVar5, uVar4 != 0)) {
      uVar6 = 0;
      do {
        if (uVar6 < *puVar5) {
          lVar7 = *(long *)(puVar5[1] + uVar6 * 8);
        }
        else {
          lVar7 = 0;
        }
        puVar3 = auStack_60;
        func_0x000107c34f3c(puVar3,auStack_80,2);
        if ((int)puVar3 == 0) {
          return;
        }
        iVar1 = (int)auStack_80;
        func_0x000107c2b21c(auStack_80,*(undefined8 *)(lVar7 + 8),*(undefined8 *)(lVar7 + 0x10));
        if (iVar1 == 0) {
          return;
        }
        uVar6 = uVar6 + 1;
      } while (uVar4 != uVar6);
    }
    func_0x000107c2b20c(param_2);
  }
  return;
}



/* Entry: 10ae62788; end: 10ae629f7;  */

undefined8 FUN_10ae62788(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  long lVar8;
  long *plVar9;
  
  uVar3 = *(uint *)(*(long *)(param_1 + 0x5f8) + 0x18);
  iVar4 = *(int *)(param_2 + 4);
  if (iVar4 == 6) {
    if ((uVar3 & 1) != 0) {
      return 1;
    }
  }
  else {
    uVar1 = 2;
    if (iVar4 != 0x3b5) {
      uVar1 = 0;
    }
    uVar2 = 2;
    if (iVar4 != 0x198) {
      uVar2 = uVar1;
    }
    if ((uVar2 & uVar3) != 0) {
      if (iVar4 != 0x198) {
        return 1;
      }
      plVar9 = *(long **)(param_2 + 8);
      puVar7 = (undefined2 *)&UNK_10e52ade4;
      lVar8 = 0xa8;
      do {
        if (*(int *)(puVar7 + -2) == *(int *)(*plVar9 + 0x28)) {
          FUN_10ae5997c(param_1,*puVar7);
          if (((int)param_1 != 0) && (*(int *)((long)plVar9 + 0x1c) == 4)) {
            return 1;
          }
          break;
        }
        puVar7 = puVar7 + 0xe;
        lVar8 = lVar8 + -0x1c;
      } while (lVar8 != 0);
      uVar5 = 0x6b;
      uVar6 = 0x2ce;
      goto LAB_10ae62858;
    }
  }
  uVar5 = 0xf1;
  uVar6 = 0x2c2;
LAB_10ae62858:
  func_0x000107c2b29c(0x10,0,uVar5,&UNK_10f6d02cb,uVar6);
  return 0;
}



/* Entry: 10ae629f8; end: 10ae62a0f;  */

undefined8 FUN_10ae629f8(long param_1,undefined8 *param_2,long param_3,int *param_4,long param_5)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  undefined8 *puStack_58;
  
  if (*(long *)(param_1 + 8) == 0) {
    return 0;
  }
  plVar5 = *(long **)(*(long *)(param_1 + 8) + 0x20);
  if ((param_3 == 0) || (param_4 == (int *)0x0 && param_5 == 0)) {
    uVar7 = 0x43;
    uVar8 = 0x10c;
  }
  else if ((param_4 == (int *)0x0) || (param_5 == 0)) {
    uVar7 = *param_2;
    FUN_10ae61e18(uVar7,param_4);
    if ((int)uVar7 == 0) {
      return uVar7;
    }
    if ((int)uVar7 != 2) {
      puVar6 = (undefined8 *)0x0;
      func_0x000107c2b59c();
      puStack_58 = puVar6;
      if (puVar6 == (undefined8 *)0x0) {
LAB_10ae62bec:
        uVar7 = 0;
      }
      else {
        lVar11 = 0;
        do {
          lVar10 = param_2[lVar11];
          if (lVar10 == 0) {
            puVar6 = puStack_58;
            func_0x000107c2b5ac(puStack_58,0,*puStack_58);
            if (puVar6 == (undefined8 *)0x0) goto LAB_10ae62bec;
          }
          else {
            piVar1 = (int *)(lVar10 + 0x18);
            iVar9 = *piVar1;
            do {
              if (iVar9 == -1) break;
              iVar2 = *piVar1;
              if (iVar2 == iVar9) {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar9 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
                bVar4 = cVar3 == '\0';
              }
              else {
                bVar4 = false;
                ClearExclusiveLocal();
              }
              iVar9 = iVar2;
            } while (!bVar4);
            puVar6 = puStack_58;
            func_0x000107c2b5ac(puStack_58,lVar10,*puStack_58);
            if (puVar6 == (undefined8 *)0x0) {
              func_0x000107c2b588(lVar10);
              goto LAB_10ae62bec;
            }
          }
          lVar11 = lVar11 + 1;
        } while (lVar11 != param_3);
        if (param_4 != (int *)0x0) {
          iVar9 = *param_4;
          do {
            if (iVar9 == -1) break;
            iVar2 = *param_4;
            if (iVar2 == iVar9) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(param_4,0x10);
              if (bVar4) {
                *param_4 = iVar9 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              bVar4 = cVar3 == '\0';
            }
            else {
              bVar4 = false;
              ClearExclusiveLocal();
            }
            iVar9 = iVar2;
          } while (!bVar4);
        }
        lVar11 = *plVar5;
        *plVar5 = (long)param_4;
        if (lVar11 != 0) {
          func_0x000107c2b2c0();
        }
        puVar6 = puStack_58;
        plVar5[5] = param_5;
        puStack_58 = (undefined8 *)0x0;
        func_0x000107c2b718(plVar5 + 1,puVar6);
        uVar7 = 1;
      }
      func_0x000107c2b718(&puStack_58,0);
      return uVar7;
    }
    uVar7 = 0x112;
    uVar8 = 0x119;
  }
  else {
    uVar7 = 0x113;
    uVar8 = 0x111;
  }
  func_0x000107c2b29c(0x10,0,uVar7,&UNK_10f6d02cb,uVar8);
  return 0;
}



/* Entry: 10ae62a10; end: 10ae62bff;  */

undefined8 FUN_10ae62a10(long *param_1,undefined8 *param_2,long param_3,int *param_4,long param_5)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 *puStack_58;
  
  if ((param_3 == 0) || (param_4 == (int *)0x0 && param_5 == 0)) {
    uVar6 = 0x43;
    uVar7 = 0x10c;
  }
  else if ((param_4 == (int *)0x0) || (param_5 == 0)) {
    uVar6 = *param_2;
    FUN_10ae61e18(uVar6,param_4);
    if ((int)uVar6 == 0) {
      return uVar6;
    }
    if ((int)uVar6 != 2) {
      puVar5 = (undefined8 *)0x0;
      func_0x000107c2b59c();
      puStack_58 = puVar5;
      if (puVar5 == (undefined8 *)0x0) {
LAB_10ae62bec:
        uVar6 = 0;
      }
      else {
        lVar10 = 0;
        do {
          lVar9 = param_2[lVar10];
          if (lVar9 == 0) {
            puVar5 = puStack_58;
            func_0x000107c2b5ac(puStack_58,0,*puStack_58);
            if (puVar5 == (undefined8 *)0x0) goto LAB_10ae62bec;
          }
          else {
            piVar1 = (int *)(lVar9 + 0x18);
            iVar8 = *piVar1;
            do {
              if (iVar8 == -1) break;
              iVar2 = *piVar1;
              if (iVar2 == iVar8) {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar8 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
                bVar4 = cVar3 == '\0';
              }
              else {
                bVar4 = false;
                ClearExclusiveLocal();
              }
              iVar8 = iVar2;
            } while (!bVar4);
            puVar5 = puStack_58;
            func_0x000107c2b5ac(puStack_58,lVar9,*puStack_58);
            if (puVar5 == (undefined8 *)0x0) {
              func_0x000107c2b588(lVar9);
              goto LAB_10ae62bec;
            }
          }
          lVar10 = lVar10 + 1;
        } while (lVar10 != param_3);
        if (param_4 != (int *)0x0) {
          iVar8 = *param_4;
          do {
            if (iVar8 == -1) break;
            iVar2 = *param_4;
            if (iVar2 == iVar8) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(param_4,0x10);
              if (bVar4) {
                *param_4 = iVar8 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              bVar4 = cVar3 == '\0';
            }
            else {
              bVar4 = false;
              ClearExclusiveLocal();
            }
            iVar8 = iVar2;
          } while (!bVar4);
        }
        lVar10 = *param_1;
        *param_1 = (long)param_4;
        if (lVar10 != 0) {
          func_0x000107c2b2c0();
        }
        puVar5 = puStack_58;
        param_1[5] = param_5;
        puStack_58 = (undefined8 *)0x0;
        func_0x000107c2b718(param_1 + 1,puVar5);
        uVar6 = 1;
      }
      func_0x000107c2b718(&puStack_58,0);
      return uVar6;
    }
    uVar6 = 0x112;
    uVar7 = 0x119;
  }
  else {
    uVar6 = 0x113;
    uVar7 = 0x111;
  }
  func_0x000107c2b29c(0x10,0,uVar6,&UNK_10f6d02cb,uVar7);
  return 0;
}



/* Entry: 10ae62c00; end: 10ae62c47;  */

void FUN_10ae62c00(long *param_1)

{
  long lVar1;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  lVar1 = param_1[2];
  param_1[2] = 0;
  if (lVar1 != 0) {
    func_0x000107c2b2c0();
  }
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    func_0x000107c2b588();
  }
  if (param_1 != (long *)0x0) {
    param_1 = param_1 + -1;
    if (*param_1 + 8 != 0) {
      func_0x000107c60ee4(param_1,*param_1 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(param_1);
    return;
  }
  return;
}



/* Entry: 10ae62c48; end: 10ae62c7b;  */

undefined4 FUN_10ae62c48(long param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x18) - 1;
  if (uVar1 < 8) {
    return *(undefined4 *)(&UNK_10e52adb0 + (ulong)uVar1 * 4);
  }
  return 0;
}



/* Entry: 10ae62c7c; end: 10ae62cff;  */

void FUN_10ae62c7c(long *param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  
  *param_4 = 0x50;
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x18))();
  if ((int)plVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010ae62ce8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x28))(param_1,param_3,param_4,param_5,param_6);
    return;
  }
  return;
}



/* Entry: 10ae62d00; end: 10ae62d0f;  */

undefined8 FUN_10ae62d00(void)

{
  return 0;
}



/* Entry: 10ae62d10; end: 10ae62d6f;  */

undefined8 FUN_10ae62d10(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = (ulong)*(uint *)(param_1 + 0x10);
  func_0x000107c2b44c(uVar1);
  lVar2 = uVar1 + 0x10;
  func_0x000107c2b32c(lVar2);
  func_0x00010ae1ee20(param_2,(int)lVar2 + 7U >> 3,*(undefined8 *)(param_1 + 8));
  func_0x000107c2b448(uVar1);
  return param_2;
}



/* Entry: 10ae62d70; end: 10ae62db7;  */

bool FUN_10ae62d70(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_2;
  func_0x000107c2b338(lVar1,param_2[1],0);
  lVar2 = *(long *)(param_1 + 8);
  *(long *)(param_1 + 8) = lVar1;
  if (lVar2 != 0) {
    func_0x000107c2b31c(lVar2);
    lVar1 = *(long *)(param_1 + 8);
  }
  return lVar1 != 0;
}



/* Entry: 10ae62db8; end: 10ae62ddb;  */

void FUN_10ae62db8(long param_1,undefined8 param_2)

{
  func_0x000107c2b21c(param_2,param_1 + 8,0x20);
  return;
}



/* Entry: 10ae62ddc; end: 10ae62e17;  */

bool FUN_10ae62ddc(long param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_2[1];
  if (lVar1 == 0x20) {
    puVar2 = (undefined8 *)*param_2;
    *param_2 = (long)(puVar2 + 4);
    param_2[1] = 0;
    uVar4 = puVar2[1];
    uVar3 = *puVar2;
    uVar5 = puVar2[2];
    *(undefined8 *)(param_1 + 0x20) = puVar2[3];
    *(undefined8 *)(param_1 + 0x18) = uVar5;
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    *(undefined8 *)(param_1 + 8) = uVar3;
  }
  return lVar1 == 0x20;
}



/* Entry: 10ae62e18; end: 10ae62ee3;  */

undefined1 *
FUN_10ae62e18(long param_1,undefined1 *param_2,undefined8 param_3,undefined1 *param_4,long param_5,
             undefined1 *param_6)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long *plVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  long lStack_2060;
  long lStack_2058;
  undefined1 *puStack_2050;
  undefined1 *puStack_2048;
  long lStack_2040;
  undefined1 *puStack_2038;
  undefined1 *puStack_2030;
  long lStack_2028;
  undefined1 **ppuStack_2020;
  code *pcStack_2018;
  long lStack_2008;
  long lStack_2000;
  undefined1 auStack_1ff2 [1400];
  long alStack_1a7a [142];
  undefined1 auStack_1608 [1402];
  undefined4 uStack_108e;
  undefined2 auStack_108a [9];
  long alStack_1078 [4];
  long lStack_1058;
  undefined1 *puStack_1010;
  code *pcStack_1008;
  undefined1 auStack_ff2 [1138];
  undefined1 auStack_b80 [1424];
  long alStack_5f0 [179];
  undefined1 auStack_58 [32];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c2b268(auStack_58,param_1 + 8);
  func_0x000107c2b3c4(alStack_5f0,0x598,&UNK_10e525a20);
  puVar14 = auStack_b80;
  puVar5 = (undefined1 *)(param_1 + 0x28);
  plVar6 = alStack_5f0;
  FUN_10ae432c8();
  if ((int)puVar14 != 0) {
    func_0x00010ae44244(auStack_ff2,auStack_b80);
    puVar5 = auStack_58;
    plVar6 = (long *)0x20;
    puVar14 = param_2;
    func_0x000107c2b21c();
    if ((int)puVar14 != 0) {
      puVar5 = auStack_ff2;
      plVar6 = (long *)0x472;
      func_0x000107c2b21c();
      puVar14 = param_2;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar14;
  }
  ___stack_chk_fail();
  pcStack_1008 = FUN_10ae62ee4;
  lStack_1058 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_2008 = 0;
  lStack_2000 = 0;
  plVar2 = &lStack_2008;
  lVar10 = param_5;
  puStack_1010 = &stack0xfffffffffffffff0;
  func_0x000107c2b684(plVar2,0x40);
  if (((ulong)plVar2 & 1) == 0) {
    puVar7 = (undefined1 *)0x41;
    lVar10 = 0xe6;
LAB_10ae63040:
    puVar9 = &UNK_10f6d09a3;
    plVar2 = (long *)0x0;
    func_0x000107c2b29c(0x10,0,puVar7,&UNK_10f6d09a3);
LAB_10ae63044:
    puVar13 = (undefined1 *)0x0;
  }
  else {
    func_0x000107c2b268(alStack_1078,puVar14 + 8);
    if (param_6 != (undefined1 *)0x492) {
LAB_10ae63020:
      *param_4 = 0x32;
      puVar7 = (undefined1 *)0x6c;
      lVar10 = 0xf2;
      goto LAB_10ae63040;
    }
    uVar12 = (ulong)(uint)-(int)auStack_1608 & 0xf;
    param_6 = auStack_1608 + uVar12;
    puVar7 = param_6;
    FUN_10ae44a88(param_6,param_5 + 0x20);
    if ((int)puVar7 == 0) goto LAB_10ae63020;
    *(undefined2 *)((long)auStack_108a + uVar12) = 0;
    *(undefined4 *)((long)&uStack_108e + uVar12) = 0;
    lVar3 = lStack_2008;
    func_0x000107c2b270(lStack_2008,puVar14 + 8,param_5);
    if ((int)lVar3 == 0) goto LAB_10ae63020;
    func_0x000107c2b3c4(auStack_1ff2,0x578,&UNK_10e525a20);
    iVar1 = (int)alStack_1a7a;
    plVar2 = (long *)(lStack_2008 + 0x20);
    puVar7 = auStack_1608;
    puVar9 = auStack_1ff2;
    FUN_10ae43e54();
    if (iVar1 == 0) goto LAB_10ae63044;
    plVar2 = alStack_1078;
    puVar7 = (undefined1 *)0x20;
    puVar13 = puVar5;
    func_0x000107c2b21c();
    if ((int)puVar13 == 0) goto LAB_10ae63044;
    plVar2 = alStack_1a7a;
    puVar7 = (undefined1 *)0x472;
    puVar13 = puVar5;
    func_0x000107c2b21c();
    if ((int)puVar13 == 0) goto LAB_10ae63044;
    func_0x000107c2b534(*plVar6);
    *plVar6 = lStack_2008;
    plVar6[1] = lStack_2000;
    lStack_2008 = 0;
    lStack_2000 = 0;
    puVar13 = (undefined1 *)0x1;
  }
  lVar3 = lStack_2008;
  func_0x000107c2b534();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1058) {
    return puVar13;
  }
  ___stack_chk_fail();
  func_0x000107c2b534(lStack_2008);
  lVar4 = lVar3;
  __Unwind_Resume(lVar3);
  uVar12 = 0;
  pcStack_2018 = FUN_10ae630a4;
  *puVar7 = 0x50;
  lStack_2060 = 0;
  lStack_2058 = 0;
  puStack_2050 = param_6;
  puStack_2048 = puVar14;
  lStack_2040 = param_5;
  puStack_2038 = param_4;
  puStack_2030 = puVar5;
  lStack_2028 = lVar3;
  ppuStack_2020 = &puStack_1010;
  func_0x000107c2b684(&lStack_2060,0x40);
  if ((uVar12 & 1) == 0) {
    uVar11 = 0x10c;
    uVar8 = 0x41;
LAB_10ae6315c:
    func_0x000107c2b29c(0x10,0,uVar8,&UNK_10f6d09a3,uVar11);
  }
  else {
    if (lVar10 != 0x492) {
LAB_10ae6314c:
      *puVar7 = 0x32;
      uVar11 = 0x113;
      uVar8 = 0x6c;
      goto LAB_10ae6315c;
    }
    lVar10 = lStack_2060;
    func_0x000107c2b270(lStack_2060,lVar4 + 8,puVar9);
    if ((int)lVar10 == 0) goto LAB_10ae6314c;
    lVar10 = lStack_2060 + 0x20;
    FUN_10ae443e8(lVar10,lVar4 + 0x28,puVar9 + 0x20,0x472);
    if ((int)lVar10 != 0) {
      func_0x000107c2b534(*plVar2);
      *plVar2 = lStack_2060;
      plVar2[1] = lStack_2058;
      lStack_2060 = 0;
      lStack_2058 = 0;
      puVar14 = (undefined1 *)0x1;
      goto LAB_10ae63174;
    }
  }
  puVar14 = (undefined1 *)0x0;
LAB_10ae63174:
  func_0x000107c2b534(lStack_2060);
  return puVar14;
}



/* Entry: 10ae62ee4; end: 10ae630a3;  */

undefined8
FUN_10ae62ee4(long param_1,undefined8 param_2,long *param_3,undefined1 *param_4,long param_5,
             undefined1 *param_6)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lStack_1060;
  long lStack_1058;
  undefined1 *puStack_1050;
  long lStack_1048;
  long lStack_1040;
  undefined1 *puStack_1038;
  undefined8 uStack_1030;
  long lStack_1028;
  undefined1 *puStack_1020;
  code *pcStack_1018;
  long lStack_1008;
  long lStack_1000;
  undefined1 auStack_ff2 [1400];
  long alStack_a7a [142];
  undefined1 auStack_608 [1402];
  undefined4 uStack_8e;
  undefined2 auStack_8a [9];
  long alStack_78 [4];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1008 = 0;
  lStack_1000 = 0;
  plVar2 = &lStack_1008;
  lVar7 = param_5;
  func_0x000107c2b684(plVar2,0x40);
  if (((ulong)plVar2 & 1) == 0) {
    puVar5 = (undefined1 *)0x41;
    lVar7 = 0xe6;
LAB_10ae63040:
    puVar6 = &UNK_10f6d09a3;
    plVar2 = (long *)0x0;
    func_0x000107c2b29c(0x10,0,puVar5,&UNK_10f6d09a3);
LAB_10ae63044:
    uVar10 = 0;
  }
  else {
    func_0x000107c2b268(alStack_78,param_1 + 8);
    if (param_6 != (undefined1 *)0x492) {
LAB_10ae63020:
      *param_4 = 0x32;
      puVar5 = (undefined1 *)0x6c;
      lVar7 = 0xf2;
      goto LAB_10ae63040;
    }
    uVar9 = (ulong)(uint)-(int)auStack_608 & 0xf;
    param_6 = auStack_608 + uVar9;
    puVar5 = param_6;
    FUN_10ae44a88(param_6,param_5 + 0x20);
    if ((int)puVar5 == 0) goto LAB_10ae63020;
    *(undefined2 *)((long)auStack_8a + uVar9) = 0;
    *(undefined4 *)((long)&uStack_8e + uVar9) = 0;
    lVar3 = lStack_1008;
    func_0x000107c2b270(lStack_1008,param_1 + 8,param_5);
    if ((int)lVar3 == 0) goto LAB_10ae63020;
    func_0x000107c2b3c4(auStack_ff2,0x578,&UNK_10e525a20);
    iVar1 = (int)alStack_a7a;
    plVar2 = (long *)(lStack_1008 + 0x20);
    puVar5 = auStack_608;
    puVar6 = auStack_ff2;
    FUN_10ae43e54();
    if (iVar1 == 0) goto LAB_10ae63044;
    plVar2 = alStack_78;
    puVar5 = (undefined1 *)0x20;
    uVar10 = param_2;
    func_0x000107c2b21c();
    if ((int)uVar10 == 0) goto LAB_10ae63044;
    plVar2 = alStack_a7a;
    puVar5 = (undefined1 *)0x472;
    uVar10 = param_2;
    func_0x000107c2b21c();
    if ((int)uVar10 == 0) goto LAB_10ae63044;
    func_0x000107c2b534(*param_3);
    *param_3 = lStack_1008;
    param_3[1] = lStack_1000;
    lStack_1008 = 0;
    lStack_1000 = 0;
    uVar10 = 1;
  }
  lVar3 = lStack_1008;
  func_0x000107c2b534();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return uVar10;
  }
  ___stack_chk_fail();
  func_0x000107c2b534(lStack_1008);
  lVar4 = lVar3;
  __Unwind_Resume(lVar3);
  uVar9 = 0;
  pcStack_1018 = FUN_10ae630a4;
  *puVar5 = 0x50;
  lStack_1060 = 0;
  lStack_1058 = 0;
  puStack_1050 = param_6;
  lStack_1048 = param_1;
  lStack_1040 = param_5;
  puStack_1038 = param_4;
  uStack_1030 = param_2;
  lStack_1028 = lVar3;
  puStack_1020 = &stack0xfffffffffffffff0;
  func_0x000107c2b684(&lStack_1060,0x40);
  if ((uVar9 & 1) == 0) {
    uVar8 = 0x10c;
    uVar10 = 0x41;
LAB_10ae6315c:
    func_0x000107c2b29c(0x10,0,uVar10,&UNK_10f6d09a3,uVar8);
  }
  else {
    if (lVar7 != 0x492) {
LAB_10ae6314c:
      *puVar5 = 0x32;
      uVar8 = 0x113;
      uVar10 = 0x6c;
      goto LAB_10ae6315c;
    }
    lVar7 = lStack_1060;
    func_0x000107c2b270(lStack_1060,lVar4 + 8,puVar6);
    if ((int)lVar7 == 0) goto LAB_10ae6314c;
    lVar7 = lStack_1060 + 0x20;
    FUN_10ae443e8(lVar7,lVar4 + 0x28,puVar6 + 0x20,0x472);
    if ((int)lVar7 != 0) {
      func_0x000107c2b534(*plVar2);
      *plVar2 = lStack_1060;
      plVar2[1] = lStack_1058;
      lStack_1060 = 0;
      lStack_1058 = 0;
      uVar10 = 1;
      goto LAB_10ae63174;
    }
  }
  uVar10 = 0;
LAB_10ae63174:
  func_0x000107c2b534(lStack_1060);
  return uVar10;
}



/* Entry: 10ae630a4; end: 10ae631ab;  */

undefined8 FUN_10ae630a4(long param_1,long *param_2,undefined1 *param_3,long param_4,long param_5)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_50;
  long lStack_48;
  
  uVar1 = 0;
  *param_3 = 0x50;
  lStack_50 = 0;
  lStack_48 = 0;
  func_0x000107c2b684(&lStack_50,0x40);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0x10c;
    uVar4 = 0x41;
LAB_10ae6315c:
    func_0x000107c2b29c(0x10,0,uVar4,&UNK_10f6d09a3,uVar3);
  }
  else {
    if (param_5 != 0x492) {
LAB_10ae6314c:
      *param_3 = 0x32;
      uVar3 = 0x113;
      uVar4 = 0x6c;
      goto LAB_10ae6315c;
    }
    lVar2 = lStack_50;
    func_0x000107c2b270(lStack_50,param_1 + 8,param_4);
    if ((int)lVar2 == 0) goto LAB_10ae6314c;
    lVar2 = lStack_50 + 0x20;
    FUN_10ae443e8(lVar2,param_1 + 0x28,param_4 + 0x20,0x472);
    if ((int)lVar2 != 0) {
      func_0x000107c2b534(*param_2);
      *param_2 = lStack_50;
      param_2[1] = lStack_48;
      lStack_50 = 0;
      lStack_48 = 0;
      uVar4 = 1;
      goto LAB_10ae63174;
    }
  }
  uVar4 = 0;
LAB_10ae63174:
  func_0x000107c2b534(lStack_50);
  return uVar4;
}



/* Entry: 10ae631ac; end: 10ae632f3;  */

/* WARNING: Possible PIC construction at 0x00010ae2a0e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ae2a0ec) */

void FUN_10ae631ac(long param_1)

{
  undefined1 *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  *(undefined4 *)(param_1 + 0xa8) = 2;
  lVar3 = param_1;
  FUN_10ae2a128();
  plVar4 = *(long **)(param_1 + 0xb0);
  *(long *)(param_1 + 0xb0) = lVar3;
  if (plVar4 == (long *)0x0) {
    return;
  }
  if (plVar4 != (long *)0x0) {
    puVar1 = &stack0xfffffffffffffff0;
    if (plVar4[1] == 0) {
      func_0x000107c2b534(*plVar4);
      plVar2 = plVar4;
    }
    else {
      unaff_x20 = 0;
      unaff_x30 = 0x10ae2a0ec;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
      plVar2 = *(long **)(*plVar4 + 8);
      unaff_x19 = plVar4;
      unaff_x29 = puVar1;
    }
    if (plVar2 != (long *)0x0) {
      *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      plVar2 = plVar2 + -1;
      if (*plVar2 + 8 != 0) {
        func_0x000107c60ee4(plVar2,*plVar2 + 8);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_11034c310)(plVar2);
      return;
    }
    return;
  }
  return;
}



/* Entry: 10ae632f4; end: 10ae6340f;  */

long FUN_10ae632f4(long param_1)

{
  long lVar1;
  
  func_0x00010ae65098(param_1,0);
  func_0x000107c2b2ec(0x1133118c0,param_1,param_1 + 0x178);
  _pthread_rwlock_destroy(param_1 + 0x10);
  FUN_10ae452b0(*(undefined8 *)(param_1 + 0xf8));
  (**(code **)(*(long *)(param_1 + 8) + 0x80))(param_1);
  func_0x000107c2b534(*(undefined8 *)(param_1 + 0x2e0));
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  func_0x000107c2b69c(param_1 + 0x2a8,0);
  lVar1 = *(long *)(param_1 + 0x2a0);
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  if (lVar1 != 0) {
    func_0x000107c2b2c0();
  }
  func_0x000107c2b534(*(undefined8 *)(param_1 + 0x290));
  *(undefined8 *)(param_1 + 0x298) = 0;
  *(undefined8 *)(param_1 + 0x290) = 0;
  func_0x000107c2b534(*(undefined8 *)(param_1 + 0x280));
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined8 *)(param_1 + 0x280) = 0;
  func_0x000107c2b68c(param_1 + 0x270,0);
  func_0x000107c2b534(*(undefined8 *)(param_1 + 0x260));
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  lVar1 = *(long *)(param_1 + 0x218);
  *(undefined8 *)(param_1 + 0x218) = 0;
  if (lVar1 != 0) {
    func_0x000107c2b534();
  }
  lVar1 = *(long *)(param_1 + 0x208);
  *(undefined8 *)(param_1 + 0x208) = 0;
  if (lVar1 != 0) {
    func_0x000107c2b534();
  }
  lVar1 = *(long *)(param_1 + 0x200);
  *(undefined8 *)(param_1 + 0x200) = 0;
  if (lVar1 != 0) {
    func_0x000107c2b534();
  }
  func_0x000107c2b760(param_1 + 0x1a8,0);
  func_0x000107c2b718(param_1 + 0x188,0);
  func_0x000107c2b6e4(param_1 + 0xe8,0);
  return param_1;
}



/* Entry: 10ae63410; end: 10ae6344f;  */

undefined4 FUN_10ae63410(long param_1)

{
  undefined4 *puVar1;
  undefined4 uStack_14;
  
  puVar1 = (undefined4 *)(param_1 + 0x44);
  if (*(uint *)(param_1 + 0x40) < 4) {
    uStack_14 = 0;
    if (*(uint *)(param_1 + 0x40) != 0) {
      _memcpy(&uStack_14);
    }
    puVar1 = &uStack_14;
  }
  return *puVar1;
}



/* Entry: 10ae63450; end: 10ae634eb;  */

long FUN_10ae63450(long param_1,long param_2)

{
  if (*(int *)(param_1 + 0x40) != *(int *)(param_2 + 0x40)) {
    return 1;
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    param_1 = param_1 + 0x44;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcmp_11034c650)(param_1,param_2 + 0x44);
    return param_1;
  }
  return 0;
}



/* Entry: 10ae634ec; end: 10ae63553;  */

undefined * FUN_10ae634ec(ulong param_1)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 0x110);
  if ((lVar2 != 0) && (*(int *)(lVar2 + 0x10) == 0xd)) {
    *(undefined4 *)(lVar2 + 0x10) = 1;
    *(uint *)(lVar2 + 0x618) = *(uint *)(lVar2 + 0x618) & 0xfffff7ff;
    puVar1 = (undefined *)(lVar2 + 0x5e0);
    func_0x000107c2b6c0(puVar1,0);
    *(ushort *)(*(long *)(param_1 + 0x30) + 0xd4) =
         *(ushort *)(*(long *)(param_1 + 0x30) + 0xd4) & 0xf7ff;
    return puVar1;
  }
  _abort();
  if ((uint)param_1 < 0xf) {
    return (&PTR_DAT_110c8a7b0)[param_1 & 0xffffffff];
  }
  return (undefined *)0x0;
}



/* Entry: 10ae63554; end: 10ae63587;  */

undefined * FUN_10ae63554(uint param_1)

{
  if (param_1 < 0xf) {
    return (&PTR_DAT_110c8a7b0)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10ae63588; end: 10ae635a3;  */

void FUN_10ae63588(long param_1)

{
  FUN_10ae623c8(*(undefined8 **)(param_1 + 0x1a8),**(undefined8 **)(param_1 + 0x1a8));
  return;
}



/* Entry: 10ae635a4; end: 10ae636b3;  */

undefined8 FUN_10ae635a4(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_28;
  
  lVar4 = *(long *)(param_1 + 0x30);
  if ((*(ushort *)(lVar4 + 0xd4) >> 0xe & 1) == 0) {
    uVar2 = 0x42;
    uVar3 = 0x6bc;
  }
  else {
    uVar1 = param_1;
    func_0x000107c34fc8();
    if ((uVar1 & 1) == 0) {
      uVar2 = 0xb6;
      uVar3 = 0x6c1;
    }
    else if ((*(short *)(lVar4 + 0x72) == 0) && (*(int *)(lVar4 + 0xac) == 0)) {
      if (*(long *)(lVar4 + 0x110) == 0) {
        func_0x000107c2b6f4(&uStack_28,param_1);
        func_0x000107c2b6ec(*(long *)(param_1 + 0x30) + 0x110,uStack_28);
        lVar4 = *(long *)(param_1 + 0x30);
        if (*(long *)(lVar4 + 0x110) == 0) {
          return 0;
        }
        *(ushort *)(lVar4 + 0xd4) = *(ushort *)(lVar4 + 0xd4) & 0xbfff;
        *(int *)(*(long *)(param_1 + 0x30) + 0xb8) = *(int *)(*(long *)(param_1 + 0x30) + 0xb8) + 1;
        return 1;
      }
      uVar2 = 0x44;
      uVar3 = 0x6d4;
    }
    else {
      uVar2 = 0xb6;
      uVar3 = 0x6ce;
    }
  }
  func_0x000107c2b29c(0x10,0,uVar2,&UNK_10f6d0a17,uVar3);
  return 0;
}



/* Entry: 10ae636b4; end: 10ae63773;  */

undefined4 FUN_10ae636b4(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x11c);
  *(undefined4 *)(param_1 + 0x11c) = param_2;
  return uVar1;
}



/* Entry: 10ae63774; end: 10ae637fb;  */

void FUN_10ae63774(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 == 0) {
    return;
  }
  func_0x000107c2b7a8();
  if (lVar1 != 0) {
    plVar2 = (long *)(lVar1 + -8);
    if (*plVar2 + 8 != 0) {
      func_0x000107c60ee4(plVar2,*plVar2 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(plVar2);
    return;
  }
  return;
}



/* Entry: 10ae637fc; end: 10ae6398f;  */

ulong FUN_10ae637fc(ulong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  ulong *puVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  
  iVar1 = (int)&uStack_80;
  uVar3 = *param_1;
  puVar7 = (undefined8 *)(*(undefined8 **)(param_1[1] + 0x20))[5];
  uVar6 = **(undefined8 **)(param_1[1] + 0x20);
  puVar2 = param_1;
  func_0x00010ae6295c();
  if ((int)puVar2 != 0) {
    uVar6 = *(undefined8 *)(*(long *)(param_1[1] + 0x20) + 0xa0);
    puVar7 = *(undefined8 **)(*(long *)(param_1[1] + 0x20) + 0xa8);
  }
  if (puVar7 == (undefined8 *)0x0) {
    *param_3 = param_4;
    uStack_78 = 0;
    uStack_80 = 0;
    puStack_68 = (undefined8 *)0x0;
    uStack_70 = 0;
    func_0x000107c34fcc(uVar3,&uStack_80,uVar6,param_5,0);
    uVar5 = 2;
    if ((int)uVar3 != 0) {
      func_0x00010ae2a534(&uStack_80,param_2,param_3,param_6,param_7);
      uVar4 = 2;
      if (iVar1 != 0) {
        uVar4 = 0;
      }
      uVar5 = (ulong)uVar4;
    }
    func_0x000107c2b534(uStack_78);
    if (puStack_68 != (undefined8 *)0x0) {
      (*(code *)*puStack_68)(uStack_70);
    }
  }
  else {
    if ((*(byte *)((long)param_1 + 0x61a) >> 2 & 1) == 0) {
      (*(code *)*puVar7)(uVar3,param_2,param_3,param_4,param_5,param_6,param_7);
    }
    else {
      (*(code *)puVar7[2])(uVar3,param_2,param_3,param_4);
    }
    if ((int)uVar3 == 2) {
      func_0x000107c2b29c(0x10,0,0x11f,&UNK_10f6d0be3,0xdd);
    }
    uVar4 = 0x40000;
    if ((int)uVar3 != 1) {
      uVar4 = 0;
    }
    *(uint *)(param_1 + 0xc3) = (uint)param_1[0xc3] & 0xfffbffff | uVar4;
    uVar5 = uVar3;
  }
  return uVar5;
}



/* Entry: 10ae63990; end: 10ae63aa7;  */

ulong FUN_10ae63990(ulong *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  
  lVar3 = (*(long **)(param_1[1] + 0x20))[5];
  if (lVar3 == 0) {
    lVar3 = **(long **)(param_1[1] + 0x20);
    if (*(int *)(lVar3 + 4) == 6) {
      lVar3 = *(long *)(lVar3 + 8);
      if (lVar3 != 0) {
        func_0x00010ae3ad40(lVar3,param_3,param_2);
        uVar2 = 2;
        if ((int)lVar3 != 0) {
          uVar2 = 0;
        }
        return (ulong)uVar2;
      }
    }
    else {
      func_0x000107c2b29c(6,0,0x6b,&UNK_10f6c5fb5,0xf1);
    }
    func_0x000107c2b29c(0x10,0,0x44,&UNK_10f6d0be3,0x115);
    uVar1 = 2;
  }
  else {
    uVar1 = *param_1;
    if ((*(byte *)((long)param_1 + 0x61a) >> 2 & 1) == 0) {
      (**(code **)(lVar3 + 8))(uVar1,param_2);
    }
    else {
      (**(code **)(lVar3 + 0x10))(uVar1,param_2);
    }
    if ((int)uVar1 == 2) {
      func_0x000107c2b29c(0x10,0,0x11f,&UNK_10f6d0be3,0x10c);
    }
    uVar2 = 0x40000;
    if ((int)uVar1 != 1) {
      uVar2 = 0;
    }
    *(uint *)(param_1 + 0xc3) = (uint)param_1[0xc3] & 0xfffbffff | uVar2;
  }
  return uVar1;
}



/* Entry: 10ae63aa8; end: 10ae63b63;  */

void FUN_10ae63aa8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  ushort *puVar4;
  
  uVar1 = *param_1;
  lVar3 = param_1[0xb9];
  func_0x000107c34fd0(uVar1,lVar3,param_2);
  if ((int)uVar1 != 0) {
    puVar4 = (ushort *)&UNK_110c8a828;
    if ((uint)param_2 != 0xff01) {
      do {
        puVar4 = puVar4 + 0x10;
      } while ((uint)*puVar4 != (uint)param_2);
    }
    if ((char)puVar4[0xc] == '\x01') {
      if (((lVar3 != 0) && (*(long *)(lVar3 + 0x10) != 0)) &&
         (pcVar2 = *(code **)(*(long *)(lVar3 + 0x10) + 0x60), pcVar2 != (code *)0x0)) {
        (*pcVar2)();
      }
      (**(code **)(puVar4 + 8))();
    }
  }
  return;
}



/* Entry: 10ae63b64; end: 10ae63c3f;  */

void FUN_10ae63b64(long *param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  
  iVar6 = param_2[1];
  if (((iVar6 == 6) || (iVar6 == 0x198)) || (iVar6 == 0x3b5)) {
    plVar5 = (long *)param_1[1];
    if (((plVar5 == (long *)0x0) || (*plVar5 == 0)) ||
       ((*(long *)plVar5[1] == 0 ||
        (plVar5 = param_1, FUN_10ae623c8(param_1,param_2), (int)plVar5 != 0)))) {
      iVar6 = *param_2;
      do {
        if (iVar6 == -1) break;
        iVar1 = *param_2;
        if (iVar1 == iVar6) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(param_2,0x10);
          if (bVar3) {
            *param_2 = iVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          bVar3 = cVar2 == '\0';
        }
        else {
          bVar3 = false;
          ClearExclusiveLocal();
        }
        iVar6 = iVar1;
      } while (!bVar3);
      lVar4 = *param_1;
      *param_1 = (long)param_2;
      if (lVar4 != 0) {
        func_0x000107c2b2c0();
      }
    }
  }
  else {
    func_0x000107c2b29c(0x10,0,0xe4,&UNK_10f6d0be3,0x51);
  }
  return;
}



/* Entry: 10ae63c40; end: 10ae63c7b;  */

void FUN_10ae63c40(long param_1,long param_2)

{
  if (param_2 == 0) {
    func_0x000107c2b29c(0x10,0,0x43,&UNK_10f6d0be3,0x18d);
  }
  else {
    FUN_10ae63b64(*(undefined8 *)(param_1 + 0x1a8));
  }
  return;
}



/* Entry: 10ae63c7c; end: 10ae63ce7;  */

long FUN_10ae63c7c(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 8) == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = *(long *)(*(long *)(param_1 + 8) + 0x20);
    lVar1 = lVar2 + 0x38;
    func_0x000107c2b6a8(lVar1,param_3);
    if ((int)lVar1 != 0 && (param_3 & 0x7fffffffffffffff) != 0) {
      _memcpy(*(undefined8 *)(lVar2 + 0x38),param_2);
    }
  }
  return lVar1;
}



/* Entry: 10ae63ce8; end: 10ae63dcf;  */

undefined8 FUN_10ae63ce8(undefined8 param_1,ulong param_2)

{
  short *psVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  short *psStack_30;
  ulong uStack_28;
  
  iVar2 = (int)&psStack_30;
  if (param_2 < 2) {
    uVar4 = 1;
  }
  else {
    psStack_30 = (short *)0x0;
    uStack_28 = 0;
    func_0x000107c2b6a8();
    if (iVar2 == 0) {
LAB_10ae63d9c:
      uVar4 = 0;
    }
    else {
      if ((param_2 & 0x7fffffffffffffff) != 0) {
        _memcpy(psStack_30,param_1);
      }
      _qsort(psStack_30,uStack_28,2,FUN_10ae643dc);
      if (1 < uStack_28) {
        lVar3 = uStack_28 - 1;
        psVar1 = psStack_30;
        do {
          if (*psVar1 == psVar1[1]) {
            func_0x000107c2b29c(0x10,0,0x128,&UNK_10f6d0be3,0x24d);
            goto LAB_10ae63d9c;
          }
          lVar3 = lVar3 + -1;
          psVar1 = psVar1 + 1;
        } while (lVar3 != 0);
      }
      uVar4 = 1;
    }
    func_0x000107c2b534(psStack_30);
  }
  return uVar4;
}



/* Entry: 10ae63dd0; end: 10ae64327;  */

long * FUN_10ae63dd0(long *param_1,char *param_2)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  char cVar6;
  int iVar7;
  undefined2 *puVar8;
  long *plVar9;
  uint uVar10;
  undefined *puVar11;
  long *plVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  long lVar16;
  ulong uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  char *pcStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined4 *puStack_90;
  undefined4 *puStack_88;
  undefined4 uStack_7f;
  char cStack_7b;
  undefined1 uStack_7a;
  undefined1 uStack_79;
  undefined1 uStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  cVar6 = *param_2;
  plVar9 = param_1;
  if (cVar6 == '\0') {
    func_0x000107c2b6a8(param_1,1);
    if ((int)plVar9 != 0) {
      puVar14 = (undefined4 *)0x1;
LAB_10ae63e58:
      plVar12 = (long *)0x0;
      lVar16 = 0;
      bVar2 = false;
      puVar13 = (undefined4 *)0x0;
      puVar15 = (undefined4 *)0x0;
      lVar5 = 0;
      do {
        puVar8 = (undefined2 *)&UNK_10e52b074;
        bVar1 = param_2[(long)puVar13];
        if ((bVar1 == 0) || (bVar1 == 0x3a)) {
          if (lVar5 != 0) {
            *(undefined1 *)((long)&uStack_7f + lVar5) = 0;
            if (bVar2) {
              if (uStack_7f == 0x31414853 && cStack_7b == '\0') {
                iVar7 = 0x40;
              }
              else if (uStack_7f == 0x32414853 &&
                       CONCAT13(uStack_79,CONCAT12(uStack_7a,CONCAT11(cStack_7b,uStack_7f._3_1_)))
                       == 0x363532) {
                iVar7 = 0x2a0;
              }
              else if (uStack_7f == 0x33414853 &&
                       CONCAT13(uStack_79,CONCAT12(uStack_7a,CONCAT11(cStack_7b,uStack_7f._3_1_)))
                       == 0x343833) {
                iVar7 = 0x2a1;
              }
              else {
                if (uStack_7f != 0x35414853 ||
                    CONCAT13(uStack_79,CONCAT12(uStack_7a,CONCAT11(cStack_7b,uStack_7f._3_1_))) !=
                    0x323135) {
                  func_0x000107c2b29c(0x10,0,0x127,&UNK_10f6d0be3,0x2e1);
                  plVar9 = (long *)&UNK_10f6d0cf6;
                  puStack_90 = &uStack_7f;
                  goto LAB_10ae641a8;
                }
                iVar7 = 0x2a2;
              }
              lVar5 = 0x90;
              while ((*(int *)(puVar8 + -4) != (int)puVar15 || (*(int *)(puVar8 + -2) != iVar7))) {
                puVar8 = puVar8 + 6;
                lVar5 = lVar5 + -0xc;
                if (lVar5 == 0) {
                  func_0x000107c2b29c(0x10,0,0x127,&UNK_10f6d0be3,0x2f2);
                  puStack_88 = &uStack_7f;
                  plVar9 = (long *)&UNK_10f6d0d11;
                  puStack_90 = puVar15;
                  goto LAB_10ae641a8;
                }
              }
              lVar5 = 0;
              bVar2 = false;
              *(undefined2 *)(*param_1 + lVar16 * 2) = *puVar8;
              lVar16 = lVar16 + 1;
            }
            else {
              lVar5 = 0x152;
              puVar11 = &UNK_10e52af1a;
              while (puVar3 = puVar11, _strcmp(puVar11,&uStack_7f), (int)puVar3 != 0) {
                puVar11 = puVar11 + 0x1a;
                lVar5 = lVar5 + -0x1a;
                if (lVar5 == 0) {
                  func_0x000107c2b29c(0x10,0,0x127,&UNK_10f6d0be3,0x2d3);
                  plVar9 = (long *)&UNK_10f6d0cd5;
                  puStack_90 = &uStack_7f;
                  goto LAB_10ae641a8;
                }
              }
              lVar5 = 0;
              bVar2 = false;
              *(undefined2 *)(*param_1 + lVar16 * 2) = *(undefined2 *)(puVar11 + -2);
              lVar16 = lVar16 + 1;
            }
            goto LAB_10ae64130;
          }
          func_0x000107c2b29c(0x10,0,0x127,&UNK_10f6d0be3,0x2bf);
          plVar9 = (long *)&UNK_10f6d0cb9;
          puStack_90 = puVar13;
LAB_10ae641a8:
          FUN_10ae2a054();
          goto LAB_10ae641ac;
        }
        uVar10 = (uint)bVar1;
        if (uVar10 != 0x2b) {
          if (lVar5 == 0x16) {
            func_0x000107c2b29c(0x10,0,0x127,&UNK_10f6d0be3,0x2fe);
            plVar9 = (long *)&UNK_10f6d0d29;
            puStack_90 = puVar13;
          }
          else {
            if (((uVar10 - 0x30 < 10 || (uVar10 & 0xffffffdf) - 0x41 < 0x1a) || (uVar10 == 0x5f)) ||
               (bVar1 == 0x2d)) {
              *(byte *)((long)&uStack_7f + lVar5) = bVar1;
              lVar5 = lVar5 + 1;
              goto LAB_10ae64130;
            }
            func_0x000107c2b29c(0x10,0,0x127,&UNK_10f6d0be3,0x307);
            plVar9 = (long *)&UNK_10f6d0d4a;
            puStack_90 = (undefined4 *)(ulong)bVar1;
            puStack_88 = puVar13;
          }
          goto LAB_10ae641a8;
        }
        if (bVar2) {
          func_0x000107c2b29c(0x10,0,0x127,&UNK_10f6d0be3,0x29f);
          plVar9 = (long *)&UNK_10f6d0c55;
          puStack_90 = puVar13;
          goto LAB_10ae641a8;
        }
        if (lVar5 == 0) {
          func_0x000107c2b29c(0x10,0,0x127,&UNK_10f6d0be3,0x2a4);
          plVar9 = (long *)&UNK_10f6d0c78;
          puStack_90 = puVar13;
          goto LAB_10ae641a8;
        }
        *(undefined1 *)((long)&uStack_7f + lVar5) = 0;
        if (uStack_7f == 0x415352) {
          lVar5 = 0;
          bVar2 = true;
          puVar15 = (undefined4 *)0x6;
        }
        else if ((CONCAT17(uStack_78,
                           CONCAT16(uStack_79,CONCAT15(uStack_7a,CONCAT14(cStack_7b,uStack_7f)))) ==
                  0x5353502d415352) || (uStack_7f == 0x535350)) {
          lVar5 = 0;
          bVar2 = true;
          puVar15 = (undefined4 *)0x390;
        }
        else {
          if (uStack_7f != 0x53444345 || CONCAT11(uStack_7a,cStack_7b) != 0x41) {
            func_0x000107c2b29c(0x10,0,0x127,&UNK_10f6d0be3,0x2b2);
            plVar9 = (long *)&UNK_10f6d0c9c;
            puStack_90 = &uStack_7f;
            goto LAB_10ae641a8;
          }
          lVar5 = 0;
          bVar2 = true;
          puVar15 = (undefined4 *)0x198;
        }
LAB_10ae64130:
        plVar9 = (long *)0x343833;
        puVar13 = (undefined4 *)((long)puVar13 + 1);
        plVar12 = (long *)(ulong)(puVar14 <= puVar13);
      } while (puVar13 != puVar14);
      goto LAB_10ae63e3c;
    }
  }
  else {
    puVar14 = (undefined4 *)0x1;
    lVar5 = 1;
    do {
      if (cVar6 == ':') {
        lVar5 = lVar5 + 1;
      }
      cVar6 = param_2[(long)puVar14];
      puVar14 = (undefined4 *)((long)puVar14 + 1);
    } while (cVar6 != '\0');
    func_0x000107c2b6a8(param_1,lVar5);
    if (((ulong)plVar9 & 1) != 0) {
      if (puVar14 != (undefined4 *)0x0) goto LAB_10ae63e58;
LAB_10ae63e3c:
      plVar12 = (long *)0x1;
      goto LAB_10ae641ac;
    }
  }
  plVar12 = (long *)0x0;
LAB_10ae641ac:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return plVar12;
  }
  ___stack_chk_fail();
  iVar7 = (int)&uStack_c0;
  pcStack_98 = FUN_10ae64328;
  plStack_b0 = param_1;
  pcStack_a8 = param_2;
  puStack_a0 = &stack0xfffffffffffffff0;
  if (plVar9[1] == 0) {
    func_0x000107c2b29c(0x10,0,0x42,&UNK_10f6d0be3,0x326);
    plVar9 = (long *)0x0;
  }
  else {
    uStack_c0 = 0;
    uStack_b8 = 0;
    FUN_10ae63dd0();
    if (((iVar7 == 0) || (uVar4 = uStack_c0, FUN_10ae63ce8(uStack_c0,uStack_b8), (uVar4 & 1) == 0))
       || (plVar12 = plVar9, FUN_10ae63c7c(plVar9,uStack_c0,uStack_b8), (int)plVar12 == 0)) {
      plVar9 = (long *)0x0;
    }
    else {
      func_0x000107c2b848(plVar9,uStack_c0,uStack_b8);
    }
    func_0x000107c2b534(uStack_c0);
  }
  return plVar9;
}



/* Entry: 10ae64328; end: 10ae643db;  */

long FUN_10ae64328(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uStack_30;
  undefined8 uStack_28;
  
  iVar1 = (int)&uStack_30;
  if (*(long *)(param_1 + 8) != 0) {
    uStack_30 = 0;
    uStack_28 = 0;
    FUN_10ae63dd0();
    if (((iVar1 == 0) || (uVar2 = uStack_30, FUN_10ae63ce8(uStack_30,uStack_28), (uVar2 & 1) == 0))
       || (lVar3 = param_1, FUN_10ae63c7c(param_1,uStack_30,uStack_28), (int)lVar3 == 0)) {
      param_1 = 0;
    }
    else {
      func_0x000107c2b848(param_1,uStack_30,uStack_28);
    }
    func_0x000107c2b534(uStack_30);
    return param_1;
  }
  func_0x000107c2b29c(0x10,0,0x42,&UNK_10f6d0be3,0x326);
  return 0;
}



/* Entry: 10ae643dc; end: 10ae64457;  */

uint FUN_10ae643dc(ushort *param_1,ushort *param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(*param_2 < *param_1);
  if (*param_1 < *param_2) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* Entry: 10ae64458; end: 10ae645f3;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_10ae64458(long param_1,undefined8 param_2,undefined8 ******param_3)

{
  long *plVar1;
  undefined8 ******ppppppuVar2;
  ulong *puVar3;
  ulong uVar4;
  undefined8 *******pppppppuVar5;
  undefined8 *******pppppppuVar6;
  undefined *puVar7;
  ulong *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uStack_1e0;
  undefined8 ******ppppppuStack_1d8;
  uint uStack_1d0;
  int iStack_1cc;
  undefined8 *******pppppppuStack_1c8;
  ulong uStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 ******ppppppuStack_150;
  undefined8 uStack_148;
  undefined8 ******appppppuStack_140 [2];
  undefined8 *******pppppppuStack_130;
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
  long lStack_98;
  ulong auStack_40 [2];
  
  puVar8 = auStack_40;
  func_0x000107c2b798();
  puVar3 = (ulong *)(param_1 + 0x10);
  _pthread_rwlock_rdlock();
  if ((int)puVar3 == 0) {
    if (((*(long *)(param_1 + 0x200) == 0) ||
        (*(long *)(*(long *)(param_1 + 0x200) + 0x30) - 1U < auStack_40[0])) ||
       ((*(long *)(param_1 + 0x208) != 0 &&
        (*(ulong *)(*(long *)(param_1 + 0x208) + 0x30) <= auStack_40[0])))) {
      puVar3 = (ulong *)(param_1 + 0x10);
      _pthread_rwlock_unlock();
      if ((int)puVar3 == 0) {
        puVar3 = (ulong *)(param_1 + 0x10);
        _pthread_rwlock_wrlock();
        if ((int)puVar3 == 0) {
          if ((*(long *)(param_1 + 0x200) == 0) ||
             (*(long *)(*(long *)(param_1 + 0x200) + 0x30) - 1U < auStack_40[0])) {
            func_0x00010ae6379c();
            plVar11 = (long *)0x0;
            if (puVar3 != (ulong *)0x0) {
              param_3 = (undefined8 ******)&UNK_10e525a20;
              func_0x000107c2b3c4(puVar3,0x10,&UNK_10e525a20);
              func_0x000107c2b3c4(puVar3 + 2,0x10,&UNK_10e525a20);
              puVar8 = (ulong *)0x10;
              func_0x000107c2b3c4(puVar3 + 4);
              puVar3[6] = auStack_40[0] + 0x2a300;
              lVar12 = *(long *)(param_1 + 0x200);
              if (lVar12 != 0) {
                *(long *)(lVar12 + 0x30) = *(long *)(lVar12 + 0x30) + 0x2a300;
                *(undefined8 *)(param_1 + 0x200) = 0;
                lVar14 = *(long *)(param_1 + 0x208);
                *(long *)(param_1 + 0x208) = lVar12;
                if (lVar14 != 0) {
                  func_0x000107c2b534();
                  lVar12 = *(long *)(param_1 + 0x200);
                  *(ulong **)(param_1 + 0x200) = puVar3;
                  if (lVar12 != 0) {
                    func_0x000107c2b534();
                  }
                  goto LAB_10ae64594;
                }
              }
              *(ulong **)(param_1 + 0x200) = puVar3;
              goto LAB_10ae64594;
            }
          }
          else {
LAB_10ae64594:
            if ((*(long *)(param_1 + 0x208) != 0) &&
               (*(ulong *)(*(long *)(param_1 + 0x208) + 0x30) <= auStack_40[0])) {
              *(undefined8 *)(param_1 + 0x208) = 0;
              func_0x000107c2b534();
            }
            plVar11 = (long *)0x1;
          }
          puVar3 = (ulong *)(param_1 + 0x10);
          _pthread_rwlock_unlock();
          if ((int)puVar3 == 0) {
            return plVar11;
          }
        }
      }
    }
    else {
      puVar3 = (ulong *)(param_1 + 0x10);
      _pthread_rwlock_unlock();
      if ((int)puVar3 == 0) {
        return (long *)0x1;
      }
    }
  }
  _abort();
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppuStack_1d8 = (undefined8 ******)0x0;
  pppppppuVar5 = &ppppppuStack_1d8;
  FUN_10ae61c08(param_3,pppppppuVar5,&uStack_1e0);
  ppppppuVar2 = ppppppuStack_1d8;
  if ((int)param_3 == 0) {
    plVar11 = (long *)0xffffffff;
  }
  else {
    uVar13 = *puVar3;
    puVar15 = *(undefined8 **)(*(long *)(uVar13 + 0x70) + 0x2c8);
    if (puVar15 == (undefined8 *)0x0) {
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_128 = 0;
      pppppppuStack_130 = (undefined8 *******)0x0;
      uStack_160 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      lStack_1b8 = 0;
      uStack_1c0 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      if (0x1fe < uStack_1e0 >> 7) {
        pppppppuVar5 = (undefined8 *******)&UNK_10e52b0fd;
        func_0x000107c2b21c(puVar8,&UNK_10e52b0fd,0x10);
        plVar11 = (long *)puVar8;
        goto LAB_10ae6497c;
      }
      lVar12 = *(long *)(uVar13 + 0x70);
      if (*(code **)(lVar12 + 0x210) == (code *)0x0) {
        lVar14 = lVar12;
        FUN_10ae64458();
        if ((int)lVar14 != 0) {
          param_3 = (undefined8 ******)(lVar12 + 0x10);
          _pthread_rwlock_rdlock();
          if ((int)param_3 == 0) {
            pppppppuVar5 = appppppuStack_140;
            func_0x000107c2b3c4(pppppppuVar5,0x10,&UNK_10e525a20);
            FUN_10ae34928();
            pppppppuVar6 = &pppppppuStack_130;
            FUN_10ae340b8();
            if ((int)pppppppuVar6 != 0) {
              lVar14 = *(long *)(lVar12 + 0x200);
              func_0x000107c2b428();
              puVar3 = &uStack_1c0;
              pppppppuVar5 = (undefined8 *******)(lVar14 + 0x10);
              func_0x000107c2b494(puVar3,pppppppuVar5,0x10,pppppppuVar6,0);
              if ((int)puVar3 != 0) {
                uStack_148 = (*(undefined8 **)(lVar12 + 0x200))[1];
                ppppppuStack_150 = (undefined8 ******)**(undefined8 **)(lVar12 + 0x200);
                param_3 = (undefined8 ******)(lVar12 + 0x10);
                _pthread_rwlock_unlock();
                if ((int)param_3 == 0) goto LAB_10ae6477c;
                goto LAB_10ae649e4;
              }
            }
            param_3 = (undefined8 ******)(lVar12 + 0x10);
            _pthread_rwlock_unlock();
            if ((int)param_3 == 0) goto LAB_10ae64978;
          }
LAB_10ae649e4:
          _abort();
          goto LAB_10ae649e8;
        }
LAB_10ae64978:
        plVar11 = (long *)0x0;
      }
      else {
        pppppppuVar5 = &ppppppuStack_150;
        (**(code **)(lVar12 + 0x210))
                  (uVar13,pppppppuVar5,appppppuStack_140,&pppppppuStack_130,&uStack_1c0,1);
        if ((int)uVar13 < 0) goto LAB_10ae64978;
LAB_10ae6477c:
        pppppppuVar5 = &ppppppuStack_150;
        plVar11 = (long *)puVar8;
        func_0x000107c2b21c(puVar8,pppppppuVar5,0x10);
        if ((int)plVar11 == 0) goto LAB_10ae64978;
        pppppppuVar5 = appppppuStack_140;
        plVar11 = (long *)puVar8;
        func_0x000107c2b21c(puVar8,pppppppuVar5,*(undefined4 *)((long)pppppppuStack_130 + 0xc));
        if ((int)plVar11 == 0) goto LAB_10ae64978;
        pppppppuVar5 = &pppppppuStack_1c8;
        plVar11 = (long *)puVar8;
        FUN_10ae1fa6c(puVar8,pppppppuVar5,uStack_1e0 + 0x20);
        if ((int)plVar11 == 0) goto LAB_10ae64978;
        pppppppuVar6 = &pppppppuStack_130;
        pppppppuVar5 = pppppppuStack_1c8;
        FUN_10ae3433c(pppppppuVar6,pppppppuStack_1c8,&iStack_1cc,ppppppuVar2,uStack_1e0);
        if ((int)pppppppuVar6 == 0) goto LAB_10ae64978;
        lVar12 = (long)iStack_1cc;
        pppppppuVar6 = &pppppppuStack_130;
        pppppppuVar5 = (undefined8 *******)((long)pppppppuStack_1c8 + lVar12);
        FUN_10ae34534(pppppppuVar6,pppppppuVar5,&iStack_1cc);
        if ((int)pppppppuVar6 == 0) goto LAB_10ae64978;
        plVar11 = (long *)0x0;
        uVar13 = iStack_1cc + lVar12;
        plVar1 = (long *)*puVar8;
        uVar4 = uVar13 + plVar1[1];
        if ((puVar8[1] != 0) || (CARRY8(uVar13,plVar1[1]))) goto LAB_10ae6497c;
        if ((ulong)plVar1[2] < uVar4) goto LAB_10ae64978;
        plVar1[1] = uVar4;
        (**(code **)(lStack_1b8 + 0x18))
                  ((ulong)&uStack_1c0 | 8,puVar8[2] + (ulong)*(byte *)(puVar8 + 3) + *plVar1,
                   uVar4 - (puVar8[2] + (ulong)*(byte *)(puVar8 + 3)));
        pppppppuVar5 = &pppppppuStack_1c8;
        plVar11 = (long *)puVar8;
        FUN_10ae1fa6c(puVar8,pppppppuVar5,0x40);
        if ((int)plVar11 == 0) goto LAB_10ae64978;
        puVar3 = &uStack_1c0;
        func_0x000107c2b498(puVar3,pppppppuStack_1c8,&uStack_1d0);
        pppppppuVar5 = pppppppuStack_1c8;
        if ((int)puVar3 == 0) goto LAB_10ae64978;
        plVar11 = (long *)0x0;
        lVar12 = *puVar8;
        uVar13 = *(ulong *)(lVar12 + 8) + (ulong)uStack_1d0;
        if ((puVar8[1] == 0) && (!CARRY8(*(ulong *)(lVar12 + 8),(ulong)uStack_1d0))) {
          if (*(ulong *)(lVar12 + 0x10) < uVar13) goto LAB_10ae64978;
          *(ulong *)(lVar12 + 8) = uVar13;
          plVar11 = (long *)0x1;
        }
      }
LAB_10ae6497c:
      func_0x000107c2b49c(&uStack_1c0);
      FUN_10ae33ff8(&pppppppuStack_130);
    }
    else {
      uVar4 = uVar13;
      (*(code *)*puVar15)();
      if (CARRY8(uVar4,uStack_1e0)) {
        uVar9 = 0x45;
        uVar10 = 0x21c;
LAB_10ae64684:
        pppppppuVar5 = (undefined8 *******)0x0;
        func_0x000107c2b29c(0x10,0,uVar9,&UNK_10f6d0d71,uVar10);
      }
      else {
        pppppppuVar5 = &pppppppuStack_130;
        plVar11 = (long *)puVar8;
        FUN_10ae1fa6c(puVar8,pppppppuVar5,uVar4 + uStack_1e0);
        if ((int)plVar11 != 0) {
          pppppppuVar5 = pppppppuStack_130;
          (*(code *)puVar15[1])
                    (uVar13,pppppppuStack_130,&uStack_1c0,uVar4 + uStack_1e0,ppppppuVar2,uStack_1e0)
          ;
          if ((int)uVar13 == 0) {
            uVar9 = 0x114;
            uVar10 = 0x228;
            goto LAB_10ae64684;
          }
          plVar11 = (long *)0x0;
          lVar12 = *puVar8;
          uVar13 = *(ulong *)(lVar12 + 8) + uStack_1c0;
          if ((puVar8[1] == 0) && (!CARRY8(*(ulong *)(lVar12 + 8),uStack_1c0))) {
            if (*(ulong *)(lVar12 + 0x10) < uVar13) goto LAB_10ae64748;
            *(ulong *)(lVar12 + 8) = uVar13;
            plVar11 = (long *)0x1;
          }
          goto LAB_10ae6498c;
        }
      }
LAB_10ae64748:
      plVar11 = (long *)0x0;
    }
LAB_10ae6498c:
    param_3 = ppppppuStack_1d8;
    func_0x000107c2b534();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return plVar11;
  }
  ___stack_chk_fail();
LAB_10ae649e8:
  func_0x000107c2b49c(&uStack_1c0);
  FUN_10ae33ff8(&pppppppuStack_130);
  __Unwind_Resume();
  if (pppppppuVar5 != (undefined8 *******)0x0) {
    if (*(char *)((long)pppppppuVar5 + 100) == *(char *)(param_3[1][4] + 0xe)) {
      if (*(char *)((long)pppppppuVar5 + 100) != '\0') {
        puVar7 = (undefined *)((long)pppppppuVar5 + 0x65);
        _memcmp(puVar7,(long)param_3[1][4] + 0x71);
        return (long *)(ulong)((int)puVar7 == 0);
      }
      return (long *)0x1;
    }
  }
  return (long *)0x0;
}



/* Entry: 10ae645f4; end: 10ae64a0b;  */

long * FUN_10ae645f4(ulong *param_1,long *param_2,undefined8 *****param_3)

{
  long *plVar1;
  undefined8 ****ppppuVar2;
  ulong uVar3;
  undefined8 ******ppppppuVar4;
  undefined8 ******ppppppuVar5;
  ulong *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uStack_1a0;
  undefined8 ****ppppuStack_198;
  uint uStack_190;
  int iStack_18c;
  undefined8 *****pppppuStack_188;
  ulong uStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 ****ppppuStack_110;
  undefined8 uStack_108;
  undefined8 ****appppuStack_100 [2];
  undefined8 *****pppppuStack_f0;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuStack_198 = (undefined8 *****)0x0;
  ppppppuVar4 = (undefined8 ******)&ppppuStack_198;
  FUN_10ae61c08(param_3,ppppppuVar4,&uStack_1a0);
  ppppuVar2 = ppppuStack_198;
  if ((int)param_3 == 0) {
    plVar10 = (long *)0xffffffff;
  }
  else {
    uVar12 = *param_1;
    puVar14 = *(undefined8 **)(*(long *)(uVar12 + 0x70) + 0x2c8);
    if (puVar14 == (undefined8 *)0x0) {
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_e8 = 0;
      pppppuStack_f0 = (undefined8 ******)0x0;
      uStack_120 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      lStack_178 = 0;
      uStack_180 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      if (0x1fe < uStack_1a0 >> 7) {
        ppppppuVar4 = (undefined8 ******)&UNK_10e52b0fd;
        func_0x000107c2b21c(param_2,&UNK_10e52b0fd,0x10);
        plVar10 = param_2;
        goto LAB_10ae6497c;
      }
      lVar11 = *(long *)(uVar12 + 0x70);
      if (*(code **)(lVar11 + 0x210) == (code *)0x0) {
        lVar13 = lVar11;
        FUN_10ae64458();
        if ((int)lVar13 != 0) {
          param_3 = (undefined8 *****)(lVar11 + 0x10);
          _pthread_rwlock_rdlock();
          if ((int)param_3 == 0) {
            ppppppuVar4 = (undefined8 ******)appppuStack_100;
            func_0x000107c2b3c4(ppppppuVar4,0x10,&UNK_10e525a20);
            FUN_10ae34928();
            ppppppuVar5 = &pppppuStack_f0;
            FUN_10ae340b8();
            if ((int)ppppppuVar5 != 0) {
              lVar13 = *(long *)(lVar11 + 0x200);
              func_0x000107c2b428();
              puVar6 = &uStack_180;
              ppppppuVar4 = (undefined8 ******)(lVar13 + 0x10);
              func_0x000107c2b494(puVar6,ppppppuVar4,0x10,ppppppuVar5,0);
              if ((int)puVar6 != 0) {
                uStack_108 = (*(undefined8 **)(lVar11 + 0x200))[1];
                ppppuStack_110 = (undefined8 ****)**(undefined8 **)(lVar11 + 0x200);
                param_3 = (undefined8 *****)(lVar11 + 0x10);
                _pthread_rwlock_unlock();
                if ((int)param_3 == 0) goto LAB_10ae6477c;
                goto LAB_10ae649e4;
              }
            }
            param_3 = (undefined8 *****)(lVar11 + 0x10);
            _pthread_rwlock_unlock();
            if ((int)param_3 == 0) goto LAB_10ae64978;
          }
LAB_10ae649e4:
          _abort();
          goto LAB_10ae649e8;
        }
LAB_10ae64978:
        plVar10 = (long *)0x0;
      }
      else {
        ppppppuVar4 = (undefined8 ******)&ppppuStack_110;
        (**(code **)(lVar11 + 0x210))
                  (uVar12,ppppppuVar4,appppuStack_100,&pppppuStack_f0,&uStack_180,1);
        if ((int)uVar12 < 0) goto LAB_10ae64978;
LAB_10ae6477c:
        ppppppuVar4 = (undefined8 ******)&ppppuStack_110;
        plVar10 = param_2;
        func_0x000107c2b21c(param_2,ppppppuVar4,0x10);
        if ((int)plVar10 == 0) goto LAB_10ae64978;
        ppppppuVar4 = (undefined8 ******)appppuStack_100;
        plVar10 = param_2;
        func_0x000107c2b21c(param_2,ppppppuVar4,*(undefined4 *)((long)pppppuStack_f0 + 0xc));
        if ((int)plVar10 == 0) goto LAB_10ae64978;
        ppppppuVar4 = &pppppuStack_188;
        plVar10 = param_2;
        FUN_10ae1fa6c(param_2,ppppppuVar4,uStack_1a0 + 0x20);
        if ((int)plVar10 == 0) goto LAB_10ae64978;
        ppppppuVar5 = &pppppuStack_f0;
        ppppppuVar4 = (undefined8 ******)pppppuStack_188;
        FUN_10ae3433c(ppppppuVar5,pppppuStack_188,&iStack_18c,ppppuVar2,uStack_1a0);
        if ((int)ppppppuVar5 == 0) goto LAB_10ae64978;
        lVar11 = (long)iStack_18c;
        ppppppuVar5 = &pppppuStack_f0;
        ppppppuVar4 = (undefined8 ******)((long)pppppuStack_188 + lVar11);
        FUN_10ae34534(ppppppuVar5,ppppppuVar4,&iStack_18c);
        if ((int)ppppppuVar5 == 0) goto LAB_10ae64978;
        plVar10 = (long *)0x0;
        uVar12 = iStack_18c + lVar11;
        plVar1 = (long *)*param_2;
        uVar3 = uVar12 + plVar1[1];
        if ((param_2[1] != 0) || (CARRY8(uVar12,plVar1[1]))) goto LAB_10ae6497c;
        if ((ulong)plVar1[2] < uVar3) goto LAB_10ae64978;
        plVar1[1] = uVar3;
        (**(code **)(lStack_178 + 0x18))
                  ((ulong)&uStack_180 | 8,param_2[2] + (ulong)*(byte *)(param_2 + 3) + *plVar1,
                   uVar3 - (param_2[2] + (ulong)*(byte *)(param_2 + 3)));
        ppppppuVar4 = &pppppuStack_188;
        plVar10 = param_2;
        FUN_10ae1fa6c(param_2,ppppppuVar4,0x40);
        if ((int)plVar10 == 0) goto LAB_10ae64978;
        puVar6 = &uStack_180;
        func_0x000107c2b498(puVar6,pppppuStack_188,&uStack_190);
        ppppppuVar4 = (undefined8 ******)pppppuStack_188;
        if ((int)puVar6 == 0) goto LAB_10ae64978;
        plVar10 = (long *)0x0;
        lVar11 = *param_2;
        uVar12 = *(ulong *)(lVar11 + 8) + (ulong)uStack_190;
        if ((param_2[1] == 0) && (!CARRY8(*(ulong *)(lVar11 + 8),(ulong)uStack_190))) {
          if (*(ulong *)(lVar11 + 0x10) < uVar12) goto LAB_10ae64978;
          *(ulong *)(lVar11 + 8) = uVar12;
          plVar10 = (long *)0x1;
        }
      }
LAB_10ae6497c:
      func_0x000107c2b49c(&uStack_180);
      FUN_10ae33ff8(&pppppuStack_f0);
    }
    else {
      uVar3 = uVar12;
      (*(code *)*puVar14)();
      if (CARRY8(uVar3,uStack_1a0)) {
        uVar8 = 0x45;
        uVar9 = 0x21c;
LAB_10ae64684:
        ppppppuVar4 = (undefined8 ******)0x0;
        func_0x000107c2b29c(0x10,0,uVar8,&UNK_10f6d0d71,uVar9);
      }
      else {
        ppppppuVar4 = &pppppuStack_f0;
        plVar10 = param_2;
        FUN_10ae1fa6c(param_2,ppppppuVar4,uVar3 + uStack_1a0);
        if ((int)plVar10 != 0) {
          ppppppuVar4 = (undefined8 ******)pppppuStack_f0;
          (*(code *)puVar14[1])
                    (uVar12,pppppuStack_f0,&uStack_180,uVar3 + uStack_1a0,ppppuVar2,uStack_1a0);
          if ((int)uVar12 == 0) {
            uVar8 = 0x114;
            uVar9 = 0x228;
            goto LAB_10ae64684;
          }
          plVar10 = (long *)0x0;
          lVar11 = *param_2;
          uVar12 = *(ulong *)(lVar11 + 8) + uStack_180;
          if ((param_2[1] == 0) && (!CARRY8(*(ulong *)(lVar11 + 8),uStack_180))) {
            if (*(ulong *)(lVar11 + 0x10) < uVar12) goto LAB_10ae64748;
            *(ulong *)(lVar11 + 8) = uVar12;
            plVar10 = (long *)0x1;
          }
          goto LAB_10ae6498c;
        }
      }
LAB_10ae64748:
      plVar10 = (long *)0x0;
    }
LAB_10ae6498c:
    param_3 = (undefined8 *****)ppppuStack_198;
    func_0x000107c2b534();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return plVar10;
  }
  ___stack_chk_fail();
LAB_10ae649e8:
  func_0x000107c2b49c(&uStack_180);
  FUN_10ae33ff8(&pppppuStack_f0);
  __Unwind_Resume();
  if (ppppppuVar4 != (undefined8 ******)0x0) {
    if (*(char *)((long)ppppppuVar4 + 100) == *(char *)(param_3[1][4] + 0xe)) {
      if (*(char *)((long)ppppppuVar4 + 100) == '\0') {
        return (long *)0x1;
      }
      puVar7 = (undefined *)((long)ppppppuVar4 + 0x65);
      _memcmp(puVar7,(long)param_3[1][4] + 0x71);
      return (long *)(ulong)((int)puVar7 == 0);
    }
  }
  return (long *)0x0;
}



/* Entry: 10ae64a0c; end: 10ae64a5f;  */

bool FUN_10ae64a0c(long param_1,long param_2)

{
  long lVar1;
  
  if (param_2 != 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x20);
    if (*(char *)(param_2 + 100) == *(char *)(lVar1 + 0x70)) {
      if (*(char *)(param_2 + 100) != '\0') {
        param_2 = param_2 + 0x65;
        _memcmp(param_2,lVar1 + 0x71);
        return (int)param_2 == 0;
      }
      return true;
    }
  }
  return false;
}



/* Entry: 10ae64a60; end: 10ae64abf;  */

bool FUN_10ae64a60(long param_1,long param_2)

{
  bool bVar1;
  ulong auStack_30 [2];
  
  if (param_2 != 0) {
    func_0x000107c2b798(*(undefined8 *)(param_1 + 0x68),auStack_30);
    if (auStack_30[0] < *(ulong *)(param_2 + 200)) {
      bVar1 = false;
    }
    else {
      bVar1 = auStack_30[0] - *(ulong *)(param_2 + 200) < (ulong)*(uint *)(param_2 + 0xc0);
    }
    return bVar1;
  }
  return false;
}



/* Entry: 10ae64ac0; end: 10ae64b97;  */

void FUN_10ae64ac0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  FUN_10ae64a0c();
  if (((int)param_1 != 0) &&
     (((*(byte *)(lVar1 + 0xa4) ^ *(byte *)(param_2 + 0x1b0) >> 4) & 1) == 0)) {
    FUN_10ae64a60(lVar1,param_2);
  }
  return;
}



/* Entry: 10ae64b98; end: 10ae64fb3;  */

/* WARNING: Removing unreachable block (ram,0x00010ae64f8c) */

ulong FUN_10ae64b98(long *param_1,int **param_2,undefined1 *param_3,undefined1 *param_4,long param_5
                   )

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  int *piVar6;
  ulong uVar7;
  int **ppiVar8;
  int **ppiVar9;
  undefined8 *puVar10;
  int iVar11;
  int *piVar12;
  int **ppiVar13;
  ulong uVar14;
  ulong uVar15;
  int *piVar16;
  undefined1 uVar17;
  long lVar18;
  int *piStack_d8;
  undefined8 uStack_d0;
  int **ppiStack_c8;
  undefined1 *puStack_c0;
  ulong uStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  int *piStack_98;
  long lStack_90;
  undefined1 uStack_81;
  int *piStack_80;
  int iStack_74;
  int *apiStack_70 [2];
  
  piStack_80 = (int *)0x0;
  uStack_81 = 0;
  ppiVar8 = param_2;
  if ((*(byte *)(*param_1 + 0x81) >> 6 & 1) == 0) {
    ppiVar8 = &piStack_98;
    lVar18 = param_5;
    FUN_10ae59824(param_5,ppiVar8,0x23);
    if ((int)lVar18 == 0) goto LAB_10ae64c2c;
    if (lStack_90 == 0) {
      uVar17 = 1;
      goto LAB_10ae64c30;
    }
    FUN_10ae5a6e4(param_1,&piStack_80,&uStack_81,piStack_98,lStack_90,
                  *(undefined8 *)(param_5 + 0x30),*(undefined8 *)(param_5 + 0x38));
    if ((int)param_1 == 1) {
      uVar15 = 0xb;
      goto LAB_10ae64f24;
    }
    if ((int)param_1 == 3) {
      uVar15 = 0;
      goto LAB_10ae64f24;
    }
    uVar17 = 1;
    piVar16 = piStack_80;
  }
  else {
LAB_10ae64c2c:
    uVar17 = 0;
LAB_10ae64c30:
    ppiVar9 = *(int ***)(param_5 + 0x30);
    uVar15 = *(ulong *)(param_5 + 0x38);
    piVar6 = (int *)*param_1;
    piStack_80 = (int *)0x0;
    if (uVar15 - 0x21 < 0xffffffffffffffe0) {
      piVar16 = (int *)0x0;
    }
    else {
      lVar18 = *(long *)(piVar6 + 0x1c);
      if ((*(byte *)(lVar18 + 0x11d) & 1) == 0) {
        ppiVar13 = ppiVar9;
        if (uVar15 < 4) {
          apiStack_70[0] = (int *)((ulong)apiStack_70[0] & 0xffffffff00000000);
          ppiVar13 = apiStack_70;
          ppiVar8 = ppiVar9;
          _memcpy(apiStack_70,ppiVar9,uVar15);
        }
        uVar3 = *(uint *)ppiVar13;
        uVar14 = lVar18 + 0x10;
        _pthread_rwlock_rdlock();
        if ((int)uVar14 != 0) goto LAB_10ae64f74;
        uVar14 = *(ulong *)(*(long *)(*(long *)(piVar6 + 0x1c) + 0xf8) + 0x10);
        uVar7 = 0;
        if (uVar14 != 0) {
          uVar7 = uVar3 / uVar14;
        }
        puVar10 = *(undefined8 **)
                   (*(long *)(*(long *)(*(long *)(piVar6 + 0x1c) + 0xf8) + 8) +
                   ((ulong)uVar3 - uVar7 * uVar14) * 8);
        if (puVar10 == (undefined8 *)0x0) {
LAB_10ae64d80:
          uVar14 = lVar18 + 0x10;
          _pthread_rwlock_unlock();
          if ((int)uVar14 != 0) goto LAB_10ae64f74;
          lVar18 = *(long *)(piVar6 + 0x1c);
          goto LAB_10ae64d90;
        }
        piVar16 = (int *)*puVar10;
        if (uVar15 != (uint)piVar16[0x10]) {
LAB_10ae64d2c:
          for (puVar10 = (undefined8 *)puVar10[1]; puVar10 != (undefined8 *)0x0;
              puVar10 = (undefined8 *)puVar10[1]) {
            piVar16 = (int *)*puVar10;
            if (uVar15 == (uint)piVar16[0x10]) {
              if (uVar15 == 0) goto LAB_10ae64ce8;
              piVar12 = piVar16 + 0x11;
              ppiVar13 = ppiVar9;
              uVar14 = uVar15;
              while( true ) {
                uVar14 = uVar14 - 1;
                if (*(char *)ppiVar13 != (char)*piVar12) break;
                piVar12 = (int *)((long)piVar12 + 1);
                ppiVar13 = (int **)((long)ppiVar13 + 1);
                if (uVar14 == 0) goto LAB_10ae64ce4;
              }
            }
          }
          goto LAB_10ae64d80;
        }
        piVar12 = piVar16 + 0x11;
        ppiVar13 = ppiVar9;
        uVar14 = uVar15;
        do {
          uVar14 = uVar14 - 1;
          if (*(char *)ppiVar13 != (char)*piVar12) goto LAB_10ae64d2c;
          piVar12 = (int *)((long)piVar12 + 1);
          ppiVar13 = (int **)((long)ppiVar13 + 1);
        } while (uVar14 != 0);
LAB_10ae64ce4:
        if (piVar16 == (int *)0x0) goto LAB_10ae64d80;
LAB_10ae64ce8:
        iVar11 = *piVar16;
        do {
          if (iVar11 == -1) break;
          iVar1 = *piVar16;
          if (iVar1 == iVar11) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar16,0x10);
            if (bVar5) {
              *piVar16 = iVar11 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            bVar5 = cVar4 == '\0';
          }
          else {
            bVar5 = false;
            ClearExclusiveLocal();
          }
          iVar11 = iVar1;
        } while (!bVar5);
LAB_10ae64e84:
        uVar14 = lVar18 + 0x10;
        _pthread_rwlock_unlock();
        if ((int)uVar14 != 0) {
LAB_10ae64f74:
          _abort();
          piVar6 = piStack_80;
          piStack_80 = (int *)0x0;
          if (piVar6 != (int *)0x0) {
            func_0x000107c2b874();
          }
          uVar7 = uVar14;
          __Unwind_Resume();
          uStack_d0 = 0;
          pcStack_a8 = FUN_10ae64fb4;
          piVar6 = *ppiVar8;
          uVar15 = *(ulong *)(uVar7 + 0xf8);
          piStack_d8 = (int *)0x0;
          ppiStack_c8 = param_2;
          puStack_c0 = param_3;
          uStack_b8 = uVar14;
          puStack_b0 = &stack0xfffffffffffffff0;
          func_0x000107c2b52c(uVar15,&piStack_d8,piVar6,0x10ae654d8,0x10ae654e4);
          if ((int)uVar15 != 0) {
            *ppiVar8 = piStack_d8;
            if (piStack_d8 != (int *)0x0) {
              if (piStack_d8 == piVar6) {
                return uVar15;
              }
              uVar15 = uVar7;
              func_0x00010ae65474(uVar7);
            }
            if ((*(long *)(piVar6 + 0x3a) != 0) && (*(long *)(piVar6 + 0x38) != 0)) {
              uVar15 = uVar7;
              func_0x00010ae65474(uVar7,piVar6);
            }
            uVar14 = *(ulong *)(uVar7 + 0x100);
            puVar2 = *(undefined8 **)(uVar7 + 0x108);
            puVar10 = (undefined8 *)(uVar7 + 0x110);
            if (puVar2 != (undefined8 *)0x0) {
              puVar10 = puVar2 + 0x1c;
            }
            *puVar10 = piVar6;
            puVar10 = (undefined8 *)(uVar7 + 0x110);
            if (puVar2 != (undefined8 *)0x0) {
              puVar10 = puVar2;
            }
            *(int **)(uVar7 + 0x108) = piVar6;
            *(ulong *)(piVar6 + 0x38) = uVar7 + 0x108;
            *(undefined8 **)(piVar6 + 0x3a) = puVar10;
            while ((uVar14 != 0 && (*(ulong *)(uVar7 + 0x100) < **(ulong **)(uVar7 + 0xf8)))) {
              uVar15 = uVar7;
              FUN_10ae6525c(uVar7,*(undefined8 *)(uVar7 + 0x110),0);
              uVar14 = uVar15 & 1;
            }
          }
          return uVar15;
        }
LAB_10ae64e8c:
        func_0x000107c2b798(*(undefined8 *)(piVar6 + 0x1a),apiStack_70);
        if ((apiStack_70[0] < *(int **)(piVar16 + 0x32)) ||
           ((ulong)(uint)piVar16[0x30] <=
            (ulong)((long)apiStack_70[0] - (long)*(int **)(piVar16 + 0x32)))) {
          FUN_10ae6525c(*(undefined8 *)(piVar6 + 0x1c),piVar16,1);
          func_0x000107c2b874(piVar16);
          goto LAB_10ae64ecc;
        }
      }
      else {
LAB_10ae64d90:
        if (*(code **)(lVar18 + 0x138) != (code *)0x0) {
          iStack_74 = 1;
          piVar16 = piVar6;
          (**(code **)(lVar18 + 0x138))(piVar6,ppiVar9,uVar15,&iStack_74);
          if (piVar16 == (int *)0x0) goto LAB_10ae64f00;
          if (piVar16 == (int *)&UNK_10e52b0fc) {
            uVar15 = 10;
            goto LAB_10ae64f24;
          }
          if (iStack_74 != 0) {
            iVar11 = *piVar16;
            do {
              if (iVar11 == -1) break;
              iVar1 = *piVar16;
              if (iVar1 == iVar11) {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar16,0x10);
                if (bVar5) {
                  *piVar16 = iVar11 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
                bVar5 = cVar4 == '\0';
              }
              else {
                bVar5 = false;
                ClearExclusiveLocal();
              }
              iVar11 = iVar1;
            } while (!bVar5);
          }
          lVar18 = *(long *)(piVar6 + 0x1c);
          if ((*(byte *)(lVar18 + 0x11d) >> 1 & 1) == 0) {
            iVar11 = *piVar16;
            do {
              if (iVar11 == -1) break;
              iVar1 = *piVar16;
              if (iVar1 == iVar11) {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar16,0x10);
                if (bVar5) {
                  *piVar16 = iVar11 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
                bVar5 = cVar4 == '\0';
              }
              else {
                bVar5 = false;
                ClearExclusiveLocal();
              }
              iVar11 = iVar1;
            } while (!bVar5);
            uVar14 = lVar18 + 0x10;
            _pthread_rwlock_wrlock();
            ppiVar8 = ppiVar9;
            if ((int)uVar14 != 0) goto LAB_10ae64f74;
            ppiVar8 = apiStack_70;
            apiStack_70[0] = piVar16;
            FUN_10ae64fb4(lVar18);
            if (apiStack_70[0] != (int *)0x0) {
              func_0x000107c2b874();
            }
            goto LAB_10ae64e84;
          }
          goto LAB_10ae64e8c;
        }
LAB_10ae64ecc:
        piVar16 = (int *)0x0;
      }
      if (piStack_80 != (int *)0x0) {
        func_0x000107c2b874();
      }
    }
  }
LAB_10ae64f00:
  piStack_80 = (int *)0x0;
  piVar6 = *param_2;
  *param_2 = piVar16;
  if (piVar6 != (int *)0x0) {
    func_0x000107c2b874();
  }
  *param_3 = uVar17;
  *param_4 = uStack_81;
  uVar15 = 1;
LAB_10ae64f24:
  piVar6 = piStack_80;
  piStack_80 = (int *)0x0;
  if (piVar6 != (int *)0x0) {
    func_0x000107c2b874();
  }
  return uVar15;
}



/* Entry: 10ae64fb4; end: 10ae65167;  */

void FUN_10ae64fb4(ulong param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lStack_38;
  
  lVar5 = *param_2;
  uVar3 = *(undefined8 *)(param_1 + 0xf8);
  lStack_38 = 0;
  func_0x000107c2b52c(uVar3,&lStack_38,lVar5,0x10ae654d8,0x10ae654e4);
  if ((int)uVar3 != 0) {
    *param_2 = lStack_38;
    if (lStack_38 != 0) {
      if (lStack_38 == lVar5) {
        return;
      }
      func_0x00010ae65474(param_1);
    }
    if ((*(long *)(lVar5 + 0xe8) != 0) && (*(long *)(lVar5 + 0xe0) != 0)) {
      func_0x00010ae65474(param_1,lVar5);
    }
    uVar4 = *(ulong *)(param_1 + 0x100);
    plVar2 = *(long **)(param_1 + 0x108);
    plVar1 = (long *)(param_1 + 0x110);
    if (plVar2 != (long *)0x0) {
      plVar1 = plVar2 + 0x1c;
    }
    *plVar1 = lVar5;
    plVar1 = (long *)(param_1 + 0x110);
    if (plVar2 != (long *)0x0) {
      plVar1 = plVar2;
    }
    *(long *)(param_1 + 0x108) = lVar5;
    *(ulong *)(lVar5 + 0xe0) = param_1 + 0x108;
    *(long **)(lVar5 + 0xe8) = plVar1;
    while ((uVar4 != 0 && (*(ulong *)(param_1 + 0x100) < **(ulong **)(param_1 + 0xf8)))) {
      uVar4 = param_1;
      FUN_10ae6525c(param_1,*(undefined8 *)(param_1 + 0x110),0);
      uVar4 = uVar4 & 1;
    }
  }
  return;
}



/* Entry: 10ae65168; end: 10ae651ab;  */

undefined8 FUN_10ae65168(int *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = *param_1;
  do {
    if (iVar4 == -1) {
      return 1;
    }
    iVar1 = *param_1;
    if (iVar1 == iVar4) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar3) {
        *param_1 = iVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      bVar3 = cVar2 == '\0';
    }
    else {
      bVar3 = false;
      ClearExclusiveLocal();
    }
    iVar4 = iVar1;
  } while (!bVar3);
  return 1;
}



/* Entry: 10ae651ac; end: 10ae6525b;  */

int * FUN_10ae651ac(int *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int *piStack_28;
  
  if (((short)param_1[1] == 0x304) && (param_1[0x5f] != 0)) {
    func_0x000107c2b84c(&piStack_28,param_1,3);
    if (piStack_28 != (int *)0x0) {
      piStack_28[0x5f] = 0;
      *(byte *)(piStack_28 + 0x6c) =
           *(byte *)(piStack_28 + 0x6c) & 0xfb | *(byte *)(param_1 + 0x6c) & 4;
    }
  }
  else {
    iVar4 = *param_1;
    do {
      if (iVar4 == -1) {
        return param_1;
      }
      iVar1 = *param_1;
      if (iVar1 == iVar4) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar3) {
          *param_1 = iVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        bVar3 = cVar2 == '\0';
      }
      else {
        bVar3 = false;
        ClearExclusiveLocal();
      }
      piStack_28 = param_1;
      iVar4 = iVar1;
    } while (!bVar3);
  }
  return piStack_28;
}



/* Entry: 10ae6525c; end: 10ae653a7;  */

/* WARNING: Possible PIC construction at 0x00010ae65398: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ae6539c) */

long * FUN_10ae6525c(long param_1,long *param_2,int param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 **ppuVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  code *pcVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined1 **ppuVar13;
  code *pcStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  
  ppuVar3 = (undefined1 **)&stack0xffffffffffffffc0;
  if (param_2 == (long *)0x0) {
    return (long *)0x0;
  }
  if ((int)param_2[8] == 0) {
    return (long *)0x0;
  }
  plVar5 = param_2;
  if (param_3 == 0) {
LAB_10ae65298:
    lVar9 = *(long *)(param_1 + 0xf8);
    plVar6 = param_2;
    (**(code **)(lVar9 + 0x28))();
    uVar1 = *(ulong *)(lVar9 + 0x10);
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = ((ulong)plVar6 & 0xffffffff) / uVar1;
    }
    puVar12 = (undefined8 *)
              (*(long *)(lVar9 + 8) + (((ulong)plVar6 & 0xffffffff) - uVar2 * uVar1) * 8);
    puVar10 = (undefined8 *)*puVar12;
    plVar11 = (long *)0x0;
    if (puVar10 != (undefined8 *)0x0) {
      iVar4 = (int)*puVar10;
      plVar5 = param_2;
      (**(code **)(lVar9 + 0x20))();
      if (iVar4 != 0) {
        do {
          puVar12 = puVar10;
          puVar10 = (undefined8 *)puVar12[1];
          plVar11 = (long *)0x0;
          if (puVar10 == (undefined8 *)0x0) goto LAB_10ae65310;
          iVar4 = (int)*puVar10;
          plVar5 = param_2;
          (**(code **)(lVar9 + 0x20))();
        } while (iVar4 != 0);
        puVar12 = puVar12 + 1;
      }
      if ((ulong *)*puVar12 == (ulong *)0x0) {
        plVar11 = (long *)0x0;
      }
      else {
        plVar11 = *(long **)*puVar12;
      }
    }
LAB_10ae65310:
    plVar7 = plVar11;
    if (plVar11 == param_2) {
      plVar7 = *(long **)(param_1 + 0xf8);
      FUN_10ae45320(plVar7,param_2,0x10ae654d8,0x10ae654e4);
      plVar5 = param_2;
      func_0x00010ae65474(param_1);
    }
    if (param_3 != 0) {
      plVar6 = (long *)(param_1 + 0x10);
      _pthread_rwlock_unlock();
      if ((int)plVar6 != 0) goto LAB_10ae653a4;
    }
    if (plVar11 != param_2) {
      return (long *)0x0;
    }
    if (*(code **)(param_1 + 0x130) != (code *)0x0) {
      (**(code **)(param_1 + 0x130))(param_1,plVar7);
    }
    pcStack_58 = (code *)0x10ae6539c;
    ppuVar13 = (undefined1 **)&stack0xfffffffffffffff0;
  }
  else {
    plVar6 = (long *)(param_1 + 0x10);
    _pthread_rwlock_wrlock();
    if ((int)plVar6 == 0) goto LAB_10ae65298;
LAB_10ae653a4:
    plVar7 = plVar6;
    _abort();
    ppuVar13 = &puStack_50;
    pcStack_48 = FUN_10ae653a8;
    puStack_50 = &stack0xfffffffffffffff0;
    if ((((*(ushort *)(plVar7[6] + 0xd4) >> 5 & 1) == 0) &&
        (lVar9 = *(long *)(plVar7[6] + 0x110), lVar9 != 0)) && (*(int *)(lVar9 + 0x14) == 0)) {
      func_0x00010ae643f4();
      return (long *)0x1;
    }
    _abort();
    pcStack_58 = FUN_10ae653e0;
    if (((plVar5[1] != 0) && (!CARRY8(plVar7[0x19],(ulong)*(uint *)(plVar7 + 0x18)))) &&
       ((ulong)plVar5[1] <= plVar7[0x19] + (ulong)*(uint *)(plVar7 + 0x18))) {
      return plVar7;
    }
    FUN_10ae45320(plVar5[2],plVar7,0x10ae654d8,0x10ae654e4);
    func_0x00010ae65474(*plVar5,plVar7);
    pcVar8 = *(code **)(*plVar5 + 0x130);
    if (pcVar8 != (code *)0x0) {
      (*pcVar8)(*plVar5,plVar7);
    }
    ppuVar3 = &puStack_50;
  }
  *(long **)((long)ppuVar3 + -0x20) = param_2;
  *(long *)((long)ppuVar3 + -0x18) = param_1;
  *(undefined1 ***)((long)ppuVar3 + -0x10) = ppuVar13;
  *(code **)((long)ppuVar3 + -8) = pcStack_58;
  plVar5 = plVar7;
  if ((plVar7 != (long *)0x0) && (func_0x00010021f0b0(), (int)plVar5 != 0)) {
    func_0x000100229f18();
    if (plVar7 != (long *)0x0) {
      *(undefined8 *)((long)ppuVar3 + -0x20) = *(undefined8 *)((long)ppuVar3 + -0x20);
      *(undefined8 *)((long)ppuVar3 + -0x18) = *(undefined8 *)((long)ppuVar3 + -0x18);
      *(undefined8 *)((long)ppuVar3 + -0x10) = *(undefined8 *)((long)ppuVar3 + -0x10);
      *(undefined8 *)((long)ppuVar3 + -8) = *(undefined8 *)((long)ppuVar3 + -8);
      plVar7 = plVar7 + -1;
      if (*plVar7 + 8 != 0) {
        func_0x000107c60ee4(plVar7,*plVar7 + 8);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_11034c310)(plVar7);
      return plVar7;
    }
    return (long *)0x0;
  }
  return plVar5;
}



/* Entry: 10ae653a8; end: 10ae653df;  */

long * FUN_10ae653a8(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  
  if ((((*(ushort *)(param_1[6] + 0xd4) >> 5 & 1) == 0) &&
      (lVar2 = *(long *)(param_1[6] + 0x110), lVar2 != 0)) && (*(int *)(lVar2 + 0x14) == 0)) {
    func_0x00010ae643f4();
    return (long *)0x1;
  }
  _abort();
  if (((param_2[1] != 0) && (!CARRY8(param_1[0x19],(ulong)*(uint *)(param_1 + 0x18)))) &&
     ((ulong)param_2[1] <= param_1[0x19] + (ulong)*(uint *)(param_1 + 0x18))) {
    return param_1;
  }
  FUN_10ae45320(param_2[2],param_1,0x10ae654d8,0x10ae654e4);
  func_0x00010ae65474(*param_2,param_1);
  pcVar3 = *(code **)(*param_2 + 0x130);
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(*param_2,param_1);
  }
  plVar1 = param_1;
  if ((param_1 != (long *)0x0) && (func_0x00010021f0b0(), (int)plVar1 != 0)) {
    func_0x000100229f18();
    if (param_1 != (long *)0x0) {
      param_1 = param_1 + -1;
      if (*param_1 + 8 != 0) {
        func_0x000107c60ee4(param_1,*param_1 + 8);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_11034c310)(param_1);
      return param_1;
    }
    return (long *)0x0;
  }
  return plVar1;
}



/* Entry: 10ae653e0; end: 10ae6546b;  */

void FUN_10ae653e0(long param_1,long *param_2)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  
  if (((param_2[1] != 0) && (!CARRY8(*(ulong *)(param_1 + 200),(ulong)*(uint *)(param_1 + 0xc0))))
     && ((ulong)param_2[1] <= *(ulong *)(param_1 + 200) + (ulong)*(uint *)(param_1 + 0xc0))) {
    return;
  }
  FUN_10ae45320(param_2[2],param_1,0x10ae654d8,0x10ae654e4);
  func_0x00010ae65474(*param_2,param_1);
  pcVar2 = *(code **)(*param_2 + 0x130);
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(*param_2,param_1);
  }
  if ((param_1 != 0) && (lVar1 = param_1, func_0x00010021f0b0(), (int)lVar1 != 0)) {
    func_0x000100229f18();
    if (param_1 != 0) {
      plVar3 = (long *)(param_1 + -8);
      if (*plVar3 + 8 != 0) {
        func_0x000107c60ee4(plVar3,*plVar3 + 8);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_11034c310)(plVar3);
      return;
    }
    return;
  }
  return;
}



/* Entry: 10ae6546c; end: 10ae65733;  */

void FUN_10ae6546c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x128) = param_2;
  return;
}



/* Entry: 10ae65734; end: 10ae65893;  */

void FUN_10ae65734(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  int ***pppiVar4;
  undefined2 uStack_74;
  undefined1 uStack_72;
  undefined1 uStack_71;
  int **ppiStack_70;
  long alStack_68 [8];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    *(undefined8 *)*param_1 = 0;
  }
  plVar3 = alStack_68;
  pppiVar4 = &ppiStack_70;
  plVar1 = param_1;
  func_0x000107c2b890();
  if ((int)plVar1 != 0) {
    uStack_74 = 0xfe;
    uStack_72 = 0;
    uStack_71 = SUB81(ppiStack_70,0);
    plVar1 = param_1 + 1;
    plVar3 = (long *)*plVar1;
    pppiVar4 = (int ***)0x0;
    func_0x000107c2b418();
    if ((int)plVar1 != 0) {
      plVar3 = (long *)&uStack_74;
      pppiVar4 = (int ***)0x4;
      plVar1 = param_1;
      func_0x000107c2b894();
      if ((int)plVar1 != 0) {
        plVar3 = alStack_68;
        func_0x000107c2b894();
        plVar1 = param_1;
        pppiVar4 = (int ***)ppiStack_70;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (((int *)plVar1[1] == (int *)0x0) || (*(int *)plVar1[1] != *(int *)pppiVar4)) {
    if (*plVar1 == 0) {
      func_0x000107c2b29c(0x10,0,0x44,&UNK_10f6d10e7,0xd8);
    }
    else {
      plVar2 = plVar3;
      func_0x000107c2b418(plVar3,pppiVar4,0);
      if ((int)plVar2 != 0) {
        (**(code **)(*plVar3 + 0x18))(plVar3,((undefined8 *)*plVar1)[1],*(undefined8 *)*plVar1);
      }
    }
  }
  else {
    func_0x000107c2b410(plVar3);
  }
  return;
}



/* Entry: 10ae65894; end: 10ae6596f;  */

undefined8 *
FUN_10ae65894(undefined8 *param_1,undefined1 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  ushort *puVar7;
  undefined8 *puVar8;
  undefined1 uVar9;
  ushort *puVar10;
  long lVar11;
  ushort *puVar12;
  ushort auStack_90 [4];
  undefined1 auStack_88 [64];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = auStack_88;
  puVar7 = auStack_90;
  puVar4 = param_1;
  puVar8 = param_4;
  func_0x000107c2b890();
  if ((int)puVar4 != 0) {
    puVar4 = (undefined8 *)param_1[1];
    puVar8 = param_4 + 2;
    puVar7 = (ushort *)0xc;
    FUN_10ae3c9f4();
    puVar6 = param_2;
    if ((int)puVar4 == 1) {
      *param_3 = 0xc;
    }
    else {
      puVar4 = (undefined8 *)0x0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar4;
  }
  ___stack_chk_fail();
  lVar11 = 4;
  if (**(char **)*puVar4 == '\0') {
    lVar11 = 8;
  }
  puVar12 = (ushort *)&UNK_10e52b190;
  if (**(char **)*puVar4 == '\0') {
    puVar12 = (ushort *)&UNK_10e52b194;
  }
  puVar1 = (ushort *)((long)puVar12 + lVar11);
  do {
    uVar2 = *puVar12;
    puVar5 = puVar4;
    func_0x000107c2b8a0(puVar4,uVar2);
    if (((int)puVar5 != 0) &&
       ((uVar2 != 0x304 || ((*(byte *)((long)puVar4 + 0x61a) >> 6 & 1) == 0)))) {
      lVar11 = puVar8[1];
      puVar10 = (ushort *)*puVar8;
      while (lVar11 != 0) {
        if (lVar11 == 1) {
          func_0x000107c2b29c(0x10,0,0x89,&UNK_10f6d115c,0x139);
          uVar9 = 0x32;
          goto LAB_10ae65a70;
        }
        lVar11 = lVar11 + -2;
        uVar3 = *puVar10;
        puVar10 = puVar10 + 1;
        if (uVar2 == (ushort)(uVar3 >> 8 | uVar3 << 8)) {
          *puVar7 = uVar2;
          return (undefined8 *)0x1;
        }
      }
    }
    puVar12 = puVar12 + 1;
  } while (puVar12 != puVar1);
  func_0x000107c2b29c(0x10,0,0xf0,&UNK_10f6d115c,0x145);
  uVar9 = 0x46;
LAB_10ae65a70:
  *puVar6 = uVar9;
  return (undefined8 *)0x0;
}



/* Entry: 10ae65970; end: 10ae65a97;  */

undefined8
FUN_10ae65970(undefined8 *param_1,undefined1 *param_2,ushort *param_3,undefined8 *param_4)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  ushort *puVar6;
  long lVar7;
  ushort *puVar8;
  
  lVar7 = 4;
  if (**(char **)*param_1 == '\0') {
    lVar7 = 8;
  }
  puVar8 = (ushort *)&UNK_10e52b190;
  if (**(char **)*param_1 == '\0') {
    puVar8 = (ushort *)&UNK_10e52b194;
  }
  puVar1 = (ushort *)((long)puVar8 + lVar7);
  do {
    uVar2 = *puVar8;
    puVar4 = param_1;
    func_0x000107c2b8a0(param_1,uVar2);
    if (((int)puVar4 != 0) &&
       ((uVar2 != 0x304 || ((*(byte *)((long)param_1 + 0x61a) >> 6 & 1) == 0)))) {
      lVar7 = param_4[1];
      puVar6 = (ushort *)*param_4;
      while (lVar7 != 0) {
        if (lVar7 == 1) {
          func_0x000107c2b29c(0x10,0,0x89,&UNK_10f6d115c,0x139);
          uVar5 = 0x32;
          goto LAB_10ae65a70;
        }
        lVar7 = lVar7 + -2;
        uVar3 = *puVar6;
        puVar6 = puVar6 + 1;
        if (uVar2 == (ushort)(uVar3 >> 8 | uVar3 << 8)) {
          *param_3 = uVar2;
          return 1;
        }
      }
    }
    puVar8 = puVar8 + 1;
  } while (puVar8 != puVar1);
  func_0x000107c2b29c(0x10,0,0xf0,&UNK_10f6d115c,0x145);
  uVar5 = 0x46;
LAB_10ae65a70:
  *param_2 = uVar5;
  return 0;
}



/* Entry: 10ae65a98; end: 10ae65b7b;  */

undefined8 FUN_10ae65a98(ulong *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lStack_50;
  long lStack_48;
  
  if (param_1 == (ulong *)0x0) {
    return 1;
  }
  uVar2 = *param_1;
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      if (uVar3 < *param_1) {
        lVar4 = *(long *)(param_1[1] + uVar3 * 8);
      }
      else {
        lVar4 = 0;
      }
      lStack_50 = *(long *)(lVar4 + 8);
      lVar1 = 0;
      func_0x000107c2b1b4(0,&lStack_50,*(undefined8 *)(lVar4 + 0x10),&DAT_110c87418);
      if (lVar1 == 0) {
        return 0;
      }
      lStack_48 = lVar1;
      if (lStack_50 != *(long *)(lVar4 + 8) + *(long *)(lVar4 + 0x10)) {
        func_0x000107c2b1bc(&lStack_48,&DAT_110c87418,0);
        return 0;
      }
      func_0x000107c2b1bc(&lStack_48,&DAT_110c87418,0);
      uVar3 = uVar3 + 1;
    } while (uVar2 != uVar3);
  }
  return 1;
}



/* Entry: 10ae65b7c; end: 10ae65c47;  */

void FUN_10ae65b7c(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  long lStack_38;
  
  lStack_38 = *(long *)(param_1 + 0x18);
  func_0x000107c2b1bc(&lStack_38,&UNK_110c87868,0);
  *(undefined8 *)(param_1 + 0x18) = 0;
  puVar3 = *(ulong **)(param_1 + 0x10);
  if (puVar3 != (ulong *)0x0) {
    uVar1 = *puVar3;
    if (uVar1 != 0) {
      uVar4 = 0;
      do {
        lVar2 = *(long *)(puVar3[1] + uVar4 * 8);
        if (lVar2 != 0) {
          lStack_38 = lVar2;
          func_0x000107c2b1bc(&lStack_38,&UNK_110c87868,0);
          uVar1 = *puVar3;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar1);
    }
    func_0x000107c2b534(puVar3[1]);
    func_0x000107c2b534(puVar3);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  lStack_38 = *(long *)(param_1 + 0x20);
  func_0x000107c2b1bc(&lStack_38,&UNK_110c87868,0);
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 10ae65c48; end: 10ae65c6b;  */

/* WARNING: Possible PIC construction at 0x00010ae4baec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010ae4bb40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010ae4bb60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ae4baf0) */
/* WARNING: Removing unreachable block (ram,0x00010ae4bb44) */

void FUN_10ae65c48(long param_1)

{
  undefined1 *puVar1;
  int iVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *unaff_x19;
  ulong *puVar5;
  ulong *unaff_x20;
  ulong *puVar6;
  ulong uVar7;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  FUN_10ae65b7c();
  puVar3 = *(ulong **)(param_1 + 0x58);
  puVar1 = &stack0xfffffffffffffff0;
  if (puVar3 == (ulong *)0x0) {
    return;
  }
  iVar2 = (int)puVar3 + 0x140;
  func_0x000107c2b58c();
  if (iVar2 == 0) {
    return;
  }
  _pthread_rwlock_destroy(puVar3 + 2);
  puVar5 = (ulong *)puVar3[0x1b];
  if ((puVar5 == (ulong *)0x0) || (*puVar5 == 0)) {
    func_0x000107c2b5a4(puVar5);
    puVar5 = (ulong *)puVar3[1];
    if (puVar5 == (ulong *)0x0) {
      puVar5 = (ulong *)puVar3[0x1c];
      puVar6 = puVar3;
      if (puVar5 != (ulong *)0x0) {
        func_0x000107c34fb0(puVar5);
        unaff_x30 = 0x10ae4bb64;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
        puVar6 = puVar5;
        unaff_x19 = puVar3;
        unaff_x20 = puVar5;
        unaff_x29 = puVar1;
      }
    }
    else {
      uVar4 = *puVar5;
      if (uVar4 != 0) {
        uVar7 = 0;
        do {
          if (*(long *)(puVar5[1] + uVar7 * 8) != 0) {
            FUN_10ae4bb88();
            uVar4 = *puVar5;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar4);
      }
      unaff_x30 = 0x10ae4bb44;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
      puVar6 = (ulong *)puVar5[1];
      unaff_x19 = puVar3;
      unaff_x20 = puVar5;
      unaff_x29 = puVar1;
    }
    goto code_r0x0001001e33e0;
  }
  puVar6 = *(ulong **)puVar5[1];
  uVar4 = puVar6[1];
  if (uVar4 != 0) {
    if (*(code **)(uVar4 + 0x20) != (code *)0x0) {
      (**(code **)(uVar4 + 0x20))(puVar6);
      uVar4 = puVar6[1];
      if (uVar4 == 0) goto LAB_10ae4bae8;
    }
    if (*(code **)(uVar4 + 0x10) != (code *)0x0) {
      (**(code **)(uVar4 + 0x10))(puVar6);
    }
  }
LAB_10ae4bae8:
  unaff_x30 = 0x10ae4baf0;
  register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
  unaff_x19 = puVar3;
  unaff_x20 = puVar5;
  unaff_x29 = puVar1;
code_r0x0001001e33e0:
  if (puVar6 != (ulong *)0x0) {
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    puVar6 = puVar6 + -1;
    if (*puVar6 + 8 != 0) {
      func_0x000107c60ee4(puVar6,*puVar6 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(puVar6);
    return;
  }
  return;
}



/* Entry: 10ae65c6c; end: 10ae65cf7;  */

void FUN_10ae65c6c(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  long lStack_38;
  
  puVar3 = *(ulong **)(param_1 + 0x10);
  if (puVar3 != (ulong *)0x0) {
    uVar1 = *puVar3;
    if (uVar1 != 0) {
      uVar4 = 0;
      do {
        lVar2 = *(long *)(puVar3[1] + uVar4 * 8);
        if (lVar2 != 0) {
          lStack_38 = lVar2;
          func_0x000107c2b1bc(&lStack_38,&UNK_110c87868,0);
          uVar1 = *puVar3;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar1);
    }
    func_0x000107c2b534(puVar3[1]);
    func_0x000107c2b534(puVar3);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



/* Entry: 10ae65cf8; end: 10ae65d3b;  */

void FUN_10ae65cf8(long param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c2b1bc(&uStack_28,&UNK_110c87868,0);
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 10ae65d3c; end: 10ae65e7b;  */

/* WARNING: Possible PIC construction at 0x00010ae65da4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ae65da8) */

void FUN_10ae65d3c(long param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long unaff_x19;
  ulong *unaff_x20;
  ulong *puVar5;
  ulong uVar6;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_40 [8];
  long lStack_38;
  
  puVar1 = &stack0xfffffffffffffff0;
  puVar5 = *(ulong **)(param_1 + 0x58);
  if (puVar5 == (ulong *)0x0) {
    *(undefined8 *)(param_1 + 0x58) = 0;
    uVar2 = *(ulong *)(param_1 + 0x10);
    if (uVar2 == 0) {
      return;
    }
    func_0x000107c34fb0(uVar2);
  }
  else {
    uVar2 = *puVar5;
    if (uVar2 != 0) {
      uVar6 = 0;
      do {
        lVar3 = *(long *)(puVar5[1] + uVar6 * 8);
        if (lVar3 != 0) {
          lStack_38 = lVar3;
          func_0x000107c2b1bc(&lStack_38,&DAT_110c87418,0);
          uVar2 = *puVar5;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar2);
    }
    uVar2 = puVar5[1];
    unaff_x30 = 0x10ae65da8;
    register0x00000008 = (BADSPACEBASE *)auStack_40;
    unaff_x19 = param_1;
    unaff_x20 = puVar5;
    unaff_x29 = puVar1;
  }
  if (uVar2 != 0) {
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    plVar4 = (long *)(uVar2 - 8);
    if (*plVar4 + 8 != 0) {
      func_0x000107c60ee4(plVar4,*plVar4 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(plVar4);
    return;
  }
  return;
}


