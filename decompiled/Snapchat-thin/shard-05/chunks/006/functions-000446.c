/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103ff976c; end: 103ff97eb;  */

uint FUN_103ff976c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
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
  
  uVar1 = 0;
  uStack_f8 = param_1[0xd];
  uStack_100 = param_1[0xc];
  uStack_e8 = param_1[0xf];
  uStack_f0 = param_1[0xe];
  uStack_d8 = param_1[0x11];
  uStack_e0 = param_1[0x10];
  uStack_c8 = param_1[0x13];
  uStack_d0 = param_1[0x12];
  uStack_138 = param_1[5];
  uStack_140 = param_1[4];
  uStack_128 = param_1[7];
  uStack_130 = param_1[6];
  uStack_118 = param_1[9];
  uStack_120 = param_1[8];
  uStack_108 = param_1[0xb];
  uStack_110 = param_1[10];
  uStack_158 = param_1[1];
  uStack_160 = *param_1;
  uStack_148 = param_1[3];
  uStack_150 = param_1[2];
  uStack_58 = param_2[0xd];
  uStack_60 = param_2[0xc];
  uStack_48 = param_2[0xf];
  uStack_50 = param_2[0xe];
  uStack_38 = param_2[0x11];
  uStack_40 = param_2[0x10];
  uStack_28 = param_2[0x13];
  uStack_30 = param_2[0x12];
  uStack_98 = param_2[5];
  uStack_a0 = param_2[4];
  uStack_88 = param_2[7];
  uStack_90 = param_2[6];
  uStack_78 = param_2[9];
  uStack_80 = param_2[8];
  uStack_68 = param_2[0xb];
  uStack_70 = param_2[10];
  uStack_b8 = param_2[1];
  uStack_c0 = *param_2;
  uStack_a8 = param_2[3];
  uStack_b0 = param_2[2];
  FUN_103fff200(&uStack_160,&uStack_c0);
  return uVar1 & 1;
}



/* Entry: 103ff97ec; end: 103ff9833;  */

void FUN_103ff97ec(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dcc0d20,0x66,2);
  uRam0000000113812a68 = uStack_38;
  uRam0000000113812a60 = uStack_40;
  uRam0000000113812a78 = uStack_28;
  uRam0000000113812a70 = uStack_30;
  uRam0000000113812a88 = uStack_18;
  uRam0000000113812a80 = uStack_20;
  return;
}



/* Entry: 103ff9834; end: 103ff998f;  */

/* WARNING: Removing unreachable block (ram,0x000103ff9900) */
/* WARNING: Removing unreachable block (ram,0x000103ff9954) */
/* WARNING: Removing unreachable block (ram,0x000103ff9970) */
/* WARNING: Removing unreachable block (ram,0x000103ff998c) */

void FUN_103ff9834(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 4) {
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 0x180);
          func_0x000103ffec84();
          (*pcVar4)();
        }
        else if (lVar1 == 2) {
          FUN_103ff9990();
        }
        else if (lVar1 == 3) {
          FUN_103ff9b08();
        }
      }
      else if (lVar1 == 4) {
        FUN_103ff9cec();
      }
      else {
        if (lVar1 == 5) {
          pcVar4 = *(code **)(param_3 + 0x150);
          lVar1 = unaff_x20 + 0x40;
        }
        else {
          if (lVar1 != 6) goto LAB_103ff98ac;
          pcVar4 = *(code **)(param_3 + 0x150);
          lVar1 = unaff_x20 + 0x50;
        }
        (*pcVar4)(lVar1,param_2,param_3);
      }
LAB_103ff98ac:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 103ff9990; end: 103ff9b07;  */

/* WARNING: Removing unreachable block (ram,0x000103ff9ac8) */

void FUN_103ff9990(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x21;
  code *pcVar11;
  long lVar12;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_68 = 0;
  lStack_78 = 0;
  uStack_70 = 0;
  uVar1 = *(ulong *)(param_1 + 0x38) & 0x3000000000000000;
  lVar10 = param_1;
  if (uVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    lVar12 = *(long *)(param_1 + 0x10);
    FUN_103ffe8dc(lVar12,uVar2,uVar6,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30)
                 );
    lVar10 = 0;
    FUN_104004164(0,0,0);
    lStack_78 = lVar12;
    uStack_70 = uVar2;
    uStack_68 = uVar6;
  }
  pcVar11 = *(code **)(param_4 + 0x198);
  FUN_10400076c();
  (*pcVar11)(&lStack_78,&UNK_1107333d8,lVar10,param_3,param_4);
  uVar6 = uStack_68;
  uVar2 = uStack_70;
  lVar10 = lStack_78;
  if ((unaff_x21 == 0) && (lStack_78 != 0)) {
    if (uVar1 == 0x3000000000000000) {
      _swift_bridgeObjectRetain();
      func_0x00010006c00c(uVar2,uVar6);
    }
    else {
      pcVar11 = *(code **)(param_4 + 8);
      _swift_bridgeObjectRetain();
      func_0x00010006c00c(uVar2,uVar6);
      (*pcVar11)(param_3,param_4);
    }
    FUN_104004164(lStack_78,uStack_70,uStack_68);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    uVar9 = *(undefined8 *)(param_1 + 0x38);
    *(long *)(param_1 + 0x10) = lVar10;
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    *(undefined8 *)(param_1 + 0x20) = uVar6;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    func_0x000100db10b0(uVar3,uVar7,uVar4,uVar8,uVar5,uVar9);
  }
  else {
    FUN_104004164(lStack_78,uStack_70,uStack_68);
  }
  return;
}



/* Entry: 103ff9b08; end: 103ff9ceb;  */

/* WARNING: Removing unreachable block (ram,0x000103ff9c64) */

void FUN_103ff9b08(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long unaff_x21;
  code *pcVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_70 = 0xf000000000000000;
  uVar14 = *(ulong *)(param_1 + 0x38) & 0x3000000000000000;
  lVar11 = param_1;
  if (uVar14 == 0x1000000000000000) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    uVar6 = *(ulong *)(param_1 + 0x30);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    uVar13 = *(undefined8 *)(param_1 + 0x10);
    FUN_103ffe8dc(uVar13,uVar2,uVar7,uVar1,uVar6);
    lVar11 = 0;
    func_0x000104004198(0,0,0,0,0xf000000000000000);
    uStack_90 = uVar13;
    uStack_88 = uVar2;
    uStack_80 = uVar7;
    uStack_78 = uVar1;
    uStack_70 = uVar6;
  }
  pcVar12 = *(code **)(param_4 + 0x198);
  FUN_104000868();
  (*pcVar12)(&uStack_90,&UNK_110733458,lVar11,param_3,param_4);
  uVar6 = uStack_70;
  uVar13 = uStack_78;
  uVar7 = uStack_80;
  uVar2 = uStack_88;
  uVar1 = uStack_90;
  if ((unaff_x21 == 0) && (uStack_70 >> 0x3c < 0xf)) {
    if (uVar14 == 0x3000000000000000) {
      func_0x00010174c278();
      func_0x00010006c00c(uVar13,uVar6);
    }
    else {
      pcVar12 = *(code **)(param_4 + 8);
      func_0x00010174c278();
      func_0x00010006c00c(uVar13,uVar6);
      (*pcVar12)(param_3,param_4);
    }
    func_0x000104004198(uStack_90,uStack_88,uStack_80,uStack_78,uStack_70);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uVar8 = *(undefined8 *)(param_1 + 0x18);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uVar9 = *(undefined8 *)(param_1 + 0x28);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    uVar10 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    *(undefined8 *)(param_1 + 0x20) = uVar7;
    *(undefined8 *)(param_1 + 0x28) = uVar13;
    *(ulong *)(param_1 + 0x30) = uVar6;
    *(undefined8 *)(param_1 + 0x38) = 0x1000000000000000;
    func_0x000100db10b0(uVar3,uVar8,uVar4,uVar9,uVar5,uVar10);
  }
  else {
    func_0x000104004198(uStack_90,uStack_88,uStack_80,uStack_78,uStack_70);
  }
  return;
}



/* Entry: 103ff9cec; end: 103ff9ee3;  */

/* WARNING: Removing unreachable block (ram,0x000103ff9e84) */

