/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1044fbe88; end: 1044fbf67;  */

int FUN_1044fbe88(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 0x79) != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 0x12);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1044fbf68; end: 1044fbfa7;  */

void FUN_1044fbf68(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  *param_2 = lVar1;
  return;
}



/* Entry: 1044fbfa8; end: 1044fc1af;  */

long FUN_1044fbfa8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1044fc1b0; end: 1044fc237;  */

undefined8 FUN_1044fc1b0(ulong *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = *param_1;
  lVar3 = *param_2;
  if (uVar2 == 0) {
    if (lVar3 == 0) {
      return 1;
    }
  }
  else if (lVar3 != 0) {
    func_0x000100c70ba8(0);
    _objc_retain(lVar3);
    _objc_retain();
    uVar1 = uVar2;
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
    _objc_release(uVar2);
    _objc_release(lVar3);
    if ((uVar1 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 1044fc238; end: 1044fc23f;  */

void FUN_1044fc238(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*param_1);
  return;
}



/* Entry: 1044fc240; end: 1044fc2a7;  */

undefined8 * FUN_1044fc240(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _objc_retain();
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1044fc2a8; end: 1044fc36b;  */

int FUN_1044fc2a8(ulong *param_1,uint param_2)

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



/* Entry: 1044fc36c; end: 1044fc3d7;  */

bool FUN_1044fc36c(ulong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar5 = *param_1;
  uVar2 = param_1[1];
  uVar6 = param_1[2];
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar7 = param_2[2];
  uVar4 = 0;
  func_0x0001007bbbf8(0);
  __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar5,uVar1,uVar4);
  return (uVar5 & 1) != 0 && (uVar2 == uVar3 && uVar6 == uVar7);
}



/* Entry: 1044fc3d8; end: 1044fc3df;  */

void FUN_1044fc3d8(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*param_1);
  return;
}



/* Entry: 1044fc3e0; end: 1044fc433;  */

undefined8 * FUN_1044fc3e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _objc_retain();
  _objc_release(uVar1);
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  return param_1;
}



/* Entry: 1044fc434; end: 1044fc46f;  */

undefined8 * FUN_1044fc434(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _objc_release(uVar1);
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  return param_1;
}



/* Entry: 1044fc470; end: 1044fc50f;  */

int FUN_1044fc470(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[3] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1044fc510; end: 1044fc557;  */

uint FUN_1044fc510(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 uStack_20;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_50 = *(undefined1 *)(param_1 + 4);
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_20 = *(undefined1 *)(param_2 + 4);
  FUN_1044fc558(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1044fc558; end: 1044fc753;  */

ulong FUN_1044fc558(ulong *param_1,ulong *param_2)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  undefined1 auVar26 [16];
  
  uVar4 = *param_1;
  uVar6 = (ulong)(byte)param_1[1];
  bVar10 = (byte)param_1[2];
  uVar8 = param_1[3];
  bVar11 = (byte)param_1[4];
  uVar7 = (ulong)*(uint *)((long)param_1 + 9) << 8 | (ulong)*(uint3 *)((long)param_1 + 0xd) << 0x28;
  bVar12 = bVar11 >> 6;
  if (bVar12 < 2) {
    if (bVar12 == 0) {
      if ((byte)param_2[4] < 0x40) {
        if ((uVar4 != *param_2) || ((uVar7 | uVar6) != param_2[1])) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)
            PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
          )(uVar4,uVar7 | uVar6,*param_2,param_2[1],0);
          return uVar4;
        }
        goto LAB_1044fc700;
      }
    }
    else {
      uVar2 = param_2[4];
      if (((byte)uVar2 & 0xc0) == 0x40) {
        uVar3 = param_2[2];
        uVar9 = param_2[3];
        if ((uVar4 == *param_2) && ((uVar7 | uVar6) == param_2[1])) {
          uVar5 = 0;
          if ((bVar10 & 1) != ((byte)uVar3 & 1)) goto LAB_1044fc70c;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar4,uVar7 | uVar6,*param_2,param_2[1],0);
          uVar5 = 0;
          if (((uVar4 & 1) == 0) || (((bVar10 ^ (byte)uVar3) & 1) != 0)) goto LAB_1044fc70c;
        }
        uVar5 = 0;
        if ((int)uVar8 == (int)uVar9) {
          uVar5 = (byte)(bVar11 ^ (byte)uVar2) ^ 1;
        }
        goto LAB_1044fc70c;
      }
    }
  }
  else if (bVar12 == 2) {
    if (((char)(byte)param_2[4] < -0x40) && (uVar4 == *param_2)) {
      uVar5 = (byte)((byte)param_1[1] ^ (byte)param_2[1]) ^ 1;
      goto LAB_1044fc70c;
    }
  }
  else if ((bVar11 == 0xc0) &&
          (((uVar7 == 0 && uVar6 == 0) && (uVar4 == 0 && uVar8 == 0)) &&
           ((*(int *)((long)param_1 + 0x11) == 0 && *(int3 *)((long)param_1 + 0x15) == 0) &&
           bVar10 == 0))) {
    if ((0xbf < (byte)param_2[4]) && ((byte)param_2[4] == 0xc0)) {
      uVar6 = param_2[3];
      uVar4 = param_2[2];
      bVar10 = (byte)*param_2 | (byte)uVar4;
      bVar11 = *(byte *)((long)param_2 + 1) | (byte)(uVar4 >> 8);
      bVar12 = *(byte *)((long)param_2 + 2) | (byte)(uVar4 >> 0x10);
      bVar13 = *(byte *)((long)param_2 + 3) | (byte)(uVar4 >> 0x18);
      bVar14 = *(byte *)((long)param_2 + 4) | (byte)(uVar4 >> 0x20);
      bVar15 = *(byte *)((long)param_2 + 5) | (byte)(uVar4 >> 0x28);
      bVar16 = *(byte *)((long)param_2 + 6) | (byte)(uVar4 >> 0x30);
      bVar17 = *(byte *)((long)param_2 + 7) | (byte)(uVar4 >> 0x38);
      bVar18 = (byte)param_2[1] | (byte)uVar6;
      bVar19 = *(byte *)((long)param_2 + 9) | (byte)(uVar6 >> 8);
      bVar20 = *(byte *)((long)param_2 + 10) | (byte)(uVar6 >> 0x10);
      bVar21 = *(byte *)((long)param_2 + 0xb) | (byte)(uVar6 >> 0x18);
      bVar22 = *(byte *)((long)param_2 + 0xc) | (byte)(uVar6 >> 0x20);
      bVar23 = *(byte *)((long)param_2 + 0xd) | (byte)(uVar6 >> 0x28);
      bVar24 = *(byte *)((long)param_2 + 0xe) | (byte)(uVar6 >> 0x30);
      bVar25 = *(byte *)((long)param_2 + 0xf) | (byte)(uVar6 >> 0x38);
      auVar26[1] = bVar11;
      auVar26[0] = bVar10;
      auVar26[2] = bVar12;
      auVar26[3] = bVar13;
      auVar26[4] = bVar14;
      auVar26[5] = bVar15;
      auVar26[6] = bVar16;
      auVar26[7] = bVar17;
      auVar26[8] = bVar18;
      auVar26[9] = bVar19;
      auVar26[10] = bVar20;
      auVar26[0xb] = bVar21;
      auVar26[0xc] = bVar22;
      auVar26[0xd] = bVar23;
      auVar26[0xe] = bVar24;
      auVar26[0xf] = bVar25;
      auVar1[1] = bVar11;
      auVar1[0] = bVar10;
      auVar1[2] = bVar12;
      auVar1[3] = bVar13;
      auVar1[4] = bVar14;
      auVar1[5] = bVar15;
      auVar1[6] = bVar16;
      auVar1[7] = bVar17;
      auVar1[8] = bVar18;
      auVar1[9] = bVar19;
      auVar1[10] = bVar20;
      auVar1[0xb] = bVar21;
      auVar1[0xc] = bVar22;
      auVar1[0xd] = bVar23;
      auVar1[0xe] = bVar24;
      auVar1[0xf] = bVar25;
      auVar26 = NEON_ext(auVar26,auVar1,8,1);
      if (CONCAT17(bVar17 | auVar26[7],
                   CONCAT16(bVar16 | auVar26[6],
                            CONCAT15(bVar15 | auVar26[5],
                                     CONCAT14(bVar14 | auVar26[4],
                                              CONCAT13(bVar13 | auVar26[3],
                                                       CONCAT12(bVar12 | auVar26[2],
                                                                CONCAT11(bVar11 | auVar26[1],
                                                                         bVar10 | auVar26[0])))))))
          == 0) goto LAB_1044fc700;
    }
  }
  else if ((0xbf < (byte)param_2[4]) &&
          ((((byte)param_2[4] == 0xc0 && (*param_2 == 1)) &&
           ((param_2[2] == 0 && param_2[3] == 0) && param_2[1] == 0)))) {
LAB_1044fc700:
    uVar5 = 1;
    goto LAB_1044fc70c;
  }
  uVar5 = 0;
