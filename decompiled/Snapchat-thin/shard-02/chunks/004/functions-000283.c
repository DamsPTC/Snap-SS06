/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101cd41a8; end: 101cd41eb;  */

undefined8 * FUN_101cd41a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 101cd41ec; end: 101cd44f7;  */

int FUN_101cd41ec(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101cd44f8; end: 101cd4537;  */

void FUN_101cd44f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e181b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9f6984;
  func_0x000107c61520(&UNK_10d9f6984,&UNK_11046bd80);
  puRam0000000112e181b0 = puVar1;
  return;
}



/* Entry: 101cd4538; end: 101cd453b;  */

void FUN_101cd4538(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e181b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9f6a3c;
  func_0x000107c61520(&UNK_10d9f6a3c,&UNK_11046bcf0);
  puRam0000000112e181b8 = puVar1;
  return;
}



/* Entry: 101cd453c; end: 101cd457b;  */

void FUN_101cd453c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e181b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9f6a3c;
  func_0x000107c61520(&UNK_10d9f6a3c,&UNK_11046bcf0);
  puRam0000000112e181b8 = puVar1;
  return;
}



/* Entry: 101cd457c; end: 101cd457f;  */

void FUN_101cd457c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e181c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9f6af4;
  func_0x000107c61520(&UNK_10d9f6af4,&UNK_11046bc60);
  puRam0000000112e181c0 = puVar1;
  return;
}



/* Entry: 101cd4580; end: 101cd45bf;  */

void FUN_101cd4580(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e181c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9f6af4;
  func_0x000107c61520(&UNK_10d9f6af4,&UNK_11046bc60);
  puRam0000000112e181c0 = puVar1;
  return;
}



/* Entry: 101cd45c0; end: 101cd45c3;  */

void FUN_101cd45c0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e181c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9f6a8c;
  func_0x000107c61520(&UNK_10d9f6a8c,&UNK_11046bc60);
  puRam0000000112e181c8 = puVar1;
  return;
}



/* Entry: 101cd45c4; end: 101cd4603;  */

void FUN_101cd45c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e181c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9f6a8c;
  func_0x000107c61520(&UNK_10d9f6a8c,&UNK_11046bc60);
  puRam0000000112e181c8 = puVar1;
  return;
}



/* Entry: 101cd4604; end: 101cd4607;  */

void FUN_101cd4604(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e181d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9f6a64;
  func_0x000107c61520(&UNK_10d9f6a64,&UNK_11046bc60);
  puRam0000000112e181d0 = puVar1;
  return;
}



/* Entry: 101cd4608; end: 101cd4647;  */

void FUN_101cd4608(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e181d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9f6a64;
  func_0x000107c61520(&UNK_10d9f6a64,&UNK_11046bc60);
  puRam0000000112e181d0 = puVar1;
  return;
}



/* Entry: 101cd4648; end: 101cd464b;  */

void FUN_101cd4648(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e181d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9f691c;
  func_0x000107c61520(&UNK_10d9f691c,&UNK_11046bd80);
  puRam0000000112e181d8 = puVar1;
  return;
}



/* Entry: 101cd464c; end: 101cd468b;  */

void FUN_101cd464c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e181d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9f691c;
  func_0x000107c61520(&UNK_10d9f691c,&UNK_11046bd80);
  puRam0000000112e181d8 = puVar1;
  return;
}



/* Entry: 101cd468c; end: 101cd468f;  */

void FUN_101cd468c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e181e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9f68f4;
  func_0x000107c61520(&UNK_10d9f68f4,&UNK_11046bd80);
  puRam0000000112e181e0 = puVar1;
  return;
}



/* Entry: 101cd4690; end: 101cd46cf;  */

void FUN_101cd4690(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e181e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9f68f4;
  func_0x000107c61520(&UNK_10d9f68f4,&UNK_11046bd80);
  puRam0000000112e181e0 = puVar1;
  return;
}



/* Entry: 101cd46d0; end: 101cd46d3;  */

void FUN_101cd46d0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e181e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9f69d4;
  func_0x000107c61520(&UNK_10d9f69d4,&UNK_11046bcf0);
  puRam0000000112e181e8 = puVar1;
  return;
}



/* Entry: 101cd46d4; end: 101cd4713;  */

void FUN_101cd46d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e181e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9f69d4;
  func_0x000107c61520(&UNK_10d9f69d4,&UNK_11046bcf0);
  puRam0000000112e181e8 = puVar1;
  return;
}



/* Entry: 101cd4714; end: 101cd4717;  */

void FUN_101cd4714(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e181f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9f69ac;
  func_0x000107c61520(&UNK_10d9f69ac,&UNK_11046bcf0);
  puRam0000000112e181f0 = puVar1;
  return;
}



/* Entry: 101cd4718; end: 101cd4797;  */

void FUN_101cd4718(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e181f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9f69ac;
  func_0x000107c61520(&UNK_10d9f69ac,&UNK_11046bcf0);
  puRam0000000112e181f0 = puVar1;
  return;
}



/* Entry: 101cd4798; end: 101cd483f;  */

void FUN_101cd4798(byte *param_1,long param_2,long param_3)

{
  byte bVar1;
  
  if (param_2 == 0x74786574 && param_3 == -0x1c00000000000000) {
    func_0x000107c6142c(param_3);
    bVar1 = 0;
  }
  else {
    bVar1 = 0;
    func_0x000107c605b8(0x74786574,0xe400000000000000,param_2,param_3,0);
    func_0x000107c6142c(param_3);
    bVar1 = (bVar1 ^ 0xff) & 1;
  }
  *param_1 = bVar1;
  return;
}



/* Entry: 101cd4840; end: 101cd491f;  */

void FUN_101cd4840(undefined1 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined1 uVar2;
  
  if ((param_2 != -0x2fffffffffffffec) || (param_3 != -0x7ffffffef0ff5440)) {
    uVar1 = 0;
    func_0x000107c605b8(0xd000000000000014,0x800000010f00abc0,param_2,param_3,0);
    if ((uVar1 & 1) == 0) {
      uVar1 = 0xd000000000000015;
      if ((param_2 == -0x2fffffffffffffeb) && (param_3 == -0x7ffffffef0ff5420)) {
        func_0x000107c6142c(0x800000010f00abe0);
        uVar2 = 1;
      }
      else {
        func_0x000107c605b8(0xd000000000000015,0x800000010f00abe0,param_2,param_3,0);
        func_0x000107c6142c(param_3);
        uVar2 = 1;
        if ((uVar1 & 1) == 0) {
          uVar2 = 2;
        }
      }
      goto LAB_101cd48ac;
    }
  }
  func_0x000107c6142c(param_3);
  uVar2 = 0;
LAB_101cd48ac:
  *param_1 = uVar2;
  return;
}



