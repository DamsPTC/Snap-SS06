/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00022c54; end: 00022c6b;  */

undefined8 * FUN_00022c54(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 1);
  *param_2 = uVar1;
  return param_2;
}



/* Entry: 00022c6c; end: 00022cab;  */

void FUN_00022c6c(void)

{
  if (iRam00035270 != 0) {
    return;
  }
  iRam00035270 = _swift_getWitnessTable(&UNK_00028ff0,&UNK_00030bc8);
  return;
}



/* Entry: 00022cac; end: 00022eb3;  */

/* WARNING: Removing unreachable block (ram,0x00022e10) */
/* WARNING: Removing unreachable block (ram,0x00022d88) */

void FUN_00022cac(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 extraout_w1;
  undefined4 uVar8;
  undefined8 *in_w8;
  int unaff_w21;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined2 uStack_6e;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined1 uStack_64;
  undefined1 uStack_63;
  undefined2 uStack_62;
  undefined1 uStack_51;
  
  uVar5 = FUN_00010468(0x35298,&UNK_000293e0);
  iVar2 = *(int *)((int)uVar5 + -4);
  iVar1 = *(int *)(iVar2 + 0x20);
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  uVar8 = *(undefined4 *)(param_1 + 0x10);
  FUN_000212a0(param_1,uVar4);
  uVar6 = FUN_00022c14();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (&UNK_00030c5c,&UNK_00030c5c,uVar6,uVar4,uVar8);
  if (unaff_w21 == 0) {
    auStack_a8[0] = 0;
    uVar7 = FUN_0002381c();
    uVar6 = uVar5;
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&UNK_00030bc8,auStack_a8,uVar5,&UNK_00030bc8,uVar7);
    uVar8 = (undefined4)uVar6;
    uStack_78 = uStack_90;
    uStack_70 = (undefined1)uStack_88;
    uStack_6f = uStack_88._1_1_;
    uStack_6e = uStack_88._2_2_;
    uStack_51 = 1;
    uVar4 = __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF(&uStack_51,uVar5);
    uVar3 = (undefined1)((uint)uVar8 >> 8);
    (**(code **)(iVar2 + 4))(auStack_b0 + -(iVar1 + 0xfU & 0xfffffff0),uVar5);
    uStack_64 = (undefined1)uVar8;
    uStack_62 = (undefined2)((uint)uVar8 >> 0x10);
    uStack_88 = CONCAT44(uVar4,CONCAT22(uStack_6e,CONCAT11(uStack_6f,uStack_70)));
    uStack_90 = uStack_78;
    uStack_80 = CONCAT26(uStack_62,CONCAT15(uVar3,CONCAT14(uStack_64,extraout_w1)));
    uStack_6c = uVar4;
    uStack_68 = extraout_w1;
    uStack_63 = uVar3;
    FUN_0002385c(&uStack_90,auStack_a8);
    FUN_00021304(param_1);
    FUN_00014648(&uStack_78);
    in_w8[1] = uStack_88;
    *in_w8 = uStack_90;
    in_w8[2] = uStack_80;
  }
  else {
    FUN_00021304(param_1);
  }
  return;
}



/* Entry: 00022eb4; end: 00022eb7;  */

undefined8 * FUN_00022eb4(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  FUN_000103b4(*(undefined4 *)((int)param_2 + 4),uVar1);
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  *(undefined1 *)((int)param_1 + 9) = *(undefined1 *)((int)param_2 + 9);
  *(undefined2 *)((int)param_1 + 10) = *(undefined2 *)((int)param_2 + 10);
  return param_1;
}



/* Entry: 00022eb8; end: 00022ec7;  */

void FUN_00022eb8(int param_1)

