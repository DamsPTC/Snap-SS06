/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1010bbb1c; end: 1010bbb8b;  */

undefined8 * FUN_1010bbb1c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1010bbb8c; end: 1010bbc1f;  */

int FUN_1010bbb8c(int *param_1,int param_2)

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



/* Entry: 1010bbc20; end: 1010bbd9f;  */

void FUN_1010bbc20(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5a950 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d921c10;
  func_0x000107c61520(&UNK_10d921c10,&UNK_110380cc0);
  puRam0000000112d5a950 = puVar1;
  return;
}



/* Entry: 1010bbda0; end: 1010bbe07;  */

void FUN_1010bbda0(long *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_38;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    uVar1 = param_2;
    (*param_4)();
    puVar2 = PTR___sSayxGSEsSERzlMc_11034dce0;
    uStack_38 = uVar1;
    func_0x000107c61520(PTR___sSayxGSEsSERzlMc_11034dce0,param_2,&uStack_38);
    *param_1 = (long)puVar2;
  }
  return;
}



/* Entry: 1010bbe08; end: 1010bbe47;  */

void FUN_1010bbe08(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5a9b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d921610;
  func_0x000107c61520(&UNK_10d921610,&UNK_1103808e8);
  puRam0000000112d5a9b8 = puVar1;
  return;
}



/* Entry: 1010bbe48; end: 1010bc347;  */

void FUN_1010bbe48(void)

{
  return;
}



/* Entry: 1010bc348; end: 1010bc387;  */

void FUN_1010bc348(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5a9c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d921748;
  func_0x000107c61520(&UNK_10d921748,&UNK_110380d50);
  puRam0000000112d5a9c0 = puVar1;
  return;
}



/* Entry: 1010bc388; end: 1010bc38b;  */

void FUN_1010bc388(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5a9c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d921800;
  func_0x000107c61520(&UNK_10d921800,&UNK_110380cc0);
  puRam0000000112d5a9c8 = puVar1;
  return;
}



/* Entry: 1010bc38c; end: 1010bc3cb;  */

void FUN_1010bc38c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5a9c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d921800;
  func_0x000107c61520(&UNK_10d921800,&UNK_110380cc0);
  puRam0000000112d5a9c8 = puVar1;
  return;
}



/* Entry: 1010bc3cc; end: 1010bc3cf;  */

void FUN_1010bc3cc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5a9d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9218f0;
  func_0x000107c61520(&UNK_10d9218f0,&UNK_110380c30);
  puRam0000000112d5a9d0 = puVar1;
  return;
}



/* Entry: 1010bc3d0; end: 1010bc40f;  */

void FUN_1010bc3d0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5a9d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9218f0;
  func_0x000107c61520(&UNK_10d9218f0,&UNK_110380c30);
  puRam0000000112d5a9d0 = puVar1;
  return;
}



/* Entry: 1010bc410; end: 1010bc413;  */

void FUN_1010bc410(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5a9d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9219e0;
  func_0x000107c61520(&UNK_10d9219e0,&UNK_110380ba0);
  puRam0000000112d5a9d8 = puVar1;
  return;
}



/* Entry: 1010bc414; end: 1010bc453;  */

void FUN_1010bc414(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5a9d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9219e0;
  func_0x000107c61520(&UNK_10d9219e0,&UNK_110380ba0);
  puRam0000000112d5a9d8 = puVar1;
  return;
}



/* Entry: 1010bc454; end: 1010bc457;  */

void FUN_1010bc454(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5a9e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d921ad0;
  func_0x000107c61520(&UNK_10d921ad0,&UNK_110380b10);
  puRam0000000112d5a9e0 = puVar1;
  return;
}



/* Entry: 1010bc458; end: 1010bc497;  */

void FUN_1010bc458(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5a9e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d921ad0;
  func_0x000107c61520(&UNK_10d921ad0,&UNK_110380b10);
  puRam0000000112d5a9e0 = puVar1;
  return;
}



/* Entry: 1010bc498; end: 1010bc49b;  */

void FUN_1010bc498(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5a9e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d921a30;
  func_0x000107c61520(&UNK_10d921a30,&UNK_110380b10);
  puRam0000000112d5a9e8 = puVar1;
  return;
}



/* Entry: 1010bc49c; end: 1010bc4db;  */

void FUN_1010bc49c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5a9e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d921a30;
  func_0x000107c61520(&UNK_10d921a30,&UNK_110380b10);
  puRam0000000112d5a9e8 = puVar1;
  return;
}



/* Entry: 1010bc4dc; end: 1010bc4df;  */

void FUN_1010bc4dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5a9f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d921a08;
  func_0x000107c61520(&UNK_10d921a08,&UNK_110380b10);
  puRam0000000112d5a9f0 = puVar1;
  return;
}



/* Entry: 1010bc4e0; end: 1010bc51f;  */

void FUN_1010bc4e0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5a9f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d921a08;
  func_0x000107c61520(&UNK_10d921a08,&UNK_110380b10);
  puRam0000000112d5a9f0 = puVar1;
  return;
}



/* Entry: 1010bc520; end: 1010bc523;  */

