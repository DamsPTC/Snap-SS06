/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10412d284; end: 10412d29b;  */

void FUN_10412d284(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getGenericMetadata_11034f380)(param_1,param_2,&DAT_10e7f1568);
  return;
}



/* Entry: 10412d29c; end: 10412f183;  */

undefined1  [16] FUN_10412d29c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auStack_108 [32];
  undefined1 auStack_e8 [32];
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 auStack_a8 [32];
  long lStack_88;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined1 *puStack_70;
  undefined *puStack_68;
  
  uVar5 = *(ulong *)(param_1 + 0x10);
  lVar2 = 0x13f;
  _swift_checkMetadataState();
  if (uVar5 < 0x40) {
    lStack_88 = *(long *)(lVar2 + -8) + 0x40;
    puVar1 = PTR___sBoWV_11034d678 + 0x40;
    puStack_c0 = &UNK_10dcd8890;
    puStack_b8 = &UNK_10dcd8890;
    uVar6 = *(ulong *)(param_1 + 0x20);
    lVar3 = 0xff;
    puStack_c8 = puVar1;
    _swift_getAssociatedTypeWitness();
    uVar7 = *(ulong *)(param_1 + 0x28);
    lVar4 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,uVar7,*(undefined8 *)(param_1 + 0x18),PTR___ss5ClockTL_110350028,
               PTR___s7Instants5ClockPTl_11034fb68);
    uVar5 = 0xff;
    _swift_getTupleTypeMetadata2(0xff,lVar3,lVar4,"element deadline ",0);
    lVar2 = 0x13f;
    __sSqMa();
    if (uVar5 < 0x40) {
      puStack_b0 = (undefined1 *)(*(long *)(lVar2 + -8) + 0x40);
      _swift_getTupleTypeLayout(auStack_a8,0,4,&puStack_c8);
      puStack_78 = &UNK_10dcd88a8;
      puStack_c0 = &UNK_10dcd8890;
      puStack_b8 = &UNK_10dcd88c0;
      if (uVar6 < 0x40) {
        if (uVar7 < 0x40) {
          puStack_c8 = puVar1;
          puStack_80 = auStack_a8;
          _swift_getTupleTypeLayout2
                    (auStack_108,*(long *)(lVar3 + -8) + 0x40,*(long *)(lVar4 + -8) + 0x40);
          puStack_b0 = auStack_108;
          _swift_getTupleTypeLayout(auStack_e8,0,4,&puStack_c8);
          puStack_68 = &UNK_10dcd88d8;
          puStack_70 = auStack_e8;
          _swift_initEnumMetadataMultiPayload(param_1,0,5,&lStack_88);
          uVar8 = 0;
          lVar3 = 0;
        }
        else {
          uVar8 = 0x3f;
          lVar3 = lVar4;
        }
      }
      else {
        uVar8 = 0x3f;
      }
      goto LAB_10412d438;
    }
  }
  lVar3 = lVar2;
  uVar8 = 0x3f;
LAB_10412d438:
  auVar9._8_8_ = uVar8;
  auVar9._0_8_ = lVar3;
  return auVar9;
}



/* Entry: 10412f184; end: 10412f34f;  */

int FUN_10412f184(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  
  uVar10 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(long *)(param_3 + 0x10),PTR___sSciTL_11034fea8,
             PTR___s7ElementSciTl_11034fb58);
  lVar11 = *(long *)(lVar5 + -8);
  bVar2 = *(byte *)(lVar11 + 0x50);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x18),
             PTR___ss5ClockTL_110350028,PTR___s7Instants5ClockPTl_11034fb68);
  lVar5 = *(long *)(lVar5 + -8);
  uVar7 = (ulong)*(uint *)(lVar5 + 0x50) & 0xff;
  uVar9 = (ulong)(*(uint *)(lVar5 + 0x50) & 0xff | (uint)bVar2);
  uVar7 = (*(long *)(lVar11 + 0x40) + uVar7 & (uVar7 ^ 0xffffffffffffffff)) +
          *(long *)(lVar5 + 0x40) + (uVar9 + 0x18 & (uVar9 ^ 0xffffffffffffffff));
  uVar9 = uVar7;
  if (*(int *)(lVar5 + 0x54) == 0 && *(int *)(lVar11 + 0x54) == 0) {
    uVar9 = uVar7 + 1;
  }
  if (uVar9 <= uVar10) {
    uVar9 = uVar10;
  }
  if (uVar9 <= uVar7) {
    uVar9 = uVar7;
  }
  if (uVar9 < 0x19) {
    uVar9 = 0x18;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 0xfb) goto LAB_10412f2e4;
  uVar7 = uVar9 + 1;
  uVar6 = (uint)uVar7;
  uVar3 = uVar6 << 3;
  if (uVar6 < 4) {
    uVar8 = ((param_2 + ~(-1 << (ulong)(uVar3 & 0x1f))) - 0xfa >> (ulong)(uVar3 & 0x1f)) + 1;
    if (uVar8 < 0x100) {
      if (uVar8 < 2) goto LAB_10412f2e4;
      goto LAB_10412f270;
    }
    if (uVar8 >> 0x10 == 0) {
      uVar8 = (uint)*(ushort *)((long)param_1 + uVar7);
    }
    else {
      uVar8 = *(uint *)((long)param_1 + uVar7);
    }
  }
  else {
LAB_10412f270:
    uVar8 = (uint)*(byte *)((long)param_1 + uVar7);
  }
  if (uVar8 != 0) {
    uVar1 = 0;
    if (uVar6 < 4) {
      uVar1 = uVar8 - 1 << (ulong)(uVar3 & 0x1f);
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
    return ((uint)uVar7 | uVar1) + 0xfb;
  }
LAB_10412f2e4:
  iVar4 = 0;
  if (5 < *(byte *)((long)param_1 + uVar9)) {
    iVar4 = (*(byte *)((long)param_1 + uVar9) ^ 0xff) + 1;
  }
  return iVar4;
}



/* Entry: 10412f350; end: 10412f59f;  */

void FUN_10412f350(uint *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  undefined2 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  uint uVar7;
  byte bVar8;
  ulong uVar9;
  long lVar10;
  
  uVar9 = *(ulong *)(*(long *)(*(long *)(param_4 + 0x10) + -8) + 0x40);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x20),*(long *)(param_4 + 0x10),PTR___sSciTL_11034fea8,
             PTR___s7ElementSciTl_11034fb58);
  lVar10 = *(long *)(lVar3 + -8);
  bVar8 = *(byte *)(lVar10 + 0x50);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x28),*(undefined8 *)(param_4 + 0x18),
             PTR___ss5ClockTL_110350028,PTR___s7Instants5ClockPTl_11034fb68);
  lVar3 = *(long *)(lVar3 + -8);
  uVar4 = (ulong)*(uint *)(lVar3 + 0x50) & 0xff;
  uVar5 = (ulong)(*(uint *)(lVar3 + 0x50) & 0xff | (uint)bVar8);
  uVar4 = (*(long *)(lVar10 + 0x40) + uVar4 & (uVar4 ^ 0xffffffffffffffff)) +
          *(long *)(lVar3 + 0x40) + (uVar5 + 0x18 & (uVar5 ^ 0xffffffffffffffff));
  uVar5 = uVar4;
  if (*(int *)(lVar3 + 0x54) == 0 && *(int *)(lVar10 + 0x54) == 0) {
    uVar5 = uVar4 + 1;
  }
  if (uVar5 <= uVar9) {
    uVar5 = uVar9;
  }
  if (uVar5 <= uVar4) {
    uVar5 = uVar4;
  }
  if (uVar5 < 0x19) {
    uVar5 = 0x18;
  }
  lVar3 = uVar5 + 1;
  uVar7 = (uint)lVar3;
  if (param_3 < 0xfb) {
    bVar8 = 0;
  }
  else if (uVar7 < 4) {
    uVar1 = ((param_3 + ~(-1 << (ulong)(uVar7 << 3 & 0x1f))) - 0xfa >> (ulong)(uVar7 << 3 & 0x1f)) +
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
  if (param_2 < 0xfb) {
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
      *(char *)((long)param_1 + uVar5) = -(char)param_2;
    }
  }
  else {
    param_2 = param_2 - 0xfb;
    if (uVar7 < 4) {
      iVar6 = (param_2 >> (ulong)(uVar7 << 3 & 0x1f)) + 1;
      if (uVar7 != 0) {
        uVar1 = param_2 & (-1 << (ulong)(uVar7 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,lVar3);
        uVar2 = (undefined2)uVar1;
        if (uVar7 == 3) {
          *(undefined2 *)param_1 = uVar2;
          *(char *)((long)param_1 + 2) = (char)(uVar1 >> 0x10);
        }
        else if (uVar7 == 2) {
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
    if (bVar8 < 2) {
      if (bVar8 != 0) {
        *(char *)((long)param_1 + lVar3) = (char)iVar6;
      }
    }
    else if (bVar8 == 2) {
      *(short *)((long)param_1 + lVar3) = (short)iVar6;
    }
    else {
      *(int *)((long)param_1 + lVar3) = iVar6;
    }
  }
  return;
}



/* Entry: 10412f5a0; end: 10412f6f3;  */

uint FUN_10412f5a0(uint *param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar8 = *(ulong *)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 0x40);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x20),*(long *)(param_2 + 0x10),PTR___sSciTL_11034fea8,
             PTR___s7ElementSciTl_11034fb58);
  lVar9 = *(long *)(lVar3 + -8);
  bVar1 = *(byte *)(lVar9 + 0x50);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x18),
             PTR___ss5ClockTL_110350028,PTR___s7Instants5ClockPTl_11034fb68);
  lVar3 = *(long *)(lVar3 + -8);
  uVar5 = (ulong)*(uint *)(lVar3 + 0x50) & 0xff;
  uVar7 = (ulong)(*(uint *)(lVar3 + 0x50) & 0xff | (uint)bVar1);
  uVar5 = (*(long *)(lVar9 + 0x40) + uVar5 & (uVar5 ^ 0xffffffffffffffff)) + *(long *)(lVar3 + 0x40)
          + (uVar7 + 0x18 & (uVar7 ^ 0xffffffffffffffff));
  uVar7 = uVar5;
  if (*(int *)(lVar3 + 0x54) == 0 && *(int *)(lVar9 + 0x54) == 0) {
    uVar7 = uVar5 + 1;
  }
  if (uVar7 <= uVar8) {
    uVar7 = uVar8;
  }
  if (uVar7 <= uVar5) {
    uVar7 = uVar5;
  }
  if (uVar7 < 0x19) {
    uVar7 = 0x18;
  }
  bVar1 = *(byte *)((long)param_1 + uVar7);
  uVar2 = (uint)bVar1;
  if (4 < bVar1) {
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
    uVar2 = uVar6 | bVar1 - 5 << (ulong)((uVar4 & 3) << 3);
    if (3 < uVar4) {
      uVar2 = uVar6;
    }
    uVar2 = uVar2 + 5;
  }
  return uVar2;
}



/* Entry: 10412f6f4; end: 10412f6f7;  */

void FUN_10412f6f4(void)

{
  return;
}



/* Entry: 10412f6f8; end: 10412f873;  */

void FUN_10412f6f8(uint *param_1,uint param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  uVar6 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40);
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(long *)(param_3 + 0x10),PTR___sSciTL_11034fea8,
             PTR___s7ElementSciTl_11034fb58);
  lVar7 = *(long *)(lVar2 + -8);
  bVar1 = *(byte *)(lVar7 + 0x50);
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x18),
             PTR___ss5ClockTL_110350028,PTR___s7Instants5ClockPTl_11034fb68);
  lVar2 = *(long *)(lVar2 + -8);
  uVar4 = (ulong)*(uint *)(lVar2 + 0x50) & 0xff;
  uVar5 = (ulong)(*(uint *)(lVar2 + 0x50) & 0xff | (uint)bVar1);
  uVar4 = (*(long *)(lVar7 + 0x40) + uVar4 & (uVar4 ^ 0xffffffffffffffff)) + *(long *)(lVar2 + 0x40)
          + (uVar5 + 0x18 & (uVar5 ^ 0xffffffffffffffff));
  uVar5 = uVar4;
  if (*(int *)(lVar2 + 0x54) == 0 && *(int *)(lVar7 + 0x54) == 0) {
    uVar5 = uVar4 + 1;
  }
  if (uVar5 <= uVar6) {
    uVar5 = uVar6;
  }
  if (uVar5 <= uVar4) {
    uVar5 = uVar4;
  }
  if (uVar5 < 0x19) {
    uVar5 = 0x18;
  }
  if (param_2 < 5) {
    *(char *)((long)param_1 + uVar5) = (char)param_2;
  }
  else {
    param_2 = param_2 - 5;
    uVar3 = (uint)uVar5;
    if (uVar3 < 4) {
      *(char *)((long)param_1 + uVar5) = (char)(param_2 >> (ulong)(uVar3 << 3 & 0x1f)) + '\x05';
      if (uVar3 == 0) {
        return;
      }
      param_2 = param_2 & (-1 << (ulong)(uVar3 << 3 & 0x1f) ^ 0xffffffffU);
    }
    else {
      *(undefined1 *)((long)param_1 + uVar5) = 5;
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



/* Entry: 10412f874; end: 10412f973;  */

void FUN_10412f874(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  (**(code **)(*(long *)(param_5 + -8) + 0x20))(param_1,param_2,param_5);
  uVar2 = 0;
  lStack_70 = param_5;
  lStack_68 = param_6;
  uStack_60 = param_7;
  uStack_58 = param_8;
  func_0x00010412d290(0,&lStack_70);
  _swift_storeEnumTagMultiPayload(param_1,uVar2,0);
  lVar3 = 0;
  lStack_70 = param_5;
  lStack_68 = param_6;
  uStack_60 = param_7;
  uStack_58 = param_8;
  func_0x00010412d284(0,&lStack_70);
  (**(code **)(*(long *)(param_6 + -8) + 0x20))(param_1 + *(int *)(lVar3 + 0x38),param_3,param_6);
  iVar1 = *(int *)(lVar3 + 0x34);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_8,param_6,PTR___ss5ClockTL_110350028,PTR___s8Durations5ClockPTl_11034fb70);
  (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1 + iVar1,param_4,lVar3);
  return;
}



/* Entry: 10412f974; end: 10413303f;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_10412f974(long param_1)

{
  char *pcVar1;
  long lVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long extraout_x8;
  undefined8 *puVar14;
  long lVar15;
  undefined4 uStack_f0;
  char acStack_ec [9];
  char acStack_e3 [5];
  char acStack_de [8];
  char acStack_d6 [8];
  char acStack_ce [7];
  char cStack_c7;
  undefined2 uStack_c6;
  char acStack_c4 [5];
  char acStack_bf [7];
  char acStack_b8 [4];
  undefined1 auStack_b4 [4];
  undefined1 auStack_b0 [16];
  long alStack_a0 [6];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar11 = *(long *)(param_1 + 0x10);
  uVar9 = *(undefined8 *)(param_1 + 0x18);
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  lVar5 = 0;
  alStack_a0[4] = lVar11;
  alStack_a0[5] = uVar9;
  uStack_70 = uVar10;
  uStack_68 = uVar8;
  func_0x00010412d290(0,alStack_a0 + 4);
  lVar15 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = -extraout_x8;
  puVar14 = (undefined8 *)((long)alStack_a0 + lVar2);
  (**(code **)(lVar15 + 0x10))(puVar14);
  puVar6 = puVar14;
  _swift_getEnumCaseMultiPayload(puVar14,lVar5);
  iVar4 = (int)puVar6;
  if (iVar4 < 3) {
    if (iVar4 != 0) {
      if (iVar4 == 1) {
        alStack_a0[2] = *(undefined8 *)((long)alStack_a0 + lVar2 + 8);
        alStack_a0[3] = *puVar14;
        alStack_a0[1] = *(undefined8 *)((long)alStack_a0 + lVar2 + 0x10);
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        acStack_ec[lVar2] = ' ';
        *(undefined4 *)((long)&uStack_f0 + lVar2) = 0x6b736174;
        pcVar1 = acStack_ec + lVar2 + 1;
        builtin_strncpy(acStack_e3 + lVar2,"Continua",8);
        pcVar1[0] = 'u';
        pcVar1[1] = 'p';
        pcVar1[2] = 's';
        pcVar1[3] = 't';
        pcVar1[4] = 'r';
        pcVar1[5] = 'e';
        pcVar1[6] = 'a';
        pcVar1[7] = 'm';
        builtin_strncpy(acStack_de + lVar2,"nuation ",8);
        *(undefined2 *)(acStack_c4 + lVar2 + 0xfffffffffffffffe) = 0x206e;
        builtin_strncpy(acStack_ce + lVar2,"tinuatio",8);
        builtin_strncpy(acStack_d6 + lVar2,"clockCon",8);
        pcVar1 = acStack_c4 + lVar2;
        builtin_strncpy(acStack_bf + lVar2 + 3,"Element ",8);
        pcVar1[0] = 'b';
        pcVar1[1] = 'u';
        pcVar1[2] = 'f';
        pcVar1[3] = 'f';
        pcVar1[4] = 'e';
        pcVar1[5] = 'r';
        pcVar1[6] = 'e';
        pcVar1[7] = 'd';
        auStack_b4[lVar2] = 0;
        uVar7 = 0x112fad7d0;
        func_0x00010002969c(0x112fad7d0,&UNK_10dc20720);
        uVar12 = 0x113063da0;
        alStack_a0[4] = uVar7;
        func_0x00010002969c(0x113063da0,&UNK_10dcd8908);
        uVar7 = 0xff;
        alStack_a0[5] = uVar12;
        _swift_getAssociatedTypeWitness
                  (0xff,uVar8,uVar9,PTR___ss5ClockTL_110350028,PTR___s7Instants5ClockPTl_11034fb68);
        uVar9 = 0x112d393f0;
        func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
        uVar8 = 0xff;
        __sSccMa(0xff,uVar7,uVar9,PTR___ss5ErrorWS_11034ee10);
        uVar9 = 0xff;
        __sSqMa(0xff,uVar8);
        uVar8 = 0xff;
        uStack_70 = uVar9;
        _swift_getAssociatedTypeWitness
                  (0xff,uVar10,lVar11,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
        uVar10 = 0xff;
        _swift_getTupleTypeMetadata2(0xff,uVar8,uVar7,"element deadline ",0);
        uVar9 = 0xff;
        __sSqMa(0xff,uVar10);
        lVar11 = 0;
        uStack_68 = uVar9;
        _swift_getTupleTypeMetadata(0,0x10004,alStack_a0 + 4,(long)&uStack_f0 + lVar2,0);
        iVar4 = *(int *)(lVar11 + 0x50);
        (**(code **)(lVar15 + 8))();
        _swift_storeEnumTagMultiPayload();
        uVar10 = 0xff;
        _swift_getTupleTypeMetadata2(0xff,uVar8,uVar7,"element deadline ",0);
        lVar11 = 0;
        __sSqMa(0,uVar10);
        (**(code **)(*(long *)(lVar11 + -8) + 8))((long)puVar14 + (long)iVar4,lVar11);
        return alStack_a0[3];
      }
LAB_10412fdd0:
      (**(code **)(lVar15 + 8))(puVar14,lVar5);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10412fde4);
      (*pcVar3)();
    }
    (**(code **)(*(long *)(lVar11 + -8) + 8))(puVar14,lVar11);
  }
  else {
    if (iVar4 != 4) {
      if (iVar4 == 5) {
        return 0;
      }
      _swift_release(*puVar14,0,0);
      (*(code *)PTR____chkstk_darwin_11034bd40)();
      acStack_ec[lVar2] = ' ';
      *(undefined4 *)((long)&uStack_f0 + lVar2) = 0x6b736174;
      pcVar1 = acStack_ec + lVar2 + 1;
      builtin_strncpy(acStack_e3 + lVar2,"Continua",8);
      pcVar1[0] = 'u';
      pcVar1[1] = 'p';
      pcVar1[2] = 's';
      pcVar1[3] = 't';
      pcVar1[4] = 'r';
      pcVar1[5] = 'e';
      pcVar1[6] = 'a';
      pcVar1[7] = 'm';
      builtin_strncpy(acStack_de + lVar2,"nuation ",8);
      builtin_strncpy(acStack_ce + lVar2,"amContin",8);
      builtin_strncpy(acStack_d6 + lVar2,"downstre",8);
      builtin_strncpy(&cStack_c7 + lVar2,"nuation ",8);
      builtin_strncpy(acStack_bf + lVar2,"currentE",8);
      builtin_strncpy(acStack_b8 + lVar2,"Element ",8);
      auStack_b0[lVar2] = 0;
      lVar5 = 0x112fad7d0;
      func_0x00010002969c(0x112fad7d0,&UNK_10dc20720);
      uVar7 = 0x113063da0;
      alStack_a0[4] = lVar5;
      func_0x00010002969c(0x113063da0,&UNK_10dcd8908);
      uVar12 = 0xff;
      alStack_a0[5] = uVar7;
      _swift_getAssociatedTypeWitness
                (0xff,uVar10,lVar11,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
      uVar7 = 0xff;
      __sSqMa(0xff,uVar12);
      uVar10 = 0x112d393f0;
      func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
      uVar13 = 0xff;
      __ss6ResultOMa(0xff,uVar7,uVar10,PTR___ss5ErrorWS_11034ee10);
      uVar10 = 0xff;
      __sSccMa(0xff,uVar13,PTR___ss5NeverON_11034ee88,PTR___ss5NeverOs5ErrorsWP_11034ee90);
      uVar7 = 0xff;
      uStack_70 = uVar10;
      _swift_getAssociatedTypeWitness
                (0xff,uVar8,uVar9,PTR___ss5ClockTL_110350028,PTR___s7Instants5ClockPTl_11034fb68);
      uVar10 = 0xff;
      _swift_getTupleTypeMetadata2(0xff,uVar12,uVar7,"element deadline ",0);
      lVar11 = 0;
      uStack_68 = uVar10;
      _swift_getTupleTypeMetadata(0,0x10004,alStack_a0 + 4,(long)&uStack_f0 + lVar2,0);
      puVar14 = (undefined8 *)((long)puVar14 + (long)*(int *)(lVar11 + 0x50));
      lVar5 = 0;
      _swift_getTupleTypeMetadata2(0,uVar12,uVar7,"element deadline ",0);
      lVar15 = *(long *)(lVar5 + -8);
      goto LAB_10412fdd0;
    }
    pcVar3 = *(code **)(lVar15 + 8);
    (*pcVar3)(puVar14,lVar5);
    (*pcVar3)();
    _swift_storeEnumTagMultiPayload();
  }
  return 0;
}



/* Entry: 104133040; end: 10413306f;  */

void FUN_104133040(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getGenericMetadata_11034f380)(param_1,param_2,&UNK_10e7f1744);
  return;
}