LAB_1044fc70c:
  return (ulong)(uVar5 & 1);
}



/* Entry: 1044fc754; end: 1044fc77f;  */

long FUN_1044fc754(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1044fc780; end: 1044fc793;  */

undefined8 FUN_1044fc780(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1[1];
  if (-1 < *(char *)(param_1 + 4)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1,uVar1,param_1[2],param_1[3]);
    return uVar1;
  }
  return *param_1;
}



/* Entry: 1044fc794; end: 1044fc863;  */

undefined8 * FUN_1044fc794(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = *(undefined1 *)(param_2 + 4);
  func_0x000103f68f50(uVar1,uVar3,uVar2,uVar4,uVar5);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  *(undefined1 *)(param_1 + 4) = uVar5;
  return param_1;
}



/* Entry: 1044fc864; end: 1044fc8ab;  */

undefined8 * FUN_1044fc864(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar3 = *(undefined1 *)(param_2 + 4);
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar6 = param_1[3];
  uVar7 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[3] = uVar9;
  param_1[2] = uVar8;
  uVar4 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = uVar3;
  func_0x000103f69200(uVar5,uVar1,uVar2,uVar6,uVar4);
  return param_1;
}



/* Entry: 1044fc8ac; end: 1044fc9c3;  */

int FUN_1044fc8ac(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x21) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = (uint)(*(ulong *)(param_1 + 4) >> 1);
  uVar2 = 0xffffffff;
  if (0x80000000 < uVar1) {
    uVar2 = ~uVar1;
  }
  return uVar2 + 1;
}



/* Entry: 1044fc9c4; end: 1044fca83;  */

byte FUN_1044fc9c4(char *param_1,char *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  if (*param_1 != *param_2) {
    return 0;
  }
  bVar2 = param_1[0x10];
  bVar3 = param_2[0x10];
  uVar5 = *(undefined8 *)(param_2 + 8);
  uVar6 = *(ulong *)(param_1 + 8);
  uVar4 = 0;
  func_0x0001007bbbf8(0);
  __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar6,uVar5,uVar4);
  bVar1 = 0;
  if ((uVar6 & 1) != 0) {
    bVar1 = bVar2 ^ bVar3 ^ 1;
  }
  return bVar1;
}



/* Entry: 1044fca84; end: 1044fca8b;  */

void FUN_1044fca84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1044fca8c; end: 1044fcadf;  */

undefined1 * FUN_1044fca8c(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  _objc_retain();
  _objc_release(uVar1);
  param_1[0x10] = param_2[0x10];
  return param_1;
}



/* Entry: 1044fcae0; end: 1044fcb23;  */

undefined1 * FUN_1044fcae0(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  _objc_release(uVar1);
  param_1[0x10] = param_2[0x10];
  return param_1;
}



/* Entry: 1044fcb24; end: 1044fcbbb;  */

int FUN_1044fcb24(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1044fcbbc; end: 1044fcbcb; -[SCLensCarouselUIConfiguration initWithAnimated:visibleInterfaceElements:] */

void FUN_1044fcbbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bff2e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithAnimated_visibleInterfac_1125da558,param_3,param_4,0);
  return;
}



/* Entry: 1044fcbcc; end: 1044fcc13;  */