void FUN_103ff9cec(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long unaff_x21;
  code *pcVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  lStack_88 = 0;
  uStack_90 = 0;
  uVar12 = *(ulong *)(param_1 + 0x38);
  uVar15 = uVar12 & 0x3000000000000000;
  lVar11 = param_1;
  if (uVar15 == 0x2000000000000000) {
    uVar1 = *(ulong *)(param_1 + 0x28);
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    lVar2 = *(long *)(param_1 + 0x18);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    uVar14 = *(undefined8 *)(param_1 + 0x10);
    FUN_103ffe8dc(uVar14,lVar2,uVar7,uVar1,uVar6);
    lVar11 = 0;
    func_0x0001040041d4(0,0,0,0,0,0);
    uStack_78 = uVar1 & 0xff;
    uStack_90 = uVar14;
    lStack_88 = lVar2;
    uStack_80 = uVar7;
    uStack_70 = uVar6;
    uStack_68 = uVar12 & 0xcfffffffffffffff;
  }
  pcVar13 = *(code **)(param_4 + 0x198);
  FUN_104000964();
  (*pcVar13)(&uStack_90,&UNK_110733568,lVar11,param_3,param_4);
  uVar1 = uStack_68;
  uVar14 = uStack_70;
  uVar12 = uStack_78;
  uVar7 = uStack_80;
  lVar11 = lStack_88;
  uVar6 = uStack_90;
  if ((unaff_x21 == 0) && (lStack_88 != 0)) {
    if (uVar15 == 0x3000000000000000) {
      _swift_bridgeObjectRetain(lStack_88);
      func_0x00010006c00c(uVar14,uVar1);
    }
    else {
      pcVar13 = *(code **)(param_4 + 8);
      _swift_bridgeObjectRetain(lStack_88);
      func_0x00010006c00c(uVar14,uVar1);
      (*pcVar13)(param_3,param_4);
    }
    func_0x0001040041d4(uStack_90,lStack_88,uStack_80,uStack_78,uStack_70,uStack_68);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uVar8 = *(undefined8 *)(param_1 + 0x18);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uVar9 = *(undefined8 *)(param_1 + 0x28);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    uVar10 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x10) = uVar6;
    *(long *)(param_1 + 0x18) = lVar11;
    *(undefined8 *)(param_1 + 0x20) = uVar7;
    *(ulong *)(param_1 + 0x28) = uVar12 & 0xff;
    *(undefined8 *)(param_1 + 0x30) = uVar14;
    *(ulong *)(param_1 + 0x38) = uVar1 | 0x2000000000000000;
    func_0x000100db10b0(uVar3,uVar8,uVar4,uVar9,uVar5,uVar10);
  }
  else {
    func_0x0001040041d4(uStack_90,lStack_88,uStack_80,uStack_78,uStack_70,uStack_68);
  }
  return;
}



/* Entry: 103ff9ee4; end: 103ffa033;  */

void FUN_103ff9ee4(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint uVar4;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar5;
  long lStack_50;
  undefined1 uStack_48;
  
  if (*unaff_x20 != 0) {
    uStack_48 = (undefined1)unaff_x20[1];
    pcVar5 = *(code **)(param_3 + 0x80);
    uVar3 = param_1;
    lStack_50 = *unaff_x20;
    func_0x000103ffec84();
    (*pcVar5)(&lStack_50,1,&UNK_110732e80,uVar3,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  if (((unaff_x20[7] ^ 0xffffffffffffffffU) & 0x3000000000000000) != 0) {
    uVar4 = (uint)((ulong)unaff_x20[7] >> 0x3c) & 3;
    if (uVar4 == 0) {
      FUN_103ffa034();
    }
    else if (uVar4 == 1) {
      FUN_103ffa0c0();
    }
    else {
      FUN_103ffa154();
    }
    if (unaff_x21 != 0) {
      return;
    }
  }
  uVar2 = unaff_x20[9];
  uVar1 = unaff_x20[8] & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) ||
     ((**(code **)(param_3 + 0x70))(unaff_x20[8],uVar2,5,param_2,param_3), unaff_x21 == 0)) {
    uVar2 = unaff_x20[0xb];
    uVar1 = unaff_x20[10] & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if ((uVar1 == 0) ||
       ((**(code **)(param_3 + 0x70))(unaff_x20[10],uVar2,6,param_2,param_3), unaff_x21 == 0)) {
      func_0x000100076224(param_1,unaff_x20[0xc],unaff_x20[0xd],param_2,param_3);
    }
  }
  return;
}



/* Entry: 103ffa034; end: 103ffa0bf;  */