/* Entry: 104133070; end: 1041338df;  */

void FUN_104133070(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long extraout_x8;
  long lVar11;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *unaff_x20;
  long lVar14;
  undefined8 uVar15;
  code *pcVar16;
  long lVar17;
  long lVar18;
  undefined8 uStack_150;
  char acStack_143 [5];
  char acStack_13e [8];
  char acStack_136 [8];
  char acStack_12e [7];
  char cStack_127;
  undefined2 uStack_126;
  char acStack_124 [5];
  char acStack_11f [7];
  char acStack_118 [4];
  undefined1 auStack_114 [4];
  undefined8 auStack_110 [2];
  undefined8 *apuStack_100 [4];
  long lStack_e0;
  long lStack_d8;
  code *pcStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  uVar15 = *(undefined8 *)(param_3 + 0x20);
  lVar17 = *(long *)(param_3 + 0x10);
  lVar4 = 0xff;
  uStack_a8 = param_2;
  _swift_getAssociatedTypeWitness
            (0xff,uVar15,lVar17,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  lVar14 = *(long *)(param_3 + 0x28);
  uVar12 = *(undefined8 *)(param_3 + 0x18);
  lVar5 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,lVar14,uVar12,PTR___ss5ClockTL_110350028,PTR___s7Instants5ClockPTl_11034fb68);
  lVar6 = 0;
  lStack_d8 = lVar4;
  lStack_b0 = lVar5;
  _swift_getTupleTypeMetadata2(0,lVar4,lVar5,"element deadline ",0);
  lStack_c0 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_c0 + 0x40));
  lVar11 = (long)apuStack_100 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_e0 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar11 - extraout_x12;
  lVar7 = 0;
  lStack_c8 = lVar11;
  lStack_b8 = lVar6;
  __sSqMa();
  pcStack_d0 = *(code **)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)((long)pcStack_d0 + 0x40));
  lVar11 = lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar18 = lVar11 - extraout_x12_00;
  lVar6 = 0;
  lStack_a0 = lVar17;
  lStack_98 = lVar14;
  uStack_90 = uVar15;
  lStack_88 = lVar17;
  uStack_80 = uVar12;
  uStack_78 = uVar15;
  lStack_70 = lVar14;
  func_0x00010412d290(0,&lStack_88);
  lVar5 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar13 = (undefined8 *)(lVar18 - extraout_x8_01);
  (**(code **)(lVar5 + 0x10))(puVar13);
  puVar8 = puVar13;
  _swift_getEnumCaseMultiPayload(puVar13,lVar6);
  lVar4 = lStack_a0;
  iVar3 = (int)puVar8;
  if (iVar3 < 3) {
    if (iVar3 == 0) {
      (**(code **)(*(long *)(lStack_a0 + -8) + 0x20))(param_1,puVar13,lStack_a0);
      lStack_88 = lVar4;
      uStack_78 = uStack_90;
      lStack_70 = lStack_98;
      uVar15 = 0;
      uStack_80 = uVar12;
      FUN_1041338e0(0,&lStack_88);
      uVar12 = 0;
    }
    else {
      apuStack_100[3] = param_1;
      if (iVar3 != 1) {
LAB_1041338cc:
        lStack_b8 = lVar6;
        lStack_c0 = lVar5;
        (**(code **)(lStack_c0 + 8))(puVar13,lStack_b8);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1041338e0);
        (*pcVar2)();
      }
      apuStack_100[0] = (undefined8 *)*puVar13;
      apuStack_100[2] = (undefined8 *)puVar13[1];
      apuStack_100[1] = (undefined8 *)puVar13[2];
      (*(code *)PTR____chkstk_darwin_11034bd40)();
      *(undefined1 *)((long)puVar13 + -0x4c) = 0x20;
      *(undefined4 *)(puVar13 + -10) = 0x6b736174;
      builtin_strncpy((char *)((long)puVar13 + -0x43),"Continua",8);
      builtin_strncpy((char *)((long)puVar13 + -0x4b),"upstream",8);
      builtin_strncpy((char *)((long)puVar13 + -0x3e),"nuation ",8);
      *(undefined2 *)((long)puVar13 + -0x26) = 0x206e;
      builtin_strncpy((char *)((long)puVar13 + -0x2e),"tinuatio",8);
      builtin_strncpy((char *)((long)puVar13 + -0x36),"clockCon",8);
      builtin_strncpy((char *)((long)puVar13 + -0x1c),"Element ",8);
      builtin_strncpy((char *)((long)puVar13 + -0x24),"buffered",8);
      *(undefined1 *)((long)puVar13 + -0x14) = 0;
      lVar4 = 0x112fad7d0;
      func_0x00010002969c(0x112fad7d0,&UNK_10dc20720);
      uVar15 = 0x113063da0;
      lStack_88 = lVar4;
      func_0x00010002969c(0x113063da0,&UNK_10dcd8908);
      uVar9 = 0x112d393f0;
      uStack_80 = uVar15;
      func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
      uVar15 = 0xff;
      __sSccMa(0xff,lStack_b0,uVar9,PTR___ss5ErrorWS_11034ee10);
      uVar9 = 0xff;
      __sSqMa(0xff,uVar15);
      lVar4 = 0;
      uStack_78 = uVar9;
      lStack_70 = lVar7;
      _swift_getTupleTypeMetadata(0,0x10004,&lStack_88,puVar13 + -10,0);
      pcVar2 = pcStack_d0;
      pcVar16 = *(code **)((long)pcStack_d0 + 0x20);
      (*pcVar16)(lVar18,(long)puVar13 + (long)*(int *)(lVar4 + 0x50),lVar7);
      (*pcVar16)(lVar11,lVar18,lVar7);
      lVar6 = lStack_b8;
      lVar4 = lStack_c0;
      lVar14 = lVar11;
      (**(code **)(lStack_c0 + 0x30))(lVar11,1,lStack_b8);
      if ((int)lVar14 != 1) {
        pcStack_d0 = *(code **)(lVar4 + 0x20);
        (*pcStack_d0)(lStack_c8,lVar11,lVar6);
        (**(code **)(lVar5 + 8))();
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        *(undefined1 *)((long)puVar13 + -0x4c) = 0x20;
        *(undefined4 *)(puVar13 + -10) = 0x6b736174;
        builtin_strncpy((char *)((long)puVar13 + -0x43),"Continua",8);
        builtin_strncpy((char *)((long)puVar13 + -0x4b),"upstream",8);
        builtin_strncpy((char *)((long)puVar13 + -0x3e),"nuation ",8);
        builtin_strncpy((char *)((long)puVar13 + -0x2e),"amContin",8);
        builtin_strncpy((char *)((long)puVar13 + -0x36),"downstre",8);
        builtin_strncpy((char *)((long)puVar13 + -0x27),"nuation ",8);
        builtin_strncpy((char *)((long)puVar13 + -0x1f),"currentE",8);
        builtin_strncpy((char *)(puVar13 + -3),"Element ",8);
        *(undefined1 *)(puVar13 + -2) = 0;
        lVar5 = 0x112fad7d0;
        func_0x00010002969c(0x112fad7d0,&UNK_10dc20720);
        uVar15 = 0x113063da0;
        lStack_88 = lVar5;
        func_0x00010002969c(0x113063da0,&UNK_10dcd8908);
        lVar11 = lStack_b0;
        lVar5 = lStack_d8;
        uVar9 = 0xff;
        uStack_80 = uVar15;
        __sSqMa(0xff,lStack_d8);
        uVar15 = 0x112d393f0;
        func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
        puVar1 = PTR___ss5ErrorWS_11034ee10;
        uVar10 = 0xff;
        __ss6ResultOMa(0xff,uVar9,uVar15);
        uVar15 = 0xff;
        __sSccMa(0xff,uVar10,PTR___ss5NeverON_11034ee88,PTR___ss5NeverOs5ErrorsWP_11034ee90);
        lStack_70 = lVar6;
        lVar14 = 0;
        uStack_78 = uVar15;
        _swift_getTupleTypeMetadata(0,0x10004,&lStack_88,puVar13 + -10,0);
        lVar7 = lStack_c8;
        iVar3 = *(int *)(lVar14 + 0x50);
        *unaff_x20 = apuStack_100[0];
        unaff_x20[1] = 0;
        unaff_x20[2] = uStack_a8;
        (**(code **)(lVar4 + 0x10))((long)unaff_x20 + (long)iVar3,lStack_c8,lVar6);
        _swift_storeEnumTagMultiPayload();
        uVar15 = 0x113063da0;
        func_0x00010002969c(0x113063da0,&UNK_10dcd8908);
        uVar9 = 0x112d393f0;
        func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
        uVar10 = 0xff;
        __sSccMa(0xff,lVar11,uVar9,puVar1);
        uVar9 = 0xff;
        __sSqMa(0xff,uVar10);
        lVar14 = 0;
        _swift_getTupleTypeMetadata3
                  (0,uVar15,uVar9,lVar11,"upstreamContinuation clockContinuation deadline ",0);
        lVar4 = lStack_e0;
        puVar13 = apuStack_100[3];
        iVar3 = *(int *)(lVar14 + 0x40);
        *apuStack_100[3] = apuStack_100[2];
        apuStack_100[3][1] = apuStack_100[1];
        (*pcStack_d0)(lStack_e0,lVar7,lVar6);
        (**(code **)(*(long *)(lVar11 + -8) + 0x20))
                  ((long)puVar13 + (long)iVar3,lVar4 + *(int *)(lVar6 + 0x30),lVar11);
        lStack_88 = lStack_a0;
        uStack_78 = uStack_90;
        lStack_70 = lStack_98;
        uVar15 = 0;
        uStack_80 = uVar12;
        FUN_1041338e0(0,&lStack_88);
        _swift_storeEnumTagMultiPayload(puVar13,uVar15,2);
        (**(code **)(*(long *)(lVar5 + -8) + 8))(lVar4,lVar5);
        return;
      }
      (**(code **)((long)pcVar2 + 8))(lVar11,lVar7);
      (**(code **)(lVar5 + 8))();
      *unaff_x20 = apuStack_100[0];
      unaff_x20[1] = apuStack_100[1];
      unaff_x20[2] = uStack_a8;
      _swift_storeEnumTagMultiPayload();
      param_1 = apuStack_100[3];
      *apuStack_100[3] = apuStack_100[2];
      lStack_88 = lStack_a0;
      uStack_78 = uStack_90;
      lStack_70 = lStack_98;
      uVar15 = 0;
      uStack_80 = uVar12;
      FUN_1041338e0(0,&lStack_88);
      uVar12 = 1;
    }
  }
  else if (iVar3 == 4) {
    uVar15 = *puVar13;
    (**(code **)(lVar5 + 8))();
    _swift_storeEnumTagMultiPayload();
    *param_1 = uStack_a8;
    param_1[1] = uVar15;
    lStack_88 = lStack_a0;
    uStack_78 = uStack_90;
    lStack_70 = lStack_98;
    uVar15 = 0;
    uStack_80 = uVar12;
    FUN_1041338e0(0,&lStack_88);
    uVar12 = 4;
  }
  else {
    if (iVar3 != 5) {
      _swift_release(*puVar13);
      (*(code *)PTR____chkstk_darwin_11034bd40)();
      *(undefined1 *)((long)puVar13 + -0x4c) = 0x20;
      *(undefined4 *)(puVar13 + -10) = 0x6b736174;
      builtin_strncpy((char *)((long)puVar13 + -0x43),"Continua",8);
      builtin_strncpy((char *)((long)puVar13 + -0x4b),"upstream",8);
      builtin_strncpy((char *)((long)puVar13 + -0x3e),"nuation ",8);
      builtin_strncpy((char *)((long)puVar13 + -0x2e),"amContin",8);
      builtin_strncpy((char *)((long)puVar13 + -0x36),"downstre",8);
      builtin_strncpy((char *)((long)puVar13 + -0x27),"nuation ",8);
      builtin_strncpy((char *)((long)puVar13 + -0x1f),"currentE",8);
      builtin_strncpy((char *)(puVar13 + -3),"Element ",8);
      *(undefined1 *)(puVar13 + -2) = 0;
      lVar4 = 0x112fad7d0;
      func_0x00010002969c(0x112fad7d0,&UNK_10dc20720);
      uVar12 = 0x113063da0;
      lStack_88 = lVar4;
      func_0x00010002969c(0x113063da0,&UNK_10dcd8908);
      uVar15 = 0xff;
      uStack_80 = uVar12;
      __sSqMa(0xff,lStack_d8);
      uVar12 = 0x112d393f0;
      func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
      uVar9 = 0xff;
      __ss6ResultOMa(0xff,uVar15,uVar12,PTR___ss5ErrorWS_11034ee10);
      uVar12 = 0xff;
      __sSccMa(0xff,uVar9,PTR___ss5NeverON_11034ee88,PTR___ss5NeverOs5ErrorsWP_11034ee90);
      lStack_70 = lStack_b8;
      lVar4 = 0;
      uStack_78 = uVar12;
      _swift_getTupleTypeMetadata(0,0x10004,&lStack_88,puVar13 + -10,0);
      puVar13 = (undefined8 *)((long)puVar13 + (long)*(int *)(lVar4 + 0x50));
      lVar5 = lStack_c0;
      lVar6 = lStack_b8;
      goto LAB_1041338cc;
    }
    *param_1 = uStack_a8;
    lStack_88 = lStack_a0;
    uStack_78 = uStack_90;
    lStack_70 = lStack_98;
    uVar15 = 0;
    uStack_80 = uVar12;
    FUN_1041338e0(0,&lStack_88);
    uVar12 = 3;
  }
  _swift_storeEnumTagMultiPayload(param_1,uVar15,uVar12);
  return;
}



/* Entry: 1041338e0; end: 104133917;  */

void FUN_1041338e0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getGenericMetadata_11034f380)(param_1,param_2,&UNK_10e7f17d4);
  return;
}



/* Entry: 104133918; end: 10413395b;  */

undefined8 * FUN_104133918(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  func_0x0001041338ec(uVar1,uVar3);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  func_0x000104133908(uVar2,uVar4);
  return param_1;
}



/* Entry: 10413395c; end: 104133993;  */

undefined8 * FUN_10413395c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  func_0x000104133908(uVar1,uVar2);
  return param_1;
}



/* Entry: 104133994; end: 104133ab7;  */

