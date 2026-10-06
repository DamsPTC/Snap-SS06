/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109754eb8; end: 109755023;  */

long * FUN_109754eb8(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  uint uStack_54;
  
  if (param_1 == 0) {
    return (long *)0x23;
  }
  if (param_2 == (undefined8 *)0x0) {
    return (long *)0x6;
  }
  if (*(long *)(param_1 + 0xb0) == 0) {
    return (long *)0x22;
  }
  *param_2 = 0;
  plVar2 = *(long **)(param_1 + 0xb8);
  lVar7 = *(long *)(*(long *)(param_1 + 0xb0) + 0x18);
  plVar3 = plVar2;
  FUN_1097537e4(plVar2,*(undefined8 *)(lVar7 + 0x50),&uStack_54);
  plVar6 = (long *)(ulong)uStack_54;
  if (uStack_54 == 0) {
    plVar4 = plVar2;
    (*(code *)plVar2[1])(plVar2,0x18);
    if (plVar4 != (long *)0x0) {
      *plVar3 = param_1;
      plVar6 = plVar2;
      (*(code *)plVar2[1])(plVar2,0x48);
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)0x40;
      }
      else {
        plVar6[8] = 0;
        plVar6[5] = 0;
        plVar6[4] = 0;
        plVar6[7] = 0;
        plVar6[6] = 0;
        plVar6[1] = 0;
        *plVar6 = 0;
        plVar6[3] = 0;
        plVar6[2] = 0;
        plVar3[10] = (long)plVar6;
        pcVar5 = *(code **)(lVar7 + 0x70);
        if ((pcVar5 == (code *)0x0) || (plVar6 = plVar3, (*pcVar5)(), (int)plVar6 == 0)) {
          *param_2 = plVar3;
          plVar4[2] = (long)plVar3;
          lVar7 = *(long *)(param_1 + 0xd0);
          *plVar4 = lVar7;
          plVar4[1] = 0;
          puVar1 = (undefined8 *)(param_1 + 200);
          if (lVar7 != 0) {
            puVar1 = (undefined8 *)(lVar7 + 8);
          }
          *puVar1 = plVar4;
          *(long **)(param_1 + 0xd0) = plVar4;
          return (long *)0x0;
        }
      }
      (*(code *)plVar2[2])(plVar2,plVar4);
      goto LAB_109754fdc;
    }
    plVar6 = (long *)0x40;
  }
  if (plVar3 == (long *)0x0) {
    return plVar6;
  }
LAB_109754fdc:
  if (plVar3[10] != 0) {
    (*(code *)plVar2[2])(plVar2);
  }
  plVar3[10] = 0;
  (*(code *)plVar2[2])(plVar2,plVar3);
  return plVar6;
}



/* Entry: 109755024; end: 109755097;  */

void FUN_109755024(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  
  if (*(code **)(param_2 + 0x10) != (code *)0x0) {
    (**(code **)(param_2 + 0x10))(param_2);
  }
  pcVar1 = *(code **)(*(long *)(param_3 + 0x18) + 0x78);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_2);
  }
  if (*(long *)(param_2 + 0x50) != 0) {
    (**(code **)(param_1 + 0x10))(param_1);
  }
  *(undefined8 *)(param_2 + 0x50) = 0;
                    /* WARNING: Could not recover jumptable at 0x000109755094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))(param_1,param_2);
  return;
}



/* Entry: 109755098; end: 109755337;  */

undefined8 FUN_109755098(long param_1,int *param_2,int param_3,ulong *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  
  if ((*(byte *)(param_1 + 0x10) >> 1 & 1) == 0) {
    return 0x23;
  }
  if (*param_2 == 0) {
    lVar2 = *(long *)(param_2 + 2);
    lVar4 = lVar2;
    if (param_2[6] != 0) {
      lVar4 = (long)(lVar2 * (ulong)(uint)param_2[6] + 0x24) / 0x48;
    }
    lVar7 = *(long *)(param_2 + 4);
    lVar6 = lVar7;
    if (param_2[7] != 0) {
      lVar6 = (long)(lVar7 * (ulong)(uint)param_2[7] + 0x24) / 0x48;
    }
    lVar1 = lVar4;
    if (lVar7 != 0) {
      lVar1 = lVar6;
    }
    if (lVar2 != 0) {
      lVar6 = lVar1;
      lVar1 = lVar4;
    }
    uVar3 = lVar1 + 0x20U & 0xffffffffffffffc0;
    uVar5 = lVar6 + 0x20U & 0xffffffffffffffc0;
    if ((uVar3 != 0 && uVar5 != 0) && (0 < (int)*(uint *)(param_1 + 0x38))) {
      uVar8 = 0;
      plVar9 = (long *)(*(long *)(param_1 + 0x40) + 0x18);
      do {
        if ((uVar5 == (*plVar9 + 0x20U & 0xffffffffffffffc0)) &&
           ((param_3 != 0 || (uVar3 == (plVar9[-1] + 0x20U & 0xffffffffffffffc0))))) {
          if (param_4 == (ulong *)0x0) {
            return 0;
          }
          *param_4 = uVar8;
          return 0;
        }
        uVar8 = uVar8 + 1;
        plVar9 = plVar9 + 4;
      } while (*(uint *)(param_1 + 0x38) != uVar8);
    }
    return 0x17;
  }
  return 7;
}



/* Entry: 109755338; end: 1097555cf;  */

undefined8 FUN_109755338(long param_1,int *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  lVar10 = *(long *)(param_1 + 0xa0);
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    *(undefined8 *)(lVar10 + 0x48) = 0;
    *(undefined8 *)(lVar10 + 0x40) = 0;
    *(undefined8 *)(lVar10 + 0x38) = 0;
    *(undefined8 *)(lVar10 + 0x30) = 0;
    *(undefined8 *)(lVar10 + 0x28) = 0;
    *(undefined8 *)(lVar10 + 0x20) = 0;
    *(undefined8 *)(lVar10 + 0x18) = 0;
    *(undefined8 *)(lVar10 + 0x28) = 0x10000;
    *(undefined8 *)(lVar10 + 0x20) = 0x10000;
    return 0;
  }
  uVar8 = 0;
  iVar2 = *param_2;
  if (iVar2 < 2) {
    if (iVar2 == 0) {
      uVar8 = (ulong)*(ushort *)(param_1 + 0x88);
      uVar4 = uVar8;
    }
    else {
      uVar4 = 0;
      if (iVar2 == 1) {
        uVar4 = (long)*(short *)(param_1 + 0x8a) - (long)*(short *)(param_1 + 0x8c);
        uVar6 = uVar4;
        goto LAB_109755414;
      }
    }
LAB_109755430:
    lVar5 = *(long *)(param_2 + 2);
    lVar7 = lVar5;
    if (param_2[6] != 0) {
      lVar7 = (long)(lVar5 * (ulong)(uint)param_2[6] + 0x24) / 0x48;
    }
    lVar12 = *(long *)(param_2 + 4);
    lVar9 = lVar12;
    if (param_2[7] != 0) {
      lVar9 = (long)(lVar12 * (ulong)(uint)param_2[7] + 0x24) / 0x48;
    }
    if ((lVar12 == 0) && (lVar5 != 0)) {
LAB_1097554b4:
      if (uVar8 == 0) {
        return 0x85;
      }
      lVar5 = -lVar7;
      if (-1 < lVar7) {
        lVar5 = lVar7;
      }
      uVar6 = 0;
      if (uVar8 != 0) {
        uVar6 = (lVar5 * 0x10000 + (uVar8 >> 1)) / uVar8;
      }
      uVar11 = -uVar6;
      if (-1 < lVar7) {
        uVar11 = uVar6;
      }
      *(ulong *)(lVar10 + 0x20) = uVar11;
    }
    else {
      if (uVar4 == 0) {
        return 0x85;
      }
      lVar1 = -lVar9;
      if (-1 < lVar9) {
        lVar1 = lVar9;
      }
      uVar6 = 0;
      if (uVar4 != 0) {
        uVar6 = (lVar1 * 0x10000 + (uVar4 >> 1)) / uVar4;
      }
      uVar11 = -uVar6;
      if (-1 < lVar9) {
        uVar11 = uVar6;
      }
      *(ulong *)(lVar10 + 0x28) = uVar11;
      if (lVar5 != 0) goto LAB_1097554b4;
      *(ulong *)(lVar10 + 0x20) = uVar11;
      lVar7 = lVar9;
      FUN_1097532ac(lVar9,uVar8,uVar4);
    }
    if (lVar12 == 0) {
      *(ulong *)(lVar10 + 0x28) = uVar11;
      lVar9 = lVar7;
      FUN_1097532ac(lVar7,uVar4,uVar8);
    }
    if (iVar2 == 0) goto LAB_109755550;
    if (iVar2 == 3) {
      uVar8 = *(ulong *)(lVar10 + 0x28);
      if ((long)uVar11 < (long)uVar8) {
LAB_109755508:
        uVar8 = uVar11;
        *(ulong *)(lVar10 + 0x28) = uVar8;
        uVar11 = uVar8;
      }
      else {
LAB_109755524:
        *(ulong *)(lVar10 + 0x20) = uVar8;
        uVar11 = uVar8;
      }
    }
    else {
      uVar8 = *(ulong *)(lVar10 + 0x28);
    }
  }
  else {
    if (iVar2 == 2) {
      uVar4 = *(long *)(param_1 + 0x78) - *(long *)(param_1 + 0x68);
      uVar6 = *(long *)(param_1 + 0x80) - *(long *)(param_1 + 0x70);
LAB_109755414:
      uVar8 = -uVar4;
      if (-1 < (long)uVar4) {
        uVar8 = uVar4;
      }
      uVar4 = -uVar6;
      if (-1 < (long)uVar6) {
        uVar4 = uVar6;
      }
      goto LAB_109755430;
    }
    if (iVar2 == 3) {
      uVar4 = (ulong)*(short *)(param_1 + 0x90);
      uVar6 = (long)*(short *)(param_1 + 0x8a) - (long)*(short *)(param_1 + 0x8c);
      goto LAB_109755414;
    }
    uVar4 = 0;
    if (iVar2 != 4) goto LAB_109755430;
    uVar11 = *(ulong *)(param_2 + 2);
    uVar8 = *(ulong *)(param_2 + 4);
    *(ulong *)(lVar10 + 0x20) = uVar11;
    *(ulong *)(lVar10 + 0x28) = uVar8;
    if (uVar11 == 0) goto LAB_109755524;
    if (uVar8 == 0) goto LAB_109755508;
  }
  lVar7 = uVar11 * *(ushort *)(param_1 + 0x88);
  lVar7 = lVar7 + (lVar7 >> 0x3f) + 0x8000 >> 0x10;
  lVar5 = uVar8 * *(ushort *)(param_1 + 0x88);
  lVar9 = lVar5 + (lVar5 >> 0x3f) + 0x8000 >> 0x10;
LAB_109755550:
  uVar3 = 0x17;
  if (((long)(lVar7 + 0x20U) >> 6 < 0x10000) && ((long)(lVar9 + 0x20U) >> 6 < 0x10000)) {
    *(short *)(lVar10 + 0x18) = (short)(lVar7 + 0x20U >> 6);
    *(short *)(lVar10 + 0x1a) = (short)(lVar9 + 0x20U >> 6);
    func_0x0001097552bc(param_1,lVar10 + 0x18);
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 1097555d0; end: 109755633;  */

undefined8 FUN_1097555d0(long param_1,int param_2)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((param_1 == 0) || ((*(byte *)(param_1 + 0x10) >> 1 & 1) == 0)) {
    return 0x23;
  }
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x38))) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(*(long *)(param_1 + 0xb0) + 0x18) + 0xb8);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      uVar1 = *(undefined8 *)(param_1 + 0xa0);
                    /* WARNING: Could not recover jumptable at 0x00010975560c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(uVar1,param_2);
      return uVar1;
    }
    func_0x000109755214(param_1,param_2);
    return 0;
  }
  return 6;
}



/* Entry: 109755634; end: 109755707;  */

long FUN_109755634(long param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined4 in_stack_ffffffffffffffd8;
  
  if (param_1 == 0) {
    return 0x23;
  }
  lVar3 = *(long *)(param_1 + 0xa0);
  if (lVar3 == 0) {
    return 0x24;
  }
  if ((((param_2 == (uint *)0x0) || (*(long *)(param_2 + 2) < 0)) || (*(long *)(param_2 + 4) < 0))
     || (4 < *param_2)) {
    return 6;
  }
  *(undefined8 *)(*(long *)(lVar3 + 0x50) + 0x18) = 0;
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(*(long *)(param_1 + 0xb0) + 0x18) + 0xb0);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001097556bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return lVar3;
  }
  if ((*(ulong *)(param_1 + 0x10) & 3) == 2) {
    lVar3 = param_1;
    FUN_109755098(param_1,param_2,0,&stack0xffffffffffffffd8);
    if ((int)lVar3 == 0) {
      FUN_1097555d0(param_1,in_stack_ffffffffffffffd8);
      return param_1;
    }
    return lVar3;
  }
  lVar3 = *(long *)(param_1 + 0xa0);
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    *(undefined8 *)(lVar3 + 0x48) = 0;
    *(undefined8 *)(lVar3 + 0x40) = 0;
    *(undefined8 *)(lVar3 + 0x38) = 0;
    *(undefined8 *)(lVar3 + 0x30) = 0;
    *(undefined8 *)(lVar3 + 0x28) = 0;
    *(undefined8 *)(lVar3 + 0x20) = 0;
    *(undefined8 *)(lVar3 + 0x18) = 0;
    *(undefined8 *)(lVar3 + 0x28) = 0x10000;
    *(undefined8 *)(lVar3 + 0x20) = 0x10000;
    return 0;
  }
  uVar8 = 0;
  uVar2 = *param_2;
  if ((int)uVar2 < 2) {
    if (uVar2 == 0) {
      uVar8 = (ulong)*(ushort *)(param_1 + 0x88);
      uVar4 = uVar8;
    }
    else {
      uVar4 = 0;
      if (uVar2 == 1) {
        uVar4 = (long)*(short *)(param_1 + 0x8a) - (long)*(short *)(param_1 + 0x8c);
        uVar6 = uVar4;
        goto LAB_109755414;
      }
    }
LAB_109755430:
    lVar5 = *(long *)(param_2 + 2);
    lVar7 = lVar5;
    if (param_2[6] != 0) {
      lVar7 = (long)(lVar5 * (ulong)param_2[6] + 0x24) / 0x48;
    }
    lVar11 = *(long *)(param_2 + 4);
    lVar9 = lVar11;
    if (param_2[7] != 0) {
      lVar9 = (long)(lVar11 * (ulong)param_2[7] + 0x24) / 0x48;
    }
    if ((lVar11 == 0) && (lVar5 != 0)) {
LAB_1097554b4:
      if (uVar8 == 0) {
        return 0x85;
      }
      lVar5 = -lVar7;
      if (-1 < lVar7) {
        lVar5 = lVar7;
      }
      uVar6 = 0;
      if (uVar8 != 0) {
        uVar6 = (lVar5 * 0x10000 + (uVar8 >> 1)) / uVar8;
      }
      uVar10 = -uVar6;
      if (-1 < lVar7) {
        uVar10 = uVar6;
      }
      *(ulong *)(lVar3 + 0x20) = uVar10;
    }
    else {
      if (uVar4 == 0) {
        return 0x85;
      }
      lVar1 = -lVar9;
      if (-1 < lVar9) {
        lVar1 = lVar9;
      }
      uVar6 = 0;
      if (uVar4 != 0) {
        uVar6 = (lVar1 * 0x10000 + (uVar4 >> 1)) / uVar4;
      }
      uVar10 = -uVar6;
      if (-1 < lVar9) {
        uVar10 = uVar6;
      }
      *(ulong *)(lVar3 + 0x28) = uVar10;
      if (lVar5 != 0) goto LAB_1097554b4;
      *(ulong *)(lVar3 + 0x20) = uVar10;
      lVar7 = lVar9;
      FUN_1097532ac(lVar9,uVar8,uVar4);
    }
    if (lVar11 == 0) {
      *(ulong *)(lVar3 + 0x28) = uVar10;
      lVar9 = lVar7;
      FUN_1097532ac(lVar7,uVar4,uVar8);
    }
    if (uVar2 == 0) goto LAB_109755550;
    if (uVar2 == 3) {
      uVar8 = *(ulong *)(lVar3 + 0x28);
      if ((long)uVar10 < (long)uVar8) {
LAB_109755508:
        uVar8 = uVar10;
        *(ulong *)(lVar3 + 0x28) = uVar8;
        uVar10 = uVar8;
      }
      else {
LAB_109755524:
        *(ulong *)(lVar3 + 0x20) = uVar8;
        uVar10 = uVar8;
      }
    }
    else {
      uVar8 = *(ulong *)(lVar3 + 0x28);
    }
  }
  else {
    if (uVar2 == 2) {
      uVar4 = *(long *)(param_1 + 0x78) - *(long *)(param_1 + 0x68);
      uVar6 = *(long *)(param_1 + 0x80) - *(long *)(param_1 + 0x70);
LAB_109755414:
      uVar8 = -uVar4;
      if (-1 < (long)uVar4) {
        uVar8 = uVar4;
      }
      uVar4 = -uVar6;
      if (-1 < (long)uVar6) {
        uVar4 = uVar6;
      }
      goto LAB_109755430;
    }
    if (uVar2 == 3) {
      uVar4 = (ulong)*(short *)(param_1 + 0x90);
      uVar6 = (long)*(short *)(param_1 + 0x8a) - (long)*(short *)(param_1 + 0x8c);
      goto LAB_109755414;
    }
    uVar4 = 0;
    if (uVar2 != 4) goto LAB_109755430;
    uVar10 = *(ulong *)(param_2 + 2);
    uVar8 = *(ulong *)(param_2 + 4);
    *(ulong *)(lVar3 + 0x20) = uVar10;
    *(ulong *)(lVar3 + 0x28) = uVar8;
    if (uVar10 == 0) goto LAB_109755524;
    if (uVar8 == 0) goto LAB_109755508;
  }
  lVar7 = uVar10 * *(ushort *)(param_1 + 0x88);
  lVar7 = lVar7 + (lVar7 >> 0x3f) + 0x8000 >> 0x10;
  lVar5 = uVar8 * *(ushort *)(param_1 + 0x88);
  lVar9 = lVar5 + (lVar5 >> 0x3f) + 0x8000 >> 0x10;
LAB_109755550:
  lVar5 = 0x17;
  if (((long)(lVar7 + 0x20U) >> 6 < 0x10000) && ((long)(lVar9 + 0x20U) >> 6 < 0x10000)) {
    *(short *)(lVar3 + 0x18) = (short)(lVar7 + 0x20U >> 6);
    *(short *)(lVar3 + 0x1a) = (short)(lVar9 + 0x20U >> 6);
    func_0x0001097552bc(param_1,lVar3 + 0x18);
    lVar5 = 0;
  }
  return lVar5;
}



/* Entry: 109755708; end: 1097557ef;  */

void FUN_109755708(undefined8 param_1,long param_2,long param_3,int param_4,int param_5)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined4 auStack_30 [2];
  long lStack_28;
  long lStack_20;
  int iStack_18;
  int iStack_14;
  
  lVar2 = param_2;
  if (param_3 != 0) {
    lVar2 = param_3;
  }
  lStack_20 = param_3;
  lStack_28 = param_3;
  if (param_2 != 0) {
    lStack_20 = lVar2;
    lStack_28 = param_2;
  }
  iVar1 = param_4;
  if (param_5 != 0) {
    iVar1 = param_5;
  }
  iVar3 = param_5;
  if (param_4 != 0) {
    param_5 = iVar1;
    iVar3 = param_4;
  }
  iStack_14 = 0x48;
  iStack_18 = 0x48;
  if (iVar3 != 0) {
    iStack_14 = param_5;
    iStack_18 = iVar3;
  }
  if (lStack_20 < 0x41) {
    lStack_20 = 0x40;
  }
  auStack_30[0] = 0;
  if (lStack_28 < 0x41) {
    lStack_28 = 0x40;
  }
  FUN_109755634(param_1,auStack_30);
  return;
}



/* Entry: 1097557f0; end: 109755897;  */

undefined8 FUN_1097557f0(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  
  plVar2 = *(long **)(param_1 + 0x50);
  if (plVar2 == (long *)0x0) {
LAB_10975588c:
    uVar3 = 0x26;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x48);
    if (0 < iVar1) {
      plVar4 = plVar2 + (long)iVar1 + -1;
      do {
        lVar5 = *plVar4;
        if (*(int *)(lVar5 + 8) == 0x756e6963) {
          if (*(short *)(lVar5 + 0xc) == 0) {
            if (*(short *)(lVar5 + 0xe) == 4) goto LAB_109755880;
          }
          else if ((*(short *)(lVar5 + 0xc) == 3) && (*(short *)(lVar5 + 0xe) == 10))
          goto LAB_109755880;
        }
        plVar4 = plVar4 + -1;
      } while (plVar2 <= plVar4);
    }
    plVar4 = plVar2 + iVar1;
    do {
      plVar4 = plVar4 + -1;
      if (plVar4 < plVar2) goto LAB_10975588c;
      lVar5 = *plVar4;
    } while (*(int *)(lVar5 + 8) != 0x756e6963);
LAB_109755880:
    uVar3 = 0;
    *(long *)(param_1 + 0xa8) = lVar5;
  }
  return uVar3;
}



/* Entry: 109755898; end: 1097559db;  */

undefined8 FUN_109755898(long *param_1)

{
  long *plVar1;
  undefined1 auStack_30 [8];
  undefined8 uStack_28;
  
  if (param_1 == (long *)0x0) {
    return 0xffffffffffffffff;
  }
  if (*param_1 != 0) {
    plVar1 = *(long **)(*param_1 + 0xb0);
    if (((*(code **)(*plVar1 + 0x40) != (code *)0x0) &&
        ((**(code **)(*plVar1 + 0x40))(plVar1,&UNK_10f57f72a), plVar1 != (long *)0x0)) &&
       ((*(code *)*plVar1)(param_1,auStack_30), (int)param_1 == 0)) {
      return uStack_28;
    }
  }
  return 0xffffffffffffffff;
}



/* Entry: 1097559dc; end: 109755afb;  */

long * FUN_1097559dc(undefined8 *param_1,undefined8 param_2,long *param_3,long *param_4)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  uint uStack_54;
  
  if (param_1 == (undefined8 *)0x0) {
    return (long *)0x6;
  }
  if (param_3 == (long *)0x0) {
    return (long *)0x6;
  }
  lVar5 = *param_3;
  if (lVar5 == 0) {
    return (long *)0x6;
  }
  plVar4 = *(long **)(lVar5 + 0xb8);
  plVar2 = plVar4;
  FUN_1097537e4(plVar4,*param_1,&uStack_54);
  plVar3 = (long *)(ulong)uStack_54;
  if (uStack_54 == 0) {
    lVar6 = *param_3;
    plVar2[1] = param_3[1];
    *plVar2 = lVar6;
    plVar2[2] = (long)param_1;
    if (((code *)param_1[1] == (code *)0x0) ||
       (plVar3 = plVar2, (*(code *)param_1[1])(plVar2,param_2), (int)plVar3 == 0)) {
      func_0x000109755910(plVar4,8,(long)*(int *)(lVar5 + 0x48),(long)*(int *)(lVar5 + 0x48) + 1,
                          *(undefined8 *)(lVar5 + 0x50),&uStack_54);
      *(long **)(lVar5 + 0x50) = plVar4;
      plVar3 = (long *)(ulong)uStack_54;
      if (uStack_54 == 0) {
        iVar1 = *(int *)(lVar5 + 0x48);
        *(int *)(lVar5 + 0x48) = iVar1 + 1;
        plVar4[iVar1] = (long)plVar2;
        goto joined_r0x000109755abc;
      }
    }
    lVar5 = *(long *)(*plVar2 + 0xb8);
    if (*(code **)(plVar2[2] + 0x10) != (code *)0x0) {
      (**(code **)(plVar2[2] + 0x10))(plVar2);
    }
    (**(code **)(lVar5 + 0x10))(lVar5,plVar2);
    plVar2 = (long *)0x0;
  }
joined_r0x000109755abc:
  if (param_4 != (long *)0x0) {
    *param_4 = (long)plVar2;
  }
  return plVar3;
}



/* Entry: 109755afc; end: 109755b7b;  */

long FUN_109755afc(long param_1)

{
  if ((((param_1 != 0) && (*(long *)(param_1 + 0xa8) != 0)) &&
      (*(int *)(*(long *)(param_1 + 0xa8) + 8) == 0x756e6963)) && (FUN_109755b7c(), param_1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000109755b64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x10) + 0x28))();
    return param_1;
  }
  return 0;
}



/* Entry: 109755b7c; end: 109755cd3;  */

long FUN_109755b7c(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0x50);
  if ((plVar3 != (long *)0x0) && (0 < *(int *)(param_1 + 0x48))) {
    plVar1 = plVar3 + *(int *)(param_1 + 0x48);
    do {
      lVar2 = *plVar3;
      if (((*(short *)(lVar2 + 0xc) == 0) && (*(short *)(lVar2 + 0xe) == 5)) &&
         (FUN_109755898(), lVar2 == 0xe)) {
        return *plVar3;
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 < plVar1);
  }
  return 0;
}



/* Entry: 109755cd4; end: 109755db7;  */

long FUN_109755cd4(long param_1,ulong param_2,undefined1 *param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  if (param_1 == 0) {
    lVar2 = 0x23;
  }
  else {
    lVar2 = 6;
    if ((param_3 != (undefined1 *)0x0) && ((int)param_4 != 0)) {
      *param_3 = 0;
      if ((long)(param_2 & 0xffffffff) < *(long *)(param_1 + 0x20)) {
        if ((*(byte *)(param_1 + 0x11) >> 1 & 1) != 0) {
          lVar2 = *(long *)(param_1 + 0xf0);
          plVar3 = *(long **)(lVar2 + 0x50);
          if (plVar3 != (long *)0xfffffffffffffffe) {
            if (plVar3 == (long *)0x0) {
              plVar3 = *(long **)(param_1 + 0xb0);
              if (*(code **)(*plVar3 + 0x40) == (code *)0x0) {
                plVar3 = (long *)0x0;
              }
              else {
                (**(code **)(*plVar3 + 0x40))(plVar3,&UNK_10f57f6ff);
                lVar2 = *(long *)(param_1 + 0xf0);
              }
              plVar1 = (long *)0xfffffffffffffffe;
              if (plVar3 != (long *)0x0) {
                plVar1 = plVar3;
              }
              *(long **)(lVar2 + 0x50) = plVar1;
            }
            if ((plVar3 != (long *)0x0) && ((code *)*plVar3 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000109755da0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)*plVar3)(param_1,param_2,param_3,param_4);
              return param_1;
            }
          }
          lVar2 = 6;
        }
      }
      else {
        lVar2 = 0x10;
      }
    }
  }
  return lVar2;
}



/* Entry: 109755db8; end: 109755eab;  */

long FUN_109755db8(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if (param_1 != 0) {
    lVar3 = *(long *)(param_1 + 0xf0);
    plVar2 = *(long **)(lVar3 + 0x38);
    if (plVar2 != (long *)0xfffffffffffffffe) {
      if (plVar2 == (long *)0x0) {
        plVar2 = *(long **)(param_1 + 0xb0);
        if (*(code **)(*plVar2 + 0x40) == (code *)0x0) {
          plVar2 = (long *)0x0;
        }
        else {
          (**(code **)(*plVar2 + 0x40))(plVar2,&UNK_10f57f70a);
          lVar3 = *(long *)(param_1 + 0xf0);
        }
        plVar1 = (long *)0xfffffffffffffffe;
        if (plVar2 != (long *)0x0) {
          plVar1 = plVar2;
        }
        *(long **)(lVar3 + 0x38) = plVar1;
      }
      if ((plVar2 != (long *)0x0) && ((code *)*plVar2 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000109755e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*plVar2)(param_1);
        return param_1;
      }
    }
  }
  return 0;
}



/* Entry: 109755eac; end: 109755f4b;  */

long FUN_109755eac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long *plVar2;
  
  if ((param_1 == 0) || ((*(byte *)(param_1 + 0x10) >> 3 & 1) == 0)) {
    lVar1 = 0x23;
  }
  else {
    plVar2 = *(long **)(param_1 + 0xb0);
    if ((*(code **)(*plVar2 + 0x40) != (code *)0x0) &&
       ((**(code **)(*plVar2 + 0x40))(plVar2,&UNK_10f57f71f), plVar2 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000109755f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*plVar2)(param_1,param_2,param_3,param_4,param_5);
      return param_1;
    }
    lVar1 = 7;
  }
  return lVar1;
}



/* Entry: 109755f4c; end: 109755fe3;  */

long FUN_109755f4c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined1 auStack_38 [8];
  
  if (param_1 != 0) {
    if ((*(byte *)(param_1 + 0x10) >> 3 & 1) == 0) {
      param_1 = 0x23;
    }
    else {
      plVar1 = *(long **)(param_1 + 0xb0);
      if ((*(code **)(*plVar1 + 0x40) == (code *)0x0) ||
         ((**(code **)(*plVar1 + 0x40))(plVar1,&UNK_10f57f71f), plVar1 == (long *)0x0)) {
        param_1 = 7;
      }
      else {
        (*(code *)plVar1[2])(param_1,param_2,param_3,auStack_38,param_4);
      }
    }
    return param_1;
  }
  return 0x23;
}



/* Entry: 109755fe4; end: 1097566af;  */

void FUN_109755fe4(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  
  if ((*(byte *)(*(long *)(param_2 + 0x128) + 0x4a) >> 4 & 1) != 0) {
    lVar6 = *(long *)(param_2 + 8);
    uVar2 = *(uint *)(param_2 + 0x18);
    uStack_58 = 0;
    if ((((lVar6 != 0) && (uVar2 < *(uint *)(lVar6 + 0x20))) &&
        ((*(byte *)(lVar6 + 0x10) >> 3 & 1) != 0)) &&
       ((pcVar5 = *(code **)(*(long *)(lVar6 + 0x370) + 0x118), pcVar5 != (code *)0x0 &&
        (lVar3 = lVar6, (*pcVar5)(lVar6,uVar2,&uStack_64,&uStack_68,auStack_60), (int)lVar3 != 0))))
    {
      lVar3 = lVar6;
      FUN_109754390();
      if ((int)lVar3 == 0) {
        lVar3 = *(long *)(lVar6 + 0x370);
        while ((lVar4 = lVar6,
               FUN_109752c30(lVar6,uStack_64,
                             *(uint *)(*(long *)(param_2 + 0x128) + 0x48) & 0xffefffff | 4),
               (int)lVar4 == 0 &&
               (lVar4 = lVar6,
               (**(code **)(lVar3 + 0x148))(lVar6,uStack_68,param_2,*(undefined8 *)(lVar6 + 0x98)),
               (int)lVar4 == 0))) {
          if ((((*(uint *)(lVar6 + 0x20) <= uVar2) || ((*(byte *)(lVar6 + 0x10) >> 3 & 1) == 0)) ||
              (pcVar5 = *(code **)(*(long *)(lVar6 + 0x370) + 0x118), pcVar5 == (code *)0x0)) ||
             (lVar4 = lVar6, (*pcVar5)(lVar6,uVar2,&uStack_64,&uStack_68,auStack_60),
             (int)lVar4 == 0)) {
            *(undefined4 *)(param_2 + 0x90) = 0x62697473;
            FUN_109754628(*(undefined8 *)(lVar6 + 0x98));
            return;
          }
        }
        FUN_109754628(*(undefined8 *)(lVar6 + 0x98));
      }
      *(undefined4 *)(param_2 + 0x90) = 0x6f75746c;
    }
  }
  if (*(int *)(param_2 + 0x90) == 0x6f75746c) {
    lVar3 = *(long *)(param_1 + 0x128);
    if (lVar3 != 0) {
      lVar6 = *(long *)(param_1 + 0x118);
LAB_109756094:
      (**(code **)(lVar3 + 0x78))(lVar3,param_2,param_3,0);
      if ((int)lVar3 != 0) {
        while ((((uint)lVar3 & 0xff) == 0x13 && (param_1 != 0))) {
          plVar1 = (long *)(param_1 + 0x118);
          if (lVar6 != 0) {
            plVar1 = (long *)(lVar6 + 8);
          }
          lVar6 = *plVar1;
          while( true ) {
            if (lVar6 == 0) {
              return;
            }
            lVar3 = *(long *)(lVar6 + 0x10);
            if (*(int *)(lVar3 + 0x20) == *(int *)(param_2 + 0x90)) break;
            lVar6 = *(long *)(lVar6 + 8);
          }
          (**(code **)(lVar3 + 0x78))(lVar3,param_2,param_3,0);
          if ((int)lVar3 == 0) {
            return;
          }
        }
      }
    }
  }
  else if (param_1 != 0) {
    for (lVar6 = *(long *)(param_1 + 0x118); lVar6 != 0; lVar6 = *(long *)(lVar6 + 8)) {
      lVar3 = *(long *)(lVar6 + 0x10);
      if (*(int *)(lVar3 + 0x20) == *(int *)(param_2 + 0x90)) goto LAB_109756094;
    }
  }
  return;
}



