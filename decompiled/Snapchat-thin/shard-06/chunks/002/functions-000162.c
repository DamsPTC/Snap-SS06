/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1045f28e4; end: 1045f28ef;  */

void FUN_1045f28e4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined1 auStack_88 [72];
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar4 = unaff_x20[3];
  __ss6HasherV5_seedABSi_tcfC(auStack_88,0);
  (*(code *)0x1045bf21c)(auStack_88,uVar1,uVar3,uVar2,uVar4);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1045f28f0; end: 1045f2957;  */

void FUN_1045f28f0(undefined8 param_1,undefined8 param_2,code *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined1 auStack_88 [72];
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar4 = unaff_x20[3];
  __ss6HasherV5_seedABSi_tcfC(auStack_88,0);
  (*param_3)(auStack_88,uVar1,uVar3,uVar2,uVar4);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1045f2958; end: 1045f296f;  */

/* WARNING: Removing unreachable block (ram,0x0001045bf4d8) */

void FUN_1045f2958(undefined8 *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *unaff_x20;
  undefined4 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_1e8 [72];
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  ulong uStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
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
  
  lVar8 = *unaff_x20;
  lVar4 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  lVar10 = unaff_x20[3];
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_70 = param_1[8];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  lVar14 = *(long *)(lVar8 + 0x10);
  if (lVar14 != 0) {
    __ss6HasherV8_combineyySuF(1);
    lVar15 = 0;
    uStack_d8 = uStack_88;
    uStack_e0 = uStack_90;
    uStack_c8 = uStack_78;
    uStack_d0 = uStack_80;
    uStack_c0 = uStack_70;
    uStack_f8 = uStack_a8;
    uStack_100 = uStack_b0;
    uStack_e8 = uStack_98;
    uStack_f0 = uStack_a0;
    do {
      plVar7 = (long *)(lVar8 + 0x20 + lVar15 * 0x48);
      lStack_110 = plVar7[8];
      lStack_128 = plVar7[5];
      uStack_130 = plVar7[4];
      lStack_118 = plVar7[7];
      lStack_120 = plVar7[6];
      lStack_148 = plVar7[1];
      lVar9 = *plVar7;
      lStack_138 = plVar7[3];
      lStack_140 = plVar7[2];
      uStack_178 = uStack_d8;
      uStack_180 = uStack_e0;
      uStack_168 = uStack_c8;
      uStack_170 = uStack_d0;
      uStack_160 = uStack_c0;
      uStack_198 = uStack_f8;
      uStack_1a0 = uStack_100;
      uStack_188 = uStack_e8;
      uStack_190 = uStack_f0;
      lVar13 = *(long *)(lVar9 + 0x10);
      lStack_150 = lVar9;
      if (lVar13 != 0) {
        __ss6HasherV8_combineyySuF(1);
        __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar9 + 0x10));
        puVar11 = (undefined4 *)(lVar9 + 0x20);
        do {
          __ss6HasherV8_combineyys6UInt32VF(*puVar11);
          lVar13 = lVar13 + -1;
          puVar11 = puVar11 + 1;
        } while (lVar13 != 0);
      }
      lVar9 = lStack_148;
      lVar13 = *(long *)(lStack_148 + 0x10);
      if (lVar13 != 0) {
        __ss6HasherV8_combineyySuF(2);
        __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar9 + 0x10));
        puVar11 = (undefined4 *)(lVar9 + 0x20);
        do {
          __ss6HasherV8_combineyys6UInt32VF(*puVar11);
          lVar13 = lVar13 + -1;
          puVar11 = puVar11 + 1;
        } while (lVar13 != 0);
      }
      lVar9 = lStack_120;
      lVar13 = lStack_128;
      if (lStack_120 == 0) {
        func_0x000104603bf4(&lStack_150,auStack_1e8);
        lVar13 = lStack_118;
        lVar9 = lStack_110;
      }
      else {
        __ss6HasherV8_combineyySuF(3);
        func_0x000104603bf4(&lStack_150,auStack_1e8);
        __sSS4hash4intoys6HasherVz_tF(&uStack_1a0,lVar13,lVar9);
        lVar13 = lStack_118;
        lVar9 = lStack_110;
      }
      lStack_118 = lVar13;
      lStack_110 = lVar9;
      if (lVar9 != 0) {
        __ss6HasherV8_combineyySuF(4);
        __sSS4hash4intoys6HasherVz_tF(&uStack_1a0,lVar13,lVar9);
      }
      lVar9 = lStack_140;
      lVar13 = *(long *)(lStack_140 + 0x10);
      if (lVar13 != 0) {
        __ss6HasherV8_combineyySuF(6);
        __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar9 + 0x10));
        puVar12 = (undefined8 *)(lVar9 + 0x28);
        do {
          uVar1 = puVar12[-1];
          uVar3 = *puVar12;
          _swift_bridgeObjectRetain(uVar3);
          __sSS4hash4intoys6HasherVz_tF(&uStack_1a0,uVar1,uVar3);
          _swift_bridgeObjectRelease(uVar3);
          puVar12 = puVar12 + 2;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
      }
      uVar5 = (uint)(uStack_130 >> 0x20);
      uVar6 = uVar5 >> 0x1e;
      if (uVar5 >> 0x1e < 2) {
        if (uVar6 == 0) {
          if ((uStack_130 & 0xff000000000000) == 0) goto LAB_1045bf464;
        }
        else {
          lVar13 = (long)(int)lStack_138;
          lVar9 = lStack_138 >> 0x20;
LAB_1045bf454:
          if (lVar13 == lVar9) goto LAB_1045bf464;
        }
        __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_1a0);
      }
      else if (uVar6 == 2) {
        lVar13 = *(long *)(lStack_138 + 0x10);
        lVar9 = *(long *)(lStack_138 + 0x18);
        goto LAB_1045bf454;
      }
LAB_1045bf464:
      lVar15 = lVar15 + 1;
      func_0x000104603c28(&lStack_150);
      if (lVar15 == lVar14) goto LAB_1045bf494;
      uStack_d8 = uStack_178;
      uStack_e0 = uStack_180;
      uStack_c8 = uStack_168;
      uStack_d0 = uStack_170;
      uStack_c0 = uStack_160;
      uStack_f8 = uStack_198;
      uStack_100 = uStack_1a0;
      uStack_e8 = uStack_188;
      uStack_f0 = uStack_190;
    } while( true );
  }
LAB_1045bf4b0:
  FUN_1045ae514(&uStack_b0,536000000,0x1ff2b601,lVar10);
  uVar5 = (uint)(uVar2 >> 0x20);
  uVar6 = uVar5 >> 0x1e;
  if (uVar5 >> 0x1e < 2) {
    if (uVar6 != 0) {
      lVar8 = (long)(int)lVar4;
      lVar10 = lVar4 >> 0x20;
      goto LAB_1045bf54c;
    }
    if ((uVar2 & 0xff000000000000) == 0) goto LAB_1045bf4e0;
  }
  else {
    if (uVar6 != 2) goto LAB_1045bf4e0;
    lVar8 = *(long *)(lVar4 + 0x10);
    lVar10 = *(long *)(lVar4 + 0x18);
LAB_1045bf54c:
    if (lVar8 == lVar10) goto LAB_1045bf4e0;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_b0,lVar4,uVar2);
LAB_1045bf4e0:
  param_1[5] = uStack_88;
  param_1[4] = uStack_90;
  param_1[7] = uStack_78;
  param_1[6] = uStack_80;
  param_1[8] = uStack_70;
  param_1[1] = uStack_a8;
  *param_1 = uStack_b0;
  param_1[3] = uStack_98;
  param_1[2] = uStack_a0;
  return;
LAB_1045bf494:
  uStack_88 = uStack_178;
  uStack_90 = uStack_180;
  uStack_78 = uStack_168;
  uStack_80 = uStack_170;
  uStack_70 = uStack_160;
  uStack_a8 = uStack_198;
  uStack_b0 = uStack_1a0;
  uStack_98 = uStack_188;
  uStack_a0 = uStack_190;
  goto LAB_1045bf4b0;
}



/* Entry: 1045f2970; end: 1045f2a53;  */

void FUN_1045f2970(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *in_x3;
  undefined8 *unaff_x20;
  undefined1 auStack_88 [72];
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar4 = unaff_x20[3];
  __ss6HasherV5_seedABSi_tcfC(auStack_88);
  (*in_x3)(auStack_88,uVar1,uVar3,uVar2,uVar4);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1045f2a54; end: 1045f2abf;  */

void FUN_1045f2a54(void)

{
  __sSS6appendyySSF(0x6f697461636f4c2e,0xe90000000000006e);
  uRam00000001138148a0 = 0xd00000000000001e;
  uRam00000001138148a8 = 0x800000010f2086f0;
  return;
}



/* Entry: 1045f2ac0; end: 1045f2aff;  */

undefined8 FUN_1045f2ac0(void)

{
  if (lRam00000001130880d0 != -1) {
    _swift_once(0x1130880d0,FUN_1045f2a54);
  }
  return 0x1138148a0;
}



/* Entry: 1045f2b00; end: 1045f2b1f;  */

undefined1  [16] FUN_1045f2b00(void)

{
  undefined1 auVar1 [16];
  
  if (lRam00000001130880d0 != -1) {
    _swift_once(0x1130880d0,FUN_1045f2a54);
  }
  auVar1._8_8_ = uRam00000001138148a8;
  auVar1._0_8_ = uRam00000001138148a0;
  _swift_bridgeObjectRetain(uRam00000001138148a8);
  return auVar1;
}



/* Entry: 1045f2b20; end: 1045f2bdf;  */

void FUN_1045f2b20(void)

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
  FUN_104555d34(&UNK_10dd1d970,0x4e,&uStack_48,&lStack_40);
  puRam00000001138148b8 = puStack_38;
  lRam00000001138148b0 = lStack_40;
  puRam00000001138148c8 = puStack_28;
  puRam00000001138148c0 = puStack_30;
  puRam00000001138148d8 = puStack_18;
  puRam00000001138148d0 = puStack_20;
  return;
}



/* Entry: 1045f2be0; end: 1045f2c7f;  */

void FUN_1045f2be0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam00000001130880d8 != -1) {
    _swift_once(0x1130880d8,FUN_1045f2b20);
  }
  uVar5 = uRam00000001138148d8;
  uVar4 = uRam00000001138148d0;
  uVar3 = uRam00000001138148c8;
  uVar2 = uRam00000001138148c0;
  uVar1 = uRam00000001138148b8;
  *param_1 = uRam00000001138148b0;
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



/* Entry: 1045f2c80; end: 1045f2d5f;  */

void FUN_1045f2c80(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0x58);
          goto LAB_1045f2d2c;
        }
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x58);
          goto LAB_1045f2d2c;
        }
      }
      else {
        if (lVar1 == 3) {
          pcVar3 = *(code **)(param_3 + 0x158);
        }
        else if (lVar1 == 4) {
          pcVar3 = *(code **)(param_3 + 0x158);
        }
        else {
          if (lVar1 != 6) goto LAB_1045f2d3c;
          pcVar3 = *(code **)(param_3 + 0x160);
        }
LAB_1045f2d2c:
        (*pcVar3)();
      }
LAB_1045f2d3c:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 1045f2d60; end: 1045f2ed7;  */

void FUN_1045f2d60(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  long *unaff_x20;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  
  lVar6 = *unaff_x20;
  lVar5 = *(long *)(lVar6 + 0x10);
  if (lVar5 != 0) {
    __ss6HasherV8_combineyySuF(1);
    __ss6HasherV8_combineyySuF(lVar5);
    puVar7 = (undefined4 *)(lVar6 + 0x20);
    do {
      __ss6HasherV8_combineyys6UInt32VF(*puVar7);
      lVar5 = lVar5 + -1;
      puVar7 = puVar7 + 1;
    } while (lVar5 != 0);
  }
  lVar6 = unaff_x20[1];
  lVar5 = *(long *)(lVar6 + 0x10);
  if (lVar5 != 0) {
    __ss6HasherV8_combineyySuF(2);
    __ss6HasherV8_combineyySuF(lVar5);
    puVar7 = (undefined4 *)(lVar6 + 0x20);
    do {
      __ss6HasherV8_combineyys6UInt32VF(*puVar7);
      lVar5 = lVar5 + -1;
      puVar7 = puVar7 + 1;
    } while (lVar5 != 0);
  }
  lVar5 = unaff_x20[6];
  if (lVar5 != 0) {
    lVar6 = unaff_x20[5];
    __ss6HasherV8_combineyySuF(3);
    __sSS4hash4intoys6HasherVz_tF(param_1,lVar6,lVar5);
  }
  lVar5 = unaff_x20[8];
  if (lVar5 != 0) {
    lVar6 = unaff_x20[7];
    __ss6HasherV8_combineyySuF(4);
    __sSS4hash4intoys6HasherVz_tF(param_1,lVar6,lVar5);
  }
  lVar6 = unaff_x20[2];
  lVar5 = *(long *)(lVar6 + 0x10);
  if (lVar5 != 0) {
    __ss6HasherV8_combineyySuF(6);
    __ss6HasherV8_combineyySuF(lVar5);
    puVar8 = (undefined8 *)(lVar6 + 0x28);
    do {
      uVar1 = puVar8[-1];
      uVar2 = *puVar8;
      _swift_bridgeObjectRetain(uVar2);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,uVar2);
      _swift_bridgeObjectRelease(uVar2);
      puVar8 = puVar8 + 2;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  lVar5 = unaff_x20[3];
  uVar3 = (uint)((ulong)unaff_x20[4] >> 0x20);
  uVar4 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar4 == 0) {
      if ((unaff_x20[4] & 0xff000000000000U) == 0) {
        return;
      }
      goto LAB_1045f2eb8;
    }
    lVar6 = (long)(int)lVar5;
    lVar5 = lVar5 >> 0x20;
  }
  else {
    if (uVar4 != 2) {
      return;
    }
    lVar6 = *(long *)(lVar5 + 0x10);
    lVar5 = *(long *)(lVar5 + 0x18);
  }
  if (lVar6 == lVar5) {
    return;
  }
LAB_1045f2eb8:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1);
  return;
}



/* Entry: 1045f2ed8; end: 1045f2fd3;  */

void FUN_1045f2ed8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *unaff_x20;
  long unaff_x21;
  
  if (((*(long *)(*unaff_x20 + 0x10) == 0) ||
      ((**(code **)(param_3 + 0x138))(*unaff_x20,1,param_2,param_3), unaff_x21 == 0)) &&
     ((*(long *)(unaff_x20[1] + 0x10) == 0 ||
      ((**(code **)(param_3 + 0x138))(unaff_x20[1],2,param_2,param_3), unaff_x21 == 0)))) {
    if (unaff_x20[6] != 0) {
      (**(code **)(param_3 + 0x70))(unaff_x20[5],unaff_x20[6],3,param_2,param_3);
    }
    if (unaff_x21 == 0) {
      if (unaff_x20[8] != 0) {
        (**(code **)(param_3 + 0x70))(unaff_x20[7],unaff_x20[8],4,param_2,param_3);
      }
      if (*(long *)(unaff_x20[2] + 0x10) != 0) {
        (**(code **)(param_3 + 0x100))(unaff_x20[2],6,param_2,param_3);
      }
      func_0x000100076224(param_1,unaff_x20[3],unaff_x20[4],param_2,param_3);
    }
  }
  return;
}



