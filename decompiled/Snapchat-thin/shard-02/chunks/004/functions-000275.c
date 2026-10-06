/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101cb4414; end: 101cb453f;  */

undefined2 * FUN_101cb4414(undefined2 *param_1,undefined2 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  
  *param_1 = *param_2;
  lVar8 = (long)*(int *)(param_3 + 0x18);
  lVar4 = 0;
  func_0x000107c5eea4();
  lVar9 = *(long *)(lVar4 + -8);
  pcVar10 = *(code **)(lVar9 + 0x30);
  lVar5 = (long)param_1 + lVar8;
  (*pcVar10)(lVar5,1,lVar4);
  lVar6 = (long)param_2 + lVar8;
  (*pcVar10)(lVar6,1,lVar4);
  if ((int)lVar5 == 0) {
    if ((int)lVar6 == 0) {
      (**(code **)(lVar9 + 0x28))((long)param_1 + lVar8,(long)param_2 + lVar8,lVar4);
      goto LAB_101cb44f0;
    }
    (**(code **)(lVar9 + 8))((long)param_1 + lVar8,lVar4);
  }
  else if ((int)lVar6 == 0) {
    (**(code **)(lVar9 + 0x20))((long)param_1 + lVar8,(long)param_2 + lVar8,lVar4);
    (**(code **)(lVar9 + 0x38))((long)param_1 + lVar8,0,1,lVar4);
    goto LAB_101cb44f0;
  }
  lVar5 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  func_0x000107c610b4((long)param_1 + lVar8,(long)param_2 + lVar8,
                      *(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
LAB_101cb44f0:
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  uVar3 = puVar2[1];
  uVar7 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  func_0x000107c6142c(uVar7);
  return param_1;
}



/* Entry: 101cb4540; end: 101cb4557;  */

void FUN_101cb4540(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 101cb4558; end: 101cb45db;  */

void FUN_101cb4558(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_40 = &UNK_10d9eef70;
  puStack_38 = &UNK_10d9eef88;
  lVar1 = 0x13f;
  func_0x0001000776dc();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &UNK_10d9eefa0;
    func_0x000107c6153c(param_1,0x100,4,&puStack_40,param_1 + 0x10);
  }
  return;
}



/* Entry: 101cb45dc; end: 101cb49db;  */

int FUN_101cb45dc(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfb < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 4) {
      iVar2 = 4;
    }
    if (param_2 + 4 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101cb4658;
        goto LAB_101cb463c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101cb463c:
      return ((uint)*param_1 | uVar1 << 8) - 4;
    }
  }
LAB_101cb4658:
  iVar2 = *param_1 - 5;
  if (*param_1 < 5) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101cb49dc; end: 101cb4a1b;  */

void FUN_101cb49dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e13530 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9ef0a4;
  func_0x000107c61520(&UNK_10d9ef0a4,&UNK_110466b40);
  puRam0000000112e13530 = puVar1;
  return;
}



/* Entry: 101cb4a1c; end: 101cb4a1f;  */

void FUN_101cb4a1c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e13538 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9ef004;
  func_0x000107c61520(&UNK_10d9ef004,&UNK_110466b40);
  puRam0000000112e13538 = puVar1;
  return;
}



/* Entry: 101cb4a20; end: 101cb4a5f;  */

void FUN_101cb4a20(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e13538 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9ef004;
  func_0x000107c61520(&UNK_10d9ef004,&UNK_110466b40);
  puRam0000000112e13538 = puVar1;
  return;
}



/* Entry: 101cb4a60; end: 101cb4a63;  */

void FUN_101cb4a60(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e13540 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9eefdc;
  func_0x000107c61520(&UNK_10d9eefdc,&UNK_110466b40);
  puRam0000000112e13540 = puVar1;
  return;
}



/* Entry: 101cb4a64; end: 101cb4aa3;  */

void FUN_101cb4a64(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e13540 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9eefdc;
  func_0x000107c61520(&UNK_10d9eefdc,&UNK_110466b40);
  puRam0000000112e13540 = puVar1;
  return;
}



/* Entry: 101cb4aa4; end: 101cb4b07;  */

ulong FUN_101cb4aa4(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (3 < uVar1) {
    uVar1 = 4;
  }
  return uVar1;
}



/* Entry: 101cb4b08; end: 101cb4b87;  */