void FUN_103ffa034(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if ((*(byte *)(param_1 + 0x3f) & 0x30) == 0) {
    uStack_50 = *(undefined8 *)(param_1 + 0x20);
    uStack_58 = *(undefined8 *)(param_1 + 0x18);
    uStack_60 = *(undefined8 *)(param_1 + 0x10);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_10400076c();
    (*pcVar1)(&uStack_60,2,&UNK_1107333d8,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ffa0c0);
  (*pcVar1)();
}



/* Entry: 103ffa0c0; end: 103ffa153;  */

void FUN_103ffa0c0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if ((*(ulong *)(param_1 + 0x38) & 0x3000000000000000) == 0x1000000000000000) {
    uStack_50 = *(undefined8 *)(param_1 + 0x30);
    uStack_68 = *(undefined8 *)(param_1 + 0x18);
    uStack_70 = *(undefined8 *)(param_1 + 0x10);
    uStack_58 = *(undefined8 *)(param_1 + 0x28);
    uStack_60 = *(undefined8 *)(param_1 + 0x20);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_104000868();
    (*pcVar1)(&uStack_70,3,&UNK_110733458,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ffa154);
  (*pcVar1)();
}



/* Entry: 103ffa154; end: 103ffa1eb;  */

void FUN_103ffa154(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  if ((*(ulong *)(param_1 + 0x38) & 0x3000000000000000) == 0x2000000000000000) {
    uStack_50 = *(undefined8 *)(param_1 + 0x30);
    uStack_48 = *(ulong *)(param_1 + 0x38) & 0xcfffffffffffffff;
    uStack_68 = *(undefined8 *)(param_1 + 0x18);
    uStack_70 = *(undefined8 *)(param_1 + 0x10);
    uStack_58 = *(undefined8 *)(param_1 + 0x28);
    uStack_60 = *(undefined8 *)(param_1 + 0x20);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_104000964();
    (*pcVar1)(&uStack_70,4,&UNK_110733568,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ffa1ec);
  (*pcVar1)();
}



/* Entry: 103ffa1ec; end: 103ffa263;  */

void FUN_103ffa1ec(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[7] = 0x3000000000000000;
  param_1[9] = 0xe000000000000000;
  param_1[10] = 0;
  param_1[0xb] = 0xe000000000000000;
  param_1[0xd] = 0xc000000000000000;
  param_1[0xc] = 0;
  return;
}



/* Entry: 103ffa264; end: 103ffa277;  */

void FUN_103ffa264(void)

{
  FUN_103ff9834();
  return;
}



/* Entry: 103ffa278; end: 103ffa2bf;  */

void FUN_103ffa278(void)

{
  FUN_103ff9ee4();
  return;
}



/* Entry: 103ffa2c0; end: 103ffa2f7;  */

uint FUN_103ffa2c0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x000104003fe4();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 103ffa2f8; end: 103ffa35f;  */

uint FUN_103ffa2f8(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  uStack_38 = param_1[9];
  uStack_40 = param_1[8];
  uStack_28 = param_1[0xb];
  uStack_30 = param_1[10];
  uStack_18 = param_1[0xd];
  uStack_20 = param_1[0xc];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_e8 = unaff_x20[1];
  uStack_f0 = *unaff_x20;
  uStack_d8 = unaff_x20[3];
  uStack_e0 = unaff_x20[2];
  uStack_c8 = unaff_x20[5];
  uStack_d0 = unaff_x20[4];
  uStack_b8 = unaff_x20[7];
  uStack_c0 = unaff_x20[6];
  uStack_98 = unaff_x20[0xb];
  uStack_a0 = unaff_x20[10];
  uStack_88 = unaff_x20[0xd];
  uStack_90 = unaff_x20[0xc];
  uStack_a8 = unaff_x20[9];
  uStack_b0 = unaff_x20[8];
  FUN_103fff5c0(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 103ffa360; end: 103ffa3ff;  */

void FUN_103ffa360(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam00000001130462a8 != -1) {
    _swift_once(0x1130462a8,FUN_103ff97ec);
  }
  uVar5 = uRam0000000113812a88;
  uVar4 = uRam0000000113812a80;
  uVar3 = uRam0000000113812a78;
  uVar2 = uRam0000000113812a70;
  uVar1 = uRam0000000113812a68;
  *param_1 = uRam0000000113812a60;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 103ffa400; end: 103ffa413;  */

void FUN_103ffa400(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113046598;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113046598,&UNK_10dcc0a38);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 103ffa414; end: 103ffa447;  */

void FUN_103ffa414(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  __sSS10reflectingSSx_tclufC(&uStack_18,param_3);
  return;
}



/* Entry: 103ffa448; end: 103ffa573;  */

void FUN_103ffa448(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_e8 [72];
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
  
  uStack_58 = unaff_x20[9];
  uStack_60 = unaff_x20[8];
  uStack_48 = unaff_x20[0xb];
  uStack_50 = unaff_x20[10];
  uStack_38 = unaff_x20[0xd];
  uStack_40 = unaff_x20[0xc];
  uStack_98 = unaff_x20[1];
  uStack_a0 = *unaff_x20;
  uStack_88 = unaff_x20[3];
  uStack_90 = unaff_x20[2];
  uStack_78 = unaff_x20[5];
  uStack_80 = unaff_x20[4];
  uStack_68 = unaff_x20[7];
  uStack_70 = unaff_x20[6];
  __ss6HasherV5_seedABSi_tcfC(auStack_e8,0);
  __sSH4hash4intoys6HasherVz_tFTj(auStack_e8,param_1,param_2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103ffa574; end: 103ffa61f;  */

uint FUN_103ffa574(undefined8 *param_1,undefined8 *param_2)

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
  FUN_103fff5c0(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 103ffa620; end: 103ffa6e7;  */

/* WARNING: Removing unreachable block (ram,0x000103ffa6b8) */

void FUN_103ffa620(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  while ((lVar1 = param_2, lVar2 = param_3, (*pcVar3)(), unaff_x21 == 0 &&
         (((uint)lVar2 & 0xff) != 1))) {
    if (lVar1 == 3) {
      FUN_103ffac18();
    }
    else if (lVar1 == 2) {
      FUN_103ffa970();
    }
    else if (lVar1 == 1) {
      FUN_103ffa6e8();
    }
  }
  return;
}



/* Entry: 103ffa6e8; end: 103ffa96f;  */

/* WARNING: Removing unreachable block (ram,0x000103ffa8d4) */

void FUN_103ffa6e8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x21;
  code *pcVar5;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  ulong uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  ulong uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 uStack_180;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
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
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_80 = 0;
  uStack_78 = 0xf000000000000000;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  cVar1 = *(char *)(param_1 + 0xc);
  puVar2 = param_1;
  if (cVar1 != -1) {
    uStack_148 = param_1[5];
    uStack_150 = param_1[4];
    uStack_138 = param_1[7];
    uStack_140 = param_1[6];
    uStack_128 = param_1[9];
    uStack_130 = param_1[8];
    uStack_118 = param_1[0xb];
    uStack_120 = param_1[10];
    uStack_168 = param_1[1];
    uStack_170 = *param_1;
    uStack_158 = param_1[3];
    uStack_160 = param_1[2];
    if (cVar1 == '\0') {
      uStack_218 = 0;
      uStack_220 = 0;
      uStack_208 = 0xf000000000000000;
      uStack_210 = 0;
      uStack_1f8 = 0;
      uStack_200 = 0;
      uStack_1e8 = 0;
      uStack_1f0 = 0;
      uStack_238 = 0;
      uStack_240 = 0;
      uStack_228 = 0;
      uStack_230 = 0;
      uStack_1b8 = param_1[5];
      uStack_1c0 = param_1[4];
      uStack_1a8 = param_1[7];
      uStack_1b0 = param_1[6];
      uStack_198 = param_1[9];
      uStack_1a0 = param_1[8];
      uStack_188 = param_1[0xb];
      uStack_190 = param_1[10];
      uStack_1d8 = param_1[1];
      uStack_1e0 = *param_1;
      uStack_1c8 = param_1[3];
      uStack_1d0 = param_1[2];
      uStack_180 = 0;
      FUN_103ffeb40(&uStack_1e0,&uStack_2b0);
      puVar2 = &uStack_240;
      func_0x00010400420c(puVar2,0x1130465e8,&UNK_10dcc0c98);
      uStack_88 = uStack_148;
      uStack_90 = uStack_150;
      uStack_78 = uStack_138;
      uStack_80 = uStack_140;
      uStack_68 = uStack_128;
      uStack_70 = uStack_130;
      uStack_58 = uStack_118;
      uStack_60 = uStack_120;
      uStack_a8 = uStack_168;
      uStack_b0 = uStack_170;
      uStack_98 = uStack_158;
      uStack_a0 = uStack_160;
    }
  }
  pcVar5 = *(code **)(param_4 + 0x198);
  func_0x000104004124();
  (*pcVar5)(&uStack_b0,&UNK_110734818,puVar2,param_3,param_4);
  if (unaff_x21 == 0) {
    uStack_288 = uStack_88;
    uStack_290 = uStack_90;
    uStack_278 = uStack_78;
    uStack_280 = uStack_80;
    uStack_268 = uStack_68;
    uStack_270 = uStack_70;
    uStack_258 = uStack_58;
    uStack_260 = uStack_60;
    uStack_2a8 = uStack_a8;
    uStack_2b0 = uStack_b0;
    uStack_298 = uStack_98;
    uStack_2a0 = uStack_a0;
    uStack_108 = uStack_a8;
    uStack_110 = uStack_b0;
    uStack_f8 = uStack_98;
    uStack_100 = uStack_a0;
    uStack_e8 = uStack_88;
    uStack_f0 = uStack_90;
    uStack_d8 = uStack_78;
    uStack_e0 = uStack_80;
    uStack_c8 = uStack_68;
    uStack_d0 = uStack_70;
    uStack_b8 = uStack_58;
    uStack_c0 = uStack_60;
    if (uStack_78 >> 0x3c < 0xf) {
      if (cVar1 == -1) {
        uStack_1b8 = uStack_88;
        uStack_1c0 = uStack_90;
        uStack_1a8 = uStack_78;
        uStack_1b0 = uStack_80;
        uStack_198 = uStack_68;
        uStack_1a0 = uStack_70;
        uStack_188 = uStack_58;
        uStack_190 = uStack_60;
        uStack_1d8 = uStack_a8;
        uStack_1e0 = uStack_b0;
        uStack_1c8 = uStack_98;
        uStack_1d0 = uStack_a0;
        func_0x000103ff47cc(&uStack_1e0,&uStack_170);
      }
      else {
        pcVar5 = *(code **)(param_4 + 8);
        uStack_1b8 = uStack_88;
        uStack_1c0 = uStack_90;
        uStack_1a8 = uStack_78;
        uStack_1b0 = uStack_80;
        uStack_198 = uStack_68;
        uStack_1a0 = uStack_70;
        uStack_188 = uStack_58;
        uStack_190 = uStack_60;
        uStack_1d8 = uStack_a8;
        uStack_1e0 = uStack_b0;
        uStack_1c8 = uStack_98;
        uStack_1d0 = uStack_a0;
        func_0x000103ff47cc(&uStack_1e0,&uStack_170);
        (*pcVar5)(param_3,param_4);
      }
      func_0x00010400420c(&uStack_b0,0x1130465e8,&UNK_10dcc0c98);
      uStack_198 = param_1[9];
      uStack_1a0 = param_1[8];
      uStack_188 = param_1[0xb];
      uStack_190 = param_1[10];
      uStack_180 = *(undefined1 *)(param_1 + 0xc);
      uStack_1d8 = param_1[1];
      uStack_1e0 = *param_1;
      uStack_1c8 = param_1[3];
      uStack_1d0 = param_1[2];
      uStack_1b8 = param_1[5];
      uStack_1c0 = param_1[4];
      uStack_1a8 = param_1[7];
      uStack_1b0 = param_1[6];
      param_1[1] = uStack_108;
      *param_1 = uStack_110;
      param_1[3] = uStack_f8;
      param_1[2] = uStack_100;
      param_1[9] = uStack_c8;
      param_1[8] = uStack_d0;
      param_1[0xb] = uStack_b8;
      param_1[10] = uStack_c0;
      param_1[5] = uStack_e8;
      param_1[4] = uStack_f0;
      param_1[7] = uStack_d8;
      param_1[6] = uStack_e0;
      *(undefined1 *)(param_1 + 0xc) = 0;
      uVar3 = 0x113045ed8;
      puVar4 = &UNK_10dcbf340;
      puVar2 = &uStack_1e0;
      goto LAB_103ffa840;
    }
  }
  uVar3 = 0x1130465e8;
  puVar4 = &UNK_10dcc0c98;
  puVar2 = &uStack_b0;
LAB_103ffa840:
  func_0x00010400420c(puVar2,uVar3,puVar4);
  return;
}



/* Entry: 103ffa970; end: 103ffac17;  */

/* WARNING: Removing unreachable block (ram,0x000103ffab78) */

void FUN_103ffa970(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x21;
  code *pcVar5;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  ulong uStack_228;
  undefined8 uStack_220;
  undefined5 uStack_218;
  undefined3 uStack_213;
  undefined5 uStack_210;
  undefined8 uStack_20b;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  ulong uStack_1b8;
  undefined8 uStack_1b0;
  undefined5 uStack_1a8;
  undefined3 uStack_1a3;
  undefined5 uStack_1a0;
  undefined3 uStack_19b;
  undefined5 uStack_198;
  undefined3 uStack_193;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  ulong uStack_158;
  undefined8 uStack_150;
  undefined5 uStack_148;
  undefined3 uStack_143;
  undefined5 uStack_140;
  undefined3 uStack_13b;
  undefined5 uStack_138;
  undefined3 uStack_133;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined5 uStack_d8;
  undefined3 uStack_d3;
  undefined5 uStack_d0;
  undefined8 uStack_cb;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined5 uStack_88;
  undefined3 uStack_83;
  undefined5 uStack_80;
  undefined3 uStack_7b;
  undefined5 uStack_78;
  
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_a0 = 0;
  uStack_98 = 0xf000000000000000;
  uStack_88 = 0;
  uStack_83 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  uStack_7b = 0;
  uStack_78 = 0;
  cVar1 = *(char *)(param_1 + 0xc);
  puVar2 = param_1;
  if (cVar1 != -1) {
    uStack_1b8 = param_1[5];
    uStack_1c0 = param_1[4];
    uStack_1b0 = param_1[6];
    uStack_1a8 = (undefined5)param_1[7];
    uStack_1a3 = (undefined3)((ulong)param_1[7] >> 0x28);
    uStack_188 = param_1[0xb];
    uStack_190 = param_1[10];
    uStack_198 = (undefined5)param_1[9];
    uStack_193 = (undefined3)((ulong)param_1[9] >> 0x28);
    uStack_1a0 = (undefined5)param_1[8];
    uStack_19b = (undefined3)((ulong)param_1[8] >> 0x28);
    uStack_1d8 = param_1[1];
    uStack_1e0 = *param_1;
    uStack_1c8 = param_1[3];
    uStack_1d0 = param_1[2];
    if (cVar1 == '\x01') {
      uStack_e8 = 0xf000000000000000;
      uStack_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_cb = 0;
      uStack_d3 = 0;
      uStack_d0 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_158 = param_1[5];
      uStack_160 = param_1[4];
      uStack_150 = param_1[6];
      uStack_148 = (undefined5)param_1[7];
      uStack_143 = (undefined3)((ulong)param_1[7] >> 0x28);
      uStack_128 = param_1[0xb];
      uStack_130 = param_1[10];
      uStack_138 = (undefined5)param_1[9];
      uStack_133 = (undefined3)((ulong)param_1[9] >> 0x28);
      uStack_140 = (undefined5)param_1[8];
      uStack_13b = (undefined3)((ulong)param_1[8] >> 0x28);
      uStack_178 = param_1[1];
      uStack_180 = *param_1;
      uStack_168 = param_1[3];
      uStack_170 = param_1[2];
      uStack_120 = 1;
      FUN_103ffeb40(&uStack_180,&uStack_250);
      puVar2 = &uStack_110;
      func_0x00010400420c(puVar2,0x1130465f0,&UNK_10dcc0ca0);
      uStack_98 = uStack_1b8;
      uStack_a0 = uStack_1c0;
      uStack_88 = uStack_1a8;
      uStack_90 = uStack_1b0;
      uStack_7b = uStack_19b;
      uStack_78 = uStack_198;
      uStack_83 = uStack_1a3;
      uStack_80 = uStack_1a0;
      uStack_b8 = uStack_1d8;
      uStack_c0 = uStack_1e0;
      uStack_a8 = uStack_1c8;
      uStack_b0 = uStack_1d0;
    }
  }
  pcVar5 = *(code **)(param_4 + 0x198);
  FUN_104000b5c();
  (*pcVar5)(&uStack_c0,&UNK_110733700,puVar2,param_3,param_4);
  if (unaff_x21 == 0) {
    uStack_1b8 = uStack_98;
    uStack_1c0 = uStack_a0;
    uStack_1a8 = uStack_88;
    uStack_1b0 = uStack_90;
    uStack_20b = CONCAT53(uStack_78,uStack_7b);
    uStack_19b = uStack_7b;
    uStack_198 = uStack_78;
    uStack_1a3 = uStack_83;
    uStack_1a0 = uStack_80;
    uStack_1d8 = uStack_b8;
    uStack_1e0 = uStack_c0;
    uStack_1c8 = uStack_a8;
    uStack_1d0 = uStack_b0;
    uStack_228 = uStack_98;
    uStack_230 = uStack_a0;
    uStack_218 = uStack_88;
    uStack_220 = uStack_90;
    uStack_213 = uStack_83;
    uStack_210 = uStack_80;
    uStack_248 = uStack_b8;
    uStack_250 = uStack_c0;
    uStack_238 = uStack_a8;
    uStack_240 = uStack_b0;
    if (uStack_98 >> 0x3c < 0xf) {
      if (cVar1 == -1) {
        uStack_158 = uStack_98;
        uStack_160 = uStack_a0;
        uStack_148 = uStack_88;
        uStack_150 = uStack_90;
        uStack_13b = uStack_7b;
        uStack_138 = uStack_78;
        uStack_143 = uStack_83;
        uStack_140 = uStack_80;
        uStack_178 = uStack_b8;
        uStack_180 = uStack_c0;
        uStack_168 = uStack_a8;
        uStack_170 = uStack_b0;
        FUN_103ff4a08(&uStack_180,&uStack_110);
      }
      else {
        pcVar5 = *(code **)(param_4 + 8);
        uStack_158 = uStack_98;
        uStack_160 = uStack_a0;
        uStack_148 = uStack_88;
        uStack_150 = uStack_90;
        uStack_13b = uStack_7b;
        uStack_138 = uStack_78;
        uStack_143 = uStack_83;
        uStack_140 = uStack_80;
        uStack_178 = uStack_b8;
        uStack_180 = uStack_c0;
        uStack_168 = uStack_a8;
        uStack_170 = uStack_b0;
        FUN_103ff4a08(&uStack_180,&uStack_110);
        (*pcVar5)(param_3,param_4);
      }
      func_0x00010400420c(&uStack_c0,0x1130465f0,&UNK_10dcc0ca0);
      uStack_128 = param_1[0xb];
      uStack_130 = param_1[10];
      uStack_138 = (undefined5)param_1[9];
      uStack_133 = (undefined3)((ulong)param_1[9] >> 0x28);
      uStack_140 = (undefined5)param_1[8];
      uStack_13b = (undefined3)((ulong)param_1[8] >> 0x28);
      uStack_120 = *(undefined1 *)(param_1 + 0xc);
      uStack_178 = param_1[1];
      uStack_180 = *param_1;
      uStack_168 = param_1[3];
      uStack_170 = param_1[2];
      uStack_158 = param_1[5];
      uStack_160 = param_1[4];
      uStack_150 = param_1[6];
      uStack_148 = (undefined5)param_1[7];
      uStack_143 = (undefined3)((ulong)param_1[7] >> 0x28);
      *(undefined8 *)((long)param_1 + 0x45) = uStack_20b;
      *(ulong *)((long)param_1 + 0x3d) = CONCAT53(uStack_210,uStack_213);
      param_1[5] = uStack_228;
      param_1[4] = uStack_230;
      param_1[7] = CONCAT35(uStack_213,uStack_218);
      param_1[6] = uStack_220;
      param_1[1] = uStack_248;
      *param_1 = uStack_250;
      param_1[3] = uStack_238;
      param_1[2] = uStack_240;
      *(undefined1 *)(param_1 + 0xc) = 1;
      uVar3 = 0x113045ed8;
      puVar4 = &UNK_10dcbf340;
      puVar2 = &uStack_180;
      goto LAB_103ffaae0;
    }
  }
  uVar3 = 0x1130465f0;
  puVar4 = &UNK_10dcc0ca0;
  puVar2 = &uStack_c0;
LAB_103ffaae0:
  func_0x00010400420c(puVar2,uVar3,puVar4);
  return;
}



/* Entry: 103ffac18; end: 103ffadb3;  */

/* WARNING: Removing unreachable block (ram,0x000103ffad2c) */

void FUN_103ffac18(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  char cVar3;
  undefined8 *puVar4;
  long unaff_x21;
  code *pcVar5;
  undefined1 auStack_158 [104];
  undefined8 uStack_f0;
  ulong uStack_e8;
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
  undefined1 uStack_90;
  undefined8 uStack_80;
  ulong uStack_78;
  
  uStack_78 = 0xf000000000000000;
  uStack_80 = 0;
  cVar3 = *(char *)(param_1 + 0xc);
  puVar4 = param_1;
  if (cVar3 == '\x02') {
    uStack_b8 = param_1[7];
    uStack_c0 = param_1[6];
    uStack_a8 = param_1[9];
    uStack_b0 = param_1[8];
    uStack_d8 = param_1[3];
    uStack_e0 = param_1[2];
    uStack_c8 = param_1[5];
    uStack_d0 = param_1[4];
    uStack_98 = param_1[0xb];
    uStack_a0 = param_1[10];
    uVar1 = *param_1;
    uVar2 = param_1[1];
    uStack_90 = 2;
    uStack_f0 = uVar1;
    uStack_e8 = uVar2;
    FUN_103ffeb40(&uStack_f0,auStack_158);
    puVar4 = (undefined8 *)0x0;
    func_0x000100db1264(0,0xf000000000000000);
    uStack_80 = uVar1;
    uStack_78 = uVar2;
  }
  pcVar5 = *(code **)(param_4 + 0x198);
  FUN_104000670();
  (*pcVar5)(&uStack_80,&UNK_110733358,puVar4,param_3,param_4);
  uVar2 = uStack_78;
  uVar1 = uStack_80;
  if ((unaff_x21 == 0) && (uStack_78 >> 0x3c < 0xf)) {
    if (cVar3 == -1) {
      func_0x00010006c00c();
    }
    else {
      pcVar5 = *(code **)(param_4 + 8);
      func_0x00010006c00c();
      (*pcVar5)(param_3,param_4);
    }
    func_0x000100db1264(uStack_80,uStack_78);
    uStack_a8 = param_1[9];
    uStack_b0 = param_1[8];
    uStack_98 = param_1[0xb];
    uStack_a0 = param_1[10];
    uStack_90 = *(undefined1 *)(param_1 + 0xc);
    uStack_e8 = param_1[1];
    uStack_f0 = *param_1;
    uStack_d8 = param_1[3];
    uStack_e0 = param_1[2];
    uStack_c8 = param_1[5];
    uStack_d0 = param_1[4];
    uStack_b8 = param_1[7];
    uStack_c0 = param_1[6];
    *param_1 = uVar1;
    param_1[1] = uVar2;
    *(undefined1 *)(param_1 + 0xc) = 2;
    func_0x00010400420c(&uStack_f0,0x113045ed8,&UNK_10dcbf340);
  }
  else {
    func_0x000100db1264(uStack_80,uStack_78);
  }
  return;
}



/* Entry: 103ffadb4; end: 103ffae4b;  */

void FUN_103ffadb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  long unaff_x20;
  long unaff_x21;
  
  bVar1 = *(byte *)(unaff_x20 + 0x60);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      FUN_103ffae4c();
    }
    else {
      FUN_103ffaedc();
    }
  }
  else {
    if (bVar1 != 2) goto LAB_103ffae1c;
    FUN_103ffaf70();
  }
  if (unaff_x21 != 0) {
    return;
  }
LAB_103ffae1c:
  func_0x000100076224(param_1,*(undefined8 *)(unaff_x20 + 0x68),*(undefined8 *)(unaff_x20 + 0x70),
                      param_2,param_3);
  return;
}



/* Entry: 103ffae4c; end: 103ffaedb;  */

void FUN_103ffae4c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
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
  
  if (*(char *)(param_1 + 0xc) == '\0') {
    uStack_78 = param_1[5];
    uStack_80 = param_1[4];
    uStack_68 = param_1[7];
    uStack_70 = param_1[6];
    uStack_58 = param_1[9];
    uStack_60 = param_1[8];
    uStack_48 = param_1[0xb];
    uStack_50 = param_1[10];
    uStack_98 = param_1[1];
    uStack_a0 = *param_1;
    uStack_88 = param_1[3];
    uStack_90 = param_1[2];
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000104004124();
    (*pcVar1)(&uStack_a0,1,&UNK_110734818,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ffaedc);
  (*pcVar1)();
}



/* Entry: 103ffaedc; end: 103ffaf6f;  */

void FUN_103ffaedc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined5 uStack_58;
  undefined3 uStack_53;
  undefined5 uStack_50;
  undefined8 uStack_4b;
  
  if (*(char *)(param_1 + 0xc) == '\x01') {
    uStack_68 = param_1[5];
    uStack_70 = param_1[4];
    uStack_60 = param_1[6];
    uStack_58 = (undefined5)param_1[7];
    uStack_4b = *(undefined8 *)((long)param_1 + 0x45);
    uStack_53 = (undefined3)*(undefined8 *)((long)param_1 + 0x3d);
    uStack_50 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0x3d) >> 0x18);
    uStack_88 = param_1[1];
    uStack_90 = *param_1;
    uStack_78 = param_1[3];
    uStack_80 = param_1[2];
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_104000b5c();
    (*pcVar1)(&uStack_90,2,&UNK_110733700,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ffaf70);
  (*pcVar1)();
}



/* Entry: 103ffaf70; end: 103ffaff3;  */

void FUN_103ffaf70(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (*(char *)(param_1 + 0xc) == '\x02') {
    uStack_48 = param_1[1];
    uStack_50 = *param_1;
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_104000670();
    (*pcVar1)(&uStack_50,3,&UNK_110733358,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ffaff4);
  (*pcVar1)();
}



/* Entry: 103ffaff4; end: 103ffb03f;  */

void FUN_103ffaff4(undefined8 *param_1)

{
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0xff;
  param_1[0xe] = 0xc000000000000000;
  param_1[0xd] = 0;
  return;
}



/* Entry: 103ffb040; end: 103ffb06f;  */

undefined1  [16] FUN_103ffb040(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x68);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70));
  return auVar1;
}



