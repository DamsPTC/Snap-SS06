/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1040ca99c; end: 1040ca9cb;  */

void FUN_1040ca99c(long param_1)

{
  FUN_1040ca7e0();
                    /* WARNING: Could not recover jumptable at 0x0001040ca9c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + -8) + 8))();
  return;
}



/* Entry: 1040ca9cc; end: 1040ca9d3;  */

void FUN_1040ca9cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbffa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_11034f228)();
  return;
}



/* Entry: 1040ca9d4; end: 1040caa4b;  */

void FUN_1040ca9d4(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_30;
  undefined *puStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = PTR___syycWV_11034f1c0 + 0x40;
    _swift_initStructMetadata(param_1,0,2,&lStack_30,param_1 + 0x40);
  }
  return;
}



/* Entry: 1040caa4c; end: 1040caafb;  */

long * FUN_1040caa4c(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar2 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  lVar5 = *(long *)(lVar2 + 0x40);
  if ((*(uint *)(lVar2 + 0x50) & 0x1000f8) == 0 && (lVar5 + 7U & 0xfffffffffffffff8) + 0x10 < 0x19)
  {
    (**(code **)(lVar2 + 0x10))(param_1);
    puVar3 = (undefined8 *)((long)param_1 + lVar5 + 7 & 0xffffffffffffff8);
    puVar4 = (undefined8 *)((long)param_2 + lVar5 + 7 & 0xfffffffffffffff8);
    lVar2 = puVar4[1];
    uVar6 = *puVar4;
    puVar3[1] = puVar4[1];
    *puVar3 = uVar6;
  }
  else {
    uVar1 = *(uint *)(lVar2 + 0x50) & 0xf8;
    lVar2 = *param_2;
    *param_1 = lVar2;
    param_1 = (long *)(lVar2 + ((ulong)(uVar1 + 0x17 & (uVar1 ^ 0xffffffff)) & 0x1f8));
  }
  _swift_retain(lVar2);
  return param_1;
}



/* Entry: 1040caafc; end: 1040cab3b;  */

void FUN_1040caafc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  (**(code **)(lVar1 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)
            (*(undefined8 *)((param_1 + *(long *)(lVar1 + 0x40) + 7U & 0xffffffffffffff8) + 8));
  return;
}



/* Entry: 1040cab3c; end: 1040caccf;  */

long FUN_1040cab3c(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar4 + 0x10))();
  lVar4 = *(long *)(lVar4 + 0x40) + 7;
  puVar3 = (undefined8 *)(lVar4 + param_1 & 0xffffffffffffff8);
  puVar2 = (undefined8 *)(lVar4 + param_2 & 0xfffffffffffffff8);
  uVar1 = puVar2[1];
  uVar5 = *puVar2;
  puVar3[1] = puVar2[1];
  *puVar3 = uVar5;
  _swift_retain(uVar1);
  return param_1;
}



/* Entry: 1040cacd0; end: 1040cadc3;  */

uint * FUN_1040cacd0(uint *param_1,uint param_2,long param_3)

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
      goto LAB_1040cad60;
    }
    else if (uVar3 == 2) {
      uVar9 = (uint)*(ushort *)((long)param_1 + uVar7);
      if (*(ushort *)((long)param_1 + uVar7) != 0) {
LAB_1040cad60:
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
      if (uVar9 != 0) goto LAB_1040cad60;
    }
  }
  if (0x7ffffffe < uVar5) {
                    /* WARNING: Could not recover jumptable at 0x0001040cad9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar8 + 0x30))();
    return param_1;
  }
  uVar7 = *(ulong *)((long)param_1 + *(long *)(lVar8 + 0x40) + 7 & 0xffffffffffffff8);
  if (0xfffffffe < uVar7) {
    uVar7 = 0xffffffff;
  }
  return (uint *)(ulong)((int)uVar7 + 1);
}



/* Entry: 1040cadc4; end: 1040caf23;  */

void FUN_1040cadc4(int *param_1,uint param_2,uint param_3,long param_4)

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
                    /* WARNING: Could not recover jumptable at 0x0001040caed4. Too many branches */
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
        *puVar7 = (ulong)(param_2 - 1);
      }
    }
  }
  else {
    if ((int)lVar1 != 0) {
      iVar6 = 1;
      _bzero(param_1,lVar1);
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



/* Entry: 1040caf24; end: 1040caf2b;  */

void FUN_1040caf24(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbffa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_11034f228)();
  return;
}



/* Entry: 1040caf2c; end: 1040cb023;  */

void FUN_1040caf2c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  uVar4 = *(ulong *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  lVar1 = 0x13f;
  uVar3 = uVar4;
  _swift_getAssociatedTypeWitness
            (0x13f,uVar4,uVar5,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  if (uVar3 < 0x40) {
    lStack_48 = *(long *)(lVar1 + -8) + 0x40;
    puStack_40 = PTR___syycWV_11034f1c0 + 0x40;
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,uVar4,uVar5,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
    uVar3 = 0xff;
    _swift_getTupleTypeMetadata2(0xff,uVar6,uVar2,0,0);
    lVar1 = 0x13f;
    __sSqMa();
    if (uVar3 < 0x40) {
      lStack_38 = *(long *)(lVar1 + -8) + 0x40;
      _swift_initStructMetadata(param_1,0,3,&lStack_48,param_1 + 0x40);
    }
  }
  return;
}



/* Entry: 1040cb024; end: 1040cb2e3;  */

long * FUN_1040cb024(long *param_1,long *param_2,long param_3)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  uint *puVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long lVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  long lVar26;
  
  puVar7 = PTR___sSciTL_11034fea8;
  uVar21 = *(undefined8 *)(param_3 + 0x28);
  uVar22 = *(undefined8 *)(param_3 + 0x10);
  lVar9 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar21,uVar22,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar26 = *(long *)(lVar9 + -8);
  lVar19 = *(long *)(lVar26 + 0x40);
  lVar14 = *(long *)(param_3 + 0x18);
  lVar20 = *(long *)(lVar14 + -8);
  uVar18 = *(uint *)(lVar20 + 0x50);
  lVar10 = 0;
  _swift_getAssociatedTypeWitness(0,uVar21,uVar22,puVar7,PTR___s7ElementSciTl_11034fb58);
  lVar23 = *(long *)(lVar10 + -8);
  uVar4 = *(uint *)(lVar23 + 0x54);
  uVar15 = (ulong)*(uint *)(lVar23 + 0x50) & 0xff;
  uVar18 = *(uint *)(lVar23 + 0x50) | uVar18;
  uVar2 = uVar18 & 0xff;
  uVar5 = *(uint *)(lVar20 + 0x54);
  uVar16 = *(long *)(lVar20 + 0x40) + uVar15;
  lVar11 = (uVar16 & (uVar15 ^ 0xffffffffffffffff)) + *(long *)(lVar23 + 0x40);
  lVar3 = lVar11;
  if (uVar4 == 0 && uVar5 == 0) {
    lVar3 = lVar11 + 1;
  }
  uVar6 = uVar2 | *(uint *)(lVar26 + 0x50) & 0xf8;
  if ((7 < uVar6 || ((*(uint *)(lVar26 + 0x50) | uVar18) & 0x100000) != 0) ||
      ((-0x11 - (lVar19 + 7U & 0xfffffffffffffff8)) - (ulong)uVar2 | (ulong)uVar2) - lVar3 <
      0xffffffffffffffe7) {
    uVar16 = (ulong)(uVar6 | 7);
    lVar11 = *param_2;
    *param_1 = lVar11;
    _swift_retain();
    return (long *)(lVar11 + (uVar16 + 0x10 & (uVar16 ^ 0xffffffffffffffff)));
  }
  uVar15 = ~uVar15;
  (**(code **)(lVar26 + 0x10))(param_1,param_2,lVar9);
  puVar24 = (undefined8 *)((long)param_1 + lVar19 + 7 & 0xffffffffffffff8);
  puVar17 = (undefined8 *)((long)param_2 + lVar19 + 7 & 0xfffffffffffffff8);
  uVar21 = puVar17[1];
  uVar22 = *puVar17;
  puVar25 = puVar24 + 2;
  puVar24[1] = puVar17[1];
  *puVar24 = uVar22;
  puVar1 = (uint *)(puVar17 + 2);
  _swift_retain(uVar21);
  if (uVar4 == 0 && uVar5 == 0) {
    if (*(byte *)((long)puVar1 + lVar11) != 0) {
      uVar18 = (uint)lVar11;
      uVar2 = 0;
      if (uVar18 < 4) {
        uVar2 = *(byte *)((long)puVar1 + lVar11) - 1 << (ulong)((uVar18 & 3) << 3);
      }
      if (uVar18 == 0) {
        uVar18 = 0;
      }
      else {
        uVar6 = 4;
        if (uVar18 < 4) {
          uVar6 = uVar18;
        }
        if ((int)uVar6 < 3) {
          if (uVar6 == 1) {
            uVar18 = (uint)(byte)*puVar1;
          }
          else {
            uVar18 = (uint)(ushort)*puVar1;
          }
        }
        else if (uVar6 == 3) {
          uVar18 = (uint)(uint3)*puVar1;
        }
        else {
          uVar18 = *puVar1;
        }
      }
      if ((uVar18 | uVar2) != 0xffffffff) goto LAB_1040cb234;
    }
  }
  else {
    if (uVar5 < uVar4) {
      uVar12 = (ulong)(uVar16 + (long)puVar1) & uVar15;
      (**(code **)(lVar23 + 0x30))(uVar12,uVar4,lVar10);
      iVar8 = (int)uVar12;
    }
    else {
      puVar13 = puVar1;
      (**(code **)(lVar20 + 0x30))(puVar1,uVar5,lVar14);
      iVar8 = (int)puVar13;
    }
    if (iVar8 != 0) {
LAB_1040cb234:
      _memcpy(puVar25,puVar1,lVar3);
      return param_1;
    }
  }
  (**(code **)(lVar20 + 0x10))(puVar25,puVar1,lVar14);
  (**(code **)(lVar23 + 0x10))
            (uVar16 + (long)puVar25 & uVar15,(ulong)(uVar16 + (long)puVar1) & uVar15,lVar10);
  if (uVar4 == 0 && uVar5 == 0) {
    *(undefined1 *)((long)puVar25 + lVar11) = 0;
  }
  return param_1;
}



/* Entry: 1040cb2e4; end: 1040cb4c3;  */

void FUN_1040cb2e4(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined *puVar4;
  long lVar5;
  uint *puVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  code *pcVar10;
  ulong uVar11;
  undefined8 uVar12;
  uint *puVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  
  puVar4 = PTR___sSciTL_11034fea8;
  uVar12 = *(undefined8 *)(param_2 + 0x28);
  uVar14 = *(undefined8 *)(param_2 + 0x10);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar12,uVar14,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar16 = *(long *)(lVar5 + -8);
  (**(code **)(lVar16 + 8))(param_1,lVar5);
  uVar18 = param_1 + *(long *)(lVar16 + 0x40) + 7U & 0xfffffffffffffff8;
  _swift_release(*(undefined8 *)(uVar18 + 8));
  lVar16 = *(long *)(param_2 + 0x18);
  lVar17 = *(long *)(lVar16 + -8);
  bVar3 = *(byte *)(lVar17 + 0x50);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness(0,uVar12,uVar14,puVar4,PTR___s7ElementSciTl_11034fb58);
  lVar15 = *(long *)(lVar5 + -8);
  uVar2 = *(uint *)(lVar15 + 0x54);
  uVar11 = (ulong)(*(uint *)(lVar15 + 0x50) & 0xff | (uint)bVar3);
  uVar9 = (ulong)*(uint *)(lVar15 + 0x50) & 0xff;
  puVar13 = (uint *)(uVar18 + uVar11 + 0x10 & (uVar11 ^ 0xffffffffffffffff));
  uVar8 = *(uint *)(lVar17 + 0x54);
  uVar11 = *(long *)(lVar17 + 0x40) + uVar9;
  if (uVar2 == 0 && uVar8 == 0) {
    uVar18 = (uVar11 & (uVar9 ^ 0xffffffffffffffff)) + *(long *)(lVar15 + 0x40);
    if (*(byte *)((long)puVar13 + uVar18) != 0) {
      uVar8 = (uint)uVar18;
      uVar2 = 0;
      if (uVar8 < 4) {
        uVar2 = *(byte *)((long)puVar13 + uVar18) - 1 << (ulong)((uVar8 & 3) << 3);
      }
      if (uVar8 != 0) {
        uVar1 = 4;
        if (uVar8 < 4) {
          uVar1 = uVar8;
        }
        if ((int)uVar1 < 3) {
          if (uVar1 == 1) {
            uVar18 = (ulong)(byte)*puVar13;
          }
          else {
            uVar18 = (ulong)(ushort)*puVar13;
          }
        }
        else if (uVar1 == 3) {
          uVar18 = (ulong)(uint3)*puVar13;
        }
        else {
          uVar18 = (ulong)*puVar13;
        }
      }
      if (((uint)uVar18 | uVar2) != 0xffffffff) {
        return;
      }
    }
  }
  else {
    if (uVar8 < uVar2) {
      pcVar10 = *(code **)(lVar15 + 0x30);
      puVar6 = (uint *)(uVar11 + (long)puVar13 & ~uVar9);
      lVar7 = lVar5;
      uVar8 = uVar2;
    }
    else {
      pcVar10 = *(code **)(lVar17 + 0x30);
      puVar6 = puVar13;
      lVar7 = lVar16;
    }
    (*pcVar10)(puVar6,uVar8,lVar7);
    if ((int)puVar6 != 0) {
      return;
    }
  }
  (**(code **)(lVar17 + 8))(puVar13,lVar16);
                    /* WARNING: Could not recover jumptable at 0x0001040cb4c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar15 + 8))(uVar11 + (long)puVar13 & ~uVar9,lVar5);
  return;
}



/* Entry: 1040cb4c4; end: 1040cc767;  */

long FUN_1040cb4c4(long param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  uint *puVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  uint *puVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  
  puVar6 = PTR___sSciTL_11034fea8;
  uVar17 = *(undefined8 *)(param_3 + 0x28);
  uVar18 = *(undefined8 *)(param_3 + 0x10);
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar17,uVar18,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar20 = *(long *)(lVar8 + -8);
  (**(code **)(lVar20 + 0x10))(param_1,param_2,lVar8);
  lVar8 = *(long *)(lVar20 + 0x40) + 7;
  puVar21 = (undefined8 *)(lVar8 + param_1 & 0xfffffffffffffff8);
  puVar16 = (undefined8 *)(lVar8 + param_2 & 0xfffffffffffffff8);
  uVar22 = puVar16[1];
  uVar25 = *puVar16;
  puVar21[1] = puVar16[1];
  *puVar21 = uVar25;
  lVar10 = *(long *)(param_3 + 0x18);
  lVar23 = *(long *)(lVar10 + -8);
  bVar5 = *(byte *)(lVar23 + 0x50);
  lVar20 = 0;
  _swift_getAssociatedTypeWitness(0,uVar17,uVar18,puVar6,PTR___s7ElementSciTl_11034fb58);
  lVar24 = *(long *)(lVar20 + -8);
  uVar3 = *(uint *)(lVar24 + 0x54);
  uVar11 = (ulong)*(uint *)(lVar24 + 0x50) & 0xff;
  uVar13 = (ulong)(*(uint *)(lVar24 + 0x50) & 0xff | (uint)bVar5);
  uVar15 = uVar13 + 0x10 + (long)puVar21 & (uVar13 ^ 0xffffffffffffffff);
  puVar19 = (uint *)(uVar13 + 0x10 + (long)puVar16 & (uVar13 ^ 0xffffffffffffffff));
  uVar4 = *(uint *)(lVar23 + 0x54);
  uVar14 = ~uVar11;
  uVar13 = *(long *)(lVar23 + 0x40) + uVar11;
  lVar8 = (uVar13 & (uVar11 ^ 0xffffffffffffffff)) + *(long *)(lVar24 + 0x40);
  _swift_retain(uVar22);
  if (uVar3 == 0 && uVar4 == 0) {
    if (*(byte *)((long)puVar19 + lVar8) != 0) {
      uVar12 = (uint)lVar8;
      uVar1 = 0;
      if (uVar12 < 4) {
        uVar1 = *(byte *)((long)puVar19 + lVar8) - 1 << (ulong)((uVar12 & 3) << 3);
      }
      if (uVar12 == 0) {
        uVar12 = 0;
      }
      else {
        uVar2 = 4;
        if (uVar12 < 4) {
          uVar2 = uVar12;
        }
        if ((int)uVar2 < 3) {
          if (uVar2 == 1) {
            uVar12 = (uint)(byte)*puVar19;
          }
          else {
            uVar12 = (uint)(ushort)*puVar19;
          }
        }
        else if (uVar2 == 3) {
          uVar12 = (uint)(uint3)*puVar19;
        }
        else {
          uVar12 = *puVar19;
        }
      }
      if ((uVar12 | uVar1) != 0xffffffff) goto LAB_1040cb660;
    }
  }
  else {
    if (uVar4 < uVar3) {
      uVar11 = (ulong)(uVar13 + (long)puVar19) & uVar14;
      (**(code **)(lVar24 + 0x30))(uVar11,uVar3,lVar20);
      iVar7 = (int)uVar11;
    }
    else {
      puVar9 = puVar19;
      (**(code **)(lVar23 + 0x30))(puVar19,uVar4,lVar10);
      iVar7 = (int)puVar9;
    }
    if (iVar7 != 0) {
LAB_1040cb660:
      if (uVar3 == 0 && uVar4 == 0) {
        lVar8 = lVar8 + 1;
      }
      _memcpy(uVar15,puVar19,lVar8);
      return param_1;
    }
  }
  (**(code **)(lVar23 + 0x10))(uVar15,puVar19,lVar10);
  (**(code **)(lVar24 + 0x10))
            (uVar13 + uVar15 & uVar14,(ulong)(uVar13 + (long)puVar19) & uVar14,lVar20);
  if (uVar3 == 0 && uVar4 == 0) {
    *(undefined1 *)(uVar15 + lVar8) = 0;
  }
  return param_1;
}



/* Entry: 1040cc768; end: 1040cc913;  */

void FUN_1040cc768(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 unaff_x20;
  long lVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 uVar10;
  
  *(undefined8 *)(unaff_x22 + 0x80) = param_1;
  *(undefined8 *)(unaff_x22 + 0x88) = unaff_x20;
  lVar8 = *(long *)(param_2 + 0x18);
  *(long *)(unaff_x22 + 0x90) = lVar8;
  lVar4 = *(long *)(lVar8 + -8);
  *(long *)(unaff_x22 + 0x98) = lVar4;
  uVar1 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa0) = uVar1;
  uVar9 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar9;
  uVar10 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar10;
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar9,uVar10,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  *(long *)(unaff_x22 + 0xb8) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0xc0) = lVar4;
  uVar1 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 200) = uVar2;
  uVar1 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xd0) = uVar1;
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(unaff_x22 + 0xd8) = uVar5;
  uVar6 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar6;
  uVar7 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar10;
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar7;
  *(long *)(unaff_x22 + 0x18) = lVar8;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar7;
  lVar4 = 0xff;
  FUN_1040cd208();
  *(long *)(unaff_x22 + 0xf0) = lVar4;
  lVar3 = 0;
  __sSqMa(0,lVar4);
  *(long *)(unaff_x22 + 0xf8) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x100) = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x108) = uVar1;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x110) = lVar4;
  uVar1 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x118) = uVar2;
  uVar1 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x120) = uVar1;
  lVar4 = 0;
  __sSqMa(0,lVar8);
  *(long *)(unaff_x22 + 0x128) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x130) = lVar4;
  uVar1 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x138) = uVar2;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x140) = uVar2;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x148) = uVar2;
  uVar1 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x150) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1040cc914,0,0);
  return;
}



