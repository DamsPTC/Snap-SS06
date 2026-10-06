/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101101578; end: 101101583;  */

void FUN_101101578(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(uVar2);
  uVar4 = 1;
  if (lVar3 != 1) {
    uVar4 = 2;
  }
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = uVar4;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 101101584; end: 1011015fb;  */

void FUN_101101584(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(uVar2);
  uVar4 = 1;
  if (lVar3 != 1) {
    uVar4 = 2;
  }
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = uVar4;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 1011015fc; end: 10110163b;  */

void FUN_1011015fc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  
  uVar1 = 0x70616e73;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x725f6172656d6163;
  }
  uVar2 = 0xe400000000000000;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xeb000000006c6c6f;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Entry: 10110163c; end: 101101697;  */

void FUN_10110163c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x000101104438();
  func_0x000107c5fc40(param_1,param_2,param_3,param_4,uVar1);
  return;
}



/* Entry: 101101698; end: 1011016e3;  */

void FUN_101101698(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000101104438();
  func_0x000107c5fc2c(param_1,param_2,param_3,uVar1);
  return;
}



/* Entry: 1011016e4; end: 1011016e7;  */

void FUN_1011016e4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5e158 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d924910;
  func_0x000107c61520(&UNK_10d924910,&UNK_110384cb0);
  puRam0000000112d5e158 = puVar1;
  return;
}



/* Entry: 1011016e8; end: 101101727;  */

void FUN_1011016e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5e158 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d924910;
  func_0x000107c61520(&UNK_10d924910,&UNK_110384cb0);
  puRam0000000112d5e158 = puVar1;
  return;
}



/* Entry: 101101728; end: 10110172f;  */

undefined8 FUN_101101728(void)

{
  return 1;
}



/* Entry: 101101730; end: 101101783;  */

void FUN_101101730(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c5fb58(auStack_68,0x657469726f766166,0xe900000000000073);
  func_0x000107c606a8();
  return;
}



/* Entry: 101101784; end: 10110179f;  */

void FUN_101101784(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)
            (param_1,0x657469726f766166,0xe900000000000073);
  return;
}



/* Entry: 1011017a0; end: 1011017ef;  */

void FUN_1011017a0(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68);
  func_0x000107c5fb58(auStack_68,0x657469726f766166,0xe900000000000073);
  func_0x000107c606a8();
  return;
}



/* Entry: 1011017f0; end: 10110185b;  */

void FUN_1011017f0(undefined8 param_1,long param_2)

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



/* Entry: 10110185c; end: 10110187b;  */

void FUN_10110185c(undefined8 *param_1)

{
  *param_1 = 0x657469726f766166;
  param_1[1] = 0xe900000000000073;
  return;
}



/* Entry: 10110187c; end: 1011018d7;  */

void FUN_10110187c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x000101104cd0();
  func_0x000107c5fc40(param_1,param_2,param_3,param_4,uVar1);
  return;
}



/* Entry: 1011018d8; end: 101101923;  */

void FUN_1011018d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000101104cd0();
  func_0x000107c5fc2c(param_1,param_2,param_3,uVar1);
  return;
}



/* Entry: 101101924; end: 10110192b;  */

/* WARNING: Removing unreachable block (ram,0x00010110045c) */
/* WARNING: Type propagation algorithm not settling */

