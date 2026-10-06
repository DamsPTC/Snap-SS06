/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1040f0c24; end: 1040f0c53;  */

void FUN_1040f0c24(long param_1)

{
  FUN_1040f0010();
                    /* WARNING: Could not recover jumptable at 0x0001040f0c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + -8) + 8))();
  return;
}



/* Entry: 1040f0c54; end: 1040f0cdf;  */

void FUN_1040f0c54(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = PTR___sSciTL_11034fea8;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  uVar4 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar2,uVar1,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  _swift_getAssociatedConformanceWitness
            (uVar2,uVar1,uVar4,puVar3,PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
                    /* WARNING: Could not recover jumptable at 0x00010bdc01b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getAssociatedConformanceWitness_11034f328)();
  return;
}



/* Entry: 1040f0ce0; end: 1040f0cff;  */

void FUN_1040f0ce0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getWitnessTable_11034f410)(&UNK_10dcd7680,param_1);
  return;
}



/* Entry: 1040f0d00; end: 1040f0d73;  */

void FUN_1040f0d00(long param_1)

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
    puStack_28 = &UNK_10dcd7748;
    _swift_initStructMetadata(param_1,0,2,&lStack_30,param_1 + 0x20);
  }
  return;
}



/* Entry: 1040f0d74; end: 1040f0e27;  */

long * FUN_1040f0d74(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  lVar6 = *(long *)(lVar3 + 0x40);
  if ((*(uint *)(lVar3 + 0x50) & 0x1000f8) == 0 && (lVar6 + 7U & 0xfffffffffffffff8) + 9 < 0x19) {
    (**(code **)(lVar3 + 0x10))(param_1);
    puVar5 = (undefined8 *)((long)param_2 + lVar6 + 7 & 0xfffffffffffffff8);
    uVar2 = *(undefined1 *)(puVar5 + 1);
    puVar4 = (undefined8 *)((long)param_1 + lVar6 + 7 & 0xfffffffffffffff8);
    *puVar4 = *puVar5;
    *(undefined1 *)(puVar4 + 1) = uVar2;
  }
  else {
    uVar1 = *(uint *)(lVar3 + 0x50) & 0xf8;
    lVar3 = *param_2;
    *param_1 = lVar3;
    param_1 = (long *)(lVar3 + ((ulong)(uVar1 + 0x17 & (uVar1 ^ 0xffffffff)) & 0x1f8));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 1040f0e28; end: 1040f0e37;  */

void FUN_1040f0e28(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001040f0e34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 8))();
  return;
}



/* Entry: 1040f0e38; end: 1040f0fc7;  */

long FUN_1040f0e38(long param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar4 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar4 + 0x10))();
  lVar4 = *(long *)(lVar4 + 0x40) + 7;
  puVar3 = (undefined8 *)(lVar4 + param_1 & 0xfffffffffffffff8);
  puVar2 = (undefined8 *)(lVar4 + param_2 & 0xfffffffffffffff8);
  uVar1 = *(undefined1 *)(puVar2 + 1);
  *puVar3 = *puVar2;
  *(undefined1 *)(puVar3 + 1) = uVar1;
  return param_1;
}



/* Entry: 1040f0fc8; end: 1040f10cb;  */

uint * FUN_1040f0fc8(uint *param_1,uint param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  
  lVar8 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar6 = *(uint *)(lVar8 + 0x54);
  uVar2 = uVar6;
  if (uVar6 < 0xfd) {
    uVar2 = 0xfc;
  }
  if (param_2 == 0) {
    return (uint *)0x0;
  }
  if (uVar2 <= param_2 && param_2 - uVar2 != 0) {
    lVar1 = (*(long *)(lVar8 + 0x40) + 7U & 0xfffffffffffffff8) + 9;
    uVar5 = (uint)lVar1;
    uVar7 = 2;
    uVar4 = uVar7;
    if (uVar5 < 4) {
      uVar4 = ((param_2 - uVar2) + 0xff >> 8) + 1;
    }
    if (0xffff < uVar4) {
      uVar7 = 4;
    }
    if (uVar4 < 0x100) {
      uVar7 = 1;
    }
    uVar3 = 0;
    if (1 < uVar4) {
      uVar3 = uVar7;
    }
    if (uVar3 < 2) {
      if ((uVar3 != 0) &&
         (uVar7 = (uint)*(byte *)((long)param_1 + lVar1), *(byte *)((long)param_1 + lVar1) != 0))
      goto LAB_1040f1060;
    }
    else if (uVar3 == 2) {
      uVar7 = (uint)*(ushort *)((long)param_1 + lVar1);
      if (*(ushort *)((long)param_1 + lVar1) != 0) {
LAB_1040f1060:
        uVar6 = uVar7 - 1 << (ulong)((uVar5 & 3) << 3);
        if (uVar5 < 4) {
          uVar7 = (uint)(byte)*param_1;
        }
        else {
          uVar7 = *param_1;
          uVar6 = 0;
        }
        return (uint *)(ulong)(uVar2 + (uVar7 | uVar6) + 1);
      }
    }
    else {
      uVar7 = *(uint *)((long)param_1 + lVar1);
      if (uVar7 != 0) goto LAB_1040f1060;
    }
  }
  if (0xfb < uVar6) {
                    /* WARNING: Could not recover jumptable at 0x0001040f1094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar8 + 0x30))();
    return param_1;
  }
  uVar6 = (uint)*(byte *)(((ulong)((long)param_1 + *(long *)(lVar8 + 0x40) + 7) & 0xffffffffffffff8)
                         + 8);
  uVar2 = 0;
  if (3 < uVar6) {
    uVar2 = (uVar6 ^ 0xff) + 1;
  }
  return (uint *)(ulong)uVar2;
}



/* Entry: 1040f10cc; end: 1040f1257;  */

void FUN_1040f10cc(uint *param_1,uint param_2,uint param_3,long param_4)

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
  uVar4 = *(uint *)(lVar8 + 0x54);
  uVar2 = uVar4;
  if (uVar4 < 0xfd) {
    uVar2 = 0xfc;
  }
  lVar9 = *(long *)(lVar8 + 0x40);
  lVar1 = (lVar9 + 7U & 0xfffffffffffffff8) + 9;
  if (param_3 < uVar2 || param_3 - uVar2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar10 = 2;
    uVar3 = uVar10;
    if ((uint)lVar1 < 4) {
      uVar3 = ((param_3 - uVar2) + 0xff >> 8) + 1;
    }
    if (0xffff < uVar3) {
      uVar10 = 4;
    }
    if (uVar3 < 0x100) {
      uVar10 = 1;
    }
    uVar5 = 0;
    if (1 < uVar3) {
      uVar5 = uVar10;
    }
  }
  if (uVar2 < param_2) {
    param_2 = param_2 + ~uVar2;
    _bzero(param_1,lVar1);
    iVar6 = 1;
    if ((uint)lVar1 < 4) {
      iVar6 = (param_2 >> 8) + 1;
      *(char *)param_1 = (char)param_2;
    }
    else {
      *param_1 = param_2;
    }
    if (uVar5 < 2) {
      if (uVar5 != 0) {
        *(char *)((long)param_1 + lVar1) = (char)iVar6;
      }
    }
    else if (uVar5 == 2) {
      *(short *)((long)param_1 + lVar1) = (short)iVar6;
    }
    else {
      *(int *)((long)param_1 + lVar1) = iVar6;
    }
  }
  else {
    if (uVar5 < 2) {
      if (uVar5 != 0) {
        *(undefined1 *)((long)param_1 + lVar1) = 0;
      }
    }
    else if (uVar5 == 2) {
      *(undefined2 *)((long)param_1 + lVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar1) = 0;
    }
    if (param_2 != 0) {
      if (0xfb < uVar4) {
                    /* WARNING: Could not recover jumptable at 0x0001040f11e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar8 + 0x38))(param_1);
        return;
      }
      puVar7 = (ulong *)((long)param_1 + lVar9 + 7 & 0xfffffffffffffff8);
      if (param_2 < 0xfd) {
        *(char *)(puVar7 + 1) = -(char)param_2;
      }
      else {
        *(undefined1 *)(puVar7 + 1) = 0;
        *puVar7 = (ulong)(param_2 - 0xfd);
      }
    }
  }
  return;
}



/* Entry: 1040f1258; end: 1040f1263;  */

void FUN_1040f1258(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e7f043c);
  return;
}



/* Entry: 1040f1264; end: 1040f13bf;  */

void FUN_1040f1264(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  FUN_1040f0204(0x13f,uVar2,*(undefined8 *)(param_1 + 0x18));
  if (uVar2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0,1,&lStack_28,param_1 + 0x20);
  }
  return;
}



/* Entry: 1040f13c0; end: 1040f14df;  */

undefined8 * FUN_1040f13c0(undefined8 *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  undefined1 uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  uVar4 = *(ulong *)(*(long *)(lVar2 + -8) + 0x40);
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  bVar1 = *(byte *)((long)param_2 + uVar4);
  uVar5 = (uint)bVar1;
  if (2 < bVar1) {
    uVar7 = (uint)uVar4;
    uVar6 = 4;
    if (uVar7 < 4) {
      uVar6 = uVar7;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_1040f1480;
      uVar6 = (uint)(byte)*param_2;
    }
    else if (uVar6 == 2) {
      uVar6 = (uint)(ushort)*param_2;
    }
    else if (uVar6 == 3) {
      uVar6 = (uint)(uint3)*param_2;
    }
    else {
      uVar6 = *param_2;
    }
    uVar5 = uVar6 | bVar1 - 3 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 3;
  }
LAB_1040f1480:
  if (uVar5 == 2) {
    *param_1 = *(undefined8 *)param_2;
    uVar3 = 2;
  }
  else {
    if (uVar5 != 1) {
      (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,param_2,lVar2);
      *(undefined1 *)((long)param_1 + uVar4) = 0;
      return param_1;
    }
    *param_1 = *(undefined8 *)param_2;
    uVar3 = 1;
  }
  *(undefined1 *)((long)param_1 + uVar4) = uVar3;
  _swift_retain();
  return param_1;
}



/* Entry: 1040f14e0; end: 1040f16b3;  */

uint * FUN_1040f14e0(uint *param_1,uint *param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar7 = *(long *)(lVar1 + -8);
  uVar3 = *(ulong *)(lVar7 + 0x40);
  if (uVar3 < 9) {
    uVar3 = 8;
  }
  bVar2 = *(byte *)((long)param_1 + uVar3);
  uVar4 = (uint)bVar2;
  uVar6 = (uint)uVar3;
  if (2 < bVar2) {
    uVar5 = 4;
    if (uVar6 < 4) {
      uVar5 = uVar6;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_1040f15ac;
      uVar5 = (uint)(byte)*param_1;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*param_1;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*param_1;
    }
    else {
      uVar5 = *param_1;
    }
    uVar4 = uVar5 | bVar2 - 3 << (ulong)((uVar6 & 3) << 3);
    if (3 < uVar6) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 3;
  }
LAB_1040f15ac:
  if ((uVar4 == 2) || (uVar4 == 1)) {
    _swift_release(*(undefined8 *)param_1);
  }
  else {
    (**(code **)(lVar7 + 8))(param_1,lVar1);
  }
  bVar2 = *(byte *)((long)param_2 + uVar3);
  uVar4 = (uint)bVar2;
  if (2 < bVar2) {
    uVar5 = 4;
    if (uVar6 < 4) {
      uVar5 = uVar6;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_1040f164c;
      uVar5 = (uint)(byte)*param_2;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*param_2;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*param_2;
    }
    else {
      uVar5 = *param_2;
    }
    uVar4 = uVar5 | bVar2 - 3 << (ulong)((uVar6 & 3) << 3);
    if (3 < uVar6) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 3;
  }
LAB_1040f164c:
  if (uVar4 == 2) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    bVar2 = 2;
  }
  else {
    if (uVar4 != 1) {
      (**(code **)(lVar7 + 0x10))(param_1,param_2,lVar1);
      *(byte *)((long)param_1 + uVar3) = 0;
      return param_1;
    }
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    bVar2 = 1;
  }
  *(byte *)((long)param_1 + uVar3) = bVar2;
  _swift_retain();
  return param_1;
}



/* Entry: 1040f16b4; end: 1040f17cf;  */

undefined8 * FUN_1040f16b4(undefined8 *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  undefined1 uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  uVar4 = *(ulong *)(*(long *)(lVar2 + -8) + 0x40);
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  bVar1 = *(byte *)((long)param_2 + uVar4);
  uVar5 = (uint)bVar1;
  if (2 < bVar1) {
    uVar7 = (uint)uVar4;
    uVar6 = 4;
    if (uVar7 < 4) {
      uVar6 = uVar7;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_1040f1774;
      uVar6 = (uint)(byte)*param_2;
    }
    else if (uVar6 == 2) {
      uVar6 = (uint)(ushort)*param_2;
    }
    else if (uVar6 == 3) {
      uVar6 = (uint)(uint3)*param_2;
    }
    else {
      uVar6 = *param_2;
    }
    uVar5 = uVar6 | bVar1 - 3 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 3;
  }
LAB_1040f1774:
  if (uVar5 == 2) {
    *param_1 = *(undefined8 *)param_2;
    uVar3 = 2;
  }
  else if (uVar5 == 1) {
    *param_1 = *(undefined8 *)param_2;
    uVar3 = 1;
  }
  else {
    (**(code **)(*(long *)(lVar2 + -8) + 0x20))(param_1,param_2,lVar2);
    uVar3 = 0;
  }
  *(undefined1 *)((long)param_1 + uVar4) = uVar3;
  return param_1;
}



/* Entry: 1040f17d0; end: 1040f199f;  */

uint * FUN_1040f17d0(uint *param_1,uint *param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar7 = *(long *)(lVar1 + -8);
  uVar3 = *(ulong *)(lVar7 + 0x40);
  if (uVar3 < 9) {
    uVar3 = 8;
  }
  bVar2 = *(byte *)((long)param_1 + uVar3);
  uVar4 = (uint)bVar2;
  uVar6 = (uint)uVar3;
  if (2 < bVar2) {
    uVar5 = 4;
    if (uVar6 < 4) {
      uVar5 = uVar6;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_1040f189c;
      uVar5 = (uint)(byte)*param_1;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*param_1;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*param_1;
    }
    else {
      uVar5 = *param_1;
    }
    uVar4 = uVar5 | bVar2 - 3 << (ulong)((uVar6 & 3) << 3);
    if (3 < uVar6) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 3;
  }
LAB_1040f189c:
  if ((uVar4 == 2) || (uVar4 == 1)) {
    _swift_release(*(undefined8 *)param_1);
  }
  else {
    (**(code **)(lVar7 + 8))(param_1,lVar1);
  }
  bVar2 = *(byte *)((long)param_2 + uVar3);
  uVar4 = (uint)bVar2;
  if (2 < bVar2) {
    uVar5 = 4;
    if (uVar6 < 4) {
      uVar5 = uVar6;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_1040f193c;
      uVar5 = (uint)(byte)*param_2;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*param_2;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*param_2;
    }
    else {
      uVar5 = *param_2;
    }
    uVar4 = uVar5 | bVar2 - 3 << (ulong)((uVar6 & 3) << 3);
    if (3 < uVar6) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 3;
  }
LAB_1040f193c:
  if (uVar4 == 2) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    bVar2 = 2;
  }
  else if (uVar4 == 1) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    bVar2 = 1;
  }
  else {
    (**(code **)(lVar7 + 0x20))(param_1,param_2,lVar1);
    bVar2 = 0;
  }
  *(byte *)((long)param_1 + uVar3) = bVar2;
  return param_1;
}



/* Entry: 1040f19a0; end: 1040f1ad7;  */

int FUN_1040f19a0(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  uVar6 = *(ulong *)(*(long *)(lVar4 + -8) + 0x40);
  if (uVar6 < 9) {
    uVar6 = 8;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 0xfe) goto LAB_1040f1a74;
  uVar7 = uVar6 + 1;
  uVar5 = (uint)uVar7;
  uVar2 = uVar5 << 3;
  if (uVar5 < 4) {
    uVar8 = ((param_2 + ~(-1 << (ulong)(uVar2 & 0x1f))) - 0xfd >> (ulong)(uVar2 & 0x1f)) + 1;
    if (uVar8 < 0x100) {
      if (uVar8 < 2) goto LAB_1040f1a74;
      goto LAB_1040f1a00;
    }
    if (uVar8 >> 0x10 == 0) {
      uVar8 = (uint)*(ushort *)((long)param_1 + uVar7);
    }
    else {
      uVar8 = *(uint *)((long)param_1 + uVar7);
    }
  }
  else {
LAB_1040f1a00:
    uVar8 = (uint)*(byte *)((long)param_1 + uVar7);
  }
  if (uVar8 != 0) {
    uVar1 = 0;
    if (uVar5 < 4) {
      uVar1 = uVar8 - 1 << (ulong)(uVar2 & 0x1f);
    }
    if (uVar5 != 0) {
      uVar2 = 4;
      if (uVar5 < 4) {
        uVar2 = uVar5;
      }
      if ((int)uVar2 < 3) {
        if (uVar2 == 1) {
          uVar7 = (ulong)(byte)*param_1;
        }
        else {
          uVar7 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar2 == 3) {
        uVar7 = (ulong)(uint3)*param_1;
      }
      else {
        uVar7 = (ulong)*param_1;
      }
    }
    return ((uint)uVar7 | uVar1) + 0xfe;
  }
LAB_1040f1a74:
  iVar3 = 0;
  if (2 < *(byte *)((long)param_1 + uVar6)) {
    iVar3 = (*(byte *)((long)param_1 + uVar6) ^ 0xff) + 1;
  }
  return iVar3;
}



/* Entry: 1040f1ad8; end: 1040f1c9b;  */

void FUN_1040f1ad8(uint *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  undefined2 uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x18),*(undefined8 *)(param_4 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  uVar4 = *(ulong *)(*(long *)(lVar3 + -8) + 0x40);
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  lVar3 = uVar4 + 1;
  uVar5 = (uint)lVar3;
  if (param_3 < 0xfe) {
    bVar7 = 0;
  }
  else if (uVar5 < 4) {
    uVar1 = ((param_3 + ~(-1 << (ulong)(uVar5 << 3 & 0x1f))) - 0xfd >> (ulong)(uVar5 << 3 & 0x1f)) +
            1;
    bVar7 = 2;
    if (0xffff < uVar1) {
      bVar7 = 4;
    }
    if (uVar1 < 0x100) {
      bVar7 = 1 < uVar1;
    }
  }
  else {
    bVar7 = 1;
  }
  if (param_2 < 0xfe) {
    if (bVar7 < 2) {
      if (bVar7 != 0) {
        *(undefined1 *)((long)param_1 + lVar3) = 0;
      }
    }
    else if (bVar7 == 2) {
      *(undefined2 *)((long)param_1 + lVar3) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar3) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + uVar4) = -(char)param_2;
    }
  }
  else {
    param_2 = param_2 - 0xfe;
    if (uVar5 < 4) {
      iVar6 = (param_2 >> (ulong)(uVar5 << 3 & 0x1f)) + 1;
      if (uVar5 != 0) {
        uVar1 = param_2 & (-1 << (ulong)(uVar5 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,lVar3);
        uVar2 = (undefined2)uVar1;
        if (uVar5 == 3) {
          *(undefined2 *)param_1 = uVar2;
          *(char *)((long)param_1 + 2) = (char)(uVar1 >> 0x10);
        }
        else if (uVar5 == 2) {
          *(undefined2 *)param_1 = uVar2;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,lVar3);
      *param_1 = param_2;
      iVar6 = 1;
    }
    if (bVar7 < 2) {
      if (bVar7 != 0) {
        *(char *)((long)param_1 + lVar3) = (char)iVar6;
      }
    }
    else if (bVar7 == 2) {
      *(short *)((long)param_1 + lVar3) = (short)iVar6;
    }
    else {
      *(int *)((long)param_1 + lVar3) = iVar6;
    }
  }
  return;
}



/* Entry: 1040f1c9c; end: 1040f1d77;  */

void FUN_1040f1c9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e7f0478);
  return;
}



/* Entry: 1040f1d78; end: 1040f1dff;  */

void FUN_1040f1d78(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x18);
  lVar1 = 0x13f;
  _swift_getAssociatedTypeWitness
            (0x13f,uVar2,*(undefined8 *)(param_1 + 0x10),PTR___sSciTL_11034fea8,
             PTR___s13AsyncIteratorSciTl_11034fb50);
  if (uVar2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = PTR___sBoWV_11034d678 + 0x40;
    puStack_28 = puStack_30;
    _swift_initEnumMetadataMultiPayload(param_1,0,3,&lStack_38);
  }
  return;
}



