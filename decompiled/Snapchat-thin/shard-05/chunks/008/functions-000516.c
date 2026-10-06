/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1040d11c8; end: 1040d1287;  */

undefined8 FUN_1040d11c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  (**(code **)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x10))();
  return param_1;
}



/* Entry: 1040d1288; end: 1040d137b;  */

uint * FUN_1040d1288(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  
  if (param_2 == 0) {
    return (uint *)0x0;
  }
  lVar6 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar2 = *(uint *)(lVar6 + 0x54);
  if (param_2 < uVar2 || param_2 - uVar2 == 0) goto LAB_1040d1320;
  uVar5 = *(ulong *)(lVar6 + 0x40);
  uVar4 = (uint)uVar5;
  uVar3 = uVar4 << 3;
  if (uVar4 < 4) {
    uVar7 = ((param_2 - uVar2) + ~(-1 << (ulong)(uVar3 & 0x1f)) >> (ulong)(uVar3 & 0x1f)) + 1;
    if (0xff < uVar7) {
      if (uVar7 >> 0x10 == 0) {
        uVar7 = (uint)*(ushort *)((long)param_1 + uVar5);
      }
      else {
        uVar7 = *(uint *)((long)param_1 + uVar5);
      }
      goto LAB_1040d12b8;
    }
    if (1 < uVar7) goto LAB_1040d12b4;
  }
  else {
LAB_1040d12b4:
    uVar7 = (uint)*(byte *)((long)param_1 + uVar5);
LAB_1040d12b8:
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
            uVar5 = (ulong)(byte)*param_1;
          }
          else {
            uVar5 = (ulong)(ushort)*param_1;
          }
        }
        else if (uVar3 == 3) {
          uVar5 = (ulong)(uint3)*param_1;
        }
        else {
          uVar5 = (ulong)*param_1;
        }
      }
      return (uint *)(ulong)(uVar2 + ((uint)uVar5 | uVar1) + 1);
    }
  }
  if (uVar2 == 0) {
    return (uint *)0x0;
  }
LAB_1040d1320:
                    /* WARNING: Could not recover jumptable at 0x0001040d1324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar6 + 0x30))();
  return param_1;
}



/* Entry: 1040d137c; end: 1040d1527;  */

void FUN_1040d137c(uint *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  byte bVar8;
  
  lVar4 = *(long *)(*(long *)(param_4 + 0x10) + -8);
  uVar2 = *(uint *)(lVar4 + 0x54);
  lVar6 = *(long *)(lVar4 + 0x40);
  uVar5 = (uint)lVar6;
  if (param_3 < uVar2 || param_3 - uVar2 == 0) {
    bVar8 = 0;
  }
  else if (uVar5 < 4) {
    uVar1 = ((param_3 - uVar2) + ~(-1 << (ulong)(uVar5 << 3 & 0x1f)) >> (ulong)(uVar5 << 3 & 0x1f))
            + 1;
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
  if (uVar2 < param_2) {
    param_2 = param_2 + ~uVar2;
    if (uVar5 < 4) {
      iVar7 = (param_2 >> (ulong)(uVar5 << 3 & 0x1f)) + 1;
      if (uVar5 != 0) {
        uVar2 = param_2 & (-1 << (ulong)(uVar5 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,lVar6);
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
      _bzero(param_1,lVar6);
      *param_1 = param_2;
      iVar7 = 1;
    }
    if (bVar8 < 2) {
      if (bVar8 != 0) {
        *(char *)((long)param_1 + lVar6) = (char)iVar7;
      }
    }
    else if (bVar8 == 2) {
      *(short *)((long)param_1 + lVar6) = (short)iVar7;
    }
    else {
      *(int *)((long)param_1 + lVar6) = iVar7;
    }
  }
  else {
    if (bVar8 < 2) {
      if (bVar8 != 0) {
        *(undefined1 *)((long)param_1 + lVar6) = 0;
      }
    }
    else if (bVar8 == 2) {
      *(undefined2 *)((long)param_1 + lVar6) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar6) = 0;
    }
    if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001040d14c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar4 + 0x38))();
      return;
    }
  }
  return;
}



/* Entry: 1040d1528; end: 1040d1533;  */

void FUN_1040d1528(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e7efce8);
  return;
}



/* Entry: 1040d1534; end: 1040d1943;  */

void FUN_1040d1534(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  lVar1 = 0x13f;
  _swift_getAssociatedTypeWitness
            (0x13f,uVar2,*(undefined8 *)(param_1 + 0x10),PTR___sSciTL_11034fea8,
             PTR___s13AsyncIteratorSciTl_11034fb50);
  if (uVar2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0,1,&lStack_28,param_1 + 0x28);
  }
  return;
}



/* Entry: 1040d1944; end: 1040d1b17;  */

void FUN_1040d1944(uint *param_1,undefined8 param_2,uint param_3,long param_4)

{
  uint uVar1;
  undefined2 uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  byte bVar9;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x20),*(undefined8 *)(param_4 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar4 = *(long *)(lVar3 + -8);
  uVar1 = *(uint *)(lVar4 + 0x54);
  lVar6 = *(long *)(lVar4 + 0x40);
  uVar5 = (uint)lVar6;
  if (param_3 < uVar1 || param_3 - uVar1 == 0) {
    bVar9 = 0;
  }
  else if (uVar5 < 4) {
    uVar7 = ((param_3 - uVar1) + ~(-1 << (ulong)(uVar5 << 3 & 0x1f)) >> (ulong)(uVar5 << 3 & 0x1f))
            + 1;
    bVar9 = 2;
    if (0xffff < uVar7) {
      bVar9 = 4;
    }
    if (uVar7 < 0x100) {
      bVar9 = 1 < uVar7;
    }
  }
  else {
    bVar9 = 1;
  }
  uVar7 = (uint)param_2;
  if (uVar1 < uVar7) {
    uVar7 = uVar7 + ~uVar1;
    if (uVar5 < 4) {
      iVar8 = (uVar7 >> (ulong)(uVar5 << 3 & 0x1f)) + 1;
      if (uVar5 != 0) {
        uVar1 = uVar7 & (-1 << (ulong)(uVar5 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,lVar6);
        uVar2 = (undefined2)uVar1;
        if (uVar5 == 3) {
          *(undefined2 *)param_1 = uVar2;
          *(char *)((long)param_1 + 2) = (char)(uVar1 >> 0x10);
        }
        else if (uVar5 == 2) {
          *(undefined2 *)param_1 = uVar2;
        }
        else {
          *(char *)param_1 = (char)uVar7;
        }
      }
    }
    else {
      _bzero(param_1,lVar6);
      *param_1 = uVar7;
      iVar8 = 1;
    }
    if (bVar9 < 2) {
      if (bVar9 != 0) {
        *(char *)((long)param_1 + lVar6) = (char)iVar8;
      }
    }
    else if (bVar9 == 2) {
      *(short *)((long)param_1 + lVar6) = (short)iVar8;
    }
    else {
      *(int *)((long)param_1 + lVar6) = iVar8;
    }
  }
  else {
    if (bVar9 < 2) {
      if (bVar9 != 0) {
        *(undefined1 *)((long)param_1 + lVar6) = 0;
      }
    }
    else if (bVar9 == 2) {
      *(undefined2 *)((long)param_1 + lVar6) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar6) = 0;
    }
    if (uVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001040d1ab4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar4 + 0x38))(param_1,param_2,uVar1,lVar3);
      return;
    }
  }
  return;
}



/* Entry: 1040d1b18; end: 1040d1b2b;  */

void FUN_1040d1b18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e7efd30);
  return;
}



/* Entry: 1040d1b2c; end: 1040d1bff;  */

void FUN_1040d1b2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  ulong uVar1;
  long lVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(long *)(unaff_x22 + 0x30) = param_6;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  lVar2 = *(long *)(param_6 + -8);
  *(long *)(unaff_x22 + 0x38) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x40) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x1040d1b88,0,0);
  return;
}



/* Entry: 1040d1c00; end: 1040d1c5f;  */

void FUN_1040d1c00(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *unaff_x22;
  long lVar5;
  
  lVar4 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar4 + 0x40);
  uVar2 = *(undefined8 *)(lVar4 + 0x30);
  lVar3 = *(long *)(lVar4 + 0x38);
  lVar5 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x48));
  (**(code **)(lVar3 + 8))(uVar1,uVar2);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001040d1c5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar5 + 8))();
  return;
}



/* Entry: 1040d1c60; end: 1040d1c6b;  */

void FUN_1040d1c60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e7efd78);
  return;
}



/* Entry: 1040d1c6c; end: 1040d1d8f;  */

void FUN_1040d1c6c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  
  lVar2 = 0;
  FUN_1040d1d90(0,param_6,param_7,param_8);
  lVar6 = (long)*(int *)(lVar2 + 0x2c);
  lVar4 = *(long *)(param_7 + -8);
  pcVar5 = *(code **)(lVar4 + 0x38);
  (*pcVar5)(param_1 + lVar6,1,1,param_7);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_8,param_6,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1,param_2,lVar3);
  lVar3 = 0;
  __sSqMa(0,param_7);
  (**(code **)(*(long *)(lVar3 + -8) + 8))(param_1 + lVar6,lVar3);
  (**(code **)(lVar4 + 0x20))(param_1 + lVar6,param_3,param_7);
  (*pcVar5)(param_1 + lVar6,0,1,param_7);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar2 + 0x30));
  *puVar1 = param_4;
  puVar1[1] = param_5;
  return;
}



/* Entry: 1040d1d90; end: 1040d1d9b;  */

void FUN_1040d1d90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e7efdb4);
  return;
}



/* Entry: 1040d1d9c; end: 1040d1eaf;  */

void FUN_1040d1d9c(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(param_2 + 0x10);
  lVar1 = 0;
  _swift_getAssociatedTypeWitness();
  *(long *)(unaff_x22 + 0x38) = lVar1;
  lVar4 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x40) = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x48) = uVar2;
  lVar4 = 0;
  __sSqMa(0,lVar1);
  *(long *)(unaff_x22 + 0x50) = lVar4;
  lVar1 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x58) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar2;
  lVar4 = *(long *)(param_2 + 0x18);
  *(long *)(unaff_x22 + 0x70) = lVar4;
  lVar1 = 0;
  __sSqMa(0,lVar4);
  *(long *)(unaff_x22 + 0x78) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x80) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x88) = uVar2;
  lVar1 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x90) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x98) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1040d1eb0,0,0);
  return;
}



/* Entry: 1040d1eb0; end: 1040d203f;  */

void FUN_1040d1eb0(void)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x88);
  lVar1 = *(long *)(unaff_x22 + 0x90);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x70);
  iVar2 = *(int *)(*(long *)(unaff_x22 + 0x18) + 0x2c);
  *(int *)(unaff_x22 + 0xc0) = iVar2;
  (**(code **)(*(long *)(unaff_x22 + 0x80) + 0x10))
            (uVar4,*(long *)(unaff_x22 + 0x20) + (long)iVar2,*(undefined8 *)(unaff_x22 + 0x78));
  (**(code **)(lVar1 + 0x30))(uVar4,1,uVar6);
  if ((int)uVar4 == 1) {
    lVar1 = *(long *)(unaff_x22 + 0x90);
    (**(code **)(*(long *)(unaff_x22 + 0x80) + 8))
              (*(undefined8 *)(unaff_x22 + 0x88),*(undefined8 *)(unaff_x22 + 0x78));
    uVar7 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x48);
    (**(code **)(lVar1 + 0x38))
              (*(undefined8 *)(unaff_x22 + 0x10),1,1,*(undefined8 *)(unaff_x22 + 0x70));
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar6);
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar8);
    _swift_task_dealloc(uVar9);
                    /* WARNING: Could not recover jumptable at 0x0001040d1f8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x30);
  (**(code **)(*(long *)(unaff_x22 + 0x90) + 0x20))
            (*(undefined8 *)(unaff_x22 + 0x98),*(undefined8 *)(unaff_x22 + 0x88),
             *(undefined8 *)(unaff_x22 + 0x70));
  puVar3 = PTR___sSciTL_11034fea8;
  uVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar4,uVar6,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  _swift_getAssociatedConformanceWitness
            (uVar4,uVar6,uVar7,puVar3,PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
  plVar5 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa0) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1040d2040;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)
            (plVar5,*(undefined8 *)(unaff_x22 + 0x68),uVar7,uVar4);
  return;
}



/* Entry: 1040d2040; end: 1040d209b;  */

void FUN_1040d2040(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xa8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xa0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1040d209c;
  }
  else {
    pcVar1 = FUN_1040d23ec;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1040d209c; end: 1040d2277;  */

void FUN_1040d209c(void)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x38);
  lVar2 = *(long *)(unaff_x22 + 0x40);
  (**(code **)(*(long *)(unaff_x22 + 0x58) + 0x10))
            (uVar5,*(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x50));
  (**(code **)(lVar2 + 0x30))(uVar5,1,uVar8);
  if ((int)uVar5 == 1) {
    iVar4 = *(int *)(unaff_x22 + 0xc0);
    lVar2 = *(long *)(unaff_x22 + 0x90);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x78);
    lVar3 = *(long *)(unaff_x22 + 0x80);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x50);
    lVar12 = *(long *)(unaff_x22 + 0x20);
    pcVar7 = *(code **)(*(long *)(unaff_x22 + 0x58) + 8);
    (*pcVar7)(*(undefined8 *)(unaff_x22 + 0x68),uVar11);
    (**(code **)(lVar2 + 8))(uVar8,uVar9);
    (*pcVar7)(uVar10,uVar11);
    (**(code **)(lVar3 + 8))(lVar12 + iVar4,uVar5);
    pcVar7 = *(code **)(lVar2 + 0x38);
    (*pcVar7)(lVar12 + iVar4,1,1,uVar9);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x48);
    (*pcVar7)(*(undefined8 *)(unaff_x22 + 0x10),1,1,*(undefined8 *)(unaff_x22 + 0x70));
    _swift_task_dealloc(uVar9);
    _swift_task_dealloc(uVar8);
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar10);
    _swift_task_dealloc(uVar11);
                    /* WARNING: Could not recover jumptable at 0x0001040d21d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar2 = *(long *)(unaff_x22 + 0x90);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x70);
  lVar3 = *(long *)(unaff_x22 + 0x18);
  lVar12 = *(long *)(unaff_x22 + 0x20);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x10);
  (**(code **)(*(long *)(unaff_x22 + 0x40) + 0x20))
            (*(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)(unaff_x22 + 0x60),
             *(undefined8 *)(unaff_x22 + 0x38));
  pcVar7 = *(code **)(lVar2 + 0x10);
  *(code **)(unaff_x22 + 0xb0) = pcVar7;
  (*pcVar7)(uVar9,uVar5,uVar8);
  piVar1 = *(int **)(lVar12 + *(int *)(lVar3 + 0x30));
  iVar4 = *piVar1;
  plVar6 = (long *)(ulong)(uint)piVar1[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xb8) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1040d2278;
                    /* WARNING: Could not recover jumptable at 0x0001040d2274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar4 + (long)piVar1))
            (*(undefined8 *)(unaff_x22 + 0x10),*(undefined8 *)(unaff_x22 + 0x48));
  return;
}



/* Entry: 1040d2278; end: 1040d22bf;  */

void FUN_1040d2278(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0xb8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1040d22c0,0,0);
  return;
}



/* Entry: 1040d22c0; end: 1040d23eb;  */

void FUN_1040d22c0(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  
  pcVar5 = *(code **)(unaff_x22 + 0xb0);
  lVar12 = (long)*(int *)(unaff_x22 + 0xc0);
  lVar1 = *(long *)(unaff_x22 + 0x90);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  lVar3 = *(long *)(unaff_x22 + 0x80);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar4 = *(long *)(unaff_x22 + 0x58);
  lVar11 = *(long *)(unaff_x22 + 0x20);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x10);
  (**(code **)(*(long *)(unaff_x22 + 0x40) + 8))
            (*(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)(unaff_x22 + 0x38));
  (**(code **)(lVar4 + 8))(uVar6,uVar7);
  (**(code **)(lVar1 + 8))(uVar8,uVar9);
  (**(code **)(lVar3 + 8))(lVar11 + lVar12,uVar2);
  (*pcVar5)(lVar11 + lVar12,uVar10,uVar9);
  pcVar5 = *(code **)(lVar1 + 0x38);
  (*pcVar5)(lVar11 + lVar12,0,1,uVar9);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x48);
  (*pcVar5)(*(undefined8 *)(unaff_x22 + 0x10),0,1,*(undefined8 *)(unaff_x22 + 0x70));
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar9);
                    /* WARNING: Could not recover jumptable at 0x0001040d23e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040d23ec; end: 1040d246f;  */

void FUN_1040d23ec(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x48);
  (**(code **)(*(long *)(unaff_x22 + 0x90) + 8))(uVar2,*(undefined8 *)(unaff_x22 + 0x70));
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar5);
                    /* WARNING: Could not recover jumptable at 0x0001040d246c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040d2470; end: 1040d24cf;  */