undefined1  [16] FUN_101101924(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  char *pcVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *unaff_x19;
  byte *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 uVar7;
  long unaff_x24;
  code *unaff_x25;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  pcVar4 = (char *)(ulong)*unaff_x20;
  pbVar5 = (byte *)0xe900000000000065;
  pbVar3 = (byte *)0x707954616964656d;
  pbVar6 = &UNK_10d9246f0;
  switch(*unaff_x20) {
  case 0:
    goto code_r0x00010110006c;
  default:
    pbVar5 = (byte *)0xe800000000000000;
  case 0x42:
  case 0x48:
  case 0x50:
    auVar8._8_8_ = pbVar5;
    auVar8._0_8_ = 0x657079546d657469;
    return auVar8;
  case 2:
    auVar11._8_8_ = 0xea00000000007469;
    auVar11._0_8_ = 0x6d694c6863746566;
    return auVar11;
  case 3:
    pbVar3 = (byte *)0xd000000000000011;
  case 0x5a:
  case 0x8a:
    pcVar4 = "promptLoggingServices";
code_r0x000101100098:
    auVar12._8_8_ = (ulong)(pcVar4 + 0xa60) | 0x8000000000000000;
    auVar12._0_8_ = pbVar3;
    return auVar12;
  case 4:
    pbVar5 = (byte *)0x6e45;
  case 0x40:
  case 0x70:
  case 0x88:
    pbVar5 = (byte *)((ulong)pbVar5 | 0x746144640000);
code_r0x000101100038:
    auVar9._8_8_ = (ulong)pbVar5 & 0xffffffffffff | 0xef65000000000000;
    auVar9._0_8_ = 0x6e6f697461657263;
    return auVar9;
  case 5:
    auVar14._8_8_ = 0x800000010ef26a80;
    auVar14._0_8_ = 0xd000000000000013;
    return auVar14;
  case 6:
    auVar15._8_8_ = 0x800000010ef26aa0;
    auVar15._0_8_ = 0xd00000000000001a;
    return auVar15;
  case 7:
    auVar13._8_8_ = 0xed0000737265646c;
    auVar13._0_8_ = 0x6f46686372616573;
    return auVar13;
  case 8:
    pbVar5 = (byte *)0x800000010ef26ac0;
    pcVar4 = (char *)0x11;
  case 0x21:
    pbVar3 = (byte *)(((ulong)pcVar4 | 0xd000000000000000) + 0xd);
code_r0x000101100128:
    auVar16._8_8_ = pbVar5;
    auVar16._0_8_ = pbVar3;
    return auVar16;
  case 9:
    pbVar5 = (byte *)0x746f;
  case 0x30:
  case 0x38:
  case 0x60:
  case 0x68:
  case 0x80:
    pbVar5 = (byte *)((ulong)pbVar5 & 0xffffffffffff | 0xeb00000000730000);
    pbVar3 = (byte *)0x68736e6565726373;
code_r0x00010110006c:
    auVar10._8_8_ = pbVar5;
    auVar10._0_8_ = pbVar3;
    return auVar10;
  case 0x10:
  case 0x90:
  case 0xa0:
  case 0xc0:
  case 0xe0:
    goto code_r0x000101100144;
  case 0x11:
  case 0x15:
  case 0x1f:
  case 0x25:
  case 0x28:
  case 0x2d:
  case 0xa1:
  case 0xa5:
  case 0xaf:
  case 0xc1:
  case 0xc5:
  case 0xcf:
  case 0xd2:
  case 0xd8:
  case 0xe1:
  case 0xe5:
  case 0xef:
  case 0xf2:
  case 0xf5:
    goto code_r0x0001011001a8;
  case 0x12:
  case 0x97:
  case 0xa2:
  case 0xc2:
  case 0xd6:
  case 0xe2:
    goto code_r0x0001011001cc;
  case 0x13:
  case 0xa3:
  case 0xc3:
  case 0xd3:
  case 0xd7:
  case 0xe3:
  case 0xf6:
    goto code_r0x0001011001e0;
  case 0x14:
  case 0xa4:
  case 0xc4:
  case 0xe4:
    goto code_r0x000101100148;
  case 0x16:
  case 0xa6:
  case 0xc6:
  case 0xe6:
    goto code_r0x0001011001a4;
  case 0x17:
  case 0x95:
  case 0xa7:
  case 199:
  case 0xe7:
    break;
  case 0x18:
  case 0x22:
  case 0x93:
  case 0xa8:
  case 200:
  case 0xe8:
    goto code_r0x000101100198;
  case 0x19:
  case 0xa9:
  case 0xc9:
  case 0xe9:
    goto code_r0x000101100160;
  case 0x1a:
  case 0x24:
  case 0xaa:
  case 0xca:
  case 0xea:
    goto code_r0x0001011001b4;
  case 0x1b:
  case 0xab:
  case 0xcb:
  case 0xeb:
  case 0xf4:
    goto LAB_1011001e8;
  case 0x1c:
  case 0x1d:
  case 0xac:
  case 0xad:
  case 0xcc:
  case 0xcd:
  case 0xec:
  case 0xed:
    goto code_r0x0001011001ac;
  case 0x1e:
  case 0xae:
  case 0xce:
  case 0xee:
    goto code_r0x0001011001c4;
  case 0x20:
  case 0xb0:
  case 0xb2:
  case 0xb3:
  case 0xb5:
  case 0xd0:
  case 0xf0:
    goto code_r0x0001011001dc;
  case 0x23:
  case 0x92:
    goto code_r0x0001011001a0;
  case 0x26:
  case 0x2b:
    goto code_r0x000101100138;
  case 0x27:
  case 0x2c:
  case 0x94:
  case 0xf7:
    goto code_r0x0001011001e4;
  case 0x29:
  case 0x2e:
    goto LAB_1011001c8;
  case 0x47:
  case 0x77:
    goto code_r0x000101100210;
  case 0x5c:
  case 0x74:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x75:
  case 0x76:
    *unaff_x22 = 0x707954616964656d;
    func_0x000107c61434();
    func_0x000107c6142c();
    uVar7 = unaff_x22[1];
    unaff_x22[1] = *(undefined8 *)(unaff_x24 + 8);
    func_0x000107c61434();
    func_0x000107c6142c(uVar7);
    unaff_x19[*(int *)(unaff_x21 + 0x24)] = unaff_x20[*(int *)(unaff_x21 + 0x24)];
    iVar1 = *(int *)(unaff_x21 + 0x28);
    uVar7 = *(undefined8 *)(unaff_x20 + iVar1);
    (unaff_x19 + iVar1)[8] = (unaff_x20 + iVar1)[8];
    *(undefined8 *)(unaff_x19 + iVar1) = uVar7;
    auVar18._8_8_ = pbVar5;
    auVar18._0_8_ = unaff_x19;
    return auVar18;
  case 0x72:
    goto code_r0x000101100098;
  case 0x78:
    goto code_r0x000101100038;
  case 0x91:
  case 0x96:
  case 0xb4:
  case 0xd5:
    goto code_r0x0001011001d0;
  case 0xb1:
    goto code_r0x000101100128;
  case 0xd1:
  case 0xf1:
    goto code_r0x00010110015c;
  case 0xd4:
    goto code_r0x0001011001d4;
  case 0xf3:
    goto code_r0x0001011001d8;
  }
code_r0x0001011001b8:
  func_0x000107c61434();
  func_0x000107c61434(unaff_x22);
code_r0x0001011001c4:
  goto LAB_1011001f0;
code_r0x000101100138:
code_r0x000101100144:
  unaff_x20 = pbVar5;
code_r0x000101100148:
  uVar2 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  pcVar4 = (char *)(ulong)uVar2;
  unaff_x19 = pbVar3;
  unaff_x21 = param_3;
  if ((uVar2 >> 0x11 & 1) != 0) {
LAB_1011001c8:
    pbVar3 = *(byte **)unaff_x20;
code_r0x0001011001cc:
    *(byte **)unaff_x19 = pbVar3;
code_r0x0001011001d0:
    pcVar4 = (char *)((ulong)pcVar4 & 0xff);
code_r0x0001011001d4:
    pbVar6 = (byte *)(pcVar4 + 0x10);
code_r0x0001011001d8:
    pcVar4 = (char *)((ulong)pbVar6 & ((ulong)pcVar4 ^ 0xffffffffffffffff));
code_r0x0001011001dc:
    unaff_x19 = pbVar3 + (long)pcVar4;
code_r0x0001011001e0:
    func_0x000107c6157c();
code_r0x0001011001e4:
    goto LAB_101100214;
  }
code_r0x00010110015c:
  pcVar4 = *(char **)unaff_x20;
  unaff_x22 = *(undefined8 **)(unaff_x20 + 8);
code_r0x000101100160:
  *(char **)unaff_x19 = pcVar4;
  *(undefined8 **)(unaff_x19 + 8) = unaff_x22;
  *(undefined2 *)(unaff_x19 + 0x10) = *(undefined2 *)(unaff_x20 + 0x10);
  iVar1 = *(int *)(param_3 + 0x1c);
  param_3 = 0;
  func_0x000107c5eea4();
  unaff_x25 = *(code **)(*(long *)(param_3 + -8) + 0x10);
  func_0x000107c61434(unaff_x22);
  pbVar3 = unaff_x19 + iVar1;
  pbVar5 = unaff_x20 + iVar1;
code_r0x000101100198:
  (*unaff_x25)(pbVar3,pbVar5,param_3);
  pbVar6 = (byte *)(long)*(int *)(unaff_x21 + 0x20);
code_r0x0001011001a0:
  pcVar4 = (char *)(unaff_x19 + (long)pbVar6);
code_r0x0001011001a4:
  pbVar6 = unaff_x20 + (long)pbVar6;
code_r0x0001011001a8:
  pbVar3 = *(byte **)pbVar6;
code_r0x0001011001ac:
  if (pbVar3 != (byte *)0x0) {
    unaff_x22 = *(undefined8 **)(pbVar6 + 8);
code_r0x0001011001b4:
    *(byte **)pcVar4 = pbVar3;
    *(undefined8 **)(pcVar4 + 8) = unaff_x22;
    goto code_r0x0001011001b8;
  }
LAB_1011001e8:
  uVar7 = *(undefined8 *)pbVar6;
  *(undefined8 *)(pcVar4 + 8) = *(undefined8 *)(pbVar6 + 8);
  *(undefined8 *)pcVar4 = uVar7;
LAB_1011001f0:
  iVar1 = *(int *)(unaff_x21 + 0x28);
  unaff_x19[*(int *)(unaff_x21 + 0x24)] = unaff_x20[*(int *)(unaff_x21 + 0x24)];
  pcVar4 = (char *)(unaff_x19 + iVar1);
  *(undefined8 *)pcVar4 = *(undefined8 *)(unaff_x20 + iVar1);
  pbVar6 = (byte *)(ulong)(unaff_x20 + iVar1)[8];
code_r0x000101100210:
  pcVar4[8] = (byte)pbVar6;
LAB_101100214:
  auVar17._8_8_ = pbVar5;
  auVar17._0_8_ = unaff_x19;
  return auVar17;
}



/* Entry: 10110192c; end: 10110194f;  */

void FUN_10110192c(undefined1 *param_1,undefined1 param_2)

{
  FUN_101103978();
  *param_1 = param_2;
  return;
}



/* Entry: 101101950; end: 101101967;  */

