/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101a1f384; end: 101a1f3e3;  */

void FUN_101a1f384(long param_1,long param_2)

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



/* Entry: 101a1f3e4; end: 101a1f47b;  */

undefined8 FUN_101a1f3e4(void)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x000101a1f418();
  return unaff_x20;
}



/* Entry: 101a1f47c; end: 101a1f487;  */

void FUN_101a1f47c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e667d74);
  return;
}



/* Entry: 101a1f488; end: 101a1f4df;  */

void FUN_101a1f488(void)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar2 = *unaff_x20;
  func_0x000107c61170(unaff_x20[2]);
  lVar3 = *(long *)(*unaff_x20 + 0x60);
  lVar1 = 0;
  func_0x000107c60188(0,*(undefined8 *)(lVar2 + 0x50));
  (**(code **)(*(long *)(lVar1 + -8) + 8))((long)unaff_x20 + lVar3,lVar1);
  return;
}



/* Entry: 101a1f4e0; end: 101a1f503;  */

void FUN_101a1f4e0(void)

{
  FUN_101a1f488();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a1f504; end: 101a1f507;  */

void FUN_101a1f504(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 101a1f508; end: 101a1f58f;  */

void FUN_101a1f508(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_38 = PTR___sBOWV_11034d658 + 0x40;
  uVar2 = *(ulong *)(param_1 + 0x50);
  lVar1 = 0x13f;
  func_0x000107c60188();
  if (uVar2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &UNK_10d9b7ef0;
    func_0x000107c61524(param_1,0,3,&puStack_38,param_1 + 0x58);
  }
  return;
}



/* Entry: 101a1f590; end: 101a1f5a3;  */

void FUN_101a1f590(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e667d24);
  return;
}



/* Entry: 101a1f5a4; end: 101a1f72f;  */

void FUN_101a1f5a4(long param_1)

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
    lStack_28 = lStack_30;
    func_0x000107c61528(param_1,0,2,&lStack_30);
  }
  return;
}



/* Entry: 101a1f730; end: 101a1f7c3;  */