/* Entry: 1045f2fd4; end: 1045f2fe3;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1045f2fd4(long *param_1,long *param_2)

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
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  uint uVar17;
  long lVar18;
  int iVar19;
  ulong uVar20;
  long lVar21;
  int *piVar22;
  ulong uVar23;
  uint uVar24;
  ulong uVar25;
  long lVar26;
  int *piVar27;
  byte *pbVar28;
  byte *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar29;
  ulong unaff_x22;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
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
  byte bVar44;
  byte bVar45;
  undefined1 auVar46 [16];
  
  lVar21 = *param_1;
  lVar26 = *param_2;
  lVar18 = *(long *)(lVar21 + 0x10);
  if (lVar18 == *(long *)(lVar26 + 0x10)) {
    if (lVar18 != 0 && lVar21 != lVar26) {
      piVar22 = (int *)(lVar21 + 0x20);
      piVar27 = (int *)(lVar26 + 0x20);
      do {
        if (*piVar22 != *piVar27) {
          return (byte *)0x0;
        }
        lVar18 = lVar18 + -1;
        piVar22 = piVar22 + 1;
        piVar27 = piVar27 + 1;
      } while (lVar18 != 0);
    }
    lVar21 = param_1[1];
    lVar26 = param_2[1];
    lVar18 = *(long *)(lVar21 + 0x10);
    if (lVar18 == *(long *)(lVar26 + 0x10)) {
      if (lVar18 != 0 && lVar21 != lVar26) {
        piVar22 = (int *)(lVar21 + 0x20);
        piVar27 = (int *)(lVar26 + 0x20);
        do {
          if (*piVar22 != *piVar27) {
            return (byte *)0x0;
          }
          lVar18 = lVar18 + -1;
          piVar22 = piVar22 + 1;
          piVar27 = piVar27 + 1;
        } while (lVar18 != 0);
      }
      lVar21 = param_1[6];
      lVar18 = param_2[6];
      if (lVar21 == 0) {
        if (lVar18 != 0) {
          return (byte *)0x0;
        }
      }
      else {
        if (lVar18 == 0) {
          return (byte *)0x0;
        }
        uVar23 = param_1[5];
        if (((uVar23 != param_2[5]) || (lVar21 != lVar18)) &&
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (uVar23,lVar21,param_2[5],lVar18,0), (uVar23 & 1) == 0)) {
          return (byte *)0x0;
        }
      }
      lVar21 = param_1[8];
      lVar18 = param_2[8];
      if (lVar21 == 0) {
        if (lVar18 != 0) {
          return (byte *)0x0;
        }
      }
      else {
        if (lVar18 == 0) {
          return (byte *)0x0;
        }
        uVar23 = param_1[7];
        if (((uVar23 != param_2[7]) || (lVar21 != lVar18)) &&
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (uVar23,lVar21,param_2[7],lVar18,0), (uVar23 & 1) == 0)) {
          return (byte *)0x0;
        }
      }
      uVar23 = param_1[2];
      func_0x00010142cfc4(uVar23,param_2[2]);
      if ((uVar23 & 1) != 0) {
        pbVar10 = (byte *)param_1[3];
        pbVar29 = (byte *)param_1[4];
        lVar18 = param_2[3];
        uVar23 = param_2[4];
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
          uVar4 = (uint)((ulong)pbVar29 >> 0x20);
          uVar17 = uVar4 >> 0x1e;
          uVar5 = (uint)(uVar23 >> 0x20);
          uVar24 = uVar5 >> 0x1e;
          iVar8 = (int)pbVar10;
          pbVar13 = pbVar29;
          if ((ulong)pbVar29 >> 0x3e == 3) {
            uVar20 = 0;
            if (((pbVar10 != (byte *)0x0) || (pbVar29 != (byte *)0xc000000000000000)) ||
               ((uVar23 >> 0x3e < 3 || ((uVar20 = 0, lVar18 != 0 || (uVar23 != 0xc000000000000000)))
                ))) goto joined_r0x000100e26170;
code_r0x000100e26128:
            pbVar9 = (byte *)0x1;
          }
          else if (uVar4 >> 0x1e < 2) {
            if (uVar17 == 0) {
              uVar20 = (ulong)pbVar29 >> 0x30 & 0xff;
            }
            else {
              iVar19 = (int)((ulong)pbVar10 >> 0x20);
              if (SBORROW4(iVar19,iVar8)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
                (*pcVar6)();
              }
              uVar20 = (ulong)(iVar19 - iVar8);
            }
joined_r0x000100e26170:
            if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
            if (uVar24 == 0) {
              uVar25 = uVar23 >> 0x30 & 0xff;
              goto code_r0x000100e2608c;
            }
            iVar19 = (int)((ulong)lVar18 >> 0x20);
            if (SBORROW4(iVar19,(int)lVar18)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
              (*pcVar6)();
            }
            if (uVar20 == (long)(iVar19 - (int)lVar18)) goto code_r0x000100e26094;
code_r0x000100e26154:
            pbVar9 = (byte *)0x0;
          }
          else {
            if (uVar17 == 2) {
              uVar20 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
              if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
                (*pcVar6)();
              }
              goto joined_r0x000100e26170;
            }
            uVar20 = 0;
            if (uVar24 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
            if (uVar24 == 2) {
              uVar25 = *(long *)(lVar18 + 0x18) - *(long *)(lVar18 + 0x10);
              if (SBORROW8(*(long *)(lVar18 + 0x18),*(long *)(lVar18 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
                (*pcVar6)();
              }
code_r0x000100e2608c:
              if (uVar20 != uVar25) goto code_r0x000100e26154;
code_r0x000100e26094:
              if ((long)uVar20 < 1) goto code_r0x000100e26128;
              if (uVar17 < 2) {
                if (uVar17 == 0) {
                  puVar7[-0x70] = (char)pbVar10;
                  puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
                  puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
                  puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
                  puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
                  puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
                  puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
                  puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
                  puVar7[-0x68] = (char)pbVar29;
                  puVar7[-0x67] = (char)((ulong)pbVar29 >> 8);
                  puVar7[-0x66] = (char)((ulong)pbVar29 >> 0x10);
                  puVar7[-0x65] = (char)((ulong)pbVar29 >> 0x18);
                  puVar7[-100] = (char)((ulong)pbVar29 >> 0x20);
                  puVar7[-99] = (char)((ulong)pbVar29 >> 0x28);
                  pbVar13 = puVar7 + (((ulong)pbVar29 >> 0x30 & 0xff) - 0x70);
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
                unaff_x24 = pbVar29;
                if (pbVar10 == (byte *)0x0) {
                  func_0x000107c5ec38();
                  pbVar10 = (byte *)0x0;
                }
                else {
                  pbVar13 = pbVar10;
                  func_0x000107c5ec3c();
                  if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                    (*pcVar6)();
                  }
                  pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar13);
                  func_0x000107c5ec38();
                  unaff_x19 = pbVar10;
                  if (pbVar10 != (byte *)0x0) {
                    if ((long)unaff_x23 <= (long)pbVar13) {
                      pbVar13 = unaff_x23;
                    }
                    pbVar13 = pbVar13 + (long)pbVar10;
                    goto code_r0x000100e262a4;
                  }
                }
                pbVar13 = (byte *)0x0;
              }
              else {
                if (uVar17 != 2) {
                  *(undefined8 *)(puVar7 + -0x6a) = 0;
                  *(undefined8 *)(puVar7 + -0x70) = 0;
                  pbVar13 = puVar7 + -0x70;
                  goto code_r0x000100e26260;
                }
                lVar21 = *(long *)(pbVar10 + 0x10);
                unaff_x24 = *(byte **)(pbVar10 + 0x18);
                func_0x000107c5ec30();
                pbVar13 = pbVar10;
                if (pbVar10 != (byte *)0x0) {
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar21,(long)pbVar13)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                    (*pcVar6)();
                  }
                  pbVar10 = pbVar10 + (lVar21 - (long)pbVar13);
                }
                unaff_x23 = unaff_x24 + -lVar21;
                if (SBORROW8((long)unaff_x24,lVar21)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                  (*pcVar6)();
                }
                func_0x000107c5ec38();
                unaff_x19 = pbVar10;
                unaff_x25 = pbVar29;
                if (pbVar10 == (byte *)0x0) {
                  pbVar13 = (byte *)0x0;
                }
                else {
                  if ((long)unaff_x23 <= (long)pbVar13) {
                    pbVar13 = unaff_x23;
                  }
                  pbVar13 = pbVar13 + (long)pbVar10;
                }
              }
code_r0x000100e262a4:
              unaff_x20 = (ulong)pbVar29 & 0x3fffffffffffffff;
              unaff_x21 = 0;
              func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar18,uVar23);
              pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
              unaff_x22 = uVar23;
            }
            else {
              pbVar9 = (byte *)(ulong)(uVar20 == 0);
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
          pbVar28 = *(byte **)(pbVar9 + 0x18);
          bVar30 = pbVar9[0x28];
          pbVar29 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                             (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
          pbVar14 = pbVar10;
          if (bVar30 < 3) {
            if (bVar30 == 0) {
              if (pbVar13[0x28] == 0) {
                lVar18 = *(long *)pbVar13;
                uVar11 = 0;
                func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                func_0x000107c60118(pbVar12,lVar18,uVar11);
                return (byte *)(ulong)((uint)pbVar12 & 1);
              }
              return (byte *)0x0;
            }
            if (bVar30 == 1) {
              if (pbVar13[0x28] != 1) {
                return (byte *)0x0;
              }
              pbVar15 = *(byte **)(pbVar13 + 8);
              pbVar16 = *(byte **)(pbVar13 + 0x10);
              lVar18 = *(long *)pbVar13;
              uVar11 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar12,lVar18,uVar11);
              if (((ulong)pbVar12 & 1) == 0) {
                return (byte *)0x0;
              }
              pbVar12 = pbVar10;
              pbVar14 = pbVar29;
              if ((pbVar10 == pbVar15) && (pbVar29 == pbVar16)) {
                return (byte *)0x1;
              }
            }
            else {
              if (pbVar13[0x28] != 2) {
                return (byte *)0x0;
              }
              pbVar15 = *(byte **)pbVar13;
              pbVar16 = *(byte **)(pbVar13 + 8);
              lVar18 = *(long *)(pbVar13 + 0x18);
              if ((pbVar12 == pbVar15) && (pbVar10 == pbVar16)) {
                if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
                  return (byte *)0x0;
                }
                if (pbVar28 == (byte *)0x0) goto joined_r0x000100e26620;
                if (lVar18 == 0) {
                  return (byte *)0x0;
                }
                func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                func_0x000107c61174(lVar18);
                func_0x000107c61174();
                pbVar10 = pbVar28;
                func_0x000107c60118();
                func_0x000107c61170(pbVar28);
                func_0x000107c61170(lVar18);
                pbVar28 = pbVar10;
joined_r0x000100e266a4:
                if (((ulong)pbVar28 & 1) == 0) {
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
            )(pbVar12,pbVar14,pbVar15,pbVar16,0);
            return pbVar12;
          }
          lVar21 = *(long *)(pbVar9 + 0x20);
          if (bVar30 < 5) {
            if (bVar30 != 3) {
              if (pbVar13[0x28] != 4) {
                return (byte *)0x0;
              }
              pbVar15 = *(byte **)pbVar13;
              pbVar16 = *(byte **)(pbVar13 + 8);
              if (((pbVar12 == pbVar15) && (pbVar10 == pbVar16)) &&
                 (pbVar12 = pbVar29, pbVar14 = pbVar28, pbVar15 = *(byte **)(pbVar13 + 0x10),
                 pbVar16 = *(byte **)(pbVar13 + 0x18),
                 pbVar29 == *(byte **)(pbVar13 + 0x10) && pbVar28 == *(byte **)(pbVar13 + 0x18))) {
                return (byte *)0x1;
              }
              goto code_r0x000107c605b8;
            }
            if (pbVar13[0x28] != 3) {
              return (byte *)0x0;
            }
            if ((uint)*pbVar13 != ((uint)pbVar12 & 0xff)) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)(pbVar13 + 0x10);
            lVar18 = *(long *)(pbVar13 + 0x20);
            if (pbVar29 == (byte *)0x0) {
              if (pbVar16 != (byte *)0x0) {
                return (byte *)0x0;
              }
            }
            else {
              if (pbVar16 == (byte *)0x0) {
                return (byte *)0x0;
              }
              pbVar15 = *(byte **)(pbVar13 + 8);
              pbVar12 = pbVar10;
              pbVar14 = pbVar29;
              if ((pbVar10 != pbVar15) || (pbVar29 != pbVar16)) goto code_r0x000107c605b8;
            }
            if (lVar21 != 0) {
              if (lVar18 == 0) {
                return (byte *)0x0;
              }
              if ((pbVar28 == *(byte **)(pbVar13 + 0x18)) && (lVar21 == lVar18)) {
                return (byte *)0x1;
              }
              func_0x000107c605b8(pbVar28,lVar21,*(byte **)(pbVar13 + 0x18),lVar18,0);
              goto joined_r0x000100e266a4;
            }
joined_r0x000100e26620:
            if (lVar18 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if (bVar30 != 5) {
            if ((((pbVar28 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
                lVar21 == 0) && pbVar29 == (byte *)0x0) {
              if (pbVar13[0x28] != 6) {
                return (byte *)0x0;
              }
              lVar21 = *(long *)(pbVar13 + 0x20);
              lVar18 = *(long *)(pbVar13 + 0x18);
              bVar30 = pbVar13[8] | (byte)lVar18;
              bVar31 = pbVar13[9] | (byte)((ulong)lVar18 >> 8);
              bVar32 = pbVar13[10] | (byte)((ulong)lVar18 >> 0x10);
              bVar33 = pbVar13[0xb] | (byte)((ulong)lVar18 >> 0x18);
              bVar34 = pbVar13[0xc] | (byte)((ulong)lVar18 >> 0x20);
              bVar35 = pbVar13[0xd] | (byte)((ulong)lVar18 >> 0x28);
              bVar36 = pbVar13[0xe] | (byte)((ulong)lVar18 >> 0x30);
              bVar37 = pbVar13[0xf] | (byte)((ulong)lVar18 >> 0x38);
              bVar38 = pbVar13[0x10] | (byte)lVar21;
              bVar39 = pbVar13[0x11] | (byte)((ulong)lVar21 >> 8);
              bVar40 = pbVar13[0x12] | (byte)((ulong)lVar21 >> 0x10);
              bVar41 = pbVar13[0x13] | (byte)((ulong)lVar21 >> 0x18);
              bVar42 = pbVar13[0x14] | (byte)((ulong)lVar21 >> 0x20);
              bVar43 = pbVar13[0x15] | (byte)((ulong)lVar21 >> 0x28);
              bVar44 = pbVar13[0x16] | (byte)((ulong)lVar21 >> 0x30);
              bVar45 = pbVar13[0x17] | (byte)((ulong)lVar21 >> 0x38);
              auVar46[1] = bVar31;
              auVar46[0] = bVar30;
              auVar46[2] = bVar32;
              auVar46[3] = bVar33;
              auVar46[4] = bVar34;
              auVar46[5] = bVar35;
              auVar46[6] = bVar36;
              auVar46[7] = bVar37;
              auVar46[8] = bVar38;
              auVar46[9] = bVar39;
              auVar46[10] = bVar40;
              auVar46[0xb] = bVar41;
              auVar46[0xc] = bVar42;
              auVar46[0xd] = bVar43;
              auVar46[0xe] = bVar44;
              auVar46[0xf] = bVar45;
              auVar3[1] = bVar31;
              auVar3[0] = bVar30;
              auVar3[2] = bVar32;
              auVar3[3] = bVar33;
              auVar3[4] = bVar34;
              auVar3[5] = bVar35;
              auVar3[6] = bVar36;
              auVar3[7] = bVar37;
              auVar3[8] = bVar38;
              auVar3[9] = bVar39;
              auVar3[10] = bVar40;
              auVar3[0xb] = bVar41;
              auVar3[0xc] = bVar42;
              auVar3[0xd] = bVar43;
              auVar3[0xe] = bVar44;
              auVar3[0xf] = bVar45;
              auVar46 = NEON_ext(auVar46,auVar3,8,1);
              if (CONCAT17(bVar37 | auVar46[7],
                           CONCAT16(bVar36 | auVar46[6],
                                    CONCAT15(bVar35 | auVar46[5],
                                             CONCAT14(bVar34 | auVar46[4],
                                                      CONCAT13(bVar33 | auVar46[3],
                                                               CONCAT12(bVar32 | auVar46[2],
                                                                        CONCAT11(bVar31 | auVar46[1]
                                                                                 ,bVar30 | auVar46[0
                                                  ]))))))) == 0 && *(long *)pbVar13 == 0) {
                return (byte *)0x1;
              }
              return (byte *)0x0;
            }
            if ((pbVar12 == (byte *)0x1) &&
               (((pbVar28 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar29 == (byte *)0x0) &&
                lVar21 == 0)) {
              if (pbVar13[0x28] != 6) {
                return (byte *)0x0;
              }
              if (*(long *)pbVar13 != 1) {
                return (byte *)0x0;
              }
            }
            else {
              if (pbVar13[0x28] != 6) {
                return (byte *)0x0;
              }
              if (*(long *)pbVar13 != 2) {
                return (byte *)0x0;
              }
            }
            lVar21 = *(long *)(pbVar13 + 0x20);
            lVar18 = *(long *)(pbVar13 + 0x18);
            bVar30 = pbVar13[8] | (byte)lVar18;
            bVar31 = pbVar13[9] | (byte)((ulong)lVar18 >> 8);
            bVar32 = pbVar13[10] | (byte)((ulong)lVar18 >> 0x10);
            bVar33 = pbVar13[0xb] | (byte)((ulong)lVar18 >> 0x18);
            bVar34 = pbVar13[0xc] | (byte)((ulong)lVar18 >> 0x20);
            bVar35 = pbVar13[0xd] | (byte)((ulong)lVar18 >> 0x28);
            bVar36 = pbVar13[0xe] | (byte)((ulong)lVar18 >> 0x30);
            bVar37 = pbVar13[0xf] | (byte)((ulong)lVar18 >> 0x38);
            bVar38 = pbVar13[0x10] | (byte)lVar21;
            bVar39 = pbVar13[0x11] | (byte)((ulong)lVar21 >> 8);
            bVar40 = pbVar13[0x12] | (byte)((ulong)lVar21 >> 0x10);
            bVar41 = pbVar13[0x13] | (byte)((ulong)lVar21 >> 0x18);
            bVar42 = pbVar13[0x14] | (byte)((ulong)lVar21 >> 0x20);
            bVar43 = pbVar13[0x15] | (byte)((ulong)lVar21 >> 0x28);
            bVar44 = pbVar13[0x16] | (byte)((ulong)lVar21 >> 0x30);
            bVar45 = pbVar13[0x17] | (byte)((ulong)lVar21 >> 0x38);
            auVar1[1] = bVar31;
            auVar1[0] = bVar30;
            auVar1[2] = bVar32;
            auVar1[3] = bVar33;
            auVar1[4] = bVar34;
            auVar1[5] = bVar35;
            auVar1[6] = bVar36;
            auVar1[7] = bVar37;
            auVar1[8] = bVar38;
            auVar1[9] = bVar39;
            auVar1[10] = bVar40;
            auVar1[0xb] = bVar41;
            auVar1[0xc] = bVar42;
            auVar1[0xd] = bVar43;
            auVar1[0xe] = bVar44;
            auVar1[0xf] = bVar45;
            auVar2[1] = bVar31;
            auVar2[0] = bVar30;
            auVar2[2] = bVar32;
            auVar2[3] = bVar33;
            auVar2[4] = bVar34;
            auVar2[5] = bVar35;
            auVar2[6] = bVar36;
            auVar2[7] = bVar37;
            auVar2[8] = bVar38;
            auVar2[9] = bVar39;
            auVar2[10] = bVar40;
            auVar2[0xb] = bVar41;
            auVar2[0xc] = bVar42;
            auVar2[0xd] = bVar43;
            auVar2[0xe] = bVar44;
            auVar2[0xf] = bVar45;
            auVar46 = NEON_ext(auVar1,auVar2,8,1);
            lVar18 = CONCAT17(bVar37 | auVar46[7],
                              CONCAT16(bVar36 | auVar46[6],
                                       CONCAT15(bVar35 | auVar46[5],
                                                CONCAT14(bVar34 | auVar46[4],
                                                         CONCAT13(bVar33 | auVar46[3],
                                                                  CONCAT12(bVar32 | auVar46[2],
                                                                           CONCAT11(bVar31 | auVar46
                                                  [1],bVar30 | auVar46[0])))))));
            goto joined_r0x000100e26620;
          }
          if (pbVar13[0x28] != 5) {
            return (byte *)0x0;
          }
          lVar18 = *(long *)(pbVar13 + 8);
          uVar23 = *(ulong *)(pbVar13 + 0x10);
          lVar21 = *(long *)pbVar13;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar21,uVar11);
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
    }
  }
  return (byte *)0x0;
}



/* Entry: 1045f2fe4; end: 1045f3077;  */

/* WARNING: Removing unreachable block (ram,0x0001045f3038) */

void FUN_1045f2fe4(code *param_1)

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
  (*param_1)(&uStack_d0);
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



/* Entry: 1045f3078; end: 1045f30c3;  */

void FUN_1045f3078(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[1] = puVar1;
  param_1[2] = puVar1;
  param_1[4] = 0xc000000000000000;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  return;
}



/* Entry: 1045f30c4; end: 1045f30f3;  */

undefined1  [16] FUN_1045f30c4(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x18);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  return auVar1;
}



/* Entry: 1045f30f4; end: 1045f3127;  */

void FUN_1045f30f4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  return;
}



/* Entry: 1045f3128; end: 1045f313b;  */

undefined1  [16] FUN_1045f3128(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x1045f3138;
  return auVar1;
}



/* Entry: 1045f313c; end: 1045f3163;  */

void FUN_1045f313c(void)

{
  FUN_1045f2c80();
  return;
}



/* Entry: 1045f3164; end: 1045f3203;  */

void FUN_1045f3164(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam00000001130880d8 != -1) {
    _swift_once(0x1130880d8,FUN_1045f2b20);
  }
  uVar5 = uRam00000001138148d8;
  uVar4 = uRam00000001138148d0;
  uVar3 = uRam00000001138148c8;
  uVar2 = uRam00000001138148c0;
  uVar1 = uRam00000001138148b8;
  *param_1 = uRam00000001138148b0;
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



/* Entry: 1045f3204; end: 1045f3217;  */

void FUN_1045f3204(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x1130892f8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x1130892f8,&UNK_10dd1d808);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 1045f3218; end: 1045f324b;  */

void FUN_1045f3218(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  __sSS10reflectingSSx_tclufC(&uStack_18,param_3);
  return;
}



/* Entry: 1045f324c; end: 1045f342f;  */

/* WARNING: Removing unreachable block (ram,0x0001045f32b8) */

void FUN_1045f324c(void)

{
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
  
  uStack_58 = unaff_x20[5];
  uStack_60 = unaff_x20[4];
  uStack_48 = unaff_x20[7];
  uStack_50 = unaff_x20[6];
  uStack_40 = unaff_x20[8];
  uStack_78 = unaff_x20[1];
  uStack_80 = *unaff_x20;
  uStack_68 = unaff_x20[3];
  uStack_70 = unaff_x20[2];
  __ss6HasherV5_seedABSi_tcfC(&uStack_d0,0);
  uStack_f8 = uStack_a8;
  uStack_100 = uStack_b0;
  uStack_e8 = uStack_98;
  uStack_f0 = uStack_a0;
  uStack_e0 = uStack_90;
  uStack_118 = uStack_c8;
  uStack_120 = uStack_d0;
  uStack_108 = uStack_b8;
  uStack_110 = uStack_c0;
  FUN_1045f2d60(&uStack_120);
  uStack_98 = uStack_e8;
  uStack_a0 = uStack_f0;
  uStack_90 = uStack_e0;
  uStack_b8 = uStack_108;
  uStack_c0 = uStack_110;
  uStack_a8 = uStack_f8;
  uStack_b0 = uStack_100;
  uStack_c8 = uStack_118;
  uStack_d0 = uStack_120;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1045f3430; end: 1045f3487;  */

uint FUN_1045f3430(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_70 = param_1[8];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_28 = param_2[7];
  uStack_30 = param_2[6];
  uStack_20 = param_2[8];
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  func_0x0001045f4cfc(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 1045f3488; end: 1045f34af;  */

undefined * FUN_1045f3488(void)

{
  return &UNK_11078b2c8;
}



/* Entry: 1045f34b0; end: 1045f356f;  */

void FUN_1045f34b0(void)

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
  FUN_104555d34(&UNK_10dd1d95b,0xd,&uStack_48,&lStack_40);
  puRam00000001138148e8 = puStack_38;
  lRam00000001138148e0 = lStack_40;
  puRam00000001138148f8 = puStack_28;
  puRam00000001138148f0 = puStack_30;
  puRam0000000113814908 = puStack_18;
  puRam0000000113814900 = puStack_20;
  return;
}



/* Entry: 1045f3570; end: 1045f360f;  */

void FUN_1045f3570(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam00000001130880e0 != -1) {
    _swift_once(0x1130880e0,FUN_1045f34b0);
  }
  uVar5 = uRam0000000113814908;
  uVar4 = uRam0000000113814900;
  uVar3 = uRam00000001138148f8;
  uVar2 = uRam00000001138148f0;
  uVar1 = uRam00000001138148e8;
  *param_1 = uRam00000001138148e0;
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



/* Entry: 1045f3610; end: 1045f36c3;  */

/* WARNING: Removing unreachable block (ram,0x0001045f36c0) */

void FUN_1045f3610(undefined8 param_1,long param_2,long param_3)

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
        func_0x0001045f92d0();
        (*pcVar4)();
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 1045f36c4; end: 1045f375b;  */

void FUN_1045f36c4(undefined8 param_1,long param_2,long param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long unaff_x21;
  
  if ((*(long *)(param_2 + 0x10) != 0) && (FUN_104611c18(param_2,1), unaff_x21 != 0)) {
    return;
  }
  uVar1 = (uint)(param_4 >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 == 0) {
      if ((param_4 & 0xff000000000000) == 0) {
        return;
      }
      goto LAB_1045f3734;
    }
    lVar3 = (long)(int)param_3;
    lVar4 = param_3 >> 0x20;
  }
  else {
    if (uVar2 != 2) {
      return;
    }
    lVar3 = *(long *)(param_3 + 0x10);
    lVar4 = *(long *)(param_3 + 0x18);
  }
  if (lVar3 == lVar4) {
    return;
  }
LAB_1045f3734:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1,param_3,param_4);
  return;
}



/* Entry: 1045f375c; end: 1045f37f7;  */

void FUN_1045f375c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  long unaff_x21;
  code *pcVar2;
  
  if (*(long *)(param_2 + 0x10) != 0) {
    pcVar2 = *(code **)(param_6 + 0x118);
    uVar1 = param_1;
    func_0x0001045f92d0();
    (*pcVar2)(param_2,1,&UNK_11078ea38,uVar1,param_5,param_6);
    if (unaff_x21 != 0) {
      return;
    }
  }
  func_0x000100076224(param_1,param_3,param_4,param_5,param_6);
  return;
}



/* Entry: 1045f37f8; end: 1045f37fb;  */

uint FUN_1045f37f8(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_118 [56];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined6 uStack_b8;
  undefined2 uStack_b2;
  undefined6 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined6 uStack_78;
  undefined2 uStack_72;
  undefined6 uStack_70;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == *(long *)(param_4 + 0x10)) {
    if (lVar3 != 0 && param_1 != param_4) {
      puVar4 = (undefined8 *)(param_1 + 0x20);
      puVar5 = (undefined8 *)(param_4 + 0x20);
      do {
        uStack_d8 = puVar4[1];
        uStack_e0 = *puVar4;
        uStack_c8 = puVar4[3];
        uStack_d0 = puVar4[2];
        uStack_c0 = puVar4[4];
        uStack_b8 = (undefined6)puVar4[5];
        uStack_b2 = (undefined2)*(undefined8 *)((long)puVar4 + 0x2e);
        uStack_b0 = (undefined6)((ulong)*(undefined8 *)((long)puVar4 + 0x2e) >> 0x10);
        uStack_98 = puVar5[1];
        uStack_a0 = *puVar5;
        uStack_88 = puVar5[3];
        uStack_90 = puVar5[2];
        uStack_80 = puVar5[4];
        uStack_78 = (undefined6)puVar5[5];
        uStack_72 = (undefined2)*(undefined8 *)((long)puVar5 + 0x2e);
        uStack_70 = (undefined6)((ulong)*(undefined8 *)((long)puVar5 + 0x2e) >> 0x10);
        FUN_104603b94(&uStack_e0,auStack_118);
        FUN_104603b94(&uStack_a0,auStack_118);
        puVar2 = &uStack_e0;
        func_0x0001045f4e84(puVar2,&uStack_a0);
        func_0x000104603bc8(&uStack_a0);
        func_0x000104603bc8(&uStack_e0);
        if (((ulong)puVar2 & 1) == 0) goto LAB_1045f50cc;
        puVar5 = puVar5 + 7;
        puVar4 = puVar4 + 7;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    func_0x000100e25fcc(param_2,param_3,param_5,param_6);
    uVar1 = (uint)param_2;
  }
  else {
LAB_1045f50cc:
    uVar1 = 0;
  }
  return uVar1 & 1;
}



/* Entry: 1045f37fc; end: 1045f38a3;  */

/* WARNING: Removing unreachable block (ram,0x0001045f3864) */

void FUN_1045f37fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_1045f36c4(&uStack_d0,param_1,param_2,param_3);
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



/* Entry: 1045f38a4; end: 1045f38db;  */

void FUN_1045f38a4(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[2] = 0xc000000000000000;
  param_1[1] = 0;
  return;
}



/* Entry: 1045f38dc; end: 1045f390b;  */

undefined1  [16] FUN_1045f38dc(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                      *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 1045f390c; end: 1045f393f;  */

void FUN_1045f390c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 1045f3940; end: 1045f3953;  */

undefined1  [16] FUN_1045f3940(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x1045f3950;
  return auVar1;
}



/* Entry: 1045f3954; end: 1045f398b;  */

void FUN_1045f3954(void)

{
  FUN_1045f3610();
  return;
}



/* Entry: 1045f398c; end: 1045f3a2b;  */

void FUN_1045f398c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam00000001130880e0 != -1) {
    _swift_once(0x1130880e0,FUN_1045f34b0);
  }
  uVar5 = uRam0000000113814908;
  uVar4 = uRam0000000113814900;
  uVar3 = uRam00000001138148f8;
  uVar2 = uRam00000001138148f0;
  uVar1 = uRam00000001138148e8;
  *param_1 = uRam00000001138148e0;
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



/* Entry: 1045f3a2c; end: 1045f3a3f;  */

void FUN_1045f3a2c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x1130892f0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x1130892f0,&UNK_10dd1d800);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 1045f3a40; end: 1045f3a73;  */

void FUN_1045f3a40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  __sSS10reflectingSSx_tclufC(&uStack_18,param_3);
  return;
}



/* Entry: 1045f3a74; end: 1045f3c33;  */

/* WARNING: Removing unreachable block (ram,0x0001045f3ad8) */

void FUN_1045f3a74(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
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
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = unaff_x20[2];
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
  FUN_1045f36c4(&uStack_d0,uVar1,uVar2,uVar3);
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



/* Entry: 1045f3c34; end: 1045f3c4f;  */

uint FUN_1045f3c34(long *param_1,long *param_2)

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
  undefined1 auStack_118 [56];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined6 uStack_b8;
  undefined2 uStack_b2;
  undefined6 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined6 uStack_78;
  undefined2 uStack_72;
  undefined6 uStack_70;
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
        uStack_c0 = puVar10[4];
        uStack_b8 = (undefined6)puVar10[5];
        uStack_b2 = (undefined2)*(undefined8 *)((long)puVar10 + 0x2e);
        uStack_b0 = (undefined6)((ulong)*(undefined8 *)((long)puVar10 + 0x2e) >> 0x10);
        uStack_98 = puVar11[1];
        uStack_a0 = *puVar11;
        uStack_88 = puVar11[3];
        uStack_90 = puVar11[2];
        uStack_80 = puVar11[4];
        uStack_78 = (undefined6)puVar11[5];
        uStack_72 = (undefined2)*(undefined8 *)((long)puVar11 + 0x2e);
        uStack_70 = (undefined6)((ulong)*(undefined8 *)((long)puVar11 + 0x2e) >> 0x10);
        FUN_104603b94(&uStack_e0,auStack_118);
        FUN_104603b94(&uStack_a0,auStack_118);
        puVar5 = &uStack_e0;
        func_0x0001045f4e84(puVar5,&uStack_a0);
        func_0x000104603bc8(&uStack_a0);
        func_0x000104603bc8(&uStack_e0);
        if (((ulong)puVar5 & 1) == 0) goto LAB_1045f50cc;
        puVar11 = puVar11 + 7;
        puVar10 = puVar10 + 7;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    func_0x000100e25fcc(lVar6,lVar7,lVar3,lVar8);
    uVar4 = (uint)lVar6;
  }
  else {
LAB_1045f50cc:
    uVar4 = 0;
  }
  return uVar4 & 1;
}