undefined1  [16] FUN_101101950(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 101101968; end: 1011019b7;  */

void FUN_101101968(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_10110358c();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 1011019b8; end: 101101cdf;  */

void FUN_1011019b8(long param_1)

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
  undefined1 auStack_70 [14];
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined1 uStack_58;
  undefined1 uStack_57;
  undefined1 uStack_56;
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar3 = 0x112d5e260;
  func_0x0001000285a8(0x112d5e260,&UNK_10d924b50);
  lVar7 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar6);
  FUN_10110358c();
  func_0x000107c606ec(auStack_70 + -extraout_x8,&UNK_110384f18,&UNK_110384f18,param_1,uVar6,uVar5);
  uStack_51 = 0;
  FUN_101103878();
  lVar4 = unaff_x20;
  func_0x000107c60554();
  if (unaff_x21 == 0) {
    uStack_52 = 1;
    func_0x0001011038b8();
    func_0x000107c60554(unaff_x20 + 1,&uStack_52,lVar3,&UNK_110384cb0,lVar4);
    uStack_53 = 2;
    func_0x000107c60550(*(undefined8 *)(unaff_x20 + 8),&uStack_53,lVar3);
    lVar4 = 0;
    func_0x000101101310();
    iVar2 = *(int *)(lVar4 + 0x1c);
    uStack_54 = 3;
    uVar5 = 0;
    func_0x000107c5eea4(0);
    uVar6 = 0x112d5e200;
    FUN_1011036cc(0x112d5e200,PTR___s10Foundation4DateVMa_110350bb8,
                  PTR___s10Foundation4DateVSEAAMc_110350bc8);
    func_0x000107c60530(unaff_x20 + iVar2,&uStack_54,lVar3,uVar5,uVar6);
    uStack_55 = 4;
    func_0x000107c60530(unaff_x20 + *(int *)(lVar4 + 0x20),&uStack_55,lVar3,uVar5,uVar6);
    uStack_56 = 5;
    func_0x000107c60524(*(undefined1 *)(unaff_x20 + *(int *)(lVar4 + 0x24)),&uStack_56,lVar3);
    uStack_57 = 6;
    func_0x000107c60524(*(undefined1 *)(unaff_x20 + *(int *)(lVar4 + 0x28)),&uStack_57,lVar3);
    iVar2 = *(int *)(lVar4 + 0x2c);
    uStack_58 = 7;
    uVar6 = 0x112d5e188;
    func_0x0001000285a8(0x112d5e188,&UNK_10d924b08);
    uVar5 = 0x112d5e268;
    FUN_101104388(0x112d5e268,FUN_1011043f8,PTR___sShyxGSEsSERzrlMc_11034de80);
    func_0x000107c60530(unaff_x20 + iVar2,&uStack_58,lVar3,uVar6,uVar5);
    puVar1 = (undefined8 *)(unaff_x20 + *(int *)(lVar4 + 0x30));
    uStack_61 = 8;
    func_0x000107c6052c(*puVar1,*(undefined1 *)(puVar1 + 1),&uStack_61,lVar3);
    uStack_62 = 9;
    func_0x000107c60524(*(undefined1 *)(unaff_x20 + *(int *)(lVar4 + 0x34)),&uStack_62,lVar3);
  }
  (**(code **)(lVar7 + 8))(auStack_70 + -extraout_x8,lVar3);
  return;
}



/* Entry: 101101ce0; end: 101102207;  */

/* WARNING: Removing unreachable block (ram,0x000101102184) */
/* WARNING: Removing unreachable block (ram,0x0001011020e8) */
/* WARNING: Removing unreachable block (ram,0x0001011020ec) */
/* WARNING: Removing unreachable block (ram,0x0001011020bc) */
/* WARNING: Removing unreachable block (ram,0x000101101f50) */
/* WARNING: Removing unreachable block (ram,0x000101101fd4) */
/* WARNING: Removing unreachable block (ram,0x00010110213c) */
/* WARNING: Removing unreachable block (ram,0x0001011020d0) */
/* WARNING: Removing unreachable block (ram,0x0001011020f0) */
/* WARNING: Removing unreachable block (ram,0x000101102100) */
/* WARNING: Removing unreachable block (ram,0x000101101e74) */
/* WARNING: Removing unreachable block (ram,0x000101101f54) */