void FUN_101a1f730(uint *param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  
  lVar2 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  lVar4 = *(long *)(lVar2 + 0x40);
  bVar1 = *(byte *)((long)param_1 + lVar4);
  uVar5 = (uint)bVar1;
  if (1 < bVar1) {
    uVar3 = (uint)lVar4;
    uVar6 = 4;
    if (uVar3 < 4) {
      uVar6 = uVar3;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_101a1f7b0;
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
    uVar5 = uVar6 | bVar1 - 2 << (ulong)((uVar3 & 3) << 3);
    if (3 < uVar3) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 2;
  }
LAB_101a1f7b0:
  if (uVar5 < 2) {
                    /* WARNING: Could not recover jumptable at 0x000101a1f7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
  return;
}



/* Entry: 101a1f7c4; end: 101a1f8a3;  */

long FUN_101a1f7c4(long param_1,uint *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  
  lVar2 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  lVar6 = *(long *)(lVar2 + 0x40);
  bVar1 = *(byte *)((long)param_2 + lVar6);
  uVar3 = (uint)bVar1;
  if (1 < bVar1) {
    uVar5 = (uint)lVar6;
    uVar4 = 4;
    if (uVar5 < 4) {
      uVar4 = uVar5;
    }
    if ((int)uVar4 < 2) {
      if (uVar4 == 0) goto LAB_101a1f850;
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
    uVar3 = uVar4 | bVar1 - 2 << (ulong)((uVar5 & 3) << 3);
    if (3 < uVar5) {
      uVar3 = uVar4;
    }
    uVar3 = uVar3 + 2;
  }
LAB_101a1f850:
  if (uVar3 == 1) {
    (**(code **)(lVar2 + 0x10))();
    *(undefined1 *)(param_1 + lVar6) = 1;
  }
  else {
    if (uVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)(param_1,param_2,lVar6 + 1);
      return param_1;
    }
    (**(code **)(lVar2 + 0x10))();
    *(undefined1 *)(param_1 + lVar6) = 0;
  }
  return param_1;
}



/* Entry: 101a1f8a4; end: 101a1fa47;  */

uint * FUN_101a1f8a4(uint *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar4 = *(long *)(param_3 + 0x10);
  lVar7 = *(long *)(lVar4 + -8);
  lVar6 = *(long *)(lVar7 + 0x40);
  bVar1 = *(byte *)((long)param_1 + lVar6);
  uVar2 = (uint)bVar1;
  uVar5 = (uint)lVar6;
  if (1 < bVar1) {
    uVar3 = 4;
    if (uVar5 < 4) {
      uVar3 = uVar5;
    }
    if ((int)uVar3 < 2) {
      if (uVar3 == 0) goto LAB_101a1f940;
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
    uVar2 = uVar3 | bVar1 - 2 << (ulong)((uVar5 & 3) << 3);
    if (3 < uVar5) {
      uVar2 = uVar3;
    }
    uVar2 = uVar2 + 2;
  }
LAB_101a1f940:
  if (uVar2 < 2) {
    (**(code **)(lVar7 + 8))(param_1,lVar4);
  }
  bVar1 = *(byte *)((long)param_2 + lVar6);
  uVar2 = (uint)bVar1;
  if (1 < bVar1) {
    uVar3 = 4;
    if (uVar5 < 4) {
      uVar3 = uVar5;
    }
    if ((int)uVar3 < 2) {
      if (uVar3 == 0) goto LAB_101a1f9d8;
      uVar3 = (uint)(byte)*param_2;
    }
    else if (uVar3 == 2) {
      uVar3 = (uint)(ushort)*param_2;
    }
    else if (uVar3 == 3) {
      uVar3 = (uint)(uint3)*param_2;
    }
    else {
      uVar3 = *param_2;
    }
    uVar2 = uVar3 | bVar1 - 2 << (ulong)((uVar5 & 3) << 3);
    if (3 < uVar5) {
      uVar2 = uVar3;
    }
    uVar2 = uVar2 + 2;
  }
LAB_101a1f9d8:
  if (uVar2 == 1) {
    (**(code **)(lVar7 + 0x10))(param_1,param_2,lVar4);
    *(byte *)((long)param_1 + lVar6) = 1;
  }
  else {
    if (uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)(param_1,param_2,lVar6 + 1);
      return param_1;
    }
    (**(code **)(lVar7 + 0x10))(param_1,param_2,lVar4);
    *(byte *)((long)param_1 + lVar6) = 0;
  }
  return param_1;
}



/* Entry: 101a1fa48; end: 101a1fb27;  */

long FUN_101a1fa48(long param_1,uint *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  
  lVar2 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  lVar6 = *(long *)(lVar2 + 0x40);
  bVar1 = *(byte *)((long)param_2 + lVar6);
  uVar3 = (uint)bVar1;
  if (1 < bVar1) {
    uVar5 = (uint)lVar6;
    uVar4 = 4;
    if (uVar5 < 4) {
      uVar4 = uVar5;
    }
    if ((int)uVar4 < 2) {
      if (uVar4 == 0) goto LAB_101a1fad4;
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
    uVar3 = uVar4 | bVar1 - 2 << (ulong)((uVar5 & 3) << 3);
    if (3 < uVar5) {
      uVar3 = uVar4;
    }
    uVar3 = uVar3 + 2;
  }
LAB_101a1fad4:
  if (uVar3 == 1) {
    (**(code **)(lVar2 + 0x20))();
    *(undefined1 *)(param_1 + lVar6) = 1;
  }
  else {
    if (uVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)(param_1,param_2,lVar6 + 1);
      return param_1;
    }
    (**(code **)(lVar2 + 0x20))();
    *(undefined1 *)(param_1 + lVar6) = 0;
  }
  return param_1;
}



/* Entry: 101a1fb28; end: 101a1fccb;  */

uint * FUN_101a1fb28(uint *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar4 = *(long *)(param_3 + 0x10);
  lVar7 = *(long *)(lVar4 + -8);
  lVar6 = *(long *)(lVar7 + 0x40);
  bVar1 = *(byte *)((long)param_1 + lVar6);
  uVar2 = (uint)bVar1;
  uVar5 = (uint)lVar6;
  if (1 < bVar1) {
    uVar3 = 4;
    if (uVar5 < 4) {
      uVar3 = uVar5;
    }
    if ((int)uVar3 < 2) {
      if (uVar3 == 0) goto LAB_101a1fbc4;
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
    uVar2 = uVar3 | bVar1 - 2 << (ulong)((uVar5 & 3) << 3);
    if (3 < uVar5) {
      uVar2 = uVar3;
    }
    uVar2 = uVar2 + 2;
  }
LAB_101a1fbc4:
  if (uVar2 < 2) {
    (**(code **)(lVar7 + 8))(param_1,lVar4);
  }
  bVar1 = *(byte *)((long)param_2 + lVar6);
  uVar2 = (uint)bVar1;
  if (1 < bVar1) {
    uVar3 = 4;
    if (uVar5 < 4) {
      uVar3 = uVar5;
    }
    if ((int)uVar3 < 2) {
      if (uVar3 == 0) goto LAB_101a1fc5c;
      uVar3 = (uint)(byte)*param_2;
    }
    else if (uVar3 == 2) {
      uVar3 = (uint)(ushort)*param_2;
    }
    else if (uVar3 == 3) {
      uVar3 = (uint)(uint3)*param_2;
    }
    else {
      uVar3 = *param_2;
    }
    uVar2 = uVar3 | bVar1 - 2 << (ulong)((uVar5 & 3) << 3);
    if (3 < uVar5) {
      uVar2 = uVar3;
    }
    uVar2 = uVar2 + 2;
  }
LAB_101a1fc5c:
  if (uVar2 == 1) {
    (**(code **)(lVar7 + 0x20))(param_1,param_2,lVar4);
    *(byte *)((long)param_1 + lVar6) = 1;
  }
  else {
    if (uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)(param_1,param_2,lVar6 + 1);
      return param_1;
    }
    (**(code **)(lVar7 + 0x20))(param_1,param_2,lVar4);
    *(byte *)((long)param_1 + lVar6) = 0;
  }
  return param_1;
}



/* Entry: 101a1fccc; end: 101a1fdc3;  */

int FUN_101a1fccc(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar6 = *(long *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40);
  if (param_2 < 0xfe) goto LAB_101a1fd68;
  uVar5 = lVar6 + 1;
  uVar3 = (uint)uVar5;
  uVar4 = uVar3 << 3;
  if (uVar3 < 4) {
    uVar7 = ((param_2 + ~(-1 << (ulong)(uVar4 & 0x1f))) - 0xfd >> (ulong)(uVar4 & 0x1f)) + 1;
    if (uVar7 < 0x100) {
      if (uVar7 < 2) goto LAB_101a1fd68;
      goto LAB_101a1fcf4;
    }
    if (uVar7 >> 0x10 == 0) {
      uVar7 = (uint)*(ushort *)((long)param_1 + uVar5);
    }
    else {
      uVar7 = *(uint *)((long)param_1 + uVar5);
    }
  }
  else {
LAB_101a1fcf4:
    uVar7 = (uint)*(byte *)((long)param_1 + uVar5);
  }
  if (uVar7 != 0) {
    uVar1 = 0;
    if (uVar3 < 4) {
      uVar1 = uVar7 - 1 << (ulong)(uVar4 & 0x1f);
    }
    if (uVar3 != 0) {
      uVar4 = 4;
      if (uVar3 < 4) {
        uVar4 = uVar3;
      }
      if ((int)uVar4 < 3) {
        if (uVar4 == 1) {
          uVar5 = (ulong)(byte)*param_1;
        }
        else {
          uVar5 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar4 == 3) {
        uVar5 = (ulong)(uint3)*param_1;
      }
      else {
        uVar5 = (ulong)*param_1;
      }
    }
    return ((uint)uVar5 | uVar1) + 0xfe;
  }
LAB_101a1fd68:
  uVar4 = (uint)*(byte *)((long)param_1 + lVar6);
  iVar2 = 0;
  if (2 < uVar4) {
    iVar2 = (uVar4 ^ 0xff) + 1;
  }
  return iVar2;
}



/* Entry: 101a1fdc4; end: 101a1ff5b;  */

void FUN_101a1fdc4(uint *param_1,uint param_2,uint param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  undefined2 uVar3;
  long lVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  
  lVar4 = *(long *)(*(long *)(*(long *)(param_4 + 0x10) + -8) + 0x40);
  lVar1 = lVar4 + 1;
  uVar5 = (uint)lVar1;
  if (param_3 < 0xfe) {
    bVar6 = 0;
  }
  else if (uVar5 < 4) {
    uVar2 = ((param_3 + ~(-1 << (ulong)(uVar5 << 3 & 0x1f))) - 0xfd >> (ulong)(uVar5 << 3 & 0x1f)) +
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
  if (param_2 < 0xfe) {
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
      *(char *)((long)param_1 + lVar4) = -(char)param_2;
    }
  }
  else {
    param_2 = param_2 - 0xfe;
    if (uVar5 < 4) {
      iVar7 = (param_2 >> (ulong)(uVar5 << 3 & 0x1f)) + 1;
      if (uVar5 != 0) {
        uVar2 = param_2 & (-1 << (ulong)(uVar5 << 3 & 0x1f) ^ 0xffffffffU);
        func_0x000107c60ee4(param_1,lVar1);
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
      func_0x000107c60ee4(param_1,lVar1);
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



/* Entry: 101a1ff5c; end: 101a1ffe7;  */

uint FUN_101a1ff5c(uint *param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  
  lVar5 = *(long *)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 0x40);
  bVar1 = *(byte *)((long)param_1 + lVar5);
  uVar2 = (uint)bVar1;
  if (1 < bVar1) {
    uVar4 = (uint)lVar5;
    uVar3 = 4;
    if (uVar4 < 4) {
      uVar3 = uVar4;
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
    uVar2 = uVar3 | bVar1 - 2 << (ulong)((uVar4 & 3) << 3);
    if (3 < uVar4) {
      uVar2 = uVar3;
    }
    uVar2 = uVar2 + 2;
  }
  return uVar2;
}



/* Entry: 101a1ffe8; end: 101a200ef;  */

void FUN_101a1ffe8(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  undefined2 uVar2;
  uint uVar3;
  long lVar4;
  
  lVar4 = *(long *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40);
  if (param_2 < 2) {
    *(char *)((long)param_1 + lVar4) = (char)param_2;
  }
  else {
    param_2 = param_2 - 2;
    uVar3 = (uint)lVar4;
    if (uVar3 < 4) {
      *(char *)((long)param_1 + lVar4) = (char)(param_2 >> (ulong)(uVar3 << 3 & 0x1f)) + '\x02';
      if (uVar3 != 0) {
        uVar1 = param_2 & (-1 << (ulong)(uVar3 << 3 & 0x1f) ^ 0xffffffffU);
        func_0x000107c60ee4(param_1,lVar4);
        uVar2 = (undefined2)uVar1;
        if (uVar3 == 3) {
          *(undefined2 *)param_1 = uVar2;
          *(char *)((long)param_1 + 2) = (char)(uVar1 >> 0x10);
        }
        else if (uVar3 == 2) {
          *(undefined2 *)param_1 = uVar2;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      *(undefined1 *)((long)param_1 + lVar4) = 2;
      func_0x000107c60ee4(param_1,lVar4);
      *param_1 = param_2;
    }
  }
  return;
}



/* Entry: 101a200f0; end: 101a20167;  */

/* WARNING: Possible PIC construction at 0x000101a2014c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a20150) */

void FUN_101a200f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 101a20168; end: 101a201a3;  */

void FUN_101a20168(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 101a201a4; end: 101a20203;  */

void FUN_101a201a4(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c4218c();
  func_0x000107c61180();
  (**(code **)(lVar1 + 0x10))();
  func_0x000107c60bd0(lVar1);
  func_0x000107c4218c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a20204; end: 101a209ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_101a20204(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6,undefined4 param_7,long param_8,undefined8 param_9)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined1 *puVar10;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [16];
  
  func_0x000107c610f8();
  lVar3 = 0;
  FUN_101a209ac();
  func_0x000107c613fc();
  *(undefined1 *)(lVar3 + 0x30) = 0;
  lVar4 = 0;
  func_0x000101a1b81c();
  *(undefined8 *)(lVar3 + 0x38) = 0;
  *(undefined8 *)(lVar3 + 0x40) = 0;
  func_0x000107c613fc();
  puVar5 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c6157c(param_9);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c615f0(param_8);
  func_0x000107c453e4();
  *(undefined **)(lVar4 + 0x10) = puVar5;
  *(undefined8 *)(lVar4 + 0x18) = 0;
  *(undefined8 *)(lVar4 + 0x20) = 0xe000000000000000;
  *(long *)(lVar3 + 0x48) = lVar4;
  func_0x000107c60f34();
  *(undefined **)(lVar3 + 0x50) = puVar5;
  *(undefined1 *)(lVar3 + 0x58) = 0;
  *(long *)(lVar3 + 0x10) = param_6;
  *(undefined4 *)(lVar3 + 0x18) = param_7;
  *(long *)(lVar3 + 0x20) = param_8;
  *(undefined8 *)(lVar3 + 0x28) = param_9;
  if (param_8 == 0) {
    *(undefined8 *)(lVar3 + 0x60) = 2;
    func_0x000107c61174(param_6);
    func_0x000107c6157c(param_9);
    uVar2 = 0;
  }
  else {
    func_0x000107c615f4(param_8,2);
    func_0x000107c61174(param_6);
    func_0x000107c6157c(param_9);
    uVar6 = 0xd000000000000020;
    func_0x000107c5fadc(0xd000000000000020,0x800000010efc94e0);
    lVar4 = param_8;
    func_0x000107c4980c();
    func_0x000107c615e8(param_8);
    func_0x000107c61170(uVar6);
    *(long *)(lVar3 + 0x60) = (long)(int)lVar4;
    func_0x000107c615f0(param_8);
    uVar6 = 0xd00000000000002a;
    func_0x000107c5fadc(0xd00000000000002a,0x800000010efc9480);
    lVar4 = param_8;
    func_0x000107c3ebd4();
    uVar2 = (undefined1)lVar4;
    func_0x000107c615e8(param_8);
    func_0x000107c61170(uVar6);
  }
  func_0x000107c60f38(puVar5);
  lVar4 = param_6;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 == 0) {
LAB_101a20510:
    *(undefined1 *)(lVar3 + 0x58) = 1;
    func_0x000107c60f3c(*(undefined8 *)(lVar3 + 0x50));
  }
  else {
    lVar7 = lVar4;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar4);
    if (lVar7 != 0) {
      puVar5 = &UNK_11042d3d0;
      func_0x000107c613fc(&UNK_11042d3d0,0x18,7);
      func_0x000107c61644(puVar5 + 0x10,lVar3);
      puVar8 = &UNK_11042d3f8;
      func_0x000107c613fc(&UNK_11042d3f8,0x29,7);
      *(undefined **)(puVar8 + 0x10) = puVar5;
      *(undefined8 *)(puVar8 + 0x18) = param_1;
      *(long *)(puVar8 + 0x20) = param_8;
      puVar8[0x28] = uVar2;
      pcStack_80 = FUN_101a21cf4;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0x42000000;
      puStack_90 = &UNK_100f1c768;
      puStack_88 = &UNK_11042d410;
      ppuVar9 = &puStack_a0;
      puStack_78 = puVar8;
      func_0x000107c60bc4(ppuVar9);
      puVar5 = puStack_78;
      uVar6 = param_1;
      func_0x000107c61174(param_1);
      func_0x000107c615f0(param_8);
      func_0x000107c61574(puVar5);
      func_0x000107c440d8(lVar7);
      func_0x000107c61170(uVar6);
      func_0x000107c61170(param_6);
      func_0x000107c615e8(param_8);
      func_0x000107c61574(param_9);
      func_0x000107c60bd0(ppuVar9);
      func_0x000107c615e8(lVar7);
      goto LAB_101a20540;
    }
    if (*(char *)(lVar3 + 0x58) != '\x01') goto LAB_101a20510;
  }
  func_0x000107c61170(param_6);
  func_0x000107c615e8(param_8);
  func_0x000107c61574(param_9);
  func_0x000107c61170(param_1);
LAB_101a20540:
  *(long *)(unaff_x20 + _DAT_112dec0d0) = lVar3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dec0d8);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dec0e0);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar10 = auStack_70;
  func_0x000107c61154(puVar10,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_6);
  func_0x000107c615e8(param_8);
  func_0x000107c61574(param_9);
  return puVar10;
}



/* Entry: 101a209ac; end: 101a209cb;  */

void FUN_101a209ac(void)

{
  func_0x000107c61168(&PTR_PTR_112dec1f8);
  return;
}



/* Entry: 101a209cc; end: 101a20a2b; -[_TtC34SCImageProcessSnapEditorRenderPass31SnapEditorOverlayOnlyRenderPass init] */

void FUN_101a209cc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCImageProcessSnapEditorRenderPass.SnapEditorOverlayOnlyRenderPass",0x42,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101a209f8);
  (*pcVar1)();
}



/* Entry: 101a20a2c; end: 101a20a7b; -[_TtC34SCImageProcessSnapEditorRenderPass31SnapEditorOverlayOnlyRenderPass .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101a20a5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a20a60) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a20a2c(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112dec0d0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112dec0d8 + 8))
  ;
  return;
}



/* Entry: 101a20a7c; end: 101a20a83; -[_TtC34SCImageProcessSnapEditorRenderPass31SnapEditorOverlayOnlyRenderPass unloadWithError:] */

undefined8 FUN_101a20a7c(void)

{
  return 1;
}



/* Entry: 101a20a84; end: 101a212a7;  */

/* WARNING: Removing unreachable block (ram,0x000101a21340) */
/* WARNING: Removing unreachable block (ram,0x000101a2136c) */
/* WARNING: Removing unreachable block (ram,0x000101a2134c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_101a20a84(double param_1,code *param_2,undefined *param_3,ulong param_4,code *param_5,
                    undefined8 param_6,undefined8 param_7,undefined8 *param_8)

{
  undefined8 uVar1;
  ulong uVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined8 extraout_x13;
  code *unaff_x20;
  code *unaff_x21;
  code *pcVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  code *pcVar15;
  code *unaff_x23;
  long lVar16;
  code *pcVar17;
  code *pcVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [8];
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [8];
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [8];
  code *pcStack_128;
  undefined4 uStack_11c;
  ulong uStack_118;
  code *pcStack_110;
  code *pcStack_108;
  code *pcStack_100;
  code *pcStack_f8;
  code *pcStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  ulong uStack_d8;
  code *pcStack_d0;
  undefined1 auStack_c0 [32];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = (code *)0x0;
  puStack_e0 = param_3;
  uStack_d8 = param_4;
  pcStack_d0 = param_5;
  func_0x000107c5f7f0();
  lVar19 = *(long *)(pcVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar19 + 0x40));
  puVar13 = (undefined8 *)(auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  pcVar4 = (code *)0x0;
  func_0x000107c5f83c();
  lVar16 = *(long *)(pcVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  lVar20 = (long)puVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pcVar15 = (code *)(lVar20 - extraout_x12);
  pcVar5 = pcVar15;
  if (param_2 != (code *)0x0) {
    unaff_x23 = (code *)((ulong)param_2 & 0xffffffffffffff8);
    uStack_e8 = extraout_x13;
    if ((ulong)param_2 >> 0x3e == 0) {
      pcVar4 = *(code **)(unaff_x23 + 0x10);
    }
    else {
      pcVar4 = param_2;
      if (-1 < (long)param_2) {
        pcVar4 = unaff_x23;
      }
      func_0x000107c60480();
    }
    if (pcVar4 == (code *)0x1) {
      if (((ulong)param_2 & 0xc000000000000001) == 0) {
        if (*(long *)(unaff_x23 + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101a21298);
          (*pcVar4)();
        }
        unaff_x23 = *(code **)(param_2 + 0x20);
        func_0x000107c615f0(unaff_x23);
      }
      else {
        unaff_x23 = (code *)0x0;
        FUN_101a220cc(0,param_2);
      }
      pcVar4 = unaff_x23;
      func_0x000107c615f0();
      func_0x000107c5e8e0();
      pcVar12 = unaff_x23;
      func_0x000107c61104();
      if (pcVar4 == (code *)0x0) {
        FUN_101a1c124();
        pcVar18 = (code *)&UNK_11042cc90;
        lVar16 = 0;
        func_0x000107c613f8(&UNK_11042cc90,pcVar12,0);
        *(undefined8 *)(pcVar12 + 8) = 6;
        *(undefined8 *)pcVar12 = 0;
        func_0x000107c61654();
        pcVar4 = unaff_x23;
        func_0x000107c615e8();
        pcVar12 = pcVar18;
        goto LAB_101a21240;
      }
      pcStack_f0 = unaff_x23;
      func_0x000107c61174();
      func_0x000107c5f830(lVar20);
      *puVar13 = *(undefined8 *)(unaff_x20 + 0x60);
      (**(code **)(lVar19 + 0x68))
                (puVar13,*(undefined4 *)
                          PTR___s8Dispatch0A12TimeIntervalO7secondsyACSicACmFWC_11034f788,pcVar3);
      func_0x000107c5f858(pcVar15,lVar20,puVar13);
      (**(code **)(lVar19 + 8))(puVar13,pcVar3);
      pcVar17 = *(code **)(lVar16 + 8);
      (*pcVar17)(lVar20,uStack_e8);
      pcVar3 = *(code **)(unaff_x20 + 0x50);
      pcVar12 = pcVar15;
      func_0x000107c5ffb0();
      func_0x000107c5f7f4();
      param_2 = pcVar4;
      if (((ulong)pcVar12 & 1) == 0) {
        pcVar5 = *(code **)(unaff_x20 + 0x38);
        pcVar12 = (code *)0x0;
        if (pcVar5 == (code *)0x0) goto LAB_101a20ffc;
        func_0x000107c61174();
        func_0x000107c60ad0(pcVar4,0);
        func_0x000107c60aa8();
        pcVar12 = pcVar4;
        if (param_2 == (code *)0x0) {
          func_0x000107c60ae0(pcVar4,0);
          FUN_101a1c124();
          pcVar18 = (code *)&UNK_11042cc90;
          lVar16 = 0;
          func_0x000107c613f8(&UNK_11042cc90,pcVar12,0);
          uVar21 = 4;
          param_2 = pcVar4;
LAB_101a210f8:
          *(undefined8 *)(pcVar12 + 8) = uVar21;
          *(undefined8 *)pcVar12 = 0;
          func_0x000107c61654();
          func_0x000107c615e8(pcStack_f0);
          func_0x000107c61170(pcVar5);
          (*pcVar17)(pcVar15,uStack_e8);
          pcVar12 = pcVar18;
          unaff_x23 = pcVar4;
        }
        else {
          pcVar18 = pcVar4;
          func_0x000107c60ac8();
          pcVar6 = pcVar4;
          func_0x000107c60ab8();
          pcVar7 = pcVar4;
          func_0x000107c60ab0();
          if ((((long)pcVar18 < 1) || ((long)pcVar6 < 1)) || (pcVar3 = pcVar7, (long)pcVar7 < 1)) {
            func_0x000107c60ae0(pcVar4,0);
            FUN_101a1c124();
            pcVar18 = (code *)&UNK_11042cc90;
            lVar16 = 0;
            func_0x000107c613f8(&UNK_11042cc90,pcVar12,0);
            uVar21 = 8;
            goto LAB_101a210f8;
          }
          if (SUB168(SEXT816((long)pcVar7) * SEXT816((long)pcVar6),8) !=
              (long)pcVar7 * (long)pcVar6 >> 0x3f) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101a2129c);
            (*pcVar4)();
          }
          func_0x000107c60ee4(param_2);
          uVar2 = uStack_d8;
          if ((ulong)pcVar18 >> 0x1f != 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101a212a0);
            (*pcVar4)();
          }
          pcStack_100 = pcVar17;
          pcStack_f8 = pcVar5;
          if ((ulong)pcVar6 >> 0x1f != 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101a212a4);
            (*pcVar4)();
          }
          uStack_118 = uStack_d8 >> 0x20;
          func_0x000107c30e40(auStack_c0,pcVar18,pcVar6,1,1,pcVar7);
          pcStack_80 = FUN_101a21fc0;
          puStack_78 = (undefined *)0x0;
          puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_98 = 0x42000000;
          pcStack_90 = (code *)&UNK_1000f6b44;
          puStack_88 = &UNK_11042d488;
          ppuVar8 = &puStack_a0;
          func_0x000107c60bc4(ppuVar8);
          func_0x000107c30e44(param_2,auStack_c0,ppuVar8);
          func_0x000107c61180();
          func_0x000107c60bd0(ppuVar8);
          pcVar5 = (code *)0x0;
          func_0x000107c60f6c();
          unaff_x23 = (code *)&UNK_11042d4c0;
          pcStack_108 = pcVar5;
          func_0x000107c613fc(&UNK_11042d4c0,0x18,7);
          pcStack_128 = unaff_x23 + 0x10;
          *(undefined8 *)pcStack_128 = 0;
          func_0x000107c61174();
          pcVar5 = pcStack_f8;
          pcStack_110 = pcVar4;
          func_0x000107c50104();
          func_0x000107c61180();
          uStack_11c = *(undefined4 *)(unaff_x20 + 0x18);
          lVar16 = *(long *)(unaff_x20 + 0x48);
          func_0x000107c6157c(lVar16);
          puStack_a0 = puStack_e0;
          uStack_98 = CONCAT44((int)uStack_118,(int)uVar2);
          pcStack_90 = pcStack_d0;
          ppuVar8 = &puStack_a0;
          func_0x000107c60a3c(ppuVar8);
          func_0x000107c5fdd0(param_1 * 1000.0);
          pcStack_80 = FUN_101a22270;
          puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_98 = 0x42000000;
          pcStack_90 = (code *)0x101a200a4;
          puStack_88 = &UNK_11042d4d8;
          ppuVar9 = &puStack_a0;
          puStack_78 = (undefined *)lVar16;
          func_0x000107c60bc4(ppuVar9);
          pcVar12 = *(code **)(pcVar5 + 0x10);
          func_0x000107c6157c(lVar16);
          pcVar4 = pcVar5;
          pcStack_d0 = param_2;
          (*pcVar12)(pcVar5,param_2,uStack_11c,ppuVar9,ppuVar8);
          func_0x000107c61180();
          func_0x000107c60bd0(pcVar5);
          func_0x000107c61574(lVar16);
          func_0x000107c61170(ppuVar8);
          func_0x000107c60bd0(ppuVar9);
          func_0x000107c61574(puStack_78);
          puVar10 = &UNK_11042d510;
          func_0x000107c613fc(&UNK_11042d510,0x38,7);
          pcVar3 = pcStack_108;
          param_2 = pcStack_110;
          *(code **)(puVar10 + 0x10) = unaff_x23;
          *(code **)(puVar10 + 0x18) = pcStack_110;
          *(undefined8 *)(puVar10 + 0x20) = 0;
          *(code **)(puVar10 + 0x28) = pcStack_110;
          *(code **)(puVar10 + 0x30) = pcStack_108;
          pcStack_80 = (code *)0x101a22278;
          puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_98 = 0x42000000;
          pcStack_90 = FUN_101a200f0;
          puStack_88 = &UNK_11042d528;
          ppuVar8 = &puStack_a0;
          puStack_78 = puVar10;
          func_0x000107c60bc4(ppuVar8);
          puVar10 = puStack_78;
          func_0x000107c61174();
          func_0x000107c6157c(unaff_x23);
          func_0x000107c61174();
          func_0x000107c61574(puVar10);
          func_0x000107c4db80(pcVar4);
          func_0x000107c60bd0(ppuVar8);
          func_0x000107c61170(pcVar4);
          pcVar5 = pcVar15;
          func_0x000107c60058();
          pcVar17 = pcStack_d0;
          pcVar18 = pcStack_128;
          pcVar4 = param_2;
          if (((uint)pcVar5 & 0xff) == 1) {
            func_0x000107c4b940(*(undefined8 *)(lVar16 + 0x10));
            pcVar5 = *(code **)(lVar16 + 0x18);
            uVar21 = *(undefined8 *)(lVar16 + 0x20);
            puVar13 = *(undefined8 **)(lVar16 + 0x10);
            func_0x000107c61434(uVar21);
            func_0x000107c5d278();
            FUN_101a1c124();
            pcVar18 = (code *)&UNK_11042cc90;
            lVar16 = 0;
            func_0x000107c613f8(&UNK_11042cc90,puVar13,0);
            *puVar13 = pcVar5;
            puVar13[1] = uVar21;
            func_0x000107c61654();
            func_0x000107c61170(pcVar3);
            func_0x000107c615e8(pcStack_f0);
            func_0x000107c615e8(pcStack_d0);
            func_0x000107c61170(pcStack_f8);
            (*pcStack_100)(pcVar15,uStack_e8);
            func_0x000107c61574(unaff_x23);
            pcVar12 = pcVar18;
          }
          else {
            lVar16 = 0;
            func_0x000107c61428(pcStack_128,&puStack_a0,0);
            pcVar5 = pcStack_f0;
            pcVar18 = *(code **)pcVar18;
            if (pcVar18 != (code *)0x0) {
              func_0x000107c61654();
              func_0x000107c614b0(pcVar18);
              func_0x000107c61170(pcVar3);
              func_0x000107c615e8(pcVar5);
              func_0x000107c615e8(pcVar17);
              func_0x000107c61170(pcStack_f8);
              (*pcStack_100)(pcVar15,uStack_e8);
              func_0x000107c61574(unaff_x23);
              func_0x000107c61170();
              pcVar12 = pcVar18;
              goto LAB_101a21240;
            }
            (*pcStack_100)(pcVar15,uStack_e8);
            func_0x000107c61574(unaff_x23);
            func_0x000107c615e8(pcVar5);
            func_0x000107c61170(param_2);
            func_0x000107c615e8(pcVar17);
            func_0x000107c61170(pcStack_f8);
            pcVar4 = pcVar3;
            pcVar18 = unaff_x21;
          }
        }
      }
      else {
LAB_101a20ffc:
        FUN_101a1c124();
        pcVar18 = (code *)&UNK_11042cc90;
        lVar16 = 0;
        func_0x000107c613f8(&UNK_11042cc90,pcVar12,0);
        *(undefined8 *)(pcVar12 + 8) = 2;
        *(undefined8 *)pcVar12 = 0;
        func_0x000107c61654();
        func_0x000107c615e8(pcStack_f0);
        (*pcVar17)(pcVar15,uStack_e8);
        pcVar12 = pcVar18;
        pcVar5 = pcVar15;
        unaff_x23 = unaff_x20;
      }
      func_0x000107c61170();
      goto LAB_101a21240;
    }
  }
  FUN_101a1c124();
  pcVar18 = (code *)&UNK_11042cc90;
  lVar16 = 0;
  func_0x000107c613f8(&UNK_11042cc90,pcVar4,0);
  *(undefined8 *)(pcVar4 + 8) = 7;
  *(undefined8 *)pcVar4 = 0;
  pcVar4 = pcVar18;
  func_0x000107c61654();
  pcVar12 = pcVar18;
LAB_101a21240:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    func_0x000107c60e78();
    *(code **)(pcVar15 + -0x40) = param_2;
    *(code **)(pcVar15 + -0x38) = unaff_x23;
    *(code **)(pcVar15 + -0x30) = pcVar5;
    *(code **)(pcVar15 + -0x28) = pcVar12;
    *(code **)(pcVar15 + -0x20) = pcVar3;
    *(code **)(pcVar15 + -0x18) = pcVar18;
    *(undefined1 **)(pcVar15 + -0x10) = &stack0xfffffffffffffff0;
    *(code **)(pcVar15 + -8) = FUN_101a212a8;
    uVar21 = *param_8;
    uVar1 = param_8[1];
    uVar14 = param_8[2];
    if (lVar16 != 0) {
      uVar11 = 0x112debe58;
      func_0x0001000285a8(0x112debe58,&UNK_10d9b7ff0);
      func_0x000107c5fc54(lVar16,uVar11);
    }
    func_0x000107c61174();
    FUN_101a20a84(lVar16,uVar21,uVar1,uVar14);
    func_0x000107c61170(pcVar4);
    func_0x000107c6142c(lVar16);
    return (code *)0x1;
  }
  return pcVar4;
}



/* Entry: 101a212a8; end: 101a2138f; -[_TtC34SCImageProcessSnapEditorRenderPass31SnapEditorOverlayOnlyRenderPass runWithInputTextures:outputTextures:ippContext:negativeSpaceColor:presentationTime:presentationTimeOffset:GPUAvailable:error:] */

/* WARNING: Removing unreachable block (ram,0x000101a21340) */
/* WARNING: Removing unreachable block (ram,0x000101a2136c) */
/* WARNING: Removing unreachable block (ram,0x000101a2134c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_101a212a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,undefined8 param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_7;
  uVar2 = param_7[1];
  uVar4 = param_7[2];
  if (param_4 != 0) {
    uVar3 = 0x112debe58;
    func_0x0001000285a8(0x112debe58,&UNK_10d9b7ff0);
    func_0x000107c5fc54(param_4,uVar3);
  }
  func_0x000107c61174();
  FUN_101a20a84(param_4,uVar1,uVar2,uVar4);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_4);
  return 1;
}



/* Entry: 101a21390; end: 101a21397; -[_TtC34SCImageProcessSnapEditorRenderPass31SnapEditorOverlayOnlyRenderPass textureType] */

undefined8 FUN_101a21390(void)

{
  return 2;
}



/* Entry: 101a21398; end: 101a213a3; -[_TtC34SCImageProcessSnapEditorRenderPass31SnapEditorOverlayOnlyRenderPass inputBufferIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a21398(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uVar1 = ((undefined8 *)(param_1 + _DAT_112dec0d8))[1];
  *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(param_1 + _DAT_112dec0d8);
  *(undefined8 *)(lVar2 + 0x28) = uVar1;
  func_0x000107c61434();
  lVar3 = lVar2;
  func_0x000107c5fc48(lVar2,PTR___sSSN_11034da80);
  func_0x000107c61574(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 101a213a4; end: 101a213af; -[_TtC34SCImageProcessSnapEditorRenderPass31SnapEditorOverlayOnlyRenderPass outputBufferIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a213a4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uVar1 = ((undefined8 *)(param_1 + _DAT_112dec0e0))[1];
  *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(param_1 + _DAT_112dec0e0);
  *(undefined8 *)(lVar2 + 0x28) = uVar1;
  func_0x000107c61434();
  lVar3 = lVar2;
  func_0x000107c5fc48(lVar2,PTR___sSSN_11034da80);
  func_0x000107c61574(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 101a213b0; end: 101a2143b;  */

void FUN_101a213b0(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(param_1 + *param_3);
  *(undefined8 *)(lVar2 + 0x28) = uVar1;
  func_0x000107c61434();
  lVar3 = lVar2;
  func_0x000107c5fc48(lVar2,PTR___sSSN_11034da80);
  func_0x000107c61574(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 101a2143c; end: 101a21467; -[_TtC34SCImageProcessSnapEditorRenderPass31SnapEditorOverlayOnlyRenderPass lensIds] */

void FUN_101a2143c(void)

{
  func_0x000107c5fe08(PTR___swiftEmptySetSingleton_11034f1d8,PTR___sSSN_11034da80,
                      PTR___sSSSHsWP_11034da90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101a21468; end: 101a2155f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a21468(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_60 [16];
  
  lVar6 = unaff_x20;
  func_0x000107c614f0();
  if (param_2 == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x101a2155c);
    (*pcVar5)();
  }
  if (*(long *)(param_2 + 0x10) == 1) {
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x101a21560);
      (*pcVar5)();
    }
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112dec0d0);
    if (*(long *)(param_1 + 0x10) == 0) {
      uVar9 = 0;
      uVar8 = 0xe000000000000000;
    }
    else {
      uVar9 = *(undefined8 *)(param_1 + 0x20);
      uVar8 = *(undefined8 *)(param_1 + 0x28);
      func_0x000107c61434(uVar8);
    }
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    func_0x000107c610f8();
    *(undefined8 *)(lVar6 + _DAT_112dec0d0) = uVar7;
    puVar1 = (undefined8 *)(lVar6 + _DAT_112dec0d8);
    *puVar1 = uVar9;
    puVar1[1] = uVar8;
    puVar1 = (undefined8 *)(lVar6 + _DAT_112dec0e0);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar4 = PTR_s_init_1125d9248;
    func_0x000107c61434(uVar3);
    func_0x000107c6157c(uVar7);
    func_0x000107c61154(auStack_60,puVar4);
  }
  return;
}



/* Entry: 101a21560; end: 101a215fb; -[_TtC34SCImageProcessSnapEditorRenderPass31SnapEditorOverlayOnlyRenderPass createInstanceWithUpdatedInputBufferIds:OutputBufferIds:] */

void FUN_101a21560(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  }
  if (param_4 != 0) {
    func_0x000107c5fc54(param_4,PTR___sSSN_11034da80);
  }
  func_0x000107c61174(param_1);
  lVar1 = param_3;
  FUN_101a21468(param_3,param_4);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_4);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 101a215fc; end: 101a21603; -[_TtC34SCImageProcessSnapEditorRenderPass31SnapEditorOverlayOnlyRenderPass isPixelBufferInputCompatible] */

undefined8 FUN_101a215fc(void)

{
  return 1;
}



/* Entry: 101a21604; end: 101a2160b; -[_TtC34SCImageProcessSnapEditorRenderPass31SnapEditorOverlayOnlyRenderPass requiresGPU] */

undefined8 FUN_101a21604(void)

{
  return 0;
}



/* Entry: 101a2160c; end: 101a21613; -[_TtC34SCImageProcessSnapEditorRenderPass31SnapEditorOverlayOnlyRenderPass isOutputDeterministicAndStatic] */

undefined8 FUN_101a2160c(void)

{
  return 0;
}



/* Entry: 101a21614; end: 101a21cf3;  */

void FUN_101a21614(long param_1,long param_2,long param_3,long param_4,ulong param_5)

{
  byte bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  puVar10 = auStack_78;
  func_0x000107c61428(param_2 + 0x10,puVar10,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    return;
  }
  if (param_1 != 0) {
    func_0x000107c615f0(param_1);
    func_0x000107c41214();
    func_0x000107c61180();
    if (param_3 != 0) {
      lVar2 = param_3;
      func_0x000107c5ee30();
      func_0x000107c61170(param_3);
      puVar3 = PTR_PTR_1126bcf68;
      func_0x000107c610f8();
      func_0x00010006c00c(lVar2,puVar10);
      lVar12 = lVar2;
      func_0x000107c5ee20(lVar2,puVar10);
      func_0x000107c45ae0();
      func_0x000107c61170(lVar12);
      func_0x00010006c090(lVar2,puVar10);
      lVar12 = *(long *)(param_2 + 0x28);
      if (lVar12 != 0) {
        uVar13 = *(undefined8 *)(lVar12 + 0x10);
        func_0x000107c615f4(param_4,2);
        func_0x000107c61174();
        func_0x000107c615f4(param_1,2);
        func_0x000107c61174();
        func_0x000107c6157c(lVar12);
        func_0x000107c4b940(uVar13);
        func_0x000107c61428(lVar12 + 0x18,auStack_90,1,0);
        lVar14 = *(long *)(lVar12 + 0x18);
        if (lVar14 == 0) {
          lVar5 = param_1;
          if ((param_5 & 1) == 0) {
            uVar11 = 0xd00000000000001f;
            func_0x000107c5fadc(0xd00000000000001f,0x800000010d9b7f30);
            func_0x000107c40b60();
            func_0x000107c61180();
            func_0x000107c61170(uVar11);
          }
          else {
            func_0x000107c615f0(param_1);
          }
          lVar6 = lVar5;
          FUN_101a21d94(lVar5,1,param_4,puVar3);
          lVar7 = lVar6;
          func_0x000101a21d54();
          func_0x000107c613fc();
          *(long *)(lVar7 + 0x10) = lVar6;
          *(long *)(lVar7 + 0x18) = lVar5;
          uVar11 = *(undefined8 *)(lVar12 + 0x18);
          *(long *)(lVar12 + 0x18) = lVar7;
          func_0x000107c6157c();
          func_0x000107c61574(uVar11);
          *(undefined1 *)(lVar12 + 0x20) = 1;
LAB_101a218f8:
          func_0x000107c5d278(uVar13);
          *(undefined1 *)(param_2 + 0x30) = 1;
          uVar13 = *(undefined8 *)(param_2 + 0x38);
          *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(lVar7 + 0x10);
          func_0x000107c61174();
          func_0x000107c6157c(lVar7);
          func_0x000107c61170(uVar13);
          if (lVar14 == 0) {
            func_0x000107c615e8(param_1);
            func_0x00010006c090(lVar2,puVar10);
            func_0x000107c61578(lVar7,2);
            func_0x000107c61574(lVar12);
            func_0x000107c61170(puVar3);
            func_0x000107c61170(puVar3);
            func_0x000107c61170(puVar3);
            func_0x000107c615ec(param_4,2);
            func_0x000107c615ec(param_1,2);
            bVar1 = *(byte *)(param_2 + 0x58);
            goto joined_r0x000101a21cec;
          }
          lVar14 = *(long *)(lVar7 + 0x10);
          func_0x000107c5934c();
          func_0x000107c61180();
          (**(code **)(lVar14 + 0x10))();
          func_0x000107c615e8(param_1);
          func_0x00010006c090(lVar2,puVar10);
          func_0x000107c61574(lVar7);
          func_0x000107c61574(lVar12);
          func_0x000107c61170(puVar3);
          func_0x000107c61170(puVar3);
          func_0x000107c61170(puVar3);
          func_0x000107c615ec(param_4,2);
          func_0x000107c615ec(param_1,2);
          func_0x000107c60bd0(lVar14);
        }
        else {
          if ((*(byte *)(lVar12 + 0x20) & 1) == 0) {
            *(undefined1 *)(lVar12 + 0x20) = 1;
            func_0x000107c6157c(lVar14);
            lVar7 = lVar14;
            goto LAB_101a218f8;
          }
          func_0x000107c5d278(uVar13);
          lVar14 = param_1;
          if ((param_5 & 1) == 0) {
            uVar13 = 0xd00000000000001f;
            func_0x000107c5fadc(0xd00000000000001f,0x800000010d9b7f30);
            func_0x000107c40b60();
            func_0x000107c61180();
            func_0x000107c61170(uVar13);
            if (*(long *)(param_2 + 0x40) == 0) {
              uVar13 = 0;
            }
            else {
              func_0x000107c4218c();
              uVar13 = *(undefined8 *)(param_2 + 0x40);
            }
            *(long *)(param_2 + 0x40) = lVar14;
            func_0x000107c615f0(lVar14);
            func_0x000107c615e8(uVar13);
          }
          else {
            func_0x000107c615f0(param_1);
          }
          puVar4 = PTR_PTR_1126a8518;
          func_0x000107c610f8(PTR_PTR_1126a8518);
          func_0x000107c453e4();
          if (param_4 != 0) {
            func_0x00010912817c(param_4);
          }
          puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
          func_0x000107c45a48();
          func_0x000107c5a290(puVar4);
          func_0x000107c61170(puVar8);
          puVar8 = PTR_PTR_1126df060;
          func_0x000107c61168();
          func_0x000107c43be4();
          func_0x000107c61180();
          puVar9 = puVar8;
          func_0x000107c40b90();
          func_0x000107c61180();
          func_0x000107c615e8(lVar14);
          func_0x000107c61170(puVar4);
          func_0x000107c61170(puVar8);
          uVar13 = *(undefined8 *)(param_2 + 0x38);
          *(undefined **)(param_2 + 0x38) = puVar9;
          func_0x000107c615e8(param_1);
          func_0x000107c61170(uVar13);
          func_0x00010006c090(lVar2,puVar10);
          func_0x000107c615ec(param_1,2);
          func_0x000107c615ec(param_4,2);
          func_0x000107c61170(puVar3);
          func_0x000107c61170(puVar3);
          func_0x000107c61170(puVar3);
          lVar7 = lVar12;
        }
        func_0x000107c61574(lVar7);
        bVar1 = *(byte *)(param_2 + 0x58);
        goto joined_r0x000101a21cec;
      }
      lVar12 = param_1;
      if ((param_5 & 1) == 0) {
        func_0x000107c615f4(param_4,2);
        puVar4 = puVar3;
        func_0x000107c61174(puVar3);
        func_0x000107c615f4(param_1,2);
        func_0x000107c61174(puVar4);
        uVar13 = 0xd00000000000001f;
        func_0x000107c5fadc(0xd00000000000001f,0x800000010d9b7f30);
        func_0x000107c40b60();
        func_0x000107c61180();
        func_0x000107c61170(uVar13);
        if (*(long *)(param_2 + 0x40) == 0) {
          uVar13 = 0;
        }
        else {
          func_0x000107c4218c();
          uVar13 = *(undefined8 *)(param_2 + 0x40);
        }
        *(long *)(param_2 + 0x40) = lVar12;
        func_0x000107c615f0(lVar12);
        func_0x000107c615e8(uVar13);
      }
      else {
        func_0x000107c615f4(param_4,2);
        puVar4 = puVar3;
        func_0x000107c61174(puVar3);
        func_0x000107c615f4(param_1,3);
        func_0x000107c61174(puVar4);
      }
      puVar4 = PTR_PTR_1126a8518;
      func_0x000107c610f8(PTR_PTR_1126a8518);
      func_0x000107c453e4();
      if (param_4 != 0) {
        func_0x00010912817c(param_4);
      }
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c45a48();
      func_0x000107c5a290(puVar4);
      func_0x000107c61170(puVar8);
      puVar8 = PTR_PTR_1126df060;
      func_0x000107c61168();
      func_0x000107c43be4();
      func_0x000107c61180();
      puVar9 = puVar8;
      func_0x000107c40b90();
      func_0x000107c61180();
      func_0x000107c615e8(lVar12);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar8);
      uVar13 = *(undefined8 *)(param_2 + 0x38);
      *(undefined **)(param_2 + 0x38) = puVar9;
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar3);
      func_0x000107c615ec(param_4,2);
      func_0x000107c615ec(param_1,2);
      func_0x000107c61170(uVar13);
      func_0x00010006c090(lVar2,puVar10);
    }
    func_0x000107c615e8(param_1);
  }
  bVar1 = *(byte *)(param_2 + 0x58);
joined_r0x000101a21cec:
  if ((bVar1 & 1) == 0) {
    *(undefined1 *)(param_2 + 0x58) = 1;
    func_0x000107c60f3c(*(undefined8 *)(param_2 + 0x50));
  }
  func_0x000107c61574(param_2);
  return;
}



/* Entry: 101a21cf4; end: 101a21d1f;  */

void FUN_101a21cf4(long param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  long lVar12;
  long unaff_x20;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar14 = *(long *)(unaff_x20 + 0x18);
  lVar12 = *(long *)(unaff_x20 + 0x20);
  bVar1 = *(byte *)(unaff_x20 + 0x28);
  puVar11 = auStack_78;
  func_0x000107c61428(lVar2 + 0x10,puVar11,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 == 0) {
    return;
  }
  if (param_1 != 0) {
    func_0x000107c615f0(param_1);
    func_0x000107c41214();
    func_0x000107c61180();
    if (lVar14 != 0) {
      lVar3 = lVar14;
      func_0x000107c5ee30();
      func_0x000107c61170(lVar14);
      puVar4 = PTR_PTR_1126bcf68;
      func_0x000107c610f8();
      func_0x00010006c00c(lVar3,puVar11);
      lVar14 = lVar3;
      func_0x000107c5ee20(lVar3,puVar11);
      func_0x000107c45ae0();
      func_0x000107c61170(lVar14);
      func_0x00010006c090(lVar3,puVar11);
      lVar14 = *(long *)(lVar2 + 0x28);
      if (lVar14 != 0) {
        uVar15 = *(undefined8 *)(lVar14 + 0x10);
        func_0x000107c615f4(lVar12,2);
        func_0x000107c61174();
        func_0x000107c615f4(param_1,2);
        func_0x000107c61174();
        func_0x000107c6157c(lVar14);
        func_0x000107c4b940(uVar15);
        func_0x000107c61428(lVar14 + 0x18,auStack_90,1,0);
        lVar16 = *(long *)(lVar14 + 0x18);
        if (lVar16 == 0) {
          lVar6 = param_1;
          if ((bVar1 & 1) == 0) {
            uVar13 = 0xd00000000000001f;
            func_0x000107c5fadc(0xd00000000000001f,0x800000010d9b7f30);
            func_0x000107c40b60();
            func_0x000107c61180();
            func_0x000107c61170(uVar13);
          }
          else {
            func_0x000107c615f0(param_1);
          }
          lVar7 = lVar6;
          FUN_101a21d94(lVar6,1,lVar12,puVar4);
          lVar8 = lVar7;
          func_0x000101a21d54();
          func_0x000107c613fc();
          *(long *)(lVar8 + 0x10) = lVar7;
          *(long *)(lVar8 + 0x18) = lVar6;
          uVar13 = *(undefined8 *)(lVar14 + 0x18);
          *(long *)(lVar14 + 0x18) = lVar8;
          func_0x000107c6157c();
          func_0x000107c61574(uVar13);
          *(undefined1 *)(lVar14 + 0x20) = 1;
LAB_101a218f8:
          func_0x000107c5d278(uVar15);
          *(undefined1 *)(lVar2 + 0x30) = 1;
          uVar15 = *(undefined8 *)(lVar2 + 0x38);
          *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)(lVar8 + 0x10);
          func_0x000107c61174();
          func_0x000107c6157c(lVar8);
          func_0x000107c61170(uVar15);
          if (lVar16 == 0) {
            func_0x000107c615e8(param_1);
            func_0x00010006c090(lVar3,puVar11);
            func_0x000107c61578(lVar8,2);
            func_0x000107c61574(lVar14);
            func_0x000107c61170(puVar4);
            func_0x000107c61170(puVar4);
            func_0x000107c61170(puVar4);
            func_0x000107c615ec(lVar12,2);
            func_0x000107c615ec(param_1,2);
            bVar1 = *(byte *)(lVar2 + 0x58);
            goto joined_r0x000101a21cec;
          }
          lVar16 = *(long *)(lVar8 + 0x10);
          func_0x000107c5934c();
          func_0x000107c61180();
          (**(code **)(lVar16 + 0x10))();
          func_0x000107c615e8(param_1);
          func_0x00010006c090(lVar3,puVar11);
          func_0x000107c61574(lVar8);
          func_0x000107c61574(lVar14);
          func_0x000107c61170(puVar4);
          func_0x000107c61170(puVar4);
          func_0x000107c61170(puVar4);
          func_0x000107c615ec(lVar12,2);
          func_0x000107c615ec(param_1,2);
          func_0x000107c60bd0(lVar16);
        }
        else {
          if ((*(byte *)(lVar14 + 0x20) & 1) == 0) {
            *(undefined1 *)(lVar14 + 0x20) = 1;
            func_0x000107c6157c(lVar16);
            lVar8 = lVar16;
            goto LAB_101a218f8;
          }
          func_0x000107c5d278(uVar15);
          lVar16 = param_1;
          if ((bVar1 & 1) == 0) {
            uVar15 = 0xd00000000000001f;
            func_0x000107c5fadc(0xd00000000000001f,0x800000010d9b7f30);
            func_0x000107c40b60();
            func_0x000107c61180();
            func_0x000107c61170(uVar15);
            if (*(long *)(lVar2 + 0x40) == 0) {
              uVar15 = 0;
            }
            else {
              func_0x000107c4218c();
              uVar15 = *(undefined8 *)(lVar2 + 0x40);
            }
            *(long *)(lVar2 + 0x40) = lVar16;
            func_0x000107c615f0(lVar16);
            func_0x000107c615e8(uVar15);
          }
          else {
            func_0x000107c615f0(param_1);
          }
          puVar5 = PTR_PTR_1126a8518;
          func_0x000107c610f8(PTR_PTR_1126a8518);
          func_0x000107c453e4();
          if (lVar12 != 0) {
            func_0x00010912817c(lVar12);
          }
          puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
          func_0x000107c45a48();
          func_0x000107c5a290(puVar5);
          func_0x000107c61170(puVar9);
          puVar9 = PTR_PTR_1126df060;
          func_0x000107c61168();
          func_0x000107c43be4();
          func_0x000107c61180();
          puVar10 = puVar9;
          func_0x000107c40b90();
          func_0x000107c61180();
          func_0x000107c615e8(lVar16);
          func_0x000107c61170(puVar5);
          func_0x000107c61170(puVar9);
          uVar15 = *(undefined8 *)(lVar2 + 0x38);
          *(undefined **)(lVar2 + 0x38) = puVar10;
          func_0x000107c615e8(param_1);
          func_0x000107c61170(uVar15);
          func_0x00010006c090(lVar3,puVar11);
          func_0x000107c615ec(param_1,2);
          func_0x000107c615ec(lVar12,2);
          func_0x000107c61170(puVar4);
          func_0x000107c61170(puVar4);
          func_0x000107c61170(puVar4);
          lVar8 = lVar14;
        }
        func_0x000107c61574(lVar8);
        bVar1 = *(byte *)(lVar2 + 0x58);
        goto joined_r0x000101a21cec;
      }
      lVar14 = param_1;
      if ((bVar1 & 1) == 0) {
        func_0x000107c615f4(lVar12,2);
        puVar5 = puVar4;
        func_0x000107c61174(puVar4);
        func_0x000107c615f4(param_1,2);
        func_0x000107c61174(puVar5);
        uVar15 = 0xd00000000000001f;
        func_0x000107c5fadc(0xd00000000000001f,0x800000010d9b7f30);
        func_0x000107c40b60();
        func_0x000107c61180();
        func_0x000107c61170(uVar15);
        if (*(long *)(lVar2 + 0x40) == 0) {
          uVar15 = 0;
        }
        else {
          func_0x000107c4218c();
          uVar15 = *(undefined8 *)(lVar2 + 0x40);
        }
        *(long *)(lVar2 + 0x40) = lVar14;
        func_0x000107c615f0(lVar14);
        func_0x000107c615e8(uVar15);
      }
      else {
        func_0x000107c615f4(lVar12,2);
        puVar5 = puVar4;
        func_0x000107c61174(puVar4);
        func_0x000107c615f4(param_1,3);
        func_0x000107c61174(puVar5);
      }
      puVar5 = PTR_PTR_1126a8518;
      func_0x000107c610f8(PTR_PTR_1126a8518);
      func_0x000107c453e4();
      if (lVar12 != 0) {
        func_0x00010912817c(lVar12);
      }
      puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c45a48();
      func_0x000107c5a290(puVar5);
      func_0x000107c61170(puVar9);
      puVar9 = PTR_PTR_1126df060;
      func_0x000107c61168();
      func_0x000107c43be4();
      func_0x000107c61180();
      puVar10 = puVar9;
      func_0x000107c40b90();
      func_0x000107c61180();
      func_0x000107c615e8(lVar14);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar9);
      uVar15 = *(undefined8 *)(lVar2 + 0x38);
      *(undefined **)(lVar2 + 0x38) = puVar10;
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar4);
      func_0x000107c615ec(lVar12,2);
      func_0x000107c615ec(param_1,2);
      func_0x000107c61170(uVar15);
      func_0x00010006c090(lVar3,puVar11);
    }
    func_0x000107c615e8(param_1);
  }
  bVar1 = *(byte *)(lVar2 + 0x58);
joined_r0x000101a21cec:
  if ((bVar1 & 1) == 0) {
    *(undefined1 *)(lVar2 + 0x58) = 1;
    func_0x000107c60f3c(*(undefined8 *)(lVar2 + 0x50));
  }
  func_0x000107c61574(lVar2);
  return;
}