/* Entry: 101cd4920; end: 101cd4937;  */

undefined1  [16] FUN_101cd4920(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 101cd4938; end: 101cd4987;  */

void FUN_101cd4938(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_101cd4f08();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 101cd4988; end: 101cd498f;  */

undefined8 FUN_101cd4988(void)

{
  return 1;
}



/* Entry: 101cd4990; end: 101cd4a2f;  */

void FUN_101cd4990(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 101cd4a30; end: 101cd4a53;  */

undefined1  [16] FUN_101cd4a30(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xee0073546e65704f;
  auVar1._0_8_ = 0x7070416863746177;
  return auVar1;
}



/* Entry: 101cd4a54; end: 101cd4adf;  */

void FUN_101cd4a54(byte *param_1,long param_2,long param_3)

{
  byte bVar1;
  
  bVar1 = 0x77;
  if (param_2 == 0x7070416863746177 && param_3 == -0x11ff8cab919a8fb1) {
    func_0x000107c6142c(param_3);
    bVar1 = 0;
  }
  else {
    func_0x000107c605b8();
    func_0x000107c6142c(param_3);
    bVar1 = (bVar1 ^ 0xff) & 1;
  }
  *param_1 = bVar1;
  return;
}



/* Entry: 101cd4ae0; end: 101cd4aeb;  */

undefined1  [16] FUN_101cd4ae0(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 101cd4aec; end: 101cd4b3b;  */

void FUN_101cd4aec(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000101cd4f48();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 101cd4b3c; end: 101cd4b47;  */

undefined1  [16] FUN_101cd4b3c(void)

{
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Entry: 101cd4b48; end: 101cd4b73;  */

void FUN_101cd4b48(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c6142c(param_3);
  *param_1 = 1;
  return;
}



/* Entry: 101cd4b74; end: 101cd4b7f;  */

undefined1  [16] FUN_101cd4b74(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 101cd4b80; end: 101cd4bcf;  */

void FUN_101cd4b80(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000101cd4f88();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 101cd4bd0; end: 101cd4ef3;  */

void FUN_101cd4bd0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar8;
  long extraout_x8_03;
  long lVar9;
  undefined8 unaff_x20;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar5 = 0x112e18218;
  func_0x0001000285a8(0x112e18218,&UNK_10d9f6c30);
  lStack_88 = *(long *)(lVar5 + -8);
  lStack_80 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_88 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar4 = 0;
  puStack_90 = auStack_b0 + -extraout_x8;
  func_0x000107c5eea4();
  lStack_98 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_98 + 0x40));
  lVar11 = (long)(auStack_b0 + -extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0x112e18220;
  func_0x0001000285a8(0x112e18220,&UNK_10d9f6c38);
  lStack_a8 = *(long *)(lVar5 + -8);
  lStack_a0 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_a8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar10 = lVar11 - extraout_x8_01;
  lVar5 = 0;
  FUN_101cd4ef4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar9 = lVar10 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0x112e18228;
  func_0x0001000285a8(0x112e18228,&UNK_10d9f6c40);
  lVar8 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = lVar9 - extraout_x8_03;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  FUN_101cd4f08();
  func_0x000107c606ec(lVar12,&UNK_11046bf70,&UNK_11046bf70,param_1,uVar1,uVar2);
  FUN_101cd5d64(unaff_x20,lVar9,FUN_101cd4ef4);
  lVar6 = 0x112e17e88;
  func_0x0001000285a8(0x112e17e88,&UNK_10d9f62c0);
  lVar7 = lVar9;
  (**(code **)(*(long *)(lVar6 + -8) + 0x30))(lVar9,1,lVar6);
  lVar6 = lStack_98;
  if ((int)lVar7 == 1) {
    uStack_52 = 0;
    func_0x000101cd4f88();
    func_0x000107c6051c(lVar10,&UNK_11046bf90,&uStack_52,lVar5,&UNK_11046bf90,lVar7);
    (**(code **)(lStack_a8 + 8))(lVar10,lStack_a0);
    (**(code **)(lVar8 + 8))(lVar12,lVar5);
  }
  else {
    lVar7 = lVar11;
    (**(code **)(lStack_98 + 0x20))(lVar11,lVar9,lVar4);
    uStack_51 = 1;
    func_0x000101cd4f48();
    puVar3 = puStack_90;
    func_0x000107c6051c(puStack_90,&UNK_11046c020,&uStack_51,lVar5,&UNK_11046c020,lVar7);
    FUN_101cd5450(0x112d5e200,PTR___s10Foundation4DateVMa_110350bb8,
                  PTR___s10Foundation4DateVSEAAMc_110350bc8);
    lVar7 = lStack_80;
    func_0x000107c60554(lVar11);
    (**(code **)(lStack_88 + 8))(puVar3,lVar7);
    (**(code **)(lVar6 + 8))(lVar11,lVar4);
    (**(code **)(lVar8 + 8))(lVar12,lVar5);
  }
  return;
}



/* Entry: 101cd4ef4; end: 101cd4f07;  */

void FUN_101cd4ef4(undefined8 param_1)

{
  if (lRam0000000112e182f8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6843c0);
  return;
}



/* Entry: 101cd4f08; end: 101cd4fc7;  */

void FUN_101cd4f08(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e18230 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9f7128;
  func_0x000107c61520(&UNK_10d9f7128,&UNK_11046bf70);
  puRam0000000112e18230 = puVar1;
  return;
}



/* Entry: 101cd4fc8; end: 101cd544f;  */

/* WARNING: Removing unreachable block (ram,0x000101cd52c0) */
/* WARNING: Removing unreachable block (ram,0x000101cd530c) */

void FUN_101cd4fc8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long extraout_x8;
  long extraout_x8_00;
  long lVar11;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long lVar12;
  long unaff_x21;
  long lVar13;
  undefined1 auStack_c0 [8];
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  char cStack_52;
  char cStack_51;
  
  lVar5 = 0x112e18248;
  uStack_78 = param_1;
  func_0x0001000285a8(0x112e18248,&UNK_10d9f6c50);
  lStack_98 = *(long *)(lVar5 + -8);
  lStack_90 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_98 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar5 = 0x112e18250;
  puStack_80 = auStack_c0 + -extraout_x8;
  func_0x0001000285a8(0x112e18250,&UNK_10d9f6c58);
  lStack_a8 = *(long *)(lVar5 + -8);
  lStack_a0 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_a8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar11 = (long)(auStack_c0 + -extraout_x8) - extraout_x8_00;
  lVar5 = 0x112e18258;
  lStack_88 = lVar11;
  func_0x0001000285a8(0x112e18258,&UNK_10d9f6c60);
  lVar12 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = lVar11 - extraout_x8_01;
  lVar6 = 0;
  FUN_101cd4ef4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lVar13 = lVar11 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar9 = *(undefined8 *)(param_2 + 0x20);
  lVar7 = param_2;
  func_0x0001000a8868(param_2,uVar1);
  FUN_101cd4f08();
  func_0x000107c606e0(lVar11,&UNK_11046bf70,&UNK_11046bf70,lVar7,uVar1,uVar9);
  uVar1 = uStack_78;
  puVar4 = puStack_80;
  lVar7 = lStack_88;
  if (unaff_x21 == 0) {
    lVar8 = lVar5;
    lStack_b8 = lVar13;
    lStack_b0 = lVar13 - extraout_x12;
    func_0x000107c60514();
    if ((*(long *)(lVar8 + 0x10) == 0) ||
       (cVar2 = *(char *)(lVar8 + 0x20), *(long *)(lVar8 + 0x10) != 1 || cVar2 == '\x02')) {
      lVar13 = 0;
      func_0x000107c60344();
      plVar10 = (long *)PTR___ss13DecodingErrorOs0B0sWP_11034e5b0;
      func_0x000107c613f8();
      lVar7 = 0x112da1fc8;
      func_0x0001000285a8(0x112da1fc8,&UNK_10dae6550);
      iVar3 = *(int *)(lVar7 + 0x30);
      *plVar10 = lVar6;
      func_0x000107c604d0(lVar5);
      func_0x000107c6033c((undefined *)((long)plVar10 + (long)iVar3));
      (**(code **)(*(long *)(lVar13 + -8) + 0x68))
                (plVar10,*(undefined4 *)
                          PTR___ss13DecodingErrorO12typeMismatchyABypXp_AB7ContextVtcABmFWC_11034e580
                 ,lVar13);
      func_0x000107c61654();
      (**(code **)(lVar12 + 8))(lVar11,lVar5);
      func_0x000107c615e8(lVar8);
    }
    else {
      if (cVar2 == '\x01') {
        lVar7 = lVar8;
        cStack_51 = cVar2;
        func_0x000101cd4f48();
        func_0x000107c604cc(puVar4,&UNK_11046c020,&cStack_51,lVar5,&UNK_11046c020,lVar7);
        uVar9 = 0;
        func_0x000107c5eea4(0);
        FUN_101cd5450(0x112d5e180,PTR___s10Foundation4DateVMa_110350bb8,
                      PTR___s10Foundation4DateVSeAAMc_110350be8);
        lVar7 = lStack_90;
        func_0x000107c60508(lStack_b8,uVar9);
        (**(code **)(lStack_98 + 8))(puVar4,lVar7);
        (**(code **)(lVar12 + 8))(lVar11,lVar5);
        func_0x000107c615e8(lVar8);
        lVar5 = 0x112e17e88;
        func_0x0001000285a8(0x112e17e88,&UNK_10d9f62c0);
        lVar6 = lStack_b8;
        (**(code **)(*(long *)(lVar5 + -8) + 0x38))(lStack_b8,0,1,lVar5);
        lVar7 = lStack_b0;
        func_0x000101cd5490(lVar6,lStack_b0);
      }
      else {
        lVar6 = lVar8;
        cStack_52 = cVar2;
        func_0x000101cd4f88();
        func_0x000107c604cc(lVar7,&UNK_11046bf90,&cStack_52,lVar5,&UNK_11046bf90,lVar6);
        (**(code **)(lStack_a8 + 8))(lVar7,lStack_a0);
        (**(code **)(lVar12 + 8))(lVar11,lVar5);
        func_0x000107c615e8(lVar8);
        lVar5 = 0x112e17e88;
        func_0x0001000285a8(0x112e17e88,&UNK_10d9f62c0);
        lVar7 = lStack_b0;
        (**(code **)(*(long *)(lVar5 + -8) + 0x38))(lStack_b0,1,1,lVar5);
      }
      func_0x000101cd5490(lVar7,uVar1);
    }
  }
  func_0x0001000834e4(param_2);
  return;
}



/* Entry: 101cd5450; end: 101cd54d3;  */

void FUN_101cd5450(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 101cd54d4; end: 101cd54fb;  */

void FUN_101cd54d4(void)

{
  FUN_101cd4fc8();
  return;
}



/* Entry: 101cd54fc; end: 101cd550f;  */

void FUN_101cd54fc(undefined8 param_1)

{
  if (lRam0000000112e18360 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6843e8);
  return;
}



/* Entry: 101cd5510; end: 101cd553f;  */

void FUN_101cd5510(undefined8 param_1,long *param_2,undefined8 param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,param_3);
  return;
}



/* Entry: 101cd5540; end: 101cd55c3;  */

void FUN_101cd5540(void)

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



/* Entry: 101cd55c4; end: 101cd5663;  */

undefined1  [16] FUN_101cd55c4(void)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auVar6 [16];
  
  bVar2 = *unaff_x20;
  uVar5 = 0xeb000000006c6564;
  uVar3 = 0x6f4d656369766564;
  if (bVar2 != 3) {
    uVar5 = 0xe700000000000000;
    uVar3 = 0x7354746e657665;
  }
  uVar1 = 0xe900000000000064;
  uVar4 = 0x496e6f6973736573;
  if (bVar2 != 2) {
    uVar1 = uVar5;
    uVar4 = uVar3;
  }
  uVar5 = 0x63697274656d;
  if (bVar2 != 0) {
    uVar5 = 0x644972657375;
  }
  if (bVar2 < 2) {
    uVar1 = 0xe600000000000000;
    uVar4 = uVar5;
  }
  auVar6._8_8_ = uVar1;
  auVar6._0_8_ = uVar4;
  return auVar6;
}



/* Entry: 101cd5664; end: 101cd5687;  */

void FUN_101cd5664(undefined1 *param_1,undefined1 param_2)

{
  FUN_101cd7360();
  *param_1 = param_2;
  return;
}



/* Entry: 101cd5688; end: 101cd569f;  */

undefined1  [16] FUN_101cd5688(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 101cd56a0; end: 101cd56ef;  */

void FUN_101cd56a0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_101cd5908();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 101cd56f0; end: 101cd5907;  */

void FUN_101cd56f0(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long extraout_x8;
  long unaff_x20;
  long unaff_x21;
  long lVar7;
  undefined1 auStack_60 [11];
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar3 = 0x112e18260;
  func_0x0001000285a8(0x112e18260,&UNK_10d9f6c70);
  lVar7 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar6);
  FUN_101cd5908();
  func_0x000107c606ec(auStack_60 + -extraout_x8,&UNK_11046bee0,&UNK_11046bee0,param_1,uVar6,uVar5);
  uStack_51 = 0;
  FUN_101cd4ef4(0);
  FUN_101cd5450(0x112e18270,FUN_101cd4ef4,&UNK_10d9f6ca8);
  func_0x000107c60554();
  if (unaff_x21 == 0) {
    lVar4 = 0;
    FUN_101cd54fc();
    puVar1 = (undefined8 *)(unaff_x20 + *(int *)(lVar4 + 0x14));
    uStack_52 = 1;
    func_0x000107c6053c(*puVar1,puVar1[1],&uStack_52,lVar3);
    puVar1 = (undefined8 *)(unaff_x20 + *(int *)(lVar4 + 0x18));
    uStack_53 = 2;
    func_0x000107c6053c(*puVar1,puVar1[1],&uStack_53,lVar3);
    puVar1 = (undefined8 *)(unaff_x20 + *(int *)(lVar4 + 0x1c));
    uStack_54 = 3;
    func_0x000107c6053c(*puVar1,puVar1[1],&uStack_54,lVar3);
    iVar2 = *(int *)(lVar4 + 0x20);
    uStack_55 = 4;
    uVar5 = 0;
    func_0x000107c5eea4(0);
    uVar6 = 0x112d5e200;
    FUN_101cd5450(0x112d5e200,PTR___s10Foundation4DateVMa_110350bb8,
                  PTR___s10Foundation4DateVSEAAMc_110350bc8);
    func_0x000107c60554(unaff_x20 + iVar2,&uStack_55,lVar3,uVar5,uVar6);
  }
  (**(code **)(lVar7 + 8))(auStack_60 + -extraout_x8,lVar3);
  return;
}



/* Entry: 101cd5908; end: 101cd5947;  */

void FUN_101cd5908(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e18268 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9f7038;
  func_0x000107c61520(&UNK_10d9f7038,&UNK_11046bee0);
  puRam0000000112e18268 = puVar1;
  return;
}



/* Entry: 101cd5948; end: 101cd5d63;  */

/* WARNING: Removing unreachable block (ram,0x000101cd5c14) */
/* WARNING: Removing unreachable block (ram,0x000101cd5b74) */
/* WARNING: Removing unreachable block (ram,0x000101cd5bc8) */
/* WARNING: Removing unreachable block (ram,0x000101cd5c88) */
/* WARNING: Removing unreachable block (ram,0x000101cd5ca0) */
/* WARNING: Removing unreachable block (ram,0x000101cd5ca4) */
/* WARNING: Removing unreachable block (ram,0x000101cd5cdc) */
/* WARNING: Removing unreachable block (ram,0x000101cd5cc0) */
/* WARNING: Removing unreachable block (ram,0x000101cd5cc4) */
/* WARNING: Removing unreachable block (ram,0x000101cd5cd8) */
/* WARNING: Removing unreachable block (ram,0x000101cd5cf0) */
/* WARNING: Removing unreachable block (ram,0x000101cd5cf4) */
/* WARNING: Removing unreachable block (ram,0x000101cd5b08) */

void FUN_101cd5948(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long lVar8;
  long extraout_x8_01;
  long extraout_x8_02;
  long unaff_x21;
  long lVar9;
  long lVar10;
  long lVar11;
  long alStack_a0 [5];
  long lStack_78;
  long lStack_70;
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar4 = 0;
  alStack_a0[1] = param_1;
  func_0x000107c5eea4();
  alStack_a0[0] = *(long *)(lVar4 + -8);
  alStack_a0[2] = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(alStack_a0[0] + 0x40));
  lVar9 = (long)alStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  FUN_101cd4ef4();
  alStack_a0[3] = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar8 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0x112e18278;
  alStack_a0[4] = lVar8;
  func_0x0001000285a8(0x112e18278,&UNK_10d9f6c78);
  lVar10 = *(long *)(lVar4 + -8);
  lStack_78 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = lVar8 - extraout_x8_01;
  lVar5 = 0;
  FUN_101cd54fc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar11 = lVar8 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  uVar6 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  func_0x0001000a8868(param_2,uVar6);
  FUN_101cd5908();
  lStack_70 = lVar8;
  func_0x000107c606e0(lVar8,&UNK_11046bee0,&UNK_11046bee0,lVar4,uVar6,uVar2);
  lVar4 = alStack_a0[2];
  if (unaff_x21 == 0) {
    uStack_51 = 0;
    uVar6 = 0x112e18280;
    FUN_101cd5450(0x112e18280,FUN_101cd4ef4,&UNK_10d9f6c80);
    lVar3 = lStack_78;
    lVar8 = alStack_a0[4];
    func_0x000107c60508(alStack_a0[4],alStack_a0[3],&uStack_51,lStack_78,alStack_a0[3],uVar6);
    func_0x000101cd5490(lVar8,lVar11);
    uStack_52 = 1;
    puVar7 = &uStack_52;
    lVar8 = lVar3;
    func_0x000107c604f4();
    puVar1 = (undefined8 *)(lVar11 + *(int *)(lVar5 + 0x14));
    *puVar1 = puVar7;
    puVar1[1] = lVar8;
    uStack_53 = 2;
    puVar7 = &uStack_53;
    lVar8 = lVar3;
    func_0x000107c604f4();
    puVar1 = (undefined8 *)(lVar11 + *(int *)(lVar5 + 0x18));
    *puVar1 = puVar7;
    puVar1[1] = lVar8;
    uStack_54 = 3;
    puVar7 = &uStack_54;
    lVar8 = lVar3;
    func_0x000107c604f4();
    puVar1 = (undefined8 *)(lVar11 + *(int *)(lVar5 + 0x1c));
    *puVar1 = puVar7;
    puVar1[1] = lVar8;
    uStack_55 = 4;
    uVar6 = 0x112d5e180;
    FUN_101cd5450(0x112d5e180,PTR___s10Foundation4DateVMa_110350bb8,
                  PTR___s10Foundation4DateVSeAAMc_110350be8);
    func_0x000107c60508(lVar9,lVar4,&uStack_55,lVar3,lVar4,uVar6);
    (**(code **)(lVar10 + 8))(lStack_70,lVar3);
    (**(code **)(alStack_a0[0] + 0x20))(lVar11 + *(int *)(lVar5 + 0x20),lVar9,lVar4);
    func_0x000101cd5d64(lVar11,alStack_a0[1],FUN_101cd54fc);
    func_0x0001000834e4(param_2);
    func_0x000101cd5da8(lVar11,FUN_101cd54fc);
  }
  else {
    func_0x0001000834e4(param_2);
  }
  return;
}



/* Entry: 101cd5d64; end: 101cd5de3;  */

undefined8 FUN_101cd5d64(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_3)();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 101cd5de4; end: 101cd5e0b;  */

void FUN_101cd5de4(void)

{
  FUN_101cd5948();
  return;
}



/* Entry: 101cd5e0c; end: 101cd5ef7;  */

long * FUN_101cd5e0c(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_3 + -8);
  uVar1 = *(uint *)(lVar6 + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    lVar2 = 0x112e17e88;
    func_0x0001000285a8(0x112e17e88,&UNK_10d9f62c0);
    lVar5 = *(long *)(lVar2 + -8);
    plVar3 = param_2;
    (**(code **)(lVar5 + 0x30))(param_2,1,lVar2);
    if ((int)plVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)(param_1,param_2,*(undefined8 *)(lVar6 + 0x40));
      return param_1;
    }
    lVar6 = 0;
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar6 + -8) + 0x10))(param_1,param_2,lVar6);
    (**(code **)(lVar5 + 0x38))(param_1,0,1,lVar2);
  }
  else {
    lVar6 = *param_2;
    *param_1 = lVar6;
    uVar4 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar6 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 101cd5ef8; end: 101cd5f67;  */

void FUN_101cd5ef8(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = 0x112e17e88;
  func_0x0001000285a8(0x112e17e88,&UNK_10d9f62c0);
  uVar1 = param_1;
  (**(code **)(*(long *)(lVar2 + -8) + 0x30))(param_1,1,lVar2);
  if ((int)uVar1 != 0) {
    return;
  }
  lVar2 = 0;
  func_0x000107c5eea4();
                    /* WARNING: Could not recover jumptable at 0x000101cd5f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1,lVar2);
  return;
}



/* Entry: 101cd5f68; end: 101cd602f;  */

undefined8 FUN_101cd5f68(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = 0x112e17e88;
  func_0x0001000285a8(0x112e17e88,&UNK_10d9f62c0);
  lVar4 = *(long *)(lVar1 + -8);
  uVar2 = param_2;
  (**(code **)(lVar4 + 0x30))(param_2,1,lVar1);
  if ((int)uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)
              (param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
    return param_1;
  }
  lVar3 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1,param_2,lVar3);
  (**(code **)(lVar4 + 0x38))(param_1,0,1,lVar1);
  return param_1;
}



/* Entry: 101cd6030; end: 101cd614b;  */

undefined8 FUN_101cd6030(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  
  lVar4 = 0x112e17e88;
  func_0x0001000285a8(0x112e17e88,&UNK_10d9f62c0);
  lVar5 = *(long *)(lVar4 + -8);
  pcVar6 = *(code **)(lVar5 + 0x30);
  uVar1 = param_1;
  (*pcVar6)(param_1,1,lVar4);
  uVar2 = param_2;
  (*pcVar6)(param_2,1,lVar4);
  if ((int)uVar1 == 0) {
    if ((int)uVar2 != 0) {
      FUN_101cd614c(param_1);
      goto LAB_101cd60e8;
    }
    lVar4 = 0;
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar4 + -8) + 0x18))(param_1,param_2,lVar4);
  }
  else {
    if ((int)uVar2 != 0) {
LAB_101cd60e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)
                (param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
      return param_1;
    }
    lVar3 = 0;
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1,param_2,lVar3);
    (**(code **)(lVar5 + 0x38))(param_1,0,1,lVar4);
  }
  return param_1;
}