void FUN_101cb4b08(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e135d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9eee50;
  func_0x000107c61520(&UNK_10d9eee50,&UNK_110466ab0);
  puRam0000000112e135d0 = puVar1;
  return;
}



/* Entry: 101cb4b88; end: 101cb4bcb;  */

void FUN_101cb4b88(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 101cb4bcc; end: 101cb4c77;  */

void FUN_101cb4bcc(void)

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



/* Entry: 101cb4c78; end: 101cb4c9b;  */

void FUN_101cb4c78(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 101cb4c9c; end: 101cb4cf7;  */

void FUN_101cb4c9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x000101cb5c28();
  func_0x000107c5fc44(param_1,param_2,param_3,param_4,uVar1);
  return;
}



/* Entry: 101cb4cf8; end: 101cb4d43;  */

void FUN_101cb4cf8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000101cb5c28();
  func_0x000107c5fc30(param_1,param_2,param_3,uVar1);
  return;
}



/* Entry: 101cb4d44; end: 101cb4fc3;  */

void FUN_101cb4d44(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar3 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar5 = 0x5f6572756c696166;
  uVar2 = 0xee006e6f73616572;
  if (bVar3 != 2) {
    uVar5 = 0xd000000000000012;
    uVar2 = 0x800000010f009cd0;
  }
  uVar1 = 0xea00000000006564;
  uVar4 = 0x6f635f726f727265;
  if (bVar3 != 0) {
    uVar1 = 0xea00000000006570;
    uVar4 = 0x79745f726f727265;
  }
  if (bVar3 < 2) {
    uVar2 = uVar1;
    uVar5 = uVar4;
  }
  func_0x000107c5fb58(auStack_68,uVar5,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101cb4fc4; end: 101cb50e7;  */

void FUN_101cb4fc4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  
  bVar3 = *unaff_x20;
  uVar5 = 0x5f6572756c696166;
  uVar2 = 0xee006e6f73616572;
  if (bVar3 != 2) {
    uVar5 = 0xd000000000000012;
    uVar2 = 0x800000010f009cd0;
  }
  uVar1 = 0xea00000000006564;
  uVar4 = 0x6f635f726f727265;
  if (bVar3 != 0) {
    uVar1 = 0xea00000000006570;
    uVar4 = 0x79745f726f727265;
  }
  if (bVar3 < 2) {
    uVar2 = uVar1;
    uVar5 = uVar4;
  }
  *param_1 = uVar5;
  param_1[1] = uVar2;
  return;
}



/* Entry: 101cb50e8; end: 101cb510b;  */

void FUN_101cb50e8(undefined1 *param_1,undefined1 param_2)

{
  FUN_101cb53cc();
  *param_1 = param_2;
  return;
}



/* Entry: 101cb510c; end: 101cb5123;  */

undefined1  [16] FUN_101cb510c(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 101cb5124; end: 101cb5173;  */

void FUN_101cb5124(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_101cb52f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 101cb5174; end: 101cb52f7;  */

void FUN_101cb5174(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar4;
  undefined1 auStack_60 [11];
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar2 = 0x112e135e0;
  func_0x0001000285a8(0x112e135e0,&UNK_10d9ef120);
  lVar4 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar3);
  FUN_101cb52f8();
  func_0x000107c606ec(auStack_60 + -extraout_x8,&UNK_110466db8,&UNK_110466db8,param_1,uVar3,uVar1);
  uVar3 = *unaff_x20;
  uStack_51 = 0;
  func_0x000107c60528(uVar3,*(undefined1 *)(unaff_x20 + 1),&uStack_51,lVar2);
  if (unaff_x21 == 0) {
    uStack_52 = *(undefined1 *)((long)unaff_x20 + 9);
    uStack_53 = 1;
    func_0x000101cb5338();
    func_0x000107c60530(&uStack_52,&uStack_53,lVar2,&UNK_110466d28,uVar3);
    uStack_54 = 2;
    func_0x000107c60520(unaff_x20[2],unaff_x20[3],&uStack_54,lVar2);
    uStack_55 = 3;
    func_0x000107c60520(unaff_x20[4],unaff_x20[5],&uStack_55,lVar2);
  }
  (**(code **)(lVar4 + 8))(auStack_60 + -extraout_x8,lVar2);
  return;
}



/* Entry: 101cb52f8; end: 101cb5377;  */

void FUN_101cb52f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e135e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9ef3ac;
  func_0x000107c61520(&UNK_10d9ef3ac,&UNK_110466db8);
  puRam0000000112e135e8 = puVar1;
  return;
}



/* Entry: 101cb5378; end: 101cb53b7;  */

void FUN_101cb5378(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_101cb5430(&uStack_50);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_48;
    *param_1 = uStack_50;
    param_1[3] = uStack_38;
    param_1[2] = uStack_40;
    param_1[5] = uStack_28;
    param_1[4] = uStack_30;
  }
  return;
}