/* Entry: 1045f3c50; end: 1045f3cbf;  */

void FUN_1045f3c50(void)

{
  __sSS6appendyySSF(0x7461746f6e6e412e,0xeb000000006e6f69);
  uRam0000000113814910 = 0xd000000000000021;
  uRam0000000113814918 = 0x800000010f208710;
  return;
}



/* Entry: 1045f3cc0; end: 1045f3cff;  */

undefined8 FUN_1045f3cc0(void)

{
  if (lRam00000001130880f0 != -1) {
    _swift_once(0x1130880f0,FUN_1045f3c50);
  }
  return 0x113814910;
}



/* Entry: 1045f3d00; end: 1045f3d1f;  */

undefined1  [16] FUN_1045f3d00(void)

{
  undefined1 auVar1 [16];
  
  if (lRam00000001130880f0 != -1) {
    _swift_once(0x1130880f0,FUN_1045f3c50);
  }
  auVar1._8_8_ = uRam0000000113814918;
  auVar1._0_8_ = uRam0000000113814910;
  _swift_bridgeObjectRetain(uRam0000000113814918);
  return auVar1;
}



/* Entry: 1045f3d20; end: 1045f3ddf;  */

void FUN_1045f3d20(void)

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
  FUN_104555d34(&UNK_10dd1d930,0x2a,&uStack_48,&lStack_40);
  puRam0000000113814928 = puStack_38;
  lRam0000000113814920 = lStack_40;
  puRam0000000113814938 = puStack_28;
  puRam0000000113814930 = puStack_30;
  puRam0000000113814948 = puStack_18;
  puRam0000000113814940 = puStack_20;
  return;
}



/* Entry: 1045f3de0; end: 1045f3e7f;  */

void FUN_1045f3de0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam00000001130880f8 != -1) {
    _swift_once(0x1130880f8,FUN_1045f3d20);
  }
  uVar5 = uRam0000000113814948;
  uVar4 = uRam0000000113814940;
  uVar3 = uRam0000000113814938;
  uVar2 = uRam0000000113814930;
  uVar1 = uRam0000000113814928;
  *param_1 = uRam0000000113814920;
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



/* Entry: 1045f3e80; end: 1045f3f97;  */

/* WARNING: Removing unreachable block (ram,0x0001045f3f60) */

void FUN_1045f3e80(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 0x58);
        }
        else {
          if (lVar1 != 2) goto LAB_1045f3ef8;
          pcVar4 = *(code **)(param_3 + 0x158);
        }
LAB_1045f3ee8:
        (*pcVar4)();
      }
      else {
        if (lVar1 == 3) {
          pcVar4 = *(code **)(param_3 + 0x50);
          goto LAB_1045f3ee8;
        }
        if (lVar1 == 4) {
          pcVar4 = *(code **)(param_3 + 0x50);
          goto LAB_1045f3ee8;
        }
        if (lVar1 == 5) {
          pcVar4 = *(code **)(param_3 + 0x188);
          FUN_104603b54();
          (*pcVar4)(unaff_x20 + 0x35,&UNK_11078eae0,lVar1,param_2,param_3);
        }
      }
LAB_1045f3ef8:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 1045f3f98; end: 1045f40c7;  */

void FUN_1045f3f98(undefined8 param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  
  lVar5 = *unaff_x20;
  lVar4 = *(long *)(lVar5 + 0x10);
  if (lVar4 != 0) {
    __ss6HasherV8_combineyySuF(1);
    __ss6HasherV8_combineyySuF(lVar4);
    puVar6 = (undefined4 *)(lVar5 + 0x20);
    do {
      __ss6HasherV8_combineyys6UInt32VF(*puVar6);
      lVar4 = lVar4 + -1;
      puVar6 = puVar6 + 1;
    } while (lVar4 != 0);
  }
  lVar4 = unaff_x20[4];
  if (lVar4 != 0) {
    lVar5 = unaff_x20[3];
    __ss6HasherV8_combineyySuF(2);
    __sSS4hash4intoys6HasherVz_tF(param_1,lVar5,lVar4);
  }
  if (*(char *)((long)unaff_x20 + 0x2c) != '\x01') {
    lVar4 = unaff_x20[5];
    __ss6HasherV8_combineyySuF(3);
    __ss6HasherV8_combineyys6UInt64VF((long)(int)lVar4);
  }
  if (*(char *)((long)unaff_x20 + 0x34) != '\x01') {
    lVar4 = unaff_x20[6];
    __ss6HasherV8_combineyySuF(4);
    __ss6HasherV8_combineyys6UInt64VF((long)(int)lVar4);
  }
  cVar1 = *(char *)((long)unaff_x20 + 0x35);
  if (cVar1 != '\x03') {
    __ss6HasherV8_combineyySuF(5);
    __ss6HasherV8_combineyySuF(cVar1);
  }
  lVar4 = unaff_x20[1];
  uVar2 = (uint)((ulong)unaff_x20[2] >> 0x20);
  uVar3 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar3 == 0) {
      if ((unaff_x20[2] & 0xff000000000000U) == 0) {
        return;
      }
      goto LAB_1045f40a8;
    }
    lVar5 = (long)(int)lVar4;
    lVar4 = lVar4 >> 0x20;
  }
  else {
    if (uVar3 != 2) {
      return;
    }
    lVar5 = *(long *)(lVar4 + 0x10);
    lVar4 = *(long *)(lVar4 + 0x18);
  }
  if (lVar5 == lVar4) {
    return;
  }
LAB_1045f40a8:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1);
  return;
}



/* Entry: 1045f40c8; end: 1045f41fb;  */

void FUN_1045f40c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong *unaff_x20;
  long unaff_x21;
  code *pcVar2;
  char cStack_41;
  
  uVar1 = *unaff_x20;
  if ((*(long *)(uVar1 + 0x10) == 0) ||
     ((**(code **)(param_3 + 0x138))(uVar1,1,param_2,param_3), unaff_x21 == 0)) {
    if (unaff_x20[4] != 0) {
      uVar1 = unaff_x20[3];
      (**(code **)(param_3 + 0x70))(uVar1,unaff_x20[4],2,param_2,param_3);
    }
    if (unaff_x21 == 0) {
      if (*(char *)((long)unaff_x20 + 0x2c) != '\x01') {
        uVar1 = (ulong)(uint)unaff_x20[5];
        (**(code **)(param_3 + 0x18))(uVar1,3,param_2,param_3);
      }
      if (*(char *)((long)unaff_x20 + 0x34) != '\x01') {
        uVar1 = (ulong)(uint)unaff_x20[6];
        (**(code **)(param_3 + 0x18))(uVar1,4,param_2,param_3);
      }
      if (*(char *)((long)unaff_x20 + 0x35) != '\x03') {
        pcVar2 = *(code **)(param_3 + 0x80);
        cStack_41 = *(char *)((long)unaff_x20 + 0x35);
        FUN_104603b54();
        (*pcVar2)(&cStack_41,5,&UNK_11078eae0,uVar1,param_2,param_3);
      }
      func_0x000100076224(param_1,unaff_x20[1],unaff_x20[2],param_2,param_3);
    }
  }
  return;
}



/* Entry: 1045f41fc; end: 1045f41ff;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1045f41fc(long *param_1,long *param_2)

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
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  uint uVar17;
  long lVar18;
  int iVar19;
  ulong uVar20;
  long lVar21;
  int *piVar22;
  ulong uVar23;
  uint uVar24;
  ulong uVar25;
  long lVar26;
  int *piVar27;
  byte *pbVar28;
  byte *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar29;
  ulong unaff_x22;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
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
  byte bVar44;
  byte bVar45;
  undefined1 auVar46 [16];
  
  lVar21 = *param_1;
  lVar26 = *param_2;
  lVar18 = *(long *)(lVar21 + 0x10);
  if (lVar18 != *(long *)(lVar26 + 0x10)) {
    return (byte *)0x0;
  }
  if (lVar18 != 0 && lVar21 != lVar26) {
    piVar22 = (int *)(lVar21 + 0x20);
    piVar27 = (int *)(lVar26 + 0x20);
    do {
      if (*piVar22 != *piVar27) {
        return (byte *)0x0;
      }
      lVar18 = lVar18 + -1;
      piVar22 = piVar22 + 1;
      piVar27 = piVar27 + 1;
    } while (lVar18 != 0);
  }
  lVar21 = param_1[4];
  lVar18 = param_2[4];
  if (lVar21 == 0) {
    if (lVar18 != 0) {
      return (byte *)0x0;
    }
  }
  else {
    if (lVar18 == 0) {
      return (byte *)0x0;
    }
    uVar23 = param_1[3];
    if (((uVar23 != param_2[3]) || (lVar21 != lVar18)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar23,lVar21,param_2[3],lVar18,0), (uVar23 & 1) == 0)) {
      return (byte *)0x0;
    }
  }
  if (*(char *)((long)param_1 + 0x2c) == '\x01') {
    if (*(char *)((long)param_2 + 0x2c) != '\x01') {
      return (byte *)0x0;
    }
  }
  else {
    if (*(char *)((long)param_2 + 0x2c) == '\x01') {
      return (byte *)0x0;
    }
    if ((int)param_1[5] != (int)param_2[5]) {
      return (byte *)0x0;
    }
  }
  if (*(char *)((long)param_1 + 0x34) == '\x01') {
    if (*(char *)((long)param_2 + 0x34) != '\x01') {
      return (byte *)0x0;
    }
  }
  else {
    if (*(char *)((long)param_2 + 0x34) == '\x01') {
      return (byte *)0x0;
    }
    if ((int)param_1[6] != (int)param_2[6]) {
      return (byte *)0x0;
    }
  }
  if (*(char *)((long)param_1 + 0x35) == '\x03') {
    if (*(char *)((long)param_2 + 0x35) == '\x03') {
LAB_1045f4fc4:
      pbVar10 = (byte *)param_1[1];
      pbVar29 = (byte *)param_1[2];
      lVar18 = param_2[1];
      uVar23 = param_2[2];
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
        uVar4 = (uint)((ulong)pbVar29 >> 0x20);
        uVar17 = uVar4 >> 0x1e;
        uVar5 = (uint)(uVar23 >> 0x20);
        uVar24 = uVar5 >> 0x1e;
        iVar8 = (int)pbVar10;
        pbVar13 = pbVar29;
        if ((ulong)pbVar29 >> 0x3e == 3) {
          uVar20 = 0;
          if (((pbVar10 != (byte *)0x0) || (pbVar29 != (byte *)0xc000000000000000)) ||
             ((uVar23 >> 0x3e < 3 || ((uVar20 = 0, lVar18 != 0 || (uVar23 != 0xc000000000000000)))))
             ) goto joined_r0x000100e26170;
code_r0x000100e26128:
          pbVar9 = (byte *)0x1;
        }
        else if (uVar4 >> 0x1e < 2) {
          if (uVar17 == 0) {
            uVar20 = (ulong)pbVar29 >> 0x30 & 0xff;
          }
          else {
            iVar19 = (int)((ulong)pbVar10 >> 0x20);
            if (SBORROW4(iVar19,iVar8)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
              (*pcVar6)();
            }
            uVar20 = (ulong)(iVar19 - iVar8);
          }
joined_r0x000100e26170:
          if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
          if (uVar24 == 0) {
            uVar25 = uVar23 >> 0x30 & 0xff;
            goto code_r0x000100e2608c;
          }
          iVar19 = (int)((ulong)lVar18 >> 0x20);
          if (SBORROW4(iVar19,(int)lVar18)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
            (*pcVar6)();
          }
          if (uVar20 == (long)(iVar19 - (int)lVar18)) goto code_r0x000100e26094;
code_r0x000100e26154:
          pbVar9 = (byte *)0x0;
        }
        else {
          if (uVar17 == 2) {
            uVar20 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
            if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
              (*pcVar6)();
            }
            goto joined_r0x000100e26170;
          }
          uVar20 = 0;
          if (uVar24 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
          if (uVar24 == 2) {
            uVar25 = *(long *)(lVar18 + 0x18) - *(long *)(lVar18 + 0x10);
            if (SBORROW8(*(long *)(lVar18 + 0x18),*(long *)(lVar18 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
              (*pcVar6)();
            }
code_r0x000100e2608c:
            if (uVar20 != uVar25) goto code_r0x000100e26154;
code_r0x000100e26094:
            if ((long)uVar20 < 1) goto code_r0x000100e26128;
            if (uVar17 < 2) {
              if (uVar17 == 0) {
                puVar7[-0x70] = (char)pbVar10;
                puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
                puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
                puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
                puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
                puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
                puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
                puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
                puVar7[-0x68] = (char)pbVar29;
                puVar7[-0x67] = (char)((ulong)pbVar29 >> 8);
                puVar7[-0x66] = (char)((ulong)pbVar29 >> 0x10);
                puVar7[-0x65] = (char)((ulong)pbVar29 >> 0x18);
                puVar7[-100] = (char)((ulong)pbVar29 >> 0x20);
                puVar7[-99] = (char)((ulong)pbVar29 >> 0x28);
                pbVar13 = puVar7 + (((ulong)pbVar29 >> 0x30 & 0xff) - 0x70);
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
              unaff_x24 = pbVar29;
              if (pbVar10 == (byte *)0x0) {
                func_0x000107c5ec38();
                pbVar10 = (byte *)0x0;
              }
              else {
                pbVar13 = pbVar10;
                func_0x000107c5ec3c();
                if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                  (*pcVar6)();
                }
                pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar13);
                func_0x000107c5ec38();
                unaff_x19 = pbVar10;
                if (pbVar10 != (byte *)0x0) {
                  if ((long)unaff_x23 <= (long)pbVar13) {
                    pbVar13 = unaff_x23;
                  }
                  pbVar13 = pbVar13 + (long)pbVar10;
                  goto code_r0x000100e262a4;
                }
              }
              pbVar13 = (byte *)0x0;
            }
            else {
              if (uVar17 != 2) {
                *(undefined8 *)(puVar7 + -0x6a) = 0;
                *(undefined8 *)(puVar7 + -0x70) = 0;
                pbVar13 = puVar7 + -0x70;
                goto code_r0x000100e26260;
              }
              lVar21 = *(long *)(pbVar10 + 0x10);
              unaff_x24 = *(byte **)(pbVar10 + 0x18);
              func_0x000107c5ec30();
              pbVar13 = pbVar10;
              if (pbVar10 != (byte *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar21,(long)pbVar13)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                  (*pcVar6)();
                }
                pbVar10 = pbVar10 + (lVar21 - (long)pbVar13);
              }
              unaff_x23 = unaff_x24 + -lVar21;
              if (SBORROW8((long)unaff_x24,lVar21)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                (*pcVar6)();
              }
              func_0x000107c5ec38();
              unaff_x19 = pbVar10;
              unaff_x25 = pbVar29;
              if (pbVar10 == (byte *)0x0) {
                pbVar13 = (byte *)0x0;
              }
              else {
                if ((long)unaff_x23 <= (long)pbVar13) {
                  pbVar13 = unaff_x23;
                }
                pbVar13 = pbVar13 + (long)pbVar10;
              }
            }
code_r0x000100e262a4:
            unaff_x20 = (ulong)pbVar29 & 0x3fffffffffffffff;
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar18,uVar23);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
            unaff_x22 = uVar23;
          }
          else {
            pbVar9 = (byte *)(ulong)(uVar20 == 0);
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
        pbVar28 = *(byte **)(pbVar9 + 0x18);
        bVar30 = pbVar9[0x28];
        pbVar29 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                           (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
        pbVar14 = pbVar10;
        if (bVar30 < 3) {
          if (bVar30 == 0) {
            if (pbVar13[0x28] == 0) {
              lVar18 = *(long *)pbVar13;
              uVar11 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar12,lVar18,uVar11);
              return (byte *)(ulong)((uint)pbVar12 & 1);
            }
            return (byte *)0x0;
          }
          if (bVar30 == 1) {
            if (pbVar13[0x28] != 1) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)(pbVar13 + 8);
            pbVar16 = *(byte **)(pbVar13 + 0x10);
            lVar18 = *(long *)pbVar13;
            uVar11 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar12,lVar18,uVar11);
            if (((ulong)pbVar12 & 1) == 0) {
              return (byte *)0x0;
            }
            pbVar12 = pbVar10;
            pbVar14 = pbVar29;
            if ((pbVar10 == pbVar15) && (pbVar29 == pbVar16)) {
              return (byte *)0x1;
            }
          }
          else {
            if (pbVar13[0x28] != 2) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)pbVar13;
            pbVar16 = *(byte **)(pbVar13 + 8);
            lVar18 = *(long *)(pbVar13 + 0x18);
            if ((pbVar12 == pbVar15) && (pbVar10 == pbVar16)) {
              if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
                return (byte *)0x0;
              }
              if (pbVar28 == (byte *)0x0) goto joined_r0x000100e26620;
              if (lVar18 == 0) {
                return (byte *)0x0;
              }
              func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
              func_0x000107c61174(lVar18);
              func_0x000107c61174();
              pbVar10 = pbVar28;
              func_0x000107c60118();
              func_0x000107c61170(pbVar28);
              func_0x000107c61170(lVar18);
              pbVar28 = pbVar10;
joined_r0x000100e266a4:
              if (((ulong)pbVar28 & 1) == 0) {
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
          )(pbVar12,pbVar14,pbVar15,pbVar16,0);
          return pbVar12;
        }
        lVar21 = *(long *)(pbVar9 + 0x20);
        if (bVar30 < 5) {
          if (bVar30 != 3) {
            if (pbVar13[0x28] != 4) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)pbVar13;
            pbVar16 = *(byte **)(pbVar13 + 8);
            if (((pbVar12 == pbVar15) && (pbVar10 == pbVar16)) &&
               (pbVar12 = pbVar29, pbVar14 = pbVar28, pbVar15 = *(byte **)(pbVar13 + 0x10),
               pbVar16 = *(byte **)(pbVar13 + 0x18),
               pbVar29 == *(byte **)(pbVar13 + 0x10) && pbVar28 == *(byte **)(pbVar13 + 0x18))) {
              return (byte *)0x1;
            }
            goto code_r0x000107c605b8;
          }
          if (pbVar13[0x28] != 3) {
            return (byte *)0x0;
          }
          if ((uint)*pbVar13 != ((uint)pbVar12 & 0xff)) {
            return (byte *)0x0;
          }
          pbVar16 = *(byte **)(pbVar13 + 0x10);
          lVar18 = *(long *)(pbVar13 + 0x20);
          if (pbVar29 == (byte *)0x0) {
            if (pbVar16 != (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar16 == (byte *)0x0) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)(pbVar13 + 8);
            pbVar12 = pbVar10;
            pbVar14 = pbVar29;
            if ((pbVar10 != pbVar15) || (pbVar29 != pbVar16)) goto code_r0x000107c605b8;
          }
          if (lVar21 != 0) {
            if (lVar18 == 0) {
              return (byte *)0x0;
            }
            if ((pbVar28 == *(byte **)(pbVar13 + 0x18)) && (lVar21 == lVar18)) {
              return (byte *)0x1;
            }
            func_0x000107c605b8(pbVar28,lVar21,*(byte **)(pbVar13 + 0x18),lVar18,0);
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar18 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
        if (bVar30 != 5) {
          if ((((pbVar28 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
              lVar21 == 0) && pbVar29 == (byte *)0x0) {
            if (pbVar13[0x28] != 6) {
              return (byte *)0x0;
            }
            lVar21 = *(long *)(pbVar13 + 0x20);
            lVar18 = *(long *)(pbVar13 + 0x18);
            bVar30 = pbVar13[8] | (byte)lVar18;
            bVar31 = pbVar13[9] | (byte)((ulong)lVar18 >> 8);
            bVar32 = pbVar13[10] | (byte)((ulong)lVar18 >> 0x10);
            bVar33 = pbVar13[0xb] | (byte)((ulong)lVar18 >> 0x18);
            bVar34 = pbVar13[0xc] | (byte)((ulong)lVar18 >> 0x20);
            bVar35 = pbVar13[0xd] | (byte)((ulong)lVar18 >> 0x28);
            bVar36 = pbVar13[0xe] | (byte)((ulong)lVar18 >> 0x30);
            bVar37 = pbVar13[0xf] | (byte)((ulong)lVar18 >> 0x38);
            bVar38 = pbVar13[0x10] | (byte)lVar21;
            bVar39 = pbVar13[0x11] | (byte)((ulong)lVar21 >> 8);
            bVar40 = pbVar13[0x12] | (byte)((ulong)lVar21 >> 0x10);
            bVar41 = pbVar13[0x13] | (byte)((ulong)lVar21 >> 0x18);
            bVar42 = pbVar13[0x14] | (byte)((ulong)lVar21 >> 0x20);
            bVar43 = pbVar13[0x15] | (byte)((ulong)lVar21 >> 0x28);
            bVar44 = pbVar13[0x16] | (byte)((ulong)lVar21 >> 0x30);
            bVar45 = pbVar13[0x17] | (byte)((ulong)lVar21 >> 0x38);
            auVar46[1] = bVar31;
            auVar46[0] = bVar30;
            auVar46[2] = bVar32;
            auVar46[3] = bVar33;
            auVar46[4] = bVar34;
            auVar46[5] = bVar35;
            auVar46[6] = bVar36;
            auVar46[7] = bVar37;
            auVar46[8] = bVar38;
            auVar46[9] = bVar39;
            auVar46[10] = bVar40;
            auVar46[0xb] = bVar41;
            auVar46[0xc] = bVar42;
            auVar46[0xd] = bVar43;
            auVar46[0xe] = bVar44;
            auVar46[0xf] = bVar45;
            auVar3[1] = bVar31;
            auVar3[0] = bVar30;
            auVar3[2] = bVar32;
            auVar3[3] = bVar33;
            auVar3[4] = bVar34;
            auVar3[5] = bVar35;
            auVar3[6] = bVar36;
            auVar3[7] = bVar37;
            auVar3[8] = bVar38;
            auVar3[9] = bVar39;
            auVar3[10] = bVar40;
            auVar3[0xb] = bVar41;
            auVar3[0xc] = bVar42;
            auVar3[0xd] = bVar43;
            auVar3[0xe] = bVar44;
            auVar3[0xf] = bVar45;
            auVar46 = NEON_ext(auVar46,auVar3,8,1);
            if (CONCAT17(bVar37 | auVar46[7],
                         CONCAT16(bVar36 | auVar46[6],
                                  CONCAT15(bVar35 | auVar46[5],
                                           CONCAT14(bVar34 | auVar46[4],
                                                    CONCAT13(bVar33 | auVar46[3],
                                                             CONCAT12(bVar32 | auVar46[2],
                                                                      CONCAT11(bVar31 | auVar46[1],
                                                                               bVar30 | auVar46[0]))
                                                            ))))) == 0 && *(long *)pbVar13 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if ((pbVar12 == (byte *)0x1) &&
             (((pbVar28 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar29 == (byte *)0x0) &&
              lVar21 == 0)) {
            if (pbVar13[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar13 != 1) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar13[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar13 != 2) {
              return (byte *)0x0;
            }
          }
          lVar21 = *(long *)(pbVar13 + 0x20);
          lVar18 = *(long *)(pbVar13 + 0x18);
          bVar30 = pbVar13[8] | (byte)lVar18;
          bVar31 = pbVar13[9] | (byte)((ulong)lVar18 >> 8);
          bVar32 = pbVar13[10] | (byte)((ulong)lVar18 >> 0x10);
          bVar33 = pbVar13[0xb] | (byte)((ulong)lVar18 >> 0x18);
          bVar34 = pbVar13[0xc] | (byte)((ulong)lVar18 >> 0x20);
          bVar35 = pbVar13[0xd] | (byte)((ulong)lVar18 >> 0x28);
          bVar36 = pbVar13[0xe] | (byte)((ulong)lVar18 >> 0x30);
          bVar37 = pbVar13[0xf] | (byte)((ulong)lVar18 >> 0x38);
          bVar38 = pbVar13[0x10] | (byte)lVar21;
          bVar39 = pbVar13[0x11] | (byte)((ulong)lVar21 >> 8);
          bVar40 = pbVar13[0x12] | (byte)((ulong)lVar21 >> 0x10);
          bVar41 = pbVar13[0x13] | (byte)((ulong)lVar21 >> 0x18);
          bVar42 = pbVar13[0x14] | (byte)((ulong)lVar21 >> 0x20);
          bVar43 = pbVar13[0x15] | (byte)((ulong)lVar21 >> 0x28);
          bVar44 = pbVar13[0x16] | (byte)((ulong)lVar21 >> 0x30);
          bVar45 = pbVar13[0x17] | (byte)((ulong)lVar21 >> 0x38);
          auVar1[1] = bVar31;
          auVar1[0] = bVar30;
          auVar1[2] = bVar32;
          auVar1[3] = bVar33;
          auVar1[4] = bVar34;
          auVar1[5] = bVar35;
          auVar1[6] = bVar36;
          auVar1[7] = bVar37;
          auVar1[8] = bVar38;
          auVar1[9] = bVar39;
          auVar1[10] = bVar40;
          auVar1[0xb] = bVar41;
          auVar1[0xc] = bVar42;
          auVar1[0xd] = bVar43;
          auVar1[0xe] = bVar44;
          auVar1[0xf] = bVar45;
          auVar2[1] = bVar31;
          auVar2[0] = bVar30;
          auVar2[2] = bVar32;
          auVar2[3] = bVar33;
          auVar2[4] = bVar34;
          auVar2[5] = bVar35;
          auVar2[6] = bVar36;
          auVar2[7] = bVar37;
          auVar2[8] = bVar38;
          auVar2[9] = bVar39;
          auVar2[10] = bVar40;
          auVar2[0xb] = bVar41;
          auVar2[0xc] = bVar42;
          auVar2[0xd] = bVar43;
          auVar2[0xe] = bVar44;
          auVar2[0xf] = bVar45;
          auVar46 = NEON_ext(auVar1,auVar2,8,1);
          lVar18 = CONCAT17(bVar37 | auVar46[7],
                            CONCAT16(bVar36 | auVar46[6],
                                     CONCAT15(bVar35 | auVar46[5],
                                              CONCAT14(bVar34 | auVar46[4],
                                                       CONCAT13(bVar33 | auVar46[3],
                                                                CONCAT12(bVar32 | auVar46[2],
                                                                         CONCAT11(bVar31 | auVar46[1
                                                  ],bVar30 | auVar46[0])))))));
          goto joined_r0x000100e26620;
        }
        if (pbVar13[0x28] != 5) {
          return (byte *)0x0;
        }
        lVar18 = *(long *)(pbVar13 + 8);
        uVar23 = *(ulong *)(pbVar13 + 0x10);
        lVar21 = *(long *)pbVar13;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar21,uVar11);
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
  }
  else if (*(char *)((long)param_1 + 0x35) == *(char *)((long)param_2 + 0x35)) goto LAB_1045f4fc4;
  return (byte *)0x0;
}



/* Entry: 1045f4200; end: 1045f428f;  */