/* Entry: 1040f1e00; end: 1040f1efb;  */

long * FUN_1040f1e00(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  undefined1 uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar3 = *(long *)(lVar1 + -8);
  uVar5 = *(ulong *)(lVar3 + 0x40);
  if (uVar5 < 9) {
    uVar5 = 8;
  }
  if ((*(uint *)(lVar3 + 0x50) & 0x1000f8) == 0 && uVar5 + 1 < 0x19) {
    uVar4 = (uint)*(byte *)((long)param_2 + uVar5);
    if (2 < *(byte *)((long)param_2 + uVar5)) {
      uVar4 = (int)*param_2 + 3;
    }
    if (uVar4 == 2) {
      *param_1 = *param_2;
      uVar2 = 2;
    }
    else {
      if (uVar4 != 1) {
        (**(code **)(lVar3 + 0x10))(param_1,param_2,lVar1);
        *(undefined1 *)((long)param_1 + uVar5) = 0;
        return param_1;
      }
      *param_1 = *param_2;
      uVar2 = 1;
    }
    *(undefined1 *)((long)param_1 + uVar5) = uVar2;
  }
  else {
    uVar4 = *(uint *)(lVar3 + 0x50) & 0xf8;
    lVar1 = *param_2;
    *param_1 = lVar1;
    param_1 = (long *)(lVar1 + ((ulong)(uVar4 + 0x17 & (uVar4 ^ 0xffffffff)) & 0x1f8));
  }
  _swift_retain();
  return param_1;
}



/* Entry: 1040f1efc; end: 1040f1feb;  */

void FUN_1040f1efc(uint *param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  uVar4 = *(ulong *)(*(long *)(lVar2 + -8) + 0x40);
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  bVar1 = *(byte *)((long)param_1 + uVar4);
  uVar5 = (uint)bVar1;
  if (2 < bVar1) {
    uVar3 = (uint)uVar4;
    uVar6 = 4;
    if (uVar3 < 4) {
      uVar6 = uVar3;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_1040f1fb8;
      uVar6 = (uint)(byte)*param_1;
    }
    else if (uVar6 == 2) {
      uVar6 = (uint)(ushort)*param_1;
    }
    else if (uVar6 == 3) {
      uVar6 = (uint)(uint3)*param_1;
    }
    else {
      uVar6 = *param_1;
    }
    uVar5 = uVar6 | bVar1 - 3 << (ulong)((uVar3 & 3) << 3);
    if (3 < uVar3) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 3;
  }
LAB_1040f1fb8:
  if ((uVar5 != 2) && (uVar5 != 1)) {
                    /* WARNING: Could not recover jumptable at 0x0001040f1fe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1,lVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)param_1);
  return;
}



/* Entry: 1040f1fec; end: 1040f210b;  */

undefined8 * FUN_1040f1fec(undefined8 *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  undefined1 uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  uVar4 = *(ulong *)(*(long *)(lVar2 + -8) + 0x40);
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  bVar1 = *(byte *)((long)param_2 + uVar4);
  uVar5 = (uint)bVar1;
  if (2 < bVar1) {
    uVar7 = (uint)uVar4;
    uVar6 = 4;
    if (uVar7 < 4) {
      uVar6 = uVar7;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_1040f20ac;
      uVar6 = (uint)(byte)*param_2;
    }
    else if (uVar6 == 2) {
      uVar6 = (uint)(ushort)*param_2;
    }
    else if (uVar6 == 3) {
      uVar6 = (uint)(uint3)*param_2;
    }
    else {
      uVar6 = *param_2;
    }
    uVar5 = uVar6 | bVar1 - 3 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 3;
  }
LAB_1040f20ac:
  if (uVar5 == 2) {
    *param_1 = *(undefined8 *)param_2;
    uVar3 = 2;
  }
  else {
    if (uVar5 != 1) {
      (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,param_2,lVar2);
      *(undefined1 *)((long)param_1 + uVar4) = 0;
      return param_1;
    }
    *param_1 = *(undefined8 *)param_2;
    uVar3 = 1;
  }
  *(undefined1 *)((long)param_1 + uVar4) = uVar3;
  _swift_retain();
  return param_1;
}



/* Entry: 1040f210c; end: 1040f22df;  */

uint * FUN_1040f210c(uint *param_1,uint *param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar7 = *(long *)(lVar1 + -8);
  uVar3 = *(ulong *)(lVar7 + 0x40);
  if (uVar3 < 9) {
    uVar3 = 8;
  }
  bVar2 = *(byte *)((long)param_1 + uVar3);
  uVar4 = (uint)bVar2;
  uVar6 = (uint)uVar3;
  if (2 < bVar2) {
    uVar5 = 4;
    if (uVar6 < 4) {
      uVar5 = uVar6;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_1040f21d8;
      uVar5 = (uint)(byte)*param_1;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*param_1;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*param_1;
    }
    else {
      uVar5 = *param_1;
    }
    uVar4 = uVar5 | bVar2 - 3 << (ulong)((uVar6 & 3) << 3);
    if (3 < uVar6) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 3;
  }
LAB_1040f21d8:
  if ((uVar4 == 2) || (uVar4 == 1)) {
    _swift_release(*(undefined8 *)param_1);
  }
  else {
    (**(code **)(lVar7 + 8))(param_1,lVar1);
  }
  bVar2 = *(byte *)((long)param_2 + uVar3);
  uVar4 = (uint)bVar2;
  if (2 < bVar2) {
    uVar5 = 4;
    if (uVar6 < 4) {
      uVar5 = uVar6;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_1040f2278;
      uVar5 = (uint)(byte)*param_2;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*param_2;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*param_2;
    }
    else {
      uVar5 = *param_2;
    }
    uVar4 = uVar5 | bVar2 - 3 << (ulong)((uVar6 & 3) << 3);
    if (3 < uVar6) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 3;
  }
LAB_1040f2278:
  if (uVar4 == 2) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    bVar2 = 2;
  }
  else {
    if (uVar4 != 1) {
      (**(code **)(lVar7 + 0x10))(param_1,param_2,lVar1);
      *(byte *)((long)param_1 + uVar3) = 0;
      return param_1;
    }
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    bVar2 = 1;
  }
  *(byte *)((long)param_1 + uVar3) = bVar2;
  _swift_retain();
  return param_1;
}



/* Entry: 1040f22e0; end: 1040f23fb;  */

undefined8 * FUN_1040f22e0(undefined8 *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  undefined1 uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  uVar4 = *(ulong *)(*(long *)(lVar2 + -8) + 0x40);
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  bVar1 = *(byte *)((long)param_2 + uVar4);
  uVar5 = (uint)bVar1;
  if (2 < bVar1) {
    uVar7 = (uint)uVar4;
    uVar6 = 4;
    if (uVar7 < 4) {
      uVar6 = uVar7;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_1040f23a0;
      uVar6 = (uint)(byte)*param_2;
    }
    else if (uVar6 == 2) {
      uVar6 = (uint)(ushort)*param_2;
    }
    else if (uVar6 == 3) {
      uVar6 = (uint)(uint3)*param_2;
    }
    else {
      uVar6 = *param_2;
    }
    uVar5 = uVar6 | bVar1 - 3 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 3;
  }
LAB_1040f23a0:
  if (uVar5 == 2) {
    *param_1 = *(undefined8 *)param_2;
    uVar3 = 2;
  }
  else if (uVar5 == 1) {
    *param_1 = *(undefined8 *)param_2;
    uVar3 = 1;
  }
  else {
    (**(code **)(*(long *)(lVar2 + -8) + 0x20))(param_1,param_2,lVar2);
    uVar3 = 0;
  }
  *(undefined1 *)((long)param_1 + uVar4) = uVar3;
  return param_1;
}



/* Entry: 1040f23fc; end: 1040f25cb;  */

uint * FUN_1040f23fc(uint *param_1,uint *param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar7 = *(long *)(lVar1 + -8);
  uVar3 = *(ulong *)(lVar7 + 0x40);
  if (uVar3 < 9) {
    uVar3 = 8;
  }
  bVar2 = *(byte *)((long)param_1 + uVar3);
  uVar4 = (uint)bVar2;
  uVar6 = (uint)uVar3;
  if (2 < bVar2) {
    uVar5 = 4;
    if (uVar6 < 4) {
      uVar5 = uVar6;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_1040f24c8;
      uVar5 = (uint)(byte)*param_1;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*param_1;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*param_1;
    }
    else {
      uVar5 = *param_1;
    }
    uVar4 = uVar5 | bVar2 - 3 << (ulong)((uVar6 & 3) << 3);
    if (3 < uVar6) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 3;
  }
LAB_1040f24c8:
  if ((uVar4 == 2) || (uVar4 == 1)) {
    _swift_release(*(undefined8 *)param_1);
  }
  else {
    (**(code **)(lVar7 + 8))(param_1,lVar1);
  }
  bVar2 = *(byte *)((long)param_2 + uVar3);
  uVar4 = (uint)bVar2;
  if (2 < bVar2) {
    uVar5 = 4;
    if (uVar6 < 4) {
      uVar5 = uVar6;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_1040f2568;
      uVar5 = (uint)(byte)*param_2;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*param_2;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*param_2;
    }
    else {
      uVar5 = *param_2;
    }
    uVar4 = uVar5 | bVar2 - 3 << (ulong)((uVar6 & 3) << 3);
    if (3 < uVar6) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 3;
  }
LAB_1040f2568:
  if (uVar4 == 2) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    bVar2 = 2;
  }
  else if (uVar4 == 1) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    bVar2 = 1;
  }
  else {
    (**(code **)(lVar7 + 0x20))(param_1,param_2,lVar1);
    bVar2 = 0;
  }
  *(byte *)((long)param_1 + uVar3) = bVar2;
  return param_1;
}



/* Entry: 1040f25cc; end: 1040f2703;  */

int FUN_1040f25cc(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  uVar6 = *(ulong *)(*(long *)(lVar4 + -8) + 0x40);
  if (uVar6 < 9) {
    uVar6 = 8;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 0xfe) goto LAB_1040f26a0;
  uVar7 = uVar6 + 1;
  uVar5 = (uint)uVar7;
  uVar2 = uVar5 << 3;
  if (uVar5 < 4) {
    uVar8 = ((param_2 + ~(-1 << (ulong)(uVar2 & 0x1f))) - 0xfd >> (ulong)(uVar2 & 0x1f)) + 1;
    if (uVar8 < 0x100) {
      if (uVar8 < 2) goto LAB_1040f26a0;
      goto LAB_1040f262c;
    }
    if (uVar8 >> 0x10 == 0) {
      uVar8 = (uint)*(ushort *)((long)param_1 + uVar7);
    }
    else {
      uVar8 = *(uint *)((long)param_1 + uVar7);
    }
  }
  else {
LAB_1040f262c:
    uVar8 = (uint)*(byte *)((long)param_1 + uVar7);
  }
  if (uVar8 != 0) {
    uVar1 = 0;
    if (uVar5 < 4) {
      uVar1 = uVar8 - 1 << (ulong)(uVar2 & 0x1f);
    }
    if (uVar5 != 0) {
      uVar2 = 4;
      if (uVar5 < 4) {
        uVar2 = uVar5;
      }
      if ((int)uVar2 < 3) {
        if (uVar2 == 1) {
          uVar7 = (ulong)(byte)*param_1;
        }
        else {
          uVar7 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar2 == 3) {
        uVar7 = (ulong)(uint3)*param_1;
      }
      else {
        uVar7 = (ulong)*param_1;
      }
    }
    return ((uint)uVar7 | uVar1) + 0xfe;
  }
LAB_1040f26a0:
  iVar3 = 0;
  if (2 < *(byte *)((long)param_1 + uVar6)) {
    iVar3 = (*(byte *)((long)param_1 + uVar6) ^ 0xff) + 1;
  }
  return iVar3;
}



/* Entry: 1040f2704; end: 1040f28c7;  */

void FUN_1040f2704(uint *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  undefined2 uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x18),*(undefined8 *)(param_4 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  uVar4 = *(ulong *)(*(long *)(lVar3 + -8) + 0x40);
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  lVar3 = uVar4 + 1;
  uVar5 = (uint)lVar3;
  if (param_3 < 0xfe) {
    bVar7 = 0;
  }
  else if (uVar5 < 4) {
    uVar1 = ((param_3 + ~(-1 << (ulong)(uVar5 << 3 & 0x1f))) - 0xfd >> (ulong)(uVar5 << 3 & 0x1f)) +
            1;
    bVar7 = 2;
    if (0xffff < uVar1) {
      bVar7 = 4;
    }
    if (uVar1 < 0x100) {
      bVar7 = 1 < uVar1;
    }
  }
  else {
    bVar7 = 1;
  }
  if (param_2 < 0xfe) {
    if (bVar7 < 2) {
      if (bVar7 != 0) {
        *(undefined1 *)((long)param_1 + lVar3) = 0;
      }
    }
    else if (bVar7 == 2) {
      *(undefined2 *)((long)param_1 + lVar3) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar3) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + uVar4) = -(char)param_2;
    }
  }
  else {
    param_2 = param_2 - 0xfe;
    if (uVar5 < 4) {
      iVar6 = (param_2 >> (ulong)(uVar5 << 3 & 0x1f)) + 1;
      if (uVar5 != 0) {
        uVar1 = param_2 & (-1 << (ulong)(uVar5 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,lVar3);
        uVar2 = (undefined2)uVar1;
        if (uVar5 == 3) {
          *(undefined2 *)param_1 = uVar2;
          *(char *)((long)param_1 + 2) = (char)(uVar1 >> 0x10);
        }
        else if (uVar5 == 2) {
          *(undefined2 *)param_1 = uVar2;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,lVar3);
      *param_1 = param_2;
      iVar6 = 1;
    }
    if (bVar7 < 2) {
      if (bVar7 != 0) {
        *(char *)((long)param_1 + lVar3) = (char)iVar6;
      }
    }
    else if (bVar7 == 2) {
      *(short *)((long)param_1 + lVar3) = (short)iVar6;
    }
    else {
      *(int *)((long)param_1 + lVar3) = iVar6;
    }
  }
  return;
}



/* Entry: 1040f28c8; end: 1040f298b;  */

uint FUN_1040f28c8(uint *param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  uVar5 = *(ulong *)(*(long *)(lVar3 + -8) + 0x40);
  if (uVar5 < 9) {
    uVar5 = 8;
  }
  bVar1 = *(byte *)((long)param_1 + uVar5);
  uVar2 = (uint)bVar1;
  if (2 < bVar1) {
    uVar4 = (uint)uVar5;
    uVar6 = 4;
    if (uVar4 < 4) {
      uVar6 = uVar4;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) {
        return uVar2;
      }
      uVar6 = (uint)(byte)*param_1;
    }
    else if (uVar6 == 2) {
      uVar6 = (uint)(ushort)*param_1;
    }
    else if (uVar6 == 3) {
      uVar6 = (uint)(uint3)*param_1;
    }
    else {
      uVar6 = *param_1;
    }
    uVar2 = uVar6 | bVar1 - 3 << (ulong)((uVar4 & 3) << 3);
    if (3 < uVar4) {
      uVar2 = uVar6;
    }
    uVar2 = uVar2 + 3;
  }
  return uVar2;
}



/* Entry: 1040f298c; end: 1040f298f;  */

void FUN_1040f298c(void)

{
  return;
}



/* Entry: 1040f2990; end: 1040f2a77;  */

void FUN_1040f2990(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  undefined2 uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  uVar4 = *(ulong *)(*(long *)(lVar3 + -8) + 0x40);
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  if (param_2 < 3) {
    *(char *)((long)param_1 + uVar4) = (char)param_2;
  }
  else {
    param_2 = param_2 - 3;
    uVar5 = (uint)uVar4;
    if (uVar5 < 4) {
      *(char *)((long)param_1 + uVar4) = (char)(param_2 >> (ulong)(uVar5 << 3 & 0x1f)) + '\x03';
      if (uVar5 != 0) {
        uVar1 = param_2 & (-1 << (ulong)(uVar5 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,uVar4);
        uVar2 = (undefined2)uVar1;
        if (uVar5 == 3) {
          *(undefined2 *)param_1 = uVar2;
          *(char *)((long)param_1 + 2) = (char)(uVar1 >> 0x10);
        }
        else if (uVar5 == 2) {
          *(undefined2 *)param_1 = uVar2;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      *(undefined1 *)((long)param_1 + uVar4) = 3;
      _bzero(param_1,uVar4);
      *param_1 = param_2;
    }
  }
  return;
}



/* Entry: 1040f2a78; end: 1040f2a9b;  */

void FUN_1040f2a78(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xfd) {
    if (0xfc < param_3) {
      *(undefined1 *)((long)param_1 + 9) = 0;
    }
    if (param_2 != 0) {
      *(char *)(param_1 + 1) = -(char)param_2;
      return;
    }
  }
  else {
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = (ulong)(param_2 - 0xfd);
    if (0xfc < param_3) {
      *(undefined1 *)((long)param_1 + 9) = 1;
    }
  }
  return;
}



/* Entry: 1040f2a9c; end: 1040f2b13;  */

void FUN_1040f2a9c(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_30;
  undefined *puStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  func_0x0001040f3530(0x13f,uVar2,*(undefined8 *)(param_1 + 0x18));
  if (uVar2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = PTR___sBi64_WV_11034d670 + 0x40;
    _swift_initStructMetadata(param_1,0,2,&lStack_30,param_1 + 0x20);
  }
  return;
}



/* Entry: 1040f2b14; end: 1040f2df7;  */

long * FUN_1040f2b14(long *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  
  lVar2 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar3 = *(ulong *)(lVar2 + 0x40);
  if (uVar3 < 0x21) {
    uVar3 = 0x20;
  }
  if ((*(uint *)(lVar2 + 0x50) & 0x1000f8) != 0 || 0x18 < (uVar3 & 0xfffffffffffffff8) + 0x10) {
    uVar4 = *(uint *)(lVar2 + 0x50) & 0xf8;
    lVar2 = *(long *)param_2;
    *param_1 = lVar2;
    _swift_retain();
    return (long *)(lVar2 + ((ulong)(uVar4 + 0x17 & (uVar4 ^ 0xffffffff)) & 0x1f8));
  }
  bVar1 = *(byte *)((long)param_2 + uVar3);
  uVar4 = (uint)bVar1;
  if (2 < bVar1) {
    uVar6 = (uint)uVar3;
    uVar5 = 4;
    if (uVar6 < 4) {
      uVar5 = uVar6;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_1040f2bfc;
      uVar5 = (uint)(byte)*param_2;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*param_2;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*param_2;
    }
    else {
      uVar5 = *param_2;
    }
    uVar4 = uVar5 | bVar1 - 3 << (ulong)((uVar6 & 3) << 3);
    if (3 < uVar6) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 3;
  }
LAB_1040f2bfc:
  if (uVar4 == 2) {
    *param_1 = *(long *)param_2;
    *(undefined1 *)((long)param_1 + uVar3) = 2;
    _swift_retain();
  }
  else if (uVar4 == 1) {
    lVar2 = *(long *)(param_2 + 2);
    *param_1 = *(long *)param_2;
    param_1[1] = lVar2;
    lVar7 = *(long *)(param_2 + 4);
    param_1[3] = *(long *)(param_2 + 6);
    param_1[2] = lVar7;
    *(undefined1 *)((long)param_1 + uVar3) = 1;
    _swift_retain();
    _swift_retain(lVar2);
  }
  else if (uVar4 == 0) {
    (**(code **)(lVar2 + 0x10))(param_1,param_2);
    *(undefined1 *)((long)param_1 + uVar3) = 0;
  }
  else {
    _memcpy(param_1,param_2,uVar3 + 1);
  }
  *(undefined8 *)(uVar3 + 8 + (long)param_1 & 0xffffffffffffff8) =
       *(undefined8 *)((ulong)(uVar3 + 8 + (long)param_2) & 0xffffffffffffff8);
  return param_1;
}



/* Entry: 1040f2df8; end: 1040f301f;  */

uint * FUN_1040f2df8(uint *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  
  lVar5 = *(long *)(param_3 + 0x10);
  lVar8 = *(long *)(lVar5 + -8);
  uVar2 = *(ulong *)(lVar8 + 0x40);
  if (uVar2 < 0x21) {
    uVar2 = 0x20;
  }
  if (param_1 == param_2) goto LAB_1040f2fec;
  bVar1 = *(byte *)((long)param_1 + uVar2);
  uVar3 = (uint)bVar1;
  uVar7 = (uint)uVar2;
  if (2 < bVar1) {
    uVar4 = 4;
    if (uVar7 < 4) {
      uVar4 = uVar7;
    }
    if ((int)uVar4 < 2) {
      if (uVar4 == 0) goto LAB_1040f2ea8;
      uVar4 = (uint)(byte)*param_1;
    }
    else if (uVar4 == 2) {
      uVar4 = (uint)(ushort)*param_1;
    }
    else if (uVar4 == 3) {
      uVar4 = (uint)(uint3)*param_1;
    }
    else {
      uVar4 = *param_1;
    }
    uVar3 = uVar4 | bVar1 - 3 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar3 = uVar4;
    }
    uVar3 = uVar3 + 3;
  }
LAB_1040f2ea8:
  if (uVar3 == 2) {
    uVar6 = *(undefined8 *)param_1;
LAB_1040f2ee4:
    _swift_release(uVar6);
  }
  else {
    if (uVar3 == 1) {
      _swift_release(*(undefined8 *)param_1);
      uVar6 = *(undefined8 *)(param_1 + 2);
      goto LAB_1040f2ee4;
    }
    if (uVar3 == 0) {
      (**(code **)(lVar8 + 8))(param_1,lVar5);
    }
  }
  bVar1 = *(byte *)((long)param_2 + uVar2);
  uVar3 = (uint)bVar1;
  if (2 < bVar1) {
    uVar4 = 4;
    if (uVar7 < 4) {
      uVar4 = uVar7;
    }
    if ((int)uVar4 < 2) {
      if (uVar4 == 0) goto LAB_1040f2f5c;
      uVar4 = (uint)(byte)*param_2;
    }
    else if (uVar4 == 2) {
      uVar4 = (uint)(ushort)*param_2;
    }
    else if (uVar4 == 3) {
      uVar4 = (uint)(uint3)*param_2;
    }
    else {
      uVar4 = *param_2;
    }
    uVar3 = uVar4 | bVar1 - 3 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar3 = uVar4;
    }
    uVar3 = uVar3 + 3;
  }
LAB_1040f2f5c:
  if (uVar3 == 2) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(byte *)((long)param_1 + uVar2) = 2;
    _swift_retain();
  }
  else if (uVar3 == 1) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    uVar6 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 2) = uVar6;
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(byte *)((long)param_1 + uVar2) = 1;
    _swift_retain();
    _swift_retain(uVar6);
  }
  else if (uVar3 == 0) {
    (**(code **)(lVar8 + 0x10))(param_1,param_2,lVar5);
    *(byte *)((long)param_1 + uVar2) = 0;
  }
  else {
    _memcpy(param_1,param_2,uVar2 + 1);
  }