/* Entry: 101cd614c; end: 101cd6193;  */

undefined8 FUN_101cd614c(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112e17e88;
  func_0x0001000285a8(0x112e17e88,&UNK_10d9f62c0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 101cd6194; end: 101cd625b;  */

undefined8 FUN_101cd6194(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = 0x112e17e88;
  func_0x0001000285a8(0x112e17e88,&UNK_10d9f62c0);
  lVar4 = *(long *)(lVar1 + -8);
  uVar2 = param_2;
  (**(code **)(lVar4 + 0x30))(param_2,1,lVar1);
  if ((int)uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)
              (param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
    return param_1;
  }
  lVar3 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1,param_2,lVar3);
  (**(code **)(lVar4 + 0x38))(param_1,0,1,lVar1);
  return param_1;
}



/* Entry: 101cd625c; end: 101cd6377;  */

undefined8 FUN_101cd625c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  
  lVar4 = 0x112e17e88;
  func_0x0001000285a8(0x112e17e88,&UNK_10d9f62c0);
  lVar5 = *(long *)(lVar4 + -8);
  pcVar6 = *(code **)(lVar5 + 0x30);
  uVar1 = param_1;
  (*pcVar6)(param_1,1,lVar4);
  uVar2 = param_2;
  (*pcVar6)(param_2,1,lVar4);
  if ((int)uVar1 == 0) {
    if ((int)uVar2 != 0) {
      FUN_101cd614c(param_1);
      goto LAB_101cd6314;
    }
    lVar4 = 0;
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar4 + -8) + 0x28))(param_1,param_2,lVar4);
  }
  else {
    if ((int)uVar2 != 0) {
LAB_101cd6314:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)
                (param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
      return param_1;
    }
    lVar3 = 0;
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1,param_2,lVar3);
    (**(code **)(lVar5 + 0x38))(param_1,0,1,lVar4);
  }
  return param_1;
}