/* Entry: 1040cc914; end: 1040ccb47;  */

void FUN_1040cc914(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  code *pcVar12;
  long unaff_x22;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  
  bVar4 = *(byte *)(*(long *)(unaff_x22 + 0x88) + 0x18);
  pcVar12 = *(code **)(*(long *)(unaff_x22 + 0x98) + 0x38);
  *(code **)(unaff_x22 + 0x158) = pcVar12;
  if ((bVar4 & 1) != 0) {
    (*pcVar12)(*(undefined8 *)(unaff_x22 + 0x80),1,1,*(undefined8 *)(unaff_x22 + 0x90));
    uVar1 = *(undefined8 *)(unaff_x22 + 0x148);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x138);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x140);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x118);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x120);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x108);
    uVar9 = *(undefined8 *)(unaff_x22 + 200);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar15 = *(undefined8 *)(unaff_x22 + 0xa0);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x150));
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar6);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar13);
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar14);
    _swift_task_dealloc(uVar3);
    _swift_task_dealloc(uVar9);
    _swift_task_dealloc(uVar15);
                    /* WARNING: Could not recover jumptable at 0x0001040cc9ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  (*pcVar12)(*(undefined8 *)(unaff_x22 + 0x150),1,1,*(undefined8 *)(unaff_x22 + 0x90));
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xb0);
  lVar16 = *(long *)(unaff_x22 + 0x88);
  plVar5 = (long *)0x30;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x160) = plVar5;
  uVar6 = 0xff;
  __ss16AsyncMapSequenceVMa(0xff,uVar9,uVar2,uVar7);
  uVar7 = 0xff;
  __sSaMa(0xff,uVar2);
  puVar8 = PTR___sSayxGSTsMc_11034dd08;
  _swift_getWitnessTable(PTR___sSayxGSTsMc_11034dd08,uVar7);
  uVar9 = 0xff;
  FUN_1040e4a64(0xff,uVar7,puVar8);
  puVar11 = PTR___ss16AsyncMapSequenceVyxq_GScisMc_11034ffb0;
  puVar10 = PTR___ss16AsyncMapSequenceVyxq_GScisMc_11034ffb0;
  _swift_getWitnessTable(PTR___ss16AsyncMapSequenceVyxq_GScisMc_11034ffb0,uVar6);
  puVar8 = &UNK_10dcd71a0;
  _swift_getWitnessTable(&UNK_10dcd71a0,uVar9);
  *(undefined8 *)(unaff_x22 + 0x40) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar9;
  *(undefined **)(unaff_x22 + 0x50) = puVar10;
  *(undefined **)(unaff_x22 + 0x58) = puVar8;
  uVar7 = 0xff;
  FUN_1040c16d0();
  uVar9 = 0xff;
  __ss16AsyncMapSequenceVMa(0xff,uVar13,uVar2,uVar1);
  puVar8 = &UNK_10dcd63b0;
  _swift_getWitnessTable(&UNK_10dcd63b0,uVar7);
  _swift_getWitnessTable(puVar11,uVar9);
  *(undefined8 *)(unaff_x22 + 0x60) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar9;
  *(undefined **)(unaff_x22 + 0x70) = puVar8;
  *(undefined **)(unaff_x22 + 0x78) = puVar11;
  func_0x000104147a88(0);
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1040ccb48;
  plVar5[2] = *(long *)(unaff_x22 + 0x108);
  plVar5[3] = lVar16 + 0x10;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104146d38,0,0);
  return;
}



/* Entry: 1040ccb48; end: 1040ccba3;  */