/* Entry: 1097566b0; end: 109756757;  */

void FUN_1097566b0(long *param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    if (*(code **)(*param_1 + 0x40) == (code *)0x0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_1;
      (**(code **)(*param_1 + 0x40))(param_1,param_2);
    }
    if ((param_3 != 0) && (plVar2 == (long *)0x0)) {
      lVar4 = param_1[1];
      uVar1 = *(uint *)(lVar4 + 0x14);
      if (uVar1 != 0) {
        plVar2 = (long *)(lVar4 + 0x18);
        do {
          plVar3 = (long *)*plVar2;
          if (((plVar3 != param_1) && (*(code **)(*plVar3 + 0x40) != (code *)0x0)) &&
             ((**(code **)(*plVar3 + 0x40))(plVar3,param_2), plVar3 != (long *)0x0)) {
            return;
          }
          plVar2 = plVar2 + 1;
        } while (plVar2 < (long *)(lVar4 + (ulong)uVar1 * 8 + 0x18));
      }
    }
  }
  return;
}



/* Entry: 109756758; end: 109756ba7;  */

undefined8 FUN_109756758(long *param_1)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  byte *pbVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  bool bVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  
  if (param_1 == (long *)0x0) {
    return 0x21;
  }
  lVar4 = param_1[0x31];
  iVar1 = (int)lVar4 + -1;
  *(int *)(param_1 + 0x31) = iVar1;
  if (iVar1 == 0 || (int)lVar4 < 1) {
    bVar11 = false;
    lVar12 = 0;
    lVar4 = *param_1;
    uVar9 = (ulong)*(uint *)((long)param_1 + 0x14);
    uVar10 = uVar9;
    bVar2 = true;
    do {
      bVar6 = bVar2;
      if ((int)uVar9 != 0) {
        uVar13 = 0;
        uVar9 = uVar10;
        do {
          puVar14 = (undefined8 *)param_1[uVar13 + 3];
          pbVar7 = (byte *)*puVar14;
          if (bVar11) {
LAB_1097567e0:
            if (((*pbVar7 & 1) != 0) && (lVar5 = puVar14[4], lVar5 != 0)) {
              do {
                FUN_109754ce4(*(undefined8 *)(lVar5 + 0x10));
                lVar5 = puVar14[4];
              } while (lVar5 != 0);
              uVar9 = (ulong)*(uint *)((long)param_1 + 0x14);
            }
          }
          else {
            uVar3 = *(undefined8 *)(pbVar7 + 0x10);
            _strcmp(uVar3,(&PTR_DAT_110b0b398)[lVar12]);
            if ((int)uVar3 == 0) goto LAB_1097567e0;
          }
          uVar13 = uVar13 + 1;
          uVar10 = uVar9;
        } while (uVar13 < uVar9);
      }
      bVar11 = true;
      lVar12 = 1;
      bVar2 = false;
    } while (bVar6);
    uVar8 = (uint)uVar10;
    while (uVar8 != 0) {
      func_0x0001097564c4(param_1,param_1[(ulong)((int)uVar10 - 1) + 3]);
      uVar8 = *(uint *)((long)param_1 + 0x14);
      uVar10 = (ulong)uVar8;
    }
    (**(code **)(lVar4 + 0x10))(lVar4,param_1);
  }
  return 0;
}



/* Entry: 109756ba8; end: 109756ce3;  */

int FUN_109756ba8(long *param_1,uint param_2,uint param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iStack_54;
  
  if (param_1 == (long *)0x0) {
    iVar3 = 0x21;
  }
  else {
    iVar3 = 6;
    if ((param_4 != (undefined8 *)0x0) && (lVar2 = *param_1, lVar2 != 0)) {
      param_4[4] = 0;
      param_4[1] = 0;
      *param_4 = 0;
      param_4[3] = 0;
      param_4[2] = 0;
      if ((-1 < (int)param_3) && (param_3 <= param_2)) {
        if (param_2 >> 0x10 == 0) {
          lVar1 = lVar2;
          FUN_1097539a8(lVar2,0x10,0,param_2,0,&iStack_54);
          param_4[1] = lVar1;
          iVar3 = iStack_54;
          if (iStack_54 == 0) {
            lVar1 = lVar2;
            FUN_1097539a8(lVar2,1,0,param_2,0,&iStack_54);
            param_4[2] = lVar1;
            iVar3 = iStack_54;
            if (iStack_54 == 0) {
              FUN_1097539a8(lVar2,2,0,param_3,0,&iStack_54);
              param_4[3] = lVar2;
              iVar3 = iStack_54;
              if (iStack_54 == 0) {
                *(short *)((long)param_4 + 2) = (short)param_2;
                *(short *)param_4 = (short)param_3;
                *(uint *)(param_4 + 4) = *(uint *)(param_4 + 4) | 1;
                return 0;
              }
            }
          }
          *(uint *)(param_4 + 4) = *(uint *)(param_4 + 4) | 1;
          FUN_109756ce4(param_1,param_4);
        }
        else {
          iVar3 = 10;
        }
      }
    }
  }
  return iVar3;
}



/* Entry: 109756ce4; end: 109756e37;  */

undefined8 FUN_109756ce4(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 != (long *)0x0) {
    if (param_2 == (undefined8 *)0x0) {
      uVar1 = 0x14;
    }
    else {
      lVar2 = *param_1;
      if (lVar2 == 0) {
        uVar1 = 6;
      }
      else {
        if ((*(byte *)(param_2 + 4) & 1) != 0) {
          if (param_2[1] != 0) {
            (**(code **)(lVar2 + 0x10))(lVar2);
          }
          param_2[1] = 0;
          if (param_2[2] != 0) {
            (**(code **)(lVar2 + 0x10))(lVar2);
          }
          param_2[2] = 0;
          if (param_2[3] != 0) {
            (**(code **)(lVar2 + 0x10))(lVar2);
          }
        }
        uVar1 = 0;
        param_2[4] = 0;
        param_2[1] = 0;
        *param_2 = 0;
        param_2[3] = 0;
        param_2[2] = 0;
      }
    }
    return uVar1;
  }
  return 0x21;
}



/* Entry: 109756e38; end: 10975714b;  */

undefined4 FUN_109756e38(ushort *param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  long *plVar4;
  bool bVar5;
  ushort *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  uint uVar23;
  uint uVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  uint uVar28;
  long lVar29;
  uint uVar30;
  uint uVar31;
  long lStack_70;
  long lStack_68;
  
  if (param_1 == (ushort *)0x0) {
    return 0x14;
  }
  if ((2 < param_2 + 1U) || (2 < param_3 + 1U)) {
    puVar6 = param_1;
    FUN_10975714c();
    if ((int)puVar6 == 2) {
      if (*param_1 == 0) {
        return 0;
      }
      return 6;
    }
    uVar3 = *param_1;
    if ((ulong)uVar3 != 0) {
      uVar16 = 0;
      uVar9 = param_2 / 2;
      uVar12 = param_3 / 2;
      lVar29 = *(long *)(param_1 + 4);
      lVar13 = *(long *)(param_1 + 0xc);
      uVar23 = 0xffffffff;
      do {
        uVar1 = uVar23 + 1;
        uVar23 = (uint)*(ushort *)(lVar13 + uVar16 * 2);
        if (uVar1 != uVar23) {
          uVar14 = 0;
          lVar17 = 0;
          lVar27 = 0;
          uVar28 = 0xffffffff;
          lVar18 = 0;
          uVar21 = 0;
          lVar15 = 0;
          uVar24 = uVar1;
          uVar30 = uVar23;
          do {
            uVar22 = uVar14;
            lVar26 = lVar17;
            lVar20 = lVar27;
            if (uVar24 == uVar28) {
joined_r0x000109757064:
              uVar31 = uVar24;
              if (uVar21 != 0) {
                if ((uVar28 & 0x80000000) != 0) {
                  uVar28 = uVar30;
                  uVar14 = uVar21;
                  lVar17 = lVar15;
                  lVar27 = lVar18;
                }
                lVar11 = (lVar20 * lVar18 + (lVar20 * lVar18 >> 0x3f) + 0x8000 >> 0x10) +
                         (lVar26 * lVar15 + (lVar26 * lVar15 >> 0x3f) + 0x8000 >> 0x10);
                if (lVar11 < -0xefff) {
                  lVar8 = 0;
                  lVar15 = 0;
                }
                else {
                  lVar11 = lVar11 + 0x10000;
                  lVar19 = (lVar26 * lVar18 + (lVar26 * lVar18 >> 0x3f) + 0x8000 >> 0x10) -
                           (lVar20 * lVar15 + (lVar20 * lVar15 >> 0x3f) + 0x8000 >> 0x10);
                  bVar5 = (int)puVar6 == 0;
                  lVar8 = -(lVar26 + lVar15);
                  if (bVar5) {
                    lVar8 = lVar26 + lVar15;
                  }
                  lVar15 = -(lVar20 + lVar18);
                  if (!bVar5) {
                    lVar15 = lVar20 + lVar18;
                  }
                  lVar18 = -lVar19;
                  if (!bVar5) {
                    lVar18 = lVar19;
                  }
                  if (uVar22 <= uVar21) {
                    uVar21 = uVar22;
                  }
                  uVar25 = lVar11 * uVar21 + 0x8000 >> 0x10;
                  uVar10 = uVar9;
                  lVar19 = lVar11;
                  if ((long)uVar25 <
                      (long)(lVar18 * uVar9 + ((long)(lVar18 * uVar9) >> 0x3f) + 0x8000) >> 0x10) {
                    uVar10 = uVar21;
                    lVar19 = lVar18;
                  }
                  lStack_70 = lVar26;
                  lStack_68 = lVar20;
                  FUN_1097532ac(lVar15,uVar10,lVar19);
                  uVar10 = uVar12;
                  if ((long)uVar25 <
                      (long)(lVar18 * uVar12 + ((long)(lVar18 * uVar12) >> 0x3f) + 0x8000) >> 0x10)
                  {
                    uVar10 = uVar21;
                    lVar11 = lVar18;
                  }
                  FUN_1097532ac(lVar8,uVar10,lVar11);
                }
                if (uVar30 != uVar24) {
                  do {
                    plVar7 = (long *)(lVar29 + (long)(int)uVar30 * 0x10);
                    *plVar7 = lVar15 + uVar9 + *plVar7;
                    plVar7[1] = lVar8 + uVar12 + plVar7[1];
                    uVar2 = uVar1;
                    if ((int)uVar30 < (int)uVar23) {
                      uVar2 = uVar30 + 1;
                    }
                    uVar30 = uVar2;
                  } while (uVar2 != uVar24);
                }
              }
            }
            else {
              plVar7 = (long *)(lVar29 + (long)(int)uVar24 * 0x10);
              plVar4 = (long *)(lVar29 + (long)(int)uVar30 * 0x10);
              lStack_70 = *plVar7 - *plVar4;
              lStack_68 = plVar7[1] - plVar4[1];
              plVar7 = &lStack_70;
              FUN_109753604();
              lVar20 = lVar18;
              uVar22 = uVar21;
              lVar26 = lVar15;
              uVar31 = uVar30;
              if ((int)plVar7 != 0) {
                uVar22 = (ulong)plVar7 & 0xffffffff;
                lVar26 = lStack_70;
                lVar20 = lStack_68;
                goto joined_r0x000109757064;
              }
            }
            uVar30 = uVar1;
            if ((int)uVar24 < (int)uVar23) {
              uVar30 = uVar24 + 1;
            }
          } while ((uVar30 != uVar31) &&
                  (lVar18 = lVar20, uVar21 = uVar22, lVar15 = lVar26, uVar24 = uVar30,
                  uVar30 = uVar31, uVar31 != uVar28));
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 != uVar3);
    }
  }
  return 0;
}



/* Entry: 10975714c; end: 1097572a3;  */

undefined8 FUN_10975714c(ushort *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ushort uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  ulong uVar17;
  undefined1 (*pauVar18) [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  long *plVar9;
  
  if (param_1 != (ushort *)0x0) {
    uVar5 = param_1[1];
    if (uVar5 != 0) {
      if (uVar5 != 1) {
        plVar7 = *(long **)(param_1 + 4);
        plVar8 = plVar7 + 2;
        lVar10 = *plVar7;
        lVar15 = plVar7[1];
        lVar12 = *plVar7;
        lVar14 = plVar7[1];
        do {
          plVar9 = plVar8 + 2;
          lVar3 = *plVar8;
          lVar4 = plVar8[1];
          lVar1 = lVar3;
          if (lVar10 <= lVar3) {
            lVar1 = lVar10;
          }
          if (lVar3 <= lVar12) {
            lVar3 = lVar12;
          }
          lVar2 = lVar4;
          if (lVar15 <= lVar4) {
            lVar2 = lVar15;
          }
          if (lVar4 <= lVar14) {
            lVar4 = lVar14;
          }
          plVar8 = plVar9;
          lVar10 = lVar1;
          lVar15 = lVar2;
          lVar12 = lVar3;
          lVar14 = lVar4;
        } while (plVar9 < plVar7 + (ulong)uVar5 * 2);
        if (((lVar1 != lVar3 && lVar4 != lVar2) &&
            (((lVar4 < 0x1000001 && lVar3 < 0x1000001) && -0x1000001 < lVar1) && -0x1000001 < lVar2)
            ) && ((ulong)*param_1 != 0)) {
          uVar11 = 0;
          lVar10 = 0;
          lVar15 = -lVar3;
          if (-1 < lVar3) {
            lVar15 = lVar3;
          }
          lVar12 = -lVar1;
          if (-1 < lVar1) {
            lVar12 = lVar1;
          }
          uVar6 = NEON_smax(CONCAT44(0x11 - LZCOUNT((int)lVar4 - (int)lVar2),
                                     0x11 - LZCOUNT((uint)lVar15 | (uint)lVar12)),0,4);
          uVar17 = 0xffffffff;
          do {
            uVar5 = *(ushort *)(*(long *)(param_1 + 0xc) + uVar11 * 2);
            uVar13 = (ulong)uVar5;
            iVar16 = (int)uVar17;
            if (iVar16 < (int)(uint)uVar5) {
              auVar19._8_8_ = -(uVar6 >> 0x20);
              auVar19._0_8_ = -(uVar6 & 0xffffffff);
              auVar19 = NEON_sshl(*(undefined1 (*) [16])(plVar7 + uVar13 * 2),auVar19,8);
              lVar15 = uVar13 - (long)iVar16;
              pauVar18 = (undefined1 (*) [16])(plVar7 + (long)iVar16 * 2 + 2);
              do {
                auVar20._8_8_ = -(uVar6 >> 0x20);
                auVar20._0_8_ = -(uVar6 & 0xffffffff);
                auVar20 = NEON_sshl(*pauVar18,auVar20,8);
                lVar10 = (auVar20._8_8_ - auVar19._8_8_) * (auVar20._0_8_ + auVar19._0_8_) + lVar10;
                lVar15 = lVar15 + -1;
                pauVar18 = pauVar18 + 1;
                auVar19 = auVar20;
              } while (lVar15 != 0);
            }
            uVar11 = uVar11 + 1;
            uVar17 = uVar13;
          } while (uVar11 != *param_1);
          if (0 < lVar10) {
            return 1;
          }
          if (lVar10 != 0) {
            return 0;
          }
        }
      }
      return 2;
    }
  }
  return 0;
}



/* Entry: 1097572a4; end: 1097574b3;  */

void FUN_1097572a4(long param_1,undefined8 param_2,uint *param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  uint uVar14;
  ushort uVar15;
  
  uVar2 = param_2;
  _strcmp(param_2,&UNK_10f57f73a);
  if ((int)uVar2 == 0) {
    lVar13 = *(long *)(param_3 + 2);
    lVar10 = *(long *)param_3;
    lVar7 = *(long *)(param_3 + 6);
    lVar4 = *(long *)(param_3 + 4);
    iVar3 = (int)lVar4;
    uVar5 = (uint)((ulong)lVar4 >> 0x20);
    iVar6 = (int)lVar7;
    uVar8 = (uint)((ulong)lVar7 >> 0x20);
    iVar9 = (int)lVar10;
    iVar11 = (int)((ulong)lVar10 >> 0x20);
    iVar12 = (int)lVar13;
    uVar14 = (uint)((ulong)lVar13 >> 0x20);
    auVar1._2_2_ = -(ushort)(lVar10 < 0);
    auVar1._0_2_ = -(ushort)(iVar9 < 0);
    auVar1._4_2_ = -(ushort)(iVar12 < 0);
    auVar1._6_2_ = -(ushort)(lVar13 < 0);
    auVar1._8_2_ = -(ushort)(iVar3 < 0);
    auVar1._10_2_ = -(ushort)(lVar4 < 0);
    auVar1._12_2_ = -(ushort)(iVar6 < 0);
    auVar1._14_2_ = -(ushort)(lVar7 < 0);
    uVar15 = NEON_umaxv(auVar1,2);
    if (((((uVar15 & 1) == 0) && (iVar9 <= iVar12 && iVar12 <= iVar3)) && (iVar3 <= iVar6)) &&
       (((iVar11 < 0x1f5 && (uVar14 < 0x1f5)) && ((uVar5 < 0x1f5 && (uVar8 < 0x1f5)))))) {
      *(int *)(param_1 + 0x40) = iVar9;
      *(int *)(param_1 + 0x44) = iVar11;
      *(int *)(param_1 + 0x48) = iVar12;
      *(uint *)(param_1 + 0x4c) = uVar14;
      *(int *)(param_1 + 0x50) = iVar3;
      *(uint *)(param_1 + 0x54) = uVar5;
      *(int *)(param_1 + 0x58) = iVar6;
      *(uint *)(param_1 + 0x5c) = uVar8;
    }
  }
  else {
    uVar2 = param_2;
    _strcmp(param_2,&UNK_10f57f74f);
    if ((int)uVar2 == 0) {
      if (*param_3 == 1) {
        *(undefined4 *)(param_1 + 0x38) = 1;
      }
    }
    else {
      uVar2 = param_2;
      _strcmp(param_2,&UNK_10f57f75e);
      if ((int)uVar2 == 0) {
        *(char *)(param_1 + 0x3c) = (char)*param_3;
      }
      else {
        _strcmp(param_2,&UNK_10f57f770);
        if ((int)param_2 == 0) {
          *(uint *)(param_1 + 0x60) = *param_3 & ((int)*param_3 >> 0x1f ^ 0xffffffffU);
        }
      }
    }
  }
  return;
}



/* Entry: 1097574b4; end: 109757653;  */

undefined8 FUN_1097574b4(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  if (param_2 < 0) {
    return 0x55;
  }
  uVar1 = *(long *)(param_1 + 0x10) + param_2;
  if (*(code **)(param_1 + 0x28) == (code *)0x0) {
    if (uVar1 <= *(ulong *)(param_1 + 8)) goto LAB_10975750c;
  }
  else {
    lVar2 = param_1;
    (**(code **)(param_1 + 0x28))(param_1,uVar1,0,0);
    if (lVar2 == 0) {
LAB_10975750c:
      *(ulong *)(param_1 + 0x10) = uVar1;
      return 0;
    }
  }
  return 0x55;
}



/* Entry: 109757654; end: 109757777;  */

undefined8 FUN_109757654(long param_1,uint param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  
  if (param_1 == 0) {
    return 6;
  }
  if (param_3 == (undefined8 *)0x0) {
    return 6;
  }
  if (((*(byte *)(param_1 + 0x10) >> 3 & 1) == 0) || (*(ushort *)(param_1 + 0x230) <= param_2)) {
    return 6;
  }
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x248) + (ulong)param_2 * 0x20);
  uVar5 = (uint)*(ushort *)(puVar1 + 1);
  if ((*(ushort *)(puVar1 + 1) == 0) || (puVar1[3] != 0)) goto LAB_109757740;
  lVar2 = *(long *)(param_1 + 0xb8);
  lVar4 = *(long *)(param_1 + 0xc0);
  lVar6 = lVar2;
  (**(code **)(lVar2 + 8))();
  if (lVar6 != 0) {
    puVar1[3] = lVar6;
    uVar7 = puVar1[2];
    if (*(code **)(lVar4 + 0x28) == (code *)0x0) {
      if (uVar7 <= *(ulong *)(lVar4 + 8)) goto LAB_109757704;
    }
    else {
      lVar3 = lVar4;
      (**(code **)(lVar4 + 0x28))(lVar4,uVar7,0,0);
      lVar6 = puVar1[3];
      if (lVar3 == 0) {
LAB_109757704:
        *(ulong *)(lVar4 + 0x10) = uVar7;
        FUN_109757778(lVar4,uVar7,lVar6,*(undefined2 *)(puVar1 + 1));
        if ((int)lVar4 == 0) {
          uVar5 = (uint)*(ushort *)(puVar1 + 1);
          goto LAB_109757740;
        }
        lVar6 = puVar1[3];
      }
      if (lVar6 == 0) goto LAB_109757734;
    }
    (**(code **)(lVar2 + 0x10))(lVar2,lVar6);
  }
LAB_109757734:
  uVar5 = 0;
  puVar1[3] = 0;
  *(undefined2 *)(puVar1 + 1) = 0;
LAB_109757740:
  *param_3 = *puVar1;
  param_3[1] = puVar1[3];
  *(uint *)(param_3 + 2) = uVar5;
  return 0;
}



/* Entry: 109757778; end: 109757927;  */

undefined4 FUN_109757778(long *param_1,ulong param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  undefined4 uVar2;
  
  plVar1 = (long *)(param_1[1] - param_2);
  if (param_2 <= (ulong)param_1[1] && plVar1 != (long *)0x0) {
    if ((code *)param_1[5] == (code *)0x0) {
      if (param_4 <= plVar1) {
        plVar1 = param_4;
      }
      if (param_4 != (long *)0x0) {
        _memcpy(param_3,*param_1 + param_2,plVar1);
      }
    }
    else {
      plVar1 = param_1;
      (*(code *)param_1[5])(param_1,param_2,param_3,param_4);
    }
    param_1[2] = (long)plVar1 + param_2;
    uVar2 = 0x55;
    if (param_4 <= plVar1) {
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0x55;
}



/* Entry: 109757928; end: 1097579af;  */

undefined1 FUN_109757928(long *param_1,undefined4 *param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined1 uStack_21;
  
  uStack_21 = 0;
  uVar2 = param_1[2];
  if (uVar2 < (ulong)param_1[1]) {
    if ((code *)param_1[5] == (code *)0x0) {
      uStack_21 = *(undefined1 *)(*param_1 + uVar2);
    }
    else {
      plVar1 = param_1;
      (*(code *)param_1[5])(param_1,uVar2,&uStack_21,1);
      if (plVar1 != (long *)0x1) goto LAB_109757978;
      uVar2 = param_1[2];
    }
    uVar3 = 0;
    param_1[2] = uVar2 + 1;
  }
  else {
LAB_109757978:
    uVar3 = 0x55;
  }
  *param_2 = uVar3;
  return uStack_21;
}



/* Entry: 1097579b0; end: 109757bf7;  */

long * FUN_1097579b0(long *param_1,long param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  uint *puVar12;
  uint *puVar13;
  long *plVar14;
  long *plVar15;
  ushort *puVar16;
  
  if (param_2 == 0) {
    plVar14 = (long *)0x6;
  }
  else {
    if (param_1 != (long *)0x0) {
      bVar7 = false;
      plVar14 = param_1 + 8;
      puVar16 = (ushort *)(param_2 + 2);
      puVar12 = (uint *)*plVar14;
      do {
        bVar4 = (byte)puVar16[-1];
        uVar8 = (uint)bVar4;
        if (bVar4 < 0x10) {
          if (0xb < bVar4) {
            if (uVar8 - 0xc < 2) {
              uVar9 = (ulong)((uint)(ushort)((ushort)*puVar12 >> 8) |
                             ((ushort)*puVar12 & 0xff00ff) << 8);
            }
            else {
              if (1 < uVar8 - 0xe) goto LAB_109757bac;
              uVar9 = (ulong)(ushort)*puVar12;
            }
            puVar13 = (uint *)((long)puVar12 + 2);
            iVar11 = 0x10;
            goto LAB_109757b08;
          }
          if (uVar8 - 8 < 2) {
            puVar13 = (uint *)((long)puVar12 + 1);
            uVar9 = (ulong)(byte)*puVar12;
            iVar11 = 0x18;
            goto LAB_109757b08;
          }
          if (uVar8 != 4) {
LAB_109757bac:
            plVar15 = (long *)0x0;
            *plVar14 = (long)puVar12;
joined_r0x000109757b98:
            if (!bVar7) {
              return plVar15;
            }
            if (param_1[5] != 0) {
              if (*param_1 != 0) {
                (**(code **)(param_1[7] + 0x10))();
              }
              *param_1 = 0;
            }
            *plVar14 = 0;
            param_1[9] = 0;
            return plVar15;
          }
          plVar15 = param_1;
          func_0x00010975780c(param_1,*puVar16);
          if ((int)plVar15 != 0) goto joined_r0x000109757b98;
          puVar13 = (uint *)*plVar14;
          bVar7 = true;
        }
        else {
          if (uVar8 < 0x1a) {
            uVar6 = 1 << (ulong)(uVar8 & 0x1f);
            if ((uVar6 & 0x300000) == 0) {
              if ((uVar6 & 0xc00000) == 0) {
                if ((uVar6 & 0x3000000) == 0) goto LAB_109757a94;
                uVar9 = (ulong)*(byte *)((long)puVar16 + -1);
                if (uVar9 <= (ulong)(param_1[9] - (long)puVar12)) {
                  if (uVar8 == 0x18) {
                    _memcpy(param_3 + (ulong)*puVar16,puVar12,uVar9);
                  }
                  puVar13 = (uint *)((long)puVar12 + uVar9);
                  goto LAB_109757b7c;
                }
                plVar15 = (long *)0x55;
                goto joined_r0x000109757b98;
              }
              bVar1 = *(byte *)((long)puVar12 + 2);
              bVar2 = *(byte *)((long)puVar12 + 1);
              bVar3 = (byte)*puVar12;
            }
            else {
              bVar1 = (byte)*puVar12;
              bVar2 = *(byte *)((long)puVar12 + 1);
              bVar3 = *(byte *)((long)puVar12 + 2);
            }
            puVar13 = (uint *)((long)puVar12 + 3);
            uVar9 = (ulong)bVar1 << 0x10 | (ulong)bVar2 << 8 | (ulong)bVar3;
            iVar11 = 8;
          }
          else {
LAB_109757a94:
            if (uVar8 - 0x10 < 2) {
              iVar11 = 0;
              puVar13 = puVar12 + 1;
              uVar8 = (*puVar12 & 0xff00ff00) >> 8 | (*puVar12 & 0xff00ff) << 8;
              uVar9 = (ulong)(uVar8 >> 0x10 | uVar8 << 0x10);
            }
            else {
              if (1 < uVar8 - 0x12) goto LAB_109757bac;
              iVar11 = 0;
              puVar13 = puVar12 + 1;
              uVar9 = (ulong)*puVar12;
            }
          }
LAB_109757b08:
          if ((bVar4 & 1) != 0) {
            uVar9 = (long)(((int)uVar9 << iVar11) >> iVar11);
          }
          uVar10 = (ulong)*puVar16;
          cVar5 = *(char *)((long)puVar16 + -1);
          if (cVar5 == '\x04') {
            *(int *)(param_3 + uVar10) = (int)uVar9;
          }
          else if (cVar5 == '\x02') {
            *(short *)(param_3 + uVar10) = (short)uVar9;
          }
          else if (cVar5 == '\x01') {
            *(char *)(param_3 + uVar10) = (char)uVar9;
          }
          else {
            *(ulong *)(param_3 + uVar10) = uVar9;
          }
        }
LAB_109757b7c:
        puVar16 = puVar16 + 2;
        puVar12 = puVar13;
      } while( true );
    }
    plVar14 = (long *)0x28;
  }
  return plVar14;
}



/* Entry: 109757bf8; end: 109757c63;  */

ulong FUN_109757bf8(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uStack_20;
  ulong uStack_18;
  
  uStack_18 = 0;
  uStack_20 = 0x1000000;
  FUN_109757c64(&uStack_20,param_1);
  if (uStack_20 == 0) {
    uVar3 = 0x7fffffff;
  }
  else {
    uVar2 = -uStack_20;
    if (-1 < (long)uStack_20) {
      uVar2 = uStack_20;
    }
    uVar1 = -uStack_18;
    if (-1 < (long)uStack_18) {
      uVar1 = uStack_18;
    }
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = ((uVar2 >> 1) + uVar1 * 0x10000) / uVar2;
    }
  }
  uVar2 = -uVar3;
  if (-1 < (long)(uStack_20 ^ uStack_18)) {
    uVar2 = uVar3;
  }
  return uVar2;
}



/* Entry: 109757c64; end: 109757d37;  */

void FUN_109757c64(long *param_1,ulong param_2)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar5 = *param_1;
  lVar4 = param_1[1];
  lVar8 = lVar5;
  if ((long)param_2 < -0x2d0000) {
    do {
      lVar5 = lVar4;
      lVar4 = -lVar8;
      uVar3 = param_2 + 0x5a0000;
      bVar2 = param_2 < 0xffffffffff790000;
      param_2 = uVar3;
      lVar8 = lVar5;
    } while (bVar2);
  }
  else {
    uVar3 = param_2;
    lVar8 = lVar4;
    if (0x2d0000 < (long)param_2) {
      do {
        lVar4 = lVar5;
        lVar5 = -lVar8;
        uVar3 = param_2 - 0x5a0000;
        bVar2 = 0x870000 < param_2;
        param_2 = uVar3;
        lVar8 = lVar4;
      } while (bVar2);
    }
  }
  uVar7 = 1;
  lVar8 = 1;
  plVar6 = (long *)&UNK_10dff6df0;
  do {
    lVar9 = lVar4 + lVar8 >> (uVar7 & 0x3f);
    lVar10 = lVar5 + lVar8 >> (uVar7 & 0x3f);
    bVar2 = (uVar3 & 0x8000000000000000) != 0;
    lVar1 = -*plVar6;
    if (bVar2) {
      lVar1 = *plVar6;
    }
    uVar3 = uVar3 + lVar1;
    lVar1 = -lVar9;
    if (bVar2) {
      lVar1 = lVar9;
    }
    lVar5 = lVar5 + lVar1;
    if (bVar2) {
      lVar10 = -lVar10;
    }
    lVar4 = lVar10 + lVar4;
    lVar8 = lVar8 << 1;
    uVar7 = uVar7 + 1;
    plVar6 = plVar6 + 1;
  } while (uVar7 != 0x17);
  *param_1 = lVar5;
  param_1[1] = lVar4;
  return;
}



