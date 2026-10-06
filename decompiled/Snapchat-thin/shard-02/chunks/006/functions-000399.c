/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101f456d0; end: 101f4578b;  */

undefined8 * FUN_101f456d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 101f4578c; end: 101f45823;  */

int FUN_101f4578c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101f45824; end: 101f45863;  */

void FUN_101f45824(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42c98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da34104;
  func_0x000107c61520(&UNK_10da34104,&UNK_1104a5278);
  puRam0000000112e42c98 = puVar1;
  return;
}



/* Entry: 101f45864; end: 101f459cb;  */

int FUN_101f45864(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101f458e0;
        goto LAB_101f458c4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101f458c4:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_101f458e0:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101f459cc; end: 101f45a0b;  */

void FUN_101f459cc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42ca0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da340dc;
  func_0x000107c61520(&UNK_10da340dc,&UNK_1104a5278);
  puRam0000000112e42ca0 = puVar1;
  return;
}



/* Entry: 101f45a0c; end: 101f45a0f;  */

void FUN_101f45a0c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42ca8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da3403c;
  func_0x000107c61520(&UNK_10da3403c,&UNK_1104a5278);
  puRam0000000112e42ca8 = puVar1;
  return;
}



/* Entry: 101f45a10; end: 101f45a4f;  */

void FUN_101f45a10(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42ca8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da3403c;
  func_0x000107c61520(&UNK_10da3403c,&UNK_1104a5278);
  puRam0000000112e42ca8 = puVar1;
  return;
}



/* Entry: 101f45a50; end: 101f45a53;  */

void FUN_101f45a50(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42cb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da34014;
  func_0x000107c61520(&UNK_10da34014,&UNK_1104a5278);
  puRam0000000112e42cb0 = puVar1;
  return;
}



/* Entry: 101f45a54; end: 101f45a93;  */

void FUN_101f45a54(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42cb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da34014;
  func_0x000107c61520(&UNK_10da34014,&UNK_1104a5278);
  puRam0000000112e42cb0 = puVar1;
  return;
}



/* Entry: 101f45a94; end: 101f45a9b;  */

undefined8 FUN_101f45a94(void)

{
  return 1;
}



/* Entry: 101f45a9c; end: 101f45aef;  */

void FUN_101f45a9c(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c5fb58(auStack_68,0x692d646e65697266,0xe900000000000064);
  func_0x000107c606a8();
  return;
}



/* Entry: 101f45af0; end: 101f45b0b;  */

void FUN_101f45af0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)
            (param_1,0x692d646e65697266,0xe900000000000064);
  return;
}



/* Entry: 101f45b0c; end: 101f45b5b;  */

void FUN_101f45b0c(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68);
  func_0x000107c5fb58(auStack_68,0x692d646e65697266,0xe900000000000064);
  func_0x000107c606a8();
  return;
}



/* Entry: 101f45b5c; end: 101f45bc7;  */

void FUN_101f45b5c(undefined8 param_1,long param_2)

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



/* Entry: 101f45bc8; end: 101f45c03;  */

void FUN_101f45bc8(undefined8 *param_1)

{
  *param_1 = 0x692d646e65697266;
  param_1[1] = 0xe900000000000064;
  return;
}



/* Entry: 101f45c04; end: 101f45c73;  */

void FUN_101f45c04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 101f45c74; end: 101f45c8b;  */

undefined1  [16] FUN_101f45c74(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 101f45c8c; end: 101f45cdb;  */

void FUN_101f45c8c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_101f45cdc();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 101f45cdc; end: 101f45d1b;  */

void FUN_101f45cdc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42d30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da34304;
  func_0x000107c61520(&UNK_10da34304,&UNK_1104a5468);
  puRam0000000112e42d30 = puVar1;
  return;
}



/* Entry: 101f45d1c; end: 101f45d3f;  */

undefined1  [16] FUN_101f45d1c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xee006e6f69746163;
  auVar1._0_8_ = 0x6f6c2d6572616873;
  return auVar1;
}