/* Entry: 101a21d20; end: 101a21d93;  */

void FUN_101a21d20(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101a21d94; end: 101a21ebb;  */

undefined * FUN_101a21d94(undefined8 param_1,ulong param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126a8518;
  func_0x000107c610f8(PTR_PTR_1126a8518);
  func_0x000107c453e4();
  if (param_3 != 0) {
    func_0x00010912817c(param_3);
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c5a290(puVar1);
  func_0x000107c61170(puVar2);
  if ((param_2 & 1) != 0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c45a48();
    func_0x000107c53ffc(puVar1);
    func_0x000107c61170(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c45a48();
    func_0x000107c57ed8(puVar1);
    func_0x000107c61170(puVar2);
  }
  puVar2 = PTR_PTR_1126df060;
  func_0x000107c61168(PTR_PTR_1126df060);
  func_0x000107c43be4();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c40b90();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 101a21ebc; end: 101a21fa3;  */

void FUN_101a21ebc(void)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  if ((*(byte *)(unaff_x20 + 0x58) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + 0x58) = 1;
    func_0x000107c60f3c(*(undefined8 *)(unaff_x20 + 0x50));
  }
  if (*(char *)(unaff_x20 + 0x30) == '\x01') {
    lVar1 = *(long *)(unaff_x20 + 0x28);
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x10);
      func_0x000107c6157c(lVar1);
      func_0x000107c4b940(uVar2);
      *(undefined1 *)(lVar1 + 0x20) = 0;
      func_0x000107c5d278(*(undefined8 *)(lVar1 + 0x10));
      func_0x000107c61574(lVar1);
    }
  }
  else {
    lVar1 = *(long *)(unaff_x20 + 0x38);
    if (lVar1 != 0) {
      func_0x000107c4218c();
      func_0x000107c61180();
      (**(code **)(lVar1 + 0x10))();
      func_0x000107c60bd0(lVar1);
    }
    if (*(long *)(unaff_x20 + 0x40) != 0) {
      func_0x000107c4218c();
    }
  }
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 101a21fa4; end: 101a21fbf;  */

void FUN_101a21fa4(undefined8 param_1)

{
  FUN_101a21ebc();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)(param_1,0x68,7);
  return;
}



/* Entry: 101a21fc0; end: 101a21fc3;  */

void FUN_101a21fc0(void)

{
  return;
}



/* Entry: 101a21fc4; end: 101a22037;  */

/* WARNING: Possible PIC construction at 0x000101a2200c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a22010) */

void FUN_101a21fc4(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_2;
  func_0x000101a1b338();
  func_0x000107c4b940(*(undefined8 *)(param_2 + 0x10));
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x18) = param_1;
  *(long *)(param_2 + 0x20) = lVar1;
  func_0x000107c61434(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 101a22038; end: 101a220cb;  */

void FUN_101a22038(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_68,1,0);
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  *(undefined8 *)(param_3 + 0x10) = param_2;
  func_0x000107c614b0(param_2);
  func_0x000107c614ac(uVar1);
  func_0x000107c60ae0(param_4,param_5);
  func_0x000107c61170(param_6);
  func_0x000107c60060();
  return;
}



/* Entry: 101a220cc; end: 101a2226f;  */

ulong FUN_101a220cc(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101a221a4);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101a221a8);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61494();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar3 = param_1;
    func_0x000107c61494();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd00000000000001c,0x800000010efc95b0);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101a22270);
  (*pcVar2)();
}