/* Entry: 109757d38; end: 109757db3;  */

long FUN_109757d38(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long lStack_20;
  long lStack_18;
  
  if (param_2 == 0 && param_1 == 0) {
    return 0;
  }
  lVar1 = -param_1;
  if (-1 < param_1) {
    lVar1 = param_1;
  }
  lVar2 = -param_2;
  if (-1 < param_2) {
    lVar2 = param_2;
  }
  uVar3 = (uint)lVar2 | (uint)lVar1;
  iVar4 = (int)LZCOUNT(uVar3);
  uVar6 = (ulong)(2 - iVar4);
  uVar5 = (ulong)(iVar4 - 2);
  lStack_18 = param_2 >> (uVar6 & 0x3f);
  lStack_20 = param_1 >> (uVar6 & 0x3f);
  if (uVar3 >> 0x1e == 0) {
    lStack_18 = param_2 << (uVar5 & 0x3f);
    lStack_20 = param_1 << (uVar5 & 0x3f);
  }
  FUN_109757db4(&lStack_20);
  return lStack_18;
}



/* Entry: 109757db4; end: 109757e8b;  */

void FUN_109757db4(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  lVar10 = *param_1;
  lVar3 = param_1[1];
  lVar6 = -lVar10;
  lVar4 = lVar10;
  lVar8 = lVar3;
  if (lVar3 < lVar6) {
    lVar4 = -lVar3;
    lVar8 = lVar10;
  }
  uVar5 = 0;
  if (lVar3 < lVar6) {
    uVar5 = 0xffffffffffa60000;
  }
  uVar9 = 0xffffffffff4c0000;
  if (0 < lVar3) {
    uVar9 = 0xb40000;
  }
  lVar11 = lVar3;
  if (lVar6 < lVar3) {
    lVar11 = lVar10;
  }
  lVar2 = lVar3;
  if (lVar3 <= lVar6) {
    lVar2 = -lVar10;
  }
  uVar1 = 0x5a0000;
  if (lVar3 <= lVar6) {
    uVar1 = uVar9;
  }
  if (lVar10 < lVar3) {
    uVar5 = uVar1;
    lVar4 = lVar2;
    lVar8 = -lVar11;
  }
  uVar9 = 1;
  lVar10 = 1;
  plVar7 = (long *)&UNK_10dff6df0;
  do {
    lVar11 = lVar8 + lVar10 >> (uVar9 & 0x3f);
    lVar6 = lVar4 + lVar10 >> (uVar9 & 0x3f);
    lVar3 = -*plVar7;
    if (0 < lVar8) {
      lVar3 = *plVar7;
    }
    uVar5 = uVar5 + lVar3;
    lVar3 = -lVar11;
    if (0 < lVar8) {
      lVar3 = lVar11;
    }
    lVar4 = lVar4 + lVar3;
    if (0 < lVar8) {
      lVar6 = -lVar6;
    }
    lVar8 = lVar6 + lVar8;
    lVar10 = lVar10 << 1;
    uVar9 = uVar9 + 1;
    plVar7 = plVar7 + 1;
  } while (uVar9 != 0x17);
  uVar9 = uVar5 + 8 & 0x7ffffffffffffff0;
  if ((uVar5 & 0x8000000000000000) != 0) {
    uVar9 = -(8 - uVar5 & 0xfffffffffffffff0);
  }
  *param_1 = lVar4;
  param_1[1] = uVar9;
  return;
}



/* Entry: 109757e8c; end: 109758037;  */

void FUN_109757e8c(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lStack_50;
  long lStack_48;
  
  if ((param_1 != (long *)0x0) && (param_2 != 0)) {
    lVar11 = param_1[1];
    lVar10 = *param_1;
    if (lVar10 != 0 || lVar11 != 0) {
      lVar1 = -lVar10;
      if (-1 < lVar10) {
        lVar1 = lVar10;
      }
      lVar2 = -lVar11;
      if (-1 < lVar11) {
        lVar2 = lVar11;
      }
      uVar4 = (uint)lVar2 | (uint)lVar1;
      iVar8 = (int)LZCOUNT(uVar4);
      uVar7 = (ulong)(iVar8 - 2);
      uVar9 = (ulong)(2 - iVar8);
      lStack_48 = lVar11 >> (uVar9 & 0x3f);
      lStack_50 = lVar10 >> (uVar9 & 0x3f);
      if (uVar4 >> 0x1e == 0) {
        lStack_48 = lVar11 << (uVar7 & 0x3f);
        lStack_50 = lVar10 << (uVar7 & 0x3f);
      }
      FUN_109757c64(&lStack_50);
      lVar10 = -lStack_50;
      if (-1 < lStack_50) {
        lVar10 = lStack_50;
      }
      uVar5 = lVar10 * 0xdbd95b16 + 0x40000000U >> 0x20;
      uVar3 = -uVar5;
      if (-1 < lStack_50) {
        uVar3 = uVar5;
      }
      lVar10 = -lStack_48;
      if (-1 < lStack_48) {
        lVar10 = lStack_48;
      }
      uVar6 = lVar10 * 0xdbd95b16 + 0x40000000U >> 0x20;
      uVar5 = -uVar6;
      if (-1 < lStack_48) {
        uVar5 = uVar6;
      }
      uVar6 = (ulong)(uint)(1 << (ulong)(iVar8 - 3U & 0x1f));
      lVar10 = uVar5 << (uVar9 & 0x3f);
      lVar11 = uVar3 << (uVar9 & 0x3f);
      if (uVar4 >> 0x1d == 0) {
        lVar10 = (long)(uVar5 + uVar6 + ((long)uVar5 >> 0x3f)) >> (uVar7 & 0x3f);
        lVar11 = (long)(uVar3 + uVar6 + ((long)uVar3 >> 0x3f)) >> (uVar7 & 0x3f);
      }
      *param_1 = lVar11;
      param_1[1] = lVar10;
    }
  }
  return;
}



/* Entry: 109758038; end: 10975810f;  */

long FUN_109758038(long param_1,long param_2,int *param_3)

{
  long lVar1;
  int iVar2;
  
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_2;
    _strlen();
    lVar1 = lVar1 + 1;
  }
  if (lVar1 < 1) {
    param_1 = 0;
    iVar2 = 0;
    if (lVar1 == 0) goto LAB_10975801c;
    iVar2 = 6;
  }
  else {
    (**(code **)(param_1 + 8))(param_1,lVar1);
    iVar2 = 0x40;
    if (param_1 != 0) {
      iVar2 = 0;
    }
    if (lVar1 == 0) goto LAB_10975801c;
  }
  if ((param_2 != 0) && (iVar2 == 0)) {
    _memcpy(param_1,param_2,lVar1);
  }
LAB_10975801c:
  *param_3 = iVar2;
  return param_1;
}



/* Entry: 109758110; end: 1097582ab;  */

undefined8 *
FUN_109758110(long param_1,undefined8 *param_2,byte *param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uStack_64;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  lVar2 = *(long *)(param_1 + 0x18);
  puVar3 = puVar1;
  FUN_1097537e4(puVar1,*(undefined8 *)(lVar2 + 0x48),&uStack_64);
  puVar5 = (undefined8 *)(ulong)uStack_64;
  if (uStack_64 == 0) {
    puVar3[0x16] = param_1;
    puVar3[0x17] = puVar1;
    puVar3[0x18] = *param_2;
    if (*param_3 != 0) {
      puVar3[2] = puVar3[2] | 0x400;
    }
    puVar4 = puVar1;
    (*(code *)puVar1[1])(puVar1,0x78);
    if (puVar4 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)0x40;
    }
    else {
      puVar4[0xe] = 0;
      puVar4[0xb] = 0;
      puVar4[10] = 0;
      puVar4[0xd] = 0;
      puVar4[0xc] = 0;
      puVar4[7] = 0;
      puVar4[6] = 0;
      puVar4[9] = 0;
      puVar4[8] = 0;
      puVar4[3] = 0;
      puVar4[2] = 0;
      puVar4[5] = 0;
      puVar4[4] = 0;
      puVar4[1] = 0;
      *puVar4 = 0;
      puVar3[0x1e] = puVar4;
      *(undefined4 *)((long)puVar4 + 0x6c) = 0xffffffff;
      if (*(code **)(lVar2 + 0x60) == (code *)0x0) {
        puVar5 = (undefined8 *)0x0;
      }
      else {
        puVar5 = (undefined8 *)*param_2;
        (**(code **)(lVar2 + 0x60))(puVar5,puVar3,param_4,param_5,param_6);
      }
      *param_2 = puVar3[0x18];
      *param_3 = (byte)(*(uint *)(puVar3 + 2) >> 10) & 1;
      if ((int)puVar5 == 0) {
        puVar5 = puVar3;
        FUN_1097557f0();
        if ((int)puVar5 == 0) goto LAB_1097581b8;
        if ((int)puVar5 == 0x26) {
          puVar5 = (undefined8 *)0x0;
          goto LAB_1097581b8;
        }
      }
    }
  }
  else {
    puVar4 = (undefined8 *)0x0;
  }
  FUN_1097582ac(puVar3,puVar1);
  if (*(code **)(lVar2 + 0x68) != (code *)0x0) {
    (**(code **)(lVar2 + 0x68))(puVar3);
  }
  if (puVar4 != (undefined8 *)0x0) {
    (*(code *)puVar1[2])(puVar1,puVar4);
  }
  if (puVar3 != (undefined8 *)0x0) {
    (*(code *)puVar1[2])(puVar1,puVar3);
    puVar3 = (undefined8 *)0x0;
  }
LAB_1097581b8:
  *param_7 = puVar3;
  return puVar5;
}



/* Entry: 1097582ac; end: 109758357;  */

void FUN_1097582ac(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  if (param_1 != 0) {
    if (0 < *(int *)(param_1 + 0x48)) {
      lVar3 = 0;
      do {
        plVar1 = *(long **)(*(long *)(param_1 + 0x50) + lVar3 * 8);
        lVar2 = *(long *)(*plVar1 + 0xb8);
        if (*(code **)(plVar1[2] + 0x10) != (code *)0x0) {
          (**(code **)(plVar1[2] + 0x10))(plVar1);
        }
        (**(code **)(lVar2 + 0x10))(lVar2,plVar1);
        *(undefined8 *)(*(long *)(param_1 + 0x50) + lVar3 * 8) = 0;
        lVar3 = lVar3 + 1;
      } while (lVar3 < *(int *)(param_1 + 0x48));
    }
    if (*(long *)(param_1 + 0x50) != 0) {
      (**(code **)(param_2 + 0x10))(param_2);
    }
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  return;
}



/* Entry: 109758358; end: 10975848b;  */

short * FUN_109758358(short *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  byte *pbVar13;
  undefined1 auStack_50 [16];
  long lStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  if (param_2 == (long *)0x0) {
    return (short *)0x6;
  }
  if (param_1 == (short *)0x0) {
    return (short *)0x14;
  }
  uVar8 = (ulong)(ushort)param_1[1];
  if ((uVar8 == 0) || (*param_1 == 0)) {
    param_1 = (short *)0x0;
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
  }
  else {
    lStack_30 = -0x7fffffff;
    lStack_40 = 0x7fffffff;
    lStack_38 = 0x7fffffff;
    lStack_28 = -0x7fffffff;
    lVar7 = -0x7fffffff;
    lVar9 = 0x7fffffff;
    plVar10 = *(long **)(param_1 + 4);
    lVar11 = 0x7fffffff;
    lVar12 = -0x7fffffff;
    pbVar13 = *(byte **)(param_1 + 8);
    do {
      lVar5 = *plVar10;
      lVar6 = plVar10[1];
      lVar1 = lVar5;
      if (lVar11 <= lVar5) {
        lVar1 = lVar11;
      }
      lVar2 = lVar5;
      if (lVar5 <= lVar7) {
        lVar2 = lVar7;
      }
      lVar3 = lVar6;
      if (lVar9 <= lVar6) {
        lVar3 = lVar9;
      }
      lVar4 = lVar6;
      if (lVar6 <= lVar12) {
        lVar4 = lVar12;
      }
      lVar7 = lVar5;
      if (lStack_40 <= lVar5) {
        lVar7 = lStack_40;
      }
      if (lVar5 <= lStack_30) {
        lVar5 = lStack_30;
      }
      lVar9 = lVar6;
      if (lStack_38 <= lVar6) {
        lVar9 = lStack_38;
      }
      if (lVar6 <= lStack_28) {
        lVar6 = lStack_28;
      }
      if ((*pbVar13 & 3) == 1) {
        lStack_40 = lVar7;
        lStack_38 = lVar9;
        lStack_30 = lVar5;
        lStack_28 = lVar6;
      }
      uVar8 = uVar8 - 1;
      lVar7 = lVar2;
      lVar9 = lVar3;
      plVar10 = plVar10 + 2;
      lVar11 = lVar1;
      lVar12 = lVar4;
      pbVar13 = pbVar13 + 1;
    } while (uVar8 != 0);
    if (((lVar1 < lStack_40 || lStack_30 < lVar2) || lVar3 < lStack_38) || lStack_28 < lVar4) {
      func_0x00010975687c(param_1,&PTR_FUN_110b0b3a8,auStack_50);
      if ((int)param_1 == 0) {
        param_2[1] = lStack_38;
        *param_2 = lStack_40;
        param_2[3] = lStack_28;
        param_2[2] = lStack_30;
      }
    }
    else {
      param_1 = (short *)0x0;
      *param_2 = lStack_40;
      param_2[1] = lStack_38;
      param_2[2] = lStack_30;
      param_2[3] = lStack_28;
    }
  }
  return param_1;
}



/* Entry: 10975848c; end: 1097584f3;  */

undefined8 FUN_10975848c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 < param_2[2]) {
    param_2[2] = lVar1;
  }
  if (param_2[4] < lVar1) {
    param_2[4] = lVar1;
  }
  lVar1 = param_1[1];
  if (lVar1 < param_2[3]) {
    param_2[3] = lVar1;
  }
  if (param_2[5] < lVar1) {
    param_2[5] = lVar1;
  }
  lVar1 = *param_1;
  param_2[1] = param_1[1];
  *param_2 = lVar1;
  return 0;
}



/* Entry: 1097584f4; end: 1097585e3;  */

undefined8 FUN_1097584f4(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  lVar1 = *param_2;
  lVar2 = param_3[2];
  if (lVar1 < lVar2) {
    param_3[2] = lVar1;
    lVar2 = lVar1;
  }
  lVar3 = param_3[4];
  if (lVar3 < lVar1) {
    param_3[4] = lVar1;
    lVar3 = lVar1;
  }
  lVar4 = param_2[1];
  plVar5 = param_3 + 3;
  lVar1 = *plVar5;
  if (lVar4 < *plVar5) {
    *plVar5 = lVar4;
    lVar1 = lVar4;
  }
  plVar6 = param_3 + 5;
  if (*plVar6 < lVar4) {
    *plVar6 = lVar4;
  }
  if ((*param_1 < lVar2) || (lVar3 < *param_1)) {
    func_0x0001097586b0(*param_3);
    lVar1 = param_3[3];
  }
  lVar2 = param_1[1];
  if ((lVar2 < lVar1) || (*plVar6 < lVar2)) {
    func_0x0001097586b0(param_3[1],lVar2,param_2[1],plVar5,plVar6);
  }
  lVar2 = *param_2;
  param_3[1] = param_2[1];
  *param_3 = lVar2;
  return 0;
}



/* Entry: 1097585e4; end: 10975870f;  */

undefined8 FUN_1097585e4(long *param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = *param_1;
  lVar3 = param_4[2];
  if (lVar1 < lVar3) {
    lVar2 = *param_2;
  }
  else {
    lVar2 = *param_2;
    if ((lVar1 <= (long)param_4[4] && lVar3 <= lVar2) && lVar2 <= (long)param_4[4])
    goto LAB_109758648;
  }
  FUN_109758710(*param_4,lVar1,lVar2,*param_3,param_4 + 2,param_4 + 4);
LAB_109758648:
  lVar1 = param_1[1];
  lVar3 = param_4[3];
  if ((((lVar1 < lVar3) || ((long)param_4[5] < lVar1)) || (param_2[1] < lVar3)) ||
     ((long)param_4[5] < param_2[1])) {
    FUN_109758710(param_4[1],lVar1,param_2[1],param_3[1],param_4 + 3,param_4 + 5);
  }
  uVar4 = *param_3;
  param_4[1] = param_3[1];
  *param_4 = uVar4;
  return 0;
}



/* Entry: 109758710; end: 1097587a7;  */

void FUN_109758710(long param_1,long param_2,long param_3,long param_4,long *param_5,long *param_6)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_6;
  if (param_2 - lVar2 != 0 && lVar2 <= param_2 || lVar2 < param_3) {
    lVar1 = param_1 - lVar2;
    FUN_1097587a8(lVar1,param_2 - lVar2,param_3 - lVar2,param_4 - lVar2);
    *param_6 = lVar1 + lVar2;
  }
  lVar2 = *param_5;
  if (lVar2 - param_2 != 0 && param_2 <= lVar2 || param_3 < lVar2) {
    param_1 = lVar2 - param_1;
    FUN_1097587a8(param_1,lVar2 - param_2,lVar2 - param_3,lVar2 - param_4);
    *param_5 = lVar2 - param_1;
  }
  return;
}



/* Entry: 1097587a8; end: 1097588cb;  */

long FUN_1097587a8(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  
  lVar11 = -param_1;
  if (-1 < param_1) {
    lVar11 = param_1;
  }
  lVar12 = -param_2;
  if (-1 < param_2) {
    lVar12 = param_2;
  }
  lVar14 = -param_3;
  if (-1 < param_3) {
    lVar14 = param_3;
  }
  lVar10 = -param_4;
  if (-1 < param_4) {
    lVar10 = param_4;
  }
  uVar5 = (uint)lVar12 | (uint)lVar11 | (uint)lVar14 | (uint)lVar10;
  iVar8 = (int)LZCOUNT(uVar5);
  uVar6 = iVar8 - 4;
  uVar9 = (ulong)(4 - iVar8);
  uVar4 = uVar6;
  if (1 < (int)uVar6) {
    uVar4 = 2;
  }
  uVar15 = (ulong)uVar4;
  lVar11 = param_4 >> (uVar9 & 0x3f);
  lVar12 = param_3 >> (uVar9 & 0x3f);
  lVar14 = param_2 >> (uVar9 & 0x3f);
  lVar10 = param_1 >> (uVar9 & 0x3f);
  if (uVar5 >> 0x1b == 0) {
    uVar6 = uVar4;
    lVar11 = param_4 << (uVar15 & 0x3f);
    lVar12 = param_3 << (uVar15 & 0x3f);
    lVar14 = param_2 << (uVar15 & 0x3f);
    lVar10 = param_1 << (uVar15 & 0x3f);
  }
  while ((0 < lVar14 || (0 < lVar12))) {
    lVar13 = lVar14 + lVar10;
    lVar1 = lVar11 + lVar12;
    lVar2 = lVar12 + lVar14 + lVar13;
    lVar3 = lVar1 + lVar12 + lVar14;
    lVar12 = lVar1 >> 1;
    lVar14 = lVar3 >> 2;
    lVar7 = lVar2 + lVar3 >> 3;
    if (lVar1 < lVar13) {
      lVar11 = lVar3 + lVar2 >> 3;
      lVar12 = lVar2 >> 2;
      lVar14 = lVar13 >> 1;
      lVar7 = lVar10;
    }
    lVar10 = lVar7;
    if (((lVar10 == lVar14) && (lVar13 = lVar10, lVar12 <= lVar10)) ||
       ((lVar12 == lVar11 && (lVar13 = lVar12, lVar14 <= lVar11)))) goto LAB_1097588b4;
  }
  lVar13 = 0;
LAB_1097588b4:
  lVar11 = lVar13 >> ((ulong)uVar6 & 0x3f);
  if ((int)uVar6 < 1) {
    lVar11 = lVar13 << ((ulong)-uVar6 & 0x3f);
  }
  return lVar11;
}



/* Entry: 1097588cc; end: 109758a3b;  */

undefined8 FUN_1097588cc(long *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if (param_1 == (long *)0x0) {
    return 0x21;
  }
  if (param_2 == (uint *)0x0) {
    return 6;
  }
  if (param_3 == (uint *)0x0) {
    return 6;
  }
  if (param_2 != param_3) {
    if ((int)param_2[2] < 0) {
      uVar8 = (uint)(0 < (int)param_3[2]);
    }
    else if (param_2[2] == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = param_3[2] >> 0x1f;
    }
    lVar7 = *param_1;
    if (*(long *)(param_3 + 4) != 0) {
      (**(code **)(lVar7 + 0x10))(lVar7);
    }
    param_3[4] = 0;
    param_3[5] = 0;
    uVar9 = *(undefined8 *)(param_2 + 2);
    uVar4 = *(undefined8 *)param_2;
    uVar11 = *(undefined8 *)(param_2 + 6);
    uVar10 = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_3 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_3 + 2) = uVar9;
    *(undefined8 *)param_3 = uVar4;
    *(undefined8 *)(param_3 + 6) = uVar11;
    *(undefined8 *)(param_3 + 4) = uVar10;
    if (uVar8 != 0) {
      param_3[2] = -param_3[2];
    }
    if (*(long *)(param_2 + 4) == 0) {
      return 0;
    }
    uVar2 = param_2[2];
    uVar1 = -uVar2;
    if (-1 < (int)uVar2) {
      uVar1 = uVar2;
    }
    uVar6 = (ulong)uVar1;
    lVar5 = 0;
    if (uVar2 != 0) {
      uVar2 = *param_3;
      if (uVar2 != 0) {
        uVar3 = 0;
        if (uVar1 != 0) {
          uVar3 = 0x7fffffff / uVar1;
        }
        if (uVar3 < uVar2) {
          uVar4 = 10;
LAB_109758a34:
          param_3[4] = 0;
          param_3[5] = 0;
          return uVar4;
        }
        (**(code **)(lVar7 + 8))(lVar7,uVar2 * uVar6);
        lVar5 = lVar7;
        if (lVar7 == 0) {
          uVar4 = 0x40;
          goto LAB_109758a34;
        }
      }
    }
    *(long *)(param_3 + 4) = lVar5;
    if (uVar8 == 0) {
      _memcpy();
    }
    else {
      uVar8 = *param_3;
      if (uVar8 != 0) {
        lVar5 = lVar5 + uVar6 * (uVar8 - 1);
        lVar7 = *(long *)(param_2 + 4);
        do {
          _memcpy(lVar5,lVar7,uVar6);
          lVar7 = lVar7 + uVar6;
          lVar5 = lVar5 - uVar6;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
    }
  }
  return 0;
}



/* Entry: 109758a3c; end: 109758eaf;  */

undefined8 FUN_109758a3c(undefined8 *param_1,uint *param_2,int *param_3,int param_4)

{
  char cVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar7;
  byte bVar8;
  undefined8 uVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  byte *pbVar6;
  
  if (param_1 == (undefined8 *)0x0) {
    return 0x21;
  }
  uVar9 = 6;
  if (param_2 == (uint *)0x0) {
    return 6;
  }
  if (param_3 == (int *)0x0) {
    return 6;
  }
  if (*(byte *)((long)param_2 + 0x1a) - 1 < 7) {
    pbVar10 = (byte *)*param_1;
    if ((param_3[2] == 0) && ((int)param_2[2] < 0)) {
      uVar12 = 1;
    }
    else {
      uVar12 = (uint)param_3[2] >> 0x1f;
    }
    uVar2 = param_2[1];
    if (*(long *)(param_3 + 4) != 0) {
      (**(code **)(pbVar10 + 0x10))(pbVar10);
    }
    param_3[8] = 0;
    param_3[9] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[0] = 0;
    param_3[1] = 0;
    param_3[6] = 0;
    param_3[7] = 0;
    param_3[4] = 0;
    param_3[5] = 0;
    *(undefined1 *)((long)param_3 + 0x1a) = 2;
    uVar4 = *param_2;
    *(undefined8 *)param_3 = *(undefined8 *)param_2;
    uVar13 = uVar2;
    if (param_4 != 0) {
      iVar7 = 0;
      if (param_4 != 0) {
        iVar7 = (int)uVar2 / param_4;
      }
      iVar7 = uVar2 - iVar7 * param_4;
      if (iVar7 != 0) {
        uVar13 = (uVar2 + param_4) - iVar7;
        if (param_4 < 1) {
          uVar13 = (uVar2 - param_4) - iVar7;
        }
      }
    }
    if ((int)uVar13 < 0) {
      uVar9 = 6;
      goto LAB_109758b50;
    }
    uVar14 = (ulong)(int)uVar13;
    pbVar11 = (byte *)0x0;
    if ((uVar4 != 0) && (uVar13 != 0)) {
      uVar15 = 0;
      if (uVar14 != 0) {
        uVar15 = 0x7fffffff / uVar14;
      }
      if (uVar15 < uVar4) {
        uVar9 = 10;
LAB_109758b50:
        param_3[4] = 0;
        param_3[5] = 0;
        return uVar9;
      }
      (**(code **)(pbVar10 + 8))(pbVar10,uVar14 * uVar4);
      pbVar11 = pbVar10;
      if (pbVar10 == (byte *)0x0) {
        uVar9 = 0x40;
        goto LAB_109758b50;
      }
    }
    uVar9 = 0;
    *(byte **)(param_3 + 4) = pbVar11;
    uVar2 = -uVar13;
    if (uVar12 == 0) {
      uVar2 = uVar13;
    }
    param_3[2] = uVar2;
  }
  else {
    pbVar11 = *(byte **)(param_3 + 4);
  }
  pbVar10 = *(byte **)(param_2 + 4);
  uVar12 = param_2[2];
  if ((int)uVar12 < 0) {
    pbVar10 = pbVar10 + -(long)(int)((*param_2 - 1) * uVar12);
  }
  iVar7 = param_3[2];
  if (iVar7 < 0) {
    pbVar11 = pbVar11 + -(long)((*param_3 + -1) * iVar7);
  }
  bVar8 = *(byte *)((long)param_2 + 0x1a);
  uVar2 = (uint)bVar8;
  if (bVar8 < 4) {
    if (bVar8 == 1) {
      *(undefined2 *)(param_3 + 6) = 2;
      for (uVar12 = *param_2; uVar12 != 0; uVar12 = uVar12 - 1) {
        uVar2 = param_2[1];
        pbVar3 = pbVar11;
        pbVar5 = pbVar10;
        if (7 < uVar2) {
          uVar2 = uVar2 >> 3;
          pbVar6 = pbVar10;
          do {
            pbVar5 = pbVar6 + 1;
            bVar8 = *pbVar6;
            *pbVar3 = bVar8 >> 7;
            uVar14 = NEON_ushl((ulong)CONCAT16(bVar8,(uint6)CONCAT14(bVar8,(uint)CONCAT12(bVar8,(
                                                  ushort)bVar8))),0xfffdfffcfffbfffa,2);
            uVar15 = uVar14 & 0xffffffffffffff01;
            uVar14 = CONCAT44((int)(uVar15 >> 0x20),CONCAT22((short)(uVar14 >> 0x10),(short)uVar15))
                     & 0xffffffffff01ffff;
            uVar15 = CONCAT26((short)(uVar14 >> 0x30),CONCAT24((short)(uVar15 >> 0x20),(int)uVar14))
                     & 0xff01ff01ffffffff;
            *(uint *)(pbVar3 + 1) =
                 CONCAT13((char)(uVar15 >> 0x30),
                          CONCAT12((char)(uVar15 >> 0x20),
                                   CONCAT11((char)(uVar15 >> 0x10),(char)uVar14)));
            pbVar3[5] = bVar8 >> 2 & 1;
            pbVar3[6] = bVar8 >> 1 & 1;
            pbVar3[7] = bVar8 & 1;
            pbVar3 = pbVar3 + 8;
            uVar2 = uVar2 - 1;
            pbVar6 = pbVar5;
          } while (uVar2 != 0);
          uVar2 = param_2[1];
        }
        uVar2 = uVar2 & 7;
        if (uVar2 != 0) {
          uVar4 = (uint)*pbVar5;
          do {
            *pbVar3 = (byte)(uVar4 >> 7) & 1;
            uVar4 = uVar4 << 1;
            uVar2 = uVar2 - 1;
            pbVar3 = pbVar3 + 1;
          } while (uVar2 != 0);
        }
        pbVar10 = pbVar10 + (int)param_2[2];
        pbVar11 = pbVar11 + param_3[2];
      }
      return uVar9;
    }
    if (uVar2 != 2) {
      if (uVar2 != 3) {
        return uVar9;
      }
      *(undefined2 *)(param_3 + 6) = 4;
      for (uVar12 = *param_2; uVar12 != 0; uVar12 = uVar12 - 1) {
        uVar2 = param_2[1];
        pbVar3 = pbVar11;
        pbVar5 = pbVar10;
        if (3 < uVar2) {
          uVar2 = uVar2 >> 2;
          pbVar6 = pbVar10;
          do {
            pbVar5 = pbVar6 + 1;
            bVar8 = *pbVar6;
            *pbVar3 = bVar8 >> 6;
            pbVar3[1] = bVar8 >> 4 & 3;
            pbVar3[2] = bVar8 >> 2 & 3;
            pbVar3[3] = bVar8 & 3;
            pbVar3 = pbVar3 + 4;
            uVar2 = uVar2 - 1;
            pbVar6 = pbVar5;
          } while (uVar2 != 0);
          uVar2 = param_2[1];
        }
        uVar2 = uVar2 & 3;
        if (uVar2 != 0) {
          uVar4 = (uint)*pbVar5;
          do {
            *pbVar3 = (byte)(uVar4 >> 6) & 3;
            uVar4 = uVar4 << 2;
            uVar2 = uVar2 - 1;
            pbVar3 = pbVar3 + 1;
          } while (uVar2 != 0);
        }
        pbVar10 = pbVar10 + (int)param_2[2];
        pbVar11 = pbVar11 + param_3[2];
      }
      return uVar9;
    }
  }
  else if (1 < uVar2 - 5) {
    if (uVar2 == 4) {
      *(undefined2 *)(param_3 + 6) = 0x10;
      for (uVar12 = *param_2; uVar12 != 0; uVar12 = uVar12 - 1) {
        uVar2 = param_2[1];
        pbVar3 = pbVar11;
        pbVar5 = pbVar10;
        if (1 < uVar2) {
          uVar2 = uVar2 >> 1;
          pbVar6 = pbVar10;
          do {
            pbVar5 = pbVar6 + 1;
            bVar8 = *pbVar6;
            *pbVar3 = bVar8 >> 4;
            pbVar3[1] = bVar8 & 0xf;
            pbVar3 = pbVar3 + 2;
            uVar2 = uVar2 - 1;
            pbVar6 = pbVar5;
          } while (uVar2 != 0);
          uVar2 = param_2[1];
        }
        if ((uVar2 & 1) != 0) {
          *pbVar3 = *pbVar5 >> 4;
        }
        pbVar10 = pbVar10 + (int)param_2[2];
        pbVar11 = pbVar11 + param_3[2];
      }
      return uVar9;
    }
    if (bVar8 != 7) {
      return uVar9;
    }
    *(undefined2 *)(param_3 + 6) = 0x100;
    for (uVar2 = *param_2; uVar2 != 0; uVar2 = uVar2 - 1) {
      uVar4 = param_2[1];
      if (uVar4 != 0) {
        pbVar3 = pbVar10 + 3;
        pbVar5 = pbVar11;
        do {
          bVar8 = *pbVar3;
          if (bVar8 != 0) {
            cVar1 = '\0';
            if (bVar8 != 0) {
              cVar1 = (char)(((uint)pbVar3[-3] * (uint)pbVar3[-3] * 0x127b +
                              (uint)pbVar3[-2] * (uint)pbVar3[-2] * 0xb714 +
                              (uint)pbVar3[-1] * (uint)pbVar3[-1] * 0x3671 >> 0x10) / (uint)bVar8);
            }
            bVar8 = bVar8 - cVar1;
          }
          *pbVar5 = bVar8;
          pbVar3 = pbVar3 + 4;
          uVar4 = uVar4 - 1;
          pbVar5 = pbVar5 + 1;
        } while (uVar4 != 0);
        uVar12 = param_2[2];
        iVar7 = param_3[2];
      }
      pbVar10 = pbVar10 + (int)uVar12;
      pbVar11 = pbVar11 + iVar7;
    }
    return uVar9;
  }
  *(undefined2 *)(param_3 + 6) = 0x100;
  uVar2 = param_2[1];
  for (uVar12 = *param_2; uVar12 != 0; uVar12 = uVar12 - 1) {
    _memcpy(pbVar11,pbVar10,uVar2);
    pbVar10 = pbVar10 + (int)param_2[2];
    pbVar11 = pbVar11 + param_3[2];
  }
  return uVar9;
}



/* Entry: 109758eb0; end: 109758f2f;  */

undefined8 FUN_109758eb0(long *param_1,long param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  
  if (*(int *)(param_2 + 0x90) != 0x62697473) {
    return 0x12;
  }
  param_1[5] = *(long *)(param_2 + 0xc0);
  if ((*(byte *)(*(long *)(param_2 + 0x128) + 8) & 1) != 0) {
    lVar7 = *(long *)(param_2 + 0xa0);
    lVar9 = *(long *)(param_2 + 0x98);
    lVar12 = *(long *)(param_2 + 0xb0);
    lVar11 = *(long *)(param_2 + 0xa8);
    param_1[10] = *(long *)(param_2 + 0xb8);
    param_1[7] = lVar7;
    param_1[6] = lVar9;
    param_1[9] = lVar12;
    param_1[8] = lVar11;
    *(uint *)(*(long *)(param_2 + 0x128) + 8) =
         *(uint *)(*(long *)(param_2 + 0x128) + 8) & 0xfffffffe;
    return 0;
  }
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  puVar1 = (uint *)(param_2 + 0x98);
  puVar2 = (uint *)(param_1 + 6);
  if ((long *)*param_1 == (long *)0x0) {
    return 0x21;
  }
  if (puVar1 == (uint *)0x0) {
    return 6;
  }
  if (puVar2 == (uint *)0x0) {
    return 6;
  }
  if (puVar1 != puVar2) {
    if (*(int *)(param_2 + 0xa0) < 0) {
      uVar10 = (uint)(0 < (int)param_1[7]);
    }
    else if (*(int *)(param_2 + 0xa0) == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(uint *)(param_1 + 7) >> 0x1f;
    }
    lVar9 = *(long *)*param_1;
    if (param_1[8] != 0) {
      (**(code **)(lVar9 + 0x10))(lVar9);
    }
    param_1[8] = 0;
    lVar7 = *(long *)(param_2 + 0xa0);
    uVar6 = *(undefined8 *)puVar1;
    lVar12 = *(long *)(param_2 + 0xb0);
    lVar11 = *(long *)(param_2 + 0xa8);
    param_1[10] = *(long *)(param_2 + 0xb8);
    param_1[7] = lVar7;
    *(undefined8 *)puVar2 = uVar6;
    param_1[9] = lVar12;
    param_1[8] = lVar11;
    if (uVar10 != 0) {
      *(int *)(param_1 + 7) = -(int)param_1[7];
    }
    if (*(long *)(param_2 + 0xa8) == 0) {
      return 0;
    }
    uVar4 = *(uint *)(param_2 + 0xa0);
    uVar3 = -uVar4;
    if (-1 < (int)uVar4) {
      uVar3 = uVar4;
    }
    uVar8 = (ulong)uVar3;
    lVar7 = 0;
    if (uVar4 != 0) {
      uVar4 = *puVar2;
      if (uVar4 != 0) {
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = 0x7fffffff / uVar3;
        }
        if (uVar5 < uVar4) {
          uVar6 = 10;
LAB_109758a34:
          param_1[8] = 0;
          return uVar6;
        }
        (**(code **)(lVar9 + 8))(lVar9,uVar4 * uVar8);
        lVar7 = lVar9;
        if (lVar9 == 0) {
          uVar6 = 0x40;
          goto LAB_109758a34;
        }
      }
    }
    param_1[8] = lVar7;
    if (uVar10 == 0) {
      _memcpy();
    }
    else {
      uVar10 = *puVar2;
      if (uVar10 != 0) {
        lVar7 = lVar7 + uVar8 * (uVar10 - 1);
        lVar9 = *(long *)(param_2 + 0xa8);
        do {
          _memcpy(lVar7,lVar9,uVar8);
          lVar9 = lVar9 + uVar8;
          lVar7 = lVar7 - uVar8;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
    }
  }
  return 0;
}



/* Entry: 109758f30; end: 109758f73;  */

void FUN_109758f30(undefined8 *param_1)

{
  if ((long *)*param_1 != (long *)0x0) {
    if (param_1[8] != 0) {
      (**(code **)(*(long *)*param_1 + 0x10))();
    }
    param_1[10] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
  }
  return;
}



/* Entry: 109758f74; end: 109758fbf;  */

undefined8 FUN_109758f74(long *param_1,long param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  
  plVar7 = (long *)*param_1;
  *(long *)(param_2 + 0x28) = param_1[5];
  puVar1 = (uint *)(param_1 + 6);
  puVar2 = (uint *)(param_2 + 0x30);
  if (plVar7 == (long *)0x0) {
    return 0x21;
  }
  if (puVar1 == (uint *)0x0) {
    return 6;
  }
  if (puVar2 == (uint *)0x0) {
    return 6;
  }
  if (puVar1 != puVar2) {
    if ((int)param_1[7] < 0) {
      uVar11 = (uint)(0 < *(int *)(param_2 + 0x38));
    }
    else if ((int)param_1[7] == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(uint *)(param_2 + 0x38) >> 0x1f;
    }
    lVar10 = *plVar7;
    if (*(long *)(param_2 + 0x40) != 0) {
      (**(code **)(lVar10 + 0x10))(lVar10);
    }
    *(undefined8 *)(param_2 + 0x40) = 0;
    lVar8 = param_1[7];
    uVar6 = *(undefined8 *)puVar1;
    lVar13 = param_1[9];
    lVar12 = param_1[8];
    *(long *)(param_2 + 0x50) = param_1[10];
    *(long *)(param_2 + 0x38) = lVar8;
    *(undefined8 *)puVar2 = uVar6;
    *(long *)(param_2 + 0x48) = lVar13;
    *(long *)(param_2 + 0x40) = lVar12;
    if (uVar11 != 0) {
      *(int *)(param_2 + 0x38) = -*(int *)(param_2 + 0x38);
    }
    if (param_1[8] == 0) {
      return 0;
    }
    uVar4 = *(uint *)(param_1 + 7);
    uVar3 = -uVar4;
    if (-1 < (int)uVar4) {
      uVar3 = uVar4;
    }
    uVar9 = (ulong)uVar3;
    lVar8 = 0;
    if (uVar4 != 0) {
      uVar4 = *puVar2;
      if (uVar4 != 0) {
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = 0x7fffffff / uVar3;
        }
        if (uVar5 < uVar4) {
          uVar6 = 10;
LAB_109758a34:
          *(undefined8 *)(param_2 + 0x40) = 0;
          return uVar6;
        }
        (**(code **)(lVar10 + 8))(lVar10,uVar4 * uVar9);
        lVar8 = lVar10;
        if (lVar10 == 0) {
          uVar6 = 0x40;
          goto LAB_109758a34;
        }
      }
    }
    *(long *)(param_2 + 0x40) = lVar8;
    if (uVar11 == 0) {
      _memcpy();
    }
    else {
      uVar11 = *puVar2;
      if (uVar11 != 0) {
        lVar8 = lVar8 + uVar9 * (uVar11 - 1);
        lVar10 = param_1[8];
        do {
          _memcpy(lVar8,lVar10,uVar9);
          lVar10 = lVar10 + uVar9;
          lVar8 = lVar8 - uVar9;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
    }
  }
  return 0;
}



/* Entry: 109758fc0; end: 109759023;  */

undefined8 FUN_109758fc0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_2 + 0x90) == 0x6f75746c) {
    uVar1 = *param_1;
    FUN_109756ba8(uVar1,*(undefined2 *)(param_2 + 0xca),*(undefined2 *)(param_2 + 200),param_1 + 5);
    if ((int)uVar1 == 0) {
      func_0x000109756d84(param_2 + 200,param_1 + 5);
      uVar1 = 0;
    }
    return uVar1;
  }
  return 0x12;
}



