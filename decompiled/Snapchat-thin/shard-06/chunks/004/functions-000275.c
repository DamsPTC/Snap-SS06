/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104876b8c; end: 104876c5f;  */

void FUN_104876b8c(undefined8 *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  
  lVar2 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar3 = *(ulong *)(lVar2 + 0x40);
  if (uVar3 < 0x11) {
    uVar3 = 0x10;
  }
  bVar1 = *(byte *)((long)param_2 + uVar3);
  uVar4 = (uint)bVar1;
  if (1 < bVar1) {
    uVar6 = (uint)uVar3;
    uVar5 = 4;
    if (uVar6 < 4) {
      uVar5 = uVar6;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_104876c24;
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
    uVar4 = uVar5 | bVar1 - 2 << (ulong)((uVar6 & 3) << 3);
    if (3 < uVar6) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 2;
  }
LAB_104876c24:
  if (uVar4 != 1) {
    uVar7 = *(undefined8 *)param_2;
    param_1[1] = *(undefined8 *)(param_2 + 2);
    *param_1 = uVar7;
  }
  else {
    (**(code **)(lVar2 + 0x20))();
  }
  *(bool *)((long)param_1 + uVar3) = uVar4 == 1;
  return;
}



/* Entry: 104876c60; end: 104876df3;  */

uint * FUN_104876c60(uint *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar5 = *(long *)(param_3 + 0x10);
  lVar7 = *(long *)(lVar5 + -8);
  uVar2 = *(ulong *)(lVar7 + 0x40);
  if (uVar2 < 0x11) {
    uVar2 = 0x10;
  }
  bVar1 = *(byte *)((long)param_1 + uVar2);
  uVar3 = (uint)bVar1;
  uVar6 = (uint)uVar2;
  if (1 < bVar1) {
    uVar4 = 4;
    if (uVar6 < 4) {
      uVar4 = uVar6;
    }
    if ((int)uVar4 < 2) {
      if (uVar4 == 0) goto LAB_104876d10;
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
    uVar3 = uVar4 | bVar1 - 2 << (ulong)((uVar6 & 3) << 3);
    if (3 < uVar6) {
      uVar3 = uVar4;
    }
    uVar3 = uVar3 + 2;
  }
LAB_104876d10:
  if (uVar3 == 1) {
    (**(code **)(lVar7 + 8))(param_1,lVar5);
  }
  else {
    _swift_release(*(undefined8 *)(param_1 + 2));
  }
  bVar1 = *(byte *)((long)param_2 + uVar2);
  uVar3 = (uint)bVar1;
  if (1 < bVar1) {
    uVar4 = 4;
    if (uVar6 < 4) {
      uVar4 = uVar6;
    }
    if ((int)uVar4 < 2) {
      if (uVar4 == 0) goto LAB_104876da8;
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
    uVar3 = uVar4 | bVar1 - 2 << (ulong)((uVar6 & 3) << 3);
    if (3 < uVar6) {
      uVar3 = uVar4;
    }
    uVar3 = uVar3 + 2;
  }
LAB_104876da8:
  if (uVar3 != 1) {
    uVar8 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)param_1 = uVar8;
  }
  else {
    (**(code **)(lVar7 + 0x20))(param_1,param_2,lVar5);
  }
  *(bool *)((long)param_1 + uVar2) = uVar3 == 1;
  return param_1;
}



/* Entry: 104876df4; end: 104876ef7;  */

int FUN_104876df4(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  
  uVar5 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40);
  if (uVar5 < 0x11) {
    uVar5 = 0x10;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 0xff) goto LAB_104876e9c;
  uVar6 = uVar5 + 1;
  uVar4 = (uint)uVar6;
  uVar3 = uVar4 << 3;
  if (uVar4 < 4) {
    uVar7 = ((param_2 + ~(-1 << (ulong)(uVar3 & 0x1f))) - 0xfe >> (ulong)(uVar3 & 0x1f)) + 1;
    if (uVar7 < 0x100) {
      if (uVar7 < 2) goto LAB_104876e9c;
      goto LAB_104876e28;
    }
    if (uVar7 >> 0x10 == 0) {
      uVar7 = (uint)*(ushort *)((long)param_1 + uVar6);
    }
    else {
      uVar7 = *(uint *)((long)param_1 + uVar6);
    }
  }
  else {
LAB_104876e28:
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
    return ((uint)uVar6 | uVar1) + 0xff;
  }
LAB_104876e9c:
  iVar2 = 0;
  if (1 < *(byte *)((long)param_1 + uVar5)) {
    iVar2 = (*(byte *)((long)param_1 + uVar5) ^ 0xff) + 1;
  }
  return iVar2;
}



/* Entry: 104876ef8; end: 10487709b;  */

void FUN_104876ef8(uint *param_1,uint param_2,uint param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  undefined2 uVar3;
  ulong uVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  
  uVar4 = *(ulong *)(*(long *)(*(long *)(param_4 + 0x10) + -8) + 0x40);
  if (uVar4 < 0x11) {
    uVar4 = 0x10;
  }
  lVar1 = uVar4 + 1;
  uVar5 = (uint)lVar1;
  if (param_3 < 0xff) {
    bVar6 = 0;
  }
  else if (uVar5 < 4) {
    uVar2 = ((param_3 + ~(-1 << (ulong)(uVar5 << 3 & 0x1f))) - 0xfe >> (ulong)(uVar5 << 3 & 0x1f)) +
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
  if (param_2 < 0xff) {
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
    param_2 = param_2 - 0xff;
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



/* Entry: 10487709c; end: 104877133;  */

uint FUN_10487709c(uint *param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar4 = *(ulong *)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 0x40);
  if (uVar4 < 0x11) {
    uVar4 = 0x10;
  }
  bVar1 = *(byte *)((long)param_1 + uVar4);
  uVar2 = (uint)bVar1;
  if (1 < bVar1) {
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
    uVar2 = uVar3 | bVar1 - 2 << (ulong)((uVar5 & 3) << 3);
    if (3 < uVar5) {
      uVar2 = uVar3;
    }
    uVar2 = uVar2 + 2;
  }
  return uVar2;
}



/* Entry: 104877134; end: 1048771fb;  */

void FUN_104877134(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  undefined2 uVar2;
  ulong uVar3;
  uint uVar4;
  
  uVar3 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40);
  if (uVar3 < 0x11) {
    uVar3 = 0x10;
  }
  if (param_2 < 2) {
    *(char *)((long)param_1 + uVar3) = (char)param_2;
  }
  else {
    param_2 = param_2 - 2;
    uVar4 = (uint)uVar3;
    if (uVar4 < 4) {
      *(char *)((long)param_1 + uVar3) = (char)(param_2 >> (ulong)(uVar4 << 3 & 0x1f)) + '\x02';
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
      *(undefined1 *)((long)param_1 + uVar3) = 2;
      _bzero(param_1,uVar3);
      *param_1 = param_2;
    }
  }
  return;
}



/* Entry: 1048771fc; end: 10487720f;  */

void FUN_1048771fc(void)

{
  undefined8 uVar1;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  long lStack_60;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(**(long **)(unaff_x20 + 0x10) + 0x50);
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  puVar3 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = (long)puVar3 - extraout_x12;
  lStack_60 = lVar2;
  func_0x000100075034(lVar4,&UNK_1000ca6b0,auStack_70,lVar2);
  (**(code **)(lVar5 + 0x10))(puVar3,lVar4,lVar2);
  func_0x000103969044(puVar3,uVar1,lVar2);
  (**(code **)(lVar5 + 8))(lVar4,lVar2);
  return;
}



/* Entry: 104877210; end: 10487729f;  */

undefined * FUN_104877210(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long *unaff_x20;
  long lVar4;
  
  lVar4 = *unaff_x20;
  puVar1 = &UNK_1107a7100;
  _swift_allocObject(&UNK_1107a7100,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = *(undefined8 *)(*(long *)(lVar4 + 0x50) + 0x10);
  uVar2 = 0x112d38358;
  func_0x0001000285a8(0x112d38358,&UNK_10d902090);
  pcVar3 = FUN_1048772a0;
  func_0x0001000bfde0(FUN_1048772a0,puVar1,uVar2);
  _swift_release(puVar1);
  func_0x0001004575f0();
  _swift_release(pcVar3);
  return puVar1;
}



/* Entry: 1048772a0; end: 1048772f7;  */

void FUN_1048772a0(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae750;
  if (*param_2 == 0) {
    _objc_opt_self();
    func_0x00010c0db140();
  }
  else {
    _objc_opt_self();
    func_0x00010c2468a0();
  }
  _objc_retainAutoreleasedReturnValue();
  *param_1 = puVar1;
  return;
}



/* Entry: 1048772f8; end: 1048772ff;  */

void FUN_1048772f8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_complete_1125ae760)
  ;
  return;
}



/* Entry: 104877300; end: 10487739f;  */

void FUN_104877300(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_58,0,0);
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if (lVar3 != 0) {
    lVar4 = *(long *)(unaff_x20 + 0x18);
    lVar1 = lVar3;
    _swift_getObjectType(lVar3);
    pcVar5 = *(code **)(lVar4 + 8);
    _swift_unknownObjectRetain(lVar3);
    (*pcVar5)(lVar1,lVar4);
    _swift_unknownObjectRelease(lVar3);
  }
  _swift_beginAccess(unaff_x20 + 0x10,auStack_70,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  _swift_unknownObjectRelease(uVar2);
  return;
}



/* Entry: 1048773a0; end: 1048773a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048773a0(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + _DAT_113096918);
  uVar2 = ((undefined8 *)(unaff_x20 + _DAT_113096918))[1];
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 1048773a8; end: 10487741f;  */

void FUN_1048773a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  *(undefined8 *)(unaff_x20 + 0x38) = param_7;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined1 *)(unaff_x20 + 0x28) = param_4;
  *(undefined1 *)(unaff_x20 + 0x29) = param_5;
  func_0x0001000c0ea8(param_1);
  return;
}



/* Entry: 104877420; end: 1048776ff;  */

void FUN_104877420(undefined8 param_1,long param_2,undefined8 param_3)