void FUN_1040d2470(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long unaff_x20;
  long unaff_x22;
  
  plVar4 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1040d24d0;
  plVar4[3] = param_2;
  plVar4[4] = unaff_x20;
  plVar4[2] = param_1;
  plVar4[5] = *(long *)(param_2 + 0x20);
  plVar4[6] = *(long *)(param_2 + 0x10);
  lVar1 = 0;
  _swift_getAssociatedTypeWitness();
  plVar4[7] = lVar1;
  lVar5 = *(long *)(lVar1 + -8);
  plVar4[8] = lVar5;
  uVar2 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[9] = uVar2;
  lVar5 = 0;
  __sSqMa(0,lVar1);
  plVar4[10] = lVar5;
  lVar1 = *(long *)(lVar5 + -8);
  plVar4[0xb] = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0xc] = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0xd] = uVar2;
  lVar5 = *(long *)(param_2 + 0x18);
  plVar4[0xe] = lVar5;
  lVar1 = 0;
  __sSqMa(0,lVar5);
  plVar4[0xf] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar4[0x10] = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0x11] = uVar2;
  lVar1 = *(long *)(lVar5 + -8);
  plVar4[0x12] = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0x13] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1040d1eb0,0,0);
  return;
}



/* Entry: 1040d24d0; end: 1040d250b;  */

void FUN_1040d24d0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001040d2508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1040d250c; end: 1040d25e3;  */

void FUN_1040d250c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  plVar3[1] = (long)FUN_1040d25e4;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScIsE4next9isolation7ElementQzSgScA_pSgYi_tYa7FailureQzYKF_11034fc50)
            (plVar3,param_1,param_2,param_3,param_5,param_6,uVar2);
  return;
}



/* Entry: 1040d25e4; end: 1040d2653;  */

void FUN_1040d25e4(void)

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
                    /* WARNING: Could not recover jumptable at 0x0001040d2650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1040d2654; end: 1040d27bf;  */

void FUN_1040d2654(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar5 = *(long *)(param_2 + 0x18);
  lVar11 = *(long *)(lVar5 + -8);
  lVar4 = param_2;
  uStack_68 = param_1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  puVar8 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar9 = *(long *)(lVar4 + 0x10);
  lVar7 = *(long *)(lVar9 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar6 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar10 = *(undefined8 *)(lVar4 + 0x20);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar10,lVar9,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = lVar6 - extraout_x8_01;
  (**(code **)(lVar7 + 0x10))(lVar6);
  __sSci17makeAsyncIterator0bC0QzyFTj(lVar4,lVar9,uVar10);
  (**(code **)(lVar11 + 0x10))(puVar8,unaff_x20 + *(int *)(param_2 + 0x2c),lVar5);
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(param_2 + 0x30));
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  _swift_retain(uVar3);
  FUN_1040d1c6c(uStack_68,lVar4,puVar8,uVar2,uVar3,lVar9,lVar5,uVar10);
  return;
}



/* Entry: 1040d27c0; end: 1040d284f;  */

void FUN_1040d27c0(undefined8 param_1,long param_2)

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



/* Entry: 1040d2850; end: 1040d285f;  */

void FUN_1040d2850(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getWitnessTable_11034f410)(&UNK_10dcd6ae8,param_1);
  return;
}



/* Entry: 1040d2860; end: 1040d2927;  */

void FUN_1040d2860(long param_1)

