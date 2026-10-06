/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10410141c; end: 1041015a3;  */

undefined8 * FUN_10410141c(undefined8 *param_1,uint *param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  
  lVar1 = *(long *)(param_3 + 0x10);
  lVar9 = *(long *)(lVar1 + -8);
  uVar10 = *(ulong *)(lVar9 + 0x40);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),lVar1,PTR___sSciTL_11034fea8,
             PTR___s7ElementSciTl_11034fb58);
  uVar4 = *(ulong *)(*(long *)(lVar3 + -8) + 0x40);
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  if (uVar10 < uVar4 + 1) {
    uVar10 = uVar4 + 1;
  }
  bVar2 = *(byte *)((long)param_2 + uVar10);
  uVar5 = (uint)bVar2;
  if (1 < bVar2) {
    uVar8 = (uint)uVar10;
    uVar6 = 4;
    if (uVar8 < 4) {
      uVar6 = uVar8;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_1041014f8;
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
    uVar5 = uVar6 | bVar2 - 2 << (ulong)((uVar8 & 3) << 3);
    if (3 < uVar8) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 2;
  }
LAB_1041014f8:
  if (uVar5 == 1) {
    if (*(byte *)((long)param_2 + uVar4) < 2) {
      if (*(byte *)((long)param_2 + uVar4) == 1) {
        uVar7 = *(undefined8 *)param_2;
        _swift_errorRetain(uVar7);
        *param_1 = uVar7;
        *(undefined1 *)((long)param_1 + uVar4) = 1;
      }
      else {
        (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1,param_2,lVar3);
        *(undefined1 *)((long)param_1 + uVar4) = 0;
      }
    }
    else {
      _memcpy(param_1);
    }
    *(undefined1 *)((long)param_1 + uVar10) = 1;
  }
  else {
    if (uVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)(param_1,param_2,uVar10 + 1);
      return param_1;
    }
    (**(code **)(lVar9 + 0x10))(param_1,param_2,lVar1);
    *(undefined1 *)((long)param_1 + uVar10) = 0;
  }
  return param_1;
}



/* Entry: 1041015a4; end: 10410181b;  */

uint * FUN_1041015a4(uint *param_1,uint *param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar1 = *(long *)(param_3 + 0x10);
  lVar12 = *(long *)(lVar1 + -8);
  uVar11 = *(ulong *)(lVar12 + 0x40);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),lVar1,PTR___sSciTL_11034fea8,
             PTR___s7ElementSciTl_11034fb58);
  lVar13 = *(long *)(lVar3 + -8);
  uVar5 = *(ulong *)(lVar13 + 0x40);
  if (uVar5 < 9) {
    uVar5 = 8;
  }
  if (uVar11 < uVar5 + 1) {
    uVar11 = uVar5 + 1;
  }
  bVar2 = *(byte *)((long)param_1 + uVar11);
  uVar7 = (uint)bVar2;
  uVar10 = (uint)uVar11;
  if (1 < bVar2) {
    uVar8 = 4;
    if (uVar10 < 4) {
      uVar8 = uVar10;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_104101690;
      uVar8 = (uint)(byte)*param_1;
    }
    else if (uVar8 == 2) {
      uVar8 = (uint)(ushort)*param_1;
    }
    else if (uVar8 == 3) {
      uVar8 = (uint)(uint3)*param_1;
    }
    else {
      uVar8 = *param_1;
    }
    uVar7 = uVar8 | bVar2 - 2 << (ulong)((uVar10 & 3) << 3);
    if (3 < uVar10) {
      uVar7 = uVar8;
    }
    uVar7 = uVar7 + 2;
  }
LAB_104101690:
  if (uVar7 == 1) {
    if (*(byte *)((long)param_1 + uVar5) < 2) {
      if (*(byte *)((long)param_1 + uVar5) != 1) {
        pcVar6 = *(code **)(lVar13 + 8);
        lVar4 = lVar3;
        goto LAB_1041016a8;
      }
      _swift_errorRelease(*(undefined8 *)param_1);
    }
  }
  else if (uVar7 == 0) {
    pcVar6 = *(code **)(lVar12 + 8);
    lVar4 = lVar1;
LAB_1041016a8:
    (*pcVar6)(param_1,lVar4);
  }
  bVar2 = *(byte *)((long)param_2 + uVar11);
  uVar7 = (uint)bVar2;
  if (1 < bVar2) {
    uVar8 = 4;
    if (uVar10 < 4) {
      uVar8 = uVar10;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_10410173c;
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
    uVar7 = uVar8 | bVar2 - 2 << (ulong)((uVar10 & 3) << 3);
    if (3 < uVar10) {
      uVar7 = uVar8;
    }
    uVar7 = uVar7 + 2;
  }
LAB_10410173c:
  if (uVar7 == 1) {
    if (*(byte *)((long)param_2 + uVar5) < 2) {
      if (*(byte *)((long)param_2 + uVar5) == 1) {
        uVar9 = *(undefined8 *)param_2;
        _swift_errorRetain(uVar9);
        *(undefined8 *)param_1 = uVar9;
        *(byte *)((long)param_1 + uVar5) = 1;
      }
      else {
        (**(code **)(lVar13 + 0x10))(param_1,param_2,lVar3);
        *(byte *)((long)param_1 + uVar5) = 0;
      }
    }
    else {
      _memcpy(param_1,param_2,uVar5 + 1);
    }
    *(byte *)((long)param_1 + uVar11) = 1;
  }
  else {
    if (uVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)(param_1,param_2,uVar11 + 1);
      return param_1;
    }
    (**(code **)(lVar12 + 0x10))(param_1,param_2,lVar1);
    *(byte *)((long)param_1 + uVar11) = 0;
  }
  return param_1;
}



/* Entry: 10410181c; end: 10410199b;  */

undefined8 * FUN_10410181c(undefined8 *param_1,uint *param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  
  lVar1 = *(long *)(param_3 + 0x10);
  lVar8 = *(long *)(lVar1 + -8);
  uVar9 = *(ulong *)(lVar8 + 0x40);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),lVar1,PTR___sSciTL_11034fea8,
             PTR___s7ElementSciTl_11034fb58);
  uVar4 = *(ulong *)(*(long *)(lVar3 + -8) + 0x40);
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  if (uVar9 < uVar4 + 1) {
    uVar9 = uVar4 + 1;
  }
  bVar2 = *(byte *)((long)param_2 + uVar9);
  uVar5 = (uint)bVar2;
  if (1 < bVar2) {
    uVar7 = (uint)uVar9;
    uVar6 = 4;
    if (uVar7 < 4) {
      uVar6 = uVar7;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_1041018f8;
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
    uVar5 = uVar6 | bVar2 - 2 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 2;
  }
LAB_1041018f8:
  if (uVar5 == 1) {
    if (*(byte *)((long)param_2 + uVar4) < 2) {
      if (*(byte *)((long)param_2 + uVar4) == 1) {
        *param_1 = *(undefined8 *)param_2;
        *(undefined1 *)((long)param_1 + uVar4) = 1;
      }
      else {
        (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1,param_2,lVar3);
        *(undefined1 *)((long)param_1 + uVar4) = 0;
      }
    }
    else {
      _memcpy(param_1);
    }
    *(undefined1 *)((long)param_1 + uVar9) = 1;
  }
  else {
    if (uVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)(param_1,param_2,uVar9 + 1);
      return param_1;
    }
    (**(code **)(lVar8 + 0x20))(param_1,param_2,lVar1);
    *(undefined1 *)((long)param_1 + uVar9) = 0;
  }
  return param_1;
}



/* Entry: 10410199c; end: 104101c0b;  */

