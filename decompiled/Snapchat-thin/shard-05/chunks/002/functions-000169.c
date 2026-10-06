/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103c114e8; end: 103c11527;  */

void FUN_103c114e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff7cc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc65f20;
  func_0x000107c61520(&UNK_10dc65f20,&UNK_1106e9660);
  puRam0000000112ff7cc0 = puVar1;
  return;
}



/* Entry: 103c11528; end: 103c1154b;  */

void FUN_103c11528(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103c1154c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103c1154c; end: 103c1158b;  */

void FUN_103c1154c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff7cc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc65ef8;
  func_0x000107c61520(&UNK_10dc65ef8,&UNK_1106e9660);
  puRam0000000112ff7cc8 = puVar1;
  return;
}



/* Entry: 103c1158c; end: 103c115b7;  */

void FUN_103c1158c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103c114e8();
  *(long *)(param_1 + 8) = lVar1;
  FUN_103c08dd0();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103c115b8; end: 103c115bb;  */

void FUN_103c115b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff7cd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc65f60;
  func_0x000107c61520(&UNK_10dc65f60,&UNK_1106e9660);
  puRam0000000112ff7cd0 = puVar1;
  return;
}



/* Entry: 103c115bc; end: 103c115fb;  */

void FUN_103c115bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff7cd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc65f60;
  func_0x000107c61520(&UNK_10dc65f60,&UNK_1106e9660);
  puRam0000000112ff7cd0 = puVar1;
  return;
}



/* Entry: 103c115fc; end: 103c11627;  */

long FUN_103c115fc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103c11628; end: 103c11633;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103c11628(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x20) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x20) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 103c11634; end: 103c1171b;  */

undefined4 * FUN_103c11634(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[3] = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar1 = *(undefined8 *)(param_2 + 6);
  uVar2 = *(undefined8 *)(param_2 + 8);
  func_0x00010006c00c(uVar1,uVar2);
  *(undefined8 *)(param_1 + 6) = uVar1;
  *(undefined8 *)(param_1 + 8) = uVar2;
  return param_1;
}



/* Entry: 103c1171c; end: 103c11793;  */

undefined4 * FUN_103c1171c(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)((long)param_1 + 5) = *(undefined1 *)((long)param_2 + 5);
  *(undefined1 *)((long)param_1 + 6) = *(undefined1 *)((long)param_2 + 6);
  *(undefined1 *)((long)param_1 + 7) = *(undefined1 *)((long)param_2 + 7);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[3] = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar1 = *(undefined8 *)(param_1 + 6);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 6) = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 103c11794; end: 103c11843;  */