/* Entry: 101cb53b8; end: 101cb53cb;  */

void FUN_101cb53b8(void)

{
  FUN_101cb5174();
  return;
}



/* Entry: 101cb53cc; end: 101cb542f;  */

ulong FUN_101cb53cc(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (3 < uVar1) {
    uVar1 = 4;
  }
  return uVar1;
}



/* Entry: 101cb5430; end: 101cb562b;  */

/* WARNING: Removing unreachable block (ram,0x000101cb55c8) */
/* WARNING: Removing unreachable block (ram,0x000101cb5560) */
/* WARNING: Removing unreachable block (ram,0x000101cb5564) */

void FUN_101cb5430(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  long extraout_x8;
  long unaff_x21;
  long lVar11;
  undefined1 auStack_80 [12];
  uint uStack_74;
  undefined1 *puStack_70;
  long lStack_68;
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  byte abStack_52 [2];
  
  lVar3 = 0x112e136a8;
  func_0x0001000285a8(0x112e136a8,&UNK_10d9ef408);
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  func_0x0001000a8868(param_2,uVar1);
  FUN_101cb52f8();
  func_0x000107c606e0(auStack_80 + -extraout_x8,&UNK_110466db8,&UNK_110466db8,lVar4,uVar1,uVar2);
  if (unaff_x21 == 0) {
    abStack_52[1] = 0;
    pbVar5 = abStack_52 + 1;
    lVar4 = lVar3;
    func_0x000107c604e0();
    uStack_53 = 1;
    pbVar6 = pbVar5;
    func_0x000101cb5c68();
    func_0x000107c604e8(abStack_52,&UNK_110466d28,&uStack_53,lVar3,&UNK_110466d28,pbVar6);
    uStack_54 = 2;
    puVar7 = &uStack_54;
    lVar9 = lVar3;
    func_0x000107c604d4();
    uStack_74 = (uint)abStack_52[0];
    uStack_55 = 3;
    puVar8 = &uStack_55;
    lVar10 = lVar3;
    puStack_70 = puVar7;
    lStack_68 = lVar9;
    func_0x000107c604d4();
    (**(code **)(lVar11 + 8))(auStack_80 + -extraout_x8,lVar3);
    func_0x0001000834e4(param_2);
    *param_1 = pbVar5;
    *(char *)(param_1 + 1) = (char)lVar4;
    *(char *)((long)param_1 + 9) = (char)uStack_74;
    param_1[2] = puStack_70;
    param_1[3] = lStack_68;
    param_1[4] = puVar8;
    param_1[5] = lVar10;
  }
  else {
    func_0x0001000834e4(param_2);
  }
  return;
}



/* Entry: 101cb562c; end: 101cb562f;  */

void FUN_101cb562c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e135f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9ef128;
  func_0x000107c61520(&UNK_10d9ef128,&UNK_110466d28);
  puRam0000000112e135f8 = puVar1;
  return;
}



/* Entry: 101cb5630; end: 101cb566f;  */

void FUN_101cb5630(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e135f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9ef128;
  func_0x000107c61520(&UNK_10d9ef128,&UNK_110466d28);
  puRam0000000112e135f8 = puVar1;
  return;
}



/* Entry: 101cb5670; end: 101cb570f;  */