/* Entry: 101f45d40; end: 101f45d63;  */

void FUN_101f45d40(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101f45d64();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101f45d64; end: 101f45da3;  */

void FUN_101f45d64(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42d38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da341bc;
  func_0x000107c61520(&UNK_10da341bc,&UNK_1104a53d0);
  puRam0000000112e42d38 = puVar1;
  return;
}



/* Entry: 101f45da4; end: 101f45dd3;  */

long FUN_101f45da4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != *param_2 || param_1[1] != param_2[1]) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )();
    return lVar1;
  }
  return 1;
}



/* Entry: 101f45dd4; end: 101f45efb;  */

/* WARNING: Removing unreachable block (ram,0x000101f45e98) */

void FUN_101f45dd4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  
  lVar3 = 0x112e42d28;
  func_0x0001000285a8(0x112e42d28,&UNK_10da34170);
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  func_0x0001000a8868(param_2,uVar1);
  FUN_101f45cdc();
  puVar5 = &UNK_1104a5468;
  func_0x000107c606e0(&stack0xffffffffffffffa0 + -extraout_x8,&UNK_1104a5468,&UNK_1104a5468,lVar4,
                      uVar1,uVar2);
  if (unaff_x21 == 0) {
    lVar4 = lVar3;
    func_0x000107c604f4();
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



/* Entry: 101f45efc; end: 101f45f03;  */

void FUN_101f45efc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 101f45f04; end: 101f45f73;  */

undefined8 * FUN_101f45f04(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 101f45f74; end: 101f460f7;  */

int FUN_101f45f74(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101f460f8; end: 101f46137;  */

void FUN_101f460f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42d40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da342dc;
  func_0x000107c61520(&UNK_10da342dc,&UNK_1104a5468);
  puRam0000000112e42d40 = puVar1;
  return;
}



/* Entry: 101f46138; end: 101f4613b;  */

void FUN_101f46138(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42d48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da3423c;
  func_0x000107c61520(&UNK_10da3423c,&UNK_1104a5468);
  puRam0000000112e42d48 = puVar1;
  return;
}



/* Entry: 101f4613c; end: 101f4617b;  */

void FUN_101f4613c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42d48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da3423c;
  func_0x000107c61520(&UNK_10da3423c,&UNK_1104a5468);
  puRam0000000112e42d48 = puVar1;
  return;
}



/* Entry: 101f4617c; end: 101f4617f;  */

void FUN_101f4617c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42d50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da34214;
  func_0x000107c61520(&UNK_10da34214,&UNK_1104a5468);
  puRam0000000112e42d50 = puVar1;
  return;
}



/* Entry: 101f46180; end: 101f461bf;  */

void FUN_101f46180(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42d50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da34214;
  func_0x000107c61520(&UNK_10da34214,&UNK_1104a5468);
  puRam0000000112e42d50 = puVar1;
  return;
}



/* Entry: 101f461c0; end: 101f461e3;  */

undefined8 * FUN_101f461c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 101f461e4; end: 101f46207;  */

void FUN_101f461e4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101f46208();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101f46208; end: 101f46247;  */

void FUN_101f46208(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42dd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da343a4;
  func_0x000107c61520(&UNK_10da343a4,&UNK_1104a5568);
  puRam0000000112e42dd8 = puVar1;
  return;
}



/* Entry: 101f46248; end: 101f4624f;  */

undefined8 FUN_101f46248(void)

{
  return 1;
}



/* Entry: 101f46250; end: 101f46273;  */

void FUN_101f46250(void)

{
  func_0x0001000834e4();
  return;
}



/* Entry: 101f46274; end: 101f4629f;  */

undefined1  [16] FUN_101f46274(void)

{
  return ZEXT816(0x1104a5568);
}



/* Entry: 101f462a0; end: 101f462c3;  */

void FUN_101f462a0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101f462c4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101f462c4; end: 101f46303;  */

void FUN_101f462c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42de0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da34444;
  func_0x000107c61520(&UNK_10da34444,&UNK_1104a55c8);
  puRam0000000112e42de0 = puVar1;
  return;
}