void FUN_101101ce0(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar9;
  long unaff_x21;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_a0;
  long alStack_98 [4];
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_51;
  
  lVar2 = 0x112d373d8;
  alStack_98[1] = param_1;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar13 = (long)&uStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar13 - extraout_x12;
  lVar2 = 0x112d5e160;
  func_0x0001000285a8(0x112d5e160,&UNK_10d924b00);
  lVar9 = *(long *)(lVar2 + -8);
  alStack_98[3] = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = lVar10 - extraout_x8_00;
  lVar3 = 0;
  func_0x000101101310();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar11 = (undefined1 *)(lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  uVar8 = *(undefined8 *)(param_2 + 0x18);
  uVar7 = *(undefined8 *)(param_2 + 0x20);
  lVar2 = param_2;
  func_0x0001000a8868(param_2,uVar8);
  FUN_10110358c();
  puVar4 = &UNK_110384f18;
  alStack_98[2] = lVar12;
  func_0x000107c606e0(lVar12,&UNK_110384f18,&UNK_110384f18,lVar2,uVar8,uVar7);
  if (unaff_x21 == 0) {
    uStack_51 = 0;
    alStack_98[0] = lVar3;
    func_0x0001011035cc();
    lVar2 = alStack_98[3];
    puVar5 = &UNK_110385060;
    func_0x000107c60508(&uStack_68,&UNK_110385060,&uStack_51,alStack_98[3],&UNK_110385060,puVar4);
    *puVar11 = uStack_68;
    uStack_51 = 1;
    func_0x00010110360c();
    func_0x000107c60508(&uStack_68,&UNK_110384cb0,&uStack_51,lVar2,&UNK_110384cb0,puVar5);
    puVar11[1] = uStack_68;
    uStack_68 = 2;
    puVar6 = &uStack_68;
    func_0x000107c60504(puVar6,lVar2);
    *(undefined1 **)(puVar11 + 8) = puVar6;
    uVar7 = 0;
    func_0x000107c5eea4();
    uStack_68 = 3;
    uVar8 = 0x112d5e180;
    FUN_1011036cc(0x112d5e180,PTR___s10Foundation4DateVMa_110350bb8,
                  PTR___s10Foundation4DateVSeAAMc_110350be8);
    uStack_a0 = uVar7;
    func_0x000107c604e8(lVar10,uVar7,&uStack_68,lVar2,uVar7,uVar8);
    func_0x0001003a4c00(lVar10,puVar11 + *(int *)(alStack_98[0] + 0x1c));
    uStack_68 = 4;
    func_0x000107c604e8(lVar13,uStack_a0,&uStack_68,lVar2,uStack_a0,uVar8);
    lVar2 = alStack_98[0];
    func_0x0001003a4c00(lVar13,puVar11 + *(int *)(alStack_98[0] + 0x20));
    uStack_68 = 5;
    puVar6 = &uStack_68;
    func_0x000107c604d8(puVar6,alStack_98[3]);
    puVar11[*(int *)(lVar2 + 0x24)] = (char)puVar6;
    uStack_68 = 6;
    puVar6 = &uStack_68;
    func_0x000107c604d8(puVar6,alStack_98[3]);
    puVar11[*(int *)(lVar2 + 0x28)] = (char)puVar6;
    uVar8 = 0x112d5e188;
    func_0x0001000285a8(0x112d5e188,&UNK_10d924b08);
    uStack_51 = 7;
    uVar7 = 0x112d5e190;
    FUN_101104388(0x112d5e190,0x10110364c,PTR___sShyxGSesSeRzrlMc_11034de98);
    func_0x000107c604e8(&uStack_68,uVar8,&uStack_51,alStack_98[3],uVar8,uVar7);
    *(ulong *)(puVar11 + *(int *)(lVar2 + 0x2c)) = CONCAT71(uStack_67,uStack_68);
    uStack_68 = 8;
    puVar6 = &uStack_68;
    lVar3 = alStack_98[3];
    func_0x000107c604e4();
    iVar1 = *(int *)(lVar2 + 0x30);
    *(undefined1 **)(puVar11 + iVar1) = puVar6;
    *(char *)((long)(puVar11 + iVar1) + 8) = (char)lVar3;
    uStack_68 = 9;
    puVar6 = &uStack_68;
    func_0x000107c604d8(puVar6,alStack_98[3]);
    (**(code **)(lVar9 + 8))(alStack_98[2],alStack_98[3]);
    puVar11[*(int *)(alStack_98[0] + 0x34)] = (char)puVar6;
    FUN_1011037f8(puVar11,alStack_98[1],0x101101310);
    func_0x0001000834e4(param_2);
    func_0x00010110383c(puVar11,0x101101310);
  }
  else {
    func_0x0001000834e4(param_2);
  }
  return;
}



/* Entry: 101102208; end: 101102397;  */

void FUN_101102208(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long extraout_x8;
  long unaff_x21;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_70 [15];
  undefined1 uStack_61;
  undefined8 uStack_58;
  
  lVar1 = 0x112d5e238;
  func_0x0001000285a8(0x112d5e238,&UNK_10d924b40);
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_70 + -extraout_x8;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar2);
  FUN_101103e94();
  func_0x000107c606ec(puVar4,&UNK_110384d68,&UNK_110384d68,param_1,uVar2,uVar3);
  uStack_61 = 0;
  uVar2 = 0x112d5e228;
  uStack_58 = param_2;
  func_0x0001000285a8(0x112d5e228,&UNK_10d97f9c0);
  uVar3 = 0x112d5e240;
  FUN_101103ed4(0x112d5e240,PTR___sSSSEsWP_11034da88,PTR___sSdSEsWP_11034dd98,
                PTR___sSDyxq_GSEsSERzSER_rlMc_11034d780);
  func_0x000107c60554(&uStack_58,&uStack_61,lVar1,uVar2,uVar3);
  if (unaff_x21 == 0) {
    uStack_61 = 1;
    uStack_58 = param_3;
    func_0x000107c60554(&uStack_58,&uStack_61,lVar1,uVar2,uVar3);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
  else {
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
  return;
}



/* Entry: 101102398; end: 101102603;  */

void FUN_101102398(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar9;
  undefined1 auStack_60 [9];
  undefined1 uStack_57;
  undefined1 uStack_56;
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar2 = 0x112d5e1e8;
  func_0x0001000285a8(0x112d5e1e8,&UNK_10d924b28);
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar3);
  FUN_10110370c();
  func_0x000107c606ec(auStack_60 + -extraout_x8,&UNK_110384df8,&UNK_110384df8,param_1,uVar3,uVar6);
  uVar3 = *unaff_x20;
  uStack_51 = 0;
  func_0x000107c6053c(uVar3,unaff_x20[1],&uStack_51,lVar2);
  if (unaff_x21 == 0) {
    uStack_52 = 1;
    FUN_101103878();
    puVar4 = unaff_x20 + 2;
    func_0x000107c60554(puVar4,&uStack_52,lVar2,&UNK_110385060,uVar3);
    uStack_53 = 2;
    func_0x0001011038b8();
    func_0x000107c60554((long)unaff_x20 + 0x11,&uStack_53,lVar2,&UNK_110384cb0,puVar4);
    lVar5 = 0;
    func_0x000101100668();
    iVar1 = *(int *)(lVar5 + 0x1c);
    uStack_54 = 3;
    uVar6 = 0;
    func_0x000107c5eea4(0);
    uVar3 = 0x112d5e200;
    FUN_1011036cc(0x112d5e200,PTR___s10Foundation4DateVMa_110350bb8,
                  PTR___s10Foundation4DateVSEAAMc_110350bc8);
    lVar7 = (long)unaff_x20 + (long)iVar1;
    func_0x000107c60554(lVar7,&uStack_54,lVar2,uVar6,uVar3);
    iVar1 = *(int *)(lVar5 + 0x20);
    uStack_55 = 4;
    func_0x0001011038f8();
    func_0x000107c60530((long)unaff_x20 + (long)iVar1,&uStack_55,lVar2,&UNK_110384b60,lVar7);
    uVar8 = (ulong)*(byte *)((long)unaff_x20 + (long)*(int *)(lVar5 + 0x24));
    uStack_56 = 5;
    func_0x000107c60540(uVar8,&uStack_56,lVar2);
    iVar1 = *(int *)(lVar5 + 0x28);
    uStack_57 = 6;
    func_0x000101103938();
    func_0x000107c60530((long)unaff_x20 + (long)iVar1,&uStack_57,lVar2,&UNK_110384fc8,uVar8);
  }
  (**(code **)(lVar9 + 8))(auStack_60 + -extraout_x8,lVar2);
  return;
}



/* Entry: 101102604; end: 101102a33;  */

/* WARNING: Removing unreachable block (ram,0x0001011029a4) */
/* WARNING: Removing unreachable block (ram,0x0001011028e8) */
/* WARNING: Removing unreachable block (ram,0x00010110286c) */
/* WARNING: Removing unreachable block (ram,0x000101102934) */
/* WARNING: Removing unreachable block (ram,0x0001011029ac) */
/* WARNING: Removing unreachable block (ram,0x0001011029d8) */
/* WARNING: Removing unreachable block (ram,0x000101102758) */

void FUN_101102604(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x21;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long alStack_a0 [2];
  long lStack_90;
  undefined1 auStack_8f [7];
  long lStack_88;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_51;
  
  lVar4 = 0;
  alStack_a0[0] = param_1;
  func_0x000107c5eea4();
  alStack_a0[1] = *(long *)(lVar4 + -8);
  lStack_90 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(alStack_a0[1] + 0x40));
  lVar11 = (long)alStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0x112d5e1c8;
  func_0x0001000285a8(0x112d5e1c8,&UNK_10d924b20);
  lVar10 = *(long *)(lVar4 + -8);
  lStack_88 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = lVar11 - extraout_x8_00;
  lVar5 = 0;
  func_0x000101100668();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  puVar12 = (undefined8 *)(lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  uVar8 = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  func_0x0001000a8868(param_2,uVar8);
  FUN_10110370c();
  func_0x000107c606e0(lVar13,&UNK_110384df8,&UNK_110384df8,lVar4,uVar8,uVar1);
  lVar3 = lStack_88;
  lVar4 = lStack_90;
  if (unaff_x21 == 0) {
    uStack_70 = 0;
    puVar6 = &uStack_70;
    lVar9 = lStack_88;
    func_0x000107c604f4();
    *puVar12 = puVar6;
    puVar12[1] = lVar9;
    uStack_51 = 1;
    func_0x0001011035cc();
    puVar7 = &UNK_110385060;
    func_0x000107c60508(&uStack_70,&UNK_110385060,&uStack_51,lVar3,&UNK_110385060,puVar6);
    *(undefined1 *)(puVar12 + 2) = uStack_70;
    uStack_51 = 2;
    func_0x00010110360c();
    func_0x000107c60508(&uStack_70,&UNK_110384cb0,&uStack_51,lVar3,&UNK_110384cb0,puVar7);
    *(undefined1 *)((long)puVar12 + 0x11) = uStack_70;
    uStack_70 = 3;
    uVar8 = 0x112d5e180;
    FUN_1011036cc(0x112d5e180,PTR___s10Foundation4DateVMa_110350bb8,
                  PTR___s10Foundation4DateVSeAAMc_110350be8);
    func_0x000107c60508(lVar11,lVar4,&uStack_70,lVar3,lVar4,uVar8);
    lVar9 = (long)puVar12 + (long)*(int *)(lVar5 + 0x1c);
    (**(code **)(alStack_a0[1] + 0x20))(lVar9,lVar11,lVar4);
    uStack_51 = 4;
    FUN_101103778();
    func_0x000107c604e8(&uStack_70,&UNK_110384b60,&uStack_51,lVar3,&UNK_110384b60,lVar9);
    puVar2 = (undefined8 *)((long)puVar12 + (long)*(int *)(lVar5 + 0x20));
    puVar2[1] = CONCAT71(uStack_67,uStack_68);
    *puVar2 = CONCAT71(uStack_6f,uStack_70);
    uStack_70 = 5;
    puVar6 = &uStack_70;
    func_0x000107c604f8(puVar6,lVar3);
    *(byte *)((long)puVar12 + (long)*(int *)(lVar5 + 0x24)) = (byte)puVar6 & 1;
    uStack_51 = 6;
    func_0x0001011037b8();
    func_0x000107c604e8(&uStack_70,&UNK_110384fc8,&uStack_51,lVar3,&UNK_110384fc8,puVar6);
    (**(code **)(lVar10 + 8))(lVar13,lVar3);
    puVar2 = (undefined8 *)((long)puVar12 + (long)*(int *)(lVar5 + 0x28));
    *puVar2 = CONCAT71(uStack_6f,uStack_70);
    *(undefined1 *)(puVar2 + 1) = uStack_68;
    FUN_1011037f8(puVar12,alStack_a0[0],0x101100668);
    func_0x0001000834e4(param_2);
    func_0x00010110383c(puVar12,0x101100668);
  }
  else {
    func_0x0001000834e4(param_2);
  }
  return;
}



/* Entry: 101102a34; end: 101102b63;  */

void FUN_101102a34(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  
  lVar3 = 0x112d5e1a0;
  func_0x0001000285a8(0x112d5e1a0,&UNK_10d924b10);
  lVar4 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  func_0x00010110368c();
  func_0x000107c606ec(auStack_60 + -extraout_x8,&UNK_110384e88,&UNK_110384e88,param_1,uVar1,uVar2);
  uStack_58 = param_2;
  func_0x0001000285a8(0x112d5e1b0,&UNK_10d924b18);
  FUN_1011042fc(0x112d5e1b8,0x112d5e1c0,&UNK_10d924a20,PTR___sSayxGSEsSERzlMc_11034dce0);
  func_0x000107c60554(&uStack_58);
  (**(code **)(lVar4 + 8))(auStack_60 + -extraout_x8,lVar3);
  return;
}



/* Entry: 101102b64; end: 101102b8b;  */

void FUN_101102b64(void)

{
  FUN_101101ce0();
  return;
}



/* Entry: 101102b8c; end: 101102bb7;  */

undefined4 FUN_101102b8c(void)

{
  undefined4 uVar1;
  char *unaff_x20;
  
  uVar1 = 0x676e6f6c;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x74616c;
  }
  return uVar1;
}