int FUN_104133994(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffe < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7fff;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = (uVar1 >> 0x1f |
          (uVar1 >> 0x11 & 0x3800 | ((uint)*(undefined8 *)(param_1 + 2) & 7) << 8 |
          (byte)((ulong)*(undefined8 *)param_1 >> 0x38) & 0xf0 | (uint)*(undefined8 *)param_1 & 0xf)
          << 1) ^ 0x7fff;
  if (0x7ffd < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 104133ab8; end: 104133ccf;  */

void FUN_104133ab8(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [32];
  undefined *puStack_38;
  undefined *puStack_30;
  undefined1 *puStack_28;
  
  puStack_38 = &UNK_10dcd8958;
  puStack_30 = &UNK_10dcd8970;
  puStack_80 = &UNK_10dcd88c0;
  uVar2 = *(ulong *)(param_1 + 0x20);
  lVar1 = 0x13f;
  _swift_getAssociatedTypeWitness
            (0x13f,uVar2,*(undefined8 *)(param_1 + 0x10),PTR___sSciTL_11034fea8,
             PTR___s7ElementSciTl_11034fb58);
  if (uVar2 < 0x40) {
    lStack_78 = *(long *)(lVar1 + -8) + 0x40;
    puStack_70 = PTR___sBoWV_11034d678 + 0x40;
    puStack_68 = &UNK_10dcd8890;
    puStack_60 = &UNK_10dcd8890;
    _swift_getTupleTypeLayout(auStack_58,0,5,&puStack_80);
    puStack_28 = auStack_58;
    _swift_initEnumMetadataMultiPayload(param_1,0,3,&puStack_38);
  }
  return;
}



/* Entry: 104133cd0; end: 104133e33;  */

undefined8 * FUN_104133cd0(undefined8 *param_1,int *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined1 uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 uVar11;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  lVar5 = *(long *)(lVar3 + -8);
  uVar7 = (ulong)*(byte *)(lVar5 + 0x50);
  lVar1 = *(long *)(lVar5 + 0x40) + 7;
  uVar2 = (lVar1 + (uVar7 + 8 & (uVar7 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 0x18;
  if (uVar2 < 0x21) {
    uVar2 = 0x20;
  }
  uVar9 = (uint)*(byte *)((long)param_2 + uVar2);
  if (2 < *(byte *)((long)param_2 + uVar2) && (uVar2 & 0xffffffff) != 0) {
    uVar9 = *param_2 + 3;
  }
  if (uVar9 == 2) {
    *param_1 = *(undefined8 *)param_2;
    uVar10 = (long)param_1 + uVar7 + 8 & ~uVar7;
    uVar7 = (long)param_2 + uVar7 + 8 & ~uVar7;
    (**(code **)(lVar5 + 0x10))(uVar10,uVar7,lVar3);
    puVar6 = (undefined8 *)(lVar1 + uVar10 & 0xffffffffffffff8);
    puVar8 = (undefined8 *)(lVar1 + uVar7 & 0xffffffffffffff8);
    *puVar6 = *puVar8;
    puVar6 = (undefined8 *)((long)puVar6 + 0xfU & 0xffffffffffffff8);
    puVar8 = (undefined8 *)((long)puVar8 + 0xfU & 0xffffffffffffff8);
    *puVar6 = *puVar8;
    *(undefined8 *)((long)puVar6 + 0xfU & 0xffffffffffffff8) =
         *(undefined8 *)((long)puVar8 + 0xfU & 0xffffffffffffff8);
    uVar4 = 2;
  }
  else if (uVar9 == 1) {
    uVar11 = *(undefined8 *)(param_2 + 2);
    *param_1 = *(undefined8 *)param_2;
    param_1[1] = uVar11;
    uVar11 = *(undefined8 *)(param_2 + 4);
    param_1[3] = *(undefined8 *)(param_2 + 6);
    param_1[2] = uVar11;
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
    uVar11 = *(undefined8 *)(param_2 + 2);
    *param_1 = *(undefined8 *)param_2;
    param_1[1] = uVar11;
  }
  *(undefined1 *)((long)param_1 + uVar2) = uVar4;
  _swift_retain();
  return param_1;
}



/* Entry: 104133e34; end: 104134027;  */

int * FUN_104133e34(int *param_1,int *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  int *piVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  
  if (param_1 != param_2) {
    lVar3 = 0;
    _swift_getAssociatedTypeWitness
              (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
               PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
    lVar10 = *(long *)(lVar3 + -8);
    uVar11 = (ulong)*(byte *)(lVar10 + 0x50);
    lVar1 = *(long *)(lVar10 + 0x40) + 7;
    uVar2 = (lVar1 + (uVar11 + 8 & (uVar11 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 0x18;
    if (uVar2 < 0x21) {
      uVar2 = 0x20;
    }
    uVar5 = (uint)*(byte *)((long)param_1 + uVar2);
    if (2 < *(byte *)((long)param_1 + uVar2) && (uVar2 & 0xffffffff) != 0) {
      uVar5 = *param_1 + 3;
    }
    uVar12 = ~uVar11;
    piVar7 = param_1;
    if (uVar5 != 0) {
      if (uVar5 == 2) {
        uVar9 = (long)param_1 + uVar11 + 8 & uVar12;
        (**(code **)(lVar10 + 8))(uVar9,lVar3);
        piVar7 = (int *)(lVar1 + uVar9 & 0xfffffffffffffff8);
      }
      else {
        piVar7 = param_1 + 2;
      }
    }
    _swift_release(*(undefined8 *)piVar7);
    uVar5 = (uint)*(byte *)((long)param_2 + uVar2);
    if ((uVar2 & 0xffffffff) != 0 && 2 < *(byte *)((long)param_2 + uVar2)) {
      uVar5 = *param_2 + 3;
    }
    if (uVar5 == 2) {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      uVar9 = (long)param_1 + uVar11 + 8 & uVar12;
      uVar12 = (long)param_2 + uVar11 + 8 & uVar12;
      (**(code **)(lVar10 + 0x10))(uVar9,uVar12,lVar3);
      puVar6 = (undefined8 *)(lVar1 + uVar9 & 0xffffffffffffff8);
      puVar8 = (undefined8 *)(lVar1 + uVar12 & 0xffffffffffffff8);
      *puVar6 = *puVar8;
      puVar6 = (undefined8 *)((long)puVar6 + 0xfU & 0xffffffffffffff8);
      puVar8 = (undefined8 *)((long)puVar8 + 0xfU & 0xffffffffffffff8);
      *puVar6 = *puVar8;
      *(undefined8 *)((long)puVar6 + 0xfU & 0xffffffffffffff8) =
           *(undefined8 *)((long)puVar8 + 0xfU & 0xffffffffffffff8);
      uVar4 = 2;
    }
    else if (uVar5 == 1) {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    }
    *(undefined1 *)((long)param_1 + uVar2) = uVar4;
    _swift_retain();
  }
  return param_1;
}



/* Entry: 104134028; end: 10413417f;  */

undefined8 * FUN_104134028(undefined8 *param_1,int *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined1 uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  lVar5 = *(long *)(lVar3 + -8);
  uVar7 = (ulong)*(byte *)(lVar5 + 0x50);
  lVar1 = *(long *)(lVar5 + 0x40) + 7;
  uVar2 = (lVar1 + (uVar7 + 8 & (uVar7 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 0x18;
  if (uVar2 < 0x21) {
    uVar2 = 0x20;
  }
  uVar9 = (uint)*(byte *)((long)param_2 + uVar2);
  if (2 < *(byte *)((long)param_2 + uVar2) && (uVar2 & 0xffffffff) != 0) {
    uVar9 = *param_2 + 3;
  }
  if (uVar9 == 2) {
    *param_1 = *(undefined8 *)param_2;
    uVar10 = (long)param_1 + uVar7 + 8 & ~uVar7;
    uVar7 = (long)param_2 + uVar7 + 8 & ~uVar7;
    (**(code **)(lVar5 + 0x20))(uVar10,uVar7,lVar3);
    puVar6 = (undefined8 *)(lVar1 + uVar10 & 0xffffffffffffff8);
    puVar8 = (undefined8 *)(lVar1 + uVar7 & 0xffffffffffffff8);
    *puVar6 = *puVar8;
    puVar6 = (undefined8 *)((long)puVar6 + 0xfU & 0xffffffffffffff8);
    puVar8 = (undefined8 *)((long)puVar8 + 0xfU & 0xffffffffffffff8);
    *puVar6 = *puVar8;
    *(undefined8 *)((long)puVar6 + 0xfU & 0xffffffffffffff8) =
         *(undefined8 *)((long)puVar8 + 0xfU & 0xffffffffffffff8);
    uVar4 = 2;
  }
  else if (uVar9 == 1) {
    uVar11 = *(undefined8 *)param_2;
    uVar13 = *(undefined8 *)(param_2 + 6);
    uVar12 = *(undefined8 *)(param_2 + 4);
    param_1[1] = *(undefined8 *)(param_2 + 2);
    *param_1 = uVar11;
    param_1[3] = uVar13;
    param_1[2] = uVar12;
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
    uVar11 = *(undefined8 *)param_2;
    param_1[1] = *(undefined8 *)(param_2 + 2);
    *param_1 = uVar11;
  }
  *(undefined1 *)((long)param_1 + uVar2) = uVar4;
  return param_1;
}



/* Entry: 104134180; end: 10413434b;  */

int * FUN_104134180(int *param_1,int *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  int *piVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  if (param_1 != param_2) {
    lVar3 = 0;
    _swift_getAssociatedTypeWitness
              (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
               PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
    lVar10 = *(long *)(lVar3 + -8);
    uVar11 = (ulong)*(byte *)(lVar10 + 0x50);
    lVar1 = *(long *)(lVar10 + 0x40) + 7;
    uVar2 = (lVar1 + (uVar11 + 8 & (uVar11 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 0x18;
    if (uVar2 < 0x21) {
      uVar2 = 0x20;
    }
    uVar5 = (uint)*(byte *)((long)param_1 + uVar2);
    if (2 < *(byte *)((long)param_1 + uVar2) && (uVar2 & 0xffffffff) != 0) {
      uVar5 = *param_1 + 3;
    }
    uVar12 = ~uVar11;
    piVar7 = param_1;
    if (uVar5 != 0) {
      if (uVar5 == 2) {
        uVar9 = (long)param_1 + uVar11 + 8 & uVar12;
        (**(code **)(lVar10 + 8))(uVar9,lVar3);
        piVar7 = (int *)(lVar1 + uVar9 & 0xfffffffffffffff8);
      }
      else {
        piVar7 = param_1 + 2;
      }
    }
    _swift_release(*(undefined8 *)piVar7);
    uVar5 = (uint)*(byte *)((long)param_2 + uVar2);
    if ((uVar2 & 0xffffffff) != 0 && 2 < *(byte *)((long)param_2 + uVar2)) {
      uVar5 = *param_2 + 3;
    }
    if (uVar5 == 2) {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      uVar9 = (long)param_1 + uVar11 + 8 & uVar12;
      uVar12 = (long)param_2 + uVar11 + 8 & uVar12;
      (**(code **)(lVar10 + 0x20))(uVar9,uVar12,lVar3);
      puVar6 = (undefined8 *)(lVar1 + uVar9 & 0xffffffffffffff8);
      puVar8 = (undefined8 *)(lVar1 + uVar12 & 0xffffffffffffff8);
      *puVar6 = *puVar8;
      puVar6 = (undefined8 *)((long)puVar6 + 0xfU & 0xffffffffffffff8);
      puVar8 = (undefined8 *)((long)puVar8 + 0xfU & 0xffffffffffffff8);
      *puVar6 = *puVar8;
      *(undefined8 *)((long)puVar6 + 0xfU & 0xffffffffffffff8) =
           *(undefined8 *)((long)puVar8 + 0xfU & 0xffffffffffffff8);
      uVar4 = 2;
    }
    else if (uVar5 == 1) {
      uVar13 = *(undefined8 *)param_2;
      uVar15 = *(undefined8 *)(param_2 + 6);
      uVar14 = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar13;
      *(undefined8 *)(param_1 + 6) = uVar15;
      *(undefined8 *)(param_1 + 4) = uVar14;
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
      uVar13 = *(undefined8 *)param_2;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar13;
    }
    *(undefined1 *)((long)param_1 + uVar2) = uVar4;
  }
  return param_1;
}



/* Entry: 10413434c; end: 104134483;  */

int FUN_10413434c(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  uVar6 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar6 = (*(long *)(*(long *)(lVar3 + -8) + 0x40) + (uVar6 + 8 & (uVar6 ^ 0xffffffffffffffff)) + 7
          & 0xfffffffffffffff8) + 0x18;
  if (uVar6 < 0x21) {
    uVar6 = 0x20;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    uVar7 = uVar6 | 1;
    uVar4 = (uint)uVar7;
    uVar8 = 2;
    uVar5 = uVar8;
    if (uVar4 < 4) {
      uVar5 = (param_2 + 2 >> 8) + 1;
    }
    if (0xffff < uVar5) {
      uVar8 = 4;
    }
    if (uVar5 < 0x100) {
      uVar8 = 1;
    }
    uVar1 = 0;
    if (1 < uVar5) {
      uVar1 = uVar8;
    }
    if (uVar1 < 2) {
      if ((uVar1 != 0) &&
         (uVar8 = (uint)*(byte *)((long)param_1 + uVar7), *(byte *)((long)param_1 + uVar7) != 0))
      goto LAB_104134430;
    }
    else if (uVar1 == 2) {
      uVar8 = (uint)*(ushort *)((long)param_1 + uVar7);
      if (*(ushort *)((long)param_1 + uVar7) != 0) {
LAB_104134430:
        uVar8 = uVar8 - 1 << (ulong)((uVar4 & 3) << 3);
        if (uVar4 < 4) {
          uVar5 = (uint)(byte)*param_1;
        }
        else {
          uVar5 = *param_1;
          uVar8 = 0;
        }
        return (uVar5 | uVar8) + 0xfe;
      }
    }
    else {
      uVar8 = *(uint *)((long)param_1 + uVar7);
      if (uVar8 != 0) goto LAB_104134430;
    }
  }
  iVar2 = 0;
  if (2 < *(byte *)((long)param_1 + uVar6)) {
    iVar2 = (*(byte *)((long)param_1 + uVar6) ^ 0xff) + 1;
  }
  return iVar2;
}



/* Entry: 104134484; end: 104134603;  */

void FUN_104134484(uint *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x20),*(undefined8 *)(param_4 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  uVar5 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar5 = (*(long *)(*(long *)(lVar3 + -8) + 0x40) + (uVar5 + 8 & (uVar5 ^ 0xffffffffffffffff)) + 7
          & 0xfffffffffffffff8) + 0x18;
  if (uVar5 < 0x21) {
    uVar5 = 0x20;
  }
  uVar7 = uVar5 | 1;
  if (param_3 < 0xfe) {
    uVar2 = 0;
  }
  else {
    uVar6 = 2;
    uVar1 = uVar6;
    if ((uint)uVar7 < 4) {
      uVar1 = (param_3 + 2 >> 8) + 1;
    }
    if (0xffff < uVar1) {
      uVar6 = 4;
    }
    if (uVar1 < 0x100) {
      uVar6 = 1;
    }
    uVar2 = 0;
    if (1 < uVar1) {
      uVar2 = uVar6;
    }
  }
  if (param_2 < 0xfe) {
    if (uVar2 < 2) {
      if (uVar2 != 0) {
        *(undefined1 *)((long)param_1 + uVar7) = 0;
      }
    }
    else if (uVar2 == 2) {
      *(undefined2 *)((long)param_1 + uVar7) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + uVar7) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + uVar5) = -(char)param_2;
    }
  }
  else {
    param_2 = param_2 - 0xfe;
    _bzero(param_1,uVar7);
    iVar4 = 1;
    if ((uint)uVar7 < 4) {
      iVar4 = (param_2 >> 8) + 1;
      *(char *)param_1 = (char)param_2;
    }
    else {
      *param_1 = param_2;
    }
    if (uVar2 < 2) {
      if (uVar2 != 0) {
        *(char *)((long)param_1 + uVar7) = (char)iVar4;
      }
    }
    else if (uVar2 == 2) {
      *(short *)((long)param_1 + uVar7) = (short)iVar4;
    }
    else {
      *(int *)((long)param_1 + uVar7) = iVar4;
    }
  }
  return;
}



/* Entry: 104134604; end: 10413469f;  */

uint FUN_104134604(int *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  uVar3 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  uVar3 = (*(long *)(*(long *)(lVar2 + -8) + 0x40) + (uVar3 + 8 & (uVar3 ^ 0xffffffffffffffff)) + 7
          & 0xfffffffffffffff8) + 0x18;
  if (uVar3 < 0x21) {
    uVar3 = 0x20;
  }
  uVar1 = (uint)*(byte *)((long)param_1 + uVar3);
  if (2 < *(byte *)((long)param_1 + uVar3) && (uVar3 & 0xffffffff) != 0) {
    uVar1 = *param_1 + 3;
  }
  return uVar1;
}



/* Entry: 1041346a0; end: 1041346a3;  */

void FUN_1041346a0(void)

{
  return;
}



/* Entry: 1041346a4; end: 104134c73;  */

void FUN_1041346a4(int *param_1,uint param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  uVar3 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  uVar3 = (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 7 + (uVar3 + 8 & (uVar3 ^ 0xffffffffffffffff))
          & 0xfffffffffffffff8) + 0x18;
  if (param_2 < 3) {
    if (uVar3 < 0x21) {
      uVar3 = 0x20;
    }
    *(char *)((long)param_1 + uVar3) = (char)param_2;
  }
  else {
    if (uVar3 < 0x21) {
      uVar3 = 0x20;
    }
    uVar1 = param_2;
    if ((int)uVar3 != 0) {
      uVar1 = 3;
    }
    *(char *)((long)param_1 + uVar3) = (char)uVar1;
    if ((int)uVar3 != 0) {
      _bzero(param_1);
      *param_1 = param_2 - 3;
    }
  }
  return;
}



/* Entry: 104134c74; end: 104134ea3;  */

void FUN_104134c74(ulong *param_1,ulong param_2,uint param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x28),*(undefined8 *)(param_4 + 0x18),
             PTR___ss5ClockTL_110350028,PTR___s7Instants5ClockPTl_11034fb68);
  lVar7 = *(long *)(lVar6 + -8);
  uVar3 = *(uint *)(lVar7 + 0x54);
  uVar2 = uVar3;
  if (uVar3 < 0x7fffffff) {
    uVar2 = 0x7ffffffe;
  }
  uVar8 = (ulong)*(byte *)(lVar7 + 0x50);
  lVar1 = (uVar8 + 8 & (uVar8 ^ 0xffffffffffffffff)) + *(long *)(lVar7 + 0x40);
  uVar9 = (uint)lVar1;
  if (param_3 < uVar2 || param_3 - uVar2 == 0) {
    bVar5 = 0;
  }
  else if (uVar9 < 4) {
    uVar10 = (param_3 - uVar2) + ~(-1 << (ulong)(uVar9 << 3 & 0x1f)) >> (ulong)(uVar9 << 3 & 0x1f);
    bVar5 = 2;
    if (0xfffe < uVar10) {
      bVar5 = 4;
    }
    if (uVar10 < 0xff) {
      bVar5 = uVar10 != 0;
    }
  }
  else {
    bVar5 = 1;
  }
  uVar10 = (uint)param_2;
  if (uVar2 < uVar10) {
    uVar10 = uVar10 + ~uVar2;
    if (uVar9 < 4) {
      iVar11 = (uVar10 >> (ulong)(uVar9 << 3 & 0x1f)) + 1;
      if (uVar9 != 0) {
        uVar2 = uVar10 & (-1 << (ulong)(uVar9 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,lVar1);
        uVar4 = (undefined2)uVar2;
        if (uVar9 == 3) {
          *(undefined2 *)param_1 = uVar4;
          *(char *)((long)param_1 + 2) = (char)(uVar2 >> 0x10);
        }
        else if (uVar9 == 2) {
          *(undefined2 *)param_1 = uVar4;
        }
        else {
          *(char *)param_1 = (char)uVar10;
        }
      }
    }
    else {
      _bzero(param_1,lVar1);
      *(uint *)param_1 = uVar10;
      iVar11 = 1;
    }
    if (bVar5 < 2) {
      if (bVar5 != 0) {
        *(char *)((long)param_1 + lVar1) = (char)iVar11;
      }
    }
    else if (bVar5 == 2) {
      *(short *)((long)param_1 + lVar1) = (short)iVar11;
    }
    else {
      *(int *)((long)param_1 + lVar1) = iVar11;
    }
  }
  else {
    if (bVar5 < 2) {
      if (bVar5 != 0) {
        *(undefined1 *)((long)param_1 + lVar1) = 0;
      }
    }
    else if (bVar5 == 2) {
      *(undefined2 *)((long)param_1 + lVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar1) = 0;
    }
    if (uVar10 != 0) {
      if (0x7ffffffe < uVar3) {
                    /* WARNING: Could not recover jumptable at 0x000104134e2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar7 + 0x38))((long)param_1 + uVar8 + 8 & ~uVar8,param_2,uVar3,lVar6);
        return;
      }
      if (uVar10 < 0x7fffffff) {
        *param_1 = param_2 & 0xffffffff;
      }
      else {
        *param_1 = 0;
        *(uint *)param_1 = uVar10 + 0x80000001;
      }
    }
  }
  return;
}



/* Entry: 104134ea4; end: 104134eb3;  */

undefined8 FUN_104134ea4(void)

{
  return 0;
}



/* Entry: 104134eb4; end: 104134f4b;  */

void FUN_104134eb4(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined1 auStack_50 [32];
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x28);
  lVar1 = 0x13f;
  _swift_getAssociatedTypeWitness
            (0x13f,uVar2,*(undefined8 *)(param_1 + 0x18),PTR___ss5ClockTL_110350028,
             PTR___s7Instants5ClockPTl_11034fb68);
  if (uVar2 < 0x40) {
    _swift_getTupleTypeLayout2(auStack_50,&UNK_10dcd88c0,*(long *)(lVar1 + -8) + 0x40);
    puStack_28 = &UNK_10dcd8958;
    puStack_30 = auStack_50;
    _swift_initEnumMetadataMultiPayload(param_1,0,2,&puStack_30);
  }
  return;
}



/* Entry: 104134f4c; end: 104135067;  */

long * FUN_104134f4c(long *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x18),
             PTR___ss5ClockTL_110350028,PTR___s7Instants5ClockPTl_11034fb68);
  lVar3 = *(long *)(lVar2 + -8);
  uVar4 = (ulong)*(uint *)(lVar3 + 0x50) & 0xff;
  uVar1 = (uVar4 + 8 & (uVar4 ^ 0xffffffffffffffff)) + *(long *)(lVar3 + 0x40);
  if (uVar1 < 0x11) {
    uVar1 = 0x10;
  }
  if (((uint)uVar4 < 8 && (*(uint *)(lVar3 + 0x50) & 0x100000) == 0) && uVar1 + 1 < 0x19) {
    uVar5 = (uint)*(byte *)((long)param_2 + uVar1);
    if (1 < *(byte *)((long)param_2 + uVar1)) {
      uVar5 = (int)*param_2 + 2;
    }
    *param_1 = *param_2;
    if (uVar5 == 1) {
      lVar2 = param_2[1];
      _swift_errorRetain(lVar2);
      param_1[1] = lVar2;
      *(undefined1 *)((long)param_1 + uVar1) = 1;
    }
    else {
      (**(code **)(lVar3 + 0x10))
                ((long)param_1 + uVar4 + 8 & ~uVar4,(long)param_2 + uVar4 + 8 & ~uVar4,lVar2);
      *(undefined1 *)((long)param_1 + uVar1) = 0;
    }
  }
  else {
    lVar2 = *param_2;
    *param_1 = lVar2;
    param_1 = (long *)(lVar2 + ((ulong)((uint)uVar4 & 0xf8 ^ 0x1f8) & uVar4 + 0x10));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 104135068; end: 10413516f;  */

void FUN_104135068(uint *param_1,long param_2)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x18),
             PTR___ss5ClockTL_110350028,PTR___s7Instants5ClockPTl_11034fb68);
  lVar4 = *(long *)(lVar3 + -8);
  uVar5 = (ulong)*(byte *)(lVar4 + 0x50);
  uVar1 = (uVar5 + 8 & (uVar5 ^ 0xffffffffffffffff)) + *(long *)(lVar4 + 0x40);
  if (uVar1 < 0x11) {
    uVar1 = 0x10;
  }
  bVar2 = *(byte *)((long)param_1 + uVar1);
  uVar7 = (uint)bVar2;
  if (1 < bVar2) {
    uVar6 = (uint)uVar1;
    uVar8 = 4;
    if (uVar6 < 4) {
      uVar8 = uVar6;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_104135138;
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
    uVar7 = uVar8 | bVar2 - 2 << (ulong)((uVar6 & 3) << 3);
    if (3 < uVar6) {
      uVar7 = uVar8;
    }
    uVar7 = uVar7 + 2;
  }
LAB_104135138:
  if (uVar7 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(*(undefined8 *)(param_1 + 2));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010413516c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))((ulong)((long)param_1 + uVar5 + 8) & ~uVar5,lVar3);
  return;
}



/* Entry: 104135170; end: 1041352ab;  */

undefined8 * FUN_104135170(undefined8 *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  uint uVar9;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x18),
             PTR___ss5ClockTL_110350028,PTR___s7Instants5ClockPTl_11034fb68);
  lVar4 = *(long *)(lVar3 + -8);
  uVar5 = (ulong)*(byte *)(lVar4 + 0x50);
  uVar1 = (uVar5 + 8 & (uVar5 ^ 0xffffffffffffffff)) + *(long *)(lVar4 + 0x40);
  if (uVar1 < 0x11) {
    uVar1 = 0x10;
  }
  bVar2 = *(byte *)((long)param_2 + uVar1);
  uVar6 = (uint)bVar2;
  if (1 < bVar2) {
    uVar9 = (uint)uVar1;
    uVar7 = 4;
    if (uVar9 < 4) {
      uVar7 = uVar9;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) goto LAB_104135244;
      uVar7 = (uint)(byte)*param_2;
    }
    else if (uVar7 == 2) {
      uVar7 = (uint)(ushort)*param_2;
    }
    else if (uVar7 == 3) {
      uVar7 = (uint)(uint3)*param_2;
    }
    else {
      uVar7 = *param_2;
    }
    uVar6 = uVar7 | bVar2 - 2 << (ulong)((uVar9 & 3) << 3);
    if (3 < uVar9) {
      uVar6 = uVar7;
    }
    uVar6 = uVar6 + 2;
  }
LAB_104135244:
  *param_1 = *(undefined8 *)param_2;
  if (uVar6 != 1) {
    (**(code **)(lVar4 + 0x10))
              ((long)param_1 + uVar5 + 8 & ~uVar5,(ulong)((long)param_2 + uVar5 + 8) & ~uVar5,lVar3)
    ;
  }
  else {
    uVar8 = *(undefined8 *)(param_2 + 2);
    _swift_errorRetain(uVar8);
    param_1[1] = uVar8;
  }
  *(bool *)((long)param_1 + uVar1) = uVar6 == 1;
  return param_1;
}



/* Entry: 1041352ac; end: 1041354a3;  */

uint * FUN_1041352ac(uint *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x18),
             PTR___ss5ClockTL_110350028,PTR___s7Instants5ClockPTl_11034fb68);
  lVar8 = *(long *)(lVar3 + -8);
  uVar9 = (ulong)*(byte *)(lVar8 + 0x50);
  uVar1 = (uVar9 + 8 & (uVar9 ^ 0xffffffffffffffff)) + *(long *)(lVar8 + 0x40);
  if (uVar1 < 0x11) {
    uVar1 = 0x10;
  }
  bVar2 = *(byte *)((long)param_1 + uVar1);
  uVar4 = (uint)bVar2;
  uVar7 = (uint)uVar1;
  if (1 < bVar2) {
    uVar5 = 4;
    if (uVar7 < 4) {
      uVar5 = uVar7;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_104135390;
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
    uVar4 = uVar5 | bVar2 - 2 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 2;
  }
LAB_104135390:
  uVar10 = ~uVar9;
  if (uVar4 == 1) {
    _swift_errorRelease(*(undefined8 *)(param_1 + 2));
  }
  else {
    (**(code **)(lVar8 + 8))((ulong)((long)param_1 + uVar9 + 8) & uVar10,lVar3);
  }
  bVar2 = *(byte *)((long)param_2 + uVar1);
  uVar4 = (uint)bVar2;
  if (1 < bVar2) {
    uVar5 = 4;
    if (uVar7 < 4) {
      uVar5 = uVar7;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_104135434;
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
    uVar4 = uVar5 | bVar2 - 2 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 2;
  }
LAB_104135434:
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  if (uVar4 != 1) {
    (**(code **)(lVar8 + 0x10))
              ((ulong)((long)param_1 + uVar9 + 8) & uVar10,
               (ulong)((long)param_2 + uVar9 + 8) & uVar10,lVar3);
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 2);
    _swift_errorRetain(uVar6);
    *(undefined8 *)(param_1 + 2) = uVar6;
  }
  *(bool *)((long)param_1 + uVar1) = uVar4 == 1;
  return param_1;
}



/* Entry: 1041354a4; end: 1041355d7;  */

undefined8 * FUN_1041354a4(undefined8 *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x18),
             PTR___ss5ClockTL_110350028,PTR___s7Instants5ClockPTl_11034fb68);
  lVar4 = *(long *)(lVar3 + -8);
  uVar5 = (ulong)*(byte *)(lVar4 + 0x50);
  uVar1 = (uVar5 + 8 & (uVar5 ^ 0xffffffffffffffff)) + *(long *)(lVar4 + 0x40);
  if (uVar1 < 0x11) {
    uVar1 = 0x10;
  }
  bVar2 = *(byte *)((long)param_2 + uVar1);
  uVar6 = (uint)bVar2;
  if (1 < bVar2) {
    uVar8 = (uint)uVar1;
    uVar7 = 4;
    if (uVar8 < 4) {
      uVar7 = uVar8;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) goto LAB_104135578;
      uVar7 = (uint)(byte)*param_2;
    }
    else if (uVar7 == 2) {
      uVar7 = (uint)(ushort)*param_2;
    }
    else if (uVar7 == 3) {
      uVar7 = (uint)(uint3)*param_2;
    }
    else {
      uVar7 = *param_2;
    }
    uVar6 = uVar7 | bVar2 - 2 << (ulong)((uVar8 & 3) << 3);
    if (3 < uVar8) {
      uVar6 = uVar7;
    }
    uVar6 = uVar6 + 2;
  }
LAB_104135578:
  if (uVar6 != 1) {
    *param_1 = *(undefined8 *)param_2;
    (**(code **)(lVar4 + 0x20))
              ((long)param_1 + uVar5 + 8 & ~uVar5,(ulong)((long)param_2 + uVar5 + 8) & ~uVar5,lVar3)
    ;
  }
  else {
    uVar9 = *(undefined8 *)param_2;
    param_1[1] = *(undefined8 *)(param_2 + 2);
    *param_1 = uVar9;
  }
  *(bool *)((long)param_1 + uVar1) = uVar6 == 1;
  return param_1;
}



/* Entry: 1041355d8; end: 1041357c7;  */

uint * FUN_1041355d8(uint *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x18),
             PTR___ss5ClockTL_110350028,PTR___s7Instants5ClockPTl_11034fb68);
  lVar7 = *(long *)(lVar3 + -8);
  uVar8 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar1 = (uVar8 + 8 & (uVar8 ^ 0xffffffffffffffff)) + *(long *)(lVar7 + 0x40);
  if (uVar1 < 0x11) {
    uVar1 = 0x10;
  }
  bVar2 = *(byte *)((long)param_1 + uVar1);
  uVar4 = (uint)bVar2;
  uVar6 = (uint)uVar1;
  if (1 < bVar2) {
    uVar5 = 4;
    if (uVar6 < 4) {
      uVar5 = uVar6;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_1041356bc;
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
    uVar4 = uVar5 | bVar2 - 2 << (ulong)((uVar6 & 3) << 3);
    if (3 < uVar6) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 2;
  }
LAB_1041356bc:
  uVar9 = ~uVar8;
  if (uVar4 == 1) {
    _swift_errorRelease(*(undefined8 *)(param_1 + 2));
  }
  else {
    (**(code **)(lVar7 + 8))((ulong)((long)param_1 + uVar8 + 8) & uVar9,lVar3);
  }
  bVar2 = *(byte *)((long)param_2 + uVar1);
  uVar4 = (uint)bVar2;
  if (1 < bVar2) {
    uVar5 = 4;
    if (uVar6 < 4) {
      uVar5 = uVar6;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_104135760;
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
    uVar4 = uVar5 | bVar2 - 2 << (ulong)((uVar6 & 3) << 3);
    if (3 < uVar6) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 2;
  }
LAB_104135760:
  if (uVar4 != 1) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    (**(code **)(lVar7 + 0x20))
              ((ulong)((long)param_1 + uVar8 + 8) & uVar9,(ulong)((long)param_2 + uVar8 + 8) & uVar9
               ,lVar3);
  }
  else {
    uVar10 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)param_1 = uVar10;
  }
  *(bool *)((long)param_1 + uVar1) = uVar4 == 1;
  return param_1;
}



/* Entry: 1041357c8; end: 104135913;  */

int FUN_1041357c8(uint *param_1,uint param_2,long param_3)

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
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x18),
             PTR___ss5ClockTL_110350028,PTR___s7Instants5ClockPTl_11034fb68);
  uVar7 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  uVar7 = (uVar7 + 8 & (uVar7 ^ 0xffffffffffffffff)) + *(long *)(*(long *)(lVar4 + -8) + 0x40);
  if (uVar7 < 0x11) {
    uVar7 = 0x10;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 0xff) goto LAB_1041358b0;
  uVar6 = uVar7 + 1;
  uVar5 = (uint)uVar6;
  uVar2 = uVar5 << 3;
  if (uVar5 < 4) {
    uVar8 = ((param_2 + ~(-1 << (ulong)(uVar2 & 0x1f))) - 0xfe >> (ulong)(uVar2 & 0x1f)) + 1;
    if (uVar8 < 0x100) {
      if (uVar8 < 2) goto LAB_1041358b0;
      goto LAB_10413583c;
    }
    if (uVar8 >> 0x10 == 0) {
      uVar8 = (uint)*(ushort *)((long)param_1 + uVar6);
    }
    else {
      uVar8 = *(uint *)((long)param_1 + uVar6);
    }
  }
  else {
LAB_10413583c:
    uVar8 = (uint)*(byte *)((long)param_1 + uVar6);
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
    return ((uint)uVar6 | uVar1) + 0xff;
  }
LAB_1041358b0:
  iVar3 = 0;
  if (1 < *(byte *)((long)param_1 + uVar7)) {
    iVar3 = (*(byte *)((long)param_1 + uVar7) ^ 0xff) + 1;
  }
  return iVar3;
}



/* Entry: 104135914; end: 104135aeb;  */

void FUN_104135914(uint *param_1,uint param_2,uint param_3,long param_4)

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
            (0,*(undefined8 *)(param_4 + 0x28),*(undefined8 *)(param_4 + 0x18),
             PTR___ss5ClockTL_110350028,PTR___s7Instants5ClockPTl_11034fb68);
  uVar4 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar4 = (uVar4 + 8 & (uVar4 ^ 0xffffffffffffffff)) + *(long *)(*(long *)(lVar3 + -8) + 0x40);
  if (uVar4 < 0x11) {
    uVar4 = 0x10;
  }
  lVar3 = uVar4 + 1;
  uVar5 = (uint)lVar3;
  if (param_3 < 0xff) {
    bVar7 = 0;
  }
  else if (uVar5 < 4) {
    uVar1 = ((param_3 + ~(-1 << (ulong)(uVar5 << 3 & 0x1f))) - 0xfe >> (ulong)(uVar5 << 3 & 0x1f)) +
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
  if (param_2 < 0xff) {
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
    param_2 = param_2 - 0xff;
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



/* Entry: 104135aec; end: 104135bc3;  */

uint FUN_104135aec(uint *param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x18),
             PTR___ss5ClockTL_110350028,PTR___s7Instants5ClockPTl_11034fb68);
  uVar5 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar5 = (uVar5 + 8 & (uVar5 ^ 0xffffffffffffffff)) + *(long *)(*(long *)(lVar3 + -8) + 0x40);
  if (uVar5 < 0x11) {
    uVar5 = 0x10;
  }
  bVar1 = *(byte *)((long)param_1 + uVar5);
  uVar2 = (uint)bVar1;
  if (1 < bVar1) {
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
    uVar2 = uVar6 | bVar1 - 2 << (ulong)((uVar4 & 3) << 3);
    if (3 < uVar4) {
      uVar2 = uVar6;
    }
    uVar2 = uVar2 + 2;
  }
  return uVar2;
}



/* Entry: 104135bc4; end: 104135bc7;  */

void FUN_104135bc4(void)

{
  return;
}



/* Entry: 104135bc8; end: 104135ccf;  */

void FUN_104135bc8(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  undefined2 uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x18),
             PTR___ss5ClockTL_110350028,PTR___s7Instants5ClockPTl_11034fb68);
  uVar4 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar4 = (uVar4 + 8 & (uVar4 ^ 0xffffffffffffffff)) + *(long *)(*(long *)(lVar3 + -8) + 0x40);
  if (param_2 < 2) {
    if (uVar4 < 0x11) {
      uVar4 = 0x10;
    }
    *(char *)((long)param_1 + uVar4) = (char)param_2;
  }
  else {
    if (uVar4 < 0x11) {
      uVar4 = 0x10;
    }
    param_2 = param_2 - 2;
    uVar5 = (uint)uVar4;
    if (uVar5 < 4) {
      *(char *)((long)param_1 + uVar4) = (char)(param_2 >> (ulong)(uVar5 << 3 & 0x1f)) + '\x02';
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
      *(undefined1 *)((long)param_1 + uVar4) = 2;
      _bzero(param_1,uVar4);
      *param_1 = param_2;
    }
  }
  return;
}