uint FUN_1044fcbcc(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  undefined7 uStack_27;
  undefined1 uStack_20;
  undefined8 uStack_1f;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_60 = param_1[2];
  uStack_58 = (undefined1)param_1[3];
  uStack_4f = *(undefined8 *)((long)param_1 + 0x21);
  uStack_57 = (undefined7)*(undefined8 *)((long)param_1 + 0x19);
  uStack_50 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x19) >> 0x38);
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_30 = param_2[2];
  uStack_28 = (undefined1)param_2[3];
  uStack_1f = *(undefined8 *)((long)param_2 + 0x21);
  uStack_27 = (undefined7)*(undefined8 *)((long)param_2 + 0x19);
  uStack_20 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x19) >> 0x38);
  FUN_1044fcc14(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1044fcc14; end: 1044fcedb;  */

uint FUN_1044fcc14(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong *puVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
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
  undefined1 auVar37 [16];
  
  uVar8 = *param_1;
  uVar14 = param_1[1];
  uVar13 = param_1[2];
  uVar6 = param_1[3];
  uVar16 = param_1[4];
  bVar21 = (byte)param_1[5];
  if (bVar21 < 4) {
    if (bVar21 < 2) {
      if (bVar21 == 0) {
        if ((char)param_2[5] == '\0') {
LAB_1044fcc9c:
          uVar12 = param_2[2];
          uVar7 = param_2[3];
          uVar20 = param_2[4];
          uVar11 = *param_2;
          uVar1 = param_2[1];
          uVar9 = 0;
          func_0x0001007bbbf8(0);
          __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar8,uVar11,uVar9);
          uVar10 = 0;
          if (uVar14 == uVar1) {
            uVar10 = (uint)(((int)uVar13 == (int)uVar12 && uVar6 == uVar7) && uVar16 == uVar20);
          }
          if ((uVar8 & 1) != 0) {
            return uVar10;
          }
          return 0;
        }
      }
      else if ((char)param_2[5] == '\x01') {
        uVar6 = param_2[1];
        uVar16 = param_2[2];
        uVar12 = *param_2;
        uVar9 = 0;
        func_0x0001007bbbf8(0);
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar8,uVar12,uVar9);
        if (uVar13 == uVar16) {
          return (uint)uVar8 & (uint)(uVar14 == uVar6);
        }
        return 0;
      }
    }
    else if (bVar21 == 2) {
      if ((char)param_2[5] == '\x02') goto LAB_1044fcc9c;
    }
    else if ((char)param_2[5] == '\x03') {
      uVar13 = *param_2;
      if (uVar8 >> 0x3e == 0) {
        uVar14 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar14 = uVar8 & 0xffffffffffffff8;
        if ((uVar8 & 0x8000000000000000) != 0) {
          uVar14 = uVar8;
        }
        func_0x000107c60480();
      }
      if (uVar13 >> 0x3e == 0) {
        uVar6 = *(ulong *)((uVar13 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar6 = uVar13 & 0xffffffffffffff8;
        if ((uVar13 & 0x8000000000000000) != 0) {
          uVar6 = uVar13;
        }
        func_0x000107c60480();
      }
      if (uVar14 == uVar6) {
        if (uVar14 != 0) {
          uVar16 = uVar8 & 0xffffffffffffff8;
          uVar6 = uVar16;
          if ((uVar8 & 0x8000000000000000) != 0) {
            uVar6 = uVar8;
          }
          uVar12 = uVar16 + 0x20;
          if (uVar8 >> 0x3e != 0) {
            uVar12 = uVar6;
          }
          uVar11 = uVar13 & 0xffffffffffffff8;
          uVar6 = uVar11;
          if ((uVar13 & 0x8000000000000000) != 0) {
            uVar6 = uVar13;
          }
          uVar7 = uVar11 + 0x20;
          if (uVar13 >> 0x3e != 0) {
            uVar7 = uVar6;
          }
          if (uVar12 != uVar7) {
            if ((long)uVar14 < 0) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x103472de4);
              (*pcVar5)();
            }
            func_0x000103473204(0,0x112d4d630,&PTR_PTR_1126ae6a8);
            if (((uVar13 | uVar8) & 0xc000000000000001) == 0) {
              lVar18 = *(long *)(uVar16 + 0x10);
              lVar19 = *(long *)(uVar11 + 0x10);
              puVar15 = (ulong *)(uVar8 + 0x20);
              puVar17 = (undefined8 *)(uVar13 + 0x20);
              do {
                uVar14 = uVar14 - 1;
                if (lVar18 == 0) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x103472d84);
                  (*pcVar5)();
                }
                if (lVar19 == 0) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x103472d88);
                  (*pcVar5)();
                }
                uVar13 = *puVar15;
                uVar9 = *puVar17;
                func_0x000107c61174();
                func_0x000107c61174(uVar9);
                uVar8 = uVar13;
                func_0x000107c60118(uVar13,uVar9);
                uVar10 = (uint)uVar8;
                func_0x000107c61170(uVar13);
                func_0x000107c61170(uVar9);
                if ((uVar8 & 1) == 0) break;
                lVar19 = lVar19 + -1;
                lVar18 = lVar18 + -1;
                puVar15 = puVar15 + 1;
                puVar17 = puVar17 + 1;
              } while (uVar14 != 0);
            }
            else {
              lVar18 = 4;
              do {
                uVar14 = uVar14 - 1;
                uVar6 = lVar18 - 4;
                if ((uVar8 & 0xc000000000000001) == 0) {
                  if (*(long *)(uVar16 + 0x10) <= (long)uVar6) {
                    /* WARNING: Does not return */
                    pcVar5 = (code *)SoftwareBreakpoint(1,0x103472d8c);
                    (*pcVar5)();
                  }
                  uVar12 = *(ulong *)(uVar8 + lVar18 * 8);
                  func_0x000107c61174();
                  if ((uVar13 & 0xc000000000000001) != 0) goto code_r0x000103472c7c;
code_r0x000103472cac:
                  if (*(long *)(uVar11 + 0x10) <= (long)uVar6) {
                    /* WARNING: Does not return */
                    pcVar5 = (code *)SoftwareBreakpoint(1,0x103472d90);
                    (*pcVar5)();
                  }
                  uVar6 = *(ulong *)(uVar13 + lVar18 * 8);
                  func_0x000107c61174(uVar6);
                }
                else {
                  uVar12 = uVar6;
                  func_0x000100ff3f88(uVar6,uVar8);
                  if ((uVar13 & 0xc000000000000001) == 0) goto code_r0x000103472cac;
code_r0x000103472c7c:
                  func_0x000100ff3f88(uVar6,uVar13);
                }
                uVar7 = uVar12;
                func_0x000107c60118(uVar12,uVar6);
                uVar10 = (uint)uVar7;
                func_0x000107c61170(uVar12);
                func_0x000107c61170(uVar6);
              } while (((uVar7 & 1) != 0) && (lVar18 = lVar18 + 1, uVar14 != 0));
            }
            goto code_r0x000103472dbc;
          }
        }
        uVar10 = 1;
      }
      else {
        uVar10 = 0;
      }