LAB_1040f2fec:
  *(undefined8 *)((ulong)(uVar2 + 8 + (long)param_1) & 0xffffffffffffff8) =
       *(undefined8 *)((ulong)(uVar2 + 8 + (long)param_2) & 0xffffffffffffff8);
  return param_1;
}



/* Entry: 1040f3020; end: 1040f3157;  */

void FUN_1040f3020(undefined8 *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar2 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar3 = *(ulong *)(lVar2 + 0x40);
  if (uVar3 < 0x21) {
    uVar3 = 0x20;
  }
  bVar1 = *(byte *)((long)param_2 + uVar3);
  uVar4 = (uint)bVar1;
  if (2 < bVar1) {
    uVar6 = (uint)uVar3;
    uVar5 = 4;
    if (uVar6 < 4) {
      uVar5 = uVar6;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_1040f30c0;
      uVar5 = (uint)(byte)*param_2;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*param_2;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*param_2;
    }
    else {
      uVar5 = *param_2;
    }
    uVar4 = uVar5 | bVar1 - 3 << (ulong)((uVar6 & 3) << 3);
    if (3 < uVar6) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 3;
  }
LAB_1040f30c0:
  if (uVar4 == 2) {
    *param_1 = *(undefined8 *)param_2;
    *(undefined1 *)((long)param_1 + uVar3) = 2;
  }
  else if (uVar4 == 1) {
    uVar7 = *(undefined8 *)param_2;
    uVar9 = *(undefined8 *)(param_2 + 6);
    uVar8 = *(undefined8 *)(param_2 + 4);
    param_1[1] = *(undefined8 *)(param_2 + 2);
    *param_1 = uVar7;
    param_1[3] = uVar9;
    param_1[2] = uVar8;
    *(undefined1 *)((long)param_1 + uVar3) = 1;
  }
  else if (uVar4 == 0) {
    (**(code **)(lVar2 + 0x20))(param_1,param_2);
    *(undefined1 *)((long)param_1 + uVar3) = 0;
  }
  else {
    _memcpy(param_1,param_2,uVar3 + 1);
  }
  *(undefined8 *)(uVar3 + 8 + (long)param_1 & 0xffffffffffffff8) =
       *(undefined8 *)((ulong)(uVar3 + 8 + (long)param_2) & 0xffffffffffffff8);
  return;
}



/* Entry: 1040f3158; end: 1040f3357;  */

uint * FUN_1040f3158(uint *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar6 = *(long *)(param_3 + 0x10);
  lVar8 = *(long *)(lVar6 + -8);
  uVar3 = *(ulong *)(lVar8 + 0x40);
  if (uVar3 < 0x21) {
    uVar3 = 0x20;
  }
  if (param_1 == param_2) goto LAB_1040f3324;
  bVar1 = *(byte *)((long)param_1 + uVar3);
  uVar4 = (uint)bVar1;
  uVar7 = (uint)uVar3;
  if (2 < bVar1) {
    uVar5 = 4;
    if (uVar7 < 4) {
      uVar5 = uVar7;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_1040f3208;
      uVar5 = (uint)(byte)*param_1;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*param_1;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*param_1;
    }
    else {
      uVar5 = *param_1;
    }
    uVar4 = uVar5 | bVar1 - 3 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 3;
  }
LAB_1040f3208:
  if (uVar4 == 2) {
    uVar2 = *(undefined8 *)param_1;
LAB_1040f3244:
    _swift_release(uVar2);
  }
  else {
    if (uVar4 == 1) {
      _swift_release(*(undefined8 *)param_1);
      uVar2 = *(undefined8 *)(param_1 + 2);
      goto LAB_1040f3244;
    }
    if (uVar4 == 0) {
      (**(code **)(lVar8 + 8))(param_1,lVar6);
    }
  }
  bVar1 = *(byte *)((long)param_2 + uVar3);
  uVar4 = (uint)bVar1;
  if (2 < bVar1) {
    uVar5 = 4;
    if (uVar7 < 4) {
      uVar5 = uVar7;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_1040f32bc;
      uVar5 = (uint)(byte)*param_2;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*param_2;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*param_2;
    }
    else {
      uVar5 = *param_2;
    }
    uVar4 = uVar5 | bVar1 - 3 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 3;
  }
LAB_1040f32bc:
  if (uVar4 == 2) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(byte *)((long)param_1 + uVar3) = 2;
  }
  else if (uVar4 == 1) {
    uVar2 = *(undefined8 *)param_2;
    uVar10 = *(undefined8 *)(param_2 + 6);
    uVar9 = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)param_1 = uVar2;
    *(undefined8 *)(param_1 + 6) = uVar10;
    *(undefined8 *)(param_1 + 4) = uVar9;
    *(byte *)((long)param_1 + uVar3) = 1;
  }
  else if (uVar4 == 0) {
    (**(code **)(lVar8 + 0x20))(param_1,param_2,lVar6);
    *(byte *)((long)param_1 + uVar3) = 0;
  }
  else {
    _memcpy(param_1,param_2,uVar3 + 1);
  }
LAB_1040f3324:
  *(undefined8 *)((ulong)(uVar3 + 8 + (long)param_1) & 0xffffffffffffff8) =
       *(undefined8 *)((ulong)(uVar3 + 8 + (long)param_2) & 0xffffffffffffff8);
  return param_1;
}



/* Entry: 1040f3358; end: 1040f340f;  */

int FUN_1040f3358(uint *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar3 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40);
  if (uVar3 < 0x21) {
    uVar3 = 0x20;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    uVar1 = (uVar3 & 0xfffffffffffffff8) + 0x10;
    param_2 = param_2 - 0xfb;
    uVar2 = uVar1 & 0xfffffff8;
    uVar4 = (uint)uVar2;
    iVar6 = 2;
    if (uVar2 != 0) {
      param_2 = 2;
    }
    if (0xffff < param_2) {
      iVar6 = 4;
    }
    if (param_2 < 0x100) {
      iVar6 = 1;
    }
    if (iVar6 == 4) {
      uVar5 = *(uint *)((long)param_1 + uVar1);
    }
    else {
      if (iVar6 == 2) {
        uVar5 = (uint)*(ushort *)((long)param_1 + uVar1);
        if (*(ushort *)((long)param_1 + uVar1) == 0) goto LAB_1040f33fc;
        goto LAB_1040f33d4;
      }
      uVar5 = (uint)*(byte *)((long)param_1 + uVar1);
    }
    if (uVar5 != 0) {
LAB_1040f33d4:
      uVar5 = uVar5 - 1;
      if (uVar2 != 0) {
        uVar5 = 0;
        uVar4 = *param_1;
      }
      return (uVar4 | uVar5) + 0xfd;
    }
  }
LAB_1040f33fc:
  iVar6 = 0;
  if (3 < *(byte *)((long)param_1 + uVar3)) {
    iVar6 = (*(byte *)((long)param_1 + uVar3) ^ 0xff) + 1;
  }
  return iVar6;
}



/* Entry: 1040f3410; end: 1040f3523;  */

void FUN_1040f3410(int *param_1,uint param_2,uint param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  
  uVar2 = *(ulong *)(*(long *)(*(long *)(param_4 + 0x10) + -8) + 0x40);
  if (uVar2 < 0x21) {
    uVar2 = 0x20;
  }
  lVar1 = (uVar2 & 0xfffffffffffffff8) + 0x10;
  if (param_3 < 0xfd) {
    uVar4 = 0;
  }
  else {
    param_3 = param_3 - 0xfb;
    uVar4 = 2;
    if ((int)lVar1 != 0) {
      param_3 = 2;
    }
    if (0xffff < param_3) {
      uVar4 = 4;
    }
    if (param_3 < 0x100) {
      uVar4 = 1;
    }
  }
  if (param_2 < 0xfd) {
    if (uVar4 < 2) {
      if (uVar4 != 0) {
        *(undefined1 *)((long)param_1 + lVar1) = 0;
      }
    }
    else if (uVar4 == 2) {
      *(undefined2 *)((long)param_1 + lVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar1) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + uVar2) = -(char)param_2;
    }
  }
  else {
    iVar3 = param_2 - 0xfc;
    if ((int)lVar1 != 0) {
      iVar3 = 1;
      _bzero(param_1,lVar1);
      *param_1 = param_2 - 0xfd;
    }
    if (uVar4 < 2) {
      if (uVar4 != 0) {
        *(char *)((long)param_1 + lVar1) = (char)iVar3;
      }
    }
    else if (uVar4 == 2) {
      *(short *)((long)param_1 + lVar1) = (short)iVar3;
    }
    else {
      *(int *)((long)param_1 + lVar1) = iVar3;
    }
  }
  return;
}



/* Entry: 1040f3524; end: 1040f353b;  */

void FUN_1040f3524(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e7f050c);
  return;
}



/* Entry: 1040f353c; end: 1040f35bb;  */

void FUN_1040f353c(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = &UNK_10dcd77f8;
    puStack_28 = PTR___sBoWV_11034d678 + 0x40;
    _swift_initEnumMetadataMultiPayload(param_1,0,3,&lStack_38);
  }
  return;
}



/* Entry: 1040f35bc; end: 1040f3723;  */

long * FUN_1040f35bc(long *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar2 = *(ulong *)(lVar3 + 0x40);
  if (uVar2 < 0x21) {
    uVar2 = 0x20;
  }
  if ((*(uint *)(lVar3 + 0x50) & 0x1000f8) != 0 || 0x18 < uVar2 + 1) {
    uVar4 = *(uint *)(lVar3 + 0x50) & 0xf8;
    lVar3 = *(long *)param_2;
    *param_1 = lVar3;
    param_1 = (long *)(lVar3 + ((ulong)(uVar4 + 0x17 & (uVar4 ^ 0xffffffff)) & 0x1f8));
    goto LAB_1040f3620;
  }
  bVar1 = *(byte *)((long)param_2 + uVar2);
  uVar4 = (uint)bVar1;
  if (2 < bVar1) {
    uVar6 = (uint)uVar2;
    uVar5 = 4;
    if (uVar6 < 4) {
      uVar5 = uVar6;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_1040f36ac;
      uVar5 = (uint)(byte)*param_2;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*param_2;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*param_2;
    }
    else {
      uVar5 = *param_2;
    }
    uVar4 = uVar5 | bVar1 - 3 << (ulong)((uVar6 & 3) << 3);
    if (3 < uVar6) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 3;
  }
LAB_1040f36ac:
  if (uVar4 == 2) {
    lVar3 = *(long *)param_2;
    *param_1 = lVar3;
    *(undefined1 *)((long)param_1 + uVar2) = 2;
  }
  else {
    if (uVar4 != 1) {
      if (uVar4 == 0) {
        (**(code **)(lVar3 + 0x10))(param_1);
        *(undefined1 *)((long)param_1 + uVar2) = 0;
        return param_1;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)(param_1,param_2,uVar2 + 1);
      return param_1;
    }
    lVar3 = *(long *)(param_2 + 2);
    *param_1 = *(long *)param_2;
    param_1[1] = lVar3;
    lVar7 = *(long *)(param_2 + 4);
    param_1[3] = *(long *)(param_2 + 6);
    param_1[2] = lVar7;
    *(undefined1 *)((long)param_1 + uVar2) = 1;
    _swift_retain();
  }
LAB_1040f3620:
  _swift_retain(lVar3);
  return param_1;
}



/* Entry: 1040f3724; end: 1040f3803;  */

void FUN_1040f3724(uint *param_1,long param_2)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  
  lVar3 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  uVar5 = *(ulong *)(lVar3 + 0x40);
  if (uVar5 < 0x21) {
    uVar5 = 0x20;
  }
  bVar1 = *(byte *)((long)param_1 + uVar5);
  uVar6 = (uint)bVar1;
  if (2 < bVar1) {
    uVar4 = (uint)uVar5;
    uVar7 = 4;
    if (uVar4 < 4) {
      uVar7 = uVar4;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) goto LAB_1040f37b0;
      uVar7 = (uint)(byte)*param_1;
    }
    else if (uVar7 == 2) {
      uVar7 = (uint)(ushort)*param_1;
    }
    else if (uVar7 == 3) {
      uVar7 = (uint)(uint3)*param_1;
    }
    else {
      uVar7 = *param_1;
    }
    uVar6 = uVar7 | bVar1 - 3 << (ulong)((uVar4 & 3) << 3);
    if (3 < uVar4) {
      uVar6 = uVar7;
    }
    uVar6 = uVar6 + 3;
  }
LAB_1040f37b0:
  if (uVar6 == 2) {
    uVar2 = *(undefined8 *)param_1;
  }
  else {
    if (uVar6 != 1) {
      if (uVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001040f37c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar3 + 8))();
        return;
      }
      return;
    }
    _swift_release(*(undefined8 *)param_1);
    uVar2 = *(undefined8 *)(param_1 + 2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 1040f3804; end: 1040f392f;  */

undefined8 * FUN_1040f3804(undefined8 *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar4 = *(ulong *)(lVar3 + 0x40);
  if (uVar4 < 0x21) {
    uVar4 = 0x20;
  }
  bVar1 = *(byte *)((long)param_2 + uVar4);
  uVar5 = (uint)bVar1;
  if (2 < bVar1) {
    uVar7 = (uint)uVar4;
    uVar6 = 4;
    if (uVar7 < 4) {
      uVar6 = uVar7;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_1040f38a4;
      uVar6 = (uint)(byte)*param_2;
    }
    else if (uVar6 == 2) {
      uVar6 = (uint)(ushort)*param_2;
    }
    else if (uVar6 == 3) {
      uVar6 = (uint)(uint3)*param_2;
    }
    else {
      uVar6 = *param_2;
    }
    uVar5 = uVar6 | bVar1 - 3 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 3;
  }
LAB_1040f38a4:
  if (uVar5 == 2) {
    uVar2 = *(undefined8 *)param_2;
    *param_1 = uVar2;
    *(undefined1 *)((long)param_1 + uVar4) = 2;
  }
  else {
    if (uVar5 != 1) {
      if (uVar5 == 0) {
        (**(code **)(lVar3 + 0x10))(param_1);
        *(undefined1 *)((long)param_1 + uVar4) = 0;
        return param_1;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)(param_1,param_2,uVar4 + 1);
      return param_1;
    }
    uVar2 = *(undefined8 *)(param_2 + 2);
    *param_1 = *(undefined8 *)param_2;
    param_1[1] = uVar2;
    uVar8 = *(undefined8 *)(param_2 + 4);
    param_1[3] = *(undefined8 *)(param_2 + 6);
    param_1[2] = uVar8;
    *(undefined1 *)((long)param_1 + uVar4) = 1;
    _swift_retain();
  }
  _swift_retain(uVar2);
  return param_1;
}



/* Entry: 1040f3930; end: 1040f3b43;  */

uint * FUN_1040f3930(uint *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar5 = *(long *)(param_3 + 0x10);
  lVar8 = *(long *)(lVar5 + -8);
  uVar2 = *(ulong *)(lVar8 + 0x40);
  if (uVar2 < 0x21) {
    uVar2 = 0x20;
  }
  bVar1 = *(byte *)((long)param_1 + uVar2);
  uVar3 = (uint)bVar1;
  uVar7 = (uint)uVar2;
  if (2 < bVar1) {
    uVar4 = 4;
    if (uVar7 < 4) {
      uVar4 = uVar7;
    }
    if ((int)uVar4 < 2) {
      if (uVar4 == 0) goto LAB_1040f39e0;
      uVar4 = (uint)(byte)*param_1;
    }
    else if (uVar4 == 2) {
      uVar4 = (uint)(ushort)*param_1;
    }
    else if (uVar4 == 3) {
      uVar4 = (uint)(uint3)*param_1;
    }
    else {
      uVar4 = *param_1;
    }
    uVar3 = uVar4 | bVar1 - 3 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar3 = uVar4;
    }
    uVar3 = uVar3 + 3;
  }
LAB_1040f39e0:
  if (uVar3 == 2) {
    uVar6 = *(undefined8 *)param_1;
LAB_1040f3a1c:
    _swift_release(uVar6);
  }
  else {
    if (uVar3 == 1) {
      _swift_release(*(undefined8 *)param_1);
      uVar6 = *(undefined8 *)(param_1 + 2);
      goto LAB_1040f3a1c;
    }
    if (uVar3 == 0) {
      (**(code **)(lVar8 + 8))(param_1,lVar5);
    }
  }
  bVar1 = *(byte *)((long)param_2 + uVar2);
  uVar3 = (uint)bVar1;
  if (2 < bVar1) {
    uVar4 = 4;
    if (uVar7 < 4) {
      uVar4 = uVar7;
    }
    if ((int)uVar4 < 2) {
      if (uVar4 == 0) goto LAB_1040f3a94;
      uVar4 = (uint)(byte)*param_2;
    }
    else if (uVar4 == 2) {
      uVar4 = (uint)(ushort)*param_2;
    }
    else if (uVar4 == 3) {
      uVar4 = (uint)(uint3)*param_2;
    }
    else {
      uVar4 = *param_2;
    }
    uVar3 = uVar4 | bVar1 - 3 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar3 = uVar4;
    }
    uVar3 = uVar3 + 3;
  }
LAB_1040f3a94:
  if (uVar3 == 2) {
    uVar6 = *(undefined8 *)param_2;
    *(undefined8 *)param_1 = uVar6;
    *(byte *)((long)param_1 + uVar2) = 2;
  }
  else {
    if (uVar3 != 1) {
      if (uVar3 == 0) {
        (**(code **)(lVar8 + 0x10))(param_1,param_2,lVar5);
        *(byte *)((long)param_1 + uVar2) = 0;
        return param_1;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)(param_1,param_2,uVar2 + 1);
      return param_1;
    }
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    uVar6 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 2) = uVar6;
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(byte *)((long)param_1 + uVar2) = 1;
    _swift_retain();
  }
  _swift_retain(uVar6);
  return param_1;
}



/* Entry: 1040f3b44; end: 1040f3c43;  */

