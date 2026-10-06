/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1048ac36c; end: 1048ac417;  */

void FUN_1048ac36c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048ac418; end: 1048ac45f;  */

undefined8 FUN_1048ac418(void)

{
  undefined8 uVar1;
  char *unaff_x20;
  
  if (*unaff_x20 != '\0') {
    return 0;
  }
  uVar1 = 0x112e04798;
  func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
  _swift_initStaticObject();
  func_0x000100c8a830();
  return uVar1;
}



/* Entry: 1048ac460; end: 1048ac46b;  */

/* WARNING: Removing unreachable block (ram,0x0001048ac530) */

undefined1  [16] FUN_1048ac460(void)

{
  byte bVar1;
  byte in_ZR;
  undefined1 in_CY;
  bool bVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  undefined *puVar10;
  undefined *unaff_x19;
  byte *unaff_x20;
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
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auStack_70 [80];
  
code_r0x0001048ac460:
  bVar1 = *unaff_x20;
  pcVar4 = (char *)(ulong)bVar1;
  uVar9 = (uint)bVar1;
  uVar7 = (uint)bVar1;
  puVar5 = (undefined *)0xe600000000000000;
  puVar3 = (undefined *)0x6c65736e6954;
  puVar10 = &UNK_10dd41130;
  pcVar8 = pcVar4;
  switch(bVar1) {
  default:
    pcVar4 = "tivityInfoProvider";
  case 0x28:
  case 0x36:
  case 0x76:
  case 0x92:
  case 200:
  case 0xd6:
    pcVar4 = pcVar4 + 0x8f0;
  case 0x1b:
  case 0x2f:
  case 0x43:
  case 0x57:
  case 0x5f:
  case 0x67:
  case 0x6f:
  case 0x83:
  case 0x8b:
  case 0x8e:
  case 0xbb:
  case 0xcf:
  case 0xe3:
  case 0xf7:
  case 0xff:
    pcVar4 = pcVar4 + -0x20;
  case 0x26:
  case 0x4e:
  case 0xc6:
  case 0xee:
  case 0xf0:
    puVar5 = (undefined *)((ulong)pcVar4 | 0x8000000000000000);
  case 0x3d:
  case 0x50:
  case 0x7d:
  case 0x90:
  case 0x99:
    pcVar4 = (char *)0x10;
code_r0x0001048ac1ac:
    auVar11._0_8_ = (ulong)pcVar4 | 0xd000000000000001;
    auVar11._8_8_ = puVar5;
    return auVar11;
  case 1:
    pcVar8 = "ComplianceEngine";
    pcVar4 = (char *)0x5;
    goto code_r0x0001048ac338;
  case 2:
    goto code_r0x0001048ac284;
  case 3:
    puVar5 = (undefined *)0xe300000000000000;
  case 0x58:
    auVar18._8_8_ = puVar5;
    auVar18._0_8_ = 0x534f43;
    return auVar18;
  case 4:
    puVar5 = (undefined *)0x756f;
  case 0xe5:
    puVar5 = (undefined *)((ulong)puVar5 | 0x746e0000);
    goto code_r0x0001048ac204;
  case 5:
    uVar6 = 0xef736769666e6f43;
    goto code_r0x0001048ac2f0;
  case 6:
    puVar5 = (undefined *)0xec0000007265746e;
    puVar3 = (undefined *)0x796c696d6146;
  case 0xab:
  case 0xb1:
    puVar3 = (undefined *)((ulong)puVar3 | 0x6543000000000000);
code_r0x0001048ac320:
    auVar21._8_8_ = puVar5;
    auVar21._0_8_ = puVar3;
    return auVar21;
  case 7:
    puVar3 = (undefined *)0x10;
  case 0xa0:
    auVar19._0_8_ = (ulong)puVar3 | 0xd000000000000000;
    auVar19._8_8_ = 0x800000010f215890;
    return auVar19;
  case 8:
    auVar23._8_8_ = 0xe300000000000000;
    auVar23._0_8_ = 0x574353;
    return auVar23;
  case 9:
    puVar5 = (undefined *)0xee00736b61657754;
    puVar3 = (undefined *)0x6946;
  case 0x84:
    auVar16._0_8_ = (ulong)puVar3 & 0xffff00000000ffff | 0x7375696c65640000;
    auVar16._8_8_ = puVar5;
    return auVar16;
  case 10:
    pcVar4 = "tivityInfoProvider";
  case 0xa9:
    pcVar4 = pcVar4 + 0x890;
    break;
  case 0xb:
    pcVar4 = "bitmojiBadgeReload";
  case 0xbc:
    puVar5 = (undefined *)((ulong)pcVar4 | 0x8000000000000000);
    puVar3 = (undefined *)0xd000000000000017;
code_r0x0001048ac1f8:
    auVar13._8_8_ = puVar5;
    auVar13._0_8_ = puVar3;
    return auVar13;
  case 0xc:
    auVar15._8_8_ = 0xef736b616577546e;
    auVar15._0_8_ = 0x656b6f5470616e53;
    return auVar15;
  case 0xd:
    puVar5 = (undefined *)0x7544;
  case 0xaa:
    puVar5 = (undefined *)((ulong)puVar5 | 0x6c700000);
    goto code_r0x0001048ac2e8;
  case 0xe:
    auVar12._8_8_ = 0xef6e6f6974616369;
    auVar12._0_8_ = 0x6669746f4e564954;
    return auVar12;
  case 0xf:
  case 0xdc:
    puVar5 = (undefined *)0xec00000078656c70;
    puVar3 = (undefined *)0x6548;
  case 0x70:
    puVar3 = (undefined *)((ulong)puVar3 & 0xffff00000000ffff | 0x7544646f6d720000);
code_r0x0001048ac284:
    auVar17._8_8_ = puVar5;
    auVar17._0_8_ = puVar3;
    return auVar17;
  case 0x18:
    goto code_r0x0001048ac51c;
  case 0x19:
  case 0x2d:
  case 0x41:
  case 0x55:
  case 0x5d:
  case 0x65:
  case 0x6d:
  case 0x81:
    goto code_r0x0001048ac590;
  case 0x1a:
  case 0x2e:
  case 0x42:
  case 0x56:
  case 0x5e:
  case 0x66:
  case 0x6e:
  case 0x82:
  case 0x8a:
  case 0xba:
  case 0xce:
  case 0xe2:
  case 0xf6:
  case 0xfe:
    auVar27._8_8_ = 0xe600000000000000;
    auVar27._0_8_ = 0x6c65736e6954;
    return auVar27;
  case 0x1c:
    goto code_r0x0001048ac3f8;
  case 0x1d:
  case 0x45:
  case 0x85:
  case 0xbd:
    goto code_r0x0001048ac204;
  case 0x2c:
    puVar3 = (undefined *)0x6c65736e6ac4;
    puVar5 = &UNK_1107b1018;
    _swift_getWitnessTable(0x6c65736e6ac4,&UNK_1107b1018);
    puRam000000011309a698 = puVar3;
  case 0x60:
    auVar32._8_8_ = puVar5;
    auVar32._0_8_ = puVar3;
    return auVar32;
  case 0x30:
  case 0x98:
    goto code_r0x0001048ac578;
  case 0x31:
  case 0x61:
  case 0x80:
    goto code_r0x0001048ac45c;
  case 0x33:
  case 99:
  case 0x6b:
  case 0x73:
  case 0x97:
  case 0xd3:
    goto LAB_1048ac570;
  case 0x3c:
  case 0xb0:
    goto code_r0x0001048ac2e8;
  case 0x3f:
  case 0x7f:
  case 0x9b:
  case 0xdd:
  case 0xdf:
    goto code_r0x0001048ac1ac;
  case 0x44:
    uVar7 = (uint)bRam00006c65736e6954;
    puVar10 = (undefined *)(ulong)bRame600000000000000;
  case 0xa3:
    in_ZR = uVar7 == (uint)puVar10;
code_r0x0001048ac364:
    puVar3 = (undefined *)(ulong)in_ZR;
code_r0x0001048ac368:
    auVar24._8_8_ = 0xe600000000000000;
    auVar24._0_8_ = puVar3;
    return auVar24;
  case 0x54:
  case 0x5c:
  case 100:
  case 0x6c:
    goto code_r0x0001048ac48c;
  case 0x59:
    goto code_r0x0001048ac208;
  case 0x5a:
    goto code_r0x0001048ac4cc;
  case 0x68:
    goto code_r0x0001048ac1f8;
  case 0x69:
  case 0x71:
  case 0x95:
    goto code_r0x0001048ac460;
  case 0x7c:
    unaff_x19 = (undefined *)(ulong)*unaff_x20;
  case 0x3e:
  case 0x7e:
  case 0x9a:
  case 0xde:
    __ss6HasherV5_seedABSi_tcfC(&stack0x00000008);
code_r0x0001048ac3f8:
    puVar3 = unaff_x19;
    __ss6HasherV8_combineyySuF(puVar3);
    __ss6HasherV9_finalizeSiyF();
code_r0x0001048ac40c:
    auVar26._8_8_ = puVar5;
    auVar26._0_8_ = puVar3;
    return auVar26;
  case 0x88:
    goto code_r0x0001048ac498;
  case 0x89:
    goto LAB_1048ac58c;
  case 0x94:
    goto code_r0x0001048ac538;
  case 0xa1:
  case 0xa2:
  case 0xa7:
  case 0xae:
    goto code_r0x0001048ac368;
  case 0xa4:
    goto code_r0x0001048ac33c;
  case 0xa5:
    goto code_r0x0001048ac320;
  case 0xa6:
    register0x00000008 = (BADSPACEBASE *)auStack_70;
  case 0xaf:
    unaff_x19 = (undefined *)(ulong)*unaff_x20;
    __ss6HasherV5_seedABSi_tcfC((undefined1 *)((long)register0x00000008 + 8),0);
code_r0x0001048ac38c:
code_r0x0001048ac390:
    __ss6HasherV8_combineyySuF(unaff_x19);
    __ss6HasherV9_finalizeSiyF();
    auVar25._8_8_ = puVar5;
    auVar25._0_8_ = unaff_x19;
    return auVar25;
  case 0xa8:
  case 0xad:
    break;
  case 0xac:
    goto code_r0x0001048ac330;
  case 0xb2:
    goto code_r0x0001048ac364;
  case 0xb3:
    goto code_r0x0001048ac344;
  case 0xb8:
    goto code_r0x0001048ac49c;
  case 0xb9:
  case 0xcd:
  case 0xe1:
  case 0xf5:
  case 0xfd:
    goto code_r0x0001048ac594;
  case 0xcc:
  case 0xd1:
    pcVar4 = (char *)0x11309a000;
  case 0x32:
  case 0x62:
  case 0x6a:
  case 0x72:
  case 0x96:
  case 0xd2:
    auVar29._0_8_ = *(long *)(pcVar4 + 0x690);
    if (auVar29._0_8_ != 0) {
      auVar29._8_8_ = 0xe600000000000000;
      return auVar29;
    }
    puVar3 = &UNK_10dd41148;
code_r0x0001048ac48c:
    puVar5 = &UNK_1107b1018;
    _swift_getWitnessTable(puVar3,&UNK_1107b1018);
code_r0x0001048ac498:
    pcVar4 = (char *)0x11309a000;
code_r0x0001048ac49c:
    *(undefined **)(pcVar4 + 0x690) = puVar3;
    auVar30._8_8_ = puVar5;
    auVar30._0_8_ = puVar3;
    return auVar30;
  case 0xd0:
    goto LAB_1048ac568;
  case 0xe0:
    func_0x0001000285a8(0x6c65736e6954,&UNK_10dd3e030);
    puVar5 = (undefined *)0x11309a6a8;
  case 0x1e:
  case 0x46:
  case 0x86:
  case 0xbe:
  case 0xe6:
    _swift_initStaticObject();
    func_0x000100c8a830();
code_r0x0001048ac45c:
    auVar28._8_8_ = puVar5;
    auVar28._0_8_ = puVar3;
    return auVar28;
  case 0xe4:
    goto code_r0x0001048ac548;
  case 0xf4:
  case 0xfc:
    goto code_r0x0001048ac40c;
  case 0xf8:
    goto code_r0x0001048ac38c;
  case 0xf9:
    goto code_r0x0001048ac390;
  case 0xfa:
    unaff_x19 = puVar3;
  case 0x40:
    FUN_1048ac4d0();
    *(undefined **)(unaff_x19 + 8) = puVar3;
code_r0x0001048ac4cc:
    auVar31._8_8_ = puVar5;
    auVar31._0_8_ = puVar3;
    return auVar31;
  }
  pcVar8 = pcVar4 + -0x20;
  goto code_r0x0001048ac330;
code_r0x0001048ac2e8:
  uVar6 = (ulong)puVar5 & 0xffffffffffff | 0xee00786500000000;
code_r0x0001048ac2f0:
  auVar20._8_8_ = uVar6;
  auVar20._0_8_ = 0x7974697275636553;
  return auVar20;
code_r0x0001048ac204:
  puVar5 = (undefined *)((ulong)puVar5 | 0x644900000000);
code_r0x0001048ac208:
  auVar14._8_8_ = (ulong)puVar5 & 0xffffffffffff | 0xee00000000000000;
  auVar14._0_8_ = 0x63634164756f6c43;
  return auVar14;
code_r0x0001048ac330:
  pcVar4 = (char *)0xd;
code_r0x0001048ac338:
  puVar5 = (undefined *)((ulong)pcVar8 | 0x8000000000000000);
  puVar10 = (undefined *)0x10;
code_r0x0001048ac33c:
  puVar3 = (undefined *)((ulong)puVar10 | 0xd000000000000000 | (ulong)pcVar4);
code_r0x0001048ac344:
  auVar22._8_8_ = puVar5;
  auVar22._0_8_ = puVar3;
  return auVar22;
code_r0x0001048ac51c:
  puVar10 = (undefined *)0x2;
  uVar9 = 0;
code_r0x0001048ac538:
  bVar2 = uVar9 < 0xff;
  uVar9 = (uint)puVar10;
  if (bVar2) {
    uVar9 = 1;
  }
  if (uVar9 == 4) {
LAB_1048ac568:
    uVar7 = uRam00006c65736e6955;
joined_r0x0001048ac56c:
    if (uVar7 != 0) {
LAB_1048ac570:
      uVar9 = (uint)bRam00006c65736e6954 | uVar7 << 8;
code_r0x0001048ac578:
      auVar33._4_4_ = 0;
      auVar33._0_4_ = uVar9 - 0xf;
      auVar33._8_8_ = 0xe600000000000000;
      return auVar33;
    }
  }
  else {
code_r0x0001048ac548:
    if (uVar9 != 2) {
      uVar7 = uRam00006c65736e6955 & 0xff;
      goto joined_r0x0001048ac56c;
    }
    uVar7 = uRam00006c65736e6955 & 0xffff;
    if ((short)uRam00006c65736e6955 != 0) goto LAB_1048ac570;
  }
LAB_1048ac58c:
  uVar9 = (uint)bRam00006c65736e6954;
code_r0x0001048ac590:
  in_CY = 0xf < uVar9;
  uVar9 = uVar9 - 0x10;
code_r0x0001048ac594:
  if (!(bool)in_CY) {
    uVar9 = 0xffffffff;
  }
  auVar34._4_4_ = 0;
  auVar34._0_4_ = uVar9 + 1;
  auVar34._8_8_ = 0xe600000000000000;
  return auVar34;
}