/* WARNING: Removing unreachable block (ram,0x0001045f4250) */

void FUN_1045f4200(void)

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
  FUN_1045f3f98(&uStack_d0);
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



/* Entry: 1045f4290; end: 1045f42e7;  */

void FUN_1045f4290(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[2] = 0xc000000000000000;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined1 *)((long)param_1 + 0x2c) = 1;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined2 *)((long)param_1 + 0x34) = 0x301;
  return;
}



/* Entry: 1045f42e8; end: 1045f4317;  */

undefined1  [16] FUN_1045f42e8(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                      *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 1045f4318; end: 1045f434b;  */

void FUN_1045f4318(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 1045f434c; end: 1045f435f;  */

undefined1  [16] FUN_1045f434c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x1045f435c;
  return auVar1;
}



/* Entry: 1045f4360; end: 1045f4387;  */

void FUN_1045f4360(void)

{
  FUN_1045f3e80();
  return;
}



/* Entry: 1045f4388; end: 1045f4427;  */

void FUN_1045f4388(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam00000001130880f8 != -1) {
    _swift_once(0x1130880f8,FUN_1045f3d20);
  }
  uVar5 = uRam0000000113814948;
  uVar4 = uRam0000000113814940;
  uVar3 = uRam0000000113814938;
  uVar2 = uRam0000000113814930;
  uVar1 = uRam0000000113814928;
  *param_1 = uRam0000000113814920;
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



/* Entry: 1045f4428; end: 1045f4463;  */

void FUN_1045f4428(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x1130892e8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x1130892e8,&UNK_10dd1d7f8);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 1045f4464; end: 1045f4647;  */

/* WARNING: Removing unreachable block (ram,0x0001045f44d0) */

void FUN_1045f4464(void)

{
  undefined8 *unaff_x20;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined6 uStack_48;
  undefined2 uStack_42;
  undefined6 uStack_40;
  
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_50 = unaff_x20[4];
  uStack_48 = (undefined6)unaff_x20[5];
  uStack_42 = (undefined2)*(undefined8 *)((long)unaff_x20 + 0x2e);
  uStack_40 = (undefined6)((ulong)*(undefined8 *)((long)unaff_x20 + 0x2e) >> 0x10);
  __ss6HasherV5_seedABSi_tcfC(&uStack_c0,0);
  uStack_e8 = uStack_98;
  uStack_f0 = uStack_a0;
  uStack_d8 = uStack_88;
  uStack_e0 = uStack_90;
  uStack_d0 = uStack_80;
  uStack_108 = uStack_b8;
  uStack_110 = uStack_c0;
  uStack_f8 = uStack_a8;
  uStack_100 = uStack_b0;
  FUN_1045f3f98(&uStack_110);
  uStack_88 = uStack_d8;
  uStack_90 = uStack_e0;
  uStack_80 = uStack_d0;
  uStack_a8 = uStack_f8;
  uStack_b0 = uStack_100;
  uStack_98 = uStack_e8;
  uStack_a0 = uStack_f0;
  uStack_b8 = uStack_108;
  uStack_c0 = uStack_110;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1045f4648; end: 1045f475f;  */

uint FUN_1045f4648(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined6 uStack_68;
  undefined2 uStack_62;
  undefined6 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined6 uStack_28;
  undefined2 uStack_22;
  undefined6 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_70 = param_1[4];
  uStack_68 = (undefined6)param_1[5];
  uStack_62 = (undefined2)*(undefined8 *)((long)param_1 + 0x2e);
  uStack_60 = (undefined6)((ulong)*(undefined8 *)((long)param_1 + 0x2e) >> 0x10);
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_30 = param_2[4];
  uStack_28 = (undefined6)param_2[5];
  uStack_22 = (undefined2)*(undefined8 *)((long)param_2 + 0x2e);
  uStack_20 = (undefined6)((ulong)*(undefined8 *)((long)param_2 + 0x2e) >> 0x10);
  func_0x0001045f4e84(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1045f4760; end: 1045f489f;  */

void FUN_1045f4760(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113088100 != -1) {
    _swift_once(0x113088100,0x1045f46a0);
  }
  uVar5 = uRam0000000113814978;
  uVar4 = uRam0000000113814970;
  uVar3 = uRam0000000113814968;
  uVar2 = uRam0000000113814960;
  uVar1 = uRam0000000113814958;
  *param_1 = uRam0000000113814950;
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



/* Entry: 1045f48a0; end: 1045f4b63;  */

uint FUN_1045f48a0(ulong *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  
  uVar2 = *param_1;
  func_0x0001045bad98(uVar2,*param_2);
  if ((uVar2 & 1) != 0) {
    uVar2 = param_2[4];
    if (param_1[4] == 0) {
      if (uVar2 == 0) goto LAB_1045f4910;
    }
    else if ((uVar2 != 0) &&
            (((uVar3 = param_1[3], uVar3 == param_2[3] && (param_1[4] == uVar2)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (), (uVar3 & 1) != 0)))) {
LAB_1045f4910:
      if ((char)param_1[6] == '\x01') {
        if (*(char *)(param_2 + 6) != '\x01') goto LAB_1045f4a88;
      }
      else {
        uVar1 = 0;
        if ((*(char *)(param_2 + 6) == '\x01') || (param_1[5] != param_2[5])) goto LAB_1045f4a8c;
      }
      if ((char)param_1[8] == '\x01') {
        if (*(char *)(param_2 + 8) != '\x01') goto LAB_1045f4a88;
      }
      else {
        uVar1 = 0;
        if ((*(char *)(param_2 + 8) == '\x01') || (param_1[7] != param_2[7])) goto LAB_1045f4a8c;
      }
      if ((char)param_1[10] == '\x01') {
        if (*(char *)(param_2 + 10) != '\x01') goto LAB_1045f4a88;
      }
      else {
        uVar1 = 0;
        if ((*(char *)(param_2 + 10) == '\x01') || ((double)param_1[9] != (double)param_2[9]))
        goto LAB_1045f4a8c;
      }
      uVar6 = param_1[0xc];
      uVar3 = param_1[0xb];
      uVar2 = param_2[0xc];
      uVar5 = param_2[0xb];
      uStack_70 = uVar5;
      uStack_68 = uVar2;
      uStack_60 = uVar3;
      uStack_58 = uVar6;
      if (uVar6 >> 0x3c < 0xf) {
        if (0xe < uVar2 >> 0x3c) goto LAB_1045f4a38;
        func_0x0001045f8fa8(&uStack_60,auStack_80,0x112d56fe0,&UNK_10d91dda0);
        func_0x0001045f8fa8(&uStack_70,auStack_80,0x112d56fe0,&UNK_10d91dda0);
        uVar4 = uVar3;
        func_0x000100e25fcc(uVar3,uVar6,uVar5,uVar2);
        func_0x0001000b44c0(uVar5,uVar2);
        func_0x0001000b44c0(uVar3,uVar6);
        if ((uVar4 & 1) != 0) goto LAB_1045f4b18;
      }
      else if (uVar2 >> 0x3c < 0xf) {
LAB_1045f4a38:
        func_0x0001045f8fa8(&uStack_60,auStack_80,0x112d56fe0,&UNK_10d91dda0);
        func_0x0001045f8fa8(&uStack_70,auStack_80,0x112d56fe0,&UNK_10d91dda0);
        func_0x0001000b44c0(uVar3,uVar6);
        func_0x0001000b44c0(uVar5,uVar2);
      }
      else {
        func_0x0001045f8fa8(&uStack_60,auStack_80,0x112d56fe0,&UNK_10d91dda0);
        func_0x0001045f8fa8(&uStack_70,auStack_80,0x112d56fe0,&UNK_10d91dda0);
        func_0x0001000b44c0(uVar3,uVar6);
LAB_1045f4b18:
        uVar2 = param_2[0xe];
        if (param_1[0xe] == 0) {
          if (uVar2 == 0) goto LAB_1045f4b54;
        }
        else if ((uVar2 != 0) &&
                (((uVar3 = param_1[0xd], uVar3 == param_2[0xd] && (param_1[0xe] == uVar2)) ||
                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (), (uVar3 & 1) != 0)))) {
LAB_1045f4b54:
          uVar2 = param_1[1];
          func_0x000100e25fcc(uVar2,param_1[2],param_2[1],param_2[2]);
          uVar1 = (uint)uVar2;
          goto LAB_1045f4a8c;
        }
      }
    }
  }
LAB_1045f4a88:
  uVar1 = 0;
LAB_1045f4a8c:
  return uVar1 & 1;
}



/* Entry: 1045f4b64; end: 1045f4fdf;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1045f4b64(undefined8 *param_1,long *param_2)

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
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  long lVar16;
  byte *pbVar17;
  uint uVar18;
  long lVar19;
  int iVar20;
  ulong uVar21;
  ulong uVar22;
  uint uVar23;
  ulong uVar24;
  byte *pbVar25;
  byte *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar26;
  ulong unaff_x22;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
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
  undefined1 auVar43 [16];
  
  if (*(char *)(param_1 + 2) == '\f') {
    if ((char)param_2[2] != '\f') {
      return (byte *)0x0;
    }
  }
  else if (*(char *)(param_1 + 2) != (char)param_2[2]) {
    return (byte *)0x0;
  }
  lVar19 = param_1[4];
  lVar16 = param_2[4];
  if (lVar19 == 0) {
    if (lVar16 == 0) {
LAB_1045f4bec:
      pbVar10 = (byte *)*param_1;
      pbVar26 = (byte *)param_1[1];
      lVar16 = *param_2;
      uVar22 = param_2[1];
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
        uVar18 = uVar4 >> 0x1e;
        uVar5 = (uint)(uVar22 >> 0x20);
        uVar23 = uVar5 >> 0x1e;
        iVar8 = (int)pbVar10;
        pbVar13 = pbVar26;
        if ((ulong)pbVar26 >> 0x3e == 3) {
          uVar21 = 0;
          if (((pbVar10 != (byte *)0x0) || (pbVar26 != (byte *)0xc000000000000000)) ||
             ((uVar22 >> 0x3e < 3 || ((uVar21 = 0, lVar16 != 0 || (uVar22 != 0xc000000000000000)))))
             ) goto joined_r0x000100e26170;
code_r0x000100e26128:
          pbVar9 = (byte *)0x1;
        }
        else if (uVar4 >> 0x1e < 2) {
          if (uVar18 == 0) {
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
          if (uVar23 == 0) {
            uVar24 = uVar22 >> 0x30 & 0xff;
            goto code_r0x000100e2608c;
          }
          iVar20 = (int)((ulong)lVar16 >> 0x20);
          if (SBORROW4(iVar20,(int)lVar16)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
            (*pcVar6)();
          }
          if (uVar21 == (long)(iVar20 - (int)lVar16)) goto code_r0x000100e26094;
code_r0x000100e26154:
          pbVar9 = (byte *)0x0;
        }
        else {
          if (uVar18 == 2) {
            uVar21 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
            if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
              (*pcVar6)();
            }
            goto joined_r0x000100e26170;
          }
          uVar21 = 0;
          if (uVar23 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
          if (uVar23 == 2) {
            uVar24 = *(long *)(lVar16 + 0x18) - *(long *)(lVar16 + 0x10);
            if (SBORROW8(*(long *)(lVar16 + 0x18),*(long *)(lVar16 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
              (*pcVar6)();
            }
code_r0x000100e2608c:
            if (uVar21 != uVar24) goto code_r0x000100e26154;
code_r0x000100e26094:
            if ((long)uVar21 < 1) goto code_r0x000100e26128;
            if (uVar18 < 2) {
              if (uVar18 == 0) {
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
                pbVar13 = puVar7 + (((ulong)pbVar26 >> 0x30 & 0xff) - 0x70);
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
                pbVar13 = pbVar10;
                func_0x000107c5ec3c();
                if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                  (*pcVar6)();
                }
                pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar13);
                func_0x000107c5ec38();
                unaff_x19 = pbVar10;
                if (pbVar10 != (byte *)0x0) {
                  if ((long)unaff_x23 <= (long)pbVar13) {
                    pbVar13 = unaff_x23;
                  }
                  pbVar13 = pbVar13 + (long)pbVar10;
                  goto code_r0x000100e262a4;
                }
              }
              pbVar13 = (byte *)0x0;
            }
            else {
              if (uVar18 != 2) {
                *(undefined8 *)(puVar7 + -0x6a) = 0;
                *(undefined8 *)(puVar7 + -0x70) = 0;
                pbVar13 = puVar7 + -0x70;
                goto code_r0x000100e26260;
              }
              lVar19 = *(long *)(pbVar10 + 0x10);
              unaff_x24 = *(byte **)(pbVar10 + 0x18);
              func_0x000107c5ec30();
              pbVar13 = pbVar10;
              if (pbVar10 != (byte *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar19,(long)pbVar13)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                  (*pcVar6)();
                }
                pbVar10 = pbVar10 + (lVar19 - (long)pbVar13);
              }
              unaff_x23 = unaff_x24 + -lVar19;
              if (SBORROW8((long)unaff_x24,lVar19)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                (*pcVar6)();
              }
              func_0x000107c5ec38();
              unaff_x19 = pbVar10;
              unaff_x25 = pbVar26;
              if (pbVar10 == (byte *)0x0) {
                pbVar13 = (byte *)0x0;
              }
              else {
                if ((long)unaff_x23 <= (long)pbVar13) {
                  pbVar13 = unaff_x23;
                }
                pbVar13 = pbVar13 + (long)pbVar10;
              }
            }
code_r0x000100e262a4:
            unaff_x20 = (ulong)pbVar26 & 0x3fffffffffffffff;
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar16,uVar22);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
            unaff_x22 = uVar22;
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
        pbVar25 = *(byte **)(pbVar9 + 0x18);
        bVar27 = pbVar9[0x28];
        pbVar26 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                           (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
        pbVar14 = pbVar10;
        if (bVar27 < 3) {
          if (bVar27 == 0) {
            if (pbVar13[0x28] == 0) {
              lVar16 = *(long *)pbVar13;
              uVar11 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar12,lVar16,uVar11);
              return (byte *)(ulong)((uint)pbVar12 & 1);
            }
            return (byte *)0x0;
          }
          if (bVar27 == 1) {
            if (pbVar13[0x28] != 1) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)(pbVar13 + 8);
            pbVar17 = *(byte **)(pbVar13 + 0x10);
            lVar16 = *(long *)pbVar13;
            uVar11 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar12,lVar16,uVar11);
            if (((ulong)pbVar12 & 1) == 0) {
              return (byte *)0x0;
            }
            pbVar12 = pbVar10;
            pbVar14 = pbVar26;
            if ((pbVar10 == pbVar15) && (pbVar26 == pbVar17)) {
              return (byte *)0x1;
            }
          }
          else {
            if (pbVar13[0x28] != 2) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)pbVar13;
            pbVar17 = *(byte **)(pbVar13 + 8);
            lVar16 = *(long *)(pbVar13 + 0x18);
            if ((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) {
              if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
                return (byte *)0x0;
              }
              if (pbVar25 == (byte *)0x0) goto joined_r0x000100e26620;
              if (lVar16 == 0) {
                return (byte *)0x0;
              }
              func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
              func_0x000107c61174(lVar16);
              func_0x000107c61174();
              pbVar10 = pbVar25;
              func_0x000107c60118();
              func_0x000107c61170(pbVar25);
              func_0x000107c61170(lVar16);
              pbVar25 = pbVar10;
joined_r0x000100e266a4:
              if (((ulong)pbVar25 & 1) == 0) {
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
          )(pbVar12,pbVar14,pbVar15,pbVar17,0);
          return pbVar12;
        }
        lVar19 = *(long *)(pbVar9 + 0x20);
        if (bVar27 < 5) {
          if (bVar27 != 3) {
            if (pbVar13[0x28] != 4) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)pbVar13;
            pbVar17 = *(byte **)(pbVar13 + 8);
            if (((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) &&
               (pbVar12 = pbVar26, pbVar14 = pbVar25, pbVar15 = *(byte **)(pbVar13 + 0x10),
               pbVar17 = *(byte **)(pbVar13 + 0x18),
               pbVar26 == *(byte **)(pbVar13 + 0x10) && pbVar25 == *(byte **)(pbVar13 + 0x18))) {
              return (byte *)0x1;
            }
            goto code_r0x000107c605b8;
          }
          if (pbVar13[0x28] != 3) {
            return (byte *)0x0;
          }
          if ((uint)*pbVar13 != ((uint)pbVar12 & 0xff)) {
            return (byte *)0x0;
          }
          pbVar17 = *(byte **)(pbVar13 + 0x10);
          lVar16 = *(long *)(pbVar13 + 0x20);
          if (pbVar26 == (byte *)0x0) {
            if (pbVar17 != (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar17 == (byte *)0x0) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)(pbVar13 + 8);
            pbVar12 = pbVar10;
            pbVar14 = pbVar26;
            if ((pbVar10 != pbVar15) || (pbVar26 != pbVar17)) goto code_r0x000107c605b8;
          }
          if (lVar19 != 0) {
            if (lVar16 == 0) {
              return (byte *)0x0;
            }
            if ((pbVar25 == *(byte **)(pbVar13 + 0x18)) && (lVar19 == lVar16)) {
              return (byte *)0x1;
            }
            func_0x000107c605b8(pbVar25,lVar19,*(byte **)(pbVar13 + 0x18),lVar16,0);
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar16 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
        if (bVar27 != 5) {
          if ((((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
              lVar19 == 0) && pbVar26 == (byte *)0x0) {
            if (pbVar13[0x28] != 6) {
              return (byte *)0x0;
            }
            lVar19 = *(long *)(pbVar13 + 0x20);
            lVar16 = *(long *)(pbVar13 + 0x18);
            bVar27 = pbVar13[8] | (byte)lVar16;
            bVar28 = pbVar13[9] | (byte)((ulong)lVar16 >> 8);
            bVar29 = pbVar13[10] | (byte)((ulong)lVar16 >> 0x10);
            bVar30 = pbVar13[0xb] | (byte)((ulong)lVar16 >> 0x18);
            bVar31 = pbVar13[0xc] | (byte)((ulong)lVar16 >> 0x20);
            bVar32 = pbVar13[0xd] | (byte)((ulong)lVar16 >> 0x28);
            bVar33 = pbVar13[0xe] | (byte)((ulong)lVar16 >> 0x30);
            bVar34 = pbVar13[0xf] | (byte)((ulong)lVar16 >> 0x38);
            bVar35 = pbVar13[0x10] | (byte)lVar19;
            bVar36 = pbVar13[0x11] | (byte)((ulong)lVar19 >> 8);
            bVar37 = pbVar13[0x12] | (byte)((ulong)lVar19 >> 0x10);
            bVar38 = pbVar13[0x13] | (byte)((ulong)lVar19 >> 0x18);
            bVar39 = pbVar13[0x14] | (byte)((ulong)lVar19 >> 0x20);
            bVar40 = pbVar13[0x15] | (byte)((ulong)lVar19 >> 0x28);
            bVar41 = pbVar13[0x16] | (byte)((ulong)lVar19 >> 0x30);
            bVar42 = pbVar13[0x17] | (byte)((ulong)lVar19 >> 0x38);
            auVar43[1] = bVar28;
            auVar43[0] = bVar27;
            auVar43[2] = bVar29;
            auVar43[3] = bVar30;
            auVar43[4] = bVar31;
            auVar43[5] = bVar32;
            auVar43[6] = bVar33;
            auVar43[7] = bVar34;
            auVar43[8] = bVar35;
            auVar43[9] = bVar36;
            auVar43[10] = bVar37;
            auVar43[0xb] = bVar38;
            auVar43[0xc] = bVar39;
            auVar43[0xd] = bVar40;
            auVar43[0xe] = bVar41;
            auVar43[0xf] = bVar42;
            auVar3[1] = bVar28;
            auVar3[0] = bVar27;
            auVar3[2] = bVar29;
            auVar3[3] = bVar30;
            auVar3[4] = bVar31;
            auVar3[5] = bVar32;
            auVar3[6] = bVar33;
            auVar3[7] = bVar34;
            auVar3[8] = bVar35;
            auVar3[9] = bVar36;
            auVar3[10] = bVar37;
            auVar3[0xb] = bVar38;
            auVar3[0xc] = bVar39;
            auVar3[0xd] = bVar40;
            auVar3[0xe] = bVar41;
            auVar3[0xf] = bVar42;
            auVar43 = NEON_ext(auVar43,auVar3,8,1);
            if (CONCAT17(bVar34 | auVar43[7],
                         CONCAT16(bVar33 | auVar43[6],
                                  CONCAT15(bVar32 | auVar43[5],
                                           CONCAT14(bVar31 | auVar43[4],
                                                    CONCAT13(bVar30 | auVar43[3],
                                                             CONCAT12(bVar29 | auVar43[2],
                                                                      CONCAT11(bVar28 | auVar43[1],
                                                                               bVar27 | auVar43[0]))
                                                            ))))) == 0 && *(long *)pbVar13 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if ((pbVar12 == (byte *)0x1) &&
             (((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar26 == (byte *)0x0) &&
              lVar19 == 0)) {
            if (pbVar13[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar13 != 1) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar13[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar13 != 2) {
              return (byte *)0x0;
            }
          }
          lVar19 = *(long *)(pbVar13 + 0x20);
          lVar16 = *(long *)(pbVar13 + 0x18);
          bVar27 = pbVar13[8] | (byte)lVar16;
          bVar28 = pbVar13[9] | (byte)((ulong)lVar16 >> 8);
          bVar29 = pbVar13[10] | (byte)((ulong)lVar16 >> 0x10);
          bVar30 = pbVar13[0xb] | (byte)((ulong)lVar16 >> 0x18);
          bVar31 = pbVar13[0xc] | (byte)((ulong)lVar16 >> 0x20);
          bVar32 = pbVar13[0xd] | (byte)((ulong)lVar16 >> 0x28);
          bVar33 = pbVar13[0xe] | (byte)((ulong)lVar16 >> 0x30);
          bVar34 = pbVar13[0xf] | (byte)((ulong)lVar16 >> 0x38);
          bVar35 = pbVar13[0x10] | (byte)lVar19;
          bVar36 = pbVar13[0x11] | (byte)((ulong)lVar19 >> 8);
          bVar37 = pbVar13[0x12] | (byte)((ulong)lVar19 >> 0x10);
          bVar38 = pbVar13[0x13] | (byte)((ulong)lVar19 >> 0x18);
          bVar39 = pbVar13[0x14] | (byte)((ulong)lVar19 >> 0x20);
          bVar40 = pbVar13[0x15] | (byte)((ulong)lVar19 >> 0x28);
          bVar41 = pbVar13[0x16] | (byte)((ulong)lVar19 >> 0x30);
          bVar42 = pbVar13[0x17] | (byte)((ulong)lVar19 >> 0x38);
          auVar1[1] = bVar28;
          auVar1[0] = bVar27;
          auVar1[2] = bVar29;
          auVar1[3] = bVar30;
          auVar1[4] = bVar31;
          auVar1[5] = bVar32;
          auVar1[6] = bVar33;
          auVar1[7] = bVar34;
          auVar1[8] = bVar35;
          auVar1[9] = bVar36;
          auVar1[10] = bVar37;
          auVar1[0xb] = bVar38;
          auVar1[0xc] = bVar39;
          auVar1[0xd] = bVar40;
          auVar1[0xe] = bVar41;
          auVar1[0xf] = bVar42;
          auVar2[1] = bVar28;
          auVar2[0] = bVar27;
          auVar2[2] = bVar29;
          auVar2[3] = bVar30;
          auVar2[4] = bVar31;
          auVar2[5] = bVar32;
          auVar2[6] = bVar33;
          auVar2[7] = bVar34;
          auVar2[8] = bVar35;
          auVar2[9] = bVar36;
          auVar2[10] = bVar37;
          auVar2[0xb] = bVar38;
          auVar2[0xc] = bVar39;
          auVar2[0xd] = bVar40;
          auVar2[0xe] = bVar41;
          auVar2[0xf] = bVar42;
          auVar43 = NEON_ext(auVar1,auVar2,8,1);
          lVar16 = CONCAT17(bVar34 | auVar43[7],
                            CONCAT16(bVar33 | auVar43[6],
                                     CONCAT15(bVar32 | auVar43[5],
                                              CONCAT14(bVar31 | auVar43[4],
                                                       CONCAT13(bVar30 | auVar43[3],
                                                                CONCAT12(bVar29 | auVar43[2],
                                                                         CONCAT11(bVar28 | auVar43[1
                                                  ],bVar27 | auVar43[0])))))));
          goto joined_r0x000100e26620;
        }
        if (pbVar13[0x28] != 5) {
          return (byte *)0x0;
        }
        lVar16 = *(long *)(pbVar13 + 8);
        uVar22 = *(ulong *)(pbVar13 + 0x10);
        lVar19 = *(long *)pbVar13;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar19,uVar11);
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
  }
  else if (lVar16 != 0) {
    uVar22 = param_1[3];
    if (((uVar22 == param_2[3]) && (lVar19 == lVar16)) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar22,lVar19,param_2[3],lVar16,0), (uVar22 & 1) != 0)) goto LAB_1045f4bec;
  }
  return (byte *)0x0;
}



/* Entry: 1045f4fe0; end: 1045f50f3;  */

uint FUN_1045f4fe0(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_118 [56];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined6 uStack_b8;
  undefined2 uStack_b2;
  undefined6 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined6 uStack_78;
  undefined2 uStack_72;
  undefined6 uStack_70;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == *(long *)(param_4 + 0x10)) {
    if (lVar3 != 0 && param_1 != param_4) {
      puVar4 = (undefined8 *)(param_1 + 0x20);
      puVar5 = (undefined8 *)(param_4 + 0x20);
      do {
        uStack_d8 = puVar4[1];
        uStack_e0 = *puVar4;
        uStack_c8 = puVar4[3];
        uStack_d0 = puVar4[2];
        uStack_c0 = puVar4[4];
        uStack_b8 = (undefined6)puVar4[5];
        uStack_b2 = (undefined2)*(undefined8 *)((long)puVar4 + 0x2e);
        uStack_b0 = (undefined6)((ulong)*(undefined8 *)((long)puVar4 + 0x2e) >> 0x10);
        uStack_98 = puVar5[1];
        uStack_a0 = *puVar5;
        uStack_88 = puVar5[3];
        uStack_90 = puVar5[2];
        uStack_80 = puVar5[4];
        uStack_78 = (undefined6)puVar5[5];
        uStack_72 = (undefined2)*(undefined8 *)((long)puVar5 + 0x2e);
        uStack_70 = (undefined6)((ulong)*(undefined8 *)((long)puVar5 + 0x2e) >> 0x10);
        FUN_104603b94(&uStack_e0,auStack_118);
        FUN_104603b94(&uStack_a0,auStack_118);
        puVar2 = &uStack_e0;
        func_0x0001045f4e84(puVar2,&uStack_a0);
        func_0x000104603bc8(&uStack_a0);
        func_0x000104603bc8(&uStack_e0);
        if (((ulong)puVar2 & 1) == 0) goto LAB_1045f50cc;
        puVar5 = puVar5 + 7;
        puVar4 = puVar4 + 7;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    func_0x000100e25fcc(param_2,param_3,param_5,param_6);
    uVar1 = (uint)param_2;
  }
  else {
LAB_1045f50cc:
    uVar1 = 0;
  }
  return uVar1 & 1;
}



/* Entry: 1045f50f4; end: 1045f5163;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1045f50f4(byte *param_1,byte *param_2,ulong param_3,ulong param_4,long param_5,
                    ulong param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  byte *pbVar8;
  undefined8 uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  char cVar15;
  char cVar16;
  uint uVar17;
  int iVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  byte *pbVar22;
  byte *unaff_x19;
  long lVar23;
  ulong unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x22;
  long lVar24;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar25;
  byte bVar26;
  byte bVar27;
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
  undefined1 auVar41 [16];
  
  cVar16 = (char)((ulong)param_8 >> 0x20);
  cVar15 = (char)((ulong)param_7 >> 0x20);
  if ((param_3 & 0xff00000000) == 0x100000000) {
    if (cVar15 != '\x01') {
      return (byte *)0x0;
    }
  }
  else {
    if (cVar15 == '\x01') {
      return (byte *)0x0;
    }
    if ((int)param_3 != (int)param_7) {
      return (byte *)0x0;
    }
  }
  if ((param_4 & 0xff00000000) == 0x100000000) {
    if (cVar16 == '\x01') {
SUB_100e25fcc:
      do {
        *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
        *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
        *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
        *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
        *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
        *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
        *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
        *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
        *(undefined8 *)((long)register0x00000008 + -0x58) =
             *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        uVar4 = (uint)((ulong)param_2 >> 0x20);
        uVar17 = uVar4 >> 0x1e;
        uVar5 = (uint)(param_6 >> 0x20);
        uVar20 = uVar5 >> 0x1e;
        iVar7 = (int)param_1;
        pbVar11 = param_2;
        if ((ulong)param_2 >> 0x3e == 3) {
          uVar19 = 0;
          if ((((param_1 != (byte *)0x0) || (param_2 != (byte *)0xc000000000000000)) ||
              (param_6 >> 0x3e < 3)) ||
             ((uVar19 = 0, param_5 != 0 || (param_6 != 0xc000000000000000))))
          goto joined_r0x000100e26170;
code_r0x000100e26128:
          pbVar8 = (byte *)0x1;
        }
        else if (uVar4 >> 0x1e < 2) {
          if (uVar17 == 0) {
            uVar19 = (ulong)param_2 >> 0x30 & 0xff;
          }
          else {
            iVar18 = (int)((ulong)param_1 >> 0x20);
            if (SBORROW4(iVar18,iVar7)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
              (*pcVar6)();
            }
            uVar19 = (ulong)(iVar18 - iVar7);
          }
joined_r0x000100e26170:
          if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
          if (uVar20 == 0) {
            uVar21 = param_6 >> 0x30 & 0xff;
            goto code_r0x000100e2608c;
          }
          iVar18 = (int)((ulong)param_5 >> 0x20);
          if (SBORROW4(iVar18,(int)param_5)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
            (*pcVar6)();
          }
          if (uVar19 == (long)(iVar18 - (int)param_5)) goto code_r0x000100e26094;
code_r0x000100e26154:
          pbVar8 = (byte *)0x0;
        }
        else {
          if (uVar17 == 2) {
            uVar19 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
            if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
              (*pcVar6)();
            }
            goto joined_r0x000100e26170;
          }
          uVar19 = 0;
          if (uVar20 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
          if (uVar20 == 2) {
            uVar21 = *(long *)(param_5 + 0x18) - *(long *)(param_5 + 0x10);
            if (SBORROW8(*(long *)(param_5 + 0x18),*(long *)(param_5 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
              (*pcVar6)();
            }
code_r0x000100e2608c:
            if (uVar19 != uVar21) goto code_r0x000100e26154;
code_r0x000100e26094:
            if ((long)uVar19 < 1) goto code_r0x000100e26128;
            if (uVar17 < 2) {
              if (uVar17 == 0) {
                *(char *)((long)register0x00000008 + -0x70) = (char)param_1;
                *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)param_1 >> 8);
                *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)param_1 >> 0x10);
                *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)param_1 >> 0x18);
                *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)param_1 >> 0x20);
                *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)param_1 >> 0x28);
                *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)param_1 >> 0x30);
                *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)param_1 >> 0x38);
                *(char *)((long)register0x00000008 + -0x68) = (char)param_2;
                *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)param_2 >> 8);
                *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)param_2 >> 0x10);
                *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)param_2 >> 0x18);
                *(char *)((long)register0x00000008 + -100) = (char)((ulong)param_2 >> 0x20);
                *(char *)((long)register0x00000008 + -99) = (char)((ulong)param_2 >> 0x28);
                pbVar11 = (byte *)((long)register0x00000008 +
                                  (((ulong)param_2 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
                unaff_x21 = 0;
                func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                    (undefined1 *)((long)register0x00000008 + -0x70));
                pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
                goto code_r0x000100e262b0;
              }
              unaff_x25 = (byte *)(long)iVar7;
              unaff_x23 = (byte *)(((long)param_1 >> 0x20) - (long)unaff_x25);
              if ((long)param_1 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                (*pcVar6)();
              }
              func_0x000107c5ec30();
              unaff_x24 = param_2;
              if (param_1 == (byte *)0x0) {
                func_0x000107c5ec38();
                param_1 = (byte *)0x0;
              }
              else {
                pbVar11 = param_1;
                func_0x000107c5ec3c();
                if (SBORROW8((long)unaff_x25,(long)pbVar11)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                  (*pcVar6)();
                }
                param_1 = param_1 + ((long)unaff_x25 - (long)pbVar11);
                func_0x000107c5ec38();
                unaff_x19 = param_1;
                if (param_1 != (byte *)0x0) {
                  if ((long)unaff_x23 <= (long)pbVar11) {
                    pbVar11 = unaff_x23;
                  }
                  pbVar11 = pbVar11 + (long)param_1;
                  goto code_r0x000100e262a4;
                }
              }
              pbVar11 = (byte *)0x0;
            }
            else {
              if (uVar17 != 2) {
                *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
                *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
                pbVar11 = (byte *)((long)register0x00000008 + -0x70);
                goto code_r0x000100e26260;
              }
              lVar23 = *(long *)(param_1 + 0x10);
              unaff_x24 = *(byte **)(param_1 + 0x18);
              func_0x000107c5ec30();
              pbVar11 = param_1;
              if (param_1 != (byte *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar23,(long)pbVar11)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                  (*pcVar6)();
                }
                param_1 = param_1 + (lVar23 - (long)pbVar11);
              }
              unaff_x23 = unaff_x24 + -lVar23;
              if (SBORROW8((long)unaff_x24,lVar23)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                (*pcVar6)();
              }
              func_0x000107c5ec38();
              unaff_x19 = param_1;
              unaff_x25 = param_2;
              if (param_1 == (byte *)0x0) {
                pbVar11 = (byte *)0x0;
              }
              else {
                if ((long)unaff_x23 <= (long)pbVar11) {
                  pbVar11 = unaff_x23;
                }
                pbVar11 = pbVar11 + (long)param_1;
              }
            }
code_r0x000100e262a4:
            unaff_x20 = (ulong)param_2 & 0x3fffffffffffffff;
            unaff_x21 = 0;
            func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),param_1,pbVar11,
                                param_5,param_6);
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
            unaff_x22 = param_6;
          }
          else {
            pbVar8 = (byte *)(ulong)(uVar19 == 0);
          }
        }
code_r0x000100e262b0:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)
           ) {
          return pbVar8;
        }
        func_0x000107c60e78();
        *(byte **)((long)register0x00000008 + -0xc0) = unaff_x24;
        *(byte **)((long)register0x00000008 + -0xb8) = unaff_x23;
        *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x22;
        *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x21;
        *(ulong *)((long)register0x00000008 + -0xa0) = unaff_x20;
        *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x90) =
             (undefined1 *)((long)register0x00000008 + -0x10);
        *(undefined **)((long)register0x00000008 + -0x88) = &UNK_100e26304;
        pbVar10 = *(byte **)pbVar8;
        param_1 = *(byte **)(pbVar8 + 8);
        pbVar22 = *(byte **)(pbVar8 + 0x18);
        bVar25 = pbVar8[0x28];
        param_2 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                           (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
        pbVar12 = param_1;
        if (bVar25 < 3) {
          if (bVar25 == 0) {
            if (pbVar11[0x28] == 0) {
              lVar23 = *(long *)pbVar11;
              uVar9 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar10,lVar23,uVar9);
              return (byte *)(ulong)((uint)pbVar10 & 1);
            }
            return (byte *)0x0;
          }
          if (bVar25 == 1) {
            if (pbVar11[0x28] != 1) {
              return (byte *)0x0;
            }
            pbVar13 = *(byte **)(pbVar11 + 8);
            pbVar14 = *(byte **)(pbVar11 + 0x10);
            lVar23 = *(long *)pbVar11;
            uVar9 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar10,lVar23,uVar9);
            if (((ulong)pbVar10 & 1) == 0) {
              return (byte *)0x0;
            }
            pbVar10 = param_1;
            pbVar12 = param_2;
            if ((param_1 == pbVar13) && (param_2 == pbVar14)) {
              return (byte *)0x1;
            }
          }
          else {
            if (pbVar11[0x28] != 2) {
              return (byte *)0x0;
            }
            pbVar13 = *(byte **)pbVar11;
            pbVar14 = *(byte **)(pbVar11 + 8);
            lVar23 = *(long *)(pbVar11 + 0x18);
            if ((pbVar10 == pbVar13) && (param_1 == pbVar14)) {
              if (((pbVar8[0x10] ^ pbVar11[0x10]) & 1) != 0) {
                return (byte *)0x0;
              }
              if (pbVar22 == (byte *)0x0) goto joined_r0x000100e26620;
              if (lVar23 == 0) {
                return (byte *)0x0;
              }
              func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
              func_0x000107c61174(lVar23);
              func_0x000107c61174();
              pbVar11 = pbVar22;
              func_0x000107c60118();
              func_0x000107c61170(pbVar22);
              func_0x000107c61170(lVar23);
              pbVar22 = pbVar11;
joined_r0x000100e266a4:
              if (((ulong)pbVar22 & 1) == 0) {
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
          )(pbVar10,pbVar12,pbVar13,pbVar14,0);
          return pbVar10;
        }
        lVar24 = *(long *)(pbVar8 + 0x20);
        if (bVar25 < 5) {
          if (bVar25 != 3) {
            if (pbVar11[0x28] != 4) {
              return (byte *)0x0;
            }
            pbVar13 = *(byte **)pbVar11;
            pbVar14 = *(byte **)(pbVar11 + 8);
            if (((pbVar10 == pbVar13) && (param_1 == pbVar14)) &&
               (pbVar10 = param_2, pbVar12 = pbVar22, pbVar13 = *(byte **)(pbVar11 + 0x10),
               pbVar14 = *(byte **)(pbVar11 + 0x18),
               param_2 == *(byte **)(pbVar11 + 0x10) && pbVar22 == *(byte **)(pbVar11 + 0x18))) {
              return (byte *)0x1;
            }
            goto code_r0x000107c605b8;
          }
          if (pbVar11[0x28] != 3) {
            return (byte *)0x0;
          }
          if ((uint)*pbVar11 != ((uint)pbVar10 & 0xff)) {
            return (byte *)0x0;
          }
          pbVar14 = *(byte **)(pbVar11 + 0x10);
          lVar23 = *(long *)(pbVar11 + 0x20);
          if (param_2 == (byte *)0x0) {
            if (pbVar14 != (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar14 == (byte *)0x0) {
              return (byte *)0x0;
            }
            pbVar13 = *(byte **)(pbVar11 + 8);
            pbVar10 = param_1;
            pbVar12 = param_2;
            if ((param_1 != pbVar13) || (param_2 != pbVar14)) goto code_r0x000107c605b8;
          }
          if (lVar24 != 0) {
            if (lVar23 == 0) {
              return (byte *)0x0;
            }
            if ((pbVar22 == *(byte **)(pbVar11 + 0x18)) && (lVar24 == lVar23)) {
              return (byte *)0x1;
            }
            func_0x000107c605b8(pbVar22,lVar24,*(byte **)(pbVar11 + 0x18),lVar23,0);
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar23 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
        if (bVar25 != 5) {
          if ((((pbVar22 == (byte *)0x0 && param_1 == (byte *)0x0) && pbVar10 == (byte *)0x0) &&
              lVar24 == 0) && param_2 == (byte *)0x0) {
            if (pbVar11[0x28] != 6) {
              return (byte *)0x0;
            }
            lVar24 = *(long *)(pbVar11 + 0x20);
            lVar23 = *(long *)(pbVar11 + 0x18);
            bVar25 = pbVar11[8] | (byte)lVar23;
            bVar26 = pbVar11[9] | (byte)((ulong)lVar23 >> 8);
            bVar27 = pbVar11[10] | (byte)((ulong)lVar23 >> 0x10);
            bVar28 = pbVar11[0xb] | (byte)((ulong)lVar23 >> 0x18);
            bVar29 = pbVar11[0xc] | (byte)((ulong)lVar23 >> 0x20);
            bVar30 = pbVar11[0xd] | (byte)((ulong)lVar23 >> 0x28);
            bVar31 = pbVar11[0xe] | (byte)((ulong)lVar23 >> 0x30);
            bVar32 = pbVar11[0xf] | (byte)((ulong)lVar23 >> 0x38);
            bVar33 = pbVar11[0x10] | (byte)lVar24;
            bVar34 = pbVar11[0x11] | (byte)((ulong)lVar24 >> 8);
            bVar35 = pbVar11[0x12] | (byte)((ulong)lVar24 >> 0x10);
            bVar36 = pbVar11[0x13] | (byte)((ulong)lVar24 >> 0x18);
            bVar37 = pbVar11[0x14] | (byte)((ulong)lVar24 >> 0x20);
            bVar38 = pbVar11[0x15] | (byte)((ulong)lVar24 >> 0x28);
            bVar39 = pbVar11[0x16] | (byte)((ulong)lVar24 >> 0x30);
            bVar40 = pbVar11[0x17] | (byte)((ulong)lVar24 >> 0x38);
            auVar41[1] = bVar26;
            auVar41[0] = bVar25;
            auVar41[2] = bVar27;
            auVar41[3] = bVar28;
            auVar41[4] = bVar29;
            auVar41[5] = bVar30;
            auVar41[6] = bVar31;
            auVar41[7] = bVar32;
            auVar41[8] = bVar33;
            auVar41[9] = bVar34;
            auVar41[10] = bVar35;
            auVar41[0xb] = bVar36;
            auVar41[0xc] = bVar37;
            auVar41[0xd] = bVar38;
            auVar41[0xe] = bVar39;
            auVar41[0xf] = bVar40;
            auVar3[1] = bVar26;
            auVar3[0] = bVar25;
            auVar3[2] = bVar27;
            auVar3[3] = bVar28;
            auVar3[4] = bVar29;
            auVar3[5] = bVar30;
            auVar3[6] = bVar31;
            auVar3[7] = bVar32;
            auVar3[8] = bVar33;
            auVar3[9] = bVar34;
            auVar3[10] = bVar35;
            auVar3[0xb] = bVar36;
            auVar3[0xc] = bVar37;
            auVar3[0xd] = bVar38;
            auVar3[0xe] = bVar39;
            auVar3[0xf] = bVar40;
            auVar41 = NEON_ext(auVar41,auVar3,8,1);
            if (CONCAT17(bVar32 | auVar41[7],
                         CONCAT16(bVar31 | auVar41[6],
                                  CONCAT15(bVar30 | auVar41[5],
                                           CONCAT14(bVar29 | auVar41[4],
                                                    CONCAT13(bVar28 | auVar41[3],
                                                             CONCAT12(bVar27 | auVar41[2],
                                                                      CONCAT11(bVar26 | auVar41[1],
                                                                               bVar25 | auVar41[0]))
                                                            ))))) == 0 && *(long *)pbVar11 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if ((pbVar10 == (byte *)0x1) &&
             (((pbVar22 == (byte *)0x0 && param_1 == (byte *)0x0) && param_2 == (byte *)0x0) &&
              lVar24 == 0)) {
            if (pbVar11[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar11 != 1) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar11[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar11 != 2) {
              return (byte *)0x0;
            }
          }
          lVar24 = *(long *)(pbVar11 + 0x20);
          lVar23 = *(long *)(pbVar11 + 0x18);
          bVar25 = pbVar11[8] | (byte)lVar23;
          bVar26 = pbVar11[9] | (byte)((ulong)lVar23 >> 8);
          bVar27 = pbVar11[10] | (byte)((ulong)lVar23 >> 0x10);
          bVar28 = pbVar11[0xb] | (byte)((ulong)lVar23 >> 0x18);
          bVar29 = pbVar11[0xc] | (byte)((ulong)lVar23 >> 0x20);
          bVar30 = pbVar11[0xd] | (byte)((ulong)lVar23 >> 0x28);
          bVar31 = pbVar11[0xe] | (byte)((ulong)lVar23 >> 0x30);
          bVar32 = pbVar11[0xf] | (byte)((ulong)lVar23 >> 0x38);
          bVar33 = pbVar11[0x10] | (byte)lVar24;
          bVar34 = pbVar11[0x11] | (byte)((ulong)lVar24 >> 8);
          bVar35 = pbVar11[0x12] | (byte)((ulong)lVar24 >> 0x10);
          bVar36 = pbVar11[0x13] | (byte)((ulong)lVar24 >> 0x18);
          bVar37 = pbVar11[0x14] | (byte)((ulong)lVar24 >> 0x20);
          bVar38 = pbVar11[0x15] | (byte)((ulong)lVar24 >> 0x28);
          bVar39 = pbVar11[0x16] | (byte)((ulong)lVar24 >> 0x30);
          bVar40 = pbVar11[0x17] | (byte)((ulong)lVar24 >> 0x38);
          auVar1[1] = bVar26;
          auVar1[0] = bVar25;
          auVar1[2] = bVar27;
          auVar1[3] = bVar28;
          auVar1[4] = bVar29;
          auVar1[5] = bVar30;
          auVar1[6] = bVar31;
          auVar1[7] = bVar32;
          auVar1[8] = bVar33;
          auVar1[9] = bVar34;
          auVar1[10] = bVar35;
          auVar1[0xb] = bVar36;
          auVar1[0xc] = bVar37;
          auVar1[0xd] = bVar38;
          auVar1[0xe] = bVar39;
          auVar1[0xf] = bVar40;
          auVar2[1] = bVar26;
          auVar2[0] = bVar25;
          auVar2[2] = bVar27;
          auVar2[3] = bVar28;
          auVar2[4] = bVar29;
          auVar2[5] = bVar30;
          auVar2[6] = bVar31;
          auVar2[7] = bVar32;
          auVar2[8] = bVar33;
          auVar2[9] = bVar34;
          auVar2[10] = bVar35;
          auVar2[0xb] = bVar36;
          auVar2[0xc] = bVar37;
          auVar2[0xd] = bVar38;
          auVar2[0xe] = bVar39;
          auVar2[0xf] = bVar40;
          auVar41 = NEON_ext(auVar1,auVar2,8,1);
          lVar23 = CONCAT17(bVar32 | auVar41[7],
                            CONCAT16(bVar31 | auVar41[6],
                                     CONCAT15(bVar30 | auVar41[5],
                                              CONCAT14(bVar29 | auVar41[4],
                                                       CONCAT13(bVar28 | auVar41[3],
                                                                CONCAT12(bVar27 | auVar41[2],
                                                                         CONCAT11(bVar26 | auVar41[1
                                                  ],bVar25 | auVar41[0])))))));
          goto joined_r0x000100e26620;
        }
        if (pbVar11[0x28] != 5) {
          return (byte *)0x0;
        }
        param_5 = *(long *)(pbVar11 + 8);
        param_6 = *(ulong *)(pbVar11 + 0x10);
        lVar23 = *(long *)pbVar11;
        uVar9 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar10,lVar23,uVar9);
        if (((ulong)pbVar10 & 1) == 0) {
          return (byte *)0x0;
        }
        unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
        unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
        unaff_x20 = *(ulong *)((long)register0x00000008 + -0xa0);
        unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
        unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
        unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
        unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
        unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
        register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
      } while( true );
    }
  }
  else if ((cVar16 != '\x01') && ((int)param_4 == (int)param_8)) goto SUB_100e25fcc;
  return (byte *)0x0;
}



/* Entry: 1045f5164; end: 1045f5383;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1045f5164(undefined8 *param_1,long *param_2)

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
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  long lVar16;
  byte *pbVar17;
  uint uVar18;
  long lVar19;
  int iVar20;
  ulong uVar21;
  ulong uVar22;
  uint uVar23;
  ulong uVar24;
  byte *pbVar25;
  byte *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar26;
  ulong unaff_x22;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
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
  undefined1 auVar43 [16];
  
  lVar19 = param_1[3];
  lVar16 = param_2[3];
  if (lVar19 == 0) {
    if (lVar16 != 0) {
      return (byte *)0x0;
    }
  }
  else {
    if (lVar16 == 0) {
      return (byte *)0x0;
    }
    uVar22 = param_1[2];
    if ((uVar22 != param_2[2] || lVar19 != lVar16) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar22,lVar19,param_2[2],lVar16,0), (uVar22 & 1) == 0)) {
      return (byte *)0x0;
    }
  }
  bVar27 = *(byte *)(param_2 + 4);
  if (*(byte *)(param_1 + 4) == 2) {
    if (bVar27 == 2) {
LAB_1045f51f8:
      pbVar10 = (byte *)*param_1;
      pbVar26 = (byte *)param_1[1];
      lVar16 = *param_2;
      uVar22 = param_2[1];
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
        uVar18 = uVar4 >> 0x1e;
        uVar5 = (uint)(uVar22 >> 0x20);
        uVar23 = uVar5 >> 0x1e;
        iVar8 = (int)pbVar10;
        pbVar13 = pbVar26;
        if ((ulong)pbVar26 >> 0x3e == 3) {
          uVar21 = 0;
          if ((((pbVar10 != (byte *)0x0) || (pbVar26 != (byte *)0xc000000000000000)) ||
              (uVar22 >> 0x3e < 3)) || ((uVar21 = 0, lVar16 != 0 || (uVar22 != 0xc000000000000000)))
             ) goto joined_r0x000100e26170;
code_r0x000100e26128:
          pbVar9 = (byte *)0x1;
        }
        else if (uVar4 >> 0x1e < 2) {
          if (uVar18 == 0) {
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
          if (uVar23 == 0) {
            uVar24 = uVar22 >> 0x30 & 0xff;
            goto code_r0x000100e2608c;
          }
          iVar20 = (int)((ulong)lVar16 >> 0x20);
          if (SBORROW4(iVar20,(int)lVar16)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
            (*pcVar6)();
          }
          if (uVar21 == (long)(iVar20 - (int)lVar16)) goto code_r0x000100e26094;
code_r0x000100e26154:
          pbVar9 = (byte *)0x0;
        }
        else {
          if (uVar18 == 2) {
            uVar21 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
            if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
              (*pcVar6)();
            }
            goto joined_r0x000100e26170;
          }
          uVar21 = 0;
          if (uVar23 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
          if (uVar23 == 2) {
            uVar24 = *(long *)(lVar16 + 0x18) - *(long *)(lVar16 + 0x10);
            if (SBORROW8(*(long *)(lVar16 + 0x18),*(long *)(lVar16 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
              (*pcVar6)();
            }
code_r0x000100e2608c:
            if (uVar21 != uVar24) goto code_r0x000100e26154;
code_r0x000100e26094:
            if ((long)uVar21 < 1) goto code_r0x000100e26128;
            if (uVar18 < 2) {
              if (uVar18 == 0) {
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
                pbVar13 = puVar7 + (((ulong)pbVar26 >> 0x30 & 0xff) - 0x70);
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
                pbVar13 = pbVar10;
                func_0x000107c5ec3c();
                if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                  (*pcVar6)();
                }
                pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar13);
                func_0x000107c5ec38();
                unaff_x19 = pbVar10;
                if (pbVar10 != (byte *)0x0) {
                  if ((long)unaff_x23 <= (long)pbVar13) {
                    pbVar13 = unaff_x23;
                  }
                  pbVar13 = pbVar13 + (long)pbVar10;
                  goto code_r0x000100e262a4;
                }
              }
              pbVar13 = (byte *)0x0;
            }
            else {
              if (uVar18 != 2) {
                *(undefined8 *)(puVar7 + -0x6a) = 0;
                *(undefined8 *)(puVar7 + -0x70) = 0;
                pbVar13 = puVar7 + -0x70;
                goto code_r0x000100e26260;
              }
              lVar19 = *(long *)(pbVar10 + 0x10);
              unaff_x24 = *(byte **)(pbVar10 + 0x18);
              func_0x000107c5ec30();
              pbVar13 = pbVar10;
              if (pbVar10 != (byte *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar19,(long)pbVar13)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                  (*pcVar6)();
                }
                pbVar10 = pbVar10 + (lVar19 - (long)pbVar13);
              }
              unaff_x23 = unaff_x24 + -lVar19;
              if (SBORROW8((long)unaff_x24,lVar19)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                (*pcVar6)();
              }
              func_0x000107c5ec38();
              unaff_x19 = pbVar10;
              unaff_x25 = pbVar26;
              if (pbVar10 == (byte *)0x0) {
                pbVar13 = (byte *)0x0;
              }
              else {
                if ((long)unaff_x23 <= (long)pbVar13) {
                  pbVar13 = unaff_x23;
                }
                pbVar13 = pbVar13 + (long)pbVar10;
              }
            }
code_r0x000100e262a4:
            unaff_x20 = (ulong)pbVar26 & 0x3fffffffffffffff;
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar16,uVar22);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
            unaff_x22 = uVar22;
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
        pbVar25 = *(byte **)(pbVar9 + 0x18);
        bVar27 = pbVar9[0x28];
        pbVar26 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                           (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
        pbVar14 = pbVar10;
        if (bVar27 < 3) {
          if (bVar27 == 0) {
            if (pbVar13[0x28] == 0) {
              lVar16 = *(long *)pbVar13;
              uVar11 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar12,lVar16,uVar11);
              return (byte *)(ulong)((uint)pbVar12 & 1);
            }
            return (byte *)0x0;
          }
          if (bVar27 == 1) {
            if (pbVar13[0x28] != 1) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)(pbVar13 + 8);
            pbVar17 = *(byte **)(pbVar13 + 0x10);
            lVar16 = *(long *)pbVar13;
            uVar11 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar12,lVar16,uVar11);
            if (((ulong)pbVar12 & 1) == 0) {
              return (byte *)0x0;
            }
            pbVar12 = pbVar10;
            pbVar14 = pbVar26;
            if ((pbVar10 == pbVar15) && (pbVar26 == pbVar17)) {
              return (byte *)0x1;
            }
          }
          else {
            if (pbVar13[0x28] != 2) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)pbVar13;
            pbVar17 = *(byte **)(pbVar13 + 8);
            lVar16 = *(long *)(pbVar13 + 0x18);
            if ((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) {
              if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
                return (byte *)0x0;
              }
              if (pbVar25 == (byte *)0x0) goto joined_r0x000100e26620;
              if (lVar16 == 0) {
                return (byte *)0x0;
              }
              func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
              func_0x000107c61174(lVar16);
              func_0x000107c61174();
              pbVar10 = pbVar25;
              func_0x000107c60118();
              func_0x000107c61170(pbVar25);
              func_0x000107c61170(lVar16);
              pbVar25 = pbVar10;
joined_r0x000100e266a4:
              if (((ulong)pbVar25 & 1) == 0) {
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
          )(pbVar12,pbVar14,pbVar15,pbVar17,0);
          return pbVar12;
        }
        lVar19 = *(long *)(pbVar9 + 0x20);
        if (bVar27 < 5) {
          if (bVar27 != 3) {
            if (pbVar13[0x28] != 4) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)pbVar13;
            pbVar17 = *(byte **)(pbVar13 + 8);
            if (((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) &&
               (pbVar12 = pbVar26, pbVar14 = pbVar25, pbVar15 = *(byte **)(pbVar13 + 0x10),
               pbVar17 = *(byte **)(pbVar13 + 0x18),
               pbVar26 == *(byte **)(pbVar13 + 0x10) && pbVar25 == *(byte **)(pbVar13 + 0x18))) {
              return (byte *)0x1;
            }
            goto code_r0x000107c605b8;
          }
          if (pbVar13[0x28] != 3) {
            return (byte *)0x0;
          }
          if ((uint)*pbVar13 != ((uint)pbVar12 & 0xff)) {
            return (byte *)0x0;
          }
          pbVar17 = *(byte **)(pbVar13 + 0x10);
          lVar16 = *(long *)(pbVar13 + 0x20);
          if (pbVar26 == (byte *)0x0) {
            if (pbVar17 != (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar17 == (byte *)0x0) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)(pbVar13 + 8);
            pbVar12 = pbVar10;
            pbVar14 = pbVar26;
            if ((pbVar10 != pbVar15) || (pbVar26 != pbVar17)) goto code_r0x000107c605b8;
          }
          if (lVar19 != 0) {
            if (lVar16 == 0) {
              return (byte *)0x0;
            }
            if ((pbVar25 == *(byte **)(pbVar13 + 0x18)) && (lVar19 == lVar16)) {
              return (byte *)0x1;
            }
            func_0x000107c605b8(pbVar25,lVar19,*(byte **)(pbVar13 + 0x18),lVar16,0);
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar16 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
        if (bVar27 != 5) {
          if ((((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
              lVar19 == 0) && pbVar26 == (byte *)0x0) {
            if (pbVar13[0x28] != 6) {
              return (byte *)0x0;
            }
            lVar19 = *(long *)(pbVar13 + 0x20);
            lVar16 = *(long *)(pbVar13 + 0x18);
            bVar27 = pbVar13[8] | (byte)lVar16;
            bVar28 = pbVar13[9] | (byte)((ulong)lVar16 >> 8);
            bVar29 = pbVar13[10] | (byte)((ulong)lVar16 >> 0x10);
            bVar30 = pbVar13[0xb] | (byte)((ulong)lVar16 >> 0x18);
            bVar31 = pbVar13[0xc] | (byte)((ulong)lVar16 >> 0x20);
            bVar32 = pbVar13[0xd] | (byte)((ulong)lVar16 >> 0x28);
            bVar33 = pbVar13[0xe] | (byte)((ulong)lVar16 >> 0x30);
            bVar34 = pbVar13[0xf] | (byte)((ulong)lVar16 >> 0x38);
            bVar35 = pbVar13[0x10] | (byte)lVar19;
            bVar36 = pbVar13[0x11] | (byte)((ulong)lVar19 >> 8);
            bVar37 = pbVar13[0x12] | (byte)((ulong)lVar19 >> 0x10);
            bVar38 = pbVar13[0x13] | (byte)((ulong)lVar19 >> 0x18);
            bVar39 = pbVar13[0x14] | (byte)((ulong)lVar19 >> 0x20);
            bVar40 = pbVar13[0x15] | (byte)((ulong)lVar19 >> 0x28);
            bVar41 = pbVar13[0x16] | (byte)((ulong)lVar19 >> 0x30);
            bVar42 = pbVar13[0x17] | (byte)((ulong)lVar19 >> 0x38);
            auVar43[1] = bVar28;
            auVar43[0] = bVar27;
            auVar43[2] = bVar29;
            auVar43[3] = bVar30;
            auVar43[4] = bVar31;
            auVar43[5] = bVar32;
            auVar43[6] = bVar33;
            auVar43[7] = bVar34;
            auVar43[8] = bVar35;
            auVar43[9] = bVar36;
            auVar43[10] = bVar37;
            auVar43[0xb] = bVar38;
            auVar43[0xc] = bVar39;
            auVar43[0xd] = bVar40;
            auVar43[0xe] = bVar41;
            auVar43[0xf] = bVar42;
            auVar3[1] = bVar28;
            auVar3[0] = bVar27;
            auVar3[2] = bVar29;
            auVar3[3] = bVar30;
            auVar3[4] = bVar31;
            auVar3[5] = bVar32;
            auVar3[6] = bVar33;
            auVar3[7] = bVar34;
            auVar3[8] = bVar35;
            auVar3[9] = bVar36;
            auVar3[10] = bVar37;
            auVar3[0xb] = bVar38;
            auVar3[0xc] = bVar39;
            auVar3[0xd] = bVar40;
            auVar3[0xe] = bVar41;
            auVar3[0xf] = bVar42;
            auVar43 = NEON_ext(auVar43,auVar3,8,1);
            if (CONCAT17(bVar34 | auVar43[7],
                         CONCAT16(bVar33 | auVar43[6],
                                  CONCAT15(bVar32 | auVar43[5],
                                           CONCAT14(bVar31 | auVar43[4],
                                                    CONCAT13(bVar30 | auVar43[3],
                                                             CONCAT12(bVar29 | auVar43[2],
                                                                      CONCAT11(bVar28 | auVar43[1],
                                                                               bVar27 | auVar43[0]))
                                                            ))))) == 0 && *(long *)pbVar13 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if ((pbVar12 == (byte *)0x1) &&
             (((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar26 == (byte *)0x0) &&
              lVar19 == 0)) {
            if (pbVar13[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar13 != 1) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar13[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar13 != 2) {
              return (byte *)0x0;
            }
          }
          lVar19 = *(long *)(pbVar13 + 0x20);
          lVar16 = *(long *)(pbVar13 + 0x18);
          bVar27 = pbVar13[8] | (byte)lVar16;
          bVar28 = pbVar13[9] | (byte)((ulong)lVar16 >> 8);
          bVar29 = pbVar13[10] | (byte)((ulong)lVar16 >> 0x10);
          bVar30 = pbVar13[0xb] | (byte)((ulong)lVar16 >> 0x18);
          bVar31 = pbVar13[0xc] | (byte)((ulong)lVar16 >> 0x20);
          bVar32 = pbVar13[0xd] | (byte)((ulong)lVar16 >> 0x28);
          bVar33 = pbVar13[0xe] | (byte)((ulong)lVar16 >> 0x30);
          bVar34 = pbVar13[0xf] | (byte)((ulong)lVar16 >> 0x38);
          bVar35 = pbVar13[0x10] | (byte)lVar19;
          bVar36 = pbVar13[0x11] | (byte)((ulong)lVar19 >> 8);
          bVar37 = pbVar13[0x12] | (byte)((ulong)lVar19 >> 0x10);
          bVar38 = pbVar13[0x13] | (byte)((ulong)lVar19 >> 0x18);
          bVar39 = pbVar13[0x14] | (byte)((ulong)lVar19 >> 0x20);
          bVar40 = pbVar13[0x15] | (byte)((ulong)lVar19 >> 0x28);
          bVar41 = pbVar13[0x16] | (byte)((ulong)lVar19 >> 0x30);
          bVar42 = pbVar13[0x17] | (byte)((ulong)lVar19 >> 0x38);
          auVar1[1] = bVar28;
          auVar1[0] = bVar27;
          auVar1[2] = bVar29;
          auVar1[3] = bVar30;
          auVar1[4] = bVar31;
          auVar1[5] = bVar32;
          auVar1[6] = bVar33;
          auVar1[7] = bVar34;
          auVar1[8] = bVar35;
          auVar1[9] = bVar36;
          auVar1[10] = bVar37;
          auVar1[0xb] = bVar38;
          auVar1[0xc] = bVar39;
          auVar1[0xd] = bVar40;
          auVar1[0xe] = bVar41;
          auVar1[0xf] = bVar42;
          auVar2[1] = bVar28;
          auVar2[0] = bVar27;
          auVar2[2] = bVar29;
          auVar2[3] = bVar30;
          auVar2[4] = bVar31;
          auVar2[5] = bVar32;
          auVar2[6] = bVar33;
          auVar2[7] = bVar34;
          auVar2[8] = bVar35;
          auVar2[9] = bVar36;
          auVar2[10] = bVar37;
          auVar2[0xb] = bVar38;
          auVar2[0xc] = bVar39;
          auVar2[0xd] = bVar40;
          auVar2[0xe] = bVar41;
          auVar2[0xf] = bVar42;
          auVar43 = NEON_ext(auVar1,auVar2,8,1);
          lVar16 = CONCAT17(bVar34 | auVar43[7],
                            CONCAT16(bVar33 | auVar43[6],
                                     CONCAT15(bVar32 | auVar43[5],
                                              CONCAT14(bVar31 | auVar43[4],
                                                       CONCAT13(bVar30 | auVar43[3],
                                                                CONCAT12(bVar29 | auVar43[2],
                                                                         CONCAT11(bVar28 | auVar43[1
                                                  ],bVar27 | auVar43[0])))))));
          goto joined_r0x000100e26620;
        }
        if (pbVar13[0x28] != 5) {
          return (byte *)0x0;
        }
        lVar16 = *(long *)(pbVar13 + 8);
        uVar22 = *(ulong *)(pbVar13 + 0x10);
        lVar19 = *(long *)pbVar13;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar19,uVar11);
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
  }
  else if ((bVar27 != 2) && (((*(byte *)(param_1 + 4) ^ bVar27) & 1) == 0)) goto LAB_1045f51f8;
  return (byte *)0x0;
}



/* Entry: 1045f5384; end: 1045f5a6b;  */

uint FUN_1045f5384(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_280 [64];
  long lStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
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
  
  lVar5 = param_2[3];
  if (param_1[3] == 0) {
    if (lVar5 == 0) goto LAB_1045f53dc;
  }
  else if ((lVar5 != 0) &&
          ((uVar2 = param_1[2], uVar2 == param_2[2] && param_1[3] == lVar5 ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar2 & 1) != 0)))) {
LAB_1045f53dc:
    uStack_b8 = param_1[5];
    uStack_c0 = param_1[4];
    uStack_a8 = param_1[7];
    uStack_b0 = param_1[6];
    uStack_98 = param_1[9];
    uStack_a0 = param_1[8];
    uStack_88 = param_1[0xb];
    uStack_90 = param_1[10];
    uStack_178 = param_1[5];
    lStack_180 = param_1[4];
    uStack_168 = param_1[7];
    uStack_170 = param_1[6];
    uStack_f8 = param_2[5];
    uStack_100 = param_2[4];
    uStack_e8 = param_2[7];
    uStack_f0 = param_2[6];
    uStack_d8 = param_2[9];
    uStack_e0 = param_2[8];
    uStack_c8 = param_2[0xb];
    uStack_d0 = param_2[10];
    uStack_1b8 = param_2[5];
    lStack_1c0 = param_2[4];
    uStack_1a8 = param_2[7];
    uStack_1b0 = param_2[6];
    uStack_158 = param_1[9];
    uStack_160 = param_1[8];
    uStack_148 = param_1[0xb];
    uStack_150 = param_1[10];
    uStack_198 = param_2[9];
    uStack_1a0 = param_2[8];
    uStack_188 = param_2[0xb];
    uStack_190 = param_2[10];
    lStack_140 = lStack_1c0;
    uStack_138 = uStack_1b8;
    uStack_130 = uStack_1b0;
    uStack_128 = uStack_1a8;
    uStack_120 = uStack_1a0;
    uStack_118 = uStack_198;
    uStack_110 = uStack_190;
    uStack_108 = uStack_188;
    if (lStack_180 == 0) {
      if (lStack_1c0 == 0) {
        uStack_1f8 = param_1[5];
        lStack_200 = param_1[4];
        uStack_1e8 = param_1[7];
        uStack_1f0 = param_1[6];
        uStack_1d8 = param_1[9];
        uStack_1e0 = param_1[8];
        uStack_1c8 = param_1[0xb];
        uStack_1d0 = param_1[10];
        func_0x0001045f8fa8(&uStack_c0,&uStack_80,0x113087028,&UNK_10dd18940);
        func_0x0001045f8fa8(&uStack_100,&uStack_80,0x113087028,&UNK_10dd18940);
        func_0x000104603c54(&lStack_200,0x113087028,&UNK_10dd18940);
LAB_1045f559c:
        uVar4 = *param_1;
        func_0x000100e25fcc(uVar4,param_1[1],*param_2,param_2[1]);
        uVar1 = (uint)uVar4;
        goto LAB_1045f55a8;
      }
    }
    else if (lStack_1c0 != 0) {
      uStack_238 = param_2[5];
      lStack_240 = param_2[4];
      uStack_228 = param_2[7];
      uStack_230 = param_2[6];
      uStack_218 = param_2[9];
      uStack_220 = param_2[8];
      uStack_208 = param_2[0xb];
      uStack_210 = param_2[10];
      uStack_78 = param_1[5];
      uStack_80 = param_1[4];
      uStack_68 = param_1[7];
      uStack_70 = param_1[6];
      uStack_58 = param_1[9];
      uStack_60 = param_1[8];
      uStack_48 = param_1[0xb];
      uStack_50 = param_1[10];
      lStack_200 = lStack_240;
      uStack_1f8 = uStack_238;
      uStack_1f0 = uStack_230;
      uStack_1e8 = uStack_228;
      uStack_1e0 = uStack_220;
      uStack_1d8 = uStack_218;
      uStack_1d0 = uStack_210;
      uStack_1c8 = uStack_208;
      func_0x0001045f8fa8(&uStack_c0,auStack_280,0x113087028,&UNK_10dd18940);
      func_0x0001045f8fa8(&uStack_100,auStack_280,0x113087028,&UNK_10dd18940);
      puVar3 = &uStack_80;
      func_0x0001045f7c60(puVar3,&lStack_200);
      func_0x000104603c54(&lStack_240,0x113087028,&UNK_10dd18940);
      func_0x000104603c54(&lStack_180,0x113087028,&UNK_10dd18940);
      if (((ulong)puVar3 & 1) != 0) goto LAB_1045f559c;
      goto LAB_1045f54c0;
    }
    lStack_200 = lStack_180;
    uStack_1f8 = uStack_178;
    uStack_1f0 = uStack_170;
    uStack_1e8 = uStack_168;
    uStack_1e0 = uStack_160;
    uStack_1d8 = uStack_158;
    uStack_1d0 = uStack_150;
    uStack_1c8 = uStack_148;
    func_0x0001045f8fa8(&uStack_c0,&uStack_80,0x113087028,&UNK_10dd18940);
    func_0x0001045f8fa8(&uStack_100,&uStack_80,0x113087028,&UNK_10dd18940);
    func_0x000104603c54(&lStack_200,0x113087a00,&UNK_10dd19c28);
    uVar1 = 0;
    goto LAB_1045f55a8;
  }
LAB_1045f54c0:
  uVar1 = 0;
LAB_1045f55a8:
  return uVar1 & 1;
}



/* Entry: 1045f5a6c; end: 1045f71f7;  */

uint FUN_1045f5a6c(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_428 [72];
  long lStack_3e0;
  long lStack_3d8;
  long lStack_3d0;
  long lStack_3c8;
  long lStack_3c0;
  long lStack_3b8;
  long lStack_3b0;
  long lStack_3a8;
  undefined1 uStack_3a0;
  long lStack_390;
  long lStack_388;
  long lStack_380;
  long lStack_378;
  long lStack_370;
  long lStack_368;
  long lStack_360;
  long lStack_358;
  undefined8 uStack_350;
  long lStack_348;
  long lStack_340;
  long lStack_338;
  long lStack_330;
  long lStack_328;
  long lStack_320;
  undefined1 uStack_318;
  undefined7 uStack_317;
  undefined1 uStack_310;
  undefined8 uStack_30f;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  undefined1 uStack_2c0;
  undefined7 uStack_2bf;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  undefined1 uStack_288;
  undefined7 uStack_287;
  undefined1 uStack_280;
  undefined7 uStack_27f;
  undefined1 uStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  undefined1 uStack_230;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  undefined1 uStack_1e0;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  undefined1 uStack_190;
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
  undefined8 uStack_110;
  undefined2 uStack_108;
  undefined6 uStack_106;
  undefined2 uStack_100;
  undefined8 uStack_fe;
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
  undefined2 uStack_78;
  undefined6 uStack_76;
  undefined2 uStack_70;
  undefined8 uStack_6e;
  
  lVar5 = param_2[4];
  if (param_1[4] == 0) {
    if (lVar5 == 0) goto LAB_1045f5acc;
  }
  else if ((lVar5 != 0) &&
          ((uVar2 = param_1[3], uVar2 == param_2[3] && param_1[4] == lVar5 ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar2 & 1) != 0)))) {
LAB_1045f5acc:
    lVar7 = *param_1;
    lVar6 = *param_2;
    lVar5 = *(long *)(lVar7 + 0x10);
    if (lVar5 == *(long *)(lVar6 + 0x10)) {
      if (lVar5 != 0 && lVar7 != lVar6) {
        puVar8 = (undefined8 *)(lVar7 + 0x20);
        puVar9 = (undefined8 *)(lVar6 + 0x20);
        do {
          uStack_178 = puVar8[1];
          uStack_180 = *puVar8;
          uStack_168 = puVar8[3];
          uStack_170 = puVar8[2];
          uStack_158 = puVar8[5];
          uStack_160 = puVar8[4];
          uStack_148 = puVar8[7];
          uStack_150 = puVar8[6];
          uStack_138 = puVar8[9];
          uStack_140 = puVar8[8];
          uStack_128 = puVar8[0xb];
          uStack_130 = puVar8[10];
          uStack_118 = puVar8[0xd];
          uStack_120 = puVar8[0xc];
          uStack_110 = puVar8[0xe];
          uStack_fe = *(undefined8 *)((long)puVar8 + 0x82);
          uStack_100 = (undefined2)((ulong)*(undefined8 *)((long)puVar8 + 0x7a) >> 0x30);
          uStack_108 = (undefined2)puVar8[0xf];
          uStack_106 = (undefined6)((ulong)puVar8[0xf] >> 0x10);
          uStack_e8 = puVar9[1];
          uStack_f0 = *puVar9;
          uStack_d8 = puVar9[3];
          uStack_e0 = puVar9[2];
          uStack_c8 = puVar9[5];
          uStack_d0 = puVar9[4];
          uStack_b8 = puVar9[7];
          uStack_c0 = puVar9[6];
          uStack_a8 = puVar9[9];
          uStack_b0 = puVar9[8];
          uStack_98 = puVar9[0xb];
          uStack_a0 = puVar9[10];
          uStack_88 = puVar9[0xd];
          uStack_90 = puVar9[0xc];
          uStack_80 = puVar9[0xe];
          uStack_6e = *(undefined8 *)((long)puVar9 + 0x82);
          uStack_70 = (undefined2)((ulong)*(undefined8 *)((long)puVar9 + 0x7a) >> 0x30);
          uStack_78 = (undefined2)puVar9[0xf];
          uStack_76 = (undefined6)((ulong)puVar9[0xf] >> 0x10);
          FUN_104604054(&uStack_180,&lStack_300);
          FUN_104604054(&uStack_f0,&lStack_300);
          puVar3 = &uStack_180;
          func_0x0001045f56a0(puVar3,&uStack_f0);
          func_0x000104604088(&uStack_f0);
          func_0x000104604088(&uStack_180);
          if (((ulong)puVar3 & 1) == 0) goto LAB_1045f5d84;
          puVar9 = puVar9 + 0x12;
          puVar8 = puVar8 + 0x12;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      lStack_208 = param_1[8];
      lStack_210 = param_1[7];
      lStack_1f8 = param_1[10];
      lStack_200 = param_1[9];
      lStack_1e8 = param_1[0xc];
      lStack_1f0 = param_1[0xb];
      uStack_1e0 = (undefined1)param_1[0xd];
      lStack_218 = param_1[6];
      lStack_220 = param_1[5];
      lStack_258 = param_2[8];
      lStack_260 = param_2[7];
      lStack_248 = param_2[10];
      lStack_250 = param_2[9];
      lStack_238 = param_2[0xc];
      lStack_240 = param_2[0xb];
      uStack_230 = (undefined1)param_2[0xd];
      lStack_268 = param_2[6];
      lStack_270 = param_2[5];
      lStack_2e8 = param_1[8];
      lStack_2f0 = param_1[7];
      lStack_2d8 = param_1[10];
      lStack_2e0 = param_1[9];
      lStack_2c8 = param_1[0xc];
      lStack_2d0 = param_1[0xb];
      uStack_2c0 = (undefined1)param_1[0xd];
      lStack_2f8 = param_1[6];
      lStack_300 = param_1[5];
      lStack_330 = param_2[8];
      lStack_338 = param_2[7];
      lStack_320 = param_2[10];
      lStack_328 = param_2[9];
      uStack_280 = (undefined1)param_2[0xc];
      uStack_27f = (undefined7)((ulong)param_2[0xc] >> 8);
      uStack_288 = (undefined1)param_2[0xb];
      uStack_287 = (undefined7)((ulong)param_2[0xb] >> 8);
      uStack_278 = (undefined1)param_2[0xd];
      lStack_340 = param_2[6];
      lStack_348 = param_2[5];
      lStack_2b8 = lStack_348;
      lStack_2b0 = lStack_340;
      lStack_2a8 = lStack_338;
      lStack_2a0 = lStack_330;
      lStack_298 = lStack_328;
      lStack_290 = lStack_320;
      if (lStack_300 == 0) {
        if (lStack_348 == 0) {
          lStack_378 = param_1[8];
          lStack_380 = param_1[7];
          lStack_368 = param_1[10];
          lStack_370 = param_1[9];
          lStack_358 = param_1[0xc];
          lStack_360 = param_1[0xb];
          uStack_350 = CONCAT71(uStack_350._1_7_,(char)param_1[0xd]);
          lStack_388 = param_1[6];
          lStack_390 = param_1[5];
          func_0x0001045f8fa8(&lStack_220,&lStack_1d0,0x113087010,&UNK_10dd19c50);
          func_0x0001045f8fa8(&lStack_270,&lStack_1d0,0x113087010,&UNK_10dd19c50);
          func_0x000104603c54(&lStack_390,0x113087010,&UNK_10dd19c50);
LAB_1045f5e14:
          lVar5 = param_1[1];
          func_0x000100e25fcc(lVar5,param_1[2],param_2[1],param_2[2]);
          uVar1 = (uint)lVar5;
          goto LAB_1045f5d88;
        }
      }
      else if (lStack_348 != 0) {
        lStack_3c8 = param_2[8];
        lStack_3d0 = param_2[7];
        lStack_3b8 = param_2[10];
        lStack_3c0 = param_2[9];
        lStack_3a8 = param_2[0xc];
        lStack_3b0 = param_2[0xb];
        uStack_3a0 = (undefined1)param_2[0xd];
        lStack_3d8 = param_2[6];
        lStack_3e0 = param_2[5];
        uStack_350 = CONCAT71(uStack_350._1_7_,uStack_3a0);
        lStack_1c8 = param_1[6];
        lStack_1d0 = param_1[5];
        lStack_1b8 = param_1[8];
        lStack_1c0 = param_1[7];
        lStack_1a8 = param_1[10];
        lStack_1b0 = param_1[9];
        lStack_198 = param_1[0xc];
        lStack_1a0 = param_1[0xb];
        uStack_190 = (undefined1)param_1[0xd];
        lStack_390 = lStack_3e0;
        lStack_388 = lStack_3d8;
        lStack_380 = lStack_3d0;
        lStack_378 = lStack_3c8;
        lStack_370 = lStack_3c0;
        lStack_368 = lStack_3b8;
        lStack_360 = lStack_3b0;
        lStack_358 = lStack_3a8;
        func_0x0001045f8fa8(&lStack_220,auStack_428,0x113087010,&UNK_10dd19c50);
        func_0x0001045f8fa8(&lStack_270,auStack_428,0x113087010,&UNK_10dd19c50);
        plVar4 = &lStack_1d0;
        FUN_1045f74cc(plVar4,&lStack_390);
        func_0x000104603c54(&lStack_3e0,0x113087010,&UNK_10dd19c50);
        func_0x000104603c54(&lStack_300,0x113087010,&UNK_10dd19c50);
        if (((ulong)plVar4 & 1) != 0) goto LAB_1045f5e14;
        goto LAB_1045f5d84;
      }
      uStack_30f = CONCAT17(uStack_278,uStack_27f);
      uStack_317 = uStack_287;
      uStack_310 = uStack_280;
      uStack_350 = CONCAT71(uStack_2bf,uStack_2c0);
      lStack_390 = lStack_300;
      lStack_388 = lStack_2f8;
      lStack_380 = lStack_2f0;
      lStack_378 = lStack_2e8;
      lStack_370 = lStack_2e0;
      lStack_368 = lStack_2d8;
      lStack_360 = lStack_2d0;
      lStack_358 = lStack_2c8;
      uStack_318 = uStack_288;
      func_0x0001045f8fa8(&lStack_220,&lStack_1d0,0x113087010,&UNK_10dd19c50);
      func_0x0001045f8fa8(&lStack_270,&lStack_1d0,0x113087010,&UNK_10dd19c50);
      func_0x000104603c54(&lStack_390,0x113087ad8,&UNK_10dd19c58);
    }
  }
LAB_1045f5d84:
  uVar1 = 0;
LAB_1045f5d88:
  return uVar1 & 1;
}



/* Entry: 1045f71f8; end: 1045f74cb;  */

uint FUN_1045f71f8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_310 [80];
  long lStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 uStack_288;
  undefined7 uStack_287;
  undefined1 uStack_280;
  undefined8 uStack_27f;
  long lStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined1 uStack_238;
  undefined7 uStack_237;
  undefined1 uStack_230;
  undefined7 uStack_22f;
  undefined1 uStack_228;
  long lStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 uStack_1e8;
  undefined7 uStack_1e7;
  undefined1 uStack_1e0;
  undefined8 uStack_1df;
  long lStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 uStack_198;
  undefined7 uStack_197;
  undefined1 uStack_190;
  undefined7 uStack_18f;
  undefined1 uStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 uStack_148;
  undefined7 uStack_147;
  undefined1 uStack_140;
  undefined8 uStack_13f;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  undefined1 uStack_f0;
  undefined8 uStack_ef;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined8 uStack_9f;
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
  
  if (*(char *)((long)param_1 + 0x14) == '\x01') {
    if (*(char *)((long)param_2 + 0x14) != '\x01') {
      return 0;
    }
  }
  else if (*(char *)((long)param_2 + 0x14) == '\x01' ||
           *(int *)(param_1 + 2) != *(int *)(param_2 + 2)) {
    return 0;
  }
  if (*(char *)((long)param_1 + 0x1c) == '\x01') {
    if (*(char *)((long)param_2 + 0x1c) != '\x01') {
      return 0;
    }
  }
  else if (*(char *)((long)param_2 + 0x1c) == '\x01' ||
           *(int *)(param_1 + 3) != *(int *)(param_2 + 3)) {
    return 0;
  }
  uStack_1b8 = param_1[7];
  uStack_1c0 = param_1[6];
  uStack_b8 = param_1[9];
  uStack_c0 = param_1[8];
  uStack_1a8 = param_1[9];
  uStack_1b0 = param_1[8];
  uStack_b0 = param_1[10];
  uStack_a8 = (undefined1)param_1[0xb];
  uStack_9f = *(undefined8 *)((long)param_1 + 0x61);
  uStack_a7 = (undefined7)*(undefined8 *)((long)param_1 + 0x59);
  uStack_a0 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x59) >> 0x38);
  uStack_d8 = param_1[5];
  uStack_e0 = param_1[4];
  uStack_c8 = param_1[7];
  uStack_d0 = param_1[6];
  uStack_1c8 = param_1[5];
  lStack_1d0 = param_1[4];
  uStack_208 = param_2[7];
  uStack_210 = param_2[6];
  uStack_108 = param_2[9];
  uStack_110 = param_2[8];
  uStack_1f8 = param_2[9];
  uStack_200 = param_2[8];
  uStack_100 = param_2[10];
  uStack_f8 = (undefined1)param_2[0xb];
  uStack_ef = *(undefined8 *)((long)param_2 + 0x61);
  uStack_f7 = (undefined7)*(undefined8 *)((long)param_2 + 0x59);
  uStack_f0 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x59) >> 0x38);
  uStack_128 = param_2[5];
  uStack_130 = param_2[4];
  uStack_118 = param_2[7];
  uStack_120 = param_2[6];
  uStack_218 = param_2[5];
  lStack_220 = param_2[4];
  uStack_1a0 = param_1[10];
  uStack_198 = (undefined1)param_1[0xb];
  uStack_18f = (undefined7)*(undefined8 *)((long)param_1 + 0x61);
  uStack_188 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x61) >> 0x38);
  uStack_197 = (undefined7)*(undefined8 *)((long)param_1 + 0x59);
  uStack_190 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x59) >> 0x38);
  uStack_1f0 = param_2[10];
  uStack_148 = (undefined1)param_2[0xb];
  uStack_1df = *(undefined8 *)((long)param_2 + 0x61);
  uStack_147 = (undefined7)*(undefined8 *)((long)param_2 + 0x59);
  uStack_140 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x59) >> 0x38);
  lStack_180 = lStack_220;
  uStack_178 = uStack_218;
  uStack_170 = uStack_210;
  uStack_168 = uStack_208;
  uStack_160 = uStack_200;
  uStack_158 = uStack_1f8;
  uStack_150 = uStack_1f0;
  uStack_13f = uStack_1df;
  if (lStack_1d0 == 0) {
    if (lStack_220 != 0) goto LAB_1045f73b4;
    uStack_248 = param_1[9];
    uStack_250 = param_1[8];
    uStack_240 = param_1[10];
    uStack_238 = (undefined1)param_1[0xb];
    uStack_22f = (undefined7)*(undefined8 *)((long)param_1 + 0x61);
    uStack_228 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x61) >> 0x38);
    uStack_237 = (undefined7)*(undefined8 *)((long)param_1 + 0x59);
    uStack_230 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x59) >> 0x38);
    uStack_268 = param_1[5];
    lStack_270 = param_1[4];
    uStack_258 = param_1[7];
    uStack_260 = param_1[6];
    func_0x0001045f8fa8(&uStack_e0,&uStack_90,0x113087060,&UNK_10dd201f0);
    func_0x0001045f8fa8(&uStack_130,&uStack_90,0x113087060,&UNK_10dd201f0);
    func_0x000104603c54(&lStack_270,0x113087060,&UNK_10dd201f0);
  }
  else {
    if (lStack_220 == 0) {
LAB_1045f73b4:
      uStack_1e8 = uStack_148;
      uStack_238 = uStack_198;
      uStack_237 = uStack_197;
      uStack_228 = uStack_188;
      uStack_230 = uStack_190;
      uStack_22f = uStack_18f;
      lStack_270 = lStack_1d0;
      uStack_268 = uStack_1c8;
      uStack_260 = uStack_1c0;
      uStack_258 = uStack_1b8;
      uStack_250 = uStack_1b0;
      uStack_248 = uStack_1a8;
      uStack_240 = uStack_1a0;
      uStack_1e7 = uStack_147;
      uStack_1e0 = uStack_140;
      func_0x0001045f8fa8(&uStack_e0,&uStack_90,0x113087060,&UNK_10dd201f0);
      func_0x0001045f8fa8(&uStack_130,&uStack_90,0x113087060,&UNK_10dd201f0);
      func_0x000104603c54(&lStack_270,0x113087910,&UNK_10dd19bf0);
      uVar1 = 0;
      goto LAB_1045f74b0;
    }
    uStack_298 = param_2[9];
    uStack_2a0 = param_2[8];
    uStack_290 = param_2[10];
    uStack_288 = (undefined1)param_2[0xb];
    uStack_27f = *(undefined8 *)((long)param_2 + 0x61);
    uStack_287 = (undefined7)*(undefined8 *)((long)param_2 + 0x59);
    uStack_280 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x59) >> 0x38);
    uStack_2b8 = param_2[5];
    lStack_2c0 = param_2[4];
    uStack_2a8 = param_2[7];
    uStack_2b0 = param_2[6];
    uStack_22f = (undefined7)uStack_27f;
    uStack_228 = (undefined1)((ulong)uStack_27f >> 0x38);
    uStack_88 = param_1[5];
    uStack_90 = param_1[4];
    uStack_78 = param_1[7];
    uStack_80 = param_1[6];
    uStack_68 = param_1[9];
    uStack_70 = param_1[8];
    uStack_60 = param_1[10];
    uStack_4f = *(undefined8 *)((long)param_1 + 0x61);
    uStack_50 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x59) >> 0x38);
    uStack_58 = (undefined1)param_1[0xb];
    uStack_57 = (undefined7)((ulong)param_1[0xb] >> 8);
    lStack_270 = lStack_2c0;
    uStack_268 = uStack_2b8;
    uStack_260 = uStack_2b0;
    uStack_258 = uStack_2a8;
    uStack_250 = uStack_2a0;
    uStack_248 = uStack_298;
    uStack_240 = uStack_290;
    uStack_238 = uStack_288;
    uStack_237 = uStack_287;
    uStack_230 = uStack_280;
    func_0x0001045f8fa8(&uStack_e0,auStack_310,0x113087060,&UNK_10dd201f0);
    func_0x0001045f8fa8(&uStack_130,auStack_310,0x113087060,&UNK_10dd201f0);
    puVar2 = &uStack_90;
    func_0x0001045f6f0c(puVar2,&lStack_270);
    func_0x000104603c54(&lStack_2c0,0x113087060,&UNK_10dd201f0);
    func_0x000104603c54(&lStack_1d0,0x113087060,&UNK_10dd201f0);
    if (((ulong)puVar2 & 1) == 0) {
      uVar1 = 0;
      goto LAB_1045f74b0;
    }
  }
  uVar3 = *param_1;
  func_0x000100e25fcc(uVar3,param_1[1],*param_2,param_2[1]);
  uVar1 = (uint)uVar3;