{
  FUN_1040d2654();
                    /* WARNING: Could not recover jumptable at 0x0001040d288c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + -8) + 8))();
  return;
}



/* Entry: 1040d2928; end: 1040d2a33;  */

long * FUN_1040d2928(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  
  lVar8 = *(long *)(param_3 + 0x18);
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  lVar10 = *(long *)(lVar8 + -8);
  uVar6 = (ulong)*(uint *)(lVar10 + 0x50) & 0xff;
  uVar4 = *(long *)(lVar3 + 0x40) + uVar6;
  lVar2 = *(long *)(lVar10 + 0x40) + 7;
  uVar1 = (uint)uVar6 | *(uint *)(lVar3 + 0x50) & 0xf8;
  if ((uVar1 < 8 && ((*(uint *)(lVar3 + 0x50) | *(uint *)(lVar10 + 0x50)) & 0x100000) == 0) &&
      (lVar2 + (uVar4 & (uVar6 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 0x10 < 0x19) {
    (**(code **)(lVar3 + 0x10))(param_1);
    uVar9 = uVar4 + (long)param_1 & ~uVar6;
    uVar4 = uVar4 + (long)param_2 & ~uVar6;
    (**(code **)(lVar10 + 0x10))(uVar9,uVar4,lVar8);
    puVar5 = (undefined8 *)(lVar2 + uVar9 & 0xffffffffffffff8);
    puVar7 = (undefined8 *)(lVar2 + uVar4 & 0xfffffffffffffff8);
    lVar2 = puVar7[1];
    uVar11 = *puVar7;
    puVar5[1] = puVar7[1];
    *puVar5 = uVar11;
  }
  else {
    uVar4 = (ulong)(uVar1 | 7);
    lVar2 = *param_2;
    *param_1 = lVar2;
    param_1 = (long *)(lVar2 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)));
  }
  _swift_retain(lVar2);
  return param_1;
}



/* Entry: 1040d2a34; end: 1040d2d1b;  */

void FUN_1040d2a34(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  (**(code **)(lVar3 + 8))();
  lVar2 = *(long *)(*(long *)(param_2 + 0x18) + -8);
  uVar1 = *(long *)(lVar3 + 0x40) + param_1 + (ulong)*(byte *)(lVar2 + 0x50) &
          ((ulong)*(byte *)(lVar2 + 0x50) ^ 0xffffffffffffffff);
  (**(code **)(lVar2 + 8))(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)
            (*(undefined8 *)((*(long *)(lVar2 + 0x40) + uVar1 + 7 & 0xffffffffffffff8) + 8));
  return;
}



/* Entry: 1040d2d1c; end: 1040d2e57;  */

int * FUN_1040d2d1c(int *param_1,uint param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  
  lVar13 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar6 = *(uint *)(lVar13 + 0x54);
  lVar12 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar7 = *(uint *)(lVar12 + 0x54);
  uVar3 = uVar7;
  if (uVar7 <= uVar6) {
    uVar3 = uVar6;
  }
  if (uVar3 < 0x80000000) {
    uVar3 = 0x7fffffff;
  }
  if (param_2 == 0) {
    return (int *)0x0;
  }
  uVar14 = (ulong)*(byte *)(lVar12 + 0x50);
  uVar11 = *(long *)(lVar13 + 0x40) + uVar14;
  lVar1 = *(long *)(lVar12 + 0x40) + 7;
  if (uVar3 <= param_2 && param_2 - uVar3 != 0) {
    uVar2 = (lVar1 + (uVar11 & (uVar14 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 0x10;
    uVar10 = 2;
    uVar5 = uVar10;
    if ((uVar2 & 0xfffffff8) == 0) {
      uVar5 = (param_2 - uVar3) + 1;
    }
    if (0xffff < uVar5) {
      uVar10 = 4;
    }
    if (uVar5 < 0x100) {
      uVar10 = 1;
    }
    uVar4 = 0;
    if (1 < uVar5) {
      uVar4 = uVar10;
    }
    if (uVar4 < 2) {
      if ((uVar4 != 0) &&
         (uVar10 = (uint)*(byte *)((long)param_1 + uVar2), *(byte *)((long)param_1 + uVar2) != 0))
      goto LAB_1040d2dd0;
    }
    else if (uVar4 == 2) {
      uVar10 = (uint)*(ushort *)((long)param_1 + uVar2);
      if (*(ushort *)((long)param_1 + uVar2) != 0) {
LAB_1040d2dd0:
        iVar8 = uVar10 - 1;
        if ((uVar2 & 0xfffffff8) != 0) {
          iVar8 = *param_1;
        }
        return (int *)(ulong)(uVar3 + iVar8 + 1);
      }
    }
    else {
      uVar10 = *(uint *)((long)param_1 + uVar2);
      if (uVar10 != 0) goto LAB_1040d2dd0;
    }
  }
  if (uVar6 == uVar3) {
                    /* WARNING: Could not recover jumptable at 0x0001040d2e04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar13 + 0x30))(param_1,uVar6,*(long *)(param_3 + 0x10));
    return param_1;
  }
  piVar9 = (int *)(uVar11 + (long)param_1 & ~uVar14);
  if (uVar7 == uVar3) {
                    /* WARNING: Could not recover jumptable at 0x0001040d2e20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar12 + 0x30))();
    return piVar9;
  }
  uVar11 = *(ulong *)(lVar1 + (long)piVar9 & 0xffffffffffffff8);
  if (0xfffffffe < uVar11) {
    uVar11 = 0xffffffff;
  }
  return (int *)(ulong)((int)uVar11 + 1);
}



/* Entry: 1040d2e58; end: 1040d2ff7;  */

void FUN_1040d2e58(int *param_1,undefined8 param_2,uint param_3,long param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  code *UNRECOVERED_JUMPTABLE;
  ulong *puVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  
  lVar6 = *(long *)(param_4 + 0x10);
  lVar11 = *(long *)(param_4 + 0x18);
  lVar15 = *(long *)(lVar6 + -8);
  uVar7 = *(uint *)(lVar15 + 0x54);
  lVar14 = *(long *)(lVar11 + -8);
  uVar10 = *(uint *)(lVar14 + 0x54);
  uVar4 = uVar10;
  if (uVar10 <= uVar7) {
    uVar4 = uVar7;
  }
  if (uVar4 < 0x80000000) {
    uVar4 = 0x7fffffff;
  }
  uVar16 = (ulong)*(byte *)(lVar14 + 0x50);
  uVar3 = *(long *)(lVar15 + 0x40) + uVar16;
  lVar1 = *(long *)(lVar14 + 0x40) + 7;
  lVar2 = (lVar1 + (uVar3 & (uVar16 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 0x10;
  uVar12 = 2;
  uVar9 = uVar12;
  if ((int)lVar2 == 0) {
    uVar9 = (param_3 - uVar4) + 1;
  }
  if (0xffff < uVar9) {
    uVar12 = 4;
  }
  if (uVar9 < 0x100) {
    uVar12 = 1;
  }
  uVar5 = 0;
  if (1 < uVar9) {
    uVar5 = uVar12;
  }
  uVar12 = 0;
  if (uVar4 < param_3) {
    uVar12 = uVar5;
  }
  uVar9 = (uint)param_2;
  iVar8 = uVar9 - uVar4;
  if (uVar9 < uVar4 || iVar8 == 0) {
    if (uVar12 < 2) {
      if (uVar12 != 0) {
        *(undefined1 *)((long)param_1 + lVar2) = 0;
      }
    }
    else if (uVar12 == 2) {
      *(undefined2 *)((long)param_1 + lVar2) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar2) = 0;
    }
    if (uVar9 != 0) {
      if (uVar7 == uVar4) {
        UNRECOVERED_JUMPTABLE = *(code **)(lVar15 + 0x38);
        lVar11 = lVar6;
        uVar10 = uVar7;
      }
      else {
        param_1 = (int *)(uVar3 + (long)param_1 & ~uVar16);
        if (uVar10 != uVar4) {
          puVar13 = (ulong *)(lVar1 + (long)param_1 & 0xfffffffffffffff8);
          if (-1 < (int)uVar9) {
            *puVar13 = (ulong)(uVar9 - 1);
            return;
          }
          *puVar13 = (ulong)(uVar9 & 0x7fffffff);
          puVar13[1] = 0;
          return;
        }
        UNRECOVERED_JUMPTABLE = *(code **)(lVar14 + 0x38);
      }
                    /* WARNING: Could not recover jumptable at 0x0001040d2fac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,param_2,uVar10,lVar11);
      return;
    }
  }
  else {
    if ((int)lVar2 != 0) {
      iVar8 = 1;
      _bzero(param_1,lVar2);
      *param_1 = uVar9 + ~uVar4;
    }
    if (uVar12 < 2) {
      if (uVar12 != 0) {
        *(char *)((long)param_1 + lVar2) = (char)iVar8;
      }
    }
    else if (uVar12 == 2) {
      *(short *)((long)param_1 + lVar2) = (short)iVar8;
    }
    else {
      *(int *)((long)param_1 + lVar2) = iVar8;
    }
  }
  return;
}



/* Entry: 1040d2ff8; end: 1040d30a3;  */

void FUN_1040d2ff8(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  lVar1 = 0x13f;
  _swift_getAssociatedTypeWitness
            (0x13f,uVar2,*(undefined8 *)(param_1 + 0x10),PTR___sSciTL_11034fea8,
             PTR___s13AsyncIteratorSciTl_11034fb50);
  if (uVar2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    uVar2 = *(ulong *)(param_1 + 0x18);
    lVar1 = 0x13f;
    __sSqMa();
    if (uVar2 < 0x40) {
      lStack_30 = *(long *)(lVar1 + -8) + 0x40;
      puStack_28 = PTR___syycWV_11034f1c0 + 0x40;
      _swift_initStructMetadata(param_1,0,3,&lStack_38,param_1 + 0x28);
    }
  }
  return;
}



/* Entry: 1040d30a4; end: 1040d3227;  */

long * FUN_1040d30a4(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar3 = *(long *)(lVar2 + -8);
  lVar9 = *(long *)(param_3 + 0x18);
  lVar11 = *(long *)(lVar9 + -8);
  uVar6 = (ulong)*(uint *)(lVar11 + 0x50) & 0xff;
  uVar4 = *(long *)(lVar3 + 0x40) + uVar6;
  lVar8 = *(long *)(lVar11 + 0x40);
  if (*(int *)(lVar11 + 0x54) == 0) {
    lVar8 = lVar8 + 1;
  }
  uVar1 = (uint)uVar6 | *(uint *)(lVar3 + 0x50) & 0xf8;
  if ((uVar1 < 8 && ((*(uint *)(lVar3 + 0x50) | *(uint *)(lVar11 + 0x50)) & 0x100000) == 0) &&
      (lVar8 + (uVar4 & (uVar6 ^ 0xffffffffffffffff)) + 7 & 0xfffffffffffffff8) + 0x10 < 0x19) {
    (**(code **)(lVar3 + 0x10))(param_1,param_2,lVar2);
    uVar10 = uVar4 + (long)param_1 & ~uVar6;
    uVar6 = uVar4 + (long)param_2 & ~uVar6;
    uVar4 = uVar6;
    (**(code **)(lVar11 + 0x30))(uVar6,1,lVar9);
    if ((int)uVar4 == 0) {
      (**(code **)(lVar11 + 0x10))(uVar10,uVar6,lVar9);
      (**(code **)(lVar11 + 0x38))(uVar10,0,1,lVar9);
    }
    else {
      _memcpy(uVar10,uVar6,lVar8);
    }
    puVar5 = (undefined8 *)(uVar10 + lVar8 + 7 & 0xffffffffffffff8);
    puVar7 = (undefined8 *)(uVar6 + lVar8 + 7 & 0xfffffffffffffff8);
    lVar8 = puVar7[1];
    uVar12 = *puVar7;
    puVar5[1] = puVar7[1];
    *puVar5 = uVar12;
  }
  else {
    uVar4 = (ulong)(uVar1 | 7);
    lVar8 = *param_2;
    *param_1 = lVar8;
    param_1 = (long *)(lVar8 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)));
  }
  _swift_retain(lVar8);
  return param_1;
}



/* Entry: 1040d3228; end: 1040d32e7;  */

void FUN_1040d3228(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar4 = *(long *)(lVar1 + -8);
  (**(code **)(lVar4 + 8))(param_1,lVar1);
  lVar1 = *(long *)(param_2 + 0x18);
  lVar5 = *(long *)(lVar1 + -8);
  uVar3 = *(long *)(lVar4 + 0x40) + param_1 + (ulong)*(byte *)(lVar5 + 0x50) &
          ((ulong)*(byte *)(lVar5 + 0x50) ^ 0xffffffffffffffff);
  uVar2 = uVar3;
  (**(code **)(lVar5 + 0x30))(uVar3,1,lVar1);
  if ((int)uVar2 == 0) {
    (**(code **)(lVar5 + 8))(uVar3,lVar1);
  }
  lVar1 = uVar3 + *(long *)(lVar5 + 0x40);
  if (*(int *)(lVar5 + 0x54) == 0) {
    lVar1 = lVar1 + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)((lVar1 + 7U & 0xffffffffffffff8) + 8));
  return;
}



/* Entry: 1040d32e8; end: 1040d3417;  */

long FUN_1040d32e8(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar9 = *(long *)(lVar1 + -8);
  (**(code **)(lVar9 + 0x10))(param_1,param_2,lVar1);
  lVar10 = *(long *)(param_3 + 0x18);
  lVar11 = *(long *)(lVar10 + -8);
  uVar4 = (ulong)*(byte *)(lVar11 + 0x50);
  lVar1 = *(long *)(lVar9 + 0x40) + uVar4;
  uVar6 = lVar1 + param_1 & (uVar4 ^ 0xffffffffffffffff);
  uVar7 = lVar1 + param_2 & (uVar4 ^ 0xffffffffffffffff);
  uVar4 = uVar7;
  (**(code **)(lVar11 + 0x30))(uVar7,1,lVar10);
  if ((int)uVar4 == 0) {
    (**(code **)(lVar11 + 0x10))(uVar6,uVar7,lVar10);
    (**(code **)(lVar11 + 0x38))(uVar6,0,1,lVar10);
    iVar8 = *(int *)(lVar11 + 0x54);
    lVar1 = *(long *)(lVar11 + 0x40);
  }
  else {
    iVar8 = *(int *)(lVar11 + 0x54);
    lVar1 = *(long *)(lVar11 + 0x40);
    lVar9 = lVar1;
    if (iVar8 == 0) {
      lVar9 = lVar1 + 1;
    }
    _memcpy(uVar6,uVar7,lVar9);
  }
  if (iVar8 == 0) {
    lVar1 = lVar1 + 1;
  }
  puVar5 = (undefined8 *)(uVar6 + lVar1 + 7 & 0xffffffffffffff8);
  puVar3 = (undefined8 *)(uVar7 + lVar1 + 7 & 0xfffffffffffffff8);
  uVar2 = puVar3[1];
  uVar12 = *puVar3;
  puVar5[1] = puVar3[1];
  *puVar5 = uVar12;
  _swift_retain(uVar2);
  return param_1;
}



/* Entry: 1040d3418; end: 1040d359f;  */

long FUN_1040d3418(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  undefined8 uVar14;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar10 = *(long *)(lVar1 + -8);
  (**(code **)(lVar10 + 0x18))(param_1,param_2,lVar1);
  lVar11 = *(long *)(param_3 + 0x18);
  lVar12 = *(long *)(lVar11 + -8);
  uVar5 = (ulong)*(byte *)(lVar12 + 0x50);
  lVar1 = *(long *)(lVar10 + 0x40) + uVar5;
  uVar7 = lVar1 + param_1 & (uVar5 ^ 0xffffffffffffffff);
  uVar9 = lVar1 + param_2 & (uVar5 ^ 0xffffffffffffffff);
  pcVar13 = *(code **)(lVar12 + 0x30);
  uVar5 = uVar7;
  (*pcVar13)(uVar7,1,lVar11);
  uVar2 = uVar9;
  (*pcVar13)(uVar9,1,lVar11);
  if ((int)uVar5 == 0) {
    if ((int)uVar2 == 0) {
      (**(code **)(lVar12 + 0x18))(uVar7,uVar9,lVar11);
      goto LAB_1040d3528;
    }
    (**(code **)(lVar12 + 8))(uVar7,lVar11);
  }
  else if ((int)uVar2 == 0) {
    (**(code **)(lVar12 + 0x10))(uVar7,uVar9,lVar11);
    (**(code **)(lVar12 + 0x38))(uVar7,0,1,lVar11);
    goto LAB_1040d3528;
  }
  lVar1 = *(long *)(lVar12 + 0x40);
  if (*(int *)(lVar12 + 0x54) == 0) {
    lVar1 = lVar1 + 1;
  }
  _memcpy(uVar7,uVar9,lVar1);
LAB_1040d3528:
  lVar1 = *(long *)(lVar12 + 0x40);
  if (*(int *)(lVar12 + 0x54) == 0) {
    lVar1 = lVar1 + 1;
  }
  puVar6 = (undefined8 *)(uVar7 + lVar1 + 7 & 0xfffffffffffffff8);
  puVar4 = (undefined8 *)(uVar9 + lVar1 + 7 & 0xfffffffffffffff8);
  uVar8 = puVar6[1];
  uVar3 = puVar4[1];
  uVar14 = *puVar4;
  puVar6[1] = puVar4[1];
  *puVar6 = uVar14;
  _swift_retain(uVar3);
  _swift_release(uVar8);
  return param_1;
}



/* Entry: 1040d35a0; end: 1040d36c7;  */

long FUN_1040d35a0(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar8 = *(long *)(lVar1 + -8);
  (**(code **)(lVar8 + 0x20))(param_1,param_2,lVar1);
  lVar9 = *(long *)(param_3 + 0x18);
  lVar10 = *(long *)(lVar9 + -8);
  uVar3 = (ulong)*(byte *)(lVar10 + 0x50);
  lVar1 = *(long *)(lVar8 + 0x40) + uVar3;
  uVar5 = lVar1 + param_1 & (uVar3 ^ 0xffffffffffffffff);
  uVar6 = lVar1 + param_2 & (uVar3 ^ 0xffffffffffffffff);
  uVar3 = uVar6;
  (**(code **)(lVar10 + 0x30))(uVar6,1,lVar9);
  if ((int)uVar3 == 0) {
    (**(code **)(lVar10 + 0x20))(uVar5,uVar6,lVar9);
    (**(code **)(lVar10 + 0x38))(uVar5,0,1,lVar9);
    iVar7 = *(int *)(lVar10 + 0x54);
    lVar1 = *(long *)(lVar10 + 0x40);
  }
  else {
    iVar7 = *(int *)(lVar10 + 0x54);
    lVar1 = *(long *)(lVar10 + 0x40);
    lVar8 = lVar1;
    if (iVar7 == 0) {
      lVar8 = lVar1 + 1;
    }
    _memcpy(uVar5,uVar6,lVar8);
  }
  if (iVar7 == 0) {
    lVar1 = lVar1 + 1;
  }
  puVar4 = (undefined8 *)(uVar5 + lVar1 + 7 & 0xffffffffffffff8);
  puVar2 = (undefined8 *)(uVar6 + lVar1 + 7 & 0xffffffffffffff8);
  uVar11 = *puVar2;
  puVar4[1] = puVar2[1];
  *puVar4 = uVar11;
  return param_1;
}



/* Entry: 1040d36c8; end: 1040d3843;  */

long FUN_1040d36c8(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  undefined8 uVar13;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar9 = *(long *)(lVar1 + -8);
  (**(code **)(lVar9 + 0x28))(param_1,param_2,lVar1);
  lVar10 = *(long *)(param_3 + 0x18);
  lVar11 = *(long *)(lVar10 + -8);
  uVar5 = (ulong)*(byte *)(lVar11 + 0x50);
  lVar1 = *(long *)(lVar9 + 0x40) + uVar5;
  uVar7 = lVar1 + param_1 & (uVar5 ^ 0xffffffffffffffff);
  uVar8 = lVar1 + param_2 & (uVar5 ^ 0xffffffffffffffff);
  pcVar12 = *(code **)(lVar11 + 0x30);
  uVar5 = uVar7;
  (*pcVar12)(uVar7,1,lVar10);
  uVar2 = uVar8;
  (*pcVar12)(uVar8,1,lVar10);
  if ((int)uVar5 == 0) {
    if ((int)uVar2 == 0) {
      (**(code **)(lVar11 + 0x28))(uVar7,uVar8,lVar10);
      goto LAB_1040d37d8;
    }
    (**(code **)(lVar11 + 8))(uVar7,lVar10);
  }
  else if ((int)uVar2 == 0) {
    (**(code **)(lVar11 + 0x20))(uVar7,uVar8,lVar10);
    (**(code **)(lVar11 + 0x38))(uVar7,0,1,lVar10);
    goto LAB_1040d37d8;
  }
  lVar1 = *(long *)(lVar11 + 0x40);
  if (*(int *)(lVar11 + 0x54) == 0) {
    lVar1 = lVar1 + 1;
  }
  _memcpy(uVar7,uVar8,lVar1);
LAB_1040d37d8:
  lVar1 = *(long *)(lVar11 + 0x40);
  if (*(int *)(lVar11 + 0x54) == 0) {
    lVar1 = lVar1 + 1;
  }
  puVar6 = (undefined8 *)(uVar7 + lVar1 + 7 & 0xfffffffffffffff8);
  puVar4 = (undefined8 *)(uVar8 + lVar1 + 7 & 0xffffffffffffff8);
  uVar3 = puVar6[1];
  uVar13 = *puVar4;
  puVar6[1] = puVar4[1];
  *puVar6 = uVar13;
  _swift_release(uVar3);
  return param_1;
}



/* Entry: 1040d3844; end: 1040d39f7;  */

int * FUN_1040d3844(int *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  
  lVar9 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar13 = *(long *)(lVar9 + -8);
  uVar6 = *(uint *)(lVar13 + 0x54);
  lVar12 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar7 = *(uint *)(lVar12 + 0x54);
  uVar4 = 0;
  if (uVar7 != 0) {
    uVar4 = uVar7 - 1;
  }
  uVar2 = uVar4;
  if (uVar4 <= uVar6) {
    uVar2 = uVar6;
  }
  if (uVar2 < 0x80000000) {
    uVar2 = 0x7fffffff;
  }
  lVar14 = *(long *)(lVar12 + 0x40);
  if (uVar7 == 0) {
    lVar14 = lVar14 + 1;
  }
  if (param_2 != 0) {
    uVar15 = (ulong)*(byte *)(lVar12 + 0x50);
    uVar10 = *(long *)(lVar13 + 0x40) + uVar15;
    if (uVar2 <= param_2 && param_2 - uVar2 != 0) {
      uVar1 = (lVar14 + 7 + (uVar10 & (uVar15 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 0x10;
      uVar11 = 2;
      uVar5 = uVar11;
      if ((uVar1 & 0xfffffff8) == 0) {
        uVar5 = (param_2 - uVar2) + 1;
      }
      if (0xffff < uVar5) {
        uVar11 = 4;
      }
      if (uVar5 < 0x100) {
        uVar11 = 1;
      }
      uVar3 = 0;
      if (1 < uVar5) {
        uVar3 = uVar11;
      }
      if (uVar3 < 2) {
        if ((uVar3 != 0) &&
           (uVar11 = (uint)*(byte *)((long)param_1 + uVar1), *(byte *)((long)param_1 + uVar1) != 0))
        {
LAB_1040d3924:
          iVar8 = uVar11 - 1;
          if ((uVar1 & 0xfffffff8) != 0) {
            iVar8 = *param_1;
          }
          return (int *)(ulong)(uVar2 + iVar8 + 1);
        }
      }
      else {
        if (uVar3 == 2) {
          uVar11 = (uint)*(ushort *)((long)param_1 + uVar1);
        }
        else {
          uVar11 = *(uint *)((long)param_1 + uVar1);
        }
        if (uVar11 != 0) goto LAB_1040d3924;
      }
    }
    if (uVar6 == uVar2) {
                    /* WARNING: Could not recover jumptable at 0x0001040d397c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar13 + 0x30))(param_1,uVar6,lVar9);
      return param_1;
    }
    uVar10 = uVar10 + (long)param_1 & ~uVar15;
    if (uVar4 != uVar2) {
      uVar10 = *(ulong *)(lVar14 + 7 + uVar10 & 0xffffffffffffff8);
      if (0xfffffffe < uVar10) {
        uVar10 = 0xffffffff;
      }
      return (int *)(ulong)((int)uVar10 + 1);
    }
    if (1 < uVar7) {
      (**(code **)(lVar12 + 0x30))();
      uVar4 = 0;
      if ((int)uVar10 != 0) {
        uVar4 = (int)uVar10 - 1;
      }
      return (int *)(ulong)uVar4;
    }
  }
  return (int *)0x0;
}



/* Entry: 1040d39f8; end: 1040d3bdb;  */

void FUN_1040d39f8(int *param_1,ulong param_2,uint param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  code *UNRECOVERED_JUMPTABLE;
  ulong *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x20),*(undefined8 *)(param_4 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar14 = *(long *)(lVar8 + -8);
  uVar6 = *(uint *)(lVar14 + 0x54);
  lVar11 = *(long *)(param_4 + 0x18);
  lVar13 = *(long *)(lVar11 + -8);
  uVar10 = *(uint *)(lVar13 + 0x54);
  uVar3 = 0;
  if (uVar10 != 0) {
    uVar3 = uVar10 - 1;
  }
  uVar4 = uVar3;
  if (uVar3 <= uVar6) {
    uVar4 = uVar6;
  }
  if (uVar4 < 0x80000000) {
    uVar4 = 0x7fffffff;
  }
  uVar16 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar2 = *(long *)(lVar14 + 0x40) + uVar16;
  lVar15 = *(long *)(lVar13 + 0x40);
  if (uVar10 == 0) {
    lVar15 = lVar15 + 1;
  }
  lVar1 = (lVar15 + 7 + (uVar2 & (uVar16 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 0x10;
  uVar9 = 2;
  uVar17 = uVar9;
  if ((int)lVar1 == 0) {
    uVar17 = (param_3 - uVar4) + 1;
  }
  if (0xffff < uVar17) {
    uVar9 = 4;
  }
  if (uVar17 < 0x100) {
    uVar9 = 1;
  }
  uVar5 = 0;
  if (1 < uVar17) {
    uVar5 = uVar9;
  }
  uVar9 = 0;
  if (uVar4 < param_3) {
    uVar9 = uVar5;
  }
  uVar17 = (uint)param_2;
  iVar7 = uVar17 - uVar4;
  if (uVar17 < uVar4 || iVar7 == 0) {
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
    if (uVar17 != 0) {
      if (uVar6 == uVar4) {
        UNRECOVERED_JUMPTABLE = *(code **)(lVar14 + 0x38);
        lVar11 = lVar8;
        uVar10 = uVar6;
      }
      else {
        param_1 = (int *)(uVar2 + (long)param_1 & ~uVar16);
        if (uVar3 != uVar4) {
          puVar12 = (ulong *)(lVar15 + 7 + (long)param_1 & 0xfffffffffffffff8);
          if (-1 < (int)uVar17) {
            *puVar12 = (ulong)(uVar17 - 1);
            return;
          }
          *puVar12 = (ulong)(uVar17 & 0x7fffffff);
          puVar12[1] = 0;
          return;
        }
        UNRECOVERED_JUMPTABLE = *(code **)(lVar13 + 0x38);
        param_2 = (ulong)(uVar17 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x0001040d3b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,param_2,uVar10,lVar11);
      return;
    }
  }
  else {
    if ((int)lVar1 != 0) {
      iVar7 = 1;
      _bzero(param_1,lVar1);
      *param_1 = uVar17 + ~uVar4;
    }
    if (uVar9 < 2) {
      if (uVar9 != 0) {
        *(char *)((long)param_1 + lVar1) = (char)iVar7;
      }
    }
    else if (uVar9 == 2) {
      *(short *)((long)param_1 + lVar1) = (short)iVar7;
    }
    else {
      *(int *)((long)param_1 + lVar1) = iVar7;
    }
  }
  return;
}



/* Entry: 1040d3bdc; end: 1040d3bef;  */

void FUN_1040d3bdc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbffa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_11034f228)();
  return;
}



/* Entry: 1040d3bf0; end: 1040d3cd7;  */

void FUN_1040d3bf0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = 0;
  FUN_1040d3cd8(0,param_5,param_6);
  puVar3 = PTR___sSciTL_11034fea8;
  iVar2 = *(int *)(lVar4 + 0x24);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_6,param_5,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(param_1 + iVar2,1,1,lVar5);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness(0,param_6,param_5,puVar3,PTR___s13AsyncIteratorSciTl_11034fb50);
  (**(code **)(*(long *)(lVar5 + -8) + 0x20))(param_1,param_2,lVar5);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar4 + 0x28));
  *puVar1 = param_3;
  puVar1[1] = param_4;
  return;
}



/* Entry: 1040d3cd8; end: 1040d3ce3;  */

void FUN_1040d3cd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e7efe2c);
  return;
}



/* Entry: 1040d3ce4; end: 1040d3dcb;  */

void FUN_1040d3ce4(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar6 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar6;
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x30) = uVar5;
  lVar1 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar6,uVar5,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  *(long *)(unaff_x22 + 0x38) = lVar1;
  lVar2 = 0;
  __sSqMa(0,lVar1);
  *(long *)(unaff_x22 + 0x40) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x48) = lVar2;
  uVar4 = *(long *)(lVar2 + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x50) = uVar3;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x58) = uVar3;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar4;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x70) = lVar1;
  uVar4 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x78) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x80) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1040d3dcc,0,0);
  return;
}



/* Entry: 1040d3dcc; end: 1040d3f67;  */

void FUN_1040d3dcc(void)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x68);
  lVar1 = *(long *)(unaff_x22 + 0x70);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x38);
  iVar2 = *(int *)(*(long *)(unaff_x22 + 0x18) + 0x24);
  *(int *)(unaff_x22 + 200) = iVar2;
  pcVar6 = *(code **)(*(long *)(unaff_x22 + 0x48) + 0x10);
  *(code **)(unaff_x22 + 0x88) = pcVar6;
  (*pcVar6)(uVar8,*(long *)(unaff_x22 + 0x20) + (long)iVar2,*(undefined8 *)(unaff_x22 + 0x40));
  pcVar6 = *(code **)(lVar1 + 0x30);
  *(code **)(unaff_x22 + 0x90) = pcVar6;
  (*pcVar6)(uVar8,1,uVar7);
  if ((int)uVar8 == 1) {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x30);
    (**(code **)(*(long *)(unaff_x22 + 0x48) + 8))
              (*(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x40));
    puVar3 = PTR___sSciTL_11034fea8;
    uVar4 = 0;
    _swift_getAssociatedTypeWitness
              (0,uVar8,uVar7,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
    _swift_getAssociatedConformanceWitness
              (uVar8,uVar7,uVar4,puVar3,PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
    plVar5 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xb8) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_1040d4260;
    uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x28);
    pcVar6 = *(code **)(*(long *)(unaff_x22 + 0x70) + 0x20);
    *(code **)(unaff_x22 + 0x98) = pcVar6;
    (*pcVar6)(*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x68),
              *(undefined8 *)(unaff_x22 + 0x38));
    puVar3 = PTR___sSciTL_11034fea8;
    uVar4 = 0;
    _swift_getAssociatedTypeWitness
              (0,uVar8,uVar7,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
    _swift_getAssociatedConformanceWitness
              (uVar8,uVar7,uVar4,puVar3,PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
    plVar5 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xa0) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_1040d3f68;
    uVar7 = *(undefined8 *)(unaff_x22 + 0x60);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)(plVar5,uVar7,uVar4,uVar8);
  return;
}



/* Entry: 1040d3f68; end: 1040d3fc3;  */

void FUN_1040d3f68(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xa8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xa0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1040d3fc4;
  }
  else {
    pcVar1 = FUN_1040d43dc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1040d3fc4; end: 1040d411b;  */

void FUN_1040d3fc4(void)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  long lVar10;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar5 = uVar7;
  (**(code **)(unaff_x22 + 0x90))(uVar7,1,uVar8);
  if ((int)uVar5 == 1) {
    lVar10 = *(long *)(unaff_x22 + 0x70);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x40);
    lVar3 = *(long *)(unaff_x22 + 0x48);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x10);
    (**(code **)(lVar10 + 8))(*(undefined8 *)(unaff_x22 + 0x80),uVar8);
    (**(code **)(lVar3 + 8))(uVar7,uVar5);
    (**(code **)(lVar10 + 0x38))(uVar9,1,1,uVar8);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x58);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x80));
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar9);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x0001040d40a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar3 = *(long *)(unaff_x22 + 0x18);
  lVar10 = *(long *)(unaff_x22 + 0x20);
  (**(code **)(unaff_x22 + 0x98))(*(undefined8 *)(unaff_x22 + 0x78),uVar7,uVar8);
  piVar2 = *(int **)(lVar10 + *(int *)(lVar3 + 0x28));
  iVar1 = *piVar2;
  plVar6 = (long *)(ulong)(uint)piVar2[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xb0) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1040d411c;
                    /* WARNING: Could not recover jumptable at 0x0001040d4118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))
            (plVar6,*(undefined8 *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x80),
             *(undefined8 *)(unaff_x22 + 0x78));
  return;
}



/* Entry: 1040d411c; end: 1040d4163;  */