undefined8 * FUN_1040f3b44(undefined8 *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  undefined1 uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar4 = *(ulong *)(lVar3 + 0x40);
  if (uVar4 < 0x21) {
    uVar4 = 0x20;
  }
  bVar1 = *(byte *)((long)param_2 + uVar4);
  uVar5 = (uint)bVar1;
  if (2 < bVar1) {
    uVar7 = (uint)uVar4;
    uVar6 = 4;
    if (uVar7 < 4) {
      uVar6 = uVar7;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_1040f3bdc;
      uVar6 = (uint)(byte)*param_2;
    }
    else if (uVar6 == 2) {
      uVar6 = (uint)(ushort)*param_2;
    }
    else if (uVar6 == 3) {
      uVar6 = (uint)(uint3)*param_2;
    }
    else {
      uVar6 = *param_2;
    }
    uVar5 = uVar6 | bVar1 - 3 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 3;
  }
LAB_1040f3bdc:
  if (uVar5 == 2) {
    *param_1 = *(undefined8 *)param_2;
    uVar2 = 2;
  }
  else {
    if (uVar5 != 1) {
      if (uVar5 == 0) {
        (**(code **)(lVar3 + 0x20))();
        *(undefined1 *)((long)param_1 + uVar4) = 0;
        return param_1;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)(param_1,param_2,uVar4 + 1);
      return param_1;
    }
    uVar8 = *(undefined8 *)param_2;
    uVar10 = *(undefined8 *)(param_2 + 6);
    uVar9 = *(undefined8 *)(param_2 + 4);
    param_1[1] = *(undefined8 *)(param_2 + 2);
    *param_1 = uVar8;
    param_1[3] = uVar10;
    param_1[2] = uVar9;
    uVar2 = 1;
  }
  *(undefined1 *)((long)param_1 + uVar4) = uVar2;
  return param_1;
}



/* Entry: 1040f3c44; end: 1040f3e3b;  */

uint * FUN_1040f3c44(uint *param_1,uint *param_2,long param_3)

{
  undefined8 uVar1;
  byte bVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar6 = *(long *)(param_3 + 0x10);
  lVar8 = *(long *)(lVar6 + -8);
  uVar3 = *(ulong *)(lVar8 + 0x40);
  if (uVar3 < 0x21) {
    uVar3 = 0x20;
  }
  bVar2 = *(byte *)((long)param_1 + uVar3);
  uVar4 = (uint)bVar2;
  uVar7 = (uint)uVar3;
  if (2 < bVar2) {
    uVar5 = 4;
    if (uVar7 < 4) {
      uVar5 = uVar7;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_1040f3cf0;
      uVar5 = (uint)(byte)*param_1;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*param_1;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*param_1;
    }
    else {
      uVar5 = *param_1;
    }
    uVar4 = uVar5 | bVar2 - 3 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 3;
  }
LAB_1040f3cf0:
  if (uVar4 == 2) {
    uVar1 = *(undefined8 *)param_1;
LAB_1040f3d3c:
    _swift_release(uVar1);
  }
  else {
    if (uVar4 == 1) {
      _swift_release(*(undefined8 *)param_1);
      uVar1 = *(undefined8 *)(param_1 + 2);
      goto LAB_1040f3d3c;
    }
    if (uVar4 == 0) {
      (**(code **)(lVar8 + 8))(param_1,lVar6);
    }
  }
  bVar2 = *(byte *)((long)param_2 + uVar3);
  uVar4 = (uint)bVar2;
  if (2 < bVar2) {
    uVar5 = 4;
    if (uVar7 < 4) {
      uVar5 = uVar7;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_1040f3db8;
      uVar5 = (uint)(byte)*param_2;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*param_2;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*param_2;
    }
    else {
      uVar5 = *param_2;
    }
    uVar4 = uVar5 | bVar2 - 3 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 3;
  }
LAB_1040f3db8:
  if (uVar4 == 2) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    bVar2 = 2;
  }
  else {
    if (uVar4 != 1) {
      if (uVar4 == 0) {
        (**(code **)(lVar8 + 0x20))(param_1,param_2,lVar6);
        *(byte *)((long)param_1 + uVar3) = 0;
        return param_1;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)(param_1,param_2,uVar3 + 1);
      return param_1;
    }
    uVar1 = *(undefined8 *)param_2;
    uVar10 = *(undefined8 *)(param_2 + 6);
    uVar9 = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)param_1 = uVar1;
    *(undefined8 *)(param_1 + 6) = uVar10;
    *(undefined8 *)(param_1 + 4) = uVar9;
    bVar2 = 1;
  }
  *(byte *)((long)param_1 + uVar3) = bVar2;
  return param_1;
}



/* Entry: 1040f3e3c; end: 1040f3f3f;  */

int FUN_1040f3e3c(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  
  uVar5 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40);
  if (uVar5 < 0x21) {
    uVar5 = 0x20;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 0xfd) goto LAB_1040f3ee4;
  uVar6 = uVar5 + 1;
  uVar4 = (uint)uVar6;
  uVar3 = uVar4 << 3;
  if (uVar4 < 4) {
    uVar7 = ((param_2 + ~(-1 << (ulong)(uVar3 & 0x1f))) - 0xfc >> (ulong)(uVar3 & 0x1f)) + 1;
    if (uVar7 < 0x100) {
      if (uVar7 < 2) goto LAB_1040f3ee4;
      goto LAB_1040f3e70;
    }
    if (uVar7 >> 0x10 == 0) {
      uVar7 = (uint)*(ushort *)((long)param_1 + uVar6);
    }
    else {
      uVar7 = *(uint *)((long)param_1 + uVar6);
    }
  }
  else {
LAB_1040f3e70:
    uVar7 = (uint)*(byte *)((long)param_1 + uVar6);
  }
  if (uVar7 != 0) {
    uVar1 = 0;
    if (uVar4 < 4) {
      uVar1 = uVar7 - 1 << (ulong)(uVar3 & 0x1f);
    }
    if (uVar4 != 0) {
      uVar3 = 4;
      if (uVar4 < 4) {
        uVar3 = uVar4;
      }
      if ((int)uVar3 < 3) {
        if (uVar3 == 1) {
          uVar6 = (ulong)(byte)*param_1;
        }
        else {
          uVar6 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar3 == 3) {
        uVar6 = (ulong)(uint3)*param_1;
      }
      else {
        uVar6 = (ulong)*param_1;
      }
    }
    return ((uint)uVar6 | uVar1) + 0xfd;
  }
LAB_1040f3ee4:
  iVar2 = 0;
  if (3 < *(byte *)((long)param_1 + uVar5)) {
    iVar2 = (*(byte *)((long)param_1 + uVar5) ^ 0xff) + 1;
  }
  return iVar2;
}



/* Entry: 1040f3f40; end: 1040f40e3;  */

void FUN_1040f3f40(uint *param_1,uint param_2,uint param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  undefined2 uVar3;
  ulong uVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  
  uVar4 = *(ulong *)(*(long *)(*(long *)(param_4 + 0x10) + -8) + 0x40);
  if (uVar4 < 0x21) {
    uVar4 = 0x20;
  }
  lVar1 = uVar4 + 1;
  uVar5 = (uint)lVar1;
  if (param_3 < 0xfd) {
    bVar6 = 0;
  }
  else if (uVar5 < 4) {
    uVar2 = ((param_3 + ~(-1 << (ulong)(uVar5 << 3 & 0x1f))) - 0xfc >> (ulong)(uVar5 << 3 & 0x1f)) +
            1;
    bVar6 = 2;
    if (0xffff < uVar2) {
      bVar6 = 4;
    }
    if (uVar2 < 0x100) {
      bVar6 = 1 < uVar2;
    }
  }
  else {
    bVar6 = 1;
  }
  if (param_2 < 0xfd) {
    if (bVar6 < 2) {
      if (bVar6 != 0) {
        *(undefined1 *)((long)param_1 + lVar1) = 0;
      }
    }
    else if (bVar6 == 2) {
      *(undefined2 *)((long)param_1 + lVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar1) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + uVar4) = -(char)param_2;
    }
  }
  else {
    param_2 = param_2 - 0xfd;
    if (uVar5 < 4) {
      iVar7 = (param_2 >> (ulong)(uVar5 << 3 & 0x1f)) + 1;
      if (uVar5 != 0) {
        uVar2 = param_2 & (-1 << (ulong)(uVar5 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,lVar1);
        uVar3 = (undefined2)uVar2;
        if (uVar5 == 3) {
          *(undefined2 *)param_1 = uVar3;
          *(char *)((long)param_1 + 2) = (char)(uVar2 >> 0x10);
        }
        else if (uVar5 == 2) {
          *(undefined2 *)param_1 = uVar3;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,lVar1);
      *param_1 = param_2;
      iVar7 = 1;
    }
    if (bVar6 < 2) {
      if (bVar6 != 0) {
        *(char *)((long)param_1 + lVar1) = (char)iVar7;
      }
    }
    else if (bVar6 == 2) {
      *(short *)((long)param_1 + lVar1) = (short)iVar7;
    }
    else {
      *(int *)((long)param_1 + lVar1) = iVar7;
    }
  }
  return;
}



/* Entry: 1040f40e4; end: 1040f417b;  */

uint FUN_1040f40e4(uint *param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar4 = *(ulong *)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 0x40);
  if (uVar4 < 0x21) {
    uVar4 = 0x20;
  }
  bVar1 = *(byte *)((long)param_1 + uVar4);
  uVar2 = (uint)bVar1;
  if (2 < bVar1) {
    uVar5 = (uint)uVar4;
    uVar3 = 4;
    if (uVar5 < 4) {
      uVar3 = uVar5;
    }
    if ((int)uVar3 < 2) {
      if (uVar3 == 0) {
        return uVar2;
      }
      uVar3 = (uint)(byte)*param_1;
    }
    else if (uVar3 == 2) {
      uVar3 = (uint)(ushort)*param_1;
    }
    else if (uVar3 == 3) {
      uVar3 = (uint)(uint3)*param_1;
    }
    else {
      uVar3 = *param_1;
    }
    uVar2 = uVar3 | bVar1 - 3 << (ulong)((uVar5 & 3) << 3);
    if (3 < uVar5) {
      uVar2 = uVar3;
    }
    uVar2 = uVar2 + 3;
  }
  return uVar2;
}



/* Entry: 1040f417c; end: 1040f42bf;  */

void FUN_1040f417c(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  undefined2 uVar2;
  ulong uVar3;
  uint uVar4;
  
  uVar3 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40);
  if (uVar3 < 0x21) {
    uVar3 = 0x20;
  }
  if (param_2 < 3) {
    *(char *)((long)param_1 + uVar3) = (char)param_2;
  }
  else {
    param_2 = param_2 - 3;
    uVar4 = (uint)uVar3;
    if (uVar4 < 4) {
      *(char *)((long)param_1 + uVar3) = (char)(param_2 >> (ulong)(uVar4 << 3 & 0x1f)) + '\x03';
      if (uVar4 != 0) {
        uVar1 = param_2 & (-1 << (ulong)(uVar4 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,uVar3);
        uVar2 = (undefined2)uVar1;
        if (uVar4 == 3) {
          *(undefined2 *)param_1 = uVar2;
          *(char *)((long)param_1 + 2) = (char)(uVar1 >> 0x10);
        }
        else if (uVar4 == 2) {
          *(undefined2 *)param_1 = uVar2;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      *(undefined1 *)((long)param_1 + uVar3) = 3;
      _bzero(param_1,uVar3);
      *param_1 = param_2;
    }
  }
  return;
}



/* Entry: 1040f42c0; end: 1040f449f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1040f42c0(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  long extraout_x8;
  long extraout_x12;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long alStack_70 [2];
  
  lVar1 = *(long *)(param_2 + 0x10);
  uVar9 = *(undefined8 *)(param_2 + 0x18);
  lVar5 = 0;
  func_0x0001040f3530(0,lVar1,uVar9);
  lVar14 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar12 = (undefined8 *)((long)alStack_70 + lVar2);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = (long)puVar12 - extraout_x12;
  (**(code **)(lVar14 + 0x10))(lVar13);
  lVar6 = lVar13;
  _swift_getEnumCaseMultiPayload(lVar13,lVar5);
  iVar4 = (int)lVar6;
  if (iVar4 == 0) {
    uVar7 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,uVar9,lVar1,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
    uVar8 = 0xff;
    FUN_104154d64(0xff,uVar7);
    _swift_retain(param_1);
    uVar9 = 0x112d393f0;
    func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
    uVar7 = 0;
    __ss6ResultOMa(0,uVar8,uVar9,PTR___ss5ErrorWS_11034ee10);
    uVar9 = 0;
    __sSa22_allocateUninitializedySayxG_SpyxGtSiFZ(0,uVar7);
    uVar8 = 0;
    alStack_70[1] = uVar9;
    __sSaMa(0,uVar7);
    puVar10 = PTR___sSayxGSlsMc_11034dd20;
    _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar8);
    puVar11 = alStack_70 + 1;
    FUN_1040fefb8(puVar11,uVar7,uVar8,puVar10);
    _swift_bridgeObjectRelease(uVar9);
    *puVar12 = param_1;
    *(undefined8 **)((long)alStack_70 + lVar2 + 8U) = puVar11;
    *(undefined8 *)(&stack0xffffffffffffffa0 + lVar2) = 0;
    *(undefined8 *)(&stack0xffffffffffffffa8 + lVar2) = 0;
    _swift_storeEnumTagMultiPayload(puVar12,lVar5,1);
    (**(code **)(lVar14 + 0x28))();
    (**(code **)(*(long *)(lVar1 + -8) + 8))(lVar13,lVar1);
    return;
  }
  if (iVar4 != 1) {
    if (iVar4 == 2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1040f4498);
      (*pcVar3)();
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1040f44a0);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1040f449c);
  (*pcVar3)();
}



/* Entry: 1040f44a0; end: 1040f4653;  */

/* WARNING: Type propagation algorithm not settling */

bool FUN_1040f44a0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long extraout_x8;
  long unaff_x20;
  undefined8 *puVar10;
  long lVar11;
  long alStack_60 [2];
  
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  lVar5 = 0;
  func_0x0001040f3530(0,uVar9,uVar8);
  lVar11 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = -extraout_x8;
  puVar10 = (undefined8 *)((long)alStack_60 + lVar2);
  (**(code **)(lVar11 + 0x10))(puVar10);
  puVar6 = puVar10;
  _swift_getEnumCaseMultiPayload(puVar10,lVar5);
  iVar4 = (int)puVar6;
  if (iVar4 < 2) {
    if (iVar4 != 1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1040f464c);
      (*pcVar3)();
    }
    uVar1 = *(undefined8 *)((long)alStack_60 + lVar2 + 8U);
    lVar5 = *(long *)(&stack0xffffffffffffffb0 + lVar2);
    lVar2 = *(long *)(&stack0xffffffffffffffb8 + lVar2);
    _swift_release(*puVar10);
    if (lVar5 != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1040f4654);
      (*pcVar3)();
    }
    if (lVar2 == 0) {
      uVar7 = 0xff;
      _swift_getAssociatedTypeWitness
                (0xff,uVar8,uVar9,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
      uVar8 = 0xff;
      FUN_104154d64(0xff,uVar7);
      uVar9 = 0x112d393f0;
      func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
      uVar7 = 0;
      __ss6ResultOMa(0,uVar8,uVar9,PTR___ss5ErrorWS_11034ee10);
      FUN_1040f6364(alStack_60 + 1,FUN_1040f6358,0,uVar1,&UNK_11074b8b8,uVar7,
                    PTR___ss5NeverON_11034ee88,PTR___sSiN_11034deb0,
                    PTR___ss5NeverOs5ErrorsWP_11034ee90);
      _swift_release(uVar1);
      return *(long *)(unaff_x20 + *(int *)(param_1 + 0x24)) <= alStack_60[1];
    }
    _swift_release(uVar1);
  }
  else {
    if (iVar4 != 2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1040f4650);
      (*pcVar3)();
    }
    (**(code **)(lVar11 + 8))(puVar10,lVar5);
  }
  return false;
}



/* Entry: 1040f4654; end: 1040f4663;  */

bool FUN_1040f4654(char param_1,char param_2)

{
  return param_1 == param_2;
}



/* Entry: 1040f4664; end: 1040f46cb;  */

void FUN_1040f4664(undefined8 param_1,undefined1 param_2)

{
  __ss6HasherV8_combineyySuF(param_2);
  return;
}



/* Entry: 1040f46cc; end: 1040f46e7;  */

bool FUN_1040f46cc(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1040f46e8; end: 1040f4723;  */

void FUN_1040f46e8(void)

{
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_1040f4664(auStack_68,*unaff_x20);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1040f4724; end: 1040f6357;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_1040f4724(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long extraout_x8;
  undefined8 *unaff_x20;
  undefined8 *puVar13;
  long lVar14;
  long alStack_70 [2];
  
  uVar12 = *(undefined8 *)(param_2 + 0x10);
  uVar8 = *(undefined8 *)(param_2 + 0x18);
  lVar5 = 0;
  func_0x0001040f3530(0,uVar12,uVar8);
  lVar14 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = -extraout_x8;
  puVar13 = (undefined8 *)((long)alStack_70 + lVar2);
  (**(code **)(lVar14 + 0x10))(puVar13);
  puVar6 = puVar13;
  _swift_getEnumCaseMultiPayload(puVar13,lVar5);
  iVar4 = (int)puVar6;
  if (iVar4 < 2) {
    if (iVar4 != 1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1040f49b4);
      (*pcVar3)();
    }
    if (*(long *)(&stack0xffffffffffffffa0 + lVar2) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1040f49bc);
      (*pcVar3)();
    }
    uVar7 = *puVar13;
    uVar1 = *(undefined8 *)((long)alStack_70 + lVar2 + 8U);
    if (*(long *)(&stack0xffffffffffffffa8 + lVar2) == 0) {
      uVar11 = 0xff;
      _swift_getAssociatedTypeWitness
                (0xff,uVar8,uVar12,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
      uVar8 = 0xff;
      FUN_104154d64(0xff,uVar11);
      uVar12 = 0x112d393f0;
      func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
      uVar11 = 0;
      __ss6ResultOMa(0,uVar8,uVar12,PTR___ss5ErrorWS_11034ee10);
      FUN_1040f6364(alStack_70 + 1,FUN_1040f6358,0,uVar1,&UNK_11074b8b8,uVar11,
                    PTR___ss5NeverON_11034ee88,PTR___sSiN_11034deb0,
                    PTR___ss5NeverOs5ErrorsWP_11034ee90);
      if (*(long *)((long)unaff_x20 + (long)*(int *)(param_2 + 0x24)) <= alStack_70[1]) {
        (**(code **)(lVar14 + 8))();
        *unaff_x20 = uVar7;
        unaff_x20[1] = uVar1;
        unaff_x20[2] = param_1;
        unaff_x20[3] = 0;
        _swift_storeEnumTagMultiPayload();
        return 0;
      }
      _swift_release(uVar7);
      _swift_release(uVar1);
    }
    else {
      _swift_release(uVar7);
      uVar7 = 0xff;
      alStack_70[1] = uVar1;
      _swift_getAssociatedTypeWitness
                (0xff,uVar8,uVar12,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
      uVar8 = 0xff;
      FUN_104154d64(0xff,uVar7);
      uVar12 = 0x112d393f0;
      func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
      uVar7 = 0xff;
      __ss6ResultOMa(0xff,uVar8,uVar12,PTR___ss5ErrorWS_11034ee10);
      uVar9 = 0;
      func_0x000104184750(0,uVar7);
      puVar10 = &UNK_10dcdb118;
      _swift_getWitnessTable(&UNK_10dcdb118,uVar9);
      __sSlsE7isEmptySbvg(uVar9,puVar10);
      _swift_release(uVar1);
      if ((uVar9 & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1040f4878);
        (*pcVar3)();
      }
    }
  }
  else {
    if (iVar4 != 2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1040f49b8);
      (*pcVar3)();
    }
    (**(code **)(lVar14 + 8))(puVar13,lVar5);
  }
  return 1;
}



/* Entry: 1040f6358; end: 1040f6363;  */

void FUN_1040f6358(undefined8 *param_1,long param_2)

{
  *param_1 = *(undefined8 *)(param_2 + 8);
  return;
}



/* Entry: 1040f6364; end: 1040f63ff;  */

void FUN_1040f6364(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  long lVar2;
  long extraout_x12;
  long unaff_x21;
  long lVar3;
  undefined8 auStack_90 [2];
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  lVar3 = *(long *)(param_6 + -8);
  lVar2 = param_6;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = -(extraout_x12 + 0xfU & 0xfffffffffffffff0);
  uStack_70 = param_4;
  uStack_68 = param_5;
  lStack_60 = lVar2;
  uStack_58 = param_7;
  uStack_50 = param_8;
  uStack_48 = param_1;
  uStack_40 = param_2;
  *(undefined1 **)((long)auStack_90 + lVar1) = auStack_80 + lVar1;
  FUN_1040fee4c(FUN_1040f6480,auStack_80);
  if (unaff_x21 != 0) {
    (**(code **)(lVar3 + 0x20))(param_9,auStack_80 + lVar1,param_6);
  }
  return;
}



/* Entry: 1040f6400; end: 1040f647b;  */

void FUN_1040f6400(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long in_x6;
  long extraout_x12;
  long unaff_x21;
  long lVar1;
  undefined8 in_stack_00000008;
  
  lVar1 = *(long *)(in_x6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*param_3)();
  if (unaff_x21 != 0) {
    (**(code **)(lVar1 + 0x20))
              (in_stack_00000008,
               &stack0xffffffffffffffd0 + -(extraout_x12 + 0xfU & 0xfffffffffffffff0),in_x6);
  }
  return;
}



/* Entry: 1040f647c; end: 1040f647f;  */

void FUN_1040f647c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
                    /* WARNING: Could not recover jumptable at 0x0001040f6514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1,param_2,lVar1);
  return;
}



/* Entry: 1040f6480; end: 1040f64b3;  */

void FUN_1040f6480(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  FUN_1040f6400(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),param_3);
  return;
}