int FUN_103c11794(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && ((char)param_1[10] != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = 0xffffffff;
  if (1 < *(byte *)(param_1 + 1)) {
    uVar1 = *(byte *)(param_1 + 1) + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103c11844; end: 103c11883;  */

void FUN_103c11844(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff7ce0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc65ecc;
  func_0x000107c61520(&DAT_10dc65ecc,&UNK_1106e9660);
  puRam0000000112ff7ce0 = puVar1;
  return;
}



/* Entry: 103c11884; end: 103c11b23;  */

/* WARNING: Possible PIC construction at 0x000103c11b68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c11c04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c11b6c) */

undefined1  [16] FUN_103c11884(ulong param_1,undefined8 param_2,byte *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  ulong uVar3;
  byte *pbVar4;
  char *pcVar5;
  byte *unaff_x19;
  byte *pbVar6;
  byte *unaff_x20;
  byte *unaff_x21;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined1 auVar7 [16];
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
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  byte *in_stack_00000048;
  byte *in_stack_00000058;
  undefined1 auStack_70 [80];
  
  pbVar4 = (byte *)0xef72656469766f72;
  pbVar1 = (byte *)0x506c65646f4d6f6e;
  pcVar5 = (char *)(param_1 & 0xff);
  pbVar2 = pbVar1;
  pbVar6 = pbVar4;
  switch(pcVar5) {
  default:
    pcVar5 = "cationFailed";
  case (char *)0x28:
  case (char *)0x36:
  case (char *)0x76:
  case (char *)0xae:
  case (char *)0xee:
    pcVar5 = (char *)((long)pcVar5 + 0x380);
  case (char *)0x1b:
  case (char *)0x2f:
  case (char *)0x43:
  case (char *)0x57:
  case (char *)0x5f:
  case (char *)0x67:
  case (char *)0x6f:
  case (char *)0x83:
  case (char *)0x97:
  case (char *)0x9f:
  case (char *)0xa7:
  case (char *)0xbb:
  case (char *)0xcf:
  case (char *)0xd7:
  case (char *)0xdf:
  case (char *)0xe7:
  case (char *)0xfb:
    pcVar5 = (char *)((long)pcVar5 + -0x20);
  case (char *)0x26:
  case (char *)0x4e:
  case (char *)0x8e:
  case (char *)0x90:
  case (char *)0xc6:
    pbVar4 = (byte *)((ulong)pcVar5 | 0x8000000000000000);
  case (char *)0x50:
  case (char *)0x60:
  case (char *)0x84:
  case (char *)0xc8:
    pcVar5 = (char *)0x18;
  case (char *)0x3f:
  case (char *)0x7f:
  case (char *)0xb7:
  case (char *)0xf7:
    auVar7._0_8_ = ((ulong)pcVar5 | 0xd000000000000000) - 7;
    auVar7._8_8_ = pbVar4;
    return auVar7;
  case (char *)0x2:
  case (char *)0xbd:
  case (char *)0xfd:
    pbVar1 = (byte *)0x18;
  case (char *)0x1d:
  case (char *)0x45:
  case (char *)0x85:
  case (char *)0xf9:
    pbVar1 = (byte *)((ulong)pbVar1 & 0xffffffffffff | 0xd000000000000000);
  case (char *)0x19:
  case (char *)0x2d:
  case (char *)0x41:
  case (char *)0x55:
  case (char *)0x5d:
  case (char *)0x65:
  case (char *)0x6d:
  case (char *)0x81:
  case (char *)0x95:
  case (char *)0x9d:
  case (char *)0xa5:
  case (char *)0xb9:
  case (char *)0xcd:
  case (char *)0xd5:
  case (char *)0xdd:
  case (char *)0xe5:
    pcVar5 = "modelProviderDeallocated";
  case (char *)0xf4:
code_r0x000103c11a1c:
    pbVar4 = (byte *)((ulong)((long)pcVar5 + -0x20) | 0x8000000000000000);
code_r0x000103c11a24:
    auVar16._8_8_ = pbVar4;
    auVar16._0_8_ = pbVar1;
    return auVar16;
  case (char *)0x3:
    pcVar5 = "modelAutoUnloadAfterAppBackgrounds";
  case (char *)0x44:
    auVar14._8_8_ = (ulong)((long)pcVar5 + -0x20) | 0x8000000000000000;
    auVar14._0_8_ = 0xd000000000000022;
    return auVar14;
  case (char *)0x4:
  case (char *)0x30:
    pcVar5 = "notImageClassifier";
  case (char *)0x59:
    auVar11._8_8_ = (ulong)pcVar5 | 0x8000000000000000;
    auVar11._0_8_ = 0xd000000000000019;
    return auVar11;
  case (char *)0x5:
    pbVar4 = (byte *)0x646e756f46;
  case (char *)0x68:
  case (char *)0xd0:
    auVar17._8_8_ = (ulong)pbVar4 & 0xffffffffffff | 0xed00000000000000;
    auVar17._0_8_ = 0x746f4e6c65646f6d;
    return auVar17;
  case (char *)0x6:
    pbVar4 = (byte *)0x6174;
  case (char *)0x1c:
    pbVar4 = (byte *)((ulong)pbVar4 & 0xffffffffffff | 0xea00000000000000);
    pbVar1 = (byte *)0x726573556f6e;
  case (char *)0xfc:
    auVar19._0_8_ = (ulong)pbVar1 & 0xffffffffffff | 0x6144000000000000;
    auVar19._8_8_ = pbVar4;
    return auVar19;
  case (char *)0x7:
    pbVar4 = (byte *)0xeb00000000656d61;
  case (char *)0x98:
    pbVar1 = (byte *)0x75706e496f6e;
  case (char *)0xe8:
    auVar15._0_8_ = (ulong)pbVar1 & 0xffffffffffff | 0x4e74000000000000;
    auVar15._8_8_ = pbVar4;
    return auVar15;
  case (char *)0x8:
    pbVar4 = (byte *)0x656d614e;
  case (char *)0x94:
  case (char *)0x9c:
  case (char *)0xa4:
    uVar3 = (ulong)pbVar4 & 0xffffffffffff | 0xec00000000000000;
code_r0x000103c11adc:
    auVar22._8_8_ = uVar3;
    auVar22._0_8_ = 0x74757074754f6f6e;
    return auVar22;
  case (char *)0x9:
    auVar13._8_8_ = 0x800000010f1af2d0;
    auVar13._0_8_ = 0xd000000000000012;
    return auVar13;
  case (char *)0xa:
    auVar21._8_8_ = 0xed00007265666675;
    auVar21._0_8_ = 0x427475706e496f6e;
    return auVar21;
  case (char *)0xb:
    pcVar5 = "cationFailed";
  case (char *)0xb8:
    auVar10._8_8_ = (ulong)((long)pcVar5 + 0x2b0) | 0x8000000000000000;
    auVar10._0_8_ = 0xd000000000000010;
    return auVar10;
  case (char *)0xc:
    pbVar4 = (byte *)0x800000010f1af290;
    pbVar1 = (byte *)0xd000000000000014;
  case (char *)0x99:
    auVar12._8_8_ = pbVar4;
    auVar12._0_8_ = pbVar1;
    return auVar12;
  case (char *)0xd:
    pbVar4 = (byte *)0x64656c6961;
  case (char *)0xcc:
  case (char *)0xd4:
  case (char *)0xdc:
  case (char *)0xe4:
    auVar18._8_8_ = (ulong)pbVar4 & 0xffffffffffff | 0xed00000000000000;
    auVar18._0_8_ = 0x46737365636f7270;
    return auVar18;
  case (char *)0xe:
    pbVar4 = (byte *)0x800000010f1af270;
  case (char *)0x3d:
  case (char *)0x7d:
  case (char *)0xb5:
    pcVar5 = (char *)0x18;
  case (char *)0xf5:
    auVar9._0_8_ = ((ulong)pcVar5 | 0xd000000000000000) - 1;
    auVar9._8_8_ = pbVar4;
    return auVar9;
  case (char *)0xf:
    uVar3 = 0xee00726566667542;
    goto code_r0x000103c11adc;
  case (char *)0x10:
    auVar8._8_8_ = 0x800000010f1af250;
    auVar8._0_8_ = 0xd000000000000015;
    return auVar8;
  case (char *)0x11:
    pbVar1 = (byte *)0xd000000000000018;
  case (char *)0xe0:
    pcVar5 = "noPixelBufferBaseAddress";
    goto code_r0x000103c11a1c;
  case (char *)0x12:
    pcVar5 = "warmupSkippedSinceModelNotLoaded";
  case (char *)0x3c:
    auVar20._8_8_ = (ulong)((long)pcVar5 + -0x20) | 0x8000000000000000;
    auVar20._0_8_ = 0xd000000000000020;
    return auVar20;
  case (char *)0x13:
    pbVar4 = (byte *)0x800000010f1af1e0;
    pcVar5 = (char *)0xd000000000000018;
  case (char *)0x80:
    pbVar1 = (byte *)((ulong)pcVar5 | 4);
  case (char *)0x0:
    auVar23._8_8_ = pbVar4;
    auVar23._0_8_ = pbVar1;
    return auVar23;
  case (char *)0x32:
  case (char *)0x62:
  case (char *)0x6a:
  case (char *)0x72:
  case (char *)0xa2:
  case (char *)0xaa:
  case (char *)0xd2:
  case (char *)0xda:
  case (char *)0xe2:
  case (char *)0xea:
code_r0x000103c11cac:
    pbVar1 = &stack0x00000030;
    unaff_x21 = in_stack_00000058;
  case (char *)0xb4:
    pbVar4 = unaff_x21;
    func_0x000100dd26f4(pbVar1,unaff_x19);
    (**(code **)(pbVar4 + 0x10))(unaff_x19,pbVar4);
    func_0x000100dd2718(&stack0x00000030);
LAB_103c11cfc:
    auVar27._8_8_ = pbVar4;
    auVar27._0_8_ = unaff_x19;
    return auVar27;
  case (char *)0x33:
  case (char *)0x63:
  case (char *)0x6b:
  case (char *)0x73:
  case (char *)0xa3:
  case (char *)0xab:
  case (char *)0xd3:
  case (char *)0xdb:
  case (char *)0xe3:
  case (char *)0xeb:
    if ((ulong *)pcVar5 != (ulong *)0x0) {
      func_0x000101e8b5d0();
      unaff_x19 = in_stack_00000048;
      goto code_r0x000103c11cac;
    }
    func_0x000101e8af10();
    unaff_x19 = (byte *)(ulong)*unaff_x20;
    FUN_103c11884(unaff_x19);
    goto LAB_103c11cfc;
  case (char *)0x3e:
  case (char *)0x7e:
  case (char *)0xb6:
  case (char *)0xf6:
    pcVar5 = (char *)(ulong)bRam506c65646f4d6f6e;
  case (char *)0x70:
    auVar24._1_7_ = 0;
    auVar24[0] = (uint)pcVar5 == (uint)bRamef72656469766f72;
    auVar24._8_8_ = 0xef72656469766f72;
    return auVar24;
  case (char *)0x54:
  case (char *)0x5c:
  case (char *)0x64:
  case (char *)0x6c:
    func_0x000107c6068c(&stack0x00000008,0);
    FUN_103c11884();
    pbVar1 = &stack0x00000008;
    param_3 = unaff_x19;
    unaff_x19 = pbVar4;
  case (char *)0x58:
    pbVar4 = param_3;
    func_0x000107c5fb58(pbVar1,pbVar4,unaff_x19);
  case (char *)0x1a:
  case (char *)0x2e:
  case (char *)0x42:
  case (char *)0x56:
  case (char *)0x5e:
  case (char *)0x66:
  case (char *)0x6e:
  case (char *)0x82:
  case (char *)0x96:
  case (char *)0x9e:
  case (char *)0xa6:
  case (char *)0xba:
  case (char *)0xce:
  case (char *)0xd6:
  case (char *)0xde:
  case (char *)0xe6:
  case (char *)0xfa:
    pbVar1 = unaff_x19;
    pbVar6 = pbVar4;
  case (char *)0x40:
    break;
  case (char *)0xa0:
    register0x00000008 = (BADSPACEBASE *)auStack_70;
  case (char *)0x18:
    *(byte **)((long)register0x00000008 + 0x50) = unaff_x20;
    *(byte **)((long)register0x00000008 + 0x58) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + 0x60) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + 0x68) = unaff_x30;
    pbVar6 = (byte *)(ulong)*unaff_x20;
    func_0x000107c6068c((undefined1 *)((long)register0x00000008 + 8));
    pbVar1 = pbVar4;
    FUN_103c11884(pbVar6);
    func_0x000107c5fb58((undefined1 *)((long)register0x00000008 + 8),pbVar6,pbVar1);
    break;
  case (char *)0xa8:
    uVar3 = (ulong)*unaff_x20;
    FUN_103c11884();
    *(ulong *)pcVar5 = uVar3;
    *(byte **)((long)pcVar5 + 8) = pbVar4;
    auVar26._8_8_ = pbVar4;
    auVar26._0_8_ = uVar3;
    return auVar26;
  case (char *)0xbc:
    unaff_x19 = pbVar1;
  case (char *)0x7c:
    pbVar2 = (byte *)(ulong)*unaff_x20;
  case (char *)0x1e:
  case (char *)0x2c:
  case (char *)0x46:
  case (char *)0x86:
  case (char *)0xbe:
  case (char *)0xfe:
    pbVar1 = unaff_x19;
    FUN_103c11884(pbVar2);
    pbVar6 = pbVar2;
    unaff_x20 = pbVar4;
  case (char *)0x31:
  case (char *)0x61:
  case (char *)0x69:
  case (char *)0x71:
  case (char *)0xa1:
  case (char *)0xa9:
    pbVar4 = pbVar6;
    func_0x000107c5fb58(pbVar1,pbVar4,unaff_x20);
  case (char *)0xd1:
  case (char *)0xd9:
  case (char *)0xe1:
  case (char *)0xe9:
    pbVar1 = unaff_x20;
    pbVar6 = pbVar4;
    break;
  case (char *)0xd8:
    goto code_r0x000103c11a24;
  case (char *)0xf8:
    func_0x000107c606a8();
  case (char *)0x5a:
  case (char *)0x9a:
    auVar25._8_8_ = pbVar4;
    auVar25._0_8_ = pbVar1;
    return auVar25;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(pbVar1);
  auVar28._8_8_ = pbVar6;
  auVar28._0_8_ = pbVar1;
  return auVar28;
}



/* Entry: 103c11b24; end: 103c11c73;  */

void FUN_103c11b24(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = (ulong)*unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  FUN_103c11884(uVar1);
  func_0x000107c5fb58(auStack_68,uVar1,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103c11c74; end: 103c11deb;  */

void FUN_103c11c74(void)

{
  undefined1 *unaff_x20;
  undefined1 auStack_90 [24];
  long lStack_78;
  undefined1 auStack_60 [24];
  undefined8 uStack_48;
  long lStack_38;
  
  func_0x000101e8aec0(unaff_x20 + 8,auStack_90);
  if (lStack_78 == 0) {
    func_0x000101e8af10(auStack_90);
    FUN_103c11884(*unaff_x20);
  }
  else {
    func_0x000101e8b5d0(auStack_90,auStack_60);
    func_0x000100dd26f4(auStack_60,uStack_48);
    (**(code **)(lStack_38 + 0x10))(uStack_48,lStack_38);
    func_0x000100dd2718(auStack_60);
  }
  return;
}



/* Entry: 103c11dec; end: 103c11dff;  */

void FUN_103c11dec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 103c11e00; end: 103c11e87;  */

undefined1  [16] FUN_103c11e00(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  undefined1 auStack_60 [24];
  long lStack_48;
  long lStack_38;
  
  func_0x000101e8aec0(unaff_x20 + 8,auStack_60);
  if (lStack_48 == 0) {
    func_0x000101e8af10(auStack_60);
    lStack_38 = 0;
  }
  else {
    func_0x000100dd26f4(auStack_60,lStack_48);
    lVar1 = lStack_48;
    (**(code **)(lStack_38 + 0x18))(lStack_48,lStack_38);
    func_0x000100dd2718(auStack_60);
    lStack_48 = lVar1;
  }
  auVar2._8_8_ = lStack_38;
  auVar2._0_8_ = lStack_48;
  return auVar2;
}



/* Entry: 103c11e88; end: 103c11e8b;  */

undefined1  [16] FUN_103c11e88(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined1 *unaff_x20;
  undefined1 auVar5 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_78;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  long lStack_40;
  
  puVar3 = &uStack_90;
  func_0x000101e8aec0(unaff_x20 + 8,&uStack_90);
  if (lStack_78 == 0) {
    func_0x000101e8af10(&uStack_90);
    uStack_60 = 0x205d5253565b;
    uStack_58 = 0xe600000000000000;
    FUN_103c11884(*unaff_x20);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar3);
  }
  else {
    func_0x000101e8b5d0(&uStack_90,&uStack_60);
    uStack_90 = 0x205d5253565b;
    uStack_88 = 0xe600000000000000;
    func_0x000100dd26f4(&uStack_60,uStack_48);
    lVar4 = lStack_40;
    (**(code **)(lStack_40 + 0x10))(uStack_48,lStack_40);
    func_0x000107c5fb78();
    func_0x000107c6142c(lVar4);
    uVar2 = uStack_88;
    uVar1 = uStack_90;
    func_0x000100dd2718(&uStack_60);
    uStack_60 = uVar1;
    uStack_58 = uVar2;
  }
  auVar5._8_8_ = uStack_58;
  auVar5._0_8_ = uStack_60;
  return auVar5;
}



/* Entry: 103c11e8c; end: 103c11fdb;  */

undefined1  [16] FUN_103c11e8c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (param_3 == 0) {
    uStack_50 = 0;
    uStack_48 = 0xe000000000000000;
    func_0x000107c602fc(0x21);
    func_0x000107c6142c(uStack_48);
    uStack_50 = 0x206c65646f4d;
    uStack_48 = 0xe600000000000000;
    func_0x000107c5fb78(param_1,param_2);
    func_0x000107c5fb78(0xd000000000000019,0x800000010f1af380);
  }
  else {
    uStack_50 = 0;
    uStack_48 = 0xe000000000000000;
    func_0x000107c614b0(param_3);
    func_0x000107c602fc(0x1b);
    func_0x000107c5fb78(0x206c65646f4d,0xe600000000000000);
    func_0x000107c5fb78(param_1,param_2);
    func_0x000107c5fb78(0xd000000000000011,0x800000010f1af3a0);
    uVar2 = 0x112d393f0;
    lStack_58 = param_3;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c603d0(&lStack_58,&uStack_50,uVar2,PTR___ss26DefaultStringInterpolationVN_11034ec00
                        ,PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x000107c614ac(param_3);
  }
  auVar1._8_8_ = uStack_48;
  auVar1._0_8_ = uStack_50;
  return auVar1;
}



/* Entry: 103c11fdc; end: 103c11ff7;  */

undefined1  [16] FUN_103c11fdc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1af360;
  auVar1._0_8_ = 0xd000000000000011;
  return auVar1;
}



/* Entry: 103c11ff8; end: 103c1200f;  */

void FUN_103c11ff8(void)

{
  long unaff_x20;
  
  FUN_103c12458(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103c12010; end: 103c1204f;  */

undefined1  [16] FUN_103c12010(void)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  undefined8 *unaff_x20;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar3 = *unaff_x20;
  uVar1 = unaff_x20[1];
  lVar4 = unaff_x20[2];
  if (lVar4 == 0) {
    uStack_50 = 0;
    uStack_48 = 0xe000000000000000;
    func_0x000107c602fc(0x21);
    func_0x000107c6142c(uStack_48);
    uStack_50 = 0x206c65646f4d;
    uStack_48 = 0xe600000000000000;
    func_0x000107c5fb78(uVar3,uVar1);
    func_0x000107c5fb78(0xd000000000000019,0x800000010f1af380);
  }
  else {
    uStack_50 = 0;
    uStack_48 = 0xe000000000000000;
    func_0x000107c614b0(lVar4);
    func_0x000107c602fc(0x1b);
    func_0x000107c5fb78(0x206c65646f4d,0xe600000000000000);
    func_0x000107c5fb78(uVar3,uVar1);
    func_0x000107c5fb78(0xd000000000000011,0x800000010f1af3a0);
    uVar3 = 0x112d393f0;
    lStack_58 = lVar4;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c603d0(&lStack_58,&uStack_50,uVar3,PTR___ss26DefaultStringInterpolationVN_11034ec00
                        ,PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x000107c614ac(lVar4);
  }
  auVar2._8_8_ = uStack_48;
  auVar2._0_8_ = uStack_50;
  return auVar2;
}



/* Entry: 103c12050; end: 103c1207b;  */

undefined1  [16] FUN_103c12050(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x000107c61434(*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 103c1207c; end: 103c1210b;  */

undefined1  [16] FUN_103c1207c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  func_0x000107c602fc(0x12);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c5fb78(uVar1,uVar2);
  func_0x000107c5fb78(0x756f6620746f6e20,0xea0000000000646e);
  auVar3._8_8_ = 0xe600000000000000;
  auVar3._0_8_ = 0x206c65646f4d;
  return auVar3;
}



/* Entry: 103c1210c; end: 103c1211b;  */

void FUN_103c1210c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 103c1211c; end: 103c121e7;  */

undefined1  [16] FUN_103c1211c(long param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined1 auVar3 [16];
  long lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_1 != 0) {
    uStack_30 = 0;
    uStack_28 = 0xe000000000000000;
    func_0x000107c614b0();
    func_0x000107c602fc(0x2b);
    func_0x000107c5fb78(0xd000000000000029,0x800000010f1af400);
    uVar2 = 0x112d393f0;
    lStack_38 = param_1;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c603d0(&lStack_38,&uStack_30,uVar2,PTR___ss26DefaultStringInterpolationVN_11034ec00
                        ,PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x000107c614ac(param_1);
    auVar1._8_8_ = uStack_28;
    auVar1._0_8_ = uStack_30;
    return auVar1;
  }
  auVar3._8_8_ = 0x800000010f1af3c0;
  auVar3._0_8_ = 0xd000000000000031;
  return auVar3;
}



/* Entry: 103c121e8; end: 103c1220b;  */

undefined1  [16] FUN_103c121e8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xed000064656c6961;
  auVar1._0_8_ = 0x46737365636f7270;
  return auVar1;
}



/* Entry: 103c1220c; end: 103c12223;  */

void FUN_103c1220c(void)

{
  undefined8 *unaff_x20;
  
  FUN_103c12458(*unaff_x20);
  return;
}



/* Entry: 103c12224; end: 103c1223b;  */

undefined1  [16] FUN_103c12224(void)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lVar3;
  long *unaff_x20;
  undefined1 auVar4 [16];
  long lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar3 = *unaff_x20;
  if (lVar3 != 0) {
    uStack_30 = 0;
    uStack_28 = 0xe000000000000000;
    func_0x000107c614b0();
    func_0x000107c602fc(0x2b);
    func_0x000107c5fb78(0xd000000000000029,0x800000010f1af400);
    uVar2 = 0x112d393f0;
    lStack_38 = lVar3;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c603d0(&lStack_38,&uStack_30,uVar2,PTR___ss26DefaultStringInterpolationVN_11034ec00
                        ,PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x000107c614ac(lVar3);
    auVar1._8_8_ = uStack_28;
    auVar1._0_8_ = uStack_30;
    return auVar1;
  }
  auVar4._8_8_ = 0x800000010f1af3c0;
  auVar4._0_8_ = 0xd000000000000031;
  return auVar4;
}



/* Entry: 103c1223c; end: 103c122cb;  */

undefined1  [16] FUN_103c1223c(void)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  
  func_0x000107c602fc(0x2a);
  func_0x000107c6142c(0xe000000000000000);
  puVar2 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30;
  func_0x000107c6057c(PTR___ss5Int32VN_11034ee20,
                      PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar2);
  auVar1._8_8_ = 0x800000010f1af430;
  auVar1._0_8_ = 0xd000000000000028;
  return auVar1;
}



/* Entry: 103c122cc; end: 103c122ef;  */

undefined1  [16] FUN_103c122cc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1af270;
  auVar1._0_8_ = 0xd000000000000017;
  return auVar1;
}



/* Entry: 103c122f0; end: 103c1237f;  */

undefined1  [16] FUN_103c122f0(void)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  
  func_0x000107c602fc(0x22);
  func_0x000107c6142c(0xe000000000000000);
  puVar2 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30;
  func_0x000107c6057c(PTR___ss5Int32VN_11034ee20,
                      PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar2);
  auVar1._8_8_ = 0x800000010f1af460;
  auVar1._0_8_ = 0xd000000000000020;
  return auVar1;
}



/* Entry: 103c12380; end: 103c123a3;  */

undefined1  [16] FUN_103c12380(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xee00726566667542;
  auVar1._0_8_ = 0x74757074754f6f6e;
  return auVar1;
}



/* Entry: 103c123a4; end: 103c123e3;  */

void FUN_103c123a4(void)

{
  func_0x000107c6057c(PTR___ss5Int32VN_11034ee20,
                      PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30);
  return;
}



/* Entry: 103c123e4; end: 103c123eb;  */

undefined1  [16] FUN_103c123e4(void)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  
  func_0x000107c602fc(0x22);
  func_0x000107c6142c(0xe000000000000000);
  puVar2 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30;
  func_0x000107c6057c(PTR___ss5Int32VN_11034ee20,
                      PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar2);
  auVar1._8_8_ = 0x800000010f1af460;
  auVar1._0_8_ = 0xd000000000000020;
  return auVar1;
}