void FUN_1040d411c(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0xb0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1040d4164,0,0);
  return;
}



/* Entry: 1040d4164; end: 1040d425f;  */

void FUN_1040d4164(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  code *pcVar10;
  long lVar11;
  
  iVar6 = *(int *)(unaff_x22 + 200);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  pcVar4 = *(code **)(unaff_x22 + 0x88);
  lVar2 = *(long *)(unaff_x22 + 0x70);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
  lVar5 = *(long *)(unaff_x22 + 0x48);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x38);
  lVar11 = *(long *)(unaff_x22 + 0x20);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x10);
  pcVar10 = *(code **)(lVar2 + 8);
  (*pcVar10)(*(undefined8 *)(unaff_x22 + 0x78),uVar9);
  (*pcVar10)(uVar1,uVar9);
  (**(code **)(lVar2 + 0x38))(uVar8,0,1,uVar9);
  (**(code **)(lVar5 + 0x28))(lVar11 + iVar6,uVar8,uVar3);
  (*pcVar4)(uVar7,lVar11 + iVar6,uVar3);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x58);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x80));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar7);
                    /* WARNING: Could not recover jumptable at 0x0001040d425c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040d4260; end: 1040d42bb;  */

void FUN_1040d4260(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xc0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xb8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1040d42bc;
  }
  else {
    pcVar1 = FUN_1040d4368;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1040d42bc; end: 1040d4367;  */

void FUN_1040d42bc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  long unaff_x22;
  long lVar8;
  
  pcVar7 = *(code **)(unaff_x22 + 0x88);
  iVar4 = *(int *)(unaff_x22 + 200);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x40);
  lVar8 = *(long *)(unaff_x22 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x10);
  (**(code **)(*(long *)(unaff_x22 + 0x48) + 0x28))
            (lVar8 + iVar4,*(undefined8 *)(unaff_x22 + 0x50),uVar6);
  (*pcVar7)(uVar5,lVar8 + iVar4,uVar6);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x80));
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001040d4364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040d4368; end: 1040d43db;  */

void FUN_1040d4368(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x58);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x80));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001040d43d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040d43dc; end: 1040d4463;  */

void FUN_1040d43dc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  (**(code **)(*(long *)(unaff_x22 + 0x70) + 8))
            (*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x38));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x58);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x80));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001040d4460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040d4464; end: 1040d44c3;  */

void FUN_1040d4464(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long unaff_x22;
  
  plVar4 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1040d44c4;
  plVar4[3] = param_2;
  plVar4[4] = unaff_x20;
  plVar4[2] = param_1;
  lVar6 = *(long *)(param_2 + 0x18);
  plVar4[5] = lVar6;
  lVar5 = *(long *)(param_2 + 0x10);
  plVar4[6] = lVar5;
  lVar1 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,lVar6,lVar5,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  plVar4[7] = lVar1;
  lVar5 = 0;
  __sSqMa(0,lVar1);
  plVar4[8] = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  plVar4[9] = lVar5;
  uVar3 = *(long *)(lVar5 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[10] = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0xb] = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0xc] = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0xd] = uVar3;
  lVar1 = *(long *)(lVar1 + -8);
  plVar4[0xe] = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0xf] = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0x10] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1040d3dcc,0,0);
  return;
}



/* Entry: 1040d44c4; end: 1040d44ff;  */

void FUN_1040d44c4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001040d44fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1040d4500; end: 1040d45d3;  */

void FUN_1040d4500(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_4;
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_5 + 0x18),*(undefined8 *)(param_5 + 0x10),
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
  plVar3[1] = (long)FUN_1040d45d4;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScIsE4next9isolation7ElementQzSgScA_pSgYi_tYa7FailureQzYKF_11034fc50)
            (plVar3,param_1,param_2,param_3,param_5,param_6,uVar2);
  return;
}



/* Entry: 1040d45d4; end: 1040d4643;  */

void FUN_1040d45d4(void)

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
                    /* WARNING: Could not recover jumptable at 0x0001040d4640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1040d4644; end: 1040d474f;  */

void FUN_1040d4644(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lVar6;
  
  lVar4 = *(long *)(param_2 + 0x10);
  lVar6 = *(long *)(lVar4 + -8);
  lVar3 = param_2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  uVar5 = *(undefined8 *)(lVar3 + 0x18);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar5,lVar4,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = (long)(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
          extraout_x8_00;
  (**(code **)(lVar6 + 0x10))(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0))
  ;
  __sSci17makeAsyncIterator0bC0QzyFTj(lVar3,lVar4,uVar5);
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(param_2 + 0x24));
  uVar2 = puVar1[1];
  FUN_1040d3bf0(param_1,lVar3,*puVar1,uVar2,lVar4,uVar5);
  _swift_retain(uVar2);
  return;
}



/* Entry: 1040d4750; end: 1040d47db;  */

void FUN_1040d4750(undefined8 param_1,long param_2)

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



/* Entry: 1040d47dc; end: 1040d47eb;  */

void FUN_1040d47dc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getWitnessTable_11034f410)(&UNK_10dcd6bf8,param_1);
  return;
}



/* Entry: 1040d47ec; end: 1040d481b;  */

void FUN_1040d47ec(long param_1)

{
  FUN_1040d4644();
                    /* WARNING: Could not recover jumptable at 0x0001040d4818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + -8) + 8))();
  return;
}



/* Entry: 1040d481c; end: 1040d4823;  */

void FUN_1040d481c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbffa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_11034f228)();
  return;
}



/* Entry: 1040d4824; end: 1040d489b;  */

void FUN_1040d4824(long param_1)

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
    _swift_initStructMetadata(param_1,0,2,&lStack_30,param_1 + 0x20);
  }
  return;
}



/* Entry: 1040d489c; end: 1040d494b;  */

long * FUN_1040d489c(long *param_1,long *param_2,long param_3)

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



/* Entry: 1040d494c; end: 1040d498b;  */

void FUN_1040d494c(long param_1,long param_2)

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



/* Entry: 1040d498c; end: 1040d4b1f;  */

long FUN_1040d498c(long param_1,long param_2,long param_3)

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



/* Entry: 1040d4b20; end: 1040d4c13;  */

uint * FUN_1040d4b20(uint *param_1,uint param_2,long param_3)

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
      goto LAB_1040d4bb0;
    }
    else if (uVar3 == 2) {
      uVar9 = (uint)*(ushort *)((long)param_1 + uVar7);
      if (*(ushort *)((long)param_1 + uVar7) != 0) {
LAB_1040d4bb0:
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
      if (uVar9 != 0) goto LAB_1040d4bb0;
    }
  }
  if (0x7ffffffe < uVar5) {
                    /* WARNING: Could not recover jumptable at 0x0001040d4bec. Too many branches */
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



/* Entry: 1040d4c14; end: 1040d4d73;  */

void FUN_1040d4c14(int *param_1,uint param_2,uint param_3,long param_4)

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
                    /* WARNING: Could not recover jumptable at 0x0001040d4d24. Too many branches */
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



/* Entry: 1040d4d74; end: 1040d4d7b;  */

void FUN_1040d4d74(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbffa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_11034f228)();
  return;
}



/* Entry: 1040d4d7c; end: 1040d4e53;  */

void FUN_1040d4d7c(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(ulong *)(param_1 + 0x18);
  lVar3 = 0x13f;
  uVar4 = uVar2;
  _swift_getAssociatedTypeWitness
            (0x13f,uVar2,uVar1,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  if (uVar4 < 0x40) {
    lStack_48 = *(long *)(lVar3 + -8) + 0x40;
    uVar4 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,uVar2,uVar1,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
    lVar3 = 0x13f;
    __sSqMa();
    if (uVar4 < 0x40) {
      lStack_40 = *(long *)(lVar3 + -8) + 0x40;
      puStack_38 = PTR___syycWV_11034f1c0 + 0x40;
      _swift_initStructMetadata(param_1,0,3,&lStack_48,param_1 + 0x20);
    }
  }
  return;
}



/* Entry: 1040d4e54; end: 1040d5003;  */

long * FUN_1040d4e54(long *param_1,long *param_2,long param_3)

{
  undefined8 uVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  
  puVar3 = PTR___sSciTL_11034fea8;
  uVar14 = *(undefined8 *)(param_3 + 0x10);
  uVar1 = *(undefined8 *)(param_3 + 0x18);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar1,uVar14,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar12 = *(long *)(lVar4 + -8);
  lVar13 = *(long *)(lVar12 + 0x40);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness(0,uVar1,uVar14,puVar3,PTR___s7ElementSciTl_11034fb58);
  lVar11 = *(long *)(lVar5 + -8);
  uVar6 = (ulong)*(uint *)(lVar11 + 0x50) & 0xff;
  uVar7 = lVar13 + uVar6;
  lVar13 = *(long *)(lVar11 + 0x40);
  if (*(int *)(lVar11 + 0x54) == 0) {
    lVar13 = lVar13 + 1;
  }
  uVar2 = (uint)uVar6 | *(uint *)(lVar12 + 0x50) & 0xf8;
  if ((uVar2 < 8 && ((*(uint *)(lVar12 + 0x50) | *(uint *)(lVar11 + 0x50)) & 0x100000) == 0) &&
      (lVar13 + (uVar7 & (uVar6 ^ 0xffffffffffffffff)) + 7 & 0xfffffffffffffff8) + 0x10 < 0x19) {
    (**(code **)(lVar12 + 0x10))(param_1,param_2,lVar4);
    uVar10 = uVar7 + (long)param_1 & ~uVar6;
    uVar6 = uVar7 + (long)param_2 & ~uVar6;
    uVar7 = uVar6;
    (**(code **)(lVar11 + 0x30))(uVar6,1,lVar5);
    if ((int)uVar7 == 0) {
      (**(code **)(lVar11 + 0x10))(uVar10,uVar6,lVar5);
      (**(code **)(lVar11 + 0x38))(uVar10,0,1,lVar5);
    }
    else {
      _memcpy(uVar10,uVar6,lVar13);
    }
    puVar8 = (undefined8 *)(uVar10 + lVar13 + 7 & 0xffffffffffffff8);
    puVar9 = (undefined8 *)(uVar6 + lVar13 + 7 & 0xfffffffffffffff8);
    lVar13 = puVar9[1];
    uVar14 = *puVar9;
    puVar8[1] = puVar9[1];
    *puVar8 = uVar14;
  }
  else {
    uVar7 = (ulong)(uVar2 | 7);
    lVar13 = *param_2;
    *param_1 = lVar13;
    param_1 = (long *)(lVar13 + (uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff)));
  }
  _swift_retain(lVar13);
  return param_1;
}



/* Entry: 1040d5004; end: 1040d523b;  */

void FUN_1040d5004(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  puVar3 = PTR___sSciTL_11034fea8;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar2,uVar1,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar8 = *(long *)(lVar4 + -8);
  (**(code **)(lVar8 + 8))(param_1,lVar4);
  lVar8 = *(long *)(lVar8 + 0x40);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness(0,uVar2,uVar1,puVar3,PTR___s7ElementSciTl_11034fb58);
  lVar7 = *(long *)(lVar4 + -8);
  uVar6 = lVar8 + param_1 + (ulong)*(byte *)(lVar7 + 0x50) &
          ((ulong)*(byte *)(lVar7 + 0x50) ^ 0xffffffffffffffff);
  uVar5 = uVar6;
  (**(code **)(lVar7 + 0x30))(uVar6,1,lVar4);
  if ((int)uVar5 == 0) {
    (**(code **)(lVar7 + 8))(uVar6,lVar4);
  }
  lVar4 = uVar6 + *(long *)(lVar7 + 0x40);
  if (*(int *)(lVar7 + 0x54) == 0) {
    lVar4 = lVar4 + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)((lVar4 + 7U & 0xffffffffffffff8) + 8));
  return;
}



/* Entry: 1040d523c; end: 1040d53e3;  */

long FUN_1040d523c(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  undefined8 uVar14;
  
  puVar1 = PTR___sSciTL_11034fea8;
  uVar4 = *(undefined8 *)(param_3 + 0x10);
  uVar9 = *(undefined8 *)(param_3 + 0x18);
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar9,uVar4,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar11 = *(long *)(lVar2 + -8);
  (**(code **)(lVar11 + 0x18))(param_1,param_2,lVar2);
  lVar2 = *(long *)(lVar11 + 0x40);
  lVar11 = 0;
  _swift_getAssociatedTypeWitness(0,uVar9,uVar4,puVar1,PTR___s7ElementSciTl_11034fb58);
  lVar12 = *(long *)(lVar11 + -8);
  uVar5 = (ulong)*(byte *)(lVar12 + 0x50);
  lVar2 = lVar2 + uVar5;
  uVar8 = lVar2 + param_1 & (uVar5 ^ 0xffffffffffffffff);
  uVar10 = lVar2 + param_2 & (uVar5 ^ 0xffffffffffffffff);
  pcVar13 = *(code **)(lVar12 + 0x30);
  uVar5 = uVar8;
  (*pcVar13)(uVar8,1,lVar11);
  uVar3 = uVar10;
  (*pcVar13)(uVar10,1,lVar11);
  if ((int)uVar5 == 0) {
    if ((int)uVar3 == 0) {
      (**(code **)(lVar12 + 0x18))(uVar8,uVar10,lVar11);
      goto LAB_1040d536c;
    }
    (**(code **)(lVar12 + 8))(uVar8,lVar11);
  }
  else if ((int)uVar3 == 0) {
    (**(code **)(lVar12 + 0x10))(uVar8,uVar10,lVar11);
    (**(code **)(lVar12 + 0x38))(uVar8,0,1,lVar11);
    goto LAB_1040d536c;
  }
  lVar2 = *(long *)(lVar12 + 0x40);
  if (*(int *)(lVar12 + 0x54) == 0) {
    lVar2 = lVar2 + 1;
  }
  _memcpy(uVar8,uVar10,lVar2);
LAB_1040d536c:
  lVar2 = *(long *)(lVar12 + 0x40);
  if (*(int *)(lVar12 + 0x54) == 0) {
    lVar2 = lVar2 + 1;
  }
  puVar7 = (undefined8 *)(uVar8 + lVar2 + 7 & 0xfffffffffffffff8);
  puVar6 = (undefined8 *)(uVar10 + lVar2 + 7 & 0xfffffffffffffff8);
  uVar9 = puVar7[1];
  uVar4 = puVar6[1];
  uVar14 = *puVar6;
  puVar7[1] = puVar6[1];
  *puVar7 = uVar14;
  _swift_retain(uVar4);
  _swift_release(uVar9);
  return param_1;
}



/* Entry: 1040d53e4; end: 1040d552b;  */