/* Entry: 101102bb8; end: 101102c8f;  */

void FUN_101102bb8(undefined1 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined1 uVar2;
  
  if (param_2 != 0x74616c || param_3 != -0x1d00000000000000) {
    uVar1 = 0;
    func_0x000107c605b8(0x74616c,0xe300000000000000,param_2,param_3,0);
    if ((uVar1 & 1) == 0) {
      if ((param_2 == 0x676e6f6c) && (param_3 == -0x1c00000000000000)) {
        func_0x000107c6142c(0xe400000000000000);
        uVar2 = 1;
      }
      else {
        uVar1 = 0;
        func_0x000107c605b8(0x676e6f6c,0xe400000000000000,param_2,param_3,0);
        func_0x000107c6142c(param_3);
        uVar2 = 1;
        if ((uVar1 & 1) == 0) {
          uVar2 = 2;
        }
      }
      goto LAB_101102c18;
    }
  }
  func_0x000107c6142c(param_3);
  uVar2 = 0;
LAB_101102c18:
  *param_1 = uVar2;
  return;
}



/* Entry: 101102c90; end: 101102ca7;  */

undefined1  [16] FUN_101102c90(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 101102ca8; end: 101102cf7;  */

void FUN_101102ca8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_101103e94();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 101102cf8; end: 101102d1f;  */

void FUN_101102cf8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x21;
  
  FUN_101103cc8();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
  }
  return;
}



/* Entry: 101102d20; end: 101102d37;  */

void FUN_101102d20(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_101102208(param_1,*unaff_x20,unaff_x20[1]);
  return;
}



/* Entry: 101102d38; end: 101102d5b;  */

undefined8 FUN_101102d38(void)

{
  return 1;
}



/* Entry: 101102d5c; end: 101102de7;  */

void FUN_101102d5c(byte *param_1,long param_2,long param_3)

{
  byte bVar1;
  
  bVar1 = 0;
  if (param_2 == 0x636146664f6d756e && param_3 == -0x15ffffffffff8c9b) {
    func_0x000107c6142c(param_3);
    bVar1 = 0;
  }
  else {
    func_0x000107c605b8(0x636146664f6d756e,0xea00000000007365,param_2,param_3,0);
    func_0x000107c6142c(param_3);
    bVar1 = (bVar1 ^ 0xff) & 1;
  }
  *param_1 = bVar1;
  return;
}



/* Entry: 101102de8; end: 101102df3;  */