/* Entry: 1040f64b4; end: 1040f64bf;  */

void FUN_1040f64b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e7f0694);
  return;
}



/* Entry: 1040f64c0; end: 1040f6517;  */

void FUN_1040f64c0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
                    /* WARNING: Could not recover jumptable at 0x0001040f6514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1,param_2,lVar1);
  return;
}



/* Entry: 1040f6518; end: 1040f678b;  */

int FUN_1040f6518(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1040f6594;
        goto LAB_1040f6578;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1040f6578:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_1040f6594:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1040f678c; end: 1040f683f;  */

void FUN_1040f678c(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_40 [32];
  
  uVar1 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  uVar2 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar3 = 0x13f;
  __ss6ResultOMa(0x13f,uVar1,uVar2,PTR___ss5ErrorWS_11034ee10);
  if (uVar1 < 0x40) {
    _swift_getTupleTypeLayout2(auStack_40,&UNK_10dcd7888,*(long *)(lVar3 + -8) + 0x40);
    _swift_initEnumMetadataSinglePayload(param_1,0,auStack_40,1);
  }
  return;
}



/* Entry: 1040f6840; end: 1040f69d3;  */

ulong * FUN_1040f6840(ulong *param_1,ulong *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  uint *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  uint uVar12;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  lVar4 = *(long *)(lVar2 + -8);
  uVar5 = *(ulong *)(lVar4 + 0x40);
  if (uVar5 < 9) {
    uVar5 = 8;
  }
  uVar9 = (ulong)*(uint *)(lVar4 + 0x50) & 0xf8;
  uVar6 = uVar9 | 7;
  if ((*(uint *)(lVar4 + 0x50) & 0x1000f8) != 0 ||
      0x18 < uVar5 + (uVar9 + 0xf & (uVar6 ^ 0xffffffffffffffff)) + 1) {
    uVar5 = *param_2;
    *param_1 = uVar5;
    _swift_retain();
    return (ulong *)(uVar5 + (uVar6 + 0x10 & ~uVar6));
  }
  if (*param_2 < 0xffffffff) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)(param_1,param_2);
    return param_1;
  }
  *param_1 = *param_2;
  puVar3 = (uint *)((long)param_2 + 0xfU & 0xfffffffffffffff8);
  bVar1 = *(byte *)((long)puVar3 + uVar5);
  uVar7 = (uint)bVar1;
  if (1 < bVar1) {
    uVar12 = (uint)uVar5;
    uVar8 = 4;
    if (uVar12 < 4) {
      uVar8 = uVar12;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_1040f6994;
      uVar8 = (uint)(byte)*puVar3;
    }
    else if (uVar8 == 2) {
      uVar8 = (uint)(ushort)*puVar3;
    }
    else if (uVar8 == 3) {
      uVar8 = (uint)(uint3)*puVar3;
    }
    else {
      uVar8 = *puVar3;
    }
    uVar7 = uVar8 | bVar1 - 2 << (ulong)((uVar12 & 3) << 3);
    if (3 < uVar12) {
      uVar7 = uVar8;
    }
    uVar7 = uVar7 + 2;
  }
LAB_1040f6994:
  puVar10 = (undefined8 *)((long)param_1 + 0xfU & 0xfffffffffffffff8);
  if (uVar7 == 1) {
    uVar11 = *(undefined8 *)puVar3;
    _swift_errorRetain(uVar11);
    *puVar10 = uVar11;
    *(undefined1 *)((long)puVar10 + uVar5) = 1;
  }
  else {
    (**(code **)(lVar4 + 0x10))(puVar10,puVar3,lVar2);
    *(undefined1 *)((long)puVar10 + uVar5) = 0;
  }
  return param_1;
}



/* Entry: 1040f69d4; end: 1040f6aeb;  */

void FUN_1040f69d4(ulong *param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  uint *puVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  lVar4 = *(long *)(lVar2 + -8);
  uVar6 = *(ulong *)(lVar4 + 0x40);
  if (uVar6 < 9) {
    uVar6 = 8;
  }
  if (*param_1 < 0xffffffff) {
    return;
  }
  uVar7 = (ulong)*(uint *)(lVar4 + 0x50) & 0xf8 | 7;
  puVar3 = (uint *)((long)param_1 + uVar7 + 8 & (uVar7 ^ 0xffffffffffffffff));
  bVar1 = *(byte *)((long)puVar3 + uVar6);
  uVar8 = (uint)bVar1;
  if (1 < bVar1) {
    uVar5 = (uint)uVar6;
    uVar9 = 4;
    if (uVar5 < 4) {
      uVar9 = uVar5;
    }
    if ((int)uVar9 < 2) {
      if (uVar9 == 0) goto LAB_1040f6ac4;
      uVar9 = (uint)(byte)*puVar3;
    }
    else if (uVar9 == 2) {
      uVar9 = (uint)(ushort)*puVar3;
    }
    else if (uVar9 == 3) {
      uVar9 = (uint)(uint3)*puVar3;
    }
    else {
      uVar9 = *puVar3;
    }
    uVar8 = uVar9 | bVar1 - 2 << (ulong)((uVar5 & 3) << 3);
    if (3 < uVar5) {
      uVar8 = uVar9;
    }
    uVar8 = uVar8 + 2;
  }
LAB_1040f6ac4:
  if (uVar8 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(*(undefined8 *)puVar3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001040f6ae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))(puVar3,lVar2);
  return;
}



/* Entry: 1040f6aec; end: 1040f6c57;  */

ulong * FUN_1040f6aec(ulong *param_1,ulong *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  uint *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  uint uVar12;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  lVar4 = *(long *)(lVar2 + -8);
  uVar5 = *(ulong *)(lVar4 + 0x40);
  if (uVar5 < 9) {
    uVar5 = 8;
  }
  uVar9 = (ulong)*(uint *)(lVar4 + 0x50) & 0xf8 | 7;
  uVar6 = ~uVar9;
  if (*param_2 < 0xffffffff) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)(param_1,param_2,uVar5 + (uVar9 + 8 & uVar6) + 1);
    return param_1;
  }
  *param_1 = *param_2;
  puVar10 = (undefined8 *)((long)param_1 + uVar9 + 8 & uVar6);
  puVar3 = (uint *)((long)param_2 + uVar9 + 8 & uVar6);
  bVar1 = *(byte *)((long)puVar3 + uVar5);
  uVar7 = (uint)bVar1;
  if (1 < bVar1) {
    uVar12 = (uint)uVar5;
    uVar8 = 4;
    if (uVar12 < 4) {
      uVar8 = uVar12;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_1040f6c10;
      uVar8 = (uint)(byte)*puVar3;
    }
    else if (uVar8 == 2) {
      uVar8 = (uint)(ushort)*puVar3;
    }
    else if (uVar8 == 3) {
      uVar8 = (uint)(uint3)*puVar3;
    }
    else {
      uVar8 = *puVar3;
    }
    uVar7 = uVar8 | bVar1 - 2 << (ulong)((uVar12 & 3) << 3);
    if (3 < uVar12) {
      uVar7 = uVar8;
    }
    uVar7 = uVar7 + 2;
  }
LAB_1040f6c10:
  if (uVar7 == 1) {
    uVar11 = *(undefined8 *)puVar3;
    _swift_errorRetain(uVar11);
    *puVar10 = uVar11;
    *(undefined1 *)((long)puVar10 + uVar5) = 1;
  }
  else {
    (**(code **)(lVar4 + 0x10))(puVar10,puVar3,lVar2);
    *(undefined1 *)((long)puVar10 + uVar5) = 0;
  }
  return param_1;
}



/* Entry: 1040f6c58; end: 1040f6fdf;  */

ulong * FUN_1040f6c58(ulong *param_1,ulong *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  long lVar15;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  lVar15 = *(long *)(lVar2 + -8);
  uVar3 = *(ulong *)(lVar15 + 0x40);
  if (uVar3 < 9) {
    uVar3 = 8;
  }
  uVar9 = (ulong)*(uint *)(lVar15 + 0x50) & 0xf8;
  uVar8 = uVar9 | 7;
  uVar4 = ~uVar8;
  uVar10 = *param_2;
  uVar14 = (uint)uVar3;
  if (*param_1 < 0xffffffff) {
    if (uVar10 < 0xffffffff) goto LAB_1040f6ea0;
    *param_1 = uVar10;
    puVar12 = (uint *)((long)param_1 + uVar8 + 8 & uVar4);
    puVar13 = (uint *)((long)param_2 + uVar8 + 8 & uVar4);
    bVar1 = *(byte *)((long)puVar13 + uVar3);
    uVar6 = (uint)bVar1;
    if (1 < bVar1) {
      uVar7 = 4;
      if (uVar14 < 4) {
        uVar7 = uVar14;
      }
      if ((int)uVar7 < 2) {
        if (uVar7 == 0) goto LAB_1040f6e44;
        uVar7 = (uint)(byte)*puVar13;
      }
      else if (uVar7 == 2) {
        uVar7 = (uint)(ushort)*puVar13;
      }
      else if (uVar7 == 3) {
        uVar7 = (uint)(uint3)*puVar13;
      }
      else {
        uVar7 = *puVar13;
      }
      uVar6 = uVar7 | bVar1 - 2 << (ulong)((uVar14 & 3) << 3);
      if (3 < uVar14) {
        uVar6 = uVar7;
      }
      uVar6 = uVar6 + 2;
    }
LAB_1040f6e44:
    if (uVar6 != 1) {
      pcVar5 = *(code **)(lVar15 + 0x10);
      goto LAB_1040f6fbc;
    }
    uVar11 = *(undefined8 *)puVar13;
    goto LAB_1040f6f98;
  }
  if (uVar10 < 0xffffffff) {
    puVar13 = (uint *)((long)param_1 + uVar8 + 8 & uVar4);
    bVar1 = *(byte *)((long)puVar13 + uVar3);
    uVar6 = (uint)bVar1;
    if (1 < bVar1) {
      uVar7 = 4;
      if (uVar14 < 4) {
        uVar7 = uVar14;
      }
      if ((int)uVar7 < 2) {
        if (uVar7 == 0) goto LAB_1040f6e80;
        uVar7 = (uint)(byte)*puVar13;
      }
      else if (uVar7 == 2) {
        uVar7 = (uint)(ushort)*puVar13;
      }
      else if (uVar7 == 3) {
        uVar7 = (uint)(uint3)*puVar13;
      }
      else {
        uVar7 = *puVar13;
      }
      uVar6 = uVar7 | bVar1 - 2 << (ulong)((uVar14 & 3) << 3);
      if (3 < uVar14) {
        uVar6 = uVar7;
      }
      uVar6 = uVar6 + 2;
    }
LAB_1040f6e80:
    if (uVar6 == 1) {
      _swift_errorRelease(*(undefined8 *)puVar13);
    }
    else {
      (**(code **)(lVar15 + 8))(puVar13,lVar2);
    }
LAB_1040f6ea0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)
              (param_1,param_2,uVar3 + (uVar9 + 0xf & (uVar8 ^ 0xffffffffffffffff)) + 1);
    return param_1;
  }
  *param_1 = uVar10;
  puVar12 = (uint *)((long)param_1 + uVar8 + 8 & uVar4);
  puVar13 = (uint *)((long)param_2 + uVar8 + 8 & uVar4);
  if (puVar12 == puVar13) {
    return param_1;
  }
  bVar1 = *(byte *)((long)puVar12 + uVar3);
  uVar6 = (uint)bVar1;
  if (1 < bVar1) {
    uVar7 = 4;
    if (uVar14 < 4) {
      uVar7 = uVar14;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) goto LAB_1040f6ef4;
      uVar7 = (uint)(byte)*puVar12;
    }
    else if (uVar7 == 2) {
      uVar7 = (uint)(ushort)*puVar12;
    }
    else if (uVar7 == 3) {
      uVar7 = (uint)(uint3)*puVar12;
    }
    else {
      uVar7 = *puVar12;
    }
    uVar6 = uVar7 | bVar1 - 2 << (ulong)((uVar14 & 3) << 3);
    if (3 < uVar14) {
      uVar6 = uVar7;
    }
    uVar6 = uVar6 + 2;
  }
LAB_1040f6ef4:
  if (uVar6 == 1) {
    _swift_errorRelease(*(undefined8 *)puVar12);
  }
  else {
    (**(code **)(lVar15 + 8))(puVar12,lVar2);
  }
  bVar1 = *(byte *)((long)puVar13 + uVar3);
  uVar6 = (uint)bVar1;
  if (1 < bVar1) {
    uVar7 = 4;
    if (uVar14 < 4) {
      uVar7 = uVar14;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) goto LAB_1040f6f8c;
      uVar7 = (uint)(byte)*puVar13;
    }
    else if (uVar7 == 2) {
      uVar7 = (uint)(ushort)*puVar13;
    }
    else if (uVar7 == 3) {
      uVar7 = (uint)(uint3)*puVar13;
    }
    else {
      uVar7 = *puVar13;
    }
    uVar6 = uVar7 | bVar1 - 2 << (ulong)((uVar14 & 3) << 3);
    if (3 < uVar14) {
      uVar6 = uVar7;
    }
    uVar6 = uVar6 + 2;
  }
LAB_1040f6f8c:
  if (uVar6 != 1) {
    pcVar5 = *(code **)(lVar15 + 0x10);
LAB_1040f6fbc:
    (*pcVar5)(puVar12,puVar13,lVar2);
    *(byte *)((long)puVar12 + uVar3) = 0;
    return param_1;
  }
  uVar11 = *(undefined8 *)puVar13;
LAB_1040f6f98:
  _swift_errorRetain(uVar11);
  *(undefined8 *)puVar12 = uVar11;
  *(byte *)((long)puVar12 + uVar3) = 1;
  return param_1;
}



/* Entry: 1040f6fe0; end: 1040f7143;  */

ulong * FUN_1040f6fe0(ulong *param_1,ulong *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  uint *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  uint uVar11;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  lVar4 = *(long *)(lVar2 + -8);
  uVar5 = *(ulong *)(lVar4 + 0x40);
  if (uVar5 < 9) {
    uVar5 = 8;
  }
  uVar9 = (ulong)*(uint *)(lVar4 + 0x50) & 0xf8 | 7;
  uVar6 = ~uVar9;
  if (*param_2 < 0xffffffff) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)(param_1,param_2,uVar5 + (uVar9 + 8 & uVar6) + 1);
    return param_1;
  }
  *param_1 = *param_2;
  puVar10 = (undefined8 *)((long)param_1 + uVar9 + 8 & uVar6);
  puVar3 = (uint *)((long)param_2 + uVar9 + 8 & uVar6);
  bVar1 = *(byte *)((long)puVar3 + uVar5);
  uVar7 = (uint)bVar1;
  if (1 < bVar1) {
    uVar11 = (uint)uVar5;
    uVar8 = 4;
    if (uVar11 < 4) {
      uVar8 = uVar11;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_1040f7104;
      uVar8 = (uint)(byte)*puVar3;
    }
    else if (uVar8 == 2) {
      uVar8 = (uint)(ushort)*puVar3;
    }
    else if (uVar8 == 3) {
      uVar8 = (uint)(uint3)*puVar3;
    }
    else {
      uVar8 = *puVar3;
    }
    uVar7 = uVar8 | bVar1 - 2 << (ulong)((uVar11 & 3) << 3);
    if (3 < uVar11) {
      uVar7 = uVar8;
    }
    uVar7 = uVar7 + 2;
  }
LAB_1040f7104:
  if (uVar7 == 1) {
    *puVar10 = *(undefined8 *)puVar3;
    *(undefined1 *)((long)puVar10 + uVar5) = 1;
  }
  else {
    (**(code **)(lVar4 + 0x20))(puVar10,puVar3,lVar2);
    *(undefined1 *)((long)puVar10 + uVar5) = 0;
  }
  return param_1;
}



/* Entry: 1040f7144; end: 1040f74c3;  */

ulong * FUN_1040f7144(ulong *param_1,ulong *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  long lVar15;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  lVar15 = *(long *)(lVar2 + -8);
  uVar3 = *(ulong *)(lVar15 + 0x40);
  if (uVar3 < 9) {
    uVar3 = 8;
  }
  uVar10 = (ulong)*(uint *)(lVar15 + 0x50) & 0xf8;
  uVar9 = uVar10 | 7;
  uVar4 = ~uVar9;
  uVar11 = *param_2;
  uVar14 = (uint)uVar3;
  if (*param_1 < 0xffffffff) {
    if (uVar11 < 0xffffffff) goto LAB_1040f738c;
    *param_1 = uVar11;
    puVar12 = (uint *)((long)param_1 + uVar9 + 8 & uVar4);
    puVar13 = (uint *)((long)param_2 + uVar9 + 8 & uVar4);
    bVar1 = *(byte *)((long)puVar13 + uVar3);
    uVar7 = (uint)bVar1;
    if (1 < bVar1) {
      uVar8 = 4;
      if (uVar14 < 4) {
        uVar8 = uVar14;
      }
      if ((int)uVar8 < 2) {
        if (uVar8 == 0) goto LAB_1040f7330;
        uVar8 = (uint)(byte)*puVar13;
      }
      else if (uVar8 == 2) {
        uVar8 = (uint)(ushort)*puVar13;
      }
      else if (uVar8 == 3) {
        uVar8 = (uint)(uint3)*puVar13;
      }
      else {
        uVar8 = *puVar13;
      }
      uVar7 = uVar8 | bVar1 - 2 << (ulong)((uVar14 & 3) << 3);
      if (3 < uVar14) {
        uVar7 = uVar8;
      }
      uVar7 = uVar7 + 2;
    }
LAB_1040f7330:
    if (uVar7 != 1) {
      pcVar6 = *(code **)(lVar15 + 0x20);
      goto LAB_1040f74a0;
    }
    uVar5 = *(undefined8 *)puVar13;
    goto LAB_1040f7484;
  }
  if (uVar11 < 0xffffffff) {
    puVar13 = (uint *)((long)param_1 + uVar9 + 8 & uVar4);
    bVar1 = *(byte *)((long)puVar13 + uVar3);
    uVar7 = (uint)bVar1;
    if (1 < bVar1) {
      uVar8 = 4;
      if (uVar14 < 4) {
        uVar8 = uVar14;
      }
      if ((int)uVar8 < 2) {
        if (uVar8 == 0) goto LAB_1040f736c;
        uVar8 = (uint)(byte)*puVar13;
      }
      else if (uVar8 == 2) {
        uVar8 = (uint)(ushort)*puVar13;
      }
      else if (uVar8 == 3) {
        uVar8 = (uint)(uint3)*puVar13;
      }
      else {
        uVar8 = *puVar13;
      }
      uVar7 = uVar8 | bVar1 - 2 << (ulong)((uVar14 & 3) << 3);
      if (3 < uVar14) {
        uVar7 = uVar8;
      }
      uVar7 = uVar7 + 2;
    }
LAB_1040f736c:
    if (uVar7 == 1) {
      _swift_errorRelease(*(undefined8 *)puVar13);
    }
    else {
      (**(code **)(lVar15 + 8))(puVar13,lVar2);
    }
LAB_1040f738c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)
              (param_1,param_2,uVar3 + (uVar10 + 0xf & (uVar9 ^ 0xffffffffffffffff)) + 1);
    return param_1;
  }
  *param_1 = uVar11;
  puVar12 = (uint *)((long)param_1 + uVar9 + 8 & uVar4);
  puVar13 = (uint *)((long)param_2 + uVar9 + 8 & uVar4);
  if (puVar12 == puVar13) {
    return param_1;
  }
  bVar1 = *(byte *)((long)puVar12 + uVar3);
  uVar7 = (uint)bVar1;
  if (1 < bVar1) {
    uVar8 = 4;
    if (uVar14 < 4) {
      uVar8 = uVar14;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_1040f73e0;
      uVar8 = (uint)(byte)*puVar12;
    }
    else if (uVar8 == 2) {
      uVar8 = (uint)(ushort)*puVar12;
    }
    else if (uVar8 == 3) {
      uVar8 = (uint)(uint3)*puVar12;
    }
    else {
      uVar8 = *puVar12;
    }
    uVar7 = uVar8 | bVar1 - 2 << (ulong)((uVar14 & 3) << 3);
    if (3 < uVar14) {
      uVar7 = uVar8;
    }
    uVar7 = uVar7 + 2;
  }