/* Entry: 103ffb070; end: 103ffb0a3;  */

void FUN_103ffb070(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x68),*(undefined8 *)(unaff_x20 + 0x70));
  *(undefined8 *)(unaff_x20 + 0x68) = param_1;
  *(undefined8 *)(unaff_x20 + 0x70) = param_2;
  return;
}



/* Entry: 103ffb0a4; end: 103ffb0b7;  */

undefined1  [16] FUN_103ffb0a4(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x68;
  auVar1._0_8_ = 0x103ffb0b4;
  return auVar1;
}



/* Entry: 103ffb0b8; end: 103ffb0cb;  */

void FUN_103ffb0b8(void)

{
  FUN_103ffa620();
  return;
}



/* Entry: 103ffb0cc; end: 103ffb11b;  */

void FUN_103ffb0cc(void)

{
  FUN_103ffadb4();
  return;
}



/* Entry: 103ffb11c; end: 103ffb11f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103ffb11c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 103ffb120; end: 103ffb157;  */

uint FUN_103ffb120(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x000104003fa4();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 103ffb158; end: 103ffb1d7;  */

uint FUN_103ffb158(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
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
  
  uVar1 = 0;
  uStack_58 = param_1[9];
  uStack_60 = param_1[8];
  uStack_48 = param_1[0xb];
  uStack_50 = param_1[10];
  uStack_38 = param_1[0xd];
  uStack_40 = param_1[0xc];
  uStack_30 = param_1[0xe];
  uStack_98 = param_1[1];
  uStack_a0 = *param_1;
  uStack_88 = param_1[3];
  uStack_90 = param_1[2];
  uStack_78 = param_1[5];
  uStack_80 = param_1[4];
  uStack_68 = param_1[7];
  uStack_70 = param_1[6];
  uStack_118 = unaff_x20[1];
  uStack_120 = *unaff_x20;
  uStack_108 = unaff_x20[3];
  uStack_110 = unaff_x20[2];
  uStack_f8 = unaff_x20[5];
  uStack_100 = unaff_x20[4];
  uStack_e8 = unaff_x20[7];
  uStack_f0 = unaff_x20[6];
  uStack_d8 = unaff_x20[9];
  uStack_e0 = unaff_x20[8];
  uStack_c8 = unaff_x20[0xb];
  uStack_d0 = unaff_x20[10];
  uStack_b8 = unaff_x20[0xd];
  uStack_c0 = unaff_x20[0xc];
  uStack_b0 = unaff_x20[0xe];
  func_0x000103ffe468(&uStack_120,&uStack_a0);
  return uVar1 & 1;
}



/* Entry: 103ffb1d8; end: 103ffb277;  */

void FUN_103ffb1d8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam00000001130462b8 != -1) {
    _swift_once(0x1130462b8,0x103ffa5d8);
  }
  uVar5 = uRam0000000113812ab8;
  uVar4 = uRam0000000113812ab0;
  uVar3 = uRam0000000113812aa8;
  uVar2 = uRam0000000113812aa0;
  uVar1 = uRam0000000113812a98;
  *param_1 = uRam0000000113812a90;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 103ffb278; end: 103ffb2b3;  */