code_r0x000103472dbc:
      return uVar10 & 1;
    }
  }
  else if (bVar21 < 6) {
    if (bVar21 == 4) {
      if ((char)param_2[5] == '\x04') {
        uVar6 = param_2[1];
        uVar16 = param_2[2];
        FUN_1045048bc(uVar8,*param_2);
        if (uVar13 == uVar16) {
          return (uint)uVar8 & (uint)(uVar14 == uVar6);
        }
        return 0;
      }
    }
    else if ((char)param_2[5] == '\x05') goto LAB_1044fcdfc;
  }
  else if (bVar21 == 6) {
    if ((char)param_2[5] == '\x06') {
LAB_1044fcdfc:
      uVar13 = *param_2;
      uVar9 = 0;
      func_0x0001007bbbf8(0);
      __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar8,uVar13,uVar9);
      return (uint)uVar8 & 1;
    }
  }
  else if (bVar21 == 7) {
    if ((char)param_2[5] == '\a') goto LAB_1044fcdfc;
  }
  else if (((uVar13 == 0 && uVar14 == 0) && (uVar8 == 0 && uVar6 == 0)) && uVar16 == 0) {
    if ((char)param_2[5] == '\b') {
      uVar13 = param_2[4];
      uVar8 = param_2[3];
      bVar21 = (byte)param_2[1] | (byte)uVar8;
      bVar22 = *(byte *)((long)param_2 + 9) | (byte)(uVar8 >> 8);
      bVar23 = *(byte *)((long)param_2 + 10) | (byte)(uVar8 >> 0x10);
      bVar24 = *(byte *)((long)param_2 + 0xb) | (byte)(uVar8 >> 0x18);
      bVar25 = *(byte *)((long)param_2 + 0xc) | (byte)(uVar8 >> 0x20);
      bVar26 = *(byte *)((long)param_2 + 0xd) | (byte)(uVar8 >> 0x28);
      bVar27 = *(byte *)((long)param_2 + 0xe) | (byte)(uVar8 >> 0x30);
      bVar28 = *(byte *)((long)param_2 + 0xf) | (byte)(uVar8 >> 0x38);
      bVar29 = (byte)param_2[2] | (byte)uVar13;
      bVar30 = *(byte *)((long)param_2 + 0x11) | (byte)(uVar13 >> 8);
      bVar31 = *(byte *)((long)param_2 + 0x12) | (byte)(uVar13 >> 0x10);
      bVar32 = *(byte *)((long)param_2 + 0x13) | (byte)(uVar13 >> 0x18);
      bVar33 = *(byte *)((long)param_2 + 0x14) | (byte)(uVar13 >> 0x20);
      bVar34 = *(byte *)((long)param_2 + 0x15) | (byte)(uVar13 >> 0x28);
      bVar35 = *(byte *)((long)param_2 + 0x16) | (byte)(uVar13 >> 0x30);
      bVar36 = *(byte *)((long)param_2 + 0x17) | (byte)(uVar13 >> 0x38);
      auVar37[1] = bVar22;
      auVar37[0] = bVar21;
      auVar37[2] = bVar23;
      auVar37[3] = bVar24;
      auVar37[4] = bVar25;
      auVar37[5] = bVar26;
      auVar37[6] = bVar27;
      auVar37[7] = bVar28;
      auVar37[8] = bVar29;
      auVar37[9] = bVar30;
      auVar37[10] = bVar31;
      auVar37[0xb] = bVar32;
      auVar37[0xc] = bVar33;
      auVar37[0xd] = bVar34;
      auVar37[0xe] = bVar35;
      auVar37[0xf] = bVar36;
      auVar4[1] = bVar22;
      auVar4[0] = bVar21;
      auVar4[2] = bVar23;
      auVar4[3] = bVar24;
      auVar4[4] = bVar25;
      auVar4[5] = bVar26;
      auVar4[6] = bVar27;
      auVar4[7] = bVar28;
      auVar4[8] = bVar29;
      auVar4[9] = bVar30;
      auVar4[10] = bVar31;
      auVar4[0xb] = bVar32;
      auVar4[0xc] = bVar33;
      auVar4[0xd] = bVar34;
      auVar4[0xe] = bVar35;
      auVar4[0xf] = bVar36;
      auVar37 = NEON_ext(auVar37,auVar4,8,1);
      if (CONCAT17(bVar28 | auVar37[7],
                   CONCAT16(bVar27 | auVar37[6],
                            CONCAT15(bVar26 | auVar37[5],
                                     CONCAT14(bVar25 | auVar37[4],
                                              CONCAT13(bVar24 | auVar37[3],
                                                       CONCAT12(bVar23 | auVar37[2],
                                                                CONCAT11(bVar22 | auVar37[1],
                                                                         bVar21 | auVar37[0])))))))
          == 0 && *param_2 == 0) {
        return 1;
      }
    }
  }
  else {
    if ((uVar8 == 1) && (((uVar13 == 0 && uVar14 == 0) && uVar6 == 0) && uVar16 == 0)) {
      if ((char)param_2[5] != '\b') {
        return 0;
      }
      if (*param_2 != 1) {
        return 0;
      }
    }
    else if ((uVar8 == 2) && (((uVar13 == 0 && uVar14 == 0) && uVar6 == 0) && uVar16 == 0)) {
      if ((char)param_2[5] != '\b') {
        return 0;
      }
      if (*param_2 != 2) {
        return 0;
      }
    }
    else {
      if ((char)param_2[5] != '\b') {
        return 0;
      }
      if (*param_2 != 3) {
        return 0;
      }
    }
    uVar13 = param_2[4];
    uVar8 = param_2[3];
    bVar21 = (byte)param_2[1] | (byte)uVar8;
    bVar22 = *(byte *)((long)param_2 + 9) | (byte)(uVar8 >> 8);
    bVar23 = *(byte *)((long)param_2 + 10) | (byte)(uVar8 >> 0x10);
    bVar24 = *(byte *)((long)param_2 + 0xb) | (byte)(uVar8 >> 0x18);
    bVar25 = *(byte *)((long)param_2 + 0xc) | (byte)(uVar8 >> 0x20);
    bVar26 = *(byte *)((long)param_2 + 0xd) | (byte)(uVar8 >> 0x28);
    bVar27 = *(byte *)((long)param_2 + 0xe) | (byte)(uVar8 >> 0x30);
    bVar28 = *(byte *)((long)param_2 + 0xf) | (byte)(uVar8 >> 0x38);
    bVar29 = (byte)param_2[2] | (byte)uVar13;
    bVar30 = *(byte *)((long)param_2 + 0x11) | (byte)(uVar13 >> 8);
    bVar31 = *(byte *)((long)param_2 + 0x12) | (byte)(uVar13 >> 0x10);
    bVar32 = *(byte *)((long)param_2 + 0x13) | (byte)(uVar13 >> 0x18);
    bVar33 = *(byte *)((long)param_2 + 0x14) | (byte)(uVar13 >> 0x20);
    bVar34 = *(byte *)((long)param_2 + 0x15) | (byte)(uVar13 >> 0x28);
    bVar35 = *(byte *)((long)param_2 + 0x16) | (byte)(uVar13 >> 0x30);
    bVar36 = *(byte *)((long)param_2 + 0x17) | (byte)(uVar13 >> 0x38);
    auVar2[1] = bVar22;
    auVar2[0] = bVar21;
    auVar2[2] = bVar23;
    auVar2[3] = bVar24;
    auVar2[4] = bVar25;
    auVar2[5] = bVar26;
    auVar2[6] = bVar27;
    auVar2[7] = bVar28;
    auVar2[8] = bVar29;
    auVar2[9] = bVar30;
    auVar2[10] = bVar31;
    auVar2[0xb] = bVar32;
    auVar2[0xc] = bVar33;
    auVar2[0xd] = bVar34;
    auVar2[0xe] = bVar35;
    auVar2[0xf] = bVar36;
    auVar3[1] = bVar22;
    auVar3[0] = bVar21;
    auVar3[2] = bVar23;
    auVar3[3] = bVar24;
    auVar3[4] = bVar25;
    auVar3[5] = bVar26;
    auVar3[6] = bVar27;
    auVar3[7] = bVar28;
    auVar3[8] = bVar29;
    auVar3[9] = bVar30;
    auVar3[10] = bVar31;
    auVar3[0xb] = bVar32;
    auVar3[0xc] = bVar33;
    auVar3[0xd] = bVar34;
    auVar3[0xe] = bVar35;
    auVar3[0xf] = bVar36;
    auVar37 = NEON_ext(auVar2,auVar3,8,1);
    if (CONCAT17(bVar28 | auVar37[7],
                 CONCAT16(bVar27 | auVar37[6],
                          CONCAT15(bVar26 | auVar37[5],
                                   CONCAT14(bVar25 | auVar37[4],
                                            CONCAT13(bVar24 | auVar37[3],
                                                     CONCAT12(bVar23 | auVar37[2],
                                                              CONCAT11(bVar22 | auVar37[1],
                                                                       bVar21 | auVar37[0]))))))) ==
        0) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 1044fcedc; end: 1044fcf07;  */

long FUN_1044fcedc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1044fcf08; end: 1044fcff7;  */

void FUN_1044fcf08(void)

{
  byte in_w5;
  
  if (in_w5 < 4) {
    if (in_w5 < 2) {
      if ((in_w5 != 0) && (in_w5 != 1)) {
        return;
      }
    }
    else if (in_w5 != 2) {
      if (in_w5 != 3) {
        return;
      }
_swift_bridgeObjectRetain:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRetain_11034f268)();
      return;
    }
  }
  else if (in_w5 < 6) {
    if (in_w5 == 4) goto _swift_bridgeObjectRetain;
    if (in_w5 != 5) {
      return;
    }
  }
  else if ((in_w5 != 6) && (in_w5 != 7)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1044fcff8; end: 1044fd0f3;  */

undefined8 * FUN_1044fcff8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  uVar6 = param_2[4];
  uVar5 = *(undefined1 *)(param_2 + 5);
  FUN_1044fcf08(uVar1,uVar3,uVar2,uVar4,uVar6,uVar5);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  param_1[4] = uVar6;
  *(undefined1 *)(param_1 + 5) = uVar5;
  return param_1;
}



/* Entry: 1044fd0f4; end: 1044fd143;  */

undefined8 * FUN_1044fd0f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar8 = param_2[4];
  uVar5 = *(undefined1 *)(param_2 + 5);
  uVar7 = *param_1;
  uVar1 = param_1[1];
  uVar3 = param_1[2];
  uVar2 = param_1[3];
  uVar4 = param_1[4];
  uVar9 = *param_2;
  uVar11 = param_2[3];
  uVar10 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar9;
  param_1[3] = uVar11;
  param_1[2] = uVar10;
  param_1[4] = uVar8;
  uVar6 = *(undefined1 *)(param_1 + 5);
  *(undefined1 *)(param_1 + 5) = uVar5;
  func_0x0001044fcf8c(uVar7,uVar1,uVar3,uVar2,uVar4,uVar6);
  return param_1;
}