/* Entry: 101f46304; end: 101f4630b;  */

undefined8 FUN_101f46304(void)

{
  return 1;
}



/* Entry: 101f4630c; end: 101f4632f;  */

void FUN_101f4630c(void)

{
  func_0x0001000834e4();
  return;
}



/* Entry: 101f46330; end: 101f4633f;  */

undefined1  [16] FUN_101f46330(void)

{
  return ZEXT816(0x1104a55c8);
}



/* Entry: 101f46340; end: 101f4636b;  */

void FUN_101f46340(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long unaff_x21;
  
  FUN_101f4636c();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
    *(undefined1 *)(param_1 + 2) = param_4;
  }
  return;
}



/* Entry: 101f4636c; end: 101f466b7;  */

/* WARNING: Removing unreachable block (ram,0x000101f46554) */
/* WARNING: Removing unreachable block (ram,0x000101f46674) */
/* WARNING: Removing unreachable block (ram,0x000101f464c0) */
/* WARNING: Removing unreachable block (ram,0x000101f46654) */
/* WARNING: Removing unreachable block (ram,0x000101f46458) */
/* WARNING: Removing unreachable block (ram,0x000101f46634) */
/* WARNING: Removing unreachable block (ram,0x000101f4648c) */
/* WARNING: Removing unreachable block (ram,0x000101f46644) */
/* WARNING: Removing unreachable block (ram,0x000101f464f4) */
/* WARNING: Removing unreachable block (ram,0x000101f46664) */
/* WARNING: Removing unreachable block (ram,0x000101f465b4) */
/* WARNING: Removing unreachable block (ram,0x000101f46424) */

ulong FUN_101f4636c(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x21;
  undefined1 auStack_68 [24];
  ulong uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = param_1;
  func_0x0001000a8868(param_1,uVar1);
  func_0x000107c606dc(auStack_68,uVar1,uVar2);
  uVar1 = uStack_48;
  uVar3 = uStack_50;
  if (unaff_x21 == 0) {
    func_0x0001000a8868(auStack_68,uStack_50);
    func_0x000107c605e0(uVar3,uVar1);
    if ((uVar3 & 1) == 0) {
      func_0x0001000a8868(auStack_68,uStack_50);
      func_0x000107c605c8(uStack_50,uStack_48);
      uVar4 = uStack_50 & 1;
    }
    else {
      uVar4 = 0;
    }
    func_0x0001000834e4(auStack_68);
    func_0x0001000834e4(param_1);
  }
  else {
    func_0x0001000834e4(param_1);
  }
  return uVar4;
}



/* Entry: 101f466b8; end: 101f467d3;  */

void FUN_101f466b8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_28;
  
  if (puRam0000000112e42df0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e42de8;
  func_0x00010002969c(0x112e42de8,&UNK_10da344c0);
  uVar2 = uVar1;
  FUN_101f3e5d0();
  puVar3 = PTR___sSayxGSesSeRzlMc_11034dd10;
  uStack_28 = uVar2;
  func_0x000107c61520(PTR___sSayxGSesSeRzlMc_11034dd10,uVar1,&uStack_28);
  puRam0000000112e42df0 = puVar3;
  return;
}



/* Entry: 101f467d4; end: 101f467d7;  */

void FUN_101f467d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42df8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da34508;
  func_0x000107c61520(&UNK_10da34508,&UNK_1104a5690);
  puRam0000000112e42df8 = puVar1;
  return;
}



/* Entry: 101f467d8; end: 101f46817;  */

void FUN_101f467d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42df8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da34508;
  func_0x000107c61520(&UNK_10da34508,&UNK_1104a5690);
  puRam0000000112e42df8 = puVar1;
  return;
}



/* Entry: 101f46818; end: 101f469a3;  */