long FUN_101cb5670(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101cb5710; end: 101cb5793;  */

undefined8 * FUN_101cb5710(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
  *(undefined1 *)((long)param_1 + 9) = *(undefined1 *)((long)param_2 + 9);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[4] = param_2[4];
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 101cb5794; end: 101cb57e7;  */

undefined8 * FUN_101cb5794(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 101cb57e8; end: 101cb5b5f;  */

int FUN_101cb57e8(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 101cb5b60; end: 101cb5b9f;  */

void FUN_101cb5b60(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e13600 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9ef384;
  func_0x000107c61520(&UNK_10d9ef384,&UNK_110466db8);
  puRam0000000112e13600 = puVar1;
  return;
}



/* Entry: 101cb5ba0; end: 101cb5ba3;  */

void FUN_101cb5ba0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e13608 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9ef2e4;
  func_0x000107c61520(&UNK_10d9ef2e4,&UNK_110466db8);
  puRam0000000112e13608 = puVar1;
  return;
}



/* Entry: 101cb5ba4; end: 101cb5be3;  */

void FUN_101cb5ba4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e13608 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9ef2e4;
  func_0x000107c61520(&UNK_10d9ef2e4,&UNK_110466db8);
  puRam0000000112e13608 = puVar1;
  return;
}



/* Entry: 101cb5be4; end: 101cb5be7;  */

void FUN_101cb5be4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e13610 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9ef2bc;
  func_0x000107c61520(&UNK_10d9ef2bc,&UNK_110466db8);
  puRam0000000112e13610 = puVar1;
  return;
}



/* Entry: 101cb5be8; end: 101cb5ca7;  */

void FUN_101cb5be8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e13610 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9ef2bc;
  func_0x000107c61520(&UNK_10d9ef2bc,&UNK_110466db8);
  puRam0000000112e13610 = puVar1;
  return;
}



/* Entry: 101cb5ca8; end: 101cb5cbf;  */

undefined1 FUN_101cb5ca8(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 101cb5cc0; end: 101cb5d17; -[SCLockedCameraCaptureStorageManagementConstants init] */

void FUN_101cb5cc0(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd00000000000001f,0x800000010f009ca0,
                      "LockedCameraSharedObjects/LockedCameraCaptureStorageManagementConstants.swift"
                      ,0x4d,2,9,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101cb5d18);
  (*pcVar1)();
}



/* Entry: 101cb5d18; end: 101cb5dbf;  */

undefined1  [16] FUN_101cb5d18(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f009480;
  auVar1._0_8_ = 0xd000000000000021;
  return auVar1;
}



/* Entry: 101cb5dc0; end: 101cb5e0f;  */

void FUN_101cb5dc0(void)

{
  func_0x000101cb5df0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101cb5e10; end: 101cb5e23;  */

bool FUN_101cb5e10(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101cb5e24; end: 101cb5fef;  */

void FUN_101cb5e24(void)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  pcVar1 = "rageManagementConstants.swift";
  uVar4 = 0xd00000000000001a;
  if (cVar3 != '\x01') {
    pcVar1 = "overall_startup_latency_ms";
    uVar4 = 0xd000000000000019;
  }
  pcVar2 = "een implemented";
  uVar5 = 0xd000000000000012;
  if (cVar3 != '\0') {
    pcVar2 = pcVar1;
    uVar5 = uVar4;
  }
  func_0x000107c5fb58(auStack_68,uVar5,(ulong)pcVar2 | 0x8000000000000000);
  func_0x000107c6142c((ulong)pcVar2 | 0x8000000000000000);
  func_0x000107c606a8();
  return;
}



/* Entry: 101cb5ff0; end: 101cb60a3;  */

void FUN_101cb5ff0(undefined8 *param_1)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *unaff_x20;
  
  pcVar1 = "rageManagementConstants.swift";
  uVar3 = 0xd00000000000001a;
  if (*unaff_x20 != '\x01') {
    pcVar1 = "overall_startup_latency_ms";
    uVar3 = 0xd000000000000019;
  }
  pcVar2 = "een implemented";
  uVar4 = 0xd000000000000012;
  if (*unaff_x20 != '\0') {
    pcVar2 = pcVar1;
    uVar4 = uVar3;
  }
  *param_1 = uVar4;
  param_1[1] = (ulong)pcVar2 | 0x8000000000000000;
  return;
}



/* Entry: 101cb60a4; end: 101cb60c7;  */

void FUN_101cb60a4(undefined1 *param_1,undefined1 param_2)

{
  FUN_101cb6318();
  *param_1 = param_2;
  return;
}



/* Entry: 101cb60c8; end: 101cb60df;  */