void FUN_1040ccb48(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x168) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x160));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1040ccba4;
  }
  else {
    pcVar1 = FUN_1040cd140;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1040ccba4; end: 1040cd13f;  */

void FUN_1040ccba4(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long unaff_x22;
  undefined8 uVar16;
  long lVar17;
  code *pcVar18;
  undefined8 uVar19;
  code *pcVar20;
  undefined8 uVar21;
  code *pcVar22;
  undefined8 uVar23;
  long lVar24;
  
  uVar14 = *(undefined8 *)(unaff_x22 + 0x108);
  lVar24 = *(long *)(unaff_x22 + 0x110);
  uVar13 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar8 = uVar14;
  (**(code **)(lVar24 + 0x30))(uVar14,1,uVar13);
  if ((int)uVar8 == 1) {
    uVar13 = *(undefined8 *)(unaff_x22 + 0x150);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x128);
    lVar24 = *(long *)(unaff_x22 + 0x130);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x80);
    (**(code **)(*(long *)(unaff_x22 + 0x100) + 8))(uVar14,*(undefined8 *)(unaff_x22 + 0xf8));
    (**(code **)(lVar24 + 0x20))(uVar16,uVar13,uVar8);
  }
  else {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x118);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x120);
    uVar16 = *(undefined8 *)(unaff_x22 + 0xb8);
    lVar17 = *(long *)(unaff_x22 + 0xc0);
    (**(code **)(lVar24 + 0x20))(uVar7,uVar14,uVar13);
    (**(code **)(lVar24 + 0x10))(uVar8,uVar7,uVar13);
    (**(code **)(lVar17 + 0x30))(uVar8,2,uVar16);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x150);
    if ((int)uVar8 == 0) {
      uVar16 = *(undefined8 *)(unaff_x22 + 0x148);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x128);
      lVar24 = *(long *)(unaff_x22 + 0x130);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x90);
      lVar17 = *(long *)(unaff_x22 + 0x98);
      (**(code **)(*(long *)(unaff_x22 + 0xc0) + 0x20))
                (*(undefined8 *)(unaff_x22 + 0xd0),*(undefined8 *)(unaff_x22 + 0x118),
                 *(undefined8 *)(unaff_x22 + 0xb8));
      pcVar18 = *(code **)(lVar24 + 0x10);
      (*pcVar18)(uVar16,uVar14,uVar8);
      pcVar20 = *(code **)(lVar17 + 0x30);
      uVar14 = uVar16;
      (*pcVar20)(uVar16,1,uVar13);
      pcVar22 = *(code **)(lVar24 + 8);
      (*pcVar22)(uVar16,uVar8);
      if ((int)uVar14 == 1) {
        uVar14 = *(undefined8 *)(unaff_x22 + 0x150);
        pcVar1 = *(code **)(unaff_x22 + 0x158);
        uVar16 = *(undefined8 *)(unaff_x22 + 0x140);
        uVar8 = *(undefined8 *)(unaff_x22 + 0x128);
        lVar24 = *(long *)(unaff_x22 + 0x130);
        uVar13 = *(undefined8 *)(unaff_x22 + 0x90);
        __sSmxycfCTj(uVar16,uVar13,*(undefined8 *)(unaff_x22 + 0xe0));
        (*pcVar1)(uVar16,0,1,uVar13);
        (**(code **)(lVar24 + 0x28))(uVar14,uVar16,uVar8);
      }
      uVar14 = *(undefined8 *)(unaff_x22 + 0x150);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x90);
      (**(code **)(*(long *)(unaff_x22 + 0xc0) + 0x10))
                (*(undefined8 *)(unaff_x22 + 200),*(undefined8 *)(unaff_x22 + 0xd0),
                 *(undefined8 *)(unaff_x22 + 0xb8));
      (*pcVar20)(uVar14,1,uVar8);
      if ((int)uVar14 == 1) {
                    /* WARNING: Does not return */
        pcVar20 = (code *)SoftwareBreakpoint(1,0x1040cd140);
        (*pcVar20)();
      }
      uVar14 = *(undefined8 *)(unaff_x22 + 0x150);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x90);
      __sSm6appendyy7ElementQznFTj
                (*(undefined8 *)(unaff_x22 + 200),uVar8,*(undefined8 *)(unaff_x22 + 0xe0));
      (*pcVar20)(uVar14,1,uVar8);
      if ((int)uVar14 == 0) {
        uVar13 = *(undefined8 *)(unaff_x22 + 0x120);
        lVar12 = *(long *)(unaff_x22 + 0x110);
        uVar16 = *(undefined8 *)(unaff_x22 + 0xf0);
        lVar15 = *(long *)(unaff_x22 + 0xe0);
        uVar7 = *(undefined8 *)(unaff_x22 + 0xd0);
        uVar14 = *(undefined8 *)(unaff_x22 + 0xb8);
        lVar2 = *(long *)(unaff_x22 + 0xc0);
        lVar24 = *(long *)(unaff_x22 + 0x98);
        uVar8 = *(undefined8 *)(unaff_x22 + 0xa0);
        lVar17 = *(long *)(unaff_x22 + 0x88);
        lVar3 = *(long *)(unaff_x22 + 0x90);
        (**(code **)(lVar24 + 0x10))(uVar8,*(undefined8 *)(unaff_x22 + 0x150),lVar3);
        lVar5 = lVar3;
        __sSl5countSivgTj(lVar3,*(undefined8 *)(lVar15 + 8));
        (**(code **)(lVar24 + 8))(uVar8,lVar3);
        (**(code **)(lVar2 + 8))(uVar7,uVar14);
        (**(code **)(lVar12 + 8))(uVar13,uVar16);
        if ((*(char *)(lVar17 + 8) == '\x01') || (lVar5 != **(long **)(unaff_x22 + 0x88)))
        goto LAB_1040ccff8;
      }
      else {
        uVar8 = *(undefined8 *)(unaff_x22 + 0x120);
        lVar24 = *(long *)(unaff_x22 + 0x110);
        uVar14 = *(undefined8 *)(unaff_x22 + 0xf0);
        lVar17 = *(long *)(unaff_x22 + 0x88);
        (**(code **)(*(long *)(unaff_x22 + 0xc0) + 8))
                  (*(undefined8 *)(unaff_x22 + 0xd0),*(undefined8 *)(unaff_x22 + 0xb8));
        (**(code **)(lVar24 + 8))(uVar8,uVar14);
        if (*(char *)(lVar17 + 8) != '\x01') {
LAB_1040ccff8:
          uVar14 = *(undefined8 *)(unaff_x22 + 0xe8);
          uVar13 = *(undefined8 *)(unaff_x22 + 0xf0);
          uVar19 = *(undefined8 *)(unaff_x22 + 0xd8);
          uVar8 = *(undefined8 *)(unaff_x22 + 0xa8);
          uVar16 = *(undefined8 *)(unaff_x22 + 0xb0);
          lVar24 = *(long *)(unaff_x22 + 0x88);
          plVar6 = (long *)0x30;
          _swift_task_alloc();
          *(long **)(unaff_x22 + 0x160) = plVar6;
          uVar7 = 0xff;
          __ss16AsyncMapSequenceVMa(0xff,uVar16,uVar13,uVar8);
          uVar8 = 0xff;
          __sSaMa(0xff,uVar13);
          puVar9 = PTR___sSayxGSTsMc_11034dd08;
          _swift_getWitnessTable(PTR___sSayxGSTsMc_11034dd08,uVar8);
          uVar16 = 0xff;
          FUN_1040e4a64(0xff,uVar8,puVar9);
          puVar11 = PTR___ss16AsyncMapSequenceVyxq_GScisMc_11034ffb0;
          puVar10 = PTR___ss16AsyncMapSequenceVyxq_GScisMc_11034ffb0;
          _swift_getWitnessTable(PTR___ss16AsyncMapSequenceVyxq_GScisMc_11034ffb0,uVar7);
          puVar9 = &UNK_10dcd71a0;
          _swift_getWitnessTable(&UNK_10dcd71a0,uVar16);
          *(undefined8 *)(unaff_x22 + 0x40) = uVar7;
          *(undefined8 *)(unaff_x22 + 0x48) = uVar16;
          *(undefined **)(unaff_x22 + 0x50) = puVar10;
          *(undefined **)(unaff_x22 + 0x58) = puVar9;
          uVar8 = 0xff;
          FUN_1040c16d0();
          uVar16 = 0xff;
          __ss16AsyncMapSequenceVMa(0xff,uVar19,uVar13,uVar14);
          puVar9 = &UNK_10dcd63b0;
          _swift_getWitnessTable(&UNK_10dcd63b0,uVar8);
          _swift_getWitnessTable(puVar11,uVar16);
          *(undefined8 *)(unaff_x22 + 0x60) = uVar8;
          *(undefined8 *)(unaff_x22 + 0x68) = uVar16;
          *(undefined **)(unaff_x22 + 0x70) = puVar9;
          *(undefined **)(unaff_x22 + 0x78) = puVar11;
          func_0x000104147a88(0);
          *plVar6 = unaff_x22;
          plVar6[1] = (long)FUN_1040ccb48;
          plVar6[2] = *(long *)(unaff_x22 + 0x108);
          plVar6[3] = lVar24 + 0x10;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_task_switch_110350130)(FUN_104146d38,0,0);
          return;
        }
      }
      uVar8 = *(undefined8 *)(unaff_x22 + 0x150);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x128);
      (*pcVar18)(*(undefined8 *)(unaff_x22 + 0x80),uVar8,uVar14);
      (*pcVar22)(uVar8,uVar14);
    }
    else if ((int)uVar8 == 1) {
      uVar8 = *(undefined8 *)(unaff_x22 + 0x128);
      lVar24 = *(long *)(unaff_x22 + 0x130);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x80);
      lVar17 = *(long *)(unaff_x22 + 0x88);
      (**(code **)(*(long *)(unaff_x22 + 0x110) + 8))
                (*(undefined8 *)(unaff_x22 + 0x120),*(undefined8 *)(unaff_x22 + 0xf0));
      *(undefined1 *)(lVar17 + 0x18) = 1;
      (**(code **)(lVar24 + 0x10))(uVar13,uVar14,uVar8);
      (**(code **)(lVar24 + 8))(uVar14,uVar8);
    }
    else {
      lVar24 = *(long *)(unaff_x22 + 0x130);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x138);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x128);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x90);
      lVar17 = *(long *)(unaff_x22 + 0x98);
      (**(code **)(*(long *)(unaff_x22 + 0x110) + 8))
                (*(undefined8 *)(unaff_x22 + 0x120),*(undefined8 *)(unaff_x22 + 0xf0));
      pcVar20 = *(code **)(lVar24 + 0x10);
      (*pcVar20)(uVar13,uVar14,uVar16);
      (**(code **)(lVar17 + 0x30))(uVar13,1,uVar8);
      if ((int)uVar13 == 1) {
        (**(code **)(*(long *)(unaff_x22 + 0x130) + 8))
                  (*(undefined8 *)(unaff_x22 + 0x138),*(undefined8 *)(unaff_x22 + 0x128));
        goto LAB_1040ccff8;
      }
      uVar8 = *(undefined8 *)(unaff_x22 + 0x150);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x128);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x80);
      pcVar18 = *(code **)(*(long *)(unaff_x22 + 0x130) + 8);
      (*pcVar18)(*(undefined8 *)(unaff_x22 + 0x138),uVar14);
      (*pcVar20)(uVar13,uVar8,uVar14);
      (*pcVar18)(uVar8,uVar14);
    }
  }
  uVar14 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar16 = *(undefined8 *)(unaff_x22 + 200);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar23 = *(undefined8 *)(unaff_x22 + 0xa0);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x150));
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar23);
                    /* WARNING: Could not recover jumptable at 0x0001040ccff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040cd140; end: 1040cd207;  */

void FUN_1040cd140(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 uVar10;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar4 = *(undefined8 *)(unaff_x22 + 200);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xa0);
  (**(code **)(*(long *)(unaff_x22 + 0x130) + 8))(uVar5,*(undefined8 *)(unaff_x22 + 0x128));
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar9);
                    /* WARNING: Could not recover jumptable at 0x0001040cd204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040cd208; end: 1040cd213;  */

void FUN_1040cd208(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getGenericMetadata_11034f380)(param_1,param_2,&UNK_10e7efbe0);
  return;
}



/* Entry: 1040cd214; end: 1040cd273;  */

void FUN_1040cd214(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  long lVar8;
  long unaff_x22;
  long lVar9;
  
  plVar3 = (long *)0x170;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1040cd274;
  plVar3[0x10] = param_1;
  plVar3[0x11] = unaff_x20;
  lVar7 = *(long *)(param_2 + 0x18);
  plVar3[0x12] = lVar7;
  lVar4 = *(long *)(lVar7 + -8);
  plVar3[0x13] = lVar4;
  uVar1 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar3[0x14] = uVar1;
  lVar8 = *(long *)(param_2 + 0x28);
  plVar3[0x15] = lVar8;
  lVar9 = *(long *)(param_2 + 0x10);
  plVar3[0x16] = lVar9;
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,lVar8,lVar9,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  plVar3[0x17] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar3[0x18] = lVar4;
  uVar1 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar3[0x19] = uVar2;
  uVar1 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar3[0x1a] = uVar1;
  lVar4 = *(long *)(param_2 + 0x20);
  plVar3[0x1b] = lVar4;
  lVar5 = *(long *)(param_2 + 0x30);
  plVar3[0x1c] = lVar5;
  lVar6 = *(long *)(param_2 + 0x38);
  plVar3[2] = lVar9;
  plVar3[0x1d] = lVar6;
  plVar3[3] = lVar7;
  plVar3[4] = lVar4;
  plVar3[5] = lVar8;
  plVar3[6] = lVar5;
  plVar3[7] = lVar6;
  lVar4 = 0xff;
  FUN_1040cd208();
  plVar3[0x1e] = lVar4;
  lVar5 = 0;
  __sSqMa(0,lVar4);
  plVar3[0x1f] = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  plVar3[0x20] = lVar5;
  uVar1 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar3[0x21] = uVar1;
  lVar4 = *(long *)(lVar4 + -8);
  plVar3[0x22] = lVar4;
  uVar1 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar3[0x23] = uVar2;
  uVar1 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar3[0x24] = uVar1;
  lVar4 = 0;
  __sSqMa(0,lVar7);
  plVar3[0x25] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar3[0x26] = lVar4;
  uVar1 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar3[0x27] = uVar2;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar3[0x28] = uVar2;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar3[0x29] = uVar2;
  uVar1 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar3[0x2a] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1040cc914,0,0);
  return;
}



/* Entry: 1040cd274; end: 1040cd2af;  */

void FUN_1040cd274(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001040cd2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1040cd2b0; end: 1040cd387;  */

void FUN_1040cd2b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_4;
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_5 + 0x28),*(undefined8 *)(param_5 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7FailureSciTl_11034fb60);
  *(long *)(unaff_x22 + 0x18) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x20) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x28) = uVar2;
  plVar3 = (long *)(ulong)*(uint *)(
                                   PTR___sScIsE4next9isolation7ElementQzSgScA_pSgYi_tYa7FailureQzYKFTu_11034fc58
                                   + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x30) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1040cd388;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScIsE4next9isolation7ElementQzSgScA_pSgYi_tYa7FailureQzYKF_11034fc50)
            (plVar3,param_1,param_2,param_3,param_5,param_6,uVar2);
  return;
}



/* Entry: 1040cd388; end: 1040cd3f7;  */