bool FUN_101f46818(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101f469a4; end: 101f46a4f;  */

void FUN_101f469a4(void)

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



/* Entry: 101f46a50; end: 101f46a87;  */

undefined1  [16] FUN_101f46a50(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  undefined1 auVar3 [16];
  
  uVar1 = 0x656c676e61;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x676e696c616373;
  }
  uVar2 = 0xe500000000000000;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xe700000000000000;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 101f46a88; end: 101f46b5b;  */

void FUN_101f46a88(undefined1 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined1 uVar2;
  
  uVar1 = 0x676e696c616373;
  if ((param_2 == 0x676e696c616373 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x676e696c616373,0xe700000000000000,param_2,param_3,0), (uVar1 & 1) != 0))
  {
    func_0x000107c6142c(param_3);
    uVar2 = 0;
  }
  else {
    uVar1 = 0x656c676e61;
    if ((param_2 == 0x656c676e61) && (param_3 == -0x1b00000000000000)) {
      func_0x000107c6142c(0xe500000000000000);
      uVar2 = 1;
    }
    else {
      func_0x000107c605b8(0x656c676e61,0xe500000000000000,param_2,param_3,0);
      func_0x000107c6142c(param_3);
      uVar2 = 1;
      if ((uVar1 & 1) == 0) {
        uVar2 = 2;
      }
    }
  }
  *param_1 = uVar2;
  return;
}



/* Entry: 101f46b5c; end: 101f46b73;  */

undefined1  [16] FUN_101f46b5c(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 101f46b74; end: 101f46bc3;  */

void FUN_101f46b74(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_101f46e4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 101f46bc4; end: 101f46c0b;  */

undefined1  [16] FUN_101f46bc4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f01cb70;
  auVar1._0_8_ = 0xd000000000000011;
  return auVar1;
}



/* Entry: 101f46c0c; end: 101f46c33;  */

void FUN_101f46c0c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x21;
  
  FUN_101f46c34();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
  }
  return;
}



/* Entry: 101f46c34; end: 101f46d8f;  */

/* WARNING: Removing unreachable block (ram,0x000101f46cfc) */

undefined1  [16] FUN_101f46c34(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long unaff_x21;
  long lVar5;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar6 [16];
  undefined1 auStack_70 [14];
  undefined1 uStack_62;
  undefined1 uStack_61;
  
  lVar3 = 0x112e42e08;
  func_0x0001000285a8(0x112e42e08,&UNK_10da345d0);
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  func_0x0001000a8868(param_2,uVar1);
  FUN_101f46e4c();
  func_0x000107c606e0(auStack_70 + -extraout_x8,&UNK_1104a57f0,&UNK_1104a57f0,lVar4,uVar1,uVar2);
  if (unaff_x21 == 0) {
    uStack_61 = 0;
    func_0x000107c604fc(&uStack_61,lVar3);
    uStack_62 = 1;
    unaff_d9 = param_1;
    func_0x000107c604fc(&uStack_62,lVar3);
    (**(code **)(lVar5 + 8))(auStack_70 + -extraout_x8,lVar3);
    func_0x0001000834e4(param_2);
  }
  else {
    func_0x0001000834e4(param_2);
    param_1 = unaff_d8;
  }
  auVar6._8_8_ = unaff_d9;
  auVar6._0_8_ = param_1;
  return auVar6;
}



/* Entry: 101f46d90; end: 101f46db3;  */

void FUN_101f46d90(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101f46db4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101f46db4; end: 101f46df3;  */

void FUN_101f46db4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42e00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da34584;
  func_0x000107c61520(&UNK_10da34584,&UNK_1104a5758);
  puRam0000000112e42e00 = puVar1;
  return;
}



/* Entry: 101f46df4; end: 101f46e4b;  */

int FUN_101f46df4(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 101f46e4c; end: 101f46e8b;  */

void FUN_101f46e4c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42e10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da3469c;
  func_0x000107c61520(&UNK_10da3469c,&UNK_1104a57f0);
  puRam0000000112e42e10 = puVar1;
  return;
}



/* Entry: 101f46e8c; end: 101f46ff3;  */