uint * FUN_10410199c(uint *param_1,uint *param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar1 = *(long *)(param_3 + 0x10);
  lVar11 = *(long *)(lVar1 + -8);
  uVar10 = *(ulong *)(lVar11 + 0x40);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),lVar1,PTR___sSciTL_11034fea8,
             PTR___s7ElementSciTl_11034fb58);
  lVar12 = *(long *)(lVar3 + -8);
  uVar5 = *(ulong *)(lVar12 + 0x40);
  if (uVar5 < 9) {
    uVar5 = 8;
  }
  if (uVar10 < uVar5 + 1) {
    uVar10 = uVar5 + 1;
  }
  bVar2 = *(byte *)((long)param_1 + uVar10);
  uVar7 = (uint)bVar2;
  uVar9 = (uint)uVar10;
  if (1 < bVar2) {
    uVar8 = 4;
    if (uVar9 < 4) {
      uVar8 = uVar9;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_104101a88;
      uVar8 = (uint)(byte)*param_1;
    }
    else if (uVar8 == 2) {
      uVar8 = (uint)(ushort)*param_1;
    }
    else if (uVar8 == 3) {
      uVar8 = (uint)(uint3)*param_1;
    }
    else {
      uVar8 = *param_1;
    }
    uVar7 = uVar8 | bVar2 - 2 << (ulong)((uVar9 & 3) << 3);
    if (3 < uVar9) {
      uVar7 = uVar8;
    }
    uVar7 = uVar7 + 2;
  }
LAB_104101a88:
  if (uVar7 == 1) {
    if (*(byte *)((long)param_1 + uVar5) < 2) {
      if (*(byte *)((long)param_1 + uVar5) != 1) {
        pcVar6 = *(code **)(lVar12 + 8);
        lVar4 = lVar3;
        goto LAB_104101aa0;
      }
      _swift_errorRelease(*(undefined8 *)param_1);
    }
  }
  else if (uVar7 == 0) {
    pcVar6 = *(code **)(lVar11 + 8);
    lVar4 = lVar1;
LAB_104101aa0:
    (*pcVar6)(param_1,lVar4);
  }
  bVar2 = *(byte *)((long)param_2 + uVar10);
  uVar7 = (uint)bVar2;
  if (1 < bVar2) {
    uVar8 = 4;
    if (uVar9 < 4) {
      uVar8 = uVar9;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_104101b34;
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
    uVar7 = uVar8 | bVar2 - 2 << (ulong)((uVar9 & 3) << 3);
    if (3 < uVar9) {
      uVar7 = uVar8;
    }
    uVar7 = uVar7 + 2;
  }
LAB_104101b34:
  if (uVar7 == 1) {
    if (*(byte *)((long)param_2 + uVar5) < 2) {
      if (*(byte *)((long)param_2 + uVar5) == 1) {
        *(undefined8 *)param_1 = *(undefined8 *)param_2;
        *(byte *)((long)param_1 + uVar5) = 1;
      }
      else {
        (**(code **)(lVar12 + 0x20))(param_1,param_2,lVar3);
        *(byte *)((long)param_1 + uVar5) = 0;
      }
    }
    else {
      _memcpy(param_1,param_2,uVar5 + 1);
    }
    *(byte *)((long)param_1 + uVar10) = 1;
  }
  else {
    if (uVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)(param_1,param_2,uVar10 + 1);
      return param_1;
    }
    (**(code **)(lVar11 + 0x20))(param_1,param_2,lVar1);
    *(byte *)((long)param_1 + uVar10) = 0;
  }
  return param_1;
}



/* Entry: 104101c0c; end: 104101d63;  */

int FUN_104101c0c(uint *param_1,uint param_2,long param_3)

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
  uVar6 = *(ulong *)(*(long *)(lVar4 + -8) + 0x40);
  if (uVar6 < 9) {
    uVar6 = 8;
  }
  if (uVar8 < uVar6 + 1) {
    uVar8 = uVar6 + 1;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 0xfe) goto LAB_104101cfc;
  uVar6 = uVar8 + 1;
  uVar5 = (uint)uVar6;
  uVar2 = uVar5 << 3;
  if (uVar5 < 4) {
    uVar7 = ((param_2 + ~(-1 << (ulong)(uVar2 & 0x1f))) - 0xfd >> (ulong)(uVar2 & 0x1f)) + 1;
    if (uVar7 < 0x100) {
      if (uVar7 < 2) goto LAB_104101cfc;
      goto LAB_104101c88;
    }
    if (uVar7 >> 0x10 == 0) {
      uVar7 = (uint)*(ushort *)((long)param_1 + uVar6);
    }
    else {
      uVar7 = *(uint *)((long)param_1 + uVar6);
    }
  }
  else {
LAB_104101c88:
    uVar7 = (uint)*(byte *)((long)param_1 + uVar6);
  }
  if (uVar7 != 0) {
    uVar1 = 0;
    if (uVar5 < 4) {
      uVar1 = uVar7 - 1 << (ulong)(uVar2 & 0x1f);
    }
    if (uVar5 != 0) {
      uVar2 = 4;
      if (uVar5 < 4) {
        uVar2 = uVar5;
      }
      if ((int)uVar2 < 3) {
        if (uVar2 == 1) {
          uVar6 = (ulong)(byte)*param_1;
        }
        else {
          uVar6 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar2 == 3) {
        uVar6 = (ulong)(uint3)*param_1;
      }
      else {
        uVar6 = (ulong)*param_1;
      }
    }
    return ((uint)uVar6 | uVar1) + 0xfe;
  }
LAB_104101cfc:
  iVar3 = 0;
  if (2 < *(byte *)((long)param_1 + uVar8)) {
    iVar3 = (*(byte *)((long)param_1 + uVar8) ^ 0xff) + 1;
  }
  return iVar3;
}



/* Entry: 104101d64; end: 104101f3b;  */

void FUN_104101d64(uint *param_1,uint param_2,uint param_3,long param_4)

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
  uVar4 = *(ulong *)(*(long *)(lVar3 + -8) + 0x40);
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  if (uVar6 < uVar4 + 1) {
    uVar6 = uVar4 + 1;
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



/* Entry: 104101f3c; end: 10410200f;  */

uint FUN_104101f3c(uint *param_1,long param_2)

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
  uVar5 = *(ulong *)(*(long *)(lVar3 + -8) + 0x40);
  if (uVar5 < 9) {
    uVar5 = 8;
  }
  if (uVar7 < uVar5 + 1) {
    uVar7 = uVar5 + 1;
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



/* Entry: 104102010; end: 104102013;  */

void FUN_104102010(void)

{
  return;
}



/* Entry: 104102014; end: 104102163;  */

void FUN_104102014(uint *param_1,uint param_2,long param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (param_2 < 2) {
    lVar2 = *(long *)(param_3 + 0x10);
    lVar1 = 0;
    _swift_getAssociatedTypeWitness
              (0,*(undefined8 *)(param_3 + 0x18),lVar2,PTR___sSciTL_11034fea8,
               PTR___s7ElementSciTl_11034fb58);
    uVar4 = *(ulong *)(*(long *)(lVar1 + -8) + 0x40);
    if (uVar4 < 9) {
      uVar4 = 8;
    }
    uVar5 = *(ulong *)(*(long *)(lVar2 + -8) + 0x40);
    if (uVar5 < uVar4 + 1) {
      uVar5 = uVar4 + 1;
    }
    *(char *)((long)param_1 + uVar5) = (char)param_2;
  }
  else {
    uVar5 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40);
    lVar2 = 0;
    _swift_getAssociatedTypeWitness
              (0,*(undefined8 *)(param_3 + 0x18),*(long *)(param_3 + 0x10),PTR___sSciTL_11034fea8,
               PTR___s7ElementSciTl_11034fb58);
    uVar4 = *(ulong *)(*(long *)(lVar2 + -8) + 0x40);
    if (uVar4 < 9) {
      uVar4 = 8;
    }
    if (uVar5 < uVar4 + 1) {
      uVar5 = uVar4 + 1;
    }
    param_2 = param_2 - 2;
    uVar3 = (uint)uVar5;
    if (uVar3 < 4) {
      *(char *)((long)param_1 + uVar5) = (char)(param_2 >> (ulong)(uVar3 << 3 & 0x1f)) + '\x02';
      if (uVar3 == 0) {
        return;
      }
      param_2 = param_2 & (-1 << (ulong)(uVar3 << 3 & 0x1f) ^ 0xffffffffU);
    }
    else {
      *(undefined1 *)((long)param_1 + uVar5) = 2;
    }
    if (3 < uVar3) {
      uVar3 = 4;
    }
    _bzero(param_1);
    if ((int)uVar3 < 3) {
      if (uVar3 == 1) {
        *(char *)param_1 = (char)param_2;
      }
      else {
        *(short *)param_1 = (short)param_2;
      }
    }
    else if (uVar3 == 3) {
      *(short *)param_1 = (short)param_2;
      *(char *)((long)param_1 + 2) = (char)(param_2 >> 0x10);
    }
    else {
      *param_1 = param_2;
    }
  }
  return;
}



/* Entry: 104102164; end: 10410216b;  */

void FUN_104102164(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 10410216c; end: 1041021b7;  */

undefined8 * FUN_10410216c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_retain();
  _swift_release(uVar1);
  param_1[1] = param_2[1];
  return param_1;
}



/* Entry: 1041021b8; end: 1041021f3;  */

undefined8 * FUN_1041021b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_release(uVar1);
  param_1[1] = param_2[1];
  return param_1;
}