void FUN_1040cd388(void)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x30));
  if (unaff_x20 == 0) {
    _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x28));
    UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 8);
  }
  else {
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    (**(code **)(*(long *)(lVar2 + 0x20) + 0x20))
              (*(undefined8 *)(lVar2 + 0x10),uVar1,*(undefined8 *)(lVar2 + 0x18));
    _swift_task_dealloc(uVar1);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001040cd3f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1040cd3f8; end: 1040cd93b;  */

undefined8 FUN_1040cd3f8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long lVar10;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar11;
  long extraout_x8_03;
  long extraout_x8_04;
  ulong uVar12;
  long lVar13;
  long unaff_x20;
  undefined8 uVar14;
  long lVar15;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar13 = *(long *)(param_1 + 0x20);
  lStack_e0 = *(long *)(lVar13 + -8);
  lVar3 = param_1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_e0 + 0x40));
  lVar10 = (long)&lStack_160 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = *(long *)(lVar3 + 0x10);
  uStack_b8 = *(undefined8 *)(lVar3 + 0x18);
  uVar5 = *(undefined8 *)(lVar3 + 0x28);
  uStack_b0 = *(undefined8 *)(lVar3 + 0x30);
  uVar14 = *(undefined8 *)(lVar3 + 0x38);
  lVar2 = 0xff;
  lStack_e8 = lVar10;
  uStack_d0 = uVar5;
  uStack_c0 = uVar14;
  lStack_98 = lVar1;
  lStack_90 = uStack_b8;
  puStack_88 = (undefined *)lVar13;
  puStack_80 = (undefined *)uVar5;
  uStack_78 = uStack_b0;
  uStack_70 = uVar14;
  FUN_1040cd208(0xff,&lStack_98);
  lVar3 = 0;
  lStack_160 = lVar13;
  __ss16AsyncMapSequenceVMa(0,lVar13,lVar2,uVar14);
  lStack_d8 = *(long *)(lVar3 + -8);
  lStack_c8 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_d8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar10 = lVar10 - extraout_x8_00;
  lVar15 = *(long *)(lVar1 + -8);
  lStack_f0 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lVar10 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __ss16AsyncMapSequenceVMa(0,lVar1,lVar2,uVar5);
  lStack_100 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_100 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = lVar10 - extraout_x8_02;
  uVar5 = 0xff;
  lStack_158 = lVar11;
  __sSaMa(0xff,lVar2);
  puVar6 = PTR___sSayxGSTsMc_11034dd08;
  uStack_128 = uVar5;
  _swift_getWitnessTable(PTR___sSayxGSTsMc_11034dd08,uVar5);
  uVar14 = 0xff;
  puStack_130 = puVar6;
  FUN_1040e4a64(0xff,uVar5,puVar6);
  puVar9 = PTR___ss16AsyncMapSequenceVyxq_GScisMc_11034ffb0;
  puVar7 = PTR___ss16AsyncMapSequenceVyxq_GScisMc_11034ffb0;
  uStack_138 = uVar14;
  _swift_getWitnessTable(PTR___ss16AsyncMapSequenceVyxq_GScisMc_11034ffb0,lVar4);
  puVar6 = &UNK_10dcd71a0;
  puStack_140 = puVar7;
  _swift_getWitnessTable(&UNK_10dcd71a0,uVar14);
  lVar8 = 0;
  puStack_148 = puVar6;
  lStack_98 = lVar4;
  lStack_90 = uVar14;
  puStack_88 = puVar7;
  puStack_80 = puVar6;
  FUN_1040c16d0(0,&lStack_98);
  lStack_f8 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_f8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar11 = lVar11 - extraout_x8_03;
  puVar6 = &UNK_10dcd63b0;
  lStack_150 = lVar11;
  _swift_getWitnessTable(&UNK_10dcd63b0,lVar8);
  lVar3 = lStack_c8;
  puStack_118 = puVar6;
  _swift_getWitnessTable(puVar9,lStack_c8);
  lStack_90 = lVar3;
  lVar3 = 0;
  puStack_120 = puVar9;
  lStack_98 = lVar8;
  puStack_88 = puVar6;
  puStack_80 = puVar9;
  FUN_104147a7c(0,&lStack_98);
  lStack_108 = *(long *)(lVar3 + -8);
  lStack_110 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_108 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = lVar11 - extraout_x8_04;
  (**(code **)(lVar15 + 0x10))(lVar10,unaff_x20,lVar1);
  puVar6 = &UNK_110745598;
  _swift_allocObject(&UNK_110745598,0x40,7);
  uVar5 = uStack_d0;
  lVar3 = lStack_158;
  *(long *)(puVar6 + 0x10) = lVar1;
  *(undefined8 *)(puVar6 + 0x18) = uStack_b8;
  *(long *)(puVar6 + 0x20) = lVar13;
  *(undefined8 *)(puVar6 + 0x28) = uStack_d0;
  *(undefined8 *)(puVar6 + 0x30) = uStack_b0;
  *(undefined8 *)(puVar6 + 0x38) = uStack_c0;
  __sScisE3mapys16AsyncMapSequenceVyxqd__Gqd__7ElementQzYaclF
            (lStack_158,&UNK_10dcd6770,puVar6,lVar1,lVar2,uStack_d0);
  _swift_release(puVar6);
  lVar10 = 0;
  __ss23_ContiguousArrayStorageCMa(0,lVar2);
  uVar12 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  _swift_allocObject();
  __sSa13_adoptStorage_5countSayxG_SpyxGts016_ContiguousArrayB0CyxGn_SitFZ();
  lVar13 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar5,lVar1,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  (**(code **)(*(long *)(lVar13 + -8) + 0x38))
            (lVar10 + (uVar12 + 0x20 & (uVar12 ^ 0xffffffffffffffff)),1,2,lVar13);
  __sSaMa(0,lVar2);
  lStack_98 = lVar10;
  FUN_1040e3fa0(&uStack_a0,uStack_128,puStack_130);
  _swift_bridgeObjectRelease(lVar10);
  lVar10 = lStack_150;
  FUN_1040c15bc(lStack_150,lVar3,&uStack_a0,lVar4,uStack_138,puStack_140,puStack_148);
  _swift_bridgeObjectRelease(uStack_a0);
  (**(code **)(lStack_100 + 8))(lVar3,lVar4);
  lVar3 = lStack_160;
  (**(code **)(lStack_e0 + 0x10))(lStack_e8,unaff_x20 + *(int *)(param_1 + 0x44),lStack_160);
  puVar6 = &UNK_1107455c0;
  _swift_allocObject(&UNK_1107455c0,0x40,7);
  lVar4 = lStack_f0;
  *(long *)(puVar6 + 0x10) = lVar1;
  *(undefined8 *)(puVar6 + 0x18) = uStack_b8;
  *(long *)(puVar6 + 0x20) = lVar3;
  *(undefined8 *)(puVar6 + 0x28) = uStack_d0;
  *(undefined8 *)(puVar6 + 0x30) = uStack_b0;
  *(undefined8 *)(puVar6 + 0x38) = uStack_c0;
  __sScisE3mapys16AsyncMapSequenceVyxqd__Gqd__7ElementQzYaclF
            (lStack_f0,&UNK_10dcd6780,puVar6,lVar3,lVar2);
  _swift_release(puVar6);
  lVar1 = lStack_c8;
  FUN_104146d8c(lVar11,lVar10,lVar4,lVar8,lStack_c8,puStack_118,puStack_120);
  (**(code **)(lStack_d8 + 8))(lVar4,lVar1);
  (**(code **)(lStack_f8 + 8))(lVar10,lVar8);
  lVar1 = lStack_110;
  FUN_104146ea0(lStack_110);
  (**(code **)(lStack_108 + 8))(lVar11,lVar1);
  return *(undefined8 *)(unaff_x20 + *(int *)(param_1 + 0x48));
}



/* Entry: 1040cd93c; end: 1040cd957;  */

void FUN_1040cd93c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_6;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1040cd958,0,0);
  return;
}



/* Entry: 1040cd958; end: 1040cd9db;  */

void FUN_1040cd958(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  long lVar4;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x18);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(unaff_x22 + 0x28),*(undefined8 *)(unaff_x22 + 0x20),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  lVar4 = *(long *)(lVar3 + -8);
  (**(code **)(lVar4 + 0x10))(uVar1,uVar2,lVar3);
  (**(code **)(lVar4 + 0x38))(uVar1,0,2,lVar3);
                    /* WARNING: Could not recover jumptable at 0x0001040cd9d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040cd9dc; end: 1040cda6f;  */

void FUN_1040cd9dc(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  plVar7 = (long *)0x30;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = 0x1040cf220;
  plVar7[4] = lVar1;
  plVar7[5] = lVar5;
  plVar7[2] = param_1;
  plVar7[3] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1040cd958,0,0,uVar4,uVar2,lVar5,uVar3,uVar6);
  return;
}



/* Entry: 1040cda70; end: 1040cda8b;  */

void FUN_1040cda70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
  *(undefined8 *)(unaff_x22 + 0x20) = param_6;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1040cda8c,0,0);
  return;
}



/* Entry: 1040cda8c; end: 1040cdaef;  */