/* Entry: 1044fd144; end: 1044fd247;  */

int FUN_1044fd144(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xf7 < param_2) && (*(char *)((long)param_1 + 0x29) != '\0')) {
    return *param_1 + 0xf8;
  }
  uVar1 = *(byte *)(param_1 + 10) ^ 0xff;
  if (*(byte *)(param_1 + 10) < 9) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1044fd248; end: 1044fd35b;  */

uint FUN_1044fd248(ulong param_1,ulong param_2,char param_3,undefined8 param_4,long param_5,
                  char param_6)

{
  undefined8 uVar1;
  ulong uVar2;
  uint uVar3;
  
  if (param_3 == '\x01') {
    if (param_6 == '\x01') {
      uVar1 = 0;
      func_0x0001007bbbf8(0);
      __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(param_1,param_4,uVar1);
      uVar3 = 0;
      if ((param_1 & 1) != 0) {
        uVar3 = (uint)param_5 ^ (uint)param_2 ^ 1;
      }
      goto LAB_1044fd348;
    }
  }
  else if (param_6 != '\x01') {
    uVar1 = 0;
    func_0x0001007bbbf8(0);
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(param_1,param_4,uVar1);
    if ((param_1 & 1) != 0) {
      if (param_2 == 0) {
        if (param_5 == 0) {
LAB_1044fd338:
          uVar3 = 1;
          goto LAB_1044fd348;
        }
      }
      else if (param_5 != 0) {
        func_0x0001000285a8(0x112d74dc8,&UNK_10d9355f0);
        _objc_retain(param_5);
        _objc_retain();
        uVar2 = param_2;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        _objc_release(param_2);
        _objc_release(param_5);
        if ((uVar2 & 1) != 0) goto LAB_1044fd338;
      }
    }
  }
  uVar3 = 0;
LAB_1044fd348:
  return uVar3 & 1;
}



/* Entry: 1044fd35c; end: 1044fd38f;  */

void FUN_1044fd35c(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 != '\x01') {
    _objc_retain(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_1);
  return;
}



/* Entry: 1044fd390; end: 1044fd39f;  */

