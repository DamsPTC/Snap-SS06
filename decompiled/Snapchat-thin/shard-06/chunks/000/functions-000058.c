/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10444eb04; end: 10444eb3b; -[SCNetworkBandwidthEstimatorServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10444eb04(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307a4d0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11307a4d8));
  return;
}



/* Entry: 10444eb3c; end: 10444ec8b;  */

/* WARNING: Removing unreachable block (ram,0x00010444ef48) */
/* WARNING: Removing unreachable block (ram,0x00010444ef84) */
/* WARNING: Removing unreachable block (ram,0x00010444efb0) */
/* WARNING: Removing unreachable block (ram,0x00010444ef8c) */
/* WARNING: Removing unreachable block (ram,0x00010444ef50) */
/* WARNING: Removing unreachable block (ram,0x00010444ef90) */

undefined1  [16] FUN_10444eb3c(ulong param_1,undefined8 param_2,byte *param_3)

{
  uint uVar1;
  byte *pbVar2;
  char in_NG;
  undefined1 in_ZR;
  bool in_CY;
  char in_OV;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  byte *unaff_x19;
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
  undefined1 auStack_70 [80];
  
  pbVar5 = (byte *)0xed00006874706544;
  pbVar3 = (byte *)0x20656d6172462d42;
  pcVar10 = (char *)(param_1 & 0xff);
  uVar8 = 0xdd00370;
  pbVar4 = pbVar3;
  pbVar6 = pbVar5;
  pbVar2 = param_3;
  switch(pcVar10) {
  case (char *)0x0:
    goto code_r0x00010444ebc4;
  default:
    pbVar3 = (byte *)0x13;
  case (char *)0x1c:
  case (char *)0x2a:
  case (char *)0x6a:
  case (char *)0xa2:
  case (char *)0xf8:
    pbVar3 = (byte *)((ulong)pbVar3 & 0xffffffffffff | 0xd000000000000000);
  case (char *)0xf:
  case (char *)0x23:
  case (char *)0x37:
  case (char *)0x4b:
  case (char *)0x53:
  case (char *)0x5b:
  case (char *)0x63:
  case (char *)0x77:
  case (char *)0x8b:
  case (char *)0x93:
  case (char *)0x9b:
  case (char *)0xeb:
  case (char *)0xff:
    pcVar10 = "OperaAPIDefinesSwift/OperaPageabilityOverwriteOptionWrapper.swift";
  case (char *)0x1a:
  case (char *)0x42:
  case (char *)0x82:
  case (char *)0x84:
  case (char *)0xf6:
    pcVar10 = pcVar10 + 0x740;
  case (char *)0x44:
code_r0x00010444ec0c:
    auVar15._8_8_ = (ulong)(pcVar10 + -0x20) | 0x8000000000000000;
    auVar15._0_8_ = pbVar3;
    return auVar15;
  case (char *)0x2:
    auVar13._8_8_ = 0xea0000000000657a;
    auVar13._0_8_ = 0x6953206f65646956;
    return auVar13;
  case (char *)0x3:
    pbVar5 = (byte *)0xe700000000000000;
    pbVar3 = (byte *)0x756d6544;
  case (char *)0xc:
    auVar14._0_8_ = (ulong)pbVar3 & 0xffffffff | 0x64657800000000;
    auVar14._8_8_ = pbVar5;
    return auVar14;
  case (char *)0x4:
  case (char *)0x33:
  case (char *)0x34:
  case (char *)0x73:
  case (char *)0xab:
    pbVar5 = (byte *)0xe700000000000000;
    pbVar3 = (byte *)0x6544;
  case (char *)0xe1:
    pbVar3 = (byte *)((ulong)pbVar3 & 0xffffffff0000ffff | 0x6f630000);
code_r0x00010444eb9c:
    auVar11._0_8_ = (ulong)pbVar3 & 0xffffffff | 0x64656400000000;
    auVar11._8_8_ = pbVar5;
    return auVar11;
  case (char *)0x5:
    auVar16._8_8_ = 0x800000010f1ff700;
    auVar16._0_8_ = 0xd00000000000001f;
    return auVar16;
  case (char *)0x6:
    pcVar10 = "OperaAPIDefinesSwift/OperaPageabilityOverwriteOptionWrapper.swift";
  case (char *)0x30:
    auVar17._8_8_ = (ulong)(pcVar10 + 0x6e0) | 0x8000000000000000;
    auVar17._0_8_ = 0xd000000000000018;
    return auVar17;
  case (char *)0x7:
  case (char *)0x5c:
    pbVar3 = (byte *)0xd000000000000013;
    pcVar10 = "Renderer: Corrupted";
    goto code_r0x00010444ec0c;
  case (char *)0x8:
    auVar18._8_8_ = 0x800000010f1ff6a0;
    auVar18._0_8_ = 0xd000000000000011;
    return auVar18;
  case (char *)0x9:
    pcVar10 = "OperaAPIDefinesSwift/OperaPageabilityOverwriteOptionWrapper.swift";
  case (char *)0xe4:
    pbVar5 = (byte *)((ulong)(pcVar10 + 0x670) | 0x8000000000000000);
    pcVar10 = (char *)0xd000000000000013;
  case (char *)0x20:
    pbVar3 = (byte *)(pcVar10 + 0xd);
code_r0x00010444ebc4:
    auVar12._8_8_ = pbVar5;
    auVar12._0_8_ = pbVar3;
    return auVar12;
  case (char *)0xe:
  case (char *)0x22:
  case (char *)0x36:
  case (char *)0x4a:
  case (char *)0x52:
  case (char *)0x5a:
  case (char *)0x62:
  case (char *)0x76:
  case (char *)0x8a:
  case (char *)0x92:
  case (char *)0x9a:
  case (char *)0xea:
  case (char *)0xfe:
    __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  case (char *)0x9c:
    unaff_x20 = pbVar3;
  case (char *)0x8c:
    _swift_bridgeObjectRelease();
    in_CY = (byte *)0x9 < unaff_x20;
    pcVar10 = (char *)0xa;
  case (char *)0xfc:
    pbVar3 = unaff_x20;
    if (in_CY) {
      pbVar3 = (byte *)pcVar10;
    }
code_r0x00010444ee3c:
    auVar24._8_8_ = pbVar5;
    auVar24._0_8_ = pbVar3;
    return auVar24;
  case (char *)0x10:
  case (char *)0xa8:
    pbVar3 = &UNK_10dd00000;
  case (char *)0xe8:
    pbVar3 = pbVar3 + 0x37c;
    puVar7 = &UNK_110770288;
    _swift_getWitnessTable(pbVar3,&UNK_110770288);
    pbRam000000011307a508 = pbVar3;
    auVar25._8_8_ = puVar7;
    auVar25._0_8_ = pbVar3;
    return auVar25;
  case (char *)0x12:
  case (char *)0x3a:
  case (char *)0x7a:
  case (char *)0xee:
    goto code_r0x00010444ee3c;
  case (char *)0x24:
    goto code_r0x00010444ef0c;
  case (char *)0x25:
  case (char *)0x55:
    in_CY = 0xdd0036f < (uint)pcVar10;
  case (char *)0x5d:
  case (char *)0x65:
  case (char *)0x95:
  case (char *)0x9d:
    uVar8 = 2;
    if (in_CY) {
      uVar8 = 4;
    }
    pcVar10 = (char *)0x0;
  case (char *)0x74:
    if ((uint)pcVar10 < 0xff) {
      uVar8 = 1;
    }
    uVar1 = 0;
    if (0xf6 < (uint)param_3) {
      uVar1 = uVar8;
    }
    pcVar10 = (char *)(ulong)uVar1;
  case (char *)0x48:
  case (char *)0x50:
  case (char *)0x58:
  case (char *)0x60:
    uVar8 = 0x747065;
    bRam20656d6172462d42 = 0x4d;
    iVar9 = (int)pcVar10;
    in_OV = SBORROW4(iVar9,1);
    in_NG = iVar9 + -1 < 0;
    in_ZR = iVar9 == 1;
  case (char *)0x49:
  case (char *)0x51:
  case (char *)0x59:
  case (char *)0x61:
  case (char *)0x75:
  case (char *)0x89:
  case (char *)0x91:
  case (char *)0x99:
  case (char *)0xe9:
  case (char *)0xfd:
    if (!(bool)in_ZR && in_NG == in_OV) {
      bRam20656d6172462d43 = (byte)uVar8;
      uRam20656d6172462d44 = (undefined1)(uVar8 >> 8);
      if ((int)pcVar10 != 2) {
        uRam20656d6172462d45 = (undefined2)(uVar8 >> 0x10);
        auVar32._8_8_ = 0xed00006874706544;
        auVar32._0_8_ = 0x20656d6172462d42;
        return auVar32;
      }
      auVar30._8_8_ = 0xed00006874706544;
      auVar30._0_8_ = 0x20656d6172462d42;
      return auVar30;
    }
  case (char *)0xd:
  case (char *)0x21:
  case (char *)0x35:
    if ((int)pcVar10 != 0) {
      bRam20656d6172462d43 = (char)uVar8;
      auVar28._8_8_ = 0xed00006874706544;
      auVar28._0_8_ = 0x20656d6172462d42;
      return auVar28;
    }
code_r0x00010444efb8:
    auVar31._8_8_ = 0xed00006874706544;
    auVar31._0_8_ = 0x20656d6172462d42;
    return auVar31;
  case (char *)0x27:
  case (char *)0x57:
  case (char *)0x5f:
  case (char *)0x67:
  case (char *)0x97:
  case (char *)0x9f:
    bRam20656d6172462d43 = 0;
    bRam20656d6172462d42 = 0x4d;
    auVar29._8_8_ = 0xed00006874706544;
    auVar29._0_8_ = 0x20656d6172462d42;
    return auVar29;
  case (char *)0x38:
    pbVar3 = (byte *)(ulong)*unaff_x20;
    unaff_x19 = (byte *)pcVar10;
  case (char *)0x32:
  case (char *)0x72:
  case (char *)0xaa:
    FUN_10444eb3c();
    *(byte **)unaff_x19 = pbVar3;
    *(byte **)(unaff_x19 + 8) = pbVar5;
    auVar23._8_8_ = pbVar5;
    auVar23._0_8_ = pbVar3;
    return auVar23;
  case (char *)0x4d:
    goto code_r0x00010444eb9c;
  case (char *)0x4e:
  case (char *)0xe2:
    goto code_r0x00010444eebc;
  case (char *)0x54:
    break;
  case (char *)0x64:
    goto code_r0x00010444ecdc;
  case (char *)0x88:
  case (char *)0x90:
  case (char *)0x98:
    goto LAB_10444ef00;
  case (char *)0x8e:
    goto code_r0x00010444eeac;
  case (char *)0x94:
    pbVar3 = (byte *)CONCAT35(uRam20656d6172462d47,
                              CONCAT23(uRam20656d6172462d45,
                                       CONCAT12(uRam20656d6172462d44,
                                                CONCAT11(bRam20656d6172462d43,bRam20656d6172462d42))
                                      ));
    pbVar5 = pbRam20656d6172462d4a;
    func_0x00010444eddc(pbVar3,pbRam20656d6172462d4a);
    *pcVar10 = (byte)pbVar3;
  case (char *)0x8d:
    auVar22._8_8_ = pbVar5;
    auVar22._0_8_ = pbVar3;
    return auVar22;
  case (char *)0xb6:
  case (char *)0xc2:
  case (char *)0xd0:
    FUN_10444eb3c();
  case (char *)0xb9:
  case (char *)0xc8:
    param_3 = pbVar3;
  case (char *)0x4c:
    unaff_x20 = pbVar5;
  case (char *)0xb4:
  case (char *)0xb8:
  case (char *)0xc4:
  case (char *)0xc7:
  case (char *)0xcd:
  case (char *)0xd3:
    pbVar5 = param_3;
code_r0x00010444ed18:
    __sSS4hash4intoys6HasherVz_tF();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(unaff_x20);
    auVar33._8_8_ = pbVar5;
    auVar33._0_8_ = unaff_x20;
    return auVar33;
  case (char *)0xb7:
  case (char *)0xc6:
    register0x00000008 = (BADSPACEBASE *)auStack_70;
    unaff_x19 = (byte *)(ulong)*unaff_x20;
  case (char *)0xbe:
    pcVar10 = (char *)((long)register0x00000008 + 8);
  case (char *)0x31:
  case (char *)0x71:
  case (char *)0xa9:
    pbVar3 = (byte *)0x0;
  case (char *)0xd2:
    param_3 = unaff_x19;
    __ss6HasherV5_seedABSi_tcfC(pcVar10,pbVar3);
    FUN_10444eb3c(param_3);
  case (char *)0xb2:
  case (char *)0xcb:
    pbVar2 = param_3;
    unaff_x19 = pbVar5;
  case (char *)0x78:
  case (char *)0xbd:
  case (char *)0xc0:
    param_3 = unaff_x19;
    pbVar5 = pbVar2;
    pbVar4 = (byte *)((long)register0x00000008 + 8);
    unaff_x19 = param_3;
  case (char *)0xb0:
    pbVar3 = unaff_x19;
    __sSS4hash4intoys6HasherVz_tF(pbVar4,pbVar5,param_3);
    _swift_bridgeObjectRelease(pbVar3);
    __ss6HasherV9_finalizeSiyF();
code_r0x00010444ecdc:
    auVar20._8_8_ = pbVar5;
    auVar20._0_8_ = pbVar3;
    return auVar20;
  case (char *)0xbb:
  case (char *)0xca:
    goto code_r0x00010444ed18;
  case (char *)0xbc:
    pbVar3 = (byte *)(ulong)((uint)pcVar10 == 0xdd00370);
  case (char *)0xb1:
    auVar19._8_8_ = 0xed00006874706544;
    auVar19._0_8_ = pbVar3;
    return auVar19;
  case (char *)0xc1:
  case (char *)0xcf:
    register0x00000008 = (BADSPACEBASE *)auStack_70;
  case (char *)0x70:
  case (char *)0xb3:
  case (char *)0xed:
    unaff_x19 = (byte *)(ulong)*unaff_x20;
  case (char *)0x11:
  case (char *)0x39:
  case (char *)0x79:
    pcVar10 = (char *)((long)register0x00000008 + 8);
  case (char *)0xb5:
  case (char *)0xc5:
  case (char *)0xce:
    __ss6HasherV5_seedABSi_tcfC(pcVar10);
  case (char *)0xd5:
    pbVar3 = unaff_x19;
  case (char *)0x26:
  case (char *)0x56:
  case (char *)0x5e:
  case (char *)0x66:
  case (char *)0x96:
  case (char *)0x9e:
    FUN_10444eb3c(pbVar3);
  case (char *)0xba:
  case (char *)0xc9:
    param_3 = pbVar3;
  case (char *)0xcc:
    pbVar6 = param_3;
    pbVar3 = (byte *)((long)register0x00000008 + 8);
    unaff_x19 = pbVar5;
code_r0x00010444ed60:
    __sSS4hash4intoys6HasherVz_tF(pbVar3,pbVar6,unaff_x19);
    _swift_bridgeObjectRelease(unaff_x19);
    __ss6HasherV9_finalizeSiyF();
    auVar21._8_8_ = pbVar6;
    auVar21._0_8_ = unaff_x19;
    return auVar21;
  case (char *)0xc3:
  case (char *)0xd1:
  case (char *)0xd4:
    goto code_r0x00010444ed60;
  case (char *)0xe0:
    goto code_r0x00010444eeec;
  case (char *)0xec:
    goto code_r0x00010444efb8;
  }
  uVar8 = 2;
  if (in_CY) {
    uVar8 = 4;
  }
  pcVar10 = (char *)0x0;
code_r0x00010444eeac:
  if ((uint)pcVar10 < 0xff) {
    uVar8 = 1;
  }
  pcVar10 = (char *)(ulong)uVar8;
  if (uVar8 == 4) {
    uVar8 = CONCAT22(uRam20656d6172462d45,CONCAT11(uRam20656d6172462d44,bRam20656d6172462d43));
joined_r0x00010444eee0:
    if (uVar8 != 0) {
LAB_10444eee4:
      pcVar10 = (char *)(ulong)((uint)bRam20656d6172462d42 | uVar8 << 8);
code_r0x00010444eeec:
      auVar26._4_4_ = 0;
      auVar26._0_4_ = (int)pcVar10 - 9;
      auVar26._8_8_ = 0xed00006874706544;
      return auVar26;
    }
  }
  else {
code_r0x00010444eebc:
    if ((int)pcVar10 != 2) {
      uVar8 = (uint)bRam20656d6172462d43;
      goto joined_r0x00010444eee0;
    }
    uVar8 = (uint)CONCAT11(uRam20656d6172462d44,bRam20656d6172462d43);
    if (CONCAT11(uRam20656d6172462d44,bRam20656d6172462d43) != 0) goto LAB_10444eee4;
  }
LAB_10444ef00:
  uVar8 = bRam20656d6172462d42 - 10;
  if (bRam20656d6172462d42 < 10) {
    uVar8 = 0xffffffff;
  }
  pcVar10 = (char *)(ulong)uVar8;
code_r0x00010444ef0c:
  auVar27._4_4_ = 0;
  auVar27._0_4_ = (int)pcVar10 + 1;
  auVar27._8_8_ = 0xed00006874706544;
  return auVar27;
}