int FUN_101f46e8c(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101f46f08;
        goto LAB_101f46eec;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101f46eec:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_101f46f08:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101f46ff4; end: 101f47033;  */

void FUN_101f46ff4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42e18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da34674;
  func_0x000107c61520(&UNK_10da34674,&UNK_1104a57f0);
  puRam0000000112e42e18 = puVar1;
  return;
}



/* Entry: 101f47034; end: 101f47037;  */

void FUN_101f47034(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42e20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da3460c;
  func_0x000107c61520(&UNK_10da3460c,&UNK_1104a57f0);
  puRam0000000112e42e20 = puVar1;
  return;
}



/* Entry: 101f47038; end: 101f47077;  */

void FUN_101f47038(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42e20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da3460c;
  func_0x000107c61520(&UNK_10da3460c,&UNK_1104a57f0);
  puRam0000000112e42e20 = puVar1;
  return;
}



/* Entry: 101f47078; end: 101f4707b;  */

void FUN_101f47078(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42e28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da345e4;
  func_0x000107c61520(&UNK_10da345e4,&UNK_1104a57f0);
  puRam0000000112e42e28 = puVar1;
  return;
}



/* Entry: 101f4707c; end: 101f470bb;  */

void FUN_101f4707c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42e28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da345e4;
  func_0x000107c61520(&UNK_10da345e4,&UNK_1104a57f0);
  puRam0000000112e42e28 = puVar1;
  return;
}



/* Entry: 101f470bc; end: 101f471fb;  */

bool FUN_101f470bc(double *param_1,double *param_2)

{
  byte bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  byte bVar6;
  byte bVar7;
  bool bVar8;
  bool bVar9;
  double dVar10;
  double dVar11;
  
  dVar2 = *param_1;
  dVar4 = param_1[1];
  dVar10 = param_1[2];
  dVar3 = *param_2;
  dVar5 = param_2[1];
  dVar11 = param_2[2];
  bVar6 = *(byte *)(param_2 + 3);
  bVar7 = *(byte *)(param_1 + 3);
  if (bVar7 >> 6 != 0) {
    if (bVar7 >> 6 == 1) {
      return (bVar6 & 0xc0) == 0x40 && (dVar10 == dVar11 && (dVar4 == dVar5 && dVar2 == dVar3));
    }
    bVar1 = 0;
    if (dVar10 == dVar11) {
      bVar1 = bVar6 ^ bVar7 ^ 1;
    }
    bVar7 = 0;
    if (dVar4 == dVar5) {
      bVar7 = bVar1;
    }
    bVar1 = 0;
    if (dVar2 == dVar3) {
      bVar1 = bVar7;
    }
    if (-0x41 < (char)bVar6) {
      bVar1 = 0;
    }
    return (bool)(bVar1 & 1);
  }
  if (bVar6 < 0x40) {
    bVar8 = false;
    if ((dVar2 == dVar3) && (bVar8 = false, !NAN(dVar4) && !NAN(dVar5))) {
      bVar8 = dVar4 == dVar5;
    }
    bVar9 = false;
    if ((bVar8) && (bVar9 = false, !NAN(dVar10) && !NAN(dVar11))) {
      bVar9 = dVar10 == dVar11;
    }
    if (bVar9) {
      return (bool)((bVar6 ^ bVar7 ^ 1) & 1);
    }
  }
  return false;
}



/* Entry: 101f471fc; end: 101f47227;  */

long FUN_101f471fc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101f47228; end: 101f473df;  */