void FUN_1040cda8c(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(unaff_x22 + 0x20),*(undefined8 *)(unaff_x22 + 0x18),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(uVar2,2,2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x0001040cdaec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040cdaf0; end: 1040cdb53;  */

void FUN_1040cdaf0(long *param_1,long param_2,undefined1 param_3,long param_4)

{
  long lVar1;
  
  lVar1 = param_2;
  FUN_1040cd3f8();
  (**(code **)(*(long *)(param_2 + -8) + 8))();
  *param_1 = lVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  param_1[2] = param_4;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1040cdb54; end: 1040cdbe7;  */

void FUN_1040cdb54(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  plVar7 = (long *)0x30;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_1040cdbe8;
  plVar7[3] = lVar1;
  plVar7[4] = lVar5;
  plVar7[2] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1040cda8c,0,0,uVar4,uVar2,lVar5,uVar3,uVar6);
  return;
}



/* Entry: 1040cdbe8; end: 1040cdc23;  */

void FUN_1040cdbe8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001040cdc20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1040cdc24; end: 1040cdcb3;  */

void FUN_1040cdc24(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR___sSciTL_11034fea8;
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar3,uVar4,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  _swift_getAssociatedConformanceWitness
            (uVar3,uVar4,uVar2,puVar1,PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
                    /* WARNING: Could not recover jumptable at 0x00010bdc01b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getAssociatedConformanceWitness_11034f328)();
  return;
}



/* Entry: 1040cdcb4; end: 1040cdcc3;  */

void FUN_1040cdcb4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getWitnessTable_11034f410)(&UNK_10dcd6798,param_1);
  return;
}



/* Entry: 1040cdcc4; end: 1040cdd57;  */

void FUN_1040cdcc4(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    uVar2 = *(ulong *)(param_1 + 0x20);
    lVar1 = 0x13f;
    _swift_checkMetadataState();
    if (uVar2 < 0x40) {
      lStack_30 = *(long *)(lVar1 + -8) + 0x40;
      puStack_28 = &UNK_10dcd6858;
      _swift_initStructMetadata(param_1,0,3,&lStack_38,param_1 + 0x40);
    }
  }
  return;
}



/* Entry: 1040cdd58; end: 1040cde67;  */

long * FUN_1040cdd58(long *param_1,long *param_2,long param_3)

{
  undefined1 uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  
  lVar7 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  lVar9 = *(long *)(param_3 + 0x20);
  lVar11 = *(long *)(lVar9 + -8);
  uVar4 = (ulong)*(uint *)(lVar11 + 0x50) & 0xff;
  uVar5 = *(long *)(lVar7 + 0x40) + uVar4;
  lVar3 = *(long *)(lVar11 + 0x40) + 7;
  uVar2 = (uint)uVar4 | *(uint *)(lVar7 + 0x50) & 0xf8;
  if ((uVar2 < 8 && ((*(uint *)(lVar7 + 0x50) | *(uint *)(lVar11 + 0x50)) & 0x100000) == 0) &&
      (lVar3 + (uVar5 & (uVar4 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 9 < 0x19) {
    (**(code **)(lVar7 + 0x10))(param_1);
    uVar10 = uVar5 + (long)param_1 & ~uVar4;
    uVar5 = uVar5 + (long)param_2 & ~uVar4;
    (**(code **)(lVar11 + 0x10))(uVar10,uVar5,lVar9);
    puVar8 = (undefined8 *)(lVar3 + uVar5 & 0xfffffffffffffff8);
    uVar1 = *(undefined1 *)(puVar8 + 1);
    puVar6 = (undefined8 *)(lVar3 + uVar10 & 0xfffffffffffffff8);
    *puVar6 = *puVar8;
    *(undefined1 *)(puVar6 + 1) = uVar1;
  }
  else {
    uVar5 = (ulong)(uVar2 | 7);
    lVar3 = *param_2;
    *param_1 = lVar3;
    param_1 = (long *)(lVar3 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 1040cde68; end: 1040ce12f;  */

void FUN_1040cde68(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  (**(code **)(lVar3 + 8))();
  lVar1 = *(long *)(*(long *)(param_2 + 0x20) + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x0001040cdebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(*(long *)(lVar3 + 0x40) + param_1 + uVar2 & (uVar2 ^ 0xffffffffffffffff))
  ;
  return;
}



/* Entry: 1040ce130; end: 1040ce253;  */

uint * FUN_1040ce130(uint *param_1,uint param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  
  lVar11 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar6 = *(uint *)(lVar11 + 0x54);
  lVar12 = *(long *)(*(long *)(param_3 + 0x20) + -8);
  uVar9 = *(uint *)(lVar12 + 0x54);
  uVar3 = uVar9;
  if (uVar9 <= uVar6) {
    uVar3 = uVar6;
  }
  if (param_2 == 0) {
    return (uint *)0x0;
  }
  uVar13 = (ulong)*(byte *)(lVar12 + 0x50);
  uVar2 = *(long *)(lVar11 + 0x40) + uVar13;
  if (uVar3 <= param_2 && param_2 - uVar3 != 0) {
    lVar1 = (*(long *)(lVar12 + 0x40) + (uVar2 & (uVar13 ^ 0xffffffffffffffff)) + 7 &
            0xfffffffffffffff8) + 9;
    uVar10 = (uint)lVar1;
    uVar8 = 2;
    uVar5 = uVar8;
    if (uVar10 < 4) {
      uVar5 = ((param_2 - uVar3) + 0xff >> 8) + 1;
    }
    if (0xffff < uVar5) {
      uVar8 = 4;
    }
    if (uVar5 < 0x100) {
      uVar8 = 1;
    }
    uVar4 = 0;
    if (1 < uVar5) {
      uVar4 = uVar8;
    }
    if (uVar4 < 2) {
      if ((uVar4 != 0) &&
         (uVar8 = (uint)*(byte *)((long)param_1 + lVar1), *(byte *)((long)param_1 + lVar1) != 0)) {
LAB_1040ce1cc:
        uVar6 = uVar8 - 1 << (ulong)((uVar10 & 3) << 3);
        if (uVar10 < 4) {
          uVar9 = (uint)(byte)*param_1;
        }
        else {
          uVar9 = *param_1;
          uVar6 = 0;
        }
        return (uint *)(ulong)(uVar3 + (uVar9 | uVar6) + 1);
      }
    }
    else {
      if (uVar4 == 2) {
        uVar8 = (uint)*(ushort *)((long)param_1 + lVar1);
      }
      else {
        uVar8 = *(uint *)((long)param_1 + lVar1);
      }
      if (uVar8 != 0) goto LAB_1040ce1cc;
    }
    if (uVar3 == 0) {
      return (uint *)0x0;
    }
  }
  if (uVar6 < uVar9) {
    puVar7 = (uint *)((ulong)(uVar2 + (long)param_1) & ~uVar13);
                    /* WARNING: Could not recover jumptable at 0x0001040ce22c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar12 + 0x30))(puVar7,uVar9,*(long *)(param_3 + 0x20));
    return puVar7;
  }
                    /* WARNING: Could not recover jumptable at 0x0001040ce23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar11 + 0x30))();
  return param_1;
}



/* Entry: 1040ce254; end: 1040ce3eb;  */

void FUN_1040ce254(uint *param_1,undefined8 param_2,uint param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  code *UNRECOVERED_JUMPTABLE;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  
  lVar9 = *(long *)(param_4 + 0x10);
  lVar12 = *(long *)(lVar9 + -8);
  uVar8 = *(uint *)(lVar12 + 0x54);
  lVar11 = *(long *)(param_4 + 0x20);
  lVar13 = *(long *)(lVar11 + -8);
  uVar5 = *(uint *)(lVar13 + 0x54);
  uVar3 = uVar5;
  if (uVar5 <= uVar8) {
    uVar3 = uVar8;
  }
  uVar14 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar2 = *(long *)(lVar12 + 0x40) + uVar14;
  lVar1 = (*(long *)(lVar13 + 0x40) + (uVar2 & (uVar14 ^ 0xffffffffffffffff)) + 7 &
          0xfffffffffffffff8) + 9;
  uVar7 = (uint)param_2;
  if (param_3 < uVar3 || param_3 - uVar3 == 0) {
    uVar6 = 0;
  }
  else {
    uVar15 = 2;
    uVar4 = uVar15;
    if ((uint)lVar1 < 4) {
      uVar4 = ((param_3 - uVar3) + 0xff >> 8) + 1;
    }
    if (0xffff < uVar4) {
      uVar15 = 4;
    }
    if (uVar4 < 0x100) {
      uVar15 = 1;
    }
    uVar6 = 0;
    if (1 < uVar4) {
      uVar6 = uVar15;
    }
  }
  if (uVar3 < uVar7) {
    uVar7 = uVar7 + ~uVar3;
    _bzero(param_1,lVar1);
    iVar10 = 1;
    if ((uint)lVar1 < 4) {
      iVar10 = (uVar7 >> 8) + 1;
      *(char *)param_1 = (char)uVar7;
    }
    else {
      *param_1 = uVar7;
    }
    if (uVar6 < 2) {
      if (uVar6 != 0) {
        *(char *)((long)param_1 + lVar1) = (char)iVar10;
      }
    }
    else if (uVar6 == 2) {
      *(short *)((long)param_1 + lVar1) = (short)iVar10;
    }
    else {
      *(int *)((long)param_1 + lVar1) = iVar10;
    }
  }
  else {
    if (uVar6 < 2) {
      if (uVar6 != 0) {
        *(undefined1 *)((long)param_1 + lVar1) = 0;
        if (uVar7 == 0) {
          return;
        }
        goto LAB_1040ce370;
      }
    }
    else if (uVar6 == 2) {
      *(undefined2 *)((long)param_1 + lVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar1) = 0;
    }
    if (uVar7 != 0) {
LAB_1040ce370:
      if (uVar8 < uVar5) {
        UNRECOVERED_JUMPTABLE = *(code **)(lVar13 + 0x38);
        param_1 = (uint *)(uVar2 + (long)param_1 & ~uVar14);
        lVar9 = lVar11;
        uVar8 = uVar5;
      }
      else {
        UNRECOVERED_JUMPTABLE = *(code **)(lVar12 + 0x38);
      }
                    /* WARNING: Could not recover jumptable at 0x0001040ce3c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,param_2,uVar8,lVar9);
      return;
    }
  }
  return;
}



/* Entry: 1040ce3ec; end: 1040ce3f7;  */

void FUN_1040ce3ec(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getGenericMetadata_11034f380)(param_1,param_2,&UNK_10e7efb20);
  return;
}



/* Entry: 1040ce3f8; end: 1040ce423;  */

long FUN_1040ce3f8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1040ce424; end: 1040ce42b;  */

void FUN_1040ce424(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 1040ce42c; end: 1040ce46f;  */

undefined8 * FUN_1040ce42c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  _swift_retain();
  return param_1;
}



/* Entry: 1040ce470; end: 1040ce4cb;  */

undefined8 * FUN_1040ce470(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_retain();
  _swift_release(uVar1);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  return param_1;
}



/* Entry: 1040ce4cc; end: 1040ce517;  */

undefined8 * FUN_1040ce4cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_release(uVar1);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  return param_1;
}



/* Entry: 1040ce518; end: 1040ce5b7;  */

int FUN_1040ce518(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x19) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1040ce5b8; end: 1040ce623;  */

void FUN_1040ce5b8(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x28);
  lVar1 = 0x13f;
  _swift_getAssociatedTypeWitness
            (0x13f,uVar2,*(undefined8 *)(param_1 + 0x10),PTR___sSciTL_11034fea8,
             PTR___s7ElementSciTl_11034fb58);
  if (uVar2 < 0x40) {
    _swift_initEnumMetadataSinglePayload(param_1,0,*(long *)(lVar1 + -8) + 0x40,2);
  }
  return;
}



/* Entry: 1040ce624; end: 1040ce7df;  */

long * FUN_1040ce624(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  lVar9 = *(long *)(lVar3 + -8);
  uVar1 = *(uint *)(lVar9 + 0x54);
  uVar8 = *(ulong *)(lVar9 + 0x40);
  uVar7 = (uint)uVar8;
  uVar5 = uVar8;
  if (uVar1 < 2) {
    if (uVar7 < 4) {
      uVar2 = (~(-1 << (ulong)(uVar7 << 3 & 0x1f)) - uVar1) + 2 >> (ulong)(uVar7 << 3 & 0x1f);
      uVar5 = 2;
      if (0xfffe < uVar2) {
        uVar5 = 4;
      }
      if (uVar2 < 0xff) {
        uVar5 = (ulong)(uVar2 != 0);
      }
    }
    else {
      uVar5 = 1;
    }
    uVar5 = uVar5 + uVar8;
  }
  uVar6 = (ulong)*(uint *)(lVar9 + 0x50) & 0xff;
  if (((uint)uVar6 < 8 && uVar5 < 0x19) && (*(uint *)(lVar9 + 0x50) & 0x100000) == 0) {
    plVar4 = param_2;
    (**(code **)(lVar9 + 0x30))(param_2,2,lVar3);
    if ((int)plVar4 != 0) {
      if (uVar1 < 2) {
        if (uVar7 < 4) {
          uVar1 = (~(-1 << (ulong)(uVar7 << 3 & 0x1f)) - uVar1) + 2 >> (ulong)(uVar7 << 3 & 0x1f);
          uVar5 = 2;
          if (0xfffe < uVar1) {
            uVar5 = 4;
          }
          if (uVar1 < 0xff) {
            uVar5 = (ulong)(uVar1 != 0);
          }
        }
        else {
          uVar5 = 1;
        }
        uVar8 = uVar5 + uVar8;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)(param_1,param_2,uVar8);
      return param_1;
    }
    (**(code **)(lVar9 + 0x10))(param_1,param_2,lVar3);
    (**(code **)(lVar9 + 0x38))(param_1,0,2,lVar3);
  }
  else {
    lVar3 = *param_2;
    *param_1 = lVar3;
    param_1 = (long *)(lVar3 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 1040ce7e0; end: 1040ce977;  */

void FUN_1040ce7e0(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  lVar3 = *(long *)(lVar1 + -8);
  uVar2 = param_1;
  (**(code **)(lVar3 + 0x30))(param_1,2,lVar1);
  if ((int)uVar2 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001040ce860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))(param_1,lVar1);
  return;
}



/* Entry: 1040ce978; end: 1040ceaf3;  */

undefined8 FUN_1040ce978(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  lVar7 = *(long *)(lVar2 + -8);
  pcVar8 = *(code **)(lVar7 + 0x30);
  uVar3 = param_1;
  (*pcVar8)(param_1,2,lVar2);
  uVar4 = param_2;
  (*pcVar8)(param_2,2,lVar2);
  if ((int)uVar3 == 0) {
    if ((int)uVar4 == 0) {
      (**(code **)(lVar7 + 0x18))(param_1,param_2,lVar2);
      return param_1;
    }
    (**(code **)(lVar7 + 8))(param_1,lVar2);
    uVar5 = *(uint *)(lVar7 + 0x54);
    lVar2 = *(long *)(lVar7 + 0x40);
    if (1 < uVar5) goto LAB_1040cea7c;
    if (3 < (uint)lVar2) goto LAB_1040cea04;
LAB_1040cea38:
    uVar1 = (int)lVar2 << 3;
    uVar5 = (~(-1 << (ulong)(uVar1 & 0x1f)) - uVar5) + 2 >> (ulong)(uVar1 & 0x1f);
    uVar6 = 2;
    if (0xfffe < uVar5) {
      uVar6 = 4;
    }
    if (uVar5 < 0xff) {
      uVar6 = (ulong)(uVar5 != 0);
    }
  }
  else {
    if ((int)uVar4 == 0) {
      (**(code **)(lVar7 + 0x10))(param_1,param_2,lVar2);
      (**(code **)(lVar7 + 0x38))(param_1,0,2,lVar2);
      return param_1;
    }
    uVar5 = *(uint *)(lVar7 + 0x54);
    lVar2 = *(long *)(lVar7 + 0x40);
    if (1 < uVar5) goto LAB_1040cea7c;
    if ((uint)lVar2 < 4) goto LAB_1040cea38;
LAB_1040cea04:
    uVar6 = 1;
  }
  lVar2 = uVar6 + lVar2;
LAB_1040cea7c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_1,param_2,lVar2);
  return param_1;
}



/* Entry: 1040ceaf4; end: 1040cec07;  */

undefined8 FUN_1040ceaf4(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  lVar5 = *(long *)(lVar2 + -8);
  uVar3 = param_2;
  (**(code **)(lVar5 + 0x30))(param_2,2,lVar2);
  if ((int)uVar3 != 0) {
    lVar2 = *(long *)(lVar5 + 0x40);
    if (*(uint *)(lVar5 + 0x54) < 2) {
      if ((uint)lVar2 < 4) {
        uVar1 = (uint)lVar2 << 3;
        uVar1 = (~(-1 << (ulong)(uVar1 & 0x1f)) - *(uint *)(lVar5 + 0x54)) + 2 >>
                (ulong)(uVar1 & 0x1f);
        uVar4 = 2;
        if (0xfffe < uVar1) {
          uVar4 = 4;
        }
        if (uVar1 < 0xff) {
          uVar4 = (ulong)(uVar1 != 0);
        }
      }
      else {
        uVar4 = 1;
      }
      lVar2 = uVar4 + lVar2;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)(param_1,param_2,lVar2);
    return param_1;
  }
  (**(code **)(lVar5 + 0x20))(param_1,param_2,lVar2);
  (**(code **)(lVar5 + 0x38))(param_1,0,2,lVar2);
  return param_1;
}



/* Entry: 1040cec08; end: 1040ced83;  */

undefined8 FUN_1040cec08(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  lVar7 = *(long *)(lVar2 + -8);
  pcVar8 = *(code **)(lVar7 + 0x30);
  uVar3 = param_1;
  (*pcVar8)(param_1,2,lVar2);
  uVar4 = param_2;
  (*pcVar8)(param_2,2,lVar2);
  if ((int)uVar3 == 0) {
    if ((int)uVar4 == 0) {
      (**(code **)(lVar7 + 0x28))(param_1,param_2,lVar2);
      return param_1;
    }
    (**(code **)(lVar7 + 8))(param_1,lVar2);
    uVar5 = *(uint *)(lVar7 + 0x54);
    lVar2 = *(long *)(lVar7 + 0x40);
    if (1 < uVar5) goto LAB_1040ced0c;
    if (3 < (uint)lVar2) goto LAB_1040cec94;
LAB_1040cecc8:
    uVar1 = (int)lVar2 << 3;
    uVar5 = (~(-1 << (ulong)(uVar1 & 0x1f)) - uVar5) + 2 >> (ulong)(uVar1 & 0x1f);
    uVar6 = 2;
    if (0xfffe < uVar5) {
      uVar6 = 4;
    }
    if (uVar5 < 0xff) {
      uVar6 = (ulong)(uVar5 != 0);
    }
  }
  else {
    if ((int)uVar4 == 0) {
      (**(code **)(lVar7 + 0x20))(param_1,param_2,lVar2);
      (**(code **)(lVar7 + 0x38))(param_1,0,2,lVar2);
      return param_1;
    }
    uVar5 = *(uint *)(lVar7 + 0x54);
    lVar2 = *(long *)(lVar7 + 0x40);
    if (1 < uVar5) goto LAB_1040ced0c;
    if ((uint)lVar2 < 4) goto LAB_1040cecc8;
LAB_1040cec94:
    uVar6 = 1;
  }
  lVar2 = uVar6 + lVar2;
LAB_1040ced0c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_1,param_2,lVar2);
  return param_1;
}



/* Entry: 1040ced84; end: 1040cef27;  */

int FUN_1040ced84(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  lVar5 = *(long *)(lVar4 + -8);
  uVar2 = *(uint *)(lVar5 + 0x54);
  uVar1 = 0;
  if (1 < uVar2) {
    uVar1 = uVar2 - 2;
  }
  uVar7 = *(ulong *)(lVar5 + 0x40);
  if (uVar2 < 2) {
    if ((uint)uVar7 < 4) {
      uVar3 = (uint)uVar7 << 3;
      uVar3 = (~(-1 << (ulong)(uVar3 & 0x1f)) - uVar2) + 2 >> (ulong)(uVar3 & 0x1f);
      uVar8 = 2;
      if (0xfffe < uVar3) {
        uVar8 = 4;
      }
      if (uVar3 < 0xff) {
        uVar8 = (ulong)(uVar3 != 0);
      }
    }
    else {
      uVar8 = 1;
    }
    uVar7 = uVar8 + uVar7;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < uVar1 || param_2 - uVar1 == 0) goto LAB_1040ceeac;
  uVar6 = (uint)uVar7;
  uVar3 = uVar6 << 3;
  if (uVar6 < 4) {
    uVar9 = ((param_2 - uVar1) + ~(-1 << (ulong)(uVar3 & 0x1f)) >> (ulong)(uVar3 & 0x1f)) + 1;
    if (uVar9 < 0x100) {
      if (uVar9 < 2) goto LAB_1040ceeac;
      goto LAB_1040cee44;
    }
    if (uVar9 >> 0x10 == 0) {
      uVar9 = (uint)*(ushort *)((long)param_1 + uVar7);
    }
    else {
      uVar9 = *(uint *)((long)param_1 + uVar7);
    }
  }
  else {
LAB_1040cee44:
    uVar9 = (uint)*(byte *)((long)param_1 + uVar7);
  }
  if (uVar9 != 0) {
    uVar2 = 0;
    if (uVar6 < 4) {
      uVar2 = uVar9 - 1 << (ulong)(uVar3 & 0x1f);
    }
    if (uVar6 != 0) {
      uVar3 = 4;
      if (uVar6 < 4) {
        uVar3 = uVar6;
      }
      if ((int)uVar3 < 3) {
        if (uVar3 == 1) {
          uVar7 = (ulong)(byte)*param_1;
        }
        else {
          uVar7 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar3 == 3) {
        uVar7 = (ulong)(uint3)*param_1;
      }
      else {
        uVar7 = (ulong)*param_1;
      }
    }
    return uVar1 + ((uint)uVar7 | uVar2) + 1;
  }
LAB_1040ceeac:
  if (uVar2 < 3) {
    return 0;
  }
  (**(code **)(lVar5 + 0x30))(param_1,uVar2,lVar4);
  if (1 < (uint)param_1) {
    return (uint)param_1 - 2;
  }
  return 0;
}



/* Entry: 1040cef28; end: 1040cf167;  */

void FUN_1040cef28(uint *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  byte bVar9;
  uint uVar10;
  long lVar11;
  int iVar12;
  
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x28),*(undefined8 *)(param_4 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  lVar7 = *(long *)(lVar6 + -8);
  uVar3 = *(uint *)(lVar7 + 0x54);
  uVar2 = 0;
  if (1 < uVar3) {
    uVar2 = uVar3 - 2;
  }
  lVar11 = *(long *)(lVar7 + 0x40);
  if (uVar3 < 2) {
    if ((uint)lVar11 < 4) {
      uVar10 = (uint)lVar11 << 3;
      uVar10 = (~(-1 << (ulong)(uVar10 & 0x1f)) - uVar3) + 2 >> (ulong)(uVar10 & 0x1f);
      uVar8 = 2;
      if (0xfffe < uVar10) {
        uVar8 = 4;
      }
      if (uVar10 < 0xff) {
        uVar8 = (ulong)(uVar10 != 0);
      }
    }
    else {
      uVar8 = 1;
    }
    lVar11 = uVar8 + lVar11;
  }
  uVar10 = (uint)lVar11;
  if (param_3 < uVar2 || param_3 - uVar2 == 0) {
    bVar5 = 0;
  }
  else {
    uVar1 = ((param_3 - uVar2) + ~(-1 << (ulong)(uVar10 << 3 & 0x1f)) >> (ulong)(uVar10 << 3 & 0x1f)
            ) + 1;
    bVar9 = 2;
    if (0xffff < uVar1) {
      bVar9 = 4;
    }
    if (uVar1 < 0x100) {
      bVar9 = 1 < uVar1;
    }
    bVar5 = 1;
    if (uVar10 < 4) {
      bVar5 = bVar9;
    }
  }
  if (uVar2 < param_2) {
    param_2 = param_2 + ~uVar2;
    if (uVar10 < 4) {
      iVar12 = (param_2 >> (ulong)(uVar10 << 3 & 0x1f)) + 1;
      if (uVar10 != 0) {
        uVar2 = param_2 & (-1 << (ulong)(uVar10 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,lVar11,uVar3,lVar6);
        uVar4 = (undefined2)uVar2;
        if (uVar10 == 3) {
          *(undefined2 *)param_1 = uVar4;
          *(char *)((long)param_1 + 2) = (char)(uVar2 >> 0x10);
        }
        else if (uVar10 == 2) {
          *(undefined2 *)param_1 = uVar4;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,lVar11,uVar3,lVar6);
      *param_1 = param_2;
      iVar12 = 1;
    }
    if (bVar5 < 2) {
      if (bVar5 != 0) {
        *(char *)((long)param_1 + lVar11) = (char)iVar12;
      }
    }
    else if (bVar5 == 2) {
      *(short *)((long)param_1 + lVar11) = (short)iVar12;
    }
    else {
      *(int *)((long)param_1 + lVar11) = iVar12;
    }
  }
  else {
    if (bVar5 < 2) {
      if (bVar5 != 0) {
        *(undefined1 *)((long)param_1 + lVar11) = 0;
      }
    }
    else if (bVar5 == 2) {
      *(undefined2 *)((long)param_1 + lVar11) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar11) = 0;
    }
    if ((param_2 != 0) && (2 < uVar3)) {
                    /* WARNING: Could not recover jumptable at 0x0001040cf0bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar7 + 0x38))(param_1,param_2 + 2);
      return;
    }
  }
  return;
}



/* Entry: 1040cf168; end: 1040cf1bb;  */

void FUN_1040cf168(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
                    /* WARNING: Could not recover jumptable at 0x0001040cf1b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x30))(param_1,2,lVar1);
  return;
}



/* Entry: 1040cf1bc; end: 1040cf1bf;  */

void FUN_1040cf1bc(void)

{
  return;
}



/* Entry: 1040cf1c0; end: 1040cf217;  */

void FUN_1040cf1c0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
                    /* WARNING: Could not recover jumptable at 0x0001040cf214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,param_2,2,lVar1);
  return;
}



/* Entry: 1040cf218; end: 1040cf22f;  */

void FUN_1040cf218(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbffa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_11034f228)();
  return;
}



/* Entry: 1040cf230; end: 1040cf2d3;  */

void FUN_1040cf230(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_6,param_4,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_1,param_2,lVar1);
  lVar1 = 0;
  uStack_70 = param_4;
  uStack_68 = param_5;
  uStack_60 = param_6;
  uStack_58 = param_7;
  FUN_1040cf2d4(0,&uStack_70);
  *(undefined8 *)(param_1 + *(int *)(lVar1 + 0x34)) = param_3;
  return;
}



/* Entry: 1040cf2d4; end: 1040cf2df;  */

void FUN_1040cf2d4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getGenericMetadata_11034f380)(param_1,param_2,&UNK_10e7efc94);
  return;
}



/* Entry: 1040cf2e0; end: 1040cf48b;  */

void FUN_1040cf2e0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 unaff_x20;
  undefined8 uVar10;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  lVar8 = *(long *)(param_2 + 0x18);
  *(long *)(unaff_x22 + 0x28) = lVar8;
  lVar8 = *(long *)(lVar8 + -8);
  *(long *)(unaff_x22 + 0x30) = lVar8;
  uVar2 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x38) = uVar2;
  puVar1 = PTR___sSciTL_11034fea8;
  uVar9 = *(undefined8 *)(param_2 + 0x20);
  uVar10 = *(undefined8 *)(param_2 + 0x10);
  lVar8 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar9,uVar10,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  *(long *)(unaff_x22 + 0x40) = lVar8;
  lVar3 = 0;
  __ss15CollectionOfOneVMa(0,lVar8);
  *(long *)(unaff_x22 + 0x48) = lVar3;
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x50) = uVar2;
  lVar3 = 0;
  __sSqMa(0,lVar8);
  *(long *)(unaff_x22 + 0x58) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x60) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xf;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar4;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x70) = uVar2;
  lVar8 = *(long *)(lVar8 + -8);
  *(long *)(unaff_x22 + 0x78) = lVar8;
  uVar4 = *(long *)(lVar8 + 0x40) + 0xf;
  uVar5 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x80) = uVar5;
  uVar5 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x88) = uVar5;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x90) = uVar4;
  uVar6 = 0;
  _swift_getAssociatedTypeWitness(0,uVar9,uVar10,puVar1,PTR___s13AsyncIteratorSciTl_11034fb50);
  *(undefined8 *)(unaff_x22 + 0x98) = uVar6;
  _swift_getAssociatedConformanceWitness
            (uVar9,uVar10,uVar6,puVar1,PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar9;
  plVar7 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa8) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_1040cf48c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)(plVar7,uVar2,uVar6,uVar9);
  return;
}



/* Entry: 1040cf48c; end: 1040cf4e7;  */

void FUN_1040cf48c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xb0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xa8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1040cf4e8;
  }
  else {
    pcVar1 = FUN_1040cf998;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1040cf4e8; end: 1040cf737;  */

void FUN_1040cf4e8(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x70);
  lVar14 = *(long *)(unaff_x22 + 0x78);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x40);
  pcVar6 = *(code **)(lVar14 + 0x30);
  *(code **)(unaff_x22 + 0xb8) = pcVar6;
  uVar2 = uVar5;
  (*pcVar6)(uVar5,1,uVar8);
  if ((int)uVar2 == 1) {
    (**(code **)(*(long *)(unaff_x22 + 0x60) + 8))(uVar5,*(undefined8 *)(unaff_x22 + 0x58));
    uVar5 = 1;
  }
  else {
    lVar7 = *(long *)(unaff_x22 + 0x18);
    lVar1 = *(long *)(unaff_x22 + 0x20);
    pcVar6 = *(code **)(lVar14 + 0x20);
    *(code **)(unaff_x22 + 0xc0) = pcVar6;
    (*pcVar6)(*(undefined8 *)(unaff_x22 + 0x90),uVar5,uVar8);
    lVar7 = *(long *)(lVar1 + *(int *)(lVar7 + 0x34));
    *(long *)(unaff_x22 + 200) = lVar7;
    if (lVar7 != 1) {
      uVar5 = *(undefined8 *)(unaff_x22 + 0x88);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
      lVar14 = *(long *)(unaff_x22 + 0x78);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x40);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x28);
      uVar13 = *(undefined8 *)(*(long *)(unaff_x22 + 0x18) + 0x28);
      *(undefined8 *)(unaff_x22 + 0xd0) = uVar13;
      __sSmxycfCTj(*(undefined8 *)(unaff_x22 + 0x38),uVar12,uVar13);
      pcVar6 = *(code **)(lVar14 + 0x10);
      *(code **)(unaff_x22 + 0xd8) = pcVar6;
      (*pcVar6)(uVar5,uVar2,uVar8);
      __sSm6appendyy7ElementQznFTj(uVar5,uVar12,uVar13);
      plVar4 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0xe0) = plVar4;
      *plVar4 = unaff_x22;
      plVar4[1] = (long)FUN_1040cf738;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)
                (plVar4,*(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x98),
                 *(undefined8 *)(unaff_x22 + 0xa0));
      return;
    }
    uVar5 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x10);
    lVar7 = *(long *)(unaff_x22 + 0x18);
    (**(code **)(*(long *)(unaff_x22 + 0x78) + 0x10))(uVar5,uVar12,uVar10);
    __ss15CollectionOfOneVyAByxGxcfC(uVar13,uVar5,uVar10);
    uVar5 = *(undefined8 *)(lVar7 + 0x28);
    puVar3 = PTR___ss15CollectionOfOneVyxGSTsMc_11034e618;
    _swift_getWitnessTable(PTR___ss15CollectionOfOneVyxGSTsMc_11034e618,uVar2);
    __sSmyxqd__cSTRd__7ElementQyd__AARtzlufCTj(uVar8,uVar13,uVar2,puVar3,uVar9,uVar5);
    (**(code **)(lVar14 + 8))(uVar12,uVar10);
    uVar5 = 0;
  }
  uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x38);
  (**(code **)(*(long *)(unaff_x22 + 0x30) + 0x38))
            (*(undefined8 *)(unaff_x22 + 0x10),uVar5,1,*(undefined8 *)(unaff_x22 + 0x28));
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar10);
                    /* WARNING: Could not recover jumptable at 0x0001040cf684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040cf738; end: 1040cf793;  */