/* Entry: 101a22270; end: 101a22287;  */

/* WARNING: Possible PIC construction at 0x000101a2200c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a22010) */

void FUN_101a22270(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  lVar1 = unaff_x20;
  func_0x000101a1b338();
  func_0x000107c4b940(*(undefined8 *)(unaff_x20 + 0x10));
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(long *)(unaff_x20 + 0x20) = lVar1;
  func_0x000107c61434(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 101a22288; end: 101a2243b;  */

ulong FUN_101a22288(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101a2236c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101a22370);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126a8528;
    func_0x000107c61168(PTR_PTR_1126a8528);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126a8528;
    func_0x000107c61168(PTR_PTR_1126a8528);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_101a1c34c(0);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101a2243c);
  (*pcVar2)();
}



/* Entry: 101a2243c; end: 101a2245f;  */

void FUN_101a2243c(long param_1,long param_2)

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



/* Entry: 101a22460; end: 101a2291b;  */

undefined8 FUN_101a22460(undefined *param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  long extraout_x8;
  long extraout_x8_00;
  long lVar14;
  undefined1 *puVar15;
  long lVar16;
  long alStack_d0 [2];
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  uint uStack_94;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar1 = 0;
  func_0x000107c5eb9c();
  lVar14 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  puVar15 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar16 = 0x112d483a8;
  puVar9 = &UNK_10d910f00;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar16 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = (long)puVar15 - extraout_x8_00;
  if (param_2 == 0) {
    return 0;
  }
  func_0x000107c615f0(param_2);
  func_0x000107c5ed2c();
  puVar2 = param_1;
  func_0x000107c4b85c();
  func_0x000107c61180();
  puVar10 = puVar2;
  func_0x000107c5faec();
  func_0x000107c61170(puVar2);
  lVar3 = 0;
  puStack_a8 = puVar10;
  puStack_80 = puVar10;
  puStack_78 = puVar9;
  func_0x000107c5ef14();
  lVar4 = lVar16;
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(lVar16,1,1,lVar3);
  func_0x000100e8b654();
  puVar2 = &UNK_10d9b7ff8;
  *(long *)(lVar16 + -0x10) = lVar4;
  *(long *)(lVar16 + -8) = lVar4;
  puVar10 = (undefined *)0x0;
  uStack_94 = 0;
  func_0x000107c60218();
  puStack_b8 = puVar2;
  puStack_b0 = puVar10;
  FUN_101a2291c(lVar16,0x112d483a8,&UNK_10d910f00);
  puStack_a0 = param_1;
  func_0x000107c5d9a4();
  func_0x000107c61180();
  puVar2 = PTR___sypN_11034f1a8;
  puVar10 = param_1;
  puVar7 = PTR___sSSSHsWP_11034da90;
  func_0x000107c5f9e8();
  func_0x000107c61170(param_1);
  if (*(long *)(puVar10 + 0x10) == 0) {
LAB_101a2265c:
    puStack_78 = (undefined *)0x0;
    puStack_80 = (undefined *)0x0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x000107c61434(puVar10);
    uVar11 = 0;
    lVar16 = -0x2fffffffffffffea;
    func_0x000100029284(0xd000000000000016);
    if ((uVar11 & 1) == 0) {
      func_0x000107c6142c(puVar10);
      goto LAB_101a2265c;
    }
    func_0x0001000bb420(*(long *)(puVar10 + 0x38) + lVar16 * 0x20,&puStack_80);
    func_0x000107c6142c(puVar10);
  }
  func_0x000107c6142c(puVar10);
  if (lStack_68 == 0) {
    FUN_101a2291c(&puStack_80,0x112d387f8,&UNK_10d902650);
  }
  else {
    ppuVar5 = &puStack_90;
    puVar7 = PTR___sSSN_11034da80;
    func_0x000107c6147c(ppuVar5,&puStack_80,puVar2 + 8,PTR___sSSN_11034da80,6);
    if (((ulong)ppuVar5 & 1) != 0) {
      puStack_80 = puStack_90;
      puStack_78 = puStack_88;
      func_0x000107c5eb88(puVar15);
      puVar6 = puVar15;
      puVar2 = PTR___sSSN_11034da80;
      func_0x000107c601f0(puVar15,PTR___sSSN_11034da80,lVar4);
      (**(code **)(lVar14 + 8))(puVar15,lVar1);
      func_0x000107c6142c(puVar2);
      uVar11 = (ulong)puVar6 & 0xffffffffffff;
      if (((ulong)puVar2 & 0x2000000000000000) != 0) {
        uVar11 = (ulong)puVar2 >> 0x38 & 0xf;
      }
      puVar10 = puStack_88;
      puVar2 = puStack_90;
      if (uVar11 != 0) goto LAB_101a22764;
      func_0x000107c6142c(puStack_88);
    }
  }
  if ((uStack_94 & 0xff) == 1) {
    func_0x000107c6142c(puVar9);
    func_0x000107c615e8(param_2);
    func_0x000107c61170(puStack_a0);
    return 0;
  }
  puVar2 = puStack_b0;
  puVar10 = puStack_a8;
  func_0x000100ed9f54(puStack_b0,puStack_a8,puVar9);
  func_0x000107c5fb2c();
  func_0x000107c6142c(puVar7);
LAB_101a22764:
  func_0x000107c61434(puVar10);
  puStack_80 = puVar2;
  puStack_78 = puVar10;
  func_0x000107c5eb88(puVar15);
  puVar6 = puVar15;
  puVar7 = PTR___sSSN_11034da80;
  func_0x000107c601f0(puVar15,PTR___sSSN_11034da80,lVar4);
  (**(code **)(lVar14 + 8))(puVar15,lVar1);
  func_0x000107c6142c(puVar10);
  func_0x000107c6142c(puVar7);
  uVar11 = (ulong)puVar6 & 0xffffffffffff;
  if (((ulong)puVar7 & 0x2000000000000000) != 0) {
    uVar11 = (ulong)puVar7 >> 0x38 & 0xf;
  }
  if (uVar11 == 0) {
    func_0x000107c6142c(puVar9);
    func_0x000107c615e8(param_2);
    func_0x000107c61170(puStack_a0);
    func_0x000107c6142c(puVar10);
    return 0;
  }
  puVar7 = PTR_PTR_1126b3e90;
  func_0x000107c610f8(PTR_PTR_1126b3e90);
  func_0x000107c453e4();
  func_0x000107c56410();
  puVar8 = puStack_a8;
  if ((uStack_94 & 0xff) != 1) {
    puVar8 = (undefined *)0xf;
    puVar12 = puStack_b8;
    puVar13 = puVar9;
    func_0x000107c5fbd8(0xf,puStack_b8,puStack_a8,puVar9);
    func_0x000107c5fb2c();
    func_0x000107c6142c(puVar9);
    func_0x000107c6142c(puVar13);
    puVar9 = puVar12;
  }
  func_0x000107c5fadc(puVar8,puVar9);
  func_0x000107c6142c(puVar9);
  func_0x0001044db3fc(0);
  func_0x000107c61434(puVar10);
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
  func_0x0001044da404(puVar2,puVar10,puVar9,0x40);
  func_0x000107c5027c(param_2);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar2);
  func_0x000107c615e8(param_2);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puStack_a0);
  func_0x000107c6142c(puVar10);
  return 1;
}