/* Entry: 101cd6378; end: 101cd638f;  */

void FUN_101cd6378(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 101cd6390; end: 101cd63d3;  */

void FUN_101cd6390(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112e17e88;
  func_0x0001000285a8(0x112e17e88,&UNK_10d9f62c0);
                    /* WARNING: Could not recover jumptable at 0x000101cd63d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x30))(param_1,1,lVar1);
  return;
}



/* Entry: 101cd63d4; end: 101cd63d7;  */

void FUN_101cd63d4(void)

{
  return;
}



/* Entry: 101cd63d8; end: 101cd6477;  */

void FUN_101cd63d8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112e17e88;
  func_0x0001000285a8(0x112e17e88,&UNK_10d9f62c0);
                    /* WARNING: Could not recover jumptable at 0x000101cd6420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,param_2,1,lVar1);
  return;
}



/* Entry: 101cd6478; end: 101cd65e3;  */

long * FUN_101cd6478(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  code *pcVar13;
  
  uVar7 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar7 >> 0x11 & 1) == 0) {
    lVar9 = 0x112e17e88;
    func_0x0001000285a8(0x112e17e88,&UNK_10d9f62c0);
    lVar12 = *(long *)(lVar9 + -8);
    plVar8 = param_2;
    (**(code **)(lVar12 + 0x30))(param_2,1,lVar9);
    if ((int)plVar8 == 0) {
      lVar10 = 0;
      func_0x000107c5eea4();
      (**(code **)(*(long *)(lVar10 + -8) + 0x10))(param_1,param_2,lVar10);
      (**(code **)(lVar12 + 0x38))(param_1,0,1,lVar9);
    }
    else {
      lVar9 = 0;
      FUN_101cd4ef4();
      func_0x000107c610b4(param_1,param_2,*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
    }
    iVar6 = *(int *)(param_3 + 0x18);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar6);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar6);
    uVar4 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar4;
    iVar6 = *(int *)(param_3 + 0x20);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    uVar5 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar5;
    lVar9 = 0;
    func_0x000107c5eea4();
    pcVar13 = *(code **)(*(long *)(lVar9 + -8) + 0x10);
    func_0x000107c61434(uVar3);
    func_0x000107c61434(uVar4);
    func_0x000107c61434(uVar5);
    (*pcVar13)((long)param_1 + (long)iVar6,(long)param_2 + (long)iVar6,lVar9);
  }
  else {
    lVar9 = *param_2;
    *param_1 = lVar9;
    uVar11 = (ulong)uVar7 & 0xff;
    param_1 = (long *)(lVar9 + (uVar11 + 0x10 & (uVar11 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 101cd65e4; end: 101cd669b;  */

void FUN_101cd65e4(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = 0x112e17e88;
  func_0x0001000285a8(0x112e17e88,&UNK_10d9f62c0);
  lVar2 = param_1;
  (**(code **)(*(long *)(lVar3 + -8) + 0x30))(param_1,1,lVar3);
  if ((int)lVar2 == 0) {
    lVar3 = 0;
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar3 + -8) + 8))(param_1,lVar3);
  }
  func_0x000107c6142c(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x14) + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x18) + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x1c) + 8));
  iVar1 = *(int *)(param_2 + 0x20);
  lVar3 = 0;
  func_0x000107c5eea4();
                    /* WARNING: Could not recover jumptable at 0x000101cd6698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar3 + -8) + 8))(param_1 + iVar1,lVar3);
  return;
}



/* Entry: 101cd669c; end: 101cd6997;  */