/* Entry: 109759024; end: 10975902f;  */

undefined8 FUN_109759024(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((long *)*param_1 != (long *)0x0) {
    if (param_1 + 5 == (long *)0x0) {
      uVar1 = 0x14;
    }
    else {
      lVar2 = *(long *)*param_1;
      if (lVar2 == 0) {
        uVar1 = 6;
      }
      else {
        if ((*(byte *)(param_1 + 9) & 1) != 0) {
          if (param_1[6] != 0) {
            (**(code **)(lVar2 + 0x10))(lVar2);
          }
          param_1[6] = 0;
          if (param_1[7] != 0) {
            (**(code **)(lVar2 + 0x10))(lVar2);
          }
          param_1[7] = 0;
          if (param_1[8] != 0) {
            (**(code **)(lVar2 + 0x10))(lVar2);
          }
        }
        uVar1 = 0;
        param_1[9] = 0;
        param_1[6] = 0;
        param_1[5] = 0;
        param_1[8] = 0;
        param_1[7] = 0;
      }
    }
    return uVar1;
  }
  return 0x21;
}



/* Entry: 109759030; end: 109759083;  */

undefined8 FUN_109759030(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  FUN_109756ba8(uVar1,*(undefined2 *)((long)param_1 + 0x2a),*(undefined2 *)(param_1 + 5),
                param_2 + 0x28);
  if ((int)uVar1 == 0) {
    func_0x000109756d84(param_1 + 5,param_2 + 0x28);
  }
  return uVar1;
}



/* Entry: 109759084; end: 109759117;  */

void FUN_109759084(long param_1,long param_2,long *param_3)

{
  ulong uVar1;
  ushort uVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  if (((param_2 != 0) && (uVar5 = *(ulong *)(param_1 + 0x30), uVar5 != 0)) &&
     ((ulong)*(ushort *)(param_1 + 0x2a) != 0)) {
    uVar1 = uVar5 + (ulong)*(ushort *)(param_1 + 0x2a) * 0x10;
    do {
      FUN_1097547e4(uVar5,param_2);
      uVar5 = uVar5 + 0x10;
    } while (uVar5 < uVar1);
  }
  if ((param_3 != (long *)0x0) && (uVar2 = *(ushort *)(param_1 + 0x2a), uVar2 != 0)) {
    uVar3 = 0;
    lVar7 = param_3[1];
    lVar6 = *param_3;
    plVar4 = *(long **)(param_1 + 0x30);
    do {
      plVar4[1] = plVar4[1] + lVar7;
      *plVar4 = *plVar4 + lVar6;
      uVar3 = uVar3 + 1;
      plVar4 = plVar4 + 2;
    } while (uVar3 < uVar2);
  }
  return;
}



/* Entry: 109759118; end: 109759153;  */

void FUN_109759118(long param_1,long *param_2)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar12;
  long *plVar11;
  
  if ((param_1 != -0x28) && (param_2 != (long *)0x0)) {
    uVar1 = *(ushort *)(param_1 + 0x2a);
    if (uVar1 == 0) {
      lVar2 = 0;
      lVar4 = 0;
      lVar7 = 0;
      lVar9 = 0;
    }
    else {
      plVar12 = *(long **)(param_1 + 0x30);
      lVar4 = *plVar12;
      lVar2 = plVar12[1];
      lVar7 = lVar2;
      lVar9 = lVar4;
      if (uVar1 != 1) {
        lVar3 = lVar2;
        lVar5 = lVar4;
        lVar6 = lVar2;
        lVar8 = lVar4;
        plVar10 = plVar12 + 2;
        do {
          plVar11 = plVar10 + 2;
          lVar9 = *plVar10;
          lVar7 = plVar10[1];
          lVar4 = lVar9;
          if (lVar5 <= lVar9) {
            lVar4 = lVar5;
          }
          if (lVar9 <= lVar8) {
            lVar9 = lVar8;
          }
          lVar2 = lVar7;
          if (lVar3 <= lVar7) {
            lVar2 = lVar3;
          }
          if (lVar7 <= lVar6) {
            lVar7 = lVar6;
          }
          lVar3 = lVar2;
          lVar5 = lVar4;
          lVar6 = lVar7;
          lVar8 = lVar9;
          plVar10 = plVar11;
        } while (plVar11 < plVar12 + (ulong)uVar1 * 2);
      }
    }
    *param_2 = lVar4;
    param_2[1] = lVar2;
    param_2[2] = lVar9;
    param_2[3] = lVar7;
  }
  return;
}



/* Entry: 109759154; end: 109759237;  */

undefined8 FUN_109759154(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (*(int *)(param_2 + 0x90) != 0x53564720) {
    return 0x12;
  }
  lVar4 = *(long *)(param_2 + 0x120);
  if ((lVar4 == 0) || (lVar3 = *(long *)(lVar4 + 8), lVar3 == 0)) {
    uVar2 = 0x25;
  }
  else {
    if (lVar3 < 1) {
      uVar2 = 6;
    }
    else {
      lVar1 = *(long *)*param_1;
      (**(code **)(lVar1 + 8))(lVar1,lVar3);
      if (lVar1 != 0) {
        param_1[5] = lVar1;
        param_1[6] = lVar3;
        *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x18);
        uVar5 = *(undefined8 *)(lVar4 + 0x18);
        uVar2 = *(undefined8 *)(lVar4 + 0x10);
        uVar7 = *(undefined8 *)(lVar4 + 0x28);
        uVar6 = *(undefined8 *)(lVar4 + 0x20);
        uVar9 = *(undefined8 *)(lVar4 + 0x38);
        uVar8 = *(undefined8 *)(lVar4 + 0x30);
        param_1[0xe] = *(undefined8 *)(lVar4 + 0x40);
        param_1[0xb] = uVar7;
        param_1[10] = uVar6;
        param_1[0xd] = uVar9;
        param_1[0xc] = uVar8;
        param_1[9] = uVar5;
        param_1[8] = uVar2;
        *(undefined2 *)(param_1 + 0xf) = *(undefined2 *)(lVar4 + 0x48);
        *(undefined4 *)((long)param_1 + 0x7a) = *(undefined4 *)(lVar4 + 0x4a);
        uVar2 = *(undefined8 *)(lVar4 + 0x50);
        uVar6 = *(undefined8 *)(lVar4 + 0x68);
        uVar5 = *(undefined8 *)(lVar4 + 0x60);
        param_1[0x11] = *(undefined8 *)(lVar4 + 0x58);
        param_1[0x10] = uVar2;
        param_1[0x13] = uVar6;
        param_1[0x12] = uVar5;
        uVar2 = *(undefined8 *)(lVar4 + 0x70);
        param_1[0x15] = *(undefined8 *)(lVar4 + 0x78);
        param_1[0x14] = uVar2;
        _memcpy();
        return 0;
      }
      uVar2 = 0x40;
    }
    param_1[5] = 0;
  }
  return uVar2;
}



/* Entry: 109759238; end: 109759343;  */

void FUN_109759238(undefined8 *param_1)

{
  if (param_1[5] != 0) {
    (**(code **)(*(long *)*param_1 + 0x10))();
  }
  param_1[5] = 0;
  return;
}



/* Entry: 109759344; end: 109759413;  */

void FUN_109759344(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_2 == (long *)0x0) {
    lStack_50 = 0x10000;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0x10000;
    param_2 = &lStack_50;
  }
  if (param_3 == (long *)0x0) {
    lVar5 = 0;
    lVar6 = 0;
  }
  else {
    lVar6 = *param_3;
    lVar5 = param_3[1];
  }
  uStack_68 = *(undefined8 *)(param_1 + 0x88);
  uStack_70 = *(undefined8 *)(param_1 + 0x80);
  uStack_58 = *(undefined8 *)(param_1 + 0x98);
  uStack_60 = *(undefined8 *)(param_1 + 0x90);
  lStack_88 = param_2[1];
  lStack_90 = *param_2;
  lStack_78 = param_2[3];
  lStack_80 = param_2[2];
  func_0x000109753304(&lStack_90,&uStack_70);
  lVar1 = *(long *)(param_1 + 0xa0) * *param_2;
  lVar2 = *(long *)(param_1 + 0xa8) * param_2[1];
  lVar3 = param_2[2] * *(long *)(param_1 + 0xa0);
  lVar4 = param_2[3] * *(long *)(param_1 + 0xa8);
  *(long *)(param_1 + 0xa0) =
       lVar6 + (lVar1 + (lVar1 >> 0x3f) + 0x8000 >> 0x10) +
       (lVar2 + (lVar2 >> 0x3f) + 0x8000 >> 0x10);
  *(long *)(param_1 + 0xa8) =
       lVar5 + (lVar3 + (lVar3 >> 0x3f) + 0x8000 >> 0x10) +
       (lVar4 + (lVar4 >> 0x3f) + 0x8000 >> 0x10);
  *(undefined8 *)(param_1 + 0x88) = uStack_68;
  *(undefined8 *)(param_1 + 0x80) = uStack_70;
  *(undefined8 *)(param_1 + 0x98) = uStack_58;
  *(undefined8 *)(param_1 + 0x90) = uStack_60;
  return;
}



/* Entry: 109759414; end: 1097594c7;  */

undefined8 FUN_109759414(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = *(undefined8 **)*param_1;
  (*(code *)puVar1[1])(puVar1,0x80);
  if (puVar1 == (undefined8 *)0x0) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0;
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
    uVar3 = param_1[6];
    *puVar1 = param_1[5];
    puVar1[1] = uVar3;
    uVar4 = param_1[9];
    uVar3 = param_1[8];
    uVar6 = param_1[0xb];
    uVar5 = param_1[10];
    uVar8 = param_1[0xd];
    uVar7 = param_1[0xc];
    puVar1[8] = param_1[0xe];
    puVar1[5] = uVar6;
    puVar1[4] = uVar5;
    puVar1[7] = uVar8;
    puVar1[6] = uVar7;
    puVar1[3] = uVar4;
    puVar1[2] = uVar3;
    *(undefined2 *)(puVar1 + 9) = *(undefined2 *)(param_1 + 0xf);
    *(undefined4 *)((long)puVar1 + 0x4a) = *(undefined4 *)((long)param_1 + 0x7a);
    uVar3 = param_1[0x10];
    uVar5 = param_1[0x13];
    uVar4 = param_1[0x12];
    puVar1[0xb] = param_1[0x11];
    puVar1[10] = uVar3;
    puVar1[0xd] = uVar5;
    puVar1[0xc] = uVar4;
    uVar3 = param_1[0x14];
    puVar1[0xf] = param_1[0x15];
    puVar1[0xe] = uVar3;
    *(undefined4 *)(param_2 + 0x90) = 0x53564720;
    *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_1 + 7);
    *(undefined8 **)(param_2 + 0x120) = puVar1;
  }
  return uVar2;
}



/* Entry: 1097594c8; end: 10975959f;  */

long FUN_1097594c8(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puStack_48;
  
  lVar1 = 6;
  if (((param_1 != (long *)0x0) && (param_2 != (undefined8 *)0x0)) && (param_1[1] != 0)) {
    *param_2 = 0;
    lVar2 = param_1[1];
    if (lVar2 != 0) {
      lVar1 = *param_1;
      FUN_1097595a0(lVar1,lVar2,&puStack_48);
      if ((int)lVar1 == 0) {
        lVar1 = param_1[3];
        puStack_48[4] = param_1[4];
        puStack_48[3] = lVar1;
        *(int *)(puStack_48 + 2) = (int)param_1[2];
        if ((*(code **)(lVar2 + 0x20) == (code *)0x0) ||
           ((**(code **)(lVar2 + 0x20))(param_1,puStack_48), (int)param_1 == 0)) {
          lVar1 = 0;
          *param_2 = puStack_48;
        }
        else {
          lVar1 = *(long *)*puStack_48;
          if (*(code **)(puStack_48[1] + 0x18) != (code *)0x0) {
            (**(code **)(puStack_48[1] + 0x18))(puStack_48);
          }
          (**(code **)(lVar1 + 0x10))(lVar1,puStack_48);
          lVar1 = (long)param_1;
        }
      }
    }
  }
  return lVar1;
}



/* Entry: 1097595a0; end: 109759603;  */

void FUN_1097595a0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int iStack_34;
  
  puVar1 = (undefined8 *)*param_1;
  *param_3 = 0;
  FUN_1097537e4(puVar1,*param_2,&iStack_34);
  if (iStack_34 == 0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 1);
    *param_3 = puVar1;
  }
  return;
}



/* Entry: 109759604; end: 109759697;  */

int FUN_109759604(undefined8 *param_1,int param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  int iStack_34;
  
  if ((param_1 != (undefined8 *)0x0) && (param_3 != (undefined8 *)0x0)) {
    if (param_2 == 0x53564720) {
      puVar2 = (undefined8 *)&UNK_110b0b458;
    }
    else if (param_2 == 0x62697473) {
      puVar2 = (undefined8 *)&UNK_110b0b3d8;
    }
    else if (param_2 == 0x6f75746c) {
      puVar2 = (undefined8 *)&UNK_110b0b418;
    }
    else {
      lVar3 = param_1[0x23];
      while( true ) {
        if (lVar3 == 0) {
          return 0x12;
        }
        if (*(int *)(*(long *)(lVar3 + 0x10) + 0x20) == param_2) break;
        lVar3 = *(long *)(lVar3 + 8);
      }
      puVar2 = (undefined8 *)(*(long *)(lVar3 + 0x10) + 0x28);
    }
    plVar1 = (long *)*param_1;
    *param_3 = 0;
    FUN_1097537e4(plVar1,*puVar2,&iStack_34);
    if (iStack_34 == 0) {
      *plVar1 = (long)param_1;
      plVar1[1] = (long)puVar2;
      *(undefined4 *)(plVar1 + 2) = *(undefined4 *)(puVar2 + 1);
      *param_3 = plVar1;
    }
    return iStack_34;
  }
  return 6;
}



/* Entry: 109759698; end: 10975978b;  */

undefined8 * FUN_109759698(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puStack_38;
  
  if (param_1 == (undefined8 *)0x0) {
    return (undefined8 *)0x25;
  }
  if (param_2 == (undefined8 *)0x0) {
    return (undefined8 *)0x6;
  }
  puVar1 = (undefined8 *)*param_1;
  FUN_109759604(puVar1,*(undefined4 *)(param_1 + 0x12),&puStack_38);
  if ((int)puVar1 != 0) {
    return puVar1;
  }
  if ((param_1[0x10] - 0x200000 < 0xffffffffffc00001) ||
     (lVar2 = param_1[0x11], lVar2 - 0x200000U < 0xffffffffffc00001)) {
    puVar1 = (undefined8 *)0x6;
    if (puStack_38 == (undefined8 *)0x0) goto LAB_109759770;
  }
  else {
    puStack_38[3] = param_1[0x10] << 10;
    puStack_38[4] = lVar2 << 10;
    puVar1 = puStack_38;
    (**(code **)(puStack_38[1] + 0x10))(puStack_38,param_1);
    if ((int)puVar1 == 0) goto LAB_109759770;
  }
  lVar2 = *(long *)*puStack_38;
  if (*(code **)(puStack_38[1] + 0x18) != (code *)0x0) {
    (**(code **)(puStack_38[1] + 0x18))(puStack_38);
  }
  (**(code **)(lVar2 + 0x10))(lVar2,puStack_38);
  puStack_38 = (undefined8 *)0x0;
LAB_109759770:
  *param_2 = puStack_38;
  return puVar1;
}



/* Entry: 10975978c; end: 1097599e7;  */

long * FUN_10975978c(undefined8 *param_1,undefined8 param_2,long *param_3,int param_4)

{
  long *plVar1;
  undefined *puVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long lStack_200;
  long lStack_1f8;
  long *plStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long *plStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
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
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  ulong uStack_100;
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
  undefined8 *puStack_68;
  
  if ((param_1 != (undefined8 *)0x0) && (plVar6 = (long *)*param_1, plVar6 != (long *)0x0)) {
    plVar1 = (long *)*plVar6;
    puVar2 = (undefined *)plVar6[1];
    if (plVar1 != (long *)0x0 && puVar2 != (undefined *)0x0) {
      if (puVar2 == &UNK_110b0b3d8) {
        return (long *)0x0;
      }
      if (*(long *)(puVar2 + 0x38) != 0) {
        uStack_80 = 0;
        uStack_88 = 0;
        lStack_70 = 0;
        uStack_78 = 0;
        uStack_90 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_c8 = 0;
        uStack_d0 = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        uStack_e8 = 0;
        uStack_f0 = 0;
        uStack_f8 = 0;
        uStack_108 = 0;
        uStack_110 = 0;
        uStack_118 = 0;
        uStack_120 = 0;
        uStack_128 = 0;
        uStack_130 = 0;
        uStack_138 = 0;
        uStack_140 = 0;
        uStack_148 = 0;
        uStack_150 = 0;
        uStack_158 = 0;
        uStack_160 = 0;
        uStack_168 = 0;
        uStack_170 = 0;
        uStack_178 = 0;
        uStack_180 = 0;
        uStack_188 = 0;
        uStack_1a8 = 0;
        uStack_1b0 = 0;
        uStack_198 = 0;
        uStack_1a0 = 0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        uStack_1d8 = 0;
        uStack_1e0 = 0;
        puStack_68 = &uStack_1e0;
        uStack_100 = (ulong)*(uint *)(puVar2 + 8);
        plVar3 = plVar1;
        plStack_190 = plVar1;
        FUN_1097595a0(plVar1,&UNK_110b0b3d8,&plStack_1e8);
        if ((int)plVar3 != 0) {
          return plVar3;
        }
        if (((param_3 != (long *)0x0) && (plVar6[1] != 0)) &&
           (pcVar4 = *(code **)(plVar6[1] + 0x28), pcVar4 != (code *)0x0)) {
          (*pcVar4)(plVar6,0,param_3);
        }
        plVar3 = plVar6;
        (**(code **)(puVar2 + 0x38))(plVar6,&plStack_190);
        if ((int)plVar3 == 0) {
          plVar3 = (long *)*plVar6;
          FUN_109755fe4(plVar3,&plStack_190,param_2);
        }
        if (puVar2 == &UNK_110b0b458) {
          if (lStack_70 != 0) {
            (**(code **)(*plVar1 + 0x10))();
          }
          lStack_70 = 0;
        }
        if ((param_3 != (long *)0x0) && (param_4 == 0)) {
          lStack_200 = -*param_3;
          lStack_1f8 = -param_3[1];
          if ((plVar6[1] != 0) && (pcVar4 = *(code **)(plVar6[1] + 0x28), pcVar4 != (code *)0x0)) {
            (*pcVar4)(plVar6,0,&lStack_200);
          }
        }
        if (((int)plVar3 == 0) &&
           (plVar3 = plStack_1e8, FUN_109758eb0(plStack_1e8,&plStack_190), (int)plVar3 == 0)) {
          lVar5 = plVar6[3];
          plStack_1e8[4] = plVar6[4];
          plStack_1e8[3] = lVar5;
          if (param_4 != 0) {
            lVar5 = *(long *)*plVar6;
            if (*(code **)(plVar6[1] + 0x18) != (code *)0x0) {
              (**(code **)(plVar6[1] + 0x18))(plVar6);
            }
            (**(code **)(lVar5 + 0x10))(lVar5,plVar6);
          }
          *param_1 = plStack_1e8;
          return (long *)0x0;
        }
        if (plStack_1e8 == (long *)0x0) {
          return plVar3;
        }
        lVar5 = *(long *)*plStack_1e8;
        if (*(code **)(plStack_1e8[1] + 0x18) != (code *)0x0) {
          (**(code **)(plStack_1e8[1] + 0x18))(plStack_1e8);
        }
        (**(code **)(lVar5 + 0x10))(lVar5,plStack_1e8);
        return plVar3;
      }
    }
  }
  return (long *)0x6;
}



/* Entry: 1097599e8; end: 109759af7;  */

undefined8 FUN_1097599e8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = (undefined8 *)0x20;
  _malloc();
  if (puVar1 == (undefined8 *)0x0) {
    uVar5 = 7;
  }
  else {
    *puVar1 = 0;
    puVar1[1] = FUN_10975c8b4;
    puVar1[2] = 0x10975c8c8;
    puVar1[3] = 0x10975c8bc;
    if (param_1 == (undefined8 *)0x0) {
      uVar5 = 6;
    }
    else {
      puVar2 = puVar1;
      FUN_10975c8b4(puVar1,400);
      if (puVar2 != (undefined8 *)0x0) {
        puVar2[0x2f] = 0;
        puVar2[0x2e] = 0;
        puVar2[0x31] = 0;
        puVar2[0x30] = 0;
        puVar2[0x2b] = 0;
        puVar2[0x2a] = 0;
        puVar2[0x2d] = 0;
        puVar2[0x2c] = 0;
        puVar2[0x27] = 0;
        puVar2[0x26] = 0;
        puVar2[0x29] = 0;
        puVar2[0x28] = 0;
        puVar2[0x23] = 0;
        puVar2[0x22] = 0;
        puVar2[0x25] = 0;
        puVar2[0x24] = 0;
        puVar2[0x1f] = 0;
        puVar2[0x1e] = 0;
        puVar2[0x21] = 0;
        puVar2[0x20] = 0;
        puVar2[0x1b] = 0;
        puVar2[0x1a] = 0;
        puVar2[0x1d] = 0;
        puVar2[0x1c] = 0;
        puVar2[0x17] = 0;
        puVar2[0x16] = 0;
        puVar2[0x19] = 0;
        puVar2[0x18] = 0;
        puVar2[0x13] = 0;
        puVar2[0x12] = 0;
        puVar2[0x15] = 0;
        puVar2[0x14] = 0;
        puVar2[0xf] = 0;
        puVar2[0xe] = 0;
        puVar2[0x11] = 0;
        puVar2[0x10] = 0;
        puVar2[0xb] = 0;
        puVar2[10] = 0;
        puVar2[0xd] = 0;
        puVar2[0xc] = 0;
        puVar2[7] = 0;
        puVar2[6] = 0;
        puVar2[9] = 0;
        puVar2[8] = 0;
        puVar2[3] = 0;
        puVar2[2] = 0;
        puVar2[5] = 0;
        puVar2[4] = 0;
        puVar2[1] = 0;
        *puVar2 = 0;
        *puVar2 = puVar1;
        *(undefined4 *)(puVar2 + 2) = 3;
        *(undefined4 *)(puVar2 + 0x31) = 1;
        *param_1 = puVar2;
        puVar3 = &DAT_110b0d2c0;
        puVar2[1] = 0xd00000002;
        ppuVar4 = &PTR_DAT_110b0b4a0;
        do {
          func_0x000109756220(puVar2,puVar3);
          puVar3 = *ppuVar4;
          ppuVar4 = ppuVar4 + 1;
        } while (puVar3 != (undefined *)0x0);
        return 0;
      }
      uVar5 = 0x40;
    }
    _free(puVar1);
  }
  return uVar5;
}