long FUN_1040d53e4(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  
  puVar2 = PTR___sSciTL_11034fea8;
  uVar12 = *(undefined8 *)(param_3 + 0x10);
  uVar1 = *(undefined8 *)(param_3 + 0x18);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar1,uVar12,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar11 = *(long *)(lVar3 + -8);
  (**(code **)(lVar11 + 0x20))(param_1,param_2,lVar3);
  lVar3 = *(long *)(lVar11 + 0x40);
  lVar11 = 0;
  _swift_getAssociatedTypeWitness(0,uVar1,uVar12,puVar2,PTR___s7ElementSciTl_11034fb58);
  lVar10 = *(long *)(lVar11 + -8);
  uVar4 = (ulong)*(byte *)(lVar10 + 0x50);
  lVar3 = lVar3 + uVar4;
  uVar7 = lVar3 + param_1 & (uVar4 ^ 0xffffffffffffffff);
  uVar8 = lVar3 + param_2 & (uVar4 ^ 0xffffffffffffffff);
  uVar4 = uVar8;
  (**(code **)(lVar10 + 0x30))(uVar8,1,lVar11);
  if ((int)uVar4 == 0) {
    (**(code **)(lVar10 + 0x20))(uVar7,uVar8,lVar11);
    (**(code **)(lVar10 + 0x38))(uVar7,0,1,lVar11);
    iVar9 = *(int *)(lVar10 + 0x54);
    lVar3 = *(long *)(lVar10 + 0x40);
  }
  else {
    iVar9 = *(int *)(lVar10 + 0x54);
    lVar3 = *(long *)(lVar10 + 0x40);
    lVar11 = lVar3;
    if (iVar9 == 0) {
      lVar11 = lVar3 + 1;
    }
    _memcpy(uVar7,uVar8,lVar11);
  }
  if (iVar9 == 0) {
    lVar3 = lVar3 + 1;
  }
  puVar6 = (undefined8 *)(uVar7 + lVar3 + 7 & 0xffffffffffffff8);
  puVar5 = (undefined8 *)(uVar8 + lVar3 + 7 & 0xffffffffffffff8);
  uVar12 = *puVar5;
  puVar6[1] = puVar5[1];
  *puVar6 = uVar12;
  return param_1;
}



/* Entry: 1040d552c; end: 1040d58b7;  */

long FUN_1040d552c(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  undefined8 uVar13;
  
  puVar1 = PTR___sSciTL_11034fea8;
  uVar4 = *(undefined8 *)(param_3 + 0x10);
  uVar13 = *(undefined8 *)(param_3 + 0x18);
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar13,uVar4,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar10 = *(long *)(lVar2 + -8);
  (**(code **)(lVar10 + 0x28))(param_1,param_2,lVar2);
  lVar2 = *(long *)(lVar10 + 0x40);
  lVar10 = 0;
  _swift_getAssociatedTypeWitness(0,uVar13,uVar4,puVar1,PTR___s7ElementSciTl_11034fb58);
  lVar11 = *(long *)(lVar10 + -8);
  uVar5 = (ulong)*(byte *)(lVar11 + 0x50);
  lVar2 = lVar2 + uVar5;
  uVar8 = lVar2 + param_1 & (uVar5 ^ 0xffffffffffffffff);
  uVar9 = lVar2 + param_2 & (uVar5 ^ 0xffffffffffffffff);
  pcVar12 = *(code **)(lVar11 + 0x30);
  uVar5 = uVar8;
  (*pcVar12)(uVar8,1,lVar10);
  uVar3 = uVar9;
  (*pcVar12)(uVar9,1,lVar10);
  if ((int)uVar5 == 0) {
    if ((int)uVar3 == 0) {
      (**(code **)(lVar11 + 0x28))(uVar8,uVar9,lVar10);
      goto LAB_1040d565c;
    }
    (**(code **)(lVar11 + 8))(uVar8,lVar10);
  }
  else if ((int)uVar3 == 0) {
    (**(code **)(lVar11 + 0x20))(uVar8,uVar9,lVar10);
    (**(code **)(lVar11 + 0x38))(uVar8,0,1,lVar10);
    goto LAB_1040d565c;
  }
  lVar2 = *(long *)(lVar11 + 0x40);
  if (*(int *)(lVar11 + 0x54) == 0) {
    lVar2 = lVar2 + 1;
  }
  _memcpy(uVar8,uVar9,lVar2);
LAB_1040d565c:
  lVar2 = *(long *)(lVar11 + 0x40);
  if (*(int *)(lVar11 + 0x54) == 0) {
    lVar2 = lVar2 + 1;
  }
  puVar7 = (undefined8 *)(uVar8 + lVar2 + 7 & 0xfffffffffffffff8);
  puVar6 = (undefined8 *)(uVar9 + lVar2 + 7 & 0xffffffffffffff8);
  uVar4 = puVar7[1];
  uVar13 = *puVar6;
  puVar7[1] = puVar6[1];
  *puVar7 = uVar13;
  _swift_release(uVar4);
  return param_1;
}



/* Entry: 1040d58b8; end: 1040d5ad7;  */

void FUN_1040d58b8(int *param_1,ulong param_2,uint param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  code *UNRECOVERED_JUMPTABLE;
  long lVar14;
  ulong *puVar15;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  
  puVar10 = PTR___sSciTL_11034fea8;
  uVar6 = *(undefined8 *)(param_4 + 0x10);
  uVar7 = *(undefined8 *)(param_4 + 0x18);
  lVar11 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar7,uVar6,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar20 = *(long *)(lVar11 + -8);
  uVar8 = *(uint *)(lVar20 + 0x54);
  lVar12 = 0;
  _swift_getAssociatedTypeWitness(0,uVar7,uVar6,puVar10,PTR___s7ElementSciTl_11034fb58);
  lVar14 = *(long *)(lVar12 + -8);
  uVar13 = *(uint *)(lVar14 + 0x54);
  uVar3 = 0;
  if (uVar13 != 0) {
    uVar3 = uVar13 - 1;
  }
  uVar4 = uVar3;
  if (uVar3 <= uVar8) {
    uVar4 = uVar8;
  }
  if (uVar4 < 0x80000000) {
    uVar4 = 0x7fffffff;
  }
  uVar17 = (ulong)*(byte *)(lVar14 + 0x50);
  uVar2 = *(long *)(lVar20 + 0x40) + uVar17;
  lVar16 = *(long *)(lVar14 + 0x40);
  if (uVar13 == 0) {
    lVar16 = lVar16 + 1;
  }
  lVar1 = (lVar16 + 7 + (uVar2 & (uVar17 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 0x10;
  uVar18 = 2;
  uVar19 = uVar18;
  if ((int)lVar1 == 0) {
    uVar19 = (param_3 - uVar4) + 1;
  }
  if (0xffff < uVar19) {
    uVar18 = 4;
  }
  if (uVar19 < 0x100) {
    uVar18 = 1;
  }
  uVar5 = 0;
  if (1 < uVar19) {
    uVar5 = uVar18;
  }
  uVar18 = 0;
  if (uVar4 < param_3) {
    uVar18 = uVar5;
  }
  uVar19 = (uint)param_2;
  iVar9 = uVar19 - uVar4;
  if (uVar19 < uVar4 || iVar9 == 0) {
    if (uVar18 < 2) {
      if (uVar18 != 0) {
        *(undefined1 *)((long)param_1 + lVar1) = 0;
      }
    }
    else if (uVar18 == 2) {
      *(undefined2 *)((long)param_1 + lVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar1) = 0;
    }
    if (uVar19 != 0) {
      if (uVar8 == uVar4) {
        UNRECOVERED_JUMPTABLE = *(code **)(lVar20 + 0x38);
        lVar12 = lVar11;
        uVar13 = uVar8;
      }
      else {
        param_1 = (int *)(uVar2 + (long)param_1 & ~uVar17);
        if (uVar3 != uVar4) {
          puVar15 = (ulong *)(lVar16 + 7 + (long)param_1 & 0xfffffffffffffff8);
          if (-1 < (int)uVar19) {
            *puVar15 = (ulong)(uVar19 - 1);
            return;
          }
          *puVar15 = (ulong)(uVar19 & 0x7fffffff);
          puVar15[1] = 0;
          return;
        }
        UNRECOVERED_JUMPTABLE = *(code **)(lVar14 + 0x38);
        param_2 = (ulong)(uVar19 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x0001040d5a84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,param_2,uVar13,lVar12);
      return;
    }
  }
  else {
    if ((int)lVar1 != 0) {
      iVar9 = 1;
      _bzero(param_1,lVar1);
      *param_1 = uVar19 + ~uVar4;
    }
    if (uVar18 < 2) {
      if (uVar18 != 0) {
        *(char *)((long)param_1 + lVar1) = (char)iVar9;
      }
    }
    else if (uVar18 == 2) {
      *(short *)((long)param_1 + lVar1) = (short)iVar9;
    }
    else {
      *(int *)((long)param_1 + lVar1) = iVar9;
    }
  }
  return;
}



/* Entry: 1040d5ad8; end: 1040d5ae3;  */

void FUN_1040d5ad8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getGenericMetadata_11034f380)(param_1,param_2,&UNK_10e7efe68);
  return;
}



/* Entry: 1040d5ae4; end: 1040d5d2f;  */

void FUN_1040d5ae4(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 auStack_70 [2];
  
  lVar9 = *(long *)(param_2 + 0x18);
  lVar13 = *(long *)(lVar9 + -8);
  lVar7 = param_2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = (long)(&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  puVar11 = (undefined8 *)(lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12_00 + 0x10))(puVar11);
  puVar4 = puVar11;
  _swift_getEnumCaseMultiPayload(puVar11,param_2);
  if ((int)puVar4 == 2) {
    uVar8 = *puVar11;
    *param_1 = uVar8;
    param_1[1] = 0;
    param_1[2] = uVar8;
    _swift_storeEnumTagMultiPayload(param_1,param_2,3);
    _swift_retain(uVar8);
  }
  else {
    if ((int)puVar4 != 0) {
      *(undefined4 *)(puVar11 + -1) = 0;
      puVar11[-2] = 0x2c;
      __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                ("Fatal error",0xb,2,0xd000000000000020,0x800000010f1edd10,
                 "AsyncAlgorithms/AsyncJoinedBySeparatorSequence.swift",0x34,2);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1040d5d30);
      (*pcVar3)();
    }
    (**(code **)(lVar13 + 0x20))(lVar10,puVar11,lVar9);
    puVar2 = PTR___sSciTL_11034fea8;
    uVar12 = *(undefined8 *)(param_2 + 0x28);
    uVar8 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,uVar12,lVar9,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
    uVar5 = 0xff;
    _swift_getAssociatedTypeWitness(0xff,uVar12,lVar9,puVar2,PTR___s7ElementSciTl_11034fb58);
    uVar6 = 0xff;
    __ss15ContiguousArrayVMa(0xff,uVar5);
    lVar7 = 0;
    _swift_getTupleTypeMetadata2(0,uVar8,uVar6,0,0);
    iVar1 = *(int *)(lVar7 + 0x30);
    (**(code **)(lVar13 + 0x10))
              (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar10,lVar9);
    __sSci17makeAsyncIterator0bC0QzyFTj(param_1,lVar9,uVar12);
    uVar8 = 0;
    __sSa22_allocateUninitializedySayxG_SpyxGtSiFZ(0,uVar5);
    __ss15ContiguousArrayV12arrayLiteralAByxGxd_tcfC();
    (**(code **)(lVar13 + 8))(lVar10,lVar9);
    *(undefined8 *)((long)param_1 + (long)iVar1) = uVar8;
    _swift_storeEnumTagMultiPayload(param_1,param_2,1);
  }
  return;
}



/* Entry: 1040d5d30; end: 1040d5e7f;  */

void FUN_1040d5d30(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 unaff_x20;
  undefined8 uVar7;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x28) = param_3;
  *(undefined8 *)(unaff_x22 + 0x30) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
  uVar6 = *(undefined8 *)(param_3 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x38) = uVar6;
  uVar7 = *(undefined8 *)(param_3 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x40) = uVar7;
  puVar1 = PTR___sSciTL_11034fea8;
  lVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar6,uVar7,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  *(long *)(unaff_x22 + 0x48) = lVar2;
  lVar3 = 0;
  __sSqMa(0,lVar2);
  *(long *)(unaff_x22 + 0x50) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x58) = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar4;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x68) = lVar2;
  uVar4 = *(long *)(lVar2 + 0x40) + 0xf;
  uVar5 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x70) = uVar5;
  uVar5 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x78) = uVar5;
  uVar5 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x80) = uVar5;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x88) = uVar4;
  lVar2 = 0;
  _swift_getAssociatedTypeWitness(0,uVar6,uVar7,puVar1,PTR___s13AsyncIteratorSciTl_11034fb50);
  *(long *)(unaff_x22 + 0x90) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x98) = lVar2;
  uVar4 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa0) = uVar4;
  lVar2 = *(long *)(param_3 + -8);
  *(long *)(unaff_x22 + 0xa8) = lVar2;
  uVar4 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb0) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1040d5e80,0,0);
  return;
}



/* Entry: 1040d5e80; end: 1040d6177;  */

void FUN_1040d5e80(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x28);
  (**(code **)(*(long *)(unaff_x22 + 0xa8) + 0x10))(uVar2,*(undefined8 *)(unaff_x22 + 0x30),uVar7);
  _swift_getEnumCaseMultiPayload(uVar2,uVar7);
  if ((int)uVar2 == 3) {
    plVar5 = *(long **)(unaff_x22 + 0xb0);
    lVar1 = *plVar5;
    lVar4 = plVar5[1];
    lVar8 = plVar5[2];
    uVar7 = *(undefined8 *)(unaff_x22 + 0x48);
    if (lVar4 == *(long *)(lVar1 + 0x10)) {
      lVar4 = *(long *)(unaff_x22 + 0x68);
      plVar5 = *(long **)(unaff_x22 + 0x20);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
      _swift_release(lVar1);
      (**(code **)(lVar4 + 0x38))(uVar3,1,1,uVar7);
      *plVar5 = lVar8;
      uVar7 = 2;
    }
    else {
      __ss15ContiguousArrayVyxSicig(*(undefined8 *)(unaff_x22 + 0x70),lVar4,lVar1,uVar7);
      if (SCARRY8(lVar4,1)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1040d6178);
        (*pcVar6)();
      }
      uVar7 = *(undefined8 *)(unaff_x22 + 0x78);
      lVar12 = *(long *)(unaff_x22 + 0x68);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
      plVar5 = *(long **)(unaff_x22 + 0x20);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x18);
      pcVar6 = *(code **)(lVar12 + 0x20);
      (*pcVar6)(uVar7,*(undefined8 *)(unaff_x22 + 0x70),uVar3);
      (*pcVar6)(uVar10,uVar7,uVar3);
      (**(code **)(lVar12 + 0x38))(uVar10,0,1,uVar3);
      *plVar5 = lVar1;
      plVar5[1] = lVar4 + 1;
      plVar5[2] = lVar8;
      uVar7 = 3;
    }
    _swift_storeEnumTagMultiPayload(plVar5,uVar2,uVar7);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x60);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xb0));
    _swift_task_dealloc(uVar9);
    _swift_task_dealloc(uVar3);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar10);
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar11);
                    /* WARNING: Could not recover jumptable at 0x0001040d6170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  if ((int)uVar2 == 1) {
    lVar8 = *(long *)(unaff_x22 + 0xb0);
    lVar1 = *(long *)(unaff_x22 + 0x98);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar3 = 0xff;
    __ss15ContiguousArrayVMa(0xff,*(undefined8 *)(unaff_x22 + 0x48));
    *(undefined8 *)(unaff_x22 + 0xb8) = uVar3;
    lVar4 = 0;
    _swift_getTupleTypeMetadata2(0,uVar9,uVar3,0,0);
    *(long *)(unaff_x22 + 0xc0) = lVar4;
    uVar3 = *(undefined8 *)(lVar8 + *(int *)(lVar4 + 0x30));
    *(undefined8 *)(unaff_x22 + 200) = uVar3;
    pcVar6 = *(code **)(lVar1 + 0x20);
    *(code **)(unaff_x22 + 0xd0) = pcVar6;
    (*pcVar6)(uVar2,lVar8,uVar9);
    *(undefined8 *)(unaff_x22 + 0x10) = uVar3;
    _swift_getAssociatedConformanceWitness
              (uVar10,uVar7,uVar9,PTR___sSciTL_11034fea8,
               PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
    plVar5 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xd8) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_1040d6178;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)
              (plVar5,*(undefined8 *)(unaff_x22 + 0x60),*(undefined8 *)(unaff_x22 + 0x90),uVar10);
    return;
  }
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000020,0x800000010f1edd10,
             "AsyncAlgorithms/AsyncJoinedBySeparatorSequence.swift",0x34,2,0x3f,0);
  return;
}



/* Entry: 1040d6178; end: 1040d61d3;  */