long FUN_101cd669c(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  
  lVar7 = 0x112e17e88;
  func_0x0001000285a8(0x112e17e88,&UNK_10d9f62c0);
  lVar9 = *(long *)(lVar7 + -8);
  lVar8 = param_2;
  (**(code **)(lVar9 + 0x30))(param_2,1,lVar7);
  if ((int)lVar8 == 0) {
    lVar8 = 0;
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar8 + -8) + 0x10))(param_1,param_2,lVar8);
    (**(code **)(lVar9 + 0x38))(param_1,0,1,lVar7);
  }
  else {
    lVar7 = 0;
    FUN_101cd4ef4();
    func_0x000107c610b4(param_1,param_2,*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  }
  iVar6 = *(int *)(param_3 + 0x18);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  uVar3 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  puVar1 = (undefined8 *)(param_1 + iVar6);
  puVar2 = (undefined8 *)(param_2 + iVar6);
  uVar4 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar4;
  iVar6 = *(int *)(param_3 + 0x20);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x1c));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x1c));
  uVar5 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar5;
  lVar7 = 0;
  func_0x000107c5eea4();
  pcVar10 = *(code **)(*(long *)(lVar7 + -8) + 0x10);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar5);
  (*pcVar10)(param_1 + iVar6,param_2 + iVar6,lVar7);
  return param_1;
}