/* Entry: 109759af8; end: 109759c33;  */

undefined8 FUN_109759af8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    uVar1 = *param_1;
    FUN_109756758();
    _free(uVar1);
    return 0;
  }
  return 0x21;
}



/* Entry: 109759c34; end: 109759d4b;  */

void FUN_109759c34(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  long lStack_40;
  long lStack_38;
  
  if (((((int)param_2 == 0) || (param_3 != 0)) &&
      (lVar3 = param_1, func_0x000109759b30(param_1,&lStack_38), (int)lVar3 == 0)) &&
     (*(code **)(lStack_38 + 0x28) != (code *)0x0)) {
    lVar3 = param_1;
    (**(code **)(lStack_38 + 0x28))(param_1,param_2,param_3);
    iVar2 = (int)lVar3;
    if (iVar2 + 1U < 2) {
      uVar5 = *(ulong *)(param_1 + 0x10);
      uVar1 = 0;
      if ((int)param_2 != 0) {
        uVar1 = 0x8000;
      }
      *(ulong *)(param_1 + 0x10) = uVar5 & 0xffffffffffff7fff | uVar1;
      pcVar4 = *(code **)(lStack_38 + 0x58);
      if (pcVar4 == (code *)0x0) {
        if (iVar2 == -1) {
          return;
        }
      }
      else {
        if (iVar2 == -1) {
          if ((uVar5 & 0x8000) == uVar1) {
            return;
          }
          (*pcVar4)(param_1);
          return;
        }
        (*pcVar4)(param_1);
      }
      FUN_109759d4c(param_1,&lStack_40);
      if ((lStack_40 != 0) && (*(code **)(lStack_40 + 0x38) != (code *)0x0)) {
        (**(code **)(lStack_40 + 0x38))(param_1);
      }
      if (*(code **)(param_1 + 0xe0) != (code *)0x0) {
        (**(code **)(param_1 + 0xe0))(*(undefined8 *)(param_1 + 0xd8));
        *(undefined8 *)(param_1 + 0xd8) = 0;
      }
    }
  }
  return;
}



/* Entry: 109759d4c; end: 109759dd3;  */

void FUN_109759d4c(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  *param_2 = 0;
  if ((param_1 != 0) && ((*(byte *)(param_1 + 0x11) & 1) != 0)) {
    lVar3 = *(long *)(param_1 + 0xf0);
    plVar2 = *(long **)(lVar3 + 0x48);
    if (plVar2 == (long *)0xfffffffffffffffe) {
      plVar2 = (long *)0x0;
    }
    else if (plVar2 == (long *)0x0) {
      plVar2 = *(long **)(param_1 + 0xb0);
      if (*(code **)(*plVar2 + 0x40) == (code *)0x0) {
        plVar2 = (long *)0x0;
      }
      else {
        (**(code **)(*plVar2 + 0x40))(plVar2,&UNK_10f57f78a);
        lVar3 = *(long *)(param_1 + 0xf0);
      }
      plVar1 = (long *)0xfffffffffffffffe;
      if (plVar2 != (long *)0x0) {
        plVar1 = plVar2;
      }
      *(long **)(lVar3 + 0x48) = plVar1;
    }
    *param_2 = (long)plVar2;
  }
  return;
}



/* Entry: 109759dd4; end: 109759f87;  */

void FUN_109759dd4(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000109759b30(param_1,&lStack_38);
  if (((int)lVar2 == 0) && (*(code **)(lStack_38 + 0x38) != (code *)0x0)) {
    lVar2 = param_1;
    (**(code **)(lStack_38 + 0x38))(param_1,param_2);
    iVar1 = (int)lVar2;
    if (iVar1 + 1U < 2) {
      uVar3 = *(ulong *)(param_1 + 0x10);
      *(ulong *)(param_1 + 8) =
           (ulong)*(ushort *)(param_1 + 8) | (ulong)(uint)((int)param_2 << 0x10);
      *(ulong *)(param_1 + 0x10) = uVar3 & 0xffffffffffff7fff;
      pcVar4 = *(code **)(lStack_38 + 0x58);
      if (pcVar4 == (code *)0x0) {
        if (iVar1 == -1) {
          return;
        }
      }
      else {
        if (iVar1 == -1) {
          if (((uint)uVar3 >> 0xf & 1) == 0) {
            return;
          }
          (*pcVar4)(param_1);
          return;
        }
        (*pcVar4)(param_1);
      }
      FUN_109759d4c(param_1,&lStack_40);
      if ((lStack_40 != 0) && (*(code **)(lStack_40 + 0x38) != (code *)0x0)) {
        (**(code **)(lStack_40 + 0x38))(param_1);
      }
      if (*(code **)(param_1 + 0xe0) != (code *)0x0) {
        (**(code **)(param_1 + 0xe0))(*(undefined8 *)(param_1 + 0xd8));
        *(undefined8 *)(param_1 + 0xd8) = 0;
      }
    }
  }
  return;
}



/* Entry: 109759f88; end: 10975a033;  */

void FUN_109759f88(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = **(long **)(param_1 + 0xd0);
    func_0x000109759fd4(param_1 + 0x70);
    func_0x000109759fd4(param_1 + 0xa0);
    *(undefined8 *)(param_1 + 0xd0) = 0;
                    /* WARNING: Could not recover jumptable at 0x000109759fcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_1);
    return;
  }
  return;
}



/* Entry: 10975a034; end: 10975a14b;  */

void FUN_10975a034(long *param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  lVar5 = param_2[1] - param_1[3];
  lVar6 = *param_2 - param_1[2];
  if (lVar6 != 0 || param_2[1] != param_1[3]) {
    plVar2 = &lStack_50;
    lStack_50 = lVar6;
    lStack_48 = lVar5;
    FUN_1097531c8();
    FUN_109757d38(lVar6,lVar5);
    lStack_50 = param_1[0xd];
    lStack_48 = 0;
    FUN_109757e8c(&lStack_50,lVar6 + 0x5a0000);
    if ((char)param_1[5] == '\0') {
      param_1[1] = lVar6;
      plVar3 = param_1;
      FUN_10975a1dc(param_1,plVar2);
      iVar1 = (int)plVar3;
    }
    else {
      plVar3 = param_1;
      FUN_10975a14c(param_1,lVar6,plVar2);
      iVar1 = (int)plVar3;
    }
    if (iVar1 == 0) {
      lVar5 = 0x70;
      do {
        lStack_60 = *param_2 + lStack_50;
        lStack_58 = param_2[1] + lStack_48;
        lVar4 = (long)param_1 + lVar5;
        FUN_10975a6d4(lVar4,&lStack_60,1);
        if ((int)lVar4 != 0) {
          return;
        }
        lStack_50 = -lStack_50;
        lStack_48 = -lStack_48;
        lVar5 = lVar5 + 0x30;
      } while ((int)lVar5 != 0xd0);
      *param_1 = lVar6;
      lVar6 = *param_2;
      param_1[3] = param_2[1];
      param_1[2] = lVar6;
      param_1[4] = (long)plVar2;
    }
  }
  return;
}



/* Entry: 10975a14c; end: 10975a1db;  */

void FUN_10975a14c(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  lStack_40 = *(long *)(param_1 + 0x68);
  lStack_38 = 0;
  FUN_109757e8c(&lStack_40,param_2 + 0x5a0000);
  lStack_50 = lStack_40 + *(long *)(param_1 + 0x10);
  lStack_48 = lStack_38 + *(long *)(param_1 + 0x18);
  lVar1 = param_1 + 0x70;
  FUN_10975c430(lVar1,&lStack_50);
  if ((int)lVar1 == 0) {
    lStack_50 = *(long *)(param_1 + 0x10) - lStack_40;
    lStack_48 = *(long *)(param_1 + 0x18) - lStack_38;
    FUN_10975c430(param_1 + 0xa0,&lStack_50);
    *(long *)(param_1 + 0x30) = param_2;
    *(undefined1 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x48) = param_3;
  }
  return;
}



/* Entry: 10975a1dc; end: 10975a6d3;  */

void FUN_10975a1dc(long *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  ulong *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uStack_90;
  long lStack_88;
  ulong uStack_80;
  long lStack_78;
  long lStack_70;
  ulong uStack_68;
  
  lVar17 = *param_1;
  lVar3 = param_1[1];
  lVar2 = lVar3 - lVar17;
  if (lVar3 - lVar17 < -0xb3fffe) {
    lVar2 = -0xb3ffff;
  }
  lVar11 = (lVar2 + lVar17) - lVar3;
  uVar10 = (lVar11 - (ulong)(lVar11 != 0)) / 0x1680000;
  if (lVar2 + lVar17 != lVar3) {
    uVar10 = uVar10 + 1;
  }
  lVar11 = lVar3 + uVar10 * 0x1680000;
  lVar12 = lVar11 - lVar17;
  lVar2 = lVar12;
  if (0xb3ffff < lVar12) {
    lVar2 = 0xb40000;
  }
  uVar10 = lVar12 + ((ulong)(((lVar11 + 0x167ffff) - lVar17) - lVar2) / 0x1680000) * -0x1680000;
  if (uVar10 == 0) {
    return;
  }
  plVar7 = param_1 + ((long)uVar10 >> 0x3f) * -6 + 0xe;
  lVar2 = 0x5a0000;
  if ((long)uVar10 < 0) {
    lVar2 = -0x5a0000;
  }
  if ((param_2 == 0) || ((char)plVar7[3] == '\0' || uVar10 - 0xb38002 < 0xfffffffffe98fffd)) {
    uVar15 = param_1[0xd];
LAB_10975a39c:
    lStack_78 = 0;
    uStack_80 = uVar15;
    FUN_109757e8c(&uStack_80,lVar2 + lVar3);
    uStack_80 = uStack_80 + param_1[2];
    lStack_78 = lStack_78 + param_1[3];
    *(undefined1 *)(plVar7 + 3) = 0;
  }
  else {
    uStack_68 = 0;
    lStack_70 = 0xdbd95b;
    FUN_109757c64(&lStack_70,(long)uVar10 / 2);
    uVar13 = lStack_70 + 0x80;
    uVar16 = (long)uVar13 >> 8;
    uVar15 = param_1[0xd];
    uVar6 = uVar15;
    FUN_1097532ac(uVar15,(long)(uStack_68 + 0x80) >> 8,uVar16);
    if (uVar6 == 0) goto LAB_10975a39c;
    uVar1 = -uVar6;
    if (-1 < (long)uVar6) {
      uVar1 = uVar6;
    }
    if ((param_2 < (long)uVar1) || (param_1[4] < (long)uVar1)) goto LAB_10975a39c;
    uVar6 = -uVar16;
    if (-1 < (long)uVar16) {
      uVar6 = uVar16;
    }
    uVar1 = -uVar15;
    if (-1 < (long)uVar15) {
      uVar1 = uVar15;
    }
    uVar5 = 0;
    if (uVar6 != 0) {
      uVar5 = (uVar1 * 0x10000 + (uVar6 >> 1)) / uVar6;
    }
    uVar6 = 0x7fffffff;
    if (0xff < uVar13) {
      uVar6 = uVar5;
    }
    uStack_80 = -uVar6;
    if (-1 < (long)(uVar15 ^ uVar16)) {
      uStack_80 = uVar6;
    }
    lStack_78 = 0;
    FUN_109757e8c(&uStack_80,(long)uVar10 / 2 + lVar17 + lVar2);
    uStack_80 = uStack_80 + param_1[2];
    lStack_78 = lStack_78 + param_1[3];
  }
  FUN_10975a6d4(plVar7,&uStack_80,0);
  if ((int)plVar7 != 0) {
    return;
  }
  iVar4 = (int)param_1[0xb];
  if (iVar4 == 0) {
    FUN_10975c47c(param_1,-(int)((long)uVar10 >> 0x3f) ^ 1);
    return;
  }
  plVar7 = param_1 + ((long)~uVar10 >> 0x3f) * -6 + 0xe;
  uVar15 = param_1[0xd];
  lStack_70 = 0;
  uStack_68 = 0;
  uVar10 = ((long)uVar10 >> 0x3f ^ 0xffffffffffffffffU) & 0xffffffffff4c0000;
  lVar2 = uVar10 + 0x5a0000;
  lVar17 = param_1[1];
  if (iVar4 == 1) {
LAB_10975a414:
    lStack_78 = 0;
    uStack_80 = uVar15;
    FUN_109757e8c(&uStack_80,lVar17 + lVar2);
    uStack_80 = uStack_80 + param_1[2];
    lStack_78 = lStack_78 + param_1[3];
    *(undefined1 *)(plVar7 + 3) = 0;
  }
  else {
    lVar11 = *param_1;
    lVar3 = lVar17 - lVar11;
    if (lVar17 - lVar11 < -0xb3fffe) {
      lVar3 = -0xb3ffff;
    }
    lVar12 = (lVar3 + lVar11) - lVar17;
    uVar13 = (lVar12 - (ulong)(lVar12 != 0)) / 0x1680000;
    if (lVar3 + lVar11 != lVar17) {
      uVar13 = uVar13 + 1;
    }
    lVar12 = lVar17 + uVar13 * 0x1680000;
    lVar14 = lVar12 - lVar11;
    lVar3 = lVar14;
    if (0xb3ffff < lVar14) {
      lVar3 = 0xb40000;
    }
    uVar13 = lVar14 + ((ulong)(((lVar12 + 0x167ffff) - lVar11) - lVar3) / 0x1680000) * -0x1680000;
    uVar10 = -uVar10 - 0x5a0000;
    if ((uVar13 & 0xfffffffffffffffe) != 0xb40000) {
      uVar10 = (long)uVar13 / 2;
    }
    lVar12 = param_1[0xc];
    lStack_70 = lVar12;
    FUN_109757e8c(&lStack_70,uVar10);
    lVar3 = lStack_70;
    if (lStack_70 < 0x10000) {
      if (iVar4 != 2) goto LAB_10975a414;
      uVar13 = -uVar10;
      if (-1 < (long)uVar10) {
        uVar13 = uVar10;
      }
      if (0x39 < uVar13) {
        uStack_80 = (long)(lVar12 * uVar15 + ((long)(lVar12 * uVar15) >> 0x3f) + 0x8000) >> 0x10;
        lStack_78 = 0;
        FUN_109757e8c(&uStack_80,lVar11 + lVar2 + uVar10);
        uVar10 = -uStack_68;
        if (-1 < (long)uStack_68) {
          uVar10 = uStack_68;
        }
        uVar13 = 0;
        if (uVar10 != 0) {
          uVar13 = ((uVar10 >> 1) + (0x10000U - lVar3) * 0x10000) / uVar10;
        }
        uVar10 = 0x7fffffff;
        if (uStack_68 != 0) {
          uVar10 = uVar13;
        }
        uVar13 = -uVar10;
        if (-1 < (long)(uStack_68 ^ 0x10000U - lVar3)) {
          uVar13 = uVar10;
        }
        lVar17 = uVar13 * uStack_80;
        lVar3 = uVar13 * uStack_80;
        uStack_80 = param_1[2] + uStack_80;
        lVar11 = uVar13 * lStack_78;
        lStack_78 = param_1[3] + lStack_78;
        uVar10 = uStack_80 + (lVar11 + (lVar11 >> 0x3f) + 0x8000 >> 0x10);
        lVar17 = lStack_78 + (((-lVar17 >> 0x3f) - lVar3) + 0x8000 >> 0x10);
        plVar8 = plVar7;
        uStack_90 = uVar10;
        lStack_88 = lVar17;
        FUN_10975a6d4(plVar7,&uStack_90,0);
        if ((int)plVar8 != 0) {
          return;
        }
        uStack_90 = uStack_80 * 2 - uVar10;
        lStack_88 = lStack_78 * 2 - lVar17;
        plVar8 = plVar7;
        FUN_10975a6d4(plVar7,&uStack_90,0);
        if (param_2 != 0) {
          return;
        }
        if ((int)plVar8 != 0) {
          return;
        }
        lStack_88 = 0;
        uStack_90 = uVar15;
        FUN_109757e8c(&uStack_90,param_1[1] + lVar2);
        uStack_90 = uStack_90 + param_1[2];
        lStack_88 = lStack_88 + param_1[3];
        puVar9 = &uStack_90;
        goto LAB_10975a43c;
      }
    }
    FUN_1097532ac(uVar15,lVar12,lStack_70);
    lStack_78 = 0;
    uStack_80 = uVar15;
    FUN_109757e8c(&uStack_80,lVar11 + lVar2 + uVar10);
    uStack_80 = uStack_80 + param_1[2];
    lStack_78 = lStack_78 + param_1[3];
    plVar8 = plVar7;
    FUN_10975a6d4(plVar7,&uStack_80,0);
    if (param_2 != 0) {
      return;
    }
    if ((int)plVar8 != 0) {
      return;
    }
    uStack_80 = param_1[0xd];
    lStack_78 = 0;
    FUN_109757e8c(&uStack_80,param_1[1] + lVar2);
    uStack_80 = uStack_80 + param_1[2];
    lStack_78 = lStack_78 + param_1[3];
  }
  puVar9 = &uStack_80;
LAB_10975a43c:
  FUN_10975a6d4(plVar7,puVar9,0);
  return;
}



/* Entry: 10975a6d4; end: 10975a7af;  */

void FUN_10975a6d4(uint *param_1,long *param_2,undefined1 param_3)

{
  uint uVar1;
  long *plVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  
  if ((char)param_1[6] == '\0') {
    if (((param_1[7] < *param_1) &&
        (plVar2 = (long *)(*(long *)(param_1 + 2) + (ulong)(*param_1 - 1) * 0x10),
        (*plVar2 - *param_2) + 1U < 3)) && ((plVar2[1] - param_2[1]) + 1U < 3)) {
      return;
    }
    puVar3 = param_1;
    FUN_10975c6a0(param_1,1);
    if ((int)puVar3 == 0) {
      uVar1 = *param_1;
      lVar4 = *(long *)(param_1 + 4);
      lVar5 = *param_2;
      plVar2 = (long *)(*(long *)(param_1 + 2) + (ulong)uVar1 * 0x10);
      plVar2[1] = param_2[1];
      *plVar2 = lVar5;
      *(undefined1 *)(lVar4 + (ulong)uVar1) = 1;
      *param_1 = *param_1 + 1;
    }
  }
  else {
    lVar4 = *param_2;
    plVar2 = (long *)(*(long *)(param_1 + 2) + (ulong)(*param_1 - 1) * 0x10);
    plVar2[1] = param_2[1];
    *plVar2 = lVar4;
  }
  *(undefined1 *)(param_1 + 6) = param_3;
  return;
}



/* Entry: 10975a7b0; end: 10975af33;  */

void FUN_10975a7b0(uint *param_1,long **param_2,long **param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *plVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  uint *puVar9;
  long **pplVar10;
  long **pplVar11;
  long lVar12;
  long *plVar13;
  uint *puVar14;
  long **pplVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  long **pplVar25;
  long lVar26;
  long **pplVar27;
  uint *puVar28;
  ulong uVar29;
  long lVar30;
  long **pplVar31;
  long *plVar32;
  long *plVar33;
  long *plVar34;
  long lVar35;
  long **pplStack_2f8;
  long *plStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  long *plStack_2d0;
  long lStack_2c8;
  long *plStack_2c0;
  long lStack_2b8;
  long *plStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long *aplStack_290 [4];
  undefined8 uStack_270;
  undefined8 uStack_268;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar14 = param_1 + 4;
  pplVar15 = param_3;
  if (((((*(long *)puVar14 - (long)*param_2) + 1U < 3) &&
       ((*(long *)(param_1 + 6) - (long)param_2[1]) + 1U < 3)) &&
      ((ulong)((long)*param_2 + (1 - (long)*param_3)) < 3)) &&
     ((ulong)((long)param_2[1] + (1 - (long)param_3[1])) < 3)) {
    puVar9 = (uint *)0x0;
    plVar33 = *param_3;
    *(long **)(param_1 + 6) = param_3[1];
    *(long **)puVar14 = plVar33;
  }
  else {
    uVar29 = 0;
    aplStack_290[1] = param_3[1];
    aplStack_290[0] = *param_3;
    aplStack_290[3] = param_2[1];
    aplStack_290[2] = *param_2;
    uStack_268 = *(undefined8 *)(param_1 + 6);
    uStack_270 = *(undefined8 *)puVar14;
    bVar5 = true;
    pplStack_2f8 = aplStack_290;
    pplVar31 = *(long ***)param_1;
    do {
      pplVar10 = pplVar31;
      pplVar11 = pplVar31;
      if (uVar29 < 0x1e0) {
        plVar33 = pplStack_2f8[3];
        plVar34 = pplStack_2f8[4];
        plVar13 = pplStack_2f8[1];
        plVar3 = pplStack_2f8[2];
        pplVar10 = (long **)((long)plVar3 - (long)plVar34);
        plVar32 = pplStack_2f8[5];
        lVar16 = *(long *)((long)aplStack_290 + uVar29);
        param_2 = (long **)((long)plVar33 - (long)plVar32);
        pplVar27 = (long **)(lVar16 - (long)plVar3);
        pplVar25 = (long **)((long)plVar13 - (long)plVar33);
        bVar6 = 2 < (long)pplVar27 + 1U;
        bVar7 = 2 < (long)pplVar25 + 1U;
        if ((long)pplVar10 + 1U < 3 && (long)param_2 + 1U < 3) {
          pplVar10 = pplVar31;
          if (bVar6 || bVar7) {
            FUN_109757d38();
            pplVar11 = pplVar27;
            param_2 = pplVar25;
            pplVar10 = pplVar27;
          }
        }
        else {
          FUN_109757d38();
          pplVar11 = pplVar10;
          if (bVar6 || bVar7) {
            FUN_109757d38();
            pplVar11 = pplVar27;
            param_2 = pplVar25;
          }
        }
        lVar22 = (long)pplVar11 - (long)pplVar10;
        if ((long)pplVar11 - (long)pplVar10 < -0xb3fffe) {
          lVar22 = -0xb3ffff;
        }
        lVar21 = (lVar22 + (long)pplVar10) - (long)pplVar11;
        uVar17 = (lVar21 - (ulong)(lVar21 != 0)) / 0x1680000;
        if ((long **)(lVar22 + (long)pplVar10) != pplVar11) {
          uVar17 = uVar17 + 1;
        }
        lVar21 = (long)pplVar11 + (uVar17 * 0x1680000 - (long)pplVar10);
        lVar22 = lVar21;
        if (0xb3ffff < lVar21) {
          lVar22 = 0xb40000;
        }
        uVar18 = lVar21 + (((long)pplVar11 +
                           (((uVar17 * 0x1680000 + 0x167ffff) - (long)pplVar10) - lVar22)) /
                          0x1680000) * -0x1680000;
        uVar17 = -uVar18;
        if (-1 < (long)uVar18) {
          uVar17 = uVar18;
        }
        if (uVar17 < 0x1e0000) goto LAB_10975aa48;
        pplVar11 = pplVar31;
        if ((char)param_1[10] != '\0') {
          *(long ***)param_1 = pplVar10;
          pplVar11 = pplVar10;
        }
        lVar16 = lVar16 + (long)plVar3;
        pplStack_2f8[8] = plVar34;
        pplStack_2f8[9] = plVar32;
        lVar22 = (long)plVar13 + (long)plVar33;
        pplStack_2f8[6] = (long *)((long)plVar34 + (long)plVar3 >> 1);
        pplStack_2f8[7] = (long *)((long)plVar32 + (long)plVar33 >> 1);
        pplStack_2f8[4] = (long *)(lVar16 + (long)plVar34 + (long)plVar3 >> 2);
        pplStack_2f8[5] = (long *)(lVar22 + (long)plVar32 + (long)plVar33 >> 2);
        pplStack_2f8[2] = (long *)(lVar16 >> 1);
        pplStack_2f8[3] = (long *)(lVar22 >> 1);
        uVar29 = uVar29 + 0x20;
      }
      else {
LAB_10975aa48:
        puVar9 = param_1;
        if (bVar5) {
          if ((char)param_1[10] == '\0') {
            *(long ***)(param_1 + 2) = pplVar10;
            param_2 = (long **)0x0;
            FUN_10975a1dc();
          }
          else {
            pplVar15 = (long **)0x0;
            param_2 = pplVar10;
            FUN_10975a14c();
          }
LAB_10975ab30:
          if ((int)puVar9 != 0) goto LAB_10975aef8;
        }
        else {
          lVar16 = (long)pplVar10 - (long)pplVar31;
          if ((long)pplVar10 - (long)pplVar31 < -0xb3fffe) {
            lVar16 = -0xb3ffff;
          }
          lVar22 = (lVar16 + (long)pplVar31) - (long)pplVar10;
          uVar17 = (lVar22 - (ulong)(lVar22 != 0)) / 0x1680000;
          if ((long **)(lVar16 + (long)pplVar31) != pplVar10) {
            uVar17 = uVar17 + 1;
          }
          lVar22 = (long)pplVar10 + (uVar17 * 0x1680000 - (long)pplVar31);
          lVar16 = lVar22;
          if (0xb3ffff < lVar22) {
            lVar16 = 0xb40000;
          }
          uVar18 = lVar22 + (((long)pplVar10 +
                             (((uVar17 * 0x1680000 + 0x167ffff) - (long)pplVar31) - lVar16)) /
                            0x1680000) * -0x1680000;
          uVar17 = -uVar18;
          if (-1 < (long)uVar18) {
            uVar17 = uVar18;
          }
          if (0x78000 < uVar17) {
            plVar33 = pplStack_2f8[4];
            *(long **)(param_1 + 6) = pplStack_2f8[5];
            *(long **)puVar14 = plVar33;
            *(long ***)(param_1 + 2) = pplVar10;
            param_1[0x16] = 0;
            param_2 = (long **)0x0;
            FUN_10975a1dc();
            param_1[0x16] = param_1[0x17];
            goto LAB_10975ab30;
          }
        }
        lVar16 = (long)pplVar11 - (long)pplVar10;
        if ((long)pplVar11 - (long)pplVar10 < -0xb3fffe) {
          lVar16 = -0xb3ffff;
        }
        lVar22 = (lVar16 + (long)pplVar10) - (long)pplVar11;
        uVar17 = (lVar22 - (ulong)(lVar22 != 0)) / 0x1680000;
        if ((long **)(lVar16 + (long)pplVar10) != pplVar11) {
          uVar17 = uVar17 + 1;
        }
        lVar22 = (long)pplVar11 + (uVar17 * 0x1680000 - (long)pplVar10);
        lVar16 = lVar22;
        if (0xb3ffff < lVar22) {
          lVar16 = 0xb40000;
        }
        lVar16 = (long)(lVar22 + (((long)pplVar11 +
                                  (((uVar17 * 0x1680000 + 0x167ffff) - (long)pplVar10) - lVar16)) /
                                 0x1680000) * -0x1680000) / 2;
        uVar24 = *(ulong *)(param_1 + 0x1a);
        lStack_298 = 0;
        lStack_2a0 = 0xdbd95b;
        FUN_109757c64(&lStack_2a0,lVar16);
        uVar18 = lStack_2a0 + 0x80 >> 8;
        uVar17 = -uVar18;
        if (-1 < (long)uVar18) {
          uVar17 = uVar18;
        }
        uVar2 = -uVar24;
        if (-1 < (long)uVar24) {
          uVar2 = uVar24;
        }
        plVar33 = (long *)0x0;
        if (uVar17 != 0) {
          plVar33 = (long *)(((uVar17 >> 1) + uVar2 * 0x10000) / uVar17);
        }
        plVar13 = (long *)0x7fffffff;
        if (lStack_2a0 != (char)lStack_2a0) {
          plVar13 = plVar33;
        }
        plVar33 = (long *)-(long)plVar13;
        if (-1 < (long)(uVar18 ^ uVar24)) {
          plVar33 = plVar13;
        }
        if ((char)param_1[0x14] == '\0') {
          lVar22 = 0;
        }
        else {
          lVar22 = *(long *)((long)aplStack_290 + uVar29) - (long)pplStack_2f8[4];
          FUN_109757d38(lVar22,(long)pplStack_2f8[1] - (long)pplStack_2f8[5]);
        }
        lVar21 = 0x5a0000;
        puVar28 = param_1 + 0x1c;
        bVar5 = true;
        do {
          bVar6 = bVar5;
          lStack_2a8 = 0;
          plStack_2b0 = plVar33;
          FUN_109757e8c(&plStack_2b0,(long)pplVar10 + lVar21 + lVar16);
          plStack_2b0 = (long *)((long)plStack_2b0 + (long)pplStack_2f8[2]);
          lStack_2a8 = lStack_2a8 + (long)pplStack_2f8[3];
          plStack_2c0 = *(long **)(param_1 + 0x1a);
          lStack_2b8 = 0;
          FUN_109757e8c(&plStack_2c0,lVar21 + (long)pplVar11);
          lVar21 = lStack_2b8;
          plVar13 = plStack_2c0;
          plStack_2c0 = (long *)((long)plStack_2c0 + *(long *)((long)aplStack_290 + uVar29));
          lStack_2b8 = lStack_2b8 + (long)pplStack_2f8[1];
          puVar9 = puVar28;
          if ((char)param_1[0x14] == '\0') {
LAB_10975ae98:
            param_2 = &plStack_2b0;
            pplVar15 = &plStack_2c0;
            FUN_10975af34();
            iVar8 = (int)puVar9;
          }
          else {
            plVar34 = (long *)(*(long *)(puVar28 + 2) + (ulong)(*puVar28 - 1) * 0x10);
            lVar35 = plVar34[1];
            plVar34 = (long *)*plVar34;
            lVar26 = (long)plStack_2c0 - (long)plVar34;
            lVar30 = lStack_2b8 - lVar35;
            lVar20 = lVar26;
            plStack_2d0 = plVar34;
            lStack_2c8 = lVar35;
            FUN_109757d38(lVar26,lVar30);
            lVar12 = lVar20 - lVar22;
            if (lVar20 - lVar22 < -0xb3fffe) {
              lVar12 = -0xb3ffff;
            }
            lVar19 = (lVar12 + lVar22) - lVar20;
            uVar17 = (lVar19 - (ulong)(lVar19 != 0)) / 0x1680000;
            if (lVar12 + lVar22 != lVar20) {
              uVar17 = uVar17 + 1;
            }
            lVar19 = lVar20 + uVar17 * 0x1680000;
            lVar23 = lVar19 - lVar22;
            lVar12 = lVar23;
            if (0xb3ffff < lVar23) {
              lVar12 = 0xb40000;
            }
            uVar18 = lVar23 + ((ulong)((lVar19 + 0x167ffff) - (lVar22 + lVar12)) / 0x1680000) *
                              -0x1680000;
            uVar17 = -uVar18;
            if (-1 < (long)uVar18) {
              uVar17 = uVar18;
            }
            if (uVar17 < 0x5a0001) goto LAB_10975ae98;
            lVar12 = (long)pplStack_2f8[4] - (long)plVar34;
            FUN_109757d38(lVar12,(long)pplStack_2f8[5] - lVar35);
            lVar19 = -(long)plVar13;
            FUN_109757d38(lVar19,-lVar21);
            plVar13 = &lStack_2e0;
            lStack_2e0 = lVar26;
            lStack_2d8 = lVar30;
            FUN_1097531c8();
            lStack_298 = 0;
            lStack_2a0 = 0xdbd95b;
            FUN_109757c64(&lStack_2a0,lVar20 - lVar19);
            lVar20 = lStack_298 + 0x80 >> 8;
            lVar21 = -lVar20;
            if (-1 < lVar20) {
              lVar21 = lVar20;
            }
            lStack_298 = 0;
            lStack_2a0 = 0xdbd95b;
            FUN_109757c64(&lStack_2a0,lVar12 - lVar19);
            lVar26 = lStack_298 + 0x80 >> 8;
            lVar20 = -lVar26;
            if (-1 < lVar26) {
              lVar20 = lVar26;
            }
            FUN_1097532ac(plVar13,lVar21,lVar20);
            lStack_2e8 = 0;
            plStack_2f0 = plVar13;
            FUN_109757e8c(&plStack_2f0,lVar12);
            plStack_2f0 = (long *)((long)plStack_2f0 + (long)plVar34);
            lStack_2e8 = lStack_2e8 + lVar35;
            *(undefined1 *)(puVar28 + 6) = 0;
            param_2 = &plStack_2f0;
            pplVar15 = (long **)0x0;
            FUN_10975a6d4();
            if ((int)puVar9 != 0) goto LAB_10975aef8;
            param_2 = &plStack_2c0;
            pplVar15 = (long **)0x0;
            puVar9 = puVar28;
            FUN_10975a6d4();
            if ((int)puVar9 != 0) goto LAB_10975aef8;
            param_2 = &plStack_2b0;
            pplVar15 = &plStack_2d0;
            puVar9 = puVar28;
            FUN_10975af34();
            if ((int)puVar9 != 0) goto LAB_10975aef8;
            param_2 = &plStack_2c0;
            pplVar15 = (long **)0x0;
            puVar9 = puVar28;
            FUN_10975a6d4();
            iVar8 = (int)puVar9;
          }
          if (iVar8 != 0) goto LAB_10975aef8;
          puVar28 = puVar28 + 0xc;
          lVar21 = -0x5a0000;
          bVar5 = false;
        } while (bVar6);
        bVar5 = false;
        uVar29 = uVar29 - 0x20;
        *(long ***)param_1 = pplVar11;
      }
      pplStack_2f8 = (long **)((long)aplStack_290 + uVar29);
      pplVar31 = pplVar11;
    } while (-1 < (long)uVar29);
    puVar9 = (uint *)0x0;
    plVar33 = *param_3;
    *(long **)(param_1 + 6) = param_3[1];
    *(long **)puVar14 = plVar33;
    param_1[8] = 0;
    param_1[9] = 0;
  }
LAB_10975aef8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar14 = puVar9;
  FUN_10975c6a0();
  if ((int)puVar14 == 0) {
    uVar4 = *puVar9;
    lVar16 = *(long *)(puVar9 + 4);
    puVar1 = (undefined8 *)(*(long *)(puVar9 + 2) + (ulong)uVar4 * 0x10);
    plVar33 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = plVar33;
    plVar33 = *pplVar15;
    puVar1[3] = pplVar15[1];
    puVar1[2] = plVar33;
    *(undefined2 *)(lVar16 + (ulong)uVar4) = 0x100;
    *puVar9 = *puVar9 + 2;
  }
  *(undefined1 *)(puVar9 + 6) = 0;
  return;
}



/* Entry: 10975af34; end: 10975af9f;  */

void FUN_10975af34(uint *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  
  iVar4 = (int)param_1;
  FUN_10975c6a0(iVar4,2);
  if (iVar4 == 0) {
    uVar3 = *param_1;
    lVar2 = *(long *)(param_1 + 4);
    puVar1 = (undefined8 *)(*(long *)(param_1 + 2) + (ulong)uVar3 * 0x10);
    uVar5 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar5;
    uVar5 = *param_3;
    puVar1[3] = param_3[1];
    puVar1[2] = uVar5;
    *(undefined2 *)(lVar2 + (ulong)uVar3) = 0x100;
    *param_1 = *param_1 + 2;
  }
  *(undefined1 *)(param_1 + 6) = 0;
  return;
}



/* Entry: 10975afa0; end: 10975ba47;  */

void FUN_10975afa0(uint *param_1,long **param_2,long **param_3,long **param_4)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  uint *puVar13;
  long **pplVar14;
  long lVar15;
  uint *puVar16;
  long **pplVar17;
  long **pplVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  long *plVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long *plVar28;
  long lVar29;
  ulong uVar30;
  long lVar31;
  long lVar32;
  long **pplVar33;
  long lVar34;
  long **pplVar35;
  long **pplVar36;
  uint *puVar37;
  long **pplVar38;
  long *plVar39;
  long lVar40;
  long **pplStack_368;
  long **pplStack_338;
  long *plStack_330;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  long *plStack_310;
  long lStack_308;
  long *plStack_300;
  long lStack_2f8;
  long *plStack_2f0;
  long lStack_2e8;
  long *plStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  long *aplStack_2c0 [4];
  long *plStack_2a0;
  long *plStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar16 = param_1 + 4;
  pplVar18 = param_4;
  if ((((((*(long *)puVar16 - (long)*param_2) + 1U < 3) &&
        ((*(long *)(param_1 + 6) - (long)param_2[1]) + 1U < 3)) &&
       ((ulong)((long)*param_2 + (1 - (long)*param_3)) < 3)) &&
      (((ulong)((long)param_2[1] + (1 - (long)param_3[1])) < 3 &&
       ((ulong)((long)*param_3 + (1 - (long)*param_4)) < 3)))) &&
     ((ulong)((long)param_3[1] + (1 - (long)param_4[1])) < 3)) {
    puVar13 = (uint *)0x0;
    plVar24 = *param_4;
    *(long **)(param_1 + 6) = param_4[1];
    *(long **)puVar16 = plVar24;
  }
  else {
    uVar30 = 0;
    aplStack_2c0[1] = param_4[1];
    aplStack_2c0[0] = *param_4;
    aplStack_2c0[3] = param_3[1];
    aplStack_2c0[2] = *param_3;
    plStack_298 = param_2[1];
    plStack_2a0 = *param_2;
    uStack_288 = *(undefined8 *)(param_1 + 6);
    uStack_290 = *(undefined8 *)puVar16;
    param_3 = (long **)0x1;
    pplStack_338 = aplStack_2c0;
    pplVar38 = *(long ***)param_1;
    do {
      pplVar14 = pplVar38;
      pplVar33 = pplVar38;
      pplStack_368 = pplVar38;
      if (uVar30 < 0x200) {
        plVar24 = pplStack_338[5];
        plVar39 = pplStack_338[6];
        plVar5 = pplStack_338[3];
        plVar7 = pplStack_338[4];
        pplVar14 = (long **)((long)plVar7 - (long)plVar39);
        plVar28 = pplStack_338[7];
        pplVar17 = (long **)((long)plVar24 - (long)plVar28);
        plVar6 = pplStack_338[1];
        plVar8 = pplStack_338[2];
        pplVar33 = (long **)((long)plVar8 - (long)plVar7);
        param_2 = (long **)((long)plVar5 - (long)plVar24);
        lVar29 = *(long *)((long)aplStack_2c0 + uVar30);
        pplVar36 = (long **)(lVar29 - (long)plVar8);
        pplVar35 = (long **)((long)plVar6 - (long)plVar5);
        bVar9 = 2 < (long)pplVar33 + 1U || 2 < (long)param_2 + 1U;
        bVar10 = 2 < (long)pplVar36 + 1U;
        bVar11 = 2 < (long)pplVar35 + 1U;
        if (((long)pplVar14 + 1U < 3) && ((long)pplVar17 + 1U < 3)) {
          if (bVar9) {
            FUN_109757d38();
            pplStack_368 = pplVar33;
            pplVar14 = pplVar33;
            if (bVar10 || bVar11) {
              FUN_109757d38();
              pplStack_368 = pplVar36;
              param_2 = pplVar35;
            }
          }
          else {
            param_2 = pplVar17;
            pplVar14 = pplVar38;
            pplVar33 = pplVar38;
            if (bVar10 || bVar11) {
              FUN_109757d38();
              pplStack_368 = pplVar36;
              param_2 = pplVar35;
              pplVar14 = pplVar36;
              pplVar33 = pplVar36;
            }
          }
        }
        else {
          FUN_109757d38();
          if (bVar9) {
            FUN_109757d38();
            pplStack_368 = pplVar33;
            if (bVar10 || bVar11) {
              FUN_109757d38();
              pplStack_368 = pplVar36;
              param_2 = pplVar35;
            }
          }
          else {
            pplStack_368 = pplVar14;
            param_2 = pplVar17;
            pplVar33 = pplVar14;
            if (bVar10 || bVar11) {
              FUN_109757d38();
              lVar27 = (long)pplVar36 - (long)pplVar14;
              if ((long)pplVar36 - (long)pplVar14 < -0xb3fffe) {
                lVar27 = -0xb3ffff;
              }
              lVar26 = (lVar27 + (long)pplVar14) - (long)pplVar36;
              uVar19 = (lVar26 - (ulong)(lVar26 != 0)) / 0x1680000;
              if ((long **)(lVar27 + (long)pplVar14) != pplVar36) {
                uVar19 = uVar19 + 1;
              }
              lVar26 = (long)pplVar36 + (uVar19 * 0x1680000 - (long)pplVar14);
              lVar27 = lVar26;
              if (0xb3ffff < lVar26) {
                lVar27 = 0xb40000;
              }
              pplStack_368 = pplVar36;
              param_2 = pplVar35;
              pplVar33 = (long **)((long)pplVar14 +
                                  (long)(lVar26 + (((long)pplVar36 +
                                                   (((uVar19 * 0x1680000 + 0x167ffff) -
                                                    (long)pplVar14) - lVar27)) / 0x1680000) *
                                                  -0x1680000) / 2);
            }
          }
        }
        lVar27 = (long)pplStack_368 - (long)pplVar33;
        if ((long)pplStack_368 - (long)pplVar33 < -0xb3fffe) {
          lVar27 = -0xb3ffff;
        }
        lVar26 = (lVar27 + (long)pplVar33) - (long)pplStack_368;
        uVar19 = (lVar26 - (ulong)(lVar26 != 0)) / 0x1680000;
        if ((long **)(lVar27 + (long)pplVar33) != pplStack_368) {
          uVar19 = uVar19 + 1;
        }
        lVar27 = (long)pplVar33 - (long)pplVar14;
        if ((long)pplVar33 - (long)pplVar14 < -0xb3fffe) {
          lVar27 = -0xb3ffff;
        }
        lVar26 = (lVar27 + (long)pplVar14) - (long)pplVar33;
        uVar22 = (lVar26 - (ulong)(lVar26 != 0)) / 0x1680000;
        if ((long **)(lVar27 + (long)pplVar14) != pplVar33) {
          uVar22 = uVar22 + 1;
        }
        lVar26 = (long)pplVar33 + (uVar22 * 0x1680000 - (long)pplVar14);
        lVar27 = lVar26;
        if (0xb3ffff < lVar26) {
          lVar27 = 0xb40000;
        }
        uVar23 = lVar26 + (((long)pplVar33 +
                           (((uVar22 * 0x1680000 + 0x167ffff) - (long)pplVar14) - lVar27)) /
                          0x1680000) * -0x1680000;
        uVar22 = -uVar23;
        if (-1 < (long)uVar23) {
          uVar22 = uVar23;
        }
        lVar26 = (long)pplStack_368 + (uVar19 * 0x1680000 - (long)pplVar33);
        lVar27 = lVar26;
        if (0xb3ffff < lVar26) {
          lVar27 = 0xb40000;
        }
        uVar23 = lVar26 + (((long)pplStack_368 +
                           (((uVar19 * 0x1680000 + 0x167ffff) - (long)pplVar33) - lVar27)) /
                          0x1680000) * -0x1680000;
        uVar19 = -uVar23;
        if (-1 < (long)uVar23) {
          uVar19 = uVar23;
        }
        if (uVar22 >> 0xf < 0x2d && uVar19 < 0x168000) goto LAB_10975b44c;
        pplStack_368 = pplVar38;
        if ((char)param_1[10] != '\0') {
          *(long ***)param_1 = pplVar14;
          pplStack_368 = pplVar14;
        }
        lVar29 = lVar29 + (long)plVar8;
        pplStack_338[0xc] = plVar39;
        pplStack_338[0xd] = plVar28;
        lVar27 = (long)plVar8 + (long)plVar7 + (long)plVar39 + (long)plVar7;
        lVar26 = lVar29 + (long)plVar8 + (long)plVar7;
        pplStack_338[10] = (long *)((long)plVar39 + (long)plVar7 >> 1);
        pplStack_338[0xb] = (long *)((long)plVar28 + (long)plVar24 >> 1);
        lVar15 = (long)plVar6 + (long)plVar5;
        lVar31 = (long)plVar5 + (long)plVar24 + (long)plVar28 + (long)plVar24;
        pplStack_338[8] = (long *)(lVar27 >> 2);
        pplStack_338[9] = (long *)(lVar31 >> 2);
        pplStack_338[2] = (long *)(lVar29 >> 1);
        pplStack_338[3] = (long *)(lVar15 >> 1);
        lVar15 = lVar15 + (long)plVar5 + (long)plVar24;
        pplStack_338[4] = (long *)(lVar26 >> 2);
        pplStack_338[5] = (long *)(lVar15 >> 2);
        uVar30 = uVar30 + 0x30;
        pplStack_338[6] = (long *)(lVar26 + lVar27 >> 3);
        pplStack_338[7] = (long *)(lVar15 + lVar31 >> 3);
      }
      else {
LAB_10975b44c:
        puVar13 = param_1;
        if ((int)param_3 == 0) {
          lVar29 = (long)pplVar14 - (long)pplVar38;
          if ((long)pplVar14 - (long)pplVar38 < -0xb3fffe) {
            lVar29 = -0xb3ffff;
          }
          lVar27 = (lVar29 + (long)pplVar38) - (long)pplVar14;
          uVar19 = (lVar27 - (ulong)(lVar27 != 0)) / 0x1680000;
          if ((long **)(lVar29 + (long)pplVar38) != pplVar14) {
            uVar19 = uVar19 + 1;
          }
          lVar27 = (long)pplVar14 + (uVar19 * 0x1680000 - (long)pplVar38);
          lVar29 = lVar27;
          if (0xb3ffff < lVar27) {
            lVar29 = 0xb40000;
          }
          uVar22 = lVar27 + (((long)pplVar14 +
                             ((uVar19 * 0x1680000 + 0x167ffff) - ((long)pplVar38 + lVar29))) /
                            0x1680000) * -0x1680000;
          uVar19 = -uVar22;
          if (-1 < (long)uVar22) {
            uVar19 = uVar22;
          }
          if (0x5a000 < uVar19) {
            plVar24 = pplStack_338[6];
            *(long **)(param_1 + 6) = pplStack_338[7];
            *(long **)puVar16 = plVar24;
            *(long ***)(param_1 + 2) = pplVar14;
            param_1[0x16] = 0;
            param_2 = (long **)0x0;
            FUN_10975a1dc();
            param_1[0x16] = param_1[0x17];
            goto LAB_10975b534;
          }
        }
        else {
          if ((char)param_1[10] == '\0') {
            *(long ***)(param_1 + 2) = pplVar14;
            param_2 = (long **)0x0;
            FUN_10975a1dc();
          }
          else {
            param_3 = (long **)0x0;
            param_2 = pplVar14;
            FUN_10975a14c();
          }
LAB_10975b534:
          if ((int)puVar13 != 0) goto LAB_10975ba0c;
        }
        lVar29 = (long)pplStack_368 - (long)pplVar33;
        if ((long)pplStack_368 - (long)pplVar33 < -0xb3fffe) {
          lVar29 = -0xb3ffff;
        }
        lVar27 = (lVar29 + (long)pplVar33) - (long)pplStack_368;
        uVar19 = (lVar27 - (ulong)(lVar27 != 0)) / 0x1680000;
        if ((long **)(lVar29 + (long)pplVar33) != pplStack_368) {
          uVar19 = uVar19 + 1;
        }
        lVar29 = (long)pplVar33 - (long)pplVar14;
        if ((long)pplVar33 - (long)pplVar14 < -0xb3fffe) {
          lVar29 = -0xb3ffff;
        }
        lVar27 = (lVar29 + (long)pplVar14) - (long)pplVar33;
        uVar22 = (lVar27 - (ulong)(lVar27 != 0)) / 0x1680000;
        if ((long **)(lVar29 + (long)pplVar14) != pplVar33) {
          uVar22 = uVar22 + 1;
        }
        lVar27 = (long)pplVar33 + (uVar22 * 0x1680000 - (long)pplVar14);
        lVar29 = lVar27;
        if (0xb3ffff < lVar27) {
          lVar29 = 0xb40000;
        }
        lVar27 = (long)(lVar27 + (((long)pplVar33 +
                                  ((uVar22 * 0x1680000 + 0x167ffff) - ((long)pplVar14 + lVar29))) /
                                 0x1680000) * -0x1680000) / 2;
        lVar26 = (long)pplStack_368 + (uVar19 * 0x1680000 - (long)pplVar33);
        lVar29 = lVar26;
        if (0xb3ffff < lVar26) {
          lVar29 = 0xb40000;
        }
        uVar23 = *(ulong *)(param_1 + 0x1a);
        lStack_2c8 = 0;
        lStack_2d0 = 0xdbd95b;
        FUN_109757c64(&lStack_2d0,lVar27);
        uVar22 = lStack_2d0 + 0x80 >> 8;
        if (lStack_2d0 == (char)lStack_2d0) {
          plVar24 = (long *)0x7fffffff;
        }
        else {
          uVar4 = -uVar22;
          if (-1 < (long)uVar22) {
            uVar4 = uVar22;
          }
          uVar3 = -uVar23;
          if (-1 < (long)uVar23) {
            uVar3 = uVar23;
          }
          plVar24 = (long *)0x0;
          if (uVar4 != 0) {
            plVar24 = (long *)(((uVar4 >> 1) + uVar3 * 0x10000) / uVar4);
          }
        }
        lVar29 = (long)(lVar26 + (((long)pplStack_368 +
                                  ((uVar19 * 0x1680000 + 0x167ffff) - ((long)pplVar33 + lVar29))) /
                                 0x1680000) * -0x1680000) / 2;
        plVar5 = (long *)-(long)plVar24;
        if (-1 < (long)(uVar22 ^ uVar23)) {
          plVar5 = plVar24;
        }
        lStack_2c8 = 0;
        lStack_2d0 = 0xdbd95b;
        FUN_109757c64(&lStack_2d0,lVar29);
        uVar19 = lStack_2d0 + 0x80 >> 8;
        if (lStack_2d0 == (char)lStack_2d0) {
          plVar24 = (long *)0x7fffffff;
        }
        else {
          uVar22 = -uVar19;
          if (-1 < (long)uVar19) {
            uVar22 = uVar19;
          }
          uVar4 = -uVar23;
          if (-1 < (long)uVar23) {
            uVar4 = uVar23;
          }
          plVar24 = (long *)0x0;
          if (uVar22 != 0) {
            plVar24 = (long *)(((uVar22 >> 1) + uVar4 * 0x10000) / uVar22);
          }
        }
        plVar6 = (long *)-(long)plVar24;
        if (-1 < (long)(uVar19 ^ uVar23)) {
          plVar6 = plVar24;
        }
        if ((char)param_1[0x14] == '\0') {
          lVar26 = 0;
        }
        else {
          lVar26 = *(long *)((long)aplStack_2c0 + uVar30) - (long)pplStack_338[6];
          FUN_109757d38(lVar26,(long)pplStack_338[1] - (long)pplStack_338[7]);
        }
        lVar31 = 0x5a0000;
        puVar37 = param_1 + 0x1c;
        bVar9 = true;
        do {
          bVar10 = bVar9;
          lStack_2d8 = 0;
          plStack_2e0 = plVar5;
          FUN_109757e8c(&plStack_2e0,(long)pplVar14 + lVar31 + lVar27);
          plStack_2e0 = (long *)((long)plStack_2e0 + (long)pplStack_338[4]);
          lStack_2d8 = lStack_2d8 + (long)pplStack_338[5];
          lStack_2e8 = 0;
          plStack_2f0 = plVar6;
          FUN_109757e8c(&plStack_2f0,(long)pplVar33 + lVar31 + lVar29);
          plStack_2f0 = (long *)((long)plStack_2f0 + (long)pplStack_338[2]);
          lStack_2e8 = lStack_2e8 + (long)pplStack_338[3];
          plStack_300 = *(long **)(param_1 + 0x1a);
          lStack_2f8 = 0;
          FUN_109757e8c(&plStack_300,lVar31 + (long)pplStack_368);
          lVar31 = lStack_2f8;
          plVar24 = plStack_300;
          plStack_300 = (long *)((long)plStack_300 + *(long *)((long)aplStack_2c0 + uVar30));
          lStack_2f8 = lStack_2f8 + (long)pplStack_338[1];
          puVar13 = puVar37;
          if ((char)param_1[0x14] == '\0') {
LAB_10975b9a8:
            param_2 = &plStack_2e0;
            param_3 = &plStack_2f0;
            pplVar18 = &plStack_300;
            FUN_10975ba48();
            iVar12 = (int)puVar13;
          }
          else {
            plVar39 = (long *)(*(long *)(puVar37 + 2) + (ulong)(*puVar37 - 1) * 0x10);
            lVar40 = plVar39[1];
            plVar39 = (long *)*plVar39;
            lVar32 = (long)plStack_300 - (long)plVar39;
            lVar34 = lStack_2f8 - lVar40;
            lVar21 = lVar32;
            plStack_310 = plVar39;
            lStack_308 = lVar40;
            FUN_109757d38(lVar32,lVar34);
            lVar15 = lVar21 - lVar26;
            if (lVar21 - lVar26 < -0xb3fffe) {
              lVar15 = -0xb3ffff;
            }
            lVar20 = (lVar15 + lVar26) - lVar21;
            uVar19 = (lVar20 - (ulong)(lVar20 != 0)) / 0x1680000;
            if (lVar15 + lVar26 != lVar21) {
              uVar19 = uVar19 + 1;
            }
            lVar20 = lVar21 + uVar19 * 0x1680000;
            lVar25 = lVar20 - lVar26;
            lVar15 = lVar25;
            if (0xb3ffff < lVar25) {
              lVar15 = 0xb40000;
            }
            uVar22 = lVar25 + ((ulong)((lVar20 + 0x167ffff) - (lVar26 + lVar15)) / 0x1680000) *
                              -0x1680000;
            uVar19 = -uVar22;
            if (-1 < (long)uVar22) {
              uVar19 = uVar22;
            }
            if (uVar19 < 0x5a0001) goto LAB_10975b9a8;
            lVar15 = (long)pplStack_338[6] - (long)plVar39;
            FUN_109757d38(lVar15,(long)pplStack_338[7] - lVar40);
            lVar20 = -(long)plVar24;
            FUN_109757d38(lVar20,-lVar31);
            plVar24 = &lStack_320;
            lStack_320 = lVar32;
            lStack_318 = lVar34;
            FUN_1097531c8();
            lStack_2c8 = 0;
            lStack_2d0 = 0xdbd95b;
            FUN_109757c64(&lStack_2d0,lVar21 - lVar20);
            lVar21 = lStack_2c8 + 0x80 >> 8;
            lVar31 = -lVar21;
            if (-1 < lVar21) {
              lVar31 = lVar21;
            }
            lStack_2c8 = 0;
            lStack_2d0 = 0xdbd95b;
            FUN_109757c64(&lStack_2d0,lVar15 - lVar20);
            lVar32 = lStack_2c8 + 0x80 >> 8;
            lVar21 = -lVar32;
            if (-1 < lVar32) {
              lVar21 = lVar32;
            }
            FUN_1097532ac(plVar24,lVar31,lVar21);
            lStack_328 = 0;
            plStack_330 = plVar24;
            FUN_109757e8c(&plStack_330,lVar15);
            plStack_330 = (long *)((long)plStack_330 + (long)plVar39);
            lStack_328 = lStack_328 + lVar40;
            *(undefined1 *)(puVar37 + 6) = 0;
            param_2 = &plStack_330;
            param_3 = (long **)0x0;
            FUN_10975a6d4();
            if ((int)puVar13 != 0) goto LAB_10975ba0c;
            param_2 = &plStack_300;
            param_3 = (long **)0x0;
            puVar13 = puVar37;
            FUN_10975a6d4();
            if ((int)puVar13 != 0) goto LAB_10975ba0c;
            param_2 = &plStack_2f0;
            param_3 = &plStack_2e0;
            pplVar18 = &plStack_310;
            puVar13 = puVar37;
            FUN_10975ba48();
            if ((int)puVar13 != 0) goto LAB_10975ba0c;
            param_2 = &plStack_300;
            param_3 = (long **)0x0;
            puVar13 = puVar37;
            FUN_10975a6d4();
            iVar12 = (int)puVar13;
          }
          if (iVar12 != 0) goto LAB_10975ba0c;
          puVar37 = puVar37 + 0xc;
          lVar31 = -0x5a0000;
          bVar9 = false;
        } while (bVar10);
        param_3 = (long **)0x0;
        uVar30 = uVar30 - 0x30;
        *(long ***)param_1 = pplStack_368;
      }
      pplStack_338 = (long **)((long)aplStack_2c0 + uVar30);
      pplVar38 = pplStack_368;
    } while (-1 < (long)uVar30);
    puVar13 = (uint *)0x0;
    plVar24 = *param_4;
    *(long **)(param_1 + 6) = param_4[1];
    *(long **)puVar16 = plVar24;
    param_1[8] = 0;
    param_1[9] = 0;
  }
LAB_10975ba0c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar16 = puVar13;
  FUN_10975c6a0();
  if ((int)puVar16 == 0) {
    puVar1 = (undefined8 *)(*(long *)(puVar13 + 2) + (ulong)*puVar13 * 0x10);
    puVar2 = (undefined2 *)(*(long *)(puVar13 + 4) + (ulong)*puVar13);
    plVar24 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = plVar24;
    plVar24 = *param_3;
    puVar1[3] = param_3[1];
    puVar1[2] = plVar24;
    plVar24 = *pplVar18;
    puVar1[5] = pplVar18[1];
    puVar1[4] = plVar24;
    *puVar2 = 0x202;
    *(undefined1 *)(puVar2 + 1) = 1;
    *puVar13 = *puVar13 + 3;
  }
  *(undefined1 *)(puVar13 + 6) = 0;
  return;
}