int FUN_101f47228(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7d < param_2) && (*(char *)((long)param_1 + 0x19) != '\0')) {
    return *param_1 + 0x7e;
  }
  uVar1 = ((uint)(*(byte *)(param_1 + 6) >> 6) | (*(byte *)(param_1 + 6) >> 1 & 0x1f) << 2) ^ 0x7f;
  if (0x7c < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 101f473e0; end: 101f4743b;  */

bool FUN_101f473e0(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *param_1;
  uVar1 = param_1[2];
  uVar2 = param_2[2];
  if ((uVar3 != *param_2 || param_1[1] != param_2[1]) && (func_0x000107c605b8(), (uVar3 & 1) == 0))
  {
    return false;
  }
  return (int)uVar1 == (int)uVar2;
}



/* Entry: 101f4743c; end: 101f474cb;  */

/* WARNING: Possible PIC construction at 0x000101f47478: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f4747c) */

long FUN_101f4743c(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = *param_2;
  lVar4 = param_2[1];
  if ((lVar1 == lVar3 && lVar2 == lVar4) &&
     (lVar1 = param_1[2], lVar2 = param_1[3], lVar3 = param_2[2], lVar4 = param_2[3],
     param_1[2] == param_2[2] && param_1[3] == param_2[3])) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
  )(lVar1,lVar2,lVar3,lVar4,0);
  return lVar1;
}



/* Entry: 101f474cc; end: 101f4752f;  */