/* Entry: 101cd6998; end: 101cd6a9b;  */

long FUN_101cd6998(long param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar4 = 0x112e17e88;
  func_0x0001000285a8(0x112e17e88,&UNK_10d9f62c0);
  lVar6 = *(long *)(lVar4 + -8);
  lVar5 = param_2;
  (**(code **)(lVar6 + 0x30))(param_2,1,lVar4);
  if ((int)lVar5 == 0) {
    lVar5 = 0;
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar5 + -8) + 0x20))(param_1,param_2,lVar5);
    (**(code **)(lVar6 + 0x38))(param_1,0,1,lVar4);
  }
  else {
    lVar4 = 0;
    FUN_101cd4ef4();
    func_0x000107c610b4(param_1,param_2,*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  }
  iVar1 = *(int *)(param_3 + 0x18);
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  uVar7 = *puVar2;
  puVar3 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar7;
  puVar2 = (undefined8 *)(param_2 + iVar1);
  uVar7 = *puVar2;
  puVar3 = (undefined8 *)(param_1 + iVar1);
  puVar3[1] = puVar2[1];
  *puVar3 = uVar7;
  iVar1 = *(int *)(param_3 + 0x20);
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x1c));
  uVar7 = *puVar2;
  puVar3 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x1c));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar7;
  lVar4 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar4 + -8) + 0x20))(param_1 + iVar1,param_2 + iVar1,lVar4);
  return param_1;
}



/* Entry: 101cd6a9c; end: 101cd6c27;  */

long FUN_101cd6a9c(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  
  lVar8 = 0x112e17e88;
  func_0x0001000285a8(0x112e17e88,&UNK_10d9f62c0);
  lVar9 = *(long *)(lVar8 + -8);
  pcVar10 = *(code **)(lVar9 + 0x30);
  lVar6 = param_1;
  (*pcVar10)(param_1,1,lVar8);
  lVar5 = param_2;
  (*pcVar10)(param_2,1,lVar8);
  if ((int)lVar6 == 0) {
    if ((int)lVar5 == 0) {
      lVar8 = 0;
      func_0x000107c5eea4();
      (**(code **)(*(long *)(lVar8 + -8) + 0x28))(param_1,param_2,lVar8);
      goto LAB_101cd6b70;
    }
    FUN_101cd614c(param_1);
  }
  else if ((int)lVar5 == 0) {
    lVar6 = 0;
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar6 + -8) + 0x20))(param_1,param_2,lVar6);
    (**(code **)(lVar9 + 0x38))(param_1,0,1,lVar8);
    goto LAB_101cd6b70;
  }
  lVar8 = 0;
  FUN_101cd4ef4();
  func_0x000107c610b4(param_1,param_2,*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
LAB_101cd6b70:
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  uVar3 = puVar2[1];
  uVar7 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  func_0x000107c6142c(uVar7);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x18));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x18));
  uVar3 = puVar2[1];
  uVar7 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  func_0x000107c6142c(uVar7);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x1c));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x1c));
  uVar3 = puVar2[1];
  uVar7 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  func_0x000107c6142c(uVar7);
  iVar4 = *(int *)(param_3 + 0x20);
  lVar8 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar8 + -8) + 0x28))(param_1 + iVar4,param_2 + iVar4,lVar8);
  return param_1;
}



