/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102d24a5c; end: 102d24bff;  */

long FUN_102d24a5c(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar3 + 0x10))();
  lVar3 = *(long *)(lVar3 + 0x40) + 7;
  puVar2 = (undefined8 *)(lVar3 + param_1 & 0xfffffffffffffff8);
  puVar1 = (undefined8 *)(lVar3 + param_2 & 0xfffffffffffffff8);
  *puVar2 = *puVar1;
  puVar2[1] = puVar1[1];
  func_0x000107c61434();
  return param_1;
}



/* Entry: 102d24c00; end: 102d24cf3;  */

uint * FUN_102d24c00(uint *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  
  lVar8 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar5 = *(uint *)(lVar8 + 0x54);
  uVar2 = uVar5;
  if (uVar5 < 0x80000000) {
    uVar2 = 0x7fffffff;
  }
  if (param_2 == 0) {
    return (uint *)0x0;
  }
  if (uVar2 <= param_2 && param_2 - uVar2 != 0) {
    uVar7 = (*(long *)(lVar8 + 0x40) + 7U & 0xfffffffffffffff8) + 0x10;
    uVar1 = uVar7 & 0xfffffff8;
    uVar6 = (uint)uVar1;
    uVar9 = 2;
    uVar4 = uVar9;
    if (uVar1 == 0) {
      uVar4 = (param_2 - uVar2) + 1;
    }
    if (0xffff < uVar4) {
      uVar9 = 4;
    }
    if (uVar4 < 0x100) {
      uVar9 = 1;
    }
    uVar3 = 0;
    if (1 < uVar4) {
      uVar3 = uVar9;
    }
    if (uVar3 < 2) {
      if ((uVar3 != 0) &&
         (uVar9 = (uint)*(byte *)((long)param_1 + uVar7), *(byte *)((long)param_1 + uVar7) != 0))
      goto LAB_102d24c90;
    }
    else if (uVar3 == 2) {
      uVar9 = (uint)*(ushort *)((long)param_1 + uVar7);
      if (*(ushort *)((long)param_1 + uVar7) != 0) {
LAB_102d24c90:
        uVar9 = uVar9 - 1;
        if (uVar1 != 0) {
          uVar9 = 0;
          uVar6 = *param_1;
        }
        return (uint *)(ulong)(uVar2 + (uVar6 | uVar9) + 1);
      }
    }
    else {
      uVar9 = *(uint *)((long)param_1 + uVar7);
      if (uVar9 != 0) goto LAB_102d24c90;
    }
  }
  if (0x7ffffffe < uVar5) {
                    /* WARNING: Could not recover jumptable at 0x000102d24ccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar8 + 0x30))();
    return param_1;
  }
  uVar7 = *(ulong *)(((long)param_1 + *(long *)(lVar8 + 0x40) + 7 & 0xffffffffffffff8U) + 8);
  if (0xfffffffe < uVar7) {
    uVar7 = 0xffffffff;
  }
  return (uint *)(ulong)((int)uVar7 + 1);
}



/* Entry: 102d24cf4; end: 102d24e53;  */

void FUN_102d24cf4(int *param_1,uint param_2,uint param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulong *puVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  
  lVar8 = *(long *)(*(long *)(param_4 + 0x10) + -8);
  uVar5 = *(uint *)(lVar8 + 0x54);
  uVar2 = uVar5;
  if (uVar5 < 0x80000000) {
    uVar2 = 0x7fffffff;
  }
  lVar9 = *(long *)(lVar8 + 0x40);
  lVar1 = (lVar9 + 7U & 0xfffffffffffffff8) + 0x10;
  uVar10 = 2;
  uVar4 = uVar10;
  if ((int)lVar1 == 0) {
    uVar4 = (param_3 - uVar2) + 1;
  }
  if (0xffff < uVar4) {
    uVar10 = 4;
  }
  if (uVar4 < 0x100) {
    uVar10 = 1;
  }
  uVar3 = 0;
  if (1 < uVar4) {
    uVar3 = uVar10;
  }
  uVar10 = 0;
  if (uVar2 < param_3) {
    uVar10 = uVar3;
  }
  iVar6 = param_2 - uVar2;
  if (param_2 < uVar2 || iVar6 == 0) {
    if (uVar10 < 2) {
      if (uVar10 != 0) {
        *(undefined1 *)((long)param_1 + lVar1) = 0;
      }
    }
    else if (uVar10 == 2) {
      *(undefined2 *)((long)param_1 + lVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar1) = 0;
    }
    if (param_2 != 0) {
      if (0x7ffffffe < uVar5) {
                    /* WARNING: Could not recover jumptable at 0x000102d24e04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar8 + 0x38))();
        return;
      }
      puVar7 = (ulong *)((long)param_1 + lVar9 + 7 & 0xfffffffffffffff8);
      if ((int)param_2 < 0) {
        *puVar7 = (ulong)(param_2 & 0x7fffffff);
        puVar7[1] = 0;
      }
      else {
        puVar7[1] = (ulong)(param_2 - 1);
      }
    }
  }
  else {
    if ((int)lVar1 != 0) {
      iVar6 = 1;
      func_0x000107c60ee4(param_1,lVar1);
      *param_1 = param_2 + ~uVar2;
    }
    if (uVar10 < 2) {
      if (uVar10 != 0) {
        *(char *)((long)param_1 + lVar1) = (char)iVar6;
      }
    }
    else if (uVar10 == 2) {
      *(short *)((long)param_1 + lVar1) = (short)iVar6;
    }
    else {
      *(int *)((long)param_1 + lVar1) = iVar6;
    }
  }
  return;
}



/* Entry: 102d24e54; end: 102d24eeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d24e54(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f0dfa8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102d24eec; end: 102d24f4b; -[AdPlaybackEventService init] */

void FUN_102d24eec(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdPlaybackEventServices.AdPlaybackEventService",0x2e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d24f18);
  (*pcVar1)();
}



/* Entry: 102d24f4c; end: 102d24f5b; -[AdPlaybackEventService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d24f4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f0dfa8));
  return;
}



/* Entry: 102d24f5c; end: 102d24f7b;  */

void FUN_102d24f5c(void)

{
  func_0x000107c61168(&PTR_PTR_1128a1418);
  return;
}



/* Entry: 102d24f7c; end: 102d24f8f;  */

void FUN_102d24f7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e729c90);
  return;
}



/* Entry: 102d24f90; end: 102d25017;  */

void FUN_102d24f90(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_30;
  long lStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  func_0x000107c6143c();
  if (uVar2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    lVar1 = 0x13f;
    FUN_102d25de8();
    if (uVar2 < 0x40) {
      lStack_28 = *(long *)(lVar1 + -8) + 0x40;
      func_0x000107c6153c(param_1,0,2,&lStack_30,param_1 + 0x18);
    }
  }
  return;
}



/* Entry: 102d25018; end: 102d25163;  */

long * FUN_102d25018(long *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  lVar9 = *(long *)(param_3 + 0x10);
  lVar13 = *(long *)(lVar9 + -8);
  lVar14 = *(long *)(lVar13 + 0x40);
  lVar4 = 0;
  func_0x000107c5eec8();
  lVar12 = *(long *)(lVar4 + -8);
  uVar3 = *(uint *)(lVar12 + 0x50);
  lVar5 = 0;
  func_0x000107c5eea4();
  lVar11 = *(long *)(lVar5 + -8);
  uVar6 = (ulong)*(uint *)(lVar11 + 0x50) & 0xff;
  uVar3 = *(uint *)(lVar11 + 0x50) | uVar3;
  uVar7 = (ulong)(uVar3 & 0xff);
  uVar8 = lVar14 + uVar7;
  uVar1 = *(long *)(lVar12 + 0x40) + uVar6;
  uVar3 = *(uint *)(lVar13 + 0x50) | uVar3;
  uVar2 = uVar3 & 0xff;
  if ((uVar2 < 8 && (uVar3 & 0x100000) == 0) &&
      (uVar1 & (uVar6 ^ 0xffffffffffffffff)) + *(long *)(lVar11 + 0x40) +
      (uVar8 & (uVar7 ^ 0xffffffffffffffff)) < 0x19) {
    (**(code **)(lVar13 + 0x10))(param_1,param_2,lVar9);
    uVar10 = uVar8 + (long)param_1 & ~uVar7;
    uVar8 = uVar8 + (long)param_2 & ~uVar7;
    (**(code **)(lVar12 + 0x10))(uVar10,uVar8,lVar4);
    (**(code **)(lVar11 + 0x10))(uVar1 + uVar10 & ~uVar6,uVar1 + uVar8 & ~uVar6,lVar5);
  }
  else {
    lVar4 = *param_2;
    *param_1 = lVar4;
    param_1 = (long *)(lVar4 + ((ulong)uVar2 + 0x10 & ((ulong)uVar2 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 102d25164; end: 102d25213;  */

void FUN_102d25164(long param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  lVar6 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  (**(code **)(lVar6 + 8))();
  lVar4 = *(long *)(lVar6 + 0x40);
  lVar6 = 0;
  func_0x000107c5eec8();
  lVar7 = *(long *)(lVar6 + -8);
  bVar2 = *(byte *)(lVar7 + 0x50);
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar8 = *(long *)(lVar3 + -8);
  uVar1 = *(uint *)(lVar8 + 0x50);
  uVar9 = (ulong)uVar1 & 0xff;
  uVar5 = (ulong)(uVar1 & 0xff | (uint)bVar2);
  uVar5 = lVar4 + param_1 + uVar5 & (uVar5 ^ 0xffffffffffffffff);
  (**(code **)(lVar7 + 8))(uVar5,lVar6);
                    /* WARNING: Could not recover jumptable at 0x000102d25210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar8 + 8))
            (*(long *)(lVar7 + 0x40) + uVar9 + uVar5 & (uVar9 ^ 0xffffffffffffffff),lVar3);
  return;
}



/* Entry: 102d25214; end: 102d25573;  */

long FUN_102d25214(long param_1,long param_2,long param_3)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  
  lVar6 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar6 + 0x10))();
  lVar6 = *(long *)(lVar6 + 0x40);
  lVar3 = 0;
  func_0x000107c5eec8();
  lVar8 = *(long *)(lVar3 + -8);
  bVar2 = *(byte *)(lVar8 + 0x50);
  lVar4 = 0;
  func_0x000107c5eea4();
  lVar9 = *(long *)(lVar4 + -8);
  uVar1 = *(uint *)(lVar9 + 0x50);
  uVar10 = (ulong)uVar1 & 0xff;
  uVar5 = (ulong)(uVar1 & 0xff | (uint)bVar2);
  lVar6 = lVar6 + uVar5;
  uVar7 = lVar6 + param_1 & (uVar5 ^ 0xffffffffffffffff);
  uVar5 = lVar6 + param_2 & (uVar5 ^ 0xffffffffffffffff);
  (**(code **)(lVar8 + 0x10))(uVar7,uVar5,lVar3);
  lVar6 = *(long *)(lVar8 + 0x40) + uVar10;
  (**(code **)(lVar9 + 0x10))
            (lVar6 + uVar7 & (uVar10 ^ 0xffffffffffffffff),
             lVar6 + uVar5 & (uVar10 ^ 0xffffffffffffffff),lVar4);
  return param_1;
}



/* Entry: 102d25574; end: 102d2576b;  */

uint * FUN_102d25574(uint *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  code *UNRECOVERED_JUMPTABLE;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  
  lVar17 = *(long *)(param_3 + 0x10);
  lVar18 = *(long *)(lVar17 + -8);
  uVar12 = *(uint *)(lVar18 + 0x54);
  lVar9 = 0;
  func_0x000107c5eec8();
  lVar19 = *(long *)(lVar9 + -8);
  uVar6 = *(uint *)(lVar19 + 0x54);
  lVar10 = 0;
  func_0x000107c5eea4();
  lVar11 = *(long *)(lVar10 + -8);
  uVar7 = *(uint *)(lVar11 + 0x54);
  uVar5 = uVar7;
  if (uVar7 <= uVar6) {
    uVar5 = uVar6;
  }
  uVar4 = uVar5;
  if (uVar5 <= uVar12) {
    uVar4 = uVar12;
  }
  if (param_2 == 0) {
    return (uint *)0x0;
  }
  uVar13 = (ulong)*(uint *)(lVar11 + 0x50) & 0xff;
  uVar14 = (ulong)(*(uint *)(lVar11 + 0x50) & 0xff | (uint)*(byte *)(lVar19 + 0x50));
  uVar1 = *(long *)(lVar18 + 0x40) + uVar14;
  uVar2 = *(long *)(lVar19 + 0x40) + uVar13;
  if (param_2 < uVar4 || param_2 - uVar4 == 0) goto LAB_102d25694;
  lVar3 = (uVar2 & (uVar13 ^ 0xffffffffffffffff)) + *(long *)(lVar11 + 0x40) +
          (uVar1 & (uVar14 ^ 0xffffffffffffffff));
  uVar15 = (uint)lVar3;
  uVar8 = uVar15 << 3;
  if (uVar15 < 4) {
    uVar16 = ((param_2 - uVar4) + ~(-1 << (ulong)(uVar8 & 0x1f)) >> (ulong)(uVar8 & 0x1f)) + 1;
    if (0xff < uVar16) {
      if (uVar16 >> 0x10 == 0) {
        uVar16 = (uint)*(ushort *)((long)param_1 + lVar3);
      }
      else {
        uVar16 = *(uint *)((long)param_1 + lVar3);
      }
      goto LAB_102d2562c;
    }
    if (1 < uVar16) goto LAB_102d25628;
  }
  else {
LAB_102d25628:
    uVar16 = (uint)*(byte *)((long)param_1 + lVar3);
LAB_102d2562c:
    if (uVar16 != 0) {
      uVar5 = 0;
      if (uVar15 < 4) {
        uVar5 = uVar16 - 1 << (ulong)(uVar8 & 0x1f);
      }
      if (uVar15 == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = 4;
        if (uVar15 < 4) {
          uVar12 = uVar15;
        }
        if ((int)uVar12 < 3) {
          if (uVar12 == 1) {
            uVar12 = (uint)(byte)*param_1;
          }
          else {
            uVar12 = (uint)(ushort)*param_1;
          }
        }
        else if (uVar12 == 3) {
          uVar12 = (uint)(uint3)*param_1;
        }
        else {
          uVar12 = *param_1;
        }
      }
      return (uint *)(ulong)(uVar4 + (uVar12 | uVar5) + 1);
    }
  }
  if (uVar4 == 0) {
    return (uint *)0x0;
  }
LAB_102d25694:
  if (uVar12 < uVar5) {
    param_1 = (uint *)((ulong)(uVar1 + (long)param_1) & ~uVar14);
    if (uVar6 < uVar7) {
      UNRECOVERED_JUMPTABLE = *(code **)(lVar11 + 0x30);
      param_1 = (uint *)((ulong)(uVar2 + (long)param_1) & ~uVar13);
      lVar17 = lVar10;
      uVar12 = uVar7;
    }
    else {
      UNRECOVERED_JUMPTABLE = *(code **)(lVar19 + 0x30);
      lVar17 = lVar9;
      uVar12 = uVar6;
    }
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(lVar18 + 0x30);
  }
                    /* WARNING: Could not recover jumptable at 0x000102d25700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar12,lVar17);
  return param_1;
}



/* Entry: 102d2576c; end: 102d25d4f;  */

void FUN_102d2576c(uint *param_1,undefined8 param_2,uint param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined2 uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  code *UNRECOVERED_JUMPTABLE;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  long lVar19;
  byte bVar20;
  long lVar21;
  long lVar22;
  
  lVar19 = *(long *)(param_4 + 0x10);
  lVar22 = *(long *)(lVar19 + -8);
  uVar11 = *(uint *)(lVar22 + 0x54);
  lVar9 = 0;
  func_0x000107c5eec8();
  lVar21 = *(long *)(lVar9 + -8);
  uVar7 = *(uint *)(lVar21 + 0x54);
  lVar10 = 0;
  func_0x000107c5eea4();
  lVar12 = *(long *)(lVar10 + -8);
  uVar13 = *(uint *)(lVar12 + 0x54);
  uVar5 = uVar13;
  if (uVar13 <= uVar7) {
    uVar5 = uVar7;
  }
  uVar6 = uVar5;
  if (uVar5 <= uVar11) {
    uVar6 = uVar11;
  }
  uVar14 = (ulong)*(uint *)(lVar12 + 0x50) & 0xff;
  uVar15 = (ulong)(*(uint *)(lVar12 + 0x50) & 0xff | (uint)*(byte *)(lVar21 + 0x50));
  uVar1 = *(long *)(lVar22 + 0x40) + uVar15;
  uVar2 = *(long *)(lVar21 + 0x40) + uVar14;
  lVar3 = (uVar2 & (uVar14 ^ 0xffffffffffffffff)) + *(long *)(lVar12 + 0x40);
  lVar4 = (uVar1 & (uVar15 ^ 0xffffffffffffffff)) + lVar3;
  uVar18 = (uint)lVar4;
  if (param_3 < uVar6 || param_3 - uVar6 == 0) {
    bVar20 = 0;
  }
  else if (uVar18 < 4) {
    uVar16 = ((param_3 - uVar6) + ~(-1 << (ulong)(uVar18 << 3 & 0x1f)) >>
             (ulong)(uVar18 << 3 & 0x1f)) + 1;
    bVar20 = 2;
    if (0xffff < uVar16) {
      bVar20 = 4;
    }
    if (uVar16 < 0x100) {
      bVar20 = 1 < uVar16;
    }
  }
  else {
    bVar20 = 1;
  }
  uVar16 = (uint)param_2;
  if (uVar6 < uVar16) {
    uVar16 = uVar16 + ~uVar6;
    if (uVar18 < 4) {
      iVar17 = (uVar16 >> (ulong)(uVar18 << 3 & 0x1f)) + 1;
      if (uVar18 != 0) {
        uVar5 = uVar16 & (-1 << (ulong)(uVar18 << 3 & 0x1f) ^ 0xffffffffU);
        func_0x000107c60ee4(param_1,lVar4);
        uVar8 = (undefined2)uVar5;
        if (uVar18 == 3) {
          *(undefined2 *)param_1 = uVar8;
          *(char *)((long)param_1 + 2) = (char)(uVar5 >> 0x10);
        }
        else if (uVar18 == 2) {
          *(undefined2 *)param_1 = uVar8;
        }
        else {
          *(char *)param_1 = (char)uVar16;
        }
      }
    }
    else {
      func_0x000107c60ee4(param_1,lVar4);
      *param_1 = uVar16;
      iVar17 = 1;
    }
    if (bVar20 < 2) {
      if (bVar20 != 0) {
        *(char *)((long)param_1 + lVar4) = (char)iVar17;
      }
    }
    else if (bVar20 == 2) {
      *(short *)((long)param_1 + lVar4) = (short)iVar17;
    }
    else {
      *(int *)((long)param_1 + lVar4) = iVar17;
    }
  }
  else {
    if (bVar20 < 2) {
      if (bVar20 != 0) {
        *(undefined1 *)((long)param_1 + lVar4) = 0;
      }
    }
    else if (bVar20 == 2) {
      *(undefined2 *)((long)param_1 + lVar4) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar4) = 0;
    }
    if (uVar16 != 0) {
      if (uVar11 < uVar5) {
        param_1 = (uint *)(uVar1 + (long)param_1 & ~uVar15);
        if (uVar5 < uVar16) {
          uVar11 = (uint)lVar3;
          uVar13 = 0xffffffff;
          if (uVar11 < 4) {
            uVar13 = ~(-1 << (ulong)((uVar11 & 3) << 3));
          }
          if (uVar11 == 0) {
            return;
          }
          uVar13 = uVar13 & (uVar5 - uVar16 ^ 0xffffffff);
          uVar5 = 4;
          if (uVar11 < 4) {
            uVar5 = uVar11;
          }
          func_0x000107c60ee4(param_1);
          if ((int)uVar5 < 3) {
            if (uVar5 == 1) {
              *(char *)param_1 = (char)uVar13;
              return;
            }
            *(short *)param_1 = (short)uVar13;
            return;
          }
          if (uVar5 == 3) {
            *(short *)param_1 = (short)uVar13;
            *(char *)((long)param_1 + 2) = (char)(uVar13 >> 0x10);
            return;
          }
          *param_1 = uVar13;
          return;
        }
        if (uVar7 < uVar13) {
          UNRECOVERED_JUMPTABLE = *(code **)(lVar12 + 0x38);
          param_1 = (uint *)(uVar2 + (long)param_1 & ~uVar14);
          lVar19 = lVar10;
          uVar11 = uVar13;
        }
        else {
          UNRECOVERED_JUMPTABLE = *(code **)(lVar21 + 0x38);
          lVar19 = lVar9;
          uVar11 = uVar7;
        }
      }
      else {
        UNRECOVERED_JUMPTABLE = *(code **)(lVar22 + 0x38);
      }
                    /* WARNING: Could not recover jumptable at 0x000102d259a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,param_2,uVar11,lVar19);
      return;
    }
  }
  return;
}



/* Entry: 102d25d50; end: 102d25de7;  */

undefined8 FUN_102d25d50(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112ece620;
  func_0x0001000285a8(0x112ece620,&UNK_10daf4310);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 102d25de8; end: 102d25e1f;  */

void FUN_102d25de8(undefined8 param_1)

{
  if (lRam0000000112f0e0b0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e729cec);
  return;
}



/* Entry: 102d25e20; end: 102d25f13;  */

long FUN_102d25e20(ulong param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = param_1;
  func_0x000107c5eeb4();
  if ((uVar1 & 1) != 0) {
    lVar2 = param_1 + (long)*(int *)(param_3 + 0x14);
                    /* WARNING: Could not recover jumptable at 0x00010bdb51e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___s10Foundation4DateV2eeoiySbAC_ACtFZ_110350b90)
              (lVar2,param_2 + *(int *)(param_3 + 0x14));
    return lVar2;
  }
  return 0;
}



/* Entry: 102d25f14; end: 102d25f6b;  */

void FUN_102d25f14(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = 0;
  func_0x000107c5eec8();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1,lVar2);
  iVar1 = *(int *)(param_2 + 0x14);
  lVar2 = 0;
  func_0x000107c5eea4();
                    /* WARNING: Could not recover jumptable at 0x000102d25f68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + iVar1,lVar2);
  return;
}



/* Entry: 102d25f6c; end: 102d2613b;  */

long FUN_102d25f6c(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  
  lVar2 = 0;
  func_0x000107c5eec8();
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,param_2,lVar2);
  iVar1 = *(int *)(param_3 + 0x14);
  lVar2 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1 + iVar1,param_2 + iVar1,lVar2);
  return param_1;
}



/* Entry: 102d2613c; end: 102d26153;  */

void FUN_102d2613c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 102d26154; end: 102d26223;  */

void FUN_102d26154(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = 0x13f;
  func_0x000107c5eec8();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    lVar1 = 0x13f;
    func_0x000107c5eea4();
    if (param_2 < 0x40) {
      lStack_28 = *(long *)(lVar1 + -8) + 0x40;
      func_0x000107c6153c(param_1,0x100,2,&lStack_30,param_1 + 0x10);
    }
  }
  return;
}



/* Entry: 102d26224; end: 102d26283; -[AdEventService init] */

void FUN_102d26224(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdEventServices.AdEventService",0x1e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d26250);
  (*pcVar1)();
}



/* Entry: 102d26284; end: 102d26293; -[AdEventService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d26284(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f0e0e8));
  return;
}



/* Entry: 102d26294; end: 102d263cb;  */

undefined1  [16] FUN_102d26294(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 auVar6 [16];
  
  if (param_1 == 0) {
    return ZEXT816(0);
  }
  puVar5 = PTR_PTR_1126bdd28;
  func_0x000107c61168(PTR_PTR_1126bdd28);
  lVar1 = param_1;
  func_0x000107c6148c(param_1,puVar5);
  if (lVar1 != 0) {
    func_0x000107c61174(param_1);
  }
  puVar5 = PTR_PTR_1126bdd30;
  func_0x000107c61168(PTR_PTR_1126bdd30);
  lVar2 = param_1;
  func_0x000107c6148c(param_1,puVar5);
  if (lVar2 == 0) {
    if (lVar1 != 0) goto LAB_102d26350;
  }
  else {
    func_0x000107c61174(param_1);
    if (lVar1 == 0) {
      lVar1 = lVar2;
      func_0x000107c5d260();
      func_0x000107c61180();
      if (lVar1 != 0) {
        lVar4 = lVar1;
        func_0x000107c5faec();
        func_0x000107c61170(lVar1);
        func_0x000107c61170(lVar2);
        goto LAB_102d263b8;
      }
    }
    else {
LAB_102d26350:
      lVar3 = lVar1;
      func_0x000107c5d260();
      func_0x000107c61180();
      if (lVar3 != 0) {
        lVar4 = lVar3;
        func_0x000107c5faec();
        func_0x000107c61170(lVar3);
        func_0x000107c61170(lVar2);
        func_0x000107c61170(lVar1);
        goto LAB_102d263b8;
      }
      func_0x000107c61170(lVar2);
      lVar2 = lVar1;
    }
    func_0x000107c61170(lVar2);
  }
  lVar4 = 0;
  puVar5 = (undefined *)0x0;
LAB_102d263b8:
  auVar6._8_8_ = puVar5;
  auVar6._0_8_ = lVar4;
  return auVar6;
}



/* Entry: 102d263cc; end: 102d26613;  */

/* WARNING: Possible PIC construction at 0x000102d2649c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d264ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d2650c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d2651c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d26580: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d26590: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d265d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d265e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d26594) */
/* WARNING: Removing unreachable block (ram,0x000102d26584) */
/* WARNING: Removing unreachable block (ram,0x000102d26520) */
/* WARNING: Removing unreachable block (ram,0x000102d26524) */
/* WARNING: Removing unreachable block (ram,0x000102d26598) */
/* WARNING: Removing unreachable block (ram,0x000102d26528) */
/* WARNING: Removing unreachable block (ram,0x000102d26510) */
/* WARNING: Removing unreachable block (ram,0x000102d264b0) */
/* WARNING: Removing unreachable block (ram,0x000102d264d0) */
/* WARNING: Removing unreachable block (ram,0x000102d264d4) */
/* WARNING: Removing unreachable block (ram,0x000102d264a0) */
/* WARNING: Removing unreachable block (ram,0x000102d265d4) */
/* WARNING: Removing unreachable block (ram,0x000102d26610) */
/* WARNING: Removing unreachable block (ram,0x000102d265d8) */

void FUN_102d263cc(undefined *param_1,ulong param_2)

{
  undefined8 uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = PTR_PTR_1126b8d98;
  func_0x000107c61168();
  func_0x000107c4e1f4();
  func_0x000107c61180();
  if (puVar3 == (undefined *)0x0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (param_1 == (undefined *)0x0) {
      param_1 = (undefined *)0x0;
    }
    else {
      func_0x000107c3d2d8();
      func_0x000107c61180();
    }
  }
  else {
    func_0x000107c5fadc(0x7265736e695f7369,0xeb00000000646574);
    bVar2 = (param_2 & 1) == 0;
    uVar4 = 0x736579;
    if (bVar2) {
      uVar4 = 0x6f6e;
    }
    uVar1 = 0xe300000000000000;
    if (bVar2) {
      uVar1 = 0xe200000000000000;
    }
    func_0x000107c5fadc(uVar4,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x000107c5e508(puVar3);
    func_0x000107c61180();
    param_1 = puVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102d26614; end: 102d2698f;  */

/* WARNING: Possible PIC construction at 0x000102d266f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d26704: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d26780: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d26798: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d267c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d267f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d26888: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d26898: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d268f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d26908: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d26940: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d26958: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d2690c) */
/* WARNING: Removing unreachable block (ram,0x000102d268fc) */
/* WARNING: Removing unreachable block (ram,0x000102d2689c) */
/* WARNING: Removing unreachable block (ram,0x000102d268b4) */
/* WARNING: Removing unreachable block (ram,0x000102d268c0) */
/* WARNING: Removing unreachable block (ram,0x000102d2688c) */
/* WARNING: Removing unreachable block (ram,0x000102d267cc) */
/* WARNING: Removing unreachable block (ram,0x000102d26988) */
/* WARNING: Removing unreachable block (ram,0x000102d267d0) */
/* WARNING: Removing unreachable block (ram,0x000102d26784) */
/* WARNING: Removing unreachable block (ram,0x000102d26708) */
/* WARNING: Removing unreachable block (ram,0x000102d26730) */
/* WARNING: Removing unreachable block (ram,0x000102d26748) */
/* WARNING: Removing unreachable block (ram,0x000102d266f8) */
/* WARNING: Removing unreachable block (ram,0x000102d26944) */
/* WARNING: Removing unreachable block (ram,0x000102d2698c) */
/* WARNING: Removing unreachable block (ram,0x000102d26948) */

void FUN_102d26614(undefined *param_1,ulong param_2)

{
  undefined8 uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  uVar6 = 0x736579;
  puVar3 = PTR_PTR_1126b8d98;
  func_0x000107c61168();
  puVar4 = puVar3;
  func_0x000107c4e1f8();
  func_0x000107c61180();
  if (puVar4 == (undefined *)0x0) {
    puVar5 = param_1;
    func_0x000107c5c734();
    func_0x000107c61180();
    if (puVar5 == (undefined *)0x0) {
      func_0x000107c4e1fc();
      func_0x000107c61180();
      if (puVar3 == (undefined *)0x0) {
        func_0x000107c5c734();
        func_0x000107c61180();
        if (param_1 == (undefined *)0x0) {
          func_0x000107c61170(0);
        }
        else {
          func_0x000107c3d2d8();
          func_0x000107c61180();
          puVar4 = param_1;
        }
      }
      else {
        func_0x000107c5fadc(0x65707974,0xe400000000000000);
        bVar2 = (param_2 & 1) == 0;
        uVar6 = 0x616964656d;
        if (bVar2) {
          uVar6 = 0x617461646174656d;
        }
        uVar1 = 0xe500000000000000;
        if (bVar2) {
          uVar1 = 0xe800000000000000;
        }
        func_0x000107c5fadc(uVar6,uVar1);
        func_0x000107c6142c(uVar1);
        func_0x000107c5e508(puVar3);
        func_0x000107c61180();
        puVar4 = puVar3;
      }
    }
    else {
      func_0x000107c3d2d8();
      func_0x000107c61180();
      puVar4 = puVar5;
    }
  }
  else {
    func_0x000107c5fadc(0x5f6564756c636e69,0xed0000616964656d);
    bVar2 = (param_2 & 1) == 0;
    if (bVar2) {
      uVar6 = 0x6f6e;
    }
    uVar1 = 0xe300000000000000;
    if (bVar2) {
      uVar1 = 0xe200000000000000;
    }
    func_0x000107c5fadc(uVar6,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x000107c5e508(puVar4);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 102d26990; end: 102d2699f; -[PayToPromoteOperaPlugin currentPayToPromoteStoryIsPlaying] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_102d26990(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112f0e1c8);
}



/* Entry: 102d269a0; end: 102d269af; -[PayToPromoteOperaPlugin setCurrentPayToPromoteStoryIsPlaying:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d269a0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112f0e1c8) = param_3;
  return;
}



/* Entry: 102d269b0; end: 102d269c3; -[PayToPromoteOperaPlugin setPlaylistItemController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d269b0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112f0e170,param_3);
  return;
}



/* Entry: 102d269c4; end: 102d26a4b; -[PayToPromoteOperaPlugin registeredEventsForOperaSession] */

void FUN_102d269c4(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar2 = (undefined8 *)0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  puVar2[3] = 4;
  puVar2[2] = 2;
  puVar3 = puVar2;
  func_0x000103bb9c00();
  puVar4 = (undefined8 *)puVar3[1];
  puVar2[4] = *puVar3;
  puVar2[5] = puVar4;
  func_0x000107c61434();
  func_0x000103bb9ee0();
  uVar1 = puVar4[1];
  puVar2[6] = *puVar4;
  puVar2[7] = uVar1;
  func_0x000107c61434();
  puVar4 = puVar2;
  func_0x000107c5fc48(puVar2,PTR___sSSN_11034da80);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 102d26a4c; end: 102d26f0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d26a4c(void)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long unaff_x20;
  ulong uVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  undefined *puVar23;
  undefined1 auStack_e0 [72];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar21 = _DAT_112f0e180;
  func_0x000107c61428(unaff_x20 + _DAT_112f0e180,auStack_80,0,0);
  lVar3 = _DAT_112f0e188;
  lVar21 = *(long *)(unaff_x20 + lVar21);
  uVar17 = 1L << ((ulong)*(byte *)(lVar21 + 0x20) & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if ((*(byte *)(lVar21 + 0x20) & 0x3f) < 6) {
    uVar16 = ~(-1L << (uVar17 & 0x3f));
  }
  uVar16 = uVar16 & *(ulong *)(lVar21 + 0x40);
  func_0x000107c61434(lVar21);
  func_0x000107c61428(unaff_x20 + lVar3,auStack_98,0,0);
  lVar18 = 0;
  puVar23 = PTR___swiftEmptyArrayStorage_11034f1c8;
joined_r0x000102d26b00:
  do {
    while (uVar16 == 0) {
      bVar5 = SCARRY8(lVar18,1);
      lVar18 = lVar18 + 1;
      if (bVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102d26ed0);
        (*pcVar4)();
      }
      if ((long)(uVar17 + 0x3f >> 6) <= lVar18) {
        func_0x000107c61574(lVar21);
        if ((ulong)puVar23 >> 0x3e == 0) {
          puVar12 = *(undefined **)(((ulong)puVar23 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar12 = (undefined *)((ulong)puVar23 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar23) {
            puVar12 = puVar23;
          }
          func_0x000107c60480();
        }
        if (puVar12 != (undefined *)0x0) {
          lVar21 = *(long *)(unaff_x20 + _DAT_112f0e150);
          func_0x000107c5c734();
          func_0x000107c61180();
          if (lVar21 != 0) {
            uVar19 = 0;
            FUN_102d2b1f4(0,0x112e0fd70,&PTR_PTR_1126c2098);
            puVar12 = puVar23;
            func_0x000107c5fc48(puVar23,uVar19);
            func_0x000107c5001c(lVar21);
            func_0x000107c6142c(puVar23);
            func_0x000107c615e8(lVar21);
            func_0x000107c61170(puVar12);
            return;
          }
        }
        func_0x000107c6142c(puVar23);
        return;
      }
      uVar16 = ((ulong *)(lVar21 + 0x40))[lVar18];
    }
    uVar13 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
    uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
    uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
    uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
    uVar16 = uVar16 - 1 & uVar16;
    uVar13 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | lVar18 << 6;
    uVar19 = *(undefined8 *)(*(long *)(lVar21 + 0x38) + uVar13 * 8);
    lVar20 = *(long *)(unaff_x20 + lVar3);
    if (*(long *)(lVar20 + 0x10) == 0) {
      func_0x000107c61174(uVar19);
    }
    else {
      puVar1 = (ulong *)(*(long *)(lVar21 + 0x30) + uVar13 * 0x10);
      uVar13 = *puVar1;
      uVar15 = puVar1[1];
      func_0x000107c6068c(auStack_e0,*(undefined8 *)(lVar20 + 0x28));
      func_0x000107c61434(uVar15);
      uVar6 = uVar19;
      func_0x000107c61174();
      func_0x000107c61434(lVar20);
      puVar7 = auStack_e0;
      func_0x000107c5fb58(puVar7,uVar13,uVar15);
      func_0x000107c606a8();
      uVar14 = -1L << ((ulong)*(byte *)(lVar20 + 0x20) & 0x3f);
      uVar22 = (ulong)puVar7 & (uVar14 ^ 0xffffffffffffffff);
      if ((*(ulong *)(lVar20 + 0x38 + (uVar22 >> 6) * 8) >> (uVar22 & 0x3f) & 1) != 0) {
        do {
          puVar1 = (ulong *)(*(long *)(lVar20 + 0x30) + uVar22 * 0x10);
          uVar8 = *puVar1;
          uVar2 = puVar1[1];
          if ((uVar8 == uVar13 && uVar2 == uVar15) ||
             (func_0x000107c605b8(uVar8,uVar2,uVar13,uVar15,0), (uVar8 & 1) != 0)) {
            func_0x000107c6142c(uVar15);
            func_0x000107c6142c(lVar20);
            func_0x000107c61174();
            puVar12 = puVar23;
            func_0x000107c61550();
            if (((int)puVar12 == 0) || (((long)puVar23 < 0 || (((ulong)puVar23 >> 0x3e & 1) != 0))))
            {
              if ((ulong)puVar23 >> 0x3e == 0) {
                puVar12 = *(undefined **)(((ulong)puVar23 & 0xffffffffffffff8) + 0x10);
              }
              else {
                puVar12 = (undefined *)((ulong)puVar23 & 0xffffffffffffff8);
                if ((undefined *)0x7fffffffffffffff < puVar23) {
                  puVar12 = puVar23;
                }
                func_0x000107c60480(puVar12);
              }
              puVar11 = (undefined *)0x0;
              func_0x000102d29b74(0,puVar12 + 1,1,puVar23);
              puVar23 = puVar11;
            }
            uVar15 = (ulong)puVar23 & 0xffffffffffffff8;
            uVar13 = *(ulong *)(uVar15 + 0x10);
            puVar12 = puVar23;
            if (*(ulong *)(uVar15 + 0x18) >> 1 <= uVar13) {
              puVar12 = (undefined *)(ulong)(1 < *(ulong *)(uVar15 + 0x18));
              func_0x000102d29b74(puVar12,uVar13 + 1,1,puVar23);
              uVar15 = (ulong)puVar12 & 0xffffffffffffff8;
            }
            *(ulong *)(uVar15 + 0x10) = uVar13 + 1;
            *(undefined8 *)(uVar15 + uVar13 * 8 + 0x20) = uVar6;
            func_0x000107c61170(uVar6);
            puVar23 = puVar12;
            goto joined_r0x000102d26b00;
          }
          uVar22 = uVar22 + 1 & ~uVar14;
        } while ((*(ulong *)(lVar20 + 0x38 + (uVar22 >> 6) * 8) >> (uVar22 & 0x3f) & 1) != 0);
      }
      func_0x000107c6142c(uVar15);
      func_0x000107c6142c(lVar20);
    }
    puVar12 = PTR_PTR_1126c6d78;
    func_0x000107c61168(PTR_PTR_1126c6d78);
    func_0x000107c61174(uVar19);
    func_0x000107c61174();
    func_0x000107c41fa0(puVar12);
    func_0x000107c61180();
    puVar11 = PTR_PTR_1126c2140;
    func_0x000107c61168(PTR_PTR_1126c2140);
    uVar6 = uVar19;
    func_0x000107c5c000(uVar19);
    func_0x000107c61180();
    func_0x000107c41fa4(puVar11);
    func_0x000107c61180();
    func_0x000107c61170(uVar6);
    func_0x000107c61174(puVar11);
    func_0x000107c5e5e8();
    func_0x000107c61180();
    func_0x000107c61170();
    puVar9 = puVar11;
    func_0x000107c3ecc8(puVar11);
    func_0x000107c61180();
    func_0x000107c61170(puVar11);
    puVar10 = puVar12;
    func_0x000107c5e7fc(puVar12);
    func_0x000107c61180();
    func_0x000107c61170(puVar9);
    func_0x000107c61170(puVar10);
    func_0x000107c3ecc8(puVar12);
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x000107c61170(puVar12);
    func_0x000107c61170(puVar11);
    func_0x000107c61170(uVar19);
    func_0x000107c61170(uVar19);
    func_0x000107c61170(uVar19);
  } while( true );
}



/* Entry: 102d26f0c; end: 102d26fc3; -[PayToPromoteOperaPlugin operaViewDidSendEvent:page:params:] */

/* WARNING: Possible PIC construction at 0x000102d26fa8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d26fac) */

void FUN_102d26f0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  if (param_5 != 0) {
    func_0x000107c5f9e8(param_5,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                        PTR___sSSSHsWP_11034da90);
  }
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000102d2aae0(param_3,param_2,param_4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102d26fc4; end: 102d26fc7; -[PayToPromoteOperaPlugin extraPropertiesProvider] */

void FUN_102d26fc4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 102d26fc8; end: 102d278fb;  */

/* WARNING: Possible PIC construction at 0x000102d27088: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d272f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d27554: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d27564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d27574: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d276a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d276e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d27720: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d27760: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d2784c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d27724) */
/* WARNING: Removing unreachable block (ram,0x000102d2774c) */
/* WARNING: Removing unreachable block (ram,0x000102d2773c) */
/* WARNING: Removing unreachable block (ram,0x000102d27750) */
/* WARNING: Removing unreachable block (ram,0x000102d276e8) */
/* WARNING: Removing unreachable block (ram,0x000102d2770c) */
/* WARNING: Removing unreachable block (ram,0x000102d276f8) */
/* WARNING: Removing unreachable block (ram,0x000102d27710) */
/* WARNING: Removing unreachable block (ram,0x000102d276a8) */
/* WARNING: Removing unreachable block (ram,0x000102d276d0) */
/* WARNING: Removing unreachable block (ram,0x000102d276c0) */
/* WARNING: Removing unreachable block (ram,0x000102d276d4) */
/* WARNING: Removing unreachable block (ram,0x000102d27568) */
/* WARNING: Removing unreachable block (ram,0x000102d27558) */
/* WARNING: Removing unreachable block (ram,0x000102d272fc) */
/* WARNING: Removing unreachable block (ram,0x000102d27578) */
/* WARNING: Removing unreachable block (ram,0x000102d2708c) */
/* WARNING: Removing unreachable block (ram,0x000102d27090) */
/* WARNING: Removing unreachable block (ram,0x000102d270a8) */
/* WARNING: Removing unreachable block (ram,0x000102d27200) */
/* WARNING: Removing unreachable block (ram,0x000102d27308) */
/* WARNING: Removing unreachable block (ram,0x000102d27310) */
/* WARNING: Removing unreachable block (ram,0x000102d27218) */
/* WARNING: Removing unreachable block (ram,0x000102d27764) */
/* WARNING: Removing unreachable block (ram,0x000102d27890) */
/* WARNING: Removing unreachable block (ram,0x000102d27784) */
/* WARNING: Removing unreachable block (ram,0x000102d27790) */
/* WARNING: Removing unreachable block (ram,0x000102d27794) */
/* WARNING: Removing unreachable block (ram,0x000102d27894) */
/* WARNING: Removing unreachable block (ram,0x000102d27798) */
/* WARNING: Removing unreachable block (ram,0x000102d277a0) */
/* WARNING: Removing unreachable block (ram,0x000102d277a4) */
/* WARNING: Removing unreachable block (ram,0x000102d27898) */
/* WARNING: Removing unreachable block (ram,0x000102d277a8) */
/* WARNING: Removing unreachable block (ram,0x000102d2789c) */
/* WARNING: Removing unreachable block (ram,0x000102d277d4) */
/* WARNING: Removing unreachable block (ram,0x000102d277e0) */
/* WARNING: Removing unreachable block (ram,0x000102d277e4) */
/* WARNING: Removing unreachable block (ram,0x000102d278a0) */
/* WARNING: Removing unreachable block (ram,0x000102d277e8) */
/* WARNING: Removing unreachable block (ram,0x000102d277f0) */
/* WARNING: Removing unreachable block (ram,0x000102d277f4) */
/* WARNING: Removing unreachable block (ram,0x000102d278a4) */
/* WARNING: Removing unreachable block (ram,0x000102d277f8) */
/* WARNING: Removing unreachable block (ram,0x000102d27814) */
/* WARNING: Removing unreachable block (ram,0x000102d27850) */
/* WARNING: Removing unreachable block (ram,0x000102d27824) */
/* WARNING: Removing unreachable block (ram,0x000102d275f8) */
/* WARNING: Removing unreachable block (ram,0x000102d27628) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d26fc8(long param_1,code *param_2)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  func_0x000107c614f0();
  uVar5 = *(ulong *)(param_1 + _DAT_113815208);
  if (uVar5 != 0) {
    uVar6 = uVar5 & 0xffffffffffffff8;
    if (uVar5 >> 0x3e == 0) {
      uVar4 = *(ulong *)(uVar6 + 0x10);
    }
    else {
      uVar4 = uVar5;
      if (-1 < (long)uVar5) {
        uVar4 = uVar6;
      }
      func_0x000107c60480();
    }
    if (uVar4 != 0) {
      if ((uVar5 & 0xc000000000000001) == 0) {
        if (*(long *)(uVar6 + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102d278fc);
          (*pcVar1)();
        }
        lVar7 = *(long *)(*(long *)(uVar5 + 0x20) + _DAT_11308f240);
        if (lVar7 != 0) {
          func_0x000107c61174();
LAB_102d27060:
          func_0x000107c61174();
          func_0x000107c61434(*(undefined8 *)(lVar7 + _DAT_113090c60 + 8));
          goto code_r0x000107c61170;
        }
      }
      else {
        lVar3 = 0;
        func_0x000100e471e4(0,uVar5);
        lVar8 = *(long *)(lVar3 + _DAT_11308f240);
        lVar7 = lVar8;
        func_0x000107c61174();
        func_0x000107c615e8(lVar3);
        if (lVar8 != 0) goto LAB_102d27060;
      }
    }
  }
  (*param_2)(5);
  func_0x000107c5fb78(0x656873696c627570,0xeb00000000644972);
  func_0x000107c6142c(0xeb00000000644972);
  lVar7 = 0x20676e697373694d;
  puVar2 = PTR_PTR_1126afec0;
  func_0x000107c61168(PTR_PTR_1126afec0);
  func_0x000107c4101c();
  func_0x000107c4101c(puVar2);
  puVar2 = PTR_PTR_1126ca878;
  func_0x000107c610f8(PTR_PTR_1126ca878);
  func_0x000107c453e4();
  func_0x000107c54674();
  func_0x000107c5fadc(0x20676e697373694d,0xe800000000000000);
  func_0x000107c5466c(puVar2);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar7);
  return;
}



/* Entry: 102d278fc; end: 102d2797b;  */

undefined1  [16] FUN_102d278fc(long param_1,ulong param_2,long param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  if (*(long *)(param_3 + 0x10) == 0) {
    uVar3 = 0;
    uVar2 = 1;
  }
  else {
    func_0x000107c61434(param_3);
    func_0x000100029284();
    bVar1 = (param_2 & 1) == 0;
    if (bVar1) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(*(long *)(param_3 + 0x38) + param_1 * 8);
    }
    uVar2 = (ulong)bVar1;
    func_0x000107c6142c(param_3);
  }
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = uVar3;
  return auVar4;
}



/* Entry: 102d2797c; end: 102d28307;  */

void FUN_102d2797c(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_88 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_88,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61618();
  if (param_4 != 0) {
    puVar4 = (undefined *)0x0;
    if (param_2 != 0) {
      puVar1 = PTR_PTR_1126c6d78;
      func_0x000107c61168(PTR_PTR_1126c6d78);
      func_0x000107c61174();
      func_0x000107c41fa0(puVar1);
      func_0x000107c61180();
      puVar2 = PTR_PTR_1126c2140;
      func_0x000107c61168(PTR_PTR_1126c2140);
      lVar3 = param_2;
      func_0x000107c5c000(param_2);
      func_0x000107c61180();
      func_0x000107c41fa4(puVar2);
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      func_0x000107c61174(puVar2);
      func_0x000107c5e5e8();
      func_0x000107c61180();
      func_0x000107c61170();
      puVar4 = puVar2;
      func_0x000107c3ecc8(puVar2);
      func_0x000107c61180();
      func_0x000107c61170(puVar2);
      puVar5 = puVar1;
      func_0x000107c5e7fc(puVar1);
      func_0x000107c61180();
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar5);
      puVar4 = puVar1;
      func_0x000107c3ecc8(puVar1);
      func_0x000107c61180();
      func_0x000107c61170(param_2);
      func_0x000107c61170(puVar1);
      func_0x000107c61170(puVar2);
    }
    func_0x000102d27b8c(param_1,puVar4,param_3,param_5,param_6,param_7,param_8,param_9,param_10,
                        param_11);
    func_0x000107c61170(param_4);
    func_0x000107c61170(puVar4);
  }
  return;
}



/* Entry: 102d28308; end: 102d28397; -[PayToPromoteOperaPlugin fetchDiscoverStoryWithAdResponse:completion:] */

void FUN_102d28308(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_1105c4890;
  func_0x000107c613fc(&UNK_1105c4890,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102d26fc8(param_3,0x102d2b128,puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102d28398; end: 102d2870f; -[PayToPromoteOperaPlugin dataStatusForPublisherId:editionId:corpus:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_102d28398(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined4 uStack_44;
  
  func_0x000107c5faec(param_3);
  uVar4 = param_2;
  func_0x000107c5faec(param_4);
  uStack_44 = param_5;
  func_0x000107c61174();
  puVar2 = PTR___ss5Int32VN_11034ee20;
  puVar3 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30;
  func_0x000107c6057c();
  puStack_60 = puVar2;
  puStack_58 = puVar3;
  func_0x000107c5fb78(0x3a3a,0xe200000000000000);
  func_0x000107c5fb78(param_3,param_2);
  func_0x000107c5fb78(0x23,0xe100000000000000);
  func_0x000107c5fb78(param_4,uVar4);
  func_0x000107c5fb78(0x303a3a,0xe300000000000000);
  puVar2 = puStack_58;
  puVar3 = puStack_60;
  lVar1 = _DAT_112f0e190;
  func_0x000107c61428(param_1 + _DAT_112f0e190,&puStack_60,0x20,0);
  puVar5 = puVar2;
  FUN_102d278fc(puVar3,puVar2,*(undefined8 *)(param_1 + lVar1));
  func_0x000107c614a8(&puStack_60);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar4);
  func_0x000107c6142c(puVar2);
  puVar2 = (undefined *)0x0;
  if (((uint)puVar5 & 0xff) != 1) {
    puVar2 = puVar3;
  }
  return puVar2;
}



/* Entry: 102d28710; end: 102d287ab; -[PayToPromoteOperaPlugin isDupDiscoverStoryForPublisherId:editionId:corpus:] */

uint FUN_102d28710(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_2;
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_1);
  func_0x000102d284dc(param_3,param_2,param_4,uVar1,param_5);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar1);
  return (uint)param_3 & 1;
}



/* Entry: 102d287ac; end: 102d28faf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_102d287ac(undefined *param_1,undefined *param_2,undefined *param_3,undefined *param_4,
                   undefined *param_5,undefined *param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long unaff_x20;
  undefined *puVar14;
  undefined *puVar15;
  undefined *unaff_x26;
  undefined *puVar16;
  undefined1 *puVar17;
  code *pcVar18;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *apuStack_98 [3];
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_68;
  
  puVar17 = &stack0xfffffffffffffff0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  apuStack_98[0] = (undefined *)CONCAT44(apuStack_98[0]._4_4_,(int)param_5);
  puVar15 = PTR___ss5Int32VN_11034ee20;
  puVar16 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30;
  puVar13 = param_6;
  func_0x000107c6057c();
  puStack_80 = puVar15;
  puStack_78 = puVar16;
  func_0x000107c5fb78(0x3a3a,0xe200000000000000);
  func_0x000107c5fb78(param_1,param_2);
  func_0x000107c5fb78(0x23,0xe100000000000000);
  func_0x000107c5fb78(param_3,param_4);
  func_0x000107c5fb78(0x303a3a,0xe300000000000000);
  puVar16 = puStack_78;
  puVar15 = puStack_80;
  lVar1 = _DAT_112f0e180;
  puVar12 = (undefined *)0x0;
  func_0x000107c61428(unaff_x20 + _DAT_112f0e180,&puStack_80,0x20,0);
  puVar14 = *(undefined **)(unaff_x20 + lVar1);
  if (*(long *)(puVar14 + 0x10) == 0) {
LAB_102d289bc:
    func_0x000107c614a8(&puStack_80);
    func_0x000107c6142c(puVar16);
    puVar11 = (undefined *)0x68637465666e75;
    puVar10 = (undefined *)0x0;
    puVar12 = (undefined *)0xe700000000000000;
    param_5 = (undefined *)0x0;
    FUN_102d263cc(*(undefined8 *)(unaff_x20 + _DAT_112f0e148),0,0x68637465666e75,0xe700000000000000,
                  0);
  }
  else {
    func_0x000107c61434(puVar14);
    puVar10 = puVar15;
    puVar9 = puVar16;
    func_0x000100029284();
    if (((ulong)puVar9 & 1) == 0) {
      func_0x000107c6142c(puVar14);
      goto LAB_102d289bc;
    }
    param_4 = *(undefined **)(*(long *)(puVar14 + 0x38) + (long)puVar10 * 8);
    func_0x000107c61174();
    func_0x000107c614a8(&puStack_80);
    func_0x000107c6142c(puVar14);
    puVar2 = *(undefined **)(unaff_x20 + _DAT_112f0e140);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (puVar2 == (undefined *)0x0) {
      func_0x000107c6142c(puVar16);
      puVar11 = (undefined *)0x626179616c706e75;
      puVar10 = (undefined *)0x0;
      puVar12 = (undefined *)0xea0000000000656c;
      param_5 = (undefined *)0x0;
      FUN_102d263cc(*(undefined8 *)(unaff_x20 + _DAT_112f0e148),0,0x626179616c706e75,
                    0xea0000000000656c,0);
      func_0x000107c61170(param_4);
    }
    else {
      param_1 = puVar2;
      puVar11 = param_4;
      func_0x000107c4e8d0();
      func_0x000107c61180();
      func_0x000107c615e8(puVar2);
      puVar3 = param_1;
      func_0x000107c61174();
      FUN_102d26294();
      puVar10 = puVar9;
      func_0x000107c61170(puVar3);
      lVar1 = _DAT_112f0e1a0;
      if (puVar9 == (undefined *)0x0) {
        func_0x000107c6142c(puVar16);
        puVar14 = puVar2;
      }
      else {
        func_0x000107c61428(unaff_x20 + _DAT_112f0e1a0,&puStack_80,0,0);
        puVar14 = *(undefined **)(unaff_x20 + lVar1);
        func_0x000107c61434(puVar14);
        unaff_x26 = param_1;
        func_0x0001000f66f0(param_1,puVar9,puVar14);
        func_0x000107c6142c(puVar14);
        lVar1 = _DAT_112f0e170;
        if (((ulong)unaff_x26 & 1) == 0) {
          lVar5 = unaff_x20 + _DAT_112f0e170;
          func_0x000107c61618();
          if (lVar5 == 0) {
LAB_102d28b48:
            func_0x000107c61428(unaff_x20 + _DAT_112f0e188,apuStack_98,0x21,0);
            func_0x000107c61434(puVar16);
            func_0x000100403b00(&uStack_a8,puVar15,puVar16);
            func_0x000107c614a8(apuStack_98);
            func_0x000107c6142c(uStack_a0);
            unaff_x26 = (undefined *)0x0;
          }
          else {
            puVar14 = param_1;
            func_0x000107c5fadc(param_1,puVar9);
            lVar6 = lVar5;
            func_0x000107c4e9dc();
            func_0x000107c61180();
            func_0x000107c615e8(lVar5);
            func_0x000107c61170(puVar14);
            if (lVar6 == 0) goto LAB_102d28b48;
            func_0x000107c615e8();
            lVar5 = unaff_x20 + lVar1;
            func_0x000107c61618();
            if (lVar5 == 0) {
              unaff_x26 = (undefined *)0x1;
            }
            else {
              puVar14 = param_1;
              func_0x000107c5fadc(param_1,puVar9);
              func_0x000107c4ffc0(lVar5);
              func_0x000107c615e8(lVar5);
              func_0x000107c61170(puVar14);
              unaff_x26 = (undefined *)0x1;
            }
          }
          puVar14 = _DAT_112f0e198;
          func_0x000107c61428(_DAT_112f0e198 + unaff_x20,apuStack_98,0x21,0);
          func_0x000107c61434(puVar9);
          uVar7 = *(undefined8 *)(puVar14 + unaff_x20);
          func_0x000107c61558(uVar7);
          uStack_a8 = *(undefined8 *)(puVar14 + unaff_x20);
          *(undefined8 *)(puVar14 + unaff_x20) = 0x8000000000000000;
          func_0x00010018433c(puVar15,puVar16,param_1,puVar9,uVar7);
          func_0x000107c6142c(puVar9);
          *(undefined8 *)(puVar14 + unaff_x20) = uStack_a8;
          func_0x000107c614a8(apuStack_98);
          puVar15 = (undefined *)(unaff_x20 + lVar1);
          func_0x000107c61618();
          if (puVar15 == (undefined *)0x0) {
            puVar15 = (undefined *)0x0;
            puVar16 = (undefined *)0x0;
          }
          else {
            puVar16 = puVar15;
            func_0x000107c4125c();
            func_0x000107c61180();
            func_0x000107c615e8(puVar15);
            if (puVar16 == (undefined *)0x0) {
LAB_102d28cb8:
              puVar15 = (undefined *)0x0;
            }
            else {
              puVar15 = PTR_PTR_1126bdd30;
              func_0x000107c61168(PTR_PTR_1126bdd30);
              puVar12 = puVar16;
              func_0x000107c6148c(puVar16,puVar15);
              puVar15 = puVar12;
              if (puVar12 == (undefined *)0x0) {
                func_0x0001044ad5d8();
                puVar15 = puVar16;
                func_0x000107c61480(puVar16,puVar12);
                if (puVar15 == (undefined *)0x0) {
                  puVar12 = PTR_PTR_1126bdd28;
                  func_0x000107c61168(PTR_PTR_1126bdd28);
                  puVar15 = puVar16;
                  func_0x000107c6148c(puVar16,puVar12);
                  if (puVar15 == (undefined *)0x0) goto LAB_102d28cb8;
                  goto LAB_102d28c5c;
                }
                func_0x0001085357a4();
              }
              else {
LAB_102d28c5c:
                func_0x000107c42f58();
              }
              func_0x000107c61180();
            }
          }
          puVar12 = PTR_PTR_1126bdd28;
          func_0x000107c61168(PTR_PTR_1126bdd28);
          puVar10 = puVar3;
          func_0x000107c6148c(puVar3,puVar12);
          puVar12 = puVar3;
          if (puVar10 == (undefined *)0x0) {
            puVar10 = PTR_PTR_1126bdd30;
            func_0x000107c61168(PTR_PTR_1126bdd30);
            puVar11 = puVar3;
            func_0x000107c6148c(puVar3,puVar10);
            if (puVar11 != (undefined *)0x0) {
              puVar10 = PTR_PTR_1126ca870;
              func_0x000107c61168(PTR_PTR_1126ca870);
              func_0x000107c61174(puVar3);
              func_0x000107c4c0d4(puVar10);
              func_0x000107c61180();
              func_0x000107c5e55c();
              func_0x000107c61180();
              func_0x000107c61170();
              puVar2 = puVar10;
              func_0x000107c3ecc8(puVar10);
              goto LAB_102d28dc8;
            }
            puVar2 = puVar3;
            func_0x000107c61174(puVar3);
            param_3 = puVar14;
          }
          else {
            puVar10 = PTR_PTR_1126ca868;
            func_0x000107c61168(PTR_PTR_1126ca868);
            func_0x000107c61174(puVar3);
            func_0x000107c41fc8(puVar10);
            func_0x000107c61180();
            func_0x000107c5e55c();
            func_0x000107c61180();
            func_0x000107c61170();
            puVar2 = puVar10;
            func_0x000107c3ecc8(puVar10);
LAB_102d28dc8:
            func_0x000107c61180();
            func_0x000107c61170(puVar15);
            func_0x000107c61170(puVar12);
            puVar15 = puVar10;
            param_3 = param_4;
          }
          func_0x000107c61170(puVar15);
          puVar15 = (undefined *)(unaff_x20 + lVar1);
          func_0x000107c61618();
          param_5 = unaff_x26;
          if (puVar15 == (undefined *)0x0) {
            param_6 = (undefined *)0x0;
          }
          else {
            apuStack_98[0] = (undefined *)0x0;
            puVar8 = puVar15;
            func_0x000107c49748();
            func_0x000107c615e8(puVar15);
            param_6 = apuStack_98[0];
            if (((ulong)puVar8 & 1) != 0) {
              puVar14 = apuStack_98[0];
              func_0x000107c61174();
              func_0x000107c6142c(puVar9);
              puVar10 = (undefined *)0x1;
              puVar11 = (undefined *)0x0;
              puVar12 = (undefined *)0x0;
              FUN_102d263cc(*(undefined8 *)(unaff_x20 + _DAT_112f0e148),1,0,0,unaff_x26);
              func_0x000107c61170(puVar14);
              func_0x000107c61170(puVar16);
              func_0x000107c61170(puVar2);
              func_0x000107c61170(param_4);
              func_0x000107c61170(puVar3);
              uVar4 = 1;
              goto LAB_102d289fc;
            }
            func_0x000107c61174(apuStack_98[0]);
          }
          func_0x000107c61428(puVar14 + unaff_x20,apuStack_98,0x21,0);
          puVar15 = puVar9;
          func_0x0001014c4e50(param_1);
          param_1 = puVar15;
          func_0x000107c614a8(apuStack_98);
          func_0x000107c6142c(puVar9);
          func_0x000107c6142c(puVar15);
          unaff_x20 = *(long *)(unaff_x20 + _DAT_112f0e148);
          if (param_6 == (undefined *)0x0) {
            puVar15 = (undefined *)0x0;
          }
          else {
            puVar15 = param_6;
            func_0x000107c5ed2c(param_6);
          }
          param_2 = PTR_PTR_1126ca5e0;
          func_0x000107c61168();
          func_0x000107c49794();
          func_0x000107c61180();
          func_0x000107c61170(puVar15);
          puVar14 = param_2;
          func_0x000107c5faec();
          func_0x000107c61170(param_2);
          puVar10 = (undefined *)0x0;
          puVar11 = puVar14;
          puVar12 = param_1;
          FUN_102d263cc(unaff_x20,0,puVar14,param_1,unaff_x26);
          func_0x000107c61170(param_6);
          func_0x000107c6142c(param_1);
          func_0x000107c61170(puVar16);
          func_0x000107c61170(puVar2);
          func_0x000107c61170(param_4);
          func_0x000107c61170(puVar3);
          goto LAB_102d289f8;
        }
        func_0x000107c6142c(puVar16);
        func_0x000107c6142c(puVar9);
        puVar11 = (undefined *)0x646577656976;
        puVar10 = (undefined *)0x0;
        puVar12 = (undefined *)0xe600000000000000;
        param_5 = (undefined *)0x1;
        FUN_102d263cc(*(undefined8 *)(unaff_x20 + _DAT_112f0e148),0,0x646577656976,
                      0xe600000000000000,1);
      }
      func_0x000107c61170(param_4);
      func_0x000107c61170(puVar3);
      param_3 = puVar3;
      param_2 = puVar9;
    }
  }
LAB_102d289f8:
  uVar4 = 0;
  puVar9 = param_2;
  puVar8 = param_1;
LAB_102d289fc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return uVar4;
  }
  func_0x000107c60e78(uVar4);
  pcVar18 = FUN_102d28fb0;
  func_0x000107c5faec(puVar11);
  puVar15 = puVar10;
  func_0x000107c5faec(puVar12);
  func_0x000107c615f0(puVar13);
  func_0x000107c61174(uVar4);
  FUN_102d287ac(puVar11,puVar10,puVar12,puVar15,param_5,puVar13,param_7,param_8,unaff_x26,puVar8,
                puVar9,param_6,param_3,param_4,puVar14,unaff_x20,puVar17,pcVar18);
  func_0x000107c615e8(puVar13);
  func_0x000107c61170(uVar4);
  func_0x000107c6142c(puVar10);
  func_0x000107c6142c(puVar15);
  return (ulong)((uint)puVar11 & 1);
}



/* Entry: 102d28fb0; end: 102d2906b; -[PayToPromoteOperaPlugin insertPromotedPublisherStoryWithPublisherId:editionId:corpus:afterGroup:] */

uint FUN_102d28fb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_2;
  func_0x000107c5faec(param_4);
  func_0x000107c615f0(param_6);
  func_0x000107c61174(param_1);
  FUN_102d287ac(param_3,param_2,param_4,uVar1,param_5,param_6);
  func_0x000107c615e8(param_6);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar1);
  return (uint)param_3 & 1;
}



/* Entry: 102d2906c; end: 102d2919f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102d2906c(long param_1,ulong param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x20;
  long lVar6;
  undefined1 auStack_48 [24];
  
  lVar6 = _DAT_112f0e198;
  func_0x000107c61428(unaff_x20 + _DAT_112f0e198,auStack_48,0x20,0);
  lVar6 = *(long *)(unaff_x20 + lVar6);
  if (*(long *)(lVar6 + 0x10) != 0) {
    func_0x000107c61434(lVar6);
    func_0x000100029284();
    if ((param_2 & 1) != 0) {
      plVar1 = (long *)(*(long *)(lVar6 + 0x38) + param_1 * 0x10);
      lVar3 = *plVar1;
      uVar2 = plVar1[1];
      func_0x000107c61434(uVar2);
      func_0x000107c614a8(auStack_48);
      func_0x000107c6142c(lVar6);
      lVar6 = _DAT_112f0e178;
      func_0x000107c61428(unaff_x20 + _DAT_112f0e178,auStack_48,0x20,0);
      lVar6 = *(long *)(unaff_x20 + lVar6);
      if (*(long *)(lVar6 + 0x10) == 0) {
        uVar4 = 0;
      }
      else {
        func_0x000107c61434(lVar6);
        uVar5 = uVar2;
        func_0x000100029284();
        if ((uVar5 & 1) == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + lVar3 * 8);
          func_0x000107c61174();
        }
        func_0x000107c6142c(lVar6);
      }
      func_0x000107c614a8(auStack_48);
      func_0x000107c6142c(uVar2);
      return uVar4;
    }
    func_0x000107c6142c(lVar6);
  }
  func_0x000107c614a8(auStack_48);
  return 0;
}



/* Entry: 102d291a0; end: 102d29207; -[PayToPromoteOperaPlugin insertedAdResponseForGroupId:] */

void FUN_102d291a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_102d2906c(param_3,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 102d29208; end: 102d29383; -[PayToPromoteOperaPlugin isInsertedGroupWithGroupId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_102d29208(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [24];
  
  func_0x000107c5faec(param_3);
  lVar1 = _DAT_112f0e198;
  func_0x000107c61428(param_1 + _DAT_112f0e198,auStack_58,0x20,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  func_0x000107c61174(param_1);
  lVar1 = param_2;
  func_0x000101515f6c(param_3,param_2,uVar2);
  func_0x000107c614a8(auStack_58);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  if (lVar1 != 0) {
    func_0x000107c6142c(lVar1);
  }
  return lVar1 != 0;
}



/* Entry: 102d29384; end: 102d293cb;  */

void FUN_102d29384(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_2);
  return;
}



/* Entry: 102d293cc; end: 102d298b3;  */

void FUN_102d293cc(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,long param_11)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  uVar3 = 0;
  func_0x000107c60714(param_11,0);
  puVar1 = &UNK_1105c4a20;
  func_0x000107c613fc(&UNK_1105c4a20,0x60,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  *(undefined8 *)(puVar1 + 0x28) = param_6;
  *(undefined8 *)(puVar1 + 0x30) = param_7;
  puVar1[0x38] = param_2;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_1;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  pcStack_80 = FUN_102d2b234;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_1105c4a38;
  ppuVar2 = &puStack_a0;
  puStack_78 = puVar1;
  func_0x000107c60bc4(ppuVar2);
  puVar1 = puStack_78;
  func_0x000107c6157c(param_3);
  func_0x000107c61434(param_5);
  func_0x000107c61434(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c6157c(param_10);
  func_0x000107c61574(puVar1);
  func_0x000107c5fb28(param_11,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x0001000d76cc(param_11 + 0x20,ppuVar2);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61574(param_11);
  return;
}



/* Entry: 102d298b4; end: 102d29913; -[PayToPromoteOperaPlugin init] */

void FUN_102d298b4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCPayToPromoteImplementationSwift.PayToPromoteOperaPlugin",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d298e0);
  (*pcVar1)();
}



/* Entry: 102d29914; end: 102d29a7b; -[PayToPromoteOperaPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102d29930: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d29950: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d29970: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d29990: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d299b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d299d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d29a60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d299d4) */
/* WARNING: Removing unreachable block (ram,0x000102d299b4) */
/* WARNING: Removing unreachable block (ram,0x000102d29994) */
/* WARNING: Removing unreachable block (ram,0x000102d29974) */
/* WARNING: Removing unreachable block (ram,0x000102d29954) */
/* WARNING: Removing unreachable block (ram,0x000102d29934) */
/* WARNING: Removing unreachable block (ram,0x000102d29a64) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d29914(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f0e118));
  return;
}



/* Entry: 102d29a7c; end: 102d29a9b;  */

void FUN_102d29a7c(void)

{
  func_0x000107c61168(&PTR_PTR_1128a1598);
  return;
}



/* Entry: 102d29a9c; end: 102d29c9b; -[PayToPromoteOperaPlugin extraPropertiesForDataModel:item:baseOperaPage:completion:] */

/* WARNING: Possible PIC construction at 0x000102d29b48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d29b58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d29b4c) */
/* WARNING: Removing unreachable block (ram,0x000102d29b5c) */

void FUN_102d29a9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x000107c60bc4();
  if (param_6 == 0) {
    puVar1 = (undefined *)0x0;
    pcVar2 = (code *)0x0;
  }
  else {
    puVar1 = &UNK_1105c4868;
    func_0x000107c613fc(&UNK_1105c4868,0x18,7);
    *(long *)(puVar1 + 0x10) = param_6;
    pcVar2 = FUN_102d2b120;
  }
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  FUN_102d2acc0(param_4,pcVar2,puVar1);
  FUN_1024a96c0(pcVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102d29c9c; end: 102d29d1b;  */

undefined * FUN_102d29c9c(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    func_0x000101feb98c();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 102d29d1c; end: 102d29e33;  */

long FUN_102d29d1c(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102d29e30);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102d29e34);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_102d2b1f4(0,0x112e0fd70,&PTR_PTR_1126c2098);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_102d2b1f4(0,0x112e0fd70,&PTR_PTR_1126c2098);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102d29e2c);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 102d29e34; end: 102d29f7b;  */

void FUN_102d29e34(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar7;
  if (SCARRY8(lVar5,uVar7)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102d29f04);
    (*pcVar2)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar6) {
    FUN_102d2a3b8(lVar6,param_4 & 1);
    uVar3 = param_2;
    uVar7 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar7 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102d29ed4);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_102d2a0f0();
    lVar6 = *unaff_x20;
    goto joined_r0x000102d29f18;
  }
  lVar6 = *unaff_x20;
joined_r0x000102d29f18:
  if ((uVar4 & 1) != 0) {
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
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
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102d29f7c);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 102d29f7c; end: 102d2a0ef;  */

void FUN_102d29f7c(undefined8 param_1,ulong param_2,ulong param_3,uint param_4,undefined8 param_5,
                  undefined8 param_6)

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
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102d2a06c);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    func_0x000102d2a64c(lVar6,param_4 & 1,param_5,param_6);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102d2a030);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x000102d2a258(param_5,param_6);
    lVar6 = *unaff_x20;
    goto joined_r0x000102d2a088;
  }
  lVar6 = *unaff_x20;
joined_r0x000102d2a088:
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
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102d2a0f0);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 102d2a0f0; end: 102d2a3b7;  */

void FUN_102d2a0f0(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *unaff_x20;
  long lVar12;
  long lVar13;
  
  func_0x0001000285a8(0x112f0e200,&UNK_10db417a8);
  lVar12 = *unaff_x20;
  lVar7 = lVar12;
  func_0x000107c6048c();
  if (*(long *)(lVar12 + 0x10) != 0) {
    lVar1 = lVar12 + 0x40;
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar12 || lVar1 + uVar8 * 8 <= lVar7 + 0x40U) {
      func_0x000107c610b8(lVar7 + 0x40U,lVar1,uVar8 << 3);
    }
    lVar13 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar12 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar12 + 0x40);
    if (uVar8 == 0) goto LAB_102d2a1cc;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar13 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar12 + 0x30) + uVar10 * 0x10);
        uVar5 = puVar3[1];
        uVar11 = *(undefined8 *)(*(long *)(lVar12 + 0x38) + uVar10 * 8);
        puVar4 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar10 * 8) = uVar11;
        func_0x000107c61434();
        if (uVar8 != 0) break;
LAB_102d2a1cc:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x102d2a258);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_102d2a230;
          uVar8 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar13 = lVar2;
      }
    } while( true );
  }
LAB_102d2a230:
  func_0x000107c61574(lVar12);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 102d2a3b8; end: 102d2a8df;  */

void FUN_102d2a3b8(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong *puVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar15 = *unaff_x20;
  lVar1 = *(long *)(lVar15 + 0x18);
  if (*(long *)(lVar15 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x112f0e200;
  func_0x0001000285a8(0x112f0e200,&UNK_10db417a8);
  lVar7 = lVar15;
  func_0x000107c60490(lVar15,lVar1,param_2,uVar6);
  if (*(long *)(lVar15 + 0x10) == 0) {
LAB_102d2a618:
    func_0x000107c61574(lVar15);
    *unaff_x20 = lVar7;
    return;
  }
  puVar18 = (ulong *)(lVar15 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if ((*(byte *)(lVar15 + 0x20) & 0x3f) < 6) {
    uVar17 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar17 = uVar17 & *puVar18;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar17 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x102d2a648);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar17 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
            if ((*(byte *)(lVar15 + 0x20) & 0x3f) < 6) {
              *puVar18 = -1L << (uVar17 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar18,uVar17 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar15 + 0x10) = 0;
          }
          goto LAB_102d2a618;
        }
        uVar17 = puVar18[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar17 == 0);
      uVar9 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
    }
    else {
      uVar9 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar15 + 0x30) + uVar9 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    uVar16 = *(undefined8 *)(*(long *)(lVar15 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar3);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar6,uVar3);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x102d2a64c);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar16;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 102d2a8e0; end: 102d2a8f3;  */

undefined * FUN_102d2a8e0(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112f0e1f8,&UNK_10db417a0);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61174();
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102d2a9e8);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102d2a9ec);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 102d2a8f4; end: 102d2acbf;  */

undefined * FUN_102d2a8f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(param_2,param_3);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61174();
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102d2a9e8);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102d2a9ec);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 102d2acc0; end: 102d2b11f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d2acc0(long *param_1,code *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  byte bVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined **ppuVar14;
  code *pcVar15;
  code *pcVar16;
  long unaff_x20;
  code *pcVar17;
  undefined8 *puVar18;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined *puStack_188;
  undefined **ppuStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 auStack_138 [216];
  
  if (param_1 == (long *)0x0) {
    return;
  }
  plVar5 = param_1;
  pcVar15 = param_2;
  func_0x000107c444d0();
  func_0x000107c61180();
  if (plVar5 == (long *)0x0) {
    return;
  }
  plVar6 = plVar5;
  func_0x000107c3b9ac();
  func_0x000107c61180();
  func_0x000107c615e8(plVar5);
  plVar5 = plVar6;
  func_0x000107c5faec();
  func_0x000107c61170(plVar6);
  lVar11 = _DAT_112f0e198;
  func_0x000107c61428(unaff_x20 + _DAT_112f0e198,&uStack_160,0x20,0);
  pcVar17 = *(code **)(unaff_x20 + lVar11);
  if (*(long *)(pcVar17 + 0x10) == 0) {
LAB_102d2ae0c:
    func_0x000107c6142c(pcVar15);
    func_0x000107c614a8(&uStack_160);
    return;
  }
  func_0x000107c61434(pcVar17);
  pcVar16 = pcVar15;
  func_0x000100029284();
  if (((ulong)pcVar16 & 1) == 0) {
    func_0x000107c6142c(pcVar15);
    pcVar15 = pcVar17;
    goto LAB_102d2ae0c;
  }
  plVar5 = (long *)(*(long *)(pcVar17 + 0x38) + (long)plVar5 * 0x10);
  lVar11 = *plVar5;
  puVar13 = (undefined8 *)plVar5[1];
  func_0x000107c61434(puVar13);
  func_0x000107c614a8(&uStack_160);
  func_0x000107c6142c(pcVar15);
  func_0x000107c6142c(pcVar17);
  func_0x000107c5d0f0();
  func_0x000107c61180();
  plVar5 = param_1;
  func_0x000107c5faec();
  func_0x000107c61170();
  func_0x000103b7d088();
  if ((plVar5 == (long *)*param_1) && (pcVar16 == (code *)param_1[1])) {
    func_0x000107c6142c(puVar13);
    func_0x000107c6142c(pcVar16);
    return;
  }
  func_0x000107c605b8(plVar5,pcVar16,(long *)*param_1,(code *)param_1[1],0);
  func_0x000107c6142c(pcVar16);
  if ((((ulong)plVar5 & 1) != 0) || (param_2 == (code *)0x0)) {
    func_0x000107c6142c(puVar13);
    return;
  }
  puVar7 = (undefined8 *)0x112d39140;
  func_0x0001000285a8(0x112d39140,&UNK_10d902e00);
  puVar8 = puVar7;
  func_0x000107c61534();
  puVar8[3] = 2;
  puVar8[2] = 1;
  puVar9 = param_3;
  func_0x000107c6157c();
  func_0x000103b7d164();
  uStack_160 = *puVar9;
  uVar1 = puVar9[1];
  uStack_158 = uVar1;
  func_0x000107c61438(uVar1,2);
  puVar3 = PTR___sSSN_11034da80;
  func_0x000107c602d4(puVar8 + 4,&uStack_160,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  puVar8[0xc] = PTR___sSbN_11034dd40;
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(puVar8 + 9) = 1;
  puVar10 = puVar8;
  func_0x000100dfa3f0();
  func_0x000107c61588(puVar8);
  func_0x000100e1766c(puVar8 + 4);
  lVar4 = _DAT_112f0e178;
  puVar8 = &uStack_160;
  func_0x000107c61428(unaff_x20 + _DAT_112f0e178,puVar8,0x20,0);
  puVar18 = *(undefined8 **)(unaff_x20 + lVar4);
  if (puVar18[2] == 0) {
LAB_102d2afb8:
    func_0x000107c6142c(puVar13);
    puVar12 = &uStack_160;
    func_0x000107c614a8();
  }
  else {
    func_0x000107c61434(puVar18);
    puVar8 = puVar13;
    func_0x000100029284();
    if (((ulong)puVar8 & 1) == 0) {
      func_0x000107c6142c(puVar13);
      puVar13 = puVar18;
      goto LAB_102d2afb8;
    }
    puVar12 = *(undefined8 **)(puVar18[7] + lVar11 * 8);
    func_0x000107c61174();
    func_0x000107c614a8(&uStack_160);
    func_0x000107c6142c(puVar13);
    func_0x000107c6142c(puVar18);
    bVar2 = *(byte *)((long)puVar12 + _DAT_113815250);
    func_0x000107c61170();
    if ((bVar2 & 1) != 0) goto LAB_102d2b070;
  }
  func_0x000107c2bb68();
  func_0x000107c61180();
  if (puVar12 != (undefined8 *)0x0) {
    puVar13 = puVar12;
    func_0x000107c5faec();
    puVar18 = puVar8;
    func_0x000107c61170(puVar12);
    ppuVar14 = &PTR____CFConstantStringClassReference_110f0d778;
    func_0x000107c5faec();
    ppuStack_180 = ppuVar14;
    puStack_178 = puVar18;
    func_0x000107c61434(puVar18);
    func_0x000107c602d4(&uStack_160,&ppuStack_180,puVar3,PTR___sSSSHsWP_11034da90);
    puStack_188 = puVar3;
    puStack_1a0 = puVar13;
    puStack_198 = puVar8;
    func_0x000100102924(&puStack_1a0,&ppuStack_180);
    puVar13 = puVar10;
    func_0x000107c61558(puVar10);
    puStack_1a0 = puVar10;
    func_0x00010192c094(&ppuStack_180,&uStack_160,puVar13);
    func_0x0001007bbff0(&uStack_160);
    func_0x000107c6142c(puVar18);
    puVar10 = puStack_1a0;
  }
LAB_102d2b070:
  func_0x000107c61534(puVar7,auStack_138);
  puVar7[3] = 2;
  puVar7[2] = 1;
  uStack_160 = *puVar9;
  uVar1 = puVar9[1];
  uStack_158 = uVar1;
  func_0x000107c61438(uVar1,2);
  func_0x000107c602d4(puVar7 + 4,&uStack_160,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  puVar7[0xc] = PTR___sSbN_11034dd40;
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(puVar7 + 9) = 1;
  puVar13 = puVar7;
  func_0x000100dfa3f0(puVar7);
  func_0x000107c61588(puVar7);
  func_0x000100e1766c(puVar7 + 4);
  (*param_2)(puVar10,puVar13);
  func_0x000107c6142c(puVar13);
  FUN_1024a96c0(param_2,param_3);
  func_0x000107c6142c(puVar10);
  return;
}



/* Entry: 102d2b120; end: 102d2b137;  */

/* WARNING: Possible PIC construction at 0x0001024a5168: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024a516c) */

void FUN_102d2b120(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  
  puVar1 = PTR___sypN_11034f1a8;
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5f9dc(param_1,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
  }
  if (param_2 != 0) {
    func_0x000107c5f9dc(param_2,PTR___ss11AnyHashableVN_11034e448,puVar1 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
  }
  (**(code **)(lVar2 + 0x10))(lVar2,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102d2b138; end: 102d2b16f;  */

void FUN_102d2b138(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_102d2797c(*(undefined8 *)(unaff_x20 + 0x38),param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 102d2b170; end: 102d2b18b;  */

void FUN_102d2b170(long param_1,long param_2)

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



/* Entry: 102d2b18c; end: 102d2b1b3;  */

void FUN_102d2b18c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 102d2b1b4; end: 102d2b1eb;  */

void FUN_102d2b1b4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_102d293cc(*(undefined8 *)(unaff_x20 + 0x40),param_1,*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 102d2b1ec; end: 102d2b1f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d2b1ec(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar2 = param_1;
  func_0x000101feb98c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 3;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  *(undefined8 *)(lVar2 + 0x20) = uVar1;
  uVar3 = 0;
  FUN_102d2b1f4(0,0x112e0fd70,&PTR_PTR_1126c2098);
  func_0x000107c61174(uVar1);
  lVar4 = lVar2;
  func_0x000107c5fc48(lVar2,uVar3);
  func_0x000107c61574(lVar2);
  func_0x000107c3df1c(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 102d2b1f4; end: 102d2b233;  */

void FUN_102d2b1f4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102d2b234; end: 102d2b26f;  */

void FUN_102d2b234(void)

{
  long unaff_x20;
  
  func_0x000102d29528(*(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                      *(undefined1 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 102d2b270; end: 102d2b28f;  */

void FUN_102d2b270(long param_1,long param_2)

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



/* Entry: 102d2b290; end: 102d2b537;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d2b290(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f0e208) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f0e210) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f0e218) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f0e220) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112f0e228) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112f0e230) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112f0e238) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112f0e240) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f0e248) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112f0e250) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112f0e258) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112f0e260) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_112f0e268) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_112f0e270) = param_14;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102d2b538; end: 102d2b683; -[PayToPromoteOperaScopedServicesCreatorSwift initWithNetworkRequester:circumstanceEngine:bitmojiFriendAvatarProvider:bitmojiAvatarProvider:adConfigProvider:collectionPrefetcher:playableViewModelGenerator:grapheneRegistry:discoverFeedDataMutator:snapchattersDataFetcher:networkConnectivityMonitor:locationProvider:blizzardLogger:adRenderDataParser:] */

void FUN_102d2b538(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  func_0x000107c61174();
  func_0x000107c615f0(param_4);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000102d2b3e4(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
                      param_12,param_13,param_14,param_15,param_16);
  return;
}



/* Entry: 102d2b684; end: 102d2b8b3;  */

undefined * FUN_102d2b684(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar4 = &puStack_90;
  ppuVar6 = &puStack_90;
  ppuVar8 = &puStack_90;
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar3 = &UNK_1105c4a70;
  func_0x000107c613fc(&UNK_1105c4a70,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_70 = FUN_102d2b918;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  uStack_80 = 0x102d2be84;
  puStack_78 = &UNK_1105c4a88;
  puStack_68 = puVar3;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  puVar5 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar3 = &UNK_1105c4ac0;
  func_0x000107c613fc(&UNK_1105c4ac0,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcStack_70 = (code *)0x102d2be80;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  uStack_80 = 0x102d2be88;
  puStack_78 = &UNK_1105c4ad8;
  puStack_68 = puVar3;
  func_0x000107c60bc4(&puStack_90);
  puVar3 = puStack_68;
  func_0x000107c61174();
  func_0x000107c61574(puVar3);
  func_0x000107c3e4fc(puVar5);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar6);
  puVar7 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar3 = &UNK_1105c4b10;
  func_0x000107c613fc(&UNK_1105c4b10,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcStack_70 = FUN_102d2bc70;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  uStack_80 = 0x102d2be8c;
  puStack_78 = &UNK_1105c4b28;
  puStack_68 = puVar3;
  func_0x000107c60bc4(&puStack_90);
  puVar3 = puStack_68;
  func_0x000107c61174(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c3e4fc(puVar7);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar8);
  uVar9 = 0;
  func_0x000103b9e8c0(0);
  func_0x000107c610f8();
  func_0x000103b9e74c(puVar5,puVar7,uVar9);
  func_0x000107c61170(puVar2);
  return puVar5;
}



/* Entry: 102d2b8b4; end: 102d2b917;  */

long FUN_102d2b8b4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    FUN_102d2b920();
    func_0x000107c61170(param_1);
  }
  return lVar1;
}



/* Entry: 102d2b918; end: 102d2b91f;  */

long FUN_102d2b918(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    FUN_102d2b920();
    func_0x000107c61170(lVar1);
  }
  return lVar2;
}



/* Entry: 102d2b920; end: 102d2bc53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d2b920(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long unaff_x20;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lStack_70;
  long lStack_68;
  
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f0e208);
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f0e240);
  uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112f0e210);
  uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112f0e218);
  uVar17 = *(undefined8 *)(unaff_x20 + _DAT_112f0e220);
  uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112f0e228);
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112f0e230);
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112f0e238);
  uVar19 = *(undefined8 *)(unaff_x20 + _DAT_112f0e248);
  uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112f0e250);
  uVar18 = *(undefined8 *)(unaff_x20 + _DAT_112f0e258);
  uVar16 = *(undefined8 *)(unaff_x20 + _DAT_112f0e260);
  uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112f0e270);
  lVar2 = 0;
  FUN_102d29a7c();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112f0e168) = 0;
  func_0x000107c61614(lVar3 + _DAT_112f0e170,0);
  lVar1 = _DAT_112f0e178;
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_10285d8c8();
  *(undefined **)(lVar3 + lVar1) = puVar4;
  lVar1 = _DAT_112f0e180;
  puVar4 = puVar6;
  FUN_102d2a8e0();
  *(undefined **)(lVar3 + lVar1) = puVar4;
  puVar4 = PTR___swiftEmptySetSingleton_11034f1d8;
  *(undefined **)(lVar3 + _DAT_112f0e188) = PTR___swiftEmptySetSingleton_11034f1d8;
  lVar1 = _DAT_112f0e190;
  puVar5 = puVar6;
  func_0x000102d2a9ec();
  *(undefined **)(lVar3 + lVar1) = puVar5;
  lVar1 = _DAT_112f0e198;
  func_0x0001001830b8();
  *(undefined **)(lVar3 + lVar1) = puVar6;
  *(undefined **)(lVar3 + _DAT_112f0e1a0) = puVar4;
  *(undefined1 *)(lVar3 + _DAT_112f0e1c8) = 0;
  *(undefined8 *)(lVar3 + _DAT_112f0e118) = uVar7;
  *(undefined8 *)(lVar3 + _DAT_112f0e120) = uVar15;
  *(undefined8 *)(lVar3 + _DAT_112f0e128) = uVar14;
  *(undefined8 *)(lVar3 + _DAT_112f0e130) = uVar17;
  *(undefined8 *)(lVar3 + _DAT_112f0e138) = uVar12;
  *(undefined8 *)(lVar3 + _DAT_112f0e140) = uVar9;
  *(undefined8 *)(lVar3 + _DAT_112f0e148) = uVar10;
  *(undefined8 *)(lVar3 + _DAT_112f0e150) = uVar19;
  *(undefined8 *)(lVar3 + _DAT_112f0e158) = uVar18;
  *(undefined8 *)(lVar3 + _DAT_112f0e160) = uVar16;
  *(undefined8 *)(lVar3 + _DAT_112f0e1a8) = uVar8;
  *(undefined8 *)(lVar3 + _DAT_112f0e1b0) = uVar13;
  *(undefined8 *)(lVar3 + _DAT_112f0e1b8) = uVar11;
  func_0x000107c61174();
  func_0x000107c61174(uVar15);
  func_0x000107c61174(uVar14);
  func_0x000107c61174(uVar17);
  func_0x000107c61174(uVar12);
  func_0x000107c61174(uVar9);
  func_0x000107c61174(uVar10);
  func_0x000107c61174(uVar19);
  func_0x000107c61174(uVar18);
  func_0x000107c61174(uVar16);
  func_0x000107c615f0(uVar8);
  func_0x000107c61174(uVar13);
  func_0x000107c61174(uVar11);
  uVar7 = 0xd00000000000002f;
  func_0x000107c5fadc(0xd00000000000002f,0x800000010f10aa20);
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar7);
  *(char *)(lVar3 + _DAT_112f0e1c0) = (char)uVar8;
  lStack_70 = lVar3;
  lStack_68 = lVar2;
  func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102d2bc54; end: 102d2bc6f;  */

void FUN_102d2bc54(long param_1,long param_2)

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



/* Entry: 102d2bc70; end: 102d2bc8b;  */

void FUN_102d2bc70(void)

{
  long unaff_x20;
  
  func_0x000107c5c734(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 102d2bc8c; end: 102d2bcc3;  */

void FUN_102d2bc8c(long param_1)

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



/* Entry: 102d2bcc4; end: 102d2bcf7; -[PayToPromoteOperaScopedServicesCreatorSwift createPayToPromoteOperaScopedServices] */

void FUN_102d2bcc4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102d2b684();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102d2bcf8; end: 102d2bd57; -[PayToPromoteOperaScopedServicesCreatorSwift init] */

void FUN_102d2bcf8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCPayToPromoteImplementationSwift.PayToPromoteOperaScopedServicesCreatorSwift"
                      ,0x4d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d2bd24);
  (*pcVar1)();
}



/* Entry: 102d2bd58; end: 102d2be4f; -[PayToPromoteOperaScopedServicesCreatorSwift .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102d2bd74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d2bd94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d2bdb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d2bdd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d2bdf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d2be14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d2be34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d2be18) */
/* WARNING: Removing unreachable block (ram,0x000102d2bdf8) */
/* WARNING: Removing unreachable block (ram,0x000102d2bdd8) */
/* WARNING: Removing unreachable block (ram,0x000102d2bdb8) */
/* WARNING: Removing unreachable block (ram,0x000102d2bd98) */
/* WARNING: Removing unreachable block (ram,0x000102d2bd78) */
/* WARNING: Removing unreachable block (ram,0x000102d2be38) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d2bd58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f0e208));
  return;
}



/* Entry: 102d2be50; end: 102d2be6f;  */

void FUN_102d2be50(void)

{
  func_0x000107c61168(&PTR_PTR_1128a1708);
  return;
}



/* Entry: 102d2be70; end: 102d2be8f;  */

void FUN_102d2be70(long param_1,long param_2)

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



/* Entry: 102d2be90; end: 102d2bfeb;  */

void FUN_102d2be90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  *(undefined8 *)(unaff_x20 + 0x38) = param_7;
  *(undefined8 *)(unaff_x20 + 0x40) = param_8;
  *(undefined8 *)(unaff_x20 + 0x50) = param_10;
  *(undefined8 *)(unaff_x20 + 0x48) = param_9;
  *(undefined8 *)(unaff_x20 + 0x60) = param_12;
  *(undefined8 *)(unaff_x20 + 0x58) = param_11;
  *(undefined8 *)(unaff_x20 + 0x70) = param_14;
  *(undefined8 *)(unaff_x20 + 0x68) = param_13;
  *(undefined8 *)(unaff_x20 + 0x78) = param_15;
  return;
}



/* Entry: 102d2bfec; end: 102d2c0cb;  */

void FUN_102d2bfec(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar2 = &UNK_1105c4b60;
  func_0x000107c613fc(&UNK_1105c4b60,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  pcStack_40 = FUN_102d2c130;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_102d2c624;
  puStack_48 = &UNK_1105c4b78;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x0001003694e0(0);
  func_0x000107c610f8();
  func_0x000103b9e93c(puVar1);
  return;
}



/* Entry: 102d2c0cc; end: 102d2c12f;  */

long FUN_102d2c0cc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    FUN_102d2c138();
    func_0x000107c61574(param_1);
  }
  return lVar1;
}



/* Entry: 102d2c130; end: 102d2c137;  */

long FUN_102d2c130(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    FUN_102d2c138();
    func_0x000107c61574(lVar1);
  }
  return lVar2;
}



/* Entry: 102d2c138; end: 102d2c623;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d2c138(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long unaff_x20;
  undefined8 uVar17;
  long lStack_70;
  long lStack_68;
  
  lVar2 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_11304a480);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    uVar3 = 0xd00000000000001f;
    func_0x000107c5fadc(0xd00000000000001f,0x800000010efb44e0);
    lVar4 = lVar2;
    func_0x000107c3ebdc();
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(uVar3);
    if ((int)lVar4 != 0) {
      lVar2 = *(long *)(unaff_x20 + 0x20);
      func_0x000107c4cfc4();
      func_0x000107c61180();
      if (lVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102d2c61c);
        (*pcVar1)();
      }
      lVar4 = *(long *)(unaff_x20 + 0x18);
      func_0x000107c3fa04();
      func_0x000107c61180();
      if (lVar4 != 0) {
        uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
        func_0x000107c43980();
        func_0x000107c61180();
        uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
        func_0x000107c3e550();
        func_0x000107c61180();
        uVar14 = uVar6;
        func_0x0001003d1364();
        uVar3 = *(undefined8 *)(unaff_x20 + 0x48);
        uVar7 = *(undefined8 *)(*(long *)(unaff_x20 + 0x40) + _DAT_11302ce70);
        uVar17 = *(undefined8 *)(*(long *)(unaff_x20 + 0x40) + _DAT_11302ce78);
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c444a4();
        func_0x000107c61180();
        uVar8 = *(undefined8 *)(unaff_x20 + 0x50);
        func_0x000107c4ac40();
        func_0x000107c61180();
        lVar9 = *(long *)(unaff_x20 + 0x58);
        func_0x000107c5b4b0();
        func_0x000107c61180();
        if (lVar9 != 0) {
          uVar15 = *(undefined8 *)(unaff_x20 + 0x68);
          uVar10 = *(undefined8 *)(*(long *)(unaff_x20 + 0x60) + _DAT_113080ad0);
          func_0x000107c61174();
          func_0x000107c4b8d8();
          func_0x000107c61180();
          uVar11 = *(undefined8 *)(*(long *)(unaff_x20 + 0x70) + _DAT_113083868);
          func_0x000107c61174();
          uVar16 = uVar11;
          func_0x00010040e098();
          lVar12 = 0;
          FUN_102d2be50();
          lVar13 = lVar12;
          func_0x000107c610f8();
          *(long *)(lVar13 + _DAT_112f0e208) = lVar2;
          *(undefined8 *)(lVar13 + _DAT_112f0e210) = uVar5;
          *(undefined8 *)(lVar13 + _DAT_112f0e218) = uVar6;
          *(undefined8 *)(lVar13 + _DAT_112f0e220) = uVar14;
          *(undefined8 *)(lVar13 + _DAT_112f0e228) = uVar7;
          *(undefined8 *)(lVar13 + _DAT_112f0e230) = uVar17;
          *(undefined8 *)(lVar13 + _DAT_112f0e238) = uVar3;
          *(long *)(lVar13 + _DAT_112f0e240) = lVar4;
          *(undefined8 *)(lVar13 + _DAT_112f0e248) = uVar8;
          *(long *)(lVar13 + _DAT_112f0e250) = lVar9;
          *(undefined8 *)(lVar13 + _DAT_112f0e258) = uVar10;
          *(undefined8 *)(lVar13 + _DAT_112f0e260) = uVar15;
          *(undefined8 *)(lVar13 + _DAT_112f0e268) = uVar11;
          *(undefined8 *)(lVar13 + _DAT_112f0e270) = uVar16;
          lStack_70 = lVar13;
          lStack_68 = lVar12;
          func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
          return;
        }
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102d2c624);
        (*pcVar1)();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102d2c620);
      (*pcVar1)();
    }
  }
  lVar2 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c4cfc4();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102d2c610);
    (*pcVar1)();
  }
  lVar4 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar4 != 0) {
    uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
    func_0x000107c43980(uVar5);
    func_0x000107c61180();
    uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
    func_0x000107c3e550();
    func_0x000107c61180();
    uVar14 = uVar6;
    func_0x0001003d1364();
    uVar3 = *(undefined8 *)(unaff_x20 + 0x48);
    uVar7 = *(undefined8 *)(*(long *)(unaff_x20 + 0x40) + _DAT_11302ce70);
    uVar17 = *(undefined8 *)(*(long *)(unaff_x20 + 0x40) + _DAT_11302ce78);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c444a4();
    func_0x000107c61180();
    uVar8 = *(undefined8 *)(unaff_x20 + 0x50);
    func_0x000107c4ac40();
    func_0x000107c61180();
    lVar9 = *(long *)(unaff_x20 + 0x58);
    func_0x000107c5b4b0();
    func_0x000107c61180();
    if (lVar9 != 0) {
      uVar15 = *(undefined8 *)(unaff_x20 + 0x68);
      uVar10 = *(undefined8 *)(*(long *)(unaff_x20 + 0x60) + _DAT_113080ad0);
      func_0x000107c61174();
      func_0x000107c4b8d8();
      func_0x000107c61180();
      uVar11 = *(undefined8 *)(*(long *)(unaff_x20 + 0x70) + _DAT_113083868);
      func_0x000107c61174();
      uVar16 = uVar11;
      func_0x00010040e098();
      func_0x000107c610f8(PTR_PTR_1126ac2f8);
      func_0x000107c47a74();
      func_0x000107c61170(lVar2);
      func_0x000107c615e8(lVar4);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar6);
      func_0x000107c61170(uVar14);
      func_0x000107c61170(uVar7);
      func_0x000107c61170(uVar17);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar8);
      func_0x000107c61170(lVar9);
      func_0x000107c61170(uVar10);
      func_0x000107c61170(uVar15);
      func_0x000107c61170(uVar11);
      func_0x000107c61170(uVar16);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102d2c618);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d2c614);
  (*pcVar1)();
}



/* Entry: 102d2c624; end: 102d2c65b;  */

void FUN_102d2c624(long param_1)

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



/* Entry: 102d2c65c; end: 102d2c677;  */

void FUN_102d2c65c(long param_1,long param_2)

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



/* Entry: 102d2c678; end: 102d2c82b;  */

/* WARNING: Possible PIC construction at 0x000102d2c684: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d2c694: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d2c6a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d2c6b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d2c6c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d2c6d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d2c6e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d2c6d8) */
/* WARNING: Removing unreachable block (ram,0x000102d2c6c8) */
/* WARNING: Removing unreachable block (ram,0x000102d2c6b8) */
/* WARNING: Removing unreachable block (ram,0x000102d2c6a8) */
/* WARNING: Removing unreachable block (ram,0x000102d2c698) */
/* WARNING: Removing unreachable block (ram,0x000102d2c688) */
/* WARNING: Removing unreachable block (ram,0x000102d2c6e8) */

void FUN_102d2c678(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102d2c82c; end: 102d2c913;  */

void FUN_102d2c82c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar2 = &UNK_1105c4b60;
  func_0x000107c613fc(&UNK_1105c4b60,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  uStack_40 = 0x102d2c91c;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_102d2c624;
  puStack_48 = &UNK_1105c4ba0;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x0001003694e0(0);
  func_0x000107c610f8();
  func_0x000103b9e93c();
  *param_1 = puVar1;
  return;
}



/* Entry: 102d2c914; end: 102d2c91f;  */

void FUN_102d2c914(long param_1,long param_2)

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



/* Entry: 102d2c920; end: 102d2c993;  */

void FUN_102d2c920(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x170));
  return;
}



/* Entry: 102d2c994; end: 102d2c9eb;  */

void FUN_102d2c994(void)

{
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0x99) = 0;
  *(undefined8 *)(unaff_x20 + 0x91) = 0;
  *(undefined8 *)(unaff_x20 + 0xb0) = 0;
  *(undefined8 *)(unaff_x20 + 0xa8) = 0;
  *(undefined8 *)(unaff_x20 + 0xc0) = 0;
  *(undefined8 *)(unaff_x20 + 0xb8) = 0;
  *(undefined8 *)(unaff_x20 + 0xd0) = 0;
  *(undefined8 *)(unaff_x20 + 200) = 0;
  *(undefined8 *)(unaff_x20 + 0xd9) = 0;
  *(undefined8 *)(unaff_x20 + 0xd1) = 0;
  *(undefined8 *)(unaff_x20 + 0x100) = 0;
  *(undefined8 *)(unaff_x20 + 0xf8) = 0;
  *(undefined8 *)(unaff_x20 + 0x188) = 0;
  *(undefined8 *)(unaff_x20 + 0xf0) = 0;
  *(undefined8 *)(unaff_x20 + 0xe8) = 0;
  *(undefined8 *)(unaff_x20 + 0x110) = 0;
  *(undefined8 *)(unaff_x20 + 0x108) = 0;
  *(undefined8 *)(unaff_x20 + 0x120) = 0;
  *(undefined8 *)(unaff_x20 + 0x118) = 0;
  *(undefined8 *)(unaff_x20 + 0x130) = 0;
  *(undefined8 *)(unaff_x20 + 0x128) = 0;
  *(undefined8 *)(unaff_x20 + 0x140) = 0;
  *(undefined8 *)(unaff_x20 + 0x138) = 0;
  *(undefined8 *)(unaff_x20 + 0x150) = 0;
  *(undefined8 *)(unaff_x20 + 0x148) = 0;
  *(undefined8 *)(unaff_x20 + 0x160) = 0;
  *(undefined8 *)(unaff_x20 + 0x158) = 0;
  *(undefined8 *)(unaff_x20 + 0x170) = 0;
  *(undefined8 *)(unaff_x20 + 0x168) = 0;
  *(undefined8 *)(unaff_x20 + 0x180) = 0;
  *(undefined8 *)(unaff_x20 + 0x178) = 0;
  return;
}



/* Entry: 102d2c9ec; end: 102d2cae7;  */

undefined * FUN_102d2c9ec(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112f0e5c8,&UNK_10db41a10);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c6157c(uVar9);
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102d2cae4);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102d2cae8);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 102d2cae8; end: 102d2cb07;  */

void FUN_102d2cae8(void)

{
  func_0x000107c61168(&PTR_PTR_112f0e418);
  return;
}



/* Entry: 102d2cb08; end: 102d2cb2f;  */

void FUN_102d2cb08(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1105c4c98;
  if (lRam0000000112f0e5d0 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112f0e5d0 = param_1;
  }
  return;
}



/* Entry: 102d2cb30; end: 102d2cb73;  */

void FUN_102d2cb30(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 102d2cb74; end: 102d2d59b;  */

/* WARNING: Possible PIC construction at 0x000102d2cb88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d2cb8c) */

void FUN_102d2cb74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 102d2d59c; end: 102d2d9b7;  */

undefined * FUN_102d2d59c(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar2 = PTR_PTR_1126ca970;
  func_0x000107c610f8(PTR_PTR_1126ca970);
  func_0x000107c453e4();
  if (param_1[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *param_1;
    func_0x000107c5fadc(uVar3);
  }
  func_0x000107c523c4(puVar2);
  func_0x000107c61170(uVar3);
  if (param_1[3] == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_1[2];
    func_0x000107c5fadc(uVar3);
  }
  func_0x000107c523d0(puVar2);
  func_0x000107c61170(uVar3);
  FUN_102d3369c(param_1[4]);
  func_0x000107c523d8(puVar2);
  if (param_1[6] == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_1[5];
    func_0x000107c5fadc(uVar3);
  }
  func_0x000107c522e0(puVar2);
  func_0x000107c61170(uVar3);
  if (param_1[8] == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_1[7];
    func_0x000107c5fadc(uVar3);
  }
  func_0x000107c52444(puVar2);
  func_0x000107c61170(uVar3);
  func_0x0001084b952c(param_1[0xc]);
  func_0x000107c52384(puVar2);
  func_0x0001084b951c(param_1[0xd]);
  func_0x000107c57058(puVar2);
  func_0x0001084b94a8(param_1[0x21]);
  func_0x000107c57684(puVar2);
  lVar4 = param_1[0x20];
  if (lVar4 != 0) {
    func_0x000107c5fc48(lVar4,PTR___sSSN_11034da80);
    func_0x000107c522a8(puVar2);
    func_0x000107c61170(lVar4);
  }
  func_0x000107c52314(puVar2);
  if (param_1[10] == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_1[9];
    func_0x000107c5fadc(uVar3);
  }
  func_0x000107c59ff8(puVar2);
  func_0x000107c61170(uVar3);
  lVar4 = param_1[0xb];
  if (lVar4 != 0) {
    func_0x000107c61174();
    func_0x000107c4c0a8();
    func_0x000107c59ff0(puVar2);
    func_0x000107c61170(lVar4);
  }
  lVar4 = param_1[0x11];
  if (lVar4 != 1) {
    uVar8 = param_1[0xf];
    uVar6 = param_1[0x10];
    uVar7 = param_1[0x12];
    uVar3 = param_1[0x13];
    lVar1 = param_1[0x14];
    puVar5 = PTR_PTR_1126ca978;
    func_0x000107c610f8(PTR_PTR_1126ca978);
    func_0x000107c453e4();
    uVar9 = 0;
    if (lVar4 != 0) {
      func_0x000107c5fadc(uVar6,lVar4);
      uVar9 = uVar6;
    }
    func_0x000107c52294(puVar5);
    func_0x000107c61170(uVar9);
    FUN_102d3369c(uVar8);
    func_0x000107c52298(puVar5);
    if (lVar1 == 0) {
      uVar3 = 0;
    }
    else {
      func_0x000107c5fadc(uVar3,lVar1);
    }
    func_0x000107c5229c(puVar5);
    func_0x000107c61170(uVar3);
    FUN_102d3369c(uVar7);
    func_0x000107c522a0(puVar5);
    func_0x000107c52290(puVar2);
    func_0x000107c61170(puVar5);
  }
  if (*(char *)(param_1 + 0x17) != '\x01') {
    uVar3 = param_1[0x15];
    puVar5 = PTR_PTR_1126ca980;
    func_0x000107c610f8(PTR_PTR_1126ca980);
    func_0x000107c453e4();
    FUN_102d3369c(uVar3);
    func_0x000107c52308(puVar5);
    func_0x000107c523f4(puVar5);
    func_0x000107c52304(puVar2);
    func_0x000107c61170(puVar5);
  }
  if ((param_1[0x1a] & 0xff) != 2) {
    uVar9 = param_1[0x18];
    uVar3 = param_1[0x19];
    puVar5 = PTR_PTR_1126ca988;
    func_0x000107c610f8(PTR_PTR_1126ca988);
    func_0x000107c453e4();
    FUN_102d3369c(uVar9);
    func_0x000107c52438(puVar5);
    FUN_102d3369c(uVar3);
    func_0x000107c52424(puVar5);
    func_0x000107c52420(puVar5);
    func_0x000107c52434(puVar5);
    func_0x000107c5243c(puVar5);
    func_0x000107c5241c(puVar5);
    func_0x000107c52418(puVar2);
    func_0x000107c61170(puVar5);
  }
  if (*(char *)(param_1 + 0x1f) != '\x02') {
    uVar9 = param_1[0x1d];
    uVar3 = param_1[0x1e];
    puVar5 = PTR_PTR_1126ca990;
    func_0x000107c610f8(PTR_PTR_1126ca990);
    func_0x000107c453e4();
    FUN_102d3369c(uVar9);
    func_0x000107c52378(puVar5);
    FUN_102d3369c(uVar3);
    func_0x000107c52374(puVar5);
    func_0x000107c52370(puVar5);
    func_0x000107c5236c(puVar2);
    func_0x000107c61170(puVar5);
  }
  return puVar2;
}