/* Entry: 1041021f4; end: 1041023db;  */

int FUN_1041021f4(ulong *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + 0x7fffffff;
  }
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



/* Entry: 1041023dc; end: 10410241f;  */

void FUN_1041023dc(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = PTR___sBoWV_11034d678 + 0x40;
  _swift_initClassMetadata2(param_1,0,1,&puStack_18,param_1 + 0x60);
  return;
}



/* Entry: 104102420; end: 10410243f;  */

void FUN_104102420(undefined8 param_1)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 **)(unaff_x22 + 0x18) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x20) = *unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104102440,0,0);
  return;
}



/* Entry: 104102440; end: 10410251f;  */

void FUN_104102440(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x20);
  plVar1 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x28) = plVar1;
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar5 + 0x58),*(undefined8 *)(lVar5 + 0x50),PTR___sSciTL_11034fea8
             ,PTR___s7ElementSciTl_11034fb58);
  uVar4 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  uVar3 = 0xff;
  __ss6ResultOMa(0xff,uVar2,uVar4,PTR___ss5ErrorWS_11034ee10);
  uVar4 = 0;
  __sSqMa(0,uVar3);
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_104102520;
                    /* WARNING: Could not recover jumptable at 0x00010410251c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)&UNK_10396896c)
            (*(undefined8 *)(unaff_x22 + 0x10),&UNK_10dcd7c08,*(undefined8 *)(unaff_x22 + 0x18),
             FUN_104103934,*(undefined8 *)(unaff_x22 + 0x18),0,0,uVar4);
  return;
}



/* Entry: 104102520; end: 104102603;  */

void FUN_104102520(void)

{
  long unaff_x20;
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x28));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000104102570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 104102604; end: 1041028a3;  */

void FUN_104102604(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x38);
  lVar1 = *(long *)(unaff_x22 + 0x40);
  lVar2 = *(long *)(unaff_x22 + 0x30);
  lVar5 = *(long *)(unaff_x22 + 0x18);
  uVar9 = *(undefined8 *)(lVar5 + 0x10);
  uVar3 = 0;
  FUN_1040fc668(0,*(undefined8 *)(unaff_x22 + 0x20),*(undefined8 *)(unaff_x22 + 0x28));
  FUN_104146aa0(uVar4,FUN_104103938,lVar5,uVar9,uVar3,uVar8);
  (**(code **)(lVar1 + 0x10))(uVar7,uVar4,uVar8);
  (**(code **)(*(long *)(lVar2 + -8) + 0x30))(uVar7,1,lVar2);
  if ((int)uVar7 != 1) {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar7 = uVar8;
    _swift_getEnumCaseMultiPayload(uVar8,*(undefined8 *)(unaff_x22 + 0x30));
    if ((int)uVar7 == 0) {
      __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                ("Fatal error",0xb,2,0xd000000000000016,0x800000010f1eddb0,
                 "AsyncAlgorithms/UnboundedBufferStorage.swift",0x2c,2,0x27,0);
      return;
    }
    if ((int)uVar7 == 1) {
      uVar7 = *(undefined8 *)(unaff_x22 + 0x20);
      uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x10);
      (**(code **)(*(long *)(unaff_x22 + 0x40) + 8))
                (*(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x38));
      uVar3 = 0xff;
      _swift_getAssociatedTypeWitness
                (0xff,uVar4,uVar7,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
      uVar7 = 0x112d393f0;
      func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
      uVar4 = 0xff;
      __ss6ResultOMa(0xff,uVar3,uVar7,PTR___ss5ErrorWS_11034ee10);
      lVar5 = 0;
      __sSqMa(0,uVar4);
      (**(code **)(*(long *)(lVar5 + -8) + 0x20))(uVar9,uVar8,lVar5);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x48);
      _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x50));
      _swift_task_dealloc(uVar7);
                    /* WARNING: Could not recover jumptable at 0x000104102770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x28);
  plVar6 = (long *)0x70;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x58) = plVar6;
  uVar4 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar8,uVar7,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  uVar7 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  uVar8 = 0xff;
  __ss6ResultOMa(0xff,uVar4,uVar7,PTR___ss5ErrorWS_11034ee10);
  uVar7 = 0;
  __sSqMa(0,uVar8);
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1041028a4;
                    /* WARNING: Could not recover jumptable at 0x00010410283c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_104167d8c(*(undefined8 *)(unaff_x22 + 0x10),0,0,FUN_104103950,
                *(undefined8 *)(unaff_x22 + 0x18),uVar7);
  return;
}



/* Entry: 1041028a4; end: 104102937;  */

void FUN_1041028a4(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x1041028ec,0,0);
  return;
}



/* Entry: 104102938; end: 104102b27;  */

void FUN_104102938(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar4;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plStack_70;
  undefined8 uStack_68;
  
  lVar7 = *(long *)(*param_3 + 0x50);
  lVar8 = *(long *)(lVar7 + -8);
  plStack_70 = param_3;
  uStack_68 = param_1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar9 = (long)&plStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar5 = *(undefined8 *)(extraout_x12 + 0x58);
  lVar1 = 0;
  FUN_1040ff130(0,lVar7,uVar5);
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar10 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar10 - extraout_x12_00;
  FUN_1040fc668(0,lVar7,uVar5);
  func_0x0001040fde84(lVar11);
  (**(code **)(lVar6 + 0x10))(lVar10,lVar11,lVar1);
  lVar2 = lVar10;
  _swift_getEnumCaseMultiPayload(lVar10,lVar1);
  uVar5 = uStack_68;
  if ((int)lVar2 == 0) {
    (**(code **)(lVar8 + 0x20))(lVar9,lVar10,lVar7);
    FUN_104102b28(param_2,lVar9);
    (**(code **)(lVar8 + 8))(lVar9,lVar7);
    (**(code **)(lVar6 + 8))(lVar11,lVar1);
    pcVar4 = *(code **)(lVar6 + 0x38);
    uVar3 = 1;
    uVar5 = uStack_68;
  }
  else {
    if ((int)lVar2 == 1) {
      (**(code **)(lVar6 + 0x20))(uStack_68,lVar11,lVar1);
      (**(code **)(lVar6 + 0x38))(uVar5,0,1,lVar1);
      (**(code **)(lVar6 + 8))(lVar10,lVar1);
      return;
    }
    (**(code **)(lVar6 + 0x20))(uStack_68,lVar11,lVar1);
    pcVar4 = *(code **)(lVar6 + 0x38);
    uVar3 = 0;
  }
  (*pcVar4)(uVar5,uVar3,1,lVar1);
  return;
}