/* Entry: 103c123ec; end: 103c12457;  */

ulong FUN_103c123ec(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c60608();
  func_0x000107c6142c(param_2);
  if (0x13 < uVar1) {
    uVar1 = 0x14;
  }
  return uVar1;
}



/* Entry: 103c12458; end: 103c1255f;  */

undefined1  [16] FUN_103c12458(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined *puVar7;
  undefined1 auVar8 [16];
  long lStack_48;
  long *plStack_40;
  long lStack_38;
  
  if (param_1 != 0) {
    lStack_48 = param_1;
    func_0x000107c614b0();
    uVar1 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    uVar2 = 0;
    func_0x000100ea57c8(0);
    plVar3 = &lStack_38;
    plVar6 = &lStack_48;
    func_0x000107c6147c(plVar3,plVar6,uVar1,uVar2,6);
    if (((ulong)plVar3 & 1) == 0) {
      lStack_48 = 0;
      plStack_40 = (long *)0x0;
    }
    else {
      lVar4 = lStack_38;
      func_0x000107c42210();
      func_0x000107c61180();
      lVar5 = lVar4;
      func_0x000107c5faec();
      func_0x000107c61170(lVar4);
      lStack_48 = lVar5;
      plStack_40 = plVar6;
      func_0x000107c5fb78(0x2e,0xe100000000000000);
      func_0x000107c3fcb0();
      puVar7 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
      func_0x000107c5fb78();
      func_0x000107c61170(lStack_38);
      func_0x000107c6142c(puVar7);
    }
    auVar8._8_8_ = plStack_40;
    auVar8._0_8_ = lStack_48;
    return auVar8;
  }
  return ZEXT816(0);
}