void FUN_1010bc520(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5a9f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d921940;
  func_0x000107c61520(&UNK_10d921940,&UNK_110380ba0);
  puRam0000000112d5a9f8 = puVar1;
  return;
}



/* Entry: 1010bc524; end: 1010bc563;  */

void FUN_1010bc524(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5a9f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d921940;
  func_0x000107c61520(&UNK_10d921940,&UNK_110380ba0);
  puRam0000000112d5a9f8 = puVar1;
  return;
}



/* Entry: 1010bc564; end: 1010bc567;  */

void FUN_1010bc564(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5aa00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d921918;
  func_0x000107c61520(&UNK_10d921918,&UNK_110380ba0);
  puRam0000000112d5aa00 = puVar1;
  return;
}



/* Entry: 1010bc568; end: 1010bc5a7;  */

void FUN_1010bc568(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5aa00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d921918;
  func_0x000107c61520(&UNK_10d921918,&UNK_110380ba0);
  puRam0000000112d5aa00 = puVar1;
  return;
}



/* Entry: 1010bc5a8; end: 1010bc5ab;  */

void FUN_1010bc5a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5aa08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d921850;
  func_0x000107c61520(&UNK_10d921850,&UNK_110380c30);
  puRam0000000112d5aa08 = puVar1;
  return;
}



/* Entry: 1010bc5ac; end: 1010bc5eb;  */

void FUN_1010bc5ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5aa08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d921850;
  func_0x000107c61520(&UNK_10d921850,&UNK_110380c30);
  puRam0000000112d5aa08 = puVar1;
  return;
}



/* Entry: 1010bc5ec; end: 1010bc5ef;  */

void FUN_1010bc5ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5aa10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d921828;
  func_0x000107c61520(&UNK_10d921828,&UNK_110380c30);
  puRam0000000112d5aa10 = puVar1;
  return;
}



/* Entry: 1010bc5f0; end: 1010bc62f;  */

void FUN_1010bc5f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5aa10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d921828;
  func_0x000107c61520(&UNK_10d921828,&UNK_110380c30);
  puRam0000000112d5aa10 = puVar1;
  return;
}



/* Entry: 1010bc630; end: 1010bc633;  */

void FUN_1010bc630(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5aa18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d921798;
  func_0x000107c61520(&UNK_10d921798,&UNK_110380cc0);
  puRam0000000112d5aa18 = puVar1;
  return;
}



/* Entry: 1010bc634; end: 1010bc673;  */

void FUN_1010bc634(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5aa18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d921798;
  func_0x000107c61520(&UNK_10d921798,&UNK_110380cc0);
  puRam0000000112d5aa18 = puVar1;
  return;
}



/* Entry: 1010bc674; end: 1010bc677;  */

void FUN_1010bc674(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5aa20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d921770;
  func_0x000107c61520(&UNK_10d921770,&UNK_110380cc0);
  puRam0000000112d5aa20 = puVar1;
  return;
}



/* Entry: 1010bc678; end: 1010bc6b7;  */

void FUN_1010bc678(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5aa20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d921770;
  func_0x000107c61520(&UNK_10d921770,&UNK_110380cc0);
  puRam0000000112d5aa20 = puVar1;
  return;
}



/* Entry: 1010bc6b8; end: 1010bc723;  */

ulong FUN_1010bc6b8(undefined8 param_1,undefined8 param_2)

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



/* Entry: 1010bc724; end: 1010bc787;  */

ulong FUN_1010bc724(undefined8 param_1,undefined8 param_2)

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



/* Entry: 1010bc788; end: 1010bc7c7;  */

void FUN_1010bc788(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5aab0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9216d0;
  func_0x000107c61520(&UNK_10d9216d0,&UNK_110380d50);
  puRam0000000112d5aab0 = puVar1;
  return;
}



/* Entry: 1010bc7c8; end: 1010bc833;  */