/* Entry: 104102b28; end: 104102eeb;  */

void FUN_104102b28(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long extraout_x8;
  ulong uVar5;
  long lVar6;
  long *unaff_x20;
  ulong uVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar11 = *unaff_x20;
  lVar6 = *(long *)(lVar11 + 0x50);
  lVar12 = *(long *)(lVar6 + -8);
  lVar9 = *(long *)(lVar12 + 0x40);
  uStack_68 = param_1;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar8 = auStack_70 + -(lVar9 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  __sScPMa();
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))((long)puVar8 - extraout_x8,1,1,lVar1);
  (**(code **)(lVar12 + 0x10))(puVar8,param_2,lVar6);
  uVar5 = (ulong)*(byte *)(lVar12 + 0x50);
  uVar13 = uVar5 + 0x30 & (uVar5 ^ 0xffffffffffffffff);
  uVar7 = lVar9 + uVar13 + 7 & 0xfffffffffffffff8;
  puVar2 = &UNK_110747198;
  _swift_allocObject(&UNK_110747198,uVar7 + 8,uVar5 | 7);
  *(undefined8 *)(puVar2 + 0x10) = 0;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  *(long *)(puVar2 + 0x20) = lVar6;
  uVar10 = *(undefined8 *)(lVar11 + 0x58);
  *(undefined8 *)(puVar2 + 0x28) = uVar10;
  (**(code **)(lVar12 + 0x20))(puVar2 + uVar13,puVar8,lVar6);
  *(long **)(puVar2 + uVar7) = unaff_x20;
  _swift_retain();
  uVar3 = 0;
  func_0x0001000abba4(0,0,(long)puVar8 - extraout_x8,&UNK_10dcd7c20,puVar2);
  uVar4 = 0;
  FUN_1040fc668(0,lVar6,uVar10);
  FUN_1040fd424(uVar3,uVar4);
  _swift_release(uVar3);
  return;
}



/* Entry: 104102eec; end: 10410306f;  */

void FUN_104102eec(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long extraout_x8;
  long *unaff_x20;
  long lVar7;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x50);
  uVar2 = *(undefined8 *)(*unaff_x20 + 0x58);
  uVar3 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar2,uVar1,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  uVar6 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar4 = 0xff;
  __ss6ResultOMa(0xff,uVar3,uVar6,PTR___ss5ErrorWS_11034ee10);
  lVar5 = 0;
  __sSqMa(0,lVar4);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = unaff_x20[2];
  uVar6 = 0;
  uStack_70 = uVar1;
  uStack_68 = uVar2;
  FUN_1040fc668(0,uVar1,uVar2);
  uVar3 = 0;
  func_0x0001041022bc(0,uVar1,uVar2);
  FUN_104146aa0(&lStack_60,FUN_10410385c,auStack_80,lVar7,uVar6,uVar3);
  if (lStack_60 != 0) {
    __sScT6cancelyyF(lStack_60,PTR___sytN_11034f1b0 + 8,PTR___ss5NeverON_11034ee88,
                     PTR___ss5NeverOs5ErrorsWP_11034ee90);
    if (lStack_58 != 0) {
      (**(code **)(*(long *)(lVar4 + -8) + 0x38))(auStack_90 + -extraout_x8,1,1,lVar4);
      func_0x000103969044(auStack_90 + -extraout_x8,lStack_58,lVar5);
    }
    _swift_release(lStack_60);
  }
  return;
}



/* Entry: 104103070; end: 104103243;  */

void FUN_104103070(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 in_x3;
  long *in_x4;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = in_x3;
  *(long **)(unaff_x22 + 0x98) = in_x4;
  lVar7 = *in_x4;
  uVar9 = *(undefined8 *)(lVar7 + 0x58);
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar9;
  lVar8 = *(long *)(lVar7 + 0x50);
  *(long *)(unaff_x22 + 0xa8) = lVar8;
  puVar1 = PTR___sSciTL_11034fea8;
  lVar7 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar9,lVar8,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  *(long *)(unaff_x22 + 0xb0) = lVar7;
  uVar2 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar3 = 0xff;
  __ss6ResultOMa(0xff,lVar7,uVar2,PTR___ss5ErrorWS_11034ee10);
  *(long *)(unaff_x22 + 0xb8) = lVar3;
  lVar4 = 0;
  __sSqMa(0,lVar3);
  *(long *)(unaff_x22 + 0xc0) = lVar4;
  uVar5 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 200) = uVar5;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0xd0) = lVar3;
  uVar5 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xd8) = uVar5;
  lVar3 = 0;
  FUN_104100438(0,lVar8,uVar9);
  *(long *)(unaff_x22 + 0xe0) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0xe8) = lVar3;
  uVar5 = *(long *)(lVar3 + 0x40) + 0xf;
  uVar6 = uVar5 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xf0) = uVar6;
  uVar5 = uVar5 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xf8) = uVar5;
  lVar3 = *(long *)(lVar7 + -8);
  *(long *)(unaff_x22 + 0x100) = lVar3;
  uVar5 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x108) = uVar5;
  lVar3 = 0;
  __sSqMa(0,lVar7);
  uVar5 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x110) = uVar5;
  lVar7 = *(long *)(lVar8 + -8);
  *(long *)(unaff_x22 + 0x118) = lVar7;
  uVar5 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x120) = uVar5;
  lVar7 = 0;
  _swift_getAssociatedTypeWitness(0,uVar9,lVar8,puVar1,PTR___s13AsyncIteratorSciTl_11034fb50);
  *(long *)(unaff_x22 + 0x128) = lVar7;
  lVar7 = *(long *)(lVar7 + -8);
  *(long *)(unaff_x22 + 0x130) = lVar7;
  uVar5 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x138) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104103244,0,0);
  return;
}



/* Entry: 104103244; end: 10410330b;  */

void FUN_104103244(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
  lVar2 = *(long *)(unaff_x22 + 0x98);
  (**(code **)(*(long *)(unaff_x22 + 0x118) + 0x10))
            (*(undefined8 *)(unaff_x22 + 0x120),*(undefined8 *)(unaff_x22 + 0x90),uVar1);
  __sSci17makeAsyncIterator0bC0QzyFTj(uVar5,uVar1,uVar3);
  *(undefined8 *)(unaff_x22 + 0x140) = *(undefined8 *)(lVar2 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa0);
  _swift_getAssociatedConformanceWitness
            (uVar3,*(undefined8 *)(unaff_x22 + 0xa8),*(undefined8 *)(unaff_x22 + 0x128),
             PTR___sSciTL_11034fea8,PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
  plVar4 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x148) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10410330c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)
            (plVar4,*(undefined8 *)(unaff_x22 + 0x110),*(undefined8 *)(unaff_x22 + 0x128),uVar3);
  return;
}



/* Entry: 10410330c; end: 104103367;  */