/* Entry: 10975ba48; end: 10975bba7;  */

void FUN_10975ba48(uint *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar3 = (int)param_1;
  FUN_10975c6a0(iVar3,3);
  if (iVar3 == 0) {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 2) + (ulong)*param_1 * 0x10);
    puVar2 = (undefined2 *)(*(long *)(param_1 + 4) + (ulong)*param_1);
    uVar4 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar4;
    uVar4 = *param_3;
    puVar1[3] = param_3[1];
    puVar1[2] = uVar4;
    uVar4 = *param_4;
    puVar1[5] = param_4[1];
    puVar1[4] = uVar4;
    *puVar2 = 0x202;
    *(undefined1 *)(puVar2 + 1) = 1;
    *param_1 = *param_1 + 3;
  }
  *(undefined1 *)(param_1 + 6) = 0;
  return;
}



/* Entry: 10975bba8; end: 10975bc9f;  */

void FUN_10975bba8(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar1 = param_1[7];
  uVar5 = (ulong)uVar1;
  uVar2 = *param_1;
  if (uVar1 + 1 < uVar2) {
    uVar1 = uVar2 - 1;
    uVar6 = (ulong)uVar1;
    *param_1 = uVar1;
    puVar8 = (undefined8 *)(*(long *)(param_1 + 2) + (ulong)uVar1 * 0x10);
    uVar12 = *puVar8;
    puVar10 = (undefined8 *)(*(long *)(param_1 + 2) + uVar5 * 0x10);
    puVar10[1] = puVar8[1];
    *puVar10 = uVar12;
    *(undefined1 *)(*(long *)(param_1 + 4) + uVar5) =
         *(undefined1 *)(*(long *)(param_1 + 4) + uVar6);
    if (param_2 != 0) {
      lVar11 = *(long *)(param_1 + 2) + uVar6 * 0x10;
      puVar8 = (undefined8 *)(*(long *)(param_1 + 2) + uVar5 * 0x10 + 0x10);
      if (puVar8 < (undefined8 *)(lVar11 - 0x10U)) {
        puVar10 = (undefined8 *)(lVar11 - 0x20);
        do {
          uVar13 = puVar8[1];
          uVar12 = *puVar8;
          uVar14 = puVar10[2];
          puVar8[1] = puVar10[3];
          *puVar8 = uVar14;
          puVar10[3] = uVar13;
          puVar10[2] = uVar12;
          bVar4 = puVar8 + 2 < puVar10;
          puVar10 = puVar10 + -2;
          puVar8 = puVar8 + 2;
        } while (bVar4);
      }
      lVar11 = *(long *)(param_1 + 4);
      puVar9 = (undefined1 *)(lVar11 + uVar5 + 1);
      if (puVar9 < (undefined1 *)(lVar11 + uVar6 + -1)) {
        puVar7 = (undefined1 *)(uVar6 + lVar11 + -2);
        do {
          uVar3 = *puVar9;
          *puVar9 = puVar7[1];
          puVar7[1] = uVar3;
          bVar4 = puVar9 + 1 < puVar7;
          puVar7 = puVar7 + -1;
          puVar9 = puVar9 + 1;
        } while (bVar4);
      }
    }
    *(byte *)(*(long *)(param_1 + 4) + uVar5) = *(byte *)(*(long *)(param_1 + 4) + uVar5) | 4;
    *(byte *)(*(long *)(param_1 + 4) + (ulong)(uVar2 - 2)) =
         *(byte *)(*(long *)(param_1 + 4) + (ulong)(uVar2 - 2)) | 8;
  }
  else {
    *param_1 = uVar1;
  }
  param_1[7] = 0xffffffff;
  *(undefined1 *)(param_1 + 6) = 0;
  return;
}



/* Entry: 10975bca0; end: 10975bd13;  */

undefined8 FUN_10975bca0(long param_1,uint param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  uStack_28 = 0;
  uVar1 = 6;
  if ((param_1 != 0) && (param_2 < 2)) {
    FUN_10975bd14(param_1 + (ulong)param_2 * 0x30 + 0x70,(long)&uStack_28 + 4,&uStack_28);
    uVar1 = 0;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = uStack_28._4_4_;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = (undefined4)uStack_28;
  }
  return uVar1;
}



/* Entry: 10975bd14; end: 10975bd7f;  */

void FUN_10975bd14(int *param_1,int *param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  bool bVar5;
  int iVar6;
  
  iVar2 = *param_1;
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0;
    bVar5 = true;
    pbVar4 = *(byte **)(param_1 + 4);
    iVar6 = iVar2;
    do {
      bVar1 = *pbVar4;
      if (bVar5 == ((bVar1 & 4) == 0)) goto LAB_10975bd5c;
      bVar5 = (bool)(bVar1 >> 3 & 1);
      iVar3 = iVar3 + ((bVar1 & 8) >> 3);
      iVar6 = iVar6 + -1;
      pbVar4 = pbVar4 + 1;
    } while (iVar6 != 0);
    if ((bVar1 & 8) == 0) {
LAB_10975bd5c:
      iVar2 = 0;
      iVar3 = 0;
      goto LAB_10975bd74;
    }
  }
  *(undefined1 *)(param_1 + 10) = 1;
LAB_10975bd74:
  *param_2 = iVar2;
  *param_3 = iVar3;
  return;
}



/* Entry: 10975bd80; end: 10975be77;  */