/* Entry: 101a2291c; end: 101a2295b;  */

undefined8 FUN_101a2291c(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 101a2295c; end: 101a2296f;  */

bool FUN_101a2295c(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101a22970; end: 101a22a1b;  */

void FUN_101a22970(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 101a22a1c; end: 101a22a2b;  */

void FUN_101a22a1c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101a22a2c; end: 101a22a87; -[_TtC25SCSnapImageTranscoderImpl23SnapImageTranscoderImpl init] */

void FUN_101a22a2c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSnapImageTranscoderImpl.SnapImageTranscoderImpl",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101a22a58);
  (*pcVar1)();
}



/* Entry: 101a22a88; end: 101a22aef; -[_TtC25SCSnapImageTranscoderImpl23SnapImageTranscoderImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101a22ab4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a22ab8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a22a88(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112dec2a8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112dec2b0));
  return;
}



/* Entry: 101a22af0; end: 101a22b0f;  */

void FUN_101a22af0(void)

{
  func_0x000107c61168(&PTR_PTR_1127f10d8);
  return;
}



/* Entry: 101a22b10; end: 101a22c5f;  */

undefined8 FUN_101a22b10(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long extraout_x8;
  undefined8 unaff_x20;
  undefined8 uVar5;
  undefined1 *puVar6;
  
  lVar1 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &stack0xffffffffffffffc0 + -extraout_x8;
  func_0x0001000285a8(0x112dec310,&UNK_10dc50b70);
  func_0x000107c613fc();
  lVar1 = 0;
  func_0x00010095c380();
  func_0x000107c5fd00(puVar6);
  lVar2 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(puVar6,0,1,lVar2);
  puVar3 = &UNK_11042d6d0;
  func_0x000107c613fc(&UNK_11042d6d0,0x38,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined8 *)(puVar3 + 0x20) = unaff_x20;
  *(undefined8 *)(puVar3 + 0x28) = param_1;
  *(long *)(puVar3 + 0x30) = lVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  func_0x000107c6157c(lVar1);
  func_0x0001000abba4(0,0,puVar6,&UNK_10d9b80b8,puVar3);
  func_0x000107c61574();
  uVar5 = *(undefined8 *)(lVar1 + 0x10);
  uVar4 = uVar5;
  func_0x000107c6157c(uVar5);
  func_0x00010488b12c();
  func_0x000107c61574(lVar1);
  func_0x000107c61574(uVar5);
  return uVar4;
}



/* Entry: 101a22c60; end: 101a22c7b;  */

void FUN_101a22c60(void)

{
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x88) = in_x4;
  *(undefined8 *)(unaff_x22 + 0x90) = in_x5;
  *(undefined8 *)(unaff_x22 + 0x80) = in_x3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a22c7c,0,0);
  return;
}



/* Entry: 101a22c7c; end: 101a22d6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a22c7c(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  
  func_0x0001000298f0();
  *(undefined8 **)(unaff_x22 + 0x98) = param_1;
  func_0x000107c61428();
  uVar3 = *param_1;
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000021;
  func_0x000100029b28(0xd000000000000021,0x800000010efc95f0);
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar4;
  func_0x000107c61170(uVar3);
  func_0x0001000d224c(unaff_x22 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar2 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar3);
  piVar6 = *(int **)(lVar2 + 8);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xa8) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101a22d6c;
                    /* WARNING: Could not recover jumptable at 0x000101a22d68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(*(undefined8 *)(unaff_x22 + 0x88),1,0,uVar3,lVar2);
  return;
}



/* Entry: 101a22d6c; end: 101a22dd3;  */