void FUN_1040d6178(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xe0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xd8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1040d61d4;
  }
  else {
    pcVar1 = FUN_1040d63a0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1040d61d4; end: 1040d639f;  */

void FUN_1040d61d4(void)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x60);
  lVar1 = *(long *)(unaff_x22 + 0x68);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar4 = uVar6;
  (**(code **)(lVar1 + 0x30))(uVar6,1,uVar9);
  if ((int)uVar4 == 1) {
    uVar14 = *(undefined8 *)(unaff_x22 + 200);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
    lVar2 = *(long *)(unaff_x22 + 0x58);
    puVar5 = *(undefined8 **)(unaff_x22 + 0x20);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x18);
    (**(code **)(*(long *)(unaff_x22 + 0x98) + 8))
              (*(undefined8 *)(unaff_x22 + 0xa0),*(undefined8 *)(unaff_x22 + 0x90));
    (**(code **)(lVar2 + 8))(uVar6,uVar4);
    (**(code **)(lVar1 + 0x38))(uVar12,1,1,uVar9);
    *puVar5 = uVar14;
    uVar6 = 2;
  }
  else {
    pcVar8 = *(code **)(unaff_x22 + 0xd0);
    uVar4 = *(undefined8 *)(unaff_x22 + 0xb8);
    lVar2 = *(long *)(unaff_x22 + 0xc0);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x80);
    puVar5 = *(undefined8 **)(unaff_x22 + 0x20);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x18);
    pcVar11 = *(code **)(lVar1 + 0x20);
    (*pcVar11)(uVar12,uVar6,uVar9);
    (**(code **)(lVar1 + 0x10))(uVar13,uVar12,uVar9);
    __ss15ContiguousArrayV6appendyyxnF(uVar13,uVar4);
    (*pcVar11)(uVar15,uVar12,uVar9);
    (**(code **)(lVar1 + 0x38))(uVar15,0,1,uVar9);
    iVar3 = *(int *)(lVar2 + 0x30);
    (*pcVar8)(puVar5,uVar7,uVar14);
    *(undefined8 *)((long)puVar5 + (long)iVar3) = *(undefined8 *)(unaff_x22 + 0x10);
    uVar6 = 1;
  }
  _swift_storeEnumTagMultiPayload(puVar5,uVar10,uVar6);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x60);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xb0));
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar14);
                    /* WARNING: Could not recover jumptable at 0x0001040d639c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040d63a0; end: 1040d6453;  */

void FUN_1040d63a0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0xb0);
  lVar1 = *(long *)(unaff_x22 + 0x98);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x60);
  _swift_release(*(undefined8 *)(unaff_x22 + 200));
  (**(code **)(lVar1 + 8))(uVar4,uVar5);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar9);
                    /* WARNING: Could not recover jumptable at 0x0001040d6450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040d6454; end: 1040d6547;  */

void FUN_1040d6454(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_6,param_4,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar3 = 0;
  _swift_getTupleTypeMetadata2(0,lVar2,param_5,0,0);
  iVar1 = *(int *)(lVar3 + 0x30);
  (**(code **)(*(long *)(lVar2 + -8) + 0x20))(param_1,param_2,lVar2);
  (**(code **)(*(long *)(param_5 + -8) + 0x20))(param_1 + iVar1,param_3,param_5);
  uVar4 = 0;
  uStack_88 = param_4;
  lStack_80 = param_5;
  uStack_78 = param_6;
  uStack_70 = param_7;
  uStack_68 = param_8;
  FUN_1040d9174(0,&uStack_88);
  _swift_storeEnumTagMultiPayload(param_1,uVar4,0);
  return;
}



/* Entry: 1040d6548; end: 1040d684b;  */

void FUN_1040d6548(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 unaff_x20;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  *(long *)(unaff_x22 + 0x68) = param_2;
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x60) = param_1;
  uVar8 = *(undefined8 *)(param_2 + 0x28);
  lVar7 = *(long *)(param_2 + 0x18);
  *(long *)(unaff_x22 + 0x78) = lVar7;
  puVar2 = PTR___sSciTL_11034fea8;
  puVar1 = PTR___s7ElementSciTl_11034fb58;
  lVar3 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar8,lVar7,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  *(long *)(unaff_x22 + 0x80) = lVar3;
  lVar4 = 0;
  __sSqMa(0,lVar3);
  *(long *)(unaff_x22 + 0x88) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x90) = lVar4;
  uVar6 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar5 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x98) = uVar5;
  uVar5 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa0) = uVar5;
  uVar6 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa8) = uVar6;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0xb0) = lVar3;
  uVar6 = *(long *)(lVar3 + 0x40) + 0xf;
  uVar5 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb8) = uVar5;
  uVar6 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xc0) = uVar6;
  uVar9 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(unaff_x22 + 200) = uVar9;
  uVar10 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar10;
  uVar11 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(unaff_x22 + 0xd8) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x10) = uVar9;
  *(long *)(unaff_x22 + 0x18) = lVar7;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar11;
  lVar3 = 0;
  func_0x0001040d9180();
  *(long *)(unaff_x22 + 0xe0) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0xe8) = lVar3;
  uVar6 = *(long *)(lVar3 + 0x40) + 0xf;
  uVar5 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xf0) = uVar5;
  uVar5 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xf8) = uVar5;
  uVar6 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x100) = uVar6;
  lVar3 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,uVar10,uVar9,puVar2,puVar1);
  *(long *)(unaff_x22 + 0x108) = lVar3;
  puVar1 = PTR___s13AsyncIteratorSciTl_11034fb50;
  lVar4 = 0;
  _swift_getAssociatedTypeWitness(0,uVar11,lVar3,puVar2,PTR___s13AsyncIteratorSciTl_11034fb50);
  *(long *)(unaff_x22 + 0x110) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x118) = lVar4;
  uVar6 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar5 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x120) = uVar5;
  uVar6 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x128) = uVar6;
  lVar4 = 0;
  __sSqMa(0,lVar3);
  *(long *)(unaff_x22 + 0x130) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x138) = lVar4;
  uVar6 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar5 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x140) = uVar5;
  uVar6 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x148) = uVar6;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x150) = lVar3;
  uVar6 = *(long *)(lVar3 + 0x40) + 0xf;
  uVar5 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x158) = uVar5;
  uVar5 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x160) = uVar5;
  uVar5 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x168) = uVar5;
  uVar6 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x170) = uVar6;
  lVar3 = *(long *)(lVar7 + -8);
  *(long *)(unaff_x22 + 0x178) = lVar3;
  uVar6 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x180) = uVar6;
  lVar3 = 0;
  _swift_getAssociatedTypeWitness(0,uVar10,uVar9,puVar2,puVar1);
  *(long *)(unaff_x22 + 0x188) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 400) = lVar3;
  uVar6 = *(long *)(lVar3 + 0x40) + 0xf;
  uVar5 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x198) = uVar5;
  uVar5 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1a0) = uVar5;
  uVar6 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1a8) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar9;
  *(long *)(unaff_x22 + 0x40) = lVar7;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x58) = uVar11;
  lVar3 = 0;
  func_0x0001040d9174();
  *(long *)(unaff_x22 + 0x1b0) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x1b8) = lVar3;
  uVar6 = *(long *)(lVar3 + 0x40) + 0xf;
  uVar5 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1c0) = uVar5;
  uVar6 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1c8) = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1040d684c,0,0);
  return;
}



/* Entry: 1040d684c; end: 1040d6cab;  */

void FUN_1040d684c(void)

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
  undefined8 uVar10;
  int iVar11;
  undefined *puVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long *plVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  code *pcVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  long lVar29;
  long lVar30;
  long unaff_x22;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  
  uVar28 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x1b0);
  (**(code **)(*(long *)(unaff_x22 + 0x1b8) + 0x10))
            (uVar28,*(undefined8 *)(unaff_x22 + 0x70),uVar20);
  _swift_getEnumCaseMultiPayload(uVar28,uVar20);
  iVar13 = (int)uVar28;
  if (iVar13 < 2) {
    if (iVar13 == 0) {
      lVar29 = *(long *)(unaff_x22 + 0x1c8);
      uVar26 = *(undefined8 *)(unaff_x22 + 0x1a8);
      uVar20 = *(undefined8 *)(unaff_x22 + 0x188);
      lVar15 = *(long *)(unaff_x22 + 400);
      lVar14 = *(long *)(unaff_x22 + 0x178);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x180);
      uVar28 = *(undefined8 *)(unaff_x22 + 200);
      uVar21 = *(undefined8 *)(unaff_x22 + 0xd0);
      uVar33 = *(undefined8 *)(unaff_x22 + 0x78);
      lVar18 = 0;
      _swift_getTupleTypeMetadata2(0,uVar20,uVar33,0,0);
      iVar13 = *(int *)(lVar18 + 0x30);
      (**(code **)(lVar15 + 0x20))(uVar26,lVar29,uVar20);
      (**(code **)(lVar14 + 0x20))(uVar2,lVar29 + iVar13,uVar33);
      _swift_getAssociatedConformanceWitness
                (uVar21,uVar28,uVar20,PTR___sSciTL_11034fea8,
                 PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
      plVar19 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x1d0) = plVar19;
      *plVar19 = unaff_x22;
      plVar19[1] = (long)FUN_1040d6cac;
      uVar28 = *(undefined8 *)(unaff_x22 + 0x188);
      uVar20 = *(undefined8 *)(unaff_x22 + 0x148);
    }
    else {
      lVar30 = *(long *)(unaff_x22 + 0x1c8);
      uVar27 = *(undefined8 *)(unaff_x22 + 0x1a0);
      uVar20 = *(undefined8 *)(unaff_x22 + 0x188);
      lVar15 = *(long *)(unaff_x22 + 400);
      lVar14 = *(long *)(unaff_x22 + 0x118);
      uVar26 = *(undefined8 *)(unaff_x22 + 0x120);
      uVar28 = *(undefined8 *)(unaff_x22 + 0x108);
      uVar33 = *(undefined8 *)(unaff_x22 + 0x110);
      uVar24 = *(undefined8 *)(unaff_x22 + 0x100);
      uVar2 = *(undefined8 *)(unaff_x22 + 0xe0);
      lVar18 = *(long *)(unaff_x22 + 0xe8);
      uVar21 = *(undefined8 *)(unaff_x22 + 0xd8);
      lVar29 = 0;
      _swift_getTupleTypeMetadata3(0,uVar20,uVar33,uVar2,0,0);
      *(long *)(unaff_x22 + 0x1f0) = lVar29;
      iVar13 = *(int *)(lVar29 + 0x30);
      iVar11 = *(int *)(lVar29 + 0x40);
      pcVar22 = *(code **)(lVar15 + 0x20);
      *(code **)(unaff_x22 + 0x1f8) = pcVar22;
      (*pcVar22)(uVar27,lVar30,uVar20);
      pcVar22 = *(code **)(lVar14 + 0x20);
      *(code **)(unaff_x22 + 0x200) = pcVar22;
      (*pcVar22)(uVar26,lVar30 + iVar13,uVar33);
      pcVar22 = *(code **)(lVar18 + 0x20);
      *(code **)(unaff_x22 + 0x208) = pcVar22;
      (*pcVar22)(uVar24,lVar30 + iVar11,uVar2);
      _swift_getAssociatedConformanceWitness
                (uVar21,uVar28,uVar33,PTR___sSciTL_11034fea8,
                 PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
      plVar19 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x210) = plVar19;
      *plVar19 = unaff_x22;
      plVar19[1] = (long)FUN_1040d725c;
      uVar28 = *(undefined8 *)(unaff_x22 + 0x110);
      uVar20 = *(undefined8 *)(unaff_x22 + 0xa8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)(plVar19,uVar20,uVar28,uVar21);
    return;
  }
  if (iVar13 == 2) {
    lVar30 = *(long *)(unaff_x22 + 0x1c8);
    lVar14 = *(long *)(unaff_x22 + 400);
    uVar28 = *(undefined8 *)(unaff_x22 + 0x198);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x188);
    lVar15 = *(long *)(unaff_x22 + 0x150);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x158);
    uVar33 = *(undefined8 *)(unaff_x22 + 0x108);
    uVar21 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar20 = *(undefined8 *)(unaff_x22 + 0xe0);
    lVar18 = *(long *)(unaff_x22 + 0xe8);
    lVar29 = 0;
    _swift_getTupleTypeMetadata3(0,uVar26,uVar20,uVar33,0,0);
    *(long *)(unaff_x22 + 0x240) = lVar29;
    iVar13 = *(int *)(lVar29 + 0x30);
    iVar11 = *(int *)(lVar29 + 0x40);
    pcVar22 = *(code **)(lVar14 + 0x20);
    *(code **)(unaff_x22 + 0x248) = pcVar22;
    (*pcVar22)(uVar28,lVar30,uVar26);
    pcVar22 = *(code **)(lVar18 + 0x20);
    *(code **)(unaff_x22 + 0x250) = pcVar22;
    (*pcVar22)(uVar21,lVar30 + iVar13,uVar20);
    pcVar22 = *(code **)(lVar15 + 0x20);
    *(code **)(unaff_x22 + 600) = pcVar22;
    (*pcVar22)(uVar2,lVar30 + iVar11,uVar33);
    plVar19 = (long *)0xf0;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x260) = plVar19;
    *plVar19 = unaff_x22;
    plVar19[1] = (long)FUN_1040d7b30;
    lVar14 = *(long *)(unaff_x22 + 0xf0);
    lVar15 = *(long *)(unaff_x22 + 0xf8);
    lVar29 = *(long *)(unaff_x22 + 0xe0);
    lVar18 = *(long *)(unaff_x22 + 0xa0);
    plVar19[5] = lVar29;
    plVar19[6] = lVar15;
    plVar19[3] = lVar18;
    plVar19[4] = lVar14;
    lVar18 = *(long *)(lVar29 + 0x28);
    plVar19[7] = lVar18;
    lVar30 = *(long *)(lVar29 + 0x18);
    plVar19[8] = lVar30;
    puVar12 = PTR___sSciTL_11034fea8;
    lVar14 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,lVar18,lVar30,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
    plVar19[9] = lVar14;
    lVar15 = 0;
    __sSqMa(0,lVar14);
    plVar19[10] = lVar15;
    lVar15 = *(long *)(lVar15 + -8);
    plVar19[0xb] = lVar15;
    uVar16 = *(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar19[0xc] = uVar16;
    lVar14 = *(long *)(lVar14 + -8);
    plVar19[0xd] = lVar14;
    uVar16 = *(long *)(lVar14 + 0x40) + 0xf;
    uVar17 = uVar16 & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar19[0xe] = uVar17;
    uVar17 = uVar16 & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar19[0xf] = uVar17;
    uVar17 = uVar16 & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar19[0x10] = uVar17;
    uVar16 = uVar16 & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar19[0x11] = uVar16;
    lVar14 = 0;
    _swift_getAssociatedTypeWitness(0,lVar18,lVar30,puVar12,PTR___s13AsyncIteratorSciTl_11034fb50);
    plVar19[0x12] = lVar14;
    lVar14 = *(long *)(lVar14 + -8);
    plVar19[0x13] = lVar14;
    uVar16 = *(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar19[0x14] = uVar16;
    lVar14 = *(long *)(lVar29 + -8);
    plVar19[0x15] = lVar14;
    uVar16 = *(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar19[0x16] = uVar16;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_1040d5e80,0,0);
    return;
  }
  (**(code **)(*(long *)(unaff_x22 + 0xb0) + 0x38))
            (*(undefined8 *)(unaff_x22 + 0x60),1,1,*(undefined8 *)(unaff_x22 + 0x80));
  uVar20 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar28 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar31 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar32 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar33 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar24 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar25 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar27 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x98);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1c8));
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar28);
  _swift_task_dealloc(uVar31);
  _swift_task_dealloc(uVar32);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar26);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar33);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar24);
  _swift_task_dealloc(uVar25);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar27);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar23);
                    /* WARNING: Could not recover jumptable at 0x0001040d6ca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040d6cac; end: 1040d6d07;  */