LAB_1045f74b0:
  return uVar1 & 1;
}



/* Entry: 1045f74cc; end: 1045f80ff;  */

uint FUN_1045f74cc(ulong *param_1,undefined8 *param_2)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined1 auStack_c0 [32];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  uVar6 = param_1[5];
  uVar4 = param_1[4];
  uVar10 = param_1[7];
  uVar8 = param_1[6];
  uVar7 = param_2[5];
  uVar5 = param_2[4];
  uVar11 = param_2[7];
  lVar9 = param_2[6];
  uStack_a0 = uVar5;
  uStack_98 = uVar7;
  lStack_90 = lVar9;
  uStack_88 = uVar11;
  uStack_80 = uVar4;
  uStack_78 = uVar6;
  uStack_70 = uVar8;
  uStack_68 = uVar10;
  if (uVar8 == 0) {
    if (lVar9 != 0) goto LAB_1045f75b4;
    func_0x0001045f8fa8(&uStack_80,auStack_c0,0x113087928,&UNK_10dd19bf8);
    func_0x0001045f8fa8(&uStack_a0,auStack_c0,0x113087928,&UNK_10dd19bf8);
    func_0x00010458a4f4(uVar4,uVar6,0,uVar10);
LAB_1045f7694:
    bVar1 = *(byte *)(param_2 + 8);
    if ((byte)param_1[8] == 2) {
      if (bVar1 != 2) goto LAB_1045f7614;
    }
    else {
      uVar2 = 0;
      if ((bVar1 == 2) || ((((byte)param_1[8] ^ bVar1) & 1) != 0)) goto LAB_1045f7618;
    }
    uVar4 = *param_1;
    func_0x0001045bbb80(uVar4,*param_2);
    if ((uVar4 & 1) != 0) {
      uVar4 = param_1[1];
      func_0x000100e25fcc(uVar4,param_1[2],param_2[1],param_2[2]);
      if ((uVar4 & 1) != 0) {
        uVar4 = param_1[3];
        FUN_104558fb4(uVar4,param_2[3]);
        uVar2 = (uint)uVar4;
        goto LAB_1045f7618;
      }
    }
  }
  else if (lVar9 == 0) {
LAB_1045f75b4:
    func_0x0001045f8fa8(&uStack_80,auStack_c0,0x113087928,&UNK_10dd19bf8);
    func_0x0001045f8fa8(&uStack_a0,auStack_c0,0x113087928,&UNK_10dd19bf8);
    func_0x00010458a4f4(uVar4,uVar6,uVar8,uVar10);
    func_0x00010458a4f4(uVar5,uVar7,lVar9,uVar11);
  }
  else {
    func_0x0001045f8fa8(&uStack_80,auStack_c0,0x113087928,&UNK_10dd19bf8);
    func_0x0001045f8fa8(&uStack_a0,auStack_c0,0x113087928,&UNK_10dd19bf8);
    uVar3 = uVar4;
    FUN_1045f8100(uVar4,uVar6,uVar8,uVar10,uVar5,uVar7,lVar9,uVar11);
    func_0x00010458a4f4(uVar5,uVar7,lVar9,uVar11);
    func_0x00010458a4f4(uVar4,uVar6,uVar8,uVar10);
    if ((uVar3 & 1) != 0) goto LAB_1045f7694;
  }