void FUN_101a22d6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0xb0) = param_1;
  *(undefined8 *)(lVar2 + 0xb8) = param_2;
  *(undefined8 *)(lVar2 + 0xc0) = param_3;
  *(undefined8 *)(lVar2 + 200) = param_4;
  *(long *)(lVar2 + 0xd0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xa8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101a22dd4;
  }
  else {
    pcVar1 = FUN_101a235ac;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101a22dd4; end: 101a22fa7;  */

void FUN_101a22dd4(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long unaff_x22;
  ulong uStack_70;
  ulong uStack_68;
  
  uVar7 = *(ulong *)(unaff_x22 + 0x88);
  func_0x0001000834e4(unaff_x22 + 0x10);
  func_0x000107c444cc();
  func_0x000107c61180();
  if (uVar7 != 0) {
    uVar1 = uVar7;
    func_0x000107c5e304();
    if (((int)uVar1 != 0) && (uVar1 = uVar7, func_0x000107c44d98(), (int)uVar1 != 0)) {
      uVar1 = uVar7;
      func_0x000107c5e304();
      uVar2 = uVar7;
      func_0x000107c44d98();
      func_0x000107c61170(uVar7);
      uStack_68 = (ulong)(uint)((float)(uVar1 & 0xffffffff) / (float)(uVar2 & 0xffffffff));
      uStack_70 = 0;
      goto LAB_101a22e78;
    }
    func_0x000107c61170(uVar7);
  }
  uStack_70 = 0x100000000;
  uStack_68 = 0;
LAB_101a22e78:
  lVar3 = *(long *)(unaff_x22 + 0x88);
  func_0x000107c3f5f8();
  func_0x000107c61180();
  if (lVar3 == 0) {
    uVar4 = 0;
    uVar6 = param_2;
  }
  else {
    func_0x000107c5faec();
    uVar6 = param_2;
    func_0x000107c61170(lVar3);
    uVar4 = param_2;
  }
  *(undefined8 *)(unaff_x22 + 0xd8) = uVar4;
  lVar8 = *(long *)(unaff_x22 + 0x88);
  uVar4 = 0;
  func_0x000103aeb250();
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar4;
  func_0x000103aea58c(uVar4);
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar6;
  func_0x00010011df08();
  func_0x000107c61180();
  uVar4 = uVar6;
  lVar3 = lVar8;
  if (lVar8 == 0) {
    func_0x000107c5faec();
    uVar4 = uVar6;
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar6);
  }
  *(long *)(unaff_x22 + 0xf0) = lVar3;
  func_0x000107c5faec();
  *(long *)(unaff_x22 + 0xf8) = lVar8;
  *(undefined8 *)(unaff_x22 + 0x100) = uVar4;
  FUN_101a23e04();
  plVar5 = (long *)0x120;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x108) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101a22fa8;
  uVar6 = *(undefined8 *)(unaff_x22 + 200);
  lVar3 = *(long *)(unaff_x22 + 0xb0);
  lVar8 = *(long *)(unaff_x22 + 0x80);
  plVar5[0x17] = uStack_70 | uStack_68;
  plVar5[0x18] = lVar8;
  plVar5[0x16] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a242f4,0,0,uVar6);
  return;
}



/* Entry: 101a22fa8; end: 101a23007;  */

void FUN_101a22fa8(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x110) = param_1;
  *(long *)(lVar2 + 0x118) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x108));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101a23008;
  }
  else {
    pcVar1 = FUN_101a23430;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101a23008; end: 101a23267;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a23008(undefined1 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long unaff_x22;
  undefined8 uVar14;
  
  lVar12 = *(long *)(unaff_x22 + 0x110);
  if (lVar12 != 0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x100);
    uVar11 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xd8);
    lVar3 = *(long *)(unaff_x22 + 0x80);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x88);
    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xf0));
    FUN_101a24e74(uVar1,uVar5,lVar12);
    func_0x000107c6142c(uVar5);
    func_0x000107c6142c(uVar11);
    func_0x000107c6142c(uVar2);
    func_0x000103ae8ffc(lVar12,uVar6,*(undefined8 *)(lVar3 + _DAT_112dec2b0));
    *(long *)(unaff_x22 + 0x120) = lVar12;
    plVar8 = (long *)0x80;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x128) = plVar8;
    *plVar8 = unaff_x22;
    plVar8[1] = (long)FUN_101a23268;
                    /* WARNING: Could not recover jumptable at 0x000101a230e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)&UNK_100fab34c)();
    return;
  }
  FUN_101a25678();
  puVar9 = &UNK_11042d768;
  func_0x000107c613f8(&UNK_11042d768,param_1,0,0);
  *param_1 = 0;
  func_0x000107c61654();
  func_0x0001000d224c(unaff_x22 + 0x68);
  lVar12 = *(long *)(unaff_x22 + 0x68);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar6 = *(undefined8 *)(unaff_x22 + 200);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xb8);
  if (lVar12 == 0) {
    func_0x000107c6142c(uVar13);
    func_0x000107c61170(uVar5);
  }
  else {
    puVar10 = puVar9;
    func_0x000107c5ed2c(puVar9);
    func_0x000107c5be1c(lVar12);
    func_0x000107c6142c(uVar13);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(uVar5);
    func_0x000107c615e8(lVar12);
  }
  func_0x000107c61654();
  func_0x000107c61170(uVar2);
  func_0x000107c6142c(uVar1);
  func_0x000107c6142c(uVar14);
  func_0x000107c61170(uVar7);
  func_0x0001000b44c0(uVar11,uVar6);
  func_0x00010488ade0(puVar9);
  func_0x000107c614ac(puVar9);
  puVar4 = *(undefined8 **)(unaff_x22 + 0x98);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  func_0x000107c61428(puVar4,unaff_x22 + 0x50,0,0);
  uVar11 = *puVar4;
  func_0x000107c61174(uVar11);
  func_0x000100069b5c(uVar1);
  func_0x000107c61170(uVar11);
                    /* WARNING: Could not recover jumptable at 0x000101a23264. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a23268; end: 101a232bb;  */

void FUN_101a23268(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x130) = param_1;
  *(undefined1 *)(lVar1 + 0x138) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x128));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a232bc,0,0);
  return;
}



/* Entry: 101a232bc; end: 101a2342f;  */

void FUN_101a232bc(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  
  cVar4 = *(char *)(unaff_x22 + 0x138);
  if (cVar4 == '\x01') {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x130);
    *(undefined8 *)(unaff_x22 + 0x70) = uVar7;
    iVar5 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar5 != 0) {
      uVar6 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x70,uVar6,PTR___ss5ErrorWS_11034ee10);
    }
    uVar8 = *(undefined8 *)(unaff_x22 + 0x110);
    uVar6 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar3 = *(undefined8 *)(unaff_x22 + 200);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xb8);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x120));
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(uVar9);
    func_0x0001000b44c0(uVar6,uVar3);
    func_0x00010488ade0(uVar7);
    func_0x000107c614ac(uVar7);
  }
  else {
    uVar9 = *(undefined8 *)(unaff_x22 + 0x130);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x110);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar1 = *(undefined8 *)(unaff_x22 + 200);
    uVar6 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xb8);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x120));
    *(undefined8 *)(unaff_x22 + 0x78) = uVar9;
    func_0x000100b60084();
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar3);
    func_0x0001000b44c0(uVar7,uVar1);
    FUN_101a25974(uVar9,cVar4);
  }
  puVar2 = *(undefined8 **)(unaff_x22 + 0x98);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xa0);
  func_0x000107c61428(puVar2,unaff_x22 + 0x50,0,0);
  uVar6 = *puVar2;
  func_0x000107c61174(uVar6);
  func_0x000100069b5c(uVar7);
  func_0x000107c61170(uVar6);
                    /* WARNING: Could not recover jumptable at 0x000101a2342c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a23430; end: 101a235ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a23430(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long unaff_x22;
  undefined8 uVar12;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0x118);
  func_0x0001000d224c(unaff_x22 + 0x68);
  lVar11 = *(long *)(unaff_x22 + 0x68);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar5 = *(undefined8 *)(unaff_x22 + 200);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xb8);
  if (lVar11 == 0) {
    func_0x000107c6142c(uVar10);
    func_0x000107c61170(uVar4);
  }
  else {
    uVar7 = uVar9;
    func_0x000107c5ed2c(uVar9);
    func_0x000107c5be1c(lVar11);
    func_0x000107c6142c(uVar10);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar4);
    func_0x000107c615e8(lVar11);
  }
  func_0x000107c61654();
  func_0x000107c61170(uVar2);
  func_0x000107c6142c(uVar1);
  func_0x000107c6142c(uVar12);
  func_0x000107c61170(uVar6);
  func_0x0001000b44c0(uVar8,uVar5);
  func_0x00010488ade0(uVar9);
  func_0x000107c614ac(uVar9);
  puVar3 = *(undefined8 **)(unaff_x22 + 0x98);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  func_0x000107c61428(puVar3,unaff_x22 + 0x50,0,0);
  uVar8 = *puVar3;
  func_0x000107c61174(uVar8);
  func_0x000100069b5c(uVar1);
  func_0x000107c61170(uVar8);
                    /* WARNING: Could not recover jumptable at 0x000101a235a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a235ac; end: 101a2362b;  */

void FUN_101a235ac(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd0);
  func_0x00010488ade0(uVar3);
  func_0x000107c614ac(uVar3);
  puVar1 = *(undefined8 **)(unaff_x22 + 0x98);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa0);
  func_0x000107c61428(puVar1,unaff_x22 + 0x50,0,0);
  uVar2 = *puVar1;
  func_0x000107c61174(uVar2);
  func_0x000100069b5c(uVar3);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101a23628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a2362c; end: 101a23687; -[_TtC25SCSnapImageTranscoderImpl23SnapImageTranscoderImpl transcodeForSnapDocEditorWithSnapDoc:] */

void FUN_101a2362c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_101a22b10(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101a23688; end: 101a236a3;  */

void FUN_101a23688(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_3;
  *(undefined8 *)(unaff_x22 + 0x30) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a236a4,0,0);
  return;
}



/* Entry: 101a236a4; end: 101a237eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a236a4(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long unaff_x22;
  long lVar8;
  
  lVar4 = *(long *)(unaff_x22 + 0x18);
  lVar6 = *(long *)(lVar4 + _DAT_11303c310);
  *(long *)(unaff_x22 + 0x38) = lVar6;
  uVar5 = *(undefined8 *)(lVar4 + _DAT_11303c318);
  *(undefined8 *)(unaff_x22 + 0x40) = uVar5;
  plVar2 = (long *)(lVar4 + _DAT_11303c320);
  lVar7 = *plVar2;
  *(long *)(unaff_x22 + 0x48) = lVar7;
  lVar8 = plVar2[1];
  *(long *)(unaff_x22 + 0x50) = lVar8;
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  lVar4 = lVar8;
  func_0x000100de78a0();
  func_0x00010011df08();
  func_0x000107c61180();
  lVar3 = lVar4;
  lVar1 = lVar7;
  if (lVar7 == 0) {
    func_0x000107c5faec();
    lVar3 = lVar4;
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar4);
  }
  *(long *)(unaff_x22 + 0x58) = lVar1;
  func_0x000107c5faec();
  *(long *)(unaff_x22 + 0x60) = lVar7;
  *(long *)(unaff_x22 + 0x68) = lVar3;
  FUN_101a23e04();
  plVar2 = (long *)0x120;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x70) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101a237ec;
  lVar4 = *(long *)(unaff_x22 + 0x30);
  plVar2[0x17] = 0x100000000;
  plVar2[0x18] = lVar4;
  plVar2[0x16] = lVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a242f4,0,0,lVar8);
  return;
}



/* Entry: 101a237ec; end: 101a2384b;  */

void FUN_101a237ec(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x78) = param_1;
  *(long *)(lVar2 + 0x80) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x70));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101a2384c;
  }
  else {
    pcVar1 = FUN_101a239e4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101a2384c; end: 101a239e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a2384c(undefined1 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  
  lVar6 = *(long *)(unaff_x22 + 0x78);
  if (lVar6 != 0) {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x58));
    FUN_101a24e74(uVar7,uVar2,lVar6);
    func_0x000107c6142c(uVar2);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar1);
    func_0x0001000b44c0(uVar3,uVar8);
                    /* WARNING: Could not recover jumptable at 0x000101a238e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(lVar6);
    return;
  }
  FUN_101a25678();
  puVar5 = &UNK_11042d768;
  func_0x000107c613f8(&UNK_11042d768,param_1,0,0);
  *param_1 = 0;
  func_0x000107c61654();
  func_0x0001000d224c(unaff_x22 + 0x10);
  lVar6 = *(long *)(unaff_x22 + 0x10);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x58);
  if (lVar6 == 0) {
    func_0x000107c6142c(uVar8);
    func_0x000107c61170(uVar7);
  }
  else {
    func_0x000107c5ed2c(puVar5);
    func_0x000107c5be1c(lVar6);
    func_0x000107c6142c(uVar8);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(uVar7);
    func_0x000107c615e8(lVar6);
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x000107c61654();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar2);
  func_0x0001000b44c0(uVar7,uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101a239e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a239e4; end: 101a23acf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a239e4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
  func_0x0001000d224c(unaff_x22 + 0x10);
  lVar3 = *(long *)(unaff_x22 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x58);
  if (lVar3 == 0) {
    func_0x000107c6142c(uVar5);
    func_0x000107c61170(uVar4);
  }
  else {
    func_0x000107c5ed2c(uVar2);
    func_0x000107c5be1c(lVar3);
    func_0x000107c6142c(uVar5);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar4);
    func_0x000107c615e8(lVar3);
  }
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x000107c61654();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar1);
  func_0x0001000b44c0(uVar2,uVar5);
                    /* WARNING: Could not recover jumptable at 0x000101a23acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a23ad0; end: 101a23c1f; -[_TtC25SCSnapImageTranscoderImpl23SnapImageTranscoderImpl transcodeWithConverterOutputObjc:captureSessionId:completionHandler:] */

void FUN_101a23ad0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  
  lVar2 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c60bc4();
  puVar1 = &UNK_11042d608;
  func_0x000107c613fc(&UNK_11042d608,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  *(undefined8 *)(puVar1 + 0x28) = param_1;
  lVar2 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(&stack0xffffffffffffffc0 + -extraout_x8,1,1,lVar2);
  puVar3 = &UNK_11042d630;
  func_0x000107c613fc(&UNK_11042d630,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = &UNK_10d9b8058;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  puVar1 = &UNK_11042d658;
  func_0x000107c613fc(&UNK_11042d658,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined **)(puVar1 + 0x20) = &UNK_10d9b8068;
  *(undefined **)(puVar1 + 0x28) = puVar3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000100e8e0b0(0,0,&stack0xffffffffffffffc0 + -extraout_x8,&UNK_10d9b8078,puVar1);
  func_0x000107c61574();
  return;
}



/* Entry: 101a23c20; end: 101a23ccf;  */

void FUN_101a23c20(long param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long unaff_x22;
  long *plVar2;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
  *(long *)(unaff_x22 + 0x20) = param_4;
  *(long *)(unaff_x22 + 0x10) = param_1;
  if (param_2 == 0) {
    param_2 = 0;
    lVar1 = 0;
  }
  else {
    lVar1 = param_2;
    func_0x000107c5faec();
  }
  *(long *)(unaff_x22 + 0x28) = lVar1;
  plVar2 = (long *)0x90;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x30) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101a23cd0;
  plVar2[5] = lVar1;
  plVar2[6] = param_4;
  plVar2[3] = param_1;
  plVar2[4] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a236a4,0,0);
  return;
}



/* Entry: 101a23cd0; end: 101a23d8b;  */

void FUN_101a23cd0(long param_1)

{
  long unaff_x20;
  long lVar1;
  undefined8 uVar2;
  long *unaff_x22;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *unaff_x22;
  uVar2 = *(undefined8 *)(lVar5 + 0x20);
  uVar4 = *(undefined8 *)(lVar5 + 0x10);
  lVar3 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar5 + 0x30));
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c6142c(*(undefined8 *)(lVar5 + 0x28));
  if (unaff_x20 == 0) {
    unaff_x20 = 0;
    lVar1 = param_1;
  }
  else {
    func_0x000107c5ed2c();
    func_0x000107c614ac();
    param_1 = unaff_x20;
    lVar1 = 0;
  }
  (**(code **)(*(long *)(lVar5 + 0x18) + 0x10))(*(long *)(lVar5 + 0x18),lVar1,unaff_x20);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x000101a23d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Entry: 101a23d8c; end: 101a23e03;  */