{
  byte bVar1;
  byte bVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x13;
  long *unaff_x20;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  long alStack_e0 [2];
  undefined1 auStack_d0 [8];
  long lStack_c8;
  long lStack_c0;
  undefined1 *puStack_b8;
  long lStack_b0;
  uint uStack_a8;
  uint uStack_a4;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_80 = *unaff_x20;
  lStack_68 = *(long *)(param_2 + -8);
  lStack_88 = *(long *)(lStack_68 + 0x40);
  lStack_b0 = param_2;
  uStack_90 = param_1;
  uStack_70 = param_3;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar15 = *(undefined8 *)(extraout_x12 + 0xa8);
  lVar4 = 0;
  puStack_b8 = auStack_d0 + -(extraout_x13 + 0xfU & 0xfffffffffffffff0);
  __sScS12ContinuationV15BufferingPolicyOMa(0,uVar15);
  lVar14 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = (long)(auStack_d0 + -(extraout_x13 + 0xfU & 0xfffffffffffffff0)) - extraout_x8;
  lVar5 = 0;
  __sScSMa(0,uVar15);
  lVar10 = *(long *)(lVar5 + -8);
  lVar8 = *(long *)(lVar10 + 0x40);
  lStack_c0 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = lVar12 - (lVar8 + 0xfU & 0xfffffffffffffff0);
  lStack_c8 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar5 - extraout_x12_00;
  FUN_104877dbc(lVar12,uVar15);
  lStack_78 = lVar11;
  func_0x0001000d52ec(lVar11,lVar12);
  (**(code **)(lVar14 + 8))(lVar12,lVar4);
  lVar4 = lStack_c0;
  lStack_98 = unaff_x20[3];
  lStack_a0 = unaff_x20[4];
  uStack_a8 = (uint)*(byte *)(unaff_x20 + 5);
  uStack_a4 = (uint)*(byte *)((long)unaff_x20 + 0x29);
  (**(code **)(lVar10 + 0x10))(lVar5,lVar11,lStack_c0);
  lVar12 = lStack_68;
  lVar5 = lStack_b0;
  puVar3 = puStack_b8;
  (**(code **)(lStack_68 + 0x10))(puStack_b8,uStack_90,lStack_b0);
  bVar1 = *(byte *)(lVar10 + 0x50);
  uVar13 = (ulong)bVar1 + 0x30 & ((ulong)bVar1 ^ 0xffffffffffffffff);
  uVar9 = lVar8 + uVar13 + 7 & 0xfffffffffffffff8;
  bVar2 = *(byte *)(lVar12 + 0x50);
  uVar16 = bVar2 + uVar9 + 8 & ((ulong)bVar2 ^ 0xffffffffffffffff);
  puVar6 = &UNK_1107a7378;
  _swift_allocObject(&UNK_1107a7378,uVar16 + lStack_88,bVar1 | bVar2 | 7);
  *(undefined8 *)(puVar6 + 0x10) = uVar15;
  *(undefined8 *)(puVar6 + 0x18) = *(undefined8 *)(lStack_80 + 0xb0);
  *(long *)(puVar6 + 0x20) = lVar5;
  *(undefined8 *)(puVar6 + 0x28) = uStack_70;
  (**(code **)(lVar10 + 0x20))(puVar6 + uVar13,lStack_c8,lVar4);
  *(long **)(puVar6 + uVar9) = unaff_x20;
  (**(code **)(lStack_68 + 0x20))(puVar6 + uVar16,puVar3,lVar5);
  puVar7 = &UNK_1107a73a0;
  _swift_allocObject(&UNK_1107a73a0,0x20,7);
  *(undefined **)(puVar7 + 0x10) = &UNK_10dd3a8b0;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  _swift_retain();
  _swift_retain(puVar6);
  *(undefined **)(lVar11 + -0x10) = PTR___sytN_11034f1b0 + 8;
  lVar5 = lStack_98;
  func_0x0001001ca524(lStack_98,lStack_a0,uStack_a8,uStack_a4,0,0,&UNK_10dd3a8b8,puVar7);
  _swift_release(puVar6);
  _swift_release(puVar7);
  (**(code **)(lVar10 + 8))(lStack_78,lVar4);
  lVar4 = 0x113093c08;
  func_0x0001000285a8(0x113093c08,&UNK_10dd3a8c0);
  _swift_allocObject();
  *(long *)(lVar4 + 0x10) = lVar5;
  return;
}



/* Entry: 104877700; end: 104877807;  */

void FUN_104877700(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = param_5;
  *(long **)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  lVar3 = *param_2;
  lVar4 = *(long *)(lVar3 + 0xb0);
  *(long *)(unaff_x22 + 0x38) = lVar4;
  lVar1 = 0;
  __sSqMa(0,lVar4);
  *(long *)(unaff_x22 + 0x40) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x48) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x50) = uVar2;
  lVar1 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x58) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar2;
  lVar3 = *(long *)(lVar3 + 0xa8);
  *(long *)(unaff_x22 + 0x68) = lVar3;
  lVar1 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x70) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x78) = uVar2;
  lVar1 = 0;
  __sSqMa(0,lVar3);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x80) = uVar2;
  lVar1 = 0;
  __sScS8IteratorVMa(0,lVar3);
  *(long *)(unaff_x22 + 0x88) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x90) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x98) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104877808,0,0);
  return;
}



/* Entry: 104877808; end: 10487788f;  */

void FUN_104877808(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
  lVar1 = *(long *)(unaff_x22 + 0x18);
  __sScSMa(0,*(undefined8 *)(unaff_x22 + 0x68));
  __sScS17makeAsyncIteratorScS0C0Vyx_GyF(uVar3);
  *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(lVar1 + 0x30);
  *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(lVar1 + 0x38);
  plVar2 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xb0) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_104877890;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar2,*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x88));
  return;
}



/* Entry: 104877890; end: 1048778d7;  */

void FUN_104877890(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0xb0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1048778d8,0,0);
  return;
}



/* Entry: 1048778d8; end: 104877a13;  */

void FUN_1048778d8(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  lVar3 = *(long *)(unaff_x22 + 0x70);
  uVar4 = uVar6;
  (**(code **)(lVar3 + 0x30))(uVar6,1,uVar2);
  if ((int)uVar4 == 1) {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar3 = *(long *)(unaff_x22 + 0x30);
    (**(code **)(*(long *)(unaff_x22 + 0x90) + 8))(uVar4,*(undefined8 *)(unaff_x22 + 0x88));
    (**(code **)(lVar3 + 0x20))(uVar2,lVar3);
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar6);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar9);
    _swift_task_dealloc(uVar10);
                    /* WARNING: Could not recover jumptable at 0x0001048779a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  piVar8 = *(int **)(unaff_x22 + 0xa0);
  (**(code **)(lVar3 + 0x20))(*(undefined8 *)(unaff_x22 + 0x78),uVar6,uVar2);
  iVar1 = *piVar8;
  plVar5 = (long *)(ulong)(uint)piVar8[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xb8) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_104877a14;
                    /* WARNING: Could not recover jumptable at 0x000104877a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar8))
            (plVar5,*(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x78));
  return;
}



/* Entry: 104877a14; end: 104877a5b;  */

void FUN_104877a14(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0xb8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104877a5c,0,0);
  return;
}



/* Entry: 104877a5c; end: 104877b77;  */

void FUN_104877a5c(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  code *pcVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar3 = *(long *)(unaff_x22 + 0x58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar5 = uVar1;
  (**(code **)(lVar3 + 0x30))(uVar1,1,uVar9);
  lVar2 = *(long *)(unaff_x22 + 0x70);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x68);
  if ((int)uVar5 == 1) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x40);
    lVar3 = *(long *)(unaff_x22 + 0x48);
    (**(code **)(lVar2 + 8))(uVar6,uVar10);
    pcVar8 = *(code **)(lVar3 + 8);
    uVar6 = uVar1;
    uVar10 = uVar5;
  }
  else {
    uVar11 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar4 = *(long *)(unaff_x22 + 0x30);
    (**(code **)(lVar3 + 0x20))(uVar11,uVar1,uVar9);
    (**(code **)(lVar4 + 0x18))(uVar11,uVar5,lVar4);
    (**(code **)(lVar3 + 8))(uVar11,uVar9);
    pcVar8 = *(code **)(lVar2 + 8);
  }
  (*pcVar8)(uVar6,uVar10);
  plVar7 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xb0) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_104877890;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar7,*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x88));
  return;
}



/* Entry: 104877b78; end: 104877b97;  */

void FUN_104877b78(void)

{
  long unaff_x20;
  
  func_0x00010007d980(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined1 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x38));
  return;
}



/* Entry: 104877b98; end: 104877bd3;  */

long FUN_104877b98(long param_1)

{
  func_0x0001000d2374();
  func_0x00010007d980(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                      *(undefined1 *)(param_1 + 0x28));
  _swift_release(*(undefined8 *)(param_1 + 0x38));
  return param_1;
}



/* Entry: 104877bd4; end: 104877bef;  */

void FUN_104877bd4(undefined8 param_1)

{
  FUN_104877b98();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)(param_1,0x40,7);
  return;
}



/* Entry: 104877bf0; end: 104877bff;  */

void FUN_104877bf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e81fe70);
  return;
}



/* Entry: 104877c00; end: 104877c57;  */

void FUN_104877c00(long param_1)

{
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_28 = &UNK_10dd3a850;
  puStack_20 = &UNK_10dd3a868;
  puStack_18 = PTR___syycWV_11034f1c0 + 0x40;
  _swift_initClassMetadata2(param_1,0,3,&puStack_28,param_1 + 0xb8);
  return;
}



/* Entry: 104877c58; end: 104877d0b;  */

void FUN_104877c58(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x20;
  long unaff_x22;
  long *plVar7;
  ulong uVar8;
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar6 = *(long *)(unaff_x20 + 0x28);
  lVar2 = 0;
  __sScSMa(0,*(undefined8 *)(unaff_x20 + 0x10));
  uVar4 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  uVar8 = uVar4 + 0x30 & (uVar4 ^ 0xffffffffffffffff);
  uVar4 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + uVar8 + 7 & 0xfffffffffffffff8;
  uVar5 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  plVar7 = *(long **)(unaff_x20 + uVar4);
  plVar3 = (long *)0xc0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_104877d0c;
  plVar3[5] = lVar1;
  plVar3[6] = lVar6;
  plVar3[3] = (long)plVar7;
  plVar3[4] = unaff_x20 + (uVar5 + uVar4 + 8 & (uVar5 ^ 0xffffffffffffffff));
  plVar3[2] = unaff_x20 + uVar8;
  lVar6 = *plVar7;
  lVar2 = *(long *)(lVar6 + 0xb0);
  plVar3[7] = lVar2;
  lVar1 = 0;
  __sSqMa(0,lVar2);
  plVar3[8] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar3[9] = lVar1;
  uVar4 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar3[10] = uVar4;
  lVar1 = *(long *)(lVar2 + -8);
  plVar3[0xb] = lVar1;
  uVar4 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar3[0xc] = uVar4;
  lVar6 = *(long *)(lVar6 + 0xa8);
  plVar3[0xd] = lVar6;
  lVar1 = *(long *)(lVar6 + -8);
  plVar3[0xe] = lVar1;
  uVar4 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar3[0xf] = uVar4;
  lVar1 = 0;
  __sSqMa(0,lVar6);
  uVar4 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar3[0x10] = uVar4;
  lVar1 = 0;
  __sScS8IteratorVMa(0,lVar6);
  plVar3[0x11] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar3[0x12] = lVar1;
  uVar4 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar3[0x13] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104877808,0,0);
  return;
}



/* Entry: 104877d0c; end: 104877d47;  */

void FUN_104877d0c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000104877d44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 104877d48; end: 104877db7;  */