LAB_1040f73e0:
  if (uVar7 == 1) {
    _swift_errorRelease(*(undefined8 *)puVar12);
  }
  else {
    (**(code **)(lVar15 + 8))(puVar12,lVar2);
  }
  bVar1 = *(byte *)((long)puVar13 + uVar3);
  uVar7 = (uint)bVar1;
  if (1 < bVar1) {
    uVar8 = 4;
    if (uVar14 < 4) {
      uVar8 = uVar14;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_1040f7478;
      uVar8 = (uint)(byte)*puVar13;
    }
    else if (uVar8 == 2) {
      uVar8 = (uint)(ushort)*puVar13;
    }
    else if (uVar8 == 3) {
      uVar8 = (uint)(uint3)*puVar13;
    }
    else {
      uVar8 = *puVar13;
    }
    uVar7 = uVar8 | bVar1 - 2 << (ulong)((uVar14 & 3) << 3);
    if (3 < uVar14) {
      uVar7 = uVar8;
    }
    uVar7 = uVar7 + 2;
  }
LAB_1040f7478:
  if (uVar7 != 1) {
    pcVar6 = *(code **)(lVar15 + 0x20);
LAB_1040f74a0:
    (*pcVar6)(puVar12,puVar13,lVar2);
    *(byte *)((long)puVar12 + uVar3) = 0;
    return param_1;
  }
  uVar5 = *(undefined8 *)puVar13;
LAB_1040f7484:
  *(undefined8 *)puVar12 = uVar5;
  *(byte *)((long)puVar12 + uVar3) = 1;
  return param_1;
}



/* Entry: 1040f74c4; end: 1040f762b;  */

int FUN_1040f74c4(ulong *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  uVar6 = *(ulong *)(*(long *)(lVar4 + -8) + 0x40);
  if (uVar6 < 9) {
    uVar6 = 8;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 0x7fffffff) goto LAB_1040f75ac;
  uVar1 = *(uint *)(*(long *)(lVar4 + -8) + 0x50) & 0xf8;
  uVar6 = uVar6 + ((ulong)(uVar1 + 0xf & (uVar1 ^ 0xffffffff)) & 0x1f8) + 1;
  uVar5 = (uint)uVar6;
  uVar1 = uVar5 << 3;
  if (uVar5 < 4) {
    uVar7 = param_2 + 0x80000002 + ~(-1 << (ulong)(uVar1 & 0x1f)) >> (ulong)(uVar1 & 0x1f);
    if (uVar7 < 0xff) {
      if (uVar7 == 0) goto LAB_1040f75ac;
      goto LAB_1040f756c;
    }
    if (uVar7 < 0xffff) {
      uVar7 = (uint)*(ushort *)((long)param_1 + uVar6);
    }
    else {
      uVar7 = *(uint *)((long)param_1 + uVar6);
    }
  }
  else {
LAB_1040f756c:
    uVar7 = (uint)*(byte *)((long)param_1 + uVar6);
  }
  if (uVar7 != 0) {
    uVar2 = 0;
    if (uVar5 < 4) {
      uVar2 = uVar7 - 1 << (ulong)(uVar1 & 0x1f);
    }
    if (uVar5 != 0) {
      uVar1 = 4;
      if (uVar5 < 4) {
        uVar1 = uVar5;
      }
      if ((int)uVar1 < 3) {
        if (uVar1 == 1) {
          uVar6 = (ulong)(byte)*param_1;
        }
        else {
          uVar6 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar1 == 3) {
        uVar6 = (ulong)(uint3)*param_1;
      }
      else {
        uVar6 = (ulong)(uint)*param_1;
      }
    }
    return ((uint)uVar6 | uVar2) + 0x7fffffff;
  }
LAB_1040f75ac:
  uVar6 = *param_1;
  if (0xfffffffe < uVar6) {
    uVar6 = 0xffffffff;
  }
  iVar3 = 0;
  if (1 < (int)uVar6 + 1U) {
    iVar3 = (int)uVar6;
  }
  return iVar3;
}



/* Entry: 1040f762c; end: 1040f781b;  */

void FUN_1040f762c(ulong *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  undefined2 uVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x18),*(undefined8 *)(param_4 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  uVar6 = *(uint *)(*(long *)(lVar4 + -8) + 0x50) & 0xf8;
  uVar5 = *(ulong *)(*(long *)(lVar4 + -8) + 0x40);
  if (uVar5 < 9) {
    uVar5 = 8;
  }
  lVar4 = uVar5 + ((ulong)(uVar6 + 0xf & (uVar6 ^ 0xffffffff)) & 0x1f8) + 1;
  uVar6 = (uint)lVar4;
  if (param_3 < 0x7fffffff) {
    bVar3 = 0;
  }
  else if (uVar6 < 4) {
    uVar1 = param_3 + 0x80000002 + ~(-1 << (ulong)(uVar6 << 3 & 0x1f)) >> (ulong)(uVar6 << 3 & 0x1f)
    ;
    bVar3 = 2;
    if (0xfffe < uVar1) {
      bVar3 = 4;
    }
    if (uVar1 < 0xff) {
      bVar3 = uVar1 != 0;
    }
  }
  else {
    bVar3 = 1;
  }
  if (param_2 < 0x7fffffff) {
    if (bVar3 < 2) {
      if (bVar3 != 0) {
        *(undefined1 *)((long)param_1 + lVar4) = 0;
      }
    }
    else if (bVar3 == 2) {
      *(undefined2 *)((long)param_1 + lVar4) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar4) = 0;
    }
    if (param_2 != 0) {
      *param_1 = (ulong)param_2;
    }
  }
  else {
    param_2 = param_2 + 0x80000001;
    if (uVar6 < 4) {
      iVar7 = (param_2 >> (ulong)(uVar6 << 3 & 0x1f)) + 1;
      if (uVar6 != 0) {
        uVar1 = param_2 & (-1 << (ulong)(uVar6 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,lVar4);
        uVar2 = (undefined2)uVar1;
        if (uVar6 == 3) {
          *(undefined2 *)param_1 = uVar2;
          *(char *)((long)param_1 + 2) = (char)(uVar1 >> 0x10);
        }
        else if (uVar6 == 2) {
          *(undefined2 *)param_1 = uVar2;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,lVar4);
      *(uint *)param_1 = param_2;
      iVar7 = 1;
    }
    if (bVar3 < 2) {
      if (bVar3 != 0) {
        *(char *)((long)param_1 + lVar4) = (char)iVar7;
      }
    }
    else if (bVar3 == 2) {
      *(short *)((long)param_1 + lVar4) = (short)iVar7;
    }
    else {
      *(int *)((long)param_1 + lVar4) = iVar7;
    }
  }
  return;
}



/* Entry: 1040f781c; end: 1040f781f;  */

void FUN_1040f781c(void)

{
  return;
}



/* Entry: 1040f7820; end: 1040f7917;  */

void FUN_1040f7820(ulong *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  uVar4 = *(ulong *)(*(long *)(lVar3 + -8) + 0x40);
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  if ((int)param_2 < 0) {
    uVar1 = *(uint *)(*(long *)(lVar3 + -8) + 0x50) & 0xf8;
    uVar1 = (int)uVar4 + (uVar1 + 0xf & (uVar1 ^ 0xffffffff) & 0x1f8) + 1;
    uVar5 = 0x7fffffff;
    if (uVar1 < 4) {
      uVar5 = ~(-1 << (ulong)(uVar1 * 8 & 0x1f));
    }
    if (uVar1 != 0) {
      uVar5 = uVar5 & param_2;
      uVar2 = 4;
      if (uVar1 < 4) {
        uVar2 = uVar1;
      }
      _bzero(param_1);
      if ((int)uVar2 < 3) {
        if (uVar2 == 1) {
          *(char *)param_1 = (char)uVar5;
        }
        else {
          *(short *)param_1 = (short)uVar5;
        }
      }
      else if (uVar2 == 3) {
        *(short *)param_1 = (short)uVar5;
        *(char *)((long)param_1 + 2) = (char)(uVar5 >> 0x10);
      }
      else {
        *(uint *)param_1 = uVar5;
      }
    }
  }
  else if (param_2 != 0) {
    *param_1 = (ulong)(param_2 - 1);
  }
  return;
}



/* Entry: 1040f7918; end: 1040f7923;  */

void FUN_1040f7918(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e7f061c);
  return;
}



/* Entry: 1040f7924; end: 1040f79e3;  */

void FUN_1040f7924(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auStack_40 [32];
  
  uVar1 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  uVar2 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  uVar3 = 0xff;
  __ss6ResultOMa(0xff,uVar1,uVar2,PTR___ss5ErrorWS_11034ee10);
  lVar4 = 0x13f;
  __sSqMa();
  if (uVar3 < 0x40) {
    _swift_getTupleTypeLayout2(auStack_40,&UNK_10dcd78c8,*(long *)(lVar4 + -8) + 0x40);
    _swift_initEnumMetadataSinglePayload(param_1,0,auStack_40,1);
  }
  return;
}



/* Entry: 1040f79e4; end: 1040f7b2b;  */

ulong * FUN_1040f79e4(ulong *param_1,ulong *param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  lVar5 = *(long *)(lVar1 + -8);
  uVar3 = *(ulong *)(lVar5 + 0x40);
  if (uVar3 < 9) {
    uVar3 = 8;
  }
  uVar4 = (ulong)*(uint *)(lVar5 + 0x50) & 0xf8;
  uVar6 = uVar4 | 7;
  uVar4 = (uVar4 + 0xf & (uVar6 ^ 0xffffffffffffffff)) + uVar3 + 1;
  if ((*(uint *)(lVar5 + 0x50) & 0x1000f8) == 0 && uVar4 < 0x19) {
    uVar7 = *param_2;
    uVar6 = uVar7;
    if (0xfffffffe < uVar7) {
      uVar6 = 0xffffffff;
    }
    if ((uVar7 != 0) && (1 < (int)uVar6 + 1U)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)(param_1,param_2,uVar4);
      return param_1;
    }
    *param_1 = uVar7;
    puVar9 = (undefined8 *)((long)param_1 + 0xfU & 0xfffffffffffffff8);
    puVar2 = (undefined8 *)((long)param_2 + 0xfU & 0xfffffffffffffff8);
    if (*(byte *)((long)puVar2 + uVar3) < 2) {
      if (*(byte *)((long)puVar2 + uVar3) == 1) {
        uVar8 = *puVar2;
        _swift_errorRetain(uVar8);
        *puVar9 = uVar8;
        *(undefined1 *)((long)puVar9 + uVar3) = 1;
      }
      else {
        (**(code **)(lVar5 + 0x10))(puVar9,puVar2,lVar1);
        *(undefined1 *)((long)puVar9 + uVar3) = 0;
      }
    }
    else {
      _memcpy(puVar9);
    }
  }
  else {
    uVar3 = *param_2;
    *param_1 = uVar3;
    param_1 = (ulong *)(uVar3 + (uVar6 + 0x10 & ~uVar6));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 1040f7b2c; end: 1040f7be7;  */

void FUN_1040f7b2c(ulong *param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  uVar3 = *param_1;
  uVar5 = uVar3;
  if (0xfffffffe < uVar3) {
    uVar5 = 0xffffffff;
  }
  if (uVar3 == 0 || ((int)uVar5 == -1 || (int)uVar5 == 0)) {
    lVar4 = *(long *)(lVar1 + -8);
    uVar3 = (ulong)*(uint *)(lVar4 + 0x50) & 0xf8 | 7;
    uVar5 = *(ulong *)(lVar4 + 0x40);
    if (uVar5 < 9) {
      uVar5 = 8;
    }
    puVar2 = (undefined8 *)((long)param_1 + uVar3 + 8 & (uVar3 ^ 0xffffffffffffffff));
    if (*(byte *)((long)puVar2 + uVar5) < 2) {
      if (*(byte *)((long)puVar2 + uVar5) == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_errorRelease_11034f318)(*puVar2);
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x0001040f7be4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar4 + 8))(puVar2,lVar1);
      return;
    }
  }
  return;
}



/* Entry: 1040f7be8; end: 1040f7d03;  */

ulong * FUN_1040f7be8(ulong *param_1,ulong *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  lVar4 = *(long *)(lVar2 + -8);
  uVar5 = *(ulong *)(lVar4 + 0x40);
  if (uVar5 < 9) {
    uVar5 = 8;
  }
  uVar7 = (ulong)*(uint *)(lVar4 + 0x50) & 0xf8 | 7;
  uVar6 = ~uVar7;
  uVar8 = *param_2;
  uVar1 = uVar8;
  if (0xfffffffe < uVar8) {
    uVar1 = 0xffffffff;
  }
  if ((uVar8 != 0) && (1 < (int)uVar1 + 1U)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)(param_1,param_2,(uVar7 + 8 & uVar6) + uVar5 + 1);
    return param_1;
  }
  *param_1 = uVar8;
  puVar9 = (undefined8 *)((long)param_1 + uVar7 + 8 & uVar6);
  puVar3 = (undefined8 *)((long)param_2 + uVar7 + 8 & uVar6);
  if (*(byte *)((long)puVar3 + uVar5) < 2) {
    if (*(byte *)((long)puVar3 + uVar5) == 1) {
      uVar10 = *puVar3;
      _swift_errorRetain(uVar10);
      *puVar9 = uVar10;
      *(undefined1 *)((long)puVar9 + uVar5) = 1;
    }
    else {
      (**(code **)(lVar4 + 0x10))(puVar9,puVar3,lVar2);
      *(undefined1 *)((long)puVar9 + uVar5) = 0;
    }
  }
  else {
    _memcpy(puVar9);
  }
  return param_1;
}



/* Entry: 1040f7d04; end: 1040f7fd7;  */

ulong * FUN_1040f7d04(ulong *param_1,ulong *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  long lVar6;
  uint *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  code *pcVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  uint *puVar18;
  undefined8 uVar19;
  uint uVar20;
  long lVar21;
  
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  lVar21 = *(long *)(lVar6 + -8);
  uVar8 = *(ulong *)(lVar21 + 0x40);
  if (uVar8 < 9) {
    uVar8 = 8;
  }
  uVar15 = (ulong)*(uint *)(lVar21 + 0x50) & 0xf8;
  uVar14 = uVar15 | 7;
  uVar9 = ~uVar14;
  uVar17 = *param_1;
  uVar1 = uVar17;
  if (0xfffffffe < uVar17) {
    uVar1 = 0xffffffff;
  }
  uVar16 = *param_2;
  uVar2 = uVar16;
  if (0xfffffffe < uVar16) {
    uVar2 = 0xffffffff;
  }
  bVar5 = uVar16 != 0 && 1 < (int)uVar2 + 1U;
  if ((uVar17 == 0) || ((int)uVar1 + 1U < 2)) {
    if (bVar5) {
      puVar10 = (undefined8 *)((long)param_1 + uVar14 + 8 & uVar9);
      if (*(byte *)((long)puVar10 + uVar8) < 2) {
        if (*(byte *)((long)puVar10 + uVar8) == 1) {
          _swift_errorRelease(*puVar10);
        }
        else {
          (**(code **)(lVar21 + 8))(puVar10,lVar6);
        }
      }
      goto LAB_1040f7eac;
    }
    *param_1 = uVar16;
    puVar18 = (uint *)((long)param_1 + uVar14 + 8 & uVar9);
    puVar7 = (uint *)((long)param_2 + uVar14 + 8 & uVar9);
    bVar3 = *(byte *)((long)puVar18 + uVar8);
    bVar4 = *(byte *)((long)puVar7 + uVar8);
    if (bVar3 < 2) {
      if (bVar4 < 2) {
        if (puVar18 == puVar7) {
          return param_1;
        }
        if (bVar3 == 1) {
          _swift_errorRelease(*(undefined8 *)puVar18);
        }
        else {
          (**(code **)(lVar21 + 8))(puVar18,lVar6);
        }
        bVar3 = *(byte *)((long)puVar7 + uVar8);
        uVar12 = (uint)bVar3;
        if (1 < bVar3) {
          uVar20 = (uint)uVar8;
          uVar13 = 4;
          if (uVar20 < 4) {
            uVar13 = uVar20;
          }
          if ((int)uVar13 < 2) {
            if (uVar13 == 0) goto LAB_1040f7f8c;
            uVar13 = (uint)(byte)*puVar7;
          }
          else if (uVar13 == 2) {
            uVar13 = (uint)(ushort)*puVar7;
          }
          else if (uVar13 == 3) {
            uVar13 = (uint)(uint3)*puVar7;
          }
          else {
            uVar13 = *puVar7;
          }
          uVar12 = uVar13 | bVar3 - 2 << (ulong)((uVar20 & 3) << 3);
          if (3 < uVar20) {
            uVar12 = uVar13;
          }
          uVar12 = uVar12 + 2;
        }
LAB_1040f7f8c:
        if (uVar12 != 1) {
          pcVar11 = *(code **)(lVar21 + 0x10);
LAB_1040f7ed8:
          (*pcVar11)(puVar18,puVar7,lVar6);
          *(byte *)((long)puVar18 + uVar8) = 0;
          return param_1;
        }
LAB_1040f7f94:
        uVar19 = *(undefined8 *)puVar7;
        goto LAB_1040f7f98;
      }
      if (bVar3 == 1) {
        _swift_errorRelease(*(undefined8 *)puVar18);
      }
      else {
        (**(code **)(lVar21 + 8))(puVar18,lVar6);
      }
    }
    else if (bVar4 < 2) {
      if (bVar4 != 1) {
        pcVar11 = *(code **)(lVar21 + 0x10);
        goto LAB_1040f7ed8;
      }
      goto LAB_1040f7f94;
    }
LAB_1040f7efc:
    _memcpy(puVar18,puVar7,uVar8 + 1);
  }
  else {
    if (bVar5) {
LAB_1040f7eac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)
                (param_1,param_2,(uVar15 + 0xf & (uVar14 ^ 0xffffffffffffffff)) + uVar8 + 1);
      return param_1;
    }
    *param_1 = uVar16;
    puVar18 = (uint *)((long)param_1 + uVar14 + 8 & uVar9);
    puVar7 = (uint *)((long)param_2 + uVar14 + 8 & uVar9);
    if (1 < *(byte *)((long)puVar7 + uVar8)) goto LAB_1040f7efc;
    if (*(byte *)((long)puVar7 + uVar8) != 1) {
      pcVar11 = *(code **)(lVar21 + 0x10);
      goto LAB_1040f7ed8;
    }
    uVar19 = *(undefined8 *)puVar7;
LAB_1040f7f98:
    _swift_errorRetain(uVar19);
    *(undefined8 *)puVar18 = uVar19;
    *(byte *)((long)puVar18 + uVar8) = 1;
  }
  return param_1;
}



/* Entry: 1040f7fd8; end: 1040f80eb;  */

ulong * FUN_1040f7fd8(ulong *param_1,ulong *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  lVar4 = *(long *)(lVar2 + -8);
  uVar5 = *(ulong *)(lVar4 + 0x40);
  if (uVar5 < 9) {
    uVar5 = 8;
  }
  uVar7 = (ulong)*(uint *)(lVar4 + 0x50) & 0xf8 | 7;
  uVar6 = ~uVar7;
  uVar8 = *param_2;
  uVar1 = uVar8;
  if (0xfffffffe < uVar8) {
    uVar1 = 0xffffffff;
  }
  if ((uVar8 != 0) && (1 < (int)uVar1 + 1U)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)(param_1,param_2,(uVar7 + 8 & uVar6) + uVar5 + 1);
    return param_1;
  }
  *param_1 = uVar8;
  puVar9 = (undefined8 *)((long)param_1 + uVar7 + 8 & uVar6);
  puVar3 = (undefined8 *)((long)param_2 + uVar7 + 8 & uVar6);
  if (*(byte *)((long)puVar3 + uVar5) < 2) {
    if (*(byte *)((long)puVar3 + uVar5) == 1) {
      *puVar9 = *puVar3;
      *(undefined1 *)((long)puVar9 + uVar5) = 1;
    }
    else {
      (**(code **)(lVar4 + 0x20))(puVar9,puVar3,lVar2);
      *(undefined1 *)((long)puVar9 + uVar5) = 0;
    }
  }
  else {
    _memcpy(puVar9);
  }
  return param_1;
}



/* Entry: 1040f80ec; end: 1040f83b7;  */