LAB_1045f7614:
  uVar2 = 0;
LAB_1045f7618:
  return uVar2 & 1;
}



/* Entry: 1045f8100; end: 1045f82c7;  */

bool FUN_1045f8100(ulong param_1,undefined8 param_2,long param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,long param_7,ulong param_8)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 auStack_120 [40];
  long alStack_f8 [3];
  undefined8 uStack_e0;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  
  uVar9 = (uint)(param_8 >> 0x20);
  uVar8 = (uint)param_8;
  uVar7 = (uint)param_4;
  if ((param_4 & 0xff) == 4) {
    if ((uVar8 & 0xff) != 4) {
      return false;
    }
  }
  else {
    if ((uVar8 & 0xff) == 4) {
      return false;
    }
    if (((uVar8 ^ uVar7) & 0xff) != 0) {
      return false;
    }
  }
  if ((param_4 & 0xff00) == 0x300) {
    if ((uVar8 & 0xff00) != 0x300) {
      return false;
    }
  }
  else {
    if ((uVar8 & 0xff00) == 0x300) {
      return false;
    }
    if (((uVar7 ^ uVar8) & 0xff00) != 0) {
      return false;
    }
  }
  if ((param_4 & 0xff0000) == 0x30000) {
    if ((uVar8 & 0xff0000) != 0x30000) {
      return false;
    }
  }
  else {
    if ((uVar8 & 0xff0000) == 0x30000) {
      return false;
    }
    if (((uVar7 ^ uVar8) & 0xff0000) != 0) {
      return false;
    }
  }
  if ((param_4 & 0xff000000) == 0x3000000) {
    if ((uVar8 & 0xff000000) != 0x3000000) {
      return false;
    }
  }
  else {
    if ((uVar8 & 0xff000000) == 0x3000000) {
      return false;
    }
    if (((uVar7 ^ uVar8) & 0xff000000) != 0) {
      return false;
    }
  }
  if ((param_4 & 0xff00000000) == 0x300000000) {
    if ((uVar9 & 0xff) != 3) {
      return false;
    }
  }
  else {
    if ((uVar9 & 0xff) == 3) {
      return false;
    }
    if (((param_8 ^ param_4) & 0xff00000000) != 0) {
      return false;
    }
  }
  if ((param_4 & 0xff0000000000) == 0x30000000000) {
    if ((uVar9 & 0xff00) != 0x300) {
      return false;
    }
  }
  else {
    if ((uVar9 & 0xff00) == 0x300) {
      return false;
    }
    if (((param_8 ^ param_4) & 0xff0000000000) != 0) {
      return false;
    }
  }
  if ((param_4 & 0xff000000000000) == 0x3000000000000) {
    if ((uVar9 & 0xff0000) != 0x30000) {
      return false;
    }
  }
  else {
    if ((uVar9 & 0xff0000) == 0x30000) {
      return false;
    }
    if (((param_8 ^ param_4) & 0xff000000000000) != 0) {
      return false;
    }
  }
  if (param_4 >> 0x38 == 5) {
    if ((ulong)(uVar9 >> 0x18) != 5) {
      return false;
    }
  }
  else if (param_4 >> 0x38 != (ulong)(uVar9 >> 0x18)) {
    return false;
  }
  func_0x000100e25fcc(param_1,param_2,param_5,param_6);
  if ((param_1 & 1) == 0) {
    return false;
  }
  if (*(long *)(param_3 + 0x10) != *(long *)(param_7 + 0x10)) {
    return false;
  }
  uVar12 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar13 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uVar13 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar13 = uVar13 & *(ulong *)(param_3 + 0x40);
  uVar12 = uVar12 + 0x3f >> 6;
  _swift_bridgeObjectRetain();
  lVar10 = 0;
  lVar4 = lVar10;
  if (uVar13 == 0) goto LAB_104559bd0;