/* Entry: 103c12560; end: 103c12563;  */

void FUN_103c12560(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff7ce8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc660d8;
  func_0x000107c61520(&UNK_10dc660d8,&UNK_1106e99a0);
  puRam0000000112ff7ce8 = puVar1;
  return;
}



/* Entry: 103c12564; end: 103c126e3;  */

void FUN_103c12564(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff7ce8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc660d8;
  func_0x000107c61520(&UNK_10dc660d8,&UNK_1106e99a0);
  puRam0000000112ff7ce8 = puVar1;
  return;
}



/* Entry: 103c126e4; end: 103c1270f;  */

long FUN_103c126e4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103c12710; end: 103c12723;  */

void FUN_103c12710(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    return;
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + -8);
  if ((*(byte *)(lVar1 + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000100dd272c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 103c12724; end: 103c12883;  */

undefined1 * FUN_103c12724(undefined1 *param_1,undefined1 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  lVar1 = *(long *)(param_2 + 0x20);
  if (lVar1 != 0) {
    *(long *)(param_1 + 0x20) = lVar1;
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x28) = uVar2;
    (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 8,param_2 + 8);
    return param_1;
  }
  uVar2 = *(undefined8 *)(param_2 + 8);
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  return param_1;
}



/* Entry: 103c12884; end: 103c12ab3;  */

int FUN_103c12884(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0xe] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103c12ab4; end: 103c12b17;  */

void FUN_103c12ab4(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 103c12b18; end: 103c12b7f;  */

undefined8 * FUN_103c12b18(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar2 = param_1[2];
  uVar1 = param_2[2];
  func_0x000107c614b0(uVar1);
  param_1[2] = uVar1;
  func_0x000107c614ac(uVar2);
  return param_1;
}



/* Entry: 103c12b80; end: 103c12bc3;  */

undefined8 * FUN_103c12b80(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  func_0x000107c6142c(param_1[1]);
  uVar1 = param_1[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  func_0x000107c614ac(uVar1);
  return param_1;
}



/* Entry: 103c12bc4; end: 103c12c63;  */

int FUN_103c12bc4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103c12c64; end: 103c12cd3;  */

undefined8 * FUN_103c12c64(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 103c12cd4; end: 103c12d6f;  */

int FUN_103c12cd4(int *param_1,int param_2)

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



/* Entry: 103c12d70; end: 103c12db3;  */

undefined8 * FUN_103c12d70(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = *param_2;
  func_0x000107c614b0(uVar2);
  *param_1 = uVar2;
  func_0x000107c614ac(uVar1);
  return param_1;
}



/* Entry: 103c12db4; end: 103c12de3;  */

undefined8 * FUN_103c12db4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c614ac(uVar1);
  return param_1;
}



/* Entry: 103c12de4; end: 103c12f43;  */

int FUN_103c12de4(ulong *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[1] != '\0')) {
    return (int)*param_1 + 0x7fffffff;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103c12f44; end: 103c1322f;  */

void FUN_103c12f44(void)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar3 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  pcVar4 = "overPerformanceWarningThreshold";
  uVar6 = 0xd000000000000026;
  if (bVar3 != 3) {
    pcVar4 = "Model not initialized";
    uVar6 = 0xd00000000000001f;
  }
  pcVar5 = "rmanceWarningThreshold";
  uVar7 = 0xd000000000000018;
  if (bVar3 != 2) {
    pcVar5 = pcVar4;
    uVar7 = uVar6;
  }
  uVar1 = 0x800000010f015b30;
  uVar6 = 0xd000000000000013;
  if (bVar3 != 0) {
    uVar1 = 0xef776f4c65746174;
    uVar6 = 0x5379726574746162;
  }
  uVar2 = (ulong)pcVar5 | 0x8000000000000000;
  if (bVar3 < 2) {
    uVar2 = uVar1;
    uVar7 = uVar6;
  }
  func_0x000107c5fb58(auStack_68,uVar7,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103c13230; end: 103c132e7;  */

void FUN_103c13230(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte *unaff_x20;
  
  bVar3 = *unaff_x20;
  pcVar4 = "overPerformanceWarningThreshold";
  uVar6 = 0xd000000000000026;
  if (bVar3 != 3) {
    pcVar4 = "Model not initialized";
    uVar6 = 0xd00000000000001f;
  }
  pcVar5 = "rmanceWarningThreshold";
  uVar7 = 0xd000000000000018;
  if (bVar3 != 2) {
    pcVar5 = pcVar4;
    uVar7 = uVar6;
  }
  uVar1 = 0x800000010f015b30;
  uVar6 = 0xd000000000000013;
  if (bVar3 != 0) {
    uVar1 = 0xef776f4c65746174;
    uVar6 = 0x5379726574746162;
  }
  uVar2 = (ulong)pcVar5 | 0x8000000000000000;
  if (bVar3 < 2) {
    uVar2 = uVar1;
    uVar7 = uVar6;
  }
  *param_1 = uVar7;
  param_1[1] = uVar2;
  return;
}



/* Entry: 103c132e8; end: 103c1338b;  */

void FUN_103c132e8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112ff7f30;
  func_0x0001000285a8(0x112ff7f30,&UNK_10dc66540);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 103c1338c; end: 103c1338f;  */

void FUN_103c1338c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff7f38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc66548;
  func_0x000107c61520(&UNK_10dc66548,&UNK_1106e9c90);
  puRam0000000112ff7f38 = puVar1;
  return;
}



/* Entry: 103c13390; end: 103c133cf;  */

void FUN_103c13390(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff7f38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc66548;
  func_0x000107c61520(&UNK_10dc66548,&UNK_1106e9c90);
  puRam0000000112ff7f38 = puVar1;
  return;
}



/* Entry: 103c133d0; end: 103c133d3;  */

void FUN_103c133d0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112ff7f40 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112ff7f48;
  func_0x00010002969c(0x112ff7f48,&UNK_10dc665e8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112ff7f40 = puVar2;
  return;
}



/* Entry: 103c133d4; end: 103c13423;  */

void FUN_103c133d4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112ff7f40 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112ff7f48;
  func_0x00010002969c(0x112ff7f48,&UNK_10dc665e8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112ff7f40 = puVar2;
  return;
}



/* Entry: 103c13424; end: 103c13587;  */

int FUN_103c13424(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103c134a0;
        goto LAB_103c13484;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103c13484:
      return ((uint)*param_1 | uVar1 << 8) - 4;
    }
  }
LAB_103c134a0:
  iVar2 = *param_1 - 5;
  if (*param_1 < 5) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103c13588; end: 103c136c3;  */

void FUN_103c13588(undefined8 param_1,byte param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68);
  uVar2 = 0x800000010f015b30;
  uVar5 = 0xd000000000000013;
  if (param_2 != 5) {
    uVar2 = 0xef776f4c65746174;
    uVar5 = 0x5379726574746162;
  }
  pcVar3 = "";
  uVar1 = 0xd000000000000021;
  if (param_2 != 3) {
    pcVar3 = "rmanceWarningThreshold";
    uVar1 = 0xd000000000000018;
  }
  if (param_2 < 5) {
    uVar2 = (ulong)pcVar3 | 0x8000000000000000;
    uVar5 = uVar1;
  }
  uVar1 = 0xd000000000000026;
  pcVar3 = "Model not initialized";
  if (param_2 != 1) {
    pcVar3 = "InUnexpectedState";
  }
  pcVar4 = "overPerformanceWarningThreshold";
  if (param_2 != 0) {
    uVar1 = 0xd00000000000001f;
    pcVar4 = pcVar3;
  }
  if (param_2 < 3) {
    uVar2 = (ulong)pcVar4 | 0x8000000000000000;
    uVar5 = uVar1;
  }
  func_0x000107c5fb58(auStack_68,uVar5,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103c136c4; end: 103c136e3;  */

bool FUN_103c136c4(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103c136e4; end: 103c137fb;  */

void FUN_103c136e4(undefined8 param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  byte bVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 uVar6;
  byte *unaff_x20;
  
  bVar3 = *unaff_x20;
  uVar2 = 0x800000010f015b30;
  uVar6 = 0xd000000000000013;
  if (bVar3 != 5) {
    uVar2 = 0xef776f4c65746174;
    uVar6 = 0x5379726574746162;
  }
  pcVar4 = "";
  uVar1 = 0xd000000000000021;
  if (bVar3 != 3) {
    pcVar4 = "rmanceWarningThreshold";
    uVar1 = 0xd000000000000018;
  }
  if (bVar3 < 5) {
    uVar2 = (ulong)pcVar4 | 0x8000000000000000;
    uVar6 = uVar1;
  }
  uVar1 = 0xd000000000000026;
  pcVar4 = "Model not initialized";
  if (bVar3 != 1) {
    pcVar4 = "InUnexpectedState";
  }
  pcVar5 = "overPerformanceWarningThreshold";
  if (bVar3 != 0) {
    uVar1 = 0xd00000000000001f;
    pcVar5 = pcVar4;
  }
  if (bVar3 < 3) {
    uVar2 = (ulong)pcVar5 | 0x8000000000000000;
    uVar6 = uVar1;
  }
  func_0x000107c5fb58(param_1,uVar6,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 103c137fc; end: 103c13803;  */

void FUN_103c137fc(void)

{
  undefined8 uVar1;
  ulong uVar2;
  byte bVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 uVar6;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar3 = *unaff_x20;
  func_0x000107c6068c(auStack_68);
  uVar2 = 0x800000010f015b30;
  uVar6 = 0xd000000000000013;
  if (bVar3 != 5) {
    uVar2 = 0xef776f4c65746174;
    uVar6 = 0x5379726574746162;
  }
  pcVar4 = "";
  uVar1 = 0xd000000000000021;
  if (bVar3 != 3) {
    pcVar4 = "rmanceWarningThreshold";
    uVar1 = 0xd000000000000018;
  }
  if (bVar3 < 5) {
    uVar2 = (ulong)pcVar4 | 0x8000000000000000;
    uVar6 = uVar1;
  }
  uVar1 = 0xd000000000000026;
  pcVar4 = "Model not initialized";
  if (bVar3 != 1) {
    pcVar4 = "InUnexpectedState";
  }
  pcVar5 = "overPerformanceWarningThreshold";
  if (bVar3 != 0) {
    uVar1 = 0xd00000000000001f;
    pcVar5 = pcVar4;
  }
  if (bVar3 < 3) {
    uVar2 = (ulong)pcVar5 | 0x8000000000000000;
    uVar6 = uVar1;
  }
  func_0x000107c5fb58(auStack_68,uVar6,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103c13804; end: 103c1382f;  */

void FUN_103c13804(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_103c1489c(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 103c13830; end: 103c1392b;  */

void FUN_103c13830(undefined8 *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  byte bVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 uVar6;
  byte *unaff_x20;
  
  bVar3 = *unaff_x20;
  uVar2 = 0x800000010f015b30;
  uVar6 = 0xd000000000000013;
  if (bVar3 != 5) {
    uVar2 = 0xef776f4c65746174;
    uVar6 = 0x5379726574746162;
  }
  pcVar4 = "";
  uVar1 = 0xd000000000000021;
  if (bVar3 != 3) {
    pcVar4 = "rmanceWarningThreshold";
    uVar1 = 0xd000000000000018;
  }
  if (bVar3 < 5) {
    uVar2 = (ulong)pcVar4 | 0x8000000000000000;
    uVar6 = uVar1;
  }
  uVar1 = 0xd000000000000026;
  pcVar4 = "Model not initialized";
  if (bVar3 != 1) {
    pcVar4 = "InUnexpectedState";
  }
  pcVar5 = "overPerformanceWarningThreshold";
  if (bVar3 != 0) {
    uVar1 = 0xd00000000000001f;
    pcVar5 = pcVar4;
  }
  if (bVar3 < 3) {
    uVar2 = (ulong)pcVar5 | 0x8000000000000000;
    uVar6 = uVar1;
  }
  *param_1 = uVar6;
  param_1[1] = uVar2;
  return;
}



/* Entry: 103c1392c; end: 103c13ca3;  */

undefined1  [16] FUN_103c1392c(void)

{
  undefined8 uVar1;
  ulong uVar2;
  byte bVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 uVar6;
  long lVar7;
  byte *unaff_x20;
  undefined1 auVar8 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_78;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  long lStack_40;
  
  func_0x000101e8aec0(unaff_x20 + 8,&uStack_90);
  if (lStack_78 == 0) {
    func_0x000103c14900(&uStack_90,0x112e34e68,&UNK_10da1e2b0);
    uStack_60 = 0x205d5253565b;
    uStack_58 = 0xe600000000000000;
    bVar3 = *unaff_x20;
    uVar2 = 0x800000010f015b30;
    uVar6 = 0xd000000000000013;
    if (bVar3 != 5) {
      uVar2 = 0xef776f4c65746174;
      uVar6 = 0x5379726574746162;
    }
    pcVar4 = "";
    uVar1 = 0xd000000000000021;
    if (bVar3 != 3) {
      pcVar4 = "rmanceWarningThreshold";
      uVar1 = 0xd000000000000018;
    }
    if (bVar3 < 5) {
      uVar2 = (ulong)pcVar4 | 0x8000000000000000;
      uVar6 = uVar1;
    }
    uVar1 = 0xd000000000000026;
    pcVar4 = "Model not initialized";
    if (bVar3 != 1) {
      pcVar4 = "InUnexpectedState";
    }
    pcVar5 = "overPerformanceWarningThreshold";
    if (bVar3 != 0) {
      uVar1 = 0xd00000000000001f;
      pcVar5 = pcVar4;
    }
    if (bVar3 < 3) {
      uVar2 = (ulong)pcVar5 | 0x8000000000000000;
      uVar6 = uVar1;
    }
    func_0x000107c5fb78(uVar6,uVar2);
    func_0x000107c6142c(uVar2);
  }
  else {
    func_0x000101e8b5d0(&uStack_90,&uStack_60);
    uStack_90 = 0x205d5253565b;
    uStack_88 = 0xe600000000000000;
    FUN_103c14940(&uStack_60,uStack_48);
    lVar7 = lStack_40;
    (**(code **)(lStack_40 + 0x10))(uStack_48,lStack_40);
    func_0x000107c5fb78();
    func_0x000107c6142c(lVar7);
    uVar1 = uStack_88;
    uVar6 = uStack_90;
    func_0x000103c14964(&uStack_60);
    uStack_60 = uVar6;
    uStack_58 = uVar1;
  }
  auVar8._8_8_ = uStack_58;
  auVar8._0_8_ = uStack_60;
  return auVar8;
}



/* Entry: 103c13ca4; end: 103c13cb7;  */

void FUN_103c13ca4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 103c13cb8; end: 103c13d4f;  */

undefined1  [16] FUN_103c13cb8(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  undefined1 auStack_60 [24];
  long lStack_48;
  long lStack_38;
  
  func_0x000101e8aec0(unaff_x20 + 8,auStack_60);
  if (lStack_48 == 0) {
    func_0x000103c14900(auStack_60,0x112e34e68,&UNK_10da1e2b0);
    lStack_38 = 0;
  }
  else {
    FUN_103c14940(auStack_60,lStack_48);
    lVar1 = lStack_48;
    (**(code **)(lStack_38 + 0x18))(lStack_48,lStack_38);
    func_0x000103c14964(auStack_60);
    lStack_48 = lVar1;
  }
  auVar2._8_8_ = lStack_38;
  auVar2._0_8_ = lStack_48;
  return auVar2;
}



/* Entry: 103c13d50; end: 103c13d53;  */

undefined1  [16] FUN_103c13d50(void)

{
  undefined8 uVar1;
  ulong uVar2;
  byte bVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 uVar6;
  long lVar7;
  byte *unaff_x20;
  undefined1 auVar8 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_78;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  long lStack_40;
  
  func_0x000101e8aec0(unaff_x20 + 8,&uStack_90);
  if (lStack_78 == 0) {
    func_0x000103c14900(&uStack_90,0x112e34e68,&UNK_10da1e2b0);
    uStack_60 = 0x205d5253565b;
    uStack_58 = 0xe600000000000000;
    bVar3 = *unaff_x20;
    uVar2 = 0x800000010f015b30;
    uVar6 = 0xd000000000000013;
    if (bVar3 != 5) {
      uVar2 = 0xef776f4c65746174;
      uVar6 = 0x5379726574746162;
    }
    pcVar4 = "";
    uVar1 = 0xd000000000000021;
    if (bVar3 != 3) {
      pcVar4 = "rmanceWarningThreshold";
      uVar1 = 0xd000000000000018;
    }
    if (bVar3 < 5) {
      uVar2 = (ulong)pcVar4 | 0x8000000000000000;
      uVar6 = uVar1;
    }
    uVar1 = 0xd000000000000026;
    pcVar4 = "Model not initialized";
    if (bVar3 != 1) {
      pcVar4 = "InUnexpectedState";
    }
    pcVar5 = "overPerformanceWarningThreshold";
    if (bVar3 != 0) {
      uVar1 = 0xd00000000000001f;
      pcVar5 = pcVar4;
    }
    if (bVar3 < 3) {
      uVar2 = (ulong)pcVar5 | 0x8000000000000000;
      uVar6 = uVar1;
    }
    func_0x000107c5fb78(uVar6,uVar2);
    func_0x000107c6142c(uVar2);
  }
  else {
    func_0x000101e8b5d0(&uStack_90,&uStack_60);
    uStack_90 = 0x205d5253565b;
    uStack_88 = 0xe600000000000000;
    FUN_103c14940(&uStack_60,uStack_48);
    lVar7 = lStack_40;
    (**(code **)(lStack_40 + 0x10))(uStack_48,lStack_40);
    func_0x000107c5fb78();
    func_0x000107c6142c(lVar7);
    uVar1 = uStack_88;
    uVar6 = uStack_90;
    func_0x000103c14964(&uStack_60);
    uStack_60 = uVar6;
    uStack_58 = uVar1;
  }
  auVar8._8_8_ = uStack_58;
  auVar8._0_8_ = uStack_60;
  return auVar8;
}



/* Entry: 103c13d54; end: 103c13e27;  */

undefined1  [16] FUN_103c13d54(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_50 = 0;
  uStack_48 = 0xe000000000000000;
  func_0x000107c602fc(0x38);
  func_0x000107c5fb78(0xd000000000000028,0x800000010f1af560);
  puVar3 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08;
  puVar2 = PTR___ss26DefaultStringInterpolationVN_11034ec00;
  func_0x000107c5fddc(param_1,&uStack_50,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0x6f68736572685420,0xec000000203a646c);
  func_0x000107c5fddc(param_2,&uStack_50,puVar2,puVar3);
  auVar1._8_8_ = uStack_48;
  auVar1._0_8_ = uStack_50;
  return auVar1;
}



/* Entry: 103c13e28; end: 103c13e4b;  */

undefined1  [16] FUN_103c13e28(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f015ae0;
  auVar1._0_8_ = 0xd000000000000026;
  return auVar1;
}



/* Entry: 103c13e4c; end: 103c13f1f;  */

undefined1  [16] FUN_103c13e4c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_50 = 0;
  uStack_48 = 0xe000000000000000;
  func_0x000107c602fc(0x3a);
  func_0x000107c5fb78(0xd00000000000002a,0x800000010f1af590);
  puVar3 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08;
  puVar2 = PTR___ss26DefaultStringInterpolationVN_11034ec00;
  func_0x000107c5fddc(param_1,&uStack_50,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0x6f68736572685420,0xec000000203a646c);
  func_0x000107c5fddc(param_2,&uStack_50,puVar2,puVar3);
  auVar1._8_8_ = uStack_48;
  auVar1._0_8_ = uStack_50;
  return auVar1;
}



/* Entry: 103c13f20; end: 103c13f43;  */

undefined1  [16] FUN_103c13f20(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f015ac0;
  auVar1._0_8_ = 0xd00000000000001f;
  return auVar1;
}



/* Entry: 103c13f44; end: 103c14017;  */

undefined1  [16] FUN_103c13f44(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_50 = 0;
  uStack_48 = 0xe000000000000000;
  func_0x000107c602fc(0x3a);
  func_0x000107c5fb78(0xd00000000000002a,0x800000010f1af5c0);
  puVar3 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08;
  puVar2 = PTR___ss26DefaultStringInterpolationVN_11034ec00;
  func_0x000107c5fddc(param_1,&uStack_50,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0x6f68736572685420,0xec000000203a646c);
  func_0x000107c5fddc(param_2,&uStack_50,puVar2,puVar3);
  auVar1._8_8_ = uStack_48;
  auVar1._0_8_ = uStack_50;
  return auVar1;
}



/* Entry: 103c14018; end: 103c14057;  */

undefined1  [16] FUN_103c14018(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1af540;
  auVar1._0_8_ = 0xd00000000000001f;
  return auVar1;
}



/* Entry: 103c14058; end: 103c14083;  */

undefined1  [16] FUN_103c14058(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x000107c61434(*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 103c14084; end: 103c142fb;  */

undefined1  [16] FUN_103c14084(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  func_0x000107c602fc(0x2b);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c5fb78(uVar1,uVar2);
  auVar3._8_8_ = 0x800000010f1af5f0;
  auVar3._0_8_ = 0xd000000000000029;
  return auVar3;
}



/* Entry: 103c142fc; end: 103c1433f;  */

undefined1  [16] FUN_103c142fc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f015b10;
  auVar1._0_8_ = 0xd000000000000018;
  return auVar1;
}



/* Entry: 103c14340; end: 103c143df;  */

undefined1  [16] FUN_103c14340(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  
  func_0x000107c602fc(0x4d);
  func_0x000107c5fb78(0xd00000000000004b,0x800000010f1af680);
  bVar3 = (param_1 & 1) == 0;
  uVar1 = 0x65757274;
  if (bVar3) {
    uVar1 = 0x65736c6166;
  }
  uVar2 = 0xe400000000000000;
  if (bVar3) {
    uVar2 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar1,uVar2);
  func_0x000107c6142c(uVar2);
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Entry: 103c143e0; end: 103c143fb;  */

undefined1  [16] FUN_103c143e0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f015b30;
  auVar1._0_8_ = 0xd000000000000013;
  return auVar1;
}



/* Entry: 103c143fc; end: 103c1447f;  */

undefined1  [16] FUN_103c143fc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  char *unaff_x20;
  
  uVar1 = 0x65757274;
  if (*unaff_x20 == '\0') {
    uVar1 = 0x65736c6166;
  }
  uVar2 = 0xe400000000000000;
  if (*unaff_x20 == '\0') {
    uVar2 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar1,uVar2);
  func_0x000107c6142c(uVar2);
  auVar3._8_8_ = 0xeb000000002e6465;
  auVar3._0_8_ = 0x6c62616e45727376;
  return auVar3;
}



/* Entry: 103c14480; end: 103c14497;  */

undefined1  [16] FUN_103c14480(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  bool bVar4;
  byte *unaff_x20;
  
  bVar3 = *unaff_x20;
  func_0x000107c602fc(0x4d);
  func_0x000107c5fb78(0xd00000000000004b,0x800000010f1af680);
  bVar4 = (bVar3 & 1) == 0;
  uVar1 = 0x65757274;
  if (bVar4) {
    uVar1 = 0x65736c6166;
  }
  uVar2 = 0xe400000000000000;
  if (bVar4) {
    uVar2 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar1,uVar2);
  func_0x000107c6142c(uVar2);
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Entry: 103c14498; end: 103c1467f;  */

undefined1  [16] FUN_103c14498(float param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  code *pcVar4;
  bool bVar5;
  undefined *puVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_70 = 0;
  uStack_68 = 0xe000000000000000;
  func_0x000107c602fc(0x2f);
  func_0x000107c5fb78(0x2e6c6576656c,0xe600000000000000);
  param_1 = param_1 * 100.0;
  if (0x7f7fffff < (uint)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x103c14678);
    (*pcVar4)();
  }
  if (-9.223373e+18 < param_1) {
    if (param_1 < 9.223372e+18) {
      puVar6 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar6);
      func_0x000107c5fb78(0x6e6967726168632e,0xea00000000002e67);
      bVar5 = (param_3 & 1) == 0;
      uVar2 = 0x65757274;
      if (bVar5) {
        uVar2 = 0x65736c6166;
      }
      uVar1 = 0xe400000000000000;
      if (bVar5) {
        uVar1 = 0xe500000000000000;
      }
      func_0x000107c5fb78(uVar2,uVar1);
      func_0x000107c6142c(uVar1);
      func_0x000107c5fb78(0x6f6873657268742e,0xeb000000002e646c);
      func_0x000107c5fe00(param_2,&uStack_70,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      func_0x000107c5fb78(0x62616e457273762e,0xec0000002e64656c);
      bVar5 = (param_4 & 1) == 0;
      uVar2 = 0x65757274;
      if (bVar5) {
        uVar2 = 0x65736c6166;
      }
      uVar1 = 0xe400000000000000;
      if (bVar5) {
        uVar1 = 0xe500000000000000;
      }
      func_0x000107c5fb78(uVar2,uVar1);
      func_0x000107c6142c(uVar1);
      auVar3._8_8_ = uStack_68;
      auVar3._0_8_ = uStack_70;
      return auVar3;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x103c14680);
    (*pcVar4)();
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x103c1467c);
  (*pcVar4)();
}



/* Entry: 103c14680; end: 103c14817;  */

undefined1  [16] FUN_103c14680(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uStack_80 = 0;
  uStack_78 = 0xe000000000000000;
  func_0x000107c602fc(0x67);
  func_0x000107c5fb78(0xd000000000000034,0x800000010f1af6d0);
  puVar5 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08;
  puVar4 = PTR___ss26DefaultStringInterpolationVN_11034ec00;
  func_0x000107c5fe00(param_1,&uStack_80,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0x696772616863202c,0xeb000000003d676e);
  bVar6 = (param_3 & 1) == 0;
  uVar2 = 0x65757274;
  if (bVar6) {
    uVar2 = 0x65736c6166;
  }
  uVar1 = 0xe400000000000000;
  if (bVar6) {
    uVar1 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c5fb78(0x687365726874202c,0xec0000003d646c6f);
  func_0x000107c5fe00(param_2,&uStack_80,puVar4,puVar5);
  func_0x000107c5fb78(0xd000000000000014,0x800000010f1af660);
  bVar6 = (param_4 & 1) == 0;
  uVar2 = 0x65757274;
  if (bVar6) {
    uVar2 = 0x65736c6166;
  }
  uVar1 = 0xe400000000000000;
  if (bVar6) {
    uVar1 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
  auVar3._8_8_ = uStack_78;
  auVar3._0_8_ = uStack_80;
  return auVar3;
}



/* Entry: 103c14818; end: 103c1489b;  */

undefined1  [16] FUN_103c14818(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xef776f4c65746174;
  auVar1._0_8_ = 0x5379726574746162;
  return auVar1;
}



/* Entry: 103c1489c; end: 103c1493f;  */

ulong FUN_103c1489c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (6 < uVar1) {
    uVar1 = 7;
  }
  return uVar1;
}



/* Entry: 103c14940; end: 103c14987;  */

long * FUN_103c14940(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(*(long *)(param_2 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) != 0) {
    uVar2 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(*param_1 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  }
  return param_1;
}



/* Entry: 103c14988; end: 103c14bc7;  */

void FUN_103c14988(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff8020 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc667a0;
  func_0x000107c61520(&UNK_10dc667a0,&UNK_1106ea030);
  puRam0000000112ff8020 = puVar1;
  return;
}



/* Entry: 103c14bc8; end: 103c14bf3;  */

long FUN_103c14bc8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103c14bf4; end: 103c14c13;  */

void FUN_103c14bf4(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x000103c14964(param_1 + 8);
  }
  return;
}



/* Entry: 103c14c14; end: 103c14d73;  */

undefined1 * FUN_103c14c14(undefined1 *param_1,undefined1 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  lVar1 = *(long *)(param_2 + 0x20);
  if (lVar1 != 0) {
    *(long *)(param_1 + 0x20) = lVar1;
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x28) = uVar2;
    (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 8,param_2 + 8);
    return param_1;
  }
  uVar2 = *(undefined8 *)(param_2 + 8);
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  return param_1;
}



/* Entry: 103c14d74; end: 103c14fdb;  */

int FUN_103c14d74(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0xe] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103c14fdc; end: 103c1504b;  */

undefined8 * FUN_103c14fdc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 103c1504c; end: 103c15443;  */

int FUN_103c1504c(int *param_1,int param_2)

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



/* Entry: 103c15444; end: 103c154b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c15444(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 unaff_x20;
  long lStack_40;
  long lStack_38;
  
  plVar3 = &lStack_40;
  FUN_103c15a8c();
  lVar2 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112ff8140) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar2;
  lStack_38 = param_2;
  func_0x000107c6157c();
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar3;
  param_1[1] = &PTR_DAT_1106ea558;
  return;
}



/* Entry: 103c154b4; end: 103c154ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c154b4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff8140) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103c15500; end: 103c15983;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c15500(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  lVar2 = 0;
  FUN_103c16714();
  lVar10 = *(long *)(lVar2 + -8);
  lVar2 = *(long *)(lVar10 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = (long)&puStack_80 - (lVar2 + 0xfU & 0xfffffffffffffff0);
  func_0x000100083b20(&puStack_80);
  puVar1 = puStack_80;
  puVar3 = &UNK_1106ea4f0;
  func_0x000107c613fc(&UNK_1106ea4f0,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  FUN_103c15984(param_1,lVar9);
  uVar6 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar7 = uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff);
  uVar8 = lVar2 + uVar7 + 7 & 0xfffffffffffffff8;
  puVar4 = &UNK_1106ea518;
  func_0x000107c613fc(&UNK_1106ea518,uVar8 + 8,uVar6 | 7);
  FUN_103c15aac(lVar9,puVar4 + uVar7,FUN_103c16714);
  *(undefined **)(puVar4 + uVar8) = puVar3;
  uStack_60 = 0x103c159c8;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_100f1c768;
  puStack_68 = &UNK_1106ea530;
  ppuVar5 = &puStack_80;
  puStack_58 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  func_0x000107c61574(puStack_58);
  func_0x000107c440d8(puVar1);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c615e8(puVar1);
  return;
}



/* Entry: 103c15984; end: 103c15a17;  */

undefined8 FUN_103c15984(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_103c16714();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 103c15a18; end: 103c15a33;  */

void FUN_103c15a18(long param_1,long param_2)

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