ulong * FUN_1040f80ec(ulong *param_1,ulong *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  long lVar6;
  uint *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  code *pcVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  uint *puVar19;
  uint uVar20;
  long lVar21;
  
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  lVar21 = *(long *)(lVar6 + -8);
  uVar8 = *(ulong *)(lVar21 + 0x40);
  if (uVar8 < 9) {
    uVar8 = 8;
  }
  uVar16 = (ulong)*(uint *)(lVar21 + 0x50) & 0xf8;
  uVar15 = uVar16 | 7;
  uVar9 = ~uVar15;
  uVar18 = *param_1;
  uVar1 = uVar18;
  if (0xfffffffe < uVar18) {
    uVar1 = 0xffffffff;
  }
  uVar17 = *param_2;
  uVar2 = uVar17;
  if (0xfffffffe < uVar17) {
    uVar2 = 0xffffffff;
  }
  bVar5 = uVar17 != 0 && 1 < (int)uVar2 + 1U;
  if ((uVar18 == 0) || ((int)uVar1 + 1U < 2)) {
    if (bVar5) {
      puVar11 = (undefined8 *)((long)param_1 + uVar15 + 8 & uVar9);
      if (*(byte *)((long)puVar11 + uVar8) < 2) {
        if (*(byte *)((long)puVar11 + uVar8) == 1) {
          _swift_errorRelease(*puVar11);
        }
        else {
          (**(code **)(lVar21 + 8))(puVar11,lVar6);
        }
      }
      goto LAB_1040f8294;
    }
    *param_1 = uVar17;
    puVar19 = (uint *)((long)param_1 + uVar15 + 8 & uVar9);
    puVar7 = (uint *)((long)param_2 + uVar15 + 8 & uVar9);
    bVar3 = *(byte *)((long)puVar19 + uVar8);
    bVar4 = *(byte *)((long)puVar7 + uVar8);
    if (bVar3 < 2) {
      if (bVar4 < 2) {
        if (puVar19 == puVar7) {
          return param_1;
        }
        if (bVar3 == 1) {
          _swift_errorRelease(*(undefined8 *)puVar19);
        }
        else {
          (**(code **)(lVar21 + 8))(puVar19,lVar6);
        }
        bVar3 = *(byte *)((long)puVar7 + uVar8);
        uVar13 = (uint)bVar3;
        if (1 < bVar3) {
          uVar20 = (uint)uVar8;
          uVar14 = 4;
          if (uVar20 < 4) {
            uVar14 = uVar20;
          }
          if ((int)uVar14 < 2) {
            if (uVar14 == 0) goto LAB_1040f8374;
            uVar14 = (uint)(byte)*puVar7;
          }
          else if (uVar14 == 2) {
            uVar14 = (uint)(ushort)*puVar7;
          }
          else if (uVar14 == 3) {
            uVar14 = (uint)(uint3)*puVar7;
          }
          else {
            uVar14 = *puVar7;
          }
          uVar13 = uVar14 | bVar3 - 2 << (ulong)((uVar20 & 3) << 3);
          if (3 < uVar20) {
            uVar13 = uVar14;
          }
          uVar13 = uVar13 + 2;
        }
LAB_1040f8374:
        if (uVar13 != 1) {
          pcVar12 = *(code **)(lVar21 + 0x20);
LAB_1040f82c0:
          (*pcVar12)(puVar19,puVar7,lVar6);
          *(byte *)((long)puVar19 + uVar8) = 0;
          return param_1;
        }
LAB_1040f837c:
        uVar10 = *(undefined8 *)puVar7;
        goto LAB_1040f8380;
      }
      if (bVar3 == 1) {
        _swift_errorRelease(*(undefined8 *)puVar19);
      }
      else {
        (**(code **)(lVar21 + 8))(puVar19,lVar6);
      }
    }
    else if (bVar4 < 2) {
      if (bVar4 != 1) {
        pcVar12 = *(code **)(lVar21 + 0x20);
        goto LAB_1040f82c0;
      }
      goto LAB_1040f837c;
    }
LAB_1040f82e4:
    _memcpy(puVar19,puVar7,uVar8 + 1);
  }
  else {
    if (bVar5) {
LAB_1040f8294:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)
                (param_1,param_2,(uVar16 + 0xf & (uVar15 ^ 0xffffffffffffffff)) + uVar8 + 1);
      return param_1;
    }
    *param_1 = uVar17;
    puVar19 = (uint *)((long)param_1 + uVar15 + 8 & uVar9);
    puVar7 = (uint *)((long)param_2 + uVar15 + 8 & uVar9);
    if (1 < *(byte *)((long)puVar7 + uVar8)) goto LAB_1040f82e4;
    if (*(byte *)((long)puVar7 + uVar8) != 1) {
      pcVar12 = *(code **)(lVar21 + 0x20);
      goto LAB_1040f82c0;
    }
    uVar10 = *(undefined8 *)puVar7;
LAB_1040f8380:
    *(undefined8 *)puVar19 = uVar10;
    *(byte *)((long)puVar19 + uVar8) = 1;
  }
  return param_1;
}



/* Entry: 1040f83b8; end: 1040f8523;  */

int FUN_1040f83b8(ulong *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  uVar8 = *(ulong *)(*(long *)(lVar5 + -8) + 0x40);
  if (uVar8 < 9) {
    uVar8 = 8;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 0x7ffffffe) goto LAB_1040f849c;
  uVar1 = *(uint *)(*(long *)(lVar5 + -8) + 0x50) & 0xf8;
  uVar8 = uVar8 + ((ulong)(uVar1 + 0xf & (uVar1 ^ 0xffffffff)) & 0x1f8) + 1;
  uVar6 = (uint)uVar8;
  uVar1 = uVar6 << 3;
  if (uVar6 < 4) {
    uVar9 = param_2 + 0x80000003 + ~(-1 << (ulong)(uVar1 & 0x1f)) >> (ulong)(uVar1 & 0x1f);
    if (uVar9 < 0xff) {
      if (uVar9 == 0) goto LAB_1040f849c;
      goto LAB_1040f845c;
    }
    if (uVar9 < 0xffff) {
      uVar9 = (uint)*(ushort *)((long)param_1 + uVar8);
    }
    else {
      uVar9 = *(uint *)((long)param_1 + uVar8);
    }
  }
  else {
LAB_1040f845c:
    uVar9 = (uint)*(byte *)((long)param_1 + uVar8);
  }
  if (uVar9 != 0) {
    uVar2 = 0;
    if (uVar6 < 4) {
      uVar2 = uVar9 - 1 << (ulong)(uVar1 & 0x1f);
    }
    if (uVar6 != 0) {
      uVar1 = 4;
      if (uVar6 < 4) {
        uVar1 = uVar6;
      }
      if ((int)uVar1 < 3) {
        if (uVar1 == 1) {
          uVar8 = (ulong)(byte)*param_1;
        }
        else {
          uVar8 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar1 == 3) {
        uVar8 = (ulong)(uint3)*param_1;
      }
      else {
        uVar8 = (ulong)(uint)*param_1;
      }
    }
    return ((uint)uVar8 | uVar2) + 0x7ffffffe;
  }
LAB_1040f849c:
  uVar8 = *param_1;
  if (0xfffffffe < uVar8) {
    uVar8 = 0xffffffff;
  }
  iVar7 = (int)uVar8;
  iVar3 = 0;
  if (iVar7 != 0) {
    iVar3 = iVar7 + -1;
  }
  iVar4 = 0;
  if (1 < iVar7 + 1U) {
    iVar4 = iVar3;
  }
  return iVar4;
}



/* Entry: 1040f8524; end: 1040f870f;  */

void FUN_1040f8524(ulong *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  undefined2 uVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x18),*(undefined8 *)(param_4 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  uVar5 = *(ulong *)(*(long *)(lVar4 + -8) + 0x40);
  if (uVar5 < 9) {
    uVar5 = 8;
  }
  uVar6 = *(uint *)(*(long *)(lVar4 + -8) + 0x50) & 0xf8;
  lVar4 = uVar5 + ((ulong)(uVar6 + 0xf & (uVar6 ^ 0xffffffff)) & 0x1f8) + 1;
  uVar6 = (uint)lVar4;
  if (param_3 < 0x7ffffffe) {
    bVar3 = 0;
  }
  else if (uVar6 < 4) {
    uVar1 = param_3 + 0x80000003 + ~(-1 << (ulong)(uVar6 << 3 & 0x1f)) >> (ulong)(uVar6 << 3 & 0x1f)
    ;
    bVar3 = 2;
    if (0xfffe < uVar1) {
      bVar3 = 4;
    }
    if (uVar1 < 0xff) {
      bVar3 = uVar1 != 0;
    }
  }
  else {
    bVar3 = 1;
  }
  if (param_2 < 0x7ffffffe) {
    if (bVar3 < 2) {
      if (bVar3 != 0) {
        *(undefined1 *)((long)param_1 + lVar4) = 0;
      }
    }
    else if (bVar3 == 2) {
      *(undefined2 *)((long)param_1 + lVar4) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar4) = 0;
    }
    if (param_2 != 0) {
      *param_1 = (ulong)(param_2 + 1);
    }
  }
  else {
    param_2 = param_2 + 0x80000002;
    if (uVar6 < 4) {
      iVar7 = (param_2 >> (ulong)(uVar6 << 3 & 0x1f)) + 1;
      if (uVar6 != 0) {
        uVar1 = param_2 & (-1 << (ulong)(uVar6 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,lVar4);
        uVar2 = (undefined2)uVar1;
        if (uVar6 == 3) {
          *(undefined2 *)param_1 = uVar2;
          *(char *)((long)param_1 + 2) = (char)(uVar1 >> 0x10);
        }
        else if (uVar6 == 2) {
          *(undefined2 *)param_1 = uVar2;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,lVar4);
      *(uint *)param_1 = param_2;
      iVar7 = 1;
    }
    if (bVar3 < 2) {
      if (bVar3 != 0) {
        *(char *)((long)param_1 + lVar4) = (char)iVar7;
      }
    }
    else if (bVar3 == 2) {
      *(short *)((long)param_1 + lVar4) = (short)iVar7;
    }
    else {
      *(int *)((long)param_1 + lVar4) = iVar7;
    }
  }
  return;
}



/* Entry: 1040f8710; end: 1040f8733;  */

int FUN_1040f8710(ulong *param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (1 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2;
  }
  return iVar1;
}



/* Entry: 1040f8734; end: 1040f8837;  */

void FUN_1040f8734(ulong *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  uVar5 = *(ulong *)(*(long *)(lVar3 + -8) + 0x40);
  if (uVar5 < 9) {
    uVar5 = 8;
  }
  if (param_2 < 0x7fffffff) {
    if (param_2 != 0) {
      *param_1 = (ulong)param_2;
    }
  }
  else {
    uVar1 = *(uint *)(*(long *)(lVar3 + -8) + 0x50) & 0xf8;
    uVar1 = (int)uVar5 + (uVar1 + 0xf & (uVar1 ^ 0xffffffff) & 0x1f8) + 1;
    uVar4 = 0xffffffff;
    if (uVar1 < 4) {
      uVar4 = ~(-1 << (ulong)(uVar1 * 8 & 0x1f));
    }
    if (uVar1 != 0) {
      uVar4 = uVar4 & param_2 + 0x80000001;
      uVar2 = 4;
      if (uVar1 < 4) {
        uVar2 = uVar1;
      }
      _bzero(param_1);
      if ((int)uVar2 < 3) {
        if (uVar2 == 1) {
          *(char *)param_1 = (char)uVar4;
        }
        else {
          *(short *)param_1 = (short)uVar4;
        }
      }
      else if (uVar2 == 3) {
        *(short *)param_1 = (short)uVar4;
        *(char *)((long)param_1 + 2) = (char)(uVar4 >> 0x10);
      }
      else {
        *(uint *)param_1 = uVar4;
      }
    }
  }
  return;
}



/* Entry: 1040f8838; end: 1040f8843;  */

void FUN_1040f8838(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e7f0658);
  return;
}



/* Entry: 1040f8844; end: 1040f8937;  */

undefined1  [16] FUN_1040f8844(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_50 [32];
  long lStack_30;
  undefined1 *puStack_28;
  
  uVar3 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar3 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    uVar2 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,*(undefined8 *)(param_1 + 0x18),lVar1,PTR___sSciTL_11034fea8,
               PTR___s7ElementSciTl_11034fb58);
    uVar4 = 0x112d393f0;
    func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
    uVar3 = 0xff;
    __ss6ResultOMa(0xff,uVar2,uVar4,PTR___ss5ErrorWS_11034ee10);
    lVar1 = 0x13f;
    __sSqMa();
    if (uVar3 < 0x40) {
      _swift_getTupleTypeLayout2(auStack_50,&UNK_10dcd78c8,*(long *)(lVar1 + -8) + 0x40);
      puStack_28 = auStack_50;
      _swift_initEnumMetadataMultiPayload(param_1,0,2,&lStack_30);
      lVar1 = 0;
      uVar4 = 0;
      goto LAB_1040f8924;
    }
  }
  uVar4 = 0x3f;
LAB_1040f8924:
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = lVar1;
  return auVar5;
}



/* Entry: 1040f8938; end: 1040f8b33;  */

long * FUN_1040f8938(long *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  
  lVar4 = *(long *)(param_3 + 0x10);
  lVar13 = *(long *)(lVar4 + -8);
  uVar12 = *(ulong *)(lVar13 + 0x40);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),lVar4,PTR___sSciTL_11034fea8,
             PTR___s7ElementSciTl_11034fb58);
  lVar6 = *(long *)(lVar3 + -8);
  uVar7 = *(uint *)(lVar6 + 0x50) & 0xf8;
  uVar9 = *(ulong *)(lVar6 + 0x40);
  if (uVar9 < 9) {
    uVar9 = 8;
  }
  uVar1 = ((ulong)(uVar7 + 0xf & (uVar7 ^ 0xffffffff)) & 0x1f8) + uVar9 + 1;
  if (uVar1 <= uVar12) {
    uVar1 = uVar12;
  }
  uVar7 = *(uint *)(lVar6 + 0x50) | *(uint *)(lVar13 + 0x50);
  if ((uVar7 & 0x1000f8) != 0 || 0x18 < uVar1 + 1) {
    uVar9 = (ulong)(uVar7 & 0xf8 | 7);
    lVar4 = *(long *)param_2;
    *param_1 = lVar4;
    _swift_retain();
    return (long *)(lVar4 + (uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff)));
  }
  bVar2 = *(byte *)((long)param_2 + uVar1);
  uVar7 = (uint)bVar2;
  if (1 < bVar2) {
    uVar8 = 4;
    if (uVar1 < 4) {
      uVar8 = (uint)uVar1;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_1040f8a6c;
      uVar8 = (uint)(byte)*param_2;
    }
    else if (uVar8 == 2) {
      uVar8 = (uint)(ushort)*param_2;
    }
    else if (uVar8 == 3) {
      uVar8 = (uint)(uint3)*param_2;
    }
    else {
      uVar8 = *param_2;
    }
    uVar7 = uVar8 | bVar2 - 2 << (ulong)(((uint)uVar1 & 3) << 3);
    if (3 < uVar1) {
      uVar7 = uVar8;
    }
    uVar7 = uVar7 + 2;
  }
LAB_1040f8a6c:
  if (uVar7 == 1) {
    *param_1 = *(long *)param_2;
    puVar11 = (undefined8 *)((long)param_1 + 0xfU & 0xfffffffffffffff8);
    puVar5 = (undefined8 *)((ulong)((long)param_2 + 0xf) & 0xfffffffffffffff8);
    if (*(byte *)((long)puVar5 + uVar9) < 2) {
      if (*(byte *)((long)puVar5 + uVar9) == 1) {
        uVar10 = *puVar5;
        _swift_errorRetain(uVar10);
        *puVar11 = uVar10;
        *(undefined1 *)((long)puVar11 + uVar9) = 1;
      }
      else {
        (**(code **)(lVar6 + 0x10))(puVar11,puVar5,lVar3);
        *(undefined1 *)((long)puVar11 + uVar9) = 0;
      }
    }
    else {
      _memcpy(puVar11);
    }
    *(undefined1 *)((long)param_1 + uVar1) = 1;
  }
  else {
    if (uVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)(param_1,param_2,uVar1 + 1);
      return param_1;
    }
    (**(code **)(lVar13 + 0x10))(param_1,param_2,lVar4);
    *(undefined1 *)((long)param_1 + uVar1) = 0;
  }
  return param_1;
}



/* Entry: 1040f8b34; end: 1040f8c93;  */

void FUN_1040f8b34(uint *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  code *UNRECOVERED_JUMPTABLE;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  
  lVar2 = *(long *)(param_2 + 0x10);
  lVar12 = *(long *)(lVar2 + -8);
  uVar13 = *(ulong *)(lVar12 + 0x40);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x18),lVar2,PTR___sSciTL_11034fea8,
             PTR___s7ElementSciTl_11034fb58);
  lVar5 = *(long *)(lVar4 + -8);
  uVar7 = (ulong)*(uint *)(lVar5 + 0x50) & 0xf8;
  uVar6 = uVar7 | 7;
  uVar8 = *(ulong *)(lVar5 + 0x40);
  if (uVar8 < 9) {
    uVar8 = 8;
  }
  lVar1 = uVar8 + (uVar7 + 0xf & (uVar6 ^ 0xffffffffffffffff));
  if (uVar13 < lVar1 + 1U) {
    uVar13 = lVar1 + 1;
  }
  bVar3 = *(byte *)((long)param_1 + uVar13);
  uVar10 = (uint)bVar3;
  if (1 < bVar3) {
    uVar9 = (uint)uVar13;
    uVar11 = 4;
    if (uVar9 < 4) {
      uVar11 = uVar9;
    }
    if ((int)uVar11 < 2) {
      if (uVar11 == 0) goto LAB_1040f8c20;
      uVar11 = (uint)(byte)*param_1;
    }
    else if (uVar11 == 2) {
      uVar11 = (uint)(ushort)*param_1;
    }
    else if (uVar11 == 3) {
      uVar11 = (uint)(uint3)*param_1;
    }
    else {
      uVar11 = *param_1;
    }
    uVar10 = uVar11 | bVar3 - 2 << (ulong)((uVar9 & 3) << 3);
    if (3 < uVar9) {
      uVar10 = uVar11;
    }
    uVar10 = uVar10 + 2;
  }
LAB_1040f8c20:
  if (uVar10 == 1) {
    param_1 = (uint *)((ulong)((long)param_1 + uVar6 + 8) & ~uVar6);
    if (1 < *(byte *)((long)param_1 + uVar8)) {
      return;
    }
    if (*(byte *)((long)param_1 + uVar8) == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_errorRelease_11034f318)(*(undefined8 *)param_1,lVar4);
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(lVar5 + 8);
  }
  else {
    if (uVar10 != 0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(lVar12 + 8);
    lVar4 = lVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x0001040f8c44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,lVar4);
  return;
}



/* Entry: 1040f8c94; end: 1040f8e5b;  */

undefined8 * FUN_1040f8c94(undefined8 *param_1,uint *param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  
  lVar1 = *(long *)(param_3 + 0x10);
  lVar15 = *(long *)(lVar1 + -8);
  uVar14 = *(ulong *)(lVar15 + 0x40);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),lVar1,PTR___sSciTL_11034fea8,
             PTR___s7ElementSciTl_11034fb58);
  lVar5 = *(long *)(lVar3 + -8);
  uVar7 = (ulong)*(uint *)(lVar5 + 0x50) & 0xf8;
  uVar6 = uVar7 | 7;
  uVar10 = *(ulong *)(lVar5 + 0x40);
  if (uVar10 < 9) {
    uVar10 = 8;
  }
  uVar7 = (uVar7 + 0xf & (uVar6 ^ 0xffffffffffffffff)) + uVar10 + 1;
  if (uVar7 <= uVar14) {
    uVar7 = uVar14;
  }
  bVar2 = *(byte *)((long)param_2 + uVar7);
  uVar8 = (uint)bVar2;
  if (1 < bVar2) {
    uVar13 = (uint)uVar7;
    uVar9 = 4;
    if (uVar13 < 4) {
      uVar9 = uVar13;
    }
    if ((int)uVar9 < 2) {
      if (uVar9 == 0) goto LAB_1040f8d84;
      uVar9 = (uint)(byte)*param_2;
    }
    else if (uVar9 == 2) {
      uVar9 = (uint)(ushort)*param_2;
    }
    else if (uVar9 == 3) {
      uVar9 = (uint)(uint3)*param_2;
    }
    else {
      uVar9 = *param_2;
    }
    uVar8 = uVar9 | bVar2 - 2 << (ulong)((uVar13 & 3) << 3);
    if (3 < uVar13) {
      uVar8 = uVar9;
    }
    uVar8 = uVar8 + 2;
  }