uint FUN_101f474cc(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_a8 = param_1[9];
  uStack_b0 = param_1[8];
  uStack_98 = param_1[0xb];
  uStack_a0 = param_1[10];
  uStack_88 = param_1[0xd];
  uStack_90 = param_1[0xc];
  uStack_e8 = param_1[1];
  uStack_f0 = *param_1;
  uStack_d8 = param_1[3];
  uStack_e0 = param_1[2];
  uStack_c8 = param_1[5];
  uStack_d0 = param_1[4];
  uStack_b8 = param_1[7];
  uStack_c0 = param_1[6];
  uStack_78 = param_2[1];
  uStack_80 = *param_2;
  uStack_68 = param_2[3];
  uStack_70 = param_2[2];
  uStack_58 = param_2[5];
  uStack_60 = param_2[4];
  uStack_48 = param_2[7];
  uStack_50 = param_2[6];
  uStack_28 = param_2[0xb];
  uStack_30 = param_2[10];
  uStack_18 = param_2[0xd];
  uStack_20 = param_2[0xc];
  uStack_38 = param_2[9];
  uStack_40 = param_2[8];
  FUN_101f47530(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 101f47530; end: 101f4783f;  */

undefined8 FUN_101f47530(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  uint uVar13;
  
  if (*(char *)(param_1 + 5) == '\x01') {
    if (*(char *)(param_2 + 5) != '\x01') {
      return 0;
    }
  }
  else {
    if (*(char *)(param_2 + 5) == '\x01') {
      return 0;
    }
    auVar5._4_4_ = -(uint)(param_1[1] == param_2[1]);
    auVar5._0_4_ = -(uint)(*param_1 == *param_2);
    auVar5._8_4_ = -(uint)(param_1[2] == param_2[2]);
    auVar5._12_4_ = -(uint)(param_1[3] == param_2[3]);
    uVar13 = NEON_uminv(auVar5,4);
    if ((uVar13 & 1) == 0) {
      return 0;
    }
    if (param_1[4] != param_2[4]) {
      return 0;
    }
  }
  if (*(char *)((long)param_1 + 0x34) == '\x01') {
    if (*(char *)((long)param_2 + 0x34) != '\x01') {
      return 0;
    }
  }
  else {
    if (*(char *)((long)param_2 + 0x34) == '\x01') {
      return 0;
    }
    if ((float)*(ulong *)((long)param_1 + 0x2c) != (float)*(ulong *)((long)param_2 + 0x2c) ||
        (*(ulong *)((long)param_2 + 0x2c) ^ *(ulong *)((long)param_1 + 0x2c)) >> 0x20 != 0) {
      return 0;
    }
  }
  dVar11 = param_1[8];
  dVar9 = param_2[8];
  if (dVar11 == 0.0) {
    if (dVar9 != 0.0) {
      return 0;
    }
  }
  else {
    if (dVar9 == 0.0) {
      return 0;
    }
    dVar12 = param_1[7];
    iVar3 = *(int *)(param_1 + 9);
    iVar4 = *(int *)(param_2 + 9);
    if ((dVar12 == param_2[7]) && (dVar11 == dVar9)) {
      if (iVar3 != iVar4) {
        return 0;
      }
    }
    else {
      func_0x000107c605b8(dVar12,dVar11,param_2[7],dVar9,0);
      if (((ulong)dVar12 & 1) == 0) {
        return 0;
      }
      if (iVar3 != iVar4) {
        return 0;
      }
    }
  }
  dVar9 = param_1[10];
  dVar1 = param_1[0xb];
  dVar11 = param_1[0xc];
  dVar2 = param_1[0xd];
  dVar12 = param_2[10];
  dVar7 = param_2[0xb];
  dVar8 = param_2[0xc];
  dVar10 = param_2[0xd];
  if (dVar1 == 0.0) {
    if (dVar7 == 0.0) {
      return 1;
    }
  }
  else if (dVar7 != 0.0) {
    if (((dVar9 == dVar12) && (dVar1 == dVar7)) ||
       (dVar6 = dVar9, func_0x000107c605b8(dVar9,dVar1,dVar12,dVar7,0), ((ulong)dVar6 & 1) != 0)) {
      if ((dVar11 == dVar8) && (dVar2 == dVar10)) {
        func_0x000101b69a3c(dVar12,dVar7,dVar11,dVar2);
        func_0x000101b69a3c(dVar9,dVar1,dVar11,dVar2);
        func_0x000107c6142c(dVar10);
        func_0x000107c6142c(dVar7);
        func_0x000101b69b64(dVar9,dVar1,dVar11,dVar2);
        return 1;
      }
      dVar6 = dVar11;
      func_0x000107c605b8(dVar11,dVar2,dVar8,dVar10,0);
      func_0x000101b69a3c(dVar12,dVar7,dVar8,dVar10);
      func_0x000101b69a3c(dVar9,dVar1,dVar11,dVar2);
      func_0x000107c6142c(dVar10);
      func_0x000107c6142c(dVar7);
      func_0x000101b69b64(dVar9,dVar1,dVar11,dVar2);
      if (((ulong)dVar6 & 1) == 0) {
        return 0;
      }
      return 1;
    }
    func_0x000101b69a3c(dVar12,dVar7,dVar8,dVar10);
    func_0x000101b69a3c(dVar9,dVar1,dVar11,dVar2);
    func_0x000107c6142c(dVar10);
    func_0x000107c6142c(dVar7);
    dVar12 = dVar9;
    dVar7 = dVar1;
    dVar8 = dVar11;
    dVar10 = dVar2;
    goto LAB_101f47758;
  }
  func_0x000101b69a3c(dVar12,dVar7,dVar8,dVar10);
  func_0x000101b69a3c(dVar9,dVar1,dVar11,dVar2);
  func_0x000101b69b64(dVar9,dVar1,dVar11,dVar2);
LAB_101f47758:
  func_0x000101b69b64(dVar12,dVar7,dVar8,dVar10);
  return 0;
}



/* Entry: 101f47840; end: 101f4787f;  */

/* WARNING: Possible PIC construction at 0x000101f47854: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f47858) */
/* WARNING: Removing unreachable block (ram,0x000101f47874) */
/* WARNING: Removing unreachable block (ram,0x000101f47860) */

void FUN_101f47840(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x40));
  return;
}



/* Entry: 101f47880; end: 101f47a27;  */

undefined8 * FUN_101f47880(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar2 = *(undefined8 *)((long)param_2 + 0x19);
  *(undefined8 *)((long)param_1 + 0x21) = *(undefined8 *)((long)param_2 + 0x21);
  *(undefined8 *)((long)param_1 + 0x19) = uVar2;
  *(undefined8 *)((long)param_1 + 0x2c) = *(undefined8 *)((long)param_2 + 0x2c);
  *(undefined1 *)((long)param_1 + 0x34) = *(undefined1 *)((long)param_2 + 0x34);
  uVar2 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar2;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  lVar1 = param_2[0xb];
  func_0x000107c61434();
  if (lVar1 == 0) {
    uVar2 = param_2[10];
    uVar4 = param_2[0xd];
    uVar3 = param_2[0xc];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar2;
    param_1[0xd] = uVar4;
    param_1[0xc] = uVar3;
  }
  else {
    param_1[10] = param_2[10];
    param_1[0xb] = lVar1;
    uVar2 = param_2[0xd];
    param_1[0xc] = param_2[0xc];
    param_1[0xd] = uVar2;
    func_0x000107c61434(lVar1);
    func_0x000107c61434(uVar2);
  }
  return param_1;
}