/* Entry: 1048ac46c; end: 1048ac4ab;  */

void FUN_1048ac46c(void)

{
  undefined *puVar1;
  
  if (puRam000000011309a690 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd41148;
  _swift_getWitnessTable(&UNK_10dd41148,&UNK_1107b1018);
  puRam000000011309a690 = puVar1;
  return;
}



/* Entry: 1048ac4ac; end: 1048ac4cf;  */

void FUN_1048ac4ac(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1048ac4d0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1048ac4d0; end: 1048ac50f;  */

void FUN_1048ac4d0(void)

{
  undefined *puVar1;
  
  if (puRam000000011309a698 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd41170;
  _swift_getWitnessTable(&UNK_10dd41170,&UNK_1107b1018);
  puRam000000011309a698 = puVar1;
  return;
}



/* Entry: 1048ac510; end: 1048ac673;  */

int FUN_1048ac510(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf0 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0xf) {
      iVar2 = 4;
    }
    if (param_2 + 0xf >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1048ac58c;
        goto LAB_1048ac570;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1048ac570:
      return ((uint)*param_1 | uVar1 << 8) - 0xf;
    }
  }
LAB_1048ac58c:
  iVar2 = *param_1 - 0x10;
  if (*param_1 < 0x10) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1048ac674; end: 1048ac7f3;  */

undefined1  [16] FUN_1048ac674(char param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  if (param_1 == '\x03') {
    auVar7._8_8_ = 0x800000010f2157f0;
    auVar7._0_8_ = 0xd000000000000018;
    return auVar7;
  }
  if (param_1 == '\x04') {
    auVar6._8_8_ = 0xe800000000000000;
    auVar6._0_8_ = 0x73676e6974746553;
    return auVar6;
  }
  uVar5 = 0xd000000000000012;
  lVar1 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  _swift_allocObject();
  *(undefined8 *)(lVar1 + 0x18) = 4;
  *(undefined8 *)(lVar1 + 0x10) = 2;
  *(undefined8 *)(lVar1 + 0x20) = 0xd000000000000013;
  *(undefined8 *)(lVar1 + 0x28) = 0x800000010f215810;
  if (param_1 == '\0') {
    uVar4 = 0xeb00000000656764;
    uVar5 = 0x614264616f6c6572;
  }
  else if (param_1 == '\x01') {
    uVar4 = 0xe90000000000006e;
    uVar5 = 0x6f63496863746566;
  }
  else {
    uVar4 = 0x800000010f215830;
  }
  *(undefined8 *)(lVar1 + 0x30) = uVar5;
  *(undefined8 *)(lVar1 + 0x38) = uVar4;
  uVar5 = 0x112d38270;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  uVar4 = uVar5;
  func_0x00010011d734();
  uVar2 = 0x23;
  uVar3 = 0xe100000000000000;
  __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x23,0xe100000000000000,uVar5,uVar4);
  _swift_release(lVar1);
  auVar8._8_8_ = uVar3;
  auVar8._0_8_ = uVar2;
  return auVar8;
}



/* Entry: 1048ac7f4; end: 1048ac807;  */

bool FUN_1048ac7f4(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1048ac808; end: 1048ac833;  */

void FUN_1048ac808(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1048accf0(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 1048ac834; end: 1048ac8a3;  */

void FUN_1048ac834(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *unaff_x20;
  
  uVar4 = 0x6f63496863746566;
  uVar1 = 0xe90000000000006e;
  if (*unaff_x20 != '\x01') {
    uVar4 = 0xd000000000000012;
    uVar1 = 0x800000010f215830;
  }
  uVar2 = 0xeb00000000656764;
  uVar3 = 0x614264616f6c6572;
  if (*unaff_x20 != '\0') {
    uVar2 = uVar1;
    uVar3 = uVar4;
  }
  *param_1 = uVar3;
  param_1[1] = uVar2;
  return;
}



/* Entry: 1048ac8a4; end: 1048acc3f;  */

void FUN_1048ac8a4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar5 = 0x6f63496863746566;
  uVar1 = 0xe90000000000006e;
  if (cVar3 != '\x01') {
    uVar5 = 0xd000000000000012;
    uVar1 = 0x800000010f215830;
  }
  uVar2 = 0xeb00000000656764;
  uVar4 = 0x614264616f6c6572;
  if (cVar3 != '\0') {
    uVar2 = uVar1;
    uVar4 = uVar5;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar4,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048acc40; end: 1048acc8b;  */

undefined8 FUN_1048acc40(void)

{
  undefined8 uVar1;
  char *unaff_x20;
  
  if (*unaff_x20 == '\x04') {
    uVar1 = 0x112e04798;
    func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
    _swift_initStaticObject();
    func_0x000100c8a830();
    return uVar1;
  }
  return 0;
}



/* Entry: 1048acc8c; end: 1048acca3;  */

undefined1  [16] FUN_1048acc8c(void)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *unaff_x20;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  cVar1 = *unaff_x20;
  if (cVar1 == '\x03') {
    auVar8._8_8_ = 0x800000010f2157f0;
    auVar8._0_8_ = 0xd000000000000018;
    return auVar8;
  }
  if (cVar1 == '\x04') {
    auVar7._8_8_ = 0xe800000000000000;
    auVar7._0_8_ = 0x73676e6974746553;
    return auVar7;
  }
  uVar6 = 0xd000000000000012;
  lVar2 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  _swift_allocObject();
  *(undefined8 *)(lVar2 + 0x18) = 4;
  *(undefined8 *)(lVar2 + 0x10) = 2;
  *(undefined8 *)(lVar2 + 0x20) = 0xd000000000000013;
  *(undefined8 *)(lVar2 + 0x28) = 0x800000010f215810;
  if (cVar1 == '\0') {
    uVar5 = 0xeb00000000656764;
    uVar6 = 0x614264616f6c6572;
  }
  else if (cVar1 == '\x01') {
    uVar5 = 0xe90000000000006e;
    uVar6 = 0x6f63496863746566;
  }
  else {
    uVar5 = 0x800000010f215830;
  }
  *(undefined8 *)(lVar2 + 0x30) = uVar6;
  *(undefined8 *)(lVar2 + 0x38) = uVar5;
  uVar6 = 0x112d38270;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  uVar5 = uVar6;
  func_0x00010011d734();
  uVar3 = 0x23;
  uVar4 = 0xe100000000000000;
  __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x23,0xe100000000000000,uVar6,uVar5);
  _swift_release(lVar2);
  auVar9._8_8_ = uVar4;
  auVar9._0_8_ = uVar3;
  return auVar9;
}



/* Entry: 1048acca4; end: 1048acce3;  */

void FUN_1048acca4(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  func_0x0001048aca8c(auStack_68,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048acce4; end: 1048accef;  */

bool FUN_1048acce4(byte *param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *param_1;
  uVar2 = (uint)*param_2;
  if (bVar1 == 3) {
    if (uVar2 == 3) {
      return true;
    }
  }
  else if (bVar1 == 4) {
    if (uVar2 == 4) {
      return true;
    }
  }
  else if (1 < uVar2 - 3) {
    return bVar1 == uVar2;
  }
  return false;
}



/* Entry: 1048accf0; end: 1048acd53;  */

ulong FUN_1048accf0(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  _swift_initStaticObject();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_bridgeObjectRelease(param_2);
  if (2 < uVar1) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 1048acd54; end: 1048acdaf;  */

bool FUN_1048acd54(uint param_1,uint param_2)

{
  param_1 = param_1 & 0xff;
  param_2 = param_2 & 0xff;
  if (param_1 == 3) {
    if (param_2 == 3) {
      return true;
    }
  }
  else if (param_1 == 4) {
    if (param_2 == 4) {
      return true;
    }
  }
  else if (1 < param_2 - 3) {
    return param_1 == param_2;
  }
  return false;
}



/* Entry: 1048acdb0; end: 1048acdef;  */

void FUN_1048acdb0(void)

{
  undefined *puVar1;
  
  if (puRam000000011309a6d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd411e8;
  _swift_getWitnessTable(&UNK_10dd411e8,&UNK_1107b1108);
  puRam000000011309a6d0 = puVar1;
  return;
}



/* Entry: 1048acdf0; end: 1048ace13;  */

void FUN_1048acdf0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1048ace14();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1048ace14; end: 1048ace53;  */

void FUN_1048ace14(void)

{
  undefined *puVar1;
  
  if (puRam000000011309a6d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd412a4;
  _swift_getWitnessTable(&UNK_10dd412a4,&UNK_1107b1198);
  puRam000000011309a6d8 = puVar1;
  return;
}



/* Entry: 1048ace54; end: 1048ace57;  */

void FUN_1048ace54(void)

{
  undefined *puVar1;
  
  if (puRam000000011309a6e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd412e4;
  _swift_getWitnessTable(&UNK_10dd412e4,&UNK_1107b1198);
  puRam000000011309a6e0 = puVar1;
  return;
}



/* Entry: 1048ace58; end: 1048ace97;  */

void FUN_1048ace58(void)

{
  undefined *puVar1;
  
  if (puRam000000011309a6e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd412e4;
  _swift_getWitnessTable(&UNK_10dd412e4,&UNK_1107b1198);
  puRam000000011309a6e0 = puVar1;
  return;
}



/* Entry: 1048ace98; end: 1048ad187;  */

int FUN_1048ace98(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1048acf14;
        goto LAB_1048acef8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1048acef8:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_1048acf14:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1048ad188; end: 1048ad34f;  */

void FUN_1048ad188(undefined8 param_1,byte param_2)

{
  ulong uVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  if (param_2 < 4) {
    uVar5 = 0x800000010f215480;
    uVar4 = 0xd000000000000022;
    if (param_2 != 2) {
      uVar5 = 0xe700000000000000;
      uVar4 = 0x64616f6c657270;
    }
    pcVar2 = "featureSyncJobProcessor";
    uVar3 = 0xd000000000000015;
    if (param_2 != 0) {
      pcVar2 = "esSyncJobProcessor";
      uVar3 = 0xd000000000000017;
    }
    if (param_2 < 2) {
      uVar4 = uVar3;
      uVar5 = (ulong)pcVar2 | 0x8000000000000000;
    }
  }
  else {
    uVar5 = 0x800000010f215440;
    uVar4 = 0xd000000000000010;
    if (param_2 != 6) {
      uVar5 = 0xef72656469766f72;
      uVar4 = 0x507463656a627573;
    }
    uVar1 = 0xee0073746e656970;
    uVar3 = 0x696365526b6e6172;
    if (param_2 != 4) {
      uVar1 = 0x800000010f215460;
      uVar3 = 0xd000000000000011;
    }
    if (param_2 < 6) {
      uVar4 = uVar3;
      uVar5 = uVar1;
    }
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar4,uVar5);
  _swift_bridgeObjectRelease(uVar5);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048ad350; end: 1048ad587;  */

undefined1  [16] FUN_1048ad350(byte param_1)

{
  ulong uVar1;
  char *pcVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  if (param_1 < 10) {
    if (param_1 == 8) {
      auVar9._8_8_ = 0xed000064616f6c65;
      auVar9._0_8_ = 0x72506f54646e6553;
      return auVar9;
    }
    if (param_1 == 9) {
      auVar7._8_8_ = 0x800000010f217730;
      auVar7._0_8_ = 0xd000000000000022;
      return auVar7;
    }
  }
  else {
    if (param_1 == 10) {
      auVar10._8_8_ = 0x800000010f217710;
      auVar10._0_8_ = 0xd00000000000001c;
      return auVar10;
    }
    if (param_1 == 0xb) {
      auVar8._8_8_ = 0x800000010f2176f0;
      auVar8._0_8_ = 0xd000000000000010;
      return auVar8;
    }
  }
  __ss11_StringGutsV4growyySiF(0x17);
  _swift_bridgeObjectRelease(0xe000000000000000);
  if (param_1 < 4) {
    uVar5 = 0x800000010f215480;
    uVar4 = 0xd000000000000022;
    if (param_1 != 2) {
      uVar5 = 0xe700000000000000;
      uVar4 = 0x64616f6c657270;
    }
    pcVar2 = "featureSyncJobProcessor";
    uVar6 = 0xd000000000000015;
    if (param_1 != 0) {
      pcVar2 = "esSyncJobProcessor";
      uVar6 = 0xd000000000000017;
    }
    if (param_1 < 2) {
      uVar4 = uVar6;
      uVar5 = (ulong)pcVar2 | 0x8000000000000000;
    }
  }
  else {
    uVar5 = 0x800000010f215440;
    uVar4 = 0xd000000000000010;
    if (param_1 != 6) {
      uVar5 = 0xef72656469766f72;
      uVar4 = 0x507463656a627573;
    }
    uVar6 = 0x696365526b6e6172;
    uVar1 = 0xee0073746e656970;
    if (param_1 != 4) {
      uVar6 = 0xd000000000000011;
      uVar1 = 0x800000010f215460;
    }
    if (param_1 < 6) {
      uVar4 = uVar6;
      uVar5 = uVar1;
    }
  }
  __sSS6appendyySSF(uVar4,uVar5);
  _swift_bridgeObjectRelease(uVar5);
  auVar3._8_8_ = 0x800000010f217760;
  auVar3._0_8_ = 0xd000000000000015;
  return auVar3;
}



/* Entry: 1048ad588; end: 1048ad59b;  */

bool FUN_1048ad588(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1048ad59c; end: 1048ad5c7;  */

void FUN_1048ad59c(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1048ad968(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 1048ad5c8; end: 1048ad70f;  */

void FUN_1048ad5c8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  byte *unaff_x20;
  
  bVar3 = *unaff_x20;
  if (3 < bVar3) {
    uVar2 = 0x800000010f215440;
    uVar5 = 0xd000000000000010;
    if (bVar3 != 6) {
      uVar2 = 0xef72656469766f72;
      uVar5 = 0x507463656a627573;
    }
    uVar1 = 0xee0073746e656970;
    uVar6 = 0x696365526b6e6172;
    if (bVar3 != 4) {
      uVar1 = 0x800000010f215460;
      uVar6 = 0xd000000000000011;
    }
    if (bVar3 < 6) {
      uVar2 = uVar1;
      uVar5 = uVar6;
    }
    *param_1 = uVar5;
    param_1[1] = uVar2;
    return;
  }
  uVar7 = 0x800000010f215480;
  uVar2 = 0xd000000000000022;
  if (bVar3 != 2) {
    uVar7 = 0xe700000000000000;
    uVar2 = 0x64616f6c657270;
  }
  pcVar4 = "featureSyncJobProcessor";
  uVar5 = 0xd000000000000015;
  if (bVar3 != 0) {
    pcVar4 = "esSyncJobProcessor";
    uVar5 = 0xd000000000000017;
  }
  if (bVar3 < 2) {
    uVar7 = (ulong)pcVar4 | 0x8000000000000000;
    uVar2 = uVar5;
  }
  *param_1 = uVar2;
  param_1[1] = uVar7;
  return;
}



/* Entry: 1048ad710; end: 1048ad8bf;  */

void FUN_1048ad710(undefined8 param_1,byte param_2)

{
  ulong uVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  if (param_2 < 10) {
    if (param_2 == 8) {
      uVar4 = 0;
    }
    else {
      if (param_2 != 9) {
LAB_1048ad75c:
        __ss6HasherV8_combineyySuF(1);
        if (param_2 < 4) {
          uVar5 = 0x800000010f215480;
          uVar4 = 0xd000000000000022;
          if (param_2 != 2) {
            uVar5 = 0xe700000000000000;
            uVar4 = 0x64616f6c657270;
          }
          pcVar2 = "featureSyncJobProcessor";
          uVar3 = 0xd000000000000015;
          if (param_2 != 0) {
            pcVar2 = "esSyncJobProcessor";
            uVar3 = 0xd000000000000017;
          }
          if (param_2 < 2) {
            uVar4 = uVar3;
            uVar5 = (ulong)pcVar2 | 0x8000000000000000;
          }
        }
        else {
          uVar5 = 0x800000010f215440;
          uVar4 = 0xd000000000000010;
          if (param_2 != 6) {
            uVar5 = 0xef72656469766f72;
            uVar4 = 0x507463656a627573;
          }
          uVar1 = 0xee0073746e656970;
          uVar3 = 0x696365526b6e6172;
          if (param_2 != 4) {
            uVar1 = 0x800000010f215460;
            uVar3 = 0xd000000000000011;
          }
          if (param_2 < 6) {
            uVar4 = uVar3;
            uVar5 = uVar1;
          }
        }
        __sSS4hash4intoys6HasherVz_tF(param_1,uVar4,uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar5);
        return;
      }
      uVar4 = 2;
    }
  }
  else if (param_2 == 10) {
    uVar4 = 3;
  }
  else {
    if (param_2 != 0xb) goto LAB_1048ad75c;
    uVar4 = 4;
  }
  __ss6HasherV8_combineyySuF(uVar4);
  return;
}



/* Entry: 1048ad8c0; end: 1048ad8cf;  */

undefined * FUN_1048ad8c0(void)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined1 auStack_a8 [72];
  
  lVar3 = 0x112e04798;
  func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
  _swift_initStaticObject();
  puVar10 = *(undefined **)(lVar3 + 0x10);
  puVar2 = PTR___swiftEmptySetSingleton_11034f1d8;
  if (puVar10 != (undefined *)0x0) {
    func_0x0001000285a8(0x112d7b088,&UNK_10d9d8120);
    puVar2 = puVar10;
    func_0x000107c602e8();
    puVar12 = (undefined *)0x0;
    do {
      uVar11 = *(ulong *)(lVar3 + 0x20 + (long)puVar12 * 8);
      func_0x000107c6068c(auStack_a8,*(undefined8 *)(puVar2 + 0x28));
      uVar4 = uVar11;
      func_0x000107c60690();
      func_0x000107c606a8();
      uVar9 = -1L << ((ulong)(byte)puVar2[0x20] & 0x3f);
      uVar4 = uVar4 & (uVar9 ^ 0xffffffffffffffff);
      uVar6 = uVar4 >> 6;
      uVar7 = *(ulong *)(puVar2 + uVar6 * 8 + 0x38);
      uVar8 = 1L << (uVar4 & 0x3f);
      lVar5 = *(long *)(puVar2 + 0x30);
      if ((uVar8 & uVar7) != 0) {
        do {
          if ((int)*(undefined8 *)(lVar5 + uVar4 * 8) == (int)uVar11) goto code_r0x000100c8a8b4;
          uVar4 = uVar4 + 1 & ~uVar9;
          uVar6 = uVar4 >> 6;
          uVar7 = *(ulong *)(puVar2 + uVar6 * 8 + 0x38);
          uVar8 = 1L << (uVar4 & 0x3f);
        } while ((uVar8 & uVar7) != 0);
      }
      *(ulong *)(puVar2 + uVar6 * 8 + 0x38) = uVar8 | uVar7;
      *(ulong *)(lVar5 + uVar4 * 8) = uVar11;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100c8a968);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
code_r0x000100c8a8b4:
      puVar12 = puVar12 + 1;
    } while (puVar12 != puVar10);
  }
  return puVar2;
}



/* Entry: 1048ad8d0; end: 1048ad913;  */

void FUN_1048ad8d0(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_1048ad710(auStack_68,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048ad914; end: 1048ad91b;  */

void FUN_1048ad914(undefined8 param_1)

{
  ulong uVar1;
  byte bVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  byte *unaff_x20;
  
  bVar2 = *unaff_x20;
  if (bVar2 < 10) {
    if (bVar2 == 8) {
      uVar5 = 0;
    }
    else {
      if (bVar2 != 9) {
LAB_1048ad75c:
        __ss6HasherV8_combineyySuF(1);
        if (bVar2 < 4) {
          uVar6 = 0x800000010f215480;
          uVar5 = 0xd000000000000022;
          if (bVar2 != 2) {
            uVar6 = 0xe700000000000000;
            uVar5 = 0x64616f6c657270;
          }
          pcVar3 = "featureSyncJobProcessor";
          uVar4 = 0xd000000000000015;
          if (bVar2 != 0) {
            pcVar3 = "esSyncJobProcessor";
            uVar4 = 0xd000000000000017;
          }
          if (bVar2 < 2) {
            uVar5 = uVar4;
            uVar6 = (ulong)pcVar3 | 0x8000000000000000;
          }
        }
        else {
          uVar6 = 0x800000010f215440;
          uVar5 = 0xd000000000000010;
          if (bVar2 != 6) {
            uVar6 = 0xef72656469766f72;
            uVar5 = 0x507463656a627573;
          }
          uVar1 = 0xee0073746e656970;
          uVar4 = 0x696365526b6e6172;
          if (bVar2 != 4) {
            uVar1 = 0x800000010f215460;
            uVar4 = 0xd000000000000011;
          }
          if (bVar2 < 6) {
            uVar5 = uVar4;
            uVar6 = uVar1;
          }
        }
        __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar6);
        return;
      }
      uVar5 = 2;
    }
  }
  else if (bVar2 == 10) {
    uVar5 = 3;
  }
  else {
    if (bVar2 != 0xb) goto LAB_1048ad75c;
    uVar5 = 4;
  }
  __ss6HasherV8_combineyySuF(uVar5);
  return;
}



/* Entry: 1048ad91c; end: 1048ad95b;  */

void FUN_1048ad91c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_1048ad710(auStack_68,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048ad95c; end: 1048ad967;  */

bool FUN_1048ad95c(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = *param_2;
  bVar2 = *param_1;
  if (bVar2 < 10) {
    if (bVar2 == 8) {
      if (bVar1 != 8) {
        return false;
      }
      return true;
    }
    if (bVar2 == 9) {
      if (bVar1 != 9) {
        return false;
      }
      return true;
    }
  }
  else {
    if (bVar2 == 10) {
      if (bVar1 != 10) {
        return false;
      }
      return true;
    }
    if (bVar2 == 0xb) {
      if (bVar1 != 0xb) {
        return false;
      }
      return true;
    }
  }
  if ((bVar1 & 0xfc) == 8) {
    return false;
  }
  return bVar2 == bVar1;
}



/* Entry: 1048ad968; end: 1048ad9cb;  */

ulong FUN_1048ad968(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  _swift_initStaticObject();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_bridgeObjectRelease(param_2);
  if (7 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}



/* Entry: 1048ad9cc; end: 1048ada5f;  */

bool FUN_1048ad9cc(byte param_1,byte param_2)

{
  if (param_1 < 10) {
    if (param_1 == 8) {
      if (param_2 != 8) {
        return false;
      }
      return true;
    }
    if (param_1 == 9) {
      if (param_2 != 9) {
        return false;
      }
      return true;
    }
  }
  else {
    if (param_1 == 10) {
      if (param_2 != 10) {
        return false;
      }
      return true;
    }
    if (param_1 == 0xb) {
      if (param_2 != 0xb) {
        return false;
      }
      return true;
    }
  }
  if ((param_2 & 0xfc) == 8) {
    return false;
  }
  return param_1 == param_2;
}



/* Entry: 1048ada60; end: 1048ada9f;  */

void FUN_1048ada60(void)

{
  undefined *puVar1;
  
  if (puRam000000011309a790 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd41358;
  _swift_getWitnessTable(&UNK_10dd41358,&UNK_1107b12a8);
  puRam000000011309a790 = puVar1;
  return;
}



/* Entry: 1048adaa0; end: 1048adac3;  */

void FUN_1048adaa0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1048adac4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1048adac4; end: 1048adb03;  */

void FUN_1048adac4(void)

{
  undefined *puVar1;
  
  if (puRam000000011309a798 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd41414;
  _swift_getWitnessTable(&UNK_10dd41414,&UNK_1107b1338);
  puRam000000011309a798 = puVar1;
  return;
}



/* Entry: 1048adb04; end: 1048adb07;  */

void FUN_1048adb04(void)

{
  undefined *puVar1;
  
  if (puRam000000011309a7a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd41454;
  _swift_getWitnessTable(&UNK_10dd41454,&UNK_1107b1338);
  puRam000000011309a7a0 = puVar1;
  return;
}



/* Entry: 1048adb08; end: 1048adb47;  */

void FUN_1048adb08(void)

{
  undefined *puVar1;
  
  if (puRam000000011309a7a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd41454;
  _swift_getWitnessTable(&UNK_10dd41454,&UNK_1107b1338);
  puRam000000011309a7a0 = puVar1;
  return;
}



/* Entry: 1048adb48; end: 1048adea3;  */

int FUN_1048adb48(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf8 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 7) {
      iVar2 = 4;
    }
    if (param_2 + 7 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1048adbc4;
        goto LAB_1048adba8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1048adba8:
      return ((uint)*param_1 | uVar1 << 8) - 7;
    }
  }
LAB_1048adbc4:
  iVar2 = *param_1 - 8;
  if (*param_1 < 8) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1048adea4; end: 1048adf4f;  */

void FUN_1048adea4(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048adf50; end: 1048adf53;  */

void FUN_1048adf50(void)

{
  undefined *puVar1;
  
  if (puRam000000011309a890 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd414d0;
  _swift_getWitnessTable(&UNK_10dd414d0,&UNK_1107b1468);
  puRam000000011309a890 = puVar1;
  return;
}



/* Entry: 1048adf54; end: 1048adf93;  */

void FUN_1048adf54(void)

{
  undefined *puVar1;
  
  if (puRam000000011309a890 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd414d0;
  _swift_getWitnessTable(&UNK_10dd414d0,&UNK_1107b1468);
  puRam000000011309a890 = puVar1;
  return;
}



/* Entry: 1048adf94; end: 1048adfa3;  */

undefined8 FUN_1048adf94(void)

{
  return 0;
}



/* Entry: 1048adfa4; end: 1048adfc7;  */

void FUN_1048adfa4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1048adfc8();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1048adfc8; end: 1048ae007;  */

void FUN_1048adfc8(void)

{
  undefined *puVar1;
  
  if (puRam000000011309a898 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd414f8;
  _swift_getWitnessTable(&UNK_10dd414f8,&UNK_1107b1468);
  puRam000000011309a898 = puVar1;
  return;
}



/* Entry: 1048ae008; end: 1048ae16b;  */

int FUN_1048ae008(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1048ae084;
        goto LAB_1048ae068;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1048ae068:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_1048ae084:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1048ae16c; end: 1048ae22f;  */

void FUN_1048ae16c(long param_1,uint param_2)

{
  long lVar1;
  
  if ((param_2 & 0xff00) == 0x100) {
    if (param_1 == 2 && (param_2 & 0xff) == 0) {
      func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
      _swift_initStaticObject();
      func_0x000100c8a830();
    }
  }
  else if ((param_2 & 0xff) != 1) {
    lVar1 = 0x112e04798;
    func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
    _swift_initStackObject();
    *(undefined8 *)(lVar1 + 0x18) = 2;
    *(undefined8 *)(lVar1 + 0x10) = 1;
    *(long *)(lVar1 + 0x20) = param_1;
    func_0x000100c8a830();
    _swift_setDeallocating(lVar1);
  }
  return;
}



/* Entry: 1048ae230; end: 1048ae3c3;  */

undefined1  [16] FUN_1048ae230(ulong param_1,ulong param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  if (((uint)param_2 & 0xff00) != 0x100) {
    bVar1 = ((uint)param_2 & 0xff) == 1;
    uVar3 = 0x74694b65726f7453;
    if (bVar1) {
      uVar3 = 0xd00000000000001e;
    }
    uVar4 = 0xe800000000000000;
    if (bVar1) {
      uVar4 = 0x800000010f216040;
    }
    auVar7._8_8_ = uVar4;
    auVar7._0_8_ = uVar3;
    return auVar7;
  }
  uVar2 = (long)(char)param_2 + (ulong)(param_1 >= 3);
  if ((long)-uVar2 < 0 == SCARRY8(~uVar2,(ulong)(param_1 < 3))) {
    uVar3 = 0x800000010f216020;
    uVar4 = 0xd000000000000014;
    if (param_1 != 1 || (param_2 & 0xff) != 0) {
      uVar3 = 0xeb00000000736563;
      uVar4 = 0x6976726553746550;
    }
    uVar5 = 0xee0072657061706c;
    uVar6 = 0x6c615778696d6552;
    if (param_1 != 0 || (param_2 & 0xff) != 0) {
      uVar5 = uVar3;
      uVar6 = uVar4;
    }
    auVar8._8_8_ = uVar5;
    auVar8._0_8_ = uVar6;
    return auVar8;
  }
  uVar2 = (long)(char)param_2 + (ulong)(param_1 >= 5);
  if ((long)-uVar2 < 0 == SCARRY8(~uVar2,(ulong)(param_1 < 5))) {
    uVar2 = param_1 ^ 3 | param_2 & 0xff;
    uVar3 = 0xef676e6f53657461;
    uVar4 = 0x65724349416e6547;
    uVar5 = 0xe700000000000000;
    uVar6 = 0x73746e6f464941;
  }
  else {
    uVar2 = param_1 ^ 5 | param_2 & 0xff;
    uVar3 = 0xed00006970416574;
    uVar4 = 0x6f6d6552736e654c;
    uVar6 = 0xd000000000000012;
    uVar5 = 0x800000010f216000;
  }
  if (uVar2 != 0) {
    uVar3 = uVar5;
    uVar4 = uVar6;
  }
  auVar9._8_8_ = uVar3;
  auVar9._0_8_ = uVar4;
  return auVar9;
}



/* Entry: 1048ae3c4; end: 1048ae4cf;  */

void FUN_1048ae3c4(void)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar2 = *unaff_x20;
  cVar1 = *(char *)(unaff_x20 + 1);
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  if (cVar1 == '\x01') {
    uVar2 = 1;
  }
  else {
    __ss6HasherV8_combineyySuF(0);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048ae4d0; end: 1048ae50f;  */

bool FUN_1048ae4d0(int *param_1,int *param_2)

{
  bool bVar1;
  
  bVar1 = (char)param_2[2] == '\x01' && (char)param_1[2] == '\x01';
  if ((char)param_1[2] != '\x01' && (char)param_2[2] != '\x01') {
    bVar1 = *param_1 == *param_2;
  }
  return bVar1;
}



/* Entry: 1048ae510; end: 1048ae577;  */

void FUN_1048ae510(undefined8 param_1,long param_2,uint param_3)

{
  if ((param_3 & 0xff00) == 0x100) {
    param_2 = param_2 + 1;
  }
  else {
    __ss6HasherV8_combineyySuF(0);
    if ((param_3 & 0xff) == 1) {
      param_2 = 1;
    }
    else {
      __ss6HasherV8_combineyySuF(0);
    }
  }
  __ss6HasherV8_combineyySuF(param_2);
  return;
}



/* Entry: 1048ae578; end: 1048ae58f;  */

void FUN_1048ae578(void)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  
  lVar3 = *unaff_x20;
  uVar1 = *(ushort *)(unaff_x20 + 1);
  if ((uVar1 & 0xff00) == 0x100) {
    if (lVar3 == 2 && (uVar1 & 0xff) == 0) {
      func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
      _swift_initStaticObject();
      func_0x000100c8a830();
    }
  }
  else if ((uVar1 & 0xff) != 1) {
    lVar2 = 0x112e04798;
    func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
    _swift_initStackObject();
    *(undefined8 *)(lVar2 + 0x18) = 2;
    *(undefined8 *)(lVar2 + 0x10) = 1;
    *(long *)(lVar2 + 0x20) = lVar3;
    func_0x000100c8a830();
    _swift_setDeallocating(lVar2);
  }
  return;
}



/* Entry: 1048ae590; end: 1048ae5db;  */

void FUN_1048ae590(void)

{
  undefined2 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar2 = *unaff_x20;
  uVar1 = *(undefined2 *)(unaff_x20 + 1);
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_1048ae510(auStack_68,uVar2,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048ae5dc; end: 1048ae5e7;  */

void FUN_1048ae5dc(void)

{
  ushort uVar1;
  long lVar2;
  long *unaff_x20;
  
  lVar2 = *unaff_x20;
  uVar1 = *(ushort *)(unaff_x20 + 1);
  if ((uVar1 & 0xff00) == 0x100) {
    lVar2 = lVar2 + 1;
  }
  else {
    __ss6HasherV8_combineyySuF(0);
    if ((uVar1 & 0xff) == 1) {
      lVar2 = 1;
    }
    else {
      __ss6HasherV8_combineyySuF(0);
    }
  }
  __ss6HasherV8_combineyySuF(lVar2);
  return;
}



/* Entry: 1048ae5e8; end: 1048ae62f;  */

void FUN_1048ae5e8(void)

{
  undefined2 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar2 = *unaff_x20;
  uVar1 = *(undefined2 *)(unaff_x20 + 1);
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_1048ae510(auStack_68,uVar2,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048ae630; end: 1048ae7df;  */

undefined8 FUN_1048ae630(ulong *param_1,ulong *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ulong uVar3;
  ushort uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = *param_1;
  uVar5 = *param_2;
  uVar1 = (ushort)param_1[1];
  uVar2 = (ushort)param_2[1];
  uVar4 = uVar2 >> 8;
  if ((uVar1 & 0xff00) == 0x100) {
    uVar3 = (long)(char)uVar1 + (ulong)(uVar6 >= 3);
    if ((long)-uVar3 < 0 == SCARRY8(~uVar3,(ulong)(uVar6 < 3))) {
      if (uVar6 == 0 && (uVar1 & 0xff) == 0) {
        if ((uVar4 == 1) && (uVar5 == 0 && (uVar2 & 0xff) == 0)) {
          return 1;
        }
      }
      else if (uVar6 == 1 && (uVar1 & 0xff) == 0) {
        if ((uVar4 == 1) && (uVar5 == 1 && (uVar2 & 0xff) == 0)) {
          return 1;
        }
      }
      else if ((uVar4 == 1) && (uVar5 == 2 && (uVar2 & 0xff) == 0)) {
        return 1;
      }
    }
    else {
      uVar3 = (long)(char)uVar1 + (ulong)(uVar6 >= 5);
      if ((long)-uVar3 < 0 == SCARRY8(~uVar3,(ulong)(uVar6 < 5))) {
        if (uVar6 == 3 && (uVar1 & 0xff) == 0) {
          if ((uVar4 == 1) && (uVar5 == 3 && (uVar2 & 0xff) == 0)) {
            return 1;
          }
        }
        else if ((uVar4 == 1) && (uVar5 == 4 && (uVar2 & 0xff) == 0)) {
          return 1;
        }
      }
      else if (uVar6 == 5 && (uVar1 & 0xff) == 0) {
        if ((uVar4 == 1) && (uVar5 == 5 && (uVar2 & 0xff) == 0)) {
          return 1;
        }
      }
      else if ((uVar4 == 1) &&
              (!CARRY8(~(((ulong)uVar2 & 0xff) + (ulong)(uVar5 >= 6)),(ulong)(uVar5 < 6)))) {
        return 1;
      }
    }
  }
  else if (uVar4 != 1) {
    if ((uVar1 & 0xff) == 1) {
      if ((uVar2 & 0xff) == 1) {
        return 1;
      }
    }
    else if (((uVar2 & 0xff) != 1) && ((int)uVar6 == (int)uVar5)) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 1048ae7e0; end: 1048ae81f;  */

void FUN_1048ae7e0(void)

{
  undefined *puVar1;
  
  if (puRam000000011309a8d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd415b8;
  _swift_getWitnessTable(&UNK_10dd415b8,&UNK_1107b1558);
  puRam000000011309a8d0 = puVar1;
  return;
}



/* Entry: 1048ae820; end: 1048ae843;  */

void FUN_1048ae820(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1048ae844();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1048ae844; end: 1048ae883;  */

void FUN_1048ae844(void)

{
  undefined *puVar1;
  
  if (puRam000000011309a8d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd415fc;
  _swift_getWitnessTable(&UNK_10dd415fc,&UNK_1107b15e8);
  puRam000000011309a8d8 = puVar1;
  return;
}



/* Entry: 1048ae884; end: 1048ae887;  */

void FUN_1048ae884(void)

{
  undefined *puVar1;
  
  if (puRam000000011309a8e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd4163c;
  _swift_getWitnessTable(&UNK_10dd4163c,&UNK_1107b15e8);
  puRam000000011309a8e0 = puVar1;
  return;
}



/* Entry: 1048ae888; end: 1048ae8c7;  */

void FUN_1048ae888(void)

{
  undefined *puVar1;
  
  if (puRam000000011309a8e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd4163c;
  _swift_getWitnessTable(&UNK_10dd4163c,&UNK_1107b15e8);
  puRam000000011309a8e0 = puVar1;
  return;
}



/* Entry: 1048ae8c8; end: 1048aeac3;  */

int FUN_1048ae8c8(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 1048aeac4; end: 1048aeb6f;  */

void FUN_1048aeac4(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048aeb70; end: 1048aeb73;  */

void FUN_1048aeb70(void)

{
  undefined *puVar1;
  
  if (puRam000000011309a8e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd416b0;
  _swift_getWitnessTable(&UNK_10dd416b0,&UNK_1107b16d8);
  puRam000000011309a8e8 = puVar1;
  return;
}



/* Entry: 1048aeb74; end: 1048aebb3;  */

void FUN_1048aeb74(void)

{
  undefined *puVar1;
  
  if (puRam000000011309a8e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd416b0;
  _swift_getWitnessTable(&UNK_10dd416b0,&UNK_1107b16d8);
  puRam000000011309a8e8 = puVar1;
  return;
}



/* Entry: 1048aebb4; end: 1048aebc3;  */

undefined8 FUN_1048aebb4(void)

{
  return 0;
}



/* Entry: 1048aebc4; end: 1048aebe7;  */

void FUN_1048aebc4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1048aebe8();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1048aebe8; end: 1048aec27;  */

void FUN_1048aebe8(void)

{
  undefined *puVar1;
  
  if (puRam000000011309a8f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd416d8;
  _swift_getWitnessTable(&UNK_10dd416d8,&UNK_1107b16d8);
  puRam000000011309a8f0 = puVar1;
  return;
}



/* Entry: 1048aec28; end: 1048aed8b;  */

int FUN_1048aec28(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1048aeca4;
        goto LAB_1048aec88;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1048aec88:
      return ((uint)*param_1 | uVar1 << 8) - 5;
    }
  }
LAB_1048aeca4:
  iVar2 = *param_1 - 6;
  if (*param_1 < 6) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1048aed8c; end: 1048aee17;  */

void FUN_1048aed8c(byte param_1)

{
  if (((param_1 < 2) || (param_1 == 2)) || (param_1 != 3)) {
    func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
    _swift_initStaticObject();
    func_0x000100c8a830();
  }
  return;
}



/* Entry: 1048aee18; end: 1048aeed7;  */

undefined1  [16] FUN_1048aee18(byte param_1)

{
  ulong uVar1;
  ulong uVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  uVar1 = 0x800000010f2155e0;
  uVar5 = 0xd00000000000001e;
  if (param_1 != 3) {
    uVar1 = 0xec00000079746976;
    uVar5 = 0x697463416576694c;
  }
  uVar2 = 0x800000010f215600;
  uVar4 = 0xd000000000000017;
  if (param_1 != 2) {
    uVar2 = uVar1;
    uVar4 = uVar5;
  }
  uVar5 = 0xd000000000000015;
  pcVar3 = "SpotlightUsageDatabase";
  if (param_1 != 0) {
    uVar5 = 0xd000000000000016;
    pcVar3 = "MixedFeedViewController";
  }
  if (param_1 < 2) {
    uVar2 = (ulong)pcVar3 | 0x8000000000000000;
    uVar4 = uVar5;
  }
  auVar6._8_8_ = uVar2;
  auVar6._0_8_ = uVar4;
  return auVar6;
}



/* Entry: 1048aeed8; end: 1048aef83;  */

void FUN_1048aeed8(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048aef84; end: 1048aef97;  */

void FUN_1048aef84(void)

{
  byte bVar1;
  byte *unaff_x20;
  
  bVar1 = *unaff_x20;
  if (((bVar1 < 2) || (bVar1 == 2)) || (bVar1 != 3)) {
    func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
    _swift_initStaticObject();
    func_0x000100c8a830();
  }
  return;
}



/* Entry: 1048aef98; end: 1048aefd7;  */

void FUN_1048aef98(void)

{
  undefined *puVar1;
  
  if (puRam000000011309a8f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd41768;
  _swift_getWitnessTable(&UNK_10dd41768,&UNK_1107b17c8);
  puRam000000011309a8f8 = puVar1;
  return;
}



/* Entry: 1048aefd8; end: 1048aeffb;  */

void FUN_1048aefd8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1048aeffc();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1048aeffc; end: 1048af03b;  */

void FUN_1048aeffc(void)

{
  undefined *puVar1;
  
  if (puRam000000011309a900 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd41790;
  _swift_getWitnessTable(&UNK_10dd41790,&UNK_1107b17c8);
  puRam000000011309a900 = puVar1;
  return;
}



/* Entry: 1048af03c; end: 1048af19f;  */

int FUN_1048af03c(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1048af0b8;
        goto LAB_1048af09c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1048af09c:
      return ((uint)*param_1 | uVar1 << 8) - 4;
    }
  }
LAB_1048af0b8:
  iVar2 = *param_1 - 5;
  if (*param_1 < 5) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1048af1a0; end: 1048af23b;  */

void FUN_1048af1a0(undefined8 param_1,undefined8 param_2,char param_3)

{
  long lVar1;
  
  lVar1 = 0x112e04798;
  func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
  if (param_3 == '\0') {
    _swift_initStackObject();
    *(undefined8 *)(lVar1 + 0x18) = 2;
    *(undefined8 *)(lVar1 + 0x10) = 1;
    *(undefined8 *)(lVar1 + 0x20) = param_1;
    func_0x000100c8a830();
    _swift_setDeallocating(lVar1);
  }
  else {
    _swift_initStaticObject();
    func_0x000100c8a830();
  }
  return;
}



/* Entry: 1048af23c; end: 1048af313;  */

void FUN_1048af23c(undefined8 param_1,long param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    __ss6HasherV8_combineyySuF(0);
    __ss6HasherV8_combineyySuF(param_2);
    return;
  }
  if (param_4 == '\x01') {
    __ss6HasherV8_combineyySuF(1);
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)(param_1,param_2,param_3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001048af2c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(byte)(&UNK_10dd4181a)[param_2] * 4 + 0x1048af2c4))();
  return;
}



/* Entry: 1048af314; end: 1048af32b;  */

void FUN_1048af314(void)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  
  uVar3 = *unaff_x20;
  cVar1 = *(char *)(unaff_x20 + 2);
  lVar2 = 0x112e04798;
  func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
  if (cVar1 == '\0') {
    _swift_initStackObject();
    *(undefined8 *)(lVar2 + 0x18) = 2;
    *(undefined8 *)(lVar2 + 0x10) = 1;
    *(undefined8 *)(lVar2 + 0x20) = uVar3;
    func_0x000100c8a830();
    _swift_setDeallocating(lVar2);
  }
  else {
    _swift_initStaticObject();
    func_0x000100c8a830();
  }
  return;
}



/* Entry: 1048af32c; end: 1048af383;  */

void FUN_1048af32c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = *(undefined1 *)(unaff_x20 + 2);
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  FUN_1048af23c(auStack_78,uVar1,uVar2,uVar3);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048af384; end: 1048af38f;  */

void FUN_1048af384(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  
  lVar1 = *unaff_x20;
  lVar2 = unaff_x20[1];
  if ((char)unaff_x20[2] == '\0') {
    __ss6HasherV8_combineyySuF(0);
    __ss6HasherV8_combineyySuF(lVar1);
    return;
  }
  if ((char)unaff_x20[2] == '\x01') {
    __ss6HasherV8_combineyySuF(1);
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)(param_1,lVar1,lVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001048af2c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(byte)(&UNK_10dd4181a)[lVar1] * 4 + 0x1048af2c4))();
  return;
}



/* Entry: 1048af390; end: 1048af3e3;  */

void FUN_1048af390(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = *(undefined1 *)(unaff_x20 + 2);
  __ss6HasherV5_seedABSi_tcfC(auStack_78);
  FUN_1048af23c(auStack_78,uVar1,uVar2,uVar3);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048af3e4; end: 1048af3ff;  */

ulong FUN_1048af3e4(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  uVar1 = *param_2;
  if ((char)param_1[2] == '\0') {
    if ((char)param_2[2] == '\0') {
      return (ulong)((int)uVar2 == (int)uVar1);
    }
  }
  else {
    if ((char)param_1[2] != '\x01') {
                    /* WARNING: Could not recover jumptable at 0x0001000b1d40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1000b1d44 + (ulong)(byte)(&UNK_10dd41824)[uVar2] * 4))();
      return uVar2;
    }
    if ((char)param_2[2] == '\x01') {
      if ((uVar2 == uVar1) && (param_1[1] == param_2[1])) {
        return 1;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(uVar2,param_1[1],uVar1,param_2[1],0);
      return uVar2;
    }
  }
  return 0;
}



/* Entry: 1048af400; end: 1048af423;  */

void FUN_1048af400(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1048af424();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1048af424; end: 1048af463;  */

void FUN_1048af424(void)

{
  undefined *puVar1;
  
  if (puRam000000011309a908 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd41854;
  _swift_getWitnessTable(&UNK_10dd41854,&UNK_1107b18b8);
  puRam000000011309a908 = puVar1;
  return;
}



/* Entry: 1048af464; end: 1048af467;  */

void FUN_1048af464(void)

{
  undefined *puVar1;
  
  if (puRam000000011309a910 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd41894;
  _swift_getWitnessTable(&UNK_10dd41894,&UNK_1107b18b8);
  puRam000000011309a910 = puVar1;
  return;
}



/* Entry: 1048af468; end: 1048af4a7;  */

void FUN_1048af468(void)

{
  undefined *puVar1;
  
  if (puRam000000011309a910 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd41894;
  _swift_getWitnessTable(&UNK_10dd41894,&UNK_1107b18b8);
  puRam000000011309a910 = puVar1;
  return;
}



/* Entry: 1048af4a8; end: 1048af4b7;  */

undefined8 FUN_1048af4a8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1[1];
  if (*(char *)(param_1 + 2) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
    return uVar1;
  }
  return *param_1;
}



/* Entry: 1048af4b8; end: 1048af553;  */

undefined8 * FUN_1048af4b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  func_0x0001000ac770(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 1048af554; end: 1048af597;  */

undefined8 * FUN_1048af554(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  func_0x0001000ac758(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 1048af598; end: 1048af70f;  */

int FUN_1048af598(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 3) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1048af710; end: 1048af82b;  */

void FUN_1048af710(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048af82c; end: 1048af837;  */

undefined1  [16] FUN_1048af82c(void)

{
  char *pcVar1;
  char *pcVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auVar6 [16];
  
  bVar3 = *unaff_x20;
  pcVar1 = "ficationProcessors";
  uVar4 = 0xd000000000000016;
  if (bVar3 != 3) {
    pcVar1 = "RecentStoriesDatabase";
    uVar4 = 0xd000000000000022;
  }
  pcVar2 = "StoryServiceEntryPoint";
  uVar5 = 0xd00000000000001d;
  if (bVar3 != 2) {
    pcVar2 = pcVar1;
    uVar5 = uVar4;
  }
  pcVar1 = "StoryCheetahStoriesRefresh";
  uVar4 = 0xd00000000000001d;
  if (bVar3 != 0) {
    pcVar1 = "StoryAppUserLifecycleObserver";
    uVar4 = 0xd00000000000001a;
  }
  if (bVar3 < 2) {
    pcVar2 = pcVar1;
    uVar5 = uVar4;
  }
  auVar6._8_8_ = (ulong)pcVar2 | 0x8000000000000000;
  auVar6._0_8_ = uVar5;
  return auVar6;
}



/* Entry: 1048af838; end: 1048af877;  */

void FUN_1048af838(void)

{
  undefined *puVar1;
  
  if (puRam000000011309a980 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd418d8;
  _swift_getWitnessTable(&UNK_10dd418d8,&UNK_1107b19a8);
  puRam000000011309a980 = puVar1;
  return;
}



/* Entry: 1048af878; end: 1048af89b;  */

void FUN_1048af878(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1048af89c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}