undefined1  [16] FUN_101102de8(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 101102df4; end: 101102e43;  */

void FUN_101102df4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000101104d10();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 101102e44; end: 101102f57;  */

void FUN_101102e44(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  
  lVar3 = 0x112d5e358;
  func_0x0001000285a8(0x112d5e358,&UNK_10d9251f0);
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  func_0x0001000a8868(param_2,uVar1);
  func_0x000101104d10();
  puVar5 = &UNK_1103850f0;
  func_0x000107c606e0(&stack0xffffffffffffffa0 + -extraout_x8,&UNK_1103850f0,&UNK_1103850f0,lVar4,
                      uVar1,uVar2);
  if (unaff_x21 == 0) {
    func_0x000107c60500();
    (**(code **)(lVar6 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,lVar3);
    func_0x0001000834e4(param_2);
    *param_1 = puVar5;
  }
  else {
    func_0x0001000834e4(param_2);
  }
  return;
}



/* Entry: 101102f58; end: 101103043;  */

void FUN_101102f58(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  long lVar5;
  
  lVar3 = 0x112d5e368;
  func_0x0001000285a8(0x112d5e368,&UNK_10d9251f8);
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar4 = *unaff_x20;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  func_0x000101104d10();
  func_0x000107c606ec(&stack0xffffffffffffffa0 + -extraout_x8,&UNK_1103850f0,&UNK_1103850f0,param_1,
                      uVar1,uVar2);
  func_0x000107c6054c(uVar4);
  (**(code **)(lVar5 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,lVar3);
  return;
}



/* Entry: 101103044; end: 1011030c7;  */

void FUN_101103044(void)

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



/* Entry: 1011030c8; end: 1011031b3;  */

undefined1  [16] FUN_1011030c8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte *unaff_x20;
  undefined1 auVar8 [16];
  
  bVar3 = *unaff_x20;
  uVar7 = 0x69726f7661467369;
  uVar2 = 0xea00000000006574;
  if (bVar3 != 5) {
    uVar7 = 0xd000000000000013;
    uVar2 = 0x800000010ef26ae0;
  }
  uVar6 = 0xec00000065746144;
  uVar4 = 0x6e6f697461657263;
  if (bVar3 != 3) {
    uVar6 = 0xe800000000000000;
    uVar4 = 0x6e6f697461636f6c;
  }
  if (bVar3 < 5) {
    uVar2 = uVar6;
    uVar7 = uVar4;
  }
  uVar6 = 0xe900000000000065;
  uVar4 = 0x707954616964656d;
  if (bVar3 != 1) {
    uVar6 = 0xe800000000000000;
    uVar4 = 0x657079546d657469;
  }
  uVar1 = 0xea00000000006449;
  uVar5 = 0x656372756f736572;
  if (bVar3 != 0) {
    uVar1 = uVar6;
    uVar5 = uVar4;
  }
  if (bVar3 < 3) {
    uVar2 = uVar1;
    uVar7 = uVar5;
  }
  auVar8._8_8_ = uVar2;
  auVar8._0_8_ = uVar7;
  return auVar8;
}



/* Entry: 1011031b4; end: 1011031d7;  */

void FUN_1011031b4(undefined1 *param_1,undefined1 param_2)

{
  func_0x000101103f40();
  *param_1 = param_2;
  return;
}



/* Entry: 1011031d8; end: 1011031ef;  */

undefined1  [16] FUN_1011031d8(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 1011031f0; end: 10110323f;  */

void FUN_1011031f0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_10110370c();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 101103240; end: 101103267;  */

void FUN_101103240(void)

{
  FUN_101102604();
  return;
}



/* Entry: 101103268; end: 10110326f;  */

undefined8 FUN_101103268(void)

{
  return 1;
}



/* Entry: 101103270; end: 1011032eb;  */

void FUN_101103270(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 1011032ec; end: 1011032ff;  */

undefined1  [16] FUN_1011032ec(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe500000000000000;
  auVar1._0_8_ = 0x736d657469;
  return auVar1;
}



/* Entry: 101103300; end: 10110337f;  */

void FUN_101103300(byte *param_1,long param_2,long param_3)

{
  byte bVar1;
  
  bVar1 = 0x69;
  if (param_2 == 0x736d657469 && param_3 == -0x1b00000000000000) {
    func_0x000107c6142c(param_3);
    bVar1 = 0;
  }
  else {
    func_0x000107c605b8(0x736d657469,0xe500000000000000,param_2,param_3,0);
    func_0x000107c6142c(param_3);
    bVar1 = (bVar1 ^ 0xff) & 1;
  }
  *param_1 = bVar1;
  return;
}



/* Entry: 101103380; end: 10110338b;  */

undefined1  [16] FUN_101103380(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 10110338c; end: 1011033db;  */

void FUN_10110338c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010110368c();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 1011033dc; end: 101103403;  */

void FUN_1011033dc(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_1011041a4();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Entry: 101103404; end: 101103407;  */

void FUN_101103404(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5df78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d924a70;
  func_0x000107c61520(&UNK_10d924a70,&UNK_110384bf8);
  puRam0000000112d5df78 = puVar1;
  return;
}



/* Entry: 101103408; end: 10110341f;  */

void FUN_101103408(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_101102a34(param_1,*unaff_x20);
  return;
}



/* Entry: 101103420; end: 101103563;  */

undefined1  [16] FUN_101103420(long param_1,char param_2)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  if (param_2 == '\x01') {
    pcVar1 = "Invalid date range specified";
    uVar3 = 0xd00000000000002a;
    if (param_1 != 2) {
      pcVar1 = "ShufflerApiPlugin";
      uVar3 = 0xd00000000000001c;
    }
    uVar6 = 0xd000000000000015;
    pcVar2 = "results in Content Manager";
    if (param_1 != 0) {
      uVar6 = 0xd00000000000002a;
      pcVar2 = "tent Manager, took longer than ";
    }
    if (param_1 < 2) {
      pcVar1 = pcVar2;
      uVar3 = uVar6;
    }
    uVar5 = (ulong)pcVar1 | 0x8000000000000000;
  }
  else {
    func_0x000107c602fc(0x49);
    func_0x000107c5fb78(0xd00000000000003f,0x800000010ef269c0);
    puVar4 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar4);
    func_0x000107c5fb78(0x73646e6f63657320,0xe800000000000000);
    uVar3 = 0;
    uVar5 = 0xe000000000000000;
  }
  auVar7._8_8_ = uVar5;
  auVar7._0_8_ = uVar3;
  return auVar7;
}



/* Entry: 101103564; end: 10110358b;  */

undefined1  [16] FUN_101103564(void)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *unaff_x20;
  undefined1 auVar8 [16];
  
  lVar4 = *unaff_x20;
  if ((char)unaff_x20[1] == '\x01') {
    pcVar1 = "Invalid date range specified";
    uVar3 = 0xd00000000000002a;
    if (lVar4 != 2) {
      pcVar1 = "ShufflerApiPlugin";
      uVar3 = 0xd00000000000001c;
    }
    uVar7 = 0xd000000000000015;
    pcVar2 = "results in Content Manager";
    if (lVar4 != 0) {
      uVar7 = 0xd00000000000002a;
      pcVar2 = "tent Manager, took longer than ";
    }
    if (lVar4 < 2) {
      pcVar1 = pcVar2;
      uVar3 = uVar7;
    }
    uVar6 = (ulong)pcVar1 | 0x8000000000000000;
  }
  else {
    func_0x000107c602fc(0x49);
    func_0x000107c5fb78(0xd00000000000003f,0x800000010ef269c0);
    puVar5 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar5);
    func_0x000107c5fb78(0x73646e6f63657320,0xe800000000000000);
    uVar3 = 0;
    uVar6 = 0xe000000000000000;
  }
  auVar8._8_8_ = uVar6;
  auVar8._0_8_ = uVar3;
  return auVar8;
}



/* Entry: 10110358c; end: 1011036cb;  */

void FUN_10110358c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5e168 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9251a0;
  func_0x000107c61520(&UNK_10d9251a0,&UNK_110384f18);
  puRam0000000112d5e168 = puVar1;
  return;
}



/* Entry: 1011036cc; end: 10110370b;  */

void FUN_1011036cc(long *param_1,code *param_2,long param_3)

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



/* Entry: 10110370c; end: 10110374b;  */

void FUN_10110370c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5e1d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9250b0;
  func_0x000107c61520(&UNK_10d9250b0,&UNK_110384df8);
  puRam0000000112d5e1d0 = puVar1;
  return;
}



/* Entry: 10110374c; end: 101103777;  */

/* WARNING: Possible PIC construction at 0x000101103760: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101103764) */

void FUN_10110374c(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
    return;
  }
  return;
}



/* Entry: 101103778; end: 1011037f7;  */

void FUN_101103778(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5e1d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9249f8;
  func_0x000107c61520(&UNK_10d9249f8,&UNK_110384b60);
  puRam0000000112d5e1d8 = puVar1;
  return;
}



/* Entry: 1011037f8; end: 101103877;  */

undefined8 FUN_1011037f8(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_3)();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 101103878; end: 101103977;  */

void FUN_101103878(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5e1f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d925060;
  func_0x000107c61520(&UNK_10d925060,&UNK_110385060);
  puRam0000000112d5e1f0 = puVar1;
  return;
}



/* Entry: 101103978; end: 101103cc7;  */