void FUN_101a23d8c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x22;
  long *plVar6;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  plVar3 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101a25b40;
  plVar3[3] = lVar5;
  plVar3[4] = lVar2;
  plVar3[2] = lVar1;
  if (lVar4 == 0) {
    lVar4 = 0;
    lVar5 = 0;
  }
  else {
    lVar5 = lVar4;
    func_0x000107c5faec();
  }
  plVar3[5] = lVar5;
  plVar6 = (long *)0x90;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c615b8();
  plVar3[6] = (long)plVar6;
  *plVar6 = (long)plVar3;
  plVar6[1] = (long)FUN_101a23cd0;
  plVar6[5] = lVar5;
  plVar6[6] = lVar2;
  plVar6[3] = lVar1;
  plVar6[4] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a236a4,0,0);
  return;
}



/* Entry: 101a23e04; end: 101a242d7;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a23e04(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined *puVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined8 *puVar21;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  undefined *puStack_68;
  
  func_0x0001000d224c(&puStack_68);
  puVar2 = puStack_68;
  if (puStack_68 == (undefined *)0x0) {
    return;
  }
  func_0x000107c309c4();
  func_0x000107c61180();
  puVar20 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_5 != 0) {
    uVar4 = 0;
    FUN_101a256dc(0,0x112d53840,&PTR_PTR_1126bf6b8);
    uVar15 = param_5;
    func_0x000107c5fc54(param_5,uVar4);
    func_0x000107c61170(param_5);
    if (uVar15 >> 0x3e == 0) {
      uVar5 = *(ulong *)((uVar15 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar5 = uVar15 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar15) {
        uVar5 = uVar15;
      }
      func_0x000107c60480();
    }
    if (uVar5 == 0) {
      func_0x000107c6142c(uVar15);
      puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      if ((uVar15 & 0xc000000000000001) == 0) {
        if (*(long *)((uVar15 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101a242d8);
          (*pcVar3)();
        }
        puVar6 = *(undefined **)(uVar15 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar6 = (undefined *)0x0;
        func_0x000101a25158(0,uVar15,&PTR_PTR_1126bf6b8,0x112d53840);
      }
      func_0x000107c6142c(uVar15);
      puVar19 = puVar6;
      func_0x000107c309b4();
      func_0x000107c61180();
      func_0x000107c61170(puVar6);
      puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (puVar19 != (undefined *)0x0) {
        uVar4 = 0;
        FUN_101a256dc(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        puVar7 = puVar19;
        func_0x000107c5fc54(puVar19,uVar4);
        func_0x000107c61170(puVar19);
        puVar19 = puVar7;
        FUN_101a24f28();
        func_0x000107c6142c(puVar7);
        if (puVar19 != (undefined *)0x0) {
          puVar6 = puVar19;
        }
      }
    }
  }
  if ((ulong)puVar6 >> 0x3e == 0) {
    puVar19 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar19 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar6) {
      puVar19 = puVar6;
    }
    func_0x000107c60480();
  }
  if (puVar19 == (undefined *)0x0) {
    func_0x000107c6142c(puVar6);
    puVar20 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_68 = puVar20;
    uVar15 = (ulong)puVar19 & ((long)puVar19 >> 0x3f ^ 0xffffffffffffffffU);
    func_0x000100403514(0,uVar15,0);
    if ((long)puVar19 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101a242b4);
      (*pcVar3)();
    }
    if (((ulong)puVar6 & 0xc000000000000001) == 0) {
      puVar21 = (undefined8 *)(puVar6 + 0x20);
      do {
        puVar20 = puStack_68;
        uVar12 = *puVar21;
        uVar4 = uVar12;
        func_0x000107c614f0();
        func_0x000107c614e8();
        func_0x000107c615f0(uVar12);
        func_0x000107c60b14();
        func_0x000107c61180();
        uVar11 = uVar4;
        func_0x000107c5faec();
        uVar17 = uVar15;
        func_0x000107c615e8(uVar12);
        func_0x000107c61170(uVar4);
        uVar1 = *(ulong *)(puVar20 + 0x10);
        uVar5 = uVar1 + 1;
        puStack_68 = puVar20;
        if (*(ulong *)(puVar20 + 0x18) >> 1 <= uVar1) {
          uVar17 = uVar5;
          func_0x000100403514(1 < *(ulong *)(puVar20 + 0x18),uVar5,1);
        }
        *(ulong *)(puStack_68 + 0x10) = uVar5;
        *(undefined8 *)(puStack_68 + uVar1 * 0x10 + 0x20) = uVar11;
        *(ulong *)(puStack_68 + uVar1 * 0x10 + 0x28) = uVar15;
        puVar19 = puVar19 + -1;
        uVar15 = uVar17;
        puVar21 = puVar21 + 1;
      } while (puVar19 != (undefined *)0x0);
    }
    else {
      puVar20 = (undefined *)0x0;
      do {
        puVar7 = puStack_68;
        puVar8 = puVar20;
        puVar16 = puVar6;
        FUN_101a03258();
        puVar9 = puVar8;
        func_0x000107c614f0();
        func_0x000107c614e8();
        func_0x000107c60b14();
        func_0x000107c61180();
        puVar10 = puVar9;
        func_0x000107c5faec();
        func_0x000107c615e8(puVar8);
        func_0x000107c61170(puVar9);
        uVar15 = *(ulong *)(puVar7 + 0x10);
        puStack_68 = puVar7;
        if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar15) {
          func_0x000100403514(1 < *(ulong *)(puVar7 + 0x18),uVar15 + 1,1);
        }
        puVar20 = puVar20 + 1;
        *(ulong *)(puStack_68 + 0x10) = uVar15 + 1;
        *(undefined **)(puStack_68 + uVar15 * 0x10 + 0x20) = puVar10;
        *(undefined **)(puStack_68 + uVar15 * 0x10 + 0x28) = puVar16;
      } while (puVar19 != puVar20);
    }
    puVar20 = puStack_68;
    func_0x000107c6142c(puVar6);
  }
  uVar4 = 0x112d38270;
  puStack_68 = puVar20;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  uVar11 = uVar4;
  func_0x00010011d734();
  uVar12 = 0x2c;
  uVar18 = 0xe100000000000000;
  func_0x000107c5fa80(0x2c,0xe100000000000000,uVar4,uVar11);
  func_0x000107c6142c(puVar20);
  func_0x000107c5fadc(param_1,param_2);
  uVar4 = 0;
  if (param_4 != 0) {
    func_0x000107c5fadc(param_3,param_4);
    uVar4 = param_3;
  }
  uVar13 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  uVar14 = 0x636f4470616e73;
  func_0x000107c5fadc(0x636f4470616e73,0xe700000000000000);
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
  func_0x000107c5fadc(uVar12,uVar18);
  func_0x000107c6142c(uVar18);
  uVar11 = 0;
  if (in_stack_00000008 != 0) {
    func_0x000107c5fadc(in_stack_00000000,in_stack_00000008);
    uVar11 = in_stack_00000000;
  }
  func_0x000107c5baa4(0,0,puVar2);
  func_0x000107c615e8(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar11);
  return;
}



/* Entry: 101a242d8; end: 101a242f3;  */

void FUN_101a242d8(undefined8 param_1)

{
  undefined8 in_x4;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb8) = in_x4;
  *(undefined8 *)(unaff_x22 + 0xc0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a242f4,0,0);
  return;
}