void FUN_103ffb278(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113046588;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113046588,&UNK_10dcc0a30);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 103ffb2b4; end: 103ffb3ef;  */

void FUN_103ffb2b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_f8 [72];
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
  
  uStack_68 = unaff_x20[9];
  uStack_70 = unaff_x20[8];
  uStack_58 = unaff_x20[0xb];
  uStack_60 = unaff_x20[10];
  uStack_48 = unaff_x20[0xd];
  uStack_50 = unaff_x20[0xc];
  uStack_40 = unaff_x20[0xe];
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  __ss6HasherV5_seedABSi_tcfC(auStack_f8,0);
  __sSH4hash4intoys6HasherVz_tFTj(auStack_f8,param_1,param_2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103ffb3f0; end: 103ffb46f;  */

uint FUN_103ffb3f0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
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
  
  uVar1 = 0;
  uStack_d8 = param_1[9];
  uStack_e0 = param_1[8];
  uStack_c8 = param_1[0xb];
  uStack_d0 = param_1[10];
  uStack_b8 = param_1[0xd];
  uStack_c0 = param_1[0xc];
  uStack_b0 = param_1[0xe];
  uStack_118 = param_1[1];
  uStack_120 = *param_1;
  uStack_108 = param_1[3];
  uStack_110 = param_1[2];
  uStack_f8 = param_1[5];
  uStack_100 = param_1[4];
  uStack_e8 = param_1[7];
  uStack_f0 = param_1[6];
  uStack_98 = param_2[1];
  uStack_a0 = *param_2;
  uStack_88 = param_2[3];
  uStack_90 = param_2[2];
  uStack_78 = param_2[5];
  uStack_80 = param_2[4];
  uStack_68 = param_2[7];
  uStack_70 = param_2[6];
  uStack_58 = param_2[9];
  uStack_60 = param_2[8];
  uStack_48 = param_2[0xb];
  uStack_50 = param_2[10];
  uStack_38 = param_2[0xd];
  uStack_40 = param_2[0xc];
  uStack_30 = param_2[0xe];
  func_0x000103ffe468(&uStack_120,&uStack_a0);
  return uVar1 & 1;
}