void FUN_104877d48(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_104877db8;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 104877db8; end: 104877dbb;  */

void FUN_104877db8(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000104877d44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 104877dbc; end: 104877e03;  */

void FUN_104877dbc(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  uVar1 = *(undefined4 *)
           PTR___sScS12ContinuationV15BufferingPolicyO9unboundedyADyx__GAFmlFWC_11034fd20;
  lVar2 = 0;
  __sScS12ContinuationV15BufferingPolicyOMa(0,param_2);
                    /* WARNING: Could not recover jumptable at 0x000104877e00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x68))(param_1,uVar1,lVar2);
  return;
}



/* Entry: 104877e04; end: 104877e7b;  */

void FUN_104877e04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  *(undefined8 *)(unaff_x20 + 0x38) = param_7;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined1 *)(unaff_x20 + 0x28) = param_4;
  *(undefined1 *)(unaff_x20 + 0x29) = param_5;
  func_0x0001000c0ea8(param_1);
  return;
}



/* Entry: 104877e7c; end: 10487816b;  */

void FUN_104877e7c(undefined8 param_1,long param_2,undefined8 param_3)

{
  byte bVar1;
  byte bVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x13;
  long *unaff_x20;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long alStack_e0 [2];
  undefined1 auStack_d0 [8];
  long lStack_c8;
  long lStack_c0;
  undefined1 *puStack_b8;
  undefined8 uStack_b0;
  uint uStack_a8;
  uint uStack_a4;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  lStack_70 = *unaff_x20;
  lVar11 = *(long *)(param_2 + -8);
  lStack_78 = *(long *)(lVar11 + 0x40);
  lStack_90 = param_2;
  uStack_88 = param_1;
  uStack_68 = param_3;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar8 = *(undefined8 *)(extraout_x12 + 0xa8);
  lVar4 = 0;
  puStack_b8 = auStack_d0 + -(extraout_x13 + 0xfU & 0xfffffffffffffff0);
  uStack_b0 = uVar8;
  __sScS12ContinuationV15BufferingPolicyOMa(0,uVar8);
  lVar15 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)(auStack_d0 + -(extraout_x13 + 0xfU & 0xfffffffffffffff0)) - extraout_x8;
  lVar5 = 0;
  __sScSMa(0,uVar8);
  lVar16 = *(long *)(lVar5 + -8);
  lVar17 = *(long *)(lVar16 + 0x40);
  lStack_c0 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar9 - (lVar17 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar12 - extraout_x12_00;
  (**(code **)(lVar15 + 0x68))
            (lVar9,*(undefined4 *)
                    PTR___sScS12ContinuationV15BufferingPolicyO9unboundedyADyx__GAFmlFWC_11034fd20,
             lVar4);
  lStack_80 = lVar13;
  func_0x0001000d52ec(lVar13,lVar9);
  (**(code **)(lVar15 + 8))(lVar9,lVar4);
  lVar4 = lStack_c0;
  lStack_98 = unaff_x20[3];
  lStack_a0 = unaff_x20[4];
  uStack_a8 = (uint)*(byte *)(unaff_x20 + 5);
  uStack_a4 = (uint)*(byte *)((long)unaff_x20 + 0x29);
  (**(code **)(lVar16 + 0x10))(lVar12,lVar13,lStack_c0);
  lVar5 = lStack_90;
  puVar3 = puStack_b8;
  lStack_c8 = lVar11;
  (**(code **)(lVar11 + 0x10))(puStack_b8,uStack_88,lStack_90);
  bVar1 = *(byte *)(lVar16 + 0x50);
  uVar10 = (ulong)bVar1 + 0x30 & ((ulong)bVar1 ^ 0xffffffffffffffff);
  uVar14 = lVar17 + uVar10 + 7 & 0xfffffffffffffff8;
  bVar2 = *(byte *)(lVar11 + 0x50);
  uVar18 = bVar2 + uVar14 + 8 & ((ulong)bVar2 ^ 0xffffffffffffffff);
  puVar6 = &UNK_1107a74a0;
  _swift_allocObject(&UNK_1107a74a0,uVar18 + lStack_78,bVar1 | bVar2 | 7);
  *(undefined8 *)(puVar6 + 0x10) = uStack_b0;
  *(undefined8 *)(puVar6 + 0x18) = *(undefined8 *)(lStack_70 + 0xb0);
  *(long *)(puVar6 + 0x20) = lVar5;
  *(undefined8 *)(puVar6 + 0x28) = uStack_68;
  (**(code **)(lVar16 + 0x20))(puVar6 + uVar10,lVar12,lVar4);
  *(long **)(puVar6 + uVar14) = unaff_x20;
  (**(code **)(lStack_c8 + 0x20))(puVar6 + uVar18,puVar3,lVar5);
  puVar7 = &UNK_1107a74c8;
  _swift_allocObject(&UNK_1107a74c8,0x20,7);
  *(undefined **)(puVar7 + 0x10) = &UNK_10dd3a968;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  _swift_retain();
  _swift_retain(puVar6);
  *(undefined **)(lVar13 + -0x10) = PTR___sytN_11034f1b0 + 8;
  lVar5 = lStack_98;
  func_0x0001001ca524(lStack_98,lStack_a0,uStack_a8,uStack_a4,0,0,&UNK_10dd3a970,puVar7);
  _swift_release(puVar6);
  _swift_release(puVar7);
  (**(code **)(lVar16 + 8))(lStack_80,lVar4);
  lVar4 = 0x113093c08;
  func_0x0001000285a8(0x113093c08,&UNK_10dd3a8c0);
  _swift_allocObject();
  *(long *)(lVar4 + 0x10) = lVar5;
  return;
}



/* Entry: 10487816c; end: 104878247;  */

void FUN_10487816c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = param_5;
  *(long **)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  lVar3 = *param_2;
  lVar2 = *(long *)(lVar3 + 0xb0);
  *(long *)(unaff_x22 + 0x38) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x40) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x48) = uVar1;
  lVar3 = *(long *)(lVar3 + 0xa8);
  *(long *)(unaff_x22 + 0x50) = lVar3;
  lVar2 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x58) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar1;
  lVar2 = 0;
  __sSqMa(0,lVar3);
  uVar1 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar1;
  lVar2 = 0;
  __sScS8IteratorVMa(0,lVar3);
  *(long *)(unaff_x22 + 0x70) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x78) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x80) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104878248,0,0);
  return;
}



/* Entry: 104878248; end: 1048782cf;  */

void FUN_104878248(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x80);
  lVar1 = *(long *)(unaff_x22 + 0x18);
  __sScSMa(0,*(undefined8 *)(unaff_x22 + 0x50));
  __sScS17makeAsyncIteratorScS0C0Vyx_GyF(uVar3);
  *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(lVar1 + 0x30);
  *(undefined8 *)(unaff_x22 + 0x90) = *(undefined8 *)(lVar1 + 0x38);
  plVar2 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x98) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1048782d0;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar2,*(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x70));
  return;
}



/* Entry: 1048782d0; end: 104878317;  */

void FUN_1048782d0(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104878318,0,0);
  return;
}



/* Entry: 104878318; end: 10487843f;  */

void FUN_104878318(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  int *piVar8;
  undefined8 uVar9;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar3 = *(long *)(unaff_x22 + 0x58);
  uVar4 = uVar6;
  (**(code **)(lVar3 + 0x30))(uVar6,1,uVar2);
  if ((int)uVar4 == 1) {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar3 = *(long *)(unaff_x22 + 0x30);
    (**(code **)(*(long *)(unaff_x22 + 0x78) + 8))(uVar4,*(undefined8 *)(unaff_x22 + 0x70));
    (**(code **)(lVar3 + 0x20))(uVar2,lVar3);
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar6);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar9);
                    /* WARNING: Could not recover jumptable at 0x0001048783cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  piVar8 = *(int **)(unaff_x22 + 0x88);
  (**(code **)(lVar3 + 0x20))(*(undefined8 *)(unaff_x22 + 0x60),uVar6,uVar2);
  iVar1 = *piVar8;
  plVar5 = (long *)(ulong)(uint)piVar8[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa0) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_104878440;
                    /* WARNING: Could not recover jumptable at 0x00010487843c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar8))
            (plVar5,*(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)(unaff_x22 + 0x60));
  return;
}



/* Entry: 104878440; end: 104878487;  */

void FUN_104878440(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0xa0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104878488,0,0);
  return;
}



/* Entry: 104878488; end: 104878533;  */

void FUN_104878488(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x58);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
  lVar6 = *(long *)(unaff_x22 + 0x40);
  (**(code **)(*(long *)(unaff_x22 + 0x30) + 0x18))(uVar2,*(undefined8 *)(unaff_x22 + 0x28));
  (**(code **)(lVar6 + 8))(uVar2,uVar3);
  (**(code **)(lVar1 + 8))(uVar4,uVar5);
  plVar7 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x98) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_1048782d0;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar7,*(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x70));
  return;
}



/* Entry: 104878534; end: 104878553;  */

void FUN_104878534(void)

{
  long unaff_x20;
  
  func_0x00010007d980(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined1 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x38));
  return;
}



/* Entry: 104878554; end: 10487858f;  */

long FUN_104878554(long param_1)

{
  func_0x0001000d2374();
  func_0x00010007d980(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                      *(undefined1 *)(param_1 + 0x28));
  _swift_release(*(undefined8 *)(param_1 + 0x38));
  return param_1;
}



/* Entry: 104878590; end: 1048785ab;  */

void FUN_104878590(undefined8 param_1)

{
  FUN_104878554();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)(param_1,0x40,7);
  return;
}



/* Entry: 1048785ac; end: 10487865f;  */

long * FUN_1048785ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = 0;
  FUN_104878660(0,*(undefined8 *)(*unaff_x20 + 0x50),param_7);
  _swift_allocObject();
  *(undefined8 *)(lVar1 + 0x30) = param_5;
  *(undefined8 *)(lVar1 + 0x38) = param_6;
  *(undefined8 *)(lVar1 + 0x18) = param_1;
  *(undefined8 *)(lVar1 + 0x20) = param_2;
  *(char *)(lVar1 + 0x28) = (char)param_3;
  *(undefined1 *)(lVar1 + 0x29) = param_4;
  func_0x0001000c0ea8(lVar1);
  _swift_retain();
  func_0x0001000ab9d4(param_1,param_2,param_3);
  _swift_retain(param_6);
  return unaff_x20;
}



/* Entry: 104878660; end: 10487866f;  */

void FUN_104878660(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e81fedc);
  return;
}



/* Entry: 104878670; end: 1048786c7;  */

void FUN_104878670(long param_1)

{
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_28 = &UNK_10dd3a908;
  puStack_20 = &UNK_10dd3a920;
  puStack_18 = PTR___syycWV_11034f1c0 + 0x40;
  _swift_initClassMetadata2(param_1,0,3,&puStack_28,param_1 + 0xb8);
  return;
}



/* Entry: 1048786c8; end: 10487877b;  */

void FUN_1048786c8(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x20;
  long unaff_x22;
  long *plVar7;
  ulong uVar8;
  
  lVar3 = *(long *)(unaff_x20 + 0x20);
  lVar6 = *(long *)(unaff_x20 + 0x28);
  lVar1 = 0;
  __sScSMa(0,*(undefined8 *)(unaff_x20 + 0x10));
  uVar4 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  uVar8 = uVar4 + 0x30 & (uVar4 ^ 0xffffffffffffffff);
  uVar4 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + uVar8 + 7 & 0xfffffffffffffff8;
  uVar5 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  plVar7 = *(long **)(unaff_x20 + uVar4);
  plVar2 = (long *)0xb0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_10487877c;
  plVar2[5] = lVar3;
  plVar2[6] = lVar6;
  plVar2[3] = (long)plVar7;
  plVar2[4] = unaff_x20 + (uVar5 + uVar4 + 8 & (uVar5 ^ 0xffffffffffffffff));
  plVar2[2] = unaff_x20 + uVar8;
  lVar6 = *plVar7;
  lVar3 = *(long *)(lVar6 + 0xb0);
  plVar2[7] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[8] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar2[9] = uVar4;
  lVar6 = *(long *)(lVar6 + 0xa8);
  plVar2[10] = lVar6;
  lVar3 = *(long *)(lVar6 + -8);
  plVar2[0xb] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar2[0xc] = uVar4;
  lVar3 = 0;
  __sSqMa(0,lVar6);
  uVar4 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar2[0xd] = uVar4;
  lVar3 = 0;
  __sScS8IteratorVMa(0,lVar6);
  plVar2[0xe] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[0xf] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar2[0x10] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104878248,0,0);
  return;
}



/* Entry: 10487877c; end: 1048787b7;  */

void FUN_10487877c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001048787b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1048787b8; end: 104878827;  */

void FUN_1048787b8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_104878828;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 104878828; end: 10487882b;  */