/* Entry: 101cd6c28; end: 101cd6c3f;  */

void FUN_101cd6c28(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 101cd6c40; end: 101cd6ccf;  */

void FUN_101cd6c40(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar1 = 0x13f;
  FUN_101cd4ef4();
  if (param_2 < 0x40) {
    lStack_48 = *(long *)(lVar1 + -8) + 0x40;
    puStack_40 = &UNK_10d9f6d58;
    puStack_38 = &UNK_10d9f6d58;
    puStack_30 = &UNK_10d9f6d58;
    lVar1 = 0x13f;
    func_0x000107c5eea4();
    if (param_2 < 0x40) {
      lStack_28 = *(long *)(lVar1 + -8) + 0x40;
      func_0x000107c6153c(param_1,0x100,5,&lStack_48,param_1 + 0x10);
    }
  }
  return;
}



/* Entry: 101cd6cd0; end: 101cd7077;  */

int FUN_101cd6cd0(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101cd6d4c;
        goto LAB_101cd6d30;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101cd6d30:
      return ((uint)*param_1 | uVar1 << 8) - 4;
    }
  }
LAB_101cd6d4c:
  iVar2 = *param_1 - 5;
  if (*param_1 < 5) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101cd7078; end: 101cd70b7;  */

void FUN_101cd7078(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e183a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9f6e50;
  func_0x000107c61520(&UNK_10d9f6e50,&UNK_11046c020);
  puRam0000000112e183a8 = puVar1;
  return;
}



/* Entry: 101cd70b8; end: 101cd70bb;  */

void FUN_101cd70b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e183b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9f6f58;
  func_0x000107c61520(&UNK_10d9f6f58,&UNK_11046bf70);
  puRam0000000112e183b0 = puVar1;
  return;
}



/* Entry: 101cd70bc; end: 101cd70fb;  */

void FUN_101cd70bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e183b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9f6f58;
  func_0x000107c61520(&UNK_10d9f6f58,&UNK_11046bf70);
  puRam0000000112e183b0 = puVar1;
  return;
}



/* Entry: 101cd70fc; end: 101cd70ff;  */

void FUN_101cd70fc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e183b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9f7010;
  func_0x000107c61520(&UNK_10d9f7010,&UNK_11046bee0);
  puRam0000000112e183b8 = puVar1;
  return;
}



/* Entry: 101cd7100; end: 101cd713f;  */

void FUN_101cd7100(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e183b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9f7010;
  func_0x000107c61520(&UNK_10d9f7010,&UNK_11046bee0);
  puRam0000000112e183b8 = puVar1;
  return;
}



/* Entry: 101cd7140; end: 101cd7143;  */

void FUN_101cd7140(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e183c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9f6fa8;
  func_0x000107c61520(&UNK_10d9f6fa8,&UNK_11046bee0);
  puRam0000000112e183c0 = puVar1;
  return;
}



/* Entry: 101cd7144; end: 101cd7183;  */

void FUN_101cd7144(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e183c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9f6fa8;
  func_0x000107c61520(&UNK_10d9f6fa8,&UNK_11046bee0);
  puRam0000000112e183c0 = puVar1;
  return;
}



/* Entry: 101cd7184; end: 101cd7187;  */

void FUN_101cd7184(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e183c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9f6f80;
  func_0x000107c61520(&UNK_10d9f6f80,&UNK_11046bee0);
  puRam0000000112e183c8 = puVar1;
  return;
}



/* Entry: 101cd7188; end: 101cd71c7;  */

void FUN_101cd7188(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e183c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9f6f80;
  func_0x000107c61520(&UNK_10d9f6f80,&UNK_11046bee0);
  puRam0000000112e183c8 = puVar1;
  return;
}



/* Entry: 101cd71c8; end: 101cd71cb;  */

void FUN_101cd71c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e183d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9f6ea0;
  func_0x000107c61520(&UNK_10d9f6ea0,&UNK_11046bf90);
  puRam0000000112e183d0 = puVar1;
  return;
}



/* Entry: 101cd71cc; end: 101cd720b;  */

void FUN_101cd71cc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e183d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9f6ea0;
  func_0x000107c61520(&UNK_10d9f6ea0,&UNK_11046bf90);
  puRam0000000112e183d0 = puVar1;
  return;
}



/* Entry: 101cd720c; end: 101cd720f;  */

void FUN_101cd720c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e183d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9f6e78;
  func_0x000107c61520(&UNK_10d9f6e78,&UNK_11046bf90);
  puRam0000000112e183d8 = puVar1;
  return;
}



/* Entry: 101cd7210; end: 101cd724f;  */

void FUN_101cd7210(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e183d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9f6e78;
  func_0x000107c61520(&UNK_10d9f6e78,&UNK_11046bf90);
  puRam0000000112e183d8 = puVar1;
  return;
}



/* Entry: 101cd7250; end: 101cd7253;  */

void FUN_101cd7250(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e183e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9f6de8;
  func_0x000107c61520(&UNK_10d9f6de8,&UNK_11046c020);
  puRam0000000112e183e0 = puVar1;
  return;
}



/* Entry: 101cd7254; end: 101cd7293;  */

void FUN_101cd7254(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e183e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9f6de8;
  func_0x000107c61520(&UNK_10d9f6de8,&UNK_11046c020);
  puRam0000000112e183e0 = puVar1;
  return;
}



/* Entry: 101cd7294; end: 101cd7297;  */

void FUN_101cd7294(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e183e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9f6dc0;
  func_0x000107c61520(&UNK_10d9f6dc0,&UNK_11046c020);
  puRam0000000112e183e8 = puVar1;
  return;
}



/* Entry: 101cd7298; end: 101cd72d7;  */

void FUN_101cd7298(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e183e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9f6dc0;
  func_0x000107c61520(&UNK_10d9f6dc0,&UNK_11046c020);
  puRam0000000112e183e8 = puVar1;
  return;
}