/* Entry: 104135cd0; end: 1041361cf;  */

void FUN_104135cd0(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined1 auStack_40 [20];
  undefined4 uStack_2c;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  lVar1 = 0x13f;
  _swift_getAssociatedTypeWitness
            (0x13f,uVar2,*(undefined8 *)(param_1 + 0x10),PTR___sSciTL_11034fea8,
             PTR___s7ElementSciTl_11034fb58);
  if (uVar2 < 0x40) {
    _swift_getTupleTypeLayout2(auStack_40,&UNK_10dcd88c0,*(long *)(lVar1 + -8) + 0x40);
    _swift_initEnumMetadataSingleCase(param_1,0,auStack_40);
    *(undefined4 *)(*(long *)(param_1 + -8) + 0x54) = uStack_2c;
  }
  return;
}



/* Entry: 1041361d0; end: 1041363eb;  */

void FUN_1041361d0(ulong *param_1,undefined8 param_2,uint param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x20),*(undefined8 *)(param_4 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  lVar7 = *(long *)(lVar6 + -8);
  uVar3 = *(uint *)(lVar7 + 0x54);
  uVar2 = uVar3;
  if (uVar3 < 0x80000000) {
    uVar2 = 0x7fffffff;
  }
  uVar8 = (ulong)*(byte *)(lVar7 + 0x50);
  lVar1 = (uVar8 + 8 & (uVar8 ^ 0xffffffffffffffff)) + *(long *)(lVar7 + 0x40);
  uVar9 = (uint)lVar1;
  if (param_3 < uVar2 || param_3 - uVar2 == 0) {
    bVar5 = 0;
  }
  else if (uVar9 < 4) {
    uVar10 = (param_3 - uVar2) + ~(-1 << (ulong)(uVar9 << 3 & 0x1f)) >> (ulong)(uVar9 << 3 & 0x1f);
    bVar5 = 2;
    if (0xfffe < uVar10) {
      bVar5 = 4;
    }
    if (uVar10 < 0xff) {
      bVar5 = uVar10 != 0;
    }
  }
  else {
    bVar5 = 1;
  }
  uVar10 = (uint)param_2;
  if (uVar2 < uVar10) {
    uVar10 = uVar10 + ~uVar2;
    if (uVar9 < 4) {
      iVar11 = (uVar10 >> (ulong)(uVar9 << 3 & 0x1f)) + 1;
      if (uVar9 != 0) {
        uVar2 = uVar10 & (-1 << (ulong)(uVar9 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,lVar1);
        uVar4 = (undefined2)uVar2;
        if (uVar9 == 3) {
          *(undefined2 *)param_1 = uVar4;
          *(char *)((long)param_1 + 2) = (char)(uVar2 >> 0x10);
        }
        else if (uVar9 == 2) {
          *(undefined2 *)param_1 = uVar4;
        }
        else {
          *(char *)param_1 = (char)uVar10;
        }
      }
    }
    else {
      _bzero(param_1,lVar1);
      *(uint *)param_1 = uVar10;
      iVar11 = 1;
    }
    if (bVar5 < 2) {
      if (bVar5 != 0) {
        *(char *)((long)param_1 + lVar1) = (char)iVar11;
      }
    }
    else if (bVar5 == 2) {
      *(short *)((long)param_1 + lVar1) = (short)iVar11;
    }
    else {
      *(int *)((long)param_1 + lVar1) = iVar11;
    }
  }
  else {
    if (bVar5 < 2) {
      if (bVar5 != 0) {
        *(undefined1 *)((long)param_1 + lVar1) = 0;
      }
    }
    else if (bVar5 == 2) {
      *(undefined2 *)((long)param_1 + lVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar1) = 0;
    }
    if (uVar10 != 0) {
      if ((int)uVar3 < 0) {
                    /* WARNING: Could not recover jumptable at 0x000104136388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar7 + 0x38))((long)param_1 + uVar8 + 8 & ~uVar8,param_2,uVar3,lVar6);
        return;
      }
      if ((int)uVar10 < 0) {
        *param_1 = (ulong)(uVar10 & 0x7fffffff);
      }
      else {
        *param_1 = (ulong)(uVar10 - 1);
      }
    }
  }
  return;
}



/* Entry: 1041363ec; end: 1041363fb;  */

undefined8 FUN_1041363ec(void)

{
  return 0;
}



/* Entry: 1041363fc; end: 10413642b;  */

void FUN_1041363fc(ulong param_1,undefined8 param_2,ulong param_3)

{
  if ((long)param_3 < 0) {
    param_1 = param_3 & 0x7fffffffffffffff;
    _swift_errorRetain(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_1);
  return;
}



/* Entry: 10413642c; end: 10413643f;  */

void FUN_10413642c(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  uVar1 = param_1[2];
  if ((long)uVar1 < 0) {
    uVar2 = uVar1 & 0x7fffffffffffffff;
    _swift_errorRelease(param_1[1],param_1[1],uVar1,param_1[3],param_1[4]);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 104136440; end: 10413646f;  */

void FUN_104136440(ulong param_1,undefined8 param_2,ulong param_3)

{
  if ((long)param_3 < 0) {
    param_1 = param_3 & 0x7fffffffffffffff;
    _swift_errorRelease(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 104136470; end: 10413653f;  */

undefined8 * FUN_104136470(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  FUN_1041363fc(uVar1,uVar3,uVar2,uVar4,uVar5);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  param_1[4] = uVar5;
  return param_1;
}



/* Entry: 104136540; end: 104136583;  */

undefined8 * FUN_104136540(undefined8 *param_1,undefined8 *param_2)

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
  
  uVar6 = param_2[4];
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar3 = param_1[2];
  uVar2 = param_1[3];
  uVar4 = param_1[4];
  uVar7 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[3] = uVar9;
  param_1[2] = uVar8;
  param_1[4] = uVar6;
  FUN_104136440(uVar5,uVar1,uVar3,uVar2,uVar4);
  return param_1;
}



/* Entry: 104136584; end: 1041366c7;  */

int FUN_104136584(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x3ffe < param_2) && ((char)param_1[10] != '\0')) {
    return *param_1 + 0x3fff;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
  uVar1 = (uVar1 >> 0x1f |
          (uVar1 >> 0x12 & 0x1c00 | ((uint)*(undefined8 *)(param_1 + 4) & 7) << 7 |
          (uint)((ulong)*(undefined8 *)param_1 >> 0x39) & 0x78 | (uint)*(undefined8 *)param_1 & 7)
          << 1) ^ 0x3fff;
  if (0x3ffd < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1041366c8; end: 104136797;  */

void FUN_1041366c8(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined1 auStack_68 [32];
  long lStack_48;
  undefined *puStack_40;
  undefined1 *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    lStack_48 = *(long *)(lVar1 + -8) + 0x40;
    puStack_40 = &UNK_10dcd8890;
    uVar2 = *(ulong *)(param_1 + 0x28);
    lVar1 = 0x13f;
    _swift_getAssociatedTypeWitness
              (0x13f,uVar2,*(undefined8 *)(param_1 + 0x18),PTR___ss5ClockTL_110350028,
               PTR___s7Instants5ClockPTl_11034fb68);
    if (uVar2 < 0x40) {
      _swift_getTupleTypeLayout3
                (auStack_68,&UNK_10dcd8890,&UNK_10dcd8890,*(long *)(lVar1 + -8) + 0x40);
      puStack_30 = &UNK_10dcd88c0;
      puStack_28 = &UNK_10dcd8958;
      puStack_38 = auStack_68;
      _swift_initEnumMetadataMultiPayload(param_1,0,5,&lStack_48);
    }
  }
  return;
}



/* Entry: 104136798; end: 104136933;  */

long * FUN_104136798(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  
  lVar2 = *(long *)(param_3 + 0x10);
  lVar10 = *(long *)(lVar2 + -8);
  uVar9 = *(ulong *)(lVar10 + 0x40);
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x18),
             PTR___ss5ClockTL_110350028,PTR___s7Instants5ClockPTl_11034fb68);
  lVar5 = *(long *)(lVar1 + -8);
  uVar8 = (ulong)*(uint *)(lVar5 + 0x50) & 0xff;
  uVar6 = (uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff)) + *(long *)(lVar5 + 0x40);
  if (uVar9 <= uVar6) {
    uVar9 = uVar6;
  }
  if (uVar9 < 0x11) {
    uVar9 = 0x10;
  }
  uVar7 = (uint)uVar8 | *(uint *)(lVar10 + 0x50) & 0xf8;
  if ((uVar7 < 8 && ((*(uint *)(lVar10 + 0x50) | *(uint *)(lVar5 + 0x50)) & 0x100000) == 0) &&
      uVar9 + 1 < 0x19) {
    uVar7 = (uint)*(byte *)((long)param_2 + uVar9);
    if (4 < *(byte *)((long)param_2 + uVar9)) {
      uVar7 = (int)*param_2 + 5;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) {
        (**(code **)(lVar10 + 0x10))(param_1,param_2,lVar2);
        *(undefined1 *)((long)param_1 + uVar9) = 0;
      }
      else {
        *param_1 = *param_2;
        *(undefined1 *)((long)param_1 + uVar9) = 1;
      }
    }
    else if (uVar7 == 2) {
      *param_1 = *param_2;
      puVar3 = (undefined8 *)((long)param_1 + 0xfU & 0xfffffffffffffff8);
      puVar4 = (undefined8 *)((long)param_2 + 0xfU & 0xfffffffffffffff8);
      *puVar3 = *puVar4;
      (**(code **)(lVar5 + 0x10))(puVar3 + 1,puVar4 + 1,lVar1);
      *(undefined1 *)((long)param_1 + uVar9) = 2;
    }
    else if (uVar7 == 3) {
      *param_1 = *param_2;
      *(undefined1 *)((long)param_1 + uVar9) = 3;
    }
    else {
      lVar2 = param_2[1];
      *param_1 = *param_2;
      _swift_errorRetain(lVar2);
      param_1[1] = lVar2;
      *(undefined1 *)((long)param_1 + uVar9) = 4;
    }
  }
  else {
    uVar6 = (ulong)(uVar7 | 7);
    lVar2 = *param_2;
    *param_1 = lVar2;
    param_1 = (long *)(lVar2 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 104136934; end: 104136a8f;  */

void FUN_104136934(uint *param_1,long param_2)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  code *UNRECOVERED_JUMPTABLE;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  
  lVar4 = *(long *)(param_2 + 0x10);
  lVar10 = *(long *)(lVar4 + -8);
  uVar11 = *(ulong *)(lVar10 + 0x40);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x18),
             PTR___ss5ClockTL_110350028,PTR___s7Instants5ClockPTl_11034fb68);
  lVar5 = *(long *)(lVar3 + -8);
  uVar6 = (ulong)*(byte *)(lVar5 + 0x50);
  uVar1 = (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff)) + *(long *)(lVar5 + 0x40);
  if (uVar11 <= uVar1) {
    uVar11 = uVar1;
  }
  if (uVar11 < 0x11) {
    uVar11 = 0x10;
  }
  bVar2 = *(byte *)((long)param_1 + uVar11);
  uVar8 = (uint)bVar2;
  if (4 < bVar2) {
    uVar7 = (uint)uVar11;
    uVar9 = 4;
    if (uVar7 < 4) {
      uVar9 = uVar7;
    }
    if ((int)uVar9 < 2) {
      if (uVar9 == 0) goto LAB_104136a14;
      uVar9 = (uint)(byte)*param_1;
    }
    else if (uVar9 == 2) {
      uVar9 = (uint)(ushort)*param_1;
    }
    else if (uVar9 == 3) {
      uVar9 = (uint)(uint3)*param_1;
    }
    else {
      uVar9 = *param_1;
    }
    uVar8 = uVar9 | bVar2 - 5 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar8 = uVar9;
    }
    uVar8 = uVar8 + 5;
  }
LAB_104136a14:
  if ((int)uVar8 < 2) {
    if (uVar8 == 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(lVar10 + 8);
      goto LAB_104136a80;
    }
  }
  else {
    if (uVar8 == 2) {
      UNRECOVERED_JUMPTABLE = *(code **)(lVar5 + 8);
      param_1 = (uint *)(((ulong)((long)param_1 + 0xfU) & 0xfffffffffffffff8) + uVar6 + 8 & ~uVar6);
      lVar4 = lVar3;
LAB_104136a80:
                    /* WARNING: Could not recover jumptable at 0x000104136a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,lVar4);
      return;
    }
    if (uVar8 != 3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_errorRelease_11034f318)(*(undefined8 *)(param_1 + 2));
      return;
    }
  }
  return;
}



/* Entry: 104136a90; end: 104136c4f;  */

undefined8 * FUN_104136a90(undefined8 *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  byte bVar4;
  long lVar5;
  undefined1 uVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  
  lVar2 = *(long *)(param_3 + 0x10);
  lVar15 = *(long *)(lVar2 + -8);
  uVar14 = *(ulong *)(lVar15 + 0x40);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x18),
             PTR___ss5ClockTL_110350028,PTR___s7Instants5ClockPTl_11034fb68);
  lVar7 = *(long *)(lVar5 + -8);
  uVar8 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar1 = (uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff)) + *(long *)(lVar7 + 0x40);
  if (uVar14 <= uVar1) {
    uVar14 = uVar1;
  }
  if (uVar14 < 0x11) {
    uVar14 = 0x10;
  }
  bVar4 = *(byte *)((long)param_2 + uVar14);
  uVar9 = (uint)bVar4;
  if (4 < bVar4) {
    uVar13 = (uint)uVar14;
    uVar10 = 4;
    if (uVar13 < 4) {
      uVar10 = uVar13;
    }
    if ((int)uVar10 < 2) {
      if (uVar10 == 0) goto LAB_104136b7c;
      uVar10 = (uint)(byte)*param_2;
    }
    else if (uVar10 == 2) {
      uVar10 = (uint)(ushort)*param_2;
    }
    else if (uVar10 == 3) {
      uVar10 = (uint)(uint3)*param_2;
    }
    else {
      uVar10 = *param_2;
    }
    uVar9 = uVar10 | bVar4 - 5 << (ulong)((uVar13 & 3) << 3);
    if (3 < uVar13) {
      uVar9 = uVar10;
    }
    uVar9 = uVar9 + 5;
  }
LAB_104136b7c:
  if ((int)uVar9 < 2) {
    if (uVar9 == 0) {
      (**(code **)(lVar15 + 0x10))(param_1,param_2,lVar2);
      uVar6 = 0;
    }
    else {
      *param_1 = *(undefined8 *)param_2;
      uVar6 = 1;
    }
  }
  else if (uVar9 == 2) {
    *param_1 = *(undefined8 *)param_2;
    puVar11 = (undefined8 *)((long)param_1 + 0xfU & 0xfffffffffffffff8);
    puVar12 = (undefined8 *)((ulong)((long)param_2 + 0xf) & 0xfffffffffffffff8);
    *puVar11 = *puVar12;
    (**(code **)(lVar7 + 0x10))
              ((long)puVar11 + uVar8 + 8 & ~uVar8,(long)puVar12 + uVar8 + 8 & ~uVar8,lVar5);
    uVar6 = 2;
  }
  else if (uVar9 == 3) {
    *param_1 = *(undefined8 *)param_2;
    uVar6 = 3;
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 2);
    *param_1 = *(undefined8 *)param_2;
    _swift_errorRetain(uVar3);
    param_1[1] = uVar3;
    uVar6 = 4;
  }
  *(undefined1 *)((long)param_1 + uVar14) = uVar6;
  return param_1;
}



/* Entry: 104136c50; end: 104136eff;  */

uint * FUN_104136c50(uint *param_1,uint *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar1 = *(long *)(param_3 + 0x10);
  lVar11 = *(long *)(lVar1 + -8);
  uVar10 = *(ulong *)(lVar11 + 0x40);
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x18),
             PTR___ss5ClockTL_110350028,PTR___s7Instants5ClockPTl_11034fb68);
  lVar12 = *(long *)(lVar2 + -8);
  uVar13 = (ulong)*(byte *)(lVar12 + 0x50);
  uVar14 = (uVar13 + 0x10 & (uVar13 ^ 0xffffffffffffffff)) + *(long *)(lVar12 + 0x40);
  if (uVar10 <= uVar14) {
    uVar10 = uVar14;
  }
  if (uVar10 < 0x11) {
    uVar10 = 0x10;
  }
  bVar3 = *(byte *)((long)param_1 + uVar10);
  uVar5 = (uint)bVar3;
  uVar9 = (uint)uVar10;
  if (4 < bVar3) {
    uVar6 = 4;
    if (uVar9 < 4) {
      uVar6 = uVar9;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_104136d4c;
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
    uVar5 = uVar6 | bVar3 - 5 << (ulong)((uVar9 & 3) << 3);
    if (3 < uVar9) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 5;
  }
LAB_104136d4c:
  uVar14 = ~uVar13;
  if ((int)uVar5 < 2) {
    if (uVar5 == 0) {
      (**(code **)(lVar11 + 8))(param_1,lVar1);
    }
  }
  else if (uVar5 == 2) {
    (**(code **)(lVar12 + 8))
              (((ulong)((long)param_1 + 0xfU) & 0xfffffffffffffff8) + uVar13 + 8 & uVar14,lVar2);
  }
  else if (uVar5 != 3) {
    _swift_errorRelease(*(undefined8 *)(param_1 + 2));
  }
  bVar3 = *(byte *)((long)param_2 + uVar10);
  uVar5 = (uint)bVar3;
  if (4 < bVar3) {
    uVar6 = 4;
    if (uVar9 < 4) {
      uVar6 = uVar9;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_104136e20;
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
    uVar5 = uVar6 | bVar3 - 5 << (ulong)((uVar9 & 3) << 3);
    if (3 < uVar9) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 5;
  }
LAB_104136e20:
  if ((int)uVar5 < 2) {
    if (uVar5 == 0) {
      (**(code **)(lVar11 + 0x10))(param_1,param_2,lVar1);
      bVar3 = 0;
    }
    else {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      bVar3 = 1;
    }
  }
  else if (uVar5 == 2) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    puVar4 = (undefined8 *)((ulong)((long)param_1 + 0xf) & 0xfffffffffffffff8);
    puVar7 = (undefined8 *)((ulong)((long)param_2 + 0xf) & 0xfffffffffffffff8);
    *puVar4 = *puVar7;
    (**(code **)(lVar12 + 0x10))
              ((long)puVar4 + uVar13 + 8 & uVar14,(long)puVar7 + uVar13 + 8 & uVar14,lVar2);
    bVar3 = 2;
  }
  else if (uVar5 == 3) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    bVar3 = 3;
  }
  else {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    uVar8 = *(undefined8 *)(param_2 + 2);
    _swift_errorRetain(uVar8);
    *(undefined8 *)(param_1 + 2) = uVar8;
    bVar3 = 4;
  }
  *(byte *)((long)param_1 + uVar10) = bVar3;
  return param_1;
}



/* Entry: 104136f00; end: 1041370b3;  */

undefined8 * FUN_104136f00(undefined8 *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  undefined1 uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  
  lVar2 = *(long *)(param_3 + 0x10);
  lVar14 = *(long *)(lVar2 + -8);
  uVar13 = *(ulong *)(lVar14 + 0x40);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x18),
             PTR___ss5ClockTL_110350028,PTR___s7Instants5ClockPTl_11034fb68);
  lVar6 = *(long *)(lVar4 + -8);
  uVar7 = (ulong)*(byte *)(lVar6 + 0x50);
  uVar1 = (uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff)) + *(long *)(lVar6 + 0x40);
  if (uVar13 <= uVar1) {
    uVar13 = uVar1;
  }
  if (uVar13 < 0x11) {
    uVar13 = 0x10;
  }
  bVar3 = *(byte *)((long)param_2 + uVar13);
  uVar8 = (uint)bVar3;
  if (4 < bVar3) {
    uVar12 = (uint)uVar13;
    uVar9 = 4;
    if (uVar12 < 4) {
      uVar9 = uVar12;
    }
    if ((int)uVar9 < 2) {
      if (uVar9 == 0) goto LAB_104136fec;
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
    uVar8 = uVar9 | bVar3 - 5 << (ulong)((uVar12 & 3) << 3);
    if (3 < uVar12) {
      uVar8 = uVar9;
    }
    uVar8 = uVar8 + 5;
  }
LAB_104136fec:
  if ((int)uVar8 < 2) {
    if (uVar8 == 0) {
      (**(code **)(lVar14 + 0x20))(param_1,param_2,lVar2);
      uVar5 = 0;
    }
    else {
      *param_1 = *(undefined8 *)param_2;
      uVar5 = 1;
    }
  }
  else if (uVar8 == 2) {
    *param_1 = *(undefined8 *)param_2;
    puVar10 = (undefined8 *)((long)param_1 + 0xfU & 0xfffffffffffffff8);
    puVar11 = (undefined8 *)((ulong)((long)param_2 + 0xf) & 0xfffffffffffffff8);
    *puVar10 = *puVar11;
    (**(code **)(lVar6 + 0x20))
              ((long)puVar10 + uVar7 + 8 & ~uVar7,(long)puVar11 + uVar7 + 8 & ~uVar7,lVar4);
    uVar5 = 2;
  }
  else if (uVar8 == 3) {
    *param_1 = *(undefined8 *)param_2;
    uVar5 = 3;
  }
  else {
    uVar15 = *(undefined8 *)param_2;
    param_1[1] = *(undefined8 *)(param_2 + 2);
    *param_1 = uVar15;
    uVar5 = 4;
  }
  *(undefined1 *)((long)param_1 + uVar13) = uVar5;
  return param_1;
}