void FUN_104878828(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001048787b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10487882c; end: 104878863;  */

void FUN_10487882c(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  func_0x000100087bcc();
  return;
}



/* Entry: 104878864; end: 10487886b;  */

void FUN_104878864(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10487886c; end: 10487895f;  */

void FUN_10487886c(long param_1,long param_2,long *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_58 [24];
  
  lVar3 = *param_3;
  _swift_beginAccess(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _swift_retain(uVar2);
    func_0x00010006c804();
    _swift_release(uVar2);
    if (SCARRY8(*(long *)(param_1 + 0x38),1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104878960);
      (*pcVar1)();
    }
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 1;
    uVar2 = 0;
    func_0x000100087438(0,*(undefined8 *)(*(long *)(lVar3 + 0x50) + 0x10));
    __sSa5countSivg(param_2,uVar2);
    lVar4 = *(long *)(param_1 + 0x38);
    lVar3 = *(long *)(param_1 + 0x28);
    _swift_retain(lVar3);
    func_0x000100070bfc();
    if (param_2 == lVar4) {
      _swift_release(lVar3);
      func_0x000100c7f554();
      lVar3 = param_1;
    }
    else {
      _swift_release(param_1);
    }
    _swift_release(lVar3);
  }
  return;
}



/* Entry: 104878960; end: 1048789ab;  */

void FUN_104878960(void)

{
  long unaff_x20;
  
  func_0x000100087bd4(FUN_104878a0c,*(undefined8 *)(unaff_x20 + 0x20),PTR___sytN_11034f1b0 + 8);
  return;
}



/* Entry: 1048789ac; end: 104878a07;  */

void FUN_1048789ac(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Entry: 104878a08; end: 104878a0b;  */

void FUN_104878a08(void)

{
  long unaff_x20;
  
  func_0x000100087bd4(FUN_104878a0c,*(undefined8 *)(unaff_x20 + 0x20),PTR___sytN_11034f1b0 + 8);
  return;
}



/* Entry: 104878a0c; end: 104878a23;  */

void FUN_104878a0c(void)

{
  func_0x0001007b79fc();
  return;
}



/* Entry: 104878a24; end: 104878a2f;  */

void FUN_104878a24(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar5 = **(long **)(unaff_x20 + 0x20);
  _swift_beginAccess(lVar2 + 0x10,auStack_58,0,0);
  lVar2 = lVar2 + 0x10;
  _swift_weakLoadStrong();
  if (lVar2 != 0) {
    uVar4 = *(undefined8 *)(lVar2 + 0x28);
    _swift_retain(uVar4);
    func_0x00010006c804();
    _swift_release(uVar4);
    if (SCARRY8(*(long *)(lVar2 + 0x38),1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104878960);
      (*pcVar1)();
    }
    *(long *)(lVar2 + 0x38) = *(long *)(lVar2 + 0x38) + 1;
    uVar4 = 0;
    func_0x000100087438(0,*(undefined8 *)(*(long *)(lVar5 + 0x50) + 0x10));
    __sSa5countSivg(lVar3,uVar4);
    lVar6 = *(long *)(lVar2 + 0x38);
    lVar5 = *(long *)(lVar2 + 0x28);
    _swift_retain(lVar5);
    func_0x000100070bfc();
    if (lVar3 == lVar6) {
      _swift_release(lVar5);
      func_0x000100c7f554();
      lVar5 = lVar2;
    }
    else {
      _swift_release(lVar2);
    }
    _swift_release(lVar5);
  }
  return;
}



/* Entry: 104878a30; end: 104878a73;  */

void FUN_104878a30(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  func_0x000100087bcc();
  return;
}



/* Entry: 104878a74; end: 104878a97;  */

void FUN_104878a74(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 104878a98; end: 104878b1b;  */

void FUN_104878a98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  func_0x000100087bcc();
  return;
}



/* Entry: 104878b1c; end: 104878b73;  */

void FUN_104878b1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  func_0x000100087bcc();
  return;
}



/* Entry: 104878b74; end: 104878c6f;  */

undefined1  [16] FUN_104878b74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *unaff_x20;
  undefined1 auVar6 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar5 = *unaff_x20;
  uStack_78 = *(undefined8 *)(lVar5 + 0x90);
  uStack_80 = *(undefined8 *)(lVar5 + 0x88);
  uStack_68 = *(undefined8 *)(lVar5 + 0xa0);
  uStack_70 = *(undefined8 *)(lVar5 + 0x98);
  FUN_104879684(0,&uStack_80);
  lVar5 = unaff_x20[2];
  lVar2 = unaff_x20[3];
  lVar1 = unaff_x20[4];
  lVar3 = unaff_x20[5];
  _swift_retain(lVar5);
  _swift_retain(lVar2);
  _swift_retain(lVar1);
  _swift_retain(lVar3);
  func_0x0001000b693c(param_2,param_3);
  lVar4 = lVar5;
  FUN_1048799d4(lVar5,lVar2,lVar1,lVar3,param_2);
  _swift_release(lVar5);
  _swift_release(lVar2);
  _swift_release(lVar1);
  _swift_release(lVar3);
  _swift_release(param_2);
  auVar6._8_8_ = &PTR_DAT_1107a7ca8;
  auVar6._0_8_ = lVar4;
  return auVar6;
}



/* Entry: 104878c70; end: 104878cff;  */

void FUN_104878c70(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(uVar2);
  _swift_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 104878d00; end: 104878d1b;  */

void FUN_104878d00(undefined8 param_1)

{
  func_0x000104878cb0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)(param_1,0x30,7);
  return;
}



/* Entry: 104878d1c; end: 104878dd3;  */

long FUN_104878d1c(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long *unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_60 = *(undefined8 *)(*unaff_x20 + 0x50);
  uStack_58 = *(undefined8 *)(*param_1 + 0x50);
  uStack_50 = *(undefined8 *)(*param_2 + 0x50);
  uStack_48 = *(undefined8 *)(*param_3 + 0x50);
  lVar1 = 0;
  FUN_104878dd4(0,&uStack_60);
  _swift_allocObject();
  *(long **)(lVar1 + 0x10) = unaff_x20;
  *(long **)(lVar1 + 0x18) = param_1;
  *(long **)(lVar1 + 0x20) = param_2;
  *(long **)(lVar1 + 0x28) = param_3;
  func_0x000100087bcc();
  _swift_retain();
  _swift_retain(param_1);
  _swift_retain(param_2);
  _swift_retain(param_3);
  return lVar1;
}



/* Entry: 104878dd4; end: 104878de3;  */

void FUN_104878dd4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getGenericMetadata_11034f380)(param_1,param_2,&UNK_10e8200dc);
  return;
}



/* Entry: 104878de4; end: 104878e23;  */

void FUN_104878de4(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = &UNK_10dd3ab78;
  _swift_initClassMetadata2(param_1,0,1,&puStack_18,param_1 + 0xa8);
  return;
}



/* Entry: 104878e24; end: 10487900f;  */

void FUN_104878e24(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness(0,param_2,param_1,&UNK_10e820170,&UNK_10e8201a8);
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)&uStack_80 - extraout_x8;
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,param_2,param_1,&UNK_10e820170,&UNK_10e820188);
  uVar3 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,param_2,param_1,&UNK_10e820170,&UNK_10e820190);
  uVar4 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,param_2,param_1,&UNK_10e820170,&UNK_10e820198);
  uVar5 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,param_2,param_1,&UNK_10e820170,&UNK_10e8201a0);
  uVar6 = 0;
  uStack_80 = uVar2;
  uStack_78 = uVar3;
  uStack_70 = uVar4;
  uStack_68 = uVar5;
  func_0x00010061efbc(0,&uStack_80);
  lVar9 = *(long *)(uVar6 - 8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(param_2 + 0x40))(lVar8 - extraout_x8_00,param_1,param_2);
  uVar7 = uVar6;
  func_0x00010487b13c();
  (**(code **)(lVar9 + 8))(lVar8 - extraout_x8_00,uVar6);
  if ((uVar7 & 1) != 0) {
    (**(code **)(param_2 + 0x68))(lVar8,param_1,param_2);
    _swift_getAssociatedConformanceWitness(param_2,param_1,lVar1,&UNK_10e820170,&UNK_10e820180);
    (**(code **)(param_2 + 0x20))(lVar1,param_2);
    (**(code **)(lVar10 + 8))(lVar8,lVar1);
  }
  return;
}



/* Entry: 104879010; end: 104879077;  */

void FUN_104879010(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  
  uVar2 = *unaff_x20;
  puVar1 = &DAT_10dd3ac78;
  _swift_getWitnessTable(&DAT_10dd3ac78,uVar2);
  (**(code **)(puVar1 + 0x58))();
  func_0x000100087bd4(&UNK_100c82520,uVar2,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 104879078; end: 104879083;  */

void FUN_104879078(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *unaff_x20;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar1 = *unaff_x20;
  lVar2 = 0;
  _swift_getAssociatedTypeWitness(0,param_2,uVar1,&UNK_10e820170,&UNK_10e8201a8);
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)&uStack_80 - extraout_x8;
  uVar3 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,param_2,uVar1,&UNK_10e820170,&UNK_10e820188);
  uVar4 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,param_2,uVar1,&UNK_10e820170,&UNK_10e820190);
  uVar5 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,param_2,uVar1,&UNK_10e820170,&UNK_10e820198);
  uVar6 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,param_2,uVar1,&UNK_10e820170,&UNK_10e8201a0);
  uVar7 = 0;
  uStack_80 = uVar3;
  uStack_78 = uVar4;
  uStack_70 = uVar5;
  uStack_68 = uVar6;
  func_0x00010061efbc(0,&uStack_80);
  lVar10 = *(long *)(uVar7 - 8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(param_2 + 0x40))(lVar9 - extraout_x8_00,uVar1,param_2);
  uVar8 = uVar7;
  func_0x00010487b13c();
  (**(code **)(lVar10 + 8))(lVar9 - extraout_x8_00,uVar7);
  if ((uVar8 & 1) != 0) {
    (**(code **)(param_2 + 0x68))(lVar9,uVar1,param_2);
    _swift_getAssociatedConformanceWitness(param_2,uVar1,lVar2,&UNK_10e820170,&UNK_10e820180);
    (**(code **)(param_2 + 0x20))(lVar2,param_2);
    (**(code **)(lVar11 + 8))(lVar9,lVar2);
  }
  return;
}



/* Entry: 104879084; end: 10487912f;  */

void FUN_104879084(void)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  lVar3 = *unaff_x20;
  lVar1 = unaff_x20[2];
  _swift_release(unaff_x20[3]);
  _swift_release(lVar1);
  lVar2 = *(long *)(*unaff_x20 + 0x68);
  uStack_48 = *(undefined8 *)(lVar3 + 0x58);
  uStack_50 = *(undefined8 *)(lVar3 + 0x50);
  puStack_40 = PTR___ss5NeverON_11034ee88;
  puStack_38 = PTR___ss5NeverON_11034ee88;
  lVar1 = 0;
  func_0x00010061efbc(0,&uStack_50);
  (**(code **)(*(long *)(lVar1 + -8) + 8))((long)unaff_x20 + lVar2,lVar1);
  _swift_release(*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x70)));
  _swift_release(*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x78)));
  _swift_release(*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x80)));
  return;
}



/* Entry: 104879130; end: 104879153;  */

void FUN_104879130(void)

{
  FUN_104879084();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 104879154; end: 1048791d7;  */

void FUN_104879154(undefined8 param_1,long param_2)

{
  long lVar1;
  long *unaff_x20;
  long lVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(*unaff_x20 + 0x68);
  _swift_beginAccess((long)unaff_x20 + lVar2,auStack_48,0,0);
  uStack_68 = *(undefined8 *)(param_2 + 0x58);
  uStack_70 = *(undefined8 *)(param_2 + 0x50);
  puStack_60 = PTR___ss5NeverON_11034ee88;
  puStack_58 = PTR___ss5NeverON_11034ee88;
  lVar1 = 0;
  func_0x00010061efbc(0,&uStack_70);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1,(long)unaff_x20 + lVar2,lVar1);
  return;
}