void FUN_1044fd390(undefined8 *param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  uVar1 = param_1[1];
  cVar2 = *(char *)(param_1 + 2);
  _objc_release(*param_1);
  if (cVar2 == '\x01') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1044fd3a0; end: 1044fd3db;  */

void FUN_1044fd3a0(undefined8 param_1,undefined8 param_2,char param_3)

{
  _objc_release();
  if (param_3 == '\x01') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1044fd3dc; end: 1044fd477;  */

undefined8 * FUN_1044fd3dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_1044fd35c(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 1044fd478; end: 1044fd4bb;  */

undefined8 * FUN_1044fd478(undefined8 *param_1,undefined8 *param_2)

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
  FUN_1044fd3a0(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 1044fd4bc; end: 1044fd573;  */

int FUN_1044fd4bc(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1044fd574; end: 1044fd583;  */

undefined1  [16] FUN_1044fd574(void)

{
  return ZEXT816(0x1107805a8);
}



/* Entry: 1044fd584; end: 1044fd657;  */

void FUN_1044fd584(void)

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



/* Entry: 1044fd658; end: 1044fd677;  */

void FUN_1044fd658(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 1044fd678; end: 1044fd6c3; -[SCLensCarouselDataUpdatingEvents description] */

void FUN_1044fd678(undefined8 param_1)

{
  undefined1 auStack_a0 [128];
  
  _objc_retain();
  FUN_1044fda74(auStack_a0);
  _objc_release(param_1);
  FUN_1044fda40(auStack_a0);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044fd6c4; end: 1044fd70b; -[SCLensCarouselDataUpdatingEvents init] */

void FUN_1044fd6c4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCLensCarouselScope/LensCarouselDataUpdatingEventsWrapper.swift",0x3f,2,0x41,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044fd70c);
  (*pcVar1)();
}



/* Entry: 1044fd70c; end: 1044fd70f; -[SCLensCarouselDataUpdatingEvents copyWithZone:] */

void FUN_1044fd70c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1044fd710; end: 1044fd777; +[SCLensCarouselDataUpdatingEvents registerContextWithContextId:contextConfig:] */

void FUN_1044fd710(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  _objc_retain(param_4);
  FUN_1044fdcf0(param_3,param_2,param_4);
  _objc_release(param_4);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1044fd778; end: 1044fd783; +[SCLensCarouselDataUpdatingEvents activateContextWithContextId:] */

void FUN_1044fd778(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  (*(code *)0x1044fddbc)();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1044fd784; end: 1044fd78f; +[SCLensCarouselDataUpdatingEvents deregisterContextWithContextId:] */

void FUN_1044fd784(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  (*(code *)0x1044fde80)();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1044fd790; end: 1044fd7cb;  */

void FUN_1044fd790(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  (*param_4)();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1044fd7cc; end: 1044fd913; +[SCLensCarouselDataUpdatingEvents updateWithConfiguration:isRestoredConfig:] */

void FUN_1044fd7cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x0001044fdf40();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1044fd914; end: 1044fd987; -[SCLensCarouselDataUpdatingEvents matchRegisterContext:activateContext:deregisterContext:update:] */

void FUN_1044fd914(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  func_0x0001044fd80c(FUN_1044fe1c8,auStack_40,FUN_1044fe210,auStack_60,0x1044fe2bc,auStack_80,
                      0x1044fe218,auStack_a0);
  _objc_release(param_1);
  return;
}



/* Entry: 1044fd988; end: 1044fd9bb;  */

void FUN_1044fd988(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1044fd9bc; end: 1044fda2f; -[SCLensCarouselDataUpdatingEvents .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044fd9bc(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113081d68 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113081d70));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113081d78 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113081d80 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113081d88));
  return;
}



/* Entry: 1044fda30; end: 1044fda3f;  */

ulong FUN_1044fda30(ulong param_1)

{
  if (3 < param_1) {
    param_1 = 4;
  }
  return param_1;
}



/* Entry: 1044fda40; end: 1044fda73;  */

undefined8 FUN_1044fda40(undefined8 param_1)

{
  (*(code *)(undefined *)0x1044f97d4)();
  return param_1;
}



/* Entry: 1044fda74; end: 1044fdcef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044fda74(undefined8 *param_1,long param_2)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long lStack_130;
  undefined1 uStack_128;
  undefined7 uStack_127;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined2 uStack_e8;
  undefined6 uStack_e6;
  undefined2 uStack_e0;
  undefined7 uStack_de;
  byte bStack_d7;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined2 uStack_68;
  undefined6 uStack_66;
  undefined2 uStack_60;
  undefined8 uStack_5e;
  
  bVar1 = *(byte *)(param_2 + _DAT_113081d60);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      lVar4 = ((undefined8 *)(param_2 + _DAT_113081d68))[1];
      if (lVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1044fdccc);
        (*pcVar2)();
      }
      lVar3 = *(long *)(param_2 + _DAT_113081d70);
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1044fdcdc);
        (*pcVar2)();
      }
      uVar7 = *(undefined8 *)(param_2 + _DAT_113081d68);
      if (*(char *)(lVar3 + _DAT_113081fe8) == '\x01') {
        if (*(char *)((undefined8 *)(lVar3 + _DAT_113081ff0) + 1) == '\x01') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1044fdce4);
          (*pcVar2)();
        }
        lVar5 = *(long *)(lVar3 + _DAT_113081ff8);
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1044fdcec);
          (*pcVar2)();
        }
        lVar6 = *(long *)(lVar3 + _DAT_113082000);
        if (lVar6 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1044fdcf0);
          (*pcVar2)();
        }
        uVar8 = *(undefined8 *)(lVar3 + _DAT_113081ff0);
        _objc_retain(lVar5);
        _swift_unknownObjectRetain(lVar6);
        uStack_128 = 1;
      }
      else {
        if (*(char *)((undefined8 *)(lVar3 + _DAT_113082008) + 1) == '\x01') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1044fdce8);
          (*pcVar2)();
        }
        lVar5 = 0;
        lVar6 = 0;
        uStack_128 = 0;
        uVar8 = *(undefined8 *)(lVar3 + _DAT_113082008);
      }
      uStack_150 = uVar7;
      lStack_148 = lVar4;
      uStack_140 = uVar8;
      lStack_138 = lVar5;
      lStack_130 = lVar6;
      func_0x0001044fe29c(&uStack_150);
    }
    else {
      lVar4 = ((undefined8 *)(param_2 + _DAT_113081d78))[1];
      if (lVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1044fdcd4);
        (*pcVar2)();
      }
      uStack_150 = *(undefined8 *)(param_2 + _DAT_113081d78);
      lStack_148 = lVar4;
      func_0x0001044fe278(&uStack_150);
    }
  }
  else {
    if (bVar1 != 2) {
      lVar4 = *(long *)(param_2 + _DAT_113081d88);
      if (lVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1044fdcd8);
        (*pcVar2)();
      }
      bVar1 = *(byte *)(param_2 + _DAT_113081d90);
      if (bVar1 == 2) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1044fdce0);
        (*pcVar2)();
      }
      _objc_retain(lVar4);
      FUN_104504298(&uStack_150);
      _objc_release(lVar4);
      bStack_d7 = bVar1 & 1;
      func_0x0001044fe230(&uStack_150);
      uStack_88 = uStack_108;
      uStack_90 = uStack_110;
      uStack_78 = uStack_f8;
      uStack_80 = uStack_100;
      uStack_68 = uStack_e8;
      uStack_70 = uStack_f0;
      uStack_5e = CONCAT17(bStack_d7,uStack_de);
      uStack_66 = uStack_e6;
      uStack_60 = uStack_e0;
      lStack_c8 = lStack_148;
      uStack_d0 = uStack_150;
      lStack_b8 = lStack_138;
      uStack_c0 = uStack_140;
      uStack_a8 = CONCAT71(uStack_127,uStack_128);
      lStack_b0 = lStack_130;
      uStack_98 = uStack_118;
      uStack_a0 = uStack_120;
      goto LAB_1044fdc84;
    }
    lVar4 = ((undefined8 *)(param_2 + _DAT_113081d80))[1];
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1044fdcd0);
      (*pcVar2)();
    }
    uStack_150 = *(undefined8 *)(param_2 + _DAT_113081d80);
    lStack_148 = lVar4;
    func_0x0001044fe254(&uStack_150);
  }
  uStack_88 = uStack_108;
  uStack_90 = uStack_110;
  uStack_78 = uStack_f8;
  uStack_80 = uStack_100;
  uStack_68 = uStack_e8;
  uStack_70 = uStack_f0;
  uStack_5e = CONCAT17(bStack_d7,uStack_de);
  uStack_66 = uStack_e6;
  uStack_60 = uStack_e0;
  lStack_c8 = lStack_148;
  uStack_d0 = uStack_150;
  lStack_b8 = lStack_138;
  uStack_c0 = uStack_140;
  uStack_a8 = CONCAT71(uStack_127,uStack_128);
  lStack_b0 = lStack_130;
  uStack_98 = uStack_118;
  uStack_a0 = uStack_120;
  _swift_bridgeObjectRetain(lVar4);
LAB_1044fdc84:
  param_1[9] = uStack_88;
  param_1[8] = uStack_90;
  param_1[0xb] = uStack_78;
  param_1[10] = uStack_80;
  param_1[0xd] = CONCAT62(uStack_66,uStack_68);
  param_1[0xc] = uStack_70;
  *(undefined8 *)((long)param_1 + 0x72) = uStack_5e;
  *(ulong *)((long)param_1 + 0x6a) = CONCAT26(uStack_60,uStack_66);
  param_1[1] = lStack_c8;
  *param_1 = uStack_d0;
  param_1[3] = lStack_b8;
  param_1[2] = uStack_c0;
  param_1[5] = uStack_a8;
  param_1[4] = lStack_b0;
  param_1[7] = uStack_98;
  param_1[6] = uStack_a0;
  return;
}



/* Entry: 1044fdcf0; end: 1044fdfff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044fdcf0(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_40;
  long lStack_38;
  
  lVar4 = param_1;
  FUN_1044fe000();
  lVar5 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar5 + _DAT_113081d60) = 0;
  plVar1 = (long *)(lVar5 + _DAT_113081d68);
  *plVar1 = param_1;
  plVar1[1] = param_2;
  *(undefined8 *)(lVar5 + _DAT_113081d70) = param_3;
  puVar2 = (undefined8 *)(lVar5 + _DAT_113081d78);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_113081d80);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_113081d88) = 0;
  *(undefined1 *)(lVar5 + _DAT_113081d90) = 2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  _swift_bridgeObjectRetain(param_2);
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar3);
  return;
}



/* Entry: 1044fe000; end: 1044fe01f;  */

void FUN_1044fe000(void)

{
  _objc_opt_self(&PTR_PTR_1129c6d80);
  return;
}



/* Entry: 1044fe020; end: 1044fe187;  */

int FUN_1044fe020(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1044fe09c;
        goto LAB_1044fe080;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1044fe080:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_1044fe09c:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1044fe188; end: 1044fe1c7;  */

void FUN_1044fe188(void)

{
  undefined *puVar1;
  
  if (puRam0000000113081dc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd101a8;
  _swift_getWitnessTable(&UNK_10dd101a8,&UNK_110780640);
  puRam0000000113081dc0 = puVar1;
  return;
}



/* Entry: 1044fe1c8; end: 1044fe20f;  */

void FUN_1044fe1c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1044fe210; end: 1044fe2bf;  */

void FUN_1044fe210(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1044fe2c0; end: 1044fe35f;  */

void FUN_1044fe2c0(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1044fe360; end: 1044fe383;  */

void FUN_1044fe360(undefined8 param_1,long *param_2)

{
  *(bool *)param_1 = *param_2 != 0;
  return;
}



/* Entry: 1044fe384; end: 1044fe39f; -[SCLensCarouselPresentationEvents description] */

void FUN_1044fe384(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044fe3a0; end: 1044fe3e7; -[SCLensCarouselPresentationEvents init] */

void FUN_1044fe3a0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCLensCarouselScope/LensCarouselPresentationEventsWrapper.swift",0x3f,2,0x24,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044fe3e8);
  (*pcVar1)();
}



/* Entry: 1044fe3e8; end: 1044fe423; -[SCLensCarouselPresentationEvents hash] */

void FUN_1044fe3e8(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1044fe424; end: 1044fe4af;  */

undefined8 FUN_1044fe424(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 unaff_x20;
  undefined8 uStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    puVar1 = &uStack_58;
    _swift_dynamicCast(puVar1,auStack_50,PTR___sypN_11034f1a8 + 8,unaff_x20,6);
    if (((ulong)puVar1 & 1) != 0) {
      _objc_release(uStack_58);
      return 1;
    }
  }
  return 0;
}



/* Entry: 1044fe4b0; end: 1044fe52f; -[SCLensCarouselPresentationEvents isEqual:] */

uint FUN_1044fe4b0(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_1044fe424(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1044fe530; end: 1044fe533; -[SCLensCarouselPresentationEvents copyWithZone:] */

void FUN_1044fe530(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1044fe534; end: 1044fe573; +[SCLensCarouselPresentationEvents dismissCarousel] */

void FUN_1044fe534(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _swift_getObjCClassMetadata();
  uVar1 = param_1;
  _objc_allocWithZone();
  uStack_30 = uVar1;
  uStack_28 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044fe574; end: 1044fe57f; -[SCLensCarouselPresentationEvents matchDismissCarousel:] */

void FUN_1044fe574(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001044fe57c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 1044fe580; end: 1044fe5d3;  */

void FUN_1044fe580(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1044fe5d4; end: 1044fe6c3;  */

uint FUN_1044fe5d4(uint *param_1,int param_2)

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



/* Entry: 1044fe6c4; end: 1044fe703;  */

void FUN_1044fe6c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113081df8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd102a8;
  _swift_getWitnessTable(&UNK_10dd102a8,&UNK_110780728);
  puRam0000000113081df8 = puVar1;
  return;
}



/* Entry: 1044fe704; end: 1044fe713; -[SCLensCarouselActivationConfiguration activationSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044fe704(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113081e00);
}



/* Entry: 1044fe714; end: 1044fe71f; -[SCLensCarouselActivationConfiguration applicableContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044fe714(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113081e08))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113081e08);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044fe720; end: 1044fe72b; -[SCLensCarouselActivationConfiguration bundledOriginalLensId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044fe720(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113081e10))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113081e10);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044fe72c; end: 1044fe783;  */

void FUN_1044fe72c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044fe784; end: 1044fe89b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044fe784(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113081e00) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113081e08);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113081e10);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044fe89c; end: 1044fe957; -[SCLensCarouselActivationConfiguration initWithActivationSource:applicableContext:bundledOriginalLensId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044fe89c(long param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_1;
  _swift_getObjectType();
  if (param_4 == 0) {
    lVar2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar2 = param_2;
  }
  if (param_5 == 0) {
    param_5 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  *(undefined8 *)(param_1 + _DAT_113081e00) = param_3;
  plVar1 = (long *)(param_1 + _DAT_113081e08);
  *plVar1 = param_4;
  plVar1[1] = lVar2;
  plVar1 = (long *)(param_1 + _DAT_113081e10);
  *plVar1 = param_5;
  plVar1[1] = param_2;
  lStack_50 = param_1;
  lStack_48 = lVar3;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044fe958; end: 1044fe9c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044fe958(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113081e00) = *param_1;
  uVar2 = param_1[1];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113081e08);
  puVar1[1] = param_1[2];
  *puVar1 = uVar2;
  uVar2 = param_1[3];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113081e10);
  puVar1[1] = param_1[4];
  *puVar1 = uVar2;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044fe9c8; end: 1044fe9fb; -[SCLensCarouselActivationConfiguration hash] */

undefined8 FUN_1044fe9c8(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1044fe9fc();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1044fe9fc; end: 1044fead3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044fe9fc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_113081e00));
  if (((undefined8 *)(unaff_x20 + _DAT_113081e08))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113081e08);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_113081e10))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113081e10);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1044fead4; end: 1044fec6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1044fead4(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long unaff_x20;
  uint uVar8;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar5 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar3 = &lStack_68;
    _swift_dynamicCast(plVar3,auStack_60,PTR___sypN_11034f1a8 + 8,lVar5,6);
    if (((ulong)plVar3 & 1) != 0) {
      iVar1 = *(int *)(unaff_x20 + _DAT_113081e00);
      iVar2 = *(int *)(lStack_68 + _DAT_113081e00);
      lVar5 = ((long *)(unaff_x20 + _DAT_113081e08))[1];
      lVar6 = ((long *)(lStack_68 + _DAT_113081e08))[1];
      uVar7 = (uint)(lVar5 == 0 && lVar6 == 0);
      if (lVar5 != 0 && lVar6 != 0) {
        lVar4 = *(long *)(unaff_x20 + _DAT_113081e08);
        if (lVar4 == *(long *)(lStack_68 + _DAT_113081e08) && lVar5 == lVar6) {
          uVar7 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar7 = (uint)lVar4;
        }
      }
      lVar5 = ((long *)(unaff_x20 + _DAT_113081e10))[1];
      lVar6 = ((long *)(lStack_68 + _DAT_113081e10))[1];
      if (lVar5 == 0) {
        _swift_bridgeObjectRetain(lVar6);
        _objc_release(lStack_68);
        if (lVar6 == 0) {
LAB_1044fec58:
          uVar8 = 1;
        }
        else {
          _swift_bridgeObjectRelease(lVar6);
          uVar8 = 0;
        }
      }
      else {
        uVar8 = 0;
        if (lVar6 != 0) {
          lVar4 = *(long *)(unaff_x20 + _DAT_113081e10);
          if (lVar4 == *(long *)(lStack_68 + _DAT_113081e10) && lVar5 == lVar6) {
            _objc_release(lStack_68);
            goto LAB_1044fec58;
          }
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar8 = (uint)lVar4;
        }
        _objc_release(lStack_68);
      }
      if (iVar1 == iVar2) {
        uVar7 = uVar7 & uVar8;
        goto LAB_1044febac;
      }
    }
  }
  uVar7 = 0;
LAB_1044febac:
  return uVar7 & 1;
}



/* Entry: 1044fec6c; end: 1044feceb; -[SCLensCarouselActivationConfiguration isEqual:] */

uint FUN_1044fec6c(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_1044fead4(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1044fecec; end: 1044fecef; -[SCLensCarouselActivationConfiguration copyWithZone:] */

void FUN_1044fecec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1044fecf0; end: 1044fed0b; -[SCLensCarouselActivationConfiguration description] */

void FUN_1044fecf0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044fed0c; end: 1044fed53; -[SCLensCarouselActivationConfiguration init] */

void FUN_1044fed0c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCLensCarouselScope/LensCarouselActivationConfigurationWrapper.swift",0x44,2,0x3f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044fed54);
  (*pcVar1)();
}



/* Entry: 1044fed54; end: 1044fed6f; +[SCLensCarouselActivationConfigurationBuilder lensCarouselActivationConfiguration] */

void FUN_1044fed54(void)

{
  _swift_getObjCClassMetadata();
  _objc_allocWithZone();
  func_0x00010bfee200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044fed70; end: 1044fedaf; +[SCLensCarouselActivationConfigurationBuilder lensCarouselActivationConfigurationWithExistingLensCarouselActivationConfiguration:] */

void FUN_1044fed70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_1044ff0c8(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1044fedb0; end: 1044fedc7; -[SCLensCarouselActivationConfigurationBuilder withActivationSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044fedb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_113081e18);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1044fedc8; end: 1044fedd3; -[SCLensCarouselActivationConfigurationBuilder withApplicableContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044fedc8(long param_1,long param_2,long param_3)

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
  plVar1 = (long *)(param_1 + _DAT_113081e20);
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



/* Entry: 1044fedd4; end: 1044feddf; -[SCLensCarouselActivationConfigurationBuilder withBundledOriginalLensId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044fedd4(long param_1,long param_2,long param_3)

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
  plVar1 = (long *)(param_1 + _DAT_113081e28);
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



/* Entry: 1044fede0; end: 1044fee43;  */

void FUN_1044fede0(long param_1,long param_2,long param_3,long *param_4)

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
  plVar1 = (long *)(param_1 + *param_4);
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



/* Entry: 1044fee44; end: 1044fef2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044fee44(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long unaff_x20;
  undefined8 uVar8;
  long lStack_60;
  long lStack_58;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113081e18);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uVar8 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uVar8 = *puVar1;
  }
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113081e20);
  uVar4 = ((undefined8 *)(unaff_x20 + _DAT_113081e20))[1];
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_113081e28);
  uVar5 = ((undefined8 *)(unaff_x20 + _DAT_113081e28))[1];
  FUN_1044ff1bc();
  lVar7 = param_1;
  _objc_allocWithZone();
  *(undefined8 *)(lVar7 + _DAT_113081e00) = uVar8;
  puVar1 = (undefined8 *)(lVar7 + _DAT_113081e08);
  *puVar1 = uVar2;
  puVar1[1] = uVar4;
  puVar1 = (undefined8 *)(lVar7 + _DAT_113081e10);
  *puVar1 = uVar3;
  puVar1[1] = uVar5;
  puVar6 = PTR_s_init_1125d9248;
  lStack_60 = lVar7;
  lStack_58 = param_1;
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar5);
  _objc_msgSendSuper2(&lStack_60,puVar6);
  return;
}



/* Entry: 1044fef30; end: 1044fef73; -[SCLensCarouselActivationConfigurationBuilder build] */

void FUN_1044fef30(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1044fee44();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1044fef74; end: 1044fefb7; -[SCLensCarouselActivationConfigurationBuilder safeBuildAndReturnError:] */

void FUN_1044fef74(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1044fee44();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1044fefb8; end: 1044ff02b; -[SCLensCarouselActivationConfigurationBuilder init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044fefb8(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  puVar1 = (undefined8 *)(param_1 + _DAT_113081e18);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(param_1 + _DAT_113081e20);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(param_1 + _DAT_113081e28);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044ff02c; end: 1044ff02f;  */

void FUN_1044ff02c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}