undefined1 FUN_1010bc7c8(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 1010bc834; end: 1010bc8d3;  */

long FUN_1010bc834(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1010bc8d4; end: 1010bc957;  */

undefined8 * FUN_1010bc8d4(undefined8 *param_1,undefined8 *param_2)

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
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  return param_1;
}



/* Entry: 1010bc958; end: 1010bc9ab;  */

undefined8 * FUN_1010bc958(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  param_1[6] = param_2[6];
  return param_1;
}



/* Entry: 1010bc9ac; end: 1010bca4f;  */

int FUN_1010bc9ac(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xe] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1010bca50; end: 1010bcbdb;  */

void FUN_1010bca50(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_60 [11];
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar3 = 0x112d5abf0;
  func_0x0001000285a8(0x112d5abf0,&UNK_10d921cb0);
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_60 + -extraout_x8;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  func_0x0001010bce00();
  func_0x000107c606ec(puVar4,&UNK_110380f40,&UNK_110380f40,param_1,uVar1,uVar2);
  uStack_51 = 0;
  func_0x000107c6053c(*unaff_x20,unaff_x20[1],&uStack_51,lVar3);
  if (unaff_x21 == 0) {
    uStack_52 = 1;
    func_0x000107c6053c(unaff_x20[2],unaff_x20[3],&uStack_52,lVar3);
    uStack_53 = 2;
    func_0x000107c60544(unaff_x20[4],&uStack_53,lVar3);
    uStack_54 = 3;
    func_0x000107c60544(unaff_x20[5],&uStack_54,lVar3);
    uStack_55 = 4;
    func_0x000107c60544(unaff_x20[6],&uStack_55,lVar3);
    (**(code **)(lVar5 + 8))(puVar4,lVar3);
  }
  else {
    (**(code **)(lVar5 + 8))(puVar4,lVar3);
  }
  return;
}



/* Entry: 1010bcbdc; end: 1010bcbef;  */

bool FUN_1010bcbdc(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1010bcbf0; end: 1010bcc9b;  */

void FUN_1010bcbf0(void)

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



/* Entry: 1010bcc9c; end: 1010bcd5f;  */

undefined1  [16] FUN_1010bcc9c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auVar6 [16];
  
  bVar4 = *unaff_x20;
  uVar1 = 0xeb00000000746573;
  uVar2 = 0x66664f6b63617274;
  if (bVar4 != 3) {
    uVar1 = 0xed0000656d69546b;
    uVar2 = 0x636f6c436c6c6177;
  }
  uVar3 = 0xee006e6f69746973;
  uVar5 = 0x6f50726579616c70;
  if (bVar4 != 2) {
    uVar3 = uVar1;
    uVar5 = uVar2;
  }
  uVar1 = 0x64496b63617274;
  if (bVar4 != 0) {
    uVar1 = 0x7453726579616c70;
  }
  uVar2 = 0xe700000000000000;
  if (bVar4 != 0) {
    uVar2 = 0xeb00000000657461;
  }
  if (bVar4 < 2) {
    uVar3 = uVar2;
    uVar5 = uVar1;
  }
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = uVar5;
  return auVar6;
}



/* Entry: 1010bcd60; end: 1010bcd83;  */

void FUN_1010bcd60(undefined1 *param_1,undefined1 param_2)

{
  FUN_1010bd070();
  *param_1 = param_2;
  return;
}



/* Entry: 1010bcd84; end: 1010bcd9b;  */

undefined1  [16] FUN_1010bcd84(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 1010bcd9c; end: 1010bcdeb;  */

void FUN_1010bcd9c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x0001010bce00();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 1010bcdec; end: 1010bce3f;  */

void FUN_1010bcdec(void)

{
  FUN_1010bca50();
  return;
}



/* Entry: 1010bce40; end: 1010bcfa7;  */

int FUN_1010bce40(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1010bcebc;
        goto LAB_1010bcea0;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1010bcea0:
      return ((uint)*param_1 | uVar1 << 8) - 4;
    }
  }
LAB_1010bcebc:
  iVar2 = *param_1 - 5;
  if (*param_1 < 5) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1010bcfa8; end: 1010bcfe7;  */

void FUN_1010bcfa8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5ac00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d921d54;
  func_0x000107c61520(&UNK_10d921d54,&UNK_110380f40);
  puRam0000000112d5ac00 = puVar1;
  return;
}



/* Entry: 1010bcfe8; end: 1010bcfeb;  */

void FUN_1010bcfe8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5ac08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d921cec;
  func_0x000107c61520(&UNK_10d921cec,&UNK_110380f40);
  puRam0000000112d5ac08 = puVar1;
  return;
}



/* Entry: 1010bcfec; end: 1010bd02b;  */

void FUN_1010bcfec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5ac08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d921cec;
  func_0x000107c61520(&UNK_10d921cec,&UNK_110380f40);
  puRam0000000112d5ac08 = puVar1;
  return;
}



/* Entry: 1010bd02c; end: 1010bd02f;  */

void FUN_1010bd02c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5ac10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d921cc4;
  func_0x000107c61520(&UNK_10d921cc4,&UNK_110380f40);
  puRam0000000112d5ac10 = puVar1;
  return;
}



/* Entry: 1010bd030; end: 1010bd06f;  */

void FUN_1010bd030(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5ac10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d921cc4;
  func_0x000107c61520(&UNK_10d921cc4,&UNK_110380f40);
  puRam0000000112d5ac10 = puVar1;
  return;
}



/* Entry: 1010bd070; end: 1010bd233;  */