void FUN_10410330c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x150) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x148));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_104103368;
  }
  else {
    pcVar1 = FUN_1041036cc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 104103368; end: 1041036cb;  */

void FUN_104103368(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long unaff_x22;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x110);
  lVar12 = *(long *)(unaff_x22 + 0x100);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar4 = uVar8;
  (**(code **)(lVar12 + 0x30))(uVar8,1,uVar11);
  if ((int)uVar4 == 1) {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x140);
    uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar11 = *(undefined8 *)(unaff_x22 + 0xa8);
    (**(code **)(*(long *)(unaff_x22 + 0x130) + 8))
              (*(undefined8 *)(unaff_x22 + 0x138),*(undefined8 *)(unaff_x22 + 0x128));
    *(undefined8 *)(unaff_x22 + 0x80) = uVar11;
    *(undefined8 *)(unaff_x22 + 0x88) = uVar4;
    uVar5 = 0;
    FUN_1040fc668(0,uVar11,uVar4);
    uVar6 = 0;
    func_0x0001040ff2a0(0,uVar11,uVar4);
    FUN_104146aa0(unaff_x22 + 0x68,FUN_104103ad8,unaff_x22 + 0x70,uVar8,uVar5,uVar6);
    uVar9 = *(ulong *)(unaff_x22 + 0x68);
    if (1 < uVar9) {
      uVar4 = *(undefined8 *)(unaff_x22 + 200);
      uVar8 = *(undefined8 *)(unaff_x22 + 0xc0);
      (**(code **)(*(long *)(unaff_x22 + 0xd0) + 0x38))(uVar4,1,1,*(undefined8 *)(unaff_x22 + 0xb8))
      ;
      func_0x000103969044(uVar4,uVar9,uVar8);
    }
    uVar6 = *(undefined8 *)(unaff_x22 + 0x120);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x108);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x110);
    uVar8 = *(undefined8 *)(unaff_x22 + 0xf0);
    uVar5 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar13 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar15 = *(undefined8 *)(unaff_x22 + 200);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x138));
    _swift_task_dealloc(uVar6);
    _swift_task_dealloc(uVar11);
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar8);
    _swift_task_dealloc(uVar13);
    _swift_task_dealloc(uVar15);
                    /* WARNING: Could not recover jumptable at 0x0001041034c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar10 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar15 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xe0);
  lVar1 = *(long *)(unaff_x22 + 0xe8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa8);
  (**(code **)(lVar12 + 0x20))(uVar14,uVar8,uVar11);
  *(undefined8 *)(unaff_x22 + 0x50) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x58) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar14;
  uVar8 = 0;
  FUN_1040fc668(0,uVar3,uVar13);
  FUN_104146aa0(uVar15,FUN_104103b28,unaff_x22 + 0x40,uVar10,uVar8,uVar5);
  (**(code **)(lVar1 + 0x10))(uVar4,uVar15,uVar5);
  uVar8 = 0xff;
  __sSccMa(0xff,uVar2,PTR___ss5NeverON_11034ee88,PTR___ss5NeverOs5ErrorsWP_11034ee90);
  lVar12 = 0;
  _swift_getTupleTypeMetadata2(0,uVar8,uVar6,"continuation result ",0);
  (**(code **)(*(long *)(lVar12 + -8) + 0x30))(uVar4,1,lVar12);
  if ((int)uVar4 != 1) {
    lVar1 = *(long *)(unaff_x22 + 0xd0);
    uVar8 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar4 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar11 = *(undefined8 *)(unaff_x22 + 200);
    uVar5 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar6 = **(undefined8 **)(unaff_x22 + 0xf0);
    (**(code **)(lVar1 + 0x20))
              (uVar8,(long)*(undefined8 **)(unaff_x22 + 0xf0) + (long)*(int *)(lVar12 + 0x30),uVar5)
    ;
    (**(code **)(lVar1 + 0x10))(uVar11,uVar8,uVar5);
    (**(code **)(lVar1 + 0x38))(uVar11,0,1,uVar5);
    func_0x000103969044(uVar11,uVar6,uVar4);
    (**(code **)(lVar1 + 8))(uVar8,uVar5);
  }
  lVar12 = *(long *)(unaff_x22 + 0x100);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xb0);
  (**(code **)(*(long *)(unaff_x22 + 0xe8) + 8))
            (*(undefined8 *)(unaff_x22 + 0xf8),*(undefined8 *)(unaff_x22 + 0xe0));
  (**(code **)(lVar12 + 8))(uVar4,uVar8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
  _swift_getAssociatedConformanceWitness
            (uVar4,*(undefined8 *)(unaff_x22 + 0xa8),*(undefined8 *)(unaff_x22 + 0x128),
             PTR___sSciTL_11034fea8,PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
  plVar7 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x148) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_10410330c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)
            (plVar7,*(undefined8 *)(unaff_x22 + 0x110),*(undefined8 *)(unaff_x22 + 0x128),uVar4);
  return;
}



/* Entry: 1041036cc; end: 104103827;  */

void FUN_1041036cc(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa8);
  (**(code **)(*(long *)(unaff_x22 + 0x130) + 8))
            (*(undefined8 *)(unaff_x22 + 0x138),*(undefined8 *)(unaff_x22 + 0x128));
  *(undefined8 *)(unaff_x22 + 0x20) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar8;
  uVar8 = 0;
  FUN_1040fc668(0,uVar4,uVar1);
  uVar6 = 0;
  func_0x0001040ff2a0(0,uVar4,uVar1);
  FUN_104146aa0(unaff_x22 + 0x38,FUN_104103a84,unaff_x22 + 0x10,uVar3,uVar8,uVar6);
  lVar7 = *(long *)(unaff_x22 + 0x38);
  if ((lVar7 == 0) || (lVar7 == 1)) {
    _swift_errorRelease();
  }
  else {
    puVar2 = *(undefined8 **)(unaff_x22 + 200);
    lVar5 = *(long *)(unaff_x22 + 0xd0);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xc0);
    *puVar2 = *(undefined8 *)(unaff_x22 + 0x150);
    _swift_storeEnumTagMultiPayload(puVar2,uVar1,1);
    (**(code **)(lVar5 + 0x38))(puVar2,0,1,uVar1);
    func_0x000103969044(puVar2,lVar7,uVar3);
  }
  uVar6 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar10 = *(undefined8 *)(unaff_x22 + 200);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x138));
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar10);
                    /* WARNING: Could not recover jumptable at 0x000104103824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 104103828; end: 10410384f;  */

void FUN_104103828(void)

{
  long unaff_x20;
  
  FUN_104102eec();
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 104103850; end: 10410385b;  */

void FUN_104103850(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e7f0968);
  return;
}



/* Entry: 10410385c; end: 1041038a3;  */

void FUN_10410385c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = 0;
  FUN_1040fc668(0,uVar2,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x0001040fe9a4();
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Entry: 1041038a4; end: 1041038f7;  */

void FUN_1041038a4(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *unaff_x20;
  long unaff_x22;
  
  plVar4 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1041038f8;
  plVar4[2] = param_1;
  plVar4[3] = (long)unaff_x20;
  lVar5 = *unaff_x20;
  plVar4[4] = *(long *)(lVar5 + 0x50);
  plVar4[5] = *(long *)(lVar5 + 0x58);
  lVar5 = 0xff;
  FUN_1040ff130();
  plVar4[6] = lVar5;
  lVar1 = 0;
  __sSqMa(0,lVar5);
  plVar4[7] = lVar1;
  lVar5 = *(long *)(lVar1 + -8);
  plVar4[8] = lVar5;
  uVar3 = *(long *)(lVar5 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[9] = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[10] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104102604,0,0);
  return;
}



/* Entry: 1041038f8; end: 104103933;  */

void FUN_1041038f8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000104103930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 104103934; end: 104103937;  */

void FUN_104103934(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long extraout_x8;
  long lVar7;
  long *unaff_x20;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x50);
  uVar2 = *(undefined8 *)(*unaff_x20 + 0x58);
  uVar3 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar2,uVar1,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  uVar6 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar4 = 0xff;
  __ss6ResultOMa(0xff,uVar3,uVar6,PTR___ss5ErrorWS_11034ee10);
  lVar5 = 0;
  __sSqMa(0,lVar4);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = unaff_x20[2];
  uVar6 = 0;
  uStack_70 = uVar1;
  uStack_68 = uVar2;
  FUN_1040fc668(0,uVar1,uVar2);
  uVar3 = 0;
  func_0x0001041022bc(0,uVar1,uVar2);
  FUN_104146aa0(&lStack_60,FUN_10410385c,auStack_80,lVar7,uVar6,uVar3);
  if (lStack_60 != 0) {
    __sScT6cancelyyF(lStack_60,PTR___sytN_11034f1b0 + 8,PTR___ss5NeverON_11034ee88,
                     PTR___ss5NeverOs5ErrorsWP_11034ee90);
    if (lStack_58 != 0) {
      (**(code **)(*(long *)(lVar4 + -8) + 0x38))(auStack_90 + -extraout_x8,1,1,lVar4);
      func_0x000103969044(auStack_90 + -extraout_x8,lStack_58,lVar5);
    }
    _swift_release(lStack_60);
  }
  return;
}



