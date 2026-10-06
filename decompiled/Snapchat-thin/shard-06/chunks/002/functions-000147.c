/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1045b59a8; end: 1045b5a03;  */

void FUN_1045b59a8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0xe000000000000000;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 1;
  param_1[0xb] = 0;
  param_1[0xc] = 0xe000000000000000;
  param_1[0xe] = 0xc000000000000000;
  param_1[0xd] = 0;
  return;
}



/* Entry: 1045b5a04; end: 1045b5a33;  */

undefined1  [16] FUN_1045b5a04(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x68);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70));
  return auVar1;
}



/* Entry: 1045b5a34; end: 1045b5a67;  */

void FUN_1045b5a34(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x68),*(undefined8 *)(unaff_x20 + 0x70));
  *(undefined8 *)(unaff_x20 + 0x68) = param_1;
  *(undefined8 *)(unaff_x20 + 0x70) = param_2;
  return;
}



/* Entry: 1045b5a68; end: 1045b5a7b;  */

undefined1  [16] FUN_1045b5a68(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x68;
  auVar1._0_8_ = 0x1045b5a78;
  return auVar1;
}



/* Entry: 1045b5a7c; end: 1045b5aa3;  */

void FUN_1045b5a7c(void)

{
  FUN_1045b53cc();
  return;
}



/* Entry: 1045b5aa4; end: 1045b5b43;  */

void FUN_1045b5aa4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam00000001130877f0 != -1) {
    _swift_once(0x1130877f0,FUN_1045b526c);
  }
  uVar5 = uRam0000000113813e78;
  uVar4 = uRam0000000113813e70;
  uVar3 = uRam0000000113813e68;
  uVar2 = uRam0000000113813e60;
  uVar1 = uRam0000000113813e58;
  *param_1 = uRam0000000113813e50;
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



/* Entry: 1045b5b44; end: 1045b5b7f;  */

void FUN_1045b5b44(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113087858;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113087858,&UNK_10dd19a50);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 1045b5b80; end: 1045b5d97;  */

/* WARNING: Removing unreachable block (ram,0x0001045b5bfc) */

void FUN_1045b5b80(void)

{
  undefined8 *unaff_x20;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
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
  __ss6HasherV5_seedABSi_tcfC(&uStack_100,0);
  uStack_128 = uStack_d8;
  uStack_130 = uStack_e0;
  uStack_118 = uStack_c8;
  uStack_120 = uStack_d0;
  uStack_110 = uStack_c0;
  uStack_148 = uStack_f8;
  uStack_150 = uStack_100;
  uStack_138 = uStack_e8;
  uStack_140 = uStack_f0;
  FUN_1045b5550(&uStack_150);
  uStack_c8 = uStack_118;
  uStack_d0 = uStack_120;
  uStack_c0 = uStack_110;
  uStack_e8 = uStack_138;
  uStack_f0 = uStack_140;
  uStack_d8 = uStack_128;
  uStack_e0 = uStack_130;
  uStack_f8 = uStack_148;
  uStack_100 = uStack_150;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1045b5d98; end: 1045b5e17;  */

uint FUN_1045b5d98(undefined8 *param_1,undefined8 *param_2)

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
  func_0x0001045b67e0(&uStack_120,&uStack_a0);
  return uVar1 & 1;
}



/* Entry: 1045b5e18; end: 1045b5e3f;  */

undefined * FUN_1045b5e18(void)

{
  return &UNK_11078ad80;
}



/* Entry: 1045b5e40; end: 1045b5eff;  */

void FUN_1045b5e40(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_10458f088();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_104555d34(&UNK_10dd19a60,0xd,&uStack_48,&lStack_40);
  puRam0000000113813e88 = puStack_38;
  lRam0000000113813e80 = lStack_40;
  puRam0000000113813e98 = puStack_28;
  puRam0000000113813e90 = puStack_30;
  puRam0000000113813ea8 = puStack_18;
  puRam0000000113813ea0 = puStack_20;
  return;
}



/* Entry: 1045b5f00; end: 1045b5f9f;  */

void FUN_1045b5f00(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam00000001130877f8 != -1) {
    _swift_once(0x1130877f8,FUN_1045b5e40);
  }
  uVar5 = uRam0000000113813ea8;
  uVar4 = uRam0000000113813ea0;
  uVar3 = uRam0000000113813e98;
  uVar2 = uRam0000000113813e90;
  uVar1 = uRam0000000113813e88;
  *param_1 = uRam0000000113813e80;
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



/* Entry: 1045b5fa0; end: 1045b6037;  */

void FUN_1045b5fa0(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
LAB_1045b5ff4:
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if ((unaff_x21 != 0) || (((uint)lVar2 & 0xff) == 1)) {
    return;
  }
  if (lVar1 != 1) goto code_r0x0001045b6010;
  pcVar3 = *(code **)(param_3 + 0x150);
  goto LAB_1045b5fdc;
code_r0x0001045b6010:
  if (lVar1 == 2) {
    pcVar3 = *(code **)(param_3 + 0x150);
LAB_1045b5fdc:
    (*pcVar3)();
  }
  goto LAB_1045b5ff4;
}



/* Entry: 1045b6038; end: 1045b6117;  */

void FUN_1045b6038(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong *unaff_x20;
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = uVar1 & 0xffffffffffff;
  if ((uVar3 & 0x2000000000000000) != 0) {
    uVar2 = uVar3 >> 0x38 & 0xf;
  }
  if (uVar2 != 0) {
    __ss6HasherV8_combineyySuF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,uVar3);
  }
  uVar1 = unaff_x20[2];
  uVar3 = unaff_x20[3];
  uVar2 = uVar1 & 0xffffffffffff;
  if ((uVar3 & 0x2000000000000000) != 0) {
    uVar2 = uVar3 >> 0x38 & 0xf;
  }
  if (uVar2 != 0) {
    __ss6HasherV8_combineyySuF(2);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,uVar3);
  }
  uVar2 = unaff_x20[4];
  uVar4 = (uint)(unaff_x20[5] >> 0x20);
  uVar5 = uVar4 >> 0x1e;
  if (uVar4 >> 0x1e < 2) {
    if (uVar5 == 0) {
      if ((unaff_x20[5] & 0xff000000000000) == 0) {
        return;
      }
      goto LAB_1045b60f8;
    }
    lVar6 = (long)(int)uVar2;
    lVar7 = (long)uVar2 >> 0x20;
  }
  else {
    if (uVar5 != 2) {
      return;
    }
    lVar6 = *(long *)(uVar2 + 0x10);
    lVar7 = *(long *)(uVar2 + 0x18);
  }
  if (lVar6 == lVar7) {
    return;
  }
LAB_1045b60f8:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1);
  return;
}



/* Entry: 1045b6118; end: 1045b61bb;  */

void FUN_1045b6118(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  long unaff_x21;
  
  uVar2 = unaff_x20[1];
  uVar1 = *unaff_x20 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) ||
     ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,1,param_2,param_3), unaff_x21 == 0)) {
    uVar2 = unaff_x20[3];
    uVar1 = unaff_x20[2] & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if ((uVar1 == 0) ||
       ((**(code **)(param_3 + 0x70))(unaff_x20[2],uVar2,2,param_2,param_3), unaff_x21 == 0)) {
      func_0x000100076224(param_1,unaff_x20[4],unaff_x20[5],param_2,param_3);
    }
  }
  return;
}



/* Entry: 1045b61bc; end: 1045b61bf;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1045b61bc(ulong *param_1,ulong *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  ulong uVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  ulong uVar17;
  byte *pbVar18;
  uint uVar19;
  int iVar20;
  ulong uVar21;
  uint uVar22;
  ulong uVar23;
  byte *pbVar24;
  byte *unaff_x19;
  long lVar25;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar26;
  ulong unaff_x22;
  long lVar27;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  undefined1 auVar44 [16];
  
  uVar13 = *param_1;
  if (((uVar13 != *param_2 || param_1[1] != param_2[1]) &&
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar13 & 1) == 0)) ||
     ((uVar13 = param_1[2], uVar13 != param_2[2] || param_1[3] != param_2[3] &&
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar13 & 1) == 0)))) {
    return (byte *)0x0;
  }
  pbVar10 = (byte *)param_1[4];
  pbVar26 = (byte *)param_1[5];
  uVar13 = param_2[4];
  uVar17 = param_2[5];
  puVar7 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
    *(byte **)(puVar7 + -0x48) = unaff_x25;
    *(byte **)(puVar7 + -0x40) = unaff_x24;
    *(byte **)(puVar7 + -0x38) = unaff_x23;
    *(ulong *)(puVar7 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
    *(ulong *)(puVar7 + -0x20) = unaff_x20;
    *(byte **)(puVar7 + -0x18) = unaff_x19;
    *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar7 + -8) = unaff_x30;
    *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar26 >> 0x20);
    uVar19 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar17 >> 0x20);
    uVar22 = uVar5 >> 0x1e;
    iVar8 = (int)pbVar10;
    pbVar14 = pbVar26;
    if ((ulong)pbVar26 >> 0x3e == 3) {
      uVar21 = 0;
      if ((((pbVar10 != (byte *)0x0) || (pbVar26 != (byte *)0xc000000000000000)) ||
          (uVar17 >> 0x3e < 3)) || ((uVar21 = 0, uVar13 != 0 || (uVar17 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar9 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar19 == 0) {
        uVar21 = (ulong)pbVar26 >> 0x30 & 0xff;
      }
      else {
        iVar20 = (int)((ulong)pbVar10 >> 0x20);
        if (SBORROW4(iVar20,iVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar21 = (ulong)(iVar20 - iVar8);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar22 == 0) {
        uVar23 = uVar17 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar20 = (int)(uVar13 >> 0x20);
      if (SBORROW4(iVar20,(int)uVar13)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar21 == (long)(iVar20 - (int)uVar13)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar9 = (byte *)0x0;
    }
    else {
      if (uVar19 == 2) {
        uVar21 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
        if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar21 = 0;
      if (uVar22 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar22 == 2) {
        uVar23 = *(long *)(uVar13 + 0x18) - *(long *)(uVar13 + 0x10);
        if (SBORROW8(*(long *)(uVar13 + 0x18),*(long *)(uVar13 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar21 != uVar23) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar21 < 1) goto code_r0x000100e26128;
        if (uVar19 < 2) {
          if (uVar19 == 0) {
            puVar7[-0x70] = (char)pbVar10;
            puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
            puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
            puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
            puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
            puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
            puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
            puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
            puVar7[-0x68] = (char)pbVar26;
            puVar7[-0x67] = (char)((ulong)pbVar26 >> 8);
            puVar7[-0x66] = (char)((ulong)pbVar26 >> 0x10);
            puVar7[-0x65] = (char)((ulong)pbVar26 >> 0x18);
            puVar7[-100] = (char)((ulong)pbVar26 >> 0x20);
            puVar7[-99] = (char)((ulong)pbVar26 >> 0x28);
            pbVar14 = puVar7 + (((ulong)pbVar26 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar8;
          unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar26;
          if (pbVar10 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar10 = (byte *)0x0;
          }
          else {
            pbVar14 = pbVar10;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar14);
            func_0x000107c5ec38();
            unaff_x19 = pbVar10;
            if (pbVar10 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar14) {
                pbVar14 = unaff_x23;
              }
              pbVar14 = pbVar14 + (long)pbVar10;
              goto code_r0x000100e262a4;
            }
          }
          pbVar14 = (byte *)0x0;
        }
        else {
          if (uVar19 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar14 = puVar7 + -0x70;
            goto code_r0x000100e26260;
          }
          lVar25 = *(long *)(pbVar10 + 0x10);
          unaff_x24 = *(byte **)(pbVar10 + 0x18);
          func_0x000107c5ec30();
          pbVar14 = pbVar10;
          if (pbVar10 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar25,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + (lVar25 - (long)pbVar14);
          }
          unaff_x23 = unaff_x24 + -lVar25;
          if (SBORROW8((long)unaff_x24,lVar25)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar10;
          unaff_x25 = pbVar26;
          if (pbVar10 == (byte *)0x0) {
            pbVar14 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar14) {
              pbVar14 = unaff_x23;
            }
            pbVar14 = pbVar14 + (long)pbVar10;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)pbVar26 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar14,uVar13,uVar17);
        pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar17;
      }
      else {
        pbVar9 = (byte *)(ulong)(uVar21 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
      return pbVar9;
    }
    func_0x000107c60e78();
    *(byte **)(puVar7 + -0xc0) = unaff_x24;
    *(byte **)(puVar7 + -0xb8) = unaff_x23;
    *(ulong *)(puVar7 + -0xb0) = unaff_x22;
    *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
    *(ulong *)(puVar7 + -0xa0) = unaff_x20;
    *(byte **)(puVar7 + -0x98) = unaff_x19;
    *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
    *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
    pbVar12 = *(byte **)pbVar9;
    pbVar10 = *(byte **)(pbVar9 + 8);
    pbVar24 = *(byte **)(pbVar9 + 0x18);
    bVar28 = pbVar9[0x28];
    pbVar26 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
    pbVar15 = pbVar10;
    if (bVar28 < 3) {
      if (bVar28 == 0) {
        if (pbVar14[0x28] == 0) {
          lVar25 = *(long *)pbVar14;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar25,uVar11);
          return (byte *)(ulong)((uint)pbVar12 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar28 == 1) {
        if (pbVar14[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)(pbVar14 + 8);
        pbVar18 = *(byte **)(pbVar14 + 0x10);
        lVar25 = *(long *)pbVar14;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar25,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar12 = pbVar10;
        pbVar15 = pbVar26;
        if ((pbVar10 == pbVar16) && (pbVar26 == pbVar18)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar14[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)pbVar14;
        pbVar18 = *(byte **)(pbVar14 + 8);
        lVar25 = *(long *)(pbVar14 + 0x18);
        if ((pbVar12 == pbVar16) && (pbVar10 == pbVar18)) {
          if (((pbVar9[0x10] ^ pbVar14[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar24 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar25 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar25);
          func_0x000107c61174();
          pbVar10 = pbVar24;
          func_0x000107c60118();
          func_0x000107c61170(pbVar24);
          func_0x000107c61170(lVar25);
          pbVar24 = pbVar10;
joined_r0x000100e266a4:
          if (((ulong)pbVar24 & 1) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1;
        }
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar12,pbVar15,pbVar16,pbVar18,0);
      return pbVar12;
    }
    lVar27 = *(long *)(pbVar9 + 0x20);
    if (bVar28 < 5) {
      if (bVar28 != 3) {
        if (pbVar14[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)pbVar14;
        pbVar18 = *(byte **)(pbVar14 + 8);
        if (((pbVar12 == pbVar16) && (pbVar10 == pbVar18)) &&
           (pbVar12 = pbVar26, pbVar15 = pbVar24, pbVar16 = *(byte **)(pbVar14 + 0x10),
           pbVar18 = *(byte **)(pbVar14 + 0x18),
           pbVar26 == *(byte **)(pbVar14 + 0x10) && pbVar24 == *(byte **)(pbVar14 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar14[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar14 != ((uint)pbVar12 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar18 = *(byte **)(pbVar14 + 0x10);
      lVar25 = *(long *)(pbVar14 + 0x20);
      if (pbVar26 == (byte *)0x0) {
        if (pbVar18 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar18 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)(pbVar14 + 8);
        pbVar12 = pbVar10;
        pbVar15 = pbVar26;
        if ((pbVar10 != pbVar16) || (pbVar26 != pbVar18)) goto code_r0x000107c605b8;
      }
      if (lVar27 != 0) {
        if (lVar25 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar24 == *(byte **)(pbVar14 + 0x18)) && (lVar27 == lVar25)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar24,lVar27,*(byte **)(pbVar14 + 0x18),lVar25,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar25 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar28 != 5) {
      if ((((pbVar24 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
          lVar27 == 0) && pbVar26 == (byte *)0x0) {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar27 = *(long *)(pbVar14 + 0x20);
        lVar25 = *(long *)(pbVar14 + 0x18);
        bVar28 = pbVar14[8] | (byte)lVar25;
        bVar29 = pbVar14[9] | (byte)((ulong)lVar25 >> 8);
        bVar30 = pbVar14[10] | (byte)((ulong)lVar25 >> 0x10);
        bVar31 = pbVar14[0xb] | (byte)((ulong)lVar25 >> 0x18);
        bVar32 = pbVar14[0xc] | (byte)((ulong)lVar25 >> 0x20);
        bVar33 = pbVar14[0xd] | (byte)((ulong)lVar25 >> 0x28);
        bVar34 = pbVar14[0xe] | (byte)((ulong)lVar25 >> 0x30);
        bVar35 = pbVar14[0xf] | (byte)((ulong)lVar25 >> 0x38);
        bVar36 = pbVar14[0x10] | (byte)lVar27;
        bVar37 = pbVar14[0x11] | (byte)((ulong)lVar27 >> 8);
        bVar38 = pbVar14[0x12] | (byte)((ulong)lVar27 >> 0x10);
        bVar39 = pbVar14[0x13] | (byte)((ulong)lVar27 >> 0x18);
        bVar40 = pbVar14[0x14] | (byte)((ulong)lVar27 >> 0x20);
        bVar41 = pbVar14[0x15] | (byte)((ulong)lVar27 >> 0x28);
        bVar42 = pbVar14[0x16] | (byte)((ulong)lVar27 >> 0x30);
        bVar43 = pbVar14[0x17] | (byte)((ulong)lVar27 >> 0x38);
        auVar44[1] = bVar29;
        auVar44[0] = bVar28;
        auVar44[2] = bVar30;
        auVar44[3] = bVar31;
        auVar44[4] = bVar32;
        auVar44[5] = bVar33;
        auVar44[6] = bVar34;
        auVar44[7] = bVar35;
        auVar44[8] = bVar36;
        auVar44[9] = bVar37;
        auVar44[10] = bVar38;
        auVar44[0xb] = bVar39;
        auVar44[0xc] = bVar40;
        auVar44[0xd] = bVar41;
        auVar44[0xe] = bVar42;
        auVar44[0xf] = bVar43;
        auVar3[1] = bVar29;
        auVar3[0] = bVar28;
        auVar3[2] = bVar30;
        auVar3[3] = bVar31;
        auVar3[4] = bVar32;
        auVar3[5] = bVar33;
        auVar3[6] = bVar34;
        auVar3[7] = bVar35;
        auVar3[8] = bVar36;
        auVar3[9] = bVar37;
        auVar3[10] = bVar38;
        auVar3[0xb] = bVar39;
        auVar3[0xc] = bVar40;
        auVar3[0xd] = bVar41;
        auVar3[0xe] = bVar42;
        auVar3[0xf] = bVar43;
        auVar44 = NEON_ext(auVar44,auVar3,8,1);
        if (CONCAT17(bVar35 | auVar44[7],
                     CONCAT16(bVar34 | auVar44[6],
                              CONCAT15(bVar33 | auVar44[5],
                                       CONCAT14(bVar32 | auVar44[4],
                                                CONCAT13(bVar31 | auVar44[3],
                                                         CONCAT12(bVar30 | auVar44[2],
                                                                  CONCAT11(bVar29 | auVar44[1],
                                                                           bVar28 | auVar44[0]))))))
                    ) == 0 && *(long *)pbVar14 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar12 == (byte *)0x1) &&
         (((pbVar24 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar26 == (byte *)0x0) &&
          lVar27 == 0)) {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar14 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar14 != 2) {
          return (byte *)0x0;
        }
      }
      lVar27 = *(long *)(pbVar14 + 0x20);
      lVar25 = *(long *)(pbVar14 + 0x18);
      bVar28 = pbVar14[8] | (byte)lVar25;
      bVar29 = pbVar14[9] | (byte)((ulong)lVar25 >> 8);
      bVar30 = pbVar14[10] | (byte)((ulong)lVar25 >> 0x10);
      bVar31 = pbVar14[0xb] | (byte)((ulong)lVar25 >> 0x18);
      bVar32 = pbVar14[0xc] | (byte)((ulong)lVar25 >> 0x20);
      bVar33 = pbVar14[0xd] | (byte)((ulong)lVar25 >> 0x28);
      bVar34 = pbVar14[0xe] | (byte)((ulong)lVar25 >> 0x30);
      bVar35 = pbVar14[0xf] | (byte)((ulong)lVar25 >> 0x38);
      bVar36 = pbVar14[0x10] | (byte)lVar27;
      bVar37 = pbVar14[0x11] | (byte)((ulong)lVar27 >> 8);
      bVar38 = pbVar14[0x12] | (byte)((ulong)lVar27 >> 0x10);
      bVar39 = pbVar14[0x13] | (byte)((ulong)lVar27 >> 0x18);
      bVar40 = pbVar14[0x14] | (byte)((ulong)lVar27 >> 0x20);
      bVar41 = pbVar14[0x15] | (byte)((ulong)lVar27 >> 0x28);
      bVar42 = pbVar14[0x16] | (byte)((ulong)lVar27 >> 0x30);
      bVar43 = pbVar14[0x17] | (byte)((ulong)lVar27 >> 0x38);
      auVar1[1] = bVar29;
      auVar1[0] = bVar28;
      auVar1[2] = bVar30;
      auVar1[3] = bVar31;
      auVar1[4] = bVar32;
      auVar1[5] = bVar33;
      auVar1[6] = bVar34;
      auVar1[7] = bVar35;
      auVar1[8] = bVar36;
      auVar1[9] = bVar37;
      auVar1[10] = bVar38;
      auVar1[0xb] = bVar39;
      auVar1[0xc] = bVar40;
      auVar1[0xd] = bVar41;
      auVar1[0xe] = bVar42;
      auVar1[0xf] = bVar43;
      auVar2[1] = bVar29;
      auVar2[0] = bVar28;
      auVar2[2] = bVar30;
      auVar2[3] = bVar31;
      auVar2[4] = bVar32;
      auVar2[5] = bVar33;
      auVar2[6] = bVar34;
      auVar2[7] = bVar35;
      auVar2[8] = bVar36;
      auVar2[9] = bVar37;
      auVar2[10] = bVar38;
      auVar2[0xb] = bVar39;
      auVar2[0xc] = bVar40;
      auVar2[0xd] = bVar41;
      auVar2[0xe] = bVar42;
      auVar2[0xf] = bVar43;
      auVar44 = NEON_ext(auVar1,auVar2,8,1);
      lVar25 = CONCAT17(bVar35 | auVar44[7],
                        CONCAT16(bVar34 | auVar44[6],
                                 CONCAT15(bVar33 | auVar44[5],
                                          CONCAT14(bVar32 | auVar44[4],
                                                   CONCAT13(bVar31 | auVar44[3],
                                                            CONCAT12(bVar30 | auVar44[2],
                                                                     CONCAT11(bVar29 | auVar44[1],
                                                                              bVar28 | auVar44[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar14[0x28] != 5) {
      return (byte *)0x0;
    }
    uVar13 = *(ulong *)(pbVar14 + 8);
    uVar17 = *(ulong *)(pbVar14 + 0x10);
    lVar25 = *(long *)pbVar14;
    uVar11 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar12,lVar25,uVar11);
    if (((ulong)pbVar12 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
    unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
    unaff_x20 = *(ulong *)(puVar7 + -0xa0);
    unaff_x19 = *(byte **)(puVar7 + -0x98);
    unaff_x22 = *(ulong *)(puVar7 + -0xb0);
    unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
    unaff_x24 = *(byte **)(puVar7 + -0xc0);
    unaff_x23 = *(byte **)(puVar7 + -0xb8);
    puVar7 = puVar7 + -0x80;
  } while( true );
}



/* Entry: 1045b61c0; end: 1045b624f;  */

/* WARNING: Removing unreachable block (ram,0x0001045b6210) */

void FUN_1045b61c0(void)

{
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  __ss6HasherV5_seedABSi_tcfC(&uStack_80,0);
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  uStack_98 = uStack_48;
  uStack_a0 = uStack_50;
  uStack_90 = uStack_40;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  FUN_1045b6038(&uStack_d0);
  uStack_48 = uStack_98;
  uStack_50 = uStack_a0;
  uStack_40 = uStack_90;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  uStack_58 = uStack_a8;
  uStack_60 = uStack_b0;
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1045b6250; end: 1045b6287;  */

void FUN_1045b6250(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  return;
}



/* Entry: 1045b6288; end: 1045b62b7;  */

undefined1  [16] FUN_1045b6288(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x20);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28));
  return auVar1;
}



/* Entry: 1045b62b8; end: 1045b62eb;  */

void FUN_1045b62b8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  return;
}



/* Entry: 1045b62ec; end: 1045b62ff;  */

undefined1  [16] FUN_1045b62ec(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0x1045b62fc;
  return auVar1;
}



/* Entry: 1045b6300; end: 1045b6327;  */

void FUN_1045b6300(void)

{
  FUN_1045b5fa0();
  return;
}



/* Entry: 1045b6328; end: 1045b63c7;  */

void FUN_1045b6328(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam00000001130877f8 != -1) {
    _swift_once(0x1130877f8,FUN_1045b5e40);
  }
  uVar5 = uRam0000000113813ea8;
  uVar4 = uRam0000000113813ea0;
  uVar3 = uRam0000000113813e98;
  uVar2 = uRam0000000113813e90;
  uVar1 = uRam0000000113813e88;
  *param_1 = uRam0000000113813e80;
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



/* Entry: 1045b63c8; end: 1045b6403;  */

void FUN_1045b63c8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113087850;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113087850,&UNK_10dd19a48);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 1045b6404; end: 1045b65cf;  */

/* WARNING: Removing unreachable block (ram,0x0001045b6468) */

void FUN_1045b6404(void)

{
  undefined8 *unaff_x20;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = unaff_x20[1];
  uStack_60 = *unaff_x20;
  uStack_48 = unaff_x20[3];
  uStack_50 = unaff_x20[2];
  uStack_38 = unaff_x20[5];
  uStack_40 = unaff_x20[4];
  __ss6HasherV5_seedABSi_tcfC(&uStack_b0,0);
  uStack_d8 = uStack_88;
  uStack_e0 = uStack_90;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  uStack_c0 = uStack_70;
  uStack_f8 = uStack_a8;
  uStack_100 = uStack_b0;
  uStack_e8 = uStack_98;
  uStack_f0 = uStack_a0;
  FUN_1045b6038(&uStack_100);
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  uStack_70 = uStack_c0;
  uStack_98 = uStack_e8;
  uStack_a0 = uStack_f0;
  uStack_88 = uStack_d8;
  uStack_90 = uStack_e0;
  uStack_a8 = uStack_f8;
  uStack_b0 = uStack_100;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1045b65d0; end: 1045b6613;  */

uint FUN_1045b65d0(undefined8 *param_1,undefined8 *param_2)

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
  FUN_1045b6764(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1045b6614; end: 1045b6663;  */

undefined8 FUN_1045b6614(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x1130877c0;
  func_0x0001000285a8(0x1130877c0,&UNK_10dd19750);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1045b6664; end: 1045b6763;  */

void FUN_1045b6664(void)

{
  undefined *puVar1;
  
  if (puRam00000001130877d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dd19830;
  _swift_getWitnessTable(&DAT_10dd19830,&UNK_11078b048);
  puRam00000001130877d0 = puVar1;
  return;
}



/* Entry: 1045b6764; end: 1045b691b;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1045b6764(ulong *param_1,ulong *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  ulong uVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  ulong uVar17;
  byte *pbVar18;
  uint uVar19;
  int iVar20;
  ulong uVar21;
  uint uVar22;
  ulong uVar23;
  byte *pbVar24;
  byte *unaff_x19;
  long lVar25;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar26;
  ulong unaff_x22;
  long lVar27;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  undefined1 auVar44 [16];
  
  uVar13 = *param_1;
  if (((uVar13 != *param_2 || param_1[1] != param_2[1]) &&
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar13 & 1) == 0)) ||
     ((uVar13 = param_1[2], uVar13 != param_2[2] || param_1[3] != param_2[3] &&
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar13 & 1) == 0)))) {
    return (byte *)0x0;
  }
  pbVar10 = (byte *)param_1[4];
  pbVar26 = (byte *)param_1[5];
  uVar13 = param_2[4];
  uVar17 = param_2[5];
  puVar7 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
    *(byte **)(puVar7 + -0x48) = unaff_x25;
    *(byte **)(puVar7 + -0x40) = unaff_x24;
    *(byte **)(puVar7 + -0x38) = unaff_x23;
    *(ulong *)(puVar7 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
    *(ulong *)(puVar7 + -0x20) = unaff_x20;
    *(byte **)(puVar7 + -0x18) = unaff_x19;
    *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar7 + -8) = unaff_x30;
    *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar26 >> 0x20);
    uVar19 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar17 >> 0x20);
    uVar22 = uVar5 >> 0x1e;
    iVar8 = (int)pbVar10;
    pbVar14 = pbVar26;
    if ((ulong)pbVar26 >> 0x3e == 3) {
      uVar21 = 0;
      if ((((pbVar10 != (byte *)0x0) || (pbVar26 != (byte *)0xc000000000000000)) ||
          (uVar17 >> 0x3e < 3)) || ((uVar21 = 0, uVar13 != 0 || (uVar17 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar9 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar19 == 0) {
        uVar21 = (ulong)pbVar26 >> 0x30 & 0xff;
      }
      else {
        iVar20 = (int)((ulong)pbVar10 >> 0x20);
        if (SBORROW4(iVar20,iVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar21 = (ulong)(iVar20 - iVar8);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar22 == 0) {
        uVar23 = uVar17 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar20 = (int)(uVar13 >> 0x20);
      if (SBORROW4(iVar20,(int)uVar13)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar21 == (long)(iVar20 - (int)uVar13)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar9 = (byte *)0x0;
    }
    else {
      if (uVar19 == 2) {
        uVar21 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
        if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar21 = 0;
      if (uVar22 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar22 == 2) {
        uVar23 = *(long *)(uVar13 + 0x18) - *(long *)(uVar13 + 0x10);
        if (SBORROW8(*(long *)(uVar13 + 0x18),*(long *)(uVar13 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar21 != uVar23) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar21 < 1) goto code_r0x000100e26128;
        if (uVar19 < 2) {
          if (uVar19 == 0) {
            puVar7[-0x70] = (char)pbVar10;
            puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
            puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
            puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
            puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
            puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
            puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
            puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
            puVar7[-0x68] = (char)pbVar26;
            puVar7[-0x67] = (char)((ulong)pbVar26 >> 8);
            puVar7[-0x66] = (char)((ulong)pbVar26 >> 0x10);
            puVar7[-0x65] = (char)((ulong)pbVar26 >> 0x18);
            puVar7[-100] = (char)((ulong)pbVar26 >> 0x20);
            puVar7[-99] = (char)((ulong)pbVar26 >> 0x28);
            pbVar14 = puVar7 + (((ulong)pbVar26 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar8;
          unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar26;
          if (pbVar10 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar10 = (byte *)0x0;
          }
          else {
            pbVar14 = pbVar10;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar14);
            func_0x000107c5ec38();
            unaff_x19 = pbVar10;
            if (pbVar10 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar14) {
                pbVar14 = unaff_x23;
              }
              pbVar14 = pbVar14 + (long)pbVar10;
              goto code_r0x000100e262a4;
            }
          }
          pbVar14 = (byte *)0x0;
        }
        else {
          if (uVar19 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar14 = puVar7 + -0x70;
            goto code_r0x000100e26260;
          }
          lVar25 = *(long *)(pbVar10 + 0x10);
          unaff_x24 = *(byte **)(pbVar10 + 0x18);
          func_0x000107c5ec30();
          pbVar14 = pbVar10;
          if (pbVar10 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar25,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + (lVar25 - (long)pbVar14);
          }
          unaff_x23 = unaff_x24 + -lVar25;
          if (SBORROW8((long)unaff_x24,lVar25)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar10;
          unaff_x25 = pbVar26;
          if (pbVar10 == (byte *)0x0) {
            pbVar14 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar14) {
              pbVar14 = unaff_x23;
            }
            pbVar14 = pbVar14 + (long)pbVar10;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)pbVar26 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar14,uVar13,uVar17);
        pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar17;
      }
      else {
        pbVar9 = (byte *)(ulong)(uVar21 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
      return pbVar9;
    }
    func_0x000107c60e78();
    *(byte **)(puVar7 + -0xc0) = unaff_x24;
    *(byte **)(puVar7 + -0xb8) = unaff_x23;
    *(ulong *)(puVar7 + -0xb0) = unaff_x22;
    *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
    *(ulong *)(puVar7 + -0xa0) = unaff_x20;
    *(byte **)(puVar7 + -0x98) = unaff_x19;
    *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
    *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
    pbVar12 = *(byte **)pbVar9;
    pbVar10 = *(byte **)(pbVar9 + 8);
    pbVar24 = *(byte **)(pbVar9 + 0x18);
    bVar28 = pbVar9[0x28];
    pbVar26 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
    pbVar15 = pbVar10;
    if (bVar28 < 3) {
      if (bVar28 == 0) {
        if (pbVar14[0x28] == 0) {
          lVar25 = *(long *)pbVar14;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar25,uVar11);
          return (byte *)(ulong)((uint)pbVar12 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar28 == 1) {
        if (pbVar14[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)(pbVar14 + 8);
        pbVar18 = *(byte **)(pbVar14 + 0x10);
        lVar25 = *(long *)pbVar14;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar25,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar12 = pbVar10;
        pbVar15 = pbVar26;
        if ((pbVar10 == pbVar16) && (pbVar26 == pbVar18)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar14[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)pbVar14;
        pbVar18 = *(byte **)(pbVar14 + 8);
        lVar25 = *(long *)(pbVar14 + 0x18);
        if ((pbVar12 == pbVar16) && (pbVar10 == pbVar18)) {
          if (((pbVar9[0x10] ^ pbVar14[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar24 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar25 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar25);
          func_0x000107c61174();
          pbVar10 = pbVar24;
          func_0x000107c60118();
          func_0x000107c61170(pbVar24);
          func_0x000107c61170(lVar25);
          pbVar24 = pbVar10;
joined_r0x000100e266a4:
          if (((ulong)pbVar24 & 1) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1;
        }
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar12,pbVar15,pbVar16,pbVar18,0);
      return pbVar12;
    }
    lVar27 = *(long *)(pbVar9 + 0x20);
    if (bVar28 < 5) {
      if (bVar28 != 3) {
        if (pbVar14[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)pbVar14;
        pbVar18 = *(byte **)(pbVar14 + 8);
        if (((pbVar12 == pbVar16) && (pbVar10 == pbVar18)) &&
           (pbVar12 = pbVar26, pbVar15 = pbVar24, pbVar16 = *(byte **)(pbVar14 + 0x10),
           pbVar18 = *(byte **)(pbVar14 + 0x18),
           pbVar26 == *(byte **)(pbVar14 + 0x10) && pbVar24 == *(byte **)(pbVar14 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar14[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar14 != ((uint)pbVar12 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar18 = *(byte **)(pbVar14 + 0x10);
      lVar25 = *(long *)(pbVar14 + 0x20);
      if (pbVar26 == (byte *)0x0) {
        if (pbVar18 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar18 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)(pbVar14 + 8);
        pbVar12 = pbVar10;
        pbVar15 = pbVar26;
        if ((pbVar10 != pbVar16) || (pbVar26 != pbVar18)) goto code_r0x000107c605b8;
      }
      if (lVar27 != 0) {
        if (lVar25 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar24 == *(byte **)(pbVar14 + 0x18)) && (lVar27 == lVar25)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar24,lVar27,*(byte **)(pbVar14 + 0x18),lVar25,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar25 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar28 != 5) {
      if ((((pbVar24 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
          lVar27 == 0) && pbVar26 == (byte *)0x0) {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar27 = *(long *)(pbVar14 + 0x20);
        lVar25 = *(long *)(pbVar14 + 0x18);
        bVar28 = pbVar14[8] | (byte)lVar25;
        bVar29 = pbVar14[9] | (byte)((ulong)lVar25 >> 8);
        bVar30 = pbVar14[10] | (byte)((ulong)lVar25 >> 0x10);
        bVar31 = pbVar14[0xb] | (byte)((ulong)lVar25 >> 0x18);
        bVar32 = pbVar14[0xc] | (byte)((ulong)lVar25 >> 0x20);
        bVar33 = pbVar14[0xd] | (byte)((ulong)lVar25 >> 0x28);
        bVar34 = pbVar14[0xe] | (byte)((ulong)lVar25 >> 0x30);
        bVar35 = pbVar14[0xf] | (byte)((ulong)lVar25 >> 0x38);
        bVar36 = pbVar14[0x10] | (byte)lVar27;
        bVar37 = pbVar14[0x11] | (byte)((ulong)lVar27 >> 8);
        bVar38 = pbVar14[0x12] | (byte)((ulong)lVar27 >> 0x10);
        bVar39 = pbVar14[0x13] | (byte)((ulong)lVar27 >> 0x18);
        bVar40 = pbVar14[0x14] | (byte)((ulong)lVar27 >> 0x20);
        bVar41 = pbVar14[0x15] | (byte)((ulong)lVar27 >> 0x28);
        bVar42 = pbVar14[0x16] | (byte)((ulong)lVar27 >> 0x30);
        bVar43 = pbVar14[0x17] | (byte)((ulong)lVar27 >> 0x38);
        auVar44[1] = bVar29;
        auVar44[0] = bVar28;
        auVar44[2] = bVar30;
        auVar44[3] = bVar31;
        auVar44[4] = bVar32;
        auVar44[5] = bVar33;
        auVar44[6] = bVar34;
        auVar44[7] = bVar35;
        auVar44[8] = bVar36;
        auVar44[9] = bVar37;
        auVar44[10] = bVar38;
        auVar44[0xb] = bVar39;
        auVar44[0xc] = bVar40;
        auVar44[0xd] = bVar41;
        auVar44[0xe] = bVar42;
        auVar44[0xf] = bVar43;
        auVar3[1] = bVar29;
        auVar3[0] = bVar28;
        auVar3[2] = bVar30;
        auVar3[3] = bVar31;
        auVar3[4] = bVar32;
        auVar3[5] = bVar33;
        auVar3[6] = bVar34;
        auVar3[7] = bVar35;
        auVar3[8] = bVar36;
        auVar3[9] = bVar37;
        auVar3[10] = bVar38;
        auVar3[0xb] = bVar39;
        auVar3[0xc] = bVar40;
        auVar3[0xd] = bVar41;
        auVar3[0xe] = bVar42;
        auVar3[0xf] = bVar43;
        auVar44 = NEON_ext(auVar44,auVar3,8,1);
        if (CONCAT17(bVar35 | auVar44[7],
                     CONCAT16(bVar34 | auVar44[6],
                              CONCAT15(bVar33 | auVar44[5],
                                       CONCAT14(bVar32 | auVar44[4],
                                                CONCAT13(bVar31 | auVar44[3],
                                                         CONCAT12(bVar30 | auVar44[2],
                                                                  CONCAT11(bVar29 | auVar44[1],
                                                                           bVar28 | auVar44[0]))))))
                    ) == 0 && *(long *)pbVar14 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar12 == (byte *)0x1) &&
         (((pbVar24 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar26 == (byte *)0x0) &&
          lVar27 == 0)) {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar14 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar14 != 2) {
          return (byte *)0x0;
        }
      }
      lVar27 = *(long *)(pbVar14 + 0x20);
      lVar25 = *(long *)(pbVar14 + 0x18);
      bVar28 = pbVar14[8] | (byte)lVar25;
      bVar29 = pbVar14[9] | (byte)((ulong)lVar25 >> 8);
      bVar30 = pbVar14[10] | (byte)((ulong)lVar25 >> 0x10);
      bVar31 = pbVar14[0xb] | (byte)((ulong)lVar25 >> 0x18);
      bVar32 = pbVar14[0xc] | (byte)((ulong)lVar25 >> 0x20);
      bVar33 = pbVar14[0xd] | (byte)((ulong)lVar25 >> 0x28);
      bVar34 = pbVar14[0xe] | (byte)((ulong)lVar25 >> 0x30);
      bVar35 = pbVar14[0xf] | (byte)((ulong)lVar25 >> 0x38);
      bVar36 = pbVar14[0x10] | (byte)lVar27;
      bVar37 = pbVar14[0x11] | (byte)((ulong)lVar27 >> 8);
      bVar38 = pbVar14[0x12] | (byte)((ulong)lVar27 >> 0x10);
      bVar39 = pbVar14[0x13] | (byte)((ulong)lVar27 >> 0x18);
      bVar40 = pbVar14[0x14] | (byte)((ulong)lVar27 >> 0x20);
      bVar41 = pbVar14[0x15] | (byte)((ulong)lVar27 >> 0x28);
      bVar42 = pbVar14[0x16] | (byte)((ulong)lVar27 >> 0x30);
      bVar43 = pbVar14[0x17] | (byte)((ulong)lVar27 >> 0x38);
      auVar1[1] = bVar29;
      auVar1[0] = bVar28;
      auVar1[2] = bVar30;
      auVar1[3] = bVar31;
      auVar1[4] = bVar32;
      auVar1[5] = bVar33;
      auVar1[6] = bVar34;
      auVar1[7] = bVar35;
      auVar1[8] = bVar36;
      auVar1[9] = bVar37;
      auVar1[10] = bVar38;
      auVar1[0xb] = bVar39;
      auVar1[0xc] = bVar40;
      auVar1[0xd] = bVar41;
      auVar1[0xe] = bVar42;
      auVar1[0xf] = bVar43;
      auVar2[1] = bVar29;
      auVar2[0] = bVar28;
      auVar2[2] = bVar30;
      auVar2[3] = bVar31;
      auVar2[4] = bVar32;
      auVar2[5] = bVar33;
      auVar2[6] = bVar34;
      auVar2[7] = bVar35;
      auVar2[8] = bVar36;
      auVar2[9] = bVar37;
      auVar2[10] = bVar38;
      auVar2[0xb] = bVar39;
      auVar2[0xc] = bVar40;
      auVar2[0xd] = bVar41;
      auVar2[0xe] = bVar42;
      auVar2[0xf] = bVar43;
      auVar44 = NEON_ext(auVar1,auVar2,8,1);
      lVar25 = CONCAT17(bVar35 | auVar44[7],
                        CONCAT16(bVar34 | auVar44[6],
                                 CONCAT15(bVar33 | auVar44[5],
                                          CONCAT14(bVar32 | auVar44[4],
                                                   CONCAT13(bVar31 | auVar44[3],
                                                            CONCAT12(bVar30 | auVar44[2],
                                                                     CONCAT11(bVar29 | auVar44[1],
                                                                              bVar28 | auVar44[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar14[0x28] != 5) {
      return (byte *)0x0;
    }
    uVar13 = *(ulong *)(pbVar14 + 8);
    uVar17 = *(ulong *)(pbVar14 + 0x10);
    lVar25 = *(long *)pbVar14;
    uVar11 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar12,lVar25,uVar11);
    if (((ulong)pbVar12 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
    unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
    unaff_x20 = *(ulong *)(puVar7 + -0xa0);
    unaff_x19 = *(byte **)(puVar7 + -0x98);
    unaff_x22 = *(ulong *)(puVar7 + -0xb0);
    unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
    unaff_x24 = *(byte **)(puVar7 + -0xc0);
    unaff_x23 = *(byte **)(puVar7 + -0xb8);
    puVar7 = puVar7 + -0x80;
  } while( true );
}



/* Entry: 1045b691c; end: 1045b6bc3;  */

uint FUN_1045b691c(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_c0 [32];
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  uVar2 = *param_1;
  if ((uVar2 == *param_2 && param_1[1] == param_2[1]) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar2 & 1) != 0)) {
    uVar2 = param_1[2];
    FUN_1045ba584(uVar2,param_2[2]);
    if ((uVar2 & 1) != 0) {
      uVar2 = param_1[3];
      FUN_1045b79ac(uVar2,param_2[3]);
      if ((uVar2 & 1) != 0) {
        uVar2 = param_1[4];
        if (((uVar2 == param_2[4]) && (param_1[5] == param_2[5])) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar2 & 1) != 0)) {
          uVar4 = param_1[0xe];
          uVar2 = param_1[0xd];
          uVar9 = param_1[0x10];
          uVar7 = param_1[0xf];
          uVar6 = param_2[0xe];
          uVar5 = param_2[0xd];
          uVar10 = param_2[0x10];
          uVar8 = param_2[0xf];
          uStack_a0 = uVar5;
          uStack_98 = uVar6;
          uStack_90 = uVar8;
          uStack_88 = uVar10;
          uStack_80 = uVar2;
          uStack_78 = uVar4;
          uStack_70 = uVar7;
          uStack_68 = uVar9;
          if (uVar4 == 0) {
            if (uVar6 != 0) goto LAB_1045b6a60;
            FUN_1045b6614(&uStack_80,auStack_c0);
            FUN_1045b6614(&uStack_a0,auStack_c0);
LAB_1045b6abc:
            FUN_1045b3c60(uVar2,uVar4,uVar7,uVar9);
            uVar2 = param_1[6];
            FUN_1045ba7c4(uVar2,param_2[6]);
            if ((uVar2 & 1) != 0) {
              uVar2 = param_1[7];
              uVar4 = param_2[7];
              if ((char)param_2[8] == '\x01') {
                if (uVar4 == 0) {
                  if (uVar2 == 0) goto LAB_1045b6b90;
                }
                else if (uVar4 == 1) {
                  if (uVar2 == 1) {
LAB_1045b6b90:
                    uVar2 = param_1[9];
                    if (((uVar2 == param_2[9]) && (param_1[10] == param_2[10])) ||
                       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                  (), (uVar2 & 1) != 0)) {
                      uVar2 = param_1[0xb];
                      func_0x000100e25fcc(uVar2,param_1[0xc],param_2[0xb],param_2[0xc]);
                      uVar1 = (uint)uVar2;
                      goto LAB_1045b6b50;
                    }
                  }
                }
                else if (uVar2 == 2) goto LAB_1045b6b90;
              }
              else if (uVar2 == uVar4) goto LAB_1045b6b90;
            }
          }
          else {
            if (uVar6 == 0) {
LAB_1045b6a60:
              FUN_1045b6614(&uStack_80,auStack_c0);
              FUN_1045b6614(&uStack_a0,auStack_c0);
              FUN_1045b3c60(uVar2,uVar4,uVar7,uVar9);
              uVar2 = uVar5;
              uVar4 = uVar6;
              uVar7 = uVar8;
              uVar9 = uVar10;
            }
            else if (((uVar2 == uVar5) && (uVar4 == uVar6)) ||
                    (uVar3 = uVar2,
                    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                              (uVar2,uVar4,uVar5,uVar6,0), (uVar3 & 1) != 0)) {
              FUN_1045b6614(&uStack_80,auStack_c0);
              FUN_1045b6614(&uStack_a0,auStack_c0);
              uVar3 = uVar7;
              func_0x000100e25fcc(uVar7,uVar9,uVar8,uVar10);
              FUN_1045b3c60(uVar5,uVar6,uVar8,uVar10);
              if ((uVar3 & 1) != 0) goto LAB_1045b6abc;
            }
            else {
              FUN_1045b6614(&uStack_80,auStack_c0);
              FUN_1045b6614(&uStack_a0,auStack_c0);
              FUN_1045b3c60(uVar5,uVar6,uVar8,uVar10);
            }
            FUN_1045b3c60(uVar2,uVar4,uVar7,uVar9);
          }
        }
      }
    }
  }
  uVar1 = 0;
LAB_1045b6b50:
  return uVar1 & 1;
}



/* Entry: 1045b6bc4; end: 1045b6be7;  */

void FUN_1045b6bc4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1045b6be8();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1045b6be8; end: 1045b6c27;  */

void FUN_1045b6be8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113087800 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd197a0;
  _swift_getWitnessTable(&UNK_10dd197a0,&UNK_11078afa8);
  puRam0000000113087800 = puVar1;
  return;
}



/* Entry: 1045b6c28; end: 1045b6c3b;  */

void FUN_1045b6c28(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1045b6c3c();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1045b6c7c)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1045b6c3c; end: 1045b6cbb;  */

void FUN_1045b6c3c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113087808 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd197c8;
  _swift_getWitnessTable(&UNK_10dd197c8,&UNK_11078afa8);
  puRam0000000113087808 = puVar1;
  return;
}



/* Entry: 1045b6cbc; end: 1045b6cbf;  */

void FUN_1045b6cbc(void)

{
  undefined *puVar1;
  
  if (puRam0000000113087818 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd19808;
  _swift_getWitnessTable(&UNK_10dd19808,&UNK_11078afa8);
  puRam0000000113087818 = puVar1;
  return;
}



/* Entry: 1045b6cc0; end: 1045b6cff;  */

void FUN_1045b6cc0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113087818 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd19808;
  _swift_getWitnessTable(&UNK_10dd19808,&UNK_11078afa8);
  puRam0000000113087818 = puVar1;
  return;
}



/* Entry: 1045b6d00; end: 1045b6d23;  */

void FUN_1045b6d00(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1045b6d24();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1045b6d24; end: 1045b6d63;  */

void FUN_1045b6d24(void)

{
  undefined *puVar1;
  
  if (puRam0000000113087820 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd19878;
  _swift_getWitnessTable(&UNK_10dd19878,&UNK_11078b048);
  puRam0000000113087820 = puVar1;
  return;
}



/* Entry: 1045b6d64; end: 1045b6d77;  */

void FUN_1045b6d64(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1045b6d78();
  *(long *)(param_1 + 8) = lVar1;
  FUN_1045b6664();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1045b6d78; end: 1045b6db7;  */

void FUN_1045b6d78(void)

{
  undefined *puVar1;
  
  if (puRam0000000113087828 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd198a0;
  _swift_getWitnessTable(&UNK_10dd198a0,&UNK_11078b048);
  puRam0000000113087828 = puVar1;
  return;
}



/* Entry: 1045b6db8; end: 1045b6dbb;  */

void FUN_1045b6db8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113087830 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd198e0;
  _swift_getWitnessTable(&UNK_10dd198e0,&UNK_11078b048);
  puRam0000000113087830 = puVar1;
  return;
}



/* Entry: 1045b6dbc; end: 1045b6dfb;  */

void FUN_1045b6dbc(void)

{
  undefined *puVar1;
  
  if (puRam0000000113087830 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd198e0;
  _swift_getWitnessTable(&UNK_10dd198e0,&UNK_11078b048);
  puRam0000000113087830 = puVar1;
  return;
}



/* Entry: 1045b6dfc; end: 1045b6e1f;  */

void FUN_1045b6dfc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1045b6e20();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1045b6e20; end: 1045b6e5f;  */

void FUN_1045b6e20(void)

{
  undefined *puVar1;
  
  if (puRam0000000113087838 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd19950;
  _swift_getWitnessTable(&UNK_10dd19950,&UNK_11078b0e8);
  puRam0000000113087838 = puVar1;
  return;
}



/* Entry: 1045b6e60; end: 1045b6e73;  */

void FUN_1045b6e60(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1045b6ea4();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1045b66e4)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1045b6e74; end: 1045b6ea3;  */

void FUN_1045b6e74(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1045b6ea4; end: 1045b6ee3;  */

void FUN_1045b6ea4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113087840 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd19978;
  _swift_getWitnessTable(&UNK_10dd19978,&UNK_11078b0e8);
  puRam0000000113087840 = puVar1;
  return;
}



/* Entry: 1045b6ee4; end: 1045b6ee7;  */

void FUN_1045b6ee4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113087848 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd199b8;
  _swift_getWitnessTable(&UNK_10dd199b8,&UNK_11078b0e8);
  puRam0000000113087848 = puVar1;
  return;
}



/* Entry: 1045b6ee8; end: 1045b6f27;  */

void FUN_1045b6ee8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113087848 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd199b8;
  _swift_getWitnessTable(&UNK_10dd199b8,&UNK_11078b0e8);
  puRam0000000113087848 = puVar1;
  return;
}



/* Entry: 1045b6f28; end: 1045b6f97;  */

/* WARNING: Possible PIC construction at 0x0001045b6f6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001045b6f70) */
/* WARNING: Removing unreachable block (ram,0x0001045b6f8c) */
/* WARNING: Removing unreachable block (ram,0x0001045b6f78) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1045b6f28(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x30));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x50));
  uVar1 = *(ulong *)(param_1 + 0x58);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x60) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x60) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 1045b6f98; end: 1045b7087;  */

undefined8 * FUN_1045b6f98(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  
  uVar8 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar8;
  uVar8 = param_2[2];
  uVar2 = param_2[3];
  param_1[2] = uVar8;
  param_1[3] = uVar2;
  uVar3 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar3;
  uVar1 = param_2[6];
  uVar4 = param_2[7];
  param_1[6] = uVar1;
  param_1[7] = uVar4;
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  uVar5 = param_2[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar5;
  uVar4 = param_2[0xb];
  uVar6 = param_2[0xc];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar8);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar5);
  func_0x00010006c00c(uVar4,uVar6);
  param_1[0xb] = uVar4;
  param_1[0xc] = uVar6;
  lVar7 = param_2[0xe];
  if (lVar7 == 0) {
    uVar8 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar8;
    uVar8 = param_2[0xf];
    param_1[0x10] = param_2[0x10];
    param_1[0xf] = uVar8;
  }
  else {
    param_1[0xd] = param_2[0xd];
    param_1[0xe] = lVar7;
    uVar8 = param_2[0xf];
    uVar1 = param_2[0x10];
    _swift_bridgeObjectRetain();
    func_0x00010006c00c(uVar8,uVar1);
    param_1[0xf] = uVar8;
    param_1[0x10] = uVar1;
  }
  return param_1;
}



/* Entry: 1045b7088; end: 1045b722f;  */

undefined8 * FUN_1045b7088(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_1 = *param_2;
  uVar2 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  param_1[4] = param_2[4];
  uVar2 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_1[6];
  param_1[6] = param_2[6];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_2[7];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  param_1[7] = uVar2;
  param_1[9] = param_2[9];
  uVar2 = param_1[10];
  param_1[10] = param_2[10];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_2[0xb];
  uVar5 = param_2[0xc];
  func_0x00010006c00c(uVar2,uVar5);
  uVar4 = param_1[0xb];
  uVar1 = param_1[0xc];
  param_1[0xb] = uVar2;
  param_1[0xc] = uVar5;
  func_0x00010006c090(uVar4,uVar1);
  lVar3 = param_1[0xe];
  if (lVar3 == 0) {
    if (param_2[0xe] == 0) {
      uVar4 = param_2[0xe];
      uVar2 = param_2[0xd];
      uVar5 = param_2[0xf];
      param_1[0x10] = param_2[0x10];
      param_1[0xf] = uVar5;
      param_1[0xe] = uVar4;
      param_1[0xd] = uVar2;
    }
    else {
      param_1[0xd] = param_2[0xd];
      param_1[0xe] = param_2[0xe];
      uVar2 = param_2[0xf];
      uVar4 = param_2[0x10];
      _swift_bridgeObjectRetain();
      func_0x00010006c00c(uVar2,uVar4);
      param_1[0xf] = uVar2;
      param_1[0x10] = uVar4;
    }
  }
  else if (param_2[0xe] == 0) {
    FUN_1045b7230(param_1 + 0xd);
    uVar4 = param_2[0x10];
    uVar2 = param_2[0xf];
    uVar5 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar5;
    param_1[0x10] = uVar4;
    param_1[0xf] = uVar2;
  }
  else {
    param_1[0xd] = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(lVar3);
    uVar2 = param_2[0xf];
    uVar5 = param_2[0x10];
    func_0x00010006c00c(uVar2,uVar5);
    uVar4 = param_1[0xf];
    uVar1 = param_1[0x10];
    param_1[0xf] = uVar2;
    param_1[0x10] = uVar5;
    func_0x00010006c090(uVar4,uVar1);
  }
  return param_1;
}



/* Entry: 1045b7230; end: 1045b734f;  */

undefined8 FUN_1045b7230(undefined8 param_1)

{
  (*(code *)(undefined *)0x1046072e0)();
  return param_1;
}



/* Entry: 1045b7350; end: 1045b7407;  */

int FUN_1045b7350(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x22] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1045b7408; end: 1045b744f;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1045b7408(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x30));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x40));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x60));
  uVar1 = *(ulong *)(param_1 + 0x68);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x70) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x70) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 1045b7450; end: 1045b74ff;  */

undefined8 * FUN_1045b7450(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar3 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar3;
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  uVar1 = param_2[8];
  uVar4 = param_2[9];
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  param_1[8] = uVar1;
  param_1[9] = uVar4;
  uVar5 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = uVar5;
  uVar4 = param_2[0xd];
  uVar6 = param_2[0xe];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar5);
  func_0x00010006c00c(uVar4,uVar6);
  param_1[0xd] = uVar4;
  param_1[0xe] = uVar6;
  return param_1;
}



/* Entry: 1045b7500; end: 1045b75ff;  */

undefined8 * FUN_1045b7500(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  uVar4 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  param_1[2] = param_2[2];
  uVar4 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[5] = param_2[5];
  uVar4 = param_1[6];
  param_1[6] = param_2[6];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  uVar4 = param_1[8];
  param_1[8] = param_2[8];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  uVar4 = param_2[9];
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  param_1[9] = uVar4;
  param_1[0xb] = param_2[0xb];
  uVar4 = param_1[0xc];
  param_1[0xc] = param_2[0xc];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  uVar4 = param_2[0xd];
  uVar2 = param_2[0xe];
  func_0x00010006c00c(uVar4,uVar2);
  uVar1 = param_1[0xd];
  uVar3 = param_1[0xe];
  param_1[0xd] = uVar4;
  param_1[0xe] = uVar2;
  func_0x00010006c090(uVar1,uVar3);
  return param_1;
}



/* Entry: 1045b7600; end: 1045b76a3;  */

undefined8 * FUN_1045b7600(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar2 = param_2[6];
  uVar1 = param_1[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  uVar2 = param_1[8];
  param_1[8] = param_2[8];
  _swift_bridgeObjectRelease(uVar2);
  param_1[9] = param_2[9];
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  uVar2 = param_2[0xc];
  uVar1 = param_1[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_1[0xd];
  uVar1 = param_1[0xe];
  uVar3 = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xd] = uVar3;
  func_0x00010006c090(uVar2,uVar1);
  return param_1;
}



/* Entry: 1045b76a4; end: 1045b7757;  */

int FUN_1045b76a4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x1e] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1045b7758; end: 1045b7787;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1045b7758(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  uVar1 = *(ulong *)(param_1 + 0x20);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x28) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x28) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 1045b7788; end: 1045b7867;  */

undefined8 * FUN_1045b7788(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  uVar1 = param_2[4];
  uVar3 = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar2);
  func_0x00010006c00c(uVar1,uVar3);
  param_1[4] = uVar1;
  param_1[5] = uVar3;
  return param_1;
}



/* Entry: 1045b7868; end: 1045b78bb;  */

undefined8 * FUN_1045b7868(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_1[4];
  uVar2 = param_1[5];
  uVar3 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 1045b78bc; end: 1045b795f;  */

int FUN_1045b78bc(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1045b7960; end: 1045b799f;  */

void FUN_1045b7960(void)

{
  undefined *puVar1;
  
  if (puRam0000000113087868 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dd1ef10;
  _swift_getWitnessTable(&DAT_10dd1ef10,&UNK_11078f270);
  puRam0000000113087868 = puVar1;
  return;
}



/* Entry: 1045b79a0; end: 1045b79ab;  */

long FUN_1045b79a0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1045b79ac; end: 1045b863b;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_1045b79ac(long *param_1,long *param_2)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  uint uVar9;
  uint uVar10;
  code *pcVar11;
  bool bVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  byte *pbVar18;
  long lVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  ulong uVar23;
  long *plVar24;
  uint uVar25;
  long lVar26;
  ulong uVar27;
  ulong uVar28;
  int iVar29;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *plVar30;
  long *plVar31;
  long *unaff_x24;
  int iVar32;
  long *plVar33;
  long *unaff_x27;
  long *unaff_x28;
  long *plVar34;
  undefined1 auStack_410 [128];
  long lStack_390;
  long lStack_388;
  long lStack_380;
  undefined8 uStack_378;
  ulong uStack_370;
  long lStack_368;
  ulong uStack_360;
  long lStack_358;
  undefined8 uStack_350;
  ulong uStack_348;
  ulong uStack_340;
  long lStack_338;
  ulong uStack_330;
  long lStack_328;
  ulong uStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  undefined8 uStack_2f8;
  ulong uStack_2f0;
  long lStack_2e8;
  ulong uStack_2e0;
  long lStack_2d8;
  undefined8 uStack_2d0;
  long lStack_2c8;
  ulong uStack_2c0;
  long lStack_2b8;
  ulong uStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long *plStack_290;
  long *plStack_288;
  long *plStack_280;
  long *plStack_278;
  long *plStack_270;
  long *plStack_268;
  long *plStack_260;
  long *plStack_258;
  undefined1 **ppuStack_250;
  code *pcStack_248;
  ulong uStack_238;
  long *plStack_230;
  long *plStack_228;
  long *plStack_220;
  long *plStack_218;
  long lStack_210;
  uint uStack_208;
  uint uStack_204;
  long *plStack_200;
  long *plStack_1f8;
  long *plStack_1f0;
  long *plStack_1e8;
  long *plStack_1e0;
  long *plStack_1d8;
  long *plStack_1d0;
  long *plStack_1c8;
  byte abStack_1b9 [9];
  byte abStack_1b0 [14];
  undefined2 uStack_1a2;
  long *plStack_1a0;
  byte bStack_198;
  long *plStack_190;
  long *plStack_188;
  long *plStack_180;
  undefined1 uStack_178;
  long lStack_170;
  undefined1 *puStack_100;
  code *pcStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  byte bStack_81;
  byte abStack_80 [24];
  long lStack_68;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar30 = (long *)param_1[2];
  plVar15 = plStack_e0;
  if (plVar30 == (long *)param_2[2]) {
    if ((plVar30 != (long *)0x0) && (param_1 != param_2)) {
      plStack_e0 = (long *)0x0;
      unaff_x27 = param_2 + 10;
      unaff_x24 = param_1 + 5;
      do {
        uVar23 = unaff_x24[-1];
        plVar24 = (long *)*unaff_x24;
        plVar14 = (long *)unaff_x24[1];
        plStack_b0 = (long *)unaff_x24[2];
        plVar31 = (long *)unaff_x24[3];
        plStack_90 = (long *)unaff_x24[4];
        plStack_98 = (long *)unaff_x24[5];
        unaff_x19 = (long *)unaff_x27[-5];
        plStack_a8 = (long *)unaff_x27[-4];
        unaff_x22 = (long *)unaff_x27[-3];
        plStack_a0 = (long *)unaff_x27[-2];
        unaff_x28 = (long *)unaff_x27[-1];
        unaff_x20 = (long *)*unaff_x27;
        if (((uVar23 != unaff_x27[-6]) || (plVar24 != unaff_x19)) &&
           (param_2 = plVar24,
           __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                     (), unaff_x21 = plStack_b0, plVar15 = plStack_e0, (uVar23 & 1) == 0))
        goto LAB_1045b85bc;
        plVar13 = plStack_90;
        plVar34 = plStack_98;
        plVar15 = plStack_b0;
        plVar33 = plVar30;
        plVar16 = plVar31;
        plStack_c0 = plVar24;
        plStack_b8 = unaff_x19;
        if (plStack_98 != (long *)0x0) {
          if (unaff_x20 == (long *)0x0) {
            plVar17 = (long *)0x0;
            goto LAB_1045b8574;
          }
          plStack_d8 = unaff_x24;
          plStack_d0 = unaff_x27;
          plStack_c8 = unaff_x28;
          if (plStack_98 == unaff_x20) {
            _swift_bridgeObjectRetain(plVar24);
            unaff_x21 = plStack_b0;
            func_0x00010006c00c(plVar14,plStack_b0);
            plVar34 = plStack_90;
            plVar24 = plStack_98;
            func_0x000104603ab8(plVar31,plStack_90,plStack_98);
            _swift_bridgeObjectRetain(unaff_x19);
            func_0x00010006c00c(plStack_a8,unaff_x22);
            plVar15 = plStack_a0;
            unaff_x28 = plStack_c8;
            func_0x000104603ab8(plStack_a0,plStack_c8,plVar24);
            func_0x000104603ab8(plVar31,plVar34,plVar24);
            unaff_x19 = plStack_b8;
            func_0x000104603ab8(plVar15,unaff_x28,plVar24);
LAB_1045b7c8c:
            plVar13 = plStack_a0;
            unaff_x27 = plStack_d0;
            unaff_x24 = plStack_d8;
            plVar34 = plStack_e0;
            uVar9 = (uint)((ulong)plStack_90 >> 0x20);
            uVar20 = uVar9 >> 0x1e;
            uVar10 = (uint)((ulong)unaff_x28 >> 0x20);
            uVar25 = uVar10 >> 0x1e;
            iVar32 = (int)plVar31;
            plVar17 = unaff_x28;
            plVar24 = unaff_x24;
            if ((ulong)plStack_90 >> 0x3e == 3) {
              uVar23 = 0;
              if (((plVar31 != (long *)0x0) || (plStack_90 != (long *)0xc000000000000000)) ||
                 (((ulong)unaff_x28 >> 0x3e < 3 ||
                  ((uVar23 = 0, plStack_a0 != (long *)0x0 ||
                   (unaff_x28 != (long *)0xc000000000000000)))))) goto joined_r0x0001045b7ea4;
              plVar13 = (long *)0x0;
              plVar17 = (long *)0xc000000000000000;
LAB_1045b7e08:
              func_0x00010459fd54(plVar13,plVar17,unaff_x20);
              goto LAB_1045b8010;
            }
            if (uVar9 >> 0x1e < 2) {
              if (uVar20 == 0) {
                uVar23 = (ulong)plStack_90 >> 0x30 & 0xff;
              }
              else {
                iVar22 = (int)((ulong)plVar31 >> 0x20);
                if (SBORROW4(iVar22,iVar32)) {
                    /* WARNING: Does not return */
                  pcVar11 = (code *)SoftwareBreakpoint(1,0x1045b8620);
                  (*pcVar11)();
                }
                uVar23 = (ulong)(iVar22 - iVar32);
              }
              if (uVar10 >> 0x1e < 2) goto LAB_1045b7d38;
LAB_1045b7d00:
              if (uVar25 != 2) {
                if (uVar23 != 0) goto LAB_1045b84ac;
                goto LAB_1045b7e08;
              }
              uVar27 = plStack_a0[3] - plStack_a0[2];
              if (SBORROW8(plStack_a0[3],plStack_a0[2])) {
                    /* WARNING: Does not return */
                pcVar11 = (code *)SoftwareBreakpoint(1,0x1045b8608);
                (*pcVar11)();
              }
            }
            else {
              if (uVar20 == 2) {
                uVar23 = plVar31[3] - plVar31[2];
                if (SBORROW8(plVar31[3],plVar31[2])) {
                    /* WARNING: Does not return */
                  pcVar11 = (code *)SoftwareBreakpoint(1,0x1045b861c);
                  (*pcVar11)();
                }
              }
              else {
                uVar23 = 0;
              }
joined_r0x0001045b7ea4:
              if (1 < uVar25) goto LAB_1045b7d00;
LAB_1045b7d38:
              if (uVar25 == 0) {
                uVar27 = (ulong)unaff_x28 >> 0x30 & 0xff;
              }
              else {
                iVar22 = (int)((ulong)plStack_a0 >> 0x20);
                if (SBORROW4(iVar22,(int)plStack_a0)) {
                    /* WARNING: Does not return */
                  pcVar11 = (code *)SoftwareBreakpoint(1,0x1045b8604);
                  (*pcVar11)();
                }
                uVar27 = (ulong)(iVar22 - (int)plStack_a0);
              }
            }
            if (uVar23 != uVar27) goto LAB_1045b84ac;
            if ((long)uVar23 < 1) goto LAB_1045b7e08;
            if (uVar20 < 2) {
              if (uVar20 == 0) {
                abStack_80[0] = (byte)plVar31;
                abStack_80[1] = (byte)((ulong)plVar31 >> 8);
                abStack_80[2] = (byte)((ulong)plVar31 >> 0x10);
                abStack_80[3] = (byte)((ulong)plVar31 >> 0x18);
                abStack_80[4] = (byte)((ulong)plVar31 >> 0x20);
                abStack_80[5] = (byte)((ulong)plVar31 >> 0x28);
                abStack_80[6] = (byte)((ulong)plVar31 >> 0x30);
                abStack_80[7] = (byte)((ulong)plVar31 >> 0x38);
                abStack_80[8] = (byte)plStack_90;
                abStack_80[9] = (byte)((ulong)plStack_90 >> 8);
                abStack_80[10] = (byte)((ulong)plStack_90 >> 0x10);
                abStack_80[0xb] = (byte)((ulong)plStack_90 >> 0x18);
                abStack_80[0xc] = (byte)((ulong)plStack_90 >> 0x20);
                abStack_80[0xd] = (byte)((ulong)plStack_90 >> 0x28);
                pbVar18 = abStack_80 + ((ulong)plStack_90 >> 0x30 & 0xff);
LAB_1045b7f30:
                func_0x000100e25bdc(&bStack_81,abStack_80,pbVar18,plStack_a0,unaff_x28);
                unaff_x21 = plStack_b0;
                plStack_e0 = plVar34;
                func_0x00010459fd54(plVar13,unaff_x28,unaff_x20);
                unaff_x19 = plStack_b8;
                bVar2 = bStack_81;
              }
              else {
                lVar26 = (long)iVar32;
                plVar33 = (long *)(((long)plVar31 >> 0x20) - lVar26);
                if ((long)plVar31 >> 0x20 < lVar26) {
                    /* WARNING: Does not return */
                  pcVar11 = (code *)SoftwareBreakpoint(1,0x1045b8624);
                  plStack_f0 = plVar14;
                  plStack_e8 = plVar30;
                  plStack_d8 = unaff_x20;
                  (*pcVar11)();
                }
                plStack_f0 = plVar14;
                plStack_e8 = plVar30;
                plStack_d8 = unaff_x20;
                __s10Foundation13__DataStorageC6_bytesSvSgvg(plStack_90);
                if (plVar15 == (long *)0x0) {
                  __s10Foundation13__DataStorageC7_lengthSivg(plStack_90);
                  lVar26 = 0;
                  lVar19 = 0;
                }
                else {
                  plVar30 = plVar15;
                  __s10Foundation13__DataStorageC7_offsetSivg(plStack_90);
                  if (SBORROW8(lVar26,(long)plVar30)) {
                    /* WARNING: Does not return */
                    pcVar11 = (code *)SoftwareBreakpoint(1,0x1045b8638);
                    (*pcVar11)();
                  }
                  lVar1 = (lVar26 - (long)plVar30) + (long)plVar15;
                  __s10Foundation13__DataStorageC7_lengthSivg(plStack_90);
                  if ((long)plVar33 <= (long)plVar30) {
                    plVar30 = plVar33;
                  }
                  lVar26 = 0;
                  if (lVar1 != 0) {
                    lVar26 = lVar1;
                  }
                  lVar19 = 0;
                  if (lVar1 != 0) {
                    lVar19 = (long)plVar30 + lVar1;
                  }
                }
                plVar30 = plStack_a0;
                unaff_x28 = plStack_c8;
                func_0x000100e25bdc(abStack_80,lVar26,lVar19,plStack_a0);
                unaff_x20 = plStack_d8;
                plStack_e0 = plVar34;
                func_0x00010459fd54(plVar30,unaff_x28,plStack_d8);
                plVar14 = plStack_f0;
                plVar33 = plStack_e8;
                unaff_x19 = plStack_b8;
                unaff_x21 = plStack_b0;
                bVar2 = abStack_80[0];
              }
            }
            else {
              if (uVar20 != 2) {
                abStack_80[8] = 0;
                abStack_80[9] = 0;
                abStack_80[10] = 0;
                abStack_80[0xb] = 0;
                abStack_80[0xc] = 0;
                abStack_80[0xd] = 0;
                abStack_80[0] = 0;
                abStack_80[1] = 0;
                abStack_80[2] = 0;
                abStack_80[3] = 0;
                abStack_80[4] = 0;
                abStack_80[5] = 0;
                abStack_80[6] = 0;
                abStack_80[7] = 0;
                pbVar18 = abStack_80;
                goto LAB_1045b7f30;
              }
              lVar26 = plVar31[2];
              lVar19 = plVar31[3];
              plStack_f0 = plVar14;
              plStack_e8 = plVar30;
              plStack_d8 = unaff_x20;
              __s10Foundation13__DataStorageC6_bytesSvSgvg(plStack_90);
              plVar30 = plVar15;
              if (plVar15 != (long *)0x0) {
                __s10Foundation13__DataStorageC7_offsetSivg(plStack_90);
                if (SBORROW8(lVar26,(long)plVar30)) {
                    /* WARNING: Does not return */
                  pcVar11 = (code *)SoftwareBreakpoint(1,0x1045b8634);
                  (*pcVar11)();
                }
                plVar15 = (long *)((lVar26 - (long)plVar30) + (long)plVar15);
              }
              plVar13 = (long *)(lVar19 - lVar26);
              if (SBORROW8(lVar19,lVar26)) {
                    /* WARNING: Does not return */
                pcVar11 = (code *)SoftwareBreakpoint(1,0x1045b8628);
                (*pcVar11)();
              }
              __s10Foundation13__DataStorageC7_lengthSivg(plStack_90);
              plVar17 = plStack_a0;
              unaff_x28 = plStack_c8;
              unaff_x20 = plStack_d8;
              plVar33 = plStack_e8;
              plVar14 = plStack_f0;
              if (plVar15 == (long *)0x0) {
                lVar26 = 0;
              }
              else {
                if ((long)plVar13 <= (long)plVar30) {
                  plVar30 = plVar13;
                }
                lVar26 = (long)plVar30 + (long)plVar15;
              }
              func_0x000100e25bdc(abStack_80,plVar15,lVar26,plStack_a0,plStack_c8);
              plStack_e0 = plVar34;
              func_0x00010459fd54(plVar17,unaff_x28,unaff_x20);
              unaff_x19 = plStack_b8;
              unaff_x21 = plStack_b0;
              bVar2 = abStack_80[0];
            }
            plStack_b8 = unaff_x19;
            if ((bVar2 & 1) != 0) goto LAB_1045b8010;
          }
          else {
            _swift_bridgeObjectRetain(plVar24);
            unaff_x21 = plStack_b0;
            func_0x00010006c00c(plVar14,plStack_b0);
            plVar34 = plStack_90;
            plVar24 = plStack_98;
            func_0x000104603ab8(plVar31,plStack_90,plStack_98);
            _swift_bridgeObjectRetain(unaff_x19);
            func_0x00010006c00c(plStack_a8,unaff_x22);
            plVar15 = plStack_a0;
            unaff_x28 = plStack_c8;
            func_0x000104603ab8(plStack_a0,plStack_c8,unaff_x20);
            func_0x000104603ab8(plVar31,plVar34,plVar24);
            unaff_x19 = plStack_b8;
            func_0x000104603ab8(plVar15,unaff_x28,unaff_x20);
            plVar15 = unaff_x20;
            FUN_10453dc68();
            if (((ulong)plVar15 & 1) != 0) goto LAB_1045b7c8c;
LAB_1045b84ac:
            unaff_x27 = plStack_d0;
            unaff_x24 = plStack_d8;
            func_0x00010459fd54(plStack_a0,unaff_x28,unaff_x20);
          }
          param_2 = plStack_90;
          plVar17 = plStack_98;
          func_0x00010459fd54(plVar31,plStack_90,plStack_98);
          _swift_bridgeObjectRelease(plStack_b8);
          func_0x00010006c090(plStack_a8,unaff_x22);
          func_0x00010459fd54(plStack_a0,unaff_x28,unaff_x20);
          _swift_bridgeObjectRelease(plStack_c0);
          func_0x00010006c090(plVar14,unaff_x21);
          unaff_x19 = param_2;
          plVar34 = plVar17;
          plVar30 = unaff_x21;
LAB_1045b85b8:
          unaff_x21 = unaff_x20;
          unaff_x20 = plVar34;
          func_0x00010459fd54(plVar16,param_2,plVar17);
          plVar15 = plStack_e0;
          goto LAB_1045b85bc;
        }
        plVar17 = unaff_x20;
        if (unaff_x20 != (long *)0x0) {
LAB_1045b8574:
          func_0x000104603ab8(plVar31,plStack_90,plStack_98);
          plVar16 = plStack_a0;
          func_0x000104603ab8(plStack_a0,unaff_x28,plVar17);
          func_0x00010459fd54(plVar31,plVar13,plVar34);
          param_2 = unaff_x28;
          unaff_x19 = plVar13;
          unaff_x20 = plVar17;
          unaff_x22 = plVar16;
          goto LAB_1045b85b8;
        }
        _swift_bridgeObjectRetain(plVar24);
        func_0x00010006c00c(plVar14,plVar15);
        plVar15 = plStack_90;
        func_0x000104603ab8(plVar31,plStack_90,0);
        _swift_bridgeObjectRetain(plStack_b8);
        func_0x00010006c00c(plStack_a8,unaff_x22);
        plVar30 = plStack_a0;
        func_0x000104603ab8(plStack_a0,unaff_x28,0);
        unaff_x19 = plStack_b8;
        func_0x000104603ab8(plVar31,plVar15,0);
        unaff_x21 = plStack_b0;
        func_0x000104603ab8(plVar30,unaff_x28,0);
        plVar24 = unaff_x24;
LAB_1045b8010:
        plVar15 = plVar31;
        func_0x00010459fd54(plVar31,plStack_90,plStack_98);
        plVar13 = plStack_a8;
        plVar30 = plStack_b0;
        plVar34 = plStack_e0;
        uVar9 = (uint)((ulong)unaff_x21 >> 0x20);
        uVar20 = uVar9 >> 0x1e;
        uVar10 = (uint)((ulong)unaff_x22 >> 0x20);
        uVar25 = uVar10 >> 0x1e;
        iVar32 = (int)plVar14;
        unaff_x24 = plVar24;
        if ((ulong)unaff_x21 >> 0x3e == 3) {
          uVar23 = 0;
          if ((((plVar14 != (long *)0x0) || (unaff_x21 != (long *)0xc000000000000000)) ||
              ((ulong)unaff_x22 >> 0x3e < 3)) ||
             ((uVar23 = 0, plStack_a8 != (long *)0x0 || (unaff_x22 != (long *)0xc000000000000000))))
          {
joined_r0x0001045b82a8:
            if (uVar25 < 2) goto LAB_1045b80e8;
LAB_1045b80b0:
            if (uVar25 == 2) {
              uVar27 = plStack_a8[3] - plStack_a8[2];
              if (SBORROW8(plStack_a8[3],plStack_a8[2])) {
                    /* WARNING: Does not return */
                pcVar11 = (code *)SoftwareBreakpoint(1,0x1045b8600);
                (*pcVar11)();
              }
              goto LAB_1045b8108;
            }
            if (uVar23 == 0) goto LAB_1045b7a0c;
            goto LAB_1045b8524;
          }
          _swift_bridgeObjectRelease(unaff_x19);
          func_0x00010006c090(0,0xc000000000000000);
          func_0x00010459fd54(plStack_a0,unaff_x28,unaff_x20);
          _swift_bridgeObjectRelease(plStack_c0);
          plVar14 = (long *)0x0;
          plVar30 = (long *)0xc000000000000000;
LAB_1045b7a40:
          func_0x00010006c090(plVar14,plVar30);
          param_2 = plStack_90;
          func_0x00010459fd54(plVar31,plStack_90,plStack_98);
        }
        else {
          if (1 < uVar9 >> 0x1e) {
            if (uVar20 == 2) {
              uVar23 = plVar14[3] - plVar14[2];
              if (SBORROW8(plVar14[3],plVar14[2])) {
                    /* WARNING: Does not return */
                pcVar11 = (code *)SoftwareBreakpoint(1,0x1045b8610);
                (*pcVar11)();
              }
            }
            else {
              uVar23 = 0;
            }
            goto joined_r0x0001045b82a8;
          }
          if (uVar20 == 0) {
            uVar23 = (ulong)unaff_x21 >> 0x30 & 0xff;
          }
          else {
            iVar22 = (int)((ulong)plVar14 >> 0x20);
            if (SBORROW4(iVar22,iVar32)) {
                    /* WARNING: Does not return */
              pcVar11 = (code *)SoftwareBreakpoint(1,0x1045b860c);
              (*pcVar11)();
            }
            uVar23 = (ulong)(iVar22 - iVar32);
          }
          if (1 < uVar10 >> 0x1e) goto LAB_1045b80b0;
LAB_1045b80e8:
          if (uVar25 == 0) {
            uVar27 = (ulong)unaff_x22 >> 0x30 & 0xff;
          }
          else {
            iVar22 = (int)((ulong)plStack_a8 >> 0x20);
            if (SBORROW4(iVar22,(int)plStack_a8)) {
                    /* WARNING: Does not return */
              pcVar11 = (code *)SoftwareBreakpoint(1,0x1045b85fc);
              (*pcVar11)();
            }
            uVar27 = (ulong)(iVar22 - (int)plStack_a8);
          }
LAB_1045b8108:
          if (uVar23 != uVar27) {
LAB_1045b8524:
            _swift_bridgeObjectRelease(unaff_x19);
            func_0x00010006c090(plStack_a8,unaff_x22);
            func_0x00010459fd54(plStack_a0,unaff_x28,unaff_x20);
            _swift_bridgeObjectRelease(plStack_c0);
            func_0x00010006c090(plVar14,unaff_x21);
            param_2 = plStack_90;
            plVar17 = plStack_98;
            plVar34 = unaff_x20;
            unaff_x20 = unaff_x21;
            plVar30 = plVar33;
            goto LAB_1045b85b8;
          }
          if ((long)uVar23 < 1) {
LAB_1045b7a0c:
            _swift_bridgeObjectRelease(unaff_x19);
            func_0x00010006c090(plStack_a8,unaff_x22);
            func_0x00010459fd54(plStack_a0,unaff_x28,unaff_x20);
            _swift_bridgeObjectRelease(plStack_c0);
            plVar30 = unaff_x21;
            goto LAB_1045b7a40;
          }
          unaff_x19 = unaff_x22;
          plVar16 = unaff_x22;
          if (uVar20 < 2) {
            if (uVar20 == 0) {
              abStack_80[0] = (byte)plVar14;
              abStack_80[1] = (byte)((ulong)plVar14 >> 8);
              abStack_80[2] = (byte)((ulong)plVar14 >> 0x10);
              abStack_80[3] = (byte)((ulong)plVar14 >> 0x18);
              abStack_80[4] = (byte)((ulong)plVar14 >> 0x20);
              abStack_80[5] = (byte)((ulong)plVar14 >> 0x28);
              abStack_80[6] = (byte)((ulong)plVar14 >> 0x30);
              abStack_80[7] = (byte)((ulong)plVar14 >> 0x38);
              abStack_80[8] = (byte)unaff_x21;
              abStack_80[9] = (byte)((ulong)unaff_x21 >> 8);
              abStack_80[10] = (byte)((ulong)unaff_x21 >> 0x10);
              abStack_80[0xb] = (byte)((ulong)unaff_x21 >> 0x18);
              abStack_80[0xc] = (byte)((ulong)unaff_x21 >> 0x20);
              abStack_80[0xd] = (byte)((ulong)unaff_x21 >> 0x28);
              plStack_d8 = plVar24;
              func_0x000100e25bdc(&bStack_81,abStack_80,
                                  abStack_80 + ((ulong)unaff_x21 >> 0x30 & 0xff),plStack_a8,
                                  unaff_x22);
              plStack_e0 = plVar34;
              _swift_bridgeObjectRelease(plStack_b8);
              func_0x00010006c090(plVar13,unaff_x22);
              func_0x00010459fd54(plStack_a0,unaff_x28,unaff_x20);
              _swift_bridgeObjectRelease(plStack_c0);
              func_0x00010006c090(plVar14,unaff_x21);
              param_2 = plStack_90;
              func_0x00010459fd54(plVar31,plStack_90,plStack_98);
              unaff_x19 = plVar13;
              unaff_x24 = unaff_x21;
              plVar24 = plStack_d8;
              plVar14 = plStack_e0;
              plVar15 = plStack_e0;
              unaff_x21 = plVar34;
              plVar30 = plVar33;
              bVar2 = bStack_81;
            }
            else {
              plVar34 = (long *)(long)iVar32;
              plVar30 = (long *)(((long)plVar14 >> 0x20) - (long)plVar34);
              plStack_f0 = plVar14;
              plStack_d0 = unaff_x27;
              plStack_c8 = plVar31;
              if ((long)plVar14 >> 0x20 < (long)plVar34) {
                    /* WARNING: Does not return */
                pcVar11 = (code *)SoftwareBreakpoint(1,0x1045b8614);
                plStack_e8 = plVar33;
                plStack_d8 = unaff_x20;
                (*pcVar11)();
              }
              plStack_e8 = plVar33;
              plStack_d8 = unaff_x20;
              __s10Foundation13__DataStorageC6_bytesSvSgvg();
              if (plVar15 == (long *)0x0) {
                __s10Foundation13__DataStorageC7_lengthSivg();
                lVar26 = 0;
                lVar19 = 0;
              }
              else {
                plVar14 = plVar15;
                __s10Foundation13__DataStorageC7_offsetSivg();
                if (SBORROW8((long)plVar34,(long)plVar14)) {
                    /* WARNING: Does not return */
                  pcVar11 = (code *)SoftwareBreakpoint(1,0x1045b8630);
                  (*pcVar11)();
                }
                lVar1 = ((long)plVar34 - (long)plVar14) + (long)plVar15;
                __s10Foundation13__DataStorageC7_lengthSivg();
                if ((long)plVar30 <= (long)plVar14) {
                  plVar14 = plVar30;
                }
                lVar26 = 0;
                if (lVar1 != 0) {
                  lVar26 = lVar1;
                }
                lVar19 = 0;
                if (lVar1 != 0) {
                  lVar19 = (long)plVar14 + lVar1;
                }
              }
              plVar30 = plStack_a8;
              plVar31 = plStack_e0;
              func_0x000100e25bdc(abStack_80,lVar26,lVar19,plStack_a8,unaff_x22);
              plStack_e0 = plVar31;
              _swift_bridgeObjectRelease(plStack_b8);
              func_0x00010006c090(plVar30,unaff_x22);
              func_0x00010459fd54(plStack_a0,unaff_x28,plStack_d8);
              _swift_bridgeObjectRelease(plStack_c0);
              func_0x00010006c090(plStack_f0,unaff_x21);
              param_2 = plStack_90;
              func_0x00010459fd54(plStack_c8,plStack_90,plStack_98);
              unaff_x28 = plVar34;
              unaff_x20 = unaff_x21;
              plVar33 = plStack_e8;
              plVar14 = plStack_e0;
              plVar15 = plStack_e0;
              unaff_x21 = plVar31;
              unaff_x27 = plStack_d0;
              bVar2 = abStack_80[0];
            }
          }
          else if (uVar20 == 2) {
            lVar26 = plVar14[2];
            lVar19 = plVar14[3];
            plStack_e8 = plVar33;
            plStack_d8 = unaff_x20;
            plStack_c8 = unaff_x28;
            __s10Foundation13__DataStorageC6_bytesSvSgvg();
            plVar33 = plVar15;
            if (plVar15 != (long *)0x0) {
              __s10Foundation13__DataStorageC7_offsetSivg();
              if (SBORROW8(lVar26,(long)plVar33)) {
                    /* WARNING: Does not return */
                pcVar11 = (code *)SoftwareBreakpoint(1,0x1045b862c);
                (*pcVar11)();
              }
              plVar15 = (long *)((lVar26 - (long)plVar33) + (long)plVar15);
            }
            plVar34 = (long *)(lVar19 - lVar26);
            if (SBORROW8(lVar19,lVar26)) {
                    /* WARNING: Does not return */
              pcVar11 = (code *)SoftwareBreakpoint(1,0x1045b8618);
              (*pcVar11)();
            }
            __s10Foundation13__DataStorageC7_lengthSivg(plStack_b0);
            plVar16 = plStack_a8;
            unaff_x21 = plStack_e0;
            if (plVar15 == (long *)0x0) {
              lVar26 = 0;
            }
            else {
              if ((long)plVar34 <= (long)plVar33) {
                plVar33 = plVar34;
              }
              lVar26 = (long)plVar33 + (long)plVar15;
            }
            func_0x000100e25bdc(abStack_80,plVar15,lVar26,plStack_a8,unaff_x22);
            _swift_bridgeObjectRelease(plStack_b8);
            func_0x00010006c090(plVar16,unaff_x22);
            func_0x00010459fd54(plStack_a0,plStack_c8,plStack_d8);
            _swift_bridgeObjectRelease(plStack_c0);
            func_0x00010006c090(plVar14,plStack_b0);
            param_2 = plStack_90;
            func_0x00010459fd54(plVar31,plStack_90,plStack_98);
            unaff_x28 = plVar15;
            unaff_x20 = plVar14;
            plVar33 = plStack_e8;
            plVar14 = unaff_x21;
            plVar15 = plStack_e0;
            bVar2 = abStack_80[0];
          }
          else {
            abStack_80[8] = 0;
            abStack_80[9] = 0;
            abStack_80[10] = 0;
            abStack_80[0xb] = 0;
            abStack_80[0xc] = 0;
            abStack_80[0xd] = 0;
            abStack_80[0] = 0;
            abStack_80[1] = 0;
            abStack_80[2] = 0;
            abStack_80[3] = 0;
            abStack_80[4] = 0;
            abStack_80[5] = 0;
            abStack_80[6] = 0;
            abStack_80[7] = 0;
            func_0x000100e25bdc(&bStack_81,abStack_80,abStack_80,plStack_a8,unaff_x22);
            plStack_e0 = plVar34;
            _swift_bridgeObjectRelease(plStack_b8);
            func_0x00010006c090(plVar13,unaff_x22);
            func_0x00010459fd54(plStack_a0,unaff_x28,unaff_x20);
            _swift_bridgeObjectRelease(plStack_c0);
            func_0x00010006c090(plVar14,plStack_b0);
            param_2 = plStack_90;
            func_0x00010459fd54(plVar31,plStack_90,plStack_98);
            unaff_x19 = plVar13;
            plVar14 = plStack_e0;
            plVar15 = plStack_e0;
            unaff_x21 = plVar34;
            plVar30 = plVar33;
            bVar2 = bStack_81;
          }
          plStack_e0 = plVar14;
          unaff_x22 = plVar16;
          if ((bVar2 & 1) == 0) goto LAB_1045b85bc;
        }
        unaff_x27 = unaff_x27 + 7;
        unaff_x24 = plVar24 + 7;
        plVar30 = (long *)((long)plVar33 + -1);
      } while (plVar30 != (long *)0x0);
    }
    plVar15 = (long *)0x1;
  }
  else {
LAB_1045b85bc:
    plStack_e0 = plVar15;
    plVar15 = (long *)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return plVar15;
  }
  ___stack_chk_fail();
  pcStack_f8 = FUN_1045b863c;
  lStack_170 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar26 = plVar15[2];
  puStack_100 = &stack0xfffffffffffffff0;
  if (lVar26 == param_2[2]) {
    if ((lVar26 != 0) && (plVar15 != param_2)) {
      plStack_218 = (long *)0x0;
      unaff_x28 = plVar15 + 9;
      unaff_x19 = param_2 + 9;
      do {
        unaff_x27 = (long *)unaff_x28[-5];
        plVar30 = (long *)unaff_x28[-4];
        plVar24 = (long *)unaff_x28[-3];
        bVar2 = *(byte *)(unaff_x28 + -2);
        plVar31 = (long *)(ulong)bVar2;
        plVar15 = (long *)unaff_x28[-1];
        plVar14 = (long *)*unaff_x28;
        unaff_x21 = (long *)unaff_x19[-5];
        unaff_x22 = (long *)unaff_x19[-4];
        unaff_x20 = (long *)unaff_x19[-3];
        bVar3 = *(byte *)(unaff_x19 + -2);
        plVar33 = (long *)(ulong)bVar3;
        plStack_1d0 = (long *)unaff_x19[-1];
        unaff_x24 = (long *)*unaff_x19;
        bVar12 = (((ulong)unaff_x20 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
        uStack_208 = (uint)bVar3;
        uStack_204 = (uint)bVar2;
        uVar4 = (undefined1)((ulong)plVar30 >> 8);
        uVar5 = (undefined1)((ulong)plVar30 >> 0x10);
        uVar6 = (undefined1)((ulong)plVar30 >> 0x18);
        uVar7 = (undefined1)((ulong)plVar30 >> 0x20);
        uVar8 = (undefined1)((ulong)plVar30 >> 0x28);
        lStack_210 = lVar26;
        plStack_200 = plVar14;
        plStack_1f8 = plVar15;
        plStack_1f0 = unaff_x22;
        plStack_1e8 = unaff_x20;
        plStack_1e0 = unaff_x24;
        plStack_1d8 = unaff_x21;
        plStack_1c8 = plVar24;
        if (((((ulong)plVar24 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
           (uStack_204 == 0xff)) {
          if (!bVar12 || uStack_208 != 0xff) goto LAB_1045b98cc;
          plVar31 = (long *)0xff;
          plStack_220 = unaff_x19;
          FUN_1045670a0(unaff_x27,plVar30,plVar24,0xff);
          func_0x00010006c00c(plVar15,plVar14);
          FUN_1045670a0(plStack_1d8,unaff_x22,unaff_x20,0xff);
          plVar14 = plStack_1d8;
          func_0x00010006c00c(plStack_1d0,unaff_x24);
          FUN_1045670a0(unaff_x27,plVar30,plVar24,0xff);
          unaff_x19 = plStack_220;
          FUN_1045670a0(plVar14,unaff_x22,unaff_x20,0xff);
LAB_1045b87ec:
          plVar15 = unaff_x27;
          FUN_104567140(unaff_x27,plVar30,plStack_1c8,plVar31);
          unaff_x20 = plVar31;
          unaff_x21 = plVar14;
          goto LAB_1045b8804;
        }
        if (bVar12 && uStack_208 == 0xff) {
          plVar33 = (long *)0xff;
LAB_1045b98cc:
          abStack_1b0[0] = (byte)unaff_x27;
          abStack_1b0[1] = (byte)((ulong)unaff_x27 >> 8);
          abStack_1b0[2] = (byte)((ulong)unaff_x27 >> 0x10);
          abStack_1b0[3] = (byte)((ulong)unaff_x27 >> 0x18);
          abStack_1b0[4] = (byte)((ulong)unaff_x27 >> 0x20);
          abStack_1b0[5] = (byte)((ulong)unaff_x27 >> 0x28);
          abStack_1b0[6] = (byte)((ulong)unaff_x27 >> 0x30);
          abStack_1b0[7] = (byte)((ulong)unaff_x27 >> 0x38);
          uStack_1a2 = (undefined2)((ulong)plVar30 >> 0x30);
          uStack_178 = SUB81(plVar33,0);
          abStack_1b0[8] = (byte)plVar30;
          abStack_1b0[9] = uVar4;
          abStack_1b0[10] = uVar5;
          abStack_1b0[0xb] = uVar6;
          abStack_1b0[0xc] = uVar7;
          abStack_1b0[0xd] = uVar8;
          plStack_1a0 = plVar24;
          bStack_198 = bVar2;
          plStack_190 = unaff_x21;
          plStack_188 = unaff_x22;
          plStack_180 = unaff_x20;
          FUN_1045670a0();
          FUN_1045670a0(unaff_x21,unaff_x22,unaff_x20,plVar33);
          param_2 = (long *)0x113089728;
          func_0x000104603c54(abStack_1b0,0x113089728,&UNK_10dd1f540);
          plVar30 = plVar31;
          unaff_x27 = plVar14;
          goto LAB_1045b9a18;
        }
        uVar10 = (uint)((ulong)plVar24 >> 0x3c) & 0xfffffc03 | (bVar2 & 0x3f) << 2;
        uVar20 = (uint)bVar3;
        uVar9 = (uint)((ulong)unaff_x20 >> 0x20);
        plVar16 = plVar30;
        if (2 < uVar10) {
          if (uVar10 == 3) {
            if ((uVar9 >> 0x1c & 0xfffffc03 | (uStack_208 & 0x3f) << 2) == 3) {
              plStack_220 = (long *)CONCAT44(plStack_220._4_4_,(uint)unaff_x21 ^ (uint)unaff_x27);
              FUN_1045670a0(unaff_x27,plVar30,plVar24,plVar31);
              plVar34 = plStack_1f0;
              func_0x00010006c00c(plVar15,plVar14);
              FUN_1045670a0(plStack_1d8,plVar34,unaff_x20,plVar33);
              plVar14 = plStack_1d8;
              func_0x00010006c00c(plStack_1d0,plStack_1e0);
              FUN_1045670a0(unaff_x27,plVar30,plVar24,plVar31);
              FUN_1045670a0(plVar14,plVar34,unaff_x20,plVar33);
              plVar33 = plVar34;
              if (((ulong)plStack_220 & 1) != 0) goto LAB_1045b99c8;
              goto LAB_1045b87ec;
            }
            goto LAB_1045b9920;
          }
          iVar22 = (int)unaff_x22;
          iVar32 = (int)((ulong)unaff_x22 >> 0x20);
          if (uVar10 == 4) {
            if ((uVar9 >> 0x1c & 0xfffffc03 | (uVar20 & 0x3f) << 2) != 4) goto LAB_1045b9920;
            FUN_1045670a0(unaff_x27,plVar30,plVar24,plVar31);
            func_0x00010006c00c(plStack_1f8,plStack_200);
            FUN_1045670a0(plStack_1d8,unaff_x22,unaff_x20,plVar33);
            plVar14 = plStack_1d8;
            func_0x00010006c00c(plStack_1d0,unaff_x24);
            FUN_1045670a0(unaff_x27,plVar30,plVar24,plVar31);
            FUN_1045670a0(plVar14,unaff_x22,unaff_x20,plVar33);
            plStack_230 = unaff_x27;
            FUN_10460aa08(unaff_x27,plVar14);
            plVar24 = plStack_218;
            plVar15 = plStack_230;
            if (((ulong)unaff_x27 & 1) != 0) {
              uVar10 = (uint)((ulong)plStack_1c8 >> 0x20);
              uVar20 = uVar10 >> 0x1e;
              iVar29 = (int)plVar30;
              iVar21 = (int)((ulong)plVar30 >> 0x20);
              if ((ulong)plStack_1c8 >> 0x3e == 3) {
                uVar23 = 0;
                if ((((plVar30 != (long *)0x0) || (plStack_1c8 != (long *)0xc000000000000000)) ||
                    ((ulong)unaff_x20 >> 0x3e < 3)) ||
                   ((uVar23 = 0, unaff_x22 != (long *)0x0 ||
                    (unaff_x20 != (long *)0xc000000000000000)))) goto LAB_1045b92b8;
                unaff_x22 = (long *)0x0;
                unaff_x20 = (long *)0xc000000000000000;
LAB_1045b93e8:
                FUN_104567140(plVar14,unaff_x22,unaff_x20,plVar33);
                unaff_x27 = plStack_230;
                goto LAB_1045b87ec;
              }
              if (uVar10 >> 0x1e < 2) {
                if (uVar20 == 0) {
                  uVar23 = (ulong)plStack_1c8 >> 0x30 & 0xff;
                }
                else {
                  if (SBORROW4(iVar21,iVar29)) {
                    /* WARNING: Does not return */
                    pcVar11 = (code *)SoftwareBreakpoint(1,0x1045b9bd4);
                    (*pcVar11)();
                  }
                  uVar23 = (ulong)(iVar21 - iVar29);
                }
              }
              else if (uVar20 == 2) {
                uVar23 = plVar30[3] - plVar30[2];
                if (SBORROW8(plVar30[3],plVar30[2])) {
                    /* WARNING: Does not return */
                  pcVar11 = (code *)SoftwareBreakpoint(1,0x1045b9bd0);
                  (*pcVar11)();
                }
              }
              else {
                uVar23 = 0;
              }
LAB_1045b92b8:
              if (uVar9 >> 0x1e < 2) {
                if (uVar9 >> 0x1e == 0) {
                  uVar27 = (ulong)unaff_x20 >> 0x30 & 0xff;
                }
                else {
                  if (SBORROW4(iVar32,iVar22)) {
                    /* WARNING: Does not return */
                    pcVar11 = (code *)SoftwareBreakpoint(1,0x1045b9bc4);
                    (*pcVar11)();
                  }
                  uVar27 = (ulong)(iVar32 - iVar22);
                }
              }
              else {
                if (uVar9 >> 0x1e != 2) {
                  if (uVar23 != 0) goto LAB_1045b99a8;
                  goto LAB_1045b93e8;
                }
                uVar27 = unaff_x22[3] - unaff_x22[2];
                if (SBORROW8(unaff_x22[3],unaff_x22[2])) {
                    /* WARNING: Does not return */
                  pcVar11 = (code *)SoftwareBreakpoint(1,0x1045b9bcc);
                  (*pcVar11)();
                }
              }
              if (uVar23 != uVar27) goto LAB_1045b99a8;
              if ((long)uVar23 < 1) goto LAB_1045b93e8;
              if (uVar20 < 2) {
                if (uVar20 != 0) {
                  lVar26 = (long)iVar29;
                  plVar14 = (long *)(((long)plVar30 >> 0x20) - lVar26);
                  if ((long)plVar30 >> 0x20 < lVar26) {
                    /* WARNING: Does not return */
                    pcVar11 = (code *)SoftwareBreakpoint(1,0x1045b9be0);
                    (*pcVar11)();
                  }
                  __s10Foundation13__DataStorageC6_bytesSvSgvg();
                  if (unaff_x27 == (long *)0x0) {
                    __s10Foundation13__DataStorageC7_lengthSivg();
                    lVar26 = 0;
LAB_1045b97a8:
                    lVar19 = 0;
                  }
                  else {
                    plVar31 = unaff_x27;
                    __s10Foundation13__DataStorageC7_offsetSivg();
                    if (SBORROW8(lVar26,(long)plVar31)) {
                    /* WARNING: Does not return */
                      pcVar11 = (code *)SoftwareBreakpoint(1,0x1045b9bf8);
                      (*pcVar11)();
                    }
                    lVar26 = (lVar26 - (long)plVar31) + (long)unaff_x27;
                    __s10Foundation13__DataStorageC7_lengthSivg();
                    if (lVar26 == 0) goto LAB_1045b97a8;
                    if ((long)plVar14 <= (long)plVar31) {
                      plVar31 = plVar14;
                    }
                    lVar19 = (long)plVar31 + lVar26;
                  }
                  plVar33 = plStack_1e8;
                  plVar14 = plStack_218;
                  func_0x000100e25bdc(abStack_1b0,lVar26,lVar19,unaff_x22,plStack_1e8);
                  plVar31 = plVar33;
                  plStack_218 = plVar14;
                  goto LAB_1045b9868;
                }
                abStack_1b0[6] = (byte)((ulong)plVar30 >> 0x30);
                abStack_1b0[7] = (byte)((ulong)plVar30 >> 0x38);
                abStack_1b0[8] = (byte)plStack_1c8;
                abStack_1b0[9] = (byte)((ulong)plStack_1c8 >> 8);
                abStack_1b0[10] = (byte)((ulong)plStack_1c8 >> 0x10);
                abStack_1b0[0xb] = (byte)((ulong)plStack_1c8 >> 0x18);
                abStack_1b0[0xc] = (byte)((ulong)plStack_1c8 >> 0x20);
                abStack_1b0[0xd] = (byte)((ulong)plStack_1c8 >> 0x28);
                abStack_1b0[0] = (byte)plVar30;
                abStack_1b0[1] = uVar4;
                abStack_1b0[2] = uVar5;
                abStack_1b0[3] = uVar6;
                abStack_1b0[4] = uVar7;
                abStack_1b0[5] = uVar8;
                func_0x000100e25bdc(abStack_1b9,abStack_1b0,
                                    abStack_1b0 + ((ulong)plStack_1c8 >> 0x30 & 0xff),unaff_x22,
                                    unaff_x20);
                plVar14 = plStack_1d8;
                plStack_218 = plVar24;
                FUN_104567140(plStack_1d8,unaff_x22,unaff_x20,uStack_208);
                plVar31 = unaff_x20;
                unaff_x27 = plStack_230;
                bVar2 = abStack_1b9[0];
              }
              else {
                if (uVar20 != 2) {
                  abStack_1b0[8] = 0;
                  abStack_1b0[9] = 0;
                  abStack_1b0[10] = 0;
                  abStack_1b0[0xb] = 0;
                  abStack_1b0[0xc] = 0;
                  abStack_1b0[0xd] = 0;
                  abStack_1b0[0] = 0;
                  abStack_1b0[1] = 0;
                  abStack_1b0[2] = 0;
                  abStack_1b0[3] = 0;
                  abStack_1b0[4] = 0;
                  abStack_1b0[5] = 0;
                  abStack_1b0[6] = 0;
                  abStack_1b0[7] = 0;
                  func_0x000100e25bdc(abStack_1b9,abStack_1b0,abStack_1b0,unaff_x22,unaff_x20);
                  plVar14 = plStack_1d8;
                  plStack_218 = plVar24;
                  FUN_104567140(plStack_1d8,unaff_x22,unaff_x20,uStack_208);
                  plVar31 = unaff_x20;
                  unaff_x27 = plVar15;
                  bVar2 = abStack_1b9[0];
                  goto joined_r0x0001045b96bc;
                }
                lVar26 = plVar30[2];
                plStack_220 = (long *)plVar30[3];
                __s10Foundation13__DataStorageC6_bytesSvSgvg();
                if (unaff_x27 == (long *)0x0) {
                  lVar19 = 0;
                }
                else {
                  plVar14 = unaff_x27;
                  __s10Foundation13__DataStorageC7_offsetSivg();
                  if (SBORROW8(lVar26,(long)plVar14)) {
                    /* WARNING: Does not return */
                    pcVar11 = (code *)SoftwareBreakpoint(1,0x1045b9bf4);
                    (*pcVar11)();
                  }
                  lVar19 = (lVar26 - (long)plVar14) + (long)unaff_x27;
                  unaff_x27 = plVar14;
                }
                plVar14 = (long *)((long)plStack_220 - lVar26);
                if (SBORROW8((long)plStack_220,lVar26)) {
                    /* WARNING: Does not return */
                  pcVar11 = (code *)SoftwareBreakpoint(1,0x1045b9be8);
                  (*pcVar11)();
                }
                plVar31 = (long *)((ulong)plStack_1c8 & 0x3fffffffffffffff);
                __s10Foundation13__DataStorageC7_lengthSivg();
                plVar33 = plStack_1e8;
                plVar24 = plStack_218;
                if (lVar19 == 0) {
                  lVar26 = 0;
                }
                else {
                  if ((long)plVar14 <= (long)unaff_x27) {
                    unaff_x27 = plVar14;
                  }
                  lVar26 = (long)unaff_x27 + lVar19;
                }
                func_0x000100e25bdc(abStack_1b0,lVar19,lVar26,unaff_x22,plStack_1e8);
                plStack_218 = plVar24;
LAB_1045b9868:
                plVar14 = plStack_1d8;
                FUN_104567140(plStack_1d8,unaff_x22,plVar33,uStack_208);
                unaff_x27 = plVar15;
                bVar2 = abStack_1b0[0];
              }
joined_r0x0001045b96bc:
              plVar33 = unaff_x22;
              if ((bVar2 & 1) == 0) goto LAB_1045b99c8;
              plVar31 = (long *)(ulong)uStack_204;
              goto LAB_1045b87ec;
            }
            goto LAB_1045b99a8;
          }
          plVar34 = unaff_x27;
          if ((uVar9 >> 0x1c & 0xfffffc03 | (uStack_208 & 0x3f) << 2) == 5) {
            plStack_228 = plVar30;
            FUN_1045670a0(unaff_x27,plVar30,plVar24,plVar31);
            func_0x00010006c00c(plVar15,plStack_200);
            plVar14 = plStack_1d8;
            FUN_1045670a0(plStack_1d8,unaff_x22,unaff_x20,plVar33);
            plVar30 = plStack_228;
            func_0x00010006c00c(plStack_1d0,plStack_1e0);
            FUN_1045670a0(unaff_x27,plVar30,plVar24,plVar31);
            FUN_1045670a0(plVar14,unaff_x22,unaff_x20,plVar33);
            FUN_1045b863c(unaff_x27,plVar14);
            plVar15 = plStack_218;
            if (((ulong)plVar34 & 1) == 0) {
LAB_1045b9a58:
              plStack_230 = unaff_x27;
              FUN_104567140(plVar14,unaff_x22,unaff_x20,plVar33);
              plVar16 = plVar31;
              plVar34 = unaff_x27;
            }
            else {
              uVar23 = (ulong)unaff_x20 & 0xcfffffffffffffff;
              uVar10 = (uint)((ulong)plStack_1c8 >> 0x20);
              uVar20 = uVar10 >> 0x1e;
              iVar29 = (int)plVar30;
              iVar21 = (int)((ulong)plVar30 >> 0x20);
              plVar16 = plVar14;
              if ((ulong)plStack_1c8 >> 0x3e == 3) {
                uVar27 = 0;
                if (((plVar30 == (long *)0x0) &&
                    (((ulong)plStack_1c8 & 0xcfffffffffffffff) == 0xc000000000000000)) &&
                   ((2 < (ulong)unaff_x20 >> 0x3e &&
                    ((uVar27 = 0, unaff_x22 == (long *)0x0 &&
                     (plVar24 = (long *)0x0, uVar23 == 0xc000000000000000)))))) goto LAB_1045b9560;
              }
              else if (uVar10 >> 0x1e < 2) {
                if (uVar20 == 0) {
                  uVar27 = (ulong)plStack_1c8 >> 0x30 & 0xff;
                }
                else {
                  if (SBORROW4(iVar21,iVar29)) {
                    /* WARNING: Does not return */
                    pcVar11 = (code *)SoftwareBreakpoint(1,0x1045b9bd8);
                    (*pcVar11)();
                  }
                  uVar27 = (ulong)(iVar21 - iVar29);
                }
              }
              else if (uVar20 == 2) {
                uVar27 = plVar30[3] - plVar30[2];
                if (SBORROW8(plVar30[3],plVar30[2])) {
                    /* WARNING: Does not return */
                  pcVar11 = (code *)SoftwareBreakpoint(1,0x1045b9bdc);
                  (*pcVar11)();
                }
              }
              else {
                uVar27 = 0;
              }
              plVar24 = unaff_x22;
              if (uVar9 >> 0x1e < 2) {
                if (uVar9 >> 0x1e == 0) {
                  uVar28 = (ulong)unaff_x20 >> 0x30 & 0xff;
                }
                else {
                  if (SBORROW4(iVar32,iVar22)) {
                    /* WARNING: Does not return */
                    pcVar11 = (code *)SoftwareBreakpoint(1,0x1045b9bc0);
                    (*pcVar11)();
                  }
                  uVar28 = (ulong)(iVar32 - iVar22);
                }
              }
              else {
                if (uVar9 >> 0x1e != 2) {
                  if (uVar27 == 0) goto LAB_1045b9560;
                  goto LAB_1045b9a58;
                }
                uVar28 = unaff_x22[3] - unaff_x22[2];
                if (SBORROW8(unaff_x22[3],unaff_x22[2])) {
                    /* WARNING: Does not return */
                  pcVar11 = (code *)SoftwareBreakpoint(1,0x1045b9bc8);
                  (*pcVar11)();
                }
              }
              if (uVar27 != uVar28) goto LAB_1045b9a58;
              if ((long)uVar27 < 1) goto LAB_1045b9560;
              if (uVar20 < 2) {
                if (uVar20 == 0) {
                  abStack_1b0[0] = (byte)plVar30;
                  abStack_1b0[1] = (byte)((ulong)plVar30 >> 8);
                  abStack_1b0[2] = (byte)((ulong)plVar30 >> 0x10);
                  abStack_1b0[3] = (byte)((ulong)plVar30 >> 0x18);
                  abStack_1b0[4] = (byte)((ulong)plVar30 >> 0x20);
                  abStack_1b0[5] = (byte)((ulong)plVar30 >> 0x28);
                  abStack_1b0[6] = (byte)((ulong)plVar30 >> 0x30);
                  abStack_1b0[7] = (byte)((ulong)plVar30 >> 0x38);
                  abStack_1b0[8] = (byte)plStack_1c8;
                  abStack_1b0[9] = (byte)((ulong)plStack_1c8 >> 8);
                  abStack_1b0[10] = (byte)((ulong)plStack_1c8 >> 0x10);
                  abStack_1b0[0xb] = (byte)((ulong)plStack_1c8 >> 0x18);
                  abStack_1b0[0xc] = (byte)((ulong)plStack_1c8 >> 0x20);
                  abStack_1b0[0xd] = (byte)((ulong)plStack_1c8 >> 0x28);
                  plStack_230 = unaff_x27;
                  func_0x000100e25bdc(abStack_1b9,abStack_1b0,
                                      abStack_1b0 + ((ulong)plStack_1c8 >> 0x30 & 0xff),unaff_x22);
                  goto LAB_1045b9758;
                }
                lVar26 = (long)iVar29;
                plVar31 = (long *)(((long)plVar30 >> 0x20) - lVar26);
                if ((long)plVar30 >> 0x20 < lVar26) {
                    /* WARNING: Does not return */
                  pcVar11 = (code *)SoftwareBreakpoint(1,0x1045b9be4);
                  plStack_230 = unaff_x27;
                  (*pcVar11)();
                }
                plStack_230 = unaff_x27;
                __s10Foundation13__DataStorageC6_bytesSvSgvg();
                if (plVar34 == (long *)0x0) {
                  __s10Foundation13__DataStorageC7_lengthSivg();
                  lVar26 = 0;
LAB_1045b97e8:
                  lVar19 = 0;
                }
                else {
                  plVar15 = plVar34;
                  __s10Foundation13__DataStorageC7_offsetSivg();
                  if (SBORROW8(lVar26,(long)plVar15)) {
                    /* WARNING: Does not return */
                    pcVar11 = (code *)SoftwareBreakpoint(1,0x1045b9bfc);
                    (*pcVar11)();
                  }
                  lVar26 = (lVar26 - (long)plVar15) + (long)plVar34;
                  __s10Foundation13__DataStorageC7_lengthSivg();
                  unaff_x27 = plVar34;
                  if (lVar26 == 0) goto LAB_1045b97e8;
                  if ((long)plVar31 <= (long)plVar15) {
                    plVar15 = plVar31;
                  }
                  lVar19 = (long)plVar15 + lVar26;
                }
                plVar24 = plStack_1e8;
                plVar15 = plStack_218;
                func_0x000100e25bdc(abStack_1b0,lVar26,lVar19,unaff_x22,uVar23);
                plVar14 = plStack_1d8;
                plStack_218 = plVar15;
                FUN_104567140(plStack_1d8,unaff_x22,plVar24,uStack_208);
                plVar34 = unaff_x27;
                unaff_x27 = plStack_230;
                bVar2 = abStack_1b0[0];
              }
              else if (uVar20 == 2) {
                lVar26 = plVar30[2];
                plVar31 = (long *)plVar30[3];
                plStack_230 = unaff_x27;
                __s10Foundation13__DataStorageC6_bytesSvSgvg();
                plVar30 = plVar34;
                if (plVar34 != (long *)0x0) {
                  __s10Foundation13__DataStorageC7_offsetSivg();
                  if (SBORROW8(lVar26,(long)plVar30)) {
                    /* WARNING: Does not return */
                    pcVar11 = (code *)SoftwareBreakpoint(1,0x1045b9bf0);
                    (*pcVar11)();
                  }
                  plVar34 = (long *)((lVar26 - (long)plVar30) + (long)plVar34);
                }
                if (SBORROW8((long)plVar31,lVar26)) {
                    /* WARNING: Does not return */
                  pcVar11 = (code *)SoftwareBreakpoint(1,0x1045b9bec);
                  (*pcVar11)();
                }
                __s10Foundation13__DataStorageC7_lengthSivg(plStack_1c8);
                plVar15 = plStack_218;
                if ((long)plVar31 - lVar26 <= (long)plVar30) {
                  plVar30 = (long *)((long)plVar31 - lVar26);
                }
                lVar26 = 0;
                if (plVar34 != (long *)0x0) {
                  lVar26 = (long)plVar30 + (long)plVar34;
                }
                func_0x000100e25bdc(abStack_1b0,plVar34,lVar26,unaff_x22,uVar23);
                plVar14 = plStack_1d8;
                plStack_218 = plVar15;
                FUN_104567140(plStack_1d8,unaff_x22,plStack_1e8,uStack_208);
                plVar30 = plStack_228;
                unaff_x27 = plStack_230;
                bVar2 = abStack_1b0[0];
              }
              else {
                abStack_1b0[8] = 0;
                abStack_1b0[9] = 0;
                abStack_1b0[10] = 0;
                abStack_1b0[0xb] = 0;
                abStack_1b0[0xc] = 0;
                abStack_1b0[0xd] = 0;
                abStack_1b0[0] = 0;
                abStack_1b0[1] = 0;
                abStack_1b0[2] = 0;
                abStack_1b0[3] = 0;
                abStack_1b0[4] = 0;
                abStack_1b0[5] = 0;
                abStack_1b0[6] = 0;
                abStack_1b0[7] = 0;
                plStack_230 = unaff_x27;
                func_0x000100e25bdc(abStack_1b9,abStack_1b0,abStack_1b0,unaff_x22);
                unaff_x20 = plStack_1e8;
LAB_1045b9758:
                plVar14 = plStack_1d8;
                plStack_218 = plVar15;
                FUN_104567140(plStack_1d8,unaff_x22,unaff_x20,uStack_208);
                plVar34 = unaff_x27;
                unaff_x27 = plStack_230;
                bVar2 = abStack_1b9[0];
              }
              plVar16 = plVar31;
              plStack_230 = unaff_x27;
              if ((bVar2 & 1) != 0) {
                plVar31 = (long *)(ulong)uStack_204;
                goto LAB_1045b87ec;
              }
            }
            plVar24 = plStack_1c8;
            unaff_x27 = plStack_230;
            plVar31 = (long *)(ulong)uStack_204;
            FUN_104567140(plStack_230,plVar30,plStack_1c8,plVar31);
            FUN_104567140(plVar14,unaff_x22,plStack_1e8,uStack_208);
            func_0x00010006c090(plStack_1d0,plStack_1e0);
            unaff_x19 = unaff_x27;
            unaff_x20 = plVar31;
            unaff_x21 = plVar24;
            unaff_x22 = plVar14;
            unaff_x24 = plVar30;
          }
          else {
            FUN_1045670a0(unaff_x27,plVar30,plVar24,plVar31);
            func_0x00010006c00c(plVar15,plStack_200);
            unaff_x28 = plStack_1d8;
            FUN_1045670a0(plStack_1d8,unaff_x22,unaff_x20,plVar33);
            unaff_x19 = plStack_1d0;
            plVar15 = plStack_1e0;
            func_0x00010006c00c(plStack_1d0,plStack_1e0);
            FUN_1045670a0(unaff_x27,plVar30,plVar24,plVar31);
            FUN_1045670a0(unaff_x28,unaff_x22,unaff_x20,plVar33);
            FUN_104567140(unaff_x28,unaff_x22,unaff_x20,plVar33);
            FUN_104567140(unaff_x27,plVar30,plVar24,plVar31);
            FUN_104567140(unaff_x28,unaff_x22,unaff_x20,plVar33);
            func_0x00010006c090(unaff_x19,plVar15);
            unaff_x21 = plVar31;
            unaff_x24 = plVar24;
          }
LAB_1045b9a0c:
          FUN_104567140(unaff_x27,plVar30,plVar24,plVar31);
          plVar15 = plStack_1f8;
          param_2 = plStack_200;
LAB_1045b9a14:
          func_0x00010006c090(plVar15);
          plVar30 = plVar16;
          unaff_x27 = plVar34;
          goto LAB_1045b9a18;
        }
        if (uVar10 != 0) {
          if (uVar10 == 1) {
            if ((uVar9 >> 0x1c & 0xfffffc03 | (uVar20 & 0x3f) << 2) != 1) goto LAB_1045b9920;
            FUN_1045670a0(unaff_x27,plVar30,plVar24,plVar31);
            func_0x00010006c00c(plVar15,plVar14);
            FUN_1045670a0(plStack_1d8,plStack_1f0,unaff_x20,plVar33);
            plVar14 = plStack_1d8;
            func_0x00010006c00c(plStack_1d0,plStack_1e0);
            FUN_1045670a0(unaff_x27,plVar30,plVar24,plVar31);
            FUN_1045670a0(plVar14,plStack_1f0,unaff_x20,plVar33);
            plVar33 = unaff_x27;
            if ((double)unaff_x27 == (double)unaff_x21) goto LAB_1045b87ec;
          }
          else {
            if ((uVar9 >> 0x1c & 0xfffffc03 | (uVar20 & 0x3f) << 2) == 2) {
              if ((unaff_x27 != unaff_x21) || (plVar30 != unaff_x22)) {
                plVar14 = unaff_x27;
                __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (unaff_x27,plVar30,unaff_x21,unaff_x22,0);
                plVar24 = plStack_1c8;
                plStack_220 = (long *)CONCAT44(plStack_220._4_4_,(int)plVar14);
                FUN_1045670a0(unaff_x27,plVar30,plStack_1c8,plVar31);
                func_0x00010006c00c(plVar15,plStack_200);
                plVar15 = plStack_1e8;
                FUN_1045670a0(plStack_1d8,unaff_x22,plStack_1e8,plVar33);
                plVar14 = plStack_1d8;
                func_0x00010006c00c(plStack_1d0,plStack_1e0);
                FUN_1045670a0(unaff_x27,plVar30,plVar24,plVar31);
                FUN_1045670a0(plVar14,unaff_x22,plVar15,plVar33);
                FUN_104567140(plVar14,unaff_x22,plVar15,plVar33);
                plVar33 = unaff_x22;
                if (((ulong)plStack_220 & 1) != 0) goto LAB_1045b87ec;
                goto LAB_1045b99c8;
              }
              FUN_1045670a0(unaff_x27,plVar30,plVar24,plVar31);
              func_0x00010006c00c(plVar15,plStack_200);
              FUN_1045670a0(unaff_x27,plVar30,unaff_x20,plVar33);
              plVar16 = plStack_1d8;
              func_0x00010006c00c(plStack_1d0,plStack_1e0);
              FUN_1045670a0(unaff_x27,plVar30,plVar24,plVar31);
              FUN_1045670a0(unaff_x27,plVar30,unaff_x20,plVar33);
              plVar14 = unaff_x27;
              plVar24 = plVar30;
LAB_1045b9560:
              FUN_104567140(plVar14,plVar24,unaff_x20,plVar33);
              plVar14 = plVar16;
              goto LAB_1045b87ec;
            }
LAB_1045b9920:
            FUN_1045670a0(unaff_x27,plVar30,plVar24,plVar31);
            func_0x00010006c00c(plVar15,plStack_200);
            FUN_1045670a0(unaff_x21,unaff_x22,unaff_x20,plVar33);
            func_0x00010006c00c(plStack_1d0,unaff_x24);
            plStack_230 = unaff_x27;
            FUN_1045670a0(unaff_x27,plVar30,plVar24,plVar31);
            FUN_1045670a0(unaff_x21,unaff_x22,unaff_x20,plVar33);
            unaff_x19 = plVar24;
            plVar14 = unaff_x21;
            unaff_x28 = plVar15;
LAB_1045b99a8:
            FUN_104567140(plVar14,unaff_x22,unaff_x20,plVar33);
            plVar31 = unaff_x20;
            plVar33 = unaff_x22;
            unaff_x27 = plStack_230;
          }
LAB_1045b99c8:
          FUN_104567140(unaff_x27,plVar30,plStack_1c8,uStack_204);
          unaff_x20 = plVar31;
          unaff_x21 = plVar14;
LAB_1045b99e0:
          FUN_104567140(unaff_x21,plStack_1f0,plStack_1e8,uStack_208);
          func_0x00010006c090(plStack_1d0,plStack_1e0);
          plVar31 = (long *)(ulong)uStack_204;
          plVar24 = plStack_1c8;
          unaff_x22 = plVar33;
          unaff_x24 = plVar30;
          plVar34 = unaff_x27;
          goto LAB_1045b9a0c;
        }
        if ((uVar9 >> 0x1c & 0xfffffc03) != 0 || (bVar3 & 0x3f) != 0) goto LAB_1045b9920;
        plStack_220 = (long *)0x0;
        if (((ulong)plVar30 & 0xff) != 1) {
          plStack_220 = unaff_x27;
        }
        uStack_238 = (ulong)unaff_x22 & 0xff;
        FUN_1045670a0(unaff_x27,plVar30,plVar24,plVar31);
        plVar34 = plStack_1f0;
        func_0x00010006c00c(plVar15,plVar14);
        unaff_x20 = plStack_1e8;
        FUN_1045670a0(unaff_x21,plVar34,plStack_1e8,plVar33);
        func_0x00010006c00c(plStack_1d0,plStack_1e0);
        FUN_1045670a0(unaff_x27,plVar30,plVar24,plVar31);
        FUN_1045670a0(unaff_x21,plVar34,unaff_x20,plVar33);
        plVar15 = unaff_x27;
        FUN_104567140(unaff_x27,plVar30,plVar24,plVar31);
        if (uStack_238 != 1) {
          if (plStack_220 == unaff_x21) goto LAB_1045b8804;
          goto LAB_1045b99e0;
        }
        if (plStack_220 != (long *)0x0) goto LAB_1045b99e0;
LAB_1045b8804:
        plVar33 = plStack_1c8;
        plVar24 = plStack_1d0;
        unaff_x22 = plStack_1e0;
        plVar31 = plStack_1e8;
        unaff_x24 = plStack_1f8;
        param_2 = plStack_200;
        plVar14 = plStack_218;
        uVar9 = (uint)((ulong)plStack_200 >> 0x20);
        uVar20 = uVar9 >> 0x1e;
        uVar10 = (uint)((ulong)plStack_1e0 >> 0x20);
        uVar25 = uVar10 >> 0x1e;
        iVar32 = (int)plStack_1f8;
        if ((ulong)plStack_200 >> 0x3e != 3) {
          if (1 < uVar9 >> 0x1e) {
            if (uVar20 == 2) {
              uVar23 = plStack_1f8[3] - plStack_1f8[2];
              if (SBORROW8(plStack_1f8[3],plStack_1f8[2])) {
                    /* WARNING: Does not return */
                pcVar11 = (code *)SoftwareBreakpoint(1,0x1045b9bac);
                (*pcVar11)();
              }
            }
            else {
              uVar23 = 0;
            }
            goto joined_r0x0001045b8c64;
          }
          if (uVar20 == 0) {
            uVar23 = (ulong)plStack_200 >> 0x30 & 0xff;
          }
          else {
            iVar22 = (int)((ulong)plStack_1f8 >> 0x20);
            if (SBORROW4(iVar22,iVar32)) {
                    /* WARNING: Does not return */
              pcVar11 = (code *)SoftwareBreakpoint(1,0x1045b9ba8);
              (*pcVar11)();
            }
            uVar23 = (ulong)(iVar22 - iVar32);
          }
          if (1 < uVar10 >> 0x1e) goto LAB_1045b8978;
LAB_1045b8abc:
          if (uVar25 == 0) {
            uVar27 = (ulong)plStack_1e0 >> 0x30 & 0xff;
          }
          else {
            iVar22 = (int)((ulong)plStack_1d0 >> 0x20);
            if (SBORROW4(iVar22,(int)plStack_1d0)) {
                    /* WARNING: Does not return */
              pcVar11 = (code *)SoftwareBreakpoint(1,0x1045b9ba4);
              (*pcVar11)();
            }
            uVar27 = (ulong)(iVar22 - (int)plStack_1d0);
          }
LAB_1045b8adc:
          if (uVar23 != uVar27) {
LAB_1045b988c:
            FUN_104567140(unaff_x21,plStack_1f0,plStack_1e8,uStack_208);
            func_0x00010006c090(plStack_1d0,unaff_x22);
            FUN_104567140(unaff_x27,plVar30,plStack_1c8,uStack_204);
            plVar15 = unaff_x24;
            plVar16 = plVar30;
            plVar34 = unaff_x27;
            goto LAB_1045b9a14;
          }
          if ((long)uVar23 < 1) {
LAB_1045b86a0:
            FUN_104567140(unaff_x21,plStack_1f0,plStack_1e8,uStack_208);
            func_0x00010006c090(plStack_1d0,unaff_x22);
            FUN_104567140(unaff_x27,plVar30,plStack_1c8,uStack_204);
            plVar15 = unaff_x24;
            goto LAB_1045b86d8;
          }
          if (uVar20 < 2) {
            if (uVar20 == 0) {
              abStack_1b0[0] = (byte)plStack_1f8;
              abStack_1b0[1] = (byte)((ulong)plStack_1f8 >> 8);
              abStack_1b0[2] = (byte)((ulong)plStack_1f8 >> 0x10);
              abStack_1b0[3] = (byte)((ulong)plStack_1f8 >> 0x18);
              abStack_1b0[4] = (byte)((ulong)plStack_1f8 >> 0x20);
              abStack_1b0[5] = (byte)((ulong)plStack_1f8 >> 0x28);
              abStack_1b0[6] = (byte)((ulong)plStack_1f8 >> 0x30);
              abStack_1b0[7] = (byte)((ulong)plStack_1f8 >> 0x38);
              abStack_1b0[8] = (byte)plStack_200;
              abStack_1b0[9] = (byte)((ulong)plStack_200 >> 8);
              abStack_1b0[10] = (byte)((ulong)plStack_200 >> 0x10);
              abStack_1b0[0xb] = (byte)((ulong)plStack_200 >> 0x18);
              abStack_1b0[0xc] = (byte)((ulong)plStack_200 >> 0x20);
              abStack_1b0[0xd] = (byte)((ulong)plStack_200 >> 0x28);
              func_0x000100e25bdc(abStack_1b9,abStack_1b0,
                                  abStack_1b0 + ((ulong)plStack_200 >> 0x30 & 0xff),plStack_1d0,
                                  plStack_1e0);
              plStack_218 = plVar14;
              FUN_104567140(unaff_x21,plStack_1f0,plVar31,uStack_208);
              func_0x00010006c090(plVar24,unaff_x22);
              FUN_104567140(unaff_x27,plVar30,plStack_1c8,uStack_204);
              unaff_x24 = plStack_1f8;
              param_2 = plStack_200;
              plVar24 = unaff_x20;
              plVar15 = unaff_x21;
              goto LAB_1045b8d3c;
            }
            lVar26 = (long)iVar32;
            plVar14 = (long *)(((long)plStack_1f8 >> 0x20) - lVar26);
            plStack_230 = unaff_x27;
            if ((long)plStack_1f8 >> 0x20 < lVar26) {
                    /* WARNING: Does not return */
              pcVar11 = (code *)SoftwareBreakpoint(1,0x1045b9bb0);
              (*pcVar11)();
            }
            __s10Foundation13__DataStorageC6_bytesSvSgvg();
            if (plVar15 == (long *)0x0) {
              plStack_228 = plVar30;
              __s10Foundation13__DataStorageC7_lengthSivg();
              lVar26 = 0;
              lVar19 = 0;
              plVar15 = unaff_x27;
            }
            else {
              plVar31 = plVar15;
              plStack_228 = plVar30;
              __s10Foundation13__DataStorageC7_offsetSivg();
              if (SBORROW8(lVar26,(long)plVar31)) {
                    /* WARNING: Does not return */
                pcVar11 = (code *)SoftwareBreakpoint(1,0x1045b9bbc);
                (*pcVar11)();
              }
              lVar1 = (lVar26 - (long)plVar31) + (long)plVar15;
              __s10Foundation13__DataStorageC7_lengthSivg();
              if ((long)plVar14 <= (long)plVar31) {
                plVar31 = plVar14;
              }
              lVar26 = 0;
              if (lVar1 != 0) {
                lVar26 = lVar1;
              }
              lVar19 = 0;
              if (lVar1 != 0) {
                lVar19 = (long)plVar31 + lVar1;
              }
            }
            plVar14 = plStack_1d0;
            unaff_x22 = plStack_1e0;
            unaff_x21 = plStack_218;
            func_0x000100e25bdc(abStack_1b0,lVar26,lVar19,plStack_1d0,plStack_1e0);
            plStack_218 = unaff_x21;
            FUN_104567140(plStack_1d8,plStack_1f0,plStack_1e8,uStack_208);
            func_0x00010006c090(plVar14,unaff_x22);
            FUN_104567140(plStack_230,plStack_228,plVar33,uStack_204);
            plVar24 = plStack_1f8;
            unaff_x20 = param_2;
            unaff_x27 = plVar30;
LAB_1045b924c:
            func_0x00010006c090(plVar24);
            plVar30 = unaff_x27;
            unaff_x24 = plVar33;
            unaff_x27 = plVar15;
            bVar2 = abStack_1b0[0];
          }
          else {
            if (uVar20 == 2) {
              unaff_x20 = (long *)(ulong)uStack_204;
              lVar26 = plStack_1f8[2];
              lVar19 = plStack_1f8[3];
              plStack_228 = plVar30;
              __s10Foundation13__DataStorageC6_bytesSvSgvg();
              plVar14 = plVar15;
              plVar30 = plVar15;
              if (plVar15 != (long *)0x0) {
                __s10Foundation13__DataStorageC7_offsetSivg();
                if (SBORROW8(lVar26,(long)plVar14)) {
                    /* WARNING: Does not return */
                  pcVar11 = (code *)SoftwareBreakpoint(1,0x1045b9bb8);
                  (*pcVar11)();
                }
                plVar30 = (long *)((lVar26 - (long)plVar14) + (long)plVar15);
              }
              plVar31 = (long *)(lVar19 - lVar26);
              if (SBORROW8(lVar19,lVar26)) {
                    /* WARNING: Does not return */
                pcVar11 = (code *)SoftwareBreakpoint(1,0x1045b9bb4);
                (*pcVar11)();
              }
              __s10Foundation13__DataStorageC7_lengthSivg();
              plVar33 = plStack_1c8;
              plVar15 = plStack_1d0;
              plVar16 = plStack_1e0;
              plVar24 = plStack_1f8;
              unaff_x21 = plStack_218;
              if (plVar30 == (long *)0x0) {
                lVar26 = 0;
              }
              else {
                if ((long)plVar31 <= (long)plVar14) {
                  plVar14 = plVar31;
                }
                lVar26 = (long)plVar14 + (long)plVar30;
              }
              func_0x000100e25bdc(abStack_1b0,plVar30,lVar26,plStack_1d0,plStack_1e0);
              plStack_218 = unaff_x21;
              FUN_104567140(plStack_1d8,plStack_1f0,plStack_1e8,uStack_208);
              func_0x00010006c090(plVar15,plVar16);
              FUN_104567140(unaff_x27,plStack_228,plVar33,unaff_x20);
              unaff_x22 = plVar24;
              goto LAB_1045b924c;
            }
            abStack_1b0[8] = 0;
            abStack_1b0[9] = 0;
            abStack_1b0[10] = 0;
            abStack_1b0[0xb] = 0;
            abStack_1b0[0xc] = 0;
            abStack_1b0[0xd] = 0;
            abStack_1b0[0] = 0;
            abStack_1b0[1] = 0;
            abStack_1b0[2] = 0;
            abStack_1b0[3] = 0;
            abStack_1b0[4] = 0;
            abStack_1b0[5] = 0;
            abStack_1b0[6] = 0;
            abStack_1b0[7] = 0;
            plStack_228 = plVar30;
            func_0x000100e25bdc(abStack_1b9,abStack_1b0,abStack_1b0,plStack_1d0,plStack_1e0);
            plStack_218 = plVar14;
            FUN_104567140(plStack_1d8,plStack_1f0,plStack_1e8,uStack_208);
            func_0x00010006c090(plVar24,unaff_x22);
            FUN_104567140(unaff_x27,plStack_228,plStack_1c8,uStack_204);
            plVar15 = unaff_x24;
LAB_1045b8d3c:
            func_0x00010006c090(unaff_x24);
            unaff_x20 = plVar24;
            unaff_x21 = plVar14;
            unaff_x24 = plVar15;
            bVar2 = abStack_1b9[0];
          }
          if ((bVar2 & 1) != 0) goto LAB_1045b86dc;
          goto LAB_1045b9a18;
        }
        uVar23 = 0;
        if ((((plStack_1f8 != (long *)0x0) || (plStack_200 != (long *)0xc000000000000000)) ||
            ((ulong)plStack_1e0 >> 0x3e < 3)) ||
           ((uVar23 = 0, plStack_1d0 != (long *)0x0 || (plStack_1e0 != (long *)0xc000000000000000)))
           ) {
joined_r0x0001045b8c64:
          if (uVar25 < 2) goto LAB_1045b8abc;
LAB_1045b8978:
          if (uVar25 == 2) {
            uVar27 = plStack_1d0[3] - plStack_1d0[2];
            if (SBORROW8(plStack_1d0[3],plStack_1d0[2])) {
                    /* WARNING: Does not return */
              pcVar11 = (code *)SoftwareBreakpoint(1,0x1045b9ba0);
              (*pcVar11)();
            }
            goto LAB_1045b8adc;
          }
          if (uVar23 == 0) goto LAB_1045b86a0;
          goto LAB_1045b988c;
        }
        FUN_104567140(unaff_x21,plStack_1f0,plStack_1e8,uStack_208);
        func_0x00010006c090(0,0xc000000000000000);
        FUN_104567140(unaff_x27,plVar30,plStack_1c8,uStack_204);
        param_2 = (long *)0xc000000000000000;
        plVar15 = (long *)0x0;
LAB_1045b86d8:
        func_0x00010006c090(plVar15);
LAB_1045b86dc:
        unaff_x28 = unaff_x28 + 6;
        unaff_x19 = unaff_x19 + 6;
        lVar26 = lStack_210 + -1;
      } while (lVar26 != 0);
    }
    plVar15 = (long *)0x1;
  }
  else {
LAB_1045b9a18:
    plVar15 = (long *)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_170) {
    return plVar15;
  }
  ___stack_chk_fail();
  lVar26 = plVar15[2];
  if (lVar26 != param_2[2]) {
    return (long *)0x0;
  }
  if ((lVar26 == 0) || (plVar15 == param_2)) {
    return (long *)0x1;
  }
  pcStack_248 = FUN_1045b9c00;
  plVar14 = plVar15 + 4;
  param_2 = param_2 + 4;
  plStack_290 = unaff_x28;
  plStack_288 = unaff_x27;
  plStack_280 = unaff_x24;
  plStack_278 = plVar30;
  plStack_270 = unaff_x22;
  plStack_268 = unaff_x21;
  plStack_260 = unaff_x20;
  plStack_258 = unaff_x19;
  ppuStack_250 = &puStack_100;
  while( true ) {
    lVar26 = lVar26 + -1;
    uStack_348 = plVar14[9];
    uStack_350 = plVar14[8];
    lStack_338 = plVar14[0xb];
    uStack_340 = plVar14[10];
    lStack_328 = plVar14[0xd];
    uStack_330 = plVar14[0xc];
    lStack_318 = plVar14[0xf];
    uStack_320 = plVar14[0xe];
    lStack_388 = plVar14[1];
    lStack_390 = *plVar14;
    uStack_378 = plVar14[3];
    lStack_380 = plVar14[2];
    lStack_368 = plVar14[5];
    uVar23 = plVar14[4];
    lStack_358 = plVar14[7];
    uStack_360 = plVar14[6];
    lStack_308 = param_2[1];
    lStack_310 = *param_2;
    uStack_2f8 = param_2[3];
    lStack_300 = param_2[2];
    lStack_2e8 = param_2[5];
    uStack_2f0 = param_2[4];
    lStack_2d8 = param_2[7];
    uStack_2e0 = param_2[6];
    lStack_2c8 = param_2[9];
    uStack_2d0 = param_2[8];
    lStack_2b8 = param_2[0xb];
    uStack_2c0 = param_2[10];
    lStack_2a8 = param_2[0xd];
    uStack_2b0 = param_2[0xc];
    lStack_298 = param_2[0xf];
    lStack_2a0 = param_2[0xe];
    uStack_370 = uVar23;
    if ((char)lStack_308 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x0001045b9cac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10dd19b30)[lStack_310] * 4 + 0x1045b9cb0))();
      return plVar15;
    }
    if (lStack_390 != lStack_310) {
      return (long *)0x0;
    }
    if ((char)uStack_2f8 == '\x01') {
      if (lStack_300 < 2) {
        if (lStack_300 == 0) {
          if (lStack_380 != 0) {
            return (long *)0x0;
          }
        }
        else if (lStack_380 != 1) {
          return (long *)0x0;
        }
      }
      else if (lStack_300 == 2) {
        if (lStack_380 != 2) {
          return (long *)0x0;
        }
      }
      else if (lStack_380 != 3) {
        return (long *)0x0;
      }
    }
    else if (lStack_380 != lStack_300) {
      return (long *)0x0;
    }
    uStack_378._4_4_ = (int)((ulong)uStack_378 >> 0x20);
    uStack_2f8._4_4_ = (int)((ulong)uStack_2f8 >> 0x20);
    if (uStack_378._4_4_ != uStack_2f8._4_4_) {
      return (long *)0x0;
    }
    if (((uVar23 != uStack_2f0) || (lStack_368 != lStack_2e8)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar23 & 1) == 0)) {
      return (long *)0x0;
    }
    if (((uStack_360 != uStack_2e0) || (lStack_358 != lStack_2d8)) &&
       (uVar23 = uStack_360,
       __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
       , (uVar23 & 1) == 0)) {
      return (long *)0x0;
    }
    lVar19 = lStack_2c8;
    uVar23 = uStack_348;
    if ((int)uStack_350 != (int)uStack_2d0) {
      return (long *)0x0;
    }
    if (uStack_350._4_1_ != uStack_2d0._4_1_) {
      return (long *)0x0;
    }
    func_0x000104603ae4(&lStack_390,auStack_410);
    func_0x000104603ae4(&lStack_310,auStack_410);
    FUN_1045b79ac(uVar23,lVar19);
    if (((uVar23 & 1) == 0) ||
       ((((uStack_340 != uStack_2c0 || (lStack_338 != lStack_2b8)) &&
         (uVar23 = uStack_340,
         __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                   (), (uVar23 & 1) == 0)) ||
        (((uStack_330 != uStack_2b0 || (lStack_328 != lStack_2a8)) &&
         (uVar23 = uStack_330,
         __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                   (), (uVar23 & 1) == 0)))))) {
      func_0x000104603b20(&lStack_310);
      func_0x000104603b20(&lStack_390);
      return (long *)0x0;
    }
    uVar23 = uStack_320;
    func_0x000100e25fcc(uStack_320,lStack_318,lStack_2a0,lStack_298);
    func_0x000104603b20(&lStack_310);
    plVar15 = &lStack_390;
    func_0x000104603b20(plVar15);
    if ((uVar23 & 1) == 0) {
      return (long *)0x0;
    }
    if (lVar26 == 0) break;
    plVar14 = plVar14 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return (long *)0x1;
}



/* Entry: 1045b863c; end: 1045b9bff;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_1045b863c(long *param_1,long *param_2)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  uint uVar9;
  uint uVar10;
  code *pcVar11;
  bool bVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  int iVar18;
  int iVar19;
  long *plVar20;
  ulong uVar21;
  uint uVar22;
  int iVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  int iVar27;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long *plVar28;
  long *unaff_x24;
  uint uVar29;
  long *plVar30;
  long *unaff_x27;
  long *unaff_x28;
  undefined1 auStack_320 [128];
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  undefined8 uStack_288;
  ulong uStack_280;
  long lStack_278;
  ulong uStack_270;
  long lStack_268;
  undefined8 uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  long lStack_248;
  ulong uStack_240;
  long lStack_238;
  ulong uStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  undefined8 uStack_208;
  ulong uStack_200;
  long lStack_1f8;
  ulong uStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  ulong uStack_1d0;
  long lStack_1c8;
  ulong uStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  long *plStack_190;
  long *plStack_188;
  long *plStack_180;
  long *plStack_178;
  long *plStack_170;
  long *plStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  ulong uStack_148;
  long *plStack_140;
  long *plStack_138;
  long *plStack_130;
  long *plStack_128;
  long lStack_120;
  uint uStack_118;
  uint uStack_114;
  long *plStack_110;
  long *plStack_108;
  long *plStack_100;
  long *plStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  byte abStack_c9 [9];
  byte abStack_c0 [14];
  undefined2 uStack_b2;
  long *plStack_b0;
  byte bStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  undefined1 uStack_88;
  long lStack_80;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar24 = param_1[2];
  if (lVar24 == param_2[2]) {
    if ((lVar24 != 0) && (param_1 != param_2)) {
      plStack_128 = (long *)0x0;
      unaff_x28 = param_1 + 9;
      unaff_x19 = param_2 + 9;
      do {
        unaff_x27 = (long *)unaff_x28[-5];
        unaff_x23 = (long *)unaff_x28[-4];
        plVar20 = (long *)unaff_x28[-3];
        bVar2 = *(byte *)(unaff_x28 + -2);
        plVar28 = (long *)(ulong)bVar2;
        plVar16 = (long *)unaff_x28[-1];
        plVar15 = (long *)*unaff_x28;
        unaff_x21 = (long *)unaff_x19[-5];
        unaff_x22 = (long *)unaff_x19[-4];
        unaff_x20 = (long *)unaff_x19[-3];
        bVar3 = *(byte *)(unaff_x19 + -2);
        plVar30 = (long *)(ulong)bVar3;
        plStack_e0 = (long *)unaff_x19[-1];
        unaff_x24 = (long *)*unaff_x19;
        bVar12 = (((ulong)unaff_x20 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
        uStack_118 = (uint)bVar3;
        uStack_114 = (uint)bVar2;
        uVar4 = (undefined1)((ulong)unaff_x23 >> 8);
        uVar5 = (undefined1)((ulong)unaff_x23 >> 0x10);
        uVar6 = (undefined1)((ulong)unaff_x23 >> 0x18);
        uVar7 = (undefined1)((ulong)unaff_x23 >> 0x20);
        uVar8 = (undefined1)((ulong)unaff_x23 >> 0x28);
        lStack_120 = lVar24;
        plStack_110 = plVar15;
        plStack_108 = plVar16;
        plStack_100 = unaff_x22;
        plStack_f8 = unaff_x20;
        plStack_f0 = unaff_x24;
        plStack_e8 = unaff_x21;
        plStack_d8 = plVar20;
        if (((((ulong)plVar20 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
           (uStack_114 == 0xff)) {
          if (!bVar12 || uStack_118 != 0xff) goto LAB_1045b98cc;
          plVar28 = (long *)0xff;
          plStack_130 = unaff_x19;
          FUN_1045670a0(unaff_x27,unaff_x23,plVar20,0xff);
          func_0x00010006c00c(plVar16,plVar15);
          FUN_1045670a0(plStack_e8,unaff_x22,unaff_x20,0xff);
          plVar15 = plStack_e8;
          func_0x00010006c00c(plStack_e0,unaff_x24);
          FUN_1045670a0(unaff_x27,unaff_x23,plVar20,0xff);
          unaff_x19 = plStack_130;
          FUN_1045670a0(plVar15,unaff_x22,unaff_x20,0xff);
LAB_1045b87ec:
          plVar16 = unaff_x27;
          FUN_104567140(unaff_x27,unaff_x23,plStack_d8,plVar28);
          unaff_x20 = plVar28;
          unaff_x21 = plVar15;
          goto LAB_1045b8804;
        }
        if (bVar12 && uStack_118 == 0xff) {
          plVar30 = (long *)0xff;
LAB_1045b98cc:
          abStack_c0[0] = (byte)unaff_x27;
          abStack_c0[1] = (byte)((ulong)unaff_x27 >> 8);
          abStack_c0[2] = (byte)((ulong)unaff_x27 >> 0x10);
          abStack_c0[3] = (byte)((ulong)unaff_x27 >> 0x18);
          abStack_c0[4] = (byte)((ulong)unaff_x27 >> 0x20);
          abStack_c0[5] = (byte)((ulong)unaff_x27 >> 0x28);
          abStack_c0[6] = (byte)((ulong)unaff_x27 >> 0x30);
          abStack_c0[7] = (byte)((ulong)unaff_x27 >> 0x38);
          uStack_b2 = (undefined2)((ulong)unaff_x23 >> 0x30);
          uStack_88 = SUB81(plVar30,0);
          abStack_c0[8] = (byte)unaff_x23;
          abStack_c0[9] = uVar4;
          abStack_c0[10] = uVar5;
          abStack_c0[0xb] = uVar6;
          abStack_c0[0xc] = uVar7;
          abStack_c0[0xd] = uVar8;
          plStack_b0 = plVar20;
          bStack_a8 = bVar2;
          plStack_a0 = unaff_x21;
          plStack_98 = unaff_x22;
          plStack_90 = unaff_x20;
          FUN_1045670a0();
          FUN_1045670a0(unaff_x21,unaff_x22,unaff_x20,plVar30);
          param_2 = (long *)0x113089728;
          func_0x000104603c54(abStack_c0,0x113089728,&UNK_10dd1f540);
          unaff_x23 = plVar28;
          unaff_x27 = plVar15;
          goto LAB_1045b9a18;
        }
        uVar10 = (uint)((ulong)plVar20 >> 0x3c) & 0xfffffc03 | (bVar2 & 0x3f) << 2;
        uVar29 = (uint)bVar3;
        uVar9 = (uint)((ulong)unaff_x20 >> 0x20);
        plVar14 = unaff_x23;
        if (2 < uVar10) {
          if (uVar10 == 3) {
            if ((uVar9 >> 0x1c & 0xfffffc03 | (uStack_118 & 0x3f) << 2) == 3) {
              plStack_130 = (long *)CONCAT44(plStack_130._4_4_,(uint)unaff_x21 ^ (uint)unaff_x27);
              FUN_1045670a0(unaff_x27,unaff_x23,plVar20,plVar28);
              plVar13 = plStack_100;
              func_0x00010006c00c(plVar16,plVar15);
              FUN_1045670a0(plStack_e8,plVar13,unaff_x20,plVar30);
              plVar15 = plStack_e8;
              func_0x00010006c00c(plStack_e0,plStack_f0);
              FUN_1045670a0(unaff_x27,unaff_x23,plVar20,plVar28);
              FUN_1045670a0(plVar15,plVar13,unaff_x20,plVar30);
              plVar30 = plVar13;
              if (((ulong)plStack_130 & 1) != 0) goto LAB_1045b99c8;
              goto LAB_1045b87ec;
            }
            goto LAB_1045b9920;
          }
          iVar19 = (int)unaff_x22;
          iVar23 = (int)((ulong)unaff_x22 >> 0x20);
          if (uVar10 == 4) {
            if ((uVar9 >> 0x1c & 0xfffffc03 | (uVar29 & 0x3f) << 2) != 4) goto LAB_1045b9920;
            FUN_1045670a0(unaff_x27,unaff_x23,plVar20,plVar28);
            func_0x00010006c00c(plStack_108,plStack_110);
            FUN_1045670a0(plStack_e8,unaff_x22,unaff_x20,plVar30);
            plVar15 = plStack_e8;
            func_0x00010006c00c(plStack_e0,unaff_x24);
            FUN_1045670a0(unaff_x27,unaff_x23,plVar20,plVar28);
            FUN_1045670a0(plVar15,unaff_x22,unaff_x20,plVar30);
            plStack_140 = unaff_x27;
            FUN_10460aa08(unaff_x27,plVar15);
            plVar20 = plStack_128;
            plVar16 = plStack_140;
            if (((ulong)unaff_x27 & 1) != 0) {
              uVar10 = (uint)((ulong)plStack_d8 >> 0x20);
              uVar29 = uVar10 >> 0x1e;
              iVar27 = (int)unaff_x23;
              iVar18 = (int)((ulong)unaff_x23 >> 0x20);
              if ((ulong)plStack_d8 >> 0x3e == 3) {
                uVar21 = 0;
                if ((((unaff_x23 != (long *)0x0) || (plStack_d8 != (long *)0xc000000000000000)) ||
                    ((ulong)unaff_x20 >> 0x3e < 3)) ||
                   ((uVar21 = 0, unaff_x22 != (long *)0x0 ||
                    (unaff_x20 != (long *)0xc000000000000000)))) goto LAB_1045b92b8;
                unaff_x22 = (long *)0x0;
                unaff_x20 = (long *)0xc000000000000000;
LAB_1045b93e8:
                FUN_104567140(plVar15,unaff_x22,unaff_x20,plVar30);
                unaff_x27 = plStack_140;
                goto LAB_1045b87ec;
              }
              if (uVar10 >> 0x1e < 2) {
                if (uVar29 == 0) {
                  uVar21 = (ulong)plStack_d8 >> 0x30 & 0xff;
                }
                else {
                  if (SBORROW4(iVar18,iVar27)) {
                    /* WARNING: Does not return */
                    pcVar11 = (code *)SoftwareBreakpoint(1,0x1045b9bd4);
                    (*pcVar11)();
                  }
                  uVar21 = (ulong)(iVar18 - iVar27);
                }
              }
              else if (uVar29 == 2) {
                uVar21 = unaff_x23[3] - unaff_x23[2];
                if (SBORROW8(unaff_x23[3],unaff_x23[2])) {
                    /* WARNING: Does not return */
                  pcVar11 = (code *)SoftwareBreakpoint(1,0x1045b9bd0);
                  (*pcVar11)();
                }
              }
              else {
                uVar21 = 0;
              }
LAB_1045b92b8:
              if (uVar9 >> 0x1e < 2) {
                if (uVar9 >> 0x1e == 0) {
                  uVar25 = (ulong)unaff_x20 >> 0x30 & 0xff;
                }
                else {
                  if (SBORROW4(iVar23,iVar19)) {
                    /* WARNING: Does not return */
                    pcVar11 = (code *)SoftwareBreakpoint(1,0x1045b9bc4);
                    (*pcVar11)();
                  }
                  uVar25 = (ulong)(iVar23 - iVar19);
                }
              }
              else {
                if (uVar9 >> 0x1e != 2) {
                  if (uVar21 != 0) goto LAB_1045b99a8;
                  goto LAB_1045b93e8;
                }
                uVar25 = unaff_x22[3] - unaff_x22[2];
                if (SBORROW8(unaff_x22[3],unaff_x22[2])) {
                    /* WARNING: Does not return */
                  pcVar11 = (code *)SoftwareBreakpoint(1,0x1045b9bcc);
                  (*pcVar11)();
                }
              }
              if (uVar21 != uVar25) goto LAB_1045b99a8;
              if ((long)uVar21 < 1) goto LAB_1045b93e8;
              if (uVar29 < 2) {
                if (uVar29 != 0) {
                  lVar24 = (long)iVar27;
                  plVar15 = (long *)(((long)unaff_x23 >> 0x20) - lVar24);
                  if ((long)unaff_x23 >> 0x20 < lVar24) {
                    /* WARNING: Does not return */
                    pcVar11 = (code *)SoftwareBreakpoint(1,0x1045b9be0);
                    (*pcVar11)();
                  }
                  __s10Foundation13__DataStorageC6_bytesSvSgvg();
                  if (unaff_x27 == (long *)0x0) {
                    __s10Foundation13__DataStorageC7_lengthSivg();
                    lVar24 = 0;
LAB_1045b97a8:
                    lVar17 = 0;
                  }
                  else {
                    plVar28 = unaff_x27;
                    __s10Foundation13__DataStorageC7_offsetSivg();
                    if (SBORROW8(lVar24,(long)plVar28)) {
                    /* WARNING: Does not return */
                      pcVar11 = (code *)SoftwareBreakpoint(1,0x1045b9bf8);
                      (*pcVar11)();
                    }
                    lVar24 = (lVar24 - (long)plVar28) + (long)unaff_x27;
                    __s10Foundation13__DataStorageC7_lengthSivg();
                    if (lVar24 == 0) goto LAB_1045b97a8;
                    if ((long)plVar15 <= (long)plVar28) {
                      plVar28 = plVar15;
                    }
                    lVar17 = (long)plVar28 + lVar24;
                  }
                  plVar30 = plStack_f8;
                  plVar15 = plStack_128;
                  func_0x000100e25bdc(abStack_c0,lVar24,lVar17,unaff_x22,plStack_f8);
                  plVar28 = plVar30;
                  plStack_128 = plVar15;
                  goto LAB_1045b9868;
                }
                abStack_c0[6] = (byte)((ulong)unaff_x23 >> 0x30);
                abStack_c0[7] = (byte)((ulong)unaff_x23 >> 0x38);
                abStack_c0[8] = (byte)plStack_d8;
                abStack_c0[9] = (byte)((ulong)plStack_d8 >> 8);
                abStack_c0[10] = (byte)((ulong)plStack_d8 >> 0x10);
                abStack_c0[0xb] = (byte)((ulong)plStack_d8 >> 0x18);
                abStack_c0[0xc] = (byte)((ulong)plStack_d8 >> 0x20);
                abStack_c0[0xd] = (byte)((ulong)plStack_d8 >> 0x28);
                abStack_c0[0] = (byte)unaff_x23;
                abStack_c0[1] = uVar4;
                abStack_c0[2] = uVar5;
                abStack_c0[3] = uVar6;
                abStack_c0[4] = uVar7;
                abStack_c0[5] = uVar8;
                func_0x000100e25bdc(abStack_c9,abStack_c0,
                                    abStack_c0 + ((ulong)plStack_d8 >> 0x30 & 0xff),unaff_x22,
                                    unaff_x20);
                plVar15 = plStack_e8;
                plStack_128 = plVar20;
                FUN_104567140(plStack_e8,unaff_x22,unaff_x20,uStack_118);
                plVar28 = unaff_x20;
                unaff_x27 = plStack_140;
                bVar2 = abStack_c9[0];
              }
              else {
                if (uVar29 != 2) {
                  abStack_c0[8] = 0;
                  abStack_c0[9] = 0;
                  abStack_c0[10] = 0;
                  abStack_c0[0xb] = 0;
                  abStack_c0[0xc] = 0;
                  abStack_c0[0xd] = 0;
                  abStack_c0[0] = 0;
                  abStack_c0[1] = 0;
                  abStack_c0[2] = 0;
                  abStack_c0[3] = 0;
                  abStack_c0[4] = 0;
                  abStack_c0[5] = 0;
                  abStack_c0[6] = 0;
                  abStack_c0[7] = 0;
                  func_0x000100e25bdc(abStack_c9,abStack_c0,abStack_c0,unaff_x22,unaff_x20);
                  plVar15 = plStack_e8;
                  plStack_128 = plVar20;
                  FUN_104567140(plStack_e8,unaff_x22,unaff_x20,uStack_118);
                  plVar28 = unaff_x20;
                  unaff_x27 = plVar16;
                  bVar2 = abStack_c9[0];
                  goto joined_r0x0001045b96bc;
                }
                lVar24 = unaff_x23[2];
                plStack_130 = (long *)unaff_x23[3];
                __s10Foundation13__DataStorageC6_bytesSvSgvg();
                if (unaff_x27 == (long *)0x0) {
                  lVar17 = 0;
                }
                else {
                  plVar15 = unaff_x27;
                  __s10Foundation13__DataStorageC7_offsetSivg();
                  if (SBORROW8(lVar24,(long)plVar15)) {
                    /* WARNING: Does not return */
                    pcVar11 = (code *)SoftwareBreakpoint(1,0x1045b9bf4);
                    (*pcVar11)();
                  }
                  lVar17 = (lVar24 - (long)plVar15) + (long)unaff_x27;
                  unaff_x27 = plVar15;
                }
                plVar15 = (long *)((long)plStack_130 - lVar24);
                if (SBORROW8((long)plStack_130,lVar24)) {
                    /* WARNING: Does not return */
                  pcVar11 = (code *)SoftwareBreakpoint(1,0x1045b9be8);
                  (*pcVar11)();
                }
                plVar28 = (long *)((ulong)plStack_d8 & 0x3fffffffffffffff);
                __s10Foundation13__DataStorageC7_lengthSivg();
                plVar30 = plStack_f8;
                plVar20 = plStack_128;
                if (lVar17 == 0) {
                  lVar24 = 0;
                }
                else {
                  if ((long)plVar15 <= (long)unaff_x27) {
                    unaff_x27 = plVar15;
                  }
                  lVar24 = (long)unaff_x27 + lVar17;
                }
                func_0x000100e25bdc(abStack_c0,lVar17,lVar24,unaff_x22,plStack_f8);
                plStack_128 = plVar20;
LAB_1045b9868:
                plVar15 = plStack_e8;
                FUN_104567140(plStack_e8,unaff_x22,plVar30,uStack_118);
                unaff_x27 = plVar16;
                bVar2 = abStack_c0[0];
              }
joined_r0x0001045b96bc:
              plVar30 = unaff_x22;
              if ((bVar2 & 1) == 0) goto LAB_1045b99c8;
              plVar28 = (long *)(ulong)uStack_114;
              goto LAB_1045b87ec;
            }
            goto LAB_1045b99a8;
          }
          plVar13 = unaff_x27;
          if ((uVar9 >> 0x1c & 0xfffffc03 | (uStack_118 & 0x3f) << 2) == 5) {
            plStack_138 = unaff_x23;
            FUN_1045670a0(unaff_x27,unaff_x23,plVar20,plVar28);
            func_0x00010006c00c(plVar16,plStack_110);
            plVar15 = plStack_e8;
            FUN_1045670a0(plStack_e8,unaff_x22,unaff_x20,plVar30);
            unaff_x23 = plStack_138;
            func_0x00010006c00c(plStack_e0,plStack_f0);
            FUN_1045670a0(unaff_x27,unaff_x23,plVar20,plVar28);
            FUN_1045670a0(plVar15,unaff_x22,unaff_x20,plVar30);
            FUN_1045b863c(unaff_x27,plVar15);
            plVar16 = plStack_128;
            if (((ulong)plVar13 & 1) == 0) {
LAB_1045b9a58:
              plStack_140 = unaff_x27;
              FUN_104567140(plVar15,unaff_x22,unaff_x20,plVar30);
              plVar14 = plVar28;
              plVar13 = unaff_x27;
            }
            else {
              uVar21 = (ulong)unaff_x20 & 0xcfffffffffffffff;
              uVar10 = (uint)((ulong)plStack_d8 >> 0x20);
              uVar29 = uVar10 >> 0x1e;
              iVar27 = (int)unaff_x23;
              iVar18 = (int)((ulong)unaff_x23 >> 0x20);
              plVar14 = plVar15;
              if ((ulong)plStack_d8 >> 0x3e == 3) {
                uVar25 = 0;
                if (((unaff_x23 == (long *)0x0) &&
                    (((ulong)plStack_d8 & 0xcfffffffffffffff) == 0xc000000000000000)) &&
                   ((2 < (ulong)unaff_x20 >> 0x3e &&
                    ((uVar25 = 0, unaff_x22 == (long *)0x0 &&
                     (plVar20 = (long *)0x0, uVar21 == 0xc000000000000000)))))) goto LAB_1045b9560;
              }
              else if (uVar10 >> 0x1e < 2) {
                if (uVar29 == 0) {
                  uVar25 = (ulong)plStack_d8 >> 0x30 & 0xff;
                }
                else {
                  if (SBORROW4(iVar18,iVar27)) {
                    /* WARNING: Does not return */
                    pcVar11 = (code *)SoftwareBreakpoint(1,0x1045b9bd8);
                    (*pcVar11)();
                  }
                  uVar25 = (ulong)(iVar18 - iVar27);
                }
              }
              else if (uVar29 == 2) {
                uVar25 = unaff_x23[3] - unaff_x23[2];
                if (SBORROW8(unaff_x23[3],unaff_x23[2])) {
                    /* WARNING: Does not return */
                  pcVar11 = (code *)SoftwareBreakpoint(1,0x1045b9bdc);
                  (*pcVar11)();
                }
              }
              else {
                uVar25 = 0;
              }
              plVar20 = unaff_x22;
              if (uVar9 >> 0x1e < 2) {
                if (uVar9 >> 0x1e == 0) {
                  uVar26 = (ulong)unaff_x20 >> 0x30 & 0xff;
                }
                else {
                  if (SBORROW4(iVar23,iVar19)) {
                    /* WARNING: Does not return */
                    pcVar11 = (code *)SoftwareBreakpoint(1,0x1045b9bc0);
                    (*pcVar11)();
                  }
                  uVar26 = (ulong)(iVar23 - iVar19);
                }
              }
              else {
                if (uVar9 >> 0x1e != 2) {
                  if (uVar25 == 0) goto LAB_1045b9560;
                  goto LAB_1045b9a58;
                }
                uVar26 = unaff_x22[3] - unaff_x22[2];
                if (SBORROW8(unaff_x22[3],unaff_x22[2])) {
                    /* WARNING: Does not return */
                  pcVar11 = (code *)SoftwareBreakpoint(1,0x1045b9bc8);
                  (*pcVar11)();
                }
              }
              if (uVar25 != uVar26) goto LAB_1045b9a58;
              if ((long)uVar25 < 1) goto LAB_1045b9560;
              if (uVar29 < 2) {
                if (uVar29 == 0) {
                  abStack_c0[0] = (byte)unaff_x23;
                  abStack_c0[1] = (byte)((ulong)unaff_x23 >> 8);
                  abStack_c0[2] = (byte)((ulong)unaff_x23 >> 0x10);
                  abStack_c0[3] = (byte)((ulong)unaff_x23 >> 0x18);
                  abStack_c0[4] = (byte)((ulong)unaff_x23 >> 0x20);
                  abStack_c0[5] = (byte)((ulong)unaff_x23 >> 0x28);
                  abStack_c0[6] = (byte)((ulong)unaff_x23 >> 0x30);
                  abStack_c0[7] = (byte)((ulong)unaff_x23 >> 0x38);
                  abStack_c0[8] = (byte)plStack_d8;
                  abStack_c0[9] = (byte)((ulong)plStack_d8 >> 8);
                  abStack_c0[10] = (byte)((ulong)plStack_d8 >> 0x10);
                  abStack_c0[0xb] = (byte)((ulong)plStack_d8 >> 0x18);
                  abStack_c0[0xc] = (byte)((ulong)plStack_d8 >> 0x20);
                  abStack_c0[0xd] = (byte)((ulong)plStack_d8 >> 0x28);
                  plStack_140 = unaff_x27;
                  func_0x000100e25bdc(abStack_c9,abStack_c0,
                                      abStack_c0 + ((ulong)plStack_d8 >> 0x30 & 0xff),unaff_x22);
                  goto LAB_1045b9758;
                }
                lVar24 = (long)iVar27;
                plVar28 = (long *)(((long)unaff_x23 >> 0x20) - lVar24);
                if ((long)unaff_x23 >> 0x20 < lVar24) {
                    /* WARNING: Does not return */
                  pcVar11 = (code *)SoftwareBreakpoint(1,0x1045b9be4);
                  plStack_140 = unaff_x27;
                  (*pcVar11)();
                }
                plStack_140 = unaff_x27;
                __s10Foundation13__DataStorageC6_bytesSvSgvg();
                if (plVar13 == (long *)0x0) {
                  __s10Foundation13__DataStorageC7_lengthSivg();
                  lVar24 = 0;
LAB_1045b97e8:
                  lVar17 = 0;
                }
                else {
                  plVar16 = plVar13;
                  __s10Foundation13__DataStorageC7_offsetSivg();
                  if (SBORROW8(lVar24,(long)plVar16)) {
                    /* WARNING: Does not return */
                    pcVar11 = (code *)SoftwareBreakpoint(1,0x1045b9bfc);
                    (*pcVar11)();
                  }
                  lVar24 = (lVar24 - (long)plVar16) + (long)plVar13;
                  __s10Foundation13__DataStorageC7_lengthSivg();
                  unaff_x27 = plVar13;
                  if (lVar24 == 0) goto LAB_1045b97e8;
                  if ((long)plVar28 <= (long)plVar16) {
                    plVar16 = plVar28;
                  }
                  lVar17 = (long)plVar16 + lVar24;
                }
                plVar20 = plStack_f8;
                plVar16 = plStack_128;
                func_0x000100e25bdc(abStack_c0,lVar24,lVar17,unaff_x22,uVar21);
                plVar15 = plStack_e8;
                plStack_128 = plVar16;
                FUN_104567140(plStack_e8,unaff_x22,plVar20,uStack_118);
                plVar13 = unaff_x27;
                unaff_x27 = plStack_140;
                bVar2 = abStack_c0[0];
              }
              else if (uVar29 == 2) {
                lVar24 = unaff_x23[2];
                plVar28 = (long *)unaff_x23[3];
                plStack_140 = unaff_x27;
                __s10Foundation13__DataStorageC6_bytesSvSgvg();
                plVar16 = plVar13;
                if (plVar13 != (long *)0x0) {
                  __s10Foundation13__DataStorageC7_offsetSivg();
                  if (SBORROW8(lVar24,(long)plVar16)) {
                    /* WARNING: Does not return */
                    pcVar11 = (code *)SoftwareBreakpoint(1,0x1045b9bf0);
                    (*pcVar11)();
                  }
                  plVar13 = (long *)((lVar24 - (long)plVar16) + (long)plVar13);
                }
                if (SBORROW8((long)plVar28,lVar24)) {
                    /* WARNING: Does not return */
                  pcVar11 = (code *)SoftwareBreakpoint(1,0x1045b9bec);
                  (*pcVar11)();
                }
                __s10Foundation13__DataStorageC7_lengthSivg(plStack_d8);
                plVar20 = plStack_128;
                if ((long)plVar28 - lVar24 <= (long)plVar16) {
                  plVar16 = (long *)((long)plVar28 - lVar24);
                }
                lVar24 = 0;
                if (plVar13 != (long *)0x0) {
                  lVar24 = (long)plVar16 + (long)plVar13;
                }
                func_0x000100e25bdc(abStack_c0,plVar13,lVar24,unaff_x22,uVar21);
                plVar15 = plStack_e8;
                plStack_128 = plVar20;
                FUN_104567140(plStack_e8,unaff_x22,plStack_f8,uStack_118);
                unaff_x23 = plStack_138;
                unaff_x27 = plStack_140;
                bVar2 = abStack_c0[0];
              }
              else {
                abStack_c0[8] = 0;
                abStack_c0[9] = 0;
                abStack_c0[10] = 0;
                abStack_c0[0xb] = 0;
                abStack_c0[0xc] = 0;
                abStack_c0[0xd] = 0;
                abStack_c0[0] = 0;
                abStack_c0[1] = 0;
                abStack_c0[2] = 0;
                abStack_c0[3] = 0;
                abStack_c0[4] = 0;
                abStack_c0[5] = 0;
                abStack_c0[6] = 0;
                abStack_c0[7] = 0;
                plStack_140 = unaff_x27;
                func_0x000100e25bdc(abStack_c9,abStack_c0,abStack_c0,unaff_x22);
                unaff_x20 = plStack_f8;
LAB_1045b9758:
                plVar15 = plStack_e8;
                plStack_128 = plVar16;
                FUN_104567140(plStack_e8,unaff_x22,unaff_x20,uStack_118);
                plVar13 = unaff_x27;
                unaff_x27 = plStack_140;
                bVar2 = abStack_c9[0];
              }
              plVar14 = plVar28;
              plStack_140 = unaff_x27;
              if ((bVar2 & 1) != 0) {
                plVar28 = (long *)(ulong)uStack_114;
                goto LAB_1045b87ec;
              }
            }
            plVar20 = plStack_d8;
            unaff_x27 = plStack_140;
            plVar28 = (long *)(ulong)uStack_114;
            FUN_104567140(plStack_140,unaff_x23,plStack_d8,plVar28);
            FUN_104567140(plVar15,unaff_x22,plStack_f8,uStack_118);
            func_0x00010006c090(plStack_e0,plStack_f0);
            unaff_x19 = unaff_x27;
            unaff_x20 = plVar28;
            unaff_x21 = plVar20;
            unaff_x22 = plVar15;
            unaff_x24 = unaff_x23;
          }
          else {
            FUN_1045670a0(unaff_x27,unaff_x23,plVar20,plVar28);
            func_0x00010006c00c(plVar16,plStack_110);
            unaff_x28 = plStack_e8;
            FUN_1045670a0(plStack_e8,unaff_x22,unaff_x20,plVar30);
            unaff_x19 = plStack_e0;
            plVar16 = plStack_f0;
            func_0x00010006c00c(plStack_e0,plStack_f0);
            FUN_1045670a0(unaff_x27,unaff_x23,plVar20,plVar28);
            FUN_1045670a0(unaff_x28,unaff_x22,unaff_x20,plVar30);
            FUN_104567140(unaff_x28,unaff_x22,unaff_x20,plVar30);
            FUN_104567140(unaff_x27,unaff_x23,plVar20,plVar28);
            FUN_104567140(unaff_x28,unaff_x22,unaff_x20,plVar30);
            func_0x00010006c090(unaff_x19,plVar16);
            unaff_x21 = plVar28;
            unaff_x24 = plVar20;
          }
LAB_1045b9a0c:
          FUN_104567140(unaff_x27,unaff_x23,plVar20,plVar28);
          plVar16 = plStack_108;
          param_2 = plStack_110;
LAB_1045b9a14:
          func_0x00010006c090(plVar16);
          unaff_x23 = plVar14;
          unaff_x27 = plVar13;
          goto LAB_1045b9a18;
        }
        if (uVar10 != 0) {
          if (uVar10 == 1) {
            if ((uVar9 >> 0x1c & 0xfffffc03 | (uVar29 & 0x3f) << 2) != 1) goto LAB_1045b9920;
            FUN_1045670a0(unaff_x27,unaff_x23,plVar20,plVar28);
            func_0x00010006c00c(plVar16,plVar15);
            FUN_1045670a0(plStack_e8,plStack_100,unaff_x20,plVar30);
            plVar15 = plStack_e8;
            func_0x00010006c00c(plStack_e0,plStack_f0);
            FUN_1045670a0(unaff_x27,unaff_x23,plVar20,plVar28);
            FUN_1045670a0(plVar15,plStack_100,unaff_x20,plVar30);
            plVar30 = unaff_x27;
            if ((double)unaff_x27 == (double)unaff_x21) goto LAB_1045b87ec;
          }
          else {
            if ((uVar9 >> 0x1c & 0xfffffc03 | (uVar29 & 0x3f) << 2) == 2) {
              if ((unaff_x27 != unaff_x21) || (unaff_x23 != unaff_x22)) {
                plVar15 = unaff_x27;
                __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (unaff_x27,unaff_x23,unaff_x21,unaff_x22,0);
                plVar20 = plStack_d8;
                plStack_130 = (long *)CONCAT44(plStack_130._4_4_,(int)plVar15);
                FUN_1045670a0(unaff_x27,unaff_x23,plStack_d8,plVar28);
                func_0x00010006c00c(plVar16,plStack_110);
                plVar16 = plStack_f8;
                FUN_1045670a0(plStack_e8,unaff_x22,plStack_f8,plVar30);
                plVar15 = plStack_e8;
                func_0x00010006c00c(plStack_e0,plStack_f0);
                FUN_1045670a0(unaff_x27,unaff_x23,plVar20,plVar28);
                FUN_1045670a0(plVar15,unaff_x22,plVar16,plVar30);
                FUN_104567140(plVar15,unaff_x22,plVar16,plVar30);
                plVar30 = unaff_x22;
                if (((ulong)plStack_130 & 1) != 0) goto LAB_1045b87ec;
                goto LAB_1045b99c8;
              }
              FUN_1045670a0(unaff_x27,unaff_x23,plVar20,plVar28);
              func_0x00010006c00c(plVar16,plStack_110);
              FUN_1045670a0(unaff_x27,unaff_x23,unaff_x20,plVar30);
              plVar14 = plStack_e8;
              func_0x00010006c00c(plStack_e0,plStack_f0);
              FUN_1045670a0(unaff_x27,unaff_x23,plVar20,plVar28);
              FUN_1045670a0(unaff_x27,unaff_x23,unaff_x20,plVar30);
              plVar15 = unaff_x27;
              plVar20 = unaff_x23;
LAB_1045b9560:
              FUN_104567140(plVar15,plVar20,unaff_x20,plVar30);
              plVar15 = plVar14;
              goto LAB_1045b87ec;
            }
LAB_1045b9920:
            FUN_1045670a0(unaff_x27,unaff_x23,plVar20,plVar28);
            func_0x00010006c00c(plVar16,plStack_110);
            FUN_1045670a0(unaff_x21,unaff_x22,unaff_x20,plVar30);
            func_0x00010006c00c(plStack_e0,unaff_x24);
            plStack_140 = unaff_x27;
            FUN_1045670a0(unaff_x27,unaff_x23,plVar20,plVar28);
            FUN_1045670a0(unaff_x21,unaff_x22,unaff_x20,plVar30);
            unaff_x19 = plVar20;
            plVar15 = unaff_x21;
            unaff_x28 = plVar16;
LAB_1045b99a8:
            FUN_104567140(plVar15,unaff_x22,unaff_x20,plVar30);
            plVar28 = unaff_x20;
            plVar30 = unaff_x22;
            unaff_x27 = plStack_140;
          }
LAB_1045b99c8:
          FUN_104567140(unaff_x27,unaff_x23,plStack_d8,uStack_114);
          unaff_x20 = plVar28;
          unaff_x21 = plVar15;
LAB_1045b99e0:
          FUN_104567140(unaff_x21,plStack_100,plStack_f8,uStack_118);
          func_0x00010006c090(plStack_e0,plStack_f0);
          plVar28 = (long *)(ulong)uStack_114;
          plVar20 = plStack_d8;
          unaff_x22 = plVar30;
          unaff_x24 = unaff_x23;
          plVar13 = unaff_x27;
          goto LAB_1045b9a0c;
        }
        if ((uVar9 >> 0x1c & 0xfffffc03) != 0 || (bVar3 & 0x3f) != 0) goto LAB_1045b9920;
        plStack_130 = (long *)0x0;
        if (((ulong)unaff_x23 & 0xff) != 1) {
          plStack_130 = unaff_x27;
        }
        uStack_148 = (ulong)unaff_x22 & 0xff;
        FUN_1045670a0(unaff_x27,unaff_x23,plVar20,plVar28);
        plVar13 = plStack_100;
        func_0x00010006c00c(plVar16,plVar15);
        unaff_x20 = plStack_f8;
        FUN_1045670a0(unaff_x21,plVar13,plStack_f8,plVar30);
        func_0x00010006c00c(plStack_e0,plStack_f0);
        FUN_1045670a0(unaff_x27,unaff_x23,plVar20,plVar28);
        FUN_1045670a0(unaff_x21,plVar13,unaff_x20,plVar30);
        plVar16 = unaff_x27;
        FUN_104567140(unaff_x27,unaff_x23,plVar20,plVar28);
        if (uStack_148 != 1) {
          if (plStack_130 == unaff_x21) goto LAB_1045b8804;
          goto LAB_1045b99e0;
        }
        if (plStack_130 != (long *)0x0) goto LAB_1045b99e0;
LAB_1045b8804:
        plVar30 = plStack_d8;
        plVar20 = plStack_e0;
        unaff_x22 = plStack_f0;
        plVar28 = plStack_f8;
        unaff_x24 = plStack_108;
        param_2 = plStack_110;
        plVar15 = plStack_128;
        uVar9 = (uint)((ulong)plStack_110 >> 0x20);
        uVar29 = uVar9 >> 0x1e;
        uVar10 = (uint)((ulong)plStack_f0 >> 0x20);
        uVar22 = uVar10 >> 0x1e;
        iVar23 = (int)plStack_108;
        if ((ulong)plStack_110 >> 0x3e != 3) {
          if (1 < uVar9 >> 0x1e) {
            if (uVar29 == 2) {
              uVar21 = plStack_108[3] - plStack_108[2];
              if (SBORROW8(plStack_108[3],plStack_108[2])) {
                    /* WARNING: Does not return */
                pcVar11 = (code *)SoftwareBreakpoint(1,0x1045b9bac);
                (*pcVar11)();
              }
            }
            else {
              uVar21 = 0;
            }
            goto joined_r0x0001045b8c64;
          }
          if (uVar29 == 0) {
            uVar21 = (ulong)plStack_110 >> 0x30 & 0xff;
          }
          else {
            iVar19 = (int)((ulong)plStack_108 >> 0x20);
            if (SBORROW4(iVar19,iVar23)) {
                    /* WARNING: Does not return */
              pcVar11 = (code *)SoftwareBreakpoint(1,0x1045b9ba8);
              (*pcVar11)();
            }
            uVar21 = (ulong)(iVar19 - iVar23);
          }
          if (1 < uVar10 >> 0x1e) goto LAB_1045b8978;
LAB_1045b8abc:
          if (uVar22 == 0) {
            uVar25 = (ulong)plStack_f0 >> 0x30 & 0xff;
          }
          else {
            iVar19 = (int)((ulong)plStack_e0 >> 0x20);
            if (SBORROW4(iVar19,(int)plStack_e0)) {
                    /* WARNING: Does not return */
              pcVar11 = (code *)SoftwareBreakpoint(1,0x1045b9ba4);
              (*pcVar11)();
            }
            uVar25 = (ulong)(iVar19 - (int)plStack_e0);
          }
LAB_1045b8adc:
          if (uVar21 != uVar25) {
LAB_1045b988c:
            FUN_104567140(unaff_x21,plStack_100,plStack_f8,uStack_118);
            func_0x00010006c090(plStack_e0,unaff_x22);
            FUN_104567140(unaff_x27,unaff_x23,plStack_d8,uStack_114);
            plVar16 = unaff_x24;
            plVar14 = unaff_x23;
            plVar13 = unaff_x27;
            goto LAB_1045b9a14;
          }
          if ((long)uVar21 < 1) {
LAB_1045b86a0:
            FUN_104567140(unaff_x21,plStack_100,plStack_f8,uStack_118);
            func_0x00010006c090(plStack_e0,unaff_x22);
            FUN_104567140(unaff_x27,unaff_x23,plStack_d8,uStack_114);
            plVar16 = unaff_x24;
            goto LAB_1045b86d8;
          }
          if (uVar29 < 2) {
            if (uVar29 == 0) {
              abStack_c0[0] = (byte)plStack_108;
              abStack_c0[1] = (byte)((ulong)plStack_108 >> 8);
              abStack_c0[2] = (byte)((ulong)plStack_108 >> 0x10);
              abStack_c0[3] = (byte)((ulong)plStack_108 >> 0x18);
              abStack_c0[4] = (byte)((ulong)plStack_108 >> 0x20);
              abStack_c0[5] = (byte)((ulong)plStack_108 >> 0x28);
              abStack_c0[6] = (byte)((ulong)plStack_108 >> 0x30);
              abStack_c0[7] = (byte)((ulong)plStack_108 >> 0x38);
              abStack_c0[8] = (byte)plStack_110;
              abStack_c0[9] = (byte)((ulong)plStack_110 >> 8);
              abStack_c0[10] = (byte)((ulong)plStack_110 >> 0x10);
              abStack_c0[0xb] = (byte)((ulong)plStack_110 >> 0x18);
              abStack_c0[0xc] = (byte)((ulong)plStack_110 >> 0x20);
              abStack_c0[0xd] = (byte)((ulong)plStack_110 >> 0x28);
              func_0x000100e25bdc(abStack_c9,abStack_c0,
                                  abStack_c0 + ((ulong)plStack_110 >> 0x30 & 0xff),plStack_e0,
                                  plStack_f0);
              plStack_128 = plVar15;
              FUN_104567140(unaff_x21,plStack_100,plVar28,uStack_118);
              func_0x00010006c090(plVar20,unaff_x22);
              FUN_104567140(unaff_x27,unaff_x23,plStack_d8,uStack_114);
              unaff_x24 = plStack_108;
              param_2 = plStack_110;
              plVar20 = unaff_x20;
              plVar16 = unaff_x21;
              goto LAB_1045b8d3c;
            }
            lVar24 = (long)iVar23;
            plVar15 = (long *)(((long)plStack_108 >> 0x20) - lVar24);
            plStack_140 = unaff_x27;
            if ((long)plStack_108 >> 0x20 < lVar24) {
                    /* WARNING: Does not return */
              pcVar11 = (code *)SoftwareBreakpoint(1,0x1045b9bb0);
              (*pcVar11)();
            }
            __s10Foundation13__DataStorageC6_bytesSvSgvg();
            if (plVar16 == (long *)0x0) {
              plStack_138 = unaff_x23;
              __s10Foundation13__DataStorageC7_lengthSivg();
              lVar24 = 0;
              lVar17 = 0;
              plVar16 = unaff_x27;
            }
            else {
              plVar28 = plVar16;
              plStack_138 = unaff_x23;
              __s10Foundation13__DataStorageC7_offsetSivg();
              if (SBORROW8(lVar24,(long)plVar28)) {
                    /* WARNING: Does not return */
                pcVar11 = (code *)SoftwareBreakpoint(1,0x1045b9bbc);
                (*pcVar11)();
              }
              lVar1 = (lVar24 - (long)plVar28) + (long)plVar16;
              __s10Foundation13__DataStorageC7_lengthSivg();
              if ((long)plVar15 <= (long)plVar28) {
                plVar28 = plVar15;
              }
              lVar24 = 0;
              if (lVar1 != 0) {
                lVar24 = lVar1;
              }
              lVar17 = 0;
              if (lVar1 != 0) {
                lVar17 = (long)plVar28 + lVar1;
              }
            }
            plVar15 = plStack_e0;
            unaff_x22 = plStack_f0;
            unaff_x21 = plStack_128;
            func_0x000100e25bdc(abStack_c0,lVar24,lVar17,plStack_e0,plStack_f0);
            plStack_128 = unaff_x21;
            FUN_104567140(plStack_e8,plStack_100,plStack_f8,uStack_118);
            func_0x00010006c090(plVar15,unaff_x22);
            FUN_104567140(plStack_140,plStack_138,plVar30,uStack_114);
            plVar14 = plStack_108;
            unaff_x20 = param_2;
            unaff_x27 = unaff_x23;
LAB_1045b924c:
            func_0x00010006c090(plVar14);
            unaff_x23 = unaff_x27;
            unaff_x24 = plVar30;
            unaff_x27 = plVar16;
            bVar2 = abStack_c0[0];
          }
          else {
            if (uVar29 == 2) {
              unaff_x20 = (long *)(ulong)uStack_114;
              lVar24 = plStack_108[2];
              lVar17 = plStack_108[3];
              plStack_138 = unaff_x23;
              __s10Foundation13__DataStorageC6_bytesSvSgvg();
              plVar28 = plVar16;
              plVar15 = plVar16;
              if (plVar16 != (long *)0x0) {
                __s10Foundation13__DataStorageC7_offsetSivg();
                if (SBORROW8(lVar24,(long)plVar28)) {
                    /* WARNING: Does not return */
                  pcVar11 = (code *)SoftwareBreakpoint(1,0x1045b9bb8);
                  (*pcVar11)();
                }
                plVar15 = (long *)((lVar24 - (long)plVar28) + (long)plVar16);
              }
              plVar20 = (long *)(lVar17 - lVar24);
              if (SBORROW8(lVar17,lVar24)) {
                    /* WARNING: Does not return */
                pcVar11 = (code *)SoftwareBreakpoint(1,0x1045b9bb4);
                (*pcVar11)();
              }
              __s10Foundation13__DataStorageC7_lengthSivg();
              plVar30 = plStack_d8;
              plVar16 = plStack_e0;
              plVar13 = plStack_f0;
              plVar14 = plStack_108;
              unaff_x21 = plStack_128;
              if (plVar15 == (long *)0x0) {
                lVar24 = 0;
              }
              else {
                if ((long)plVar20 <= (long)plVar28) {
                  plVar28 = plVar20;
                }
                lVar24 = (long)plVar28 + (long)plVar15;
              }
              func_0x000100e25bdc(abStack_c0,plVar15,lVar24,plStack_e0,plStack_f0);
              plStack_128 = unaff_x21;
              FUN_104567140(plStack_e8,plStack_100,plStack_f8,uStack_118);
              func_0x00010006c090(plVar16,plVar13);
              FUN_104567140(unaff_x27,plStack_138,plVar30,unaff_x20);
              unaff_x22 = plVar14;
              goto LAB_1045b924c;
            }
            abStack_c0[8] = 0;
            abStack_c0[9] = 0;
            abStack_c0[10] = 0;
            abStack_c0[0xb] = 0;
            abStack_c0[0xc] = 0;
            abStack_c0[0xd] = 0;
            abStack_c0[0] = 0;
            abStack_c0[1] = 0;
            abStack_c0[2] = 0;
            abStack_c0[3] = 0;
            abStack_c0[4] = 0;
            abStack_c0[5] = 0;
            abStack_c0[6] = 0;
            abStack_c0[7] = 0;
            plStack_138 = unaff_x23;
            func_0x000100e25bdc(abStack_c9,abStack_c0,abStack_c0,plStack_e0,plStack_f0);
            plStack_128 = plVar15;
            FUN_104567140(plStack_e8,plStack_100,plStack_f8,uStack_118);
            func_0x00010006c090(plVar20,unaff_x22);
            FUN_104567140(unaff_x27,plStack_138,plStack_d8,uStack_114);
            plVar16 = unaff_x24;
LAB_1045b8d3c:
            func_0x00010006c090(unaff_x24);
            unaff_x20 = plVar20;
            unaff_x21 = plVar15;
            unaff_x24 = plVar16;
            bVar2 = abStack_c9[0];
          }
          if ((bVar2 & 1) != 0) goto LAB_1045b86dc;
          goto LAB_1045b9a18;
        }
        uVar21 = 0;
        if ((((plStack_108 != (long *)0x0) || (plStack_110 != (long *)0xc000000000000000)) ||
            ((ulong)plStack_f0 >> 0x3e < 3)) ||
           ((uVar21 = 0, plStack_e0 != (long *)0x0 || (plStack_f0 != (long *)0xc000000000000000))))
        {
joined_r0x0001045b8c64:
          if (uVar22 < 2) goto LAB_1045b8abc;
LAB_1045b8978:
          if (uVar22 == 2) {
            uVar25 = plStack_e0[3] - plStack_e0[2];
            if (SBORROW8(plStack_e0[3],plStack_e0[2])) {
                    /* WARNING: Does not return */
              pcVar11 = (code *)SoftwareBreakpoint(1,0x1045b9ba0);
              (*pcVar11)();
            }
            goto LAB_1045b8adc;
          }
          if (uVar21 == 0) goto LAB_1045b86a0;
          goto LAB_1045b988c;
        }
        FUN_104567140(unaff_x21,plStack_100,plStack_f8,uStack_118);
        func_0x00010006c090(0,0xc000000000000000);
        FUN_104567140(unaff_x27,unaff_x23,plStack_d8,uStack_114);
        param_2 = (long *)0xc000000000000000;
        plVar16 = (long *)0x0;
LAB_1045b86d8:
        func_0x00010006c090(plVar16);
LAB_1045b86dc:
        unaff_x28 = unaff_x28 + 6;
        unaff_x19 = unaff_x19 + 6;
        lVar24 = lStack_120 + -1;
      } while (lVar24 != 0);
    }
    plVar16 = (long *)0x1;
  }
  else {
LAB_1045b9a18:
    plVar16 = (long *)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return plVar16;
  }
  ___stack_chk_fail();
  lVar24 = plVar16[2];
  if (lVar24 != param_2[2]) {
    return (long *)0x0;
  }
  if ((lVar24 == 0) || (plVar16 == param_2)) {
    return (long *)0x1;
  }
  pcStack_158 = FUN_1045b9c00;
  plVar15 = plVar16 + 4;
  param_2 = param_2 + 4;
  plStack_1a0 = unaff_x28;
  plStack_198 = unaff_x27;
  plStack_190 = unaff_x24;
  plStack_188 = unaff_x23;
  plStack_180 = unaff_x22;
  plStack_178 = unaff_x21;
  plStack_170 = unaff_x20;
  plStack_168 = unaff_x19;
  puStack_160 = &stack0xfffffffffffffff0;
  while( true ) {
    lVar24 = lVar24 + -1;
    uStack_258 = plVar15[9];
    uStack_260 = plVar15[8];
    lStack_248 = plVar15[0xb];
    uStack_250 = plVar15[10];
    lStack_238 = plVar15[0xd];
    uStack_240 = plVar15[0xc];
    lStack_228 = plVar15[0xf];
    uStack_230 = plVar15[0xe];
    lStack_298 = plVar15[1];
    lStack_2a0 = *plVar15;
    uStack_288 = plVar15[3];
    lStack_290 = plVar15[2];
    lStack_278 = plVar15[5];
    uVar21 = plVar15[4];
    lStack_268 = plVar15[7];
    uStack_270 = plVar15[6];
    lStack_218 = param_2[1];
    lStack_220 = *param_2;
    uStack_208 = param_2[3];
    lStack_210 = param_2[2];
    lStack_1f8 = param_2[5];
    uStack_200 = param_2[4];
    lStack_1e8 = param_2[7];
    uStack_1f0 = param_2[6];
    lStack_1d8 = param_2[9];
    uStack_1e0 = param_2[8];
    lStack_1c8 = param_2[0xb];
    uStack_1d0 = param_2[10];
    lStack_1b8 = param_2[0xd];
    uStack_1c0 = param_2[0xc];
    lStack_1a8 = param_2[0xf];
    lStack_1b0 = param_2[0xe];
    uStack_280 = uVar21;
    if ((char)lStack_218 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x0001045b9cac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10dd19b30)[lStack_220] * 4 + 0x1045b9cb0))();
      return plVar16;
    }
    if (lStack_2a0 != lStack_220) {
      return (long *)0x0;
    }
    if ((char)uStack_208 == '\x01') {
      if (lStack_210 < 2) {
        if (lStack_210 == 0) {
          if (lStack_290 != 0) {
            return (long *)0x0;
          }
        }
        else if (lStack_290 != 1) {
          return (long *)0x0;
        }
      }
      else if (lStack_210 == 2) {
        if (lStack_290 != 2) {
          return (long *)0x0;
        }
      }
      else if (lStack_290 != 3) {
        return (long *)0x0;
      }
    }
    else if (lStack_290 != lStack_210) {
      return (long *)0x0;
    }
    uStack_288._4_4_ = (int)((ulong)uStack_288 >> 0x20);
    uStack_208._4_4_ = (int)((ulong)uStack_208 >> 0x20);
    if (uStack_288._4_4_ != uStack_208._4_4_) {
      return (long *)0x0;
    }
    if (((uVar21 != uStack_200) || (lStack_278 != lStack_1f8)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar21 & 1) == 0)) {
      return (long *)0x0;
    }
    if (((uStack_270 != uStack_1f0) || (lStack_268 != lStack_1e8)) &&
       (uVar21 = uStack_270,
       __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
       , (uVar21 & 1) == 0)) {
      return (long *)0x0;
    }
    lVar17 = lStack_1d8;
    uVar21 = uStack_258;
    if ((int)uStack_260 != (int)uStack_1e0) {
      return (long *)0x0;
    }
    if (uStack_260._4_1_ != uStack_1e0._4_1_) {
      return (long *)0x0;
    }
    func_0x000104603ae4(&lStack_2a0,auStack_320);
    func_0x000104603ae4(&lStack_220,auStack_320);
    FUN_1045b79ac(uVar21,lVar17);
    if (((uVar21 & 1) == 0) ||
       ((((uStack_250 != uStack_1d0 || (lStack_248 != lStack_1c8)) &&
         (uVar21 = uStack_250,
         __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                   (), (uVar21 & 1) == 0)) ||
        (((uStack_240 != uStack_1c0 || (lStack_238 != lStack_1b8)) &&
         (uVar21 = uStack_240,
         __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                   (), (uVar21 & 1) == 0)))))) {
      func_0x000104603b20(&lStack_220);
      func_0x000104603b20(&lStack_2a0);
      return (long *)0x0;
    }
    uVar21 = uStack_230;
    func_0x000100e25fcc(uStack_230,lStack_228,lStack_1b0,lStack_1a8);
    func_0x000104603b20(&lStack_220);
    plVar16 = &lStack_2a0;
    func_0x000104603b20(plVar16);
    if ((uVar21 & 1) == 0) {
      return (long *)0x0;
    }
    if (lVar24 == 0) break;
    plVar15 = plVar15 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return (long *)0x1;
}



/* Entry: 1045b9c00; end: 1045b9f63;  */

long * FUN_1045b9c00(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined1 auStack_1d0 [128];
  long lStack_150;
  long lStack_148;
  long lStack_140;
  undefined8 uStack_138;
  ulong uStack_130;
  long lStack_128;
  ulong uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  long lStack_f8;
  ulong uStack_f0;
  long lStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  ulong uStack_80;
  long lStack_78;
  ulong uStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1[2];
  if (lVar2 != param_2[2]) {
    return (long *)0x0;
  }
  if ((lVar2 == 0) || (param_1 == param_2)) {
    return (long *)0x1;
  }
  plVar3 = param_1 + 4;
  param_2 = param_2 + 4;
  while( true ) {
    lVar2 = lVar2 + -1;
    uStack_108 = plVar3[9];
    uStack_110 = plVar3[8];
    lStack_f8 = plVar3[0xb];
    uStack_100 = plVar3[10];
    lStack_e8 = plVar3[0xd];
    uStack_f0 = plVar3[0xc];
    lStack_d8 = plVar3[0xf];
    uStack_e0 = plVar3[0xe];
    lStack_148 = plVar3[1];
    lStack_150 = *plVar3;
    uStack_138 = plVar3[3];
    lStack_140 = plVar3[2];
    lStack_128 = plVar3[5];
    uVar4 = plVar3[4];
    lStack_118 = plVar3[7];
    uStack_120 = plVar3[6];
    lStack_c8 = param_2[1];
    lStack_d0 = *param_2;
    uStack_b8 = param_2[3];
    lStack_c0 = param_2[2];
    lStack_a8 = param_2[5];
    uStack_b0 = param_2[4];
    lStack_98 = param_2[7];
    uStack_a0 = param_2[6];
    lStack_88 = param_2[9];
    uStack_90 = param_2[8];
    lStack_78 = param_2[0xb];
    uStack_80 = param_2[10];
    lStack_68 = param_2[0xd];
    uStack_70 = param_2[0xc];
    lStack_58 = param_2[0xf];
    lStack_60 = param_2[0xe];
    uStack_130 = uVar4;
    if ((char)lStack_c8 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x0001045b9cac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10dd19b30)[lStack_d0] * 4 + 0x1045b9cb0))();
      return param_1;
    }
    if (lStack_150 != lStack_d0) {
      return (long *)0x0;
    }
    if ((char)uStack_b8 == '\x01') {
      if (lStack_c0 < 2) {
        if (lStack_c0 == 0) {
          if (lStack_140 != 0) {
            return (long *)0x0;
          }
        }
        else if (lStack_140 != 1) {
          return (long *)0x0;
        }
      }
      else if (lStack_c0 == 2) {
        if (lStack_140 != 2) {
          return (long *)0x0;
        }
      }
      else if (lStack_140 != 3) {
        return (long *)0x0;
      }
    }
    else if (lStack_140 != lStack_c0) {
      return (long *)0x0;
    }
    uStack_138._4_4_ = (int)((ulong)uStack_138 >> 0x20);
    uStack_b8._4_4_ = (int)((ulong)uStack_b8 >> 0x20);
    if (uStack_138._4_4_ != uStack_b8._4_4_) {
      return (long *)0x0;
    }
    if (((uVar4 != uStack_b0) || (lStack_128 != lStack_a8)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar4 & 1) == 0)) {
      return (long *)0x0;
    }
    if (((uStack_120 != uStack_a0) || (lStack_118 != lStack_98)) &&
       (uVar4 = uStack_120,
       __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
       , (uVar4 & 1) == 0)) {
      return (long *)0x0;
    }
    lVar1 = lStack_88;
    uVar4 = uStack_108;
    if ((int)uStack_110 != (int)uStack_90) {
      return (long *)0x0;
    }
    if (uStack_110._4_1_ != uStack_90._4_1_) {
      return (long *)0x0;
    }
    func_0x000104603ae4(&lStack_150,auStack_1d0);
    func_0x000104603ae4(&lStack_d0,auStack_1d0);
    FUN_1045b79ac(uVar4,lVar1);
    if (((uVar4 & 1) == 0) ||
       ((((uStack_100 != uStack_80 || (lStack_f8 != lStack_78)) &&
         (uVar4 = uStack_100,
         __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                   (), (uVar4 & 1) == 0)) ||
        (((uStack_f0 != uStack_70 || (lStack_e8 != lStack_68)) &&
         (uVar4 = uStack_f0,
         __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                   (), (uVar4 & 1) == 0)))))) {
      func_0x000104603b20(&lStack_d0);
      func_0x000104603b20(&lStack_150);
      return (long *)0x0;
    }
    uVar4 = uStack_e0;
    func_0x000100e25fcc(uStack_e0,lStack_d8,lStack_60,lStack_58);
    func_0x000104603b20(&lStack_d0);
    param_1 = &lStack_150;
    func_0x000104603b20(param_1);
    if ((uVar4 & 1) == 0) {
      return (long *)0x0;
    }
    if (lVar2 == 0) break;
    plVar3 = plVar3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return (long *)0x1;
}



/* Entry: 1045b9f64; end: 1045ba583;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_1045b9f64(long *param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  int iVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  int iVar16;
  long *unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  long lVar17;
  long *unaff_x22;
  ulong *puVar18;
  long *unaff_x23;
  long *plVar19;
  ulong *puVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  long *unaff_x27;
  long *plVar24;
  long unaff_x28;
  undefined1 auStack_288 [120];
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  long lStack_110;
  long *plStack_108;
  long *plStack_100;
  long *plStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  ulong uStack_e0;
  long *plStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  long *plStack_c0;
  ulong uStack_b8;
  long *plStack_b0;
  long lStack_a8;
  long lStack_a0;
  long *plStack_98;
  long *plStack_90;
  byte bStack_81;
  byte abStack_80 [24];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar21 = (long *)param_1[2];
  if (plVar21 == (long *)param_2[2]) {
    if ((plVar21 != (long *)0x0) && (param_1 != param_2)) {
      plStack_b0 = (long *)0x0;
      unaff_x22 = param_2 + 9;
      unaff_x23 = param_1 + 5;
      do {
        uVar13 = unaff_x23[-1];
        plVar6 = (long *)*unaff_x23;
        lStack_a0 = CONCAT44(lStack_a0._4_4_,*(uint *)(unaff_x23 + 1));
        plStack_98 = (long *)unaff_x23[2];
        plStack_90 = (long *)unaff_x23[3];
        unaff_x19 = (long *)unaff_x23[4];
        unaff_x20 = unaff_x22[-4];
        uVar2 = *(uint *)(unaff_x22 + -3);
        unaff_x21 = (long *)(ulong)uVar2;
        unaff_x28 = unaff_x22[-2];
        lVar11 = unaff_x22[-1];
        plVar23 = (long *)*unaff_x22;
        if ((uVar13 == unaff_x22[-5]) && (plVar6 == (long *)unaff_x20)) {
          if (*(uint *)(unaff_x23 + 1) != uVar2) goto LAB_1045ba524;
        }
        else {
          param_2 = plVar6;
          lStack_a8 = unaff_x28;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          plVar8 = (long *)0x0;
          plVar7 = plVar23;
          plVar24 = plVar21;
          plVar19 = unaff_x22;
          plVar22 = unaff_x19;
          if (((uVar13 & 1) == 0) ||
             (plVar7 = unaff_x19, plVar24 = unaff_x22, plVar19 = unaff_x23, plVar22 = plVar21,
             unaff_x27 = unaff_x23, unaff_x28 = lStack_a8, (uint)lStack_a0 != uVar2))
          goto LAB_1045ba528;
        }
        lStack_a0 = (long)plVar6;
        _swift_bridgeObjectRetain(plVar6);
        unaff_x21 = plStack_98;
        _swift_bridgeObjectRetain(plStack_98);
        func_0x00010006c00c(plStack_90,unaff_x19);
        _swift_bridgeObjectRetain(unaff_x20);
        _swift_bridgeObjectRetain(unaff_x28);
        func_0x00010006c00c(lVar11,plVar23);
        plVar24 = unaff_x21;
        FUN_1045b79ac(unaff_x21,unaff_x28);
        plVar7 = plStack_90;
        plVar6 = plStack_b0;
        param_2 = unaff_x19;
        if (((ulong)plVar24 & 1) == 0) {
LAB_1045ba4ec:
          _swift_bridgeObjectRelease(unaff_x28);
          _swift_bridgeObjectRelease(unaff_x20);
          func_0x00010006c090(lVar11,plVar23);
          _swift_bridgeObjectRelease(plStack_98);
          _swift_bridgeObjectRelease(lStack_a0);
          func_0x00010006c090(plStack_90);
          goto LAB_1045ba524;
        }
        uVar2 = (uint)((ulong)unaff_x19 >> 0x20);
        uVar10 = uVar2 >> 0x1e;
        uVar3 = (uint)((ulong)plVar23 >> 0x20);
        uVar14 = uVar3 >> 0x1e;
        iVar16 = (int)plStack_90;
        if ((ulong)unaff_x19 >> 0x3e == 3) {
          uVar13 = 0;
          if ((((plStack_90 != (long *)0x0) || (unaff_x19 != (long *)0xc000000000000000)) ||
              ((ulong)plVar23 >> 0x3e < 3)) ||
             ((uVar13 = 0, lVar11 != 0 || (plVar23 != (long *)0xc000000000000000))))
          goto joined_r0x0001045ba198;
          _swift_bridgeObjectRelease(unaff_x28);
          _swift_bridgeObjectRelease(unaff_x20);
          func_0x00010006c090(0,0xc000000000000000);
          _swift_bridgeObjectRelease(plStack_98);
          _swift_bridgeObjectRelease(lStack_a0);
          plVar6 = (long *)0x0;
          param_2 = (long *)0xc000000000000000;
LAB_1045b9ff8:
          func_0x00010006c090(plVar6);
        }
        else {
          if (1 < uVar2 >> 0x1e) {
            if (uVar10 == 2) {
              uVar13 = plStack_90[3] - plStack_90[2];
              if (SBORROW8(plStack_90[3],plStack_90[2])) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x1045ba570);
                (*pcVar5)();
              }
              goto joined_r0x0001045ba198;
            }
            uVar13 = 0;
            if (uVar14 < 2) goto LAB_1045ba1d4;
LAB_1045ba19c:
            if (uVar14 == 2) {
              uVar15 = *(long *)(lVar11 + 0x18) - *(long *)(lVar11 + 0x10);
              if (SBORROW8(*(long *)(lVar11 + 0x18),*(long *)(lVar11 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x1045ba564);
                (*pcVar5)();
              }
              goto LAB_1045ba1f0;
            }
            if (uVar13 != 0) goto LAB_1045ba4ec;
LAB_1045b9fc4:
            _swift_bridgeObjectRelease(unaff_x28);
            _swift_bridgeObjectRelease(unaff_x20);
            func_0x00010006c090(lVar11,plVar23);
            _swift_bridgeObjectRelease(plStack_98);
            _swift_bridgeObjectRelease(lStack_a0);
            plVar6 = plStack_90;
            goto LAB_1045b9ff8;
          }
          if (uVar10 == 0) {
            uVar13 = (ulong)unaff_x19 >> 0x30 & 0xff;
          }
          else {
            iVar12 = (int)((ulong)plStack_90 >> 0x20);
            if (SBORROW4(iVar12,iVar16)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x1045ba56c);
              (*pcVar5)();
            }
            uVar13 = (ulong)(iVar12 - iVar16);
          }
joined_r0x0001045ba198:
          if (1 < uVar3 >> 0x1e) goto LAB_1045ba19c;
LAB_1045ba1d4:
          if (uVar14 == 0) {
            uVar15 = (ulong)plVar23 >> 0x30 & 0xff;
          }
          else {
            iVar12 = (int)((ulong)lVar11 >> 0x20);
            if (SBORROW4(iVar12,(int)lVar11)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x1045ba568);
              (*pcVar5)();
            }
            uVar15 = (ulong)(iVar12 - (int)lVar11);
          }
LAB_1045ba1f0:
          if (uVar13 != uVar15) goto LAB_1045ba4ec;
          if ((long)uVar13 < 1) goto LAB_1045b9fc4;
          lStack_a8 = unaff_x28;
          if (uVar10 < 2) {
            if (uVar10 == 0) {
              abStack_80[0] = (byte)plStack_90;
              abStack_80[1] = (byte)((ulong)plStack_90 >> 8);
              abStack_80[2] = (byte)((ulong)plStack_90 >> 0x10);
              abStack_80[3] = (byte)((ulong)plStack_90 >> 0x18);
              abStack_80[4] = (byte)((ulong)plStack_90 >> 0x20);
              abStack_80[5] = (byte)((ulong)plStack_90 >> 0x28);
              abStack_80[6] = (byte)((ulong)plStack_90 >> 0x30);
              abStack_80[7] = (byte)((ulong)plStack_90 >> 0x38);
              abStack_80[8] = (byte)unaff_x19;
              abStack_80[9] = (byte)((ulong)unaff_x19 >> 8);
              abStack_80[10] = (byte)((ulong)unaff_x19 >> 0x10);
              abStack_80[0xb] = (byte)((ulong)unaff_x19 >> 0x18);
              abStack_80[0xc] = (byte)((ulong)unaff_x19 >> 0x20);
              abStack_80[0xd] = (byte)((ulong)unaff_x19 >> 0x28);
              func_0x000100e25bdc(&bStack_81,abStack_80,
                                  abStack_80 + ((ulong)unaff_x19 >> 0x30 & 0xff),lVar11,plVar23);
              plStack_b0 = plVar6;
              _swift_bridgeObjectRelease(lStack_a8);
              _swift_bridgeObjectRelease(unaff_x20);
              func_0x00010006c090(lVar11,plVar23);
              _swift_bridgeObjectRelease(plStack_98);
              _swift_bridgeObjectRelease(lStack_a0);
              unaff_x27 = plVar7;
              goto LAB_1045ba40c;
            }
            lVar17 = (long)iVar16;
            plStack_c0 = (long *)(((long)plStack_90 >> 0x20) - lVar17);
            if ((long)plStack_90 >> 0x20 < lVar17) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x1045ba574);
              uStack_b8 = unaff_x20;
              (*pcVar5)();
            }
            uStack_b8 = unaff_x20;
            __s10Foundation13__DataStorageC6_bytesSvSgvg();
            if (plVar24 == (long *)0x0) {
              __s10Foundation13__DataStorageC7_lengthSivg();
              lVar17 = 0;
              lVar9 = 0;
              plVar24 = unaff_x27;
            }
            else {
              plVar6 = plVar24;
              __s10Foundation13__DataStorageC7_offsetSivg();
              if (SBORROW8(lVar17,(long)plVar6)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x1045ba580);
                (*pcVar5)();
              }
              lVar1 = (lVar17 - (long)plVar6) + (long)plVar24;
              __s10Foundation13__DataStorageC7_lengthSivg();
              if ((long)plStack_c0 <= (long)plVar6) {
                plVar6 = plStack_c0;
              }
              lVar17 = 0;
              if (lVar1 != 0) {
                lVar17 = lVar1;
              }
              lVar9 = 0;
              if (lVar1 != 0) {
                lVar9 = (long)plVar6 + lVar1;
              }
            }
            unaff_x21 = plStack_b0;
            func_0x000100e25bdc(abStack_80,lVar17,lVar9,lVar11,plVar23);
            plStack_b0 = unaff_x21;
            _swift_bridgeObjectRelease(lStack_a8);
            uVar13 = uStack_b8;
            unaff_x20 = (ulong)unaff_x19 & 0x3fffffffffffffff;
            lVar17 = unaff_x28;
LAB_1045ba4ac:
            _swift_bridgeObjectRelease(uVar13);
            func_0x00010006c090(lVar11,plVar23);
            _swift_bridgeObjectRelease(plStack_98);
            _swift_bridgeObjectRelease(lStack_a0);
            func_0x00010006c090(plStack_90);
            unaff_x27 = plVar24;
            unaff_x28 = lVar17;
            bVar4 = abStack_80[0];
          }
          else {
            if (uVar10 == 2) {
              lVar17 = plStack_90[2];
              lVar9 = plStack_90[3];
              uStack_b8 = unaff_x20;
              __s10Foundation13__DataStorageC6_bytesSvSgvg();
              plVar6 = plVar24;
              if (plVar24 == (long *)0x0) {
                lVar1 = 0;
              }
              else {
                __s10Foundation13__DataStorageC7_offsetSivg();
                if (SBORROW8(lVar17,(long)plVar6)) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x1045ba57c);
                  (*pcVar5)();
                }
                lVar1 = (lVar17 - (long)plVar6) + (long)plVar24;
              }
              if (SBORROW8(lVar9,lVar17)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x1045ba578);
                (*pcVar5)();
              }
              plVar24 = (long *)(lVar9 - lVar17);
              __s10Foundation13__DataStorageC7_lengthSivg();
              unaff_x21 = plStack_b0;
              uVar13 = uStack_b8;
              if (lVar1 == 0) {
                lVar9 = 0;
              }
              else {
                if ((long)plVar24 <= (long)plVar6) {
                  plVar6 = plVar24;
                }
                lVar9 = (long)plVar6 + lVar1;
              }
              func_0x000100e25bdc(abStack_80,lVar1,lVar9,lVar11,plVar23);
              plStack_b0 = unaff_x21;
              _swift_bridgeObjectRelease(lStack_a8);
              unaff_x20 = uVar13;
              goto LAB_1045ba4ac;
            }
            abStack_80[8] = 0;
            abStack_80[9] = 0;
            abStack_80[10] = 0;
            abStack_80[0xb] = 0;
            abStack_80[0xc] = 0;
            abStack_80[0xd] = 0;
            abStack_80[0] = 0;
            abStack_80[1] = 0;
            abStack_80[2] = 0;
            abStack_80[3] = 0;
            abStack_80[4] = 0;
            abStack_80[5] = 0;
            abStack_80[6] = 0;
            abStack_80[7] = 0;
            func_0x000100e25bdc(&bStack_81,abStack_80,abStack_80,lVar11,plVar23);
            plStack_b0 = plVar6;
            _swift_bridgeObjectRelease(lStack_a8);
            _swift_bridgeObjectRelease(unaff_x20);
            func_0x00010006c090(lVar11,plVar23);
            _swift_bridgeObjectRelease(plStack_98);
            _swift_bridgeObjectRelease(lStack_a0);
            plVar7 = plStack_90;
LAB_1045ba40c:
            func_0x00010006c090(plVar7);
            unaff_x21 = plVar6;
            bVar4 = bStack_81;
          }
          if ((bVar4 & 1) == 0) goto LAB_1045ba524;
        }
        unaff_x22 = unaff_x22 + 6;
        unaff_x23 = unaff_x23 + 6;
        plVar21 = (long *)((long)plVar21 + -1);
      } while (plVar21 != (long *)0x0);
    }
    plVar8 = (long *)0x1;
    plVar7 = unaff_x19;
    plVar24 = unaff_x22;
    plVar19 = unaff_x23;
    plVar22 = plVar21;
    unaff_x23 = unaff_x27;
  }
  else {
LAB_1045ba524:
    plVar8 = (long *)0x0;
    plVar7 = unaff_x19;
    plVar24 = unaff_x22;
    plVar19 = unaff_x23;
    plVar22 = plVar21;
    unaff_x23 = unaff_x27;
  }
LAB_1045ba528:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return plVar8;
  }
  ___stack_chk_fail();
  lVar11 = plVar8[2];
  if (lVar11 != param_2[2]) {
    return (long *)0x0;
  }
  if ((lVar11 == 0) || (plVar8 == param_2)) {
    return (long *)0x1;
  }
  pcStack_c8 = FUN_1045ba584;
  puVar18 = (ulong *)(plVar8 + 4);
  puVar20 = (ulong *)(param_2 + 4);
  lStack_110 = unaff_x28;
  plStack_108 = unaff_x23;
  plStack_100 = plVar22;
  plStack_f8 = plVar19;
  plStack_f0 = plVar24;
  plStack_e8 = unaff_x21;
  uStack_e0 = unaff_x20;
  plStack_d8 = plVar7;
  puStack_d0 = &stack0xfffffffffffffff0;
  while( true ) {
    lVar11 = lVar11 + -1;
    uStack_1c8 = puVar18[9];
    uStack_1d0 = puVar18[8];
    uStack_1b8 = puVar18[0xb];
    uStack_1c0 = puVar18[10];
    uStack_1a8 = puVar18[0xd];
    uStack_1b0 = puVar18[0xc];
    uStack_1a0 = puVar18[0xe];
    uStack_208 = puVar18[1];
    uVar13 = *puVar18;
    uStack_1f8 = puVar18[3];
    uStack_200 = puVar18[2];
    uStack_1e8 = puVar18[5];
    uStack_1f0 = puVar18[4];
    uStack_1d8 = puVar18[7];
    uStack_1e0 = puVar18[6];
    uStack_188 = puVar20[1];
    uStack_190 = *puVar20;
    uStack_178 = puVar20[3];
    uStack_180 = puVar20[2];
    uStack_168 = puVar20[5];
    uStack_170 = puVar20[4];
    uStack_158 = puVar20[7];
    uStack_160 = puVar20[6];
    uStack_148 = puVar20[9];
    uStack_150 = puVar20[8];
    uStack_138 = puVar20[0xb];
    uStack_140 = puVar20[10];
    uStack_128 = puVar20[0xd];
    uStack_130 = puVar20[0xc];
    uStack_120 = puVar20[0xe];
    uStack_210 = uVar13;
    if (((uVar13 != uStack_190) || (uStack_208 != uStack_188)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar13 & 1) == 0)) {
      return (long *)0x0;
    }
    if (((uStack_200 != uStack_180) || (uStack_1f8 != uStack_178)) &&
       (uVar13 = uStack_200,
       __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
       , (uVar13 & 1) == 0)) {
      return (long *)0x0;
    }
    if ((char)uStack_1f0 != (char)uStack_170) {
      return (long *)0x0;
    }
    if (((uStack_1e8 != uStack_168) || (uStack_1e0 != uStack_160)) &&
       (uVar13 = uStack_1e8,
       __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
       , (uVar13 & 1) == 0)) {
      return (long *)0x0;
    }
    uVar15 = uStack_150;
    uVar13 = uStack_1d0;
    if ((char)uStack_1d8 != (char)uStack_158) {
      return (long *)0x0;
    }
    func_0x0001046043f4(&uStack_210,auStack_288);
    func_0x0001046043f4(&uStack_190,auStack_288);
    FUN_1045b79ac(uVar13,uVar15);
    if ((uVar13 & 1) == 0) break;
    if ((char)uStack_140 == '\x01') {
      if (uStack_148 == 0) {
        if (uStack_1c8 != 0) break;
      }
      else if (uStack_148 == 1) {
        if (uStack_1c8 != 1) break;
      }
      else if (uStack_1c8 != 2) break;
    }
    else if (uStack_1c8 != uStack_148) break;
    if (((uStack_1b8 != uStack_138) || (uStack_1b0 != uStack_130)) &&
       (uVar13 = uStack_1b8,
       __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
       , (uVar13 & 1) == 0)) break;
    uVar13 = uStack_1a8;
    func_0x000100e25fcc(uStack_1a8,uStack_1a0,uStack_128,uStack_120);
    func_0x000104604430(&uStack_190);
    func_0x000104604430(&uStack_210);
    if ((uVar13 & 1) == 0) {
      return (long *)0x0;
    }
    if (lVar11 == 0) {
      return (long *)0x1;
    }
    puVar18 = puVar18 + 0xf;
    puVar20 = puVar20 + 0xf;
  }
  func_0x000104604430(&uStack_190);
  func_0x000104604430(&uStack_210);
  return (long *)0x0;
}



/* Entry: 1045ba584; end: 1045ba7c3;  */

undefined8 FUN_1045ba584(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  undefined1 auStack_1c8 [120];
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != *(long *)(param_2 + 0x10)) {
    return 0;
  }
  if ((lVar2 == 0) || (param_1 == param_2)) {
    return 1;
  }
  puVar3 = (ulong *)(param_1 + 0x20);
  puVar4 = (ulong *)(param_2 + 0x20);
  while( true ) {
    lVar2 = lVar2 + -1;
    uStack_108 = puVar3[9];
    uStack_110 = puVar3[8];
    uStack_f8 = puVar3[0xb];
    uStack_100 = puVar3[10];
    uStack_e8 = puVar3[0xd];
    uStack_f0 = puVar3[0xc];
    uStack_e0 = puVar3[0xe];
    uStack_148 = puVar3[1];
    uVar5 = *puVar3;
    uStack_138 = puVar3[3];
    uStack_140 = puVar3[2];
    uStack_128 = puVar3[5];
    uStack_130 = puVar3[4];
    uStack_118 = puVar3[7];
    uStack_120 = puVar3[6];
    uStack_c8 = puVar4[1];
    uStack_d0 = *puVar4;
    uStack_b8 = puVar4[3];
    uStack_c0 = puVar4[2];
    uStack_a8 = puVar4[5];
    uStack_b0 = puVar4[4];
    uStack_98 = puVar4[7];
    uStack_a0 = puVar4[6];
    uStack_88 = puVar4[9];
    uStack_90 = puVar4[8];
    uStack_78 = puVar4[0xb];
    uStack_80 = puVar4[10];
    uStack_68 = puVar4[0xd];
    uStack_70 = puVar4[0xc];
    uStack_60 = puVar4[0xe];
    uStack_150 = uVar5;
    if (((uVar5 != uStack_d0) || (uStack_148 != uStack_c8)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar5 & 1) == 0)) {
      return 0;
    }
    if (((uStack_140 != uStack_c0) || (uStack_138 != uStack_b8)) &&
       (uVar5 = uStack_140,
       __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
       , (uVar5 & 1) == 0)) {
      return 0;
    }
    if ((char)uStack_130 != (char)uStack_b0) {
      return 0;
    }
    if (((uStack_128 != uStack_a8) || (uStack_120 != uStack_a0)) &&
       (uVar5 = uStack_128,
       __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
       , (uVar5 & 1) == 0)) {
      return 0;
    }
    uVar1 = uStack_90;
    uVar5 = uStack_110;
    if ((char)uStack_118 != (char)uStack_98) {
      return 0;
    }
    func_0x0001046043f4(&uStack_150,auStack_1c8);
    func_0x0001046043f4(&uStack_d0,auStack_1c8);
    FUN_1045b79ac(uVar5,uVar1);
    if ((uVar5 & 1) == 0) break;
    if ((char)uStack_80 == '\x01') {
      if (uStack_88 == 0) {
        if (uStack_108 != 0) break;
      }
      else if (uStack_88 == 1) {
        if (uStack_108 != 1) break;
      }
      else if (uStack_108 != 2) break;
    }
    else if (uStack_108 != uStack_88) break;
    if (((uStack_f8 != uStack_78) || (uStack_f0 != uStack_70)) &&
       (uVar5 = uStack_f8,
       __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
       , (uVar5 & 1) == 0)) break;
    uVar5 = uStack_e8;
    func_0x000100e25fcc(uStack_e8,uStack_e0,uStack_68,uStack_60);
    func_0x000104604430(&uStack_d0);
    func_0x000104604430(&uStack_150);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    if (lVar2 == 0) {
      return 1;
    }
    puVar3 = puVar3 + 0xf;
    puVar4 = puVar4 + 0xf;
  }
  func_0x000104604430(&uStack_d0);
  func_0x000104604430(&uStack_150);
  return 0;
}



/* Entry: 1045ba7c4; end: 1045bb347;  */

byte * FUN_1045ba7c4(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  code *pcVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  long *plVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  byte *unaff_x19;
  byte *unaff_x20;
  byte *unaff_x21;
  long lVar18;
  int iVar19;
  byte *unaff_x22;
  byte *unaff_x23;
  byte *pbVar20;
  ulong unaff_x25;
  byte *unaff_x26;
  ulong *unaff_x27;
  byte *pbVar21;
  byte *unaff_x28;
  long lVar22;
  undefined1 auStack_300 [112];
  long lStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  undefined1 uStack_238;
  undefined7 uStack_237;
  undefined1 uStack_230;
  undefined8 uStack_22f;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  undefined1 uStack_1c8;
  undefined7 uStack_1c7;
  undefined1 uStack_1c0;
  undefined8 uStack_1bf;
  byte *pbStack_1b0;
  byte *pbStack_1a8;
  byte *pbStack_1a0;
  byte *pbStack_198;
  byte *pbStack_190;
  byte *pbStack_188;
  undefined1 **ppuStack_180;
  code *pcStack_178;
  byte *pbStack_168;
  byte *pbStack_160;
  byte *pbStack_158;
  byte *pbStack_150;
  byte bStack_141;
  byte abStack_140 [24];
  long lStack_128;
  byte *pbStack_120;
  ulong *puStack_118;
  byte *pbStack_110;
  ulong uStack_108;
  byte *pbStack_100;
  byte *pbStack_f8;
  byte *pbStack_f0;
  byte *pbStack_e8;
  byte *pbStack_e0;
  byte *pbStack_d8;
  undefined1 *puStack_d0;
  undefined8 uStack_c8;
  byte *pbStack_b8;
  byte *pbStack_b0;
  byte *pbStack_a8;
  byte *pbStack_a0;
  byte *pbStack_98;
  byte *pbStack_90;
  byte bStack_81;
  byte abStack_80 [24];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pbVar20 = *(byte **)(param_1 + 0x10);
  pbVar7 = unaff_x21;
  if (pbVar20 == *(byte **)(param_2 + 0x10)) {
    if ((pbVar20 != (byte *)0x0) && (param_1 != param_2)) {
      pbStack_b0 = (byte *)0x0;
      unaff_x27 = (ulong *)(param_2 + 0x48);
      unaff_x28 = param_1 + 0x28;
      do {
        uVar13 = *(ulong *)(unaff_x28 + -8);
        pbVar6 = *(byte **)unaff_x28;
        pbVar8 = *(byte **)(unaff_x28 + 8);
        unaff_x26 = *(byte **)(unaff_x28 + 0x10);
        unaff_x22 = *(byte **)(unaff_x28 + 0x18);
        unaff_x19 = *(byte **)(unaff_x28 + 0x20);
        pbVar5 = (byte *)unaff_x27[-4];
        unaff_x23 = (byte *)unaff_x27[-3];
        pbStack_90 = (byte *)unaff_x27[-2];
        unaff_x21 = (byte *)unaff_x27[-1];
        unaff_x25 = *unaff_x27;
        unaff_x20 = pbVar8;
        if ((((uVar13 != unaff_x27[-5]) || (pbVar6 != pbVar5)) &&
            (param_2 = pbVar6, pbStack_a8 = unaff_x28, pbStack_98 = unaff_x21,
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), pbVar7 = pbStack_98, unaff_x21 = pbStack_98, unaff_x28 = pbStack_a8,
            (uVar13 & 1) == 0)) ||
           (((pbVar7 = unaff_x21, pbStack_a0 = pbVar5, pbVar8 != unaff_x23 ||
             (unaff_x26 != pbStack_90)) &&
            (param_2 = unaff_x26,
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (pbVar8,unaff_x26,unaff_x23,pbStack_90,0), unaff_x20 = pbVar6,
            ((ulong)pbVar8 & 1) == 0)))) goto LAB_1045bad30;
        uVar17 = (uint)((ulong)unaff_x19 >> 0x20);
        uVar11 = uVar17 >> 0x1e;
        uVar3 = (uint)(unaff_x25 >> 0x20);
        uVar14 = uVar3 >> 0x1e;
        iVar19 = (int)unaff_x22;
        if ((ulong)unaff_x19 >> 0x3e == 3) {
          uVar13 = 0;
          if (((unaff_x22 != (byte *)0x0) || (unaff_x19 != (byte *)0xc000000000000000)) ||
             ((unaff_x25 >> 0x3e < 3 ||
              ((uVar13 = 0, unaff_x21 != (byte *)0x0 || (unaff_x25 != 0xc000000000000000))))))
          goto joined_r0x0001045bab58;
        }
        else {
          if (uVar17 >> 0x1e < 2) {
            if (uVar11 == 0) {
              uVar13 = (ulong)unaff_x19 >> 0x30 & 0xff;
            }
            else {
              iVar12 = (int)((ulong)unaff_x22 >> 0x20);
              if (SBORROW4(iVar12,iVar19)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x1045bad84);
                (*pcVar4)();
              }
              uVar13 = (ulong)(iVar12 - iVar19);
            }
joined_r0x0001045bab58:
            if (uVar3 >> 0x1e < 2) goto LAB_1045ba988;
LAB_1045ba954:
            if (uVar14 != 2) {
              if (uVar13 == 0) goto LAB_1045ba824;
              goto LAB_1045bad30;
            }
            uVar15 = *(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10);
            if (SBORROW8(*(long *)(unaff_x21 + 0x18),*(long *)(unaff_x21 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1045bad78);
              (*pcVar4)();
            }
          }
          else {
            if (uVar11 == 2) {
              uVar13 = *(long *)(unaff_x22 + 0x18) - *(long *)(unaff_x22 + 0x10);
              if (SBORROW8(*(long *)(unaff_x22 + 0x18),*(long *)(unaff_x22 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x1045bad80);
                (*pcVar4)();
              }
              goto joined_r0x0001045bab58;
            }
            uVar13 = 0;
            if (1 < uVar14) goto LAB_1045ba954;
LAB_1045ba988:
            if (uVar14 == 0) {
              uVar15 = unaff_x25 >> 0x30 & 0xff;
            }
            else {
              iVar12 = (int)((ulong)unaff_x21 >> 0x20);
              if (SBORROW4(iVar12,(int)unaff_x21)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x1045bad7c);
                (*pcVar4)();
              }
              uVar15 = (ulong)(iVar12 - (int)unaff_x21);
            }
          }
          if (uVar13 != uVar15) goto LAB_1045bad30;
          if (0 < (long)uVar13) {
            param_2 = unaff_x19;
            pbStack_b8 = pbVar6;
            pbStack_98 = unaff_x21;
            if (uVar11 < 2) {
              if (uVar11 != 0) {
                lVar22 = (long)iVar19;
                pbStack_a8 = (byte *)(((long)unaff_x22 >> 0x20) - lVar22);
                if ((long)unaff_x22 >> 0x20 < lVar22) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x1045bad88);
                  (*pcVar4)();
                }
                _swift_bridgeObjectRetain(pbVar6);
                _swift_bridgeObjectRetain(unaff_x26);
                func_0x00010006c00c(unaff_x22,unaff_x19);
                _swift_bridgeObjectRetain(pbStack_a0);
                _swift_bridgeObjectRetain(pbStack_90);
                pbVar5 = pbStack_98;
                func_0x00010006c00c(pbStack_98,unaff_x25);
                __s10Foundation13__DataStorageC6_bytesSvSgvg();
                if (pbVar5 == (byte *)0x0) {
                  __s10Foundation13__DataStorageC7_lengthSivg();
                  pbVar7 = (byte *)0x0;
                  pbVar8 = (byte *)0x0;
                  pbVar5 = unaff_x23;
                }
                else {
                  pbVar6 = pbVar5;
                  __s10Foundation13__DataStorageC7_offsetSivg();
                  if (SBORROW8(lVar22,(long)pbVar6)) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x1045bad94);
                    (*pcVar4)();
                  }
                  pbVar21 = pbVar5 + (lVar22 - (long)pbVar6);
                  __s10Foundation13__DataStorageC7_lengthSivg();
                  if ((long)pbStack_a8 <= (long)pbVar6) {
                    pbVar6 = pbStack_a8;
                  }
                  pbVar7 = (byte *)0x0;
                  if (pbVar21 != (byte *)0x0) {
                    pbVar7 = pbVar21;
                  }
                  pbVar8 = (byte *)0x0;
                  if (pbVar21 != (byte *)0x0) {
                    pbVar8 = pbVar6 + (long)pbVar21;
                  }
                }
LAB_1045bacd8:
                unaff_x20 = pbStack_98;
                unaff_x21 = pbStack_b0;
                func_0x000100e25bdc(abStack_80,pbVar7,pbVar8,pbStack_98,unaff_x25);
                pbStack_b0 = unaff_x21;
                _swift_bridgeObjectRelease(pbStack_90);
                _swift_bridgeObjectRelease(pbStack_a0);
                func_0x00010006c090(unaff_x20,unaff_x25);
                _swift_bridgeObjectRelease(unaff_x26);
                _swift_bridgeObjectRelease(pbStack_b8);
                func_0x00010006c090(unaff_x22);
                pbVar7 = unaff_x21;
                unaff_x23 = pbVar5;
                if ((abStack_80[0] & 1) != 0) goto LAB_1045ba824;
                goto LAB_1045bad30;
              }
              abStack_80[0] = (byte)unaff_x22;
              abStack_80[1] = (byte)((ulong)unaff_x22 >> 8);
              abStack_80[2] = (byte)((ulong)unaff_x22 >> 0x10);
              abStack_80[3] = (byte)((ulong)unaff_x22 >> 0x18);
              abStack_80[4] = (byte)((ulong)unaff_x22 >> 0x20);
              abStack_80[5] = (byte)((ulong)unaff_x22 >> 0x28);
              abStack_80[6] = (byte)((ulong)unaff_x22 >> 0x30);
              abStack_80[7] = (byte)((ulong)unaff_x22 >> 0x38);
              abStack_80[8] = (byte)unaff_x19;
              abStack_80[9] = (byte)((ulong)unaff_x19 >> 8);
              abStack_80[10] = (byte)((ulong)unaff_x19 >> 0x10);
              abStack_80[0xb] = (byte)((ulong)unaff_x19 >> 0x18);
              abStack_80[0xc] = (byte)((ulong)unaff_x19 >> 0x20);
              abStack_80[0xd] = (byte)((ulong)unaff_x19 >> 0x28);
              pbStack_a8 = abStack_80 + ((ulong)unaff_x19 >> 0x30 & 0xff);
              _swift_bridgeObjectRetain(pbVar6);
              _swift_bridgeObjectRetain(unaff_x26);
              func_0x00010006c00c(unaff_x22,unaff_x19);
              pbVar8 = pbStack_a0;
              _swift_bridgeObjectRetain(pbStack_a0);
              unaff_x20 = pbStack_90;
              _swift_bridgeObjectRetain(pbStack_90);
              func_0x00010006c00c(unaff_x21,unaff_x25);
              pbVar7 = pbStack_b0;
              func_0x000100e25bdc(&bStack_81,abStack_80,pbStack_a8,unaff_x21,unaff_x25);
              pbStack_b0 = pbVar7;
              _swift_bridgeObjectRelease(unaff_x20);
              unaff_x23 = pbVar8;
            }
            else {
              if (uVar11 == 2) {
                lVar22 = *(long *)(unaff_x22 + 0x10);
                pbStack_a8 = *(byte **)(unaff_x22 + 0x18);
                _swift_bridgeObjectRetain(pbVar6);
                _swift_bridgeObjectRetain(unaff_x26);
                func_0x00010006c00c(unaff_x22,unaff_x19);
                _swift_bridgeObjectRetain(pbStack_a0);
                _swift_bridgeObjectRetain(pbStack_90);
                func_0x00010006c00c(unaff_x21,unaff_x25);
                __s10Foundation13__DataStorageC6_bytesSvSgvg();
                pbVar8 = unaff_x21;
                pbVar7 = unaff_x21;
                if (unaff_x21 != (byte *)0x0) {
                  __s10Foundation13__DataStorageC7_offsetSivg();
                  if (SBORROW8(lVar22,(long)pbVar8)) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x1045bad90);
                    (*pcVar4)();
                  }
                  pbVar7 = unaff_x21 + (lVar22 - (long)pbVar8);
                }
                pbVar6 = pbStack_a8 + -lVar22;
                if (SBORROW8((long)pbStack_a8,lVar22)) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x1045bad8c);
                  (*pcVar4)();
                }
                __s10Foundation13__DataStorageC7_lengthSivg();
                pbVar5 = pbVar7;
                if (pbVar7 == (byte *)0x0) {
                  pbVar8 = (byte *)0x0;
                }
                else {
                  if ((long)pbVar6 <= (long)pbVar8) {
                    pbVar8 = pbVar6;
                  }
                  pbVar8 = pbVar8 + (long)pbVar7;
                }
                goto LAB_1045bacd8;
              }
              abStack_80[8] = 0;
              abStack_80[9] = 0;
              abStack_80[10] = 0;
              abStack_80[0xb] = 0;
              abStack_80[0xc] = 0;
              abStack_80[0xd] = 0;
              abStack_80[0] = 0;
              abStack_80[1] = 0;
              abStack_80[2] = 0;
              abStack_80[3] = 0;
              abStack_80[4] = 0;
              abStack_80[5] = 0;
              abStack_80[6] = 0;
              abStack_80[7] = 0;
              _swift_bridgeObjectRetain(pbVar6);
              _swift_bridgeObjectRetain(unaff_x26);
              func_0x00010006c00c(unaff_x22,unaff_x19);
              pbVar8 = pbStack_a0;
              _swift_bridgeObjectRetain(pbStack_a0);
              unaff_x23 = pbStack_90;
              _swift_bridgeObjectRetain(pbStack_90);
              func_0x00010006c00c(unaff_x21,unaff_x25);
              pbVar7 = pbStack_b0;
              func_0x000100e25bdc(&bStack_81,abStack_80,abStack_80,unaff_x21,unaff_x25);
              pbStack_b0 = pbVar7;
              _swift_bridgeObjectRelease(unaff_x23);
              unaff_x20 = pbVar8;
            }
            _swift_bridgeObjectRelease(pbVar8);
            func_0x00010006c090(pbStack_98,unaff_x25);
            _swift_bridgeObjectRelease(unaff_x26);
            _swift_bridgeObjectRelease(pbStack_b8);
            func_0x00010006c090(unaff_x22);
            unaff_x21 = pbVar7;
            if ((bStack_81 & 1) == 0) goto LAB_1045bad30;
          }
        }
LAB_1045ba824:
        unaff_x27 = unaff_x27 + 6;
        unaff_x28 = unaff_x28 + 0x30;
        pbVar20 = pbVar20 + -1;
      } while (pbVar20 != (byte *)0x0);
    }
    pbVar8 = (byte *)0x1;
  }
  else {
LAB_1045bad30:
    pbVar8 = (byte *)0x0;
    unaff_x21 = pbVar7;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return pbVar8;
  }
  ___stack_chk_fail();
  uStack_c8 = 0x1045bad98;
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar22 = *(long *)(pbVar8 + 0x10);
  pbVar6 = unaff_x19;
  pbVar7 = pbStack_150;
  pbStack_120 = unaff_x28;
  puStack_118 = unaff_x27;
  pbStack_110 = unaff_x26;
  uStack_108 = unaff_x25;
  pbStack_100 = pbVar20;
  pbStack_f8 = unaff_x23;
  pbStack_f0 = unaff_x22;
  pbStack_e8 = unaff_x21;
  pbStack_e0 = unaff_x20;
  pbStack_d8 = unaff_x19;
  puStack_d0 = &stack0xfffffffffffffff0;
  if (lVar22 == *(long *)(param_2 + 0x10)) {
    if ((lVar22 != 0) && (pbVar8 != param_2)) {
      pbStack_150 = (byte *)0x0;
      pbVar5 = param_2 + 0x40;
      pbVar6 = pbVar8 + 0x40;
      do {
        unaff_x23 = *(byte **)(pbVar6 + -0x20);
        unaff_x22 = *(byte **)(pbVar6 + -0x18);
        pbVar21 = *(byte **)(pbVar6 + -8);
        bVar1 = *pbVar6;
        unaff_x20 = (byte *)(ulong)bVar1;
        pbVar8 = *(byte **)(pbVar5 + -0x20);
        uVar13 = *(ulong *)(pbVar5 + -0x18);
        pbVar20 = *(byte **)(pbVar5 + -8);
        bVar2 = *pbVar5;
        unaff_x21 = (byte *)(ulong)bVar2;
        pbVar7 = pbStack_150;
        if (pbVar21 == (byte *)0x0) {
          if (pbVar20 != (byte *)0x0) goto LAB_1045bb2e0;
        }
        else if ((pbVar20 == (byte *)0x0) ||
                ((uVar15 = *(ulong *)(pbVar6 + -0x10),
                 uVar15 != *(ulong *)(pbVar5 + -0x10) || pbVar21 != pbVar20 &&
                 (param_2 = pbVar21, pbStack_158 = pbVar6,
                 __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                           (), pbVar6 = pbStack_158, pbVar7 = pbStack_150, (uVar15 & 1) == 0))))
        goto LAB_1045bb2e0;
        pbVar7 = pbStack_150;
        if (bVar1 == 2) {
          if (bVar2 != 2) goto LAB_1045bb2e0;
        }
        else {
          pbVar9 = (byte *)0x0;
          if ((bVar2 == 2) || (((bVar1 ^ bVar2) & 1) != 0)) goto LAB_1045bb2ec;
        }
        uVar17 = (uint)((ulong)unaff_x22 >> 0x20);
        uVar11 = uVar17 >> 0x1e;
        uVar3 = (uint)(uVar13 >> 0x20);
        uVar14 = uVar3 >> 0x1e;
        iVar19 = (int)unaff_x23;
        if ((ulong)unaff_x22 >> 0x3e == 3) {
          uVar15 = 0;
          if ((((unaff_x23 != (byte *)0x0) || (unaff_x22 != (byte *)0xc000000000000000)) ||
              (uVar13 >> 0x3e < 3)) ||
             ((uVar15 = 0, pbVar8 != (byte *)0x0 || (uVar13 != 0xc000000000000000))))
          goto joined_r0x0001045bb0f8;
        }
        else {
          if (uVar17 >> 0x1e < 2) {
            if (uVar11 == 0) {
              uVar15 = (ulong)unaff_x22 >> 0x30 & 0xff;
            }
            else {
              iVar12 = (int)((ulong)unaff_x23 >> 0x20);
              if (SBORROW4(iVar12,iVar19)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x1045bb334);
                (*pcVar4)();
              }
              uVar15 = (ulong)(iVar12 - iVar19);
            }
joined_r0x0001045bb0f8:
            if (uVar3 >> 0x1e < 2) goto LAB_1045baf3c;
LAB_1045baf08:
            if (uVar14 != 2) {
              if (uVar15 == 0) goto LAB_1045badf8;
              goto LAB_1045bb2e0;
            }
            uVar16 = *(long *)(pbVar8 + 0x18) - *(long *)(pbVar8 + 0x10);
            if (SBORROW8(*(long *)(pbVar8 + 0x18),*(long *)(pbVar8 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1045bb328);
              (*pcVar4)();
            }
          }
          else {
            if (uVar11 == 2) {
              uVar15 = *(long *)(unaff_x23 + 0x18) - *(long *)(unaff_x23 + 0x10);
              if (SBORROW8(*(long *)(unaff_x23 + 0x18),*(long *)(unaff_x23 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x1045bb330);
                (*pcVar4)();
              }
              goto joined_r0x0001045bb0f8;
            }
            uVar15 = 0;
            if (1 < uVar14) goto LAB_1045baf08;
LAB_1045baf3c:
            if (uVar14 == 0) {
              uVar16 = uVar13 >> 0x30 & 0xff;
            }
            else {
              iVar12 = (int)((ulong)pbVar8 >> 0x20);
              if (SBORROW4(iVar12,(int)pbVar8)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x1045bb32c);
                (*pcVar4)();
              }
              uVar16 = (ulong)(iVar12 - (int)pbVar8);
            }
          }
          if (uVar15 != uVar16) goto LAB_1045bb2e0;
          if (0 < (long)uVar15) {
            param_2 = unaff_x22;
            if (uVar11 < 2) {
              if (uVar11 != 0) {
                lVar18 = (long)iVar19;
                pbStack_168 = (byte *)(((long)unaff_x23 >> 0x20) - lVar18);
                if ((long)unaff_x23 >> 0x20 < lVar18) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x1045bb338);
                  pbStack_160 = pbVar8;
                  pbStack_158 = pbVar21;
                  (*pcVar4)();
                }
                pbStack_160 = pbVar8;
                pbStack_158 = pbVar21;
                func_0x00010006c00c(unaff_x23,unaff_x22);
                _swift_bridgeObjectRetain(pbStack_158);
                func_0x00010006c00c(pbStack_160,uVar13);
                pbVar7 = pbVar20;
                _swift_bridgeObjectRetain();
                __s10Foundation13__DataStorageC6_bytesSvSgvg();
                if (pbVar7 == (byte *)0x0) {
                  __s10Foundation13__DataStorageC7_lengthSivg();
                  pbVar8 = (byte *)0x0;
                  pbVar21 = (byte *)0x0;
                }
                else {
                  pbVar9 = pbVar7;
                  __s10Foundation13__DataStorageC7_offsetSivg();
                  if (SBORROW8(lVar18,(long)pbVar9)) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x1045bb344);
                    (*pcVar4)();
                  }
                  pbVar7 = pbVar7 + (lVar18 - (long)pbVar9);
                  __s10Foundation13__DataStorageC7_lengthSivg();
                  if ((long)pbStack_168 <= (long)pbVar9) {
                    pbVar9 = pbStack_168;
                  }
                  pbVar8 = (byte *)0x0;
                  if (pbVar7 != (byte *)0x0) {
                    pbVar8 = pbVar7;
                  }
                  pbVar21 = (byte *)0x0;
                  if (pbVar7 != (byte *)0x0) {
                    pbVar21 = pbVar9 + (long)pbVar7;
                  }
                }
                unaff_x21 = pbStack_150;
                unaff_x20 = pbStack_160;
                func_0x000100e25bdc(abStack_140,pbVar8,pbVar21,pbStack_160,uVar13);
                pbStack_150 = unaff_x21;
                func_0x00010006c090(unaff_x20,uVar13);
                _swift_bridgeObjectRelease(pbVar20);
                func_0x00010006c090(unaff_x23);
                _swift_bridgeObjectRelease(pbStack_158);
                pbVar7 = pbStack_150;
                if ((abStack_140[0] & 1) != 0) goto LAB_1045badf8;
                goto LAB_1045bb2e0;
              }
              abStack_140[0] = (byte)unaff_x23;
              abStack_140[1] = (byte)((ulong)unaff_x23 >> 8);
              abStack_140[2] = (byte)((ulong)unaff_x23 >> 0x10);
              abStack_140[3] = (byte)((ulong)unaff_x23 >> 0x18);
              abStack_140[4] = (byte)((ulong)unaff_x23 >> 0x20);
              abStack_140[5] = (byte)((ulong)unaff_x23 >> 0x28);
              abStack_140[6] = (byte)((ulong)unaff_x23 >> 0x30);
              abStack_140[7] = (byte)((ulong)unaff_x23 >> 0x38);
              abStack_140[8] = (byte)unaff_x22;
              abStack_140[9] = (byte)((ulong)unaff_x22 >> 8);
              abStack_140[10] = (byte)((ulong)unaff_x22 >> 0x10);
              abStack_140[0xb] = (byte)((ulong)unaff_x22 >> 0x18);
              abStack_140[0xc] = (byte)((ulong)unaff_x22 >> 0x20);
              abStack_140[0xd] = (byte)((ulong)unaff_x22 >> 0x28);
              func_0x00010006c00c(unaff_x23,unaff_x22);
              _swift_bridgeObjectRetain(pbVar21);
              func_0x00010006c00c(pbVar8,uVar13);
              _swift_bridgeObjectRetain(pbVar20);
              unaff_x21 = pbStack_150;
              func_0x000100e25bdc(&bStack_141,abStack_140,
                                  abStack_140 + ((ulong)unaff_x22 >> 0x30 & 0xff),pbVar8,uVar13);
              pbStack_150 = unaff_x21;
              func_0x00010006c090(pbVar8,uVar13);
              _swift_bridgeObjectRelease(pbVar20);
              func_0x00010006c090(unaff_x23);
              unaff_x20 = pbVar8;
LAB_1045bb218:
              _swift_bridgeObjectRelease(pbVar21);
              pbVar8 = pbStack_150;
              pbVar7 = pbStack_150;
              bVar1 = bStack_141;
            }
            else {
              if (uVar11 != 2) {
                abStack_140[8] = 0;
                abStack_140[9] = 0;
                abStack_140[10] = 0;
                abStack_140[0xb] = 0;
                abStack_140[0xc] = 0;
                abStack_140[0xd] = 0;
                abStack_140[0] = 0;
                abStack_140[1] = 0;
                abStack_140[2] = 0;
                abStack_140[3] = 0;
                abStack_140[4] = 0;
                abStack_140[5] = 0;
                abStack_140[6] = 0;
                abStack_140[7] = 0;
                pbStack_160 = pbVar8;
                pbStack_158 = pbVar21;
                func_0x00010006c00c(unaff_x23,unaff_x22);
                pbVar21 = pbStack_158;
                _swift_bridgeObjectRetain(pbStack_158);
                pbVar7 = pbStack_160;
                func_0x00010006c00c(pbStack_160,uVar13);
                _swift_bridgeObjectRetain(pbVar20);
                unaff_x21 = pbStack_150;
                func_0x000100e25bdc(&bStack_141,abStack_140,abStack_140,pbVar7,uVar13);
                pbStack_150 = unaff_x21;
                func_0x00010006c090(pbVar7,uVar13);
                _swift_bridgeObjectRelease(pbVar20);
                func_0x00010006c090(unaff_x23);
                unaff_x20 = pbVar21;
                goto LAB_1045bb218;
              }
              lVar18 = *(long *)(unaff_x23 + 0x10);
              pbStack_168 = *(byte **)(unaff_x23 + 0x18);
              pbStack_160 = pbVar8;
              pbStack_158 = pbVar21;
              func_0x00010006c00c(unaff_x23,unaff_x22);
              _swift_bridgeObjectRetain(pbStack_158);
              func_0x00010006c00c(pbStack_160,uVar13);
              pbVar7 = pbVar20;
              _swift_bridgeObjectRetain();
              __s10Foundation13__DataStorageC6_bytesSvSgvg();
              pbVar8 = pbVar7;
              if (pbVar7 != (byte *)0x0) {
                __s10Foundation13__DataStorageC7_offsetSivg();
                if (SBORROW8(lVar18,(long)pbVar8)) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x1045bb340);
                  (*pcVar4)();
                }
                pbVar7 = pbVar7 + (lVar18 - (long)pbVar8);
              }
              pbVar21 = pbStack_168 + -lVar18;
              if (SBORROW8((long)pbStack_168,lVar18)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x1045bb33c);
                (*pcVar4)();
              }
              __s10Foundation13__DataStorageC7_lengthSivg();
              unaff_x21 = pbStack_150;
              unaff_x20 = pbStack_160;
              if (pbVar7 == (byte *)0x0) {
                pbVar8 = (byte *)0x0;
              }
              else {
                if ((long)pbVar21 <= (long)pbVar8) {
                  pbVar8 = pbVar21;
                }
                pbVar8 = pbVar8 + (long)pbVar7;
              }
              func_0x000100e25bdc(abStack_140,pbVar7,pbVar8,pbStack_160,uVar13);
              func_0x00010006c090(unaff_x20,uVar13);
              _swift_bridgeObjectRelease(pbVar20);
              func_0x00010006c090(unaff_x23);
              _swift_bridgeObjectRelease(pbStack_158);
              pbVar8 = unaff_x21;
              pbVar7 = pbStack_150;
              bVar1 = abStack_140[0];
            }
            pbStack_150 = pbVar8;
            if ((bVar1 & 1) == 0) goto LAB_1045bb2e0;
          }
        }
LAB_1045badf8:
        pbVar5 = pbVar5 + 0x28;
        unaff_x19 = pbVar6 + 0x28;
        lVar22 = lVar22 + -1;
        pbVar6 = unaff_x19;
      } while (lVar22 != 0);
    }
    pbVar9 = (byte *)0x1;
    pbVar6 = unaff_x19;
  }
  else {
LAB_1045bb2e0:
    pbStack_150 = pbVar7;
    pbVar9 = (byte *)0x0;
  }
LAB_1045bb2ec:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
    return pbVar9;
  }
  ___stack_chk_fail();
  pcStack_178 = FUN_1045bb348;
  lVar22 = *(long *)(pbVar9 + 0x10);
  if (lVar22 == *(long *)(param_2 + 0x10)) {
    if ((lVar22 == 0) || (pbVar9 == param_2)) {
      uVar17 = 1;
    }
    else {
      pbVar9 = pbVar9 + 0x20;
      param_2 = param_2 + 0x20;
      pbStack_1b0 = pbVar20;
      pbStack_1a8 = unaff_x23;
      pbStack_1a0 = unaff_x22;
      pbStack_198 = unaff_x21;
      pbStack_190 = unaff_x20;
      pbStack_188 = pbVar6;
      ppuStack_180 = &puStack_d0;
      do {
        lVar22 = lVar22 + -1;
        lStack_248 = *(long *)(pbVar9 + 0x48);
        lStack_250 = *(long *)(pbVar9 + 0x40);
        lStack_240 = *(long *)(pbVar9 + 0x50);
        uStack_238 = (undefined1)*(long *)(pbVar9 + 0x58);
        uStack_22f = *(undefined8 *)(pbVar9 + 0x61);
        uStack_237 = (undefined7)*(undefined8 *)(pbVar9 + 0x59);
        uStack_230 = (undefined1)((ulong)*(undefined8 *)(pbVar9 + 0x59) >> 0x38);
        lStack_288 = *(long *)(pbVar9 + 8);
        lStack_290 = *(long *)pbVar9;
        lStack_278 = *(long *)(pbVar9 + 0x18);
        lStack_280 = *(long *)(pbVar9 + 0x10);
        lStack_268 = *(long *)(pbVar9 + 0x28);
        lStack_270 = *(long *)(pbVar9 + 0x20);
        lStack_258 = *(long *)(pbVar9 + 0x38);
        lStack_260 = *(long *)(pbVar9 + 0x30);
        lStack_218 = *(long *)(param_2 + 8);
        lStack_220 = *(long *)param_2;
        lStack_208 = *(long *)(param_2 + 0x18);
        lStack_210 = *(long *)(param_2 + 0x10);
        lStack_1f8 = *(long *)(param_2 + 0x28);
        lStack_200 = *(long *)(param_2 + 0x20);
        lStack_1e8 = *(long *)(param_2 + 0x38);
        lStack_1f0 = *(long *)(param_2 + 0x30);
        uStack_1bf = *(undefined8 *)(param_2 + 0x61);
        uStack_1c0 = (undefined1)((ulong)*(undefined8 *)(param_2 + 0x59) >> 0x38);
        lStack_1d8 = *(long *)(param_2 + 0x48);
        lStack_1e0 = *(long *)(param_2 + 0x40);
        lStack_1d0 = *(long *)(param_2 + 0x50);
        uStack_1c8 = (undefined1)*(long *)(param_2 + 0x58);
        uStack_1c7 = (undefined7)((ulong)*(long *)(param_2 + 0x58) >> 8);
        func_0x000104604334(&lStack_290,auStack_300);
        func_0x000104604334(&lStack_220,auStack_300);
        plVar10 = &lStack_290;
        FUN_1045f5a6c(plVar10,&lStack_220);
        uVar17 = (uint)plVar10;
        func_0x000104604368(&lStack_220);
        func_0x000104604368(&lStack_290);
        if (((ulong)plVar10 & 1) == 0) break;
        param_2 = param_2 + 0x70;
        pbVar9 = pbVar9 + 0x70;
      } while (lVar22 != 0);
    }
  }
  else {
    uVar17 = 0;
  }
  return (byte *)(ulong)(uVar17 & 1);
}



/* Entry: 1045bb348; end: 1045bb567;  */

uint FUN_1045bb348(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_190 [112];
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
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined8 uStack_bf;
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
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    if ((lVar2 == 0) || (param_1 == param_2)) {
      uVar3 = 1;
    }
    else {
      puVar4 = (undefined8 *)(param_1 + 0x20);
      puVar5 = (undefined8 *)(param_2 + 0x20);
      do {
        lVar2 = lVar2 + -1;
        uStack_d8 = puVar4[9];
        uStack_e0 = puVar4[8];
        uStack_d0 = puVar4[10];
        uStack_c8 = (undefined1)puVar4[0xb];
        uStack_bf = *(undefined8 *)((long)puVar4 + 0x61);
        uStack_c7 = (undefined7)*(undefined8 *)((long)puVar4 + 0x59);
        uStack_c0 = (undefined1)((ulong)*(undefined8 *)((long)puVar4 + 0x59) >> 0x38);
        uStack_118 = puVar4[1];
        uStack_120 = *puVar4;
        uStack_108 = puVar4[3];
        uStack_110 = puVar4[2];
        uStack_f8 = puVar4[5];
        uStack_100 = puVar4[4];
        uStack_e8 = puVar4[7];
        uStack_f0 = puVar4[6];
        uStack_a8 = puVar5[1];
        uStack_b0 = *puVar5;
        uStack_98 = puVar5[3];
        uStack_a0 = puVar5[2];
        uStack_88 = puVar5[5];
        uStack_90 = puVar5[4];
        uStack_78 = puVar5[7];
        uStack_80 = puVar5[6];
        uStack_4f = *(undefined8 *)((long)puVar5 + 0x61);
        uStack_50 = (undefined1)((ulong)*(undefined8 *)((long)puVar5 + 0x59) >> 0x38);
        uStack_68 = puVar5[9];
        uStack_70 = puVar5[8];
        uStack_60 = puVar5[10];
        uStack_58 = (undefined1)puVar5[0xb];
        uStack_57 = (undefined7)((ulong)puVar5[0xb] >> 8);
        func_0x000104604334(&uStack_120,auStack_190);
        func_0x000104604334(&uStack_b0,auStack_190);
        puVar1 = &uStack_120;
        FUN_1045f5a6c(puVar1,&uStack_b0);
        uVar3 = (uint)puVar1;
        func_0x000104604368(&uStack_b0);
        func_0x000104604368(&uStack_120);
        if (((ulong)puVar1 & 1) == 0) break;
        puVar5 = puVar5 + 0xe;
        puVar4 = puVar4 + 0xe;
      } while (lVar2 != 0);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3 & 1;
}



/* Entry: 1045bb568; end: 1045bba4f;  */

ulong FUN_1045bb568(ulong param_1,ulong param_2,code *param_3)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  byte bVar4;
  code *pcVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  uint uVar18;
  long lVar19;
  ulong unaff_x20;
  code *unaff_x21;
  undefined8 *puVar20;
  ulong unaff_x22;
  undefined8 *puVar21;
  ulong unaff_x23;
  int iVar22;
  ulong unaff_x24;
  ulong uVar23;
  ulong *puVar24;
  ulong *puVar25;
  undefined1 auStack_368 [200];
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
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
  undefined1 uStack_1e0;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
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
  undefined1 uStack_110;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  code *pcStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  code *pcStack_a0;
  code *pcStack_98;
  ulong uStack_90;
  byte bStack_81;
  byte abStack_80 [24];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar19 = *(long *)(param_1 + 0x10);
  if (lVar19 == *(long *)(param_2 + 0x10)) {
    pcVar6 = unaff_x21;
    if ((lVar19 != 0) && (param_1 != param_2)) {
      pcStack_98 = (code *)0x0;
      puVar25 = (ulong *)(param_2 + 0x30);
      puVar24 = (ulong *)(param_1 + 0x30);
      unaff_x21 = param_3;
      pcStack_a0 = param_3;
      do {
        unaff_x24 = puVar24[-2];
        unaff_x23 = puVar24[-1];
        unaff_x22 = *puVar24;
        unaff_x20 = puVar25[-2];
        uVar2 = puVar25[-1];
        uVar23 = *puVar25;
        func_0x00010006c00c(unaff_x24,unaff_x23);
        _swift_retain(unaff_x22);
        uStack_90 = unaff_x20;
        func_0x00010006c00c(unaff_x20,uVar2);
        uVar8 = uVar23;
        _swift_retain();
        param_2 = unaff_x23;
        if (unaff_x22 != uVar23) {
          _swift_retain(unaff_x22);
          _swift_retain(uVar23);
          unaff_x20 = unaff_x22;
          (*unaff_x21)(unaff_x22,uVar23);
          _swift_release(uVar23);
          uVar8 = unaff_x22;
          _swift_release();
          if ((unaff_x20 & 1) != 0) goto LAB_1045bb6ac;
LAB_1045bb9c8:
          func_0x00010006c090(uStack_90,uVar2);
          _swift_release(uVar23);
          func_0x00010006c090(unaff_x24);
          _swift_release(unaff_x22);
          goto LAB_1045bb9f0;
        }
LAB_1045bb6ac:
        uVar7 = uStack_90;
        pcVar5 = pcStack_98;
        uVar18 = (uint)(unaff_x23 >> 0x20);
        uVar12 = uVar18 >> 0x1e;
        uVar3 = (uint)(uVar2 >> 0x20);
        uVar16 = uVar3 >> 0x1e;
        iVar22 = (int)unaff_x24;
        if (unaff_x23 >> 0x3e == 3) {
          uVar15 = 0;
          if ((((unaff_x24 != 0) || (unaff_x23 != 0xc000000000000000)) || (uVar2 >> 0x3e < 3)) ||
             ((uVar15 = 0, uStack_90 != 0 || (uVar2 != 0xc000000000000000))))
          goto joined_r0x0001045bb724;
          func_0x00010006c090(0,0xc000000000000000);
          _swift_release(uVar23);
          uVar8 = 0;
          param_2 = 0xc000000000000000;
LAB_1045bb840:
          func_0x00010006c090(uVar8);
          _swift_release(unaff_x22);
          pcVar6 = unaff_x21;
          pcVar5 = pcStack_98;
        }
        else {
          if (1 < uVar18 >> 0x1e) {
            if (uVar12 == 2) {
              uVar15 = *(long *)(unaff_x24 + 0x18) - *(long *)(unaff_x24 + 0x10);
              if (SBORROW8(*(long *)(unaff_x24 + 0x18),*(long *)(unaff_x24 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x1045bba3c);
                (*pcVar6)();
              }
              goto joined_r0x0001045bb724;
            }
            uVar15 = 0;
            if (uVar16 < 2) goto LAB_1045bb760;
LAB_1045bb728:
            if (uVar16 == 2) {
              uVar17 = *(long *)(uStack_90 + 0x18) - *(long *)(uStack_90 + 0x10);
              if (SBORROW8(*(long *)(uStack_90 + 0x18),*(long *)(uStack_90 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x1045bba30);
                (*pcVar6)();
              }
              goto LAB_1045bb788;
            }
            if (uVar15 != 0) goto LAB_1045bb9c8;
LAB_1045bb824:
            func_0x00010006c090(uStack_90,uVar2);
            _swift_release(uVar23);
            uVar8 = unaff_x24;
            goto LAB_1045bb840;
          }
          if (uVar12 == 0) {
            uVar15 = unaff_x23 >> 0x30 & 0xff;
          }
          else {
            iVar14 = (int)(unaff_x24 >> 0x20);
            if (SBORROW4(iVar14,iVar22)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x1045bba38);
              (*pcVar6)();
            }
            uVar15 = (ulong)(iVar14 - iVar22);
          }
joined_r0x0001045bb724:
          if (1 < uVar3 >> 0x1e) goto LAB_1045bb728;
LAB_1045bb760:
          if (uVar16 == 0) {
            uVar17 = uVar2 >> 0x30 & 0xff;
          }
          else {
            iVar14 = (int)(uStack_90 >> 0x20);
            if (SBORROW4(iVar14,(int)uStack_90)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x1045bba34);
              (*pcVar6)();
            }
            uVar17 = (ulong)(iVar14 - (int)uStack_90);
          }
LAB_1045bb788:
          if (uVar15 != uVar17) goto LAB_1045bb9c8;
          if ((long)uVar15 < 1) goto LAB_1045bb824;
          if (uVar12 < 2) {
            if (uVar12 == 0) {
              abStack_80[0] = (byte)unaff_x24;
              abStack_80[1] = (byte)(unaff_x24 >> 8);
              abStack_80[2] = (byte)(unaff_x24 >> 0x10);
              abStack_80[3] = (byte)(unaff_x24 >> 0x18);
              abStack_80[4] = (byte)(unaff_x24 >> 0x20);
              abStack_80[5] = (byte)(unaff_x24 >> 0x28);
              abStack_80[6] = (byte)(unaff_x24 >> 0x30);
              abStack_80[7] = (byte)(unaff_x24 >> 0x38);
              abStack_80[8] = (byte)unaff_x23;
              abStack_80[9] = (byte)(unaff_x23 >> 8);
              abStack_80[10] = (byte)(unaff_x23 >> 0x10);
              abStack_80[0xb] = (byte)(unaff_x23 >> 0x18);
              abStack_80[0xc] = (byte)(unaff_x23 >> 0x20);
              abStack_80[0xd] = (byte)(unaff_x23 >> 0x28);
              pbVar10 = abStack_80 + (unaff_x23 >> 0x30 & 0xff);
              goto LAB_1045bb5dc;
            }
            lVar13 = (long)iVar22;
            uStack_a8 = ((long)unaff_x24 >> 0x20) - lVar13;
            if ((long)unaff_x24 >> 0x20 < lVar13) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x1045bba40);
              (*pcVar6)();
            }
            __s10Foundation13__DataStorageC6_bytesSvSgvg();
            if (uVar8 == 0) {
              __s10Foundation13__DataStorageC7_lengthSivg();
              lVar13 = 0;
              lVar11 = 0;
            }
            else {
              uStack_b0 = uVar8;
              __s10Foundation13__DataStorageC7_offsetSivg();
              if (SBORROW8(lVar13,uVar8)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x1045bba4c);
                (*pcVar6)();
              }
              lVar1 = (lVar13 - uVar8) + uStack_b0;
              __s10Foundation13__DataStorageC7_lengthSivg();
              if ((long)uStack_a8 <= (long)uVar8) {
                uVar8 = uStack_a8;
              }
              lVar13 = 0;
              if (lVar1 != 0) {
                lVar13 = lVar1;
              }
              lVar11 = 0;
              if (lVar1 != 0) {
                lVar11 = uVar8 + lVar1;
              }
            }
LAB_1045bb97c:
            unaff_x20 = uStack_90;
            unaff_x21 = pcStack_98;
            func_0x000100e25bdc(abStack_80,lVar13,lVar11,uStack_90,uVar2);
            func_0x00010006c090(unaff_x20,uVar2);
            _swift_release(uVar23);
            func_0x00010006c090(unaff_x24);
            _swift_release(unaff_x22);
            pcVar6 = pcStack_a0;
            bVar4 = abStack_80[0];
          }
          else {
            if (uVar12 == 2) {
              uStack_a8 = *(ulong *)(unaff_x24 + 0x10);
              uStack_b0 = *(ulong *)(unaff_x24 + 0x18);
              __s10Foundation13__DataStorageC6_bytesSvSgvg();
              uStack_b8 = unaff_x24;
              if (uVar8 == 0) {
                lVar13 = 0;
              }
              else {
                uVar7 = uVar8;
                __s10Foundation13__DataStorageC7_offsetSivg();
                if (SBORROW8(uStack_a8,uVar7)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x1045bba48);
                  (*pcVar6)();
                }
                lVar13 = (uStack_a8 - uVar7) + uVar8;
                uVar8 = uVar7;
              }
              uVar7 = uStack_b0 - uStack_a8;
              if (SBORROW8(uStack_b0,uStack_a8)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x1045bba44);
                (*pcVar6)();
              }
              __s10Foundation13__DataStorageC7_lengthSivg();
              unaff_x24 = uStack_b8;
              if (lVar13 == 0) {
                lVar11 = 0;
              }
              else {
                if ((long)uVar7 <= (long)uVar8) {
                  uVar8 = uVar7;
                }
                lVar11 = uVar8 + lVar13;
              }
              goto LAB_1045bb97c;
            }
            abStack_80[8] = 0;
            abStack_80[9] = 0;
            abStack_80[10] = 0;
            abStack_80[0xb] = 0;
            abStack_80[0xc] = 0;
            abStack_80[0xd] = 0;
            abStack_80[0] = 0;
            abStack_80[1] = 0;
            abStack_80[2] = 0;
            abStack_80[3] = 0;
            abStack_80[4] = 0;
            abStack_80[5] = 0;
            abStack_80[6] = 0;
            abStack_80[7] = 0;
            pbVar10 = abStack_80;
LAB_1045bb5dc:
            func_0x000100e25bdc(&bStack_81,abStack_80,pbVar10,uStack_90,uVar2);
            func_0x00010006c090(uVar7,uVar2);
            _swift_release(uVar23);
            func_0x00010006c090(unaff_x24);
            _swift_release(unaff_x22);
            pcVar6 = pcStack_a0;
            unaff_x21 = pcVar5;
            unaff_x20 = uVar7;
            bVar4 = bStack_81;
          }
          pcStack_a0 = pcVar6;
          pcVar5 = unaff_x21;
          if ((bVar4 & 1) == 0) goto LAB_1045bb9f0;
        }
        pcStack_98 = pcVar5;
        puVar25 = puVar25 + 3;
        puVar24 = puVar24 + 3;
        lVar19 = lVar19 + -1;
        unaff_x21 = pcVar6;
      } while (lVar19 != 0);
    }
    uVar8 = 1;
    unaff_x21 = pcVar6;
  }
  else {
LAB_1045bb9f0:
    uVar8 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return uVar8;
  }
  ___stack_chk_fail();
  pcStack_c8 = FUN_1045bba50;
  lVar13 = *(long *)(uVar8 + 0x10);
  if (lVar13 == *(long *)(param_2 + 0x10)) {
    if ((lVar13 == 0) || (uVar8 == param_2)) {
      uVar18 = 1;
    }
    else {
      puVar20 = (undefined8 *)(uVar8 + 0x20);
      puVar21 = (undefined8 *)(param_2 + 0x20);
      uStack_100 = unaff_x24;
      uStack_f8 = unaff_x23;
      uStack_f0 = unaff_x22;
      pcStack_e8 = unaff_x21;
      uStack_e0 = unaff_x20;
      lStack_d8 = lVar19;
      puStack_d0 = &stack0xfffffffffffffff0;
      do {
        lVar13 = lVar13 + -1;
        uStack_1f8 = puVar20[0x15];
        uStack_200 = puVar20[0x14];
        uStack_1e8 = puVar20[0x17];
        uStack_1f0 = puVar20[0x16];
        uStack_1e0 = *(undefined1 *)(puVar20 + 0x18);
        uStack_238 = puVar20[0xd];
        uStack_240 = puVar20[0xc];
        uStack_228 = puVar20[0xf];
        uStack_230 = puVar20[0xe];
        uStack_218 = puVar20[0x11];
        uStack_220 = puVar20[0x10];
        uStack_208 = puVar20[0x13];
        uStack_210 = puVar20[0x12];
        uStack_278 = puVar20[5];
        uStack_280 = puVar20[4];
        uStack_268 = puVar20[7];
        uStack_270 = puVar20[6];
        uStack_258 = puVar20[9];
        uStack_260 = puVar20[8];
        uStack_248 = puVar20[0xb];
        uStack_250 = puVar20[10];
        uStack_298 = puVar20[1];
        uStack_2a0 = *puVar20;
        uStack_288 = puVar20[3];
        uStack_290 = puVar20[2];
        uStack_128 = puVar21[0x15];
        uStack_130 = puVar21[0x14];
        uStack_118 = puVar21[0x17];
        uStack_120 = puVar21[0x16];
        uStack_110 = *(undefined1 *)(puVar21 + 0x18);
        uStack_168 = puVar21[0xd];
        uStack_170 = puVar21[0xc];
        uStack_158 = puVar21[0xf];
        uStack_160 = puVar21[0xe];
        uStack_148 = puVar21[0x11];
        uStack_150 = puVar21[0x10];
        uStack_138 = puVar21[0x13];
        uStack_140 = puVar21[0x12];
        uStack_1a8 = puVar21[5];
        uStack_1b0 = puVar21[4];
        uStack_198 = puVar21[7];
        uStack_1a0 = puVar21[6];
        uStack_188 = puVar21[9];
        uStack_190 = puVar21[8];
        uStack_178 = puVar21[0xb];
        uStack_180 = puVar21[10];
        uStack_1c8 = puVar21[1];
        uStack_1d0 = *puVar21;
        uStack_1b8 = puVar21[3];
        uStack_1c0 = puVar21[2];
        FUN_104603a58(&uStack_2a0,auStack_368);
        FUN_104603a58(&uStack_1d0,auStack_368);
        puVar9 = &uStack_2a0;
        func_0x0001045f5e24(puVar9,&uStack_1d0);
        uVar18 = (uint)puVar9;
        func_0x000104603a8c(&uStack_1d0);
        func_0x000104603a8c(&uStack_2a0);
        if (((ulong)puVar9 & 1) == 0) break;
        puVar21 = puVar21 + 0x19;
        puVar20 = puVar20 + 0x19;
      } while (lVar13 != 0);
    }
  }
  else {
    uVar18 = 0;
  }
  return (ulong)(uVar18 & 1);
}



/* Entry: 1045bba50; end: 1045bbc8f;  */

uint FUN_1045bba50(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_2a8 [200];
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
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
  undefined1 uStack_50;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    if ((lVar2 == 0) || (param_1 == param_2)) {
      uVar3 = 1;
    }
    else {
      puVar4 = (undefined8 *)(param_1 + 0x20);
      puVar5 = (undefined8 *)(param_2 + 0x20);
      do {
        lVar2 = lVar2 + -1;
        uStack_138 = puVar4[0x15];
        uStack_140 = puVar4[0x14];
        uStack_128 = puVar4[0x17];
        uStack_130 = puVar4[0x16];
        uStack_120 = *(undefined1 *)(puVar4 + 0x18);
        uStack_178 = puVar4[0xd];
        uStack_180 = puVar4[0xc];
        uStack_168 = puVar4[0xf];
        uStack_170 = puVar4[0xe];
        uStack_158 = puVar4[0x11];
        uStack_160 = puVar4[0x10];
        uStack_148 = puVar4[0x13];
        uStack_150 = puVar4[0x12];
        uStack_1b8 = puVar4[5];
        uStack_1c0 = puVar4[4];
        uStack_1a8 = puVar4[7];
        uStack_1b0 = puVar4[6];
        uStack_198 = puVar4[9];
        uStack_1a0 = puVar4[8];
        uStack_188 = puVar4[0xb];
        uStack_190 = puVar4[10];
        uStack_1d8 = puVar4[1];
        uStack_1e0 = *puVar4;
        uStack_1c8 = puVar4[3];
        uStack_1d0 = puVar4[2];
        uStack_68 = puVar5[0x15];
        uStack_70 = puVar5[0x14];
        uStack_58 = puVar5[0x17];
        uStack_60 = puVar5[0x16];
        uStack_50 = *(undefined1 *)(puVar5 + 0x18);
        uStack_a8 = puVar5[0xd];
        uStack_b0 = puVar5[0xc];
        uStack_98 = puVar5[0xf];
        uStack_a0 = puVar5[0xe];
        uStack_88 = puVar5[0x11];
        uStack_90 = puVar5[0x10];
        uStack_78 = puVar5[0x13];
        uStack_80 = puVar5[0x12];
        uStack_e8 = puVar5[5];
        uStack_f0 = puVar5[4];
        uStack_d8 = puVar5[7];
        uStack_e0 = puVar5[6];
        uStack_c8 = puVar5[9];
        uStack_d0 = puVar5[8];
        uStack_b8 = puVar5[0xb];
        uStack_c0 = puVar5[10];
        uStack_108 = puVar5[1];
        uStack_110 = *puVar5;
        uStack_f8 = puVar5[3];
        uStack_100 = puVar5[2];
        FUN_104603a58(&uStack_1e0,auStack_2a8);
        FUN_104603a58(&uStack_110,auStack_2a8);
        puVar1 = &uStack_1e0;
        func_0x0001045f5e24(puVar1,&uStack_110);
        uVar3 = (uint)puVar1;
        func_0x000104603a8c(&uStack_110);
        func_0x000104603a8c(&uStack_1e0);
        if (((ulong)puVar1 & 1) == 0) break;
        puVar5 = puVar5 + 0x19;
        puVar4 = puVar4 + 0x19;
      } while (lVar2 != 0);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3 & 1;
}



/* Entry: 1045bbc90; end: 1045bbeab;  */

undefined8 FUN_1045bbc90(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_110 [64];
  ulong uStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  undefined2 uStack_a8;
  undefined6 uStack_a6;
  undefined2 uStack_a0;
  undefined6 uStack_9e;
  byte bStack_98;
  byte bStack_97;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined2 uStack_68;
  undefined6 uStack_66;
  undefined2 uStack_60;
  undefined6 uStack_5e;
  byte bStack_58;
  byte bStack_57;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != *(long *)(param_2 + 0x10)) {
    return 0;
  }
  if ((lVar2 == 0) || (param_1 == param_2)) {
    return 1;
  }
  puVar3 = (ulong *)(param_1 + 0x20);
  puVar4 = (undefined8 *)(param_2 + 0x20);
  while( true ) {
    lVar2 = lVar2 + -1;
    uStack_c8 = puVar3[1];
    uStack_d0 = *puVar3;
    uVar6 = puVar3[3];
    uVar5 = puVar3[2];
    uStack_b0 = puVar3[4];
    uStack_a8 = (undefined2)puVar3[5];
    uVar7 = *(undefined8 *)((long)puVar3 + 0x32);
    uStack_9e = (undefined6)uVar7;
    bStack_98 = (byte)((ulong)uVar7 >> 0x30);
    bStack_97 = (byte)((ulong)uVar7 >> 0x38);
    uStack_a6 = (undefined6)*(undefined8 *)((long)puVar3 + 0x2a);
    uStack_a0 = (undefined2)((ulong)*(undefined8 *)((long)puVar3 + 0x2a) >> 0x30);
    uStack_88 = puVar4[1];
    uStack_90 = *puVar4;
    uStack_78 = puVar4[3];
    uVar7 = puVar4[2];
    uStack_70 = puVar4[4];
    uStack_68 = (undefined2)puVar4[5];
    uVar8 = *(undefined8 *)((long)puVar4 + 0x32);
    uStack_5e = (undefined6)uVar8;
    bStack_58 = (byte)((ulong)uVar8 >> 0x30);
    bStack_57 = (byte)((ulong)uVar8 >> 0x38);
    uStack_66 = (undefined6)*(undefined8 *)((long)puVar4 + 0x2a);
    uStack_60 = (undefined2)((ulong)*(undefined8 *)((long)puVar4 + 0x2a) >> 0x30);
    uStack_c0._4_1_ = (char)(uVar5 >> 0x20);
    uStack_80._4_1_ = (char)((ulong)uVar7 >> 0x20);
    if (uStack_c0._4_1_ == '\x01') {
      if (uStack_80._4_1_ != '\x01') {
        return 0;
      }
    }
    else {
      if (uStack_80._4_1_ == '\x01') {
        return 0;
      }
      uStack_80._0_4_ = (int)uVar7;
      uStack_c0._0_4_ = (int)uVar5;
      if ((int)uStack_c0 != (int)uStack_80) {
        return 0;
      }
    }
    uStack_c0 = uVar5;
    uStack_b8 = uVar6;
    uStack_80 = uVar7;
    if (uStack_b0 == 0) {
      if (uStack_70 != 0) {
        return 0;
      }
    }
    else {
      if (uStack_70 == 0) {
        return 0;
      }
      if (((uVar6 != uStack_78) || (uStack_b0 != uStack_70)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar6 & 1) == 0)) {
        return 0;
      }
    }
    lVar1 = CONCAT62(uStack_5e,uStack_60);
    if (CONCAT62(uStack_9e,uStack_a0) == 0) {
      if (lVar1 != 0) {
        return 0;
      }
    }
    else {
      if (lVar1 == 0) {
        return 0;
      }
      uVar6 = CONCAT62(uStack_a6,uStack_a8);
      if (((uVar6 != CONCAT62(uStack_66,uStack_68)) || (CONCAT62(uStack_9e,uStack_a0) != lVar1)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar6 & 1) == 0)) {
        return 0;
      }
    }
    uVar8 = uStack_88;
    uVar7 = uStack_90;
    uVar5 = uStack_c8;
    uVar6 = uStack_d0;
    if (bStack_98 == 2) {
      if (bStack_58 != 2) {
        return 0;
      }
    }
    else {
      if (bStack_58 == 2) {
        return 0;
      }
      if (((bStack_98 ^ bStack_58) & 1) != 0) {
        return 0;
      }
    }
    if (bStack_97 == 2) {
      if (bStack_57 != 2) {
        return 0;
      }
    }
    else {
      if (bStack_57 == 2) {
        return 0;
      }
      if (((bStack_97 ^ bStack_57) & 1) != 0) {
        return 0;
      }
    }
    func_0x000104604394(&uStack_d0,auStack_110);
    func_0x000104604394(&uStack_90,auStack_110);
    func_0x000100e25fcc(uVar6,uVar5,uVar7,uVar8);
    func_0x0001046043c8(&uStack_90);
    func_0x0001046043c8(&uStack_d0);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    if (lVar2 == 0) break;
    puVar3 = puVar3 + 8;
    puVar4 = puVar4 + 8;
  }
  return 1;
}



/* Entry: 1045bbeac; end: 1045bed7b;  */

undefined8 FUN_1045bbeac(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  int *piVar5;
  int *piVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined1 auStack_148 [72];
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  ulong uStack_e8;
  long lStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  ulong uStack_c8;
  long lStack_c0;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  ulong uStack_88;
  long lStack_80;
  ulong uStack_78;
  long lStack_70;
  
  lVar9 = *(long *)(param_1 + 0x10);
  if (lVar9 == *(long *)(param_2 + 0x10)) {
    if ((lVar9 != 0) && (param_1 != param_2)) {
      lVar10 = 0;
      do {
        plVar7 = (long *)(param_1 + 0x20 + lVar10 * 0x48);
        uVar11 = plVar7[5];
        lStack_e0 = plVar7[4];
        uStack_c8 = plVar7[7];
        lStack_d0 = plVar7[6];
        lStack_c0 = plVar7[8];
        lStack_f8 = plVar7[1];
        lStack_100 = *plVar7;
        uStack_e8 = plVar7[3];
        lStack_f0 = plVar7[2];
        plVar7 = (long *)(param_2 + 0x20 + lVar10 * 0x48);
        lStack_70 = plVar7[8];
        uStack_88 = plVar7[5];
        lStack_90 = plVar7[4];
        uStack_78 = plVar7[7];
        lStack_80 = plVar7[6];
        lStack_a8 = plVar7[1];
        lStack_b0 = *plVar7;
        lStack_98 = plVar7[3];
        lStack_a0 = plVar7[2];
        lVar4 = *(long *)(lStack_100 + 0x10);
        if (lVar4 != *(long *)(lStack_b0 + 0x10)) goto LAB_1045bc0fc;
        if ((lVar4 != 0) && (lStack_100 != lStack_b0)) {
          piVar5 = (int *)(lStack_100 + 0x20);
          piVar6 = (int *)(lStack_b0 + 0x20);
          do {
            if (*piVar5 != *piVar6) goto LAB_1045bc0fc;
            lVar4 = lVar4 + -1;
            piVar5 = piVar5 + 1;
            piVar6 = piVar6 + 1;
          } while (lVar4 != 0);
        }
        lVar4 = *(long *)(lStack_f8 + 0x10);
        if (lVar4 != *(long *)(lStack_a8 + 0x10)) goto LAB_1045bc0fc;
        if (lVar4 != 0 && lStack_f8 != lStack_a8) {
          piVar5 = (int *)(lStack_f8 + 0x20);
          piVar6 = (int *)(lStack_a8 + 0x20);
          do {
            if (*piVar5 != *piVar6) goto LAB_1045bc0fc;
            lVar4 = lVar4 + -1;
            piVar5 = piVar5 + 1;
            piVar6 = piVar6 + 1;
          } while (lVar4 != 0);
        }
        uStack_d8 = uVar11;
        if (lStack_d0 == 0) {
          if (lStack_80 != 0) goto LAB_1045bc0fc;
        }
        else if ((lStack_80 == 0) ||
                (((uVar11 != uStack_88 || (lStack_d0 != lStack_80)) &&
                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (), (uVar11 & 1) == 0)))) goto LAB_1045bc0fc;
        if (lStack_c0 == 0) {
          if (lStack_70 != 0) goto LAB_1045bc0fc;
        }
        else if ((lStack_70 == 0) ||
                (((uStack_c8 != uStack_78 || (lStack_c0 != lStack_70)) &&
                 (uVar11 = uStack_c8,
                 __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                           (), (uVar11 & 1) == 0)))) goto LAB_1045bc0fc;
        lVar4 = *(long *)(lStack_f0 + 0x10);
        if (lVar4 != *(long *)(lStack_a0 + 0x10)) goto LAB_1045bc0fc;
        if ((lVar4 != 0) && (lStack_f0 != lStack_a0)) {
          plVar7 = (long *)(lStack_a0 + 0x28);
          plVar8 = (long *)(lStack_f0 + 0x28);
          do {
            uVar11 = plVar8[-1];
            if ((uVar11 != plVar7[-1] || *plVar8 != *plVar7) &&
               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (), (uVar11 & 1) == 0)) goto LAB_1045bc0fc;
            plVar7 = plVar7 + 2;
            plVar8 = plVar8 + 2;
            lVar4 = lVar4 + -1;
          } while (lVar4 != 0);
        }
        lVar2 = lStack_90;
        lVar1 = lStack_98;
        lVar4 = lStack_e0;
        uVar11 = uStack_e8;
        func_0x000104603bf4(&lStack_100,auStack_148);
        func_0x000104603bf4(&lStack_b0,auStack_148);
        func_0x000100e25fcc(uVar11,lVar4,lVar1,lVar2);
        func_0x000104603c28(&lStack_b0);
        func_0x000104603c28(&lStack_100);
        if ((uVar11 & 1) == 0) goto LAB_1045bc0fc;
        lVar10 = lVar10 + 1;
      } while (lVar10 != lVar9);
    }
    uVar3 = 1;
  }
  else {
LAB_1045bc0fc:
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 1045bed7c; end: 1045befbb;  */

void FUN_1045bed7c(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_66 [4];
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined1 uStack_60;
  undefined1 uStack_5f;
  undefined1 uStack_5e;
  undefined1 uStack_5d;
  undefined1 uStack_5c;
  undefined1 uStack_5b;
  undefined1 uStack_5a;
  undefined1 uStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = (uint)((ulong)param_3 >> 0x20);
  uVar6 = uVar2 >> 0x1e;
  lVar7 = (long)param_2 >> 0x20;
  if (uVar2 >> 0x1e < 2) {
    if (uVar6 == 0) {
      if (((ulong)param_3 & 0xff000000000000) != 0) {
LAB_1045bedec:
        if (param_1[0x50] == '\x01') {
          if (uVar6 == 2) {
            lVar7 = *(long *)(param_2 + 0x10);
            lVar8 = *(long *)(param_2 + 0x18);
            puVar5 = param_1;
            __s10Foundation13__DataStorageC6_bytesSvSgvg();
            puVar4 = puVar5;
            if (puVar5 != (undefined1 *)0x0) {
              __s10Foundation13__DataStorageC7_offsetSivg();
              if (SBORROW8(lVar7,(long)puVar4)) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x1045befb4);
                (*pcVar3)();
              }
              puVar5 = puVar5 + (lVar7 - (long)puVar4);
            }
            puVar1 = (undefined1 *)(lVar8 - lVar7);
            if (SBORROW8(lVar8,lVar7)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1045befb0);
              (*pcVar3)();
            }
            __s10Foundation13__DataStorageC7_lengthSivg();
            if ((long)puVar1 <= (long)puVar4) {
              puVar4 = puVar1;
            }
            param_2 = (undefined1 *)0x0;
            if (puVar5 != (undefined1 *)0x0) {
              param_2 = puVar4 + (long)puVar5;
            }
          }
          else if (uVar6 == 1) {
            lVar8 = (long)(int)param_2;
            if (lVar7 < lVar8) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1045befac);
              (*pcVar3)();
            }
            puVar5 = param_1;
            __s10Foundation13__DataStorageC6_bytesSvSgvg();
            if (puVar5 == (undefined1 *)0x0) {
              __s10Foundation13__DataStorageC7_lengthSivg();
              puVar5 = (undefined1 *)0x0;
            }
            else {
              param_2 = puVar5;
              __s10Foundation13__DataStorageC7_offsetSivg();
              if (SBORROW8(lVar8,(long)param_2)) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x1045befb8);
                (*pcVar3)();
              }
              puVar5 = puVar5 + (lVar8 - (long)param_2);
              __s10Foundation13__DataStorageC7_lengthSivg();
              if (puVar5 != (undefined1 *)0x0) {
                if (lVar7 - lVar8 <= (long)param_2) {
                  param_2 = (undefined1 *)(lVar7 - lVar8);
                }
                param_2 = param_2 + (long)puVar5;
                goto LAB_1045bef70;
              }
            }
            param_2 = (undefined1 *)0x0;
          }
          else {
            auStack_66[0] = SUB81(param_2,0);
            auStack_66[1] = (undefined1)((ulong)param_2 >> 8);
            auStack_66[2] = (undefined1)((ulong)param_2 >> 0x10);
            auStack_66[3] = (undefined1)((ulong)param_2 >> 0x18);
            uStack_62 = (undefined1)((ulong)param_2 >> 0x20);
            uStack_61 = (undefined1)((ulong)param_2 >> 0x28);
            uStack_60 = (undefined1)((ulong)param_2 >> 0x30);
            uStack_5f = (undefined1)((ulong)param_2 >> 0x38);
            uStack_5e = SUB81(param_3,0);
            uStack_5d = (undefined1)((ulong)param_3 >> 8);
            uStack_5c = (undefined1)((ulong)param_3 >> 0x10);
            uStack_5b = (undefined1)((ulong)param_3 >> 0x18);
            uStack_5a = (undefined1)((ulong)param_3 >> 0x20);
            uStack_59 = (undefined1)((ulong)param_3 >> 0x28);
            puVar5 = auStack_66;
            param_2 = auStack_66 + ((ulong)param_3 >> 0x30 & 0xff);
          }
LAB_1045bef70:
          FUN_1045a2628(puVar5);
          param_3 = param_1;
        }
      }
    }
    else if ((int)param_2 != lVar7) goto LAB_1045bedec;
  }
  else if ((uVar6 == 2) && (*(long *)(param_2 + 0x10) != *(long *)(param_2 + 0x18)))
  goto LAB_1045bedec;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  uVar2 = (uint)((ulong)param_3 >> 0x20);
  uVar6 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar6 == 0) {
      if (((ulong)param_3 & 0xff000000000000) != 0) {
LAB_1045befec:
        __s10Foundation4DataV4hash4intoys6HasherVz_tF();
        return;
      }
    }
    else if ((long)(int)param_2 != (long)param_2 >> 0x20) goto LAB_1045befec;
  }
  else if ((uVar6 == 2) && (*(long *)(param_2 + 0x10) != *(long *)(param_2 + 0x18)))
  goto LAB_1045befec;
  return;
}



/* Entry: 1045befbc; end: 1045bf023;  */

void FUN_1045befbc(undefined8 param_1,long param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)(param_3 >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 == 0) {
      if ((param_3 & 0xff000000000000) != 0) {
LAB_1045befec:
        __s10Foundation4DataV4hash4intoys6HasherVz_tF();
        return;
      }
    }
    else if ((int)param_2 != (int)((ulong)param_2 >> 0x20)) goto LAB_1045befec;
  }
  else if ((uVar2 == 2) && (*(long *)(param_2 + 0x10) != *(long *)(param_2 + 0x18)))
  goto LAB_1045befec;
  return;
}



/* Entry: 1045bf024; end: 1045bf567;  */

/* WARNING: Removing unreachable block (ram,0x0001045bf114) */
/* WARNING: Removing unreachable block (ram,0x0001045bf18c) */

void FUN_1045bf024(undefined8 *param_1,long param_2,long param_3,ulong param_4,undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined1 auStack_2e8 [200];
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
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
  undefined1 uStack_70;
  
  uStack_158 = param_1[5];
  uStack_160 = param_1[4];
  uStack_148 = param_1[7];
  uStack_150 = param_1[6];
  uStack_140 = param_1[8];
  uStack_178 = param_1[1];
  uStack_180 = *param_1;
  uStack_168 = param_1[3];
  uStack_170 = param_1[2];
  lVar5 = *(long *)(param_2 + 0x10);
  if (lVar5 != 0) {
    __ss6HasherV8_combineyySuF(1);
    uStack_1a8 = uStack_158;
    uStack_1b0 = uStack_160;
    uStack_198 = uStack_148;
    uStack_1a0 = uStack_150;
    uStack_190 = uStack_140;
    uStack_1c8 = uStack_178;
    uStack_1d0 = uStack_180;
    uStack_1b8 = uStack_168;
    uStack_1c0 = uStack_170;
    puVar4 = (undefined8 *)(param_2 + 0x20);
    while( true ) {
      lVar5 = lVar5 + -1;
      uStack_88 = puVar4[0x15];
      uStack_90 = puVar4[0x14];
      uStack_78 = puVar4[0x17];
      uStack_80 = puVar4[0x16];
      uStack_70 = *(undefined1 *)(puVar4 + 0x18);
      uStack_c8 = puVar4[0xd];
      uStack_d0 = puVar4[0xc];
      uStack_b8 = puVar4[0xf];
      uStack_c0 = puVar4[0xe];
      uStack_a8 = puVar4[0x11];
      uStack_b0 = puVar4[0x10];
      uStack_98 = puVar4[0x13];
      uStack_a0 = puVar4[0x12];
      uStack_108 = puVar4[5];
      uStack_110 = puVar4[4];
      uStack_f8 = puVar4[7];
      uStack_100 = puVar4[6];
      uStack_e8 = puVar4[9];
      uStack_f0 = puVar4[8];
      uStack_d8 = puVar4[0xb];
      uStack_e0 = puVar4[10];
      uStack_128 = puVar4[1];
      uStack_130 = *puVar4;
      uStack_118 = puVar4[3];
      uStack_120 = puVar4[2];
      uStack_1f8 = uStack_1a8;
      uStack_200 = uStack_1b0;
      uStack_1e8 = uStack_198;
      uStack_1f0 = uStack_1a0;
      uStack_1e0 = uStack_190;
      uStack_218 = uStack_1c8;
      uStack_220 = uStack_1d0;
      uStack_208 = uStack_1b8;
      uStack_210 = uStack_1c0;
      FUN_104603a58(&uStack_130,auStack_2e8);
      FUN_1045d5f1c(&uStack_220);
      func_0x000104603a8c(&uStack_130);
      if (lVar5 == 0) break;
      uStack_1a8 = uStack_1f8;
      uStack_1b0 = uStack_200;
      uStack_198 = uStack_1e8;
      uStack_1a0 = uStack_1f0;
      uStack_190 = uStack_1e0;
      uStack_1c8 = uStack_218;
      uStack_1d0 = uStack_220;
      uStack_1b8 = uStack_208;
      uStack_1c0 = uStack_210;
      puVar4 = puVar4 + 0x19;
    }
    uStack_158 = uStack_1f8;
    uStack_160 = uStack_200;
    uStack_148 = uStack_1e8;
    uStack_150 = uStack_1f0;
    uStack_140 = uStack_1e0;
    uStack_178 = uStack_218;
    uStack_180 = uStack_220;
    uStack_168 = uStack_208;
    uStack_170 = uStack_210;
  }
  FUN_1045ae514(&uStack_180,536000000,0x1ff2b601,param_5);
  uVar1 = (uint)(param_4 >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 != 0) {
      lVar5 = (long)(int)param_3;
      lVar3 = param_3 >> 0x20;
      goto LAB_1045bf200;
    }
    if ((param_4 & 0xff000000000000) == 0) goto LAB_1045bf194;
  }
  else {
    if (uVar2 != 2) goto LAB_1045bf194;
    lVar5 = *(long *)(param_3 + 0x10);
    lVar3 = *(long *)(param_3 + 0x18);
LAB_1045bf200:
    if (lVar5 == lVar3) goto LAB_1045bf194;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_180,param_3,param_4);
LAB_1045bf194:
  param_1[5] = uStack_158;
  param_1[4] = uStack_160;
  param_1[7] = uStack_148;
  param_1[6] = uStack_150;
  param_1[8] = uStack_140;
  param_1[1] = uStack_178;
  *param_1 = uStack_180;
  param_1[3] = uStack_168;
  param_1[2] = uStack_170;
  return;
}



/* Entry: 1045bf568; end: 1045bf767;  */

void FUN_1045bf568(undefined8 *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_50 = param_1[8];
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  lVar4 = unaff_x20[3];
  if (lVar4 != 0) {
    lVar5 = unaff_x20[2];
    __ss6HasherV8_combineyySuF(1);
    __sSS4hash4intoys6HasherVz_tF(&uStack_90,lVar5,lVar4);
  }
  bVar1 = *(byte *)(unaff_x20 + 4);
  if (bVar1 != 2) {
    __ss6HasherV8_combineyySuF(2);
    __ss6HasherV8_combineyys5UInt8VF(bVar1 & 1);
  }
  lVar4 = *unaff_x20;
  uVar2 = (uint)((ulong)unaff_x20[1] >> 0x20);
  uVar3 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar3 != 0) {
      lVar5 = (long)(int)lVar4;
      lVar4 = lVar4 >> 0x20;
      goto LAB_1045bf624;
    }
    if ((unaff_x20[1] & 0xff000000000000U) == 0) goto LAB_1045bf634;
  }
  else {
    if (uVar3 != 2) goto LAB_1045bf634;
    lVar5 = *(long *)(lVar4 + 0x10);
    lVar4 = *(long *)(lVar4 + 0x18);
LAB_1045bf624:
    if (lVar5 == lVar4) goto LAB_1045bf634;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_90);
LAB_1045bf634:
  param_1[5] = uStack_68;
  param_1[4] = uStack_70;
  param_1[7] = uStack_58;
  param_1[6] = uStack_60;
  param_1[8] = uStack_50;
  param_1[1] = uStack_88;
  *param_1 = uStack_90;
  param_1[3] = uStack_78;
  param_1[2] = uStack_80;
  return;
}



/* Entry: 1045bf768; end: 1045bfa3f;  */

/* WARNING: Removing unreachable block (ram,0x0001045bf834) */
/* WARNING: Removing unreachable block (ram,0x0001045bf8a0) */

void FUN_1045bf768(undefined8 *param_1)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long *unaff_x20;
  long lVar6;
  long lVar7;
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
  
  uStack_78 = param_1[5];
  uStack_80 = param_1[4];
  uStack_68 = param_1[7];
  uStack_70 = param_1[6];
  uStack_60 = param_1[8];
  uStack_98 = param_1[1];
  uStack_a0 = *param_1;
  uStack_88 = param_1[3];
  uStack_90 = param_1[2];
  bVar2 = *(byte *)(unaff_x20 + 8);
  if (bVar2 != 2) {
    __ss6HasherV8_combineyySuF(0x21);
    __ss6HasherV8_combineyys5UInt8VF(bVar2 & 1);
  }
  lVar6 = unaff_x20[6];
  if (lVar6 != 0) {
    lVar5 = unaff_x20[4];
    lVar1 = unaff_x20[5];
    lVar7 = unaff_x20[7];
    __ss6HasherV8_combineyySuF(0x22);
    uStack_c8 = uStack_78;
    uStack_d0 = uStack_80;
    uStack_b8 = uStack_68;
    uStack_c0 = uStack_70;
    uStack_b0 = uStack_60;
    uStack_e8 = uStack_98;
    uStack_f0 = uStack_a0;
    uStack_d8 = uStack_88;
    uStack_e0 = uStack_90;
    func_0x00010006c00c(lVar5,lVar1);
    _swift_bridgeObjectRetain(lVar6);
    FUN_1045ee434(&uStack_f0,lVar5,lVar1,lVar6,lVar7);
    func_0x00010458a4f4(lVar5,lVar1,lVar6,lVar7);
    uStack_78 = uStack_c8;
    uStack_80 = uStack_d0;
    uStack_68 = uStack_b8;
    uStack_70 = uStack_c0;
    uStack_60 = uStack_b0;
    uStack_98 = uStack_e8;
    uStack_a0 = uStack_f0;
    uStack_88 = uStack_d8;
    uStack_90 = uStack_e0;
  }
  if (*(long *)(*unaff_x20 + 0x10) != 0) {
    FUN_10460e87c(*unaff_x20,999);
  }
  FUN_1045ae514(&uStack_a0,1000,0x20000000,unaff_x20[3]);
  lVar6 = unaff_x20[1];
  uVar3 = (uint)((ulong)unaff_x20[2] >> 0x20);
  uVar4 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar4 != 0) {
      lVar5 = (long)(int)lVar6;
      lVar6 = lVar6 >> 0x20;
      goto LAB_1045bf914;
    }
    if ((unaff_x20[2] & 0xff000000000000U) == 0) goto LAB_1045bf8a8;
  }
  else {
    if (uVar4 != 2) goto LAB_1045bf8a8;
    lVar5 = *(long *)(lVar6 + 0x10);
    lVar6 = *(long *)(lVar6 + 0x18);
LAB_1045bf914:
    if (lVar5 == lVar6) goto LAB_1045bf8a8;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_a0);
LAB_1045bf8a8:
  param_1[5] = uStack_78;
  param_1[4] = uStack_80;
  param_1[7] = uStack_68;
  param_1[6] = uStack_70;
  param_1[8] = uStack_60;
  param_1[1] = uStack_98;
  *param_1 = uStack_a0;
  param_1[3] = uStack_88;
  param_1[2] = uStack_90;
  return;
}



/* Entry: 1045bfa40; end: 1045bfb8b;  */

void FUN_1045bfa40(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  long *unaff_x20;
  long lVar3;
  long lVar4;
  undefined1 auStack_190 [64];
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  uStack_90 = param_1[8];
  uStack_c8 = param_1[1];
  uStack_d0 = *param_1;
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  lVar3 = unaff_x20[3];
  if (lVar3 != 0) {
    lVar4 = unaff_x20[2];
    __ss6HasherV8_combineyySuF(1);
    __sSS4hash4intoys6HasherVz_tF(&uStack_d0,lVar4,lVar3);
  }
  lStack_108 = unaff_x20[5];
  lStack_110 = unaff_x20[4];
  lStack_f8 = unaff_x20[7];
  lStack_100 = unaff_x20[6];
  lStack_e8 = unaff_x20[9];
  lStack_f0 = unaff_x20[8];
  lStack_d8 = unaff_x20[0xb];
  lStack_e0 = unaff_x20[10];
  if (lStack_110 != 0) {
    lStack_78 = unaff_x20[5];
    lStack_80 = unaff_x20[4];
    lStack_68 = unaff_x20[7];
    lStack_70 = unaff_x20[6];
    lStack_58 = unaff_x20[9];
    lStack_60 = unaff_x20[8];
    lStack_48 = unaff_x20[0xb];
    lStack_50 = unaff_x20[10];
    __ss6HasherV8_combineyySuF(2);
    lStack_148 = unaff_x20[5];
    lStack_150 = unaff_x20[4];
    lStack_138 = unaff_x20[7];
    lStack_140 = unaff_x20[6];
    lStack_128 = unaff_x20[9];
    lStack_130 = unaff_x20[8];
    lStack_118 = unaff_x20[0xb];
    lStack_120 = unaff_x20[10];
    func_0x0001045f8a7c(&lStack_150,auStack_190);
    FUN_1045bfb8c(&uStack_d0);
    func_0x000104603c54(&lStack_110,0x113087028,&UNK_10dd18940);
  }
  lVar3 = *unaff_x20;
  uVar1 = (uint)((ulong)unaff_x20[1] >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 != 0) {
      lVar4 = (long)(int)lVar3;
      lVar3 = lVar3 >> 0x20;
      goto LAB_1045bfb4c;
    }
    if ((unaff_x20[1] & 0xff000000000000U) == 0) goto LAB_1045bfb5c;
  }
  else {
    if (uVar2 != 2) goto LAB_1045bfb5c;
    lVar4 = *(long *)(lVar3 + 0x10);
    lVar3 = *(long *)(lVar3 + 0x18);
LAB_1045bfb4c:
    if (lVar4 == lVar3) goto LAB_1045bfb5c;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_d0);
LAB_1045bfb5c:
  param_1[5] = uStack_a8;
  param_1[4] = uStack_b0;
  param_1[7] = uStack_98;
  param_1[6] = uStack_a0;
  param_1[8] = uStack_90;
  param_1[1] = uStack_c8;
  *param_1 = uStack_d0;
  param_1[3] = uStack_b8;
  param_1[2] = uStack_c0;
  return;
}



/* Entry: 1045bfb8c; end: 1045bfd27;  */

/* WARNING: Removing unreachable block (ram,0x0001045bfc34) */
/* WARNING: Removing unreachable block (ram,0x0001045bfca0) */

void FUN_1045bfb8c(undefined8 *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *unaff_x20;
  long lVar5;
  long lVar6;
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
  
  uStack_78 = param_1[5];
  uStack_80 = param_1[4];
  uStack_68 = param_1[7];
  uStack_70 = param_1[6];
  uStack_60 = param_1[8];
  uStack_98 = param_1[1];
  uStack_a0 = *param_1;
  uStack_88 = param_1[3];
  uStack_90 = param_1[2];
  lVar5 = unaff_x20[6];
  if (lVar5 != 0) {
    lVar4 = unaff_x20[4];
    lVar1 = unaff_x20[5];
    lVar6 = unaff_x20[7];
    __ss6HasherV8_combineyySuF(1);
    uStack_c8 = uStack_78;
    uStack_d0 = uStack_80;
    uStack_b8 = uStack_68;
    uStack_c0 = uStack_70;
    uStack_b0 = uStack_60;
    uStack_e8 = uStack_98;
    uStack_f0 = uStack_a0;
    uStack_d8 = uStack_88;
    uStack_e0 = uStack_90;
    func_0x00010006c00c(lVar4,lVar1);
    _swift_bridgeObjectRetain(lVar5);
    FUN_1045ee434(&uStack_f0,lVar4,lVar1,lVar5,lVar6);
    func_0x00010458a4f4(lVar4,lVar1,lVar5,lVar6);
    uStack_78 = uStack_c8;
    uStack_80 = uStack_d0;
    uStack_68 = uStack_b8;
    uStack_70 = uStack_c0;
    uStack_60 = uStack_b0;
    uStack_98 = uStack_e8;
    uStack_a0 = uStack_f0;
    uStack_88 = uStack_d8;
    uStack_90 = uStack_e0;
  }
  if (*(long *)(*unaff_x20 + 0x10) != 0) {
    FUN_10460e87c(*unaff_x20,999);
  }
  FUN_1045ae514(&uStack_a0,1000,0x20000000,unaff_x20[3]);
  lVar5 = unaff_x20[1];
  uVar2 = (uint)((ulong)unaff_x20[2] >> 0x20);
  uVar3 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar3 != 0) {
      lVar4 = (long)(int)lVar5;
      lVar5 = lVar5 >> 0x20;
      goto LAB_1045bfd14;
    }
    if ((unaff_x20[2] & 0xff000000000000U) == 0) goto LAB_1045bfca8;
  }
  else {
    if (uVar3 != 2) goto LAB_1045bfca8;
    lVar4 = *(long *)(lVar5 + 0x10);
    lVar5 = *(long *)(lVar5 + 0x18);
LAB_1045bfd14:
    if (lVar4 == lVar5) goto LAB_1045bfca8;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_a0);
LAB_1045bfca8:
  param_1[5] = uStack_78;
  param_1[4] = uStack_80;
  param_1[7] = uStack_68;
  param_1[6] = uStack_70;
  param_1[8] = uStack_60;
  param_1[1] = uStack_98;
  *param_1 = uStack_a0;
  param_1[3] = uStack_88;
  param_1[2] = uStack_90;
  return;
}



/* Entry: 1045bfd28; end: 1045bfeff;  */

void FUN_1045bfd28(undefined8 *param_1,long param_2,long param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_50 = param_1[8];
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  if (*(long *)(param_2 + 0x10) != 0) {
    __ss6HasherV8_combineyySuF(1);
    FUN_104618d94(&uStack_90,param_2);
  }
  uVar1 = (uint)(param_4 >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 != 0) {
      lVar3 = (long)(int)param_3;
      lVar4 = param_3 >> 0x20;
      goto LAB_1045bfdbc;
    }
    if ((param_4 & 0xff000000000000) == 0) goto LAB_1045bfdd4;
  }
  else {
    if (uVar2 != 2) goto LAB_1045bfdd4;
    lVar3 = *(long *)(param_3 + 0x10);
    lVar4 = *(long *)(param_3 + 0x18);
LAB_1045bfdbc:
    if (lVar3 == lVar4) goto LAB_1045bfdd4;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_90,param_3,param_4);
LAB_1045bfdd4:
  param_1[5] = uStack_68;
  param_1[4] = uStack_70;
  param_1[7] = uStack_58;
  param_1[6] = uStack_60;
  param_1[8] = uStack_50;
  param_1[1] = uStack_88;
  *param_1 = uStack_90;
  param_1[3] = uStack_78;
  param_1[2] = uStack_80;
  return;
}



/* Entry: 1045bff00; end: 1045c00cf;  */

void FUN_1045bff00(double param_1,undefined8 *param_2,long param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  double dVar4;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_68 = param_2[5];
  uStack_70 = param_2[4];
  uStack_58 = param_2[7];
  uStack_60 = param_2[6];
  uStack_50 = param_2[8];
  uStack_88 = param_2[1];
  uStack_90 = *param_2;
  uStack_78 = param_2[3];
  uStack_80 = param_2[2];
  if (param_1 != 0.0) {
    __ss6HasherV8_combineyySuF(1);
    dVar4 = 0.0;
    if (param_1 != 0.0) {
      dVar4 = param_1;
    }
    __ss6HasherV8_combineyys6UInt64VF(dVar4);
  }
  uVar1 = (uint)(param_4 >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 != 0) {
      lVar3 = (long)(int)param_3;
      param_3 = param_3 >> 0x20;
      goto LAB_1045bffa8;
    }
    if ((param_4 & 0xff000000000000) == 0) goto LAB_1045bffb8;
  }
  else {
    if (uVar2 != 2) goto LAB_1045bffb8;
    lVar3 = *(long *)(param_3 + 0x10);
    param_3 = *(long *)(param_3 + 0x18);
LAB_1045bffa8:
    if (lVar3 == param_3) goto LAB_1045bffb8;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_90);
LAB_1045bffb8:
  param_2[5] = uStack_68;
  param_2[4] = uStack_70;
  param_2[7] = uStack_58;
  param_2[6] = uStack_60;
  param_2[8] = uStack_50;
  param_2[1] = uStack_88;
  *param_2 = uStack_90;
  param_2[3] = uStack_78;
  param_2[2] = uStack_80;
  return;
}



/* Entry: 1045c00d0; end: 1045c0357;  */

void FUN_1045c00d0(undefined8 *param_1,long param_2,long param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_50 = param_1[8];
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  if (param_2 != 0) {
    __ss6HasherV8_combineyySuF(1);
    __ss6HasherV8_combineyys6UInt64VF(param_2);
  }
  uVar1 = (uint)(param_4 >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 != 0) {
      lVar3 = (long)(int)param_3;
      lVar4 = param_3 >> 0x20;
      goto LAB_1045c0160;
    }
    if ((param_4 & 0xff000000000000) == 0) goto LAB_1045c0178;
  }
  else {
    if (uVar2 != 2) goto LAB_1045c0178;
    lVar3 = *(long *)(param_3 + 0x10);
    lVar4 = *(long *)(param_3 + 0x18);
LAB_1045c0160:
    if (lVar3 == lVar4) goto LAB_1045c0178;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_90,param_3,param_4);
LAB_1045c0178:
  param_1[5] = uStack_68;
  param_1[4] = uStack_70;
  param_1[7] = uStack_58;
  param_1[6] = uStack_60;
  param_1[8] = uStack_50;
  param_1[1] = uStack_88;
  *param_1 = uStack_90;
  param_1[3] = uStack_78;
  param_1[2] = uStack_80;
  return;
}



/* Entry: 1045c0358; end: 1045c0423;  */

void FUN_1045c0358(undefined8 *param_1,ulong param_2,long param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
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
  if ((param_2 & 1) != 0) {
    __ss6HasherV8_combineyySuF(1);
    __ss6HasherV8_combineyys5UInt8VF(1);
  }
  uVar1 = (uint)(param_4 >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 != 0) {
      lVar3 = (long)(int)param_3;
      lVar4 = param_3 >> 0x20;
      goto LAB_1045c03e0;
    }
    if ((param_4 & 0xff000000000000) == 0) goto LAB_1045c03f8;
  }
  else {
    if (uVar2 != 2) goto LAB_1045c03f8;
    lVar3 = *(long *)(param_3 + 0x10);
    lVar4 = *(long *)(param_3 + 0x18);
LAB_1045c03e0:
    if (lVar3 == lVar4) goto LAB_1045c03f8;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_80,param_3,param_4);
LAB_1045c03f8:
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



/* Entry: 1045c0424; end: 1045c0513;  */

void FUN_1045c0424(undefined8 *param_1,ulong param_2,ulong param_3,long param_4,ulong param_5)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_50 = param_1[8];
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uVar1 = param_2 & 0xffffffffffff;
  if ((param_3 & 0x2000000000000000) != 0) {
    uVar1 = param_3 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    __ss6HasherV8_combineyySuF(1);
    __sSS4hash4intoys6HasherVz_tF(&uStack_90,param_2,param_3);
  }
  uVar2 = (uint)(param_5 >> 0x20);
  uVar3 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar3 != 0) {
      lVar4 = (long)(int)param_4;
      lVar5 = param_4 >> 0x20;
      goto LAB_1045c04cc;
    }
    if ((param_5 & 0xff000000000000) == 0) goto LAB_1045c04e4;
  }
  else {
    if (uVar3 != 2) goto LAB_1045c04e4;
    lVar4 = *(long *)(param_4 + 0x10);
    lVar5 = *(long *)(param_4 + 0x18);
LAB_1045c04cc:
    if (lVar4 == lVar5) goto LAB_1045c04e4;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_90,param_4,param_5);
LAB_1045c04e4:
  param_1[5] = uStack_68;
  param_1[4] = uStack_70;
  param_1[7] = uStack_58;
  param_1[6] = uStack_60;
  param_1[8] = uStack_50;
  param_1[1] = uStack_88;
  *param_1 = uStack_90;
  param_1[3] = uStack_78;
  param_1[2] = uStack_80;
  return;
}



/* Entry: 1045c0514; end: 1045c05ab;  */

void FUN_1045c0514(undefined8 *param_1,long param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_1[7];
  uStack_40 = param_1[6];
  uStack_30 = param_1[8];
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uVar1 = (uint)(param_3 >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 != 0) {
      lVar3 = (long)(int)param_2;
      lVar4 = (long)(int)((ulong)param_2 >> 0x20);
      goto LAB_1045c0574;
    }
    if ((param_3 & 0xff000000000000) == 0) goto LAB_1045c0584;
  }
  else {
    if (uVar2 != 2) goto LAB_1045c0584;
    lVar3 = *(long *)(param_2 + 0x10);
    lVar4 = *(long *)(param_2 + 0x18);
LAB_1045c0574:
    if (lVar3 == lVar4) goto LAB_1045c0584;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_70);
LAB_1045c0584:
  param_1[5] = uStack_48;
  param_1[4] = uStack_50;
  param_1[7] = uStack_38;
  param_1[6] = uStack_40;
  param_1[8] = uStack_30;
  param_1[1] = uStack_68;
  *param_1 = uStack_70;
  param_1[3] = uStack_58;
  param_1[2] = uStack_60;
  return;
}



/* Entry: 1045c05ac; end: 1045c05b7;  */

undefined8 FUN_1045c05ac(void)

{
  return 0;
}



/* Entry: 1045c05b8; end: 1045c05e3;  */

void FUN_1045c05b8(void)

{
  func_0x0001000285a8(0x1130878a8,&UNK_10dd19bb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_initStaticObject_11034f440)();
  return;
}



/* Entry: 1045c05e4; end: 1045c05f7;  */

undefined8 FUN_1045c05e4(ulong param_1)

{
  return *(undefined8 *)(&UNK_10dd1eac8 + (param_1 & 0xff) * 8);
}



/* Entry: 1045c05f8; end: 1045c06e7;  */

void FUN_1045c05f8(void)

{
  byte bVar1;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(&UNK_10dd1eac8 + (ulong)bVar1 * 8));
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1045c06e8; end: 1045c06ff;  */

void FUN_1045c06e8(undefined8 *param_1)

{
  byte *unaff_x20;
  
  *param_1 = *(undefined8 *)(&UNK_10dd1eac8 + (ulong)*unaff_x20 * 8);
  return;
}



/* Entry: 1045c0700; end: 1045c0723;  */

void FUN_1045c0700(undefined1 *param_1,undefined1 param_2)

{
  func_0x0001045f830c();
  *param_1 = param_2;
  return;
}



/* Entry: 1045c0724; end: 1045c0737;  */

undefined8 FUN_1045c0724(void)

{
  byte *unaff_x20;
  
  return *(undefined8 *)(&UNK_10dd1eac8 + (ulong)*unaff_x20 * 8);
}



/* Entry: 1045c0738; end: 1045c0777;  */

void FUN_1045c0738(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x1130878a8;
  func_0x0001000285a8(0x1130878a8,&UNK_10dd19bb8);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 1045c0778; end: 1045c077f;  */

undefined8 FUN_1045c0778(void)

{
  return 0;
}



/* Entry: 1045c0780; end: 1045c07ab;  */

void FUN_1045c0780(void)

{
  func_0x0001000285a8(0x1130878e0,&UNK_10dd19bc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_initStaticObject_11034f440)();
  return;
}



/* Entry: 1045c07ac; end: 1045c07eb;  */

void FUN_1045c07ac(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x1130878e0;
  func_0x0001000285a8(0x1130878e0,&UNK_10dd19bc0);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}