void FUN_10975bd80(long param_1,uint param_2,ushort *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  byte *pbVar5;
  byte *pbVar6;
  ushort *puVar7;
  ushort *puVar8;
  
  if (1 < param_2) {
    return;
  }
  if (param_1 == 0) {
    return;
  }
  if (param_3 == (ushort *)0x0) {
    return;
  }
  param_1 = param_1 + (ulong)param_2 * 0x30;
  if (*(char *)(param_1 + 0x98) == '\0') {
    return;
  }
  if (*(uint *)(param_1 + 0x70) == 0) {
    iVar3 = 0;
  }
  else {
    puVar7 = param_3 + 1;
    _memcpy(*(long *)(param_3 + 4) + (ulong)*puVar7 * 0x10,*(undefined8 *)(param_1 + 0x78),
            (ulong)*(uint *)(param_1 + 0x70) << 4);
    iVar2 = *(int *)(param_1 + 0x70);
    uVar4 = *puVar7;
    iVar3 = 0;
    if (iVar2 == 0) goto LAB_10975be60;
    pbVar6 = (byte *)(*(long *)(param_3 + 8) + (ulong)uVar4);
    pbVar5 = *(byte **)(param_1 + 0x80);
    do {
      bVar1 = *pbVar5 & 2;
      if ((*pbVar5 & 1) != 0) {
        bVar1 = 1;
      }
      *pbVar6 = bVar1;
      iVar2 = iVar2 + -1;
      pbVar6 = pbVar6 + 1;
      pbVar5 = pbVar5 + 1;
    } while (iVar2 != 0);
    iVar3 = *(int *)(param_1 + 0x70);
    uVar4 = *puVar7;
    if (iVar3 == 0) goto LAB_10975be60;
    pbVar6 = *(byte **)(param_1 + 0x80);
    puVar7 = (ushort *)(*(long *)(param_3 + 0xc) + (ulong)*param_3 * 2);
    iVar2 = iVar3;
    do {
      puVar8 = puVar7;
      if ((*pbVar6 >> 3 & 1) != 0) {
        puVar8 = puVar7 + 1;
        *puVar7 = uVar4;
        *param_3 = *param_3 + 1;
      }
      pbVar6 = pbVar6 + 1;
      uVar4 = uVar4 + 1;
      iVar2 = iVar2 + -1;
      puVar7 = puVar8;
    } while (iVar2 != 0);
  }
  uVar4 = param_3[1];
LAB_10975be60:
  param_3[1] = uVar4 + (short)iVar3;
  return;
}



/* Entry: 10975be78; end: 10975c2bf;  */

uint * FUN_10975be78(uint *param_1,ushort *param_2,int param_3)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  ushort uVar4;
  bool bVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  byte *pbVar14;
  uint uVar15;
  undefined8 *puVar16;
  byte *pbVar17;
  uint uVar18;
  long *plVar19;
  ulong uVar20;
  ulong uVar21;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  if (param_2 == (ushort *)0x0) {
    return (uint *)0x14;
  }
  if (param_1 == (uint *)0x0) {
    puVar9 = (uint *)0x6;
  }
  else {
    puVar9 = param_1 + 0x1c;
    *puVar9 = 0;
    param_1[0x23] = 0xffffffff;
    *(undefined1 *)(param_1 + 0x26) = 0;
    param_1[0x28] = 0;
    param_1[0x2f] = 0xffffffff;
    *(undefined1 *)(param_1 + 0x32) = 0;
    if (*param_2 != 0) {
      uVar20 = 0;
      uVar21 = 0xffffffff;
      do {
        uVar15 = (int)uVar21 + 1;
        uVar4 = *(ushort *)(*(long *)(param_2 + 0xc) + uVar20 * 2);
        uVar21 = (ulong)uVar4;
        if ((int)uVar15 < (int)(uint)uVar4) {
          plVar19 = (long *)(*(long *)(param_2 + 4) + uVar21 * 0x10);
          plVar11 = (long *)(*(long *)(param_2 + 4) + (ulong)uVar15 * 0x10);
          lStack_68 = plVar11[1];
          lStack_70 = *plVar11;
          lStack_78 = plVar19[1];
          lStack_80 = *plVar19;
          pbVar17 = (byte *)(*(long *)(param_2 + 8) + (ulong)uVar15);
          if ((*pbVar17 & 3) == 0) {
            if ((*(byte *)(*(long *)(param_2 + 8) + uVar21) & 3) == 1) {
              plVar19 = plVar19 + -2;
            }
            else {
              lStack_80 = (lStack_70 + lStack_80) / 2;
              lStack_78 = (lStack_68 + lStack_78) / 2;
            }
            plVar11 = plVar11 + -2;
            pbVar17 = pbVar17 + -1;
          }
          else {
            lStack_80 = lStack_70;
            lStack_78 = lStack_68;
            if ((*pbVar17 & 3) == 2) {
              return (uint *)0x14;
            }
          }
          *(undefined1 *)(param_1 + 10) = 1;
          *(long *)(param_1 + 6) = lStack_78;
          *(long *)(param_1 + 4) = lStack_80;
          *(char *)((long)param_1 + 0x29) = (char)param_3;
          bVar5 = param_1[0x16] != 0;
          if ((param_3 != 0) && (param_1[0x16] == 0)) {
            bVar5 = param_1[0x15] == 0;
          }
          *(bool *)(param_1 + 0x14) = bVar5;
          *(long *)(param_1 + 0x10) = lStack_78;
          *(long *)(param_1 + 0xe) = lStack_80;
          param_1[0] = 0;
          param_1[1] = 0;
          while (plVar11 < plVar19) {
            plVar1 = plVar11 + 2;
            bVar3 = pbVar17[1];
            puVar8 = param_1;
            if ((bVar3 & 3) == 0) {
              lStack_68 = plVar11[3];
              lStack_70 = *plVar1;
              if (plVar1 < plVar19) {
                pbVar17 = pbVar17 + 2;
                plVar11 = plVar11 + 4;
                while( true ) {
                  lStack_88 = plVar11[1];
                  lStack_90 = *plVar11;
                  if ((*pbVar17 & 3) != 0) break;
                  lStack_a0 = (lStack_90 + lStack_70) / 2;
                  lStack_98 = (lStack_88 + lStack_68) / 2;
                  puVar7 = param_1;
                  FUN_10975a7b0(param_1,&lStack_70,&lStack_a0);
                  if ((int)puVar7 != 0) {
                    return puVar7;
                  }
                  lStack_68 = lStack_88;
                  lStack_70 = lStack_90;
                  pbVar17 = pbVar17 + 1;
                  bVar5 = plVar19 <= plVar11;
                  plVar11 = plVar11 + 2;
                  if (bVar5) goto LAB_10975c0e8;
                }
                if ((*pbVar17 & 3) != 1) {
                  return (uint *)0x14;
                }
                FUN_10975a7b0(param_1,&lStack_70,&lStack_90);
                iVar6 = (int)puVar8;
                goto joined_r0x00010975c0d4;
              }
LAB_10975c0e8:
              FUN_10975a7b0(param_1,&lStack_70,&lStack_80);
              iVar6 = (int)puVar8;
joined_r0x00010975c0f8:
              if (iVar6 != 0) {
                return puVar8;
              }
              break;
            }
            if ((bVar3 & 3) == 1) {
              lStack_88 = plVar11[3];
              lStack_90 = *plVar1;
              FUN_10975a034(param_1,&lStack_90);
              iVar6 = (int)puVar8;
              plVar11 = plVar1;
              pbVar17 = pbVar17 + 1;
joined_r0x00010975c0d4:
              if (iVar6 != 0) {
                return puVar8;
              }
            }
            else {
              if (plVar19 < plVar11 + 4) {
                return (uint *)0x14;
              }
              if ((pbVar17[2] & 3) != 2) {
                return (uint *)0x14;
              }
              plVar2 = plVar11 + 6;
              lStack_88 = plVar11[3];
              lStack_90 = *plVar1;
              lStack_98 = plVar11[5];
              lStack_a0 = plVar11[4];
              if (plVar19 < plVar2) {
                FUN_10975afa0(param_1,&lStack_90,&lStack_a0,&lStack_80);
                iVar6 = (int)puVar8;
                goto joined_r0x00010975c0f8;
              }
              lStack_a8 = plVar11[7];
              lStack_b0 = *plVar2;
              puVar8 = param_1;
              FUN_10975afa0(param_1,&lStack_90,&lStack_a0,&lStack_b0);
              if ((int)puVar8 != 0) {
                return puVar8;
              }
              pbVar17 = pbVar17 + 3;
              plVar11 = plVar2;
            }
          }
          if ((char)param_1[10] == '\0') {
            if (*(char *)((long)param_1 + 0x29) == '\0') {
              if (((2 < (*(long *)(param_1 + 4) - *(long *)(param_1 + 0xe)) + 1U) ||
                  (2 < (*(long *)(param_1 + 6) - *(long *)(param_1 + 0x10)) + 1U)) &&
                 (puVar8 = param_1, FUN_10975a034(param_1,param_1 + 0xe), (int)puVar8 != 0)) {
                return puVar8;
              }
              *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 0xc);
              puVar8 = param_1;
              FUN_10975a1dc(param_1,*(undefined8 *)(param_1 + 0x12));
              if ((int)puVar8 != 0) {
                return puVar8;
              }
              FUN_10975bba8(puVar9,0);
              uVar10 = 1;
              puVar8 = param_1 + 0x28;
            }
            else {
              puVar8 = param_1;
              func_0x00010975bacc(param_1,*(undefined8 *)param_1);
              if ((int)puVar8 != 0) {
                return puVar8;
              }
              iVar6 = param_1[0x28] - param_1[0x2f];
              if (0 < iVar6) {
                puVar8 = puVar9;
                FUN_10975c6a0(puVar9,iVar6);
                if ((int)puVar8 != 0) {
                  return puVar8;
                }
                uVar15 = param_1[0x1c];
                puVar12 = (undefined8 *)
                          ((*(long *)(param_1 + 0x2a) + (ulong)param_1[0x28] * 0x10) - 0x10);
                uVar18 = param_1[0x2f];
                if ((undefined8 *)(*(long *)(param_1 + 0x2a) + (long)(int)uVar18 * 0x10) <= puVar12)
                {
                  pbVar17 = (byte *)(*(long *)(param_1 + 0x2c) + (ulong)param_1[0x28]);
                  pbVar14 = (byte *)(*(long *)(param_1 + 0x20) + (ulong)uVar15);
                  puVar16 = (undefined8 *)(*(long *)(param_1 + 0x1e) + (ulong)uVar15 * 0x10);
                  do {
                    pbVar17 = pbVar17 + -1;
                    puVar13 = puVar12 + -2;
                    uVar10 = *puVar12;
                    puVar16[1] = puVar12[1];
                    *puVar16 = uVar10;
                    *pbVar14 = *pbVar17 & 0xf3;
                    uVar18 = param_1[0x2f];
                    puVar12 = puVar13;
                    pbVar14 = pbVar14 + 1;
                    puVar16 = puVar16 + 2;
                  } while ((undefined8 *)(*(long *)(param_1 + 0x2a) + (long)(int)uVar18 * 0x10) <=
                           puVar13);
                  uVar15 = *puVar9;
                }
                param_1[0x28] = uVar18;
                param_1[0x1c] = uVar15 + iVar6;
                *(undefined1 *)(param_1 + 0x22) = 0;
                *(undefined1 *)(param_1 + 0x2e) = 0;
              }
              *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 0x10);
              *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 0xe);
              puVar8 = param_1;
              func_0x00010975bacc(param_1,*(long *)(param_1 + 0xc) + 0xb40000);
              if ((int)puVar8 != 0) {
                return puVar8;
              }
              uVar10 = 0;
              puVar8 = puVar9;
            }
            FUN_10975bba8(puVar8,uVar10);
          }
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 < *param_2);
    }
    puVar9 = (uint *)0x0;
  }
  return puVar9;
}



/* Entry: 10975c2c0; end: 10975c42f;  */

long FUN_10975c2c0(long *param_1,long param_2,int param_3,int param_4)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  if (((param_1 == (long *)0x0) || (lVar2 = *param_1, lVar2 == 0)) ||
     (*(undefined **)(lVar2 + 8) != &UNK_110b0b418)) {
    return 6;
  }
  FUN_1097594c8(lVar2,&uStack_58);
  if ((int)lVar2 != 0) {
    return lVar2;
  }
  plVar4 = (long *)CONCAT44(uStack_54,uStack_58);
  plVar3 = plVar4 + 5;
  FUN_10975714c(plVar3);
  bVar1 = (int)plVar3 != 0;
  lVar2 = param_2;
  FUN_10975be78(param_2,plVar4 + 5,0);
  if ((int)lVar2 == 0) {
    FUN_10975bca0(param_2,(param_3 != 0) != bVar1,&uStack_58,&uStack_5c);
    FUN_109756ce4(*plVar4,plVar4 + 5);
    lVar2 = *plVar4;
    FUN_109756ba8(lVar2,uStack_58,uStack_5c,plVar4 + 5);
    if ((int)lVar2 == 0) {
      *(undefined4 *)(plVar4 + 5) = 0;
      FUN_10975bd80(param_2,(param_3 != 0) != bVar1,plVar4 + 5);
      if ((param_4 != 0) && (puVar5 = (undefined8 *)*param_1, puVar5 != (undefined8 *)0x0)) {
        lVar2 = *(long *)*puVar5;
        if (*(code **)(puVar5[1] + 0x18) != (code *)0x0) {
          (**(code **)(puVar5[1] + 0x18))(puVar5);
        }
        (**(code **)(lVar2 + 0x10))(lVar2,puVar5);
      }
      lVar2 = 0;
      goto LAB_10975c428;
    }
  }
  lVar6 = *(long *)*plVar4;
  if (*(code **)(plVar4[1] + 0x18) != (code *)0x0) {
    (**(code **)(plVar4[1] + 0x18))(plVar4);
  }
  (**(code **)(lVar6 + 0x10))(lVar6,plVar4);
  if (param_4 != 0) {
    return lVar2;
  }
  plVar4 = (long *)0x0;
LAB_10975c428:
  *param_1 = (long)plVar4;
  return lVar2;
}



/* Entry: 10975c430; end: 10975c47b;  */

void FUN_10975c430(uint *param_1,long *param_2)

{
  uint uVar1;
  long *plVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  
  if (-1 < (int)param_1[7]) {
    FUN_10975bba8(param_1,0);
  }
  param_1[7] = *param_1;
  *(undefined1 *)(param_1 + 6) = 0;
  if ((char)param_1[6] == '\0') {
    if (((param_1[7] < *param_1) &&
        (plVar2 = (long *)(*(long *)(param_1 + 2) + (ulong)(*param_1 - 1) * 0x10),
        (*plVar2 - *param_2) + 1U < 3)) && ((plVar2[1] - param_2[1]) + 1U < 3)) {
      return;
    }
    puVar3 = param_1;
    FUN_10975c6a0(param_1,1);
    if ((int)puVar3 == 0) {
      uVar1 = *param_1;
      lVar4 = *(long *)(param_1 + 4);
      lVar5 = *param_2;
      plVar2 = (long *)(*(long *)(param_1 + 2) + (ulong)uVar1 * 0x10);
      plVar2[1] = param_2[1];
      *plVar2 = lVar5;
      *(undefined1 *)(lVar4 + (ulong)uVar1) = 1;
      *param_1 = *param_1 + 1;
    }
  }
  else {
    lVar4 = *param_2;
    plVar2 = (long *)(*(long *)(param_1 + 2) + (ulong)(*param_1 - 1) * 0x10);
    plVar2[1] = param_2[1];
    *plVar2 = lVar4;
  }
  *(undefined1 *)(param_1 + 6) = 0;
  return;
}



/* Entry: 10975c47c; end: 10975c69f;  */

void FUN_10975c47c(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = *param_1;
  lVar7 = param_1[1];
  lVar1 = lVar7 - lVar2;
  if (lVar7 - lVar2 < -0xb3fffe) {
    lVar1 = -0xb3ffff;
  }
  lVar9 = (lVar1 + lVar2) - lVar7;
  lVar11 = param_1[0xd];
  uVar8 = (lVar9 - (ulong)(lVar9 != 0)) / 0x1680000;
  if (lVar1 + lVar2 != lVar7) {
    uVar8 = uVar8 + 1;
  }
  lVar7 = lVar7 + uVar8 * 0x1680000;
  lVar9 = lVar7 - lVar2;
  lVar1 = lVar9;
  if (0xb3ffff < lVar9) {
    lVar1 = 0xb40000;
  }
  lVar9 = lVar9 + ((((lVar7 - lVar2) - lVar1) + 0x167ffffU) / 0x1680000) * -0x1680000;
  lVar1 = (param_2 & 0xffffffff) * 0x1680000 + -0xb40000;
  if (lVar9 != 0xb40000) {
    lVar1 = lVar9;
  }
  lVar7 = -lVar1;
  if (-1 < lVar1) {
    lVar7 = lVar1;
  }
  if (lVar7 < 0x5a0001) {
    lVar7 = 0x5a0000;
  }
  lVar9 = lVar2 + (param_2 & 0xffffffff) * -0xb40000 + 0x5a0000;
  lVar2 = (lVar7 - 1U) / 0x5a0000 + 1;
  uVar8 = (ulong)(uint)((int)lVar2 << 2);
  lVar7 = 0;
  if (uVar8 != 0) {
    lVar7 = lVar1 / (long)uVar8;
  }
  FUN_109757bf8();
  lVar6 = SUB168(SEXT816(lVar7) * SEXT816(0x5555555555555556),8);
  lVar7 = (lVar6 - (lVar6 >> 0x3f)) + lVar7;
  lStack_68 = 0;
  lStack_70 = lVar11;
  FUN_109757e8c(&lStack_70,lVar9);
  lVar6 = lVar7 * lStack_68;
  lVar12 = lVar7 * lStack_68;
  lStack_68 = param_1[3] + lStack_68;
  lStack_80 = param_1[2] + lStack_70 + (((-lVar6 >> 0x3f) - lVar12) + 0x8000 >> 0x10);
  lStack_78 = lStack_68 + (lStack_70 * lVar7 + (lStack_70 * lVar7 >> 0x3f) + 0x8000 >> 0x10);
  lVar6 = lVar1;
  lVar12 = lVar2;
  lStack_70 = param_1[2] + lStack_70;
  do {
    lStack_98 = 0;
    lVar10 = 0;
    if (lVar2 != 0) {
      lVar10 = lVar6 / lVar2;
    }
    lStack_a0 = lVar11;
    FUN_109757e8c(&lStack_a0,lVar10 + lVar9);
    lVar3 = lVar7 * lStack_a0;
    lVar4 = lVar7 * lStack_a0;
    lStack_a0 = param_1[2] + lStack_a0;
    lVar10 = lStack_98 * lVar7;
    lStack_98 = param_1[3] + lStack_98;
    lVar10 = lStack_a0 + (lVar10 + (lVar10 >> 0x3f) + 0x8000 >> 0x10);
    lVar3 = lStack_98 + (((-lVar3 >> 0x3f) - lVar4) + 0x8000 >> 0x10);
    plVar5 = param_1 + (param_2 & 0xffffffff) * 6 + 0xe;
    lStack_90 = lVar10;
    lStack_88 = lVar3;
    FUN_10975ba48(plVar5,&lStack_80,&lStack_90,&lStack_a0);
    if ((int)plVar5 != 0) break;
    lStack_80 = lStack_a0 * 2 - lVar10;
    lStack_78 = lStack_98 * 2 - lVar3;
    lVar6 = lVar6 + lVar1;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  *(undefined1 *)(param_1 + (param_2 & 0xffffffff) * 6 + 0x11) = 0;
  return;
}



/* Entry: 10975c6a0; end: 10975c74f;  */

int FUN_10975c6a0(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 uVar5;
  int iStack_34;
  
  uVar1 = param_1[1];
  iStack_34 = 0;
  iVar2 = 0;
  if (uVar1 < (uint)(*param_1 + param_2)) {
    uVar5 = *(undefined8 *)(param_1 + 8);
    uVar4 = uVar1;
    do {
      uVar4 = uVar4 + (uVar4 >> 1) + 0x10;
    } while (uVar4 < (uint)(*param_1 + param_2));
    uVar3 = uVar5;
    FUN_1097539a8(uVar5,0x10,uVar1,uVar4,*(undefined8 *)(param_1 + 2),&iStack_34);
    *(undefined8 *)(param_1 + 2) = uVar3;
    iVar2 = iStack_34;
    if (iStack_34 == 0) {
      FUN_1097539a8(uVar5,1,uVar1,uVar4,*(undefined8 *)(param_1 + 4),&iStack_34);
      *(undefined8 *)(param_1 + 4) = uVar5;
      iVar2 = iStack_34;
      if (iStack_34 == 0) {
        param_1[1] = uVar4;
      }
    }
  }
  return iVar2;
}



/* Entry: 10975c750; end: 10975c807;  */

undefined8 FUN_10975c750(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    param_1[4] = param_2;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    _fopen(param_2,&UNK_10f57f79d);
    if (param_2 == 0) {
      uVar2 = 1;
    }
    else {
      _fseek();
      lVar1 = param_2;
      _ftell();
      param_1[1] = lVar1;
      if (lVar1 == 0) {
        _fclose(param_2);
        uVar2 = 0x51;
      }
      else {
        _fseek(param_2,0,0);
        uVar2 = 0;
        param_1[3] = param_2;
        param_1[5] = FUN_10975c808;
        param_1[6] = FUN_10975c888;
      }
    }
    return uVar2;
  }
  return 0x28;
}



/* Entry: 10975c808; end: 10975c887;  */

undefined8 FUN_10975c808(long param_1,ulong param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  if ((param_4 == 0) && (*(ulong *)(param_1 + 8) < param_2)) {
    uVar1 = 1;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    if (*(ulong *)(param_1 + 0x10) != param_2) {
      _fseek(uVar1,param_2,0);
    }
    if (param_4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbe288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__fread_11034c308)(param_3,1,param_4,uVar1);
      return param_3;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 10975c888; end: 10975c8b3;  */

void FUN_10975c888(undefined8 *param_1)

{
  _fclose(param_1[3]);
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10975c8b4; end: 10975c99f;  */

void FUN_10975c8b4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(param_2);
  return;
}



/* Entry: 10975c9a0; end: 10975c9db;  */

void FUN_10975c9a0(long *param_1)

{
  if (param_1[4] != 0) {
    (**(code **)(*(long *)(*param_1 + 0xb8) + 0x10))();
  }
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10975c9dc; end: 10975ca03;  */

void FUN_10975c9dc(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010975c9ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(*param_1 + 0x490) + 0x1360) + 0x10))();
  return;
}



/* Entry: 10975ca04; end: 10975ca77;  */

undefined8 FUN_10975ca04(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 auStack_c [4];
  undefined1 auStack_8 [8];
  
  *(undefined4 *)(param_1 + 0x38) = 1;
  *(undefined1 *)(param_1 + 0x3c) = 1;
  *(undefined8 *)(param_1 + 0x48) = 0x113000003e8;
  *(undefined8 *)(param_1 + 0x40) = 0x190000001f4;
  *(undefined8 *)(param_1 + 0x58) = 0x91d;
  *(undefined8 *)(param_1 + 0x50) = 0x11300000683;
  uVar1 = (uint)auStack_c ^ (uint)auStack_8 ^ *(uint *)(param_1 + 0x10);
  uVar2 = uVar1 >> 10 ^ uVar1 >> 0x14;
  uVar3 = uVar2 ^ uVar1;
  *(uint *)(param_1 + 0x60) = uVar3;
  if ((int)uVar1 < 0) {
    iVar4 = -uVar3;
  }
  else {
    if (uVar2 != uVar1) {
      return 0;
    }
    iVar4 = 0x75bcd15;
  }
  *(int *)(param_1 + 0x60) = iVar4;
  return 0;
}



/* Entry: 10975ca78; end: 10975ca7b;  */

void FUN_10975ca78(void)

{
  return;
}



/* Entry: 10975ca7c; end: 10975cae7;  */

void FUN_10975ca7c(long param_1)

{
  undefined **ppuVar1;
  long *plVar2;
  
  ppuVar1 = &PTR_DAT_110b0b650;
  func_0x000109753df4();
  if ((((ppuVar1 == (undefined **)0x0) && (param_1 != 0)) &&
      (plVar2 = *(long **)(param_1 + 8), plVar2 != (long *)0x0)) &&
     (FUN_10975421c(plVar2,&UNK_10f57f7a4), plVar2 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010975cadc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x40))();
    return;
  }
  return;
}



/* Entry: 10975cae8; end: 10975d6bb;  */