LAB_104559bfc:
  uVar11 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
  uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
  uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
  uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
  uVar13 = uVar13 - 1 & uVar13;
  uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | lVar4 << 6;
  lStack_d0 = *(long *)(*(long *)(param_3 + 0x30) + uVar11 * 8);
  FUN_104558b10(*(long *)(param_3 + 0x38) + uVar11 * 0x28,&uStack_c8);
  lVar10 = lVar4;
  do {
    lVar4 = lStack_d0;
    uStack_88 = uStack_b8;
    uStack_90 = uStack_c0;
    uStack_78 = uStack_a8;
    lStack_80 = lStack_b0;
    uStack_98 = uStack_c8;
    lStack_a0 = lStack_d0;
    bVar3 = lStack_b0 == 0;
    if (lStack_b0 == 0) {
      _swift_release(param_3);
      return true;
    }
    uVar11 = 0;
    FUN_104558c58(&uStack_98);
    if ((*(long *)(param_7 + 0x10) == 0) || (func_0x00010035a314(lVar4), (uVar11 & 1) == 0)) {
LAB_104559d48:
      _swift_release(param_3);
LAB_104559d70:
      func_0x0001000834e4(&lStack_d0);
      return bVar3;
    }
    FUN_104558b10(*(long *)(param_7 + 0x38) + lVar4 * 0x28,auStack_120);
    FUN_104558c58(auStack_120,alStack_f8);
    plVar5 = &lStack_d0;
    func_0x0001000a8868(plVar5,uStack_b8);
    _swift_getDynamicType();
    plVar6 = alStack_f8;
    func_0x0001000a8868(plVar6,uStack_e0);
    _swift_getDynamicType();
    lVar4 = lStack_b0;
    uVar1 = uStack_b8;
    if (plVar5 != plVar6) {
      _swift_release(param_3);
      func_0x0001000834e4(alStack_f8);
      goto LAB_104559d70;
    }
    func_0x0001000a8868(&lStack_d0,uStack_b8);
    plVar5 = alStack_f8;
    (**(code **)(lVar4 + 0x20))(plVar5,uVar1,lVar4);
    func_0x0001000834e4(alStack_f8);
    if (((ulong)plVar5 & 1) == 0) goto LAB_104559d48;
    func_0x0001000834e4(&lStack_d0);
    lVar4 = lVar10;
    if (uVar13 != 0) goto LAB_104559bfc;
LAB_104559bd0:
    uVar11 = uVar12;
    if ((long)uVar12 <= lVar10 + 1) {
      uVar11 = lVar10 + 1;
    }
    while( true ) {
      lVar4 = lVar10 + 1;
      if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104559da0);
        (*pcVar2)();
      }
      if ((long)uVar12 <= lVar4) break;
      uVar13 = ((ulong *)(param_3 + 0x40))[lVar4];
      lVar10 = lVar10 + 1;
      if (uVar13 != 0) goto LAB_104559bfc;
    }
    uVar13 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    lStack_b0 = 0;
    uStack_c8 = 0;
    lStack_d0 = 0;
    lVar10 = uVar11 - 1;
  } while( true );
}