/* Entry: 1048791d8; end: 1048791fb;  */

void FUN_1048791d8(undefined8 *param_1)

{
  long *unaff_x20;
  
  *param_1 = *(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1048791fc; end: 104879283;  */

void FUN_1048791fc(undefined8 param_1,long param_2)

{
  long lVar1;
  long *unaff_x20;
  long lVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(*unaff_x20 + 0x70);
  _swift_beginAccess((long)unaff_x20 + lVar2,auStack_48,0,0);
  uStack_60 = *(undefined8 *)(param_2 + 0x60);
  uStack_68 = *(undefined8 *)(param_2 + 0x58);
  uStack_70 = *(undefined8 *)(param_2 + 0x50);
  puStack_58 = PTR___ss5NeverON_11034ee88;
  lVar1 = 0;
  func_0x00010061efbc(0,&uStack_70);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1,(long)unaff_x20 + lVar2,lVar1);
  return;
}



/* Entry: 104879284; end: 1048792ab;  */

void FUN_104879284(undefined8 *param_1)

{
  long *unaff_x20;
  
  *param_1 = *(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x88));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1048792ac; end: 10487933f;  */

void FUN_1048792ac(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puVar2 = &uStack_70;
  puStack_48 = &UNK_10dd3ae08;
  uStack_68 = *(undefined8 *)(param_1 + 0x58);
  uStack_70 = *(undefined8 *)(param_1 + 0x50);
  uStack_58 = *(undefined8 *)(param_1 + 0x68);
  uStack_60 = *(undefined8 *)(param_1 + 0x60);
  lVar1 = 0x13f;
  func_0x00010061efbc();
  if (puVar2 < (undefined1 *)0x40) {
    lStack_40 = *(long *)(lVar1 + -8) + 0x40;
    puStack_38 = PTR___sBoWV_11034d678 + 0x40;
    puStack_30 = puStack_38;
    puStack_28 = puStack_38;
    _swift_initClassMetadata2(param_1,0,5,&puStack_48,param_1 + 0x70);
  }
  return;
}



/* Entry: 104879340; end: 1048795a3;  */

void FUN_104879340(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  code *pcVar6;
  long *unaff_x20;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
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
  
  lVar9 = *unaff_x20;
  lVar7 = *(long *)(lVar9 + 0x50);
  lVar10 = *(long *)(lVar9 + 0x58);
  lVar8 = *(long *)(lVar9 + 0x60);
  lVar11 = *(long *)(lVar9 + 0x68);
  lVar4 = 0xff;
  lStack_80 = lVar7;
  lStack_78 = lVar10;
  lStack_70 = lVar8;
  lStack_68 = lVar11;
  _swift_getTupleTypeMetadata(0xff,4,&lStack_80,0,0);
  lVar5 = 0;
  __sSqMa(0,lVar4);
  lStack_b0 = *(long *)(lVar5 + -8);
  lStack_a8 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_b0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar14 = (long)&lStack_b0 - extraout_x8;
  lVar5 = 0;
  lStack_a0 = lVar7;
  lStack_98 = lVar10;
  lStack_90 = lVar8;
  lStack_88 = lVar11;
  lStack_80 = lVar7;
  lStack_78 = lVar10;
  lStack_70 = lVar8;
  lStack_68 = lVar11;
  func_0x00010061efbc(0,&lStack_80);
  lVar11 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = lVar14 - extraout_x8_00;
  lVar8 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar12 = lVar7 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar12 - extraout_x12;
  lVar10 = *(long *)(lVar9 + 0x78);
  _swift_beginAccess((long)unaff_x20 + lVar10,&lStack_80,0,0);
  (**(code **)(lVar11 + 0x10))(lVar7,(long)unaff_x20 + lVar10,lVar5);
  func_0x00010487b448(lVar14,lVar5);
  (**(code **)(lVar11 + 8))(lVar7,lVar5);
  lVar7 = lVar14;
  (**(code **)(lVar8 + 0x30))(lVar14,1,lVar4);
  if ((int)lVar7 == 1) {
    (**(code **)(lStack_b0 + 8))(lVar14,lStack_a8);
  }
  else {
    (**(code **)(lVar8 + 0x20))(lVar13,lVar14,lVar4);
    iVar1 = *(int *)(lVar4 + 0x30);
    iVar2 = *(int *)(lVar4 + 0x40);
    iVar3 = *(int *)(lVar4 + 0x50);
    (**(code **)(*(long *)(lStack_a0 + -8) + 0x10))(lVar12,lVar13);
    (**(code **)(*(long *)(lStack_98 + -8) + 0x10))(lVar12 + iVar1,lVar13 + iVar1);
    (**(code **)(*(long *)(lStack_90 + -8) + 0x10))(lVar12 + iVar2,lVar13 + iVar2);
    (**(code **)(*(long *)(lStack_88 + -8) + 0x10))(lVar12 + iVar3,lVar13 + iVar3);
    func_0x000100087f6c(lVar12);
    pcVar6 = *(code **)(lVar8 + 8);
    (*pcVar6)(lVar12,lVar4);
    (*pcVar6)(lVar13,lVar4);
  }
  return;
}



/* Entry: 1048795a4; end: 10487965f;  */

void FUN_1048795a4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  long lVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar4 = *unaff_x20;
  lVar2 = unaff_x20[2];
  lVar1 = unaff_x20[3];
  lVar3 = unaff_x20[4];
  _swift_release(unaff_x20[5]);
  _swift_release(lVar3);
  _swift_release(lVar1);
  _swift_release(lVar2);
  lVar3 = *(long *)(*unaff_x20 + 0x78);
  uStack_58 = *(undefined8 *)(lVar4 + 0x58);
  uStack_60 = *(undefined8 *)(lVar4 + 0x50);
  uStack_48 = *(undefined8 *)(lVar4 + 0x68);
  uStack_50 = *(undefined8 *)(lVar4 + 0x60);
  lVar2 = 0;
  func_0x00010061efbc(0,&uStack_60);
  (**(code **)(*(long *)(lVar2 + -8) + 8))((long)unaff_x20 + lVar3,lVar2);
  _swift_release(*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x80)));
  _swift_release(*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x88)));
  _swift_release(*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x90)));
  return;
}



/* Entry: 104879660; end: 104879683;  */

void FUN_104879660(void)

{
  FUN_1048795a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 104879684; end: 10487968f;  */

void FUN_104879684(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getGenericMetadata_11034f380)(param_1,param_2,&UNK_10e820290);
  return;
}



/* Entry: 104879690; end: 104879707;  */

void FUN_104879690(undefined8 param_1,long param_2)

{
  long lVar1;
  long *unaff_x20;
  long lVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(*unaff_x20 + 0x78);
  _swift_beginAccess((long)unaff_x20 + lVar2,auStack_48,0,0);
  uStack_68 = *(undefined8 *)(param_2 + 0x58);
  uStack_70 = *(undefined8 *)(param_2 + 0x50);
  uStack_58 = *(undefined8 *)(param_2 + 0x68);
  uStack_60 = *(undefined8 *)(param_2 + 0x60);
  lVar1 = 0;
  func_0x00010061efbc(0,&uStack_70);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1,(long)unaff_x20 + lVar2,lVar1);
  return;
}



/* Entry: 104879708; end: 104879747;  */

undefined1  [16] FUN_104879708(undefined8 param_1)

{
  long lVar1;
  long *unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = *(long *)(*unaff_x20 + 0x78);
  _swift_beginAccess((long)unaff_x20 + lVar1,param_1,0x21,0);
  auVar2._8_8_ = (long)unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_104879748;
  return auVar2;
}



/* Entry: 104879748; end: 104879793;  */

void FUN_104879748(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 104879794; end: 1048799d3;  */

void FUN_104879794(long param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *unaff_x20;
  long lVar10;
  long lVar11;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar11 = *unaff_x20;
  uVar1 = *(undefined8 *)(lVar11 + 0x50);
  uVar3 = *(undefined8 *)(lVar11 + 0x58);
  uVar2 = *(undefined8 *)(lVar11 + 0x60);
  uVar4 = *(undefined8 *)(lVar11 + 0x68);
  func_0x00010061f1f8((long)unaff_x20 + *(long *)(lVar11 + 0x78),uVar1,uVar3,uVar2);
  lVar10 = *(long *)(*unaff_x20 + 0x80);
  lVar5 = 0;
  func_0x0001000c6560();
  _swift_allocObject();
  uVar6 = 0;
  func_0x00010006a340();
  uVar7 = uVar6;
  _swift_allocObject();
  func_0x00010006a360();
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(lVar5 + 0x10) = uVar7;
  *(undefined **)(lVar5 + 0x18) = puVar8;
  *(long *)((long)unaff_x20 + lVar10) = lVar5;
  lVar5 = *(long *)(*unaff_x20 + 0x88);
  _swift_allocObject(uVar6,0x18,7);
  func_0x00010006a360();
  *(undefined8 *)((long)unaff_x20 + lVar5) = uVar6;
  unaff_x20[2] = param_1;
  unaff_x20[3] = param_2;
  unaff_x20[4] = param_3;
  unaff_x20[5] = param_4;
  *(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x90)) = param_5;
  puVar8 = &UNK_10dd3ae78;
  uStack_80 = uVar1;
  uStack_78 = uVar3;
  uStack_70 = uVar2;
  uStack_68 = uVar4;
  _swift_getKeyPath(&UNK_10dd3ae78,&uStack_80);
  _swift_retain(param_1);
  _swift_retain(param_2);
  _swift_retain(param_3);
  _swift_retain(param_4);
  _swift_retain(param_5);
  puVar9 = &DAT_10dd3ae58;
  _swift_getWitnessTable(&DAT_10dd3ae58,lVar11);
  func_0x000100620530(param_1,puVar8,lVar11,puVar9);
  _swift_release(puVar8);
  puVar8 = &UNK_10dd3ae98;
  uStack_80 = uVar1;
  uStack_78 = uVar3;
  uStack_70 = uVar2;
  uStack_68 = uVar4;
  _swift_getKeyPath(&UNK_10dd3ae98,&uStack_80);
  func_0x000100620530(param_2,puVar8,lVar11,puVar9);
  _swift_release(puVar8);
  puVar8 = &UNK_10dd3aeb8;
  uStack_80 = uVar1;
  uStack_78 = uVar3;
  uStack_70 = uVar2;
  uStack_68 = uVar4;
  _swift_getKeyPath(&UNK_10dd3aeb8,&uStack_80);
  func_0x000100620530(param_3,puVar8,lVar11,puVar9);
  _swift_release(puVar8);
  puVar8 = &UNK_10dd3aed8;
  uStack_80 = uVar1;
  uStack_78 = uVar3;
  uStack_70 = uVar2;
  uStack_68 = uVar4;
  _swift_getKeyPath(&UNK_10dd3aed8,&uStack_80);
  func_0x000100620530(param_4,puVar8,lVar11,puVar9);
  _swift_release(puVar8);
  return;
}



/* Entry: 1048799d4; end: 104879a3b;  */

void FUN_1048799d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _swift_allocObject();
  FUN_104879794(param_1,param_2,param_3,param_4,param_5);
  return;
}



/* Entry: 104879a3c; end: 104879da7;  */