/* Entry: 1041370b4; end: 104137353;  */

uint * FUN_1041370b4(uint *param_1,uint *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar1 = *(long *)(param_3 + 0x10);
  lVar10 = *(long *)(lVar1 + -8);
  uVar9 = *(ulong *)(lVar10 + 0x40);
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x18),
             PTR___ss5ClockTL_110350028,PTR___s7Instants5ClockPTl_11034fb68);
  lVar11 = *(long *)(lVar2 + -8);
  uVar12 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar13 = (uVar12 + 0x10 & (uVar12 ^ 0xffffffffffffffff)) + *(long *)(lVar11 + 0x40);
  if (uVar9 <= uVar13) {
    uVar9 = uVar13;
  }
  if (uVar9 < 0x11) {
    uVar9 = 0x10;
  }
  bVar3 = *(byte *)((long)param_1 + uVar9);
  uVar5 = (uint)bVar3;
  uVar8 = (uint)uVar9;
  if (4 < bVar3) {
    uVar6 = 4;
    if (uVar8 < 4) {
      uVar6 = uVar8;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_1041371b0;
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
    uVar5 = uVar6 | bVar3 - 5 << (ulong)((uVar8 & 3) << 3);
    if (3 < uVar8) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 5;
  }
LAB_1041371b0:
  uVar13 = ~uVar12;
  if ((int)uVar5 < 2) {
    if (uVar5 == 0) {
      (**(code **)(lVar10 + 8))(param_1,lVar1);
    }
  }
  else if (uVar5 == 2) {
    (**(code **)(lVar11 + 8))
              (((ulong)((long)param_1 + 0xfU) & 0xfffffffffffffff8) + uVar12 + 8 & uVar13,lVar2);
  }
  else if (uVar5 != 3) {
    _swift_errorRelease(*(undefined8 *)(param_1 + 2));
  }
  bVar3 = *(byte *)((long)param_2 + uVar9);
  uVar5 = (uint)bVar3;
  if (4 < bVar3) {
    uVar6 = 4;
    if (uVar8 < 4) {
      uVar6 = uVar8;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_104137284;
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
    uVar5 = uVar6 | bVar3 - 5 << (ulong)((uVar8 & 3) << 3);
    if (3 < uVar8) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 5;
  }
LAB_104137284:
  if ((int)uVar5 < 2) {
    if (uVar5 == 0) {
      (**(code **)(lVar10 + 0x20))(param_1,param_2,lVar1);
      bVar3 = 0;
    }
    else {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      bVar3 = 1;
    }
  }
  else if (uVar5 == 2) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    puVar4 = (undefined8 *)((ulong)((long)param_1 + 0xf) & 0xfffffffffffffff8);
    puVar7 = (undefined8 *)((ulong)((long)param_2 + 0xf) & 0xfffffffffffffff8);
    *puVar4 = *puVar7;
    (**(code **)(lVar11 + 0x20))
              ((long)puVar4 + uVar12 + 8 & uVar13,(long)puVar7 + uVar12 + 8 & uVar13,lVar2);
    bVar3 = 2;
  }
  else if (uVar5 == 3) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    bVar3 = 3;
  }
  else {
    uVar14 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)param_1 = uVar14;
    bVar3 = 4;
  }
  *(byte *)((long)param_1 + uVar9) = bVar3;
  return param_1;
}



/* Entry: 104137354; end: 1041374bb;  */

int FUN_104137354(uint *param_1,uint param_2,long param_3)

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
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x18),
             PTR___ss5ClockTL_110350028,PTR___s7Instants5ClockPTl_11034fb68);
  uVar6 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  uVar6 = (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff)) + *(long *)(*(long *)(lVar4 + -8) + 0x40);
  if (uVar8 <= uVar6) {
    uVar8 = uVar6;
  }
  if (uVar8 < 0x11) {
    uVar8 = 0x10;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 0xfc) goto LAB_104137454;
  uVar6 = uVar8 + 1;
  uVar5 = (uint)uVar6;
  uVar2 = uVar5 << 3;
  if (uVar5 < 4) {
    uVar7 = ((param_2 + ~(-1 << (ulong)(uVar2 & 0x1f))) - 0xfb >> (ulong)(uVar2 & 0x1f)) + 1;
    if (uVar7 < 0x100) {
      if (uVar7 < 2) goto LAB_104137454;
      goto LAB_1041373e0;
    }
    if (uVar7 >> 0x10 == 0) {
      uVar7 = (uint)*(ushort *)((long)param_1 + uVar6);
    }
    else {
      uVar7 = *(uint *)((long)param_1 + uVar6);
    }
  }
  else {
LAB_1041373e0:
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
    return ((uint)uVar6 | uVar1) + 0xfc;
  }
LAB_104137454:
  iVar3 = 0;
  if (4 < *(byte *)((long)param_1 + uVar8)) {
    iVar3 = (*(byte *)((long)param_1 + uVar8) ^ 0xff) + 1;
  }
  return iVar3;
}



/* Entry: 1041374bc; end: 1041376a3;  */