/* Entry: 101cd72d8; end: 101cd72db;  */

void FUN_101cd72d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e183f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9f6ef0;
  func_0x000107c61520(&UNK_10d9f6ef0,&UNK_11046bf70);
  puRam0000000112e183f0 = puVar1;
  return;
}



/* Entry: 101cd72dc; end: 101cd731b;  */

void FUN_101cd72dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e183f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9f6ef0;
  func_0x000107c61520(&UNK_10d9f6ef0,&UNK_11046bf70);
  puRam0000000112e183f0 = puVar1;
  return;
}



/* Entry: 101cd731c; end: 101cd731f;  */

void FUN_101cd731c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e183f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9f6ec8;
  func_0x000107c61520(&UNK_10d9f6ec8,&UNK_11046bf70);
  puRam0000000112e183f8 = puVar1;
  return;
}



/* Entry: 101cd7320; end: 101cd735f;  */

void FUN_101cd7320(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e183f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9f6ec8;
  func_0x000107c61520(&UNK_10d9f6ec8,&UNK_11046bf70);
  puRam0000000112e183f8 = puVar1;
  return;
}



/* Entry: 101cd7360; end: 101cd750f;  */

undefined4 FUN_101cd7360(long param_1,long param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = 0x63697274656d;
  if ((param_1 == 0x63697274656d && param_2 == -0x1a00000000000000) ||
     (func_0x000107c605b8(0x63697274656d,0xe600000000000000,param_1,param_2,0), (uVar1 & 1) != 0)) {
    func_0x000107c6142c(param_2);
    uVar2 = 0;
  }
  else {
    uVar1 = 0x644972657375;
    if (((param_1 == 0x644972657375) && (param_2 == -0x1a00000000000000)) ||
       (func_0x000107c605b8(0x644972657375,0xe600000000000000,param_1,param_2,0), (uVar1 & 1) != 0))
    {
      func_0x000107c6142c(param_2);
      uVar2 = 1;
    }
    else {
      uVar1 = 0x496e6f6973736573;
      if (((param_1 == 0x496e6f6973736573) && (param_2 == -0x16ffffffffffff9c)) ||
         (func_0x000107c605b8(0x496e6f6973736573,0xe900000000000064,param_1,param_2,0),
         (uVar1 & 1) != 0)) {
        func_0x000107c6142c(param_2);
        uVar2 = 2;
      }
      else {
        uVar1 = 0;
        if (((param_1 == 0x6f4d656369766564) && (param_2 == -0x14ffffffff939a9c)) ||
           (func_0x000107c605b8(0x6f4d656369766564,0xeb000000006c6564,param_1,param_2,0),
           (uVar1 & 1) != 0)) {
          func_0x000107c6142c(param_2);
          uVar2 = 3;
        }
        else {
          uVar1 = 0x7354746e657665;
          if ((param_1 == 0x7354746e657665) && (param_2 == -0x1900000000000000)) {
            func_0x000107c6142c(0xe700000000000000);
            uVar2 = 4;
          }
          else {
            func_0x000107c605b8(0x7354746e657665,0xe700000000000000,param_1,param_2,0);
            func_0x000107c6142c(param_2);
            uVar2 = 4;
            if ((uVar1 & 1) == 0) {
              uVar2 = 5;
            }
          }
        }
      }
    }
  }
  return uVar2;
}



/* Entry: 101cd7510; end: 101cd7547;  */

undefined1 FUN_101cd7510(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 101cd7548; end: 101cd7b43;  */

void FUN_101cd7548(long *param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000100283998();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
  *(undefined8 *)(param_2 + 0x48) = uStack_98;
  *(undefined8 *)(param_2 + 0x50) = uStack_a0;
  *(undefined8 *)(param_2 + 0x58) = uStack_a8;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174();
  uVar4 = uStack_78;
  func_0x000107c61174();
  uVar5 = uStack_80;
  func_0x000107c61174();
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar7 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar8 = uStack_98;
  func_0x000107c61174();
  uVar9 = uStack_a0;
  func_0x000107c61174();
  uVar10 = uStack_a8;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar2;
  puVar11 = PTR_PTR_1126a9018;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar11;
  func_0x000107c61174();
  uVar12 = uStack_68;
  func_0x000107c61174();
  uVar13 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174(puVar11);
  uVar13 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010efc3ce0);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174(puVar11);
  uVar13 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010efc1590);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar13);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar11);
  uVar13 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef210e0);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar13);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar11);
  uVar13 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef1d160);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(puVar11);
  uVar13 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f00ac00);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar13);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(puVar11);
  uVar13 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar13);
  func_0x000107c61174(uVar9);
  func_0x000107c61174();
  uVar13 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar13);
  func_0x000107c61174(uVar10);
  func_0x000107c61174();
  uVar13 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef129b0);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f00ac20);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar13);
  func_0x000107c3e740(puVar11);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar10);
    *(undefined **)(param_2 + 0x60) = puVar2;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101cd7b44);
  (*pcVar1)();
}



/* Entry: 101cd7b44; end: 101cd7b77;  */

void FUN_101cd7b44(void)

{
  long unaff_x20;
  
  FUN_101cd7548(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 101cd7b78; end: 101cd80d3;  */

long FUN_101cd7b78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  *(undefined8 *)(unaff_x20 + 0x38) = param_5;
  *(undefined8 *)(unaff_x20 + 0x40) = param_6;
  *(undefined8 *)(unaff_x20 + 0x48) = param_7;
  *(undefined8 *)(unaff_x20 + 0x50) = param_8;
  *(undefined8 *)(unaff_x20 + 0x58) = param_9;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar3 = PTR_PTR_1126a9018;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar3;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010efc3ce0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010efc1590);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_4);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef210e0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef1d160);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_6);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f00ac00);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_7);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_8);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_9);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef129b0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_9);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(puVar3);
  func_0x000107c61174();
  uVar4 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f00ac20);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c3e740(puVar3);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_9);
    *(undefined **)(unaff_x20 + 0x60) = puVar2;
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101cd80d4);
  (*pcVar1)();
}



/* Entry: 101cd80d4; end: 101cd815f;  */

void FUN_101cd80d4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 101cd8160; end: 101cd81b3;  */

void FUN_101cd8160(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x60);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101cd81b4; end: 101cd81bb;  */

void FUN_101cd81b4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x60);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101cd81bc; end: 101cd820b;  */

undefined8 FUN_101cd81bc(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}