/* Entry: 104103938; end: 10410394f;  */

void FUN_104103938(void)

{
  FUN_104102938();
  return;
}



/* Entry: 104103950; end: 104103957;  */

void FUN_104103950(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long lVar9;
  long *unaff_x20;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_b0 [8];
  undefined1 *puStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x50);
  uVar2 = *(undefined8 *)(*unaff_x20 + 0x58);
  uVar4 = 0xff;
  uStack_a0 = param_1;
  _swift_getAssociatedTypeWitness
            (0xff,uVar2,uVar1,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  uVar8 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  uVar5 = 0xff;
  __ss6ResultOMa(0xff,uVar4,uVar8,PTR___ss5ErrorWS_11034ee10);
  lVar6 = 0;
  __sSqMa(0,uVar5);
  lVar9 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puStack_a8 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = (long)(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  lVar7 = 0;
  FUN_104101018(0,uVar1,uVar2);
  lVar10 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar14 = lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar14 - extraout_x12_00;
  lVar12 = unaff_x20[2];
  uStack_70 = uStack_a0;
  uVar8 = 0;
  uStack_80 = uVar1;
  uStack_78 = uVar2;
  FUN_1040fc668(0,uVar1,uVar2);
  FUN_104146aa0(lVar13,FUN_104103958,auStack_90,lVar12,uVar8,lVar7);
  (**(code **)(lVar10 + 0x10))(lVar14,lVar13,lVar7);
  lVar12 = lVar14;
  (**(code **)(lVar9 + 0x30))(lVar14,1,lVar6);
  if ((int)lVar12 != 1) {
    (**(code **)(lVar9 + 0x20))(lVar11,lVar14,lVar6);
    puVar3 = puStack_a8;
    (**(code **)(lVar9 + 0x10))(puStack_a8,lVar11,lVar6);
    func_0x000103969044(puVar3,uStack_a0,lVar6);
    (**(code **)(lVar9 + 8))(lVar11,lVar6);
  }
  (**(code **)(lVar10 + 8))(lVar13,lVar7);
  return;
}



/* Entry: 104103958; end: 1041039ab;  */

void FUN_104103958(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = 0;
  FUN_1040fc668(0,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  func_0x0001040fe414(param_1,uVar2,uVar1);
  return;
}



/* Entry: 1041039ac; end: 104103a47;  */

void FUN_1041039ac(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long unaff_x20;
  long unaff_x22;
  long *plVar11;
  
  lVar7 = *(long *)(*(long *)(unaff_x20 + 0x20) + -8);
  uVar8 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar8 = uVar8 + 0x30 & (uVar8 ^ 0xffffffffffffffff);
  plVar11 = *(long **)(unaff_x20 + (*(long *)(lVar7 + 0x40) + uVar8 + 7 & 0xffffffffffffff8));
  plVar6 = (long *)0x160;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_104103a48;
  plVar6[0x12] = unaff_x20 + uVar8;
  plVar6[0x13] = (long)plVar11;
  lVar7 = *plVar11;
  lVar10 = *(long *)(lVar7 + 0x58);
  plVar6[0x14] = lVar10;
  lVar9 = *(long *)(lVar7 + 0x50);
  plVar6[0x15] = lVar9;
  puVar1 = PTR___sSciTL_11034fea8;
  lVar7 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,lVar10,lVar9,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  plVar6[0x16] = lVar7;
  uVar2 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar3 = 0xff;
  __ss6ResultOMa(0xff,lVar7,uVar2,PTR___ss5ErrorWS_11034ee10);
  plVar6[0x17] = lVar3;
  lVar4 = 0;
  __sSqMa(0,lVar3);
  plVar6[0x18] = lVar4;
  uVar8 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[0x19] = uVar8;
  lVar3 = *(long *)(lVar3 + -8);
  plVar6[0x1a] = lVar3;
  uVar8 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[0x1b] = uVar8;
  lVar3 = 0;
  FUN_104100438(0,lVar9,lVar10);
  plVar6[0x1c] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar6[0x1d] = lVar3;
  uVar8 = *(long *)(lVar3 + 0x40) + 0xf;
  uVar5 = uVar8 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[0x1e] = uVar5;
  uVar8 = uVar8 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[0x1f] = uVar8;
  lVar3 = *(long *)(lVar7 + -8);
  plVar6[0x20] = lVar3;
  uVar8 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[0x21] = uVar8;
  lVar3 = 0;
  __sSqMa(0,lVar7);
  uVar8 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[0x22] = uVar8;
  lVar7 = *(long *)(lVar9 + -8);
  plVar6[0x23] = lVar7;
  uVar8 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[0x24] = uVar8;
  lVar7 = 0;
  _swift_getAssociatedTypeWitness(0,lVar10,lVar9,puVar1,PTR___s13AsyncIteratorSciTl_11034fb50);
  plVar6[0x25] = lVar7;
  lVar7 = *(long *)(lVar7 + -8);
  plVar6[0x26] = lVar7;
  uVar8 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[0x27] = uVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104103244,0,0);
  return;
}



/* Entry: 104103a48; end: 104103a83;  */

void FUN_104103a48(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000104103a80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 104103a84; end: 104103ad7;  */

void FUN_104103a84(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = 0;
  FUN_1040fc668(0,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  func_0x0001040fdbb0(uVar2,uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 104103ad8; end: 104103b27;  */

void FUN_104103ad8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = 0;
  FUN_1040fc668(0,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  uVar2 = 0;
  func_0x0001040fdbb0(0,uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 104103b28; end: 104103b7b;  */

void FUN_104103b28(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = 0;
  FUN_1040fc668(0,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  func_0x0001040fd604(param_1,uVar2,uVar1);
  return;
}



/* Entry: 104103b7c; end: 104103c93;  */

void FUN_104103b7c(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long *unaff_x20;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_70 [12];
  undefined4 uStack_64;
  
  lVar3 = *(long *)(*unaff_x20 + 0x50);
  lVar7 = *(long *)(lVar3 + -8);
  uStack_64 = param_3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar4 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar5 = *(undefined8 *)(extraout_x12 + 0x58);
  lVar1 = 0;
  FUN_1040fc668(0,lVar3,uVar5);
  lVar2 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)puVar4 - extraout_x8_00;
  (**(code **)(lVar7 + 0x10))(puVar4,param_1,lVar3);
  FUN_1040fd390(lVar6,puVar4,param_2,uStack_64,lVar3,uVar5);
  lVar3 = lVar6;
  FUN_104146c54(lVar6,lVar1);
  (**(code **)(lVar2 + 8))(lVar6,lVar1);
  unaff_x20[2] = lVar3;
  return;
}



/* Entry: 104103c94; end: 104103ce3;  */

void FUN_104103c94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_allocObject();
  FUN_104103b7c(param_1,param_2,param_3);
  return;
}



/* Entry: 104103ce4; end: 104103d33;  */

long * FUN_104103ce4(void)

{
  long lVar1;
  undefined *puVar2;
  long *unaff_x20;
  
  _swift_allocObject();
  lVar1 = *(long *)(*unaff_x20 + 0x50);
  puVar2 = PTR___ss5NeverON_11034ee88;
  FUN_104109bd8(lVar1,PTR___ss5NeverON_11034ee88,PTR___ss5NeverOs5ErrorsWP_11034ee90);
  unaff_x20[2] = lVar1;
  unaff_x20[3] = (long)puVar2;
  return unaff_x20;
}



/* Entry: 104103d34; end: 104103d53;  */

void FUN_104103d34(undefined8 param_1)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 **)(unaff_x22 + 0x18) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x20) = *unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104103d54,0,0);
  return;
}



/* Entry: 104103d54; end: 104103dcb;  */

void FUN_104103d54(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x20);
  lVar1 = *(long *)(*(long *)(unaff_x22 + 0x18) + 0x10);
  lVar2 = *(long *)(*(long *)(unaff_x22 + 0x18) + 0x18);
  plVar4 = (long *)0x110;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x28) = plVar4;
  lVar5 = *(long *)(lVar5 + 0x50);
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_104103dcc;
  puVar3 = PTR___ss5NeverOs5ErrorsWP_11034ee90;
  lVar6 = *(long *)(unaff_x22 + 0x10);
  plVar4[0x1d] = (long)PTR___ss5NeverON_11034ee88;
  plVar4[0x1e] = (long)puVar3;
  plVar4[0x1b] = lVar2;
  plVar4[0x1c] = lVar5;
  plVar4[0x19] = lVar6;
  plVar4[0x1a] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104109cc0,0,0);
  return;
}