void FUN_1041374bc(uint *param_1,uint param_2,uint param_3,long param_4)

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
            (0,*(undefined8 *)(param_4 + 0x28),*(undefined8 *)(param_4 + 0x18),
             PTR___ss5ClockTL_110350028,PTR___s7Instants5ClockPTl_11034fb68);
  uVar4 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar4 = (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)) + *(long *)(*(long *)(lVar3 + -8) + 0x40);
  if (uVar6 <= uVar4) {
    uVar6 = uVar4;
  }
  if (uVar6 < 0x11) {
    uVar6 = 0x10;
  }
  lVar3 = uVar6 + 1;
  uVar5 = (uint)lVar3;
  if (param_3 < 0xfc) {
    bVar8 = 0;
  }
  else if (uVar5 < 4) {
    uVar1 = ((param_3 + ~(-1 << (ulong)(uVar5 << 3 & 0x1f))) - 0xfb >> (ulong)(uVar5 << 3 & 0x1f)) +
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
  if (param_2 < 0xfc) {
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
    param_2 = param_2 - 0xfc;
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



/* Entry: 1041376a4; end: 104137787;  */

uint FUN_1041376a4(uint *param_1,long param_2)

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
            (0,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x18),
             PTR___ss5ClockTL_110350028,PTR___s7Instants5ClockPTl_11034fb68);
  uVar5 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar5 = (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)) + *(long *)(*(long *)(lVar3 + -8) + 0x40);
  if (uVar7 <= uVar5) {
    uVar7 = uVar5;
  }
  if (uVar7 < 0x11) {
    uVar7 = 0x10;
  }
  bVar1 = *(byte *)((long)param_1 + uVar7);
  uVar2 = (uint)bVar1;
  if (4 < bVar1) {
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
    uVar2 = uVar6 | bVar1 - 5 << (ulong)((uVar4 & 3) << 3);
    if (3 < uVar4) {
      uVar2 = uVar6;
    }
    uVar2 = uVar2 + 5;
  }
  return uVar2;
}



/* Entry: 104137788; end: 10413778b;  */

void FUN_104137788(void)

{
  return;
}



/* Entry: 10413778c; end: 1041378af;  */

void FUN_10413778c(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  undefined2 uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  
  uVar6 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x18),
             PTR___ss5ClockTL_110350028,PTR___s7Instants5ClockPTl_11034fb68);
  uVar4 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar4 = (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)) + *(long *)(*(long *)(lVar3 + -8) + 0x40);
  if (param_2 < 5) {
    if (uVar6 <= uVar4) {
      uVar6 = uVar4;
    }
    if (uVar6 < 0x11) {
      uVar6 = 0x10;
    }
    *(char *)((long)param_1 + uVar6) = (char)param_2;
  }
  else {
    if (uVar6 <= uVar4) {
      uVar6 = uVar4;
    }
    if (uVar6 < 0x11) {
      uVar6 = 0x10;
    }
    param_2 = param_2 - 5;
    uVar5 = (uint)uVar6;
    if (uVar5 < 4) {
      *(char *)((long)param_1 + uVar6) = (char)(param_2 >> (ulong)(uVar5 << 3 & 0x1f)) + '\x05';
      if (uVar5 != 0) {
        uVar1 = param_2 & (-1 << (ulong)(uVar5 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,uVar6);
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
      *(undefined1 *)((long)param_1 + uVar6) = 5;
      _bzero(param_1,uVar6);
      *param_1 = param_2;
    }
  }
  return;
}



/* Entry: 1041378b0; end: 1041378b7;  */

void FUN_1041378b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1041378b8; end: 1041378eb;  */

undefined8 * FUN_1041378b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  _swift_retain();
  return param_1;
}



/* Entry: 1041378ec; end: 104137947;  */

undefined8 * FUN_1041378ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_retain();
  _swift_release(uVar1);
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  return param_1;
}



/* Entry: 104137948; end: 104137983;  */

undefined8 * FUN_104137948(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_release(uVar1);
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  return param_1;
}



/* Entry: 104137984; end: 104137a2f;  */

int FUN_104137984(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 104137a30; end: 104137a83;  */

undefined8 * FUN_104137a30(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_retain();
  _swift_release(uVar1);
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  return param_1;
}



/* Entry: 104137a84; end: 104137abf;  */

undefined8 * FUN_104137a84(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_release(uVar1);
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  return param_1;
}



/* Entry: 104137ac0; end: 104137ba7;  */

int FUN_104137ac0(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[3] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 104137ba8; end: 104137c7f;  */

void FUN_104137ba8(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  puStack_40 = PTR___sBoWV_11034d678 + 0x40;
  uVar3 = *(ulong *)(param_1 + 0x68);
  uVar4 = *(ulong *)(param_1 + 0x58);
  uVar1 = 0x13f;
  _swift_getAssociatedTypeWitness
            (0x13f,uVar3,uVar4,PTR___ss5ClockTL_110350028,PTR___s8Durations5ClockPTl_11034fb70);
  if (uVar3 < 0x40) {
    lStack_38 = *(long *)(uVar1 - 8) + 0x40;
    lVar2 = 0x13f;
    __sSqMa();
    if (uVar1 < 0x40) {
      lStack_30 = *(long *)(lVar2 + -8) + 0x40;
      lVar2 = 0x13f;
      _swift_checkMetadataState();
      if (uVar4 < 0x40) {
        lStack_28 = *(long *)(lVar2 + -8) + 0x40;
        _swift_initClassMetadata2(param_1,0,4,&puStack_40,param_1 + 0x70);
      }
    }
  }
  return;
}



/* Entry: 104137c80; end: 104137ce3;  */

void FUN_104137c80(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  lVar1 = param_4;
  _swift_allocError(param_4,param_5,0,0);
  (**(code **)(*(long *)(param_4 + -8) + 0x20))(param_5,param_1,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(param_2,lVar1);
  return;
}



/* Entry: 104137ce4; end: 104137edb;  */

void FUN_104137ce4(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long *unaff_x20;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 auStack_70 [2];
  long lStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  lVar9 = *unaff_x20;
  lVar10 = unaff_x20[2];
  lVar1 = *(long *)(lVar9 + 0x50);
  lVar2 = *(long *)(lVar9 + 0x58);
  lVar6 = *(long *)(lVar9 + 0x60);
  uVar5 = *(undefined8 *)(lVar9 + 0x68);
  uVar3 = 0;
  lStack_98 = lVar1;
  lStack_90 = lVar2;
  lStack_88 = lVar6;
  uStack_80 = uVar5;
  lStack_60 = lVar1;
  lStack_58 = lVar2;
  lStack_50 = lVar6;
  uStack_48 = uVar5;
  FUN_10412d284(0,&lStack_98);
  uVar4 = 0xff;
  lStack_98 = lVar1;
  lStack_90 = lVar2;
  lStack_88 = lVar6;
  uStack_80 = uVar5;
  func_0x000104137b58(0xff,&lStack_98);
  uVar5 = 0;
  __sSqMa(0,uVar4);
  FUN_104146aa0(&lStack_98,FUN_10413b990,auStack_70,lVar10,uVar3,uVar5);
  lVar2 = lStack_88;
  lVar6 = lStack_90;
  lVar1 = lStack_98;
  if (lStack_98 != 0) {
    if (lStack_90 == 0) {
      _swift_retain(lStack_98);
    }
    else {
      uVar3 = 0;
      __sScEMa();
      uVar5 = uVar3;
      func_0x000100f5abbc();
      _swift_allocError(uVar3,uVar5,0,0);
      _swift_retain(lVar1);
      __sS2cEycfC(uVar5);
      uVar5 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      puVar7 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
      _swift_allocError();
      *puVar7 = uVar3;
      _swift_continuation_throwingResumeWithError(lVar6,uVar5);
    }
    if (lVar2 != 0) {
      uVar3 = 0;
      __sScEMa();
      uVar5 = uVar3;
      func_0x000100f5abbc();
      _swift_allocError(uVar3,uVar5,0,0);
      __sS2cEycfC(uVar5);
      lVar6 = 0x112d393f0;
      auStack_70[0] = uVar3;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      lVar9 = lVar6;
      puVar8 = PTR___ss5ErrorWS_11034ee10;
      _swift_allocError();
      (**(code **)(*(long *)(lVar6 + -8) + 0x20))(puVar8,auStack_70,lVar6);
      _swift_continuation_throwingResumeWithError(lVar2,lVar9);
    }
    __sScT6cancelyyF(lVar1,PTR___sytN_11034f1b0 + 8,PTR___ss5NeverON_11034ee88,
                     PTR___ss5NeverOs5ErrorsWP_11034ee90);
    _swift_release_n(lVar1,2);
  }
  return;
}



/* Entry: 104137edc; end: 104137efb;  */

void FUN_104137edc(undefined8 param_1)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 **)(unaff_x22 + 0x18) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x20) = *unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104137efc,0,0);
  return;
}



/* Entry: 104137efc; end: 104137faf;  */

void FUN_104137efc(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x20);
  plVar1 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x28) = plVar1;
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar4 + 0x60),*(undefined8 *)(lVar4 + 0x50),PTR___sSciTL_11034fea8
             ,PTR___s7ElementSciTl_11034fb58);
  uVar3 = 0;
  __sSqMa(0,uVar2);
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_104137fb0;
                    /* WARNING: Could not recover jumptable at 0x000104137fac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)&UNK_10396896c)
            (*(undefined8 *)(unaff_x22 + 0x10),&UNK_10dcd8b20,*(undefined8 *)(unaff_x22 + 0x18),
             FUN_10413ba7c,*(undefined8 *)(unaff_x22 + 0x18),0,0,uVar3);
  return;
}



/* Entry: 104137fb0; end: 10413815f;  */

void FUN_104137fb0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x000104137fe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 104138160; end: 1041381ef;  */

/* WARNING: Removing unreachable block (ram,0x0001041381cc) */

void FUN_104138160(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x10);
  puVar3 = &DAT_10dcd9348;
  _swift_getWitnessTable(&DAT_10dcd9348,uVar4);
  FUN_1041542f8(uVar5,uVar4,puVar3);
  (**(code **)(lVar1 + 8))(uVar2,uVar4);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001041381ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1041381f0; end: 10413862f;  */

void FUN_1041381f0(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar12;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x13;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uStack_100;
  undefined4 auStack_f8 [2];
  long alStack_f0 [5];
  undefined8 uStack_c8;
  long *plStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  lVar13 = *param_2;
  uVar15 = *(undefined8 *)(lVar13 + 0x60);
  uVar17 = *(undefined8 *)(lVar13 + 0x50);
  lVar6 = 0xff;
  uStack_b0 = param_1;
  _swift_getAssociatedTypeWitness
            (0xff,uVar15,uVar17,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  uVar7 = 0xff;
  alStack_f0[1] = lVar6;
  __sSqMa(0xff);
  uVar8 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar6 = 0;
  uStack_c8 = uVar8;
  __ss6ResultOMa(0,uVar7,uVar8,PTR___ss5ErrorWS_11034ee10);
  lStack_b8 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar16 = *(undefined8 *)(lVar13 + 0x68);
  uVar7 = *(undefined8 *)(lVar13 + 0x58);
  lVar6 = 0;
  plStack_c0 = (long *)((long)alStack_f0 - extraout_x8);
  _swift_getAssociatedTypeWitness
            (0,uVar16,uVar7,PTR___ss5ClockTL_110350028,PTR___s7Instants5ClockPTl_11034fb68);
  alStack_f0[3] = *(long *)(lVar6 + -8);
  alStack_f0[4] = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(alStack_f0[3] + 0x40));
  lVar12 = ((long)alStack_f0 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  alStack_f0[0] = lVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar12 - extraout_x12;
  lVar6 = 0xff;
  alStack_f0[2] = lVar12;
  uStack_80 = uVar17;
  uStack_78 = uVar7;
  uStack_70 = uVar15;
  plStack_68 = (long *)uVar16;
  FUN_1041338e0(0xff,&uStack_80);
  lVar13 = 0;
  __sSqMa(0,lVar6);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
  plVar14 = (long *)(lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = (long)plVar14 - extraout_x12_00;
  lVar18 = param_2[2];
  uStack_70 = uStack_b0;
  uVar8 = 0;
  uStack_a8 = uVar17;
  uStack_a0 = uVar7;
  uStack_98 = uVar15;
  uStack_90 = uVar16;
  plStack_68 = param_2;
  FUN_10412d284(0,&uStack_a8);
  FUN_104146aa0(lVar12,FUN_10413baf8,&uStack_80,lVar18,uVar8,lVar13);
  (**(code **)(extraout_x13 + 0x10))(plVar14,lVar12,lVar13);
  plVar9 = plVar14;
  (**(code **)(*(long *)(lVar6 + -8) + 0x30))(plVar14,1,lVar6);
  if ((int)plVar9 != 1) {
    plVar10 = plVar14;
    _swift_getEnumCaseMultiPayload(plVar14,lVar6);
    lVar6 = lStack_b8;
    plVar9 = plStack_c0;
    iVar5 = (int)plVar10;
    if (iVar5 < 3) {
      if (iVar5 == 1) {
        if (*plVar14 != 0) {
          _swift_continuation_throwingResume();
        }
      }
      else {
        if (iVar5 != 2) {
          *(undefined4 *)(lVar12 + -8) = 0;
          *(undefined8 *)(lVar12 + -0x10) = 0x58;
          __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                    ("Fatal error",0xb,2,0xd000000000000016,0x800000010f1eddb0,
                     "AsyncAlgorithms/DebounceStorage.swift",0x25,2);
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x104138630);
          (*pcVar4)();
        }
        lVar6 = *plVar14;
        lVar18 = plVar14[1];
        uVar8 = 0x113063da0;
        func_0x00010002969c(0x113063da0,&UNK_10dcd8908);
        uVar7 = uStack_c8;
        lVar3 = alStack_f0[4];
        uVar15 = 0xff;
        __sSccMa(0xff,alStack_f0[4],uStack_c8,PTR___ss5ErrorWS_11034ee10);
        uVar16 = 0xff;
        __sSqMa(0xff,uVar15);
        lVar11 = 0;
        _swift_getTupleTypeMetadata3
                  (0,uVar8,uVar16,lVar3,"upstreamContinuation clockContinuation deadline ",0);
        lVar2 = alStack_f0[3];
        lVar1 = alStack_f0[2];
        (**(code **)(alStack_f0[3] + 0x20))
                  (alStack_f0[2],(long)plVar14 + (long)*(int *)(lVar11 + 0x40),lVar3);
        if (lVar6 != 0) {
          _swift_continuation_throwingResume(lVar6);
        }
        lVar6 = alStack_f0[0];
        if (lVar18 != 0) {
          (**(code **)(lVar2 + 0x10))(alStack_f0[0],lVar1,lVar3);
          func_0x00010176fed4(lVar6,lVar18,lVar3,uVar7,PTR___ss5ErrorWS_11034ee10);
        }
        (**(code **)(lVar2 + 8))(lVar1,lVar3);
      }
    }
    else {
      if (iVar5 == 3) {
        lVar18 = *plVar14;
        (**(code **)(*(long *)(alStack_f0[1] + -8) + 0x38))(plStack_c0,1,1);
        lVar6 = lStack_b8;
        _swift_storeEnumTagMultiPayload(plVar9,lStack_b8,0);
      }
      else {
        lVar18 = *plVar14;
        *plStack_c0 = plVar14[1];
        _swift_storeEnumTagMultiPayload(plVar9,lVar6,1);
      }
      func_0x000103969044(plVar9,lVar18,lVar6);
    }
  }
  (**(code **)(extraout_x13 + 8))(lVar12,lVar13);
  return;
}



/* Entry: 104138630; end: 10413893b;  */

void FUN_104138630(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar8;
  long extraout_x12;
  long extraout_x12_00;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  long *plStack_b0;
  undefined1 *puStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar11 = *(long *)(*param_4 + 0x50);
  lStack_a0 = *(long *)(lVar11 + -8);
  plStack_b0 = param_4;
  uStack_90 = param_2;
  uStack_88 = param_1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  uVar5 = *(undefined8 *)(extraout_x12 + 0x58);
  uVar7 = *(undefined8 *)(extraout_x12 + 0x60);
  uVar12 = *(undefined8 *)(extraout_x12 + 0x68);
  lVar3 = 0;
  puStack_a8 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_80 = lVar11;
  uStack_78 = uVar5;
  uStack_70 = uVar7;
  uStack_68 = uVar12;
  FUN_1041338e0(0,&lStack_80);
  lVar13 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar9 = (long)(auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
          (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar9 - extraout_x12_00;
  uVar4 = 0;
  uStack_b8 = uVar5;
  lStack_80 = lVar11;
  uStack_78 = uVar5;
  uStack_70 = uVar7;
  uStack_68 = uVar12;
  FUN_10412d284(0,&lStack_80);
  uVar5 = uStack_90;
  FUN_104133070(lVar10,param_3,uVar4);
  (**(code **)(lVar13 + 0x10))(lVar9,lVar10,lVar3);
  lStack_98 = lVar9;
  _swift_getEnumCaseMultiPayload(lVar9,lVar3);
  lVar6 = lStack_a0;
  puVar1 = puStack_a8;
  iVar2 = (int)lVar9;
  if (iVar2 < 2) {
    if (iVar2 == 0) {
      (**(code **)(lStack_a0 + 0x20))(puStack_a8,lStack_98,lVar11);
      FUN_10413893c(uVar5,puVar1,param_3);
      (**(code **)(lVar6 + 8))(puVar1,lVar11);
      (**(code **)(lVar13 + 8))(lVar10,lVar3);
      pcVar8 = *(code **)(lVar13 + 0x38);
      uVar7 = 1;
      uVar5 = uStack_88;
      goto LAB_10413882c;
    }
  }
  else {
    if (iVar2 == 2) {
      uVar5 = 0x113063da0;
      func_0x00010002969c(0x113063da0,&UNK_10dcd8908);
      lVar6 = 0xff;
      _swift_getAssociatedTypeWitness
                (0xff,uVar12,uStack_b8,PTR___ss5ClockTL_110350028,
                 PTR___s7Instants5ClockPTl_11034fb68);
      uVar7 = 0x112d393f0;
      func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
      uVar4 = 0xff;
      __sSccMa(0xff,lVar6,uVar7,PTR___ss5ErrorWS_11034ee10);
      uVar7 = 0xff;
      __sSqMa(0xff,uVar4);
      lVar9 = 0;
      _swift_getTupleTypeMetadata3
                (0,uVar5,uVar7,lVar6,"upstreamContinuation clockContinuation deadline ",0);
      uVar5 = uStack_88;
      iVar2 = *(int *)(lVar9 + 0x40);
      (**(code **)(lVar13 + 0x20))(uStack_88,lVar10,lVar3);
      (**(code **)(lVar13 + 0x38))(uVar5,0,1,lVar3);
      (**(code **)(*(long *)(lVar6 + -8) + 8))(lStack_98 + iVar2,lVar6);
      return;
    }
    if (iVar2 != 3) {
      (**(code **)(lVar13 + 8))(lStack_98,lVar3);
    }
  }
  uVar5 = uStack_88;
  (**(code **)(lVar13 + 0x20))(uStack_88,lVar10,lVar3);
  pcVar8 = *(code **)(lVar13 + 0x38);
  uVar7 = 0;
LAB_10413882c:
  (*pcVar8)(uVar5,uVar7,1,lVar3);
  return;
}



/* Entry: 10413893c; end: 104138d97;  */

void FUN_10413893c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long extraout_x8;
  ulong uVar5;
  ulong uVar6;
  long *unaff_x20;
  undefined8 uVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined1 auStack_a0 [8];
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar13 = *unaff_x20;
  lVar8 = *(long *)(lVar13 + 0x50);
  lVar15 = *(long *)(lVar8 + -8);
  lVar11 = *(long *)(lVar15 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar9 = auStack_a0 + -(lVar11 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  __sScPMa();
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))((long)puVar9 - extraout_x8,1,1,lVar1);
  (**(code **)(lVar15 + 0x10))(puVar9,param_2,lVar8);
  uVar5 = (ulong)*(byte *)(lVar15 + 0x50);
  uVar6 = uVar5 + 0x40 & (uVar5 ^ 0xffffffffffffffff);
  uVar12 = lVar11 + uVar6 + 7 & 0xfffffffffffffff8;
  puVar2 = &UNK_110748a20;
  _swift_allocObject(&UNK_110748a20,uVar12 + 8,uVar5 | 7);
  *(undefined8 *)(puVar2 + 0x10) = 0;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  *(long *)(puVar2 + 0x20) = lVar8;
  uVar7 = *(undefined8 *)(lVar13 + 0x58);
  *(undefined8 *)(puVar2 + 0x28) = uVar7;
  uVar10 = *(undefined8 *)(lVar13 + 0x60);
  *(undefined8 *)(puVar2 + 0x30) = uVar10;
  uVar14 = *(undefined8 *)(lVar13 + 0x68);
  *(undefined8 *)(puVar2 + 0x38) = uVar14;
  (**(code **)(lVar15 + 0x20))(puVar2 + uVar6,puVar9,lVar8);
  *(long **)(puVar2 + uVar12) = unaff_x20;
  _swift_retain();
  uVar3 = 0;
  func_0x0001000abba4(0,0,(long)puVar9 - extraout_x8,&UNK_10dcd8b30,puVar2);
  uVar4 = 0;
  lStack_80 = lVar8;
  uStack_78 = uVar7;
  uStack_70 = uVar10;
  uStack_68 = uVar14;
  FUN_10412d284(0,&lStack_80);
  func_0x00010412fe54(uVar3,param_3,uVar4);
  _swift_release(uVar3);
  return;
}



/* Entry: 104138d98; end: 104138db3;  */

void FUN_104138d98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x140) = param_4;
  *(undefined8 *)(unaff_x22 + 0x148) = param_5;
  *(undefined8 *)(unaff_x22 + 0x138) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104138db4,0,0);
  return;
}