/* Entry: 1045f82c8; end: 1045f8403;  */

ulong FUN_1045f82c8(ulong param_1)

{
  if (4 < param_1) {
    param_1 = 5;
  }
  return param_1;
}



/* Entry: 1045f8404; end: 1045f8493;  */

void FUN_1045f8404(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_1 != 0) {
    _swift_bridgeObjectRetain();
    func_0x00010006c00c(param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_4);
    return;
  }
  return;
}



/* Entry: 1045f8494; end: 1045f84b3;  */

void FUN_1045f8494(void)

{
  _objc_opt_self(&PTR_PTR_113088828);
  return;
}



/* Entry: 1045f84b4; end: 1045f88b7;  */

void FUN_1045f84b4(long param_1)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  long unaff_x20;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined1 auStack_340 [24];
  undefined1 auStack_328 [24];
  undefined1 auStack_310 [24];
  undefined1 auStack_2f8 [24];
  undefined1 auStack_2e0 [24];
  undefined1 auStack_2c8 [72];
  undefined1 auStack_280 [24];
  undefined1 auStack_268 [24];
  undefined1 auStack_250 [24];
  undefined1 auStack_238 [24];
  undefined1 auStack_220 [24];
  undefined1 auStack_208 [24];
  undefined1 auStack_1f0 [24];
  undefined1 auStack_1d8 [24];
  undefined1 auStack_1c0 [24];
  undefined1 auStack_1a8 [24];
  undefined1 auStack_190 [24];
  undefined1 auStack_178 [24];
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
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
  
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  puVar12 = (undefined8 *)(unaff_x20 + 0x10);
  *puVar12 = 0;
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar9 = (undefined8 *)(unaff_x20 + 0x20);
  *puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar8 = (undefined8 *)(unaff_x20 + 0x28);
  *puVar8 = puVar2;
  puVar16 = (undefined8 *)(unaff_x20 + 0x30);
  *puVar16 = puVar2;
  puVar15 = (undefined8 *)(unaff_x20 + 0x38);
  *puVar15 = puVar2;
  puVar14 = (undefined8 *)(unaff_x20 + 0x40);
  *puVar14 = puVar2;
  puVar3 = (undefined8 *)(unaff_x20 + 0x48);
  *puVar3 = puVar2;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  puVar4 = (undefined8 *)(unaff_x20 + 0x50);
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *puVar4 = 0;
  puVar7 = (undefined8 *)(unaff_x20 + 0x98);
  *puVar7 = puVar2;
  puVar5 = (undefined8 *)(unaff_x20 + 0xa0);
  *puVar5 = puVar2;
  puVar6 = (undefined1 *)(unaff_x20 + 0xa8);
  *puVar6 = 3;
  _swift_beginAccess(param_1 + 0x10,auStack_118,0,0);
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  uVar11 = *(undefined8 *)(param_1 + 0x18);
  _swift_beginAccess(puVar12,auStack_130,1,0);
  *puVar12 = uVar10;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar11;
  _swift_beginAccess(param_1 + 0x20,auStack_148,0,0);
  uVar13 = *(undefined8 *)(param_1 + 0x20);
  _swift_beginAccess(puVar9,auStack_160,1,0);
  *puVar9 = uVar13;
  _swift_beginAccess(param_1 + 0x28,auStack_178,0,0);
  uVar10 = *(undefined8 *)(param_1 + 0x28);
  _swift_beginAccess(puVar8,auStack_190,1,0);
  *puVar8 = uVar10;
  _swift_bridgeObjectRetain(uVar11);
  _swift_bridgeObjectRetain(uVar13);
  _swift_bridgeObjectRetain(uVar10);
  _swift_beginAccess(param_1 + 0x30,auStack_1a8,0,0);
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  _swift_beginAccess(puVar16,auStack_1c0,1,0);
  uVar11 = *puVar16;
  *puVar16 = uVar10;
  _swift_bridgeObjectRetain(uVar10);
  _swift_bridgeObjectRelease(uVar11);
  _swift_beginAccess(param_1 + 0x38,auStack_1d8,0,0);
  uVar10 = *(undefined8 *)(param_1 + 0x38);
  _swift_beginAccess(puVar15,auStack_1f0,1,0);
  uVar11 = *puVar15;
  *puVar15 = uVar10;
  _swift_bridgeObjectRetain(uVar10);
  _swift_bridgeObjectRelease(uVar11);
  _swift_beginAccess(param_1 + 0x40,auStack_208,0,0);
  uVar10 = *(undefined8 *)(param_1 + 0x40);
  _swift_beginAccess(puVar14,auStack_220,1,0);
  uVar11 = *puVar14;
  *puVar14 = uVar10;
  _swift_bridgeObjectRetain(uVar10);
  _swift_bridgeObjectRelease(uVar11);
  _swift_beginAccess(param_1 + 0x48,auStack_238,0,0);
  uVar10 = *(undefined8 *)(param_1 + 0x48);
  _swift_beginAccess(puVar3,auStack_250,1,0);
  uVar11 = *puVar3;
  *puVar3 = uVar10;
  _swift_bridgeObjectRetain(uVar10);
  _swift_bridgeObjectRelease(uVar11);
  _swift_beginAccess(param_1 + 0x50,auStack_268,0,0);
  uStack_d8 = *(undefined8 *)(param_1 + 0x78);
  uStack_e0 = *(undefined8 *)(param_1 + 0x70);
  uStack_c8 = *(undefined8 *)(param_1 + 0x88);
  uStack_d0 = *(undefined8 *)(param_1 + 0x80);
  uStack_c0 = *(undefined8 *)(param_1 + 0x90);
  uStack_f8 = *(undefined8 *)(param_1 + 0x58);
  uStack_100 = *(undefined8 *)(param_1 + 0x50);
  uStack_e8 = *(undefined8 *)(param_1 + 0x68);
  uStack_f0 = *(undefined8 *)(param_1 + 0x60);
  _swift_beginAccess(puVar4,auStack_280,1,0);
  uStack_98 = *(undefined8 *)(unaff_x20 + 0x68);
  uStack_a0 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0x78);
  uStack_90 = *(undefined8 *)(unaff_x20 + 0x70);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x88);
  uStack_80 = *(undefined8 *)(unaff_x20 + 0x80);
  uStack_a8 = *(undefined8 *)(unaff_x20 + 0x58);
  uStack_b0 = *puVar4;
  *(undefined8 *)(unaff_x20 + 0x68) = uStack_e8;
  *(undefined8 *)(unaff_x20 + 0x60) = uStack_f0;
  *(undefined8 *)(unaff_x20 + 0x78) = uStack_d8;
  *(undefined8 *)(unaff_x20 + 0x70) = uStack_e0;
  *(undefined8 *)(unaff_x20 + 0x88) = uStack_c8;
  *(undefined8 *)(unaff_x20 + 0x80) = uStack_d0;
  uStack_70 = *(undefined8 *)(unaff_x20 + 0x90);
  *(undefined8 *)(unaff_x20 + 0x90) = uStack_c0;
  *(undefined8 *)(unaff_x20 + 0x58) = uStack_f8;
  *puVar4 = uStack_100;
  func_0x0001045f8fa8(&uStack_100,auStack_2c8,0x113087030,&UNK_10dd18948);
  func_0x000104603c54(&uStack_b0,0x113087030,&UNK_10dd18948);
  _swift_beginAccess(param_1 + 0x98,auStack_2c8,0,0);
  uVar10 = *(undefined8 *)(param_1 + 0x98);
  _swift_beginAccess(puVar7,auStack_2e0,1,0);
  uVar11 = *puVar7;
  *puVar7 = uVar10;
  _swift_bridgeObjectRetain(uVar10);
  _swift_bridgeObjectRelease(uVar11);
  _swift_beginAccess(param_1 + 0xa0,auStack_2f8,0,0);
  uVar10 = *(undefined8 *)(param_1 + 0xa0);
  _swift_beginAccess(puVar5,auStack_310,1,0);
  uVar11 = *puVar5;
  *puVar5 = uVar10;
  _swift_bridgeObjectRetain(uVar10);
  _swift_bridgeObjectRelease(uVar11);
  _swift_beginAccess(param_1 + 0xa8,auStack_328,0,0);
  uVar1 = *(undefined1 *)(param_1 + 0xa8);
  _swift_beginAccess(puVar6,auStack_340,1,0);
  *puVar6 = uVar1;
  return;
}



/* Entry: 1045f88b8; end: 1045f8adb;  */

undefined8 FUN_1045f88b8(undefined8 param_1,undefined8 param_2)

{
  FUN_1046001dc(param_2,param_1,&UNK_11078d8f0);
  return param_2;
}



/* Entry: 1045f8adc; end: 1045f8afb;  */

void FUN_1045f8adc(void)

{
  _objc_opt_self(&PTR_PTR_113088a28);
  return;
}



/* Entry: 1045f8afc; end: 1045f8d7f;  */

void FUN_1045f8afc(long param_1)

{
  undefined1 uVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined1 auStack_250 [24];
  undefined1 auStack_238 [24];
  undefined1 auStack_220 [24];
  undefined1 auStack_208 [24];
  undefined1 auStack_1f0 [24];
  undefined1 auStack_1d8 [72];
  undefined1 auStack_190 [24];
  undefined1 auStack_178 [24];
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
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
  
  puVar8 = (undefined8 *)(unaff_x20 + 0x10);
  *puVar8 = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar10 = (undefined8 *)(unaff_x20 + 0x20);
  *puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  puVar6 = (undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *puVar6 = 0;
  puVar5 = (undefined8 *)(unaff_x20 + 0x70);
  *puVar5 = puVar2;
  puVar4 = (undefined8 *)(unaff_x20 + 0x78);
  *puVar4 = puVar2;
  puVar3 = (undefined1 *)(unaff_x20 + 0x80);
  *puVar3 = 3;
  _swift_beginAccess(param_1 + 0x10,auStack_118,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  _swift_beginAccess(puVar8,auStack_130,1,0);
  *puVar8 = uVar9;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar7;
  _swift_beginAccess(param_1 + 0x20,auStack_148,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  _swift_beginAccess(puVar10,auStack_160,1,0);
  *puVar10 = uVar9;
  _swift_beginAccess(param_1 + 0x28,auStack_178,0,0);
  uStack_e8 = *(undefined8 *)(param_1 + 0x40);
  uStack_f0 = *(undefined8 *)(param_1 + 0x38);
  uStack_d8 = *(undefined8 *)(param_1 + 0x50);
  uStack_e0 = *(undefined8 *)(param_1 + 0x48);
  uStack_c8 = *(undefined8 *)(param_1 + 0x60);
  uStack_d0 = *(undefined8 *)(param_1 + 0x58);
  uStack_c0 = *(undefined8 *)(param_1 + 0x68);
  uStack_f8 = *(undefined8 *)(param_1 + 0x30);
  uStack_100 = *(undefined8 *)(param_1 + 0x28);
  _swift_beginAccess(puVar6,auStack_190,1,0);
  uStack_98 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_a0 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_90 = *(undefined8 *)(unaff_x20 + 0x48);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_80 = *(undefined8 *)(unaff_x20 + 0x58);
  uStack_a8 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_b0 = *puVar6;
  *(undefined8 *)(unaff_x20 + 0x40) = uStack_e8;
  *(undefined8 *)(unaff_x20 + 0x38) = uStack_f0;
  *(undefined8 *)(unaff_x20 + 0x50) = uStack_d8;
  *(undefined8 *)(unaff_x20 + 0x48) = uStack_e0;
  *(undefined8 *)(unaff_x20 + 0x60) = uStack_c8;
  *(undefined8 *)(unaff_x20 + 0x58) = uStack_d0;
  uStack_70 = *(undefined8 *)(unaff_x20 + 0x68);
  *(undefined8 *)(unaff_x20 + 0x68) = uStack_c0;
  *(undefined8 *)(unaff_x20 + 0x30) = uStack_f8;
  *puVar6 = uStack_100;
  _swift_bridgeObjectRetain(uVar7);
  _swift_bridgeObjectRetain(uVar9);
  func_0x0001045f8fa8(&uStack_100,auStack_1d8,0x113087020,&UNK_10dd19c30);
  func_0x000104603c54(&uStack_b0,0x113087020,&UNK_10dd19c30);
  _swift_beginAccess(param_1 + 0x70,auStack_1d8,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0x70);
  _swift_beginAccess(puVar5,auStack_1f0,1,0);
  uVar7 = *puVar5;
  *puVar5 = uVar9;
  _swift_bridgeObjectRetain(uVar9);
  _swift_bridgeObjectRelease(uVar7);
  _swift_beginAccess(param_1 + 0x78,auStack_208,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0x78);
  _swift_beginAccess(puVar4,auStack_220,1,0);
  uVar7 = *puVar4;
  *puVar4 = uVar9;
  _swift_bridgeObjectRetain(uVar9);
  _swift_bridgeObjectRelease(uVar7);
  _swift_beginAccess(param_1 + 0x80,auStack_238,0,0);
  uVar1 = *(undefined1 *)(param_1 + 0x80);
  _swift_beginAccess(puVar3,auStack_250,1,0);
  *puVar3 = uVar1;
  return;
}



/* Entry: 1045f8d80; end: 1045f8ddf;  */

undefined8 FUN_1045f8d80(undefined8 param_1,undefined8 param_2)

{
  FUN_104600f7c(param_2,param_1,&UNK_11078ddf8);
  return param_2;
}



/* Entry: 1045f8de0; end: 1045f8dff;  */

void FUN_1045f8de0(void)

{
  _objc_opt_self(&PTR_PTR_113088b88);
  return;
}



/* Entry: 1045f8e00; end: 1045f8e17;  */

int FUN_1045f8e00(ulong *param_1)

{
  ulong uVar1;
  
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1045f8e18; end: 1045f8f37;  */

undefined8 FUN_1045f8e18(undefined8 param_1,undefined8 param_2)

{
  FUN_104601318(param_2,param_1,&UNK_11078de90);
  return param_2;
}



/* Entry: 1045f8f38; end: 1045f8f77;  */

void FUN_1045f8f38(void)

{
  _objc_opt_self(&PTR_PTR_113088c88);
  return;
}



/* Entry: 1045f8f78; end: 1045f8fef;  */

void FUN_1045f8f78(void)

{
  long in_x4;
  
  if (in_x4 == 1) {
    return;
  }
  func_0x00010006c00c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(in_x4);
  return;
}



/* Entry: 1045f8ff0; end: 1045f930f;  */

void FUN_1045f8ff0(void)

{
  _objc_opt_self(&PTR_PTR_113089228);
  return;
}



/* Entry: 1045f9310; end: 1045f9313;  */

void FUN_1045f9310(void)

{
  undefined *puVar1;
  
  if (puRam0000000113088108 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd19cf8;
  _swift_getWitnessTable(&UNK_10dd19cf8,&UNK_11078cd58);
  puRam0000000113088108 = puVar1;
  return;
}



/* Entry: 1045f9314; end: 1045f9353;  */

void FUN_1045f9314(void)

{
  undefined *puVar1;
  
  if (puRam0000000113088108 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd19cf8;
  _swift_getWitnessTable(&UNK_10dd19cf8,&UNK_11078cd58);
  puRam0000000113088108 = puVar1;
  return;
}



/* Entry: 1045f9354; end: 1045f9367;  */

void FUN_1045f9354(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1045f9368();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1045f93a8)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1045f9368; end: 1045f9413;  */

void FUN_1045f9368(void)

{
  undefined *puVar1;
  
  if (puRam0000000113088110 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd19d20;
  _swift_getWitnessTable(&UNK_10dd19d20,&UNK_11078cd58);
  puRam0000000113088110 = puVar1;
  return;
}



/* Entry: 1045f9414; end: 1045f9417;  */

void FUN_1045f9414(void)

{
  undefined *puVar1;
  
  if (puRam0000000113088130 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd19df8;
  _swift_getWitnessTable(&UNK_10dd19df8,&UNK_11078cde8);
  puRam0000000113088130 = puVar1;
  return;
}



/* Entry: 1045f9418; end: 1045f9457;  */

void FUN_1045f9418(void)

{
  undefined *puVar1;
  
  if (puRam0000000113088130 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd19df8;
  _swift_getWitnessTable(&UNK_10dd19df8,&UNK_11078cde8);
  puRam0000000113088130 = puVar1;
  return;
}



/* Entry: 1045f9458; end: 1045f946b;  */

void FUN_1045f9458(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1045f946c();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1045f94ac)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1045f946c; end: 1045f9517;  */

void FUN_1045f946c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113088138 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd19e20;
  _swift_getWitnessTable(&UNK_10dd19e20,&UNK_11078cde8);
  puRam0000000113088138 = puVar1;
  return;
}



/* Entry: 1045f9518; end: 1045f953b;  */

void FUN_1045f9518(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1045f953c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1045f953c; end: 1045f957b;  */

void FUN_1045f953c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113088158 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dd1b258;
  _swift_getWitnessTable(&DAT_10dd1b258,&UNK_11078ce60);
  puRam0000000113088158 = puVar1;
  return;
}



/* Entry: 1045f957c; end: 1045f957f;  */

void FUN_1045f957c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113088160 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd19f14;
  _swift_getWitnessTable(&UNK_10dd19f14,&UNK_11078d1d8);
  puRam0000000113088160 = puVar1;
  return;
}



/* Entry: 1045f9580; end: 1045f95bf;  */

void FUN_1045f9580(void)

{
  undefined *puVar1;
  
  if (puRam0000000113088160 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd19f14;
  _swift_getWitnessTable(&UNK_10dd19f14,&UNK_11078d1d8);
  puRam0000000113088160 = puVar1;
  return;
}



/* Entry: 1045f95c0; end: 1045f95d3;  */

void FUN_1045f95c0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1045f95d4();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1045f9614)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1045f95d4; end: 1045f967f;  */

void FUN_1045f95d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113088168 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd19f3c;
  _swift_getWitnessTable(&UNK_10dd19f3c,&UNK_11078d1d8);
  puRam0000000113088168 = puVar1;
  return;
}