undefined1  [16] FUN_101cb60c8(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 101cb60e0; end: 101cb612f;  */

void FUN_101cb60e0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_101cb6284();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 101cb6130; end: 101cb6283;  */

void FUN_101cb6130(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_60 [13];
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar3 = 0x112e136e0;
  func_0x0001000285a8(0x112e136e0,&UNK_10d9ef440);
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_60 + -extraout_x8;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  FUN_101cb6284();
  func_0x000107c606ec(puVar4,&UNK_110466fa0,&UNK_110466fa0,param_1,uVar1,uVar2);
  uStack_51 = 0;
  func_0x000107c60520(*unaff_x20,unaff_x20[1],&uStack_51,lVar3);
  if (unaff_x21 == 0) {
    uStack_52 = 1;
    func_0x000107c60528(unaff_x20[2],*(undefined1 *)(unaff_x20 + 3),&uStack_52,lVar3);
    uStack_53 = 2;
    func_0x000107c60528(unaff_x20[4],*(undefined1 *)(unaff_x20 + 5),&uStack_53,lVar3);
    (**(code **)(lVar5 + 8))(puVar4,lVar3);
  }
  else {
    (**(code **)(lVar5 + 8))(puVar4,lVar3);
  }
  return;
}



/* Entry: 101cb6284; end: 101cb62c3;  */

void FUN_101cb6284(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e136e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9ef5c0;
  func_0x000107c61520(&UNK_10d9ef5c0,&UNK_110466fa0);
  puRam0000000112e136e8 = puVar1;
  return;
}



/* Entry: 101cb62c4; end: 101cb6303;  */

void FUN_101cb62c4(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  FUN_101cb637c(&uStack_50);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_48;
    *param_1 = uStack_50;
    param_1[3] = CONCAT71(uStack_37,uStack_38);
    param_1[2] = uStack_40;
    *(undefined8 *)((long)param_1 + 0x21) = uStack_2f;
    *(ulong *)((long)param_1 + 0x19) = CONCAT17(uStack_30,uStack_37);
  }
  return;
}



/* Entry: 101cb6304; end: 101cb6317;  */

void FUN_101cb6304(void)

{
  FUN_101cb6130();
  return;
}



/* Entry: 101cb6318; end: 101cb637b;  */

ulong FUN_101cb6318(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (2 < uVar1) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 101cb637c; end: 101cb6543;  */

/* WARNING: Removing unreachable block (ram,0x000101cb64e0) */
/* WARNING: Removing unreachable block (ram,0x000101cb644c) */

void FUN_101cb637c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  long extraout_x8;
  long unaff_x21;
  long lVar10;
  undefined1 auStack_70 [8];
  undefined1 *puStack_68;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar3 = 0x112e13778;
  func_0x0001000285a8(0x112e13778,&UNK_10d9ef618);
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  func_0x0001000a8868(param_2,uVar1);
  FUN_101cb6284();
  func_0x000107c606e0(auStack_70 + -extraout_x8,&UNK_110466fa0,&UNK_110466fa0,lVar4,uVar1,uVar2);
  if (unaff_x21 == 0) {
    uStack_51 = 0;
    puVar5 = &uStack_51;
    lVar4 = lVar3;
    func_0x000107c604d4();
    uStack_52 = 1;
    puVar6 = &uStack_52;
    lVar8 = lVar3;
    func_0x000107c604e0();
    uStack_53 = 2;
    puVar7 = &uStack_53;
    lVar9 = lVar3;
    puStack_68 = puVar6;
    func_0x000107c604e0();
    (**(code **)(lVar10 + 8))(auStack_70 + -extraout_x8,lVar3);
    func_0x0001000834e4(param_2);
    *param_1 = puVar5;
    param_1[1] = lVar4;
    param_1[2] = puStack_68;
    *(char *)(param_1 + 3) = (char)lVar8;
    param_1[4] = puVar7;
    *(char *)(param_1 + 5) = (char)lVar9;
  }
  else {
    func_0x0001000834e4(param_2);
  }
  return;
}



/* Entry: 101cb6544; end: 101cb656f;  */

long FUN_101cb6544(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101cb6570; end: 101cb6577;  */

void FUN_101cb6570(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 101cb6578; end: 101cb65c3;  */

undefined8 * FUN_101cb6578(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  func_0x000107c61434();
  return param_1;
}



/* Entry: 101cb65c4; end: 101cb662f;  */

undefined8 * FUN_101cb65c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[2] = uVar1;
  uVar1 = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[4] = uVar1;
  return param_1;
}



/* Entry: 101cb6630; end: 101cb6683;  */

undefined8 * FUN_101cb6630(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  return param_1;
}



/* Entry: 101cb6684; end: 101cb68b7;  */

int FUN_101cb6684(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 0x29) != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 101cb68b8; end: 101cb68f7;  */

void FUN_101cb68b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e136f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9ef598;
  func_0x000107c61520(&UNK_10d9ef598,&UNK_110466fa0);
  puRam0000000112e136f0 = puVar1;
  return;
}