/* Entry: 104138db4; end: 104138ef7;  */

void FUN_104138db4(void)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x148);
  *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(unaff_x22 + 0x140);
  iVar2 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar2 != 0) {
    plVar3 = (long *)(ulong)*(uint *)(
                                     PTR___ss21withThrowingTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_Scgyxs5Error_pGzYaKXEtYaKs8SendableRzr0_lFTu_11034ffc0
                                     + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x150) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = 0x104138ea4;
    puVar1 = PTR___sytN_11034f1b0 + 8;
                    /* WARNING: Could not recover jumptable at 0x00010bdb96ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss21withThrowingTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_Scgyxs5Error_pGzYaKXEtYaKs8SendableRzr0_lF_11034ffb8
    )(plVar3,*(undefined8 *)(unaff_x22 + 0x138),puVar1,puVar1,0,0,&UNK_10dcd8b40,unaff_x22 + 0x110,
      puVar1,puVar1);
    return;
  }
  _swift_taskGroup_initialize(unaff_x22 + 0x10,PTR___sytN_11034f1b0 + 8);
  *(long *)(unaff_x22 + 0x130) = unaff_x22 + 0x10;
  plVar4 = (long *)0x150;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x158) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_104138ef8;
  plVar3 = *(long **)(unaff_x22 + 0x148);
  plVar4[0x1e] = *(long *)(unaff_x22 + 0x140);
  plVar4[0x1f] = (long)plVar3;
  plVar4[0x1d] = unaff_x22 + 0x130;
  plVar4[0x20] = *plVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104139168,0,0);
  return;
}



/* Entry: 104138ef8; end: 104138fa3;  */

void FUN_104138ef8(void)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  *(long *)(lVar2 + 0x160) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x158));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_10413901c,0,0);
    return;
  }
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScg22awaitAllRemainingTasksyyYaFTu_11034fe58 + 4);
  _swift_task_alloc();
  *(long **)(lVar2 + 0x168) = plVar1;
  func_0x0001000285a8(0x112dec560,&UNK_10d9b8310);
  *plVar1 = lVar3;
  plVar1[1] = (long)FUN_104138fa4;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScg22awaitAllRemainingTasksyyYaF_11034fe50)();
  return;
}



/* Entry: 104138fa4; end: 10413901b;  */

void FUN_104138fa4(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x168));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x104138fec,0,0);
  return;
}



/* Entry: 10413901c; end: 1041390b7;  */

void FUN_10413901c(void)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar1 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  __sScg9cancelAllyyF(uVar3,PTR___sytN_11034f1b0 + 8,uVar1,PTR___ss5ErrorWS_11034ee10);
  plVar2 = (long *)(ulong)*(uint *)(PTR___sScg22awaitAllRemainingTasksyyYaFTu_11034fe58 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x170) = plVar2;
  func_0x0001000285a8(0x112dec560,&UNK_10d9b8310);
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1041390b8;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScg22awaitAllRemainingTasksyyYaF_11034fe50)();
  return;
}



/* Entry: 1041390b8; end: 1041390ff;  */

void FUN_1041390b8(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x170));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104139100,0,0);
  return;
}



/* Entry: 104139100; end: 104139143;  */

void FUN_104139100(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x160);
  _swift_taskGroup_destroy(unaff_x22 + 0x10);
  _swift_willThrow();
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(uVar1);
  return;
}



/* Entry: 104139144; end: 104139167;  */

void FUN_104139144(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xf0) = param_3;
  *(undefined8 **)(unaff_x22 + 0xf8) = param_4;
  *(undefined8 *)(unaff_x22 + 0xe8) = param_2;
  *(undefined8 *)(unaff_x22 + 0x100) = *param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104139168,0,0);
  return;
}



/* Entry: 104139168; end: 10413947f;  */

void FUN_104139168(void)

{
  ulong *puVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  code *pcVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  long unaff_x22;
  long lVar16;
  long lVar17;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0xf8);
  lVar2 = *(long *)(unaff_x22 + 0x100);
  puVar1 = *(ulong **)(unaff_x22 + 0xe8);
  lVar5 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar8 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xf;
  uVar4 = uVar8 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar4);
  lVar5 = 0;
  __sScPMa();
  pcVar11 = *(code **)(*(long *)(lVar5 + -8) + 0x38);
  (*pcVar11)(uVar4,1,1,lVar5);
  lVar16 = *(long *)(lVar2 + 0x50);
  *(long *)(unaff_x22 + 0x108) = lVar16;
  lVar17 = *(long *)(lVar16 + -8);
  lVar5 = *(long *)(lVar17 + 0x40);
  uVar6 = lVar5 + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar6);
  (**(code **)(lVar17 + 0x10))();
  uVar12 = (ulong)*(byte *)(lVar17 + 0x50);
  uVar15 = uVar12 + 0x40 & (uVar12 ^ 0xffffffffffffffff);
  uVar14 = lVar5 + uVar15 + 7 & 0xfffffffffffffff8;
  puVar7 = &UNK_110748a48;
  _swift_allocObject(&UNK_110748a48,uVar14 + 8,uVar12 | 7);
  *(undefined8 *)(puVar7 + 0x10) = 0;
  *(undefined8 *)(puVar7 + 0x18) = 0;
  *(long *)(puVar7 + 0x20) = lVar16;
  uVar13 = *(undefined8 *)(lVar2 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x110) = uVar13;
  *(undefined8 *)(puVar7 + 0x28) = uVar13;
  uVar13 = *(undefined8 *)(lVar2 + 0x60);
  *(undefined8 *)(unaff_x22 + 0x118) = uVar13;
  *(undefined8 *)(puVar7 + 0x30) = uVar13;
  uVar13 = *(undefined8 *)(lVar2 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x120) = uVar13;
  *(undefined8 *)(puVar7 + 0x38) = uVar13;
  (**(code **)(lVar17 + 0x20))(puVar7 + uVar15,uVar6,lVar16);
  *(undefined8 *)(puVar7 + uVar14) = uVar9;
  _swift_task_dealloc(uVar6);
  _swift_retain(uVar9);
  func_0x000101e9558c(uVar4,&UNK_10dcd8b50,puVar7);
  func_0x0001000abe54(uVar4);
  _swift_task_dealloc(uVar4);
  uVar8 = uVar8 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar8);
  (*pcVar11)();
  puVar7 = &UNK_110748a70;
  _swift_allocObject(&UNK_110748a70,0x28,7);
  *(undefined8 *)(puVar7 + 0x10) = 0;
  *(undefined8 *)(puVar7 + 0x18) = 0;
  *(undefined8 *)(puVar7 + 0x20) = uVar9;
  _swift_retain(uVar9);
  func_0x000101e9558c(uVar8,&UNK_10dcd8b60,puVar7);
  func_0x0001000abe54(uVar8);
  _swift_task_dealloc(uVar8);
  uVar4 = *puVar1;
  uVar9 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  *(undefined8 *)(unaff_x22 + 0x128) = uVar9;
  uVar8 = uVar4;
  __sScg7isEmptySbvg(uVar4,PTR___sytN_11034f1b0 + 8,uVar9,PTR___ss5ErrorWS_11034ee10);
  if ((uVar8 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001041393b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar5 = *(long *)(unaff_x22 + 0xf8);
  iVar3 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  *(int *)(unaff_x22 + 0x148) = iVar3;
  *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(lVar5 + 0x10);
  if (iVar3 != 0) {
    plVar10 = (long *)(ulong)*(uint *)(PTR___sScg4next9isolationxSgScA_pSgYi_tYaKFTu_11034fe68 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x138) = plVar10;
    uVar9 = 0x112dec560;
    func_0x0001000285a8(0x112dec560,&UNK_10d9b8310);
    *plVar10 = unaff_x22;
    plVar10[1] = (long)FUN_104139480;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScg4next9isolationxSgScA_pSgYi_tYaKF_11034fe60)(unaff_x22 + 0x14c,0,0,uVar9);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc04d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_taskGroup_wait_next_throwing_1103500d0)
            (unaff_x22 + 0x14d,uVar4,FUN_1041394dc,unaff_x22 + 0x70);
  return;
}



/* Entry: 104139480; end: 1041394db;  */

void FUN_104139480(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x138));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_104139504;
  }
  else {
    *(long *)(lVar2 + 0x140) = unaff_x20;
    pcVar1 = FUN_104139614;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1041394dc; end: 104139503;  */

void FUN_1041394dc(void)

{
  code *pcVar1;
  long unaff_x20;
  long unaff_x22;
  
  if (unaff_x20 == 0) {
    pcVar1 = FUN_104139504;
  }
  else {
    *(long *)(unaff_x22 + 0x140) = unaff_x20;
    pcVar1 = FUN_104139614;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 104139504; end: 104139613;  */

void FUN_104139504(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long unaff_x22;
  
  puVar2 = PTR___sytN_11034f1b0;
  puVar1 = PTR___ss5ErrorWS_11034ee10;
  uVar5 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar6 = **(ulong **)(unaff_x22 + 0xe8);
  __sScg9cancelAllyyF(uVar6,PTR___sytN_11034f1b0 + 8,uVar5,PTR___ss5ErrorWS_11034ee10);
  uVar3 = uVar6;
  __sScg7isEmptySbvg(uVar6,puVar2 + 8,uVar5,puVar1);
  if ((uVar3 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010413957c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  if (*(int *)(unaff_x22 + 0x148) != 0) {
    plVar4 = (long *)(ulong)*(uint *)(PTR___sScg4next9isolationxSgScA_pSgYi_tYaKFTu_11034fe68 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x138) = plVar4;
    uVar5 = 0x112dec560;
    func_0x0001000285a8(0x112dec560,&UNK_10d9b8310);
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_104139480;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScg4next9isolationxSgScA_pSgYi_tYaKF_11034fe60)(unaff_x22 + 0x14c,0,0,uVar5);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc04d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_taskGroup_wait_next_throwing_1103500d0)
            (unaff_x22 + 0x14d,uVar6,FUN_1041394dc,unaff_x22 + 0x70);
  return;
}



/* Entry: 104139614; end: 104139af7;  */

void FUN_104139614(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  long unaff_x22;
  long lVar17;
  
  uVar11 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x110);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x140);
  *(undefined8 *)(unaff_x22 + 0x98) = uVar6;
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar15;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar5;
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar14;
  uVar4 = 0;
  FUN_10412d284(0);
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar6;
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar15;
  *(undefined8 *)(unaff_x22 + 200) = uVar5;
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar14;
  uVar5 = 0xff;
  func_0x0001041366bc(0xff,(undefined8 *)(unaff_x22 + 0xb8));
  uVar6 = 0;
  __sSqMa(0,uVar5);
  FUN_104146aa0(unaff_x22 + 0x48,FUN_10413bdd4,unaff_x22 + 0x10,uVar11,uVar4,uVar6);
  puVar10 = PTR___sytN_11034f1b0;
  uVar16 = *(ulong *)(unaff_x22 + 0x48);
  uVar12 = *(ulong *)(unaff_x22 + 0x58);
  if (((uVar16 & uVar12 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x140));
  }
  else {
    lVar17 = *(long *)(unaff_x22 + 0x50);
    lVar1 = *(long *)(unaff_x22 + 0x60);
    lVar2 = *(long *)(unaff_x22 + 0x68);
    if ((long)uVar12 < 0) {
      if (lVar1 != 0) {
        uVar14 = *(undefined8 *)(unaff_x22 + 0x128);
        uVar6 = 0;
        __sScEMa();
        uVar5 = uVar6;
        func_0x000100f5abbc();
        _swift_allocError(uVar6,uVar5,0,0);
        __sS2cEycfC(uVar5);
        puVar9 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
        _swift_allocError(uVar14,PTR___ss5ErrorWS_11034ee10,0,0);
        *puVar9 = uVar6;
        _swift_continuation_throwingResumeWithError(lVar1,uVar14);
      }
      if (lVar2 != 0) {
        lVar13 = *(long *)(unaff_x22 + 0x128);
        uVar6 = 0;
        __sScEMa();
        uVar5 = uVar6;
        func_0x000100f5abbc();
        _swift_allocError(uVar6,uVar5,0,0);
        __sS2cEycfC(uVar5);
        *(undefined8 *)(unaff_x22 + 0xe0) = uVar6;
        lVar7 = lVar13;
        puVar10 = PTR___ss5ErrorWS_11034ee10;
        _swift_allocError(lVar13,PTR___ss5ErrorWS_11034ee10,0,0);
        (**(code **)(*(long *)(lVar13 + -8) + 0x20))(puVar10,unaff_x22 + 0xe0,lVar13);
        _swift_continuation_throwingResumeWithError(lVar2,lVar7);
      }
      uVar14 = *(undefined8 *)(unaff_x22 + 0x140);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x128);
      uVar4 = *(undefined8 *)(unaff_x22 + 0x118);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x108);
      __sScT6cancelyyF(uVar12 & 0x7fffffffffffffff,PTR___sytN_11034f1b0 + 8,
                       PTR___ss5NeverON_11034ee88,PTR___ss5NeverOs5ErrorsWP_11034ee90);
      uVar5 = 0xff;
      _swift_getAssociatedTypeWitness
                (0xff,uVar4,uVar6,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
      uVar6 = 0xff;
      __sSqMa(0xff,uVar5);
      lVar7 = 0;
      __ss6ResultOMa(0,uVar6,uVar15,PTR___ss5ErrorWS_11034ee10);
      plVar8 = (long *)(*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      _swift_task_alloc();
      *plVar8 = lVar17;
      _swift_storeEnumTagMultiPayload();
      _swift_errorRetain(lVar17);
      func_0x000103969044(plVar8,uVar16,lVar7);
      _swift_errorRelease(uVar14);
      FUN_10413be50(uVar16,lVar17,uVar12,lVar1,lVar2);
      puVar10 = PTR___sytN_11034f1b0;
      _swift_task_dealloc(plVar8);
    }
    else {
      if (lVar17 == 0) {
        FUN_1041363fc(uVar16,0,uVar12,lVar1,lVar2);
      }
      else {
        lVar13 = *(long *)(unaff_x22 + 0x128);
        uVar6 = 0;
        __sScEMa();
        uVar5 = uVar6;
        func_0x000100f5abbc();
        _swift_allocError(uVar6,uVar5,0,0);
        FUN_1041363fc(uVar16,lVar17,uVar12,lVar1,lVar2);
        __sS2cEycfC(uVar5);
        *(undefined8 *)(unaff_x22 + 0xd8) = uVar6;
        lVar7 = lVar13;
        puVar10 = PTR___ss5ErrorWS_11034ee10;
        _swift_allocError(lVar13,PTR___ss5ErrorWS_11034ee10,0,0);
        (**(code **)(*(long *)(lVar13 + -8) + 0x20))(puVar10,unaff_x22 + 0xd8,lVar13);
        puVar10 = PTR___sytN_11034f1b0;
        _swift_continuation_throwingResumeWithError(lVar17,lVar7);
      }
      uVar5 = *(undefined8 *)(unaff_x22 + 0x140);
      __sScT6cancelyyF(uVar16,puVar10 + 8,PTR___ss5NeverON_11034ee88,
                       PTR___ss5NeverOs5ErrorsWP_11034ee90);
      _swift_errorRelease(uVar5);
      FUN_10413be50(uVar16,lVar17,uVar12,lVar1,lVar2);
      FUN_10413be50(uVar16,lVar17,uVar12,lVar1,lVar2);
    }
  }
  puVar3 = PTR___ss5ErrorWS_11034ee10;
  uVar5 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar16 = **(ulong **)(unaff_x22 + 0xe8);
  __sScg9cancelAllyyF(uVar16,puVar10 + 8,uVar5,PTR___ss5ErrorWS_11034ee10);
  uVar12 = uVar16;
  __sScg7isEmptySbvg(uVar16,puVar10 + 8,uVar5,puVar3);
  if ((uVar12 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000104139a48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  if (*(int *)(unaff_x22 + 0x148) != 0) {
    plVar8 = (long *)(ulong)*(uint *)(PTR___sScg4next9isolationxSgScA_pSgYi_tYaKFTu_11034fe68 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x138) = plVar8;
    uVar5 = 0x112dec560;
    func_0x0001000285a8(0x112dec560,&UNK_10d9b8310);
    *plVar8 = unaff_x22;
    plVar8[1] = (long)FUN_104139480;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScg4next9isolationxSgScA_pSgYi_tYaKF_11034fe60)(unaff_x22 + 0x14c,0,0,uVar5);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc04d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_taskGroup_wait_next_throwing_1103500d0)
            (unaff_x22 + 0x14d,uVar16,FUN_1041394dc,unaff_x22 + 0x70);
  return;
}



/* Entry: 104139af8; end: 104139d87;  */

void FUN_104139af8(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 in_x3;
  long *in_x4;
  long lVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  
  *(undefined8 *)(unaff_x22 + 0x160) = in_x3;
  *(long **)(unaff_x22 + 0x168) = in_x4;
  lVar11 = *in_x4;
  uVar9 = *(undefined8 *)(lVar11 + 0x60);
  *(undefined8 *)(unaff_x22 + 0x170) = uVar9;
  lVar8 = *(long *)(lVar11 + 0x50);
  *(long *)(unaff_x22 + 0x178) = lVar8;
  puVar1 = PTR___sSciTL_11034fea8;
  lVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar9,lVar8,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  *(long *)(unaff_x22 + 0x180) = lVar2;
  lVar3 = 0xff;
  __sSqMa(0xff,lVar2);
  *(long *)(unaff_x22 + 0x188) = lVar3;
  uVar7 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  *(undefined8 *)(unaff_x22 + 400) = uVar7;
  lVar4 = 0;
  __ss6ResultOMa(0,lVar3,uVar7,PTR___ss5ErrorWS_11034ee10);
  *(long *)(unaff_x22 + 0x198) = lVar4;
  uVar5 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1a0) = uVar5;
  uVar10 = *(undefined8 *)(lVar11 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x1a8) = uVar10;
  uVar12 = *(undefined8 *)(lVar11 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x1b0) = uVar12;
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar10,uVar12,PTR___ss5ClockTL_110350028,PTR___s7Instants5ClockPTl_11034fb68);
  *(long *)(unaff_x22 + 0x1b8) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x1c0) = lVar4;
  uVar5 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar6 = uVar5 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1c8) = uVar6;
  uVar5 = uVar5 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1d0) = uVar5;
  *(long *)(unaff_x22 + 200) = lVar8;
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar12;
  *(undefined8 *)(unaff_x22 + 0xd8) = uVar9;
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar10;
  uVar7 = 0xff;
  func_0x000104133058();
  *(undefined8 *)(unaff_x22 + 0x1d8) = uVar7;
  lVar4 = 0;
  __sSqMa(0,uVar7);
  *(long *)(unaff_x22 + 0x1e0) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x1e8) = lVar4;
  uVar5 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar6 = uVar5 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1f0) = uVar6;
  uVar5 = uVar5 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1f8) = uVar5;
  *(long *)(unaff_x22 + 0xe8) = lVar8;
  *(undefined8 *)(unaff_x22 + 0xf0) = uVar12;
  *(undefined8 *)(unaff_x22 + 0xf8) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x100) = uVar10;
  uVar7 = 0xff;
  func_0x000104133064();
  *(undefined8 *)(unaff_x22 + 0x200) = uVar7;
  lVar4 = 0;
  __sSqMa(0,uVar7);
  *(long *)(unaff_x22 + 0x208) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x210) = lVar4;
  uVar5 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar6 = uVar5 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x218) = uVar6;
  uVar5 = uVar5 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x220) = uVar5;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x228) = lVar3;
  uVar5 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x230) = uVar5;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x238) = lVar2;
  uVar5 = *(long *)(lVar2 + 0x40) + 0xf;
  uVar6 = uVar5 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x240) = uVar6;
  uVar5 = uVar5 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x248) = uVar5;
  lVar2 = *(long *)(lVar8 + -8);
  *(long *)(unaff_x22 + 0x250) = lVar2;
  uVar5 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 600) = uVar5;
  lVar2 = 0;
  _swift_getAssociatedTypeWitness(0,uVar9,lVar8,puVar1,PTR___s13AsyncIteratorSciTl_11034fb50);
  *(long *)(unaff_x22 + 0x260) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x268) = lVar2;
  uVar5 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x270) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104139d88,0,0);
  return;
}