void FUN_1040d6cac(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x1d8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x1d0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1040d6d08;
  }
  else {
    pcVar1 = FUN_1040d8178;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1040d6d08; end: 1040d705b;  */

void FUN_1040d6d08(void)

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
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  undefined *puVar14;
  undefined *puVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  long *plVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  long lVar26;
  undefined8 uVar27;
  long unaff_x22;
  long lVar28;
  undefined8 uVar29;
  long lVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  long lVar35;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x148);
  lVar20 = *(long *)(unaff_x22 + 0x150);
  uVar34 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar19 = uVar1;
  (**(code **)(lVar20 + 0x30))(uVar1,1,uVar34);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1b0);
  lVar22 = *(long *)(unaff_x22 + 0x1b8);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x188);
  lVar26 = *(long *)(unaff_x22 + 400);
  lVar18 = *(long *)(unaff_x22 + 0x178);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x180);
  if ((int)uVar19 == 1) {
    uVar19 = *(undefined8 *)(unaff_x22 + 0x130);
    lVar20 = *(long *)(unaff_x22 + 0x138);
    lVar35 = *(long *)(unaff_x22 + 0xb0);
    uVar34 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar31 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar33 = *(undefined8 *)(unaff_x22 + 0x60);
    (**(code **)(lVar18 + 8))(uVar4,*(undefined8 *)(unaff_x22 + 0x78));
    (**(code **)(lVar26 + 8))(uVar24,uVar3);
    (**(code **)(lVar20 + 8))(uVar1,uVar19);
    (**(code **)(lVar22 + 8))(uVar31,uVar2);
    _swift_storeEnumTagMultiPayload(uVar31,uVar2,3);
    (**(code **)(lVar35 + 0x38))(uVar33,1,1,uVar34);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x1c0);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x1a0);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x1a8);
    uVar29 = *(undefined8 *)(unaff_x22 + 0x198);
    uVar32 = *(undefined8 *)(unaff_x22 + 0x180);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x168);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x170);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x158);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x160);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x140);
    uVar27 = *(undefined8 *)(unaff_x22 + 0x148);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x120);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x128);
    uVar34 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x100);
    uVar25 = *(undefined8 *)(unaff_x22 + 0xf0);
    uVar31 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar10 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar33 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar11 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x98);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1c8));
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar29);
    _swift_task_dealloc(uVar32);
    _swift_task_dealloc(uVar6);
    _swift_task_dealloc(uVar3);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar27);
    _swift_task_dealloc(uVar19);
    _swift_task_dealloc(uVar8);
    _swift_task_dealloc(uVar24);
    _swift_task_dealloc(uVar9);
    _swift_task_dealloc(uVar34);
    _swift_task_dealloc(uVar25);
    _swift_task_dealloc(uVar10);
    _swift_task_dealloc(uVar31);
    _swift_task_dealloc(uVar11);
    _swift_task_dealloc(uVar33);
    _swift_task_dealloc(uVar23);
                    /* WARNING: Could not recover jumptable at 0x0001040d6f04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar19 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar27 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar31 = *(undefined8 *)(unaff_x22 + 0x110);
  lVar28 = *(long *)(unaff_x22 + 0x118);
  uVar33 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xe0);
  lVar35 = *(long *)(unaff_x22 + 0x70);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x78);
  (**(code **)(lVar20 + 0x20))(uVar5,uVar1,uVar34);
  (**(code **)(lVar20 + 0x10))(uVar19,uVar5,uVar34);
  __sSci17makeAsyncIterator0bC0QzyFTj(uVar27,uVar34,uVar33);
  (**(code **)(lVar22 + 8))(lVar35,uVar2);
  lVar20 = 0;
  _swift_getTupleTypeMetadata3(0,uVar3,uVar31,uVar6,0,0);
  iVar12 = *(int *)(lVar20 + 0x30);
  iVar13 = *(int *)(lVar20 + 0x40);
  (**(code **)(lVar26 + 0x10))(lVar35,uVar24,uVar3);
  (**(code **)(lVar28 + 0x10))(lVar35 + iVar12,uVar27,uVar31);
  (**(code **)(lVar18 + 0x10))(lVar35 + iVar13,uVar4,uVar7);
  _swift_storeEnumTagMultiPayload(lVar35 + iVar13,uVar6,0);
  _swift_storeEnumTagMultiPayload(lVar35,uVar2,1);
  plVar21 = (long *)0x290;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x1e0) = plVar21;
  *plVar21 = unaff_x22;
  plVar21[1] = (long)FUN_1040d705c;
  lVar18 = *(long *)(unaff_x22 + 0x68);
  lVar20 = *(long *)(unaff_x22 + 0x70);
  lVar22 = *(long *)(unaff_x22 + 0x60);
  plVar21[0xd] = lVar18;
  plVar21[0xe] = lVar20;
  plVar21[0xc] = lVar22;
  lVar35 = *(long *)(lVar18 + 0x28);
  lVar26 = *(long *)(lVar18 + 0x18);
  plVar21[0xf] = lVar26;
  puVar15 = PTR___sSciTL_11034fea8;
  puVar14 = PTR___s7ElementSciTl_11034fb58;
  lVar20 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,lVar35,lVar26,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  plVar21[0x10] = lVar20;
  lVar22 = 0;
  __sSqMa(0,lVar20);
  plVar21[0x11] = lVar22;
  lVar22 = *(long *)(lVar22 + -8);
  plVar21[0x12] = lVar22;
  uVar17 = *(long *)(lVar22 + 0x40) + 0xf;
  uVar16 = uVar17 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar21[0x13] = uVar16;
  uVar16 = uVar17 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar21[0x14] = uVar16;
  uVar17 = uVar17 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar21[0x15] = uVar17;
  lVar20 = *(long *)(lVar20 + -8);
  plVar21[0x16] = lVar20;
  uVar17 = *(long *)(lVar20 + 0x40) + 0xf;
  uVar16 = uVar17 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar21[0x17] = uVar16;
  uVar17 = uVar17 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar21[0x18] = uVar17;
  lVar22 = *(long *)(lVar18 + 0x10);
  plVar21[0x19] = lVar22;
  lVar28 = *(long *)(lVar18 + 0x20);
  plVar21[0x1a] = lVar28;
  lVar30 = *(long *)(lVar18 + 0x30);
  plVar21[0x1b] = lVar30;
  plVar21[2] = lVar22;
  plVar21[3] = lVar26;
  plVar21[4] = lVar28;
  plVar21[5] = lVar35;
  plVar21[6] = lVar30;
  lVar18 = 0;
  func_0x0001040d9180();
  plVar21[0x1c] = lVar18;
  lVar18 = *(long *)(lVar18 + -8);
  plVar21[0x1d] = lVar18;
  uVar17 = *(long *)(lVar18 + 0x40) + 0xf;
  uVar16 = uVar17 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar21[0x1e] = uVar16;
  uVar16 = uVar17 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar21[0x1f] = uVar16;
  uVar17 = uVar17 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar21[0x20] = uVar17;
  lVar18 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,lVar28,lVar22,puVar15,puVar14);
  plVar21[0x21] = lVar18;
  puVar14 = PTR___s13AsyncIteratorSciTl_11034fb50;
  lVar20 = 0;
  _swift_getAssociatedTypeWitness(0,lVar30,lVar18,puVar15,PTR___s13AsyncIteratorSciTl_11034fb50);
  plVar21[0x22] = lVar20;
  lVar20 = *(long *)(lVar20 + -8);
  plVar21[0x23] = lVar20;
  uVar17 = *(long *)(lVar20 + 0x40) + 0xf;
  uVar16 = uVar17 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar21[0x24] = uVar16;
  uVar17 = uVar17 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar21[0x25] = uVar17;
  lVar20 = 0;
  __sSqMa(0,lVar18);
  plVar21[0x26] = lVar20;
  lVar20 = *(long *)(lVar20 + -8);
  plVar21[0x27] = lVar20;
  uVar17 = *(long *)(lVar20 + 0x40) + 0xf;
  uVar16 = uVar17 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar21[0x28] = uVar16;
  uVar17 = uVar17 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar21[0x29] = uVar17;
  lVar18 = *(long *)(lVar18 + -8);
  plVar21[0x2a] = lVar18;
  uVar17 = *(long *)(lVar18 + 0x40) + 0xf;
  uVar16 = uVar17 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar21[0x2b] = uVar16;
  uVar16 = uVar17 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar21[0x2c] = uVar16;
  uVar16 = uVar17 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar21[0x2d] = uVar16;
  uVar17 = uVar17 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar21[0x2e] = uVar17;
  lVar18 = *(long *)(lVar26 + -8);
  plVar21[0x2f] = lVar18;
  uVar17 = *(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar21[0x30] = uVar17;
  lVar18 = 0;
  _swift_getAssociatedTypeWitness(0,lVar28,lVar22,puVar15,puVar14);
  plVar21[0x31] = lVar18;
  lVar18 = *(long *)(lVar18 + -8);
  plVar21[0x32] = lVar18;
  uVar17 = *(long *)(lVar18 + 0x40) + 0xf;
  uVar16 = uVar17 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar21[0x33] = uVar16;
  uVar16 = uVar17 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar21[0x34] = uVar16;
  uVar17 = uVar17 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar21[0x35] = uVar17;
  plVar21[7] = lVar22;
  plVar21[8] = lVar26;
  plVar21[9] = lVar28;
  plVar21[10] = lVar35;
  plVar21[0xb] = lVar30;
  lVar18 = 0;
  func_0x0001040d9174();
  plVar21[0x36] = lVar18;
  lVar18 = *(long *)(lVar18 + -8);
  plVar21[0x37] = lVar18;
  uVar17 = *(long *)(lVar18 + 0x40) + 0xf;
  uVar16 = uVar17 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar21[0x38] = uVar16;
  uVar17 = uVar17 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar21[0x39] = uVar17;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1040d684c,0,0);
  return;
}



/* Entry: 1040d705c; end: 1040d70b7;  */

void FUN_1040d705c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x1e8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x1e0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1040d70b8;
  }
  else {
    pcVar1 = FUN_1040d8324;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1040d70b8; end: 1040d725b;  */

void FUN_1040d70b8(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long unaff_x22;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long lVar24;
  
  uVar18 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x188);
  lVar6 = *(long *)(unaff_x22 + 400);
  lVar2 = *(long *)(unaff_x22 + 0x178);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x170);
  lVar24 = *(long *)(unaff_x22 + 0x150);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x78);
  (**(code **)(*(long *)(unaff_x22 + 0x118) + 8))
            (*(undefined8 *)(unaff_x22 + 0x128),*(undefined8 *)(unaff_x22 + 0x110));
  (**(code **)(lVar24 + 8))(uVar19,uVar20);
  (**(code **)(lVar2 + 8))(uVar7,uVar22);
  (**(code **)(lVar6 + 8))(uVar18,uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar17 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar15 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x98);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1c8));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar22);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar16);
                    /* WARNING: Could not recover jumptable at 0x0001040d7258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040d725c; end: 1040d72b7;  */

void FUN_1040d725c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x218) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x210));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1040d72b8;
  }
  else {
    pcVar1 = FUN_1040d8504;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1040d72b8; end: 1040d759f;  */

void FUN_1040d72b8(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  long *plVar15;
  code *pcVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  long unaff_x22;
  long lVar27;
  undefined8 uVar28;
  code *pcVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  long lVar32;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
  lVar3 = *(long *)(unaff_x22 + 0xb0);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar14 = uVar1;
  (**(code **)(lVar3 + 0x30))(uVar1,1,uVar25);
  if ((int)uVar14 == 1) {
    uVar26 = *(undefined8 *)(unaff_x22 + 0x188);
    uVar14 = *(undefined8 *)(unaff_x22 + 200);
    uVar25 = *(undefined8 *)(unaff_x22 + 0xd0);
    (**(code **)(*(long *)(unaff_x22 + 0x90) + 8))(uVar1,*(undefined8 *)(unaff_x22 + 0x88));
    _swift_getAssociatedConformanceWitness
              (uVar25,uVar14,uVar26,PTR___sSciTL_11034fea8,
               PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
    plVar15 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x220) = plVar15;
    *plVar15 = unaff_x22;
    plVar15[1] = (long)FUN_1040d75a0;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)
              (plVar15,*(undefined8 *)(unaff_x22 + 0x140),*(undefined8 *)(unaff_x22 + 0x188),uVar25)
    ;
    return;
  }
  pcVar16 = *(code **)(unaff_x22 + 0x208);
  pcVar2 = *(code **)(unaff_x22 + 0x1f8);
  pcVar4 = *(code **)(unaff_x22 + 0x200);
  lVar27 = *(long *)(unaff_x22 + 0x1f0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x1b0);
  lVar5 = *(long *)(unaff_x22 + 0x1b8);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar20 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar31 = *(undefined8 *)(unaff_x22 + 0xc0);
  lVar32 = *(long *)(unaff_x22 + 0x70);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x60);
  pcVar29 = *(code **)(lVar3 + 0x20);
  (*pcVar29)(uVar31,uVar1,uVar25);
  (**(code **)(lVar5 + 8))(lVar32,uVar14);
  iVar12 = *(int *)(lVar27 + 0x30);
  iVar13 = *(int *)(lVar27 + 0x40);
  (*pcVar2)(lVar32,uVar24,uVar26);
  (*pcVar4)(lVar32 + iVar12,uVar17,uVar18);
  (*pcVar16)(lVar32 + iVar13,uVar19,uVar20);
  _swift_storeEnumTagMultiPayload(lVar32,uVar14,1);
  (*pcVar29)(uVar21,uVar31,uVar25);
  (**(code **)(lVar3 + 0x38))(uVar21,0,1,uVar25);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar28 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar30 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar31 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar19 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar23 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar20 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar21 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x98);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1c8));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar24);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar28);
  _swift_task_dealloc(uVar30);
  _swift_task_dealloc(uVar31);
  _swift_task_dealloc(uVar25);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar26);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar22);
                    /* WARNING: Could not recover jumptable at 0x0001040d759c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040d75a0; end: 1040d75fb;  */

void FUN_1040d75a0(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x228) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x220));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1040d75fc;
  }
  else {
    pcVar1 = FUN_1040d86c8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1040d75fc; end: 1040d7933;  */

void FUN_1040d75fc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  long *plVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long lVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  long unaff_x22;
  long lVar28;
  long lVar29;
  undefined8 uVar30;
  long lVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  
  lVar28 = *(long *)(unaff_x22 + 0x150);
  uVar34 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar15 = uVar34;
  (**(code **)(lVar28 + 0x30))(uVar34,1,uVar26);
  if ((int)uVar15 == 1) {
    uVar15 = *(undefined8 *)(unaff_x22 + 0x1b0);
    lVar12 = *(long *)(unaff_x22 + 0x1b8);
    uVar27 = *(undefined8 *)(unaff_x22 + 0x1a0);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x188);
    lVar17 = *(long *)(unaff_x22 + 400);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x130);
    lVar25 = *(long *)(unaff_x22 + 0x138);
    lVar28 = *(long *)(unaff_x22 + 0x118);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x120);
    uVar32 = *(undefined8 *)(unaff_x22 + 0x110);
    lVar20 = *(long *)(unaff_x22 + 0xb0);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar35 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x60);
    (**(code **)(*(long *)(unaff_x22 + 0xe8) + 8))
              (*(undefined8 *)(unaff_x22 + 0x100),*(undefined8 *)(unaff_x22 + 0xe0));
    (**(code **)(lVar28 + 8))(uVar24,uVar32);
    (**(code **)(lVar17 + 8))(uVar27,uVar26);
    (**(code **)(lVar25 + 8))(uVar34,uVar19);
    (**(code **)(lVar12 + 8))(uVar35,uVar15);
    _swift_storeEnumTagMultiPayload(uVar35,uVar15,3);
    (**(code **)(lVar20 + 0x38))(uVar22,1,1,uVar21);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x1c0);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x1a0);
    uVar35 = *(undefined8 *)(unaff_x22 + 0x1a8);
    uVar30 = *(undefined8 *)(unaff_x22 + 0x198);
    uVar33 = *(undefined8 *)(unaff_x22 + 0x180);
    uVar34 = *(undefined8 *)(unaff_x22 + 0x168);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x170);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x158);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x160);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x140);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x148);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x120);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x128);
    uVar22 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x100);
    uVar23 = *(undefined8 *)(unaff_x22 + 0xf0);
    uVar27 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar6 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar32 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x98);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1c8));
    _swift_task_dealloc(uVar15);
    _swift_task_dealloc(uVar35);
    _swift_task_dealloc(uVar26);
    _swift_task_dealloc(uVar30);
    _swift_task_dealloc(uVar33);
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar34);
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar19);
    _swift_task_dealloc(uVar3);
    _swift_task_dealloc(uVar24);
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar21);
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar22);
    _swift_task_dealloc(uVar23);
    _swift_task_dealloc(uVar6);
    _swift_task_dealloc(uVar27);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar32);
    _swift_task_dealloc(uVar18);
                    /* WARNING: Could not recover jumptable at 0x0001040d781c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar12 = *(long *)(unaff_x22 + 0x1b8);
  lVar17 = *(long *)(unaff_x22 + 0x1c0);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x1b0);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x188);
  lVar25 = *(long *)(unaff_x22 + 400);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar27 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x70);
  (**(code **)(lVar28 + 0x20))(uVar22,uVar34,uVar26);
  lVar20 = 0;
  _swift_getTupleTypeMetadata3(0,uVar15,uVar27,uVar26,0,0);
  iVar8 = *(int *)(lVar20 + 0x30);
  iVar9 = *(int *)(lVar20 + 0x40);
  (**(code **)(lVar25 + 0x10))(lVar17,uVar21,uVar15);
  FUN_1040d5ae4(lVar17 + iVar8,uVar27);
  (**(code **)(lVar28 + 0x10))(lVar17 + iVar9,uVar22,uVar26);
  _swift_storeEnumTagMultiPayload(lVar17,uVar24,2);
  (**(code **)(lVar12 + 0x28))(uVar19,lVar17,uVar24);
  plVar16 = (long *)0x290;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x230) = plVar16;
  *plVar16 = unaff_x22;
  plVar16[1] = (long)FUN_1040d7934;
  lVar28 = *(long *)(unaff_x22 + 0x68);
  lVar12 = *(long *)(unaff_x22 + 0x70);
  lVar17 = *(long *)(unaff_x22 + 0x60);
  plVar16[0xd] = lVar28;
  plVar16[0xe] = lVar12;
  plVar16[0xc] = lVar17;
  lVar20 = *(long *)(lVar28 + 0x28);
  lVar25 = *(long *)(lVar28 + 0x18);
  plVar16[0xf] = lVar25;
  puVar11 = PTR___sSciTL_11034fea8;
  puVar10 = PTR___s7ElementSciTl_11034fb58;
  lVar12 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,lVar20,lVar25,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  plVar16[0x10] = lVar12;
  lVar17 = 0;
  __sSqMa(0,lVar12);
  plVar16[0x11] = lVar17;
  lVar17 = *(long *)(lVar17 + -8);
  plVar16[0x12] = lVar17;
  uVar14 = *(long *)(lVar17 + 0x40) + 0xf;
  uVar13 = uVar14 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar16[0x13] = uVar13;
  uVar13 = uVar14 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar16[0x14] = uVar13;
  uVar14 = uVar14 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar16[0x15] = uVar14;
  lVar12 = *(long *)(lVar12 + -8);
  plVar16[0x16] = lVar12;
  uVar14 = *(long *)(lVar12 + 0x40) + 0xf;
  uVar13 = uVar14 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar16[0x17] = uVar13;
  uVar14 = uVar14 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar16[0x18] = uVar14;
  lVar17 = *(long *)(lVar28 + 0x10);
  plVar16[0x19] = lVar17;
  lVar29 = *(long *)(lVar28 + 0x20);
  plVar16[0x1a] = lVar29;
  lVar31 = *(long *)(lVar28 + 0x30);
  plVar16[0x1b] = lVar31;
  plVar16[2] = lVar17;
  plVar16[3] = lVar25;
  plVar16[4] = lVar29;
  plVar16[5] = lVar20;
  plVar16[6] = lVar31;
  lVar28 = 0;
  func_0x0001040d9180();
  plVar16[0x1c] = lVar28;
  lVar28 = *(long *)(lVar28 + -8);
  plVar16[0x1d] = lVar28;
  uVar14 = *(long *)(lVar28 + 0x40) + 0xf;
  uVar13 = uVar14 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar16[0x1e] = uVar13;
  uVar13 = uVar14 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar16[0x1f] = uVar13;
  uVar14 = uVar14 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar16[0x20] = uVar14;
  lVar28 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,lVar29,lVar17,puVar11,puVar10);
  plVar16[0x21] = lVar28;
  puVar10 = PTR___s13AsyncIteratorSciTl_11034fb50;
  lVar12 = 0;
  _swift_getAssociatedTypeWitness(0,lVar31,lVar28,puVar11,PTR___s13AsyncIteratorSciTl_11034fb50);
  plVar16[0x22] = lVar12;
  lVar12 = *(long *)(lVar12 + -8);
  plVar16[0x23] = lVar12;
  uVar14 = *(long *)(lVar12 + 0x40) + 0xf;
  uVar13 = uVar14 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar16[0x24] = uVar13;
  uVar14 = uVar14 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar16[0x25] = uVar14;
  lVar12 = 0;
  __sSqMa(0,lVar28);
  plVar16[0x26] = lVar12;
  lVar12 = *(long *)(lVar12 + -8);
  plVar16[0x27] = lVar12;
  uVar14 = *(long *)(lVar12 + 0x40) + 0xf;
  uVar13 = uVar14 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar16[0x28] = uVar13;
  uVar14 = uVar14 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar16[0x29] = uVar14;
  lVar28 = *(long *)(lVar28 + -8);
  plVar16[0x2a] = lVar28;
  uVar14 = *(long *)(lVar28 + 0x40) + 0xf;
  uVar13 = uVar14 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar16[0x2b] = uVar13;
  uVar13 = uVar14 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar16[0x2c] = uVar13;
  uVar13 = uVar14 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar16[0x2d] = uVar13;
  uVar14 = uVar14 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar16[0x2e] = uVar14;
  lVar28 = *(long *)(lVar25 + -8);
  plVar16[0x2f] = lVar28;
  uVar14 = *(long *)(lVar28 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar16[0x30] = uVar14;
  lVar28 = 0;
  _swift_getAssociatedTypeWitness(0,lVar29,lVar17,puVar11,puVar10);
  plVar16[0x31] = lVar28;
  lVar28 = *(long *)(lVar28 + -8);
  plVar16[0x32] = lVar28;
  uVar14 = *(long *)(lVar28 + 0x40) + 0xf;
  uVar13 = uVar14 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar16[0x33] = uVar13;
  uVar13 = uVar14 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar16[0x34] = uVar13;
  uVar14 = uVar14 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar16[0x35] = uVar14;
  plVar16[7] = lVar17;
  plVar16[8] = lVar25;
  plVar16[9] = lVar29;
  plVar16[10] = lVar20;
  plVar16[0xb] = lVar31;
  lVar28 = 0;
  func_0x0001040d9174();
  plVar16[0x36] = lVar28;
  lVar28 = *(long *)(lVar28 + -8);
  plVar16[0x37] = lVar28;
  uVar14 = *(long *)(lVar28 + 0x40) + 0xf;
  uVar13 = uVar14 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar16[0x38] = uVar13;
  uVar14 = uVar14 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar16[0x39] = uVar14;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1040d684c,0,0);
  return;
}



/* Entry: 1040d7934; end: 1040d798f;  */