undefined4 FUN_101103978(long param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  
  uVar2 = 0x707954616964656d;
  if ((param_1 == 0x707954616964656d && param_2 == -0x16ffffffffffff9b) ||
     (func_0x000107c605b8(0x707954616964656d,0xe900000000000065,param_1,param_2,0), (uVar2 & 1) != 0
     )) {
    func_0x000107c6142c(param_2);
    uVar1 = 0;
  }
  else {
    uVar2 = 0x657079546d657469;
    if (((param_1 == 0x657079546d657469) && (param_2 == -0x1800000000000000)) ||
       (func_0x000107c605b8(0x657079546d657469,0xe800000000000000,param_1,param_2,0),
       (uVar2 & 1) != 0)) {
      func_0x000107c6142c(param_2);
      uVar1 = 1;
    }
    else {
      uVar2 = 0;
      if (((param_1 == 0x6d694c6863746566) && (param_2 == -0x15ffffffffff8b97)) ||
         (func_0x000107c605b8(0x6d694c6863746566,0xea00000000007469,param_1,param_2,0),
         (uVar2 & 1) != 0)) {
        func_0x000107c6142c(param_2);
        uVar1 = 2;
      }
      else {
        if ((param_1 != -0x2fffffffffffffef) || (param_2 != -0x7ffffffef10d95a0)) {
          uVar2 = 0xd000000000000011;
          func_0x000107c605b8(0xd000000000000011,0x800000010ef26a60,param_1,param_2,0);
          if ((uVar2 & 1) == 0) {
            uVar2 = 0x6e6f697461657263;
            if (((param_1 == 0x6e6f697461657263) && (param_2 == -0x109a8b9ebb9b91bb)) ||
               (func_0x000107c605b8(0x6e6f697461657263,0xef65746144646e45,param_1,param_2,0),
               (uVar2 & 1) != 0)) {
              func_0x000107c6142c(param_2);
              return 4;
            }
            uVar2 = 0xd000000000000013;
            if (((param_1 == -0x2fffffffffffffed) && (param_2 == -0x7ffffffef10d9580)) ||
               (func_0x000107c605b8(0xd000000000000013,0x800000010ef26a80,param_1,param_2,0),
               (uVar2 & 1) != 0)) {
              func_0x000107c6142c(param_2);
              return 5;
            }
            uVar2 = 0;
            if (((param_1 == -0x2fffffffffffffe6) && (param_2 == -0x7ffffffef10d9560)) ||
               (func_0x000107c605b8(0xd00000000000001a,0x800000010ef26aa0,param_1,param_2,0),
               (uVar2 & 1) != 0)) {
              func_0x000107c6142c(param_2);
              return 6;
            }
            uVar2 = 0x6f46686372616573;
            if (((param_1 == 0x6f46686372616573) && (param_2 == -0x12ffff8c8d9a9b94)) ||
               (func_0x000107c605b8(0x6f46686372616573,0xed0000737265646c,param_1,param_2,0),
               (uVar2 & 1) != 0)) {
              func_0x000107c6142c(param_2);
              return 7;
            }
            uVar2 = 0;
            if (((param_1 != -0x2fffffffffffffe2) || (param_2 != -0x7ffffffef10d9540)) &&
               (func_0x000107c605b8(0xd00000000000001e,0x800000010ef26ac0,param_1,param_2,0),
               (uVar2 & 1) == 0)) {
              uVar2 = 0x68736e6565726373;
              if ((param_1 == 0x68736e6565726373) && (param_2 == -0x14ffffffff8c8b91)) {
                func_0x000107c6142c(0xeb0000000073746f);
                return 9;
              }
              func_0x000107c605b8(0x68736e6565726373,0xeb0000000073746f,param_1,param_2,0);
              func_0x000107c6142c(param_2);
              if ((uVar2 & 1) != 0) {
                return 9;
              }
              return 10;
            }
            func_0x000107c6142c(param_2);
            return 8;
          }
        }
        func_0x000107c6142c(param_2);
        uVar1 = 3;
      }
    }
  }
  return uVar1;
}



/* Entry: 101103cc8; end: 101103e93;  */

/* WARNING: Removing unreachable block (ram,0x000101103e70) */
/* WARNING: Removing unreachable block (ram,0x000101103de4) */

undefined1  [16] FUN_101103cc8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_70 [15];
  undefined1 uStack_61;
  long lStack_58;
  
  lVar1 = 0x112d5e218;
  func_0x0001000285a8(0x112d5e218,&UNK_10d924b30);
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = *(long *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  lVar2 = param_1;
  func_0x0001000a8868(param_1,lVar6);
  lVar3 = lVar2;
  FUN_101103e94();
  func_0x000107c606e0(auStack_70 + -extraout_x8,&UNK_110384d68,&UNK_110384d68,lVar3,lVar6,uVar4);
  if (unaff_x21 == 0) {
    uVar4 = 0x112d5e228;
    func_0x0001000285a8(0x112d5e228,&UNK_10d97f9c0);
    uStack_61 = 0;
    uVar5 = 0x112d5e230;
    FUN_101103ed4(0x112d5e230,PTR___sSSSesWP_11034daa8,PTR___sSdSesWP_11034ddb0,
                  PTR___sSDyxq_GSesSeRzSeR_rlMc_11034d7a0);
    func_0x000107c60508(&lStack_58,uVar4,&uStack_61,lVar1,uVar4,uVar5);
    lVar6 = lStack_58;
    uStack_61 = 1;
    func_0x000107c60508(&lStack_58,uVar4,&uStack_61,lVar1,uVar4,uVar5);
    (**(code **)(lVar7 + 8))(auStack_70 + -extraout_x8,lVar1);
    func_0x0001000834e4(param_1);
  }
  else {
    func_0x0001000834e4(param_1);
    lStack_58 = lVar2;
  }
  auVar8._8_8_ = lStack_58;
  auVar8._0_8_ = lVar6;
  return auVar8;
}



/* Entry: 101103e94; end: 101103ed3;  */

void FUN_101103e94(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5e220 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d924fe8;
  func_0x000107c61520(&UNK_10d924fe8,&UNK_110384d68);
  puRam0000000112d5e220 = puVar1;
  return;
}



/* Entry: 101103ed4; end: 1011041a3;  */

void FUN_101103ed4(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*param_1 == 0) {
    uVar1 = 0x112d5e228;
    func_0x00010002969c(0x112d5e228,&UNK_10d97f9c0);
    uStack_40 = param_2;
    uStack_38 = param_3;
    func_0x000107c61520(param_4,uVar1,&uStack_40);
    *param_1 = param_4;
  }
  return;
}



/* Entry: 1011041a4; end: 1011042fb;  */

long FUN_1011041a4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  undefined1 auStack_60 [8];
  long lStack_58;
  
  lVar2 = 0x112d5e248;
  func_0x0001000285a8(0x112d5e248,&UNK_10d924b48);
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar3 = param_1;
  func_0x0001000a8868(param_1,uVar5);
  lVar4 = lVar3;
  func_0x00010110368c();
  func_0x000107c606e0(auStack_60 + -extraout_x8,&UNK_110384e88,&UNK_110384e88,lVar4,uVar5,uVar1);
  if (unaff_x21 == 0) {
    uVar5 = 0x112d5e1b0;
    func_0x0001000285a8(0x112d5e1b0,&UNK_10d924b18);
    FUN_1011042fc(0x112d5e250,0x112d5e258,&UNK_10d924a48,PTR___sSayxGSesSeRzlMc_11034dd10);
    func_0x000107c60508(&lStack_58,uVar5);
    (**(code **)(lVar6 + 8))(auStack_60 + -extraout_x8,lVar2);
    func_0x0001000834e4(param_1);
  }
  else {
    func_0x0001000834e4(param_1);
    lStack_58 = lVar3;
  }
  return lStack_58;
}



/* Entry: 1011042fc; end: 101104387;  */

void FUN_1011042fc(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uStack_48;
  
  if (*param_1 == 0) {
    uVar1 = 0x112d5e1b0;
    func_0x00010002969c(0x112d5e1b0,&UNK_10d924b18);
    FUN_1011036cc(param_2,0x101100668,param_3);
    uStack_48 = param_2;
    func_0x000107c61520(param_4,uVar1,&uStack_48);
    *param_1 = param_4;
  }
  return;
}



/* Entry: 101104388; end: 1011043f7;  */