void FUN_1040cf738(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xe8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xe0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1040cf794;
  }
  else {
    pcVar1 = FUN_1040cfa24;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1040cf794; end: 1040cf997;  */

void FUN_1040cf794(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x22;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 *puVar15;
  
  puVar8 = (undefined8 *)(unaff_x22 + 0x68);
  uVar12 = *puVar8;
  puVar15 = (undefined8 *)(unaff_x22 + 0x40);
  uVar7 = *puVar15;
  uVar4 = uVar12;
  (**(code **)(unaff_x22 + 0xb8))(uVar12,1,uVar7);
  if ((int)uVar4 == 1) {
    lVar9 = *(long *)(unaff_x22 + 0x60);
    (**(code **)(*(long *)(unaff_x22 + 0x78) + 8))(*(undefined8 *)(unaff_x22 + 0x90),uVar7);
    pcVar11 = *(code **)(lVar9 + 8);
    puVar15 = (undefined8 *)(unaff_x22 + 0x58);
  }
  else {
    lVar9 = *(long *)(unaff_x22 + 0xd0);
    pcVar11 = *(code **)(unaff_x22 + 0xd8);
    lVar1 = *(long *)(unaff_x22 + 200);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
    lVar6 = *(long *)(unaff_x22 + 0x78);
    lVar14 = *(long *)(unaff_x22 + 0x28);
    (**(code **)(unaff_x22 + 0xc0))(uVar4,uVar12,uVar7);
    (*pcVar11)(uVar2,uVar4,uVar7);
    __sSm6appendyy7ElementQznFTj(uVar2,lVar14,lVar9);
    __sSl5countSivgTj(lVar14,*(undefined8 *)(lVar9 + 8));
    pcVar11 = *(code **)(lVar6 + 8);
    (*pcVar11)(uVar4,uVar7);
    if (lVar14 != lVar1) {
      plVar5 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0xe0) = plVar5;
      *plVar5 = unaff_x22;
      plVar5[1] = (long)FUN_1040cf738;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)
                (plVar5,*(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x98),
                 *(undefined8 *)(unaff_x22 + 0xa0));
      return;
    }
    puVar8 = (undefined8 *)(unaff_x22 + 0x90);
  }
  lVar9 = *(long *)(unaff_x22 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x10);
  (*pcVar11)(*puVar8,*puVar15);
  (**(code **)(lVar9 + 0x20))(uVar12,uVar4,uVar7);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
  (**(code **)(*(long *)(unaff_x22 + 0x30) + 0x38))
            (*(undefined8 *)(unaff_x22 + 0x10),0,1,*(undefined8 *)(unaff_x22 + 0x28));
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001040cf940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040cf998; end: 1040cfa23;  */