/* Entry: 104103dcc; end: 104103e07;  */

void FUN_104103dcc(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x000104103e04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 104103e08; end: 104103e3b;  */

undefined1  [16] FUN_104103e08(void)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  auVar2 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  _swift_retain(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10));
  _swift_retain(uVar1);
  return auVar2;
}



/* Entry: 104103e3c; end: 104103e57;  */

void FUN_104103e3c(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104103e58,0,0);
  return;
}



/* Entry: 104103e58; end: 104103ecf;  */

void FUN_104103e58(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x18);
  lVar7 = **(long **)(unaff_x22 + 0x20);
  lVar1 = (*(long **)(unaff_x22 + 0x20))[1];
  plVar4 = (long *)0x140;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x28) = plVar4;
  lVar10 = *(long *)(lVar5 + 0x10);
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_104103ed0;
  puVar3 = PTR___ss5NeverOs5ErrorsWP_11034ee90;
  puVar2 = PTR___ss5NeverON_11034ee88;
  lVar5 = *(long *)(unaff_x22 + 0x10);
  plVar4[0x1b] = (long)PTR___ss5NeverON_11034ee88;
  plVar4[0x1c] = (long)puVar3;
  plVar4[0x19] = lVar1;
  plVar4[0x1a] = lVar10;
  plVar4[0x17] = lVar5;
  plVar4[0x18] = lVar7;
  lVar5 = 0xff;
  __sSqMa(0xff,lVar10);
  plVar4[0x1d] = lVar5;
  uVar6 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar7 = 0;
  __ss6ResultOMa(0,lVar5,uVar6,PTR___ss5ErrorWS_11034ee10);
  plVar4[0x1e] = lVar7;
  lVar5 = *(long *)(lVar7 + -8);
  plVar4[0x1f] = lVar5;
  uVar8 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0x20] = uVar8;
  lVar5 = 0;
  FUN_104109518(0,lVar10,puVar2,puVar3);
  plVar4[0x21] = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  plVar4[0x22] = lVar5;
  uVar8 = *(long *)(lVar5 + 0x40) + 0xf;
  uVar9 = uVar8 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0x23] = uVar9;
  uVar8 = uVar8 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0x24] = uVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10410a130,0,0);
  return;
}



/* Entry: 104103ed0; end: 104103f33;  */

void FUN_104103ed0(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(long *)(lVar1 + 0x30) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x28));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_104103f34,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000104103f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 104103f34; end: 104103f4f;  */

void FUN_104103f34(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unexpectedError_11034f528)
            (*(undefined8 *)(unaff_x22 + 0x30),"AsyncAlgorithms/AsyncChannel.swift",0x22,1,0x39);
  return;
}



/* Entry: 104103f50; end: 104103faf;  */

void FUN_104103f50(long param_1,long param_2)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_104103fb0;
  plVar1[3] = param_2;
  plVar1[4] = unaff_x20;
  plVar1[2] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104103e58,0,0);
  return;
}



/* Entry: 104103fb0; end: 104103fef;  */

void FUN_104103fb0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000104103fec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 104103ff0; end: 104104073;  */

void FUN_104103ff0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)(ulong)*(uint *)(
                                   PTR___sScIsE4next9isolation7ElementQzSgScA_pSgYi_tYa7FailureQzYKFTu_11034fc58
                                   + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_104104074;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScIsE4next9isolation7ElementQzSgScA_pSgYi_tYa7FailureQzYKF_11034fc50)
            (plVar1,param_1,param_2,param_3,param_5,param_6);
  return;
}



/* Entry: 104104074; end: 1041040b7;  */

void FUN_104104074(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001041040b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1041040b8; end: 1041040eb;  */

void FUN_1041040b8(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1041040ec; end: 104104107;  */

undefined * FUN_1041040ec(void)

{
  return PTR___ss5NeverOs5ErrorsWP_11034ee90;
}



/* Entry: 104104108; end: 104104147;  */

void FUN_104104108(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *unaff_x20;
  FUN_104103e08();
  _swift_release(uVar1);
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



/* Entry: 104104148; end: 10410414b;  */

void FUN_104104148(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 10410414c; end: 10410418b;  */

void FUN_10410414c(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = &UNK_10dcd7ce8;
  _swift_initClassMetadata2(param_1,0,1,&puStack_18,param_1 + 0x58);
  return;
}



/* Entry: 10410418c; end: 10410419f;  */

void FUN_10410418c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e7f09c4);
  return;
}



/* Entry: 1041041a0; end: 1041041fb;  */

void FUN_1041041a0(undefined8 *param_1)

{
  _swift_release(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1[1]);
  return;
}



/* Entry: 1041041fc; end: 104104257;  */

undefined8 * FUN_1041041fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_retain();
  _swift_release(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_retain();
  _swift_release(uVar1);
  return param_1;
}



/* Entry: 104104258; end: 104104293;  */

undefined8 * FUN_104104258(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_release(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_release(uVar1);
  return param_1;
}



/* Entry: 104104294; end: 10410432b;  */

int FUN_104104294(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10410432c; end: 10410436f;  */

long * FUN_10410432c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  
  _swift_allocObject();
  lVar3 = *unaff_x20;
  lVar1 = *(long *)(lVar3 + 0x50);
  lVar2 = *(long *)(lVar3 + 0x58);
  FUN_104109bd8(lVar1,lVar2,*(undefined8 *)(lVar3 + 0x60));
  unaff_x20[2] = lVar1;
  unaff_x20[3] = lVar2;
  return unaff_x20;
}



/* Entry: 104104370; end: 10410438f;  */

void FUN_104104370(undefined8 param_1)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 **)(unaff_x22 + 0x18) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x20) = *unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104104390,0,0);
  return;
}



/* Entry: 104104390; end: 1041043fb;  */