/* Entry: 10444ec8c; end: 10444ee3f;  */

void FUN_10444ec8c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = (ulong)*unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_10444eb3c(uVar1);
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar1,param_2);
  _swift_bridgeObjectRelease(param_2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10444ee40; end: 10444ee43;  */

void FUN_10444ee40(void)

{
  undefined *puVar1;
  
  if (puRam000000011307a508 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0037c;
  _swift_getWitnessTable(&UNK_10dd0037c,&UNK_110770288);
  puRam000000011307a508 = puVar1;
  return;
}



/* Entry: 10444ee44; end: 10444ee83;  */

void FUN_10444ee44(void)

{
  undefined *puVar1;
  
  if (puRam000000011307a508 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0037c;
  _swift_getWitnessTable(&UNK_10dd0037c,&UNK_110770288);
  puRam000000011307a508 = puVar1;
  return;
}



/* Entry: 10444ee84; end: 10444effb;  */

int FUN_10444ee84(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf6 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 9) {
      iVar2 = 4;
    }
    if (param_2 + 9 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10444ef00;
        goto LAB_10444eee4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10444eee4:
      return ((uint)*param_1 | uVar1 << 8) - 9;
    }
  }
LAB_10444ef00:
  iVar2 = *param_1 - 10;
  if (*param_1 < 10) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10444effc; end: 10444f0d3;  */

void FUN_10444effc(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10444f0d4; end: 10444f0df;  */

void FUN_10444f0d4(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 10444f0e0; end: 10444f11f;  */

void FUN_10444f0e0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x11307a680;
  func_0x0001000285a8(0x11307a680,&UNK_10dd00450);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 10444f120; end: 10444f133;  */

undefined1  [16] FUN_10444f120(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 6) {
    uVar1 = param_1;
  }
  auVar2[8] = 5 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 10444f134; end: 10444f173;  */

void FUN_10444f134(void)

{
  undefined *puVar1;
  
  if (puRam000000011307a688 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd00458;
  _swift_getWitnessTable(&UNK_10dd00458,&UNK_110770300);
  puRam000000011307a688 = puVar1;
  return;
}



/* Entry: 10444f174; end: 10444f177;  */

void FUN_10444f174(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam000000011307a690 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x11307a698;
  func_0x00010002969c(0x11307a698,&UNK_10dd004f8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam000000011307a690 = puVar2;
  return;
}



/* Entry: 10444f178; end: 10444f1c7;  */

void FUN_10444f178(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam000000011307a690 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x11307a698;
  func_0x00010002969c(0x11307a698,&UNK_10dd004f8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam000000011307a690 = puVar2;
  return;
}



/* Entry: 10444f1c8; end: 10444f1d7;  */

undefined1  [16] FUN_10444f1c8(void)

{
  return ZEXT816(0x110770300);
}



/* Entry: 10444f1d8; end: 10444f473;  */

long FUN_10444f1d8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10444f474; end: 10444f483; -[_TtC15SCOperaDebugAPI23SCPlaybackFrameRateInfo playerHash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10444f474(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307a6a0);
}



/* Entry: 10444f484; end: 10444f493; -[_TtC15SCOperaDebugAPI23SCPlaybackFrameRateInfo frameRate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10444f484(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11307a6a8);
}



/* Entry: 10444f494; end: 10444f4a3; -[_TtC15SCOperaDebugAPI23SCPlaybackFrameRateInfo nominalFrameRate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10444f494(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11307a6b0);
}



/* Entry: 10444f4a4; end: 10444f517;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10444f4a4(undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307a6a0) = param_3;
  *(undefined4 *)(unaff_x20 + _DAT_11307a6a8) = param_1;
  *(undefined4 *)(unaff_x20 + _DAT_11307a6b0) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10444f518; end: 10444f58b; -[_TtC15SCOperaDebugAPI23SCPlaybackFrameRateInfo initWithPlayerHash:frameRate:nominalFrameRate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10444f518(undefined4 param_1,undefined4 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_3;
  _swift_getObjectType();
  *(undefined8 *)(param_3 + _DAT_11307a6a0) = param_5;
  *(undefined4 *)(param_3 + _DAT_11307a6a8) = param_1;
  *(undefined4 *)(param_3 + _DAT_11307a6b0) = param_2;
  lStack_40 = param_3;
  lStack_38 = lVar1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10444f58c; end: 10444f60b; -[_TtC15SCOperaDebugAPI23SCPlaybackFrameRateInfo init] */

void FUN_10444f58c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCOperaDebugAPI.SCPlaybackFrameRateInfo",0x27,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10444f5b8);
  (*pcVar1)();
}



/* Entry: 10444f60c; end: 10444f657; -[SCOperaPlaybackLog playbackId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10444f60c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11307a6e0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11307a6e0))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10444f658; end: 10444f667; -[SCOperaPlaybackLog timestampMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10444f658(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307a6e8);
}



/* Entry: 10444f668; end: 10444f6c7; -[SCOperaPlaybackLog messages] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10444f668(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11307a6f0);
  func_0x0001002ed07c(0);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10444f6c8; end: 10444f717; -[SCOperaPlaybackLog error] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10444f6c8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11307a6f8);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    _swift_errorRetain(lVar1);
    lVar2 = lVar1;
    __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(lVar1);
    _swift_errorRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10444f718; end: 10444f72b; -[SCOperaPlaybackLog resolution] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10444f718(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11307a700);
}



/* Entry: 10444f72c; end: 10444f787; -[SCOperaPlaybackLog mediaFormat] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10444f72c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11307a708))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11307a708);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10444f788; end: 10444f85b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10444f788(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307a6e0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11307a6e8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11307a6f0) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_11307a6f8) = param_7;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307a700);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307a708);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10444f85c; end: 10444f987; -[SCOperaPlaybackLog initWithPlaybackId:timestampMs:messages:error:resolution:mediaFormat:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10444f85c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lStack_70;
  long lStack_68;
  
  lVar3 = param_3;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar4 = 0;
  func_0x0001002ed07c(0);
  puVar5 = PTR___sSSN_11034da80;
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (param_7,PTR___sSSN_11034da80,uVar4,PTR___sSSSHsWP_11034da90);
  if (param_9 == 0) {
    param_9 = 0;
    puVar5 = (undefined *)0x0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  puVar1 = (undefined8 *)(param_3 + _DAT_11307a6e0);
  *puVar1 = param_5;
  puVar1[1] = param_4;
  *(undefined8 *)(param_3 + _DAT_11307a6e8) = param_6;
  *(undefined8 *)(param_3 + _DAT_11307a6f0) = param_7;
  *(undefined8 *)(param_3 + _DAT_11307a6f8) = param_8;
  puVar1 = (undefined8 *)(param_3 + _DAT_11307a700);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  plVar2 = (long *)(param_3 + _DAT_11307a708);
  *plVar2 = param_9;
  plVar2[1] = (long)puVar5;
  puVar5 = PTR_s_init_1125d9248;
  lStack_70 = param_3;
  lStack_68 = lVar3;
  _objc_retain(param_8);
  _objc_msgSendSuper2(&lStack_70,puVar5);
  return;
}



/* Entry: 10444f988; end: 10444fab3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10444f988(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_80 [8];
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar2 = auStack_80;
  _objc_allocWithZone();
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307a6e0);
  puVar1[1] = uStack_38;
  *puVar1 = uStack_40;
  *(undefined8 *)(unaff_x20 + _DAT_11307a6e8) = param_1[2];
  uStack_48 = param_1[3];
  *(undefined8 *)(unaff_x20 + _DAT_11307a6f0) = uStack_48;
  uStack_50 = param_1[4];
  *(undefined8 *)(unaff_x20 + _DAT_11307a6f8) = uStack_50;
  uVar3 = param_1[5];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307a700);
  puVar1[1] = param_1[6];
  *puVar1 = uVar3;
  uStack_58 = param_1[8];
  uStack_60 = param_1[7];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307a708);
  puVar1[1] = uStack_58;
  *puVar1 = uStack_60;
  func_0x000100402194(&uStack_40,auStack_70);
  FUN_104450614(&uStack_48,auStack_70,0x11307a710,&UNK_10dd005a0);
  FUN_104450614(&uStack_50,auStack_70,0x112d511f8,&UNK_10d918df0);
  FUN_104450614(&uStack_60,auStack_70,0x112d35ff8,&UNK_10d900cd0);
  _objc_msgSendSuper2(auStack_80,PTR_s_init_1125d9248);
  FUN_10444fab4(param_1);
  return puVar2;
}



/* Entry: 10444fab4; end: 10444fae7;  */

undefined8 FUN_10444fab4(undefined8 param_1)

{
  (*(code *)(undefined *)0x10444f204)();
  return param_1;
}



/* Entry: 10444fae8; end: 10444faeb; -[SCOperaPlaybackLog copyWithZone:] */

void FUN_10444fae8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10444faec; end: 10444fb1f; -[SCOperaPlaybackLog description] */

void FUN_10444faec(void)

{
  undefined1 auStack_58 [72];
  
  FUN_1044501f8(auStack_58);
  FUN_10444fab4(auStack_58);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10444fb20; end: 10444fb67; -[SCOperaPlaybackLog init] */

void FUN_10444fb20(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCOperaDebugAPI/SCOperaPlaybackLogWrapper.swift",0x2f,2,0x3c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10444fb68);
  (*pcVar1)();
}



/* Entry: 10444fb68; end: 10444fb83; +[SCOperaPlaybackLogBuilder operaPlaybackLog] */

void FUN_10444fb68(void)

{
  _swift_getObjCClassMetadata();
  _objc_allocWithZone();
  func_0x00010bfee200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10444fb84; end: 10444fbc3; +[SCOperaPlaybackLogBuilder operaPlaybackLogWithExistingOperaPlaybackLog:] */

void FUN_10444fb84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_1044502b8(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10444fbc4; end: 10444fc13; -[SCOperaPlaybackLogBuilder withPlaybackId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10444fbc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_11307a718);
  uVar2 = puVar1[1];
  *puVar1 = param_3;
  puVar1[1] = param_2;
  _objc_retain(param_1);
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10444fc14; end: 10444fc2b; -[SCOperaPlaybackLogBuilder withTimestampMs:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10444fc14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_11307a720);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 10444fc2c; end: 10444fc97; -[SCOperaPlaybackLogBuilder withMessages:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10444fc2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x0001002ed07c(0);
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (param_3,PTR___sSSN_11034da80,uVar1,PTR___sSSSHsWP_11034da90);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11307a728);
  *(undefined8 *)(param_1 + _DAT_11307a728) = param_3;
  _objc_retain(param_1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10444fc98; end: 10444fcfb; -[SCOperaPlaybackLogBuilder withError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10444fc98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11307a730);
  *(undefined8 *)(param_1 + _DAT_11307a730) = param_3;
  _objc_retain(param_3);
  _objc_retain();
  _objc_retain(param_1);
  _swift_errorRelease(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10444fcfc; end: 10444fd13; -[SCOperaPlaybackLogBuilder withResolution:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10444fcfc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_3 + _DAT_11307a738);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined1 *)(puVar1 + 2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 10444fd14; end: 10444fd77; -[SCOperaPlaybackLogBuilder withMediaFormat:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10444fd14(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_11307a740);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _objc_retain();
  _swift_bridgeObjectRelease(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10444fd78; end: 10444ff4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10444fd78(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar8 = ((undefined8 *)(unaff_x20 + _DAT_11307a718))[1];
  if (lVar8 == 0) {
    uVar10 = 0x6b63616279616c70;
    uVar6 = 0xea00000000006449;
  }
  else {
    uVar10 = *(undefined8 *)(unaff_x20 + _DAT_11307a718);
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307a720);
    if (*(char *)(puVar1 + 1) == '\x01') {
      uVar6 = 0;
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 0;
    }
    else {
      uVar6 = *puVar1;
    }
    lVar7 = *(long *)(unaff_x20 + _DAT_11307a728);
    if (lVar7 != 0) {
      puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307a738);
      if (*(char *)(puVar1 + 2) == '\x01') {
        uStack_80 = 0;
        uStack_78 = 0;
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined1 *)(puVar1 + 2) = 0;
      }
      else {
        uStack_78 = *puVar1;
        uStack_80 = puVar1[1];
      }
      uVar9 = *(undefined8 *)(unaff_x20 + _DAT_11307a730);
      uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11307a740);
      uVar3 = ((undefined8 *)(unaff_x20 + _DAT_11307a740))[1];
      FUN_1044505d4();
      lVar5 = param_1;
      _objc_allocWithZone();
      puVar1 = (undefined8 *)(lVar5 + _DAT_11307a6e0);
      *puVar1 = uVar10;
      puVar1[1] = lVar8;
      *(undefined8 *)(lVar5 + _DAT_11307a6e8) = uVar6;
      *(long *)(lVar5 + _DAT_11307a6f0) = lVar7;
      *(undefined8 *)(lVar5 + _DAT_11307a6f8) = uVar9;
      puVar1 = (undefined8 *)(lVar5 + _DAT_11307a700);
      *puVar1 = uStack_78;
      puVar1[1] = uStack_80;
      puVar1 = (undefined8 *)(lVar5 + _DAT_11307a708);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      _swift_bridgeObjectRetain(lVar8);
      _swift_bridgeObjectRetain(lVar7);
      _swift_errorRetain(uVar9);
      puVar4 = PTR_s_init_1125d9248;
      lStack_70 = lVar5;
      lStack_68 = param_1;
      _swift_bridgeObjectRetain(uVar3);
      _objc_msgSendSuper2(&lStack_70,puVar4);
      return;
    }
    uVar10 = 0x736567617373656d;
    uVar6 = 0xe800000000000000;
  }
  FUN_10445042c(uVar10,uVar6);
  _swift_willThrow();
  return;
}



/* Entry: 10444ff4c; end: 10444ffb7; -[SCOperaPlaybackLogBuilder build] */

/* WARNING: Removing unreachable block (ram,0x00010444ff98) */

void FUN_10444ff4c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10444fd78();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10444ffb8; end: 104450047; -[SCOperaPlaybackLogBuilder safeBuildAndReturnError:] */

/* WARNING: Removing unreachable block (ram,0x00010444fff4) */
/* WARNING: Removing unreachable block (ram,0x000104450028) */
/* WARNING: Removing unreachable block (ram,0x00010444fff8) */

void FUN_10444ffb8(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10444fd78();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104450048; end: 1044500df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104450048(void)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  _swift_getObjectType();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307a718);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307a720);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_11307a728) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11307a730) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307a738);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307a740);
  *puVar1 = 0;
  puVar1[1] = 0;
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044500e0; end: 1044500ff; -[SCOperaPlaybackLogBuilder init] */

void FUN_1044500e0(void)

{
  FUN_104450048();
  return;
}



/* Entry: 104450100; end: 104450103;  */

void FUN_104450100(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104450104; end: 104450163; -[SCOperaPlaybackLogBuilder .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104450104(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307a718 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307a728));
  _swift_errorRelease(*(undefined8 *)(param_1 + _DAT_11307a730));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11307a740 + 8))
  ;
  return;
}



/* Entry: 104450164; end: 104450197;  */

void FUN_104450164(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104450198; end: 1044501f7; -[SCOperaPlaybackLog .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104450198(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307a6e0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307a6f0));
  _swift_errorRelease(*(undefined8 *)(param_1 + _DAT_11307a6f8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11307a708 + 8))
  ;
  return;
}



/* Entry: 1044501f8; end: 1044502b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044501f8(undefined8 *param_1,long param_2)

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
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_11307a6e0);
  uVar3 = ((undefined8 *)(param_2 + _DAT_11307a6e0))[1];
  uVar7 = *(undefined8 *)(param_2 + _DAT_11307a6e8);
  uVar5 = *(undefined8 *)(param_2 + _DAT_11307a6f0);
  uVar6 = *(undefined8 *)(param_2 + _DAT_11307a6f8);
  uVar8 = *(undefined8 *)(param_2 + _DAT_11307a700);
  uVar9 = ((undefined8 *)(param_2 + _DAT_11307a700))[1];
  uVar2 = *(undefined8 *)(param_2 + _DAT_11307a708);
  uVar4 = ((undefined8 *)(param_2 + _DAT_11307a708))[1];
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar5);
  _swift_errorRetain(uVar6);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar7;
  param_1[3] = uVar5;
  param_1[4] = uVar6;
  param_1[5] = uVar8;
  param_1[6] = uVar9;
  param_1[7] = uVar2;
  param_1[8] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar4);
  return;
}



/* Entry: 1044502b8; end: 10445042b;  */

/* WARNING: Possible PIC construction at 0x0001044502ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001044502f0) */

void FUN_1044502b8(long param_1)

{
  if (param_1 == 0) {
    func_0x0001044505f4();
    _objc_allocWithZone();
  }
  else {
    func_0x0001044505f4();
    _objc_allocWithZone();
    _objc_retain(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10445042c; end: 1044505d3;  */

undefined * FUN_10445042c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_90 [80];
  
  lVar2 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  puVar6 = auStack_90;
  _swift_initStackObject();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uVar3 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  *(undefined1 **)(lVar2 + 0x28) = puVar6;
  __ss11_StringGutsV4growyySiF(0x33);
  __sSS6appendyySSF(0xd000000000000027,0x800000010f11f8b0);
  __sSS6appendyySSF(param_1,param_2);
  __sSS6appendyySSF(0x736e752073692027,0xea00000000007465);
  puVar1 = PTR___sSSN_11034da80;
  *(undefined **)(lVar2 + 0x48) = PTR___sSSN_11034da80;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0xe000000000000000;
  lVar4 = lVar2;
  func_0x000100214a84(lVar2);
  _swift_setDeallocating(lVar2);
  func_0x000100f15a0c((undefined8 *)(lVar2 + 0x20));
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_allocWithZone(PTR__OBJC_CLASS___NSError_1126ae858);
  uVar3 = 0xd000000000000023;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000023,0x800000010f11f880);
  lVar2 = lVar4;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (lVar4,puVar1,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  _swift_bridgeObjectRelease(lVar4);
  func_0x00010c00e2e0(puVar5);
  _objc_release(uVar3);
  _objc_release(lVar2);
  return puVar5;
}



/* Entry: 1044505d4; end: 104450613;  */

void FUN_1044505d4(void)

{
  _objc_opt_self(&PTR_PTR_1129b5e30);
  return;
}



/* Entry: 104450614; end: 10445065b;  */

undefined8 FUN_104450614(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10445065c; end: 10445065f;  */

void FUN_10445065c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104450660; end: 10445083f;  */

void FUN_104450660(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 104450840; end: 10445089b; -[SCOperaABRLoggingConfig mediaVariantRegex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104450840(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11307a798))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11307a798);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10445089c; end: 10445089f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445089c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307a798);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044508a0; end: 10445096f; -[SCOperaABRLoggingConfig initWithMediaVariantRegex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044508a0(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_11307a798);
  *plVar1 = param_3;
  plVar1[1] = param_2;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104450970; end: 104450973; -[SCOperaABRLoggingConfig copyWithZone:] */

void FUN_104450970(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104450974; end: 10445098f; -[SCOperaABRLoggingConfig description] */

void FUN_104450974(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104450990; end: 1044509d7; -[SCOperaABRLoggingConfig init] */

void FUN_104450990(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCOperaConfig/SCOperaABRLoggingConfigWrapper.swift",0x32,2,0x23,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044509d8);
  (*pcVar1)();
}



/* Entry: 1044509d8; end: 1044509f3; +[SCOperaABRLoggingConfigBuilder operaABRLoggingConfig] */

void FUN_1044509d8(void)

{
  _swift_getObjCClassMetadata();
  _objc_allocWithZone();
  func_0x00010bfee200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044509f4; end: 104450a33; +[SCOperaABRLoggingConfigBuilder operaABRLoggingConfigWithExistingOperaABRLoggingConfig:] */

void FUN_1044509f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_104450c2c(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104450a34; end: 104450a97; -[SCOperaABRLoggingConfigBuilder withMediaVariantRegex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104450a34(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_11307a7a0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _objc_retain();
  _swift_bridgeObjectRelease(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104450a98; end: 104450b0b; -[SCOperaABRLoggingConfigBuilder build] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104450a98(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lStack_40;
  long lStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11307a7a0);
  uVar3 = ((undefined8 *)(param_1 + _DAT_11307a7a0))[1];
  FUN_104450ccc();
  lVar5 = param_1;
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(lVar5 + _DAT_11307a798);
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  puVar4 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = param_1;
  _swift_bridgeObjectRetain(uVar3);
  _objc_msgSendSuper2(&lStack_40,puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104450b0c; end: 104450b7f; -[SCOperaABRLoggingConfigBuilder safeBuildAndReturnError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104450b0c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lStack_40;
  long lStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11307a7a0);
  uVar3 = ((undefined8 *)(param_1 + _DAT_11307a7a0))[1];
  FUN_104450ccc();
  lVar5 = param_1;
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(lVar5 + _DAT_11307a798);
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  puVar4 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = param_1;
  _swift_bridgeObjectRetain(uVar3);
  _objc_msgSendSuper2(&lStack_40,puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104450b80; end: 104450bcb; -[SCOperaABRLoggingConfigBuilder init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104450b80(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  puVar1 = (undefined8 *)(param_1 + _DAT_11307a7a0);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104450bcc; end: 104450bcf;  */

void FUN_104450bcc(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104450bd0; end: 104450be3; -[SCOperaABRLoggingConfigBuilder .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104450bd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11307a7a0 + 8))
  ;
  return;
}



/* Entry: 104450be4; end: 104450c17;  */

void FUN_104450be4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104450c18; end: 104450c2b; -[SCOperaABRLoggingConfig .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104450c18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11307a798 + 8))
  ;
  return;
}



/* Entry: 104450c2c; end: 104450ccb;  */

/* WARNING: Possible PIC construction at 0x000104450c60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104450c64) */

void FUN_104450c2c(long param_1)

{
  if (param_1 == 0) {
    func_0x000104450cec();
    _objc_allocWithZone();
  }
  else {
    func_0x000104450cec();
    _objc_allocWithZone();
    _objc_retain(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 104450ccc; end: 104450d0b;  */

void FUN_104450ccc(void)

{
  _objc_opt_self(&PTR_PTR_1129b6000);
  return;
}



/* Entry: 104450d0c; end: 104450d13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104450d0c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307a798);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104450d14; end: 104450d23; -[SCOperaFastSwipeConfig enabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104450d14(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11307a7f8);
}



/* Entry: 104450d24; end: 104450d33; -[SCOperaFastSwipeConfig allowUserInteractionDuringAnimation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104450d24(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11307a800);
}



/* Entry: 104450d34; end: 104450d43; -[SCOperaFastSwipeConfig allowViewModelUpdatesBeforeMediaPrepared] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104450d34(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11307a808);
}



/* Entry: 104450d44; end: 104450d53; -[SCOperaFastSwipeConfig relativePositionCheckDisabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104450d44(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11307a810);
}



/* Entry: 104450d54; end: 104450ddf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104450d54(undefined1 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11307a7f8) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_11307a800) = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_11307a808) = param_3;
  *(undefined1 *)(unaff_x20 + _DAT_11307a810) = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104450de0; end: 104450e6b; -[SCOperaFastSwipeConfig initWithEnabled:allowUserInteractionDuringAnimation:allowViewModelUpdatesBeforeMediaPrepared:relativePositionCheckDisabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104450de0(long param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  long lVar1;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined1 *)(param_1 + _DAT_11307a7f8) = param_3;
  *(undefined1 *)(param_1 + _DAT_11307a800) = param_4;
  *(undefined1 *)(param_1 + _DAT_11307a808) = param_5;
  *(undefined1 *)(param_1 + _DAT_11307a810) = param_6;
  lStack_50 = param_1;
  lStack_48 = lVar1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104450e6c; end: 104450eeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104450e6c(undefined4 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(byte *)(unaff_x20 + _DAT_11307a7f8) = (byte)param_1 & 1;
  *(byte *)(unaff_x20 + _DAT_11307a800) = (byte)((uint)param_1 >> 8) & 1;
  *(byte *)(unaff_x20 + _DAT_11307a808) = (byte)((uint)param_1 >> 0x10) & 1;
  *(byte *)(unaff_x20 + _DAT_11307a810) = (byte)((uint)param_1 >> 0x18) & 1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104450eec; end: 104450eef; -[SCOperaFastSwipeConfig copyWithZone:] */

void FUN_104450eec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104450ef0; end: 104450f0b; -[SCOperaFastSwipeConfig description] */

void FUN_104450ef0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104450f0c; end: 104450f53; -[SCOperaFastSwipeConfig init] */

void FUN_104450f0c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCOperaConfig/SCOperaFastSwipeConfigWrapper.swift",0x31,2,0x32,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104450f54);
  (*pcVar1)();
}



/* Entry: 104450f54; end: 104450f6f; +[SCOperaFastSwipeConfigBuilder operaFastSwipeConfig] */

void FUN_104450f54(void)

{
  _swift_getObjCClassMetadata();
  _objc_allocWithZone();
  func_0x00010bfee200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104450f70; end: 104450faf; +[SCOperaFastSwipeConfigBuilder operaFastSwipeConfigWithExistingOperaFastSwipeConfig:] */

void FUN_104450f70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_104451218(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104450fb0; end: 104450fbf; -[SCOperaFastSwipeConfigBuilder withEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104450fb0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11307a818) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 104450fc0; end: 104450fcf; -[SCOperaFastSwipeConfigBuilder withAllowUserInteractionDuringAnimation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104450fc0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11307a820) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 104450fd0; end: 104450fdf; -[SCOperaFastSwipeConfigBuilder withAllowViewModelUpdatesBeforeMediaPrepared:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104450fd0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11307a828) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 104450fe0; end: 104450fef; -[SCOperaFastSwipeConfigBuilder withRelativePositionCheckDisabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104450fe0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11307a830) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 104450ff0; end: 1044510e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104450ff0(long param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  bVar1 = *(byte *)(unaff_x20 + _DAT_11307a818);
  if (bVar1 == 2) {
    *(undefined1 *)(unaff_x20 + _DAT_11307a818) = 0;
  }
  bVar2 = *(byte *)(unaff_x20 + _DAT_11307a820);
  if (bVar2 == 2) {
    *(undefined1 *)(unaff_x20 + _DAT_11307a820) = 0;
  }
  bVar3 = *(byte *)(unaff_x20 + _DAT_11307a828);
  if (bVar3 == 2) {
    *(undefined1 *)(unaff_x20 + _DAT_11307a828) = 0;
  }
  bVar4 = *(byte *)(unaff_x20 + _DAT_11307a830);
  if (bVar4 == 2) {
    *(undefined1 *)(unaff_x20 + _DAT_11307a830) = 0;
  }
  FUN_1044512e8();
  lVar5 = param_1;
  _objc_allocWithZone();
  *(byte *)(lVar5 + _DAT_11307a7f8) = bVar1 & 1;
  *(byte *)(lVar5 + _DAT_11307a800) = bVar2 & 1;
  *(byte *)(lVar5 + _DAT_11307a808) = bVar3 & 1;
  *(byte *)(lVar5 + _DAT_11307a810) = bVar4 & 1;
  lStack_50 = lVar5;
  lStack_48 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044510e8; end: 10445112b; -[SCOperaFastSwipeConfigBuilder build] */

void FUN_1044510e8(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104450ff0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10445112c; end: 10445116f; -[SCOperaFastSwipeConfigBuilder safeBuildAndReturnError:] */

void FUN_10445112c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104450ff0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104451170; end: 1044511df; -[SCOperaFastSwipeConfigBuilder init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104451170(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined1 *)(param_1 + _DAT_11307a818) = 2;
  *(undefined1 *)(param_1 + _DAT_11307a820) = 2;
  *(undefined1 *)(param_1 + _DAT_11307a828) = 2;
  *(undefined1 *)(param_1 + _DAT_11307a830) = 2;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044511e0; end: 1044511e3;  */

void FUN_1044511e0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1044511e4; end: 104451217;  */

void FUN_1044511e4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104451218; end: 1044512e7;  */

/* WARNING: Possible PIC construction at 0x00010445124c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104451250) */

void FUN_104451218(long param_1)

{
  if (param_1 == 0) {
    func_0x000104451308();
    _objc_allocWithZone();
  }
  else {
    func_0x000104451308();
    _objc_allocWithZone();
    _objc_retain(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}