/* Entry: 103ffb470; end: 103ffb4bb;  */

void FUN_103ffb470(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458b410(&uStack_40);
  uRam0000000113812ac8 = uStack_38;
  uRam0000000113812ac0 = uStack_40;
  uRam0000000113812ad8 = uStack_28;
  uRam0000000113812ad0 = uStack_30;
  uRam0000000113812ae8 = uStack_18;
  uRam0000000113812ae0 = uStack_20;
  return;
}



/* Entry: 103ffb4bc; end: 103ffb4f3;  */

undefined1  [16] FUN_103ffb4bc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1dd5e0;
  auVar1._0_8_ = 0xd000000000000036;
  return auVar1;
}



/* Entry: 103ffb4f4; end: 103ffb52b;  */

uint FUN_103ffb4f4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x000104003f64();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 103ffb52c; end: 103ffb5cb;  */

void FUN_103ffb52c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam00000001130462c8 != -1) {
    _swift_once(0x1130462c8,FUN_103ffb470);
  }
  uVar5 = uRam0000000113812ae8;
  uVar4 = uRam0000000113812ae0;
  uVar3 = uRam0000000113812ad8;
  uVar2 = uRam0000000113812ad0;
  uVar1 = uRam0000000113812ac8;
  *param_1 = uRam0000000113812ac0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 103ffb5cc; end: 103ffb5df;  */

void FUN_103ffb5cc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113046578;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113046578,&UNK_10dcc0a28);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 103ffb5e0; end: 103ffb617;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103ffb5e0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar1 = param_1;
  FUN_104000670();
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (*(code *)puVar1[9])(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,puVar1);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 103ffb618; end: 103ffb65f;  */

void FUN_103ffb618(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dcc0c80,0x13,2);
  uRam0000000113812af8 = uStack_38;
  uRam0000000113812af0 = uStack_40;
  uRam0000000113812b08 = uStack_28;
  uRam0000000113812b00 = uStack_30;
  uRam0000000113812b18 = uStack_18;
  uRam0000000113812b10 = uStack_20;
  return;
}



/* Entry: 103ffb660; end: 103ffb713;  */

/* WARNING: Removing unreachable block (ram,0x000103ffb710) */