{
  if (*(byte *)(param_1 + 8) - 1 < 2) {
                    /* WARNING: Could not recover jumptable at 0x000276e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_00030584)(*(undefined4 *)(param_1 + 4));
    return;
  }
  return;
}



/* Entry: 00022ec8; end: 00022f27;  */

undefined8 * FUN_00022ec8(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  FUN_000103b4(*(undefined4 *)((int)param_2 + 4),uVar1);
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  *(undefined1 *)((int)param_1 + 9) = *(undefined1 *)((int)param_2 + 9);
  *(undefined2 *)((int)param_1 + 10) = *(undefined2 *)((int)param_2 + 10);
  return param_1;
}



/* Entry: 00022f28; end: 00022f93;  */

undefined4 * FUN_00022f28(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  
  *param_1 = *param_2;
  uVar1 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_000103b4(uVar1,uVar3);
  uVar2 = param_1[1];
  param_1[1] = uVar1;
  uVar4 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar3;
  FUN_000103d0(uVar2,uVar4);
  *(undefined1 *)((int)param_1 + 9) = *(undefined1 *)((int)param_2 + 9);
  *(undefined2 *)((int)param_1 + 10) = *(undefined2 *)((int)param_2 + 10);
  return param_1;
}



/* Entry: 00022f94; end: 00022fe3;  */

undefined8 * FUN_00022f94(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  *param_1 = *param_2;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  FUN_000103d0(*(undefined4 *)((int)param_1 + 4),uVar2);
  *(undefined1 *)((int)param_1 + 9) = *(undefined1 *)((int)param_2 + 9);
  *(undefined2 *)((int)param_1 + 10) = *(undefined2 *)((int)param_2 + 10);
  return param_1;
}



/* Entry: 00022fe4; end: 0002302b;  */

int FUN_00022fe4(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && ((char)param_1[3] != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = *(byte *)(param_1 + 2) ^ 0xff;
  if (*(byte *)(param_1 + 2) < 3) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 0002302c; end: 0002306f;  */

void FUN_0002302c(ulonglong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xfe) {
    if (0xfd < param_3) {
      *(undefined1 *)((int)param_1 + 0xc) = 0;
    }
    if (param_2 != 0) {
      *(char *)(param_1 + 1) = -(char)param_2;
      return;
    }
  }
  else {
    *(undefined4 *)(param_1 + 1) = 0;
    *param_1 = (ulonglong)(param_2 - 0xfe);
    if (0xfd < param_3) {
      *(undefined1 *)((int)param_1 + 0xc) = 1;
    }
  }
  return;
}



/* Entry: 00023070; end: 00023077;  */

undefined8 FUN_00023070(void)

{
  return 0;
}



/* Entry: 00023078; end: 0002307b;  */

void FUN_00023078(void)

{
  return;
}



/* Entry: 0002307c; end: 0002307f;  */

void FUN_0002307c(void)

{
  return;
}



/* Entry: 00023080; end: 0002308f;  */

undefined1  [16] FUN_00023080(void)

{
  return ZEXT816(0x30bc8);
}



/* Entry: 00023090; end: 000230bb;  */

longlong FUN_00023090(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  _swift_retain((ulonglong)uVar1);
  return (ulonglong)uVar1 + 8;
}



/* Entry: 000230bc; end: 000230eb;  */

void FUN_000230bc(int param_1)

{
  FUN_000103d0(*(undefined4 *)(param_1 + 4),*(undefined1 *)(param_1 + 8));
  if (*(byte *)(param_1 + 0x14) - 1 < 2) {
                    /* WARNING: Could not recover jumptable at 0x000276e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_00030584)(*(undefined4 *)(param_1 + 0x10));
    return;
  }
  return;
}



/* Entry: 000230ec; end: 00023177;  */

undefined8 * FUN_000230ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  FUN_000103b4(*(undefined4 *)((int)param_2 + 4),uVar1);
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  *(undefined1 *)((int)param_1 + 9) = *(undefined1 *)((int)param_2 + 9);
  *(undefined2 *)((int)param_1 + 10) = *(undefined2 *)((int)param_2 + 10);
  uVar2 = *(undefined8 *)((int)param_2 + 0xc);
  uVar1 = *(undefined1 *)((int)param_2 + 0x14);
  FUN_000103b4(*(undefined4 *)(param_2 + 2),uVar1);
  *(undefined8 *)((int)param_1 + 0xc) = uVar2;
  *(undefined1 *)((int)param_1 + 0x14) = uVar1;
  *(undefined1 *)((int)param_1 + 0x15) = *(undefined1 *)((int)param_2 + 0x15);
  *(undefined2 *)((int)param_1 + 0x16) = *(undefined2 *)((int)param_2 + 0x16);
  return param_1;
}



/* Entry: 00023178; end: 00023223;  */

undefined4 * FUN_00023178(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  
  *param_1 = *param_2;
  uVar1 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_000103b4(uVar1,uVar3);
  uVar2 = param_1[1];
  param_1[1] = uVar1;
  uVar4 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar3;
  FUN_000103d0(uVar2,uVar4);
  *(undefined1 *)((int)param_1 + 9) = *(undefined1 *)((int)param_2 + 9);
  *(undefined2 *)((int)param_1 + 10) = *(undefined2 *)((int)param_2 + 10);
  param_1[3] = param_2[3];
  uVar1 = param_2[4];
  uVar3 = *(undefined1 *)(param_2 + 5);
  FUN_000103b4(uVar1,uVar3);
  uVar2 = param_1[4];
  param_1[4] = uVar1;
  uVar4 = *(undefined1 *)(param_1 + 5);
  *(undefined1 *)(param_1 + 5) = uVar3;
  FUN_000103d0(uVar2,uVar4);
  *(undefined1 *)((int)param_1 + 0x15) = *(undefined1 *)((int)param_2 + 0x15);
  *(undefined2 *)((int)param_1 + 0x16) = *(undefined2 *)((int)param_2 + 0x16);
  return param_1;
}



/* Entry: 00023224; end: 0002329f;  */

undefined8 * FUN_00023224(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  *param_1 = *param_2;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  FUN_000103d0(*(undefined4 *)((int)param_1 + 4),uVar2);
  *(undefined1 *)((int)param_1 + 9) = *(undefined1 *)((int)param_2 + 9);
  *(undefined2 *)((int)param_1 + 10) = *(undefined2 *)((int)param_2 + 10);
  uVar1 = *(undefined1 *)((int)param_2 + 0x14);
  *(undefined8 *)((int)param_1 + 0xc) = *(undefined8 *)((int)param_2 + 0xc);
  uVar2 = *(undefined1 *)((int)param_1 + 0x14);
  *(undefined1 *)((int)param_1 + 0x14) = uVar1;
  FUN_000103d0(*(undefined4 *)(param_1 + 2),uVar2);
  *(undefined1 *)((int)param_1 + 0x15) = *(undefined1 *)((int)param_2 + 0x15);
  *(undefined2 *)((int)param_1 + 0x16) = *(undefined2 *)((int)param_2 + 0x16);
  return param_1;
}



/* Entry: 000232a0; end: 000232e7;  */

int FUN_000232a0(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && ((char)param_1[6] != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = *(byte *)(param_1 + 2) ^ 0xff;
  if (*(byte *)(param_1 + 2) < 3) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 000232e8; end: 0002332b;  */

void FUN_000232e8(ulonglong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xfe) {
    if (0xfd < param_3) {
      *(undefined1 *)(param_1 + 3) = 0;
    }
    if (param_2 != 0) {
      *(char *)(param_1 + 1) = -(char)param_2;
      return;
    }
  }
  else {
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = (ulonglong)(param_2 - 0xfe);
    if (0xfd < param_3) {
      *(undefined1 *)(param_1 + 3) = 1;
    }
  }
  return;
}



/* Entry: 0002332c; end: 0002333b;  */

undefined1  [16] FUN_0002332c(void)

{
  return ZEXT816(0x30c08);
}



/* Entry: 0002333c; end: 000233cb;  */

int FUN_0002333c(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_000233b8;
        goto LAB_0002339c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_0002339c:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_000233b8:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 000233cc; end: 0002347b;  */

void FUN_000233cc(char *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 2;
  if (0xfffeff < param_3 + 1) {
    uVar3 = 4;
  }
  if (param_3 + 1 >> 8 < 0xff) {
    uVar3 = 1;
  }
  uVar2 = 0;
  if (0xfe < param_3) {
    uVar2 = uVar3;
  }
  if (param_2 < 0xff) {
    if (uVar2 < 2) {
      if (uVar2 != 0) {
        param_1[1] = '\0';
        if (param_2 == 0) {
          return;
        }
        goto LAB_0002344c;
      }
    }
    else if (uVar2 == 2) {
      param_1[1] = '\0';
      param_1[2] = '\0';
    }
    else {
      param_1[1] = '\0';
      param_1[2] = '\0';
      param_1[3] = '\0';
      param_1[4] = '\0';
    }
    if (param_2 != 0) {
LAB_0002344c:
      *param_1 = (char)param_2 + '\x01';
      return;
    }
  }
  else {
    iVar1 = (param_2 - 0xff >> 8) + 1;
    *param_1 = (char)(param_2 - 0xff);
    if (1 < uVar2) {
      if (uVar2 != 2) {
        *(int *)(param_1 + 1) = iVar1;
        return;
      }
      *(short *)(param_1 + 1) = (short)iVar1;
      return;
    }
    if (uVar2 != 0) {
      param_1[1] = (char)iVar1;
      return;
    }
  }
  return;
}



/* Entry: 0002347c; end: 00023483;  */

undefined1 FUN_0002347c(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 00023484; end: 00023487;  */

void FUN_00023484(void)

{
  return;
}



/* Entry: 00023488; end: 0002348f;  */

void FUN_00023488(undefined1 *param_1,undefined1 param_2)

{
  *param_1 = param_2;
  return;
}



/* Entry: 00023490; end: 0002349f;  */

undefined1  [16] FUN_00023490(void)

{
  return ZEXT816(0x30c5c);
}



/* Entry: 000234a0; end: 000234a3;  */

void FUN_000234a0(void)

{
  return;
}



/* Entry: 000234a4; end: 000234a7;  */

uint FUN_000234a4(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 000234a8; end: 000234ab;  */

void FUN_000234a8(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 2;
  if (0xffff < param_3 + 1U) {
    uVar2 = 4;
  }
  if (param_3 + 1U < 0x100) {
    uVar2 = 1;
  }
  uVar1 = 0;
  if (param_3 != 0) {
    uVar1 = uVar2;
  }
  if (param_2 == 0) {
    if (1 < uVar1) {
      if (uVar1 == 2) {
        *(undefined2 *)param_1 = 0;
        return;
      }
      *param_1 = 0;
      return;
    }
    if (uVar1 != 0) {
      *(undefined1 *)param_1 = 0;
      return;
    }
  }
  else if (uVar1 < 2) {
    if (uVar1 != 0) {
      *(char *)param_1 = (char)param_2;
      return;
    }
  }
  else {
    if (uVar1 == 2) {
      *(short *)param_1 = (short)param_2;
      return;
    }
    *param_1 = param_2;
  }
  return;
}



/* Entry: 000234ac; end: 000234b3;  */

undefined8 FUN_000234ac(void)

{
  return 0;
}



/* Entry: 000234b4; end: 000234b7;  */

void FUN_000234b4(void)

{
  return;
}



/* Entry: 000234b8; end: 000234bb;  */

void FUN_000234b8(void)

{
  return;
}



/* Entry: 000234bc; end: 000234cb;  */

undefined1  [16] FUN_000234bc(void)

{
  return ZEXT816(0x30ca8);
}



/* Entry: 000234cc; end: 0002351b;  */

uint FUN_000234cc(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 0002351c; end: 00023597;  */

void FUN_0002351c(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 2;
  if (0xffff < param_3 + 1U) {
    uVar2 = 4;
  }
  if (param_3 + 1U < 0x100) {
    uVar2 = 1;
  }
  uVar1 = 0;
  if (param_3 != 0) {
    uVar1 = uVar2;
  }
  if (param_2 == 0) {
    if (1 < uVar1) {
      if (uVar1 == 2) {
        *(undefined2 *)param_1 = 0;
        return;
      }
      *param_1 = 0;
      return;
    }
    if (uVar1 != 0) {
      *(undefined1 *)param_1 = 0;
      return;
    }
  }
  else if (uVar1 < 2) {
    if (uVar1 != 0) {
      *(char *)param_1 = (char)param_2;
      return;
    }
  }
  else {
    if (uVar1 == 2) {
      *(short *)param_1 = (short)param_2;
      return;
    }
    *param_1 = param_2;
  }
  return;
}



/* Entry: 00023598; end: 0002359f;  */

undefined8 FUN_00023598(void)

{
  return 0;
}



/* Entry: 000235a0; end: 000235a3;  */

void FUN_000235a0(void)

{
  return;
}



/* Entry: 000235a4; end: 000235a7;  */

void FUN_000235a4(void)

{
  return;
}



/* Entry: 000235a8; end: 000235b7;  */

undefined1  [16] FUN_000235a8(void)

{
  return ZEXT816(0x30cf4);
}



/* Entry: 000235b8; end: 000235bb;  */

void FUN_000235b8(void)

{
  if (iRam00035274 != 0) {
    return;
  }
  iRam00035274 = _swift_getWitnessTable(&UNK_00029154,&UNK_00030cf4);
  return;
}



/* Entry: 000235bc; end: 000235fb;  */

void FUN_000235bc(void)

{
  if (iRam00035274 != 0) {
    return;
  }
  iRam00035274 = _swift_getWitnessTable(&UNK_00029154,&UNK_00030cf4);
  return;
}



/* Entry: 000235fc; end: 000235ff;  */

void FUN_000235fc(void)

{
  if (iRam00035278 != 0) {
    return;
  }
  iRam00035278 = _swift_getWitnessTable(&UNK_0002920c,&UNK_00030ca8);
  return;
}



/* Entry: 00023600; end: 0002363f;  */

void FUN_00023600(void)

{
  if (iRam00035278 != 0) {
    return;
  }
  iRam00035278 = _swift_getWitnessTable(&UNK_0002920c,&UNK_00030ca8);
  return;
}



/* Entry: 00023640; end: 00023643;  */

void FUN_00023640(void)

{
  if (iRam0003527c != 0) {
    return;
  }
  iRam0003527c = _swift_getWitnessTable(&UNK_000292c4,&UNK_00030c5c);
  return;
}



/* Entry: 00023644; end: 00023683;  */

void FUN_00023644(void)

{
  if (iRam0003527c != 0) {
    return;
  }
  iRam0003527c = _swift_getWitnessTable(&UNK_000292c4,&UNK_00030c5c);
  return;
}



/* Entry: 00023684; end: 00023687;  */

void FUN_00023684(void)

{
  if (iRam00035280 != 0) {
    return;
  }
  iRam00035280 = _swift_getWitnessTable(&UNK_0002925c,&UNK_00030c5c);
  return;
}



/* Entry: 00023688; end: 000236c7;  */

void FUN_00023688(void)

{
  if (iRam00035280 != 0) {
    return;
  }
  iRam00035280 = _swift_getWitnessTable(&UNK_0002925c,&UNK_00030c5c);
  return;
}



/* Entry: 000236c8; end: 000236cb;  */

void FUN_000236c8(void)

{
  if (iRam00035284 != 0) {
    return;
  }
  iRam00035284 = _swift_getWitnessTable(&UNK_00029234,&UNK_00030c5c);
  return;
}



/* Entry: 000236cc; end: 0002370b;  */

void FUN_000236cc(void)

{
  if (iRam00035284 != 0) {
    return;
  }
  iRam00035284 = _swift_getWitnessTable(&UNK_00029234,&UNK_00030c5c);
  return;
}



/* Entry: 0002370c; end: 0002370f;  */

void FUN_0002370c(void)

{
  if (iRam00035288 != 0) {
    return;
  }
  iRam00035288 = _swift_getWitnessTable(&UNK_000290ec,&UNK_00030cf4);
  return;
}



/* Entry: 00023710; end: 0002374f;  */

void FUN_00023710(void)

{
  if (iRam00035288 != 0) {
    return;
  }
  iRam00035288 = _swift_getWitnessTable(&UNK_000290ec,&UNK_00030cf4);
  return;
}



/* Entry: 00023750; end: 00023753;  */

void FUN_00023750(void)

{
  if (iRam0003528c != 0) {
    return;
  }
  iRam0003528c = _swift_getWitnessTable(&UNK_000290c4,&UNK_00030cf4);
  return;
}



/* Entry: 00023754; end: 00023793;  */

void FUN_00023754(void)

{
  if (iRam0003528c != 0) {
    return;
  }
  iRam0003528c = _swift_getWitnessTable(&UNK_000290c4,&UNK_00030cf4);
  return;
}



/* Entry: 00023794; end: 00023797;  */

void FUN_00023794(void)

{
  if (iRam00035290 != 0) {
    return;
  }
  iRam00035290 = _swift_getWitnessTable(&UNK_000291a4,&UNK_00030ca8);
  return;
}



/* Entry: 00023798; end: 000237d7;  */

void FUN_00023798(void)

{
  if (iRam00035290 != 0) {
    return;
  }
  iRam00035290 = _swift_getWitnessTable(&UNK_000291a4,&UNK_00030ca8);
  return;
}



/* Entry: 000237d8; end: 000237db;  */

void FUN_000237d8(void)

{
  if (iRam00035294 != 0) {
    return;
  }
  iRam00035294 = _swift_getWitnessTable(&UNK_0002917c,&UNK_00030ca8);
  return;
}



/* Entry: 000237dc; end: 0002381b;  */

void FUN_000237dc(void)

{
  if (iRam00035294 != 0) {
    return;
  }
  iRam00035294 = _swift_getWitnessTable(&UNK_0002917c,&UNK_00030ca8);
  return;
}



/* Entry: 0002381c; end: 0002385b;  */

void FUN_0002381c(void)

{
  if (iRam0003529c != 0) {
    return;
  }
  iRam0003529c = _swift_getWitnessTable(&UNK_00028fc8,&UNK_00030bc8);
  return;
}



/* Entry: 0002385c; end: 0002388f;  */

undefined8 FUN_0002385c(undefined8 param_1,undefined8 param_2)

{
  FUN_000230ec(param_2,param_1,&UNK_00030c08);
  return param_2;
}



/* Entry: 00023890; end: 00023893;  */

void FUN_00023890(void)

{
  __ss6HasherV8_combineyySuF(0);
  return;
}



/* Entry: 00023894; end: 00023897;  */

void FUN_00023894(void)

{
  __ss6HasherV8_combineyySuF(0);
  return;
}



/* Entry: 00023898; end: 0002389b;  */

void FUN_00023898(void)

{
  __ss6HasherV5_seedABSi_tcfC();
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 0002389c; end: 0002389f;  */

void FUN_0002389c(void)

{
  __ss6HasherV5_seedABSi_tcfC();
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 000238a0; end: 000238a3;  */

void FUN_000238a0(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 2;
  if (0xffff < param_3 + 1U) {
    uVar2 = 4;
  }
  if (param_3 + 1U < 0x100) {
    uVar2 = 1;
  }
  uVar1 = 0;
  if (param_3 != 0) {
    uVar1 = uVar2;
  }
  if (param_2 == 0) {
    if (1 < uVar1) {
      if (uVar1 == 2) {
        *(undefined2 *)param_1 = 0;
        return;
      }
      *param_1 = 0;
      return;
    }
    if (uVar1 != 0) {
      *(undefined1 *)param_1 = 0;
      return;
    }
  }
  else if (uVar1 < 2) {
    if (uVar1 != 0) {
      *(char *)param_1 = (char)param_2;
      return;
    }
  }
  else {
    if (uVar1 == 2) {
      *(short *)param_1 = (short)param_2;
      return;
    }
    *param_1 = param_2;
  }
  return;
}



/* Entry: 000238a4; end: 000238a7;  */

void FUN_000238a4(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 2;
  if (0xffff < param_3 + 1U) {
    uVar2 = 4;
  }
  if (param_3 + 1U < 0x100) {
    uVar2 = 1;
  }
  uVar1 = 0;
  if (param_3 != 0) {
    uVar1 = uVar2;
  }
  if (param_2 == 0) {
    if (1 < uVar1) {
      if (uVar1 == 2) {
        *(undefined2 *)param_1 = 0;
        return;
      }
      *param_1 = 0;
      return;
    }
    if (uVar1 != 0) {
      *(undefined1 *)param_1 = 0;
      return;
    }
  }
  else if (uVar1 < 2) {
    if (uVar1 != 0) {
      *(char *)param_1 = (char)param_2;
      return;
    }
  }
  else {
    if (uVar1 == 2) {
      *(short *)param_1 = (short)param_2;
      return;
    }
    *param_1 = param_2;
  }
  return;
}



/* Entry: 000238a8; end: 000238ab;  */

void FUN_000238a8(void)

{
  undefined1 *in_w8;
  
  *in_w8 = 1;
  return;
}



/* Entry: 000238ac; end: 000238af;  */

void FUN_000238ac(void)

{
  undefined1 *in_w8;
  
  *in_w8 = 1;
  return;
}



/* Entry: 000238b0; end: 000238b3;  */

void FUN_000238b0(void)

{
  __ss6HasherV5_seedABSi_tcfC(0);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 000238b4; end: 000238b7;  */

void FUN_000238b4(void)

{
  __ss6HasherV5_seedABSi_tcfC(0);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 000238b8; end: 000238bb;  */

undefined8 * FUN_000238b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  FUN_000103b4(*(undefined4 *)((int)param_2 + 4),uVar1);
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  *(undefined1 *)((int)param_1 + 9) = *(undefined1 *)((int)param_2 + 9);
  *(undefined2 *)((int)param_1 + 10) = *(undefined2 *)((int)param_2 + 10);
  return param_1;
}



/* Entry: 000238bc; end: 000238bf;  */

undefined8 * FUN_000238bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  FUN_000103b4(*(undefined4 *)((int)param_2 + 4),uVar1);
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  *(undefined1 *)((int)param_1 + 9) = *(undefined1 *)((int)param_2 + 9);
  *(undefined2 *)((int)param_1 + 10) = *(undefined2 *)((int)param_2 + 10);
  return param_1;
}



/* Entry: 000238c0; end: 000238c3;  */

uint FUN_000238c0(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 000238c4; end: 000238c7;  */

uint FUN_000238c4(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 000238c8; end: 000238cb;  */

void FUN_000238c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  byte *in_w8;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar2 = __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(0x74786574,0,&UNK_0000e400);
  auVar3 = __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(param_1,param_2,param_3);
  if (auVar2 == auVar3) {
    FUN_000103d0(param_2,param_3);
    bVar1 = 0;
  }
  else {
    bVar1 = __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0x74786574,0,&UNK_0000e400,param_1,param_2,param_3,0);
    FUN_000103d0(param_2,param_3);
    bVar1 = (bVar1 ^ 0xff) & 1;
  }
  *in_w8 = bVar1;
  return;
}



/* Entry: 000238cc; end: 000238cf;  */

void FUN_000238cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  byte *in_w8;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar2 = __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(0x74786574,0,&UNK_0000e400);
  auVar3 = __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(param_1,param_2,param_3);
  if (auVar2 == auVar3) {
    FUN_000103d0(param_2,param_3);
    bVar1 = 0;
  }
  else {
    bVar1 = __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0x74786574,0,&UNK_0000e400,param_1,param_2,param_3,0);
    FUN_000103d0(param_2,param_3);
    bVar1 = (bVar1 ^ 0xff) & 1;
  }
  *in_w8 = bVar1;
  return;
}



/* Entry: 000238d0; end: 000238ff;  */

undefined8 FUN_000238d0(void)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  int unaff_w20;
  
  uVar1 = *(uint *)(unaff_w20 + 8);
  uVar2 = *(uint *)(unaff_w20 + 0xc) >> 1;
  if (uVar1 == uVar2) {
    return 1;
  }
  if ((int)uVar1 < (int)uVar2) {
    *(uint *)(unaff_w20 + 8) = uVar1 + 1;
    return 0;
  }
                    /* WARNING: Does not return */
  uVar3 = SoftwareBreakpoint(1,0x23900);
  (*(code *)uVar3)();
}



/* Entry: 00023900; end: 00023937;  */

undefined4 FUN_00023900(void)

{
  undefined4 uVar1;
  char *unaff_w20;
  
  uVar1 = 0x14;
  if (*unaff_w20 == '\x01') {
    uVar1 = 0x15;
  }
  return uVar1;
}



/* Entry: 00023938; end: 00023a97;  */

void FUN_00023938(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined1 uVar2;
  undefined1 *in_w8;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  auVar3 = __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(0x14,", expected one.",0xd0008000);
  auVar4 = __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(param_1,param_2,param_3);
  if ((auVar3 == auVar4) ||
     (uVar1 = __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0x14,", expected one.",0xd0008000,param_1,param_2,param_3,0),
     (uVar1 & 1) != 0)) {
    FUN_000103d0(param_2,param_3);
    uVar2 = 0;
  }
  else {
    auVar3 = __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(0x15,"tionOpen",0xd0008000);
    auVar4 = __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(param_1,param_2,param_3);
    if (auVar3 == auVar4) {
      FUN_000103d0(param_2,param_3);
      uVar2 = 1;
    }
    else {
      uVar1 = __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0x15,"tionOpen",0xd0008000,param_1,param_2,param_3,0);
      FUN_000103d0(param_2,param_3);
      uVar2 = 1;
      if ((uVar1 & 1) == 0) {
        uVar2 = 2;
      }
    }
  }
  *in_w8 = uVar2;
  return;
}



/* Entry: 00023a98; end: 00023aa3;  */

undefined1  [16] FUN_00023a98(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 00023aa4; end: 00023aaf;  */

void FUN_00023aa4(void)

{
  undefined1 *in_w8;
  
  *in_w8 = 2;
  return;
}



/* Entry: 00023ab0; end: 00023ac3;  */

void FUN_00023ab0(undefined8 param_1)

{
  undefined *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  UNRECOVERED_JUMPTABLE = PTR___ss9CodingKeyPsE16debugDescriptionSSvg_000304d8;
  uVar1 = FUN_00024090();
                    /* WARNING: Could not recover jumptable at 0x000248e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)(param_1,uVar1);
  return;
}



/* Entry: 00023ac4; end: 00023ad7;  */

void FUN_00023ac4(undefined8 param_1)

{
  undefined *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  UNRECOVERED_JUMPTABLE = PTR___ss9CodingKeyPsE11descriptionSSvg_000304d4;
  uVar1 = FUN_00024090();
                    /* WARNING: Could not recover jumptable at 0x000248e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)(param_1,uVar1);
  return;
}



/* Entry: 00023ad8; end: 00023adf;  */

undefined8 FUN_00023ad8(void)

{
  return 1;
}



/* Entry: 00023ae0; end: 00023b1f;  */

void FUN_00023ae0(void)

{
  __ss6HasherV5_seedABSi_tcfC(0);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00023b20; end: 00023b43;  */

void FUN_00023b20(void)

{
  __ss6HasherV8_combineyySuF(0);
  return;
}



/* Entry: 00023b44; end: 00023b7f;  */

void FUN_00023b44(void)

{
  __ss6HasherV5_seedABSi_tcfC();
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00023b80; end: 00023b9b;  */

undefined4 FUN_00023b80(void)

{
  return 0xe;
}



/* Entry: 00023b9c; end: 00023c6f;  */

void FUN_00023b9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  byte *in_w8;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar2 = __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(0xe,"tchApplicationClose",0xd0008000);
  auVar3 = __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(param_1,param_2,param_3);
  if (auVar2 == auVar3) {
    FUN_000103d0(param_2,param_3);
    bVar1 = 0;
  }
  else {
    bVar1 = __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0xe,"tchApplicationClose",0xd0008000,param_1,param_2,param_3,0);
    FUN_000103d0(param_2,param_3);
    bVar1 = (bVar1 ^ 0xff) & 1;
  }
  *in_w8 = bVar1;
  return;
}



/* Entry: 00023c70; end: 00023c7b;  */

undefined1  [16] FUN_00023c70(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 00023c7c; end: 00023c8f;  */

void FUN_00023c7c(undefined8 param_1)

{
  undefined *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  UNRECOVERED_JUMPTABLE = PTR___ss9CodingKeyPsE16debugDescriptionSSvg_000304d8;
  uVar1 = FUN_000240d0();
                    /* WARNING: Could not recover jumptable at 0x00023d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)(param_1,uVar1);
  return;
}



/* Entry: 00023c90; end: 00023ca3;  */

void FUN_00023c90(undefined8 param_1)

{
  undefined *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  UNRECOVERED_JUMPTABLE = PTR___ss9CodingKeyPsE11descriptionSSvg_000304d4;
  uVar1 = FUN_000240d0();
                    /* WARNING: Could not recover jumptable at 0x00023d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)(param_1,uVar1);
  return;
}



/* Entry: 00023ca4; end: 00023cf7;  */

undefined1  [16] FUN_00023ca4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(0,0,0xe000);
  __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(0,0,0xe000);
  auVar1._8_8_ = auVar1._0_8_ >> 0x20;
  return auVar1;
}



/* Entry: 00023cf8; end: 00023d27;  */

void FUN_00023cf8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *in_w8;
  
  FUN_000103d0(param_2,param_3);
  *in_w8 = 1;
  return;
}



/* Entry: 00023d28; end: 00023d33;  */

undefined1  [16] FUN_00023d28(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 00023d34; end: 00023d3f;  */

void FUN_00023d34(void)

{
  undefined1 *in_w8;
  
  *in_w8 = 1;
  return;
}



/* Entry: 00023d40; end: 00023d53;  */

void FUN_00023d40(undefined8 param_1)

{
  undefined *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  UNRECOVERED_JUMPTABLE = PTR___ss9CodingKeyPsE16debugDescriptionSSvg_000304d8;
  uVar1 = FUN_00024110();
                    /* WARNING: Could not recover jumptable at 0x00023d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)(param_1,uVar1);
  return;
}



/* Entry: 00023d54; end: 00023d67;  */

void FUN_00023d54(undefined8 param_1)

{
  undefined *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  UNRECOVERED_JUMPTABLE = PTR___ss9CodingKeyPsE11descriptionSSvg_000304d4;
  uVar1 = FUN_00024110();
                    /* WARNING: Could not recover jumptable at 0x00023d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)(param_1,uVar1);
  return;
}



/* Entry: 00023d68; end: 00023d9f;  */

void FUN_00023d68(undefined8 param_1,undefined8 param_2,code *param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  
  uVar1 = (*param_3)();
                    /* WARNING: Could not recover jumptable at 0x00023d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar1);
  return;
}