void FUN_1040cf998(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x38);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x90));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar6);
                    /* WARNING: Could not recover jumptable at 0x0001040cfa20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040cfa24; end: 1040cfad7;  */

void FUN_1040cfa24(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x90);
  lVar4 = *(long *)(unaff_x22 + 0x78);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  (**(code **)(*(long *)(unaff_x22 + 0x30) + 8))
            (*(undefined8 *)(unaff_x22 + 0x38),*(undefined8 *)(unaff_x22 + 0x28));
  (**(code **)(lVar4 + 8))(uVar3,uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x38);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x90));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar7);
                    /* WARNING: Could not recover jumptable at 0x0001040cfad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040cfad8; end: 1040cfb37;  */

void FUN_1040cfad8(long param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long unaff_x20;
  undefined8 uVar10;
  long unaff_x22;
  
  plVar7 = (long *)0xf0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_1040cfb38;
  plVar7[3] = param_2;
  plVar7[4] = unaff_x20;
  plVar7[2] = param_1;
  lVar8 = *(long *)(param_2 + 0x18);
  plVar7[5] = lVar8;
  lVar8 = *(long *)(lVar8 + -8);
  plVar7[6] = lVar8;
  uVar2 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar7[7] = uVar2;
  puVar1 = PTR___sSciTL_11034fea8;
  lVar9 = *(long *)(param_2 + 0x20);
  uVar10 = *(undefined8 *)(param_2 + 0x10);
  lVar8 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,lVar9,uVar10,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  plVar7[8] = lVar8;
  lVar3 = 0;
  __ss15CollectionOfOneVMa(0,lVar8);
  plVar7[9] = lVar3;
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar7[10] = uVar2;
  lVar3 = 0;
  __sSqMa(0,lVar8);
  plVar7[0xb] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar7[0xc] = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xf;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar7[0xd] = uVar4;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar7[0xe] = uVar2;
  lVar8 = *(long *)(lVar8 + -8);
  plVar7[0xf] = lVar8;
  uVar4 = *(long *)(lVar8 + 0x40) + 0xf;
  uVar5 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar7[0x10] = uVar5;
  uVar5 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar7[0x11] = uVar5;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar7[0x12] = uVar4;
  lVar8 = 0;
  _swift_getAssociatedTypeWitness(0,lVar9,uVar10,puVar1,PTR___s13AsyncIteratorSciTl_11034fb50);
  plVar7[0x13] = lVar8;
  _swift_getAssociatedConformanceWitness
            (lVar9,uVar10,lVar8,puVar1,PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
  plVar7[0x14] = lVar9;
  plVar6 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
  _swift_task_alloc();
  plVar7[0x15] = (long)plVar6;
  *plVar6 = (long)plVar7;
  plVar6[1] = (long)FUN_1040cf48c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)(plVar6,uVar2,lVar8,lVar9);
  return;
}



/* Entry: 1040cfb38; end: 1040cfb73;  */

void FUN_1040cfb38(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001040cfb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1040cfb74; end: 1040cfc4b;  */

void FUN_1040cfb74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_4;
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_5 + 0x20),*(undefined8 *)(param_5 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7FailureSciTl_11034fb60);
  *(long *)(unaff_x22 + 0x18) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x20) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x28) = uVar2;
  plVar3 = (long *)(ulong)*(uint *)(
                                   PTR___sScIsE4next9isolation7ElementQzSgScA_pSgYi_tYa7FailureQzYKFTu_11034fc58
                                   + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x30) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1040cfc4c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScIsE4next9isolation7ElementQzSgScA_pSgYi_tYa7FailureQzYKF_11034fc50)
            (plVar3,param_1,param_2,param_3,param_5,param_6,uVar2);
  return;
}



/* Entry: 1040cfc4c; end: 1040cfcbb;  */

void FUN_1040cfc4c(void)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x30));
  if (unaff_x20 == 0) {
    _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x28));
    UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 8);
  }
  else {
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    (**(code **)(*(long *)(lVar2 + 0x20) + 0x20))
              (*(undefined8 *)(lVar2 + 0x10),uVar1,*(undefined8 *)(lVar2 + 0x18));
    _swift_task_dealloc(uVar1);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001040cfcb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1040cfcbc; end: 1040cfdbf;  */

void FUN_1040cfcbc(undefined8 param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  
  lVar2 = *(long *)(param_2 + 0x10);
  lVar4 = *(long *)(lVar2 + -8);
  lVar1 = param_2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  uVar3 = *(undefined8 *)(lVar1 + 0x20);
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar3,lVar2,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = (long)(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
          extraout_x8_00;
  (**(code **)(lVar4 + 0x10))(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0))
  ;
  __sSci17makeAsyncIterator0bC0QzyFTj(lVar1,lVar2,uVar3);
  FUN_1040cf230(param_1,lVar1,*(undefined8 *)(unaff_x20 + *(int *)(param_2 + 0x34)),lVar2,
                *(undefined8 *)(param_2 + 0x18),uVar3,*(undefined8 *)(param_2 + 0x28));
  return;
}



/* Entry: 1040cfdc0; end: 1040cfe4f;  */

void FUN_1040cfdc0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR___sSciTL_11034fea8;
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar3,uVar4,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  _swift_getAssociatedConformanceWitness
            (uVar3,uVar4,uVar2,puVar1,PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
                    /* WARNING: Could not recover jumptable at 0x00010bdc01b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getAssociatedConformanceWitness_11034f328)();
  return;
}



/* Entry: 1040cfe50; end: 1040cfe5f;  */

void FUN_1040cfe50(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getWitnessTable_11034f410)(&UNK_10dcd68e8,param_1);
  return;
}



/* Entry: 1040cfe60; end: 1040cff07;  */

void FUN_1040cfe60(long param_1)

{
  FUN_1040cfcbc();
                    /* WARNING: Could not recover jumptable at 0x0001040cfe8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + -8) + 8))();
  return;
}



/* Entry: 1040cff08; end: 1040cffb3;  */

long * FUN_1040cff08(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  lVar3 = *(long *)(lVar2 + 0x40);
  if ((*(uint *)(lVar2 + 0x50) & 0x1000f8) == 0 && (lVar3 + 7U & 0xfffffffffffffff8) + 8 < 0x19) {
    (**(code **)(lVar2 + 0x10))(param_1);
    *(undefined8 *)((long)param_1 + lVar3 + 7 & 0xffffffffffffff8) =
         *(undefined8 *)((long)param_2 + lVar3 + 7 & 0xffffffffffffff8);
  }
  else {
    uVar1 = *(uint *)(lVar2 + 0x50) & 0xf8;
    lVar2 = *param_2;
    *param_1 = lVar2;
    param_1 = (long *)(lVar2 + ((ulong)(uVar1 + 0x17 & (uVar1 ^ 0xffffffff)) & 0x1f8));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 1040cffb4; end: 1040cffc3;  */

void FUN_1040cffb4(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001040cffc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 8))();
  return;
}



/* Entry: 1040cffc4; end: 1040d0133;  */

long FUN_1040cffc4(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar1 + 0x10))();
  lVar1 = *(long *)(lVar1 + 0x40) + 7;
  *(undefined8 *)(lVar1 + param_1 & 0xffffffffffffff8) =
       *(undefined8 *)(lVar1 + param_2 & 0xffffffffffffff8);
  return param_1;
}



/* Entry: 1040d0134; end: 1040d01ef;  */

uint * FUN_1040d0134(uint *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  
  if (param_2 == 0) {
    return (uint *)0x0;
  }
  lVar7 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar5 = *(uint *)(lVar7 + 0x54);
  if (uVar5 <= param_2 && param_2 - uVar5 != 0) {
    uVar1 = (*(long *)(lVar7 + 0x40) + 7U & 0xfffffffffffffff8) + 8;
    uVar2 = uVar1 & 0xfffffff8;
    uVar6 = (uint)uVar2;
    uVar8 = 2;
    uVar4 = uVar8;
    if (uVar2 == 0) {
      uVar4 = (param_2 - uVar5) + 1;
    }
    if (0xffff < uVar4) {
      uVar8 = 4;
    }
    if (uVar4 < 0x100) {
      uVar8 = 1;
    }
    uVar3 = 0;
    if (1 < uVar4) {
      uVar3 = uVar8;
    }
    if (uVar3 < 2) {
      if ((uVar3 != 0) &&
         (uVar8 = (uint)*(byte *)((long)param_1 + uVar1), *(byte *)((long)param_1 + uVar1) != 0))
      goto LAB_1040d01b0;
    }
    else if (uVar3 == 2) {
      uVar8 = (uint)*(ushort *)((long)param_1 + uVar1);
      if (*(ushort *)((long)param_1 + uVar1) != 0) {
LAB_1040d01b0:
        uVar8 = uVar8 - 1;
        if (uVar2 != 0) {
          uVar8 = 0;
          uVar6 = *param_1;
        }
        return (uint *)(ulong)(uVar5 + (uVar6 | uVar8) + 1);
      }
    }
    else {
      uVar8 = *(uint *)((long)param_1 + uVar1);
      if (uVar8 != 0) goto LAB_1040d01b0;
    }
    if (uVar5 == 0) {
      return (uint *)0x0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001040d01e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar7 + 0x30))();
  return param_1;
}



/* Entry: 1040d01f0; end: 1040d0317;  */

void FUN_1040d01f0(int *param_1,uint param_2,uint param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  
  lVar5 = *(long *)(*(long *)(param_4 + 0x10) + -8);
  uVar3 = *(uint *)(lVar5 + 0x54);
  lVar1 = (*(long *)(lVar5 + 0x40) + 7U & 0xfffffffffffffff8) + 8;
  if (param_3 < uVar3 || param_3 - uVar3 == 0) {
    uVar7 = 0;
    iVar4 = param_2 - uVar3;
    if (uVar3 <= param_2 && iVar4 != 0) goto LAB_1040d0280;
  }
  else {
    uVar6 = 2;
    uVar2 = uVar6;
    if ((int)lVar1 == 0) {
      uVar2 = (param_3 - uVar3) + 1;
    }
    if (0xffff < uVar2) {
      uVar6 = 4;
    }
    if (uVar2 < 0x100) {
      uVar6 = 1;
    }
    uVar7 = 0;
    if (1 < uVar2) {
      uVar7 = uVar6;
    }
    iVar4 = param_2 - uVar3;
    if (uVar3 <= param_2 && iVar4 != 0) {
LAB_1040d0280:
      if ((int)lVar1 != 0) {
        iVar4 = 1;
        _bzero(param_1,lVar1);
        *param_1 = param_2 + ~uVar3;
      }
      if (uVar7 < 2) {
        if (uVar7 == 0) {
          return;
        }
        *(char *)((long)param_1 + lVar1) = (char)iVar4;
        return;
      }
      if (uVar7 == 2) {
        *(short *)((long)param_1 + lVar1) = (short)iVar4;
        return;
      }
      *(int *)((long)param_1 + lVar1) = iVar4;
      return;
    }
  }
  if (uVar7 < 2) {
    if (uVar7 != 0) {
      *(undefined1 *)((long)param_1 + lVar1) = 0;
    }
  }
  else if (uVar7 == 2) {
    *(undefined2 *)((long)param_1 + lVar1) = 0;
  }
  else {
    *(undefined4 *)((long)param_1 + lVar1) = 0;
  }
  if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001040d02e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar5 + 0x38))();
  return;
}



/* Entry: 1040d0318; end: 1040d03a3;  */

void FUN_1040d0318(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_30;
  undefined *puStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  lVar1 = 0x13f;
  _swift_getAssociatedTypeWitness
            (0x13f,uVar2,*(undefined8 *)(param_1 + 0x10),PTR___sSciTL_11034fea8,
             PTR___s13AsyncIteratorSciTl_11034fb50);
  if (uVar2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = PTR___sBi64_WV_11034d670 + 0x40;
    _swift_initStructMetadata(param_1,0,2,&lStack_30,param_1 + 0x30);
  }
  return;
}



/* Entry: 1040d03a4; end: 1040d0473;  */