long * FUN_104879a3c(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  
  lVar18 = *(long *)(param_3 + 0x10);
  lVar6 = *(long *)(param_3 + 0x18);
  lVar24 = *(long *)(lVar18 + -8);
  lVar13 = *(long *)(lVar24 + 0x40);
  if (*(int *)(lVar24 + 0x54) == 0) {
    lVar13 = lVar13 + 1;
  }
  lVar22 = *(long *)(lVar6 + -8);
  iVar3 = *(int *)(lVar22 + 0x54);
  uVar14 = (ulong)*(uint *)(lVar22 + 0x50) & 0xff;
  uVar11 = lVar13 + uVar14 + 1;
  lVar19 = *(long *)(lVar22 + 0x40);
  lVar2 = lVar19;
  if (iVar3 == 0) {
    lVar2 = lVar19 + 1;
  }
  lVar5 = *(long *)(param_3 + 0x20);
  lVar7 = *(long *)(param_3 + 0x28);
  lVar17 = *(long *)(lVar5 + -8);
  iVar4 = *(int *)(lVar17 + 0x54);
  uVar20 = (ulong)*(uint *)(lVar17 + 0x50) & 0xff;
  uVar12 = *(ulong *)(lVar17 + 0x40);
  uVar21 = uVar12;
  if (iVar4 == 0) {
    uVar21 = uVar12 + 1;
  }
  lVar16 = *(long *)(lVar7 + -8);
  uVar9 = (ulong)*(uint *)(lVar16 + 0x50) & 0xff;
  lVar15 = *(long *)(lVar16 + 0x40);
  if (*(int *)(lVar16 + 0x54) == 0) {
    lVar15 = lVar15 + 1;
  }
  uVar8 = *(uint *)(lVar22 + 0x50) | *(uint *)(lVar24 + 0x50) |
          *(uint *)(lVar17 + 0x50) | *(uint *)(lVar16 + 0x50);
  uVar1 = uVar8 & 0xff;
  if ((uVar1 < 8 &&
      lVar15 - ((((-2 - (lVar2 + uVar20)) - (uVar11 & (uVar14 ^ 0xffffffffffffffff)) | uVar20) +
                ~uVar21) - uVar9 | uVar9) < 0x19) && (uVar8 & 0x100000) == 0) {
    plVar10 = param_2;
    (**(code **)(lVar24 + 0x30))(param_2,1,lVar18);
    if ((int)plVar10 == 0) {
      (**(code **)(lVar24 + 0x10))(param_1,param_2,lVar18);
      (**(code **)(lVar24 + 0x38))(param_1,0,1,lVar18);
    }
    else {
      _memcpy(param_1,param_2,lVar13);
    }
    *(undefined1 *)(lVar13 + (long)param_1) = *(undefined1 *)(lVar13 + (long)param_2);
    lVar13 = lVar19 + 1;
    uVar23 = uVar11 + (long)param_1 & ~uVar14;
    uVar14 = uVar11 + (long)param_2 & ~uVar14;
    uVar11 = uVar14;
    (**(code **)(lVar22 + 0x30))(uVar14,1,lVar6);
    if ((int)uVar11 == 0) {
      (**(code **)(lVar22 + 0x10))(uVar23,uVar14,lVar6);
      (**(code **)(lVar22 + 0x38))(uVar23,0,1,lVar6);
    }
    else {
      _memcpy(uVar23,uVar14,lVar2);
    }
    if (iVar3 == 0) {
      *(undefined1 *)(uVar23 + lVar13) = *(undefined1 *)(uVar14 + lVar13);
      lVar13 = lVar19 + 2;
    }
    else {
      *(undefined1 *)(uVar23 + lVar19) = *(undefined1 *)(uVar14 + lVar19);
    }
    lVar18 = uVar12 + 1;
    uVar23 = uVar23 + uVar20 + lVar13 & ~uVar20;
    uVar14 = uVar14 + uVar20 + lVar13 & ~uVar20;
    uVar11 = uVar14;
    (**(code **)(lVar17 + 0x30))(uVar14,1,lVar5);
    if ((int)uVar11 == 0) {
      (**(code **)(lVar17 + 0x10))(uVar23,uVar14,lVar5);
      (**(code **)(lVar17 + 0x38))(uVar23,0,1,lVar5);
    }
    else {
      _memcpy(uVar23,uVar14,uVar21);
    }
    if (iVar4 == 0) {
      *(undefined1 *)(uVar23 + lVar18) = *(undefined1 *)(uVar14 + lVar18);
      lVar18 = uVar12 + 2;
    }
    else {
      *(undefined1 *)(uVar23 + uVar12) = *(undefined1 *)(uVar14 + uVar12);
    }
    uVar21 = uVar23 + uVar9 + lVar18 & ~uVar9;
    uVar14 = uVar14 + uVar9 + lVar18 & ~uVar9;
    uVar11 = uVar14;
    (**(code **)(lVar16 + 0x30))(uVar14,1,lVar7);
    if ((int)uVar11 == 0) {
      (**(code **)(lVar16 + 0x10))(uVar21,uVar14,lVar7);
      (**(code **)(lVar16 + 0x38))(uVar21,0,1,lVar7);
    }
    else {
      _memcpy(uVar21,uVar14,lVar15);
    }
    *(undefined1 *)(uVar21 + lVar15) = *(undefined1 *)(uVar14 + lVar15);
  }
  else {
    lVar13 = *param_2;
    *param_1 = lVar13;
    param_1 = (long *)(lVar13 + ((ulong)uVar1 + 0x10 & ((ulong)uVar1 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 104879da8; end: 10487a157;  */

long FUN_104879da8(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  
  lVar5 = *(long *)(param_3 + 0x10);
  lVar8 = *(long *)(lVar5 + -8);
  pcVar9 = *(code **)(lVar8 + 0x30);
  lVar2 = param_1;
  (*pcVar9)(param_1,1,lVar5);
  lVar7 = param_2;
  (*pcVar9)(param_2,1,lVar5);
  if ((int)lVar2 == 0) {
    if ((int)lVar7 != 0) {
      (**(code **)(lVar8 + 8))(param_1,lVar5);
      goto LAB_104879e44;
    }
    (**(code **)(lVar8 + 0x18))(param_1,param_2,lVar5);
  }
  else if ((int)lVar7 == 0) {
    (**(code **)(lVar8 + 0x10))(param_1,param_2,lVar5);
    (**(code **)(lVar8 + 0x38))(param_1,0,1,lVar5);
  }
  else {
LAB_104879e44:
    lVar2 = *(long *)(lVar8 + 0x40);
    if (*(int *)(lVar8 + 0x54) == 0) {
      lVar2 = lVar2 + 1;
    }
    _memcpy(param_1,param_2,lVar2);
  }
  lVar2 = *(long *)(lVar8 + 0x40);
  if (*(int *)(lVar8 + 0x54) == 0) {
    lVar2 = lVar2 + 1;
  }
  *(undefined1 *)(lVar2 + param_1) = *(undefined1 *)(lVar2 + param_2);
  lVar7 = *(long *)(param_3 + 0x18);
  lVar5 = *(long *)(lVar7 + -8);
  uVar3 = (ulong)*(byte *)(lVar5 + 0x50);
  lVar2 = lVar2 + uVar3 + 1;
  uVar6 = lVar2 + param_1 & (uVar3 ^ 0xffffffffffffffff);
  uVar4 = lVar2 + param_2 & (uVar3 ^ 0xffffffffffffffff);
  pcVar9 = *(code **)(lVar5 + 0x30);
  uVar3 = uVar6;
  (*pcVar9)(uVar6,1,lVar7);
  uVar1 = uVar4;
  (*pcVar9)(uVar4,1,lVar7);
  if ((int)uVar3 == 0) {
    if ((int)uVar1 != 0) {
      (**(code **)(lVar5 + 8))(uVar6,lVar7);
      goto LAB_104879f10;
    }
    (**(code **)(lVar5 + 0x18))(uVar6,uVar4,lVar7);
  }
  else if ((int)uVar1 == 0) {
    (**(code **)(lVar5 + 0x10))(uVar6,uVar4,lVar7);
    (**(code **)(lVar5 + 0x38))(uVar6,0,1,lVar7);
  }
  else {
LAB_104879f10:
    lVar2 = *(long *)(lVar5 + 0x40);
    if (*(int *)(lVar5 + 0x54) == 0) {
      lVar2 = lVar2 + 1;
    }
    _memcpy(uVar6,uVar4,lVar2);
  }
  lVar2 = *(long *)(lVar5 + 0x40);
  if (*(int *)(lVar5 + 0x54) == 0) {
    lVar2 = lVar2 + 1;
  }
  *(undefined1 *)(lVar2 + uVar6) = *(undefined1 *)(lVar2 + uVar4);
  lVar7 = *(long *)(param_3 + 0x20);
  lVar5 = *(long *)(lVar7 + -8);
  uVar3 = (ulong)*(byte *)(lVar5 + 0x50);
  lVar2 = lVar2 + uVar3 + 1;
  uVar6 = lVar2 + uVar6 & (uVar3 ^ 0xffffffffffffffff);
  uVar4 = lVar2 + uVar4 & (uVar3 ^ 0xffffffffffffffff);
  pcVar9 = *(code **)(lVar5 + 0x30);
  uVar3 = uVar6;
  (*pcVar9)(uVar6,1,lVar7);
  uVar1 = uVar4;
  (*pcVar9)(uVar4,1,lVar7);
  if ((int)uVar3 == 0) {
    if ((int)uVar1 != 0) {
      (**(code **)(lVar5 + 8))(uVar6,lVar7);
      goto LAB_104879fdc;
    }
    (**(code **)(lVar5 + 0x18))(uVar6,uVar4,lVar7);
  }
  else if ((int)uVar1 == 0) {
    (**(code **)(lVar5 + 0x10))(uVar6,uVar4,lVar7);
    (**(code **)(lVar5 + 0x38))(uVar6,0,1,lVar7);
  }
  else {
LAB_104879fdc:
    lVar2 = *(long *)(lVar5 + 0x40);
    if (*(int *)(lVar5 + 0x54) == 0) {
      lVar2 = lVar2 + 1;
    }
    _memcpy(uVar6,uVar4,lVar2);
  }
  lVar2 = *(long *)(lVar5 + 0x40);
  if (*(int *)(lVar5 + 0x54) == 0) {
    lVar2 = lVar2 + 1;
  }
  *(undefined1 *)(lVar2 + uVar6) = *(undefined1 *)(lVar2 + uVar4);
  lVar7 = *(long *)(param_3 + 0x28);
  lVar5 = *(long *)(lVar7 + -8);
  uVar3 = (ulong)*(byte *)(lVar5 + 0x50);
  lVar2 = lVar2 + uVar3 + 1;
  uVar6 = lVar2 + uVar6 & (uVar3 ^ 0xffffffffffffffff);
  uVar4 = lVar2 + uVar4 & (uVar3 ^ 0xffffffffffffffff);
  pcVar9 = *(code **)(lVar5 + 0x30);
  uVar3 = uVar6;
  (*pcVar9)(uVar6,1,lVar7);
  uVar1 = uVar4;
  (*pcVar9)(uVar4,1,lVar7);
  if ((int)uVar3 == 0) {
    if ((int)uVar1 == 0) {
      (**(code **)(lVar5 + 0x18))(uVar6,uVar4,lVar7);
      goto LAB_10487a0c4;
    }
    (**(code **)(lVar5 + 8))(uVar6,lVar7);
  }
  else if ((int)uVar1 == 0) {
    (**(code **)(lVar5 + 0x10))(uVar6,uVar4,lVar7);
    (**(code **)(lVar5 + 0x38))(uVar6,0,1,lVar7);
    goto LAB_10487a0c4;
  }
  lVar2 = *(long *)(lVar5 + 0x40);
  if (*(int *)(lVar5 + 0x54) == 0) {
    lVar2 = lVar2 + 1;
  }
  _memcpy(uVar6,uVar4,lVar2);
LAB_10487a0c4:
  lVar2 = *(long *)(lVar5 + 0x40);
  if (*(int *)(lVar5 + 0x54) == 0) {
    lVar2 = lVar2 + 1;
  }
  *(undefined1 *)(lVar2 + uVar6) = *(undefined1 *)(lVar2 + uVar4);
  return param_1;
}



/* Entry: 10487a158; end: 10487a3f3;  */

long FUN_10487a158(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  lVar4 = *(long *)(param_3 + 0x10);
  lVar6 = *(long *)(lVar4 + -8);
  lVar7 = param_2;
  (**(code **)(lVar6 + 0x30))(param_2,1,lVar4);
  if ((int)lVar7 == 0) {
    (**(code **)(lVar6 + 0x20))(param_1,param_2,lVar4);
    (**(code **)(lVar6 + 0x38))(param_1,0,1,lVar4);
    iVar3 = *(int *)(lVar6 + 0x54);
    lVar7 = *(long *)(lVar6 + 0x40);
  }
  else {
    iVar3 = *(int *)(lVar6 + 0x54);
    lVar7 = *(long *)(lVar6 + 0x40);
    lVar4 = lVar7;
    if (iVar3 == 0) {
      lVar4 = lVar7 + 1;
    }
    _memcpy(param_1,param_2,lVar4);
  }
  if (iVar3 == 0) {
    lVar7 = lVar7 + 1;
  }
  *(undefined1 *)(lVar7 + param_1) = *(undefined1 *)(lVar7 + param_2);
  lVar4 = *(long *)(param_3 + 0x18);
  lVar6 = *(long *)(lVar4 + -8);
  uVar1 = (ulong)*(byte *)(lVar6 + 0x50);
  lVar7 = lVar7 + uVar1 + 1;
  uVar5 = lVar7 + param_1 & (uVar1 ^ 0xffffffffffffffff);
  uVar2 = lVar7 + param_2 & (uVar1 ^ 0xffffffffffffffff);
  uVar1 = uVar2;
  (**(code **)(lVar6 + 0x30))(uVar2,1,lVar4);
  if ((int)uVar1 == 0) {
    (**(code **)(lVar6 + 0x20))(uVar5,uVar2,lVar4);
    (**(code **)(lVar6 + 0x38))(uVar5,0,1,lVar4);
    iVar3 = *(int *)(lVar6 + 0x54);
    lVar7 = *(long *)(lVar6 + 0x40);
  }
  else {
    iVar3 = *(int *)(lVar6 + 0x54);
    lVar7 = *(long *)(lVar6 + 0x40);
    lVar4 = lVar7;
    if (iVar3 == 0) {
      lVar4 = lVar7 + 1;
    }
    _memcpy(uVar5,uVar2,lVar4);
  }
  if (iVar3 == 0) {
    lVar7 = lVar7 + 1;
  }
  *(undefined1 *)(lVar7 + uVar5) = *(undefined1 *)(lVar7 + uVar2);
  lVar4 = *(long *)(param_3 + 0x20);
  lVar6 = *(long *)(lVar4 + -8);
  uVar1 = (ulong)*(byte *)(lVar6 + 0x50);
  lVar7 = lVar7 + uVar1 + 1;
  uVar5 = lVar7 + uVar5 & (uVar1 ^ 0xffffffffffffffff);
  uVar2 = lVar7 + uVar2 & (uVar1 ^ 0xffffffffffffffff);
  uVar1 = uVar2;
  (**(code **)(lVar6 + 0x30))(uVar2,1,lVar4);
  if ((int)uVar1 == 0) {
    (**(code **)(lVar6 + 0x20))(uVar5,uVar2,lVar4);
    (**(code **)(lVar6 + 0x38))(uVar5,0,1,lVar4);
    iVar3 = *(int *)(lVar6 + 0x54);
    lVar7 = *(long *)(lVar6 + 0x40);
  }
  else {
    iVar3 = *(int *)(lVar6 + 0x54);
    lVar7 = *(long *)(lVar6 + 0x40);
    lVar4 = lVar7;
    if (iVar3 == 0) {
      lVar4 = lVar7 + 1;
    }
    _memcpy(uVar5,uVar2,lVar4);
  }
  if (iVar3 == 0) {
    lVar7 = lVar7 + 1;
  }
  *(undefined1 *)(lVar7 + uVar5) = *(undefined1 *)(lVar7 + uVar2);
  lVar4 = *(long *)(param_3 + 0x28);
  lVar6 = *(long *)(lVar4 + -8);
  uVar1 = (ulong)*(byte *)(lVar6 + 0x50);
  lVar7 = lVar7 + uVar1 + 1;
  uVar5 = lVar7 + uVar5 & (uVar1 ^ 0xffffffffffffffff);
  uVar2 = lVar7 + uVar2 & (uVar1 ^ 0xffffffffffffffff);
  uVar1 = uVar2;
  (**(code **)(lVar6 + 0x30))(uVar2,1,lVar4);
  if ((int)uVar1 == 0) {
    (**(code **)(lVar6 + 0x20))(uVar5,uVar2,lVar4);
    (**(code **)(lVar6 + 0x38))(uVar5,0,1,lVar4);
    iVar3 = *(int *)(lVar6 + 0x54);
    lVar7 = *(long *)(lVar6 + 0x40);
  }
  else {
    iVar3 = *(int *)(lVar6 + 0x54);
    lVar7 = *(long *)(lVar6 + 0x40);
    lVar4 = lVar7;
    if (iVar3 == 0) {
      lVar4 = lVar7 + 1;
    }
    _memcpy(uVar5,uVar2,lVar4);
  }
  if (iVar3 == 0) {
    lVar7 = lVar7 + 1;
  }
  *(undefined1 *)(lVar7 + uVar5) = *(undefined1 *)(lVar7 + uVar2);
  return param_1;
}



/* Entry: 10487a3f4; end: 10487a7a3;  */

long FUN_10487a3f4(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  
  lVar5 = *(long *)(param_3 + 0x10);
  lVar8 = *(long *)(lVar5 + -8);
  pcVar9 = *(code **)(lVar8 + 0x30);
  lVar2 = param_1;
  (*pcVar9)(param_1,1,lVar5);
  lVar7 = param_2;
  (*pcVar9)(param_2,1,lVar5);
  if ((int)lVar2 == 0) {
    if ((int)lVar7 != 0) {
      (**(code **)(lVar8 + 8))(param_1,lVar5);
      goto LAB_10487a490;
    }
    (**(code **)(lVar8 + 0x28))(param_1,param_2,lVar5);
  }
  else if ((int)lVar7 == 0) {
    (**(code **)(lVar8 + 0x20))(param_1,param_2,lVar5);
    (**(code **)(lVar8 + 0x38))(param_1,0,1,lVar5);
  }
  else {
LAB_10487a490:
    lVar2 = *(long *)(lVar8 + 0x40);
    if (*(int *)(lVar8 + 0x54) == 0) {
      lVar2 = lVar2 + 1;
    }
    _memcpy(param_1,param_2,lVar2);
  }
  lVar2 = *(long *)(lVar8 + 0x40);
  if (*(int *)(lVar8 + 0x54) == 0) {
    lVar2 = lVar2 + 1;
  }
  *(undefined1 *)(lVar2 + param_1) = *(undefined1 *)(lVar2 + param_2);
  lVar7 = *(long *)(param_3 + 0x18);
  lVar5 = *(long *)(lVar7 + -8);
  uVar3 = (ulong)*(byte *)(lVar5 + 0x50);
  lVar2 = lVar2 + uVar3 + 1;
  uVar6 = lVar2 + param_1 & (uVar3 ^ 0xffffffffffffffff);
  uVar4 = lVar2 + param_2 & (uVar3 ^ 0xffffffffffffffff);
  pcVar9 = *(code **)(lVar5 + 0x30);
  uVar3 = uVar6;
  (*pcVar9)(uVar6,1,lVar7);
  uVar1 = uVar4;
  (*pcVar9)(uVar4,1,lVar7);
  if ((int)uVar3 == 0) {
    if ((int)uVar1 != 0) {
      (**(code **)(lVar5 + 8))(uVar6,lVar7);
      goto LAB_10487a55c;
    }
    (**(code **)(lVar5 + 0x28))(uVar6,uVar4,lVar7);
  }
  else if ((int)uVar1 == 0) {
    (**(code **)(lVar5 + 0x20))(uVar6,uVar4,lVar7);
    (**(code **)(lVar5 + 0x38))(uVar6,0,1,lVar7);
  }
  else {
LAB_10487a55c:
    lVar2 = *(long *)(lVar5 + 0x40);
    if (*(int *)(lVar5 + 0x54) == 0) {
      lVar2 = lVar2 + 1;
    }
    _memcpy(uVar6,uVar4,lVar2);
  }
  lVar2 = *(long *)(lVar5 + 0x40);
  if (*(int *)(lVar5 + 0x54) == 0) {
    lVar2 = lVar2 + 1;
  }
  *(undefined1 *)(lVar2 + uVar6) = *(undefined1 *)(lVar2 + uVar4);
  lVar7 = *(long *)(param_3 + 0x20);
  lVar5 = *(long *)(lVar7 + -8);
  uVar3 = (ulong)*(byte *)(lVar5 + 0x50);
  lVar2 = lVar2 + uVar3 + 1;
  uVar6 = lVar2 + uVar6 & (uVar3 ^ 0xffffffffffffffff);
  uVar4 = lVar2 + uVar4 & (uVar3 ^ 0xffffffffffffffff);
  pcVar9 = *(code **)(lVar5 + 0x30);
  uVar3 = uVar6;
  (*pcVar9)(uVar6,1,lVar7);
  uVar1 = uVar4;
  (*pcVar9)(uVar4,1,lVar7);
  if ((int)uVar3 == 0) {
    if ((int)uVar1 != 0) {
      (**(code **)(lVar5 + 8))(uVar6,lVar7);
      goto LAB_10487a628;
    }
    (**(code **)(lVar5 + 0x28))(uVar6,uVar4,lVar7);
  }
  else if ((int)uVar1 == 0) {
    (**(code **)(lVar5 + 0x20))(uVar6,uVar4,lVar7);
    (**(code **)(lVar5 + 0x38))(uVar6,0,1,lVar7);
  }
  else {
LAB_10487a628:
    lVar2 = *(long *)(lVar5 + 0x40);
    if (*(int *)(lVar5 + 0x54) == 0) {
      lVar2 = lVar2 + 1;
    }
    _memcpy(uVar6,uVar4,lVar2);
  }
  lVar2 = *(long *)(lVar5 + 0x40);
  if (*(int *)(lVar5 + 0x54) == 0) {
    lVar2 = lVar2 + 1;
  }
  *(undefined1 *)(lVar2 + uVar6) = *(undefined1 *)(lVar2 + uVar4);
  lVar7 = *(long *)(param_3 + 0x28);
  lVar5 = *(long *)(lVar7 + -8);
  uVar3 = (ulong)*(byte *)(lVar5 + 0x50);
  lVar2 = lVar2 + uVar3 + 1;
  uVar6 = lVar2 + uVar6 & (uVar3 ^ 0xffffffffffffffff);
  uVar4 = lVar2 + uVar4 & (uVar3 ^ 0xffffffffffffffff);
  pcVar9 = *(code **)(lVar5 + 0x30);
  uVar3 = uVar6;
  (*pcVar9)(uVar6,1,lVar7);
  uVar1 = uVar4;
  (*pcVar9)(uVar4,1,lVar7);
  if ((int)uVar3 == 0) {
    if ((int)uVar1 == 0) {
      (**(code **)(lVar5 + 0x28))(uVar6,uVar4,lVar7);
      goto LAB_10487a710;
    }
    (**(code **)(lVar5 + 8))(uVar6,lVar7);
  }
  else if ((int)uVar1 == 0) {
    (**(code **)(lVar5 + 0x20))(uVar6,uVar4,lVar7);
    (**(code **)(lVar5 + 0x38))(uVar6,0,1,lVar7);
    goto LAB_10487a710;
  }
  lVar2 = *(long *)(lVar5 + 0x40);
  if (*(int *)(lVar5 + 0x54) == 0) {
    lVar2 = lVar2 + 1;
  }
  _memcpy(uVar6,uVar4,lVar2);
LAB_10487a710:
  lVar2 = *(long *)(lVar5 + 0x40);
  if (*(int *)(lVar5 + 0x54) == 0) {
    lVar2 = lVar2 + 1;
  }
  *(undefined1 *)(lVar2 + uVar6) = *(undefined1 *)(lVar2 + uVar4);
  return param_1;
}



/* Entry: 10487a7a4; end: 10487b9fb;  */

int FUN_10487a7a4(uint *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  byte bVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  code *pcVar24;
  uint uVar25;
  uint uVar26;
  long lVar27;
  long lVar28;
  uint uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  
  lVar28 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  iVar13 = *(int *)(lVar28 + 0x54);
  uVar18 = 0;
  if (iVar13 != 0) {
    uVar18 = iVar13 - 1;
  }
  uVar25 = uVar18;
  if (uVar18 < 0xff) {
    uVar25 = 0xfe;
  }
  lVar27 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  iVar9 = *(int *)(lVar27 + 0x54);
  uVar4 = 0;
  if (iVar9 != 0) {
    uVar4 = iVar9 - 1;
  }
  uVar5 = uVar4;
  if (uVar4 < 0xff) {
    uVar5 = 0xfe;
  }
  uVar8 = uVar5;
  if (uVar5 <= uVar25) {
    uVar8 = uVar25;
  }
  lVar15 = *(long *)(param_3 + 0x28);
  lVar16 = *(long *)(*(long *)(param_3 + 0x20) + -8);
  iVar10 = *(int *)(lVar16 + 0x54);
  uVar6 = 0;
  if (iVar10 != 0) {
    uVar6 = iVar10 - 1;
  }
  uVar7 = uVar6;
  if (uVar6 < 0xff) {
    uVar7 = 0xfe;
  }
  uVar12 = uVar7;
  if (uVar7 <= uVar8) {
    uVar12 = uVar8;
  }
  lVar17 = *(long *)(lVar15 + -8);
  iVar14 = *(int *)(lVar17 + 0x54);
  uVar8 = 0;
  if (iVar14 != 0) {
    uVar8 = iVar14 - 1;
  }
  uVar19 = uVar8;
  if (uVar8 <= uVar12) {
    uVar19 = uVar12;
  }
  if (uVar19 < 0xff) {
    uVar19 = 0xfe;
  }
  lVar20 = *(long *)(lVar28 + 0x40);
  if (iVar13 == 0) {
    lVar20 = lVar20 + 1;
  }
  lVar21 = *(long *)(lVar27 + 0x40);
  if (iVar9 == 0) {
    lVar21 = lVar21 + 1;
  }
  lVar22 = *(long *)(lVar16 + 0x40);
  if (iVar10 == 0) {
    lVar22 = lVar22 + 1;
  }
  lVar23 = *(long *)(lVar17 + 0x40);
  if (iVar14 == 0) {
    lVar23 = lVar23 + 1;
  }
  if (param_2 == 0) {
    return 0;
  }
  uVar31 = (ulong)*(byte *)(lVar27 + 0x50);
  uVar1 = lVar20 + uVar31 + 1;
  uVar32 = (ulong)*(byte *)(lVar16 + 0x50);
  uVar30 = (ulong)*(byte *)(lVar17 + 0x50);
  lVar2 = lVar22 + uVar30 + 1;
  if (param_2 < uVar19 || param_2 - uVar19 == 0) goto LAB_10487a9c0;
  lVar3 = lVar23 + (lVar2 + (lVar21 + 1 + uVar32 + (uVar1 & (uVar31 ^ 0xffffffffffffffff)) &
                            (uVar32 ^ 0xffffffffffffffff)) & (uVar30 ^ 0xffffffffffffffff)) + 1;
  uVar26 = (uint)lVar3;
  uVar12 = uVar26 << 3;
  if (uVar26 < 4) {
    uVar29 = ((param_2 - uVar19) + ~(-1 << (ulong)(uVar12 & 0x1f)) >> (ulong)(uVar12 & 0x1f)) + 1;
    if (uVar29 < 0x100) {
      if (uVar29 < 2) goto LAB_10487a9c0;
      goto LAB_10487a900;
    }
    if (uVar29 >> 0x10 == 0) {
      uVar29 = (uint)*(ushort *)((long)param_1 + lVar3);
      if (uVar29 == 0) goto LAB_10487a9c0;
      goto LAB_10487a958;
    }
    uVar29 = *(uint *)((long)param_1 + lVar3);
    if (uVar29 != 0) goto LAB_10487a958;
LAB_10487a9c0:
    if (uVar25 == uVar19) {
      if (uVar18 < 0xfe) {
        bVar11 = *(byte *)(lVar20 + (long)param_1);
joined_r0x00010487aa60:
        uVar18 = (uint)bVar11;
        if (bVar11 < 2) {
          return 0;
        }
LAB_10487aa64:
        uVar19 = uVar18 + 0x7ffffffe & 0x7fffffff;
        goto LAB_10487aae0;
      }
      pcVar24 = *(code **)(lVar28 + 0x30);
      lVar15 = *(long *)(param_3 + 0x10);
      iVar14 = iVar13;
    }
    else {
      param_1 = (uint *)((ulong)(uVar1 + (long)param_1) & ~uVar31);
      if (uVar5 == uVar19) {
        if (uVar4 < 0xfe) {
          bVar11 = *(byte *)((long)param_1 + lVar21);
          goto joined_r0x00010487aa60;
        }
        pcVar24 = *(code **)(lVar27 + 0x30);
        lVar15 = *(long *)(param_3 + 0x18);
        iVar14 = iVar9;
      }
      else {
        param_1 = (uint *)((ulong)((long)param_1 + uVar32 + lVar21 + 1) & ~uVar32);
        if (uVar7 == uVar19) {
          if (uVar6 < 0xfe) {
            bVar11 = *(byte *)((long)param_1 + lVar22);
joined_r0x00010487aac4:
            uVar18 = (uint)bVar11;
            if (uVar18 < 2) {
              return 0;
            }
            goto LAB_10487aa64;
          }
          pcVar24 = *(code **)(lVar16 + 0x30);
          lVar15 = *(long *)(param_3 + 0x20);
          iVar14 = iVar10;
        }
        else {
          param_1 = (uint *)((ulong)(lVar2 + (long)param_1) & ~uVar30);
          if (uVar8 < 0xfe) {
            bVar11 = *(byte *)((long)param_1 + lVar23);
            goto joined_r0x00010487aac4;
          }
          pcVar24 = *(code **)(lVar17 + 0x30);
        }
      }
    }
    (*pcVar24)(param_1,iVar14,lVar15);
    iVar13 = 0;
    if ((int)param_1 != 0) {
      iVar13 = (int)param_1 + -1;
    }
  }
  else {
LAB_10487a900:
    uVar29 = (uint)*(byte *)((long)param_1 + lVar3);
    if (*(byte *)((long)param_1 + lVar3) == 0) goto LAB_10487a9c0;
LAB_10487a958:
    uVar18 = 0;
    if (uVar26 < 4) {
      uVar18 = uVar29 - 1 << (ulong)(uVar12 & 0x1f);
    }
    if (uVar26 == 0) {
      uVar25 = 0;
    }
    else {
      uVar25 = 4;
      if (uVar26 < 4) {
        uVar25 = uVar26;
      }
      if ((int)uVar25 < 3) {
        if (uVar25 == 1) {
          uVar25 = (uint)(byte)*param_1;
        }
        else {
          uVar25 = (uint)(ushort)*param_1;
        }
      }
      else if (uVar25 == 3) {
        uVar25 = (uint)(uint3)*param_1;
      }
      else {
        uVar25 = *param_1;
      }
    }
    uVar19 = uVar19 + (uVar25 | uVar18);
LAB_10487aae0:
    iVar13 = uVar19 + 1;
  }
  return iVar13;
}



/* Entry: 10487b9fc; end: 10487ba47;  */

void FUN_10487b9fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  func_0x0001000c0ea8(param_1);
  return;
}



/* Entry: 10487ba48; end: 10487ba4f;  */

void FUN_10487ba48(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 10487ba50; end: 10487bb2b;  */

long * FUN_10487ba50(void)

{
  long lVar1;
  undefined *puVar2;
  long *unaff_x20;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(*(long *)(*unaff_x20 + 0x50) + 0x10);
  lVar1 = 0;
  func_0x0001000d514c(0,*(long *)(*unaff_x20 + 0x50),uVar3);
  puVar2 = &UNK_1107a7d40;
  _swift_allocObject(&UNK_1107a7d40,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar3;
  _swift_allocObject(lVar1,0x28,7);
  *(undefined8 *)(lVar1 + 0x18) = 0x10487bae4;
  *(undefined **)(lVar1 + 0x20) = puVar2;
  func_0x0001000c0ea8();
  _swift_retain();
  return unaff_x20;
}



/* Entry: 10487bb2c; end: 10487bb73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10487bb2c(void)

{
  func_0x000100c7f554();
  return;
}



/* Entry: 10487bb74; end: 10487bbcb;  */

void FUN_10487bb74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  func_0x0001000c0ea8(param_2);
  return;
}



/* Entry: 10487bbcc; end: 10487bcaf;  */

undefined1  [16] FUN_10487bbcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long *unaff_x20;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined8 uStack_58;
  
  plVar6 = (long *)unaff_x20[2];
  uVar1 = 0;
  FUN_10487c508(0,*(undefined8 *)(*unaff_x20 + 0xa8));
  func_0x0001000b693c(param_2,param_3);
  lVar7 = unaff_x20[4];
  lVar4 = unaff_x20[3];
  _swift_unknownObjectRetain(lVar4);
  FUN_10487be70(lVar7,param_2,lVar4);
  pcVar5 = *(code **)(*plVar6 + 0x58);
  puVar2 = &DAT_10dd3b0e8;
  uStack_58 = param_2;
  _swift_getWitnessTable(&DAT_10dd3b0e8,uVar1);
  puVar3 = &uStack_58;
  (*pcVar5)(puVar3,uVar1,puVar2);
  _swift_release(param_2);
  auVar8._8_8_ = uVar1;
  auVar8._0_8_ = puVar3;
  return auVar8;
}



/* Entry: 10487bcb0; end: 10487bcb7;  */

void FUN_10487bcb0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 10487bcb8; end: 10487bceb;  */

void FUN_10487bcb8(long param_1)

{
  func_0x0001000d2374();
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)(param_1,0x28,7);
  return;
}



/* Entry: 10487bcec; end: 10487bd67;  */

long * FUN_10487bcec(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = 0;
  FUN_10487bd68(0,*(undefined8 *)(*unaff_x20 + 0x50));
  _swift_allocObject();
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  *(undefined8 *)(lVar1 + 0x18) = param_2;
  func_0x0001000c0ea8();
  _swift_retain();
  _swift_unknownObjectRetain(param_2);
  return unaff_x20;
}



/* Entry: 10487bd68; end: 10487bd77;  */

void FUN_10487bd68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e8203cc);
  return;
}