LAB_1040f8d84:
  if (uVar8 == 1) {
    *param_1 = *(undefined8 *)param_2;
    puVar11 = (undefined8 *)((long)param_1 + uVar6 + 8 & ~uVar6);
    puVar4 = (undefined8 *)((ulong)((long)param_2 + uVar6 + 8) & ~uVar6);
    if (*(byte *)((long)puVar4 + uVar10) < 2) {
      if (*(byte *)((long)puVar4 + uVar10) == 1) {
        uVar12 = *puVar4;
        _swift_errorRetain(uVar12);
        *puVar11 = uVar12;
        *(undefined1 *)((long)puVar11 + uVar10) = 1;
      }
      else {
        (**(code **)(lVar5 + 0x10))(puVar11,puVar4,lVar3);
        *(undefined1 *)((long)puVar11 + uVar10) = 0;
      }
    }
    else {
      _memcpy(puVar11);
    }
    *(undefined1 *)((long)param_1 + uVar7) = 1;
  }
  else {
    if (uVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)(param_1,param_2,uVar7 + 1);
      return param_1;
    }
    (**(code **)(lVar15 + 0x10))(param_1,param_2,lVar1);
    *(undefined1 *)((long)param_1 + uVar7) = 0;
  }
  return param_1;
}



/* Entry: 1040f8e5c; end: 1040f918f;  */

uint * FUN_1040f8e5c(uint *param_1,uint *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar2 = *(long *)(param_3 + 0x10);
  lVar14 = *(long *)(lVar2 + -8);
  uVar11 = *(ulong *)(lVar14 + 0x40);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),lVar2,PTR___sSciTL_11034fea8,
             PTR___s7ElementSciTl_11034fb58);
  lVar13 = *(long *)(lVar4 + -8);
  uVar6 = (ulong)*(uint *)(lVar13 + 0x50) & 0xf8;
  uVar15 = uVar6 | 7;
  uVar8 = *(ulong *)(lVar13 + 0x40);
  if (uVar8 < 9) {
    uVar8 = 8;
  }
  uVar6 = (uVar6 + 0xf & (uVar15 ^ 0xffffffffffffffff)) + uVar8 + 1;
  if (uVar6 <= uVar11) {
    uVar6 = uVar11;
  }
  bVar3 = *(byte *)((long)param_1 + uVar6);
  uVar7 = (uint)bVar3;
  uVar12 = (uint)uVar6;
  if (1 < bVar3) {
    uVar1 = 4;
    if (uVar12 < 4) {
      uVar1 = uVar12;
    }
    if ((int)uVar1 < 2) {
      if (uVar1 == 0) goto LAB_1040f8f7c;
      uVar7 = (uint)(byte)*param_1;
    }
    else if (uVar1 == 2) {
      uVar7 = (uint)(ushort)*param_1;
    }
    else if (uVar1 == 3) {
      uVar7 = (uint)(uint3)*param_1;
    }
    else {
      uVar7 = *param_1;
    }
    if (uVar12 < 4) {
      uVar7 = (uVar7 | bVar3 - 2 << (ulong)((uVar12 & 3) << 3)) + 2;
    }
    else {
      uVar7 = uVar7 + 2;
    }
  }
LAB_1040f8f7c:
  uVar11 = ~uVar15;
  if (uVar7 == 1) {
    puVar5 = (undefined8 *)((ulong)((long)param_1 + uVar15 + 8) & uVar11);
    if (*(byte *)((long)puVar5 + uVar8) < 2) {
      if (*(byte *)((long)puVar5 + uVar8) == 1) {
        _swift_errorRelease(*puVar5);
      }
      else {
        (**(code **)(lVar13 + 8))(puVar5,lVar4);
      }
    }
  }
  else if (uVar7 == 0) {
    (**(code **)(lVar14 + 8))(param_1,lVar2);
  }
  bVar3 = *(byte *)((long)param_2 + uVar6);
  uVar7 = (uint)bVar3;
  if (1 < bVar3) {
    uVar1 = 4;
    if (uVar12 < 4) {
      uVar1 = uVar12;
    }
    if ((int)uVar1 < 2) {
      if (uVar1 == 0) goto joined_r0x0001040f9084;
      uVar7 = (uint)(byte)*param_2;
    }
    else if (uVar1 == 2) {
      uVar7 = (uint)(ushort)*param_2;
    }
    else if (uVar1 == 3) {
      uVar7 = (uint)(uint3)*param_2;
    }
    else {
      uVar7 = *param_2;
    }
    if (uVar12 < 4) {
      uVar7 = (uVar7 | bVar3 - 2 << (ulong)((uVar12 & 3) << 3)) + 2;
    }
    else {
      uVar7 = uVar7 + 2;
    }
  }
joined_r0x0001040f9084:
  if (uVar7 == 1) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    puVar9 = (undefined8 *)((ulong)((long)param_1 + uVar15 + 8) & uVar11);
    puVar5 = (undefined8 *)((ulong)((long)param_2 + uVar15 + 8) & uVar11);
    if (*(byte *)((long)puVar5 + uVar8) < 2) {
      if (*(byte *)((long)puVar5 + uVar8) == 1) {
        uVar10 = *puVar5;
        _swift_errorRetain(uVar10);
        *puVar9 = uVar10;
        *(undefined1 *)((long)puVar9 + uVar8) = 1;
      }
      else {
        (**(code **)(lVar13 + 0x10))(puVar9,puVar5,lVar4);
        *(undefined1 *)((long)puVar9 + uVar8) = 0;
      }
    }
    else {
      _memcpy(puVar9,puVar5,uVar8 + 1);
    }
    *(byte *)((long)param_1 + uVar6) = 1;
  }
  else {
    if (uVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)(param_1,param_2,uVar6 + 1);
      return param_1;
    }
    (**(code **)(lVar14 + 0x10))(param_1,param_2,lVar2);
    *(byte *)((long)param_1 + uVar6) = 0;
  }
  return param_1;
}



/* Entry: 1040f9190; end: 1040f934b;  */

undefined8 * FUN_1040f9190(undefined8 *param_1,uint *param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  
  lVar1 = *(long *)(param_3 + 0x10);
  lVar13 = *(long *)(lVar1 + -8);
  uVar14 = *(ulong *)(lVar13 + 0x40);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),lVar1,PTR___sSciTL_11034fea8,
             PTR___s7ElementSciTl_11034fb58);
  lVar5 = *(long *)(lVar3 + -8);
  uVar7 = (ulong)*(uint *)(lVar5 + 0x50) & 0xf8;
  uVar6 = uVar7 | 7;
  uVar10 = *(ulong *)(lVar5 + 0x40);
  if (uVar10 < 9) {
    uVar10 = 8;
  }
  uVar7 = (uVar7 + 0xf & (uVar6 ^ 0xffffffffffffffff)) + uVar10 + 1;
  if (uVar7 <= uVar14) {
    uVar7 = uVar14;
  }
  bVar2 = *(byte *)((long)param_2 + uVar7);
  uVar8 = (uint)bVar2;
  if (1 < bVar2) {
    uVar12 = (uint)uVar7;
    uVar9 = 4;
    if (uVar12 < 4) {
      uVar9 = uVar12;
    }
    if ((int)uVar9 < 2) {
      if (uVar9 == 0) goto LAB_1040f9284;
      uVar9 = (uint)(byte)*param_2;
    }
    else if (uVar9 == 2) {
      uVar9 = (uint)(ushort)*param_2;
    }
    else if (uVar9 == 3) {
      uVar9 = (uint)(uint3)*param_2;
    }
    else {
      uVar9 = *param_2;
    }
    uVar8 = uVar9 | bVar2 - 2 << (ulong)((uVar12 & 3) << 3);
    if (3 < uVar12) {
      uVar8 = uVar9;
    }
    uVar8 = uVar8 + 2;
  }
LAB_1040f9284:
  if (uVar8 == 1) {
    *param_1 = *(undefined8 *)param_2;
    puVar11 = (undefined8 *)((long)param_1 + uVar6 + 8 & ~uVar6);
    puVar4 = (undefined8 *)((ulong)((long)param_2 + uVar6 + 8) & ~uVar6);
    if (*(byte *)((long)puVar4 + uVar10) < 2) {
      if (*(byte *)((long)puVar4 + uVar10) == 1) {
        *puVar11 = *puVar4;
        *(undefined1 *)((long)puVar11 + uVar10) = 1;
      }
      else {
        (**(code **)(lVar5 + 0x20))(puVar11,puVar4,lVar3);
        *(undefined1 *)((long)puVar11 + uVar10) = 0;
      }
    }
    else {
      _memcpy(puVar11);
    }
    *(undefined1 *)((long)param_1 + uVar7) = 1;
  }
  else {
    if (uVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)(param_1,param_2,uVar7 + 1);
      return param_1;
    }
    (**(code **)(lVar13 + 0x20))(param_1,param_2,lVar1);
    *(undefined1 *)((long)param_1 + uVar7) = 0;
  }
  return param_1;
}



/* Entry: 1040f934c; end: 1040f9673;  */

uint * FUN_1040f934c(uint *param_1,uint *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar2 = *(long *)(param_3 + 0x10);
  lVar13 = *(long *)(lVar2 + -8);
  uVar10 = *(ulong *)(lVar13 + 0x40);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),lVar2,PTR___sSciTL_11034fea8,
             PTR___s7ElementSciTl_11034fb58);
  lVar12 = *(long *)(lVar4 + -8);
  uVar7 = (ulong)*(uint *)(lVar12 + 0x50) & 0xf8;
  uVar14 = uVar7 | 7;
  uVar9 = *(ulong *)(lVar12 + 0x40);
  if (uVar9 < 9) {
    uVar9 = 8;
  }
  uVar7 = (uVar7 + 0xf & (uVar14 ^ 0xffffffffffffffff)) + uVar9 + 1;
  if (uVar7 <= uVar10) {
    uVar7 = uVar10;
  }
  bVar3 = *(byte *)((long)param_1 + uVar7);
  uVar8 = (uint)bVar3;
  uVar11 = (uint)uVar7;
  if (1 < bVar3) {
    uVar1 = 4;
    if (uVar11 < 4) {
      uVar1 = uVar11;
    }
    if ((int)uVar1 < 2) {
      if (uVar1 == 0) goto LAB_1040f946c;
      uVar8 = (uint)(byte)*param_1;
    }
    else if (uVar1 == 2) {
      uVar8 = (uint)(ushort)*param_1;
    }
    else if (uVar1 == 3) {
      uVar8 = (uint)(uint3)*param_1;
    }
    else {
      uVar8 = *param_1;
    }
    if (uVar11 < 4) {
      uVar8 = (uVar8 | bVar3 - 2 << (ulong)((uVar11 & 3) << 3)) + 2;
    }
    else {
      uVar8 = uVar8 + 2;
    }
  }
LAB_1040f946c:
  uVar10 = ~uVar14;
  if (uVar8 == 1) {
    puVar5 = (undefined8 *)((ulong)((long)param_1 + uVar14 + 8) & uVar10);
    if (*(byte *)((long)puVar5 + uVar9) < 2) {
      if (*(byte *)((long)puVar5 + uVar9) == 1) {
        _swift_errorRelease(*puVar5);
      }
      else {
        (**(code **)(lVar12 + 8))(puVar5,lVar4);
      }
    }
  }
  else if (uVar8 == 0) {
    (**(code **)(lVar13 + 8))(param_1,lVar2);
  }
  bVar3 = *(byte *)((long)param_2 + uVar7);
  uVar8 = (uint)bVar3;
  if (1 < bVar3) {
    uVar1 = 4;
    if (uVar11 < 4) {
      uVar1 = uVar11;
    }
    if ((int)uVar1 < 2) {
      if (uVar1 == 0) goto joined_r0x0001040f9574;
      uVar8 = (uint)(byte)*param_2;
    }
    else if (uVar1 == 2) {
      uVar8 = (uint)(ushort)*param_2;
    }
    else if (uVar1 == 3) {
      uVar8 = (uint)(uint3)*param_2;
    }
    else {
      uVar8 = *param_2;
    }
    if (uVar11 < 4) {
      uVar8 = (uVar8 | bVar3 - 2 << (ulong)((uVar11 & 3) << 3)) + 2;
    }
    else {
      uVar8 = uVar8 + 2;
    }
  }
joined_r0x0001040f9574:
  if (uVar8 == 1) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    puVar5 = (undefined8 *)((ulong)((long)param_1 + uVar14 + 8) & uVar10);
    puVar6 = (undefined8 *)((ulong)((long)param_2 + uVar14 + 8) & uVar10);
    if (*(byte *)((long)puVar6 + uVar9) < 2) {
      if (*(byte *)((long)puVar6 + uVar9) == 1) {
        *puVar5 = *puVar6;
        *(undefined1 *)((long)puVar5 + uVar9) = 1;
      }
      else {
        (**(code **)(lVar12 + 0x20))(puVar5,puVar6,lVar4);
        *(undefined1 *)((long)puVar5 + uVar9) = 0;
      }
    }
    else {
      _memcpy(puVar5,puVar6,uVar9 + 1);
    }
    *(byte *)((long)param_1 + uVar7) = 1;
  }
  else {
    if (uVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)(param_1,param_2,uVar7 + 1);
      return param_1;
    }
    (**(code **)(lVar13 + 0x20))(param_1,param_2,lVar2);
    *(byte *)((long)param_1 + uVar7) = 0;
  }
  return param_1;
}



/* Entry: 1040f9674; end: 1040f97e3;  */

int FUN_1040f9674(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  
  uVar8 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(long *)(param_3 + 0x10),PTR___sSciTL_11034fea8,
             PTR___s7ElementSciTl_11034fb58);
  uVar1 = *(uint *)(*(long *)(lVar4 + -8) + 0x50) & 0xf8;
  uVar6 = *(ulong *)(*(long *)(lVar4 + -8) + 0x40);
  if (uVar6 < 9) {
    uVar6 = 8;
  }
  lVar4 = uVar6 + ((ulong)(uVar1 + 0xf & (uVar1 ^ 0xffffffff)) & 0x1f8);
  if (uVar8 < lVar4 + 1U) {
    uVar8 = lVar4 + 1;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 0xfe) goto LAB_1040f977c;
  uVar6 = uVar8 + 1;
  uVar5 = (uint)uVar6;
  uVar1 = uVar5 << 3;
  if (uVar5 < 4) {
    uVar7 = ((param_2 + ~(-1 << (ulong)(uVar1 & 0x1f))) - 0xfd >> (ulong)(uVar1 & 0x1f)) + 1;
    if (uVar7 < 0x100) {
      if (uVar7 < 2) goto LAB_1040f977c;
      goto LAB_1040f9708;
    }
    if (uVar7 >> 0x10 == 0) {
      uVar7 = (uint)*(ushort *)((long)param_1 + uVar6);
    }
    else {
      uVar7 = *(uint *)((long)param_1 + uVar6);
    }
  }
  else {
LAB_1040f9708:
    uVar7 = (uint)*(byte *)((long)param_1 + uVar6);
  }
  if (uVar7 != 0) {
    uVar2 = 0;
    if (uVar5 < 4) {
      uVar2 = uVar7 - 1 << (ulong)(uVar1 & 0x1f);
    }
    if (uVar5 != 0) {
      uVar1 = 4;
      if (uVar5 < 4) {
        uVar1 = uVar5;
      }
      if ((int)uVar1 < 3) {
        if (uVar1 == 1) {
          uVar6 = (ulong)(byte)*param_1;
        }
        else {
          uVar6 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar1 == 3) {
        uVar6 = (ulong)(uint3)*param_1;
      }
      else {
        uVar6 = (ulong)*param_1;
      }
    }
    return ((uint)uVar6 | uVar2) + 0xfe;
  }
LAB_1040f977c:
  iVar3 = 0;
  if (2 < *(byte *)((long)param_1 + uVar8)) {
    iVar3 = (*(byte *)((long)param_1 + uVar8) ^ 0xff) + 1;
  }
  return iVar3;
}



/* Entry: 1040f97e4; end: 1040f99d3;  */

void FUN_1040f97e4(uint *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  undefined2 uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  byte bVar8;
  
  uVar6 = *(ulong *)(*(long *)(*(long *)(param_4 + 0x10) + -8) + 0x40);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x18),*(long *)(param_4 + 0x10),PTR___sSciTL_11034fea8,
             PTR___s7ElementSciTl_11034fb58);
  uVar5 = *(uint *)(*(long *)(lVar3 + -8) + 0x50) & 0xf8;
  uVar4 = *(ulong *)(*(long *)(lVar3 + -8) + 0x40);
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  lVar3 = uVar4 + ((ulong)(uVar5 + 0xf & (uVar5 ^ 0xffffffff)) & 0x1f8);
  if (uVar6 < lVar3 + 1U) {
    uVar6 = lVar3 + 1;
  }
  lVar3 = uVar6 + 1;
  uVar5 = (uint)lVar3;
  if (param_3 < 0xfe) {
    bVar8 = 0;
  }
  else if (uVar5 < 4) {
    uVar1 = ((param_3 + ~(-1 << (ulong)(uVar5 << 3 & 0x1f))) - 0xfd >> (ulong)(uVar5 << 3 & 0x1f)) +
            1;
    bVar8 = 2;
    if (0xffff < uVar1) {
      bVar8 = 4;
    }
    if (uVar1 < 0x100) {
      bVar8 = 1 < uVar1;
    }
  }
  else {
    bVar8 = 1;
  }
  if (param_2 < 0xfe) {
    if (bVar8 < 2) {
      if (bVar8 != 0) {
        *(undefined1 *)((long)param_1 + lVar3) = 0;
      }
    }
    else if (bVar8 == 2) {
      *(undefined2 *)((long)param_1 + lVar3) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar3) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + uVar6) = -(char)param_2;
    }
  }
  else {
    param_2 = param_2 - 0xfe;
    if (uVar5 < 4) {
      iVar7 = (param_2 >> (ulong)(uVar5 << 3 & 0x1f)) + 1;
      if (uVar5 != 0) {
        uVar1 = param_2 & (-1 << (ulong)(uVar5 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,lVar3);
        uVar2 = (undefined2)uVar1;
        if (uVar5 == 3) {
          *(undefined2 *)param_1 = uVar2;
          *(char *)((long)param_1 + 2) = (char)(uVar1 >> 0x10);
        }
        else if (uVar5 == 2) {
          *(undefined2 *)param_1 = uVar2;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,lVar3);
      *param_1 = param_2;
      iVar7 = 1;
    }
    if (bVar8 < 2) {
      if (bVar8 != 0) {
        *(char *)((long)param_1 + lVar3) = (char)iVar7;
      }
    }
    else if (bVar8 == 2) {
      *(short *)((long)param_1 + lVar3) = (short)iVar7;
    }
    else {
      *(int *)((long)param_1 + lVar3) = iVar7;
    }
  }
  return;
}



/* Entry: 1040f99d4; end: 1040f9abf;  */

uint FUN_1040f99d4(uint *param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  
  uVar7 = *(ulong *)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 0x40);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x18),*(long *)(param_2 + 0x10),PTR___sSciTL_11034fea8,
             PTR___s7ElementSciTl_11034fb58);
  uVar2 = *(uint *)(*(long *)(lVar3 + -8) + 0x50) & 0xf8;
  uVar5 = *(ulong *)(*(long *)(lVar3 + -8) + 0x40);
  if (uVar5 < 9) {
    uVar5 = 8;
  }
  lVar3 = uVar5 + ((ulong)(uVar2 + 0xf & (uVar2 ^ 0xffffffff)) & 0x1f8);
  if (uVar7 < lVar3 + 1U) {
    uVar7 = lVar3 + 1;
  }
  bVar1 = *(byte *)((long)param_1 + uVar7);
  uVar2 = (uint)bVar1;
  if (1 < bVar1) {
    uVar4 = (uint)uVar7;
    uVar6 = 4;
    if (uVar4 < 4) {
      uVar6 = uVar4;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) {
        return uVar2;
      }
      uVar6 = (uint)(byte)*param_1;
    }
    else if (uVar6 == 2) {
      uVar6 = (uint)(ushort)*param_1;
    }
    else if (uVar6 == 3) {
      uVar6 = (uint)(uint3)*param_1;
    }
    else {
      uVar6 = *param_1;
    }
    uVar2 = uVar6 | bVar1 - 2 << (ulong)((uVar4 & 3) << 3);
    if (3 < uVar4) {
      uVar2 = uVar6;
    }
    uVar2 = uVar2 + 2;
  }
  return uVar2;
}



/* Entry: 1040f9ac0; end: 1040f9ac3;  */

void FUN_1040f9ac0(void)

{
  return;
}