void FUN_103ffb660(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 1) {
        pcVar4 = *(code **)(param_3 + 0x1a0);
        func_0x000103fffb38();
        (*pcVar4)();
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 103ffb714; end: 103ffb7af;  */

void FUN_103ffb714(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  long unaff_x21;
  code *pcVar2;
  
  if (*(long *)(param_2 + 0x10) != 0) {
    pcVar2 = *(code **)(param_6 + 0x118);
    uVar1 = param_1;
    func_0x000103fffb38();
    (*pcVar2)(param_2,1,&UNK_110733d50,uVar1,param_5,param_6);
    if (unaff_x21 != 0) {
      return;
    }
  }
  func_0x000100076224(param_1,param_3,param_4,param_5,param_6);
  return;
}



/* Entry: 103ffb7b0; end: 103ffb7ef;  */

void FUN_103ffb7b0(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[2] = 0xc000000000000000;
  param_1[1] = 0;
  return;
}



/* Entry: 103ffb7f0; end: 103ffb81f;  */

undefined1  [16] FUN_103ffb7f0(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                      *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 103ffb820; end: 103ffb853;  */

void FUN_103ffb820(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 103ffb854; end: 103ffb867;  */

undefined1  [16] FUN_103ffb854(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x103ffb864;
  return auVar1;
}



/* Entry: 103ffb868; end: 103ffb89f;  */

void FUN_103ffb868(void)

{
  FUN_103ffb660();
  return;
}



/* Entry: 103ffb8a0; end: 103ffb8a3;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103ffb8a0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 103ffb8a4; end: 103ffb8db;  */

uint FUN_103ffb8a4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x000104003f24();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 103ffb8dc; end: 103ffb8ef;  */

uint FUN_103ffb8dc(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar7;
  long lVar8;
  long *unaff_x20;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auStack_120 [64];
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
  long lVar6;
  
  lVar1 = *param_1;
  lVar3 = param_1[1];
  lVar8 = param_1[2];
  lVar2 = *unaff_x20;
  lVar6 = unaff_x20[1];
  lVar7 = unaff_x20[2];
  lVar9 = *(long *)(lVar2 + 0x10);
  if (lVar9 == *(long *)(lVar1 + 0x10)) {
    if (lVar9 != 0 && lVar2 != lVar1) {
      puVar10 = (undefined8 *)(lVar2 + 0x20);
      puVar11 = (undefined8 *)(lVar1 + 0x20);
      do {
        uStack_d8 = puVar10[1];
        uStack_e0 = *puVar10;
        uStack_c8 = puVar10[3];
        uStack_d0 = puVar10[2];
        uStack_b8 = puVar10[5];
        uStack_c0 = puVar10[4];
        uStack_a8 = puVar10[7];
        uStack_b0 = puVar10[6];
        uStack_98 = puVar11[1];
        uStack_a0 = *puVar11;
        uStack_88 = puVar11[3];
        uStack_90 = puVar11[2];
        uStack_78 = puVar11[5];
        uStack_80 = puVar11[4];
        uStack_68 = puVar11[7];
        uStack_70 = puVar11[6];
        func_0x0001017405b4(&uStack_e0,auStack_120);
        func_0x0001017405b4(&uStack_a0,auStack_120);
        puVar5 = &uStack_e0;
        FUN_104004d98(puVar5,&uStack_a0);
        func_0x0001017405f0(&uStack_a0);
        func_0x0001017405f0(&uStack_e0);
        if (((ulong)puVar5 & 1) == 0) goto LAB_103ffddcc;
        puVar11 = puVar11 + 8;
        puVar10 = puVar10 + 8;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    func_0x000100e25fcc(lVar6,lVar7,lVar3,lVar8);
    uVar4 = (uint)lVar6;
  }
  else {
LAB_103ffddcc:
    uVar4 = 0;
  }
  return uVar4 & 1;
}



/* Entry: 103ffb8f0; end: 103ffb98f;  */

void FUN_103ffb8f0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam00000001130462d8 != -1) {
    _swift_once(0x1130462d8,FUN_103ffb618);
  }
  uVar5 = uRam0000000113812b18;
  uVar4 = uRam0000000113812b10;
  uVar3 = uRam0000000113812b08;
  uVar2 = uRam0000000113812b00;
  uVar1 = uRam0000000113812af8;
  *param_1 = uRam0000000113812af0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 103ffb990; end: 103ffb9cb;  */

void FUN_103ffb990(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113046568;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113046568,&UNK_10dcc0a20);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 103ffb9cc; end: 103ffbacf;  */

void FUN_103ffb9cc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_90 [72];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_48 = *unaff_x20;
  uStack_38 = unaff_x20[2];
  uStack_40 = unaff_x20[1];
  __ss6HasherV5_seedABSi_tcfC(auStack_90,0);
  __sSH4hash4intoys6HasherVz_tFTj(auStack_90,param_1,param_2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103ffbad0; end: 103ffbaeb;  */

uint FUN_103ffbad0(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auStack_120 [64];
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
  long lVar6;
  
  lVar1 = *param_1;
  lVar6 = param_1[1];
  lVar7 = param_1[2];
  lVar2 = *param_2;
  lVar3 = param_2[1];
  lVar8 = param_2[2];
  lVar9 = *(long *)(lVar1 + 0x10);
  if (lVar9 == *(long *)(lVar2 + 0x10)) {
    if (lVar9 != 0 && lVar1 != lVar2) {
      puVar10 = (undefined8 *)(lVar1 + 0x20);
      puVar11 = (undefined8 *)(lVar2 + 0x20);
      do {
        uStack_d8 = puVar10[1];
        uStack_e0 = *puVar10;
        uStack_c8 = puVar10[3];
        uStack_d0 = puVar10[2];
        uStack_b8 = puVar10[5];
        uStack_c0 = puVar10[4];
        uStack_a8 = puVar10[7];
        uStack_b0 = puVar10[6];
        uStack_98 = puVar11[1];
        uStack_a0 = *puVar11;
        uStack_88 = puVar11[3];
        uStack_90 = puVar11[2];
        uStack_78 = puVar11[5];
        uStack_80 = puVar11[4];
        uStack_68 = puVar11[7];
        uStack_70 = puVar11[6];
        func_0x0001017405b4(&uStack_e0,auStack_120);
        func_0x0001017405b4(&uStack_a0,auStack_120);
        puVar5 = &uStack_e0;
        FUN_104004d98(puVar5,&uStack_a0);
        func_0x0001017405f0(&uStack_a0);
        func_0x0001017405f0(&uStack_e0);
        if (((ulong)puVar5 & 1) == 0) goto LAB_103ffddcc;
        puVar11 = puVar11 + 8;
        puVar10 = puVar10 + 8;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    func_0x000100e25fcc(lVar6,lVar7,lVar3,lVar8);
    uVar4 = (uint)lVar6;
  }
  else {
LAB_103ffddcc:
    uVar4 = 0;
  }
  return uVar4 & 1;
}



/* Entry: 103ffbaec; end: 103ffbb33;  */

void FUN_103ffbaec(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dcc0c40,0x38,2);
  uRam0000000113812b28 = uStack_38;
  uRam0000000113812b20 = uStack_40;
  uRam0000000113812b38 = uStack_28;
  uRam0000000113812b30 = uStack_30;
  uRam0000000113812b48 = uStack_18;
  uRam0000000113812b40 = uStack_20;
  return;
}



/* Entry: 103ffbb34; end: 103ffbbd7;  */

void FUN_103ffbb34(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  while ((lVar1 = param_2, lVar2 = param_3, (*pcVar3)(), unaff_x21 == 0 &&
         (((uint)lVar2 & 0xff) != 1))) {
    if (lVar1 == 1) {
      FUN_103ffbbd8();
    }
    else if (lVar1 == 2) {
      FUN_103ffbd40();
    }
  }
  return;
}



/* Entry: 103ffbbd8; end: 103ffbd3f;  */

/* WARNING: Removing unreachable block (ram,0x000103ffbd08) */

void FUN_103ffbbd8(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long unaff_x21;
  code *pcVar8;
  ulong uVar9;
  long lStack_78;
  long lStack_70;
  ulong uStack_68;
  
  uStack_68 = 0;
  lStack_78 = 0;
  lStack_70 = 0;
  uVar9 = param_1[2];
  plVar6 = param_1;
  if ((uVar9 >> 0x3d & 1) == 0) {
    lVar1 = *param_1;
    lVar3 = param_1[1];
    func_0x00010174c28c(lVar1,lVar3,uVar9);
    plVar6 = (long *)0x0;
    FUN_104004164(0,0,0);
    lStack_78 = lVar1;
    lStack_70 = lVar3;
    uStack_68 = uVar9;
  }
  pcVar8 = *(code **)(param_4 + 0x198);
  func_0x0001040040e4();
  (*pcVar8)(&lStack_78,&UNK_110734570,plVar6,param_3,param_4);
  uVar5 = uStack_68;
  lVar3 = lStack_70;
  lVar1 = lStack_78;
  if ((unaff_x21 == 0) && (lStack_78 != 0)) {
    if ((uVar9 & 0x3000000000000000) == 0x3000000000000000) {
      _swift_bridgeObjectRetain();
      func_0x00010006c00c(lVar3,uVar5);
    }
    else {
      pcVar8 = *(code **)(param_4 + 8);
      _swift_bridgeObjectRetain();
      func_0x00010006c00c(lVar3,uVar5);
      (*pcVar8)(param_3,param_4);
    }
    FUN_104004164(lStack_78,lStack_70,uStack_68);
    lVar2 = *param_1;
    lVar4 = param_1[1];
    lVar7 = param_1[2];
    *param_1 = lVar1;
    param_1[1] = lVar3;
    param_1[2] = uVar5;
    func_0x00010174c2bc(lVar2,lVar4,lVar7);
  }
  else {
    FUN_104004164(lStack_78,lStack_70,uStack_68);
  }
  return;
}



/* Entry: 103ffbd40; end: 103ffbe93;  */

/* WARNING: Removing unreachable block (ram,0x000103ffbe3c) */

void FUN_103ffbd40(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long unaff_x21;
  code *pcVar7;
  ulong uVar8;
  undefined8 uStack_60;
  ulong uStack_58;
  
  uStack_58 = 0xf000000000000000;
  uStack_60 = 0;
  uVar8 = param_1[2] & 0x3000000000000000;
  puVar5 = param_1;
  if (uVar8 != 0x3000000000000000 && (param_1[2] & 0x2000000000000000) != 0) {
    uVar1 = *param_1;
    uVar3 = param_1[1];
    func_0x00010174c28c(uVar1,uVar3);
    puVar5 = (undefined8 *)0x0;
    func_0x000100db1264(0,0xf000000000000000);
    uStack_60 = uVar1;
    uStack_58 = uVar3;
  }
  pcVar7 = *(code **)(param_4 + 0x198);
  FUN_104000a60();
  (*pcVar7)(&uStack_60,&UNK_110733680,puVar5,param_3,param_4);
  uVar3 = uStack_58;
  uVar1 = uStack_60;
  if ((unaff_x21 == 0) && (uStack_58 >> 0x3c < 0xf)) {
    if (uVar8 == 0x3000000000000000) {
      func_0x00010006c00c();
    }
    else {
      pcVar7 = *(code **)(param_4 + 8);
      func_0x00010006c00c();
      (*pcVar7)(param_3,param_4);
    }
    func_0x000100db1264(uStack_60,uStack_58);
    uVar2 = *param_1;
    uVar4 = param_1[1];
    uVar6 = param_1[2];
    *param_1 = uVar1;
    param_1[1] = uVar3;
    param_1[2] = 0x2000000000000000;
    func_0x00010174c2bc(uVar2,uVar4,uVar6);
  }
  else {
    func_0x000100db1264(uStack_60,uStack_58);
  }
  return;
}



/* Entry: 103ffbe94; end: 103ffbf0f;  */

void FUN_103ffbe94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  long unaff_x21;
  
  if (((*(ulong *)(unaff_x20 + 0x10) ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) {
    if ((*(ulong *)(unaff_x20 + 0x10) >> 0x3d & 1) == 0) {
      FUN_103ffbf10();
    }
    else {
      FUN_103ffbf94();
    }
    if (unaff_x21 != 0) {
      return;
    }
  }
  func_0x000100076224(param_1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      param_2,param_3);
  return;
}



/* Entry: 103ffbf10; end: 103ffbf93;  */

void FUN_103ffbf10(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = param_1[2];
  if ((uStack_50 >> 0x3d & 1) == 0) {
    uStack_58 = param_1[1];
    uStack_60 = *param_1;
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001040040e4();
    (*pcVar1)(&uStack_60,1,&UNK_110734570,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ffbf94);
  (*pcVar1)();
}



/* Entry: 103ffbf94; end: 103ffc027;  */

void FUN_103ffbf94(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (((param_1[2] ^ 0xffffffffffffffff) & 0x3000000000000000) != 0 &&
      (param_1[2] & 0x2000000000000000) != 0) {
    uStack_48 = param_1[1];
    uStack_50 = *param_1;
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_104000a60();
    (*pcVar1)(&uStack_50,2,&UNK_110733680,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ffc028);
  (*pcVar1)();
}



/* Entry: 103ffc028; end: 103ffc07b;  */

void FUN_103ffc028(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0x3000000000000000;
  param_1[4] = 0xc000000000000000;
  return;
}



/* Entry: 103ffc07c; end: 103ffc08f;  */

void FUN_103ffc07c(void)

{
  FUN_103ffbb34();
  return;
}



/* Entry: 103ffc090; end: 103ffc0c7;  */

void FUN_103ffc090(void)

{
  FUN_103ffbe94();
  return;
}



/* Entry: 103ffc0c8; end: 103ffc0ff;  */

uint FUN_103ffc0c8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x000104003ee4();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 103ffc100; end: 103ffc147;  */

uint FUN_103ffc100(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uStack_28 = param_1[3];
  uStack_30 = param_1[2];
  uStack_20 = param_1[4];
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_50 = unaff_x20[4];
  func_0x000103ffddf4(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103ffc148; end: 103ffc1e7;  */

void FUN_103ffc148(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam00000001130462f0 != -1) {
    _swift_once(0x1130462f0,FUN_103ffbaec);
  }
  uVar5 = uRam0000000113812b48;
  uVar4 = uRam0000000113812b40;
  uVar3 = uRam0000000113812b38;
  uVar2 = uRam0000000113812b30;
  uVar1 = uRam0000000113812b28;
  *param_1 = uRam0000000113812b20;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 103ffc1e8; end: 103ffc1fb;  */

void FUN_103ffc1e8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113046558;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113046558,&UNK_10dcc0a18);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 103ffc1fc; end: 103ffc22f;  */

void FUN_103ffc1fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  __sSS10reflectingSSx_tclufC(&uStack_18,param_3);
  return;
}



/* Entry: 103ffc230; end: 103ffc333;  */

void FUN_103ffc230(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_a8 [72];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_40 = unaff_x20[4];
  uStack_58 = unaff_x20[1];
  uStack_60 = *unaff_x20;
  uStack_48 = unaff_x20[3];
  uStack_50 = unaff_x20[2];
  __ss6HasherV5_seedABSi_tcfC(auStack_a8,0);
  __sSH4hash4intoys6HasherVz_tFTj(auStack_a8,param_1,param_2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103ffc334; end: 103ffc3c3;  */

uint FUN_103ffc334(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_20 = param_2[4];
  func_0x000103ffddf4(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103ffc3c4; end: 103ffc497;  */

/* WARNING: Removing unreachable block (ram,0x000103ffc494) */

void FUN_103ffc3c4(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 1) {
        (**(code **)(param_3 + 0x150))();
      }
      else if (lVar1 == 2) {
        pcVar4 = *(code **)(param_3 + 0x180);
        func_0x000103fffbf8();
        (*pcVar4)(unaff_x20 + 0x10,&UNK_110733608,lVar1,param_2,param_3);
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 103ffc498; end: 103ffc56b;  */

void FUN_103ffc498(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  long unaff_x21;
  code *pcVar4;
  ulong uStack_50;
  char cStack_48;
  
  uVar3 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar1 = uVar3 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) || ((**(code **)(param_3 + 0x70))(uVar3,uVar2,1,param_2,param_3), unaff_x21 == 0)
     ) {
    if ((char)unaff_x20[3] != '\x01' && unaff_x20[2] != 0) {
      pcVar4 = *(code **)(param_3 + 0x80);
      uStack_50 = unaff_x20[2];
      cStack_48 = (char)unaff_x20[3];
      func_0x000103fffbf8();
      (*pcVar4)(&uStack_50,2,&UNK_110733608,uVar3,param_2,param_3);
      if (unaff_x21 != 0) {
        return;
      }
    }
    func_0x000100076224(param_1,unaff_x20[4],unaff_x20[5],param_2,param_3);
  }
  return;
}



/* Entry: 103ffc56c; end: 103ffc5b3;  */

void FUN_103ffc56c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  return;
}



/* Entry: 103ffc5b4; end: 103ffc5e3;  */

undefined1  [16] FUN_103ffc5b4(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x20);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28));
  return auVar1;
}



/* Entry: 103ffc5e4; end: 103ffc617;  */

void FUN_103ffc5e4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  return;
}



/* Entry: 103ffc618; end: 103ffc62b;  */

undefined1  [16] FUN_103ffc618(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0x103ffc628;
  return auVar1;
}



/* Entry: 103ffc62c; end: 103ffc653;  */

void FUN_103ffc62c(void)

{
  FUN_103ffc3c4();
  return;
}



/* Entry: 103ffc654; end: 103ffc657;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103ffc654(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 103ffc658; end: 103ffc68f;  */

uint FUN_103ffc658(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x000104003ea4();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 103ffc690; end: 103ffc6d7;  */

uint FUN_103ffc690(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uStack_28 = param_1[3];
  uStack_30 = param_1[2];
  uStack_18 = param_1[5];
  uStack_20 = param_1[4];
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_48 = unaff_x20[5];
  uStack_50 = unaff_x20[4];
  FUN_103ffe080(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103ffc6d8; end: 103ffc777;  */

void FUN_103ffc6d8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113046300 != -1) {
    _swift_once(0x113046300,0x103ffc37c);
  }
  uVar5 = uRam0000000113812b78;
  uVar4 = uRam0000000113812b70;
  uVar3 = uRam0000000113812b68;
  uVar2 = uRam0000000113812b60;
  uVar1 = uRam0000000113812b58;
  *param_1 = uRam0000000113812b50;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 103ffc778; end: 103ffc7b3;  */

void FUN_103ffc778(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113046548;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113046548,&UNK_10dcc0a10);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 103ffc7b4; end: 103ffc8d7;  */

void FUN_103ffc7b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_a8 [72];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = unaff_x20[1];
  uStack_60 = *unaff_x20;
  uStack_50 = unaff_x20[2];
  uStack_48 = *(undefined1 *)(unaff_x20 + 3);
  uStack_38 = unaff_x20[5];
  uStack_40 = unaff_x20[4];
  __ss6HasherV5_seedABSi_tcfC(auStack_a8,0);
  __sSH4hash4intoys6HasherVz_tFTj(auStack_a8,param_1,param_2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103ffc8d8; end: 103ffc963;  */

uint FUN_103ffc8d8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_18 = param_2[5];
  uStack_20 = param_2[4];
  FUN_103ffe080(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103ffc964; end: 103ffca03;  */

void FUN_103ffc964(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113046318 != -1) {
    _swift_once(0x113046318,0x103ffc91c);
  }
  uVar5 = uRam0000000113812ba8;
  uVar4 = uRam0000000113812ba0;
  uVar3 = uRam0000000113812b98;
  uVar2 = uRam0000000113812b90;
  uVar1 = uRam0000000113812b88;
  *param_1 = uRam0000000113812b80;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 103ffca04; end: 103ffca3b;  */

void FUN_103ffca04(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458b410(&uStack_40);
  uRam0000000113812bb8 = uStack_38;
  uRam0000000113812bb0 = uStack_40;
  uRam0000000113812bc8 = uStack_28;
  uRam0000000113812bc0 = uStack_30;
  uRam0000000113812bd8 = uStack_18;
  uRam0000000113812bd0 = uStack_20;
  return;
}



/* Entry: 103ffca3c; end: 103ffca87;  */

void FUN_103ffca3c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long unaff_x21;
  code *pcVar2;
  
  pcVar2 = *(code **)(param_3 + 0x10);
  do {
    lVar1 = param_3;
    (*pcVar2)(param_2);
    if (unaff_x21 != 0) {
      return;
    }
  } while (((uint)lVar1 & 0xff) != 1);
  return;
}



/* Entry: 103ffca88; end: 103ffcabf;  */

undefined1  [16] FUN_103ffca88(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1dd6b0;
  auVar1._0_8_ = 0xd000000000000034;
  return auVar1;
}



/* Entry: 103ffcac0; end: 103ffcaf7;  */

uint FUN_103ffcac0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x000104003e64();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 103ffcaf8; end: 103ffcb97;  */

void FUN_103ffcaf8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113046320 != -1) {
    _swift_once(0x113046320,FUN_103ffca04);
  }
  uVar5 = uRam0000000113812bd8;
  uVar4 = uRam0000000113812bd0;
  uVar3 = uRam0000000113812bc8;
  uVar2 = uRam0000000113812bc0;
  uVar1 = uRam0000000113812bb8;
  *param_1 = uRam0000000113812bb0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 103ffcb98; end: 103ffcbab;  */

void FUN_103ffcb98(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113046538;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113046538,&UNK_10dcc0a08);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}