void FUN_104104390(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long unaff_x22;
  
  lVar6 = *(long *)(unaff_x22 + 0x20);
  lVar1 = *(long *)(*(long *)(unaff_x22 + 0x18) + 0x10);
  lVar3 = *(long *)(*(long *)(unaff_x22 + 0x18) + 0x18);
  plVar5 = (long *)0x110;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x28) = plVar5;
  lVar2 = *(long *)(lVar6 + 0x50);
  lVar4 = *(long *)(lVar6 + 0x58);
  lVar6 = *(long *)(lVar6 + 0x60);
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1041043fc;
  lVar7 = *(long *)(unaff_x22 + 0x10);
  plVar5[0x1d] = lVar4;
  plVar5[0x1e] = lVar6;
  plVar5[0x1b] = lVar3;
  plVar5[0x1c] = lVar2;
  plVar5[0x19] = lVar7;
  plVar5[0x1a] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104109cc0,0,0);
  return;
}



/* Entry: 1041043fc; end: 104104437;  */

void FUN_1041043fc(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x000104104434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 104104438; end: 10410446b;  */

undefined1  [16] FUN_104104438(void)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  auVar2 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  _swift_retain(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10));
  _swift_retain(uVar1);
  return auVar2;
}



/* Entry: 10410446c; end: 104104487;  */

void FUN_10410446c(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104104488,0,0);
  return;
}



/* Entry: 104104488; end: 1041044f3;  */

void FUN_104104488(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x18);
  lVar7 = **(long **)(unaff_x22 + 0x20);
  lVar2 = (*(long **)(unaff_x22 + 0x20))[1];
  plVar4 = (long *)0x140;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x28) = plVar4;
  lVar1 = *(long *)(lVar5 + 0x10);
  lVar3 = *(long *)(lVar5 + 0x18);
  lVar10 = *(long *)(lVar5 + 0x20);
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1041044f4;
  lVar5 = *(long *)(unaff_x22 + 0x10);
  plVar4[0x1b] = lVar3;
  plVar4[0x1c] = lVar10;
  plVar4[0x19] = lVar2;
  plVar4[0x1a] = lVar1;
  plVar4[0x17] = lVar5;
  plVar4[0x18] = lVar7;
  lVar5 = 0xff;
  __sSqMa(0xff,lVar1);
  plVar4[0x1d] = lVar5;
  uVar6 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar7 = 0;
  __ss6ResultOMa(0,lVar5,uVar6,PTR___ss5ErrorWS_11034ee10);
  plVar4[0x1e] = lVar7;
  lVar5 = *(long *)(lVar7 + -8);
  plVar4[0x1f] = lVar5;
  uVar8 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0x20] = uVar8;
  lVar5 = 0;
  FUN_104109518(0,lVar1,lVar3,lVar10);
  plVar4[0x21] = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  plVar4[0x22] = lVar5;
  uVar8 = *(long *)(lVar5 + 0x40) + 0xf;
  uVar9 = uVar8 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0x23] = uVar9;
  uVar8 = uVar8 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0x24] = uVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10410a130,0,0);
  return;
}



/* Entry: 1041044f4; end: 10410452f;  */

void FUN_1041044f4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010410452c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 104104530; end: 10410458f;  */

void FUN_104104530(long param_1,long param_2)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x30;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_104104590;
  plVar1[3] = param_2;
  plVar1[4] = unaff_x20;
  plVar1[2] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104104488,0,0);
  return;
}



/* Entry: 104104590; end: 1041045cb;  */

void FUN_104104590(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001041045c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1041045cc; end: 104104657;  */

void FUN_1041045cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_4;
  plVar1 = (long *)(ulong)*(uint *)(
                                   PTR___sScIsE4next9isolation7ElementQzSgScA_pSgYi_tYa7FailureQzYKFTu_11034fc58
                                   + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_104104658;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScIsE4next9isolation7ElementQzSgScA_pSgYi_tYa7FailureQzYKF_11034fc50)
            (plVar1,param_1,param_2,param_3,param_5,param_6,unaff_x22 + 0x10);
  return;
}



/* Entry: 104104658; end: 1041046ab;  */

void FUN_104104658(void)

{
  code *UNRECOVERED_JUMPTABLE;
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x20));
  if (unaff_x20 == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 8);
  }
  else {
    **(undefined8 **)(lVar1 + 0x18) = *(undefined8 *)(lVar1 + 0x10);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001041046a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1041046ac; end: 1041046df;  */

void FUN_1041046ac(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1041046e0; end: 1041046fb;  */

undefined * FUN_1041046e0(void)

{
  return PTR___ss5ErrorWS_11034ee10;
}



/* Entry: 1041046fc; end: 10410473b;  */

void FUN_1041046fc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *unaff_x20;
  FUN_104104438();
  _swift_release(uVar1);
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



/* Entry: 10410473c; end: 10410473f;  */

void FUN_10410473c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 104104740; end: 10410477f;  */

void FUN_104104740(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = &UNK_10dcd7e08;
  _swift_initClassMetadata2(param_1,0,1,&puStack_18,param_1 + 0x68);
  return;
}



/* Entry: 104104780; end: 104104793;  */

void FUN_104104780(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e7f0a44);
  return;
}



/* Entry: 104104794; end: 1041047ef;  */

void FUN_104104794(undefined8 *param_1)

{
  _swift_release(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1[1]);
  return;
}



/* Entry: 1041047f0; end: 10410484b;  */

undefined8 * FUN_1041047f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_retain();
  _swift_release(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_retain();
  _swift_release(uVar1);
  return param_1;
}



/* Entry: 10410484c; end: 104104887;  */

undefined8 * FUN_10410484c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_release(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_release(uVar1);
  return param_1;
}



/* Entry: 104104888; end: 10410491f;  */

int FUN_104104888(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 104104920; end: 104104947;  */

void FUN_104104920(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  __ss6HasherV8_combineyys6UInt64VF(param_1,*unaff_x20);
  return;
}



/* Entry: 104104948; end: 10410495b;  */

bool FUN_104104948(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10410495c; end: 104104a23;  */

void FUN_10410495c(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  
  lVar1 = 0;
  __sSqMa();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(*(long *)(param_3 + -8) + 0x38))(&stack0xffffffffffffffb0 + -extraout_x8,1,1,param_3)
  ;
  *param_1 = param_2;
  param_1[1] = 0;
  lVar2 = 0;
  FUN_104105e68(0,param_3,param_4,param_5);
  (**(code **)(lVar3 + 0x20))
            ((long)param_1 + (long)*(int *)(lVar2 + 0x30),&stack0xffffffffffffffb0 + -extraout_x8,
             lVar1);
  return;
}



/* Entry: 104104a24; end: 104104a63;  */

void FUN_104104a24(void)

{
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyys6UInt64VF(*unaff_x20);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104104a64; end: 104104a6b;  */

void FUN_104104a64(void)

{
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyys6UInt64VF(*unaff_x20);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104104a6c; end: 104104aab;  */

void FUN_104104a6c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_104104920(auStack_68,param_2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104104aac; end: 104104abb;  */

bool FUN_104104aac(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 104104abc; end: 104104adf;  */

void FUN_104104abc(undefined8 param_1,undefined8 param_2)

{
  __ss6HasherV8_combineyys6UInt64VF(param_2);
  return;
}



/* Entry: 104104ae0; end: 104104aeb;  */

bool FUN_104104ae0(long param_1,undefined8 param_2,long param_3)

{
  return param_1 == param_3;
}



/* Entry: 104104aec; end: 104104b2f;  */

void FUN_104104aec(undefined8 param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyys6UInt64VF(param_1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104104b30; end: 104104b57;  */

void FUN_104104b30(long param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC
            (auStack_68,0,unaff_x20[1],*(undefined8 *)(param_1 + 0x10),
             *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  __ss6HasherV8_combineyys6UInt64VF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104104b58; end: 104104b9f;  */

void FUN_104104b58(undefined8 param_1,long param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_104104abc(auStack_68,*unaff_x20,unaff_x20[1],*(undefined8 *)(param_2 + 0x10),
                *(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20));
  __ss6HasherV9_finalizeSiyF();
  return;
}