undefined4 FUN_1010bd070(long param_1,long param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = 0;
  if ((param_1 == 0x64496b63617274 && param_2 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x64496b63617274,0xe700000000000000,param_1,param_2,0), (uVar1 & 1) != 0))
  {
    func_0x000107c6142c(param_2);
    uVar2 = 0;
  }
  else {
    uVar1 = 0;
    if (((param_1 == 0x7453726579616c70) && (param_2 == -0x14ffffffff9a8b9f)) ||
       (func_0x000107c605b8(0x7453726579616c70,0xeb00000000657461,param_1,param_2,0),
       (uVar1 & 1) != 0)) {
      func_0x000107c6142c(param_2);
      uVar2 = 1;
    }
    else {
      uVar1 = 0;
      if (((param_1 == 0x6f50726579616c70) && (param_2 == -0x11ff9190968b968d)) ||
         (func_0x000107c605b8(0x6f50726579616c70,0xee006e6f69746973,param_1,param_2,0),
         (uVar1 & 1) != 0)) {
        func_0x000107c6142c(param_2);
        uVar2 = 2;
      }
      else {
        uVar1 = 0;
        if (((param_1 == 0x66664f6b63617274) && (param_2 == -0x14ffffffff8b9a8d)) ||
           (func_0x000107c605b8(0x66664f6b63617274,0xeb00000000746573,param_1,param_2,0),
           (uVar1 & 1) != 0)) {
          func_0x000107c6142c(param_2);
          uVar2 = 3;
        }
        else {
          uVar1 = 0x636f6c436c6c6177;
          if ((param_1 == 0x636f6c436c6c6177) && (param_2 == -0x12ffff9a9296ab95)) {
            func_0x000107c6142c(0xed0000656d69546b);
            uVar2 = 4;
          }
          else {
            func_0x000107c605b8(0x636f6c436c6c6177,0xed0000656d69546b,param_1,param_2,0);
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



/* Entry: 1010bd234; end: 1010bd43f;  */

/* WARNING: Removing unreachable block (ram,0x0001010bd38c) */

void FUN_1010bd234(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_60 [7];
  undefined1 uStack_59;
  ulong uStack_58;
  
  lVar1 = 0x112d5ac18;
  func_0x0001000285a8(0x112d5ac18,&UNK_10d921e18);
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_60 + -extraout_x8;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar2);
  FUN_1010bdaf8();
  func_0x000107c606ec(puVar4,&UNK_110381100,&UNK_110381100,param_1,uVar2,uVar3);
  uStack_58 = uStack_58 & 0xffffffffffffff00;
  func_0x000107c6053c(*unaff_x20,unaff_x20[1],&uStack_58,lVar1);
  if (unaff_x21 == 0) {
    uStack_58._0_1_ = 1;
    func_0x000107c60560(unaff_x20[2],&uStack_58,lVar1);
    uStack_58._0_1_ = 2;
    func_0x000107c60560(unaff_x20[3],&uStack_58,lVar1);
    uStack_58 = CONCAT71(uStack_58._1_7_,3);
    func_0x000107c60560(unaff_x20[4],&uStack_58,lVar1);
    uStack_58 = unaff_x20[5];
    uStack_59 = 4;
    uVar2 = 0x112d5ac28;
    func_0x0001000285a8(0x112d5ac28,&UNK_10d921e20);
    uVar3 = uVar2;
    func_0x0001010bdb38();
    func_0x000107c60554(&uStack_58,&uStack_59,lVar1,uVar2,uVar3);
    uStack_58 = unaff_x20[6];
    uStack_59 = 5;
    func_0x000107c60554(&uStack_58,&uStack_59,lVar1,uVar2,uVar3);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
  else {
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
  return;
}



/* Entry: 1010bd440; end: 1010bd453;  */

bool FUN_1010bd440(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1010bd454; end: 1010bd4ff;  */

void FUN_1010bd454(void)

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



/* Entry: 1010bd500; end: 1010bd5d3;  */

undefined1  [16] FUN_1010bd500(void)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  char *pcVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  byte *unaff_x20;
  undefined1 auVar9 [16];
  
  bVar4 = *unaff_x20;
  pcVar5 = "numBeatsInMeasure";
  uVar7 = 0xd000000000000015;
  if (bVar4 != 4) {
    pcVar5 = "syncPointTimestampsMs";
    uVar7 = 0xd000000000000014;
  }
  pcVar6 = "trackDurationSec";
  uVar8 = 0xd000000000000011;
  if (bVar4 != 3) {
    pcVar6 = pcVar5;
    uVar8 = uVar7;
  }
  uVar3 = 0x800000010ef24420;
  uVar7 = 0xd000000000000010;
  if (bVar4 != 1) {
    uVar3 = 0xec000000734d646f;
    uVar7 = 0x6972655074616562;
  }
  uVar1 = 0x64496b63617274;
  if (bVar4 != 0) {
    uVar1 = uVar7;
  }
  uVar2 = 0xe700000000000000;
  if (bVar4 != 0) {
    uVar2 = uVar3;
  }
  uVar3 = (ulong)pcVar6 | 0x8000000000000000;
  if (bVar4 < 3) {
    uVar3 = uVar2;
    uVar8 = uVar1;
  }
  auVar9._8_8_ = uVar3;
  auVar9._0_8_ = uVar8;
  return auVar9;
}



/* Entry: 1010bd5d4; end: 1010bd5f7;  */

void FUN_1010bd5d4(undefined1 *param_1,undefined1 param_2)

{
  FUN_1010bddd0();
  *param_1 = param_2;
  return;
}



/* Entry: 1010bd5f8; end: 1010bd60f;  */

undefined1  [16] FUN_1010bd5f8(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 1010bd610; end: 1010bd65f;  */

void FUN_1010bd610(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_1010bdaf8();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 1010bd660; end: 1010bd673;  */

void FUN_1010bd660(void)

{
  FUN_1010bd234();
  return;
}



/* Entry: 1010bd674; end: 1010bd8ab;  */

void FUN_1010bd674(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  
  lVar3 = param_2;
  func_0x000107c5c584();
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar3 != 0) {
    lVar10 = 0;
    do {
      lVar4 = param_2;
      func_0x000107c5c580();
      func_0x000107c61180();
      if (lVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1010bd8a8);
        (*pcVar2)();
      }
      lVar5 = lVar4;
      func_0x000107c5dc14();
      func_0x000107c61170(lVar4);
      puVar9 = puVar7;
      func_0x000107c61558();
      puVar6 = puVar7;
      if (((ulong)puVar9 & 1) == 0) {
        puVar6 = (undefined *)0x0;
        FUN_1010bb1d4(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
      }
      uVar1 = *(ulong *)(puVar6 + 0x10);
      puVar7 = puVar6;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar1) {
        puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
        FUN_1010bb1d4(puVar7,uVar1 + 1,1,puVar6);
      }
      lVar10 = lVar10 + 1;
      *(ulong *)(puVar7 + 0x10) = uVar1 + 1;
      *(long *)(puVar7 + uVar1 * 8 + 0x20) = lVar5;
    } while (lVar3 != lVar10);
  }
  lVar3 = param_2;
  func_0x000107c3db18();
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar3 != 0) {
    lVar10 = 0;
    do {
      lVar4 = param_2;
      func_0x000107c3db14();
      func_0x000107c61180();
      if (lVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1010bd8ac);
        (*pcVar2)();
      }
      lVar5 = lVar4;
      func_0x000107c5dc14();
      func_0x000107c61170(lVar4);
      puVar6 = puVar9;
      func_0x000107c61558();
      puVar8 = puVar9;
      if (((ulong)puVar6 & 1) == 0) {
        puVar8 = (undefined *)0x0;
        FUN_1010bb1d4(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
      }
      uVar1 = *(ulong *)(puVar8 + 0x10);
      puVar9 = puVar8;
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
        puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
        FUN_1010bb1d4(puVar9,uVar1 + 1,1,puVar8);
      }
      lVar10 = lVar10 + 1;
      *(ulong *)(puVar9 + 0x10) = uVar1 + 1;
      *(long *)(puVar9 + uVar1 * 8 + 0x20) = lVar5;
    } while (lVar3 != lVar10);
  }
  func_0x000107c5cda4();
  puVar6 = PTR___ss6UInt64VN_11034f048;
  puVar8 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
  func_0x000107c6057c();
  lVar3 = param_2;
  func_0x000107c5cd98();
  lVar10 = param_2;
  func_0x000107c3e730();
  func_0x000107c4d8c4();
  *param_1 = puVar6;
  param_1[1] = puVar8;
  param_1[2] = lVar3;
  param_1[3] = lVar10;
  param_1[4] = param_2;
  param_1[5] = puVar7;
  param_1[6] = puVar9;
  return;
}



/* Entry: 1010bd8ac; end: 1010bd907;  */

long FUN_1010bd8ac(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1010bd908; end: 1010bd9f7;  */

undefined8 * FUN_1010bd908(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar1 = param_2[6];
  param_1[6] = uVar1;
  func_0x000107c61434();
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar1);
  return param_1;
}



/* Entry: 1010bd9f8; end: 1010bda53;  */

undefined8 * FUN_1010bd9f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  param_1[4] = param_2[4];
  func_0x000107c6142c(param_1[5]);
  uVar2 = param_1[6];
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 1010bda54; end: 1010bdaf7;  */

int FUN_1010bda54(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xe] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1010bdaf8; end: 1010bdb9f;  */

void FUN_1010bdaf8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5ac20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d921eec;
  func_0x000107c61520(&UNK_10d921eec,&UNK_110381100);
  puRam0000000112d5ac20 = puVar1;
  return;
}



/* Entry: 1010bdba0; end: 1010bdd07;  */

int FUN_1010bdba0(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfa < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 5) {
      iVar2 = 4;
    }
    if (param_2 + 5 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1010bdc1c;
        goto LAB_1010bdc00;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1010bdc00:
      return ((uint)*param_1 | uVar1 << 8) - 5;
    }
  }
LAB_1010bdc1c:
  iVar2 = *param_1 - 6;
  if (*param_1 < 6) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1010bdd08; end: 1010bdd47;  */

void FUN_1010bdd08(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5ac38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d921ec4;
  func_0x000107c61520(&UNK_10d921ec4,&UNK_110381100);
  puRam0000000112d5ac38 = puVar1;
  return;
}



/* Entry: 1010bdd48; end: 1010bdd4b;  */

void FUN_1010bdd48(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5ac40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d921e5c;
  func_0x000107c61520(&UNK_10d921e5c,&UNK_110381100);
  puRam0000000112d5ac40 = puVar1;
  return;
}



/* Entry: 1010bdd4c; end: 1010bdd8b;  */

void FUN_1010bdd4c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5ac40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d921e5c;
  func_0x000107c61520(&UNK_10d921e5c,&UNK_110381100);
  puRam0000000112d5ac40 = puVar1;
  return;
}



/* Entry: 1010bdd8c; end: 1010bdd8f;  */

void FUN_1010bdd8c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5ac48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d921e34;
  func_0x000107c61520(&UNK_10d921e34,&UNK_110381100);
  puRam0000000112d5ac48 = puVar1;
  return;
}