/* Entry: 101f47a28; end: 101f47af3;  */

long FUN_101f47a28(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
  return param_1;
}



/* Entry: 101f47af4; end: 101f47c93;  */

int FUN_101f47af4(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x1c] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 0x10);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 101f47c94; end: 101f47cc7;  */

undefined8 * FUN_101f47c94(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  func_0x000107c61434();
  return param_1;
}



/* Entry: 101f47cc8; end: 101f47d1b;  */

undefined8 * FUN_101f47cc8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  return param_1;
}



/* Entry: 101f47d1c; end: 101f47d57;  */

undefined8 * FUN_101f47d1c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  return param_1;
}



/* Entry: 101f47d58; end: 101f47def;  */

int FUN_101f47d58(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[5] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101f47df0; end: 101f47e53;  */

/* WARNING: Possible PIC construction at 0x000101f47e04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f47e08) */

void FUN_101f47df0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 101f47e54; end: 101f47ebf;  */

undefined8 * FUN_101f47e54(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 101f47ec0; end: 101f47f03;  */

undefined8 * FUN_101f47ec0(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 101f47f04; end: 101f47fcb;  */

int FUN_101f47f04(int *param_1,int param_2)

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



/* Entry: 101f47fcc; end: 101f47fef;  */

void FUN_101f47fcc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101f47ff0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101f47ff0; end: 101f4802f;  */

void FUN_101f47ff0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42e30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da348a4;
  func_0x000107c61520(&UNK_10da348a4,&UNK_1104a5c98);
  puRam0000000112e42e30 = puVar1;
  return;
}



/* Entry: 101f48030; end: 101f48037;  */

undefined8 FUN_101f48030(void)

{
  return 1;
}



/* Entry: 101f48038; end: 101f4805b;  */

void FUN_101f48038(void)

{
  func_0x0001000834e4();
  return;
}



/* Entry: 101f4805c; end: 101f48087;  */

undefined1  [16] FUN_101f4805c(void)

{
  return ZEXT816(0x1104a5c98);
}



/* Entry: 101f48088; end: 101f480ab;  */

void FUN_101f48088(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101f480ac();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101f480ac; end: 101f480eb;  */

void FUN_101f480ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42e38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da34934;
  func_0x000107c61520(&UNK_10da34934,&UNK_1104a5cf8);
  puRam0000000112e42e38 = puVar1;
  return;
}



/* Entry: 101f480ec; end: 101f480f3;  */

undefined8 FUN_101f480ec(void)

{
  return 1;
}



/* Entry: 101f480f4; end: 101f48117;  */

void FUN_101f480f4(void)

{
  func_0x0001000834e4();
  return;
}



/* Entry: 101f48118; end: 101f48143;  */

undefined1  [16] FUN_101f48118(void)

{
  return ZEXT816(0x1104a5cf8);
}



/* Entry: 101f48144; end: 101f48167;  */

void FUN_101f48144(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101f48168();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101f48168; end: 101f481a7;  */

void FUN_101f48168(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42e40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da349c4;
  func_0x000107c61520(&UNK_10da349c4,&UNK_1104a5d58);
  puRam0000000112e42e40 = puVar1;
  return;
}



/* Entry: 101f481a8; end: 101f481af;  */

undefined8 FUN_101f481a8(void)

{
  return 1;
}



/* Entry: 101f481b0; end: 101f481d3;  */

void FUN_101f481b0(void)

{
  func_0x0001000834e4();
  return;
}