void FUN_1040d7934(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x238) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x230));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1040d7990;
  }
  else {
    pcVar1 = FUN_1040d888c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1040d7990; end: 1040d7b2f;  */

void FUN_1040d7990(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long unaff_x22;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  uVar21 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x188);
  lVar7 = *(long *)(unaff_x22 + 400);
  lVar2 = *(long *)(unaff_x22 + 0x118);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xe0);
  lVar10 = *(long *)(unaff_x22 + 0xe8);
  (**(code **)(*(long *)(unaff_x22 + 0x150) + 8))
            (*(undefined8 *)(unaff_x22 + 0x160),*(undefined8 *)(unaff_x22 + 0x108));
  (**(code **)(lVar10 + 8))(uVar22,uVar3);
  (**(code **)(lVar2 + 8))(uVar8,uVar9);
  (**(code **)(lVar7 + 8))(uVar21,uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar20 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar17 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar18 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x98);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1c8));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar24);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar22);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar19);
                    /* WARNING: Could not recover jumptable at 0x0001040d7b2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040d7b30; end: 1040d7b8b;  */

void FUN_1040d7b30(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x268) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x260));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1040d7b8c;
  }
  else {
    pcVar1 = FUN_1040d8a60;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1040d7b8c; end: 1040d7f63;  */

void FUN_1040d7b8c(void)

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
  int iVar10;
  int iVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  code *pcVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  code *pcVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  code *pcVar28;
  undefined8 uVar29;
  code *pcVar30;
  long lVar31;
  undefined8 uVar32;
  long lVar33;
  long lVar34;
  long unaff_x22;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  long lVar38;
  undefined8 uVar39;
  
  lVar34 = *(long *)(unaff_x22 + 0xb0);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x98);
  lVar16 = *(long *)(unaff_x22 + 0x90);
  uVar32 = *(undefined8 *)(unaff_x22 + 0x80);
  (**(code **)(lVar16 + 0x10))
            (uVar17,*(undefined8 *)(unaff_x22 + 0xa0),*(undefined8 *)(unaff_x22 + 0x88));
  (**(code **)(lVar34 + 0x30))(uVar17,1,uVar32);
  pcVar21 = *(code **)(lVar16 + 8);
  *(code **)(unaff_x22 + 0x270) = pcVar21;
  if ((int)uVar17 == 1) {
    lVar16 = *(long *)(unaff_x22 + 0x1b8);
    lVar33 = *(long *)(unaff_x22 + 0x1c0);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x1b0);
    lVar34 = *(long *)(unaff_x22 + 400);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x198);
    uVar35 = *(undefined8 *)(unaff_x22 + 0x188);
    uVar36 = *(undefined8 *)(unaff_x22 + 0x168);
    lVar20 = *(long *)(unaff_x22 + 0x150);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x158);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x108);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x110);
    lVar31 = *(long *)(unaff_x22 + 0xe8);
    uVar4 = *(undefined8 *)(unaff_x22 + 0xf0);
    uVar32 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar26 = *(undefined8 *)(unaff_x22 + 0xe0);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x70);
    (*pcVar21)(*(undefined8 *)(unaff_x22 + 0x98),*(undefined8 *)(unaff_x22 + 0x88));
    lVar18 = 0;
    _swift_getTupleTypeMetadata3(0,uVar35,uVar3,uVar26,0,0);
    iVar10 = *(int *)(lVar18 + 0x30);
    iVar11 = *(int *)(lVar18 + 0x40);
    (**(code **)(lVar34 + 0x10))(lVar33,uVar1,uVar35);
    (**(code **)(lVar20 + 0x10))(uVar36,uVar2,uVar17);
    __sSci17makeAsyncIterator0bC0QzyFTj(lVar33 + iVar10,uVar17,uVar32);
    (**(code **)(lVar31 + 0x10))(lVar33 + iVar11,uVar4,uVar26);
    _swift_storeEnumTagMultiPayload(lVar33,uVar23,1);
    (**(code **)(lVar16 + 0x28))(uVar24,lVar33,uVar23);
    plVar19 = (long *)0x290;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x278) = plVar19;
    *plVar19 = unaff_x22;
    plVar19[1] = (long)FUN_1040d7f64;
    lVar16 = *(long *)(unaff_x22 + 0x68);
    lVar34 = *(long *)(unaff_x22 + 0x70);
    lVar20 = *(long *)(unaff_x22 + 0x60);
    plVar19[0xd] = lVar16;
    plVar19[0xe] = lVar34;
    plVar19[0xc] = lVar20;
    lVar33 = *(long *)(lVar16 + 0x28);
    lVar31 = *(long *)(lVar16 + 0x18);
    plVar19[0xf] = lVar31;
    puVar13 = PTR___sSciTL_11034fea8;
    puVar12 = PTR___s7ElementSciTl_11034fb58;
    lVar34 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,lVar33,lVar31,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
    plVar19[0x10] = lVar34;
    lVar20 = 0;
    __sSqMa(0,lVar34);
    plVar19[0x11] = lVar20;
    lVar20 = *(long *)(lVar20 + -8);
    plVar19[0x12] = lVar20;
    uVar15 = *(long *)(lVar20 + 0x40) + 0xf;
    uVar14 = uVar15 & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar19[0x13] = uVar14;
    uVar14 = uVar15 & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar19[0x14] = uVar14;
    uVar15 = uVar15 & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar19[0x15] = uVar15;
    lVar34 = *(long *)(lVar34 + -8);
    plVar19[0x16] = lVar34;
    uVar15 = *(long *)(lVar34 + 0x40) + 0xf;
    uVar14 = uVar15 & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar19[0x17] = uVar14;
    uVar15 = uVar15 & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar19[0x18] = uVar15;
    lVar20 = *(long *)(lVar16 + 0x10);
    plVar19[0x19] = lVar20;
    lVar18 = *(long *)(lVar16 + 0x20);
    plVar19[0x1a] = lVar18;
    lVar38 = *(long *)(lVar16 + 0x30);
    plVar19[0x1b] = lVar38;
    plVar19[2] = lVar20;
    plVar19[3] = lVar31;
    plVar19[4] = lVar18;
    plVar19[5] = lVar33;
    plVar19[6] = lVar38;
    lVar16 = 0;
    func_0x0001040d9180();
    plVar19[0x1c] = lVar16;
    lVar16 = *(long *)(lVar16 + -8);
    plVar19[0x1d] = lVar16;
    uVar15 = *(long *)(lVar16 + 0x40) + 0xf;
    uVar14 = uVar15 & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar19[0x1e] = uVar14;
    uVar14 = uVar15 & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar19[0x1f] = uVar14;
    uVar15 = uVar15 & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar19[0x20] = uVar15;
    lVar16 = 0xff;
    _swift_getAssociatedTypeWitness(0xff,lVar18,lVar20,puVar13,puVar12);
    plVar19[0x21] = lVar16;
    puVar12 = PTR___s13AsyncIteratorSciTl_11034fb50;
    lVar34 = 0;
    _swift_getAssociatedTypeWitness(0,lVar38,lVar16,puVar13,PTR___s13AsyncIteratorSciTl_11034fb50);
    plVar19[0x22] = lVar34;
    lVar34 = *(long *)(lVar34 + -8);
    plVar19[0x23] = lVar34;
    uVar15 = *(long *)(lVar34 + 0x40) + 0xf;
    uVar14 = uVar15 & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar19[0x24] = uVar14;
    uVar15 = uVar15 & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar19[0x25] = uVar15;
    lVar34 = 0;
    __sSqMa(0,lVar16);
    plVar19[0x26] = lVar34;
    lVar34 = *(long *)(lVar34 + -8);
    plVar19[0x27] = lVar34;
    uVar15 = *(long *)(lVar34 + 0x40) + 0xf;
    uVar14 = uVar15 & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar19[0x28] = uVar14;
    uVar15 = uVar15 & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar19[0x29] = uVar15;
    lVar16 = *(long *)(lVar16 + -8);
    plVar19[0x2a] = lVar16;
    uVar15 = *(long *)(lVar16 + 0x40) + 0xf;
    uVar14 = uVar15 & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar19[0x2b] = uVar14;
    uVar14 = uVar15 & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar19[0x2c] = uVar14;
    uVar14 = uVar15 & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar19[0x2d] = uVar14;
    uVar15 = uVar15 & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar19[0x2e] = uVar15;
    lVar16 = *(long *)(lVar31 + -8);
    plVar19[0x2f] = lVar16;
    uVar15 = *(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar19[0x30] = uVar15;
    lVar16 = 0;
    _swift_getAssociatedTypeWitness(0,lVar18,lVar20,puVar13,puVar12);
    plVar19[0x31] = lVar16;
    lVar16 = *(long *)(lVar16 + -8);
    plVar19[0x32] = lVar16;
    uVar15 = *(long *)(lVar16 + 0x40) + 0xf;
    uVar14 = uVar15 & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar19[0x33] = uVar14;
    uVar14 = uVar15 & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar19[0x34] = uVar14;
    uVar15 = uVar15 & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar19[0x35] = uVar15;
    plVar19[7] = lVar20;
    plVar19[8] = lVar31;
    plVar19[9] = lVar18;
    plVar19[10] = lVar33;
    plVar19[0xb] = lVar38;
    lVar16 = 0;
    func_0x0001040d9174();
    plVar19[0x36] = lVar16;
    lVar16 = *(long *)(lVar16 + -8);
    plVar19[0x37] = lVar16;
    uVar15 = *(long *)(lVar16 + 0x40) + 0xf;
    uVar14 = uVar15 & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar19[0x38] = uVar14;
    uVar15 = uVar15 & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar19[0x39] = uVar15;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_1040d684c,0,0);
    return;
  }
  pcVar25 = *(code **)(unaff_x22 + 600);
  pcVar28 = *(code **)(unaff_x22 + 0x250);
  pcVar30 = *(code **)(unaff_x22 + 0x248);
  lVar33 = *(long *)(unaff_x22 + 0x240);
  lVar20 = *(long *)(unaff_x22 + 0x1b8);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x1b0);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar35 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar29 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar17 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar32 = *(undefined8 *)(unaff_x22 + 0xe0);
  lVar34 = *(long *)(unaff_x22 + 0xe8);
  lVar16 = *(long *)(unaff_x22 + 0xb0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
  lVar31 = *(long *)(unaff_x22 + 0x70);
  uVar36 = *(undefined8 *)(unaff_x22 + 0x60);
  (*pcVar21)(*(undefined8 *)(unaff_x22 + 0xa0),*(undefined8 *)(unaff_x22 + 0x88));
  (**(code **)(lVar34 + 8))(uVar3,uVar32);
  pcVar21 = *(code **)(lVar16 + 0x20);
  (*pcVar21)(uVar4,uVar1,uVar2);
  (**(code **)(lVar20 + 8))(lVar31,uVar26);
  iVar10 = *(int *)(lVar33 + 0x30);
  iVar11 = *(int *)(lVar33 + 0x40);
  (*pcVar30)(lVar31,uVar23,uVar24);
  (*pcVar28)(lVar31 + iVar10,uVar17,uVar32);
  (*pcVar25)(lVar31 + iVar11,uVar35,uVar29);
  _swift_storeEnumTagMultiPayload(lVar31,uVar26,2);
  (*pcVar21)(uVar36,uVar4,uVar2);
  (**(code **)(lVar16 + 0x38))(uVar36,0,1,uVar2);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar32 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar35 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar37 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar39 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar36 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar29 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar26 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar27 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar23 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar24 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x98);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1c8));
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar35);
  _swift_task_dealloc(uVar32);
  _swift_task_dealloc(uVar37);
  _swift_task_dealloc(uVar39);
  _swift_task_dealloc(uVar36);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar29);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar26);
  _swift_task_dealloc(uVar27);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar24);
  _swift_task_dealloc(uVar22);
                    /* WARNING: Could not recover jumptable at 0x0001040d7f60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040d7f64; end: 1040d7fbf;  */

void FUN_1040d7f64(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x280) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x278));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1040d7fc0;
  }
  else {
    pcVar1 = FUN_1040d8c24;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1040d7fc0; end: 1040d8177;  */

void FUN_1040d7fc0(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  code *pcVar19;
  long unaff_x22;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  code *pcVar25;
  
  pcVar25 = *(code **)(unaff_x22 + 0x270);
  lVar1 = *(long *)(unaff_x22 + 400);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x188);
  lVar2 = *(long *)(unaff_x22 + 0x150);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar23 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x88);
  pcVar19 = *(code **)(*(long *)(unaff_x22 + 0xe8) + 8);
  (*pcVar19)(*(undefined8 *)(unaff_x22 + 0xf0),uVar3);
  (*pcVar25)(uVar23,uVar24);
  (**(code **)(lVar2 + 8))(uVar6,uVar20);
  (*pcVar19)(uVar7,uVar3);
  (**(code **)(lVar1 + 8))(uVar5,uVar16);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar23 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar18 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar24 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar15 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x98);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1c8));
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar22);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar24);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar17);
                    /* WARNING: Could not recover jumptable at 0x0001040d8174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}