void FUN_101104388(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  if (*param_1 == 0) {
    uVar1 = 0x112d5e188;
    func_0x00010002969c(0x112d5e188,&UNK_10d924b08);
    uVar2 = uVar1;
    (*param_2)();
    uStack_38 = uVar2;
    func_0x000107c61520(param_3,uVar1,&uStack_38);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 1011043f8; end: 101104477;  */

void FUN_1011043f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5e270 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d924fc0;
  func_0x000107c61520(&UNK_10d924fc0,&UNK_110384fa8);
  puRam0000000112d5e270 = puVar1;
  return;
}



/* Entry: 101104478; end: 1011048db;  */

void FUN_101104478(void)

{
  return;
}



/* Entry: 1011048dc; end: 10110491b;  */

void FUN_1011048dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5e2d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d924c18;
  func_0x000107c61520(&UNK_10d924c18,&UNK_110385060);
  puRam0000000112d5e2d8 = puVar1;
  return;
}



/* Entry: 10110491c; end: 10110491f;  */

void FUN_10110491c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5e2e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d924cb8;
  func_0x000107c61520(&UNK_10d924cb8,&UNK_110384fa8);
  puRam0000000112d5e2e0 = puVar1;
  return;
}



/* Entry: 101104920; end: 10110495f;  */

void FUN_101104920(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5e2e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d924cb8;
  func_0x000107c61520(&UNK_10d924cb8,&UNK_110384fa8);
  puRam0000000112d5e2e0 = puVar1;
  return;
}



/* Entry: 101104960; end: 101104963;  */

void FUN_101104960(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5e2e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d924d70;
  func_0x000107c61520(&UNK_10d924d70,&UNK_110384f18);
  puRam0000000112d5e2e8 = puVar1;
  return;
}



/* Entry: 101104964; end: 1011049a3;  */

void FUN_101104964(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5e2e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d924d70;
  func_0x000107c61520(&UNK_10d924d70,&UNK_110384f18);
  puRam0000000112d5e2e8 = puVar1;
  return;
}



/* Entry: 1011049a4; end: 1011049a7;  */

void FUN_1011049a4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5e2f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d924e28;
  func_0x000107c61520(&UNK_10d924e28,&UNK_110384e88);
  puRam0000000112d5e2f0 = puVar1;
  return;
}



/* Entry: 1011049a8; end: 1011049e7;  */

void FUN_1011049a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5e2f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d924e28;
  func_0x000107c61520(&UNK_10d924e28,&UNK_110384e88);
  puRam0000000112d5e2f0 = puVar1;
  return;
}



/* Entry: 1011049e8; end: 1011049eb;  */

void FUN_1011049e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5e2f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d924ee0;
  func_0x000107c61520(&UNK_10d924ee0,&UNK_110384df8);
  puRam0000000112d5e2f8 = puVar1;
  return;
}



/* Entry: 1011049ec; end: 101104a2b;  */

void FUN_1011049ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5e2f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d924ee0;
  func_0x000107c61520(&UNK_10d924ee0,&UNK_110384df8);
  puRam0000000112d5e2f8 = puVar1;
  return;
}



/* Entry: 101104a2c; end: 101104a2f;  */

void FUN_101104a2c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5e300 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d924f98;
  func_0x000107c61520(&UNK_10d924f98,&UNK_110384d68);
  puRam0000000112d5e300 = puVar1;
  return;
}



/* Entry: 101104a30; end: 101104a6f;  */

void FUN_101104a30(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5e300 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d924f98;
  func_0x000107c61520(&UNK_10d924f98,&UNK_110384d68);
  puRam0000000112d5e300 = puVar1;
  return;
}



/* Entry: 101104a70; end: 101104a73;  */

void FUN_101104a70(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5e308 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d924f30;
  func_0x000107c61520(&UNK_10d924f30,&UNK_110384d68);
  puRam0000000112d5e308 = puVar1;
  return;
}



/* Entry: 101104a74; end: 101104ab3;  */

void FUN_101104a74(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5e308 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d924f30;
  func_0x000107c61520(&UNK_10d924f30,&UNK_110384d68);
  puRam0000000112d5e308 = puVar1;
  return;
}



/* Entry: 101104ab4; end: 101104ab7;  */

void FUN_101104ab4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5e310 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d924f08;
  func_0x000107c61520(&UNK_10d924f08,&UNK_110384d68);
  puRam0000000112d5e310 = puVar1;
  return;
}



/* Entry: 101104ab8; end: 101104af7;  */

void FUN_101104ab8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5e310 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d924f08;
  func_0x000107c61520(&UNK_10d924f08,&UNK_110384d68);
  puRam0000000112d5e310 = puVar1;
  return;
}



/* Entry: 101104af8; end: 101104afb;  */

void FUN_101104af8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5e318 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d924e78;
  func_0x000107c61520(&UNK_10d924e78,&UNK_110384df8);
  puRam0000000112d5e318 = puVar1;
  return;
}



/* Entry: 101104afc; end: 101104b3b;  */

void FUN_101104afc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5e318 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d924e78;
  func_0x000107c61520(&UNK_10d924e78,&UNK_110384df8);
  puRam0000000112d5e318 = puVar1;
  return;
}



/* Entry: 101104b3c; end: 101104b3f;  */

void FUN_101104b3c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5e320 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d924e50;
  func_0x000107c61520(&UNK_10d924e50,&UNK_110384df8);
  puRam0000000112d5e320 = puVar1;
  return;
}



/* Entry: 101104b40; end: 101104b7f;  */

void FUN_101104b40(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5e320 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d924e50;
  func_0x000107c61520(&UNK_10d924e50,&UNK_110384df8);
  puRam0000000112d5e320 = puVar1;
  return;
}



/* Entry: 101104b80; end: 101104b83;  */

void FUN_101104b80(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5e328 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d924dc0;
  func_0x000107c61520(&UNK_10d924dc0,&UNK_110384e88);
  puRam0000000112d5e328 = puVar1;
  return;
}



/* Entry: 101104b84; end: 101104bc3;  */

void FUN_101104b84(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5e328 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d924dc0;
  func_0x000107c61520(&UNK_10d924dc0,&UNK_110384e88);
  puRam0000000112d5e328 = puVar1;
  return;
}



/* Entry: 101104bc4; end: 101104bc7;  */

void FUN_101104bc4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5e330 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d924d98;
  func_0x000107c61520(&UNK_10d924d98,&UNK_110384e88);
  puRam0000000112d5e330 = puVar1;
  return;
}



/* Entry: 101104bc8; end: 101104c07;  */

void FUN_101104bc8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5e330 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d924d98;
  func_0x000107c61520(&UNK_10d924d98,&UNK_110384e88);
  puRam0000000112d5e330 = puVar1;
  return;
}



/* Entry: 101104c08; end: 101104c0b;  */

void FUN_101104c08(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5e338 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d924d08;
  func_0x000107c61520(&UNK_10d924d08,&UNK_110384f18);
  puRam0000000112d5e338 = puVar1;
  return;
}



/* Entry: 101104c0c; end: 101104c4b;  */

void FUN_101104c0c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5e338 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d924d08;
  func_0x000107c61520(&UNK_10d924d08,&UNK_110384f18);
  puRam0000000112d5e338 = puVar1;
  return;
}



/* Entry: 101104c4c; end: 101104c4f;  */

void FUN_101104c4c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5e340 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d924ce0;
  func_0x000107c61520(&UNK_10d924ce0,&UNK_110384f18);
  puRam0000000112d5e340 = puVar1;
  return;
}



/* Entry: 101104c50; end: 101104d4f;  */

void FUN_101104c50(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5e340 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d924ce0;
  func_0x000107c61520(&UNK_10d924ce0,&UNK_110384f18);
  puRam0000000112d5e340 = puVar1;
  return;
}



/* Entry: 101104d50; end: 101104e3f;  */

uint FUN_101104d50(uint *param_1,int param_2)

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



/* Entry: 101104e40; end: 101104e7f;  */

void FUN_101104e40(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5e408 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d925290;
  func_0x000107c61520(&UNK_10d925290,&UNK_1103850f0);
  puRam0000000112d5e408 = puVar1;
  return;
}