long * FUN_1040d03a4(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar3 = *(long *)(lVar2 + -8);
  lVar4 = *(long *)(lVar3 + 0x40);
  if ((*(uint *)(lVar3 + 0x50) & 0x1000f8) == 0 && (lVar4 + 7U & 0xfffffffffffffff8) + 8 < 0x19) {
    (**(code **)(lVar3 + 0x10))(param_1,param_2,lVar2);
    *(undefined8 *)((long)param_1 + lVar4 + 7 & 0xffffffffffffff8) =
         *(undefined8 *)((long)param_2 + lVar4 + 7 & 0xffffffffffffff8);
  }
  else {
    uVar1 = *(uint *)(lVar3 + 0x50) & 0xf8;
    lVar2 = *param_2;
    *param_1 = lVar2;
    param_1 = (long *)(lVar2 + ((ulong)(uVar1 + 0x17 & (uVar1 ^ 0xffffffff)) & 0x1f8));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 1040d0474; end: 1040d04c3;  */

void FUN_1040d0474(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
                    /* WARNING: Could not recover jumptable at 0x0001040d04c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return;
}



/* Entry: 1040d04c4; end: 1040d06d3;  */

long FUN_1040d04c4(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar2 = *(long *)(lVar1 + -8);
  (**(code **)(lVar2 + 0x10))(param_1,param_2,lVar1);
  lVar1 = *(long *)(lVar2 + 0x40) + 7;
  *(undefined8 *)(lVar1 + param_1 & 0xffffffffffffff8) =
       *(undefined8 *)(lVar1 + param_2 & 0xffffffffffffff8);
  return param_1;
}



/* Entry: 1040d06d4; end: 1040d07d3;  */

uint * FUN_1040d06d4(uint *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  if (param_2 == 0) {
    return (uint *)0x0;
  }
  lVar7 = *(long *)(lVar6 + -8);
  uVar5 = *(uint *)(lVar7 + 0x54);
  if (uVar5 <= param_2 && param_2 - uVar5 != 0) {
    uVar1 = (*(long *)(lVar7 + 0x40) + 7U & 0xfffffffffffffff8) + 8;
    uVar2 = uVar1 & 0xfffffff8;
    uVar8 = (uint)uVar2;
    uVar9 = 2;
    uVar4 = uVar9;
    if (uVar2 == 0) {
      uVar4 = (param_2 - uVar5) + 1;
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
         (uVar9 = (uint)*(byte *)((long)param_1 + uVar1), *(byte *)((long)param_1 + uVar1) != 0))
      goto LAB_1040d0780;
    }
    else if (uVar3 == 2) {
      uVar9 = (uint)*(ushort *)((long)param_1 + uVar1);
      if (*(ushort *)((long)param_1 + uVar1) != 0) {
LAB_1040d0780:
        uVar9 = uVar9 - 1;
        if (uVar2 != 0) {
          uVar9 = 0;
          uVar8 = *param_1;
        }
        return (uint *)(ulong)(uVar5 + (uVar8 | uVar9) + 1);
      }
    }
    else {
      uVar9 = *(uint *)((long)param_1 + uVar1);
      if (uVar9 != 0) goto LAB_1040d0780;
    }
    if (uVar5 == 0) {
      return (uint *)0x0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001040d07c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar7 + 0x30))(param_1,uVar5,lVar6);
  return param_1;
}



/* Entry: 1040d07d4; end: 1040d0927;  */

void FUN_1040d07d4(int *param_1,undefined8 param_2,uint param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x20),*(undefined8 *)(param_4 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar5 = *(long *)(lVar4 + -8);
  uVar3 = *(uint *)(lVar5 + 0x54);
  lVar1 = (*(long *)(lVar5 + 0x40) + 7U & 0xfffffffffffffff8) + 8;
  uVar8 = (uint)param_2;
  if (param_3 < uVar3 || param_3 - uVar3 == 0) {
    uVar9 = 0;
    iVar6 = uVar8 - uVar3;
    if (uVar3 <= uVar8 && iVar6 != 0) goto LAB_1040d088c;
  }
  else {
    uVar7 = 2;
    uVar2 = uVar7;
    if ((int)lVar1 == 0) {
      uVar2 = (param_3 - uVar3) + 1;
    }
    if (0xffff < uVar2) {
      uVar7 = 4;
    }
    if (uVar2 < 0x100) {
      uVar7 = 1;
    }
    uVar9 = 0;
    if (1 < uVar2) {
      uVar9 = uVar7;
    }
    iVar6 = uVar8 - uVar3;
    if (uVar3 <= uVar8 && iVar6 != 0) {
LAB_1040d088c:
      if ((int)lVar1 != 0) {
        iVar6 = 1;
        _bzero(param_1,lVar1,uVar3,lVar4);
        *param_1 = uVar8 + ~uVar3;
      }
      if (uVar9 < 2) {
        if (uVar9 == 0) {
          return;
        }
        *(char *)((long)param_1 + lVar1) = (char)iVar6;
        return;
      }
      if (uVar9 == 2) {
        *(short *)((long)param_1 + lVar1) = (short)iVar6;
        return;
      }
      *(int *)((long)param_1 + lVar1) = iVar6;
      return;
    }
  }
  if (uVar9 < 2) {
    if (uVar9 != 0) {
      *(undefined1 *)((long)param_1 + lVar1) = 0;
    }
  }
  else if (uVar9 == 2) {
    *(undefined2 *)((long)param_1 + lVar1) = 0;
  }
  else {
    *(undefined4 *)((long)param_1 + lVar1) = 0;
  }
  if (uVar8 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001040d08f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar5 + 0x38))(param_1,param_2);
  return;
}



/* Entry: 1040d0928; end: 1040d092f;  */

void FUN_1040d0928(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbffa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_11034f228)();
  return;
}



/* Entry: 1040d0930; end: 1040d0a7f;  */

void FUN_1040d0930(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 unaff_x20;
  long lVar8;
  undefined8 uVar9;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20;
  lVar8 = *(long *)(param_2 + 0x18);
  *(long *)(unaff_x22 + 0x20) = lVar8;
  lVar6 = *(long *)(lVar8 + -8);
  *(long *)(unaff_x22 + 0x28) = lVar6;
  uVar2 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x30) = uVar2;
  lVar6 = 0xff;
  __sSqMa(0xff,lVar8);
  *(long *)(unaff_x22 + 0x38) = lVar6;
  lVar8 = 0;
  __sSqMa(0,lVar6);
  *(long *)(unaff_x22 + 0x40) = lVar8;
  lVar8 = *(long *)(lVar8 + -8);
  *(long *)(unaff_x22 + 0x48) = lVar8;
  uVar2 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x50) = uVar2;
  lVar6 = *(long *)(lVar6 + -8);
  *(long *)(unaff_x22 + 0x58) = lVar6;
  uVar2 = *(long *)(lVar6 + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar2;
  uVar9 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x70) = uVar9;
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x78) = uVar7;
  puVar1 = PTR___sSciTL_11034fea8;
  uVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar9,uVar7,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  _swift_getAssociatedConformanceWitness
            (uVar9,uVar7,uVar4,puVar1,PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
  plVar5 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x80) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1040d0a80;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)
            (plVar5,*(undefined8 *)(unaff_x22 + 0x50),uVar4,uVar9);
  return;
}



/* Entry: 1040d0a80; end: 1040d0adb;  */

void FUN_1040d0a80(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x88) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x80));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1040d0adc;
  }
  else {
    pcVar1 = FUN_1040d0cd0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1040d0adc; end: 1040d0ccf;  */

void FUN_1040d0adc(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  code *pcVar10;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar1 = *(long *)(unaff_x22 + 0x58);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar8 = uVar6;
  (**(code **)(lVar1 + 0x30))(uVar6,1,uVar7);
  if ((int)uVar8 == 1) {
    (**(code **)(*(long *)(unaff_x22 + 0x48) + 8))(uVar6,*(undefined8 *)(unaff_x22 + 0x40));
    uVar6 = 1;
  }
  else {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x20);
    lVar2 = *(long *)(unaff_x22 + 0x28);
    pcVar10 = *(code **)(lVar1 + 0x20);
    (*pcVar10)(uVar9,uVar6,uVar7);
    (*pcVar10)(uVar8,uVar9,uVar7);
    (**(code **)(lVar2 + 0x30))(uVar8,1,uVar3);
    if ((int)uVar8 == 1) {
      (**(code **)(*(long *)(unaff_x22 + 0x58) + 8))
                (*(undefined8 *)(unaff_x22 + 0x60),*(undefined8 *)(unaff_x22 + 0x38));
      puVar4 = PTR___sSciTL_11034fea8;
      uVar6 = *(undefined8 *)(unaff_x22 + 0x70);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x78);
      uVar7 = 0;
      _swift_getAssociatedTypeWitness
                (0,uVar6,uVar8,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
      _swift_getAssociatedConformanceWitness
                (uVar6,uVar8,uVar7,puVar4,PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
      plVar5 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x80) = plVar5;
      *plVar5 = unaff_x22;
      plVar5[1] = (long)FUN_1040d0a80;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)
                (plVar5,*(undefined8 *)(unaff_x22 + 0x50),uVar7,uVar6);
      return;
    }
    uVar6 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x20);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x10);
    pcVar10 = *(code **)(*(long *)(unaff_x22 + 0x28) + 0x20);
    (*pcVar10)(uVar6,*(undefined8 *)(unaff_x22 + 0x60),uVar8);
    (*pcVar10)(uVar7,uVar6,uVar8);
    uVar6 = 0;
  }
  uVar8 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x30);
  (**(code **)(*(long *)(unaff_x22 + 0x28) + 0x38))
            (*(undefined8 *)(unaff_x22 + 0x10),uVar6,1,*(undefined8 *)(unaff_x22 + 0x20));
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001040d0ccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040d0cd0; end: 1040d0d2b;  */

void FUN_1040d0cd0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x30);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x68));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001040d0d28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040d0d2c; end: 1040d0d8b;  */

void FUN_1040d0d2c(long param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  long unaff_x22;
  
  plVar6 = (long *)0x90;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1040d0d8c;
  plVar6[2] = param_1;
  plVar6[3] = unaff_x20;
  lVar8 = *(long *)(param_2 + 0x18);
  plVar6[4] = lVar8;
  lVar7 = *(long *)(lVar8 + -8);
  plVar6[5] = lVar7;
  uVar2 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[6] = uVar2;
  lVar7 = 0xff;
  __sSqMa(0xff,lVar8);
  plVar6[7] = lVar7;
  lVar8 = 0;
  __sSqMa(0,lVar7);
  plVar6[8] = lVar8;
  lVar8 = *(long *)(lVar8 + -8);
  plVar6[9] = lVar8;
  uVar2 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[10] = uVar2;
  lVar7 = *(long *)(lVar7 + -8);
  plVar6[0xb] = lVar7;
  uVar2 = *(long *)(lVar7 + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[0xc] = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[0xd] = uVar2;
  lVar7 = *(long *)(param_2 + 0x20);
  plVar6[0xe] = lVar7;
  lVar8 = *(long *)(param_2 + 0x10);
  plVar6[0xf] = lVar8;
  puVar1 = PTR___sSciTL_11034fea8;
  uVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,lVar7,lVar8,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  _swift_getAssociatedConformanceWitness
            (lVar7,lVar8,uVar4,puVar1,PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
  plVar5 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
  _swift_task_alloc();
  plVar6[0x10] = (long)plVar5;
  *plVar5 = (long)plVar6;
  plVar5[1] = (long)FUN_1040d0a80;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)(plVar5,plVar6[10],uVar4,lVar7);
  return;
}



/* Entry: 1040d0d8c; end: 1040d0dc7;  */

void FUN_1040d0d8c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001040d0dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1040d0dc8; end: 1040d0e9f;  */

void FUN_1040d0dc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_4;
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_5 + 0x20),*(undefined8 *)(param_5 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7FailureSciTl_11034fb60);
  *(long *)(unaff_x22 + 0x18) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x20) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x28) = uVar2;
  plVar3 = (long *)(ulong)*(uint *)(
                                   PTR___sScIsE4next9isolation7ElementQzSgScA_pSgYi_tYa7FailureQzYKFTu_11034fc58
                                   + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x30) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1040d0ea0;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScIsE4next9isolation7ElementQzSgScA_pSgYi_tYa7FailureQzYKF_11034fc50)
            (plVar3,param_1,param_2,param_3,param_5,param_6,uVar2);
  return;
}



/* Entry: 1040d0ea0; end: 1040d0f0f;  */

void FUN_1040d0ea0(void)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x30));
  if (unaff_x20 == 0) {
    _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x28));
    UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 8);
  }
  else {
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    (**(code **)(*(long *)(lVar2 + 0x20) + 0x20))
              (*(undefined8 *)(lVar2 + 0x10),uVar1,*(undefined8 *)(lVar2 + 0x18));
    _swift_task_dealloc(uVar1);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001040d0f0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1040d0f10; end: 1040d100b;  */

void FUN_1040d0f10(undefined8 param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar2 = *(long *)(param_2 + 0x10);
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar3,lVar2,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = (long)(&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
          extraout_x8_00;
  (**(code **)(lVar5 + 0x10))(&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0))
  ;
  __sSci17makeAsyncIterator0bC0QzyFTj(lVar4,lVar2,uVar3);
  (**(code **)(lVar6 + 0x20))(param_1,lVar4,lVar1);
  return;
}



/* Entry: 1040d100c; end: 1040d109b;  */

void FUN_1040d100c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR___sSciTL_11034fea8;
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar3,uVar4,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  _swift_getAssociatedConformanceWitness
            (uVar3,uVar4,uVar2,puVar1,PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
                    /* WARNING: Could not recover jumptable at 0x00010bdc01b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getAssociatedConformanceWitness_11034f328)();
  return;
}



/* Entry: 1040d109c; end: 1040d10ab;  */

void FUN_1040d109c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getWitnessTable_11034f410)(&UNK_10dcd69e8,param_1);
  return;
}



/* Entry: 1040d10ac; end: 1040d11b7;  */

void FUN_1040d10ac(long param_1)

{
  FUN_1040d0f10();
                    /* WARNING: Could not recover jumptable at 0x0001040d10d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + -8) + 8))();
  return;
}



/* Entry: 1040d11b8; end: 1040d11c7;  */

void FUN_1040d11b8(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001040d11c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 8))();
  return;
}