void FUN_10975cae8(long param_1,ulong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  long lVar8;
  char cVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined2 uVar15;
  long *plVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  ulong *puVar21;
  char *pcVar22;
  uint uVar23;
  int iVar24;
  char *pcVar25;
  ulong uVar26;
  char cVar27;
  long lVar28;
  long lVar29;
  undefined2 uVar30;
  undefined8 uVar31;
  uint uVar32;
  ulong uVar33;
  undefined8 uVar34;
  long lVar35;
  long *plVar36;
  int iVar37;
  long lVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  short sVar43;
  ulong *puStack_70;
  undefined8 uStack_68;
  
  uVar33 = param_2[0x16];
  plVar36 = *(long **)(uVar33 + 8);
  plVar16 = plVar36;
  FUN_10975421c(plVar36,&UNK_10f57f7a4);
  if (plVar16 == (long *)0x0) {
    return;
  }
  lVar38 = *(long *)(*plVar16 + 0x28);
  if (lVar38 == 0) {
    return;
  }
  FUN_1097566b0(uVar33,&DAT_10f57f82c,1);
  plVar16 = plVar36;
  FUN_10975421c(plVar36,&UNK_10f57f83d);
  if (plVar16 == (long *)0x0) {
    uVar34 = 0;
  }
  else {
    uVar34 = *(undefined8 *)(*plVar16 + 0x28);
  }
  plVar16 = plVar36;
  FUN_10975421c(plVar36,&UNK_10f57f846);
  if (plVar16 == (long *)0x0) {
    return;
  }
  if (*(ulong *)(*plVar16 + 0x28) == 0) {
    return;
  }
  param_2[0x73] = *(ulong *)(*plVar16 + 0x28);
  uVar17 = param_2[0x16];
  FUN_1097566b0(uVar17,&DAT_10f57f817,1);
  if ((*(code **)(param_1 + 0x28) != (code *)0x0) &&
     (lVar18 = param_1, (**(code **)(param_1 + 0x28))(param_1,0,0,0), lVar18 != 0)) {
    return;
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar18 = param_1;
  (**(code **)(lVar38 + 8))(param_1,param_2,param_3,param_4,param_5);
  uVar23 = (uint)param_3;
  if ((int)lVar18 == 0) {
    if (param_2[0x23] != 0x4f54544f) {
      return;
    }
    if ((int)uVar23 < 0) {
      return;
    }
    puVar21 = param_2;
    (*(code *)param_2[0x68])(param_2,0x68656164,param_1,0);
    if ((int)puVar21 == 0) {
      lVar35 = param_1;
      (**(code **)(lVar38 + 0x10))(param_1,param_2,param_3,param_4,param_5);
      if ((int)lVar35 != 0) {
        return;
      }
      iVar37 = 0;
    }
    else {
      puVar21 = param_2;
      (**(code **)(lVar38 + 0x40))(param_2,param_1);
      if ((int)puVar21 != 0) {
        return;
      }
      iVar37 = 1;
    }
    puVar21 = param_2;
    (*(code *)param_2[0x68])(param_2,0x43464632,param_1,0);
    if ((uint)puVar21 == 0) {
      bVar7 = true;
      *(undefined1 *)(param_2 + 0x97) = 1;
      uVar31 = 1;
    }
    else {
      if (((uint)puVar21 & 0xff) != 0x8e) {
        return;
      }
      puVar21 = param_2;
      (*(code *)param_2[0x68])(param_2,0x43464620,param_1,0);
      if ((int)puVar21 != 0) {
        return;
      }
      bVar7 = false;
      uVar31 = 0;
    }
  }
  else {
    if ((*(code **)(param_1 + 0x28) != (code *)0x0) &&
       (lVar38 = param_1, (**(code **)(param_1 + 0x28))(param_1,0,0,0), lVar38 != 0)) {
      return;
    }
    bVar7 = false;
    uVar31 = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    iVar37 = 1;
  }
  uVar19 = param_2[0x17];
  uVar20 = uVar19;
  (**(code **)(uVar19 + 8))(uVar19,0x13c0);
  if (uVar20 == 0) {
    return;
  }
  _bzero();
  param_2[0x92] = uVar20;
  FUN_109760d40(plVar36,param_1,param_3,uVar20,param_2,iVar37,uVar31);
  if ((int)plVar36 != 0) {
    return;
  }
  if ((int)uVar23 < 0) {
    *param_2 = (ulong)*(uint *)(uVar20 + 0x20);
    return;
  }
  *(undefined8 *)(uVar20 + 0x1358) = uVar34;
  *(ulong *)(uVar20 + 0x1360) = uVar33;
  *(ulong *)(uVar20 + 0x1368) = uVar17;
  param_2[1] = (ulong)(uVar23 & 0xffff);
  param_2[4] = (ulong)*(uint *)(uVar20 + 0x24);
  if ((*(int *)(uVar20 + 0x74c) == 0xffff) && (uVar33 == 0)) {
    return;
  }
  if (((*(byte *)((long)param_2 + 0x11) & 1) != 0) &&
     (puVar21 = param_2, FUN_109759dd4(param_2,uVar23 >> 0x10), (int)puVar21 != 0)) {
    return;
  }
  if (*(char *)(uVar20 + 0x6c8) == '\0') {
    if (iVar37 == 0) {
      uVar33 = (ulong)(ushort)param_2[0x11];
    }
    else {
      uVar33 = 1000;
    }
    *(ulong *)(uVar20 + 0x6d0) = uVar33;
  }
  uVar17 = *(ulong *)(uVar20 + 0x6c0);
  uVar33 = uVar17;
  if (uVar17 == 0) {
    uVar33 = *(ulong *)(uVar20 + 0x6b8);
  }
  plVar16 = (long *)(uVar20 + 0x6a8);
  uVar1 = -uVar33;
  if (-1 < (long)uVar33) {
    uVar1 = uVar33;
  }
  if (uVar1 == 0x10000) {
    uVar17 = *(ulong *)(uVar20 + 0x6d8);
    uVar33 = *(ulong *)(uVar20 + 0x6e0);
  }
  else {
    lVar38 = *(long *)(uVar20 + 0x6d0);
    if (uVar33 == 0) {
      uVar34 = 0x7fffffff;
      if (lVar38 < 0) {
        uVar34 = 0xffffffff80000001;
      }
      *(undefined8 *)(uVar20 + 0x6d0) = uVar34;
      uVar34 = 0x7fffffff;
      if (*(long *)(uVar20 + 0x6b8) < 0) {
        uVar34 = 0xffffffff80000001;
      }
      *(undefined8 *)(uVar20 + 0x6b8) = uVar34;
      auVar39._0_8_ = -(ulong)(*plVar16 < 0);
      auVar39._8_8_ = -(ulong)(*(long *)(uVar20 + 0x6b0) < 0);
      uVar26 = 0x7fffffff;
      auVar12._8_2_ = 1;
      auVar12._0_8_ = 0xffffffff80000001;
      auVar12._10_6_ = 0xffffffff8000;
      auVar14._8_4_ = 0x7fffffff;
      auVar14._0_8_ = 0x7fffffff;
      auVar14._12_4_ = 0;
      auVar40._8_4_ = 0x7fffffff;
      auVar40._0_8_ = 0x7fffffff;
      auVar40._12_4_ = 0;
      auVar40 = auVar40 ^ (auVar14 ^ auVar12) & auVar39;
      *(long *)(uVar20 + 0x6b0) = auVar40._8_8_;
      *plVar16 = auVar40._0_8_;
      uVar33 = 0x7fffffff;
      if ((long)uVar17 < 0) {
        uVar33 = 0xffffffff80000001;
      }
      uVar17 = 0x7fffffff;
      if (*(long *)(uVar20 + 0x6d8) < 0) {
        uVar17 = 0xffffffff80000001;
      }
      lVar38 = *(long *)(uVar20 + 0x6e0);
    }
    else {
      lVar35 = -lVar38;
      if (-1 < lVar38) {
        lVar35 = lVar38;
      }
      uVar33 = 0;
      if (uVar1 != 0) {
        uVar33 = (lVar35 * 0x10000 + (uVar1 >> 1)) / uVar1;
      }
      uVar26 = -uVar33;
      if (-1 < lVar38) {
        uVar26 = uVar33;
      }
      *(ulong *)(uVar20 + 0x6d0) = uVar26;
      lVar35 = *(long *)(uVar20 + 0x6a8);
      lVar38 = -lVar35;
      if (-1 < lVar35) {
        lVar38 = lVar35;
      }
      uVar33 = 0;
      if (uVar1 != 0) {
        uVar33 = (lVar38 * 0x10000 + (uVar1 >> 1)) / uVar1;
      }
      uVar26 = -uVar33;
      if (-1 < lVar35) {
        uVar26 = uVar33;
      }
      *(ulong *)(uVar20 + 0x6a8) = uVar26;
      lVar35 = *(long *)(uVar20 + 0x6b8);
      lVar38 = -lVar35;
      if (-1 < lVar35) {
        lVar38 = lVar35;
      }
      uVar33 = 0;
      if (uVar1 != 0) {
        uVar33 = (lVar38 * 0x10000 + (uVar1 >> 1)) / uVar1;
      }
      uVar26 = -uVar33;
      if (-1 < lVar35) {
        uVar26 = uVar33;
      }
      *(ulong *)(uVar20 + 0x6b8) = uVar26;
      lVar35 = *(long *)(uVar20 + 0x6b0);
      lVar38 = -lVar35;
      if (-1 < lVar35) {
        lVar38 = lVar35;
      }
      uVar33 = 0;
      if (uVar1 != 0) {
        uVar33 = (lVar38 * 0x10000 + (uVar1 >> 1)) / uVar1;
      }
      uVar26 = -uVar33;
      if (-1 < lVar35) {
        uVar26 = uVar33;
      }
      *(ulong *)(uVar20 + 0x6b0) = uVar26;
      uVar33 = -uVar17;
      if (-1 < (long)uVar17) {
        uVar33 = uVar17;
      }
      uVar26 = 0;
      if (uVar1 != 0) {
        uVar26 = ((uVar1 >> 1) + uVar33 * 0x10000) / uVar1;
      }
      uVar33 = -uVar26;
      if (-1 < (long)uVar17) {
        uVar33 = uVar26;
      }
      lVar35 = *(long *)(uVar20 + 0x6d8);
      lVar38 = -lVar35;
      if (-1 < lVar35) {
        lVar38 = lVar35;
      }
      uVar26 = 0;
      if (uVar1 != 0) {
        uVar26 = (lVar38 * 0x10000 + (uVar1 >> 1)) / uVar1;
      }
      uVar17 = -uVar26;
      if (-1 < lVar35) {
        uVar17 = uVar26;
      }
      lVar38 = *(long *)(uVar20 + 0x6e0);
      lVar35 = -lVar38;
      if (-1 < lVar38) {
        lVar35 = lVar38;
      }
      uVar26 = 0;
      if (uVar1 != 0) {
        uVar26 = (lVar35 * 0x10000 + (uVar1 >> 1)) / uVar1;
      }
    }
    *(ulong *)(uVar20 + 0x6c0) = uVar33;
    uVar33 = -uVar26;
    if (-1 < lVar38) {
      uVar33 = uVar26;
    }
  }
  *(long *)(uVar20 + 0x6d8) = (long)uVar17 >> 0x10;
  *(long *)(uVar20 + 0x6e0) = (long)uVar33 >> 0x10;
  if (*(uint *)(uVar20 + 0xb30) != 0) {
    lVar38 = (ulong)*(uint *)(uVar20 + 0xb30) << 3;
    do {
      lVar35 = *(long *)(uVar20 + 0xb30 + lVar38);
      if (*(char *)(lVar35 + 0x60) == '\0') {
        lVar28 = *plVar16;
        uVar31 = *(undefined8 *)(uVar20 + 0x6c0);
        uVar34 = *(undefined8 *)(uVar20 + 0x6b8);
        *(undefined8 *)(lVar35 + 0x48) = *(undefined8 *)(uVar20 + 0x6b0);
        *(long *)(lVar35 + 0x40) = lVar28;
        *(undefined8 *)(lVar35 + 0x58) = uVar31;
        *(undefined8 *)(lVar35 + 0x50) = uVar34;
        auVar12 = *(undefined1 (*) [16])(uVar20 + 0x6d8);
        *(long *)(lVar35 + 0x78) = auVar12._8_8_;
        *(long *)(lVar35 + 0x70) = auVar12._0_8_;
        *(undefined8 *)(lVar35 + 0x68) = *(undefined8 *)(uVar20 + 0x6d0);
      }
      else if (*(char *)(uVar20 + 0x6c8) != '\0') {
        uVar33 = *(ulong *)(uVar20 + 0x6d0);
        if (uVar33 < 2) {
          uVar33 = 1;
        }
        else {
          uVar17 = *(ulong *)(lVar35 + 0x68);
          if (uVar17 <= uVar33) {
            uVar33 = uVar17;
          }
          if (uVar17 < 2) {
            uVar33 = 1;
          }
        }
        FUN_1097533a8(plVar16,lVar35 + 0x40,uVar33);
        FUN_10975356c(lVar35 + 0x70,plVar16,uVar33);
        uVar34 = *(undefined8 *)(lVar35 + 0x68);
        FUN_1097532ac(uVar34,*(undefined8 *)(uVar20 + 0x6d0),uVar33);
        *(undefined8 *)(lVar35 + 0x68) = uVar34;
      }
      uVar17 = *(ulong *)(lVar35 + 0x58);
      uVar33 = uVar17;
      if (uVar17 == 0) {
        uVar33 = *(ulong *)(lVar35 + 0x50);
      }
      uVar1 = -uVar33;
      if (-1 < (long)uVar33) {
        uVar1 = uVar33;
      }
      if (uVar1 == 0x10000) {
        uVar17 = *(ulong *)(lVar35 + 0x70);
        uVar33 = *(ulong *)(lVar35 + 0x78);
      }
      else {
        lVar28 = *(long *)(lVar35 + 0x68);
        if (uVar33 == 0) {
          uVar34 = 0x7fffffff;
          if (lVar28 < 0) {
            uVar34 = 0xffffffff80000001;
          }
          *(undefined8 *)(lVar35 + 0x68) = uVar34;
          uVar34 = 0x7fffffff;
          if (*(long *)(lVar35 + 0x50) < 0) {
            uVar34 = 0xffffffff80000001;
          }
          *(undefined8 *)(lVar35 + 0x50) = uVar34;
          auVar41._0_8_ = -(ulong)(*(long *)(lVar35 + 0x40) < 0);
          auVar41._8_8_ = -(ulong)(*(long *)(lVar35 + 0x48) < 0);
          auVar13._8_4_ = 0x80000001;
          auVar13._0_8_ = 0xffffffff80000001;
          auVar11._8_2_ = 0xffff;
          auVar11._0_8_ = 0x7fffffff;
          auVar11._10_6_ = 0x7fff;
          auVar13._12_4_ = 0xffffffff;
          auVar42._8_2_ = 0xffff;
          auVar42._0_8_ = 0x7fffffff;
          auVar42._10_6_ = 0x7fff;
          auVar42 = auVar42 ^ (auVar11 ^ auVar13) & auVar41;
          *(long *)(lVar35 + 0x48) = auVar42._8_8_;
          *(long *)(lVar35 + 0x40) = auVar42._0_8_;
          uVar33 = 0x7fffffff;
          if ((long)uVar17 < 0) {
            uVar33 = 0xffffffff80000001;
          }
          lVar28 = *(long *)(lVar35 + 0x78);
          uVar17 = 0x7fffffff;
          if (*(long *)(lVar35 + 0x70) < 0) {
            uVar17 = 0xffffffff80000001;
          }
          uVar26 = 0x7fffffff;
        }
        else {
          lVar29 = -lVar28;
          if (-1 < lVar28) {
            lVar29 = lVar28;
          }
          uVar33 = 0;
          if (uVar1 != 0) {
            uVar33 = (lVar29 * 0x10000 + (uVar1 >> 1)) / uVar1;
          }
          uVar26 = -uVar33;
          if (-1 < lVar28) {
            uVar26 = uVar33;
          }
          *(ulong *)(lVar35 + 0x68) = uVar26;
          lVar29 = *(long *)(lVar35 + 0x40);
          lVar8 = *(long *)(lVar35 + 0x48);
          lVar28 = -lVar29;
          if (-1 < lVar29) {
            lVar28 = lVar29;
          }
          uVar33 = 0;
          if (uVar1 != 0) {
            uVar33 = (lVar28 * 0x10000 + (uVar1 >> 1)) / uVar1;
          }
          uVar26 = -uVar33;
          if (-1 < lVar29) {
            uVar26 = uVar33;
          }
          lVar29 = *(long *)(lVar35 + 0x50);
          lVar28 = -lVar29;
          if (-1 < lVar29) {
            lVar28 = lVar29;
          }
          uVar33 = 0;
          if (uVar1 != 0) {
            uVar33 = (lVar28 * 0x10000 + (uVar1 >> 1)) / uVar1;
          }
          uVar2 = -uVar33;
          if (-1 < lVar29) {
            uVar2 = uVar33;
          }
          lVar28 = -lVar8;
          if (-1 < lVar8) {
            lVar28 = lVar8;
          }
          uVar33 = 0;
          if (uVar1 != 0) {
            uVar33 = (lVar28 * 0x10000 + (uVar1 >> 1)) / uVar1;
          }
          uVar3 = -uVar33;
          if (-1 < lVar8) {
            uVar3 = uVar33;
          }
          *(ulong *)(lVar35 + 0x40) = uVar26;
          *(ulong *)(lVar35 + 0x48) = uVar3;
          *(ulong *)(lVar35 + 0x50) = uVar2;
          uVar33 = -uVar17;
          if (-1 < (long)uVar17) {
            uVar33 = uVar17;
          }
          uVar26 = 0;
          if (uVar1 != 0) {
            uVar26 = ((uVar1 >> 1) + uVar33 * 0x10000) / uVar1;
          }
          uVar33 = -uVar26;
          if (-1 < (long)uVar17) {
            uVar33 = uVar26;
          }
          lVar8 = *(long *)(lVar35 + 0x70);
          lVar28 = *(long *)(lVar35 + 0x78);
          lVar29 = -lVar8;
          if (-1 < lVar8) {
            lVar29 = lVar8;
          }
          uVar26 = 0;
          if (uVar1 != 0) {
            uVar26 = (lVar29 * 0x10000 + (uVar1 >> 1)) / uVar1;
          }
          uVar17 = -uVar26;
          if (-1 < lVar8) {
            uVar17 = uVar26;
          }
          lVar29 = -lVar28;
          if (-1 < lVar28) {
            lVar29 = lVar28;
          }
          uVar26 = 0;
          if (uVar1 != 0) {
            uVar26 = (lVar29 * 0x10000 + (uVar1 >> 1)) / uVar1;
          }
        }
        *(ulong *)(lVar35 + 0x58) = uVar33;
        uVar33 = -uVar26;
        if (-1 < lVar28) {
          uVar33 = uVar26;
        }
      }
      *(long *)(lVar35 + 0x70) = (long)uVar17 >> 0x10;
      *(long *)(lVar35 + 0x78) = (long)uVar33 >> 0x10;
      lVar38 = lVar38 + -8;
    } while (lVar38 != 0);
  }
  iVar24 = *(int *)(uVar20 + 0x74c);
  if (iVar37 == 0) goto LAB_10975d4e8;
  *param_2 = (ulong)*(uint *)(uVar20 + 0x20);
  if (iVar24 == 0xffff) {
    uVar32 = *(uint *)(uVar20 + 0x54c);
  }
  else {
    uVar32 = *(int *)(uVar20 + 0x530) + 1;
  }
  param_2[4] = (ulong)uVar32;
  auVar12 = *(undefined1 (*) [16])(uVar20 + 0x6f0);
  param_2[0xe] = auVar12._8_8_ >> 0x10;
  param_2[0xd] = auVar12._0_8_ >> 0x10;
  lVar38 = *(long *)(uVar20 + 0x700) + 0xffff;
  lVar35 = *(long *)(uVar20 + 0x708) + 0xffff;
  sVar43 = (short)((ulong)lVar35 >> 0x10);
  param_2[0x10] = CONCAT62((int6)(int)((ulong)lVar35 >> 0x20),sVar43);
  param_2[0xf] = CONCAT62((int6)(int)((ulong)lVar38 >> 0x20),(short)((ulong)lVar38 >> 0x10));
  uVar32 = (uint)*(undefined8 *)(uVar20 + 0x6d0);
  *(short *)(param_2 + 0x11) = (short)*(undefined8 *)(uVar20 + 0x6d0);
  uVar10 = ((uVar32 & 0xffff) * 2 + (uVar32 & 0xffff)) * 4;
  *(short *)((long)param_2 + 0x8a) = sVar43;
  *(short *)((long)param_2 + 0x8c) = auVar12._10_2_;
  uVar32 = (int)sVar43 - (int)auVar12._10_2_;
  if ((int)uVar32 <= (int)(short)((ulong)uVar10 * 0x1999999a >> 0x20)) {
    uVar32 = uVar10 / 10;
  }
  *(short *)((long)param_2 + 0x8e) = (short)uVar32;
  *(short *)((long)param_2 + 0x94) = (short)((ulong)*(undefined8 *)(uVar20 + 0x690) >> 0x10);
  *(short *)((long)param_2 + 0x96) = (short)((ulong)*(undefined8 *)(uVar20 + 0x698) >> 0x10);
  uVar32 = *(uint *)(uVar20 + 0x678);
  uVar33 = (ulong)uVar32;
  if ((uVar32 != 0) && (uVar32 != 0xffff)) {
    if (uVar32 < 0x187) {
      if (*(long *)(uVar20 + 0x1360) != 0) {
        (**(code **)(*(long *)(uVar20 + 0x1360) + 0x28))();
        goto LAB_10975d2cc;
      }
    }
    else if (uVar32 - 0x187 < *(uint *)(uVar20 + 0x648)) {
      uVar33 = *(ulong *)(*(long *)(uVar20 + 0x650) + (ulong)(uVar32 - 0x187) * 8);
LAB_10975d2cc:
      if (uVar33 != 0) {
        uVar17 = uVar19;
        FUN_109758038(uVar19,uVar33,&puStack_70);
        param_2[5] = uVar17;
      }
    }
  }
  pcVar25 = (char *)param_2[5];
  if (pcVar25 == (char *)0x0) {
    uVar33 = uVar20;
    FUN_1097612e4(uVar20,(ulong)(uVar23 & 0xffff));
    param_2[5] = uVar33;
    if (uVar33 != 0) {
      FUN_1097613c8();
      pcVar25 = (char *)param_2[5];
      if (pcVar25 != (char *)0x0) goto LAB_10975d2e8;
    }
    uVar23 = *(uint *)(uVar20 + 0x798);
    uVar33 = (ulong)uVar23;
    if (uVar23 != 0xffff) {
      if (uVar23 < 0x187) {
        if (*(long *)(uVar20 + 0x1360) != 0) {
          (**(code **)(*(long *)(uVar20 + 0x1360) + 0x28))();
          goto LAB_10975d3f4;
        }
      }
      else if (uVar23 - 0x187 < *(uint *)(uVar20 + 0x648)) {
        uVar33 = *(ulong *)(*(long *)(uVar20 + 0x650) + (ulong)(uVar23 - 0x187) * 8);
LAB_10975d3f4:
        if (uVar33 != 0) {
          uVar17 = uVar19;
          FUN_109758038(uVar19,uVar33,&puStack_70);
          param_2[5] = uVar17;
        }
      }
    }
  }
  else {
LAB_10975d2e8:
    uVar23 = *(uint *)(uVar20 + 0x674);
    pcVar22 = (char *)(ulong)uVar23;
    if (uVar23 != 0xffff) {
      if (uVar23 < 0x187) {
        if (*(long *)(uVar20 + 0x1360) != 0) {
          (**(code **)(*(long *)(uVar20 + 0x1360) + 0x28))();
          pcVar25 = (char *)param_2[5];
          goto LAB_10975d380;
        }
      }
      else if (uVar23 - 0x187 < *(uint *)(uVar20 + 0x648)) {
        pcVar22 = *(char **)(*(long *)(uVar20 + 0x650) + (ulong)(uVar23 - 0x187) * 8);
LAB_10975d380:
        if ((pcVar22 != (char *)0x0) && (pcVar25 != (char *)0x0)) {
          cVar9 = *pcVar22;
          while (cVar9 != '\0') {
            cVar27 = *pcVar25;
            if (cVar9 == cVar27) {
LAB_10975d39c:
              pcVar25 = pcVar25 + 1;
            }
            else if ((cVar9 != ' ') && (cVar9 != '-')) {
              do {
                if ((cVar27 != ' ') && (cVar27 != '-')) {
                  if ((cVar27 != '\0') ||
                     (uVar33 = uVar19, FUN_109758038(uVar19,pcVar22,&puStack_70), uVar33 == 0))
                  goto LAB_10975d434;
                  FUN_1097614f4(param_2[5],uVar33);
                  goto LAB_10975d44c;
                }
                pcVar25 = pcVar25 + 1;
                cVar27 = *pcVar25;
              } while (cVar9 != cVar27);
              goto LAB_10975d39c;
            }
            pcVar22 = pcVar22 + 1;
            cVar9 = *pcVar22;
          }
        }
      }
    }
  }
LAB_10975d434:
  FUN_109758038(uVar19,&DAT_10f42ad23,&puStack_70);
  uVar33 = uVar19;
LAB_10975d44c:
  param_2[6] = uVar33;
  uVar23 = 0x819;
  if ((int)lVar18 != 0) {
    uVar23 = 0x811;
  }
  if (*(char *)(uVar20 + 0x680) != '\0') {
    uVar23 = uVar23 | 4;
  }
  param_2[2] = param_2[2] | (ulong)uVar23;
  uVar32 = (uint)(*(long *)(uVar20 + 0x688) != 0);
  uVar23 = *(uint *)(uVar20 + 0x67c);
  uVar33 = (ulong)uVar23;
  if (uVar23 != 0xffff) {
    if (uVar23 < 0x187) {
      if (*(long *)(uVar20 + 0x1360) != 0) {
        (**(code **)(*(long *)(uVar20 + 0x1360) + 0x28))();
        goto LAB_10975d688;
      }
    }
    else if (uVar23 - 0x187 < *(uint *)(uVar20 + 0x648)) {
      uVar33 = *(ulong *)(*(long *)(uVar20 + 0x650) + (ulong)(uVar23 - 0x187) * 8);
LAB_10975d688:
      if ((uVar33 != 0) &&
         ((uVar17 = uVar33, _strcmp(uVar33,&DAT_10f42ad32), (int)uVar17 == 0 ||
          (_strcmp(uVar33,&UNK_10f57f84c), (int)uVar33 == 0)))) {
        uVar32 = uVar32 | 2;
      }
    }
  }
  if (((uVar32 >> 1 == 0) && (uVar33 = param_2[6], uVar33 != 0)) &&
     ((uVar17 = uVar33, _strncmp(uVar33,&DAT_10f42ad32,4), (int)uVar17 == 0 ||
      (_strncmp(uVar33,&UNK_10f57f84c,5), (int)uVar33 == 0)))) {
    uVar32 = uVar32 | 2;
  }
  param_2[3] = (ulong)uVar32;
  iVar24 = *(int *)(uVar20 + 0x74c);
LAB_10975d4e8:
  if (iVar24 != 0xffff) {
    bVar7 = true;
  }
  if (bVar7) {
    if ((iVar37 != 0) && (iVar24 != 0xffff)) {
      param_2[2] = param_2[2] | 0x1000;
      iVar37 = 1;
    }
  }
  else {
    param_2[2] = param_2[2] | 0x200;
  }
  uVar23 = (uint)param_2[9];
  uVar33 = (ulong)uVar23;
  if (0 < (int)uVar23) {
    plVar16 = (long *)param_2[10];
    do {
      sVar43 = *(short *)(*plVar16 + 0xc);
      if (sVar43 == 3) {
        if (*(short *)(*plVar16 + 0xe) == 1) goto LAB_10975d5e0;
      }
      else if (sVar43 == 0) goto LAB_10975d5e0;
      uVar33 = uVar33 - 1;
      plVar16 = plVar16 + 1;
    } while (uVar33 != 0);
  }
  iVar4 = 0;
  if (iVar24 != 0xffff) {
    iVar4 = iVar37;
  }
  if (iVar4 == 0) {
    uStack_68 = 0x10003756e6963;
    uVar32 = 0x10b0b540;
    puStack_70 = param_2;
    FUN_1097559dc(&UNK_110b0b540,0,&puStack_70,0);
    if (((uVar32 == 0) || ((uVar32 & 0xff) == 0xa3)) || ((uVar32 & 0xff) == 7)) {
      if ((param_2[0x15] == 0) && (uVar23 != (uint)param_2[9])) {
        param_2[0x15] = *(ulong *)(param_2[10] + (long)(int)uVar23 * 8);
      }
LAB_10975d5e0:
      if (*(int *)(uVar20 + 0x108) != 0) {
        uVar30 = 2;
        uVar5 = 0x41444243;
        if (*(long *)(uVar20 + 0x100) == 1) {
          uVar30 = 1;
          uVar5 = 0x41444245;
        }
        uVar6 = 0x41444f42;
        uVar15 = 0;
        if (*(long *)(uVar20 + 0x100) != 0) {
          uVar6 = uVar5;
          uVar15 = uVar30;
        }
        uStack_68 = CONCAT26(uVar15,0x700000000);
        uStack_68 = CONCAT44(uStack_68._4_4_,uVar6);
        puStack_70 = param_2;
        FUN_1097559dc(&UNK_110b0b4f0,0,&puStack_70,0);
      }
    }
  }
  return;
}



/* Entry: 10975d6bc; end: 10975d903;  */

void FUN_10975d6bc(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 0xb8);
    if (*(long *)(param_1 + 0x370) != 0) {
      (**(code **)(*(long *)(param_1 + 0x370) + 0x18))(param_1);
    }
    lVar5 = *(long *)(param_1 + 0x490);
    if (lVar5 != 0) {
      lVar3 = *(long *)(lVar5 + 0x10);
      FUN_109762464(lVar5 + 0xb8);
      FUN_109762464(lVar5 + 0x578);
      FUN_109762464(lVar5 + 0x38);
      FUN_109762464(lVar5 + 0x538);
      if (*(int *)(lVar5 + 0xb30) != 0) {
        uVar6 = 0;
        plVar1 = (long *)(lVar5 + 0xb38);
        do {
          FUN_109762dd0(lVar3,plVar1[uVar6]);
          uVar6 = uVar6 + 1;
        } while (uVar6 < *(uint *)(lVar5 + 0xb30));
        if (*plVar1 != 0) {
          (**(code **)(lVar3 + 0x10))(lVar3);
        }
        *plVar1 = 0;
      }
      *(undefined4 *)(lVar5 + 0xf8) = 0;
      *(undefined8 *)(lVar5 + 0x100) = 0;
      *(undefined4 *)(lVar5 + 0x108) = 0;
      lVar4 = *(long *)(*(long *)(lVar5 + 8) + 0x38);
      if (*(long *)(lVar5 + 0x528) != 0) {
        (**(code **)(lVar4 + 0x10))(lVar4);
      }
      *(undefined8 *)(lVar5 + 0x528) = 0;
      *(undefined4 *)(lVar5 + 0x530) = 0;
      if (*(long *)(lVar5 + 0x520) != 0) {
        (**(code **)(lVar4 + 0x10))(lVar4);
      }
      *(undefined4 *)(lVar5 + 0x510) = 0;
      *(undefined8 *)(lVar5 + 0x520) = 0;
      *(undefined8 *)(lVar5 + 0x518) = 0;
      FUN_109762c38(lVar5 + 0x1398,lVar3);
      FUN_109762dd0(lVar3,lVar5 + 0x668);
      if (*(long *)(lVar5 + 0x1340) != 0) {
        lVar4 = *(long *)(lVar5 + 8);
        if ((lVar4 != 0) && (*(long *)(lVar4 + 0x28) != 0)) {
          (**(code **)(*(long *)(lVar4 + 0x38) + 0x10))();
        }
        *(undefined8 *)(lVar5 + 0x1340) = 0;
      }
      *(undefined4 *)(lVar5 + 0x1348) = 0;
      *(undefined1 *)(lVar5 + 0x1338) = 0;
      *(undefined4 *)(lVar5 + 0x133c) = 0;
      if (*(long *)(lVar5 + 0x1370) != 0) {
        (**(code **)(lVar3 + 0x10))(lVar3);
      }
      *(undefined8 *)(lVar5 + 0x1370) = 0;
      if (*(long *)(lVar5 + 0x638) != 0) {
        (**(code **)(lVar3 + 0x10))(lVar3);
      }
      *(undefined8 *)(lVar5 + 0x638) = 0;
      if (*(long *)(lVar5 + 0x640) != 0) {
        (**(code **)(lVar3 + 0x10))(lVar3);
      }
      *(undefined8 *)(lVar5 + 0x640) = 0;
      if (*(long *)(lVar5 + 0x650) != 0) {
        (**(code **)(lVar3 + 0x10))(lVar3);
      }
      *(undefined8 *)(lVar5 + 0x650) = 0;
      if (*(long *)(lVar5 + 0x658) != 0) {
        (**(code **)(lVar3 + 0x10))(lVar3);
      }
      *(undefined8 *)(lVar5 + 0x658) = 0;
      if (*(code **)(lVar5 + 0x1390) != (code *)0x0) {
        (**(code **)(lVar5 + 0x1390))(*(undefined8 *)(lVar5 + 5000));
        if (*(long *)(lVar5 + 5000) != 0) {
          (**(code **)(lVar3 + 0x10))(lVar3);
        }
        *(undefined8 *)(lVar5 + 5000) = 0;
      }
      if (*(long *)(lVar5 + 0x13b8) != 0) {
        (**(code **)(lVar3 + 0x10))(lVar3);
      }
      *(undefined8 *)(lVar5 + 0x13b8) = 0;
      if (*(long *)(param_1 + 0x490) != 0) {
        (**(code **)(lVar2 + 0x10))(lVar2);
      }
      *(undefined8 *)(param_1 + 0x490) = 0;
    }
    if (*(long *)(param_1 + 0x380) != 0) {
      (**(code **)(*(long *)(param_1 + 0x380) + 0x90))(param_1);
    }
    *(undefined8 *)(param_1 + 0x4c0) = 0;
  }
  return;
}



/* Entry: 10975d904; end: 10975da8f;  */

long * FUN_10975d904(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_140 [224];
  
  puVar1 = (undefined8 *)**(long **)(*param_1 + 0x490);
  puVar4 = (undefined8 *)(*(long **)(*param_1 + 0x490))[0x26b];
  FUN_10975421c(puVar1,&UNK_10f57f83d);
  if (((puVar1 == (undefined8 *)0x0 || puVar4 == (undefined8 *)0x0) ||
      (pcVar3 = (code *)*puVar4, pcVar3 == (code *)0x0)) ||
     ((*pcVar3)(), puVar1 == (undefined8 *)0x0)) {
    plVar6 = (long *)0x0;
  }
  else {
    plVar5 = *(long **)(*param_1 + 0xb8);
    lVar7 = *(long *)(*param_1 + 0x490);
    plVar2 = plVar5;
    (*(code *)plVar5[1])(plVar5,0x808);
    if (plVar2 == (long *)0x0) {
      plVar6 = (long *)0x40;
    }
    else {
      _bzero();
      FUN_109760be8(lVar7 + 0x668,auStack_140);
      plVar6 = plVar5;
      (*(code *)*puVar1)(plVar5,auStack_140,plVar2);
      if ((int)plVar6 == 0) {
        lVar8 = (ulong)*(uint *)(lVar7 + 0xb30) << 3;
        do {
          if (lVar8 == 0) {
            *(long **)param_1[10] = plVar2;
            param_1[0xb] = 0xffffffff;
            return (long *)0x0;
          }
          FUN_109760be8(*(undefined8 *)(lVar7 + 0xb30 + lVar8),auStack_140);
          plVar6 = plVar5;
          (*(code *)*puVar1)(plVar5,auStack_140,(long)plVar2 + lVar8);
          lVar8 = lVar8 + -8;
        } while ((int)plVar6 == 0);
      }
      if (*(uint *)(lVar7 + 0xb30) != 0) {
        lVar7 = (ulong)*(uint *)(lVar7 + 0xb30) << 3;
        do {
          if (*(long *)((long)plVar2 + lVar7) != 0) {
            (*(code *)plVar5[2])(plVar5);
          }
          *(undefined8 *)((long)plVar2 + lVar7) = 0;
          lVar7 = lVar7 + -8;
        } while (lVar7 != 0);
      }
      if (*plVar2 != 0) {
        (*(code *)plVar5[2])(plVar5);
      }
      *plVar2 = 0;
      (*(code *)plVar5[2])(plVar5,plVar2);
    }
  }
  return plVar6;
}



/* Entry: 10975da90; end: 10975db43;  */

void FUN_10975da90(long *param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  
  puVar3 = *(undefined8 **)param_1[10];
  if (puVar3 != (undefined8 *)0x0) {
    lVar4 = *(long *)(*param_1 + 0xb8);
    plVar6 = *(long **)(*param_1 + 0x490);
    lVar1 = *plVar6;
    puVar5 = (undefined8 *)plVar6[0x26b];
    FUN_10975421c(lVar1,&UNK_10f57f83d);
    if (((lVar1 != 0 && puVar5 != (undefined8 *)0x0) &&
        (pcVar2 = (code *)*puVar5, pcVar2 != (code *)0x0)) && ((*pcVar2)(), lVar1 != 0)) {
      (**(code **)(lVar1 + 0x10))(*puVar3);
      if (*(uint *)(plVar6 + 0x166) != 0) {
        lVar7 = (ulong)*(uint *)(plVar6 + 0x166) << 3;
        do {
          (**(code **)(lVar1 + 0x10))(*(undefined8 *)((long)puVar3 + lVar7));
          lVar7 = lVar7 + -8;
        } while (lVar7 != 0);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010975db30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar4 + 0x10))(lVar4,puVar3);
    return;
  }
  return;
}



/* Entry: 10975db44; end: 10975db97;  */

undefined8 FUN_10975db44(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1[1] + 0x490) + 0x1358);
  if (lVar2 != 0) {
    lVar1 = *param_1;
    FUN_10975421c(lVar1,&UNK_10f57f83d);
    if (lVar1 != 0) {
      (**(code **)(lVar2 + 0x10))();
      *(long *)(param_1[0x25] + 0x40) = lVar1;
    }
  }
  return 0;
}



/* Entry: 10975db98; end: 10975dba7;  */

void FUN_10975db98(long param_1)

{
  if (*(long *)(param_1 + 0x128) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 0x128) + 0x40) = 0;
  }
  return;
}