/* Entry: 104139d88; end: 104139e1f;  */

void FUN_104139d88(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x270);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x178);
  lVar3 = *(long *)(unaff_x22 + 0x168);
  (**(code **)(*(long *)(unaff_x22 + 0x250) + 0x10))
            (*(undefined8 *)(unaff_x22 + 600),*(undefined8 *)(unaff_x22 + 0x160),uVar2);
  __sSci17makeAsyncIterator0bC0QzyFTj(uVar4,uVar2,uVar1);
  *(undefined8 *)(unaff_x22 + 0x278) = *(undefined8 *)(lVar3 + 0x10);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_104139e20;
  _swift_continuation_init(unaff_x22 + 0x10,1);
  FUN_10413ab70();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 104139e20; end: 104139eef;  */

void FUN_104139e20(void)

{
  undefined8 uVar1;
  long *plVar2;
  long *unaff_x22;
  long lVar3;
  long lVar4;
  
  lVar4 = *unaff_x22;
  lVar3 = *unaff_x22;
  if (*(long *)(lVar4 + 0x30) != 0) {
    *(long *)(lVar4 + 0x290) = *(long *)(lVar4 + 0x30);
    _swift_willThrow();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_104139f4c,0,0);
    return;
  }
  uVar1 = *(undefined8 *)(lVar4 + 0x170);
  _swift_getAssociatedConformanceWitness
            (uVar1,*(undefined8 *)(lVar4 + 0x178),*(undefined8 *)(lVar4 + 0x260),
             PTR___sSciTL_11034fea8,PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
  plVar2 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
  _swift_task_alloc();
  *(long **)(lVar4 + 0x280) = plVar2;
  *plVar2 = lVar3;
  plVar2[1] = (long)FUN_104139ef0;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)
            (plVar2,*(undefined8 *)(lVar4 + 0x230),*(undefined8 *)(lVar4 + 0x260),uVar1);
  return;
}



/* Entry: 104139ef0; end: 104139f4b;  */

void FUN_104139ef0(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x288) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x280));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10413a040;
  }
  else {
    pcVar1 = FUN_10413aa7c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 104139f4c; end: 10413a03f;  */

void FUN_104139f4c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x270);
  uVar7 = *(undefined8 *)(unaff_x22 + 600);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x248);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x240);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x230);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x220);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x218);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1a0);
  (**(code **)(*(long *)(unaff_x22 + 0x268) + 8))(uVar6,*(undefined8 *)(unaff_x22 + 0x260));
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010413a03c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10413a040; end: 10413a9ab;  */

void FUN_10413a040(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long unaff_x22;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  
  lVar19 = *(long *)(unaff_x22 + 0x238);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x230);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar8 = uVar7;
  (**(code **)(lVar19 + 0x30))(uVar7,1,uVar11);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x278);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x1b0);
  if ((int)uVar8 != 1) {
    uVar18 = *(undefined8 *)(unaff_x22 + 0x248);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x1f0);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x1f8);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x1e0);
    lVar20 = *(long *)(unaff_x22 + 0x1e8);
    lVar14 = *(long *)(unaff_x22 + 0x1d8);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x170);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x178);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x168);
    (**(code **)(lVar19 + 0x20))(uVar18,uVar7,uVar11);
    *(undefined8 *)(unaff_x22 + 0x90) = uVar23;
    *(undefined8 *)(unaff_x22 + 0x98) = uVar18;
    *(undefined8 *)(unaff_x22 + 0x128) = uVar16;
    *(undefined8 *)(unaff_x22 + 0x130) = uVar9;
    *(undefined8 *)(unaff_x22 + 0x138) = uVar12;
    *(undefined8 *)(unaff_x22 + 0x140) = uVar1;
    uVar1 = 0;
    FUN_10412d284(0,unaff_x22 + 0x128);
    FUN_104146aa0(uVar17,FUN_10413bf78,unaff_x22 + 0x80,uVar5,uVar1,uVar15);
    (**(code **)(lVar20 + 0x10))(uVar8,uVar17,uVar15);
    (**(code **)(*(long *)(lVar14 + -8) + 0x30))(uVar8,1);
    if ((int)uVar8 != 1) {
      plVar13 = *(long **)(unaff_x22 + 0x1f0);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x1d0);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x1b8);
      lVar19 = *(long *)(unaff_x22 + 0x1c0);
      lVar14 = *plVar13;
      uVar9 = 0xff;
      __sSccMa(0xff,uVar1,*(undefined8 *)(unaff_x22 + 400),PTR___ss5ErrorWS_11034ee10);
      uVar8 = 0xff;
      __sSqMa(0xff,uVar9);
      lVar20 = 0;
      _swift_getTupleTypeMetadata2(0,uVar8,uVar1,"clockContinuation deadline ",0);
      (**(code **)(lVar19 + 0x20))(uVar5,(long)plVar13 + (long)*(int *)(lVar20 + 0x30),uVar1);
      if (lVar14 != 0) {
        uVar1 = *(undefined8 *)(unaff_x22 + 0x1c8);
        uVar9 = *(undefined8 *)(unaff_x22 + 0x1b8);
        uVar8 = *(undefined8 *)(unaff_x22 + 400);
        (**(code **)(*(long *)(unaff_x22 + 0x1c0) + 0x10))
                  (uVar1,*(undefined8 *)(unaff_x22 + 0x1d0),uVar9);
        func_0x00010176fed4(uVar1,lVar14,uVar9,uVar8,PTR___ss5ErrorWS_11034ee10);
      }
      (**(code **)(*(long *)(unaff_x22 + 0x1c0) + 8))
                (*(undefined8 *)(unaff_x22 + 0x1d0),*(undefined8 *)(unaff_x22 + 0x1b8));
    }
    uVar9 = *(undefined8 *)(unaff_x22 + 0x248);
    lVar19 = *(long *)(unaff_x22 + 0x238);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x180);
    (**(code **)(*(long *)(unaff_x22 + 0x1e8) + 8))
              (*(undefined8 *)(unaff_x22 + 0x1f8),*(undefined8 *)(unaff_x22 + 0x1e0));
    (**(code **)(lVar19 + 8))(uVar9,uVar1);
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_10413a9ac;
    _swift_continuation_init(unaff_x22 + 0x10,1);
    FUN_10413ab70();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  uVar12 = *(undefined8 *)(unaff_x22 + 0x220);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x218);
  lVar19 = *(long *)(unaff_x22 + 0x210);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x208);
  lVar20 = *(long *)(unaff_x22 + 0x200);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x178);
  (**(code **)(*(long *)(unaff_x22 + 0x228) + 8))(uVar7,*(undefined8 *)(unaff_x22 + 0x188));
  *(undefined8 *)(unaff_x22 + 0x60) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x70) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x78) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x108) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x110) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x118) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x120) = uVar1;
  uVar1 = 0;
  FUN_10412d284(0,unaff_x22 + 0x108);
  FUN_104146aa0(uVar12,FUN_10413bef8,unaff_x22 + 0x50,uVar5,uVar1,uVar17);
  (**(code **)(lVar19 + 0x10))(uVar15,uVar12,uVar17);
  (**(code **)(*(long *)(lVar20 + -8) + 0x30))(uVar15,1,lVar20);
  if ((int)uVar15 == 1) {
    uVar9 = *(undefined8 *)(unaff_x22 + 0x270);
    lVar19 = *(long *)(unaff_x22 + 0x268);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x260);
    (**(code **)(*(long *)(unaff_x22 + 0x210) + 8))
              (*(undefined8 *)(unaff_x22 + 0x220),*(undefined8 *)(unaff_x22 + 0x208));
    pcVar6 = *(code **)(lVar19 + 8);
  }
  else {
    puVar10 = *(undefined8 **)(unaff_x22 + 0x218);
    puVar2 = puVar10;
    _swift_getEnumCaseMultiPayload(puVar10,*(undefined8 *)(unaff_x22 + 0x200));
    uVar1 = *puVar10;
    if ((int)puVar2 == 0) {
      lVar20 = puVar10[1];
      __sScT6cancelyyF(uVar1,PTR___sytN_11034f1b0 + 8,PTR___ss5NeverON_11034ee88,
                       PTR___ss5NeverOs5ErrorsWP_11034ee90);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x270);
      lVar19 = *(long *)(unaff_x22 + 0x268);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x260);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x220);
      lVar14 = *(long *)(unaff_x22 + 0x210);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x208);
      if (lVar20 != 0) {
        lVar21 = *(long *)(unaff_x22 + 400);
        uVar15 = 0;
        __sScEMa();
        uVar11 = uVar15;
        func_0x000100f5abbc();
        _swift_allocError(uVar15,uVar11,0,0);
        __sS2cEycfC(uVar11);
        *(undefined8 *)(unaff_x22 + 0x158) = uVar15;
        lVar22 = lVar21;
        puVar4 = PTR___ss5ErrorWS_11034ee10;
        _swift_allocError(lVar21,PTR___ss5ErrorWS_11034ee10,0,0);
        (**(code **)(*(long *)(lVar21 + -8) + 0x20))(puVar4,unaff_x22 + 0x158,lVar21);
        _swift_continuation_throwingResumeWithError(lVar20,lVar22);
      }
      _swift_release(uVar1);
      (**(code **)(lVar14 + 8))(uVar5,uVar7);
      pcVar6 = *(code **)(lVar19 + 8);
    }
    else if ((int)puVar2 == 1) {
      uVar5 = puVar10[1];
      lVar19 = puVar10[2];
      lVar20 = puVar10[3];
      if (lVar19 != 0) {
        uVar7 = *(undefined8 *)(unaff_x22 + 400);
        uVar8 = 0;
        __sScEMa();
        uVar9 = uVar8;
        func_0x000100f5abbc();
        _swift_allocError(uVar8,uVar9,0,0);
        __sS2cEycfC(uVar9);
        puVar2 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
        _swift_allocError(uVar7,PTR___ss5ErrorWS_11034ee10,0,0);
        *puVar2 = uVar8;
        _swift_continuation_throwingResumeWithError(lVar19,uVar7);
      }
      if (lVar20 != 0) {
        lVar14 = *(long *)(unaff_x22 + 400);
        uVar8 = 0;
        __sScEMa();
        uVar9 = uVar8;
        func_0x000100f5abbc();
        _swift_allocError(uVar8,uVar9,0,0);
        __sS2cEycfC(uVar9);
        *(undefined8 *)(unaff_x22 + 0x150) = uVar8;
        lVar19 = lVar14;
        puVar4 = PTR___ss5ErrorWS_11034ee10;
        _swift_allocError(lVar14,PTR___ss5ErrorWS_11034ee10,0,0);
        (**(code **)(*(long *)(lVar14 + -8) + 0x20))(puVar4,unaff_x22 + 0x150,lVar14);
        _swift_continuation_throwingResumeWithError(lVar20,lVar19);
      }
      uVar9 = *(undefined8 *)(unaff_x22 + 0x270);
      lVar20 = *(long *)(unaff_x22 + 0x268);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x260);
      lVar19 = *(long *)(unaff_x22 + 0x238);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x220);
      lVar14 = *(long *)(unaff_x22 + 0x210);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x208);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x198);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x1a0);
      uVar17 = *(undefined8 *)(unaff_x22 + 0x180);
      __sScT6cancelyyF(uVar5,PTR___sytN_11034f1b0 + 8,PTR___ss5NeverON_11034ee88,
                       PTR___ss5NeverOs5ErrorsWP_11034ee90);
      (**(code **)(lVar19 + 0x38))(uVar11,1,1,uVar17);
      _swift_storeEnumTagMultiPayload(uVar11,uVar7,0);
      func_0x000103969044(uVar11,uVar1,uVar7);
      _swift_release(uVar5);
      (**(code **)(lVar14 + 8))(uVar15,uVar12);
      pcVar6 = *(code **)(lVar20 + 8);
    }
    else {
      uVar7 = *(undefined8 *)(unaff_x22 + 0x240);
      lVar20 = *(long *)(unaff_x22 + 0x238);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x1b8);
      uVar8 = *(undefined8 *)(unaff_x22 + 400);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x198);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x180);
      pcVar3 = (char *)0x60;
      _swift_task_alloc();
      builtin_strncpy(pcVar3,
                      "downstreamContinuation element task upstreamContinuation clockContinuation ",
                      0x4c);
      uVar5 = 0xff;
      __sSccMa(0xff,uVar9,PTR___ss5NeverON_11034ee88,PTR___ss5NeverOs5ErrorsWP_11034ee90);
      *(undefined8 *)(unaff_x22 + 0xa0) = uVar5;
      *(undefined8 *)(unaff_x22 + 0xa8) = uVar11;
      uVar9 = 0x112fad7d0;
      func_0x00010002969c(0x112fad7d0,&UNK_10dc20720);
      *(undefined8 *)(unaff_x22 + 0xb0) = uVar9;
      uVar9 = 0x113063da0;
      func_0x00010002969c(0x113063da0,&UNK_10dcd8908);
      *(undefined8 *)(unaff_x22 + 0xb8) = uVar9;
      uVar9 = 0xff;
      __sSccMa(0xff,uVar15,uVar8,PTR___ss5ErrorWS_11034ee10);
      uVar8 = 0xff;
      __sSqMa(0xff,uVar9);
      *(undefined8 *)(unaff_x22 + 0xc0) = uVar8;
      lVar19 = 0;
      _swift_getTupleTypeMetadata(0,0x10005,unaff_x22 + 0xa0,pcVar3,0);
      _swift_task_dealloc(pcVar3);
      uVar5 = *(undefined8 *)((long)puVar10 + (long)*(int *)(lVar19 + 0x40));
      lVar22 = *(long *)((long)puVar10 + (long)*(int *)(lVar19 + 0x50));
      lVar14 = *(long *)((long)puVar10 + (long)*(int *)(lVar19 + 0x60));
      (**(code **)(lVar20 + 0x20))(uVar7,(long)puVar10 + (long)*(int *)(lVar19 + 0x30),uVar11);
      if (lVar22 != 0) {
        uVar7 = *(undefined8 *)(unaff_x22 + 400);
        uVar8 = 0;
        __sScEMa();
        uVar9 = uVar8;
        func_0x000100f5abbc();
        _swift_allocError(uVar8,uVar9,0,0);
        __sS2cEycfC(uVar9);
        puVar2 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
        _swift_allocError(uVar7,PTR___ss5ErrorWS_11034ee10,0,0);
        *puVar2 = uVar8;
        _swift_continuation_throwingResumeWithError(lVar22,uVar7);
      }
      if (lVar14 != 0) {
        lVar20 = *(long *)(unaff_x22 + 400);
        uVar8 = 0;
        __sScEMa();
        uVar9 = uVar8;
        func_0x000100f5abbc();
        _swift_allocError(uVar8,uVar9,0,0);
        __sS2cEycfC(uVar9);
        *(undefined8 *)(unaff_x22 + 0x148) = uVar8;
        lVar19 = lVar20;
        puVar4 = PTR___ss5ErrorWS_11034ee10;
        _swift_allocError(lVar20,PTR___ss5ErrorWS_11034ee10,0,0);
        (**(code **)(*(long *)(lVar20 + -8) + 0x20))(puVar4,unaff_x22 + 0x148,lVar20);
        _swift_continuation_throwingResumeWithError(lVar14,lVar19);
      }
      uVar9 = *(undefined8 *)(unaff_x22 + 0x270);
      lVar19 = *(long *)(unaff_x22 + 0x268);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x260);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x240);
      lVar20 = *(long *)(unaff_x22 + 0x238);
      uVar17 = *(undefined8 *)(unaff_x22 + 0x220);
      lVar14 = *(long *)(unaff_x22 + 0x210);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x208);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x198);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x1a0);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x180);
      __sScT6cancelyyF(uVar5,PTR___sytN_11034f1b0 + 8,PTR___ss5NeverON_11034ee88,
                       PTR___ss5NeverOs5ErrorsWP_11034ee90);
      (**(code **)(lVar20 + 0x10))(uVar11,uVar12,uVar15);
      (**(code **)(lVar20 + 0x38))(uVar11,0,1,uVar15);
      _swift_storeEnumTagMultiPayload(uVar11,uVar7,0);
      func_0x000103969044(uVar11,uVar1,uVar7);
      _swift_release(uVar5);
      (**(code **)(lVar20 + 8))(uVar12,uVar15);
      (**(code **)(lVar14 + 8))(uVar17,uVar16);
      pcVar6 = *(code **)(lVar19 + 8);
    }
  }
  (*pcVar6)(uVar9,uVar8);
  uVar15 = *(undefined8 *)(unaff_x22 + 600);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x248);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x240);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x230);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x220);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x218);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1a0);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x270));
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010413a9a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10413a9ac; end: 10413aa7b;  */

void FUN_10413a9ac(void)

{
  undefined8 uVar1;
  long *plVar2;
  long *unaff_x22;
  long lVar3;
  long lVar4;
  
  lVar4 = *unaff_x22;
  lVar3 = *unaff_x22;
  if (*(long *)(lVar4 + 0x30) != 0) {
    *(long *)(lVar4 + 0x290) = *(long *)(lVar4 + 0x30);
    _swift_willThrow();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_104139f4c,0,0);
    return;
  }
  uVar1 = *(undefined8 *)(lVar4 + 0x170);
  _swift_getAssociatedConformanceWitness
            (uVar1,*(undefined8 *)(lVar4 + 0x178),*(undefined8 *)(lVar4 + 0x260),
             PTR___sSciTL_11034fea8,PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
  plVar2 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
  _swift_task_alloc();
  *(long **)(lVar4 + 0x280) = plVar2;
  *plVar2 = lVar3;
  plVar2[1] = (long)FUN_104139ef0;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)
            (plVar2,*(undefined8 *)(lVar4 + 0x230),*(undefined8 *)(lVar4 + 0x260),uVar1);
  return;
}



/* Entry: 10413aa7c; end: 10413ab6f;  */

void FUN_10413aa7c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x270);
  uVar7 = *(undefined8 *)(unaff_x22 + 600);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x248);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x240);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x230);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x220);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x218);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1a0);
  (**(code **)(*(long *)(unaff_x22 + 0x268) + 8))(uVar6,*(undefined8 *)(unaff_x22 + 0x260));
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010413ab6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10413ab70; end: 10413ac93;  */

void FUN_10413ab70(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  ulong uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lVar7 = *param_2;
  lVar8 = param_2[2];
  uVar1 = *(ulong *)(lVar7 + 0x50);
  uVar9 = *(ulong *)(lVar7 + 0x58);
  uVar5 = *(undefined8 *)(lVar7 + 0x60);
  uVar2 = *(undefined8 *)(lVar7 + 0x68);
  uVar3 = 0;
  uStack_a8 = uVar1;
  uStack_a0 = uVar9;
  uStack_98 = uVar5;
  uStack_90 = uVar2;
  uStack_70 = uVar1;
  uStack_68 = uVar9;
  uStack_60 = uVar5;
  uStack_58 = uVar2;
  uStack_50 = param_1;
  FUN_10412d284(0,&uStack_a8);
  uVar4 = 0xff;
  uStack_a8 = uVar1;
  uStack_a0 = uVar9;
  uStack_98 = uVar5;
  uStack_90 = uVar2;
  func_0x000104133aac(0xff,&uStack_a8);
  uVar5 = 0;
  __sSqMa(0,uVar4);
  FUN_104146aa0(&uStack_a8,FUN_10413bf90,auStack_80,lVar8,uVar3,uVar5);
  uVar9 = uStack_a0;
  uVar1 = uStack_a8;
  if ((((uStack_a8 ^ 0xffffffffffffffff) & 0xf00000000000000f) != 0) ||
     ((uStack_a0 & 0xf000000000000007) != 0xf000000000000007)) {
    if ((long)uStack_a0 < 0) {
      uVar9 = uStack_a0 & 0x7fffffffffffffff;
      uVar5 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      puVar6 = (ulong *)PTR___ss5ErrorWS_11034ee10;
      _swift_allocError();
      *puVar6 = uVar9;
      _swift_continuation_throwingResumeWithError(uVar1,uVar5);
    }
    else {
      _swift_continuation_throwingResume(uStack_a8);
      FUN_10413bffc(uVar1,uVar9);
    }
  }
  return;
}