/* Entry: 1010bdd90; end: 1010bddcf;  */

void FUN_1010bdd90(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5ac48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d921e34;
  func_0x000107c61520(&UNK_10d921e34,&UNK_110381100);
  puRam0000000112d5ac48 = puVar1;
  return;
}



/* Entry: 1010bddd0; end: 1010bdfcf;  */

undefined4 FUN_1010bddd0(long param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_1 == 0x64496b63617274 && param_2 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x64496b63617274,0xe700000000000000,param_1,param_2,0), (uVar2 & 1) != 0))
  {
    func_0x000107c6142c(param_2);
    uVar1 = 0;
  }
  else {
    if ((param_1 != -0x2ffffffffffffff0) || (param_2 != -0x7ffffffef10dbbe0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000010,0x800000010ef24420,param_1,param_2,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_1 == 0x6972655074616562) && (param_2 == -0x13ffffff8cb29b91)) ||
           (func_0x000107c605b8(0x6972655074616562,0xec000000734d646f,param_1,param_2,0),
           (uVar2 & 1) != 0)) {
          func_0x000107c6142c(param_2);
          return 2;
        }
        uVar2 = 0xd000000000000011;
        if (((param_1 != -0x2fffffffffffffef) || (param_2 != -0x7ffffffef10dbbc0)) &&
           (func_0x000107c605b8(0xd000000000000011,0x800000010ef24440,param_1,param_2,0),
           (uVar2 & 1) == 0)) {
          uVar2 = 0xd000000000000015;
          if (((param_1 != -0x2fffffffffffffeb) || (param_2 != -0x7ffffffef10dbba0)) &&
             (func_0x000107c605b8(0xd000000000000015,0x800000010ef24460,param_1,param_2,0),
             (uVar2 & 1) == 0)) {
            uVar2 = 0;
            if ((param_1 == -0x2fffffffffffffec) && (param_2 == -0x7ffffffef10dbb80)) {
              func_0x000107c6142c(0x800000010ef24480);
              return 5;
            }
            func_0x000107c605b8(0xd000000000000014,0x800000010ef24480,param_1,param_2,0);
            func_0x000107c6142c(param_2);
            if ((uVar2 & 1) != 0) {
              return 5;
            }
            return 6;
          }
          func_0x000107c6142c(param_2);
          return 4;
        }
        func_0x000107c6142c(param_2);
        return 3;
      }
    }
    func_0x000107c6142c(param_2);
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 1010bdfd0; end: 1010bdfdb; -[SCExternalMusicPlaybackEventProviderEntryPoint conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010bdfd0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5ac50;
  func_0x000107c61428(param_1 + _DAT_112d5ac50,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010bdfdc; end: 1010bdfe7; -[SCExternalMusicPlaybackEventProviderEntryPoint setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010bdfdc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5ac50;
  func_0x000107c61428(param_1 + _DAT_112d5ac50,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010bdfe8; end: 1010bdff3; -[SCExternalMusicPlaybackEventProviderEntryPoint cameraUIScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010bdfe8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5ac58;
  func_0x000107c61428(param_1 + _DAT_112d5ac58,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010bdff4; end: 1010bdfff; -[SCExternalMusicPlaybackEventProviderEntryPoint setCameraUIScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010bdff4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5ac58;
  func_0x000107c61428(param_1 + _DAT_112d5ac58,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010be000; end: 1010be00b; -[SCExternalMusicPlaybackEventProviderEntryPoint musicServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010be000(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5ac60;
  func_0x000107c61428(param_1 + _DAT_112d5ac60,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010be00c; end: 1010be017; -[SCExternalMusicPlaybackEventProviderEntryPoint setMusicServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010be00c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5ac60;
  func_0x000107c61428(param_1 + _DAT_112d5ac60,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010be018; end: 1010be023; -[SCExternalMusicPlaybackEventProviderEntryPoint musicSyncServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010be018(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5ac68;
  func_0x000107c61428(param_1 + _DAT_112d5ac68,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010be024; end: 1010be02f; -[SCExternalMusicPlaybackEventProviderEntryPoint setMusicSyncServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010be024(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5ac68;
  func_0x000107c61428(param_1 + _DAT_112d5ac68,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010be030; end: 1010be03b; -[SCExternalMusicPlaybackEventProviderEntryPoint cameraFeatureServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010be030(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5ac70;
  func_0x000107c61428(param_1 + _DAT_112d5ac70,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010be03c; end: 1010be047; -[SCExternalMusicPlaybackEventProviderEntryPoint setCameraFeatureServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010be03c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5ac70;
  func_0x000107c61428(param_1 + _DAT_112d5ac70,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010be048; end: 1010be053; -[SCExternalMusicPlaybackEventProviderEntryPoint lensPerformerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010be048(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5ac78;
  func_0x000107c61428(param_1 + _DAT_112d5ac78,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010be054; end: 1010be05f; -[SCExternalMusicPlaybackEventProviderEntryPoint setLensPerformerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010be054(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5ac78;
  func_0x000107c61428(param_1 + _DAT_112d5ac78,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010be060; end: 1010be06b; -[SCExternalMusicPlaybackEventProviderEntryPoint lensPreviewConfiguringServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010be060(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5ac80;
  func_0x000107c61428(param_1 + _DAT_112d5ac80,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010be06c; end: 1010be077; -[SCExternalMusicPlaybackEventProviderEntryPoint setLensPreviewConfiguringServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010be06c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5ac80;
  func_0x000107c61428(param_1 + _DAT_112d5ac80,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010be078; end: 1010be083; -[SCExternalMusicPlaybackEventProviderEntryPoint cameraHardwareServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010be078(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5ac88;
  func_0x000107c61428(param_1 + _DAT_112d5ac88,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010be084; end: 1010be08f; -[SCExternalMusicPlaybackEventProviderEntryPoint setCameraHardwareServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010be084(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5ac88;
  func_0x000107c61428(param_1 + _DAT_112d5ac88,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010be090; end: 1010be09b; -[SCExternalMusicPlaybackEventProviderEntryPoint loggerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010be090(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5ac90;
  func_0x000107c61428(param_1 + _DAT_112d5ac90,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010be09c; end: 1010be0df;  */

void FUN_1010be09c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010be0e0; end: 1010be0eb; -[SCExternalMusicPlaybackEventProviderEntryPoint setLoggerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010be0e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5ac90;
  func_0x000107c61428(param_1 + _DAT_112d5ac90,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010be0ec; end: 1010be13f;  */

void FUN_1010be0ec(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010be140; end: 1010be89f;  */

/* WARNING: Possible PIC construction at 0x0001010be2ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010be2f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010be32c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010be3c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010be404: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010be4ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010be4fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010be520: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010be5a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010be5b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010be5dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010be658: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010be668: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010be68c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010be69c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010be6ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010be6bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010be6cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010be6dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010be6ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010be830: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010be840: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010be850: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010be860: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010be800: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010be810: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010be820: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010be7d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010be7e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010be7a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010be7b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010be780: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010be790: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010be770: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010be794) */
/* WARNING: Removing unreachable block (ram,0x0001010be784) */
/* WARNING: Removing unreachable block (ram,0x0001010be7b4) */
/* WARNING: Removing unreachable block (ram,0x0001010be7a4) */
/* WARNING: Removing unreachable block (ram,0x0001010be7e4) */
/* WARNING: Removing unreachable block (ram,0x0001010be7d4) */
/* WARNING: Removing unreachable block (ram,0x0001010be824) */
/* WARNING: Removing unreachable block (ram,0x0001010be814) */
/* WARNING: Removing unreachable block (ram,0x0001010be804) */
/* WARNING: Removing unreachable block (ram,0x0001010be864) */
/* WARNING: Removing unreachable block (ram,0x0001010be854) */
/* WARNING: Removing unreachable block (ram,0x0001010be844) */
/* WARNING: Removing unreachable block (ram,0x0001010be834) */
/* WARNING: Removing unreachable block (ram,0x0001010be6f0) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x0001010be6e0) */
/* WARNING: Removing unreachable block (ram,0x0001010be6d0) */
/* WARNING: Removing unreachable block (ram,0x0001010be6c0) */
/* WARNING: Removing unreachable block (ram,0x0001010be6b0) */
/* WARNING: Removing unreachable block (ram,0x0001010be6a0) */
/* WARNING: Removing unreachable block (ram,0x0001010be690) */
/* WARNING: Removing unreachable block (ram,0x0001010be66c) */
/* WARNING: Removing unreachable block (ram,0x0001010be65c) */
/* WARNING: Removing unreachable block (ram,0x0001010be5e0) */
/* WARNING: Removing unreachable block (ram,0x0001010be5bc) */
/* WARNING: Removing unreachable block (ram,0x0001010be5ac) */
/* WARNING: Removing unreachable block (ram,0x0001010be524) */
/* WARNING: Removing unreachable block (ram,0x0001010be500) */
/* WARNING: Removing unreachable block (ram,0x0001010be4f0) */
/* WARNING: Removing unreachable block (ram,0x0001010be408) */
/* WARNING: Removing unreachable block (ram,0x0001010be888) */
/* WARNING: Removing unreachable block (ram,0x0001010be454) */
/* WARNING: Removing unreachable block (ram,0x0001010be3cc) */
/* WARNING: Removing unreachable block (ram,0x0001010be330) */
/* WARNING: Removing unreachable block (ram,0x0001010be2f4) */
/* WARNING: Removing unreachable block (ram,0x0001010be2b0) */
/* WARNING: Removing unreachable block (ram,0x0001010be774) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010be140(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  lVar1 = unaff_x20;
  func_0x000107c40080();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c3f284();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c4d280();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar4 = unaff_x20;
        func_0x000107c4d298();
        func_0x000107c61180();
        if (lVar4 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar2;
        }
        else {
          lVar5 = unaff_x20;
          func_0x000107c3f0e0();
          func_0x000107c61180();
          if (lVar5 != 0) {
            lVar5 = unaff_x20;
            func_0x000107c4b2f4();
            func_0x000107c61180();
            if (lVar5 != 0) {
              lVar5 = unaff_x20;
              func_0x000107c4b338();
              func_0x000107c61180();
              if (lVar5 == 0) {
                func_0x000107c61170(lVar1);
                lVar1 = lVar2;
              }
              else {
                lVar5 = unaff_x20;
                func_0x000107c3f0f8();
                func_0x000107c61180();
                if (lVar5 == 0) {
                  func_0x000107c61170(lVar1);
                  lVar1 = lVar2;
                }
                else {
                  func_0x000107c4bff0();
                  func_0x000107c61180();
                  if (unaff_x20 != 0) {
                    FUN_1010b12fc();
                    func_0x000107c613fc();
                    uVar6 = *(undefined8 *)(lVar3 + _DAT_11303ff30);
                    func_0x0001000285a8(0x112d5a5e8,&UNK_10d921370);
                    func_0x000107c6157c(uVar6);
                    func_0x000107c5cdc8();
                    func_0x000107c61180();
                    func_0x0001000bda74();
                    lVar1 = lVar4;
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1010be8a0; end: 1010be8c7; -[SCExternalMusicPlaybackEventProviderEntryPoint begin] */

void FUN_1010be8a0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1010be140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1010be8c8; end: 1010be90b; -[SCExternalMusicPlaybackEventProviderEntryPoint end] */

void FUN_1010be8c8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010be90c; end: 1010beda7;  */

void FUN_1010be90c(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == -0x2fffffffffffffee && param_3 == -0x7ffffffef10ef650) ||
     (func_0x000107c605b8(0xd000000000000012,0x800000010ef109b0,param_2,param_3,0), (uVar2 & 1) != 0
     )) {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53720();
  }
  else {
    uVar2 = 0x49556172656d6163;
    if (((param_2 == 0x49556172656d6163) && (param_3 == -0x12ffff9a8f909cad)) ||
       (func_0x000107c605b8(0x49556172656d6163,0xed000065706f6353,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c530ec();
    }
    else {
      uVar2 = 0x726553636973756d;
      if (((param_2 == 0x726553636973756d) && (param_3 == -0x12ffff8c9a9c968a)) ||
         (func_0x000107c605b8(0x726553636973756d,0xed00007365636976,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c56870();
      }
      else {
        uVar2 = 0xd000000000000011;
        if (((param_2 == -0x2fffffffffffffef) && (param_3 == -0x7ffffffef10dbb60)) ||
           (func_0x000107c605b8(0xd000000000000011,0x800000010ef244a0,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c56884();
        }
        else {
          if ((param_2 != -0x2fffffffffffffeb) || (param_3 != -0x7ffffffef10dbb40)) {
            uVar2 = 0xd000000000000015;
            func_0x000107c605b8(0xd000000000000015,0x800000010ef244c0,param_2,param_3,0);
            if ((uVar2 & 1) == 0) {
              if ((param_2 != -0x2fffffffffffffeb) || (param_3 != -0x7ffffffef10e0a10)) {
                uVar2 = 0xd000000000000015;
                func_0x000107c605b8(0xd000000000000015,0x800000010ef1f5f0,param_2,param_3,0);
                if ((uVar2 & 1) == 0) {
                  uVar2 = 0;
                  if (((param_2 == -0x2fffffffffffffe2) && (param_3 == -0x7ffffffef10dbb20)) ||
                     (func_0x000107c605b8(0xd00000000000001e,0x800000010ef244e0,param_2,param_3,0),
                     (uVar2 & 1) != 0)) {
                    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                    func_0x000107c605b0();
                    func_0x000107c55e08();
                  }
                  else {
                    uVar2 = 0;
                    if (((param_2 == -0x2fffffffffffffea) && (param_3 == -0x7ffffffef10ecf30)) ||
                       (func_0x000107c605b8(0xd000000000000016,0x800000010ef130d0,param_2,param_3,0)
                       , (uVar2 & 1) != 0)) {
                      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                      func_0x000107c605b0();
                      func_0x000107c53024();
                    }
                    else {
                      uVar2 = 0;
                      if (((param_2 != 0x6553726567676f6c) || (param_3 != -0x11ff8c9a9c96898e)) &&
                         (func_0x000107c605b8(0x6553726567676f6c,0xee00736563697672,param_2,param_3,
                                              0), (uVar2 & 1) == 0)) {
                        func_0x000107c602fc(0x15);
                        func_0x000107c6142c(0xe000000000000000);
                        func_0x000107c5fb78(param_2,param_3);
                        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,
                                            0x800000010ef0fc20,
                                            "ExternalMusicPlaybackEventProvider/SCExternalMusicPlaybackEventProviderEntryPoint.swift"
                                            ,0x57,2,0x4c,0);
                    /* WARNING: Does not return */
                        pcVar1 = (code *)SoftwareBreakpoint(1,0x1010beda8);
                        (*pcVar1)();
                      }
                      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                      func_0x000107c605b0();
                      func_0x000107c560e0();
                    }
                  }
                  goto LAB_1010be99c;
                }
              }
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c55df4();
              goto LAB_1010be99c;
            }
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c53010();
        }
      }
    }
  }
LAB_1010be99c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1010beda8; end: 1010bee53; -[SCExternalMusicPlaybackEventProviderEntryPoint setValue:forIvarName:] */

void FUN_1010beda8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_1010be90c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}