/* Entry: 101cb68f8; end: 101cb68fb;  */

void FUN_101cb68f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e136f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9ef4f8;
  func_0x000107c61520(&UNK_10d9ef4f8,&UNK_110466fa0);
  puRam0000000112e136f8 = puVar1;
  return;
}



/* Entry: 101cb68fc; end: 101cb693b;  */

void FUN_101cb68fc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e136f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9ef4f8;
  func_0x000107c61520(&UNK_10d9ef4f8,&UNK_110466fa0);
  puRam0000000112e136f8 = puVar1;
  return;
}



/* Entry: 101cb693c; end: 101cb693f;  */

void FUN_101cb693c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e13700 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9ef4d0;
  func_0x000107c61520(&UNK_10d9ef4d0,&UNK_110466fa0);
  puRam0000000112e13700 = puVar1;
  return;
}



/* Entry: 101cb6940; end: 101cb697f;  */

void FUN_101cb6940(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e13700 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9ef4d0;
  func_0x000107c61520(&UNK_10d9ef4d0,&UNK_110466fa0);
  puRam0000000112e13700 = puVar1;
  return;
}



/* Entry: 101cb6980; end: 101cb6987;  */

undefined8 FUN_101cb6980(void)

{
  return 1;
}



/* Entry: 101cb6988; end: 101cb69db;  */

void FUN_101cb6988(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c5fb58(auStack_68,0xd000000000000012,0x800000010f009cd0);
  func_0x000107c606a8();
  return;
}



/* Entry: 101cb69dc; end: 101cb69f7;  */

void FUN_101cb69dc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)
            (param_1,0xd000000000000012,0x800000010f009cd0);
  return;
}



/* Entry: 101cb69f8; end: 101cb6a47;  */

void FUN_101cb69f8(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68);
  func_0x000107c5fb58(auStack_68,0xd000000000000012,0x800000010f009cd0);
  func_0x000107c606a8();
  return;
}



/* Entry: 101cb6a48; end: 101cb6ab3;  */

void FUN_101cb6a48(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  lVar2 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(uVar1);
  *(bool *)param_1 = lVar2 != 0;
  return;
}



/* Entry: 101cb6ab4; end: 101cb6aef;  */

void FUN_101cb6ab4(undefined8 *param_1)

{
  *param_1 = 0xd000000000000012;
  param_1[1] = 0x800000010f009cd0;
  return;
}



/* Entry: 101cb6af0; end: 101cb6b5f;  */

void FUN_101cb6af0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_3);
  *(bool *)param_1 = lVar1 != 0;
  return;
}



/* Entry: 101cb6b60; end: 101cb6b77;  */