/* Entry: 101a242f4; end: 101a24d3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a242f4(double param_1,double param_2,undefined1 *param_3)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined1 *puVar16;
  undefined8 uVar17;
  long lVar18;
  long unaff_x22;
  undefined1 *puVar19;
  undefined1 *puVar20;
  int iVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  float fVar25;
  double dStack_110;
  undefined8 uStack_108;
  double dStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  double dStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  double dStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  double dStack_a0;
  undefined8 uStack_98;
  double dStack_90;
  undefined8 uStack_88;
  
  func_0x0001000d224c(unaff_x22 + 0x50);
  lVar18 = *(long *)(unaff_x22 + 0x50);
  *(long *)(unaff_x22 + 200) = lVar18;
  if (lVar18 == 0) {
    FUN_101a25678();
    func_0x000107c613f8(&UNK_11042d768,param_3,0,0);
    *param_3 = 1;
    func_0x000107c61654();
  }
  else {
    puVar5 = *(undefined1 **)(unaff_x22 + 0xb0);
    func_0x000107c309c0();
    func_0x000107c61180();
    puVar19 = puVar5;
    func_0x000107c30970();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    uVar6 = 0;
    FUN_101a256dc(0,0x112deb088,&PTR_PTR_1126bf6a8);
    puVar5 = puVar19;
    func_0x000107c5fc54(puVar19,uVar6);
    func_0x000107c61170(puVar19);
    if ((ulong)puVar5 >> 0x3e == 0) {
      puVar19 = *(undefined1 **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar19 = (undefined1 *)((ulong)puVar5 & 0xffffffffffffff8);
      if ((undefined1 *)0x7fffffffffffffff < puVar5) {
        puVar19 = puVar5;
      }
      func_0x000107c60480();
    }
    if (puVar19 != (undefined1 *)0x0) {
      puVar20 = (undefined1 *)0x0;
      do {
        if (((ulong)puVar5 & 0xc000000000000001) == 0) {
          if (*(undefined1 **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10) <= puVar20) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101a24620);
            (*pcVar4)();
          }
          puVar7 = *(undefined1 **)(puVar5 + (long)puVar20 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          puVar7 = puVar20;
          func_0x000101a25158(puVar20,puVar5,&PTR_PTR_1126bf6a8,0x112deb088);
        }
        *(undefined1 **)(unaff_x22 + 0xd0) = puVar7;
        puVar16 = puVar20 + 1;
        if (SCARRY8((long)puVar20,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101a2461c);
          (*pcVar4)();
        }
        puVar8 = puVar7;
        func_0x000107c30978();
        if (puVar8 == (undefined1 *)0x1) {
          func_0x000107c6142c(puVar5);
          puVar19 = puVar7;
          func_0x000107c30980();
          func_0x000107c61180();
          uVar6 = 0;
          FUN_101a256dc(0,0x112deb0b0,&PTR_PTR_1126bf6a0);
          puVar5 = puVar19;
          func_0x000107c5fc54(puVar19,uVar6);
          func_0x000107c61170(puVar19);
          if ((ulong)puVar5 >> 0x3e == 0) {
            if (*(long *)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10) == 0) goto LAB_101a24688;
LAB_101a244c8:
            if (((ulong)puVar5 & 0xc000000000000001) == 0) {
              if (*(long *)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x101a24720);
                (*pcVar4)();
              }
              puVar19 = *(undefined1 **)(puVar5 + 0x20);
              func_0x000107c61174();
            }
            else {
              puVar19 = (undefined1 *)0x0;
              func_0x000101a25158(0,puVar5,&PTR_PTR_1126bf6a0,0x112deb0b0);
            }
            *(undefined1 **)(unaff_x22 + 0xd8) = puVar19;
            func_0x000107c6142c(puVar5);
            puVar5 = puVar19;
            func_0x000107c30988();
            func_0x000107c61180();
            puVar20 = puVar5;
            func_0x000109120aa8();
            func_0x000107c61180();
            *(undefined1 **)(unaff_x22 + 0xe0) = puVar20;
            func_0x000107c61170();
            if (puVar20 != (undefined1 *)0x0) {
              uVar9 = *(ulong *)(unaff_x22 + 0xb0);
              func_0x000107c309c4();
              func_0x000107c61180();
              if (uVar9 == 0) {
LAB_101a2473c:
                bVar3 = true;
              }
              else {
                uVar6 = 0;
                FUN_101a256dc(0,0x112d53840,&PTR_PTR_1126bf6b8);
                uVar10 = uVar9;
                func_0x000107c5fc54(uVar9,uVar6);
                func_0x000107c61170(uVar9);
                if (uVar10 >> 0x3e == 0) {
                  uVar9 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
                }
                else {
                  uVar9 = uVar10 & 0xffffffffffffff8;
                  if (0x7fffffffffffffff < uVar10) {
                    uVar9 = uVar10;
                  }
                  func_0x000107c60480();
                }
                if (uVar9 == 0) {
                  func_0x000107c6142c(uVar10);
                  goto LAB_101a2473c;
                }
                if ((uVar10 & 0xc000000000000001) == 0) {
                  if (*(long *)((uVar10 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x101a24abc);
                    (*pcVar4)();
                  }
                  lVar11 = *(long *)(uVar10 + 0x20);
                  func_0x000107c61174();
                }
                else {
                  lVar11 = 0;
                  func_0x000101a25158(0,uVar10,&PTR_PTR_1126bf6b8,0x112d53840);
                }
                func_0x000107c6142c(uVar10);
                lVar12 = lVar11;
                func_0x000107c309b4();
                func_0x000107c61180();
                func_0x000107c61170(lVar11);
                if (lVar12 == 0) goto LAB_101a2473c;
                func_0x000107c61170(lVar12);
                bVar3 = false;
              }
              uVar9 = *(ulong *)(unaff_x22 + 0xb0);
              func_0x000107c309c4();
              func_0x000107c61180();
              puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
              if (uVar9 != 0) {
                uVar6 = 0;
                FUN_101a256dc(0,0x112d53840,&PTR_PTR_1126bf6b8);
                uVar10 = uVar9;
                func_0x000107c5fc54(uVar9,uVar6);
                func_0x000107c61170(uVar9);
                if (uVar10 >> 0x3e == 0) {
                  uVar9 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
                }
                else {
                  uVar9 = uVar10 & 0xffffffffffffff8;
                  if (0x7fffffffffffffff < uVar10) {
                    uVar9 = uVar10;
                  }
                  func_0x000107c60480();
                }
                if (uVar9 == 0) {
                  func_0x000107c6142c(uVar10);
                  puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
                }
                else {
                  if ((uVar10 & 0xc000000000000001) == 0) {
                    if (*(long *)((uVar10 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
                      pcVar4 = (code *)SoftwareBreakpoint(1,0x101a24ac0);
                      (*pcVar4)();
                    }
                    puVar13 = *(undefined **)(uVar10 + 0x20);
                    func_0x000107c61174();
                  }
                  else {
                    puVar13 = (undefined *)0x0;
                    func_0x000101a25158(0,uVar10,&PTR_PTR_1126bf6b8,0x112d53840);
                  }
                  func_0x000107c6142c(uVar10);
                  puVar14 = puVar13;
                  func_0x000107c309b4();
                  func_0x000107c61180();
                  func_0x000107c61170(puVar13);
                  puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
                  if (puVar14 != (undefined *)0x0) {
                    uVar6 = 0;
                    FUN_101a256dc(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                    puVar15 = puVar14;
                    func_0x000107c5fc54(puVar14,uVar6);
                    func_0x000107c61170(puVar14);
                    puVar14 = puVar15;
                    FUN_101a24f28();
                    func_0x000107c6142c(puVar15);
                    if (puVar14 != (undefined *)0x0) {
                      puVar13 = puVar14;
                    }
                  }
                }
              }
              cVar2 = *(char *)(unaff_x22 + 0xbc);
              iVar21 = (int)*(undefined8 *)(*(long *)(unaff_x22 + 0xc0) + _DAT_112dec2c8);
              uVar6 = 0xd00000000000001d;
              func_0x000107c5fadc(0xd00000000000001d,0x800000010efc8e20);
              func_0x000107c3ebd4();
              func_0x000107c61170(uVar6);
              if ((iVar21 == 0) || (cVar2 == '\x01')) {
                if (bVar3) goto LAB_101a24a1c;
              }
              else {
                fVar25 = *(float *)(unaff_x22 + 0xb8);
                func_0x000107c5b078(puVar20);
                func_0x000107c5b078(puVar20);
                bVar1 = false;
                if (ABS((float)(param_1 / param_2) - fVar25) <= 0.01) {
                  bVar1 = bVar3;
                }
                if (bVar1) {
LAB_101a24a1c:
                  func_0x000107c615e8(lVar18);
                  func_0x000107c61170(puVar19);
                  func_0x000107c61170(puVar7);
                  func_0x000107c6142c(puVar13);
                    /* WARNING: Could not recover jumptable at 0x000101a24a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (**(code **)(unaff_x22 + 8))(puVar20);
                  return;
                }
              }
              func_0x000107c61174();
              func_0x000107c5b078(puVar20);
              puVar5 = (undefined1 *)0x0;
              puVar16 = puVar19;
              func_0x000109120dc4(puVar19,0);
              func_0x000107c61180();
              func_0x000107c61170(puVar19);
              if (puVar16 != (undefined1 *)0x0) {
                puVar5 = (undefined1 *)0x112dec308;
                func_0x0001000285a8(0x112dec308,&UNK_10d9b80a0);
                puVar19 = puVar16;
                func_0x000107c5fc54(puVar16,puVar5);
                func_0x000107c61170(puVar16);
                if ((ulong)puVar19 >> 0x3e == 0) {
                  puVar16 = *(undefined1 **)(((ulong)puVar19 & 0xffffffffffffff8) + 0x10);
                }
                else {
                  puVar16 = (undefined1 *)((ulong)puVar19 & 0xffffffffffffff8);
                  if ((undefined1 *)0x7fffffffffffffff < puVar19) {
                    puVar16 = puVar19;
                  }
                  func_0x000107c60480();
                }
                if (puVar16 == (undefined1 *)0x0) {
                  func_0x000107c6142c(puVar19);
                }
                else {
                  if (((ulong)puVar19 & 0xc000000000000001) == 0) {
                    if (*(long *)(((ulong)puVar19 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
                      pcVar4 = (code *)SoftwareBreakpoint(1,0x101a24d3c);
                      (*pcVar4)();
                    }
                    lVar11 = *(long *)(puVar19 + 0x20);
                    func_0x000107c61174();
                  }
                  else {
                    lVar11 = 0;
                    puVar5 = puVar19;
                    func_0x000101a25314(0,puVar19);
                  }
                  func_0x000107c6142c(puVar19);
                  lVar12 = lVar11;
                  func_0x000107c51b0c();
                  func_0x000107c61180();
                  if (lVar12 != 0) {
                    func_0x0001091237fc(&uStack_b0);
                    uStack_c8 = uStack_a8;
                    uStack_d0 = uStack_b0;
                    uStack_b8 = uStack_98;
                    dStack_c0 = dStack_a0;
                    uStack_d8 = uStack_88;
                    dStack_e0 = dStack_90;
                    func_0x000109123828(&uStack_b0,lVar12);
                    uStack_e8 = uStack_a8;
                    uStack_f0 = uStack_b0;
                    uStack_108 = uStack_88;
                    dStack_110 = dStack_90;
                    uStack_f8 = uStack_98;
                    dStack_100 = dStack_a0;
                    func_0x000107c61170(lVar11);
                    func_0x000107c61170(lVar12);
                    dVar22 = dStack_a0;
                    dVar23 = dStack_90;
                    goto LAB_101a24afc;
                  }
                  func_0x000107c61170(lVar11);
                }
              }
              dVar23 = 1.0;
              uStack_d8 = 0;
              dStack_e0 = 0.0;
              uStack_c8 = 0;
              uStack_d0 = 0x3ff0000000000000;
              uStack_f8 = 0x3ff0000000000000;
              dStack_100 = 0.0;
              uStack_e8 = 0;
              uStack_f0 = 0x3ff0000000000000;
              uStack_b8 = 0x3ff0000000000000;
              dStack_c0 = 0.0;
              dVar22 = 0.0;
              uStack_108 = 0;
              dStack_110 = 0.0;
LAB_101a24afc:
              func_0x000107c5b078(puVar20);
              if (cVar2 != '\x01') {
                func_0x000107c308ac();
              }
              dVar24 = dVar23;
              if (dVar23 < dVar22) {
                dVar24 = dVar22;
              }
              if (dVar24 < 1280.0) {
                dVar22 = dVar22 * (1280.0 / dVar24);
                dVar23 = dVar23 * (1280.0 / dVar24);
                func_0x000107c308bc(dVar22,dVar23,2);
              }
              func_0x000107c61174(puVar20);
              func_0x000107c3097c();
              func_0x000107c61180();
              if (puVar7 == (undefined1 *)0x0) {
                func_0x000107c5faec();
                func_0x000107c5fadc();
                func_0x000107c6142c(puVar5);
              }
              uVar6 = 0x112deb068;
              func_0x0001000285a8(0x112deb068,&UNK_10d9b85d0);
              puVar14 = puVar13;
              func_0x000107c5fc48(puVar13,uVar6);
              func_0x000107c6142c(puVar13);
              func_0x000107c450e0(puVar20);
              puVar13 = PTR__kCMTimeZero_110348670;
              uVar6 = *(undefined8 *)PTR__kCMTimeZero_110348670;
              uVar17 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
              *(undefined8 *)(unaff_x22 + 0x58) = uStack_c8;
              *(undefined8 *)(unaff_x22 + 0x50) = uStack_d0;
              *(undefined8 *)(unaff_x22 + 0x68) = uStack_b8;
              *(double *)(unaff_x22 + 0x60) = dStack_c0;
              *(undefined8 *)(unaff_x22 + 0x78) = uStack_d8;
              *(double *)(unaff_x22 + 0x70) = dStack_e0;
              *(undefined8 *)(unaff_x22 + 0x88) = uStack_e8;
              *(undefined8 *)(unaff_x22 + 0x80) = uStack_f0;
              *(undefined8 *)(unaff_x22 + 0x98) = uStack_f8;
              *(double *)(unaff_x22 + 0x90) = dStack_100;
              *(undefined8 *)(unaff_x22 + 0xa8) = uStack_108;
              *(double *)(unaff_x22 + 0xa0) = dStack_110;
              *(undefined8 *)(unaff_x22 + 0x100) = uVar6;
              *(undefined8 *)(unaff_x22 + 0x108) = *(undefined8 *)(puVar13 + 8);
              *(undefined8 *)(unaff_x22 + 0x110) = uVar17;
              func_0x000107c5bbac(dVar22,dVar23);
              func_0x000107c61180();
              *(long *)(unaff_x22 + 0xe8) = lVar18;
              func_0x000107c61170(puVar14);
              func_0x000107c61170(puVar7);
              func_0x000107c61170(puVar20);
              *(undefined8 **)(unaff_x22 + 0x38) = (undefined8 *)(unaff_x22 + 0x80);
              *(long *)(unaff_x22 + 0x10) = unaff_x22;
              *(code **)(unaff_x22 + 0x18) = FUN_101a24d3c;
              lVar11 = unaff_x22 + 0x10;
              func_0x000107c61448(lVar11,1);
              puVar13 = &UNK_11042d680;
              func_0x000107c613fc(&UNK_11042d680,0x18,7);
              *(long *)(puVar13 + 0x10) = lVar11;
              *(code **)(unaff_x22 + 0x70) = FUN_101a256b8;
              *(undefined **)(unaff_x22 + 0x78) = puVar13;
              *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
              *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
              *(undefined **)(unaff_x22 + 0x60) = &UNK_10134a1dc;
              *(undefined **)(unaff_x22 + 0x68) = &UNK_11042d698;
              lVar11 = unaff_x22 + 0x50;
              func_0x000107c60bc4(lVar11);
              func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
              func_0x000107c5dc64(lVar18);
              func_0x000107c60bd0(lVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
              return;
            }
            FUN_101a25678();
            func_0x000107c613f8(&UNK_11042d768,puVar5,0,0);
            *puVar5 = 4;
            func_0x000107c61654();
            func_0x000107c61170(puVar19);
          }
          else {
            puVar19 = (undefined1 *)((ulong)puVar5 & 0xffffffffffffff8);
            if ((undefined1 *)0x7fffffffffffffff < puVar5) {
              puVar19 = puVar5;
            }
            func_0x000107c60480();
            if (puVar19 != (undefined1 *)0x0) goto LAB_101a244c8;
LAB_101a24688:
            func_0x000107c6142c();
            FUN_101a25678();
            func_0x000107c613f8(&UNK_11042d768,puVar5,0,0);
            *puVar5 = 3;
            func_0x000107c61654();
          }
          func_0x000107c61170(puVar7);
          goto LAB_101a246c8;
        }
        func_0x000107c61170(puVar7);
        puVar20 = puVar20 + 1;
      } while (puVar16 != puVar19);
    }
    func_0x000107c6142c();
    FUN_101a25678();
    func_0x000107c613f8(&UNK_11042d768,puVar5,0,0);
    *puVar5 = 2;
    func_0x000107c61654();
LAB_101a246c8:
    func_0x000107c615e8(lVar18);
  }
                    /* WARNING: Could not recover jumptable at 0x000101a246f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a24d3c; end: 101a24da7;  */

void FUN_101a24d3c(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xf0) = *(long *)(lVar2 + 0x30);
  if (*(long *)(lVar2 + 0x30) == 0) {
    *(undefined8 *)(lVar2 + 0xf8) = *(undefined8 *)(lVar2 + 0x80);
    pcVar1 = FUN_101a24da8;
  }
  else {
    func_0x000107c61654();
    pcVar1 = FUN_101a24e10;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101a24da8; end: 101a24e0f;  */

void FUN_101a24da8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar4 = *(undefined8 *)(unaff_x22 + 200);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xe0));
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000101a24e0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0xf8));
  return;
}



/* Entry: 101a24e10; end: 101a24e73;  */

void FUN_101a24e10(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar4 = *(undefined8 *)(unaff_x22 + 200);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xe0));
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000101a24e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a24e74; end: 101a24f27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a24e74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lStack_48;
  
  func_0x0001000d224c(&lStack_48);
  if (lStack_48 != 0) {
    func_0x000107c5fadc(param_1,param_2);
    uVar1 = 0;
    func_0x000107c5fadc(0,0xe000000000000000);
    func_0x000107c5b078(param_3);
    func_0x000107c5be20(lStack_48);
    func_0x000107c615e8(lStack_48);
    func_0x000107c61170(param_1);
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 101a24f28; end: 101a250c7;  */

undefined * FUN_101a24f28(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puStack_70;
  undefined *puStack_68;
  
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar4 = param_1;
    }
    func_0x000107c60480(uVar4);
  }
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_101a2576c(0,uVar4 & ((long)uVar4 >> 0x3f ^ 0xffffffffffffffffU),0);
  puVar7 = puStack_68;
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    puVar2 = puStack_68;
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar4 = param_1;
    }
    func_0x000107c60480();
    puVar2 = puStack_68;
  }
  puStack_68 = puVar7;
  if (uVar4 != 0) {
    uVar8 = 0;
    puStack_68 = puVar2;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101a250b8);
          (*pcVar3)();
        }
        uVar5 = *(ulong *)(param_1 + uVar8 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar5 = uVar8;
        func_0x000101a25158(uVar8,param_1,&PTR__OBJC_CLASS___NSObject_1126b1300,0x112d36830);
      }
      uVar1 = uVar8 + 1;
      if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101a250b4);
        (*pcVar3)();
      }
      puStack_70 = PTR_DAT_11269f758;
      uVar6 = uVar5;
      func_0x000107c61494(uVar5,1,&puStack_70);
      if (uVar6 == 0) {
        func_0x000107c61574(puVar7);
        func_0x000107c61170(uVar5);
        return (undefined *)0x0;
      }
      uVar5 = *(ulong *)(puVar7 + 0x10);
      puStack_68 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar5) {
        FUN_101a2576c(1 < *(ulong *)(puVar7 + 0x18),uVar5 + 1,1);
      }
      *(ulong *)(puStack_68 + 0x10) = uVar5 + 1;
      *(ulong *)(puStack_68 + uVar5 * 8 + 0x20) = uVar6;
      uVar8 = uVar8 + 1;
      puVar7 = puStack_68;
    } while (uVar1 != uVar4);
  }
  return puStack_68;
}



/* Entry: 101a250c8; end: 101a254d3;  */

void FUN_101a250c8(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long *plVar2;
  
  if (param_2 != 0) {
    uVar1 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    plVar2 = (long *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *plVar2 = param_2;
    func_0x000107c614b0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(param_3,uVar1);
    return;
  }
  **(undefined8 **)(*(long *)(param_3 + 0x40) + 0x28) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResume_110350088)(param_3);
  return;
}



/* Entry: 101a254d4; end: 101a25513;  */

void FUN_101a254d4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101a25510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101a25514; end: 101a2558b;  */

void FUN_101a25514(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101a25b30;
  (*(code *)&UNK_100e8ded0)(uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 101a2558c; end: 101a255f3;  */

void FUN_101a2558c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101a255c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101a255f4; end: 101a25677;  */

void FUN_101a255f4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101a25b38;
  (*(code *)&UNK_100e8df9c)(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 101a25678; end: 101a256b7;  */

void FUN_101a25678(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dec300 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9b8154;
  func_0x000107c61520(&UNK_10d9b8154,&UNK_11042d768);
  puRam0000000112dec300 = puVar1;
  return;
}



/* Entry: 101a256b8; end: 101a256db;  */

void FUN_101a256b8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if (param_2 != 0) {
    uVar1 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    plVar2 = (long *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *plVar2 = param_2;
    func_0x000107c614b0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(lVar3,uVar1);
    return;
  }
  **(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar3);
  return;
}



/* Entry: 101a256dc; end: 101a2571b;  */

void FUN_101a256dc(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101a2571c; end: 101a2575b;  */

void FUN_101a2571c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a2575c,0,0);
  return;
}



/* Entry: 101a2575c; end: 101a2576b;  */

void FUN_101a2575c(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000101a25768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50),*(undefined1 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 101a2576c; end: 101a25787;  */

void FUN_101a2576c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_101a25788();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 101a25788; end: 101a258b7;  */

undefined * FUN_101a25788(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101a258b8);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    FUN_101a02138();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0x112deb068;
    func_0x0001000285a8(0x112deb068,&UNK_10d9b85d0);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}