undefined1  [16] FUN_101cb6b60(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 101cb6b78; end: 101cb6bc7;  */

void FUN_101cb6b78(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_101cb6bc8();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 101cb6bc8; end: 101cb6c07;  */

void FUN_101cb6bc8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e13788 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9ef7a0;
  func_0x000107c61520(&UNK_10d9ef7a0,&UNK_110467180);
  puRam0000000112e13788 = puVar1;
  return;
}



/* Entry: 101cb6c08; end: 101cb6d2f;  */

/* WARNING: Removing unreachable block (ram,0x000101cb6ccc) */

void FUN_101cb6c08(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  
  lVar3 = 0x112e13790;
  func_0x0001000285a8(0x112e13790,&UNK_10d9ef628);
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  func_0x0001000a8868(param_2,uVar1);
  FUN_101cb6bc8();
  puVar5 = &UNK_110467180;
  func_0x000107c606e0(&stack0xffffffffffffffa0 + -extraout_x8,&UNK_110467180,&UNK_110467180,lVar4,
                      uVar1,uVar2);
  if (unaff_x21 == 0) {
    lVar4 = lVar3;
    func_0x000107c604d4();
    (**(code **)(lVar6 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,lVar3);
    func_0x0001000834e4(param_2);
    *param_1 = puVar5;
    param_1[1] = lVar4;
  }
  else {
    func_0x0001000834e4(param_2);
  }
  return;
}



/* Entry: 101cb6d30; end: 101cb6e1f;  */

void FUN_101cb6d30(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long extraout_x8;
  undefined8 *unaff_x20;
  long lVar6;
  
  lVar5 = 0x112e13780;
  func_0x0001000285a8(0x112e13780,&UNK_10d9ef620);
  lVar6 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar2);
  FUN_101cb6bc8();
  func_0x000107c606ec(&stack0xffffffffffffffa0 + -extraout_x8,&UNK_110467180,&UNK_110467180,param_1,
                      uVar2,uVar4);
  func_0x000107c60520(uVar1,uVar3);
  (**(code **)(lVar6 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,lVar5);
  return;
}



/* Entry: 101cb6e20; end: 101cb6e27;  */

void FUN_101cb6e20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 101cb6e28; end: 101cb6e97;  */

undefined8 * FUN_101cb6e28(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 101cb6e98; end: 101cb7043;  */

int FUN_101cb6e98(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 101cb7044; end: 101cb7083;  */

void FUN_101cb7044(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e13798 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9ef778;
  func_0x000107c61520(&UNK_10d9ef778,&UNK_110467180);
  puRam0000000112e13798 = puVar1;
  return;
}



/* Entry: 101cb7084; end: 101cb7087;  */

void FUN_101cb7084(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e137a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9ef6d8;
  func_0x000107c61520(&UNK_10d9ef6d8,&UNK_110467180);
  puRam0000000112e137a0 = puVar1;
  return;
}



/* Entry: 101cb7088; end: 101cb70c7;  */

void FUN_101cb7088(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e137a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9ef6d8;
  func_0x000107c61520(&UNK_10d9ef6d8,&UNK_110467180);
  puRam0000000112e137a0 = puVar1;
  return;
}



/* Entry: 101cb70c8; end: 101cb70cb;  */

void FUN_101cb70c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e137a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9ef6b0;
  func_0x000107c61520(&UNK_10d9ef6b0,&UNK_110467180);
  puRam0000000112e137a8 = puVar1;
  return;
}



/* Entry: 101cb70cc; end: 101cb710b;  */

void FUN_101cb70cc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e137a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9ef6b0;
  func_0x000107c61520(&UNK_10d9ef6b0,&UNK_110467180);
  puRam0000000112e137a8 = puVar1;
  return;
}



/* Entry: 101cb710c; end: 101cb7113;  */

undefined8 * FUN_101cb710c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 101cb7114; end: 101cb7167;  */

undefined8 FUN_101cb7114(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x00010071d92c(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 101cb7168; end: 101cb71a3;  */

void FUN_101cb7168(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101cb71a4; end: 101cb71e7;  */

undefined1  [16] FUN_101cb71a4(void)

{
  return ZEXT816(0x110467350);
}



/* Entry: 101cb71e8; end: 101cb723b;  */

void FUN_101cb71e8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101cb723c; end: 101cb727b;  */

void FUN_101cb723c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  return;
}



/* Entry: 101cb727c; end: 101cb744f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101cb727c(void)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puVar4;
  
  ppuVar8 = &puStack_80;
  uVar10 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar6 = uVar10;
  func_0x000107c49cd8();
  if ((int)uVar6 == 0) {
    lVar5 = 0;
  }
  else {
    lVar3 = 0;
    func_0x00010071da94();
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar4 = PTR__OBJC_CLASS___NSThread_1126b47e0;
    func_0x000107c61168();
    iVar2 = (int)puVar4;
    func_0x000107c4a02c();
    if (iVar2 == 0) {
      uVar6 = 0;
      func_0x0001000295c4(0);
      func_0x000107c5ffdc();
      puVar4 = &UNK_1104675a0;
      func_0x000107c613fc(&UNK_1104675a0,0x20,7);
      *(undefined8 *)(puVar4 + 0x10) = uVar10;
      *(long *)(puVar4 + 0x18) = lVar3;
      puVar7 = &UNK_1104675c8;
      func_0x000107c613fc(&UNK_1104675c8,0x20,7);
      *(code **)(puVar7 + 0x10) = FUN_101cb7784;
      *(undefined **)(puVar7 + 0x18) = puVar4;
      uStack_60 = 0x101cb77a4;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_10006eb60;
      puStack_68 = &UNK_1104675e0;
      puStack_58 = puVar7;
      func_0x000107c60bc4(&puStack_80);
      puVar9 = puStack_58;
      func_0x000107c61174(uVar10);
      func_0x000107c61174(lVar3);
      func_0x000107c6157c(puVar7);
      func_0x000107c61574(puVar9);
      func_0x00010006eaa4(uVar6,ppuVar8);
      func_0x000107c60bd0(ppuVar8);
      func_0x000107c61170(uVar6);
      puVar9 = puVar7;
      func_0x000107c61544(puVar7,"",0x86,0x3e,0x25,1);
      func_0x000107c61574(puVar7);
      func_0x000107c61574(puVar4);
      if ((int)puVar9 != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101cb7450);
        (*pcVar1)();
      }
    }
    else {
      func_0x000107c42c1c(uVar10);
    }
    lVar5 = _DAT_112e139f8;
    func_0x000107c61428(lVar3 + _DAT_112e139f8,&puStack_80,0,0);
    lVar5 = lVar3 + lVar5;
    func_0x000107c61618(lVar5);
    func_0x000107c61170(lVar3);
  }
  return lVar5;
}



/* Entry: 101cb7450; end: 101cb7487;  */

void FUN_101cb7450(long param_1)

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



/* Entry: 101cb7488; end: 101cb748f;  */

void FUN_101cb7488(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 101cb7490; end: 101cb769f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101cb7490(void)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  long lVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puVar4;
  
  ppuVar7 = &puStack_80;
  uVar10 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = uVar10;
  func_0x000107c49cd8();
  if ((int)uVar5 == 0) {
    func_0x0001048d9980(0xd000000000000040,0x800000010f009e00);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101cb7680);
    (*pcVar1)();
  }
  lVar3 = 0;
  func_0x00010071dab4();
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar4 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x000107c61168();
  iVar2 = (int)puVar4;
  func_0x000107c4a02c();
  if (iVar2 == 0) {
    uVar5 = 0;
    func_0x0001000295c4(0);
    func_0x000107c5ffdc();
    puVar4 = &UNK_110467528;
    func_0x000107c613fc(&UNK_110467528,0x20,7);
    *(undefined8 *)(puVar4 + 0x10) = uVar10;
    *(long *)(puVar4 + 0x18) = lVar3;
    puVar6 = &UNK_110467550;
    func_0x000107c613fc(&UNK_110467550,0x20,7);
    *(undefined8 *)(puVar6 + 0x10) = 0x101cb77a0;
    *(undefined **)(puVar6 + 0x18) = puVar4;
    uStack_60 = 0x101cb7764;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_10006eb60;
    puStack_68 = &UNK_110467568;
    puStack_58 = puVar6;
    func_0x000107c60bc4(&puStack_80);
    puVar8 = puStack_58;
    func_0x000107c61174(uVar10);
    func_0x000107c61174(lVar3);
    func_0x000107c6157c(puVar6);
    func_0x000107c61574(puVar8);
    func_0x00010006eaa4(uVar5,ppuVar7);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61170(uVar5);
    puVar8 = puVar6;
    func_0x000107c61544(puVar6,"",0x86,0x3e,0x25,1);
    func_0x000107c61574(puVar6);
    func_0x000107c61574(puVar4);
    if ((int)puVar8 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101cb7660);
      (*pcVar1)();
    }
  }
  else {
    func_0x000107c42c1c(uVar10);
  }
  lVar9 = _DAT_112fc0168;
  func_0x000107c61428(lVar3 + _DAT_112fc0168,&puStack_80,0,0);
  lVar9 = lVar3 + lVar9;
  func_0x000107c61618();
  if (lVar9 != 0) {
    func_0x000107c61170(lVar3);
    return lVar9;
  }
  func_0x0001048d9980(0xd000000000000040,0x800000010f009e00);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101cb76a0);
  (*pcVar1)();
}



/* Entry: 101cb76a0; end: 101cb76bb;  */

/* WARNING: Possible PIC construction at 0x000101cb76ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101cb76b0) */

void FUN_101cb76a0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101cb76bc; end: 101cb7783;  */

void FUN_101cb76bc(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101cb7784; end: 101cb77a7;  */

void FUN_101cb7784(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + 0x10),PTR_s_exposeScope__1125c4f30,
             *(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 101cb77a8; end: 101cb77fb; -[_TtC36MemoriesAlbumFetchCacheServicesScope36MemoriesAlbumFetchCacheServicesScope init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cb77a8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e139f8,0);
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101cb77fc; end: 101cb782f;  */

void FUN_101cb77fc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}


