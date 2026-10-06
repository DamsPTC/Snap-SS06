/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0021ecd8; end: 0021ecfb;  */

void FUN_0021ecd8(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af8398 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007eda38;
  _swift_getWitnessTable(&UNK_007eda38,&UNK_009c0748);
  puRam0000000000af8398 = puVar1;
  return;
}



/* Entry: 0021ecfc; end: 0021ed27;  */

undefined8 * FUN_0021ecfc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 0021ed28; end: 0021ed2f;  */

void FUN_0021ed28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 0021ed30; end: 0021ed9f;  */

undefined8 * FUN_0021ed30(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 0021eda0; end: 0021ee3b;  */

int FUN_0021eda0(int *param_1,int param_2)

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



/* Entry: 0021ee3c; end: 0021ee5f;  */

void FUN_0021ee3c(undefined8 param_1)

{
  FUN_0021f1d4();
  _objc_allocWithZone();
  func_0x007849a0();
  uRam0000000000b65cc8 = param_1;
  return;
}



/* Entry: 0021ee60; end: 0021ee9f; +[SCAppEnvironmentBindings shared] */

void FUN_0021ee60(void)

{
  if (lRam0000000000b5dbe0 != -1) {
    _swift_once(0xb5dbe0,FUN_0021ee3c);
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_0099adb8)(uRam0000000000b65cc8);
  return;
}



/* Entry: 0021eea0; end: 0021f05b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021eea0(undefined8 param_1)

{
  undefined1 *puVar1;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  lVar4 = 0xae6dd0;
  func_0x000115a8(0xae6dd0,&UNK_007ce690);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar3 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar4 = (long)puVar3 - extraout_x12;
  pcVar5 = *(code **)(unaff_x20 + _DAT_00af83a0);
  if (pcVar5 == (code *)0x0) {
    lVar6 = 0;
    __s10Foundation3URLVMa();
    (**(code **)(*(long *)(lVar6 + -8) + 0x38))(lVar4,1,1,lVar6);
  }
  else {
    uVar2 = ((undefined8 *)(unaff_x20 + _DAT_00af83a0))[1];
    _swift_retain(uVar2);
    (*pcVar5)(auStack_68);
    FUN_0021f05c(pcVar5,uVar2);
    FUN_0001393c(auStack_68,uStack_50);
    (**(code **)(lStack_48 + 8))(lVar4,uStack_50,lStack_48);
    FUN_00011670(auStack_68);
  }
  func_0x000addd8(lVar4,puVar3);
  lVar4 = 0;
  __s10Foundation3URLVMa();
  lVar6 = *(long *)(lVar4 + -8);
  pcVar5 = *(code **)(lVar6 + 0x30);
  puVar1 = puVar3;
  (*pcVar5)(puVar3,1,lVar4);
  if ((int)puVar1 == 1) {
    (**(code **)(lVar6 + 0x38))(param_1,1,1,lVar4);
    puVar1 = puVar3;
    (*pcVar5)(puVar3,1,lVar4);
    if ((int)puVar1 != 1) {
      func_0x0002f32c(puVar3);
    }
  }
  else {
    (**(code **)(lVar6 + 0x20))(param_1,puVar3,lVar4);
    (**(code **)(lVar6 + 0x38))(param_1,0,1,lVar4);
  }
  return;
}



/* Entry: 0021f05c; end: 0021f06b;  */

void FUN_0021f05c(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_0099bb20)(param_2);
    return;
  }
  return;
}



/* Entry: 0021f06c; end: 0021f13f; -[SCAppEnvironmentBindings appStoreReceiptURL] */

void FUN_0021f06c(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0xae6dd0;
  func_0x000115a8(0xae6dd0,&UNK_007ce690);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffd0 + -extraout_x8;
  _objc_retain(param_1);
  FUN_0021eea0(puVar4);
  _objc_release(param_1);
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar3);
  return;
}



/* Entry: 0021f140; end: 0021f18b; -[SCAppEnvironmentBindings init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021f140(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  puVar1 = (undefined8 *)(param_1 + _DAT_00af83a0);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
  return;
}



/* Entry: 0021f18c; end: 0021f1bf;  */

void FUN_0021f18c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 0021f1c0; end: 0021f1d3; -[SCAppEnvironmentBindings .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021f1c0(long param_1)

{
  if (*(long *)(param_1 + _DAT_00af83a0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_0099bb20)(((long *)(param_1 + _DAT_00af83a0))[1]);
    return;
  }
  return;
}



/* Entry: 0021f1d4; end: 0021f1f3;  */

void FUN_0021f1d4(void)

{
  _objc_opt_self(&PTR_PTR_00acf5d8);
  return;
}



/* Entry: 0021f1f4; end: 0021f433;  */

undefined1  [16] FUN_0021f1f4(void)

{
  return ZEXT816(0x9c0800);
}



/* Entry: 0021f434; end: 0021f557;  */

int FUN_0021f434(ulong *param_1)

{
  uint uVar1;
  ulong *puVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  ulong *puVar9;
  ulong uVar10;
  
  puVar2 = param_1;
  func_0x0021f2e8();
  uVar8 = *(uint *)((long)param_1 + 0xc);
  uVar10 = (ulong)uVar8;
  uVar6 = *param_1;
  uVar4 = (ulong)((uint)param_1[1] >> 1) & 0xffffff;
  uVar3 = (uint)uVar4;
  if ((int)uVar8 < 0) {
    puVar9 = (ulong *)param_1[2];
    if (puVar9 < (ulong *)param_1[4]) {
      uVar10 = *puVar9;
      param_1[2] = (ulong)((long)puVar9 + 7);
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar6 = (uVar10 >> 0x20 | uVar10 << 0x20) >> 8 | uVar6 << 0x38;
      *param_1 = uVar6;
      uVar8 = uVar8 + 0x38;
      uVar10 = (ulong)uVar8;
      uVar7 = (uint)(uVar6 >> (uVar10 & 0x3f));
      goto joined_r0x0021f4c8;
    }
    if (puVar9 < (ulong *)param_1[3]) {
      uVar8 = uVar8 + 8;
      *(uint *)((long)param_1 + 0xc) = uVar8;
      param_1[2] = (ulong)((long)puVar9 + 1);
      uVar6 = (ulong)(byte)*puVar9 | uVar6 << 8;
      *param_1 = uVar6;
      uVar10 = (ulong)uVar8;
      uVar7 = (uint)(uVar6 >> ((ulong)uVar8 & 0x3f));
      goto joined_r0x0021f4c8;
    }
    if ((int)param_1[5] == 0) {
      uVar6 = uVar6 << 8;
      *param_1 = uVar6;
      uVar8 = uVar8 + 8;
      uVar10 = (ulong)uVar8;
      *(undefined4 *)(param_1 + 5) = 1;
      uVar7 = (uint)(uVar6 >> (uVar10 & 0x3f));
      goto joined_r0x0021f4c8;
    }
    uVar10 = 0;
  }
  uVar8 = (uint)uVar10;
  uVar7 = (uint)(uVar6 >> (uVar10 & 0x3f));
joined_r0x0021f4c8:
  if (uVar3 < uVar7) {
    uVar8 = (uint)uVar10;
    iVar5 = (uint)param_1[1] - uVar3;
    *param_1 = uVar6 - (uVar4 + 1 << (uVar10 & 0x3f));
  }
  else {
    iVar5 = uVar3 + 1;
  }
  uVar1 = (uint)LZCOUNT(iVar5) ^ 0x18;
  *(int *)(param_1 + 1) = (iVar5 << (ulong)(uVar1 & 0x1f)) + -1;
  *(uint *)((long)param_1 + 0xc) = uVar8 - uVar1;
  iVar5 = -(int)puVar2;
  if (uVar7 <= uVar3) {
    iVar5 = (int)puVar2;
  }
  return iVar5;
}



/* Entry: 0021f558; end: 0021f7b3;  */

void FUN_0021f558(ulong *param_1,byte *param_2,ulong param_3)

{
  byte bVar1;
  ushort uVar2;
  uint3 uVar3;
  uint uVar4;
  uint5 uVar5;
  uint6 uVar6;
  uint7 uVar7;
  ulong uVar8;
  
  param_1[2] = param_3;
  *param_1 = 0;
  param_1[4] = 0;
  if (param_3 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = (ulong)*param_2;
    if (param_3 != 1) {
      uVar2 = CONCAT11(param_2[1],*param_2);
      uVar8 = (ulong)uVar2;
      if (param_3 != 2) {
        uVar3 = CONCAT12(param_2[2],uVar2);
        uVar8 = (ulong)uVar3;
        if (param_3 != 3) {
          uVar4 = CONCAT13(param_2[3],uVar3);
          uVar8 = (ulong)uVar4;
          if (param_3 != 4) {
            uVar5 = CONCAT14(param_2[4],uVar4);
            uVar8 = (ulong)uVar5;
            if (param_3 != 5) {
              uVar6 = CONCAT15(param_2[5],uVar5);
              uVar8 = (ulong)uVar6;
              if (param_3 != 6) {
                uVar7 = CONCAT16(param_2[6],uVar6);
                uVar8 = (ulong)uVar7;
                if (param_3 != 7) {
                  bVar1 = param_2[7];
                  if (7 < param_3) {
                    param_3 = 8;
                  }
                  param_1[3] = param_3;
                  *param_1 = CONCAT17(bVar1,uVar7);
                  param_1[1] = (ulong)param_2;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  if (7 < param_3) {
    param_3 = 8;
  }
  param_1[3] = param_3;
  *param_1 = uVar8;
  param_1[1] = (ulong)param_2;
  return;
}



/* Entry: 0021f7b4; end: 0021f82f;  */

void FUN_0021f7b4(long *param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = (long)(1 << (ulong)(param_2 & 0x1f));
  func_0x0024b500(lVar1,4);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    *(uint *)(param_1 + 1) = 0x20 - param_2;
    *(uint *)((long)param_1 + 0xc) = param_2;
  }
  return;
}



/* Entry: 0021f830; end: 0021f867;  */

void FUN_0021f830(undefined8 *param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0077a858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_0099a3f8)
            (*param_2,*param_1,4L << ((ulong)*(uint *)((long)param_2 + 0xc) & 0x3f));
  return;
}



/* Entry: 0021f868; end: 0021f953;  */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

ushort * FUN_0021f868(ushort *param_1,uint param_2,int *param_3,uint param_4,ushort *param_5)

{
  bool bVar1;
  long lVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  ushort *puVar6;
  uint uVar7;
  int *piVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  ushort *puVar13;
  int iVar14;
  ulong uVar15;
  uint uVar16;
  long lVar17;
  int iVar18;
  ulong uVar19;
  ulong uVar20;
  int iVar21;
  long lVar22;
  long lVar23;
  uint uVar24;
  ushort *puVar25;
  int iVar26;
  ushort *puVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint *puVar31;
  ushort *puVar32;
  long lVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  int aiStack_540 [4];
  int iStack_530;
  int iStack_52c;
  int iStack_528;
  int iStack_524;
  int iStack_520;
  int iStack_51c;
  int iStack_518;
  int iStack_514;
  int iStack_510;
  int iStack_50c;
  int iStack_508;
  int iStack_504;
  uint auStack_500 [18];
  long lStack_4b8;
  ushort auStack_448 [512];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar10 = param_4;
  if ((int)param_4 < 0x201) {
    param_5 = auStack_448;
    uVar7 = param_2;
    FUN_0021f954();
    puVar6 = param_1;
    piVar8 = param_3;
LAB_0021f920:
    param_3 = piVar8;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
      return puVar6;
    }
  }
  else {
    puVar6 = (ushort *)(ulong)param_4;
    uVar7 = 2;
    piVar8 = param_3;
    func_0x0024b4dc();
    if (puVar6 == (ushort *)0x0) goto LAB_0021f920;
    param_5 = puVar6;
    uVar10 = param_4;
    uVar7 = param_2;
    FUN_0021f954();
    func_0x0024b520();
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
      return param_1;
    }
  }
  ___stack_chk_fail();
  lStack_4b8 = *(long *)PTR____stack_chk_guard_00999f88;
  auStack_500[10] = 0;
  auStack_500[0xb] = 0;
  auStack_500[8] = 0;
  auStack_500[9] = 0;
  auStack_500[0xe] = 0;
  auStack_500[0xf] = 0;
  auStack_500[0xc] = 0;
  auStack_500[0xd] = 0;
  auStack_500[2] = 0;
  auStack_500[3] = 0;
  auStack_500[0] = 0;
  auStack_500[1] = 0;
  auStack_500[6] = 0;
  auStack_500[7] = 0;
  auStack_500[4] = 0;
  auStack_500[5] = 0;
  if ((int)uVar10 < 1) {
    if (uVar10 != 0) goto LAB_0021f9e0;
  }
  else {
    uVar12 = (ulong)uVar10;
    piVar8 = param_3;
    do {
      iVar14 = *piVar8;
      if (0xf < iVar14) goto LAB_0021faf0;
      auStack_500[iVar14] = auStack_500[iVar14] + 1;
      uVar12 = uVar12 - 1;
      piVar8 = piVar8 + 1;
    } while (uVar12 != 0);
    if (auStack_500[0] != uVar10) {
LAB_0021f9e0:
      aiStack_540[1] = 0;
      if ((int)auStack_500[1] < 3) {
        aiStack_540[2] = auStack_500[1];
        if ((int)auStack_500[2] < 5) {
          aiStack_540[3] = auStack_500[1] + auStack_500[2];
          if ((int)auStack_500[3] < 9) {
            iStack_530 = auStack_500[1] + auStack_500[2] + auStack_500[3];
            if ((int)auStack_500[4] < 0x11) {
              iStack_52c = iStack_530 + auStack_500[4];
              if ((int)auStack_500[5] < 0x21) {
                iStack_528 = iStack_52c + auStack_500[5];
                if ((int)auStack_500[6] < 0x41) {
                  iStack_524 = iStack_528 + auStack_500[6];
                  if ((int)auStack_500[7] < 0x81) {
                    iStack_520 = iStack_524 + auStack_500[7];
                    if ((int)auStack_500[8] < 0x101) {
                      iStack_51c = iStack_520 + auStack_500[8];
                      if ((int)auStack_500[9] < 0x201) {
                        iStack_518 = iStack_51c + auStack_500[9];
                        if ((int)auStack_500[10] < 0x401) {
                          iStack_514 = iStack_518 + auStack_500[10];
                          if ((int)auStack_500[0xb] < 0x801) {
                            iStack_510 = iStack_514 + auStack_500[0xb];
                            if ((int)auStack_500[0xc] < 0x1001) {
                              iStack_50c = iStack_510 + auStack_500[0xc];
                              if ((int)auStack_500[0xd] < 0x2001) {
                                iStack_508 = iStack_50c + auStack_500[0xd];
                                if ((int)auStack_500[0xe] < 0x4001) {
                                  uVar11 = 1 << (ulong)(uVar7 & 0x1f);
                                  puVar13 = (ushort *)(ulong)uVar11;
                                  iStack_504 = iStack_508 + auStack_500[0xe];
                                  if (0 < (int)uVar10) {
                                    uVar12 = 0;
                                    do {
                                      uVar24 = param_3[uVar12];
                                      if (0 < (int)uVar24) {
                                        iVar14 = aiStack_540[uVar24];
                                        aiStack_540[uVar24] = iVar14 + 1;
                                        param_5[iVar14] = (ushort)uVar12;
                                      }
                                      uVar12 = uVar12 + 1;
                                    } while (uVar10 != uVar12);
                                  }
                                  if (iStack_504 == 1) {
                                    uVar3 = *param_5;
                                    uVar20 = (ulong)(int)uVar11;
                                    uVar12 = uVar20;
                                    if ((long)uVar20 < 2) {
                                      uVar12 = 1;
                                    }
                                    uVar15 = uVar20;
                                    if (7 < (int)uVar11) {
                                      uVar19 = uVar12 & 0x7ffffff8;
                                      uVar15 = uVar20 - uVar19;
                                      uVar34 = (undefined1)uVar3;
                                      uVar35 = (undefined1)(uVar3 >> 8);
                                      puVar25 = puVar6 + uVar20 * 2 + -8;
                                      uVar20 = uVar19;
                                      do {
                                        *(ulong *)(puVar25 + -4) =
                                             CONCAT17(uVar35,CONCAT16(uVar34,(uint6)uVar3 << 0x10));
                                        *(ulong *)(puVar25 + -8) =
                                             CONCAT17(uVar35,CONCAT16(uVar34,(uint6)uVar3 << 0x10));
                                        *(ulong *)(puVar25 + 4) =
                                             CONCAT17(uVar35,CONCAT16(uVar34,(uint6)uVar3 << 0x10));
                                        *(ulong *)puVar25 =
                                             CONCAT17(uVar35,CONCAT16(uVar34,(uint6)uVar3 << 0x10));
                                        puVar25 = puVar25 + -0x10;
                                        uVar20 = uVar20 - 8;
                                      } while (uVar20 != 0);
                                      if (uVar12 == uVar19) goto LAB_0021faf4;
                                    }
                                    lVar17 = uVar15 + 1;
                                    puVar25 = puVar6 + uVar15 * 2;
                                    do {
                                      puVar25 = puVar25 + -2;
                                      *(uint *)puVar25 = (uint)uVar3 << 0x10;
                                      lVar17 = lVar17 + -1;
                                    } while (1 < lVar17);
                                    goto LAB_0021faf4;
                                  }
                                  if ((int)uVar7 < 1) {
                                    lVar17 = 0;
                                    uVar12 = 0;
                                    iVar18 = 1;
                                    iVar14 = 1;
LAB_0021fce8:
                                    uVar24 = uVar11 - 1;
                                    lVar22 = (long)(int)uVar7 + 2;
                                    puVar9 = auStack_500 + (long)(int)uVar7 + 1;
                                    iVar21 = 2;
                                    uVar30 = 0xffffffff;
                                    puVar25 = puVar6;
                                    lVar23 = (long)(int)uVar7;
                                    puVar27 = puVar13;
                                    uVar10 = uVar7;
                                    do {
                                      uVar10 = uVar10 + 1;
                                      lVar2 = lVar23 + 1;
                                      iVar5 = iVar18 * 2;
                                      iVar18 = iVar5 - auStack_500[lVar2];
                                      if (iVar18 < 0) goto LAB_0021faf0;
                                      if (0 < (int)auStack_500[lVar2]) {
                                        uVar11 = (int)lVar2 - uVar7;
                                        uVar4 = 1 << (ulong)(uVar11 & 0x1f);
                                        uVar11 = uVar11 & 0xff;
                                        lVar17 = (long)(int)lVar17;
                                        if (lVar23 == 0xe) {
                                          do {
                                            uVar16 = (uint)uVar12;
                                            uVar29 = uVar16 & uVar24;
                                            if (uVar29 != uVar30) {
                                              puVar25 = puVar25 + (long)(int)puVar27 * 2;
                                              puVar13 = (ushort *)(ulong)(uVar4 + (int)puVar13);
                                              *(undefined1 *)(puVar6 + (ulong)uVar29 * 2) = 0xf;
                                              (puVar6 + (ulong)uVar29 * 2)[1] =
                                                   (short)((uint)((int)puVar25 - (int)puVar6) >> 2)
                                                   - (short)uVar29;
                                              puVar27 = (ushort *)(ulong)uVar4;
                                              uVar30 = uVar29;
                                            }
                                            uVar3 = param_5[lVar17];
                                            puVar32 = puVar27;
                                            do {
                                              iVar26 = (int)puVar32;
                                              uVar29 = iVar26 - iVar21;
                                              puVar32 = (ushort *)(ulong)uVar29;
                                              *(uint *)(puVar25 +
                                                       (ulong)(uVar16 >> (ulong)(uVar7 & 0x1f)) * 2
                                                       + (long)(iVar26 - iVar21) * 2) =
                                                   uVar11 | (uint)uVar3 << 0x10;
                                            } while (0 < (int)uVar29);
                                            uVar29 = 0x4000;
                                            do {
                                              uVar28 = uVar29;
                                              uVar29 = uVar28 >> 1;
                                            } while ((uVar28 & uVar16) != 0);
                                            lVar17 = lVar17 + 1;
                                            uVar12 = (ulong)((uVar28 - 1 & uVar16) + uVar28);
                                            uVar29 = auStack_500[0xf];
                                            iVar26 = auStack_500[0xf] + -1;
                    /* WARNING: Ignoring partial resolution of indirect */
                                            auStack_500[0xf] = iVar26;
                                          } while (iVar26 != 0 && 0 < (int)uVar29);
                                        }
                                        else {
                                          do {
                                            uVar16 = (uint)uVar12;
                                            uVar29 = uVar16 & uVar24;
                                            if (uVar29 != uVar30) {
                                              puVar25 = puVar25 + (long)(int)puVar27 * 2;
                                              puVar27 = (ushort *)(ulong)uVar4;
                                              puVar31 = puVar9;
                                              lVar33 = lVar22;
                                              uVar30 = uVar10;
                                              do {
                                                iVar26 = (int)puVar27 - *puVar31;
                                                if (iVar26 < 1) goto LAB_0021fe70;
                                                puVar27 = (ushort *)(ulong)(uint)(iVar26 * 2);
                                                uVar30 = uVar30 + 1;
                                                iVar26 = (int)lVar33;
                                                puVar31 = puVar31 + 1;
                                                lVar33 = lVar33 + 1;
                                              } while (iVar26 != 0xf);
                                              uVar30 = 0xf;
LAB_0021fe70:
                                              uVar28 = 1 << (ulong)(uVar30 - uVar7 & 0x1f);
                                              puVar27 = (ushort *)(ulong)uVar28;
                                              puVar13 = (ushort *)(ulong)(uVar28 + (int)puVar13);
                                              *(char *)(puVar6 + (ulong)uVar29 * 2) = (char)uVar30;
                                              (puVar6 + (ulong)uVar29 * 2)[1] =
                                                   (short)((uint)((int)puVar25 - (int)puVar6) >> 2)
                                                   - (short)uVar29;
                                              uVar30 = uVar29;
                                            }
                                            uVar3 = param_5[lVar17];
                                            puVar32 = puVar27;
                                            do {
                                              iVar26 = (int)puVar32;
                                              uVar29 = iVar26 - iVar21;
                                              puVar32 = (ushort *)(ulong)uVar29;
                                              *(uint *)(puVar25 +
                                                       (ulong)(uVar16 >> (ulong)(uVar7 & 0x1f)) * 2
                                                       + (long)(iVar26 - iVar21) * 2) =
                                                   uVar11 | (uint)uVar3 << 0x10;
                                              uVar28 = 1 << (ulong)((uint)lVar23 & 0x1f);
                                            } while (0 < (int)uVar29);
                                            do {
                                              uVar29 = uVar28;
                                              uVar28 = uVar29 >> 1;
                                            } while ((uVar29 & uVar16) != 0);
                                            lVar17 = lVar17 + 1;
                                            uVar12 = (ulong)((uVar29 - 1 & uVar16) + uVar29);
                                            uVar29 = auStack_500[lVar2];
                                            uVar16 = uVar29 - 1;
                                            auStack_500[lVar2] = uVar16;
                                          } while (uVar16 != 0 && 0 < (int)uVar29);
                                        }
                                      }
                                      uVar11 = (uint)puVar13;
                                      iVar14 = iVar5 + iVar14;
                                      iVar21 = iVar21 << 1;
                                      lVar22 = lVar22 + 1;
                                      puVar9 = puVar9 + 1;
                                      lVar23 = lVar2;
                                    } while ((int)lVar2 != 0xf);
                                  }
                                  else {
                                    lVar17 = 0;
                                    uVar12 = 0;
                                    iVar21 = 2;
                                    uVar20 = 1;
                                    iVar18 = 1;
                                    iVar14 = 1;
                                    do {
                                      iVar5 = iVar18 * 2;
                                      uVar10 = auStack_500[uVar20];
                                      iVar18 = iVar5 - uVar10;
                                      if (iVar18 < 0) goto LAB_0021faf0;
                                      if (0 < (int)uVar10) {
                                        lVar17 = (long)(int)lVar17;
                                        do {
                                          uVar3 = param_5[lVar17];
                                          puVar25 = puVar13;
                                          do {
                                            iVar26 = (int)puVar25;
                                            uVar24 = iVar26 - iVar21;
                                            puVar25 = (ushort *)(ulong)uVar24;
                                            *(uint *)(puVar6 + uVar12 * 2 +
                                                               (long)(iVar26 - iVar21) * 2) =
                                                 (uint)uVar20 & 0xff | (uint)uVar3 << 0x10;
                                            uVar30 = 1 << (ulong)((uint)uVar20 - 1 & 0x1f);
                                          } while (0 < (int)uVar24);
                                          do {
                                            uVar24 = uVar30;
                                            uVar30 = uVar24 >> 1;
                                          } while ((uVar24 & (uint)uVar12) != 0);
                                          lVar17 = lVar17 + 1;
                                          uVar12 = (ulong)((uVar24 - 1 & (uint)uVar12) + uVar24);
                                          uVar24 = uVar10 - 1;
                                          bVar1 = 0 < (int)uVar10;
                                          uVar10 = uVar24;
                                        } while (uVar24 != 0 && bVar1);
                                        auStack_500[uVar20] = 0;
                                      }
                                      iVar14 = iVar5 + iVar14;
                                      uVar20 = uVar20 + 1;
                                      iVar21 = iVar21 << 1;
                                    } while (uVar20 != uVar7 + 1);
                                    if ((int)uVar7 < 0xf) goto LAB_0021fce8;
                                  }
                                  if (iVar14 != iStack_504 * 2 + -1) {
                                    uVar11 = 0;
                                  }
                                  puVar13 = (ushort *)(ulong)uVar11;
                                  goto LAB_0021faf4;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0021faf0:
  puVar13 = (ushort *)0x0;
LAB_0021faf4:
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_4b8) {
    ___stack_chk_fail();
    puVar13 = *(ushort **)(puVar6 + 0x5d8);
    func_0x0024b520(puVar13);
    puVar6[0x5dc] = 0;
    puVar6[0x5dd] = 0;
    puVar6[0x5de] = 0;
    puVar6[0x5df] = 0;
    puVar6[0x5d8] = 0;
    puVar6[0x5d9] = 0;
    puVar6[0x5da] = 0;
    puVar6[0x5db] = 0;
    puVar25 = *(ushort **)(puVar6 + 0x5c8);
    if (puVar25 != (ushort *)0x0) {
      FUN_00228204(*(undefined8 *)(puVar25 + 0xc));
      puVar25[0xc] = 0;
      puVar25[0xd] = 0;
      puVar25[0xe] = 0;
      puVar25[0xf] = 0;
      func_0x0024b520(puVar25);
      puVar13 = puVar25;
    }
    puVar6[0x5c8] = 0;
    puVar6[0x5c9] = 0;
    puVar6[0x5ca] = 0;
    puVar6[0x5cb] = 0;
    return puVar13;
  }
  return puVar13;
}



/* Entry: 0021f954; end: 0021ff13;  */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulong FUN_0021f954(long param_1,uint param_2,int *param_3,uint param_4,ushort *param_5)

{
  bool bVar1;
  undefined1 *puVar2;
  long lVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  ulong uVar15;
  uint uVar16;
  long lVar17;
  int iVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 *puVar21;
  int iVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint *puVar30;
  long lVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  int aiStack_f0 [4];
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  uint auStack_b0 [18];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  auStack_b0[10] = 0;
  auStack_b0[0xb] = 0;
  auStack_b0[8] = 0;
  auStack_b0[9] = 0;
  auStack_b0[0xe] = 0;
  auStack_b0[0xf] = 0;
  auStack_b0[0xc] = 0;
  auStack_b0[0xd] = 0;
  auStack_b0[2] = 0;
  auStack_b0[3] = 0;
  auStack_b0[0] = 0;
  auStack_b0[1] = 0;
  auStack_b0[6] = 0;
  auStack_b0[7] = 0;
  auStack_b0[4] = 0;
  auStack_b0[5] = 0;
  if ((int)param_4 < 1) {
    if (param_4 != 0) goto LAB_0021f9e0;
  }
  else {
    uVar11 = (ulong)param_4;
    piVar14 = param_3;
    do {
      iVar13 = *piVar14;
      if (0xf < iVar13) goto LAB_0021faf0;
      auStack_b0[iVar13] = auStack_b0[iVar13] + 1;
      uVar11 = uVar11 - 1;
      piVar14 = piVar14 + 1;
    } while (uVar11 != 0);
    if (auStack_b0[0] != param_4) {
LAB_0021f9e0:
      aiStack_f0[1] = 0;
      if ((int)auStack_b0[1] < 3) {
        aiStack_f0[2] = auStack_b0[1];
        if ((int)auStack_b0[2] < 5) {
          aiStack_f0[3] = auStack_b0[1] + auStack_b0[2];
          if ((int)auStack_b0[3] < 9) {
            iStack_e0 = auStack_b0[1] + auStack_b0[2] + auStack_b0[3];
            if ((int)auStack_b0[4] < 0x11) {
              iStack_dc = iStack_e0 + auStack_b0[4];
              if ((int)auStack_b0[5] < 0x21) {
                iStack_d8 = iStack_dc + auStack_b0[5];
                if ((int)auStack_b0[6] < 0x41) {
                  iStack_d4 = iStack_d8 + auStack_b0[6];
                  if ((int)auStack_b0[7] < 0x81) {
                    iStack_d0 = iStack_d4 + auStack_b0[7];
                    if ((int)auStack_b0[8] < 0x101) {
                      iStack_cc = iStack_d0 + auStack_b0[8];
                      if ((int)auStack_b0[9] < 0x201) {
                        iStack_c8 = iStack_cc + auStack_b0[9];
                        if ((int)auStack_b0[10] < 0x401) {
                          iStack_c4 = iStack_c8 + auStack_b0[10];
                          if ((int)auStack_b0[0xb] < 0x801) {
                            iStack_c0 = iStack_c4 + auStack_b0[0xb];
                            if ((int)auStack_b0[0xc] < 0x1001) {
                              iStack_bc = iStack_c0 + auStack_b0[0xc];
                              if ((int)auStack_b0[0xd] < 0x2001) {
                                iStack_b8 = iStack_bc + auStack_b0[0xd];
                                if ((int)auStack_b0[0xe] < 0x4001) {
                                  uVar10 = 1 << (ulong)(param_2 & 0x1f);
                                  uVar11 = (ulong)uVar10;
                                  iStack_b4 = iStack_b8 + auStack_b0[0xe];
                                  if (0 < (int)param_4) {
                                    uVar25 = 0;
                                    do {
                                      uVar8 = param_3[uVar25];
                                      if (0 < (int)uVar8) {
                                        iVar13 = aiStack_f0[uVar8];
                                        aiStack_f0[uVar8] = iVar13 + 1;
                                        param_5[iVar13] = (ushort)uVar25;
                                      }
                                      uVar25 = uVar25 + 1;
                                    } while (param_4 != uVar25);
                                  }
                                  if (iStack_b4 == 1) {
                                    uVar4 = *param_5;
                                    uVar20 = (ulong)(int)uVar10;
                                    uVar25 = uVar20;
                                    if ((long)uVar20 < 2) {
                                      uVar25 = 1;
                                    }
                                    uVar15 = uVar20;
                                    if (7 < (int)uVar10) {
                                      uVar19 = uVar25 & 0x7ffffff8;
                                      uVar15 = uVar20 - uVar19;
                                      uVar32 = (undefined1)uVar4;
                                      uVar33 = (undefined1)(uVar4 >> 8);
                                      puVar21 = (undefined8 *)(param_1 + uVar20 * 4 + -0x10);
                                      uVar20 = uVar19;
                                      do {
                                        puVar21[-1] = CONCAT17(uVar33,CONCAT16(uVar32,(uint6)uVar4
                                                                                      << 0x10));
                                        puVar21[-2] = CONCAT17(uVar33,CONCAT16(uVar32,(uint6)uVar4
                                                                                      << 0x10));
                                        puVar21[1] = CONCAT17(uVar33,CONCAT16(uVar32,(uint6)uVar4 <<
                                                                                     0x10));
                                        *puVar21 = CONCAT17(uVar33,CONCAT16(uVar32,(uint6)uVar4 <<
                                                                                   0x10));
                                        puVar21 = puVar21 + -4;
                                        uVar20 = uVar20 - 8;
                                      } while (uVar20 != 0);
                                      if (uVar25 == uVar19) goto LAB_0021faf4;
                                    }
                                    lVar17 = uVar15 + 1;
                                    piVar14 = (int *)(param_1 + uVar15 * 4);
                                    do {
                                      piVar14 = piVar14 + -1;
                                      *piVar14 = (uint)uVar4 << 0x10;
                                      lVar17 = lVar17 + -1;
                                    } while (1 < lVar17);
                                    goto LAB_0021faf4;
                                  }
                                  if ((int)param_2 < 1) {
                                    lVar17 = 0;
                                    uVar25 = 0;
                                    iVar18 = 1;
                                    iVar13 = 1;
LAB_0021fce8:
                                    uVar12 = uVar10 - 1;
                                    lVar23 = (long)(int)param_2 + 2;
                                    puVar7 = auStack_b0 + (long)(int)param_2 + 1;
                                    iVar22 = 2;
                                    uVar29 = 0xffffffff;
                                    lVar9 = param_1;
                                    lVar24 = (long)(int)param_2;
                                    uVar20 = uVar11;
                                    uVar8 = param_2;
                                    do {
                                      uVar8 = uVar8 + 1;
                                      lVar3 = lVar24 + 1;
                                      iVar6 = iVar18 * 2;
                                      iVar18 = iVar6 - auStack_b0[lVar3];
                                      if (iVar18 < 0) goto LAB_0021faf0;
                                      if (0 < (int)auStack_b0[lVar3]) {
                                        uVar10 = (int)lVar3 - param_2;
                                        uVar5 = 1 << (ulong)(uVar10 & 0x1f);
                                        uVar10 = uVar10 & 0xff;
                                        lVar17 = (long)(int)lVar17;
                                        if (lVar24 == 0xe) {
                                          do {
                                            uVar16 = (uint)uVar25;
                                            uVar28 = uVar16 & uVar12;
                                            if (uVar28 != uVar29) {
                                              lVar9 = lVar9 + (long)(int)uVar20 * 4;
                                              uVar11 = (ulong)(uVar5 + (int)uVar11);
                                              puVar2 = (undefined1 *)(param_1 + (ulong)uVar28 * 4);
                                              *puVar2 = 0xf;
                                              *(short *)(puVar2 + 2) =
                                                   (short)((uint)((int)lVar9 - (int)param_1) >> 2) -
                                                   (short)uVar28;
                                              uVar20 = (ulong)uVar5;
                                              uVar29 = uVar28;
                                            }
                                            uVar4 = param_5[lVar17];
                                            uVar25 = uVar20;
                                            do {
                                              iVar26 = (int)uVar25;
                                              uVar28 = iVar26 - iVar22;
                                              uVar25 = (ulong)uVar28;
                                              *(uint *)(lVar9 + (ulong)(uVar16 >>
                                                                       (ulong)(param_2 & 0x1f)) * 4
                                                       + (long)(iVar26 - iVar22) * 4) =
                                                   uVar10 | (uint)uVar4 << 0x10;
                                            } while (0 < (int)uVar28);
                                            uVar28 = 0x4000;
                                            do {
                                              uVar27 = uVar28;
                                              uVar28 = uVar27 >> 1;
                                            } while ((uVar27 & uVar16) != 0);
                                            lVar17 = lVar17 + 1;
                                            uVar25 = (ulong)((uVar27 - 1 & uVar16) + uVar27);
                                            uVar28 = auStack_b0[0xf];
                                            iVar26 = auStack_b0[0xf] + -1;
                    /* WARNING: Ignoring partial resolution of indirect */
                                            auStack_b0[0xf] = iVar26;
                                          } while (iVar26 != 0 && 0 < (int)uVar28);
                                        }
                                        else {
                                          do {
                                            uVar16 = (uint)uVar25;
                                            uVar28 = uVar16 & uVar12;
                                            if (uVar28 != uVar29) {
                                              lVar9 = lVar9 + (long)(int)uVar20 * 4;
                                              uVar25 = (ulong)uVar5;
                                              puVar30 = puVar7;
                                              lVar31 = lVar23;
                                              uVar29 = uVar8;
                                              do {
                                                iVar26 = (int)uVar25 - *puVar30;
                                                if (iVar26 < 1) goto LAB_0021fe70;
                                                uVar25 = (ulong)(uint)(iVar26 * 2);
                                                uVar29 = uVar29 + 1;
                                                iVar26 = (int)lVar31;
                                                puVar30 = puVar30 + 1;
                                                lVar31 = lVar31 + 1;
                                              } while (iVar26 != 0xf);
                                              uVar29 = 0xf;
LAB_0021fe70:
                                              uVar27 = 1 << (ulong)(uVar29 - param_2 & 0x1f);
                                              uVar20 = (ulong)uVar27;
                                              uVar11 = (ulong)(uVar27 + (int)uVar11);
                                              puVar2 = (undefined1 *)(param_1 + (ulong)uVar28 * 4);
                                              *puVar2 = (char)uVar29;
                                              *(short *)(puVar2 + 2) =
                                                   (short)((uint)((int)lVar9 - (int)param_1) >> 2) -
                                                   (short)uVar28;
                                              uVar29 = uVar28;
                                            }
                                            uVar4 = param_5[lVar17];
                                            uVar25 = uVar20;
                                            do {
                                              iVar26 = (int)uVar25;
                                              uVar28 = iVar26 - iVar22;
                                              uVar25 = (ulong)uVar28;
                                              *(uint *)(lVar9 + (ulong)(uVar16 >>
                                                                       (ulong)(param_2 & 0x1f)) * 4
                                                       + (long)(iVar26 - iVar22) * 4) =
                                                   uVar10 | (uint)uVar4 << 0x10;
                                              uVar27 = 1 << (ulong)((uint)lVar24 & 0x1f);
                                            } while (0 < (int)uVar28);
                                            do {
                                              uVar28 = uVar27;
                                              uVar27 = uVar28 >> 1;
                                            } while ((uVar28 & uVar16) != 0);
                                            lVar17 = lVar17 + 1;
                                            uVar25 = (ulong)((uVar28 - 1 & uVar16) + uVar28);
                                            uVar28 = auStack_b0[lVar3];
                                            uVar16 = uVar28 - 1;
                                            auStack_b0[lVar3] = uVar16;
                                          } while (uVar16 != 0 && 0 < (int)uVar28);
                                        }
                                      }
                                      uVar10 = (uint)uVar11;
                                      iVar13 = iVar6 + iVar13;
                                      iVar22 = iVar22 << 1;
                                      lVar23 = lVar23 + 1;
                                      puVar7 = puVar7 + 1;
                                      lVar24 = lVar3;
                                    } while ((int)lVar3 != 0xf);
                                  }
                                  else {
                                    lVar17 = 0;
                                    uVar25 = 0;
                                    iVar22 = 2;
                                    uVar20 = 1;
                                    iVar18 = 1;
                                    iVar13 = 1;
                                    do {
                                      iVar6 = iVar18 * 2;
                                      uVar8 = auStack_b0[uVar20];
                                      iVar18 = iVar6 - uVar8;
                                      if (iVar18 < 0) goto LAB_0021faf0;
                                      if (0 < (int)uVar8) {
                                        lVar17 = (long)(int)lVar17;
                                        do {
                                          uVar4 = param_5[lVar17];
                                          uVar15 = uVar11;
                                          do {
                                            iVar26 = (int)uVar15;
                                            uVar12 = iVar26 - iVar22;
                                            uVar15 = (ulong)uVar12;
                                            *(uint *)(param_1 + uVar25 * 4 +
                                                     (long)(iVar26 - iVar22) * 4) =
                                                 (uint)uVar20 & 0xff | (uint)uVar4 << 0x10;
                                            uVar19 = (ulong)(uint)(1 << (ulong)((uint)uVar20 - 1 &
                                                                               0x1f));
                                          } while (0 < (int)uVar12);
                                          do {
                                            uVar12 = (uint)uVar19;
                                            uVar19 = uVar19 >> 1;
                                          } while ((uVar12 & (uint)uVar25) != 0);
                                          lVar17 = lVar17 + 1;
                                          uVar25 = (ulong)((uVar12 - 1 & (uint)uVar25) + uVar12);
                                          uVar12 = uVar8 - 1;
                                          bVar1 = 0 < (int)uVar8;
                                          uVar8 = uVar12;
                                        } while (uVar12 != 0 && bVar1);
                                        auStack_b0[uVar20] = 0;
                                      }
                                      iVar13 = iVar6 + iVar13;
                                      uVar20 = uVar20 + 1;
                                      iVar22 = iVar22 << 1;
                                    } while (uVar20 != param_2 + 1);
                                    if ((int)param_2 < 0xf) goto LAB_0021fce8;
                                  }
                                  if (iVar13 != iStack_b4 * 2 + -1) {
                                    uVar10 = 0;
                                  }
                                  uVar11 = (ulong)uVar10;
                                  goto LAB_0021faf4;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0021faf0:
  uVar11 = 0;
LAB_0021faf4:
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_68) {
    ___stack_chk_fail();
    uVar11 = *(ulong *)(param_1 + 0xbb0);
    func_0x0024b520(uVar11);
    *(undefined8 *)(param_1 + 3000) = 0;
    *(undefined8 *)(param_1 + 0xbb0) = 0;
    uVar25 = *(ulong *)(param_1 + 0xb90);
    if (uVar25 != 0) {
      FUN_00228204(*(undefined8 *)(uVar25 + 0x18));
      *(undefined8 *)(uVar25 + 0x18) = 0;
      func_0x0024b520(uVar25);
      uVar11 = uVar25;
    }
    *(undefined8 *)(param_1 + 0xb90) = 0;
    return uVar11;
  }
  return uVar11;
}



/* Entry: 0021ff14; end: 0021ff5f;  */

void FUN_0021ff14(long param_1)

{
  long lVar1;
  
  func_0x0024b520(*(undefined8 *)(param_1 + 0xbb0));
  *(undefined8 *)(param_1 + 3000) = 0;
  *(undefined8 *)(param_1 + 0xbb0) = 0;
  lVar1 = *(long *)(param_1 + 0xb90);
  if (lVar1 != 0) {
    FUN_00228204(*(undefined8 *)(lVar1 + 0x18));
    *(undefined8 *)(lVar1 + 0x18) = 0;
    func_0x0024b520(lVar1);
  }
  *(undefined8 *)(param_1 + 0xb90) = 0;
  return;
}



/* Entry: 0021ff60; end: 002202df;  */

void FUN_0021ff60(long param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  byte *pbVar12;
  long lVar13;
  undefined8 uVar14;
  
  if (param_3 < 0) {
    return;
  }
  if (param_4 < 1) {
    return;
  }
  iVar1 = param_2[0x21];
  if (iVar1 < param_4 + param_3) {
    return;
  }
  iVar2 = *param_2;
  if (*(int *)(param_1 + 0xba8) != 0) {
    return;
  }
  piVar6 = *(int **)(param_1 + 0xb90);
  if (piVar6 == (int *)0x0) {
    lVar7 = 1;
    func_0x0024b500(1,0xd8);
    *(long *)(param_1 + 0xb90) = lVar7;
    if (lVar7 == 0) {
      return;
    }
    lVar7 = (long)param_2[0x21] * (long)*param_2;
    func_0x0024b4dc(lVar7,1);
    *(long *)(param_1 + 0xbb0) = lVar7;
    if (lVar7 == 0) goto LAB_00220268;
    *(long *)(param_1 + 3000) = lVar7;
    *(undefined8 *)(param_1 + 0xbc0) = 0;
    piVar6 = *(int **)(param_1 + 0xb90);
    pbVar12 = *(byte **)(param_1 + 0xb98);
    uVar8 = *(ulong *)(param_1 + 0xba0);
    FUN_0022d1c0();
    *(long *)(piVar6 + 0x32) = lVar7;
    *(undefined8 *)piVar6 = *(undefined8 *)param_2;
    if (uVar8 < 2) goto LAB_00220268;
    bVar3 = *pbVar12;
    piVar6[2] = bVar3 & 3;
    piVar6[3] = *pbVar12 >> 2 & 3;
    uVar4 = *pbVar12 >> 4 & 3;
    piVar6[4] = uVar4;
    if (((1 < (bVar3 & 3)) || (1 < uVar4)) || (0x3f < *pbVar12)) goto LAB_00220268;
    uVar8 = uVar8 - 1;
    FUN_00225c3c(piVar6 + 8,0x208);
    FUN_0022315c(0,piVar6 + 8);
    *(int **)(piVar6 + 0x16) = piVar6;
    *(undefined8 *)(piVar6 + 8) = *(undefined8 *)param_2;
    uVar14 = *(undefined8 *)(param_2 + 0x1d);
    *(undefined8 *)(piVar6 + 0x27) = *(undefined8 *)(param_2 + 0x1f);
    *(undefined8 *)(piVar6 + 0x25) = uVar14;
    piVar6[0x29] = param_2[0x21];
    if (piVar6[2] == 0) {
      uVar4 = (uint)((ulong)((long)piVar6[1] * (long)*piVar6) <= uVar8);
    }
    else {
      FUN_00228230(piVar6,pbVar12 + 1,uVar8);
      uVar4 = (uint)piVar6;
    }
    if (uVar4 == 0) goto LAB_00220268;
    piVar6 = *(int **)(param_1 + 0xb90);
    if (piVar6[4] == 1) {
      param_4 = iVar1 - param_3;
    }
    else {
      *(undefined4 *)(param_1 + 0xbc8) = 0;
    }
  }
  iVar1 = piVar6[0x29];
  if (piVar6[2] == 0) {
    lVar9 = (long)*piVar6;
    lVar5 = *(long *)(param_1 + 0xbc0);
    lVar7 = *(long *)(param_1 + 0xb98) + 1;
    lVar10 = (long)(*piVar6 * param_3);
    lVar13 = *(long *)(param_1 + 3000);
    if (piVar6[3] == 0) {
      iVar11 = param_4;
      if (0 < param_4) {
        do {
          _memcpy(lVar13 + lVar10,lVar7 + lVar10,lVar9);
          lVar10 = lVar10 + lVar9;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
        lVar5 = (lVar13 - lVar9) + lVar10;
      }
    }
    else if (0 < param_4) {
      lVar7 = lVar7 + lVar10;
      lVar10 = lVar13 + lVar10;
      iVar11 = param_4;
      do {
        (**(code **)((ulong)(uint)piVar6[3] * 8 + 0xb6d020))(lVar5,lVar7,lVar10,lVar9);
        lVar13 = lVar10 + lVar9;
        lVar7 = lVar7 + lVar9;
        iVar11 = iVar11 + -1;
        lVar5 = lVar10;
        lVar10 = lVar13;
      } while (iVar11 != 0);
      lVar5 = lVar13 - lVar9;
    }
    *(long *)(param_1 + 0xbc0) = lVar5;
    if (param_4 + param_3 < iVar1) goto LAB_0022001c;
LAB_002201f8:
    *(undefined4 *)(param_1 + 0xba8) = 1;
  }
  else {
    FUN_002290ec(piVar6,param_4 + param_3);
    if ((int)piVar6 == 0) goto LAB_00220268;
    if (iVar1 <= param_4 + param_3) goto LAB_002201f8;
LAB_0022001c:
    if (*(int *)(param_1 + 0xba8) == 0) {
      return;
    }
  }
  lVar7 = *(long *)(param_1 + 0xb90);
  if (lVar7 != 0) {
    FUN_00228204(*(undefined8 *)(lVar7 + 0x18));
    *(undefined8 *)(lVar7 + 0x18) = 0;
    func_0x0024b520(lVar7);
  }
  *(undefined8 *)(param_1 + 0xb90) = 0;
  if (*(int *)(param_1 + 0xbc8) < 1) {
    return;
  }
  lVar7 = *(long *)(param_1 + 3000) + (long)(param_2[0x20] * iVar2) + (long)param_2[0x1e];
  FUN_0024a400(lVar7,param_2[0x1f] - param_2[0x1e],param_2[0x21] - param_2[0x20],iVar2);
  if ((int)lVar7 != 0) {
    return;
  }
LAB_00220268:
  func_0x0024b520(*(undefined8 *)(param_1 + 0xbb0));
  *(undefined8 *)(param_1 + 3000) = 0;
  *(undefined8 *)(param_1 + 0xbb0) = 0;
  lVar7 = *(long *)(param_1 + 0xb90);
  if (lVar7 != 0) {
    FUN_00228204(*(undefined8 *)(lVar7 + 0x18));
    *(undefined8 *)(lVar7 + 0x18) = 0;
    func_0x0024b520(lVar7);
  }
  *(undefined8 *)(param_1 + 0xb90) = 0;
  return;
}



/* Entry: 002202e0; end: 0022037f;  */

undefined8 FUN_002202e0(uint *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == (uint *)0x0) {
    return 2;
  }
  if (*param_1 < 0xb) {
    *(long *)(param_1 + 4) =
         *(long *)(param_1 + 4) + ((long)(int)param_1[2] + -1) * (long)(int)param_1[6];
    param_1[6] = -param_1[6];
  }
  else {
    iVar3 = (int)((ulong)*(undefined8 *)(param_1 + 0xc) >> 0x20);
    iVar2 = (int)*(undefined8 *)(param_1 + 0xc);
    iVar1 = (int)((long)(int)param_1[2] + -1);
    *(long *)(param_1 + 4) = *(long *)(param_1 + 4) + (long)iVar1 * (long)iVar2;
    *(long *)(param_1 + 6) = *(long *)(param_1 + 6) + (long)iVar3 * (long)(iVar1 >> 1);
    *(ulong *)(param_1 + 0xc) = CONCAT44(-iVar3,-iVar2);
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + (long)(int)param_1[0xe] * (long)(iVar1 >> 1);
    param_1[0xe] = -param_1[0xe];
    if (*(long *)(param_1 + 10) != 0) {
      *(long *)(param_1 + 10) = *(long *)(param_1 + 10) + (long)(int)param_1[0xf] * (long)iVar1;
      param_1[0xf] = -param_1[0xf];
      return 0;
    }
  }
  return 0;
}



/* Entry: 00220380; end: 0022065b;  */

uint * FUN_00220380(ulong param_1,ulong param_2,long param_3,uint *param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  uint *puVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  uint uVar15;
  ushort uVar16;
  uint uStack_68;
  uint uStack_64;
  
  puVar10 = (uint *)((long)&MACH_HEADER.magic + 2);
  uVar6 = (uint)param_2;
  if ((int)uVar6 < 1) {
    return puVar10;
  }
  uVar5 = (uint)param_1;
  if ((int)uVar5 < 1) {
    return puVar10;
  }
  if (param_4 == (uint *)0x0) {
    return puVar10;
  }
  if (param_3 == 0) {
LAB_0022044c:
    uVar6 = (uint)param_1;
    uVar5 = (uint)param_2;
    param_4[1] = uVar6;
    param_4[2] = uVar5;
    puVar10 = (uint *)((long)&MACH_HEADER.magic + 2);
    if ((int)uVar6 < 1) {
      return puVar10;
    }
    if ((int)uVar5 < 1) {
      return puVar10;
    }
    uVar15 = *param_4;
    if (0xc < uVar15) {
      return puVar10;
    }
    if (((int)param_4[3] < 1) && (*(long *)(param_4 + 0x1c) == 0)) {
      if (((param_1 & 0xffffffff) * (ulong)(byte)(&UNK_007edcf0)[uVar15] & 0xffffffff00000000) != 0)
      goto LAB_00220564;
      uVar3 = uVar6 * (byte)(&UNK_007edcf0)[uVar15];
      lVar11 = (ulong)uVar3 * (param_2 & 0xffffffff);
      uVar2 = uVar6 + 1 >> 1;
      lVar8 = (param_1 & 0xffffffff) * (param_2 & 0xffffffff);
      if (uVar15 != 0xc) {
        lVar8 = 0;
        uVar6 = 0;
      }
      bVar4 = 10 < uVar15;
      lVar1 = 0;
      if (bVar4) {
        lVar1 = lVar8;
      }
      lVar8 = 0;
      if (bVar4) {
        lVar8 = (ulong)uVar2 * (ulong)(uVar5 + 1 >> 1);
      }
      uVar5 = 0;
      if (bVar4) {
        uVar5 = uVar6;
      }
      uVar6 = 0;
      if (bVar4) {
        uVar6 = uVar2;
      }
      lVar7 = lVar1 + lVar8 * 2 + lVar11;
      FUN_0024b4dc(lVar7,1);
      if (lVar7 == 0) {
        return (uint *)((long)&MACH_HEADER.magic + 1);
      }
      *(long *)(param_4 + 0x1c) = lVar7;
      *(long *)(param_4 + 4) = lVar7;
      if (uVar15 < 0xb) {
        param_4[6] = uVar3;
        *(long *)(param_4 + 8) = lVar11;
      }
      else {
        lVar7 = lVar7 + lVar11;
        param_4[0xc] = uVar3;
        param_4[0xd] = uVar6;
        *(long *)(param_4 + 0x10) = lVar11;
        *(long *)(param_4 + 0x12) = lVar8;
        *(long *)(param_4 + 6) = lVar7;
        *(long *)(param_4 + 8) = lVar7 + lVar8;
        param_4[0xe] = uVar6;
        *(long *)(param_4 + 0x14) = lVar8;
        if (uVar15 == 0xc) {
          *(long *)(param_4 + 10) = lVar7 + lVar8 * 2;
        }
        *(long *)(param_4 + 0x16) = lVar1;
        param_4[0xf] = uVar5;
      }
    }
    puVar10 = param_4;
    FUN_00220818();
    if ((param_3 != 0) && ((int)puVar10 == 0)) {
      if (*(int *)(param_3 + 0x30) != 0) {
        if (*param_4 < 0xb) {
          *(long *)(param_4 + 4) =
               *(long *)(param_4 + 4) + (long)(int)param_4[6] * ((long)(int)param_4[2] + -1);
          param_4[6] = -param_4[6];
          return (uint *)0x0;
        }
        iVar13 = (int)((ulong)*(undefined8 *)(param_4 + 0xc) >> 0x20);
        iVar12 = (int)*(undefined8 *)(param_4 + 0xc);
        iVar9 = (int)((long)(int)param_4[2] + -1);
        *(long *)(param_4 + 4) = *(long *)(param_4 + 4) + (long)iVar12 * (long)iVar9;
        *(long *)(param_4 + 6) = *(long *)(param_4 + 6) + (long)iVar13 * (long)(iVar9 >> 1);
        *(ulong *)(param_4 + 0xc) = CONCAT44(-iVar13,-iVar12);
        *(long *)(param_4 + 8) =
             *(long *)(param_4 + 8) + (long)(int)param_4[0xe] * (long)(iVar9 >> 1);
        param_4[0xe] = -param_4[0xe];
        if (*(long *)(param_4 + 10) != 0) {
          *(long *)(param_4 + 10) = *(long *)(param_4 + 10) + (long)(int)param_4[0xf] * (long)iVar9;
          param_4[0xf] = -param_4[0xf];
          return (uint *)0x0;
        }
      }
      puVar10 = (uint *)0x0;
    }
  }
  else {
    if (*(int *)(param_3 + 8) == 0) {
LAB_00220418:
      if (*(int *)(param_3 + 0x1c) != 0) {
        uStack_64 = *(uint *)(param_3 + 0x20);
        uStack_68 = *(uint *)(param_3 + 0x24);
        FUN_0024aefc(param_1,param_2,&uStack_64,&uStack_68);
        if ((int)param_1 == 0) goto LAB_00220564;
        param_2 = (ulong)uStack_68;
        param_1 = (ulong)uStack_64;
      }
      goto LAB_0022044c;
    }
    uVar14 = *(ulong *)(param_3 + 0x14);
    lVar8 = *(long *)(param_3 + 0xc);
    uVar15 = (uint)(uVar14 >> 0x20);
    uVar16 = NEON_umaxv(CONCAT26(-(ushort)((int)uVar15 < 1),
                                 CONCAT24(-(ushort)((int)uVar14 < 1),
                                          CONCAT22(-(ushort)(lVar8 < 0),
                                                   -(ushort)((int)(uint)lVar8 < 0)))),2);
    if ((uVar16 & 1) == 0) {
      param_1 = uVar14 & 0xffffffff;
      param_2 = (ulong)uVar15;
      if (((uint)lVar8 & 0x7ffffffe) + (int)uVar14 <= uVar5 &&
          ((uint)((ulong)lVar8 >> 0x20) & 0x7ffffffe) + uVar15 <= uVar6) goto LAB_00220418;
    }
LAB_00220564:
    puVar10 = (uint *)((long)&MACH_HEADER.magic + 2);
  }
  return puVar10;
}



/* Entry: 0022065c; end: 00220693;  */

undefined8 FUN_0022065c(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((param_1 != (undefined8 *)0x0) && ((param_2 & 0xffffff00) == 0x200)) {
    param_1[0xe] = 0;
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    uVar1 = 1;
    param_1[1] = 0;
    *param_1 = 0;
  }
  return uVar1;
}



/* Entry: 00220694; end: 002206d3;  */

void FUN_00220694(long param_1)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0xc) < 1) {
      func_0x0024b520(*(undefined8 *)(param_1 + 0x70));
    }
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  return;
}



/* Entry: 002206d4; end: 00220817;  */

undefined8 FUN_002206d4(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  
  uVar1 = param_1[1];
  uVar7 = param_1[2];
  *(uint *)(param_2 + 4) = uVar1;
  *(uint *)(param_2 + 8) = uVar7;
  lVar4 = param_2;
  FUN_00220818();
  if ((int)lVar4 != 0) {
    return 2;
  }
  uVar5 = *(undefined8 *)(param_1 + 4);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  if (*param_1 < 0xb) {
    uVar2 = param_1[6];
    uVar3 = *(undefined4 *)(param_2 + 0x18);
    uVar1 = uVar1 * (byte)(&UNK_007edcf0)[*param_1];
  }
  else {
    FUN_0024b524(uVar5,param_1[0xc],uVar6,*(undefined4 *)(param_2 + 0x30),uVar1,uVar7);
    FUN_0024b524(*(undefined8 *)(param_1 + 6),param_1[0xd],*(undefined8 *)(param_2 + 0x18),
                 *(undefined4 *)(param_2 + 0x34),(int)(param_1[1] + 1) / 2,(int)(param_1[2] + 1) / 2
                );
    FUN_0024b524(*(undefined8 *)(param_1 + 8),param_1[0xe],*(undefined8 *)(param_2 + 0x20),
                 *(undefined4 *)(param_2 + 0x38),(int)(param_1[1] + 1) / 2,(int)(param_1[2] + 1) / 2
                );
    uVar1 = *param_1;
    if (((0xc < uVar1) || ((1 << (ulong)(uVar1 & 0x1f) & 0x103aU) == 0)) &&
       (uVar1 - 0xb < 0xfffffffc)) {
      return 0;
    }
    uVar5 = *(undefined8 *)(param_1 + 10);
    uVar2 = param_1[0xf];
    uVar6 = *(undefined8 *)(param_2 + 0x28);
    uVar3 = *(undefined4 *)(param_2 + 0x3c);
    uVar1 = param_1[1];
    uVar7 = param_1[2];
  }
  FUN_0024b524(uVar5,uVar2,uVar6,uVar3,uVar1,uVar7);
  return 0;
}



/* Entry: 00220818; end: 002209ab;  */

undefined8 FUN_00220818(uint *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  
  uVar6 = *param_1;
  if (uVar6 < 0xd) {
    uVar4 = param_1[1];
    uVar5 = param_1[2];
    if (uVar6 < 0xb) {
      uVar12 = param_1[6];
      uVar7 = -uVar12;
      if (-1 < (int)uVar12) {
        uVar7 = uVar12;
      }
      if (((ulong)uVar7 * (long)(int)(uVar5 - 1) +
           (long)(int)uVar4 * (long)(int)(uint)(byte)(&UNK_007edcf0)[uVar6] <=
           *(ulong *)(param_1 + 8) && (int)(uVar4 * (byte)(&UNK_007edcf0)[uVar6]) <= (int)uVar7) &&
          *(long *)(param_1 + 4) != 0) {
        return 0;
      }
    }
    else {
      iVar2 = uVar4 + 1;
      iVar3 = iVar2 / 2;
      uVar12 = param_1[0xc];
      uVar7 = -uVar12;
      if (-1 < (int)uVar12) {
        uVar7 = uVar12;
      }
      lVar10 = (long)((int)(uVar5 + 1) / 2 + -1);
      lVar8 = (long)((ulong)(uint)(iVar2 - (iVar2 >> 0x1f)) << 0x20) >> 0x21;
      uVar12 = MP_INT_ABS((int)*(undefined8 *)(param_1 + 0xd));
      uVar13 = MP_INT_ABS((int)((ulong)*(undefined8 *)(param_1 + 0xd) >> 0x20));
      uVar11 = lVar8 + (ulong)uVar12 * lVar10;
      uVar9 = lVar8 + (ulong)uVar13 * lVar10;
      bVar1 = *(ulong *)(param_1 + 0x10) < (long)(int)uVar4 + (ulong)uVar7 * ((long)(int)uVar5 + -1)
      ;
      bVar1 = (((bVar1 || *(ulong *)(param_1 + 0x12) < uVar11) || *(ulong *)(param_1 + 0x14) < uVar9
               ) || (int)(uVar7 - uVar4) < 0) ==
              (((!bVar1 && uVar11 <= *(ulong *)(param_1 + 0x12)) &&
               uVar9 <= *(ulong *)(param_1 + 0x14)) && SBORROW4(uVar7,uVar4));
      if (uVar6 == 0xc) {
        uVar7 = param_1[0xf];
        uVar6 = -uVar7;
        if (-1 < (int)uVar7) {
          uVar6 = uVar7;
        }
        if ((*(long *)(param_1 + 8) != 0 &&
            (*(long *)(param_1 + 6) != 0 &&
            (*(long *)(param_1 + 4) != 0 &&
            (iVar3 <= (int)uVar13 && (iVar3 <= (int)uVar12 && bVar1))))) &&
            (((int)uVar4 <= (int)uVar6 &&
             (long)(int)uVar4 + (ulong)uVar6 * ((long)(int)uVar5 + -1) <= *(ulong *)(param_1 + 0x16)
             ) && *(long *)(param_1 + 10) != 0)) {
          return 0;
        }
      }
      else if (*(long *)(param_1 + 8) != 0 &&
               (*(long *)(param_1 + 6) != 0 &&
               (*(long *)(param_1 + 4) != 0 &&
               (iVar3 <= (int)uVar13 && (iVar3 <= (int)uVar12 && bVar1))))) {
        return 0;
      }
    }
  }
  return 2;
}



/* Entry: 002209ac; end: 00220b3b;  */

void FUN_002209ac(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    return;
  }
  uVar4 = *(uint *)(param_1 + 0x2c);
  if ((int)uVar4 < 0) goto LAB_00220b0c;
  if (uVar4 < 0x65) {
    if (uVar4 == 0) goto LAB_00220b0c;
    uVar2 = (uVar4 * 0xff >> 2 & 0x3fff) / 0x19;
    uVar4 = *(uint *)(param_2 + 0x43c);
  }
  else {
    uVar2 = 0xff;
    uVar4 = *(uint *)(param_2 + 0x43c);
  }
  if ((int)uVar4 < 0xc) {
    uVar3 = uVar2 * (byte)(&UNK_007edcfe)[uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)] >> 3;
    *(uint *)(param_2 + 0x440) = uVar3;
    uVar4 = *(uint *)(param_2 + 0x45c);
    if ((int)uVar4 < 0xc) goto LAB_00220a70;
LAB_002209f8:
    uVar3 = *(uint *)(param_2 + 0x460) | uVar3;
    uVar4 = *(uint *)(param_2 + 0x47c);
    if ((int)uVar4 < 0xc) goto LAB_00220a94;
LAB_00220a0c:
    uVar3 = *(uint *)(param_2 + 0x480) | uVar3;
    uVar4 = *(uint *)(param_2 + 0x49c);
    if ((int)uVar4 < 0xc) goto LAB_00220ab8;
LAB_00220a20:
    if (*(int *)(param_2 + 0x4a0) == 0 && uVar3 == 0) goto LAB_00220b0c;
  }
  else {
    uVar3 = *(uint *)(param_2 + 0x440);
    uVar4 = *(uint *)(param_2 + 0x45c);
    if (0xb < (int)uVar4) goto LAB_002209f8;
LAB_00220a70:
    uVar4 = uVar2 * (byte)(&UNK_007edcfe)[uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)] >> 3;
    *(uint *)(param_2 + 0x460) = uVar4;
    uVar3 = uVar4 | uVar3;
    uVar4 = *(uint *)(param_2 + 0x47c);
    if (0xb < (int)uVar4) goto LAB_00220a0c;
LAB_00220a94:
    uVar4 = uVar2 * (byte)(&UNK_007edcfe)[uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)] >> 3;
    *(uint *)(param_2 + 0x480) = uVar4;
    uVar3 = uVar4 | uVar3;
    uVar4 = *(uint *)(param_2 + 0x49c);
    if (0xb < (int)uVar4) goto LAB_00220a20;
LAB_00220ab8:
    uVar4 = uVar2 * (byte)(&UNK_007edcfe)[uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)] >> 3;
    *(uint *)(param_2 + 0x4a0) = uVar4;
    if (uVar4 == 0 && uVar3 == 0) goto LAB_00220b0c;
  }
  FUN_0024ad90(0x3f800000,param_2 + 0x33c);
  *(undefined4 *)(param_2 + 0x338) = 1;
LAB_00220b0c:
  iVar1 = *(int *)(param_1 + 0x34);
  *(int *)(param_2 + 0xbc8) = iVar1;
  if (100 < iVar1) {
    *(undefined4 *)(param_2 + 0xbc8) = 100;
    return;
  }
  if (-1 < iVar1) {
    return;
  }
  *(undefined4 *)(param_2 + 0xbc8) = 0;
  return;
}



/* Entry: 00220b3c; end: 00220c9b;  */

uint * FUN_00220b3c(uint *param_1,uint *param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint *puVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  char cVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  char cVar20;
  uint uVar21;
  long lVar22;
  long lVar23;
  uint *puVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  int iVar31;
  uint uVar32;
  int iVar33;
  uint uVar34;
  undefined8 uVar35;
  int iVar36;
  undefined8 uVar37;
  int iVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  byte abStack_c0 [64];
  long lStack_80;
  
  if (((int)param_1[0x2da] < 1) || ((int)param_1[0x2d7] < (int)param_1[0x69])) {
    uVar17 = 0;
    uVar14 = param_1[0x32];
  }
  else {
    uVar17 = (uint)((int)param_1[0x2d7] <= (int)param_1[0x6b]);
    uVar14 = param_1[0x32];
  }
  if (uVar14 != 0) {
    puVar24 = param_1;
    FUN_0024b11c();
    puVar5 = param_1 + 0x26;
    (**(code **)(puVar24 + 4))();
    if (((ulong)puVar5 & 1) == 0) {
      return (uint *)0x0;
    }
    uVar35 = *(undefined8 *)(param_2 + 2);
    uVar10 = *(undefined8 *)param_2;
    uVar37 = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 0x42) = uVar37;
    *(undefined8 *)(param_1 + 0x40) = uVar35;
    *(undefined8 *)(param_1 + 0x3e) = uVar10;
    uVar35 = *(undefined8 *)(param_2 + 10);
    uVar10 = *(undefined8 *)(param_2 + 8);
    uVar39 = *(undefined8 *)(param_2 + 0xe);
    uVar37 = *(undefined8 *)(param_2 + 0xc);
    uVar40 = *(undefined8 *)(param_2 + 0x10);
    uVar42 = *(undefined8 *)(param_2 + 0x16);
    uVar41 = *(undefined8 *)(param_2 + 0x14);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x12);
    *(undefined8 *)(param_1 + 0x4e) = uVar40;
    *(undefined8 *)(param_1 + 0x54) = uVar42;
    *(undefined8 *)(param_1 + 0x52) = uVar41;
    *(undefined8 *)(param_1 + 0x48) = uVar35;
    *(undefined8 *)(param_1 + 0x46) = uVar10;
    *(undefined8 *)(param_1 + 0x4c) = uVar39;
    *(undefined8 *)(param_1 + 0x4a) = uVar37;
    uVar35 = *(undefined8 *)(param_2 + 0x1a);
    uVar10 = *(undefined8 *)(param_2 + 0x18);
    uVar39 = *(undefined8 *)(param_2 + 0x1e);
    uVar37 = *(undefined8 *)(param_2 + 0x1c);
    uVar40 = *(undefined8 *)(param_2 + 0x20);
    uVar42 = *(undefined8 *)(param_2 + 0x26);
    uVar41 = *(undefined8 *)(param_2 + 0x24);
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x22);
    *(undefined8 *)(param_1 + 0x5e) = uVar40;
    *(undefined8 *)(param_1 + 100) = uVar42;
    *(undefined8 *)(param_1 + 0x62) = uVar41;
    *(undefined8 *)(param_1 + 0x58) = uVar35;
    *(undefined8 *)(param_1 + 0x56) = uVar10;
    *(undefined8 *)(param_1 + 0x5c) = uVar39;
    *(undefined8 *)(param_1 + 0x5a) = uVar37;
    param_1[0x36] = param_1[0x33];
    param_1[0x37] = param_1[0x2d7];
    param_1[0x38] = uVar17;
    if (param_1[0x32] == 2) {
      uVar10 = *(undefined8 *)(param_1 + 0x3c);
      *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_1 + 0x2d8);
      *(undefined8 *)(param_1 + 0x2d8) = uVar10;
    }
    else {
      puVar5 = param_1;
      FUN_00220c9c(param_1,param_1 + 0x36);
    }
    if (uVar17 != 0) {
      uVar10 = *(undefined8 *)(param_1 + 0x3a);
      *(undefined8 *)(param_1 + 0x3a) = *(undefined8 *)(param_1 + 0x2c6);
      *(undefined8 *)(param_1 + 0x2c6) = uVar10;
    }
    FUN_0024b11c();
    (**(code **)(puVar5 + 6))(param_1 + 0x26);
    uVar14 = 0;
    if (param_1[0x33] + 1 != param_1[0x34]) {
      uVar14 = param_1[0x33] + 1;
    }
    param_1[0x33] = uVar14;
    return (uint *)((long)&MACH_HEADER.magic + 1);
  }
  param_1[0x37] = param_1[0x2d7];
  param_1[0x38] = uVar17;
  FUN_00220c9c(param_1,param_1 + 0x36);
  lStack_80 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar5 = param_1 + 0x36;
  uVar21 = *puVar5;
  bVar4 = (&UNK_007edd0a)[(int)param_1[0x2da]];
  uVar18 = param_1[0x2d0];
  uVar14 = param_1[0x2d1];
  lVar15 = *(long *)(param_1 + 0x2ca);
  lVar11 = *(long *)(param_1 + 0x2cc);
  lVar12 = *(long *)(param_1 + 0x2ce);
  uVar17 = param_1[0x37];
  uVar9 = param_1[0x6b];
  if (param_1[0x32] == 2) {
    FUN_00220c9c(param_1);
  }
  lVar13 = (long)(int)((bVar4 >> 1) * uVar14);
  if ((param_1[0x38] != 0) &&
     (lVar30 = (long)(int)param_1[0x68], (int)param_1[0x68] < (int)param_1[0x6a])) {
    uVar7 = param_1[0x37];
    lVar29 = lVar30 << 3;
    lVar23 = lVar30 << 4;
    lVar22 = lVar30 << 2;
    do {
      lVar27 = *(long *)(param_1 + 0x3a);
      bVar2 = *(byte *)(lVar27 + lVar22);
      if (bVar2 != 0) {
        uVar8 = param_1[0x2d0];
        puVar24 = (uint *)(ulong)uVar8;
        lVar19 = *(long *)(param_1 + 0x2ca) + (long)(int)(param_1[0x36] * uVar8 * 0x10);
        uVar32 = (uint)bVar2;
        if (param_1[0x2da] == 1) {
          if (0 < lVar30) {
            puVar5 = puVar24;
            (*pcRam0000000000b6cf90)(lVar19 + lVar23,puVar24,bVar2 + 4);
          }
          if (*(char *)(lVar27 + lVar22 + 2) != '\0') {
            puVar5 = puVar24;
            (*pcRam0000000000b6cf98)(lVar19 + lVar23,puVar24,bVar2);
          }
          if (0 < (int)uVar7) {
            puVar5 = puVar24;
            (*pcRam0000000000b6cfa0)(lVar19 + lVar23,puVar24,uVar32 + 4);
          }
          if (*(char *)(lVar27 + lVar22 + 2) != '\0') {
            (*pcRam0000000000b6cfa8)(lVar19 + lVar23,puVar24,bVar2);
            puVar5 = puVar24;
          }
        }
        else {
          bVar3 = ((byte *)(lVar27 + lVar22))[1];
          uVar34 = param_1[0x2d1];
          lVar25 = (long)(int)(param_1[0x36] * uVar34 * 8);
          lVar26 = *(long *)(param_1 + 0x2cc) + lVar29;
          lVar28 = *(long *)(param_1 + 0x2ce) + lVar29;
          lVar27 = lVar27 + lVar22;
          uVar6 = *(undefined1 *)(lVar27 + 3);
          if (0 < lVar30) {
            (*pcRam0000000000b6ceb0)(lVar19 + lVar23,puVar24,bVar2 + 4,bVar3,uVar6);
            puVar5 = (uint *)(lVar28 + lVar25);
            (*pcRam0000000000b6cec0)(lVar26 + lVar25,puVar5,uVar34,uVar32 + 4,bVar3,uVar6);
          }
          if (*(char *)(lVar27 + 2) != '\0') {
            (*pcRam0000000000b6ceb8)(lVar19 + lVar23,uVar8,bVar2,bVar3,uVar6);
            puVar5 = (uint *)(lVar28 + lVar25);
            (*pcRam0000000000b6cec8)(lVar26 + lVar25,puVar5,uVar34,bVar2,bVar3,uVar6);
          }
          if (0 < (int)uVar7) {
            (*pcRam0000000000b6cfe0)(lVar19 + lVar23,uVar8,uVar32 + 4,bVar3,uVar6);
            puVar5 = (uint *)(lVar28 + lVar25);
            (*pcRam0000000000b6cff0)(lVar26 + lVar25,puVar5,uVar34,bVar2 + 4,bVar3,uVar6);
          }
          if (*(char *)(lVar27 + 2) != '\0') {
            (*pcRam0000000000b6cfe8)(lVar19 + lVar23,uVar8,bVar2,bVar3,uVar6);
            puVar5 = (uint *)(lVar28 + lVar25);
            (*pcRam0000000000b6cff8)(lVar26 + lVar25,puVar5,uVar34,bVar2,bVar3,uVar6);
          }
        }
      }
      lVar30 = lVar30 + 1;
      lVar29 = lVar29 + 8;
      lVar23 = lVar23 + 0x10;
      lVar22 = lVar22 + 4;
    } while (lVar30 < (int)param_1[0x6a]);
  }
  lVar30 = (long)(int)uVar21 * (long)(int)uVar18 * 0x10;
  uVar7 = (uint)bVar4;
  lVar29 = (long)(int)(uVar21 * uVar14 * 8);
  if (param_1[0xce] != 0) {
    lVar23 = (long)(int)param_1[0x68];
    uVar14 = param_1[0x6a];
    if ((int)param_1[0x68] < (int)uVar14) {
      puVar24 = param_1 + 0xcf;
      do {
        lVar22 = *(long *)(param_1 + 0x3c) + lVar23 * 800;
        uVar8 = (uint)*(byte *)(lVar22 + 0x31c);
        if (3 < uVar8) {
          lVar27 = 0;
          uVar14 = param_1[0x2d1];
          lVar19 = *(long *)(param_1 + 0x2cc);
          lVar28 = (long)(int)(uVar14 * param_1[0x36] * 8);
          lVar26 = *(long *)(param_1 + 0x2ce);
          uVar32 = param_1[0xcf];
          uVar34 = param_1[0xd0];
          do {
            uVar1 = param_1[(long)(int)uVar32 + 0xd1];
            uVar34 = param_1[(long)(int)uVar34 + 0xd1];
            param_1[(long)(int)uVar32 + 0xd1] = uVar1 - uVar34 & 0x7fffffff;
            iVar31 = (int)*(undefined8 *)puVar24 + 1;
            iVar33 = (int)((ulong)*(undefined8 *)puVar24 >> 0x20) + 1;
            iVar36 = -(uint)(iVar31 == 0x37);
            iVar38 = -(uint)(iVar33 == 0x37);
            uVar32 = CONCAT13((byte)((uint)iVar31 >> 0x18) & ~(byte)((uint)iVar36 >> 0x18),
                              CONCAT12((byte)((uint)iVar31 >> 0x10) & ~(byte)((uint)iVar36 >> 0x10),
                                       CONCAT11((byte)((uint)iVar31 >> 8) &
                                                ~(byte)((uint)iVar36 >> 8),
                                                (byte)iVar31 & ~(byte)iVar36)));
            uVar10 = CONCAT17((byte)((uint)iVar33 >> 0x18) & ~(byte)((uint)iVar38 >> 0x18),
                              CONCAT16((byte)((uint)iVar33 >> 0x10) & ~(byte)((uint)iVar38 >> 0x10),
                                       CONCAT15((byte)((uint)iVar33 >> 8) &
                                                ~(byte)((uint)iVar38 >> 8),
                                                CONCAT14((byte)iVar33 & ~(byte)iVar38,uVar32))));
            abStack_c0[lVar27] = (byte)(((int)((uVar1 - uVar34) * 2) >> 0x18) * uVar8 >> 8) ^ 0x80;
            *(undefined8 *)puVar24 = uVar10;
            lVar27 = lVar27 + 1;
            uVar34 = (uint)((ulong)uVar10 >> 0x20);
          } while (lVar27 != 0x40);
          (*pcRam0000000000b6cea8)(abStack_c0,lVar19 + lVar28 + lVar23 * 8,uVar14);
          lVar27 = 0;
          bVar4 = *(byte *)(lVar22 + 0x31c);
          uVar10 = *(undefined8 *)puVar24;
          do {
            uVar8 = param_1[(long)(int)uVar10 + 0xd1];
            uVar32 = param_1[(long)(int)((ulong)uVar10 >> 0x20) + 0xd1];
            param_1[(long)(int)uVar10 + 0xd1] = uVar8 - uVar32 & 0x7fffffff;
            iVar31 = (int)*(undefined8 *)puVar24 + 1;
            iVar33 = (int)((ulong)*(undefined8 *)puVar24 >> 0x20) + 1;
            iVar36 = -(uint)(iVar31 == 0x37);
            iVar38 = -(uint)(iVar33 == 0x37);
            uVar10 = CONCAT17((byte)((uint)iVar33 >> 0x18) & ~(byte)((uint)iVar38 >> 0x18),
                              CONCAT16((byte)((uint)iVar33 >> 0x10) & ~(byte)((uint)iVar38 >> 0x10),
                                       CONCAT15((byte)((uint)iVar33 >> 8) &
                                                ~(byte)((uint)iVar38 >> 8),
                                                CONCAT14((byte)iVar33 & ~(byte)iVar38,
                                                         CONCAT13((byte)((uint)iVar31 >> 0x18) &
                                                                  ~(byte)((uint)iVar36 >> 0x18),
                                                                  CONCAT12((byte)((uint)iVar31 >>
                                                                                 0x10) &
                                                                           ~(byte)((uint)iVar36 >>
                                                                                  0x10),
                                                                           CONCAT11((byte)((uint)
                                                  iVar31 >> 8) & ~(byte)((uint)iVar36 >> 8),
                                                  (byte)iVar31 & ~(byte)iVar36)))))));
            *(undefined8 *)puVar24 = uVar10;
            abStack_c0[lVar27] =
                 (byte)(((int)((uVar8 - uVar32) * 2) >> 0x18) * (uint)bVar4 >> 8) ^ 0x80;
            lVar27 = lVar27 + 1;
          } while (lVar27 != 0x40);
          puVar5 = (uint *)(lVar26 + lVar28 + lVar23 * 8);
          (*pcRam0000000000b6cea8)(abStack_c0,puVar5,uVar14);
          uVar14 = param_1[0x6a];
        }
        lVar23 = lVar23 + 1;
      } while (lVar23 < (int)uVar14);
    }
  }
  lVar15 = (lVar15 - (long)(int)uVar18 * (long)(int)uVar7) + lVar30;
  lVar11 = (lVar11 - lVar13) + lVar29;
  lVar12 = (lVar12 - lVar13) + lVar29;
  if (*(long *)(param_2 + 0x10) == 0) {
    param_2 = (uint *)((long)&MACH_HEADER.magic + 1);
    if (uVar21 + 1 == param_1[0x34]) goto LAB_00221bd8;
    goto LAB_00221c40;
  }
  if (uVar17 == 0) {
    uVar14 = 0;
    lVar30 = *(long *)(param_1 + 0x2ca) + lVar30;
    lVar23 = *(long *)(param_1 + 0x2cc) + lVar29;
    lVar29 = *(long *)(param_1 + 0x2ce) + lVar29;
  }
  else {
    uVar14 = uVar17 * 0x10 - uVar7;
    lVar30 = lVar15;
    lVar23 = lVar11;
    lVar29 = lVar12;
  }
  puVar24 = (uint *)0x0;
  *(long *)(param_2 + 6) = lVar30;
  *(long *)(param_2 + 8) = lVar23;
  *(long *)(param_2 + 10) = lVar29;
  uVar8 = 0;
  if ((int)uVar17 < (int)(uVar9 - 1)) {
    uVar8 = uVar7;
  }
  uVar8 = (uVar17 * 0x10 + 0x10) - uVar8;
  if ((int)param_2[0x21] <= (int)uVar8) {
    uVar8 = param_2[0x21];
  }
  param_2[0x26] = 0;
  param_2[0x27] = 0;
  if ((*(long *)(param_1 + 0x2e6) == 0) || (uVar8 - uVar14 == 0 || (int)uVar8 < (int)uVar14)) {
LAB_00221b08:
    uVar32 = param_2[0x20];
    iVar31 = uVar32 - uVar14;
    if (iVar31 != 0 && (int)uVar14 <= (int)uVar32) {
      *(long *)(param_2 + 6) = *(long *)(param_2 + 6) + (long)(int)param_1[0x2d0] * (long)iVar31;
      uVar14 = param_1[0x2d1];
      *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + (long)(int)uVar14 * (long)(iVar31 >> 1);
      *(long *)(param_2 + 10) = *(long *)(param_2 + 10) + (long)(int)uVar14 * (long)(iVar31 >> 1);
      uVar14 = uVar32;
      if (puVar24 != (uint *)0x0) {
        puVar24 = (uint *)((long)puVar24 + (long)(int)*param_2 * (long)iVar31);
        *(uint **)(param_2 + 0x26) = puVar24;
      }
    }
    if (uVar8 - uVar14 == 0 || (int)uVar8 < (int)uVar14) {
      param_2 = (uint *)((long)&MACH_HEADER.magic + 1);
      if (uVar21 + 1 == param_1[0x34]) goto LAB_00221bd8;
    }
    else {
      lVar29 = (long)(int)param_2[0x1e];
      lVar30 = (lVar29 << 0x20) >> 0x21;
      *(long *)(param_2 + 6) = *(long *)(param_2 + 6) + lVar29;
      *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + lVar30;
      *(long *)(param_2 + 10) = *(long *)(param_2 + 10) + lVar30;
      if (puVar24 != (uint *)0x0) {
        *(long *)(param_2 + 0x26) = (long)puVar24 + lVar29;
      }
      param_2[2] = uVar14 - uVar32;
      param_2[3] = param_2[0x1f] - param_2[0x1e];
      param_2[4] = uVar8 - uVar14;
      (**(code **)(param_2 + 0x10))();
      if (uVar21 + 1 == param_1[0x34]) {
LAB_00221bd8:
        if ((int)uVar17 < (int)(uVar9 - 1)) {
          _memcpy(*(long *)(param_1 + 0x2ca) - (long)(int)uVar18 * (long)(int)uVar7,
                  lVar15 + (long)(int)param_1[0x2d0] * 0x10,(long)(int)uVar18 * (long)(int)uVar7);
          _memcpy(*(long *)(param_1 + 0x2cc) + -lVar13,lVar11 + (long)(int)param_1[0x2d1] * 8,lVar13
                 );
          puVar5 = (uint *)(lVar12 + (long)(int)param_1[0x2d1] * 8);
          _memcpy(*(long *)(param_1 + 0x2ce) + -lVar13,puVar5,lVar13);
        }
      }
    }
LAB_00221c40:
    param_1 = param_2;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_80) {
      return param_2;
    }
  }
  else {
    puVar24 = param_1;
    puVar5 = param_2;
    FUN_0021ff60(param_1,param_2,uVar14,uVar8 - uVar14);
    *(uint **)(param_2 + 0x26) = puVar24;
    if (puVar24 != (uint *)0x0) goto LAB_00221b08;
    puVar5 = (uint *)((long)&MACH_HEADER.magic + 3);
    FUN_00225d8c(param_1,3,"Could not decode alpha data.");
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_80) {
      return param_1;
    }
  }
  ___stack_chk_fail();
  if ((*(code **)(puVar5 + 0x12) != (code *)0x0) &&
     (puVar24 = puVar5, (**(code **)(puVar5 + 0x12))(), (int)puVar24 == 0)) {
    FUN_00225d8c(param_1,6,"Frame setup failed");
    return (uint *)(ulong)*param_1;
  }
  if (puVar5[0x1c] == 0) {
    uVar14 = param_1[0x2da];
    uVar17 = (uint)(byte)(&UNK_007edd0a)[(int)uVar14];
    if (uVar14 != 2) goto LAB_00221d14;
    param_1[0x68] = 0;
    uVar14 = 2;
LAB_00221d70:
    param_1[0x69] = 0;
  }
  else {
    uVar17 = 0;
    uVar14 = 0;
    param_1[0x2da] = 0;
LAB_00221d14:
    uVar9 = (int)(puVar5[0x1e] - uVar17) >> 4;
    param_1[0x68] = uVar9;
    uVar21 = (int)(puVar5[0x20] - uVar17) >> 4;
    param_1[0x69] = uVar21;
    if ((int)uVar9 < 0) {
      param_1[0x68] = 0;
    }
    if ((int)uVar21 < 0) goto LAB_00221d70;
  }
  uVar9 = (int)(uVar17 + 0xf + puVar5[0x21]) >> 4;
  param_1[0x6b] = uVar9;
  uVar17 = (int)(uVar17 + 0xf + puVar5[0x1f]) >> 4;
  if ((int)param_1[0x66] <= (int)uVar17) {
    uVar17 = param_1[0x66];
  }
  param_1[0x6a] = uVar17;
  if ((int)param_1[0x67] < (int)uVar9) {
    param_1[0x6b] = param_1[0x67];
  }
  if ((int)uVar14 < 1) {
    return (uint *)0x0;
  }
  uVar14 = param_1[0x20];
  if (param_1[0x17] != 0) {
    uVar17 = param_1[0x18];
    if (uVar14 != 0) {
      if (param_1[0x22] == 0) {
        iVar31 = param_1[0x15] + uVar17;
        uVar14 = iVar31 + (char)param_1[0x24];
        uVar17 = uVar14;
        if (0x3e < (int)uVar14) {
          uVar17 = 0x3f;
        }
        if ((int)uVar14 < 1) {
          *(undefined1 *)(param_1 + 0x2db) = 0;
        }
        else {
          uVar17 = uVar17 & ((int)uVar17 >> 0x1f ^ 0xffffffffU);
          uVar21 = param_1[0x16];
          uVar9 = uVar17;
          if (0 < (int)uVar21) {
            uVar18 = 1;
            if (4 < uVar21) {
              uVar18 = 2;
            }
            uVar9 = uVar17 >> (ulong)uVar18;
            if ((int)(9 - uVar21) <= (int)(uVar17 >> (ulong)uVar18)) {
              uVar9 = 9 - uVar21;
            }
          }
          if ((int)uVar9 < 2) {
            uVar9 = 1;
          }
          *(char *)((long)param_1 + 0xb6d) = (char)uVar9;
          *(char *)(param_1 + 0x2db) = (char)uVar9 + (char)(uVar17 << 1);
          uVar6 = 2;
          if (uVar14 < 0x28) {
            uVar6 = 0xe < uVar14;
          }
          *(undefined1 *)((long)param_1 + 0xb6f) = uVar6;
        }
        *(undefined1 *)((long)param_1 + 0xb6e) = 0;
        uVar9 = param_1[0x1c];
        uVar14 = uVar9 + uVar14;
        uVar17 = uVar14;
        if (0x3e < (int)uVar14) {
          uVar17 = 0x3f;
        }
        if ((int)uVar14 < 1) {
          *(undefined1 *)(param_1 + 0x2dc) = 0;
        }
        else {
          uVar17 = uVar17 & ((int)uVar17 >> 0x1f ^ 0xffffffffU);
          uVar18 = param_1[0x16];
          uVar21 = uVar17;
          if (0 < (int)uVar18) {
            uVar7 = 1;
            if (4 < uVar18) {
              uVar7 = 2;
            }
            uVar21 = uVar17 >> (ulong)uVar7;
            if ((int)(9 - uVar18) <= (int)(uVar17 >> (ulong)uVar7)) {
              uVar21 = 9 - uVar18;
            }
          }
          if ((int)uVar21 < 2) {
            uVar21 = 1;
          }
          *(char *)((long)param_1 + 0xb71) = (char)uVar21;
          *(char *)(param_1 + 0x2dc) = (char)uVar21 + (char)(uVar17 << 1);
          uVar6 = 2;
          if (uVar14 < 0x28) {
            uVar6 = 0xe < uVar14;
          }
          *(undefined1 *)((long)param_1 + 0xb73) = uVar6;
        }
        *(undefined1 *)((long)param_1 + 0xb72) = 1;
        uVar14 = iVar31 + *(char *)((long)param_1 + 0x91);
        uVar17 = uVar14;
        if (0x3e < (int)uVar14) {
          uVar17 = 0x3f;
        }
        if ((int)uVar14 < 1) {
          *(undefined1 *)(param_1 + 0x2dd) = 0;
        }
        else {
          uVar17 = uVar17 & ((int)uVar17 >> 0x1f ^ 0xffffffffU);
          uVar18 = param_1[0x16];
          uVar21 = uVar17;
          if (0 < (int)uVar18) {
            uVar7 = 1;
            if (4 < uVar18) {
              uVar7 = 2;
            }
            uVar21 = uVar17 >> (ulong)uVar7;
            if ((int)(9 - uVar18) <= (int)(uVar17 >> (ulong)uVar7)) {
              uVar21 = 9 - uVar18;
            }
          }
          if ((int)uVar21 < 2) {
            uVar21 = 1;
          }
          *(char *)((long)param_1 + 0xb75) = (char)uVar21;
          *(char *)(param_1 + 0x2dd) = (char)uVar21 + (char)(uVar17 << 1);
          uVar6 = 2;
          if (uVar14 < 0x28) {
            uVar6 = 0xe < uVar14;
          }
          *(undefined1 *)((long)param_1 + 0xb77) = uVar6;
        }
        *(undefined1 *)((long)param_1 + 0xb76) = 0;
        uVar14 = uVar14 + uVar9;
        uVar17 = uVar14;
        if (0x3e < (int)uVar14) {
          uVar17 = 0x3f;
        }
        if ((int)uVar14 < 1) {
          *(undefined1 *)(param_1 + 0x2de) = 0;
        }
        else {
          uVar17 = uVar17 & ((int)uVar17 >> 0x1f ^ 0xffffffffU);
          uVar18 = param_1[0x16];
          uVar21 = uVar17;
          if (0 < (int)uVar18) {
            uVar7 = 1;
            if (4 < uVar18) {
              uVar7 = 2;
            }
            uVar21 = uVar17 >> (ulong)uVar7;
            if ((int)(9 - uVar18) <= (int)(uVar17 >> (ulong)uVar7)) {
              uVar21 = 9 - uVar18;
            }
          }
          if ((int)uVar21 < 2) {
            uVar21 = 1;
          }
          *(char *)((long)param_1 + 0xb79) = (char)uVar21;
          *(char *)(param_1 + 0x2de) = (char)uVar21 + (char)(uVar17 << 1);
          uVar6 = 2;
          if (uVar14 < 0x28) {
            uVar6 = 0xe < uVar14;
          }
          *(undefined1 *)((long)param_1 + 0xb7b) = uVar6;
        }
        *(undefined1 *)((long)param_1 + 0xb7a) = 1;
        uVar14 = iVar31 + *(char *)((long)param_1 + 0x92);
        uVar17 = uVar14;
        if (0x3e < (int)uVar14) {
          uVar17 = 0x3f;
        }
        if ((int)uVar14 < 1) {
          *(undefined1 *)(param_1 + 0x2df) = 0;
        }
        else {
          uVar17 = uVar17 & ((int)uVar17 >> 0x1f ^ 0xffffffffU);
          uVar18 = param_1[0x16];
          uVar21 = uVar17;
          if (0 < (int)uVar18) {
            uVar7 = 1;
            if (4 < uVar18) {
              uVar7 = 2;
            }
            uVar21 = uVar17 >> (ulong)uVar7;
            if ((int)(9 - uVar18) <= (int)(uVar17 >> (ulong)uVar7)) {
              uVar21 = 9 - uVar18;
            }
          }
          if ((int)uVar21 < 2) {
            uVar21 = 1;
          }
          *(char *)((long)param_1 + 0xb7d) = (char)uVar21;
          *(char *)(param_1 + 0x2df) = (char)uVar21 + (char)(uVar17 << 1);
          uVar6 = 2;
          if (uVar14 < 0x28) {
            uVar6 = 0xe < uVar14;
          }
          *(undefined1 *)((long)param_1 + 0xb7f) = uVar6;
        }
        *(undefined1 *)((long)param_1 + 0xb7e) = 0;
        uVar14 = uVar14 + uVar9;
        uVar17 = uVar14;
        if (0x3e < (int)uVar14) {
          uVar17 = 0x3f;
        }
        if ((int)uVar14 < 1) {
          *(undefined1 *)(param_1 + 0x2e0) = 0;
        }
        else {
          uVar17 = uVar17 & ((int)uVar17 >> 0x1f ^ 0xffffffffU);
          uVar18 = param_1[0x16];
          uVar21 = uVar17;
          if (0 < (int)uVar18) {
            uVar7 = 1;
            if (4 < uVar18) {
              uVar7 = 2;
            }
            uVar21 = uVar17 >> (ulong)uVar7;
            if ((int)(9 - uVar18) <= (int)(uVar17 >> (ulong)uVar7)) {
              uVar21 = 9 - uVar18;
            }
          }
          if ((int)uVar21 < 2) {
            uVar21 = 1;
          }
          *(char *)((long)param_1 + 0xb81) = (char)uVar21;
          *(char *)(param_1 + 0x2e0) = (char)uVar21 + (char)(uVar17 << 1);
          uVar6 = 2;
          if (uVar14 < 0x28) {
            uVar6 = 0xe < uVar14;
          }
          *(undefined1 *)((long)param_1 + 0xb83) = uVar6;
        }
        *(undefined1 *)((long)param_1 + 0xb82) = 1;
        uVar17 = iVar31 + *(char *)((long)param_1 + 0x93);
        uVar14 = uVar17;
        if (0x3e < (int)uVar17) {
          uVar14 = 0x3f;
        }
        if ((int)uVar17 < 1) {
          *(undefined1 *)(param_1 + 0x2e1) = 0;
        }
        else {
          uVar14 = uVar14 & ((int)uVar14 >> 0x1f ^ 0xffffffffU);
          uVar18 = param_1[0x16];
          uVar21 = uVar14;
          if (0 < (int)uVar18) {
            uVar7 = 1;
            if (4 < uVar18) {
              uVar7 = 2;
            }
            uVar21 = uVar14 >> (ulong)uVar7;
            if ((int)(9 - uVar18) <= (int)(uVar14 >> (ulong)uVar7)) {
              uVar21 = 9 - uVar18;
            }
          }
          if ((int)uVar21 < 2) {
            uVar21 = 1;
          }
          *(char *)((long)param_1 + 0xb85) = (char)uVar21;
          *(char *)(param_1 + 0x2e1) = (char)uVar21 + (char)(uVar14 << 1);
          uVar6 = 2;
          if (uVar17 < 0x28) {
            uVar6 = 0xe < uVar17;
          }
          *(undefined1 *)((long)param_1 + 0xb87) = uVar6;
        }
        *(undefined1 *)((long)param_1 + 0xb86) = 0;
        uVar17 = uVar17 + uVar9;
        uVar14 = uVar17;
        if (0x3e < (int)uVar17) {
          uVar14 = 0x3f;
        }
        if ((int)uVar17 < 1) goto LAB_00222dbc;
        uVar14 = uVar14 & ((int)uVar14 >> 0x1f ^ 0xffffffffU);
        uVar9 = param_1[0x16];
      }
      else {
        uVar14 = uVar17 + (int)(char)param_1[0x24];
        uVar9 = uVar14;
        if (0x3e < (int)uVar14) {
          uVar9 = 0x3f;
        }
        if ((int)uVar14 < 1) {
          *(undefined1 *)(param_1 + 0x2db) = 0;
        }
        else {
          uVar9 = uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU);
          uVar18 = param_1[0x16];
          uVar21 = uVar9;
          if (0 < (int)uVar18) {
            uVar7 = 1;
            if (4 < uVar18) {
              uVar7 = 2;
            }
            uVar21 = uVar9 >> (ulong)uVar7;
            if ((int)(9 - uVar18) <= (int)(uVar9 >> (ulong)uVar7)) {
              uVar21 = 9 - uVar18;
            }
          }
          if ((int)uVar21 < 2) {
            uVar21 = 1;
          }
          *(char *)((long)param_1 + 0xb6d) = (char)uVar21;
          *(char *)(param_1 + 0x2db) = (char)uVar21 + (char)(uVar9 << 1);
          uVar6 = 2;
          if (uVar14 < 0x28) {
            uVar6 = 0xe < uVar14;
          }
          *(undefined1 *)((long)param_1 + 0xb6f) = uVar6;
        }
        *(undefined1 *)((long)param_1 + 0xb6e) = 0;
        uVar21 = param_1[0x1c];
        uVar14 = uVar21 + uVar14;
        uVar9 = uVar14;
        if (0x3e < (int)uVar14) {
          uVar9 = 0x3f;
        }
        if ((int)uVar14 < 1) {
          *(undefined1 *)(param_1 + 0x2dc) = 0;
        }
        else {
          uVar9 = uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU);
          uVar7 = param_1[0x16];
          uVar18 = uVar9;
          if (0 < (int)uVar7) {
            uVar8 = 1;
            if (4 < uVar7) {
              uVar8 = 2;
            }
            uVar18 = uVar9 >> (ulong)uVar8;
            if ((int)(9 - uVar7) <= (int)(uVar9 >> (ulong)uVar8)) {
              uVar18 = 9 - uVar7;
            }
          }
          if ((int)uVar18 < 2) {
            uVar18 = 1;
          }
          *(char *)((long)param_1 + 0xb71) = (char)uVar18;
          *(char *)(param_1 + 0x2dc) = (char)uVar18 + (char)(uVar9 << 1);
          uVar6 = 2;
          if (uVar14 < 0x28) {
            uVar6 = 0xe < uVar14;
          }
          *(undefined1 *)((long)param_1 + 0xb73) = uVar6;
        }
        *(undefined1 *)((long)param_1 + 0xb72) = 1;
        uVar14 = uVar17 + (int)*(char *)((long)param_1 + 0x91);
        uVar9 = uVar14;
        if (0x3e < (int)uVar14) {
          uVar9 = 0x3f;
        }
        if ((int)uVar14 < 1) {
          *(undefined1 *)(param_1 + 0x2dd) = 0;
        }
        else {
          uVar9 = uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU);
          uVar7 = param_1[0x16];
          uVar18 = uVar9;
          if (0 < (int)uVar7) {
            uVar8 = 1;
            if (4 < uVar7) {
              uVar8 = 2;
            }
            uVar18 = uVar9 >> (ulong)uVar8;
            if ((int)(9 - uVar7) <= (int)(uVar9 >> (ulong)uVar8)) {
              uVar18 = 9 - uVar7;
            }
          }
          if ((int)uVar18 < 2) {
            uVar18 = 1;
          }
          *(char *)((long)param_1 + 0xb75) = (char)uVar18;
          *(char *)(param_1 + 0x2dd) = (char)uVar18 + (char)(uVar9 << 1);
          uVar6 = 2;
          if (uVar14 < 0x28) {
            uVar6 = 0xe < uVar14;
          }
          *(undefined1 *)((long)param_1 + 0xb77) = uVar6;
        }
        *(undefined1 *)((long)param_1 + 0xb76) = 0;
        uVar14 = uVar14 + uVar21;
        uVar9 = uVar14;
        if (0x3e < (int)uVar14) {
          uVar9 = 0x3f;
        }
        if ((int)uVar14 < 1) {
          *(undefined1 *)(param_1 + 0x2de) = 0;
        }
        else {
          uVar9 = uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU);
          uVar7 = param_1[0x16];
          uVar18 = uVar9;
          if (0 < (int)uVar7) {
            uVar8 = 1;
            if (4 < uVar7) {
              uVar8 = 2;
            }
            uVar18 = uVar9 >> (ulong)uVar8;
            if ((int)(9 - uVar7) <= (int)(uVar9 >> (ulong)uVar8)) {
              uVar18 = 9 - uVar7;
            }
          }
          if ((int)uVar18 < 2) {
            uVar18 = 1;
          }
          *(char *)((long)param_1 + 0xb79) = (char)uVar18;
          *(char *)(param_1 + 0x2de) = (char)uVar18 + (char)(uVar9 << 1);
          uVar6 = 2;
          if (uVar14 < 0x28) {
            uVar6 = 0xe < uVar14;
          }
          *(undefined1 *)((long)param_1 + 0xb7b) = uVar6;
        }
        *(undefined1 *)((long)param_1 + 0xb7a) = 1;
        uVar14 = uVar17 + (int)*(char *)((long)param_1 + 0x92);
        uVar9 = uVar14;
        if (0x3e < (int)uVar14) {
          uVar9 = 0x3f;
        }
        if ((int)uVar14 < 1) {
          *(undefined1 *)(param_1 + 0x2df) = 0;
        }
        else {
          uVar9 = uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU);
          uVar7 = param_1[0x16];
          uVar18 = uVar9;
          if (0 < (int)uVar7) {
            uVar8 = 1;
            if (4 < uVar7) {
              uVar8 = 2;
            }
            uVar18 = uVar9 >> (ulong)uVar8;
            if ((int)(9 - uVar7) <= (int)(uVar9 >> (ulong)uVar8)) {
              uVar18 = 9 - uVar7;
            }
          }
          if ((int)uVar18 < 2) {
            uVar18 = 1;
          }
          *(char *)((long)param_1 + 0xb7d) = (char)uVar18;
          *(char *)(param_1 + 0x2df) = (char)uVar18 + (char)(uVar9 << 1);
          uVar6 = 2;
          if (uVar14 < 0x28) {
            uVar6 = 0xe < uVar14;
          }
          *(undefined1 *)((long)param_1 + 0xb7f) = uVar6;
        }
        *(undefined1 *)((long)param_1 + 0xb7e) = 0;
        uVar14 = uVar14 + uVar21;
        uVar9 = uVar14;
        if (0x3e < (int)uVar14) {
          uVar9 = 0x3f;
        }
        if ((int)uVar14 < 1) {
          *(undefined1 *)(param_1 + 0x2e0) = 0;
        }
        else {
          uVar9 = uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU);
          uVar7 = param_1[0x16];
          uVar18 = uVar9;
          if (0 < (int)uVar7) {
            uVar8 = 1;
            if (4 < uVar7) {
              uVar8 = 2;
            }
            uVar18 = uVar9 >> (ulong)uVar8;
            if ((int)(9 - uVar7) <= (int)(uVar9 >> (ulong)uVar8)) {
              uVar18 = 9 - uVar7;
            }
          }
          if ((int)uVar18 < 2) {
            uVar18 = 1;
          }
          *(char *)((long)param_1 + 0xb81) = (char)uVar18;
          *(char *)(param_1 + 0x2e0) = (char)uVar18 + (char)(uVar9 << 1);
          uVar6 = 2;
          if (uVar14 < 0x28) {
            uVar6 = 0xe < uVar14;
          }
          *(undefined1 *)((long)param_1 + 0xb83) = uVar6;
        }
        *(undefined1 *)((long)param_1 + 0xb82) = 1;
        uVar17 = uVar17 + (int)*(char *)((long)param_1 + 0x93);
        uVar14 = uVar17;
        if (0x3e < (int)uVar17) {
          uVar14 = 0x3f;
        }
        if ((int)uVar17 < 1) {
          *(undefined1 *)(param_1 + 0x2e1) = 0;
        }
        else {
          uVar14 = uVar14 & ((int)uVar14 >> 0x1f ^ 0xffffffffU);
          uVar18 = param_1[0x16];
          uVar9 = uVar14;
          if (0 < (int)uVar18) {
            uVar7 = 1;
            if (4 < uVar18) {
              uVar7 = 2;
            }
            uVar9 = uVar14 >> (ulong)uVar7;
            if ((int)(9 - uVar18) <= (int)(uVar14 >> (ulong)uVar7)) {
              uVar9 = 9 - uVar18;
            }
          }
          if ((int)uVar9 < 2) {
            uVar9 = 1;
          }
          *(char *)((long)param_1 + 0xb85) = (char)uVar9;
          *(char *)(param_1 + 0x2e1) = (char)uVar9 + (char)(uVar14 << 1);
          uVar6 = 2;
          if (uVar17 < 0x28) {
            uVar6 = 0xe < uVar17;
          }
          *(undefined1 *)((long)param_1 + 0xb87) = uVar6;
        }
        *(undefined1 *)((long)param_1 + 0xb86) = 0;
        uVar17 = uVar17 + uVar21;
        uVar14 = uVar17;
        if (0x3e < (int)uVar17) {
          uVar14 = 0x3f;
        }
        if ((int)uVar17 < 1) goto LAB_00222dbc;
        uVar14 = uVar14 & ((int)uVar14 >> 0x1f ^ 0xffffffffU);
        uVar9 = param_1[0x16];
      }
      uVar21 = uVar14;
      if (0 < (int)uVar9) {
        uVar18 = 1;
        if (4 < uVar9) {
          uVar18 = 2;
        }
        uVar21 = uVar14 >> (ulong)uVar18;
        if ((int)(9 - uVar9) <= (int)(uVar14 >> (ulong)uVar18)) {
          uVar21 = 9 - uVar9;
        }
      }
      if ((int)uVar21 < 2) {
        uVar21 = 1;
      }
      *(char *)((long)param_1 + 0xb89) = (char)uVar21;
      *(char *)(param_1 + 0x2e2) = (char)uVar21 + (char)(uVar14 << 1);
      uVar6 = 2;
      if (uVar17 < 0x28) {
        uVar6 = 0xe < uVar17;
      }
      goto LAB_00222da0;
    }
    uVar17 = param_1[0x15] + uVar17;
    uVar14 = uVar17;
    if (0x3e < (int)uVar17) {
      uVar14 = 0x3f;
    }
    uVar14 = uVar14 & ((int)uVar14 >> 0x1f ^ 0xffffffffU);
    if ((int)uVar17 < 1) {
      *(undefined1 *)(param_1 + 0x2db) = 0;
    }
    else {
      uVar21 = param_1[0x16];
      uVar9 = uVar14;
      if (0 < (int)uVar21) {
        uVar18 = 1;
        if (4 < uVar21) {
          uVar18 = 2;
        }
        uVar9 = uVar14 >> (ulong)uVar18;
        if ((int)(9 - uVar21) <= (int)(uVar14 >> (ulong)uVar18)) {
          uVar9 = 9 - uVar21;
        }
      }
      if ((int)uVar9 < 2) {
        uVar9 = 1;
      }
      *(char *)((long)param_1 + 0xb6d) = (char)uVar9;
      *(char *)(param_1 + 0x2db) = (char)uVar9 + (char)(uVar14 << 1);
      uVar6 = 2;
      if (uVar17 < 0x28) {
        uVar6 = 0xe < uVar17;
      }
      *(undefined1 *)((long)param_1 + 0xb6f) = uVar6;
    }
    *(undefined1 *)((long)param_1 + 0xb6e) = 0;
    uVar9 = param_1[0x1c] + uVar17;
    uVar21 = uVar9;
    if (0x3e < (int)uVar9) {
      uVar21 = 0x3f;
    }
    uVar21 = uVar21 & ((int)uVar21 >> 0x1f ^ 0xffffffffU);
    if ((int)uVar9 < 1) {
      *(undefined1 *)(param_1 + 0x2dc) = 0;
      *(undefined1 *)((long)param_1 + 0xb72) = 1;
      if ((int)uVar17 < 1) goto LAB_00222370;
LAB_00222064:
      uVar7 = param_1[0x16];
      uVar18 = uVar14;
      if (0 < (int)uVar7) {
        uVar8 = 1;
        if (4 < uVar7) {
          uVar8 = 2;
        }
        uVar18 = uVar14 >> (ulong)uVar8;
        if ((int)(9 - uVar7) <= (int)(uVar14 >> (ulong)uVar8)) {
          uVar18 = 9 - uVar7;
        }
      }
      if ((int)uVar18 < 2) {
        uVar18 = 1;
      }
      *(char *)((long)param_1 + 0xb75) = (char)uVar18;
      *(char *)(param_1 + 0x2dd) = (char)uVar18 + (char)(uVar14 << 1);
      uVar6 = 2;
      if (uVar17 < 0x28) {
        uVar6 = 0xe < uVar17;
      }
      *(undefined1 *)((long)param_1 + 0xb77) = uVar6;
      *(undefined1 *)((long)param_1 + 0xb76) = 0;
      if (0 < (int)uVar9) goto LAB_002220cc;
LAB_00222380:
      *(undefined1 *)(param_1 + 0x2de) = 0;
      *(undefined1 *)((long)param_1 + 0xb7a) = 1;
      if ((int)uVar17 < 1) goto LAB_00222394;
LAB_00222138:
      uVar7 = param_1[0x16];
      uVar18 = uVar14;
      if (0 < (int)uVar7) {
        uVar8 = 1;
        if (4 < uVar7) {
          uVar8 = 2;
        }
        uVar18 = uVar14 >> (ulong)uVar8;
        if ((int)(9 - uVar7) <= (int)(uVar14 >> (ulong)uVar8)) {
          uVar18 = 9 - uVar7;
        }
      }
      if ((int)uVar18 < 2) {
        uVar18 = 1;
      }
      *(char *)((long)param_1 + 0xb7d) = (char)uVar18;
      *(char *)(param_1 + 0x2df) = (char)uVar18 + (char)(uVar14 << 1);
      uVar6 = 2;
      if (uVar17 < 0x28) {
        uVar6 = 0xe < uVar17;
      }
      *(undefined1 *)((long)param_1 + 0xb7f) = uVar6;
      *(undefined1 *)((long)param_1 + 0xb7e) = 0;
      if (0 < (int)uVar9) goto LAB_002221a0;
LAB_002223a4:
      *(undefined1 *)(param_1 + 0x2e0) = 0;
      *(undefined1 *)((long)param_1 + 0xb82) = 1;
      if ((int)uVar17 < 1) goto LAB_002223b8;
LAB_0022220c:
      uVar7 = param_1[0x16];
      uVar18 = uVar14;
      if (0 < (int)uVar7) {
        uVar8 = 1;
        if (4 < uVar7) {
          uVar8 = 2;
        }
        uVar18 = uVar14 >> (ulong)uVar8;
        if ((int)(9 - uVar7) <= (int)(uVar14 >> (ulong)uVar8)) {
          uVar18 = 9 - uVar7;
        }
      }
      if ((int)uVar18 < 2) {
        uVar18 = 1;
      }
      *(char *)((long)param_1 + 0xb85) = (char)uVar18;
      *(char *)(param_1 + 0x2e1) = (char)uVar18 + (char)(uVar14 << 1);
      uVar6 = 2;
      if (uVar17 < 0x28) {
        uVar6 = 0xe < uVar17;
      }
      *(undefined1 *)((long)param_1 + 0xb87) = uVar6;
      *(undefined1 *)((long)param_1 + 0xb86) = 0;
    }
    else {
      uVar7 = param_1[0x16];
      uVar18 = uVar21;
      if (0 < (int)uVar7) {
        uVar8 = 1;
        if (4 < uVar7) {
          uVar8 = 2;
        }
        uVar18 = uVar21 >> (ulong)uVar8;
        if ((int)(9 - uVar7) <= (int)(uVar21 >> (ulong)uVar8)) {
          uVar18 = 9 - uVar7;
        }
      }
      if ((int)uVar18 < 2) {
        uVar18 = 1;
      }
      *(char *)((long)param_1 + 0xb71) = (char)uVar18;
      *(char *)(param_1 + 0x2dc) = (char)uVar18 + (char)(uVar21 << 1);
      uVar6 = 2;
      if (uVar9 < 0x28) {
        uVar6 = 0xe < uVar9;
      }
      *(undefined1 *)((long)param_1 + 0xb73) = uVar6;
      *(undefined1 *)((long)param_1 + 0xb72) = 1;
      if (0 < (int)uVar17) goto LAB_00222064;
LAB_00222370:
      *(undefined1 *)(param_1 + 0x2dd) = 0;
      *(undefined1 *)((long)param_1 + 0xb76) = 0;
      if ((int)uVar9 < 1) goto LAB_00222380;
LAB_002220cc:
      uVar7 = param_1[0x16];
      uVar18 = uVar21;
      if (0 < (int)uVar7) {
        uVar8 = 1;
        if (4 < uVar7) {
          uVar8 = 2;
        }
        uVar18 = uVar21 >> (ulong)uVar8;
        if ((int)(9 - uVar7) <= (int)(uVar21 >> (ulong)uVar8)) {
          uVar18 = 9 - uVar7;
        }
      }
      if ((int)uVar18 < 2) {
        uVar18 = 1;
      }
      *(char *)((long)param_1 + 0xb79) = (char)uVar18;
      *(char *)(param_1 + 0x2de) = (char)uVar18 + (char)(uVar21 << 1);
      uVar6 = 2;
      if (uVar9 < 0x28) {
        uVar6 = 0xe < uVar9;
      }
      *(undefined1 *)((long)param_1 + 0xb7b) = uVar6;
      *(undefined1 *)((long)param_1 + 0xb7a) = 1;
      if (0 < (int)uVar17) goto LAB_00222138;
LAB_00222394:
      *(undefined1 *)(param_1 + 0x2df) = 0;
      *(undefined1 *)((long)param_1 + 0xb7e) = 0;
      if ((int)uVar9 < 1) goto LAB_002223a4;
LAB_002221a0:
      uVar7 = param_1[0x16];
      uVar18 = uVar21;
      if (0 < (int)uVar7) {
        uVar8 = 1;
        if (4 < uVar7) {
          uVar8 = 2;
        }
        uVar18 = uVar21 >> (ulong)uVar8;
        if ((int)(9 - uVar7) <= (int)(uVar21 >> (ulong)uVar8)) {
          uVar18 = 9 - uVar7;
        }
      }
      if ((int)uVar18 < 2) {
        uVar18 = 1;
      }
      *(char *)((long)param_1 + 0xb81) = (char)uVar18;
      *(char *)(param_1 + 0x2e0) = (char)uVar18 + (char)(uVar21 << 1);
      uVar6 = 2;
      if (uVar9 < 0x28) {
        uVar6 = 0xe < uVar9;
      }
      *(undefined1 *)((long)param_1 + 0xb83) = uVar6;
      *(undefined1 *)((long)param_1 + 0xb82) = 1;
      if (0 < (int)uVar17) goto LAB_0022220c;
LAB_002223b8:
      *(undefined1 *)(param_1 + 0x2e1) = 0;
      *(undefined1 *)((long)param_1 + 0xb86) = 0;
    }
    if ((int)uVar9 < 1) goto LAB_00222dbc;
    uVar17 = param_1[0x16];
    uVar14 = uVar21;
    if (0 < (int)uVar17) {
      uVar18 = 1;
      if (4 < uVar17) {
        uVar18 = 2;
      }
      uVar14 = uVar21 >> (ulong)uVar18;
      if ((int)(9 - uVar17) <= (int)(uVar21 >> (ulong)uVar18)) {
        uVar14 = 9 - uVar17;
      }
    }
    if ((int)uVar14 < 2) {
      uVar14 = 1;
    }
    *(char *)((long)param_1 + 0xb89) = (char)uVar14;
    *(char *)(param_1 + 0x2e2) = (char)uVar14 + (char)(uVar21 << 1);
    uVar6 = 2;
    if (uVar9 < 0x28) {
      uVar6 = 0xe < uVar9;
    }
    goto LAB_00222da0;
  }
  if (uVar14 == 0) {
    uVar17 = param_1[0x15];
  }
  else {
    uVar17 = (uint)(char)param_1[0x24];
    if (param_1[0x22] == 0) {
      uVar17 = param_1[0x15] + uVar17;
    }
  }
  uVar9 = uVar17;
  if (0x3e < (int)uVar17) {
    uVar9 = 0x3f;
  }
  uVar6 = 2;
  if (uVar17 < 0x28) {
    uVar6 = 0xe < uVar17;
  }
  if ((int)uVar17 < 1) {
    *(undefined1 *)(param_1 + 0x2db) = 0;
    *(undefined1 *)((long)param_1 + 0xb6e) = 0;
    *(undefined1 *)(param_1 + 0x2dc) = 0;
    *(undefined1 *)((long)param_1 + 0xb72) = 1;
    if (uVar14 == 0) goto LAB_00221fc0;
LAB_002222b0:
    uVar17 = (uint)*(char *)((long)param_1 + 0x91);
    if (param_1[0x22] == 0) {
      uVar17 = param_1[0x15] + uVar17;
    }
  }
  else {
    uVar17 = uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU);
    uVar21 = param_1[0x16];
    if ((int)uVar21 < 1) {
      if ((int)uVar9 < 2) {
        uVar9 = 1;
      }
      cVar20 = (char)uVar9;
      *(char *)((long)param_1 + 0xb6d) = cVar20;
    }
    else {
      uVar9 = 1;
      if (4 < uVar21) {
        uVar9 = 2;
      }
      uVar9 = uVar17 >> (ulong)uVar9;
      if ((int)(9 - uVar21) <= (int)uVar9) {
        uVar9 = 9 - uVar21;
      }
      if ((int)uVar9 < 2) {
        uVar9 = 1;
      }
      cVar20 = (char)uVar9;
      *(char *)((long)param_1 + 0xb6d) = cVar20;
    }
    cVar16 = cVar20 + (char)uVar17 * '\x02';
    *(char *)(param_1 + 0x2db) = cVar16;
    *(undefined1 *)((long)param_1 + 0xb6f) = uVar6;
    *(undefined1 *)((long)param_1 + 0xb6e) = 0;
    *(char *)((long)param_1 + 0xb71) = cVar20;
    *(char *)(param_1 + 0x2dc) = cVar16;
    *(undefined1 *)((long)param_1 + 0xb73) = uVar6;
    *(undefined1 *)((long)param_1 + 0xb72) = 1;
    if (uVar14 != 0) goto LAB_002222b0;
LAB_00221fc0:
    uVar17 = param_1[0x15];
  }
  uVar9 = uVar17;
  if (0x3e < (int)uVar17) {
    uVar9 = 0x3f;
  }
  uVar6 = 2;
  if (uVar17 < 0x28) {
    uVar6 = 0xe < uVar17;
  }
  if ((int)uVar17 < 1) {
    *(undefined1 *)(param_1 + 0x2dd) = 0;
    *(undefined1 *)((long)param_1 + 0xb76) = 0;
    *(undefined1 *)(param_1 + 0x2de) = 0;
    *(undefined1 *)((long)param_1 + 0xb7a) = 1;
    if (uVar14 == 0) goto LAB_00222354;
LAB_0022245c:
    uVar17 = (uint)*(char *)((long)param_1 + 0x92);
    if (param_1[0x22] == 0) {
      uVar17 = param_1[0x15] + uVar17;
    }
  }
  else {
    uVar17 = uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU);
    uVar21 = param_1[0x16];
    if ((int)uVar21 < 1) {
      if ((int)uVar9 < 2) {
        uVar9 = 1;
      }
      cVar20 = (char)uVar9;
      *(char *)((long)param_1 + 0xb75) = cVar20;
    }
    else {
      uVar9 = 1;
      if (4 < uVar21) {
        uVar9 = 2;
      }
      uVar9 = uVar17 >> (ulong)uVar9;
      if ((int)(9 - uVar21) <= (int)uVar9) {
        uVar9 = 9 - uVar21;
      }
      if ((int)uVar9 < 2) {
        uVar9 = 1;
      }
      cVar20 = (char)uVar9;
      *(char *)((long)param_1 + 0xb75) = cVar20;
    }
    cVar16 = cVar20 + (char)uVar17 * '\x02';
    *(char *)(param_1 + 0x2dd) = cVar16;
    *(undefined1 *)((long)param_1 + 0xb77) = uVar6;
    *(undefined1 *)((long)param_1 + 0xb76) = 0;
    *(char *)((long)param_1 + 0xb79) = cVar20;
    *(char *)(param_1 + 0x2de) = cVar16;
    *(undefined1 *)((long)param_1 + 0xb7b) = uVar6;
    *(undefined1 *)((long)param_1 + 0xb7a) = 1;
    if (uVar14 != 0) goto LAB_0022245c;
LAB_00222354:
    uVar17 = param_1[0x15];
  }
  uVar9 = uVar17;
  if (0x3e < (int)uVar17) {
    uVar9 = 0x3f;
  }
  uVar6 = 2;
  if (uVar17 < 0x28) {
    uVar6 = 0xe < uVar17;
  }
  if ((int)uVar17 < 1) {
    *(undefined1 *)(param_1 + 0x2df) = 0;
    *(undefined1 *)((long)param_1 + 0xb7e) = 0;
    *(undefined1 *)(param_1 + 0x2e0) = 0;
    *(undefined1 *)((long)param_1 + 0xb82) = 1;
    if (uVar14 == 0) goto LAB_00222500;
LAB_00222540:
    uVar14 = (uint)*(char *)((long)param_1 + 0x93);
    if (param_1[0x22] == 0) {
      uVar14 = param_1[0x15] + uVar14;
    }
  }
  else {
    uVar17 = uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU);
    uVar21 = param_1[0x16];
    if ((int)uVar21 < 1) {
      if ((int)uVar9 < 2) {
        uVar9 = 1;
      }
      cVar20 = (char)uVar9;
      *(char *)((long)param_1 + 0xb7d) = cVar20;
    }
    else {
      uVar9 = 1;
      if (4 < uVar21) {
        uVar9 = 2;
      }
      uVar9 = uVar17 >> (ulong)uVar9;
      if ((int)(9 - uVar21) <= (int)uVar9) {
        uVar9 = 9 - uVar21;
      }
      if ((int)uVar9 < 2) {
        uVar9 = 1;
      }
      cVar20 = (char)uVar9;
      *(char *)((long)param_1 + 0xb7d) = cVar20;
    }
    cVar16 = cVar20 + (char)uVar17 * '\x02';
    *(char *)(param_1 + 0x2df) = cVar16;
    *(undefined1 *)((long)param_1 + 0xb7f) = uVar6;
    *(undefined1 *)((long)param_1 + 0xb7e) = 0;
    *(char *)((long)param_1 + 0xb81) = cVar20;
    *(char *)(param_1 + 0x2e0) = cVar16;
    *(undefined1 *)((long)param_1 + 0xb83) = uVar6;
    *(undefined1 *)((long)param_1 + 0xb82) = 1;
    if (uVar14 != 0) goto LAB_00222540;
LAB_00222500:
    uVar14 = param_1[0x15];
  }
  uVar17 = uVar14;
  if (0x3e < (int)uVar14) {
    uVar17 = 0x3f;
  }
  uVar6 = 2;
  if (uVar14 < 0x28) {
    uVar6 = 0xe < uVar14;
  }
  if ((int)uVar14 < 1) {
    *(undefined1 *)(param_1 + 0x2e1) = 0;
    *(undefined1 *)((long)param_1 + 0xb86) = 0;
LAB_00222dbc:
    *(undefined1 *)(param_1 + 0x2e2) = 0;
    *(undefined1 *)((long)param_1 + 0xb8a) = 1;
    return (uint *)0x0;
  }
  uVar14 = uVar17 & ((int)uVar17 >> 0x1f ^ 0xffffffffU);
  uVar9 = param_1[0x16];
  if ((int)uVar9 < 1) {
    if ((int)uVar17 < 2) {
      uVar17 = 1;
    }
    cVar20 = (char)uVar17;
    *(char *)((long)param_1 + 0xb85) = cVar20;
  }
  else {
    uVar17 = 1;
    if (4 < uVar9) {
      uVar17 = 2;
    }
    uVar17 = uVar14 >> (ulong)uVar17;
    if ((int)(9 - uVar9) <= (int)uVar17) {
      uVar17 = 9 - uVar9;
    }
    if ((int)uVar17 < 2) {
      uVar17 = 1;
    }
    cVar20 = (char)uVar17;
    *(char *)((long)param_1 + 0xb85) = cVar20;
  }
  cVar16 = cVar20 + (char)uVar14 * '\x02';
  *(char *)(param_1 + 0x2e1) = cVar16;
  *(undefined1 *)((long)param_1 + 0xb87) = uVar6;
  *(undefined1 *)((long)param_1 + 0xb86) = 0;
  *(char *)((long)param_1 + 0xb89) = cVar20;
  *(char *)(param_1 + 0x2e2) = cVar16;
LAB_00222da0:
  *(undefined1 *)((long)param_1 + 0xb8b) = uVar6;
  *(undefined1 *)((long)param_1 + 0xb8a) = 1;
  return (uint *)0x0;
}



/* Entry: 00220c9c; end: 0022149f;  */

void FUN_00220c9c(long param_1,int *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  ulong *puVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  ulong uStack_b0;
  ulong uStack_a8;
  int iStack_9c;
  int *piStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  iVar2 = *param_2;
  iStack_9c = param_2[1];
  lVar13 = *(long *)(param_1 + 0xb20);
  *(undefined1 *)(lVar13 + 0x27) = 0x81;
  *(undefined1 *)(lVar13 + 0x47) = 0x81;
  *(undefined1 *)(lVar13 + 0x67) = 0x81;
  *(undefined1 *)(lVar13 + 0x87) = 0x81;
  *(undefined1 *)(lVar13 + 0xa7) = 0x81;
  *(undefined1 *)(lVar13 + 199) = 0x81;
  *(undefined1 *)(lVar13 + 0xe7) = 0x81;
  *(undefined1 *)(lVar13 + 0x107) = 0x81;
  *(undefined1 *)(lVar13 + 0x127) = 0x81;
  *(undefined1 *)(lVar13 + 0x147) = 0x81;
  *(undefined1 *)(lVar13 + 0x167) = 0x81;
  *(undefined1 *)(lVar13 + 0x187) = 0x81;
  *(undefined1 *)(lVar13 + 0x1a7) = 0x81;
  *(undefined1 *)(lVar13 + 0x1c7) = 0x81;
  *(undefined1 *)(lVar13 + 0x1e7) = 0x81;
  *(undefined1 *)(lVar13 + 0x207) = 0x81;
  *(undefined1 *)(lVar13 + 0x247) = 0x81;
  *(undefined1 *)(lVar13 + 599) = 0x81;
  *(undefined1 *)(lVar13 + 0x267) = 0x81;
  *(undefined1 *)(lVar13 + 0x277) = 0x81;
  *(undefined1 *)(lVar13 + 0x287) = 0x81;
  *(undefined1 *)(lVar13 + 0x297) = 0x81;
  *(undefined1 *)(lVar13 + 0x2a7) = 0x81;
  *(undefined1 *)(lVar13 + 0x2b7) = 0x81;
  *(undefined1 *)(lVar13 + 0x2c7) = 0x81;
  *(undefined1 *)(lVar13 + 0x2d7) = 0x81;
  *(undefined1 *)(lVar13 + 0x2e7) = 0x81;
  *(undefined1 *)(lVar13 + 0x2f7) = 0x81;
  *(undefined1 *)(lVar13 + 0x307) = 0x81;
  *(undefined1 *)(lVar13 + 0x317) = 0x81;
  *(undefined1 *)(lVar13 + 0x327) = 0x81;
  *(undefined1 *)(lVar13 + 0x337) = 0x81;
  if (iStack_9c < 1) {
    *(undefined8 *)(lVar13 + 0x14) = 0x7f7f7f7f7f7f7f7f;
    *(undefined8 *)(lVar13 + 0xf) = 0x7f7f7f7f7f7f7f7f;
    *(undefined8 *)(lVar13 + 7) = 0x7f7f7f7f7f7f7f7f;
    *(undefined8 *)(lVar13 + 0x227) = 0x7f7f7f7f7f7f7f7f;
    *(undefined1 *)(lVar13 + 0x22f) = 0x7f;
    *(undefined8 *)(lVar13 + 0x237) = 0x7f7f7f7f7f7f7f7f;
    *(undefined1 *)(lVar13 + 0x23f) = 0x7f;
    iVar7 = *(int *)(param_1 + 0x198);
  }
  else {
    *(undefined1 *)(lVar13 + 0x237) = 0x81;
    *(undefined1 *)(lVar13 + 0x227) = 0x81;
    *(undefined1 *)(lVar13 + 7) = 0x81;
    iVar7 = *(int *)(param_1 + 0x198);
  }
  if (0 < iVar7) {
    lVar11 = 0;
    lVar17 = 0;
    puVar1 = (undefined8 *)(lVar13 + 0x28);
    uStack_b0 = 5;
    if (iStack_9c == 0) {
      uStack_b0 = 6;
    }
    uStack_a8 = (ulong)(iStack_9c == 0) << 2;
    puStack_88 = (undefined8 *)(lVar13 + 0x208);
    lStack_78 = 0x301;
    piStack_98 = param_2;
    do {
      lVar12 = *(long *)(piStack_98 + 6);
      if (lVar17 != 0) {
        *(undefined4 *)(lVar13 + 4) = *(undefined4 *)(lVar13 + 0x14);
        *(undefined4 *)(lVar13 + 0x24) = *(undefined4 *)(lVar13 + 0x34);
        *(undefined4 *)(lVar13 + 0x44) = *(undefined4 *)(lVar13 + 0x54);
        *(undefined4 *)(lVar13 + 100) = *(undefined4 *)(lVar13 + 0x74);
        *(undefined4 *)(lVar13 + 0x84) = *(undefined4 *)(lVar13 + 0x94);
        *(undefined4 *)(lVar13 + 0xa4) = *(undefined4 *)(lVar13 + 0xb4);
        *(undefined4 *)(lVar13 + 0xc4) = *(undefined4 *)(lVar13 + 0xd4);
        *(undefined4 *)(lVar13 + 0xe4) = *(undefined4 *)(lVar13 + 0xf4);
        *(undefined4 *)(lVar13 + 0x104) = *(undefined4 *)(lVar13 + 0x114);
        *(undefined4 *)(lVar13 + 0x124) = *(undefined4 *)(lVar13 + 0x134);
        *(undefined4 *)(lVar13 + 0x144) = *(undefined4 *)(lVar13 + 0x154);
        *(undefined4 *)(lVar13 + 0x164) = *(undefined4 *)(lVar13 + 0x174);
        *(undefined4 *)(lVar13 + 0x184) = *(undefined4 *)(lVar13 + 0x194);
        *(undefined4 *)(lVar13 + 0x1a4) = *(undefined4 *)(lVar13 + 0x1b4);
        *(undefined4 *)(lVar13 + 0x1c4) = *(undefined4 *)(lVar13 + 0x1d4);
        *(undefined4 *)(lVar13 + 0x1e4) = *(undefined4 *)(lVar13 + 500);
        *(undefined4 *)(lVar13 + 0x204) = *(undefined4 *)(lVar13 + 0x214);
        *(undefined4 *)(lVar13 + 0x224) = *(undefined4 *)(lVar13 + 0x22c);
        *(undefined4 *)(lVar13 + 0x234) = *(undefined4 *)(lVar13 + 0x23c);
        *(undefined4 *)(lVar13 + 0x244) = *(undefined4 *)(lVar13 + 0x24c);
        *(undefined4 *)(lVar13 + 0x254) = *(undefined4 *)(lVar13 + 0x25c);
        *(undefined4 *)(lVar13 + 0x264) = *(undefined4 *)(lVar13 + 0x26c);
        *(undefined4 *)(lVar13 + 0x274) = *(undefined4 *)(lVar13 + 0x27c);
        *(undefined4 *)(lVar13 + 0x284) = *(undefined4 *)(lVar13 + 0x28c);
        *(undefined4 *)(lVar13 + 0x294) = *(undefined4 *)(lVar13 + 0x29c);
        *(undefined4 *)(lVar13 + 0x2a4) = *(undefined4 *)(lVar13 + 0x2ac);
        *(undefined4 *)(lVar13 + 0x2b4) = *(undefined4 *)(lVar13 + 700);
        *(undefined4 *)(lVar13 + 0x2c4) = *(undefined4 *)(lVar13 + 0x2cc);
        *(undefined4 *)(lVar13 + 0x2d4) = *(undefined4 *)(lVar13 + 0x2dc);
        *(undefined4 *)(lVar13 + 0x2e4) = *(undefined4 *)(lVar13 + 0x2ec);
        *(undefined4 *)(lVar13 + 0x2f4) = *(undefined4 *)(lVar13 + 0x2fc);
        *(undefined4 *)(lVar13 + 0x304) = *(undefined4 *)(lVar13 + 0x30c);
        *(undefined4 *)(lVar13 + 0x314) = *(undefined4 *)(lVar13 + 0x31c);
        *(undefined4 *)(lVar13 + 0x324) = *(undefined4 *)(lVar13 + 0x32c);
        *(undefined4 *)(lVar13 + 0x334) = *(undefined4 *)(lVar13 + 0x33c);
      }
      lVar14 = lVar12 + lVar17 * 800;
      puStack_90 = (undefined8 *)(*(long *)(param_1 + 0xb08) + lVar17 * 0x20);
      uVar10 = *(uint *)(lVar14 + 0x314);
      lStack_70 = lVar11;
      if (iStack_9c < 1) {
        if (*(char *)(lVar14 + 0x300) == '\0') goto LAB_00221220;
LAB_002212f0:
        lVar18 = 0;
        uVar3 = *(undefined4 *)(lVar13 + 0x18);
        *(undefined4 *)(lVar13 + 0x198) = uVar3;
        *(undefined4 *)(lVar13 + 0x118) = uVar3;
        *(undefined4 *)(lVar13 + 0x98) = uVar3;
        lVar11 = lVar12 + lVar11;
        lVar12 = lVar12 + lStack_78;
        lStack_80 = lVar17;
        do {
          uVar15 = (ulong)*(ushort *)(&UNK_007edd0e + lVar18 * 2);
          (**(code **)((ulong)*(byte *)(lVar12 + lVar18) * 8 + 0xb6cf40))((long)puVar1 + uVar15);
          uVar5 = uVar10 >> 0x1e;
          if (uVar5 < 2) {
            if (uVar5 != 0) {
              puVar9 = (undefined8 *)0xb6cfc0;
LAB_0022131c:
              (*(code *)*puVar9)(lVar11,(long)puVar1 + uVar15);
            }
          }
          else {
            if (uVar5 == 2) {
              puVar9 = (undefined8 *)0xb6cfb8;
              goto LAB_0022131c;
            }
            (*pcRam0000000000b6cfb0)(lVar11,(long)puVar1 + uVar15,0);
          }
          lVar18 = lVar18 + 1;
          uVar10 = uVar10 << 2;
          lVar11 = lVar11 + 0x20;
        } while (lVar18 != 0x10);
        puVar6 = &uStack_b0;
        if (lStack_80 != 0) {
          puVar6 = &uStack_a8;
        }
        uVar16 = *puVar6;
        lVar17 = lStack_80;
      }
      else {
        uVar19 = *puStack_90;
        *(undefined8 *)(lVar13 + 0x10) = puStack_90[1];
        *(undefined8 *)(lVar13 + 8) = uVar19;
        *(undefined8 *)(lVar13 + 0x228) = puStack_90[2];
        *(undefined8 *)(lVar13 + 0x238) = puStack_90[3];
        if (*(char *)(lVar14 + 0x300) != '\0') {
          if (lVar17 < (long)*(int *)(param_1 + 0x198) + -1) {
            iVar7 = *(int *)(puStack_90 + 4);
          }
          else {
            iVar7 = (uint)*(byte *)((long)puStack_90 + 0xf) * 0x1010101;
          }
          *(int *)(lVar13 + 0x18) = iVar7;
          goto LAB_002212f0;
        }
LAB_00221220:
        puVar6 = &uStack_b0;
        if (lVar17 != 0) {
          puVar6 = &uStack_a8;
        }
        uVar16 = *puVar6;
        uVar15 = uVar16;
        if (*(byte *)(lVar14 + 0x301) != 0) {
          uVar15 = (ulong)*(byte *)(lVar14 + 0x301);
        }
        (**(code **)(uVar15 * 8 + 0xb6cf08))(puVar1);
        if (uVar10 != 0) {
          lVar18 = 0;
          lVar12 = lVar12 + lVar11;
          lStack_80 = lVar17;
          do {
            uVar5 = uVar10 >> 0x1e;
            if (uVar5 < 2) {
              if (uVar5 != 0) {
                puVar9 = (undefined8 *)0xb6cfc0;
LAB_0022126c:
                (*(code *)*puVar9)(lVar12,(long)puVar1 + (ulong)*(ushort *)(&UNK_007edd0e + lVar18))
                ;
              }
            }
            else {
              if (uVar5 == 2) {
                puVar9 = (undefined8 *)0xb6cfb8;
                goto LAB_0022126c;
              }
              (*pcRam0000000000b6cfb0)
                        (lVar12,(long)puVar1 + (ulong)*(ushort *)(&UNK_007edd0e + lVar18),0);
            }
            uVar10 = uVar10 << 2;
            lVar18 = lVar18 + 2;
            lVar12 = lVar12 + 0x20;
            lVar17 = lStack_80;
          } while (lVar18 != 0x20);
        }
      }
      uVar10 = *(uint *)(lVar14 + 0x318);
      if (*(byte *)(lVar14 + 0x311) != 0) {
        uVar16 = (ulong)*(byte *)(lVar14 + 0x311);
      }
      (**(code **)(uVar16 * 8 + 0xb6ced0))(lVar13 + 0x248);
      (**(code **)(uVar16 * 8 + 0xb6ced0))(lVar13 + 600);
      if ((uVar10 & 0xff) != 0) {
        puVar9 = (undefined8 *)0xb6cfc8;
        if ((uVar10 & 0xaa) != 0) {
          puVar9 = (undefined8 *)0xb6cfd0;
        }
        (*(code *)*puVar9)(lVar14 + 0x200,lVar13 + 0x248);
      }
      lVar11 = lStack_70;
      if ((uVar10 & 0xff00) != 0) {
        puVar9 = (undefined8 *)0xb6cfc8;
        if ((uVar10 & 0xaa00) != 0) {
          puVar9 = (undefined8 *)0xb6cfd0;
        }
        (*(code *)*puVar9)(lVar14 + 0x280,lVar13 + 600);
      }
      if (iStack_9c < *(int *)(param_1 + 0x19c) + -1) {
        uVar19 = *puStack_88;
        puStack_90[1] = puStack_88[1];
        *puStack_90 = uVar19;
        puStack_90[2] = *(undefined8 *)(lVar13 + 0x328);
        puStack_90[3] = *(undefined8 *)(lVar13 + 0x338);
      }
      iVar7 = *(int *)(param_1 + 0xb44);
      puVar8 = (undefined8 *)
               (*(long *)(param_1 + 0xb28) + lVar17 * 0x10 +
               (long)iVar2 * 0x10 * (long)*(int *)(param_1 + 0xb40));
      lVar12 = *(long *)(param_1 + 0xb30);
      lVar18 = *(long *)(param_1 + 0xb38);
      uVar19 = *puVar1;
      puVar8[1] = *(undefined8 *)(lVar13 + 0x30);
      *puVar8 = uVar19;
      uVar19 = *(undefined8 *)(lVar13 + 0x48);
      puVar9 = (undefined8 *)((long)puVar8 + (long)*(int *)(param_1 + 0xb40));
      puVar9[1] = *(undefined8 *)(lVar13 + 0x50);
      *puVar9 = uVar19;
      uVar19 = *(undefined8 *)(lVar13 + 0x68);
      puVar9 = (undefined8 *)((long)puVar8 + (long)*(int *)(param_1 + 0xb40) * 2);
      puVar9[1] = *(undefined8 *)(lVar13 + 0x70);
      *puVar9 = uVar19;
      uVar19 = *(undefined8 *)(lVar13 + 0x88);
      puVar9 = (undefined8 *)((long)puVar8 + (long)*(int *)(param_1 + 0xb40) * 3);
      puVar9[1] = *(undefined8 *)(lVar13 + 0x90);
      *puVar9 = uVar19;
      uVar19 = *(undefined8 *)(lVar13 + 0xa8);
      puVar9 = (undefined8 *)((long)puVar8 + (long)*(int *)(param_1 + 0xb40) * 4);
      puVar9[1] = *(undefined8 *)(lVar13 + 0xb0);
      *puVar9 = uVar19;
      uVar19 = *(undefined8 *)(lVar13 + 200);
      puVar9 = (undefined8 *)((long)puVar8 + (long)*(int *)(param_1 + 0xb40) * 5);
      puVar9[1] = *(undefined8 *)(lVar13 + 0xd0);
      *puVar9 = uVar19;
      uVar19 = *(undefined8 *)(lVar13 + 0xe8);
      puVar9 = (undefined8 *)((long)puVar8 + (long)*(int *)(param_1 + 0xb40) * 6);
      puVar9[1] = *(undefined8 *)(lVar13 + 0xf0);
      *puVar9 = uVar19;
      puVar9 = (undefined8 *)((long)puVar8 + (long)*(int *)(param_1 + 0xb40) * 7);
      uVar19 = *(undefined8 *)(lVar13 + 0x108);
      puVar9[1] = *(undefined8 *)(lVar13 + 0x110);
      *puVar9 = uVar19;
      iVar4 = *(int *)(param_1 + 0xb40);
      uVar19 = *(undefined8 *)(lVar13 + 0x128);
      (puVar8 + iVar4)[1] = *(undefined8 *)(lVar13 + 0x130);
      puVar8[iVar4] = uVar19;
      uVar19 = *(undefined8 *)(lVar13 + 0x148);
      puVar9 = (undefined8 *)((long)puVar8 + (long)*(int *)(param_1 + 0xb40) * 9);
      puVar9[1] = *(undefined8 *)(lVar13 + 0x150);
      *puVar9 = uVar19;
      lVar14 = (long)iVar2 * 8 * (long)iVar7;
      uVar19 = *(undefined8 *)(lVar13 + 0x168);
      puVar9 = (undefined8 *)((long)puVar8 + (long)*(int *)(param_1 + 0xb40) * 10);
      puVar9[1] = *(undefined8 *)(lVar13 + 0x170);
      *puVar9 = uVar19;
      uVar19 = *(undefined8 *)(lVar13 + 0x188);
      puVar9 = (undefined8 *)((long)puVar8 + (long)*(int *)(param_1 + 0xb40) * 0xb);
      puVar9[1] = *(undefined8 *)(lVar13 + 400);
      *puVar9 = uVar19;
      uVar19 = *(undefined8 *)(lVar13 + 0x1a8);
      puVar9 = (undefined8 *)((long)puVar8 + (long)*(int *)(param_1 + 0xb40) * 0xc);
      puVar9[1] = *(undefined8 *)(lVar13 + 0x1b0);
      *puVar9 = uVar19;
      uVar19 = *(undefined8 *)(lVar13 + 0x1c8);
      puVar9 = (undefined8 *)((long)puVar8 + (long)*(int *)(param_1 + 0xb40) * 0xd);
      puVar9[1] = *(undefined8 *)(lVar13 + 0x1d0);
      *puVar9 = uVar19;
      uVar19 = *(undefined8 *)(lVar13 + 0x1e8);
      puVar9 = (undefined8 *)((long)puVar8 + (long)*(int *)(param_1 + 0xb40) * 0xe);
      puVar9[1] = *(undefined8 *)(lVar13 + 0x1f0);
      *puVar9 = uVar19;
      puVar8 = (undefined8 *)((long)puVar8 + (long)*(int *)(param_1 + 0xb40) * 0xf);
      uVar19 = *puStack_88;
      puVar8[1] = puStack_88[1];
      *puVar8 = uVar19;
      puVar9 = (undefined8 *)(lVar12 + lVar17 * 8 + lVar14);
      puVar8 = (undefined8 *)(lVar18 + lVar17 * 8 + lVar14);
      *puVar9 = *(undefined8 *)(lVar13 + 0x248);
      *puVar8 = *(undefined8 *)(lVar13 + 600);
      *(undefined8 *)((long)puVar9 + (long)*(int *)(param_1 + 0xb44)) =
           *(undefined8 *)(lVar13 + 0x268);
      *(undefined8 *)((long)puVar8 + (long)*(int *)(param_1 + 0xb44)) =
           *(undefined8 *)(lVar13 + 0x278);
      *(undefined8 *)((long)puVar9 + (long)*(int *)(param_1 + 0xb44) * 2) =
           *(undefined8 *)(lVar13 + 0x288);
      *(undefined8 *)((long)puVar8 + (long)*(int *)(param_1 + 0xb44) * 2) =
           *(undefined8 *)(lVar13 + 0x298);
      *(undefined8 *)((long)puVar9 + (long)*(int *)(param_1 + 0xb44) * 3) =
           *(undefined8 *)(lVar13 + 0x2a8);
      *(undefined8 *)((long)puVar8 + (long)*(int *)(param_1 + 0xb44) * 3) =
           *(undefined8 *)(lVar13 + 0x2b8);
      *(undefined8 *)((long)puVar9 + (long)*(int *)(param_1 + 0xb44) * 4) =
           *(undefined8 *)(lVar13 + 0x2c8);
      *(undefined8 *)((long)puVar8 + (long)*(int *)(param_1 + 0xb44) * 4) =
           *(undefined8 *)(lVar13 + 0x2d8);
      *(undefined8 *)((long)puVar9 + (long)*(int *)(param_1 + 0xb44) * 5) =
           *(undefined8 *)(lVar13 + 0x2e8);
      *(undefined8 *)((long)puVar8 + (long)*(int *)(param_1 + 0xb44) * 5) =
           *(undefined8 *)(lVar13 + 0x2f8);
      *(undefined8 *)((long)puVar9 + (long)*(int *)(param_1 + 0xb44) * 6) =
           *(undefined8 *)(lVar13 + 0x308);
      *(undefined8 *)((long)puVar8 + (long)*(int *)(param_1 + 0xb44) * 6) =
           *(undefined8 *)(lVar13 + 0x318);
      *(undefined8 *)((long)puVar9 + (long)*(int *)(param_1 + 0xb44) * 7) =
           *(undefined8 *)(lVar13 + 0x328);
      *(undefined8 *)((long)puVar8 + (long)*(int *)(param_1 + 0xb44) * 7) =
           *(undefined8 *)(lVar13 + 0x338);
      lVar17 = lVar17 + 1;
      lVar11 = lVar11 + 800;
      lStack_78 = lStack_78 + 800;
    } while (lVar17 < *(int *)(param_1 + 0x198));
  }
  return;
}



/* Entry: 002214a0; end: 00221cab;  */

uint * FUN_002214a0(uint *param_1,uint *param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint *puVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  char cVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  char cVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  uint *puVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  int iVar30;
  uint uVar31;
  int iVar33;
  uint uVar34;
  undefined8 uVar32;
  int iVar35;
  int iVar36;
  byte abStack_c0 [64];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar5 = param_1 + 0x36;
  uVar20 = *puVar5;
  bVar4 = (&UNK_007edd0a)[(int)param_1[0x2da]];
  uVar17 = param_1[0x2d0];
  uVar13 = param_1[0x2d1];
  lVar14 = *(long *)(param_1 + 0x2ca);
  lVar10 = *(long *)(param_1 + 0x2cc);
  lVar11 = *(long *)(param_1 + 0x2ce);
  uVar16 = param_1[0x37];
  uVar9 = param_1[0x6b];
  if (param_1[0x32] == 2) {
    FUN_00220c9c(param_1);
  }
  lVar12 = (long)(int)((bVar4 >> 1) * uVar13);
  if ((param_1[0x38] != 0) &&
     (lVar29 = (long)(int)param_1[0x68], (int)param_1[0x68] < (int)param_1[0x6a])) {
    uVar7 = param_1[0x37];
    lVar28 = lVar29 << 3;
    lVar22 = lVar29 << 4;
    lVar21 = lVar29 << 2;
    do {
      lVar26 = *(long *)(param_1 + 0x3a);
      bVar2 = *(byte *)(lVar26 + lVar21);
      if (bVar2 != 0) {
        uVar8 = param_1[0x2d0];
        puVar23 = (uint *)(ulong)uVar8;
        lVar18 = *(long *)(param_1 + 0x2ca) + (long)(int)(param_1[0x36] * uVar8 * 0x10);
        uVar31 = (uint)bVar2;
        if (param_1[0x2da] == 1) {
          if (0 < lVar29) {
            puVar5 = puVar23;
            (*pcRam0000000000b6cf90)(lVar18 + lVar22,puVar23,bVar2 + 4);
          }
          if (*(char *)(lVar26 + lVar21 + 2) != '\0') {
            puVar5 = puVar23;
            (*pcRam0000000000b6cf98)(lVar18 + lVar22,puVar23,bVar2);
          }
          if (0 < (int)uVar7) {
            puVar5 = puVar23;
            (*pcRam0000000000b6cfa0)(lVar18 + lVar22,puVar23,uVar31 + 4);
          }
          if (*(char *)(lVar26 + lVar21 + 2) != '\0') {
            (*pcRam0000000000b6cfa8)(lVar18 + lVar22,puVar23,bVar2);
            puVar5 = puVar23;
          }
        }
        else {
          bVar3 = ((byte *)(lVar26 + lVar21))[1];
          uVar34 = param_1[0x2d1];
          lVar24 = (long)(int)(param_1[0x36] * uVar34 * 8);
          lVar25 = *(long *)(param_1 + 0x2cc) + lVar28;
          lVar27 = *(long *)(param_1 + 0x2ce) + lVar28;
          lVar26 = lVar26 + lVar21;
          uVar6 = *(undefined1 *)(lVar26 + 3);
          if (0 < lVar29) {
            (*pcRam0000000000b6ceb0)(lVar18 + lVar22,puVar23,bVar2 + 4,bVar3,uVar6);
            puVar5 = (uint *)(lVar27 + lVar24);
            (*pcRam0000000000b6cec0)(lVar25 + lVar24,puVar5,uVar34,uVar31 + 4,bVar3,uVar6);
          }
          if (*(char *)(lVar26 + 2) != '\0') {
            (*pcRam0000000000b6ceb8)(lVar18 + lVar22,uVar8,bVar2,bVar3,uVar6);
            puVar5 = (uint *)(lVar27 + lVar24);
            (*pcRam0000000000b6cec8)(lVar25 + lVar24,puVar5,uVar34,bVar2,bVar3,uVar6);
          }
          if (0 < (int)uVar7) {
            (*pcRam0000000000b6cfe0)(lVar18 + lVar22,uVar8,uVar31 + 4,bVar3,uVar6);
            puVar5 = (uint *)(lVar27 + lVar24);
            (*pcRam0000000000b6cff0)(lVar25 + lVar24,puVar5,uVar34,bVar2 + 4,bVar3,uVar6);
          }
          if (*(char *)(lVar26 + 2) != '\0') {
            (*pcRam0000000000b6cfe8)(lVar18 + lVar22,uVar8,bVar2,bVar3,uVar6);
            puVar5 = (uint *)(lVar27 + lVar24);
            (*pcRam0000000000b6cff8)(lVar25 + lVar24,puVar5,uVar34,bVar2,bVar3,uVar6);
          }
        }
      }
      lVar29 = lVar29 + 1;
      lVar28 = lVar28 + 8;
      lVar22 = lVar22 + 0x10;
      lVar21 = lVar21 + 4;
    } while (lVar29 < (int)param_1[0x6a]);
  }
  lVar29 = (long)(int)uVar20 * (long)(int)uVar17 * 0x10;
  uVar7 = (uint)bVar4;
  lVar28 = (long)(int)(uVar20 * uVar13 * 8);
  if (param_1[0xce] != 0) {
    lVar22 = (long)(int)param_1[0x68];
    uVar13 = param_1[0x6a];
    if ((int)param_1[0x68] < (int)uVar13) {
      puVar23 = param_1 + 0xcf;
      do {
        lVar21 = *(long *)(param_1 + 0x3c) + lVar22 * 800;
        uVar8 = (uint)*(byte *)(lVar21 + 0x31c);
        if (3 < uVar8) {
          lVar26 = 0;
          uVar13 = param_1[0x2d1];
          lVar18 = *(long *)(param_1 + 0x2cc);
          lVar27 = (long)(int)(uVar13 * param_1[0x36] * 8);
          lVar25 = *(long *)(param_1 + 0x2ce);
          uVar31 = param_1[0xcf];
          uVar34 = param_1[0xd0];
          do {
            uVar1 = param_1[(long)(int)uVar31 + 0xd1];
            uVar34 = param_1[(long)(int)uVar34 + 0xd1];
            param_1[(long)(int)uVar31 + 0xd1] = uVar1 - uVar34 & 0x7fffffff;
            iVar30 = (int)*(undefined8 *)puVar23 + 1;
            iVar33 = (int)((ulong)*(undefined8 *)puVar23 >> 0x20) + 1;
            iVar35 = -(uint)(iVar30 == 0x37);
            iVar36 = -(uint)(iVar33 == 0x37);
            uVar31 = CONCAT13((byte)((uint)iVar30 >> 0x18) & ~(byte)((uint)iVar35 >> 0x18),
                              CONCAT12((byte)((uint)iVar30 >> 0x10) & ~(byte)((uint)iVar35 >> 0x10),
                                       CONCAT11((byte)((uint)iVar30 >> 8) &
                                                ~(byte)((uint)iVar35 >> 8),
                                                (byte)iVar30 & ~(byte)iVar35)));
            uVar32 = CONCAT17((byte)((uint)iVar33 >> 0x18) & ~(byte)((uint)iVar36 >> 0x18),
                              CONCAT16((byte)((uint)iVar33 >> 0x10) & ~(byte)((uint)iVar36 >> 0x10),
                                       CONCAT15((byte)((uint)iVar33 >> 8) &
                                                ~(byte)((uint)iVar36 >> 8),
                                                CONCAT14((byte)iVar33 & ~(byte)iVar36,uVar31))));
            abStack_c0[lVar26] = (byte)(((int)((uVar1 - uVar34) * 2) >> 0x18) * uVar8 >> 8) ^ 0x80;
            *(undefined8 *)puVar23 = uVar32;
            lVar26 = lVar26 + 1;
            uVar34 = (uint)((ulong)uVar32 >> 0x20);
          } while (lVar26 != 0x40);
          (*pcRam0000000000b6cea8)(abStack_c0,lVar18 + lVar27 + lVar22 * 8,uVar13);
          lVar26 = 0;
          bVar4 = *(byte *)(lVar21 + 0x31c);
          uVar32 = *(undefined8 *)puVar23;
          do {
            uVar8 = param_1[(long)(int)uVar32 + 0xd1];
            uVar31 = param_1[(long)(int)((ulong)uVar32 >> 0x20) + 0xd1];
            param_1[(long)(int)uVar32 + 0xd1] = uVar8 - uVar31 & 0x7fffffff;
            iVar30 = (int)*(undefined8 *)puVar23 + 1;
            iVar33 = (int)((ulong)*(undefined8 *)puVar23 >> 0x20) + 1;
            iVar35 = -(uint)(iVar30 == 0x37);
            iVar36 = -(uint)(iVar33 == 0x37);
            uVar32 = CONCAT17((byte)((uint)iVar33 >> 0x18) & ~(byte)((uint)iVar36 >> 0x18),
                              CONCAT16((byte)((uint)iVar33 >> 0x10) & ~(byte)((uint)iVar36 >> 0x10),
                                       CONCAT15((byte)((uint)iVar33 >> 8) &
                                                ~(byte)((uint)iVar36 >> 8),
                                                CONCAT14((byte)iVar33 & ~(byte)iVar36,
                                                         CONCAT13((byte)((uint)iVar30 >> 0x18) &
                                                                  ~(byte)((uint)iVar35 >> 0x18),
                                                                  CONCAT12((byte)((uint)iVar30 >>
                                                                                 0x10) &
                                                                           ~(byte)((uint)iVar35 >>
                                                                                  0x10),
                                                                           CONCAT11((byte)((uint)
                                                  iVar30 >> 8) & ~(byte)((uint)iVar35 >> 8),
                                                  (byte)iVar30 & ~(byte)iVar35)))))));
            *(undefined8 *)puVar23 = uVar32;
            abStack_c0[lVar26] =
                 (byte)(((int)((uVar8 - uVar31) * 2) >> 0x18) * (uint)bVar4 >> 8) ^ 0x80;
            lVar26 = lVar26 + 1;
          } while (lVar26 != 0x40);
          puVar5 = (uint *)(lVar25 + lVar27 + lVar22 * 8);
          (*pcRam0000000000b6cea8)(abStack_c0,puVar5,uVar13);
          uVar13 = param_1[0x6a];
        }
        lVar22 = lVar22 + 1;
      } while (lVar22 < (int)uVar13);
    }
  }
  lVar14 = (lVar14 - (long)(int)uVar17 * (long)(int)uVar7) + lVar29;
  lVar10 = (lVar10 - lVar12) + lVar28;
  lVar11 = (lVar11 - lVar12) + lVar28;
  if (*(long *)(param_2 + 0x10) == 0) {
    param_2 = (uint *)((long)&MACH_HEADER.magic + 1);
    if (uVar20 + 1 == param_1[0x34]) goto LAB_00221bd8;
    goto LAB_00221c40;
  }
  if (uVar16 == 0) {
    uVar13 = 0;
    lVar29 = *(long *)(param_1 + 0x2ca) + lVar29;
    lVar22 = *(long *)(param_1 + 0x2cc) + lVar28;
    lVar28 = *(long *)(param_1 + 0x2ce) + lVar28;
  }
  else {
    uVar13 = uVar16 * 0x10 - uVar7;
    lVar29 = lVar14;
    lVar22 = lVar10;
    lVar28 = lVar11;
  }
  puVar23 = (uint *)0x0;
  *(long *)(param_2 + 6) = lVar29;
  *(long *)(param_2 + 8) = lVar22;
  *(long *)(param_2 + 10) = lVar28;
  uVar8 = 0;
  if ((int)uVar16 < (int)(uVar9 - 1)) {
    uVar8 = uVar7;
  }
  uVar8 = (uVar16 * 0x10 + 0x10) - uVar8;
  if ((int)param_2[0x21] <= (int)uVar8) {
    uVar8 = param_2[0x21];
  }
  param_2[0x26] = 0;
  param_2[0x27] = 0;
  if ((*(long *)(param_1 + 0x2e6) == 0) || (uVar8 - uVar13 == 0 || (int)uVar8 < (int)uVar13)) {
LAB_00221b08:
    uVar31 = param_2[0x20];
    iVar30 = uVar31 - uVar13;
    if (iVar30 != 0 && (int)uVar13 <= (int)uVar31) {
      *(long *)(param_2 + 6) = *(long *)(param_2 + 6) + (long)(int)param_1[0x2d0] * (long)iVar30;
      uVar13 = param_1[0x2d1];
      *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + (long)(int)uVar13 * (long)(iVar30 >> 1);
      *(long *)(param_2 + 10) = *(long *)(param_2 + 10) + (long)(int)uVar13 * (long)(iVar30 >> 1);
      uVar13 = uVar31;
      if (puVar23 != (uint *)0x0) {
        puVar23 = (uint *)((long)puVar23 + (long)(int)*param_2 * (long)iVar30);
        *(uint **)(param_2 + 0x26) = puVar23;
      }
    }
    if (uVar8 - uVar13 == 0 || (int)uVar8 < (int)uVar13) {
      param_2 = (uint *)((long)&MACH_HEADER.magic + 1);
      if (uVar20 + 1 == param_1[0x34]) goto LAB_00221bd8;
    }
    else {
      lVar28 = (long)(int)param_2[0x1e];
      lVar29 = (lVar28 << 0x20) >> 0x21;
      *(long *)(param_2 + 6) = *(long *)(param_2 + 6) + lVar28;
      *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + lVar29;
      *(long *)(param_2 + 10) = *(long *)(param_2 + 10) + lVar29;
      if (puVar23 != (uint *)0x0) {
        *(long *)(param_2 + 0x26) = (long)puVar23 + lVar28;
      }
      param_2[2] = uVar13 - uVar31;
      param_2[3] = param_2[0x1f] - param_2[0x1e];
      param_2[4] = uVar8 - uVar13;
      (**(code **)(param_2 + 0x10))();
      if (uVar20 + 1 == param_1[0x34]) {
LAB_00221bd8:
        if ((int)uVar16 < (int)(uVar9 - 1)) {
          _memcpy(*(long *)(param_1 + 0x2ca) - (long)(int)uVar17 * (long)(int)uVar7,
                  lVar14 + (long)(int)param_1[0x2d0] * 0x10,(long)(int)uVar17 * (long)(int)uVar7);
          _memcpy(*(long *)(param_1 + 0x2cc) + -lVar12,lVar10 + (long)(int)param_1[0x2d1] * 8,lVar12
                 );
          puVar5 = (uint *)(lVar11 + (long)(int)param_1[0x2d1] * 8);
          _memcpy(*(long *)(param_1 + 0x2ce) + -lVar12,puVar5,lVar12);
        }
      }
    }
LAB_00221c40:
    param_1 = param_2;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_80) {
      return param_2;
    }
  }
  else {
    puVar23 = param_1;
    puVar5 = param_2;
    FUN_0021ff60(param_1,param_2,uVar13,uVar8 - uVar13);
    *(uint **)(param_2 + 0x26) = puVar23;
    if (puVar23 != (uint *)0x0) goto LAB_00221b08;
    puVar5 = (uint *)((long)&MACH_HEADER.magic + 3);
    FUN_00225d8c(param_1,3,"Could not decode alpha data.");
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_80) {
      return param_1;
    }
  }
  ___stack_chk_fail();
  if ((*(code **)(puVar5 + 0x12) != (code *)0x0) &&
     (puVar23 = puVar5, (**(code **)(puVar5 + 0x12))(), (int)puVar23 == 0)) {
    FUN_00225d8c(param_1,6,"Frame setup failed");
    return (uint *)(ulong)*param_1;
  }
  if (puVar5[0x1c] == 0) {
    uVar13 = param_1[0x2da];
    uVar16 = (uint)(byte)(&UNK_007edd0a)[(int)uVar13];
    if (uVar13 != 2) goto LAB_00221d14;
    param_1[0x68] = 0;
    uVar13 = 2;
LAB_00221d70:
    param_1[0x69] = 0;
  }
  else {
    uVar16 = 0;
    uVar13 = 0;
    param_1[0x2da] = 0;
LAB_00221d14:
    uVar9 = (int)(puVar5[0x1e] - uVar16) >> 4;
    param_1[0x68] = uVar9;
    uVar20 = (int)(puVar5[0x20] - uVar16) >> 4;
    param_1[0x69] = uVar20;
    if ((int)uVar9 < 0) {
      param_1[0x68] = 0;
    }
    if ((int)uVar20 < 0) goto LAB_00221d70;
  }
  uVar9 = (int)(uVar16 + 0xf + puVar5[0x21]) >> 4;
  param_1[0x6b] = uVar9;
  uVar16 = (int)(uVar16 + 0xf + puVar5[0x1f]) >> 4;
  if ((int)param_1[0x66] <= (int)uVar16) {
    uVar16 = param_1[0x66];
  }
  param_1[0x6a] = uVar16;
  if ((int)param_1[0x67] < (int)uVar9) {
    param_1[0x6b] = param_1[0x67];
  }
  if ((int)uVar13 < 1) {
    return (uint *)0x0;
  }
  uVar13 = param_1[0x20];
  if (param_1[0x17] != 0) {
    uVar16 = param_1[0x18];
    if (uVar13 != 0) {
      if (param_1[0x22] == 0) {
        iVar30 = param_1[0x15] + uVar16;
        uVar13 = iVar30 + (char)param_1[0x24];
        uVar16 = uVar13;
        if (0x3e < (int)uVar13) {
          uVar16 = 0x3f;
        }
        if ((int)uVar13 < 1) {
          *(undefined1 *)(param_1 + 0x2db) = 0;
        }
        else {
          uVar16 = uVar16 & ((int)uVar16 >> 0x1f ^ 0xffffffffU);
          uVar20 = param_1[0x16];
          uVar9 = uVar16;
          if (0 < (int)uVar20) {
            uVar17 = 1;
            if (4 < uVar20) {
              uVar17 = 2;
            }
            uVar9 = uVar16 >> (ulong)uVar17;
            if ((int)(9 - uVar20) <= (int)(uVar16 >> (ulong)uVar17)) {
              uVar9 = 9 - uVar20;
            }
          }
          if ((int)uVar9 < 2) {
            uVar9 = 1;
          }
          *(char *)((long)param_1 + 0xb6d) = (char)uVar9;
          *(char *)(param_1 + 0x2db) = (char)uVar9 + (char)(uVar16 << 1);
          uVar6 = 2;
          if (uVar13 < 0x28) {
            uVar6 = 0xe < uVar13;
          }
          *(undefined1 *)((long)param_1 + 0xb6f) = uVar6;
        }
        *(undefined1 *)((long)param_1 + 0xb6e) = 0;
        uVar9 = param_1[0x1c];
        uVar13 = uVar9 + uVar13;
        uVar16 = uVar13;
        if (0x3e < (int)uVar13) {
          uVar16 = 0x3f;
        }
        if ((int)uVar13 < 1) {
          *(undefined1 *)(param_1 + 0x2dc) = 0;
        }
        else {
          uVar16 = uVar16 & ((int)uVar16 >> 0x1f ^ 0xffffffffU);
          uVar17 = param_1[0x16];
          uVar20 = uVar16;
          if (0 < (int)uVar17) {
            uVar7 = 1;
            if (4 < uVar17) {
              uVar7 = 2;
            }
            uVar20 = uVar16 >> (ulong)uVar7;
            if ((int)(9 - uVar17) <= (int)(uVar16 >> (ulong)uVar7)) {
              uVar20 = 9 - uVar17;
            }
          }
          if ((int)uVar20 < 2) {
            uVar20 = 1;
          }
          *(char *)((long)param_1 + 0xb71) = (char)uVar20;
          *(char *)(param_1 + 0x2dc) = (char)uVar20 + (char)(uVar16 << 1);
          uVar6 = 2;
          if (uVar13 < 0x28) {
            uVar6 = 0xe < uVar13;
          }
          *(undefined1 *)((long)param_1 + 0xb73) = uVar6;
        }
        *(undefined1 *)((long)param_1 + 0xb72) = 1;
        uVar13 = iVar30 + *(char *)((long)param_1 + 0x91);
        uVar16 = uVar13;
        if (0x3e < (int)uVar13) {
          uVar16 = 0x3f;
        }
        if ((int)uVar13 < 1) {
          *(undefined1 *)(param_1 + 0x2dd) = 0;
        }
        else {
          uVar16 = uVar16 & ((int)uVar16 >> 0x1f ^ 0xffffffffU);
          uVar17 = param_1[0x16];
          uVar20 = uVar16;
          if (0 < (int)uVar17) {
            uVar7 = 1;
            if (4 < uVar17) {
              uVar7 = 2;
            }
            uVar20 = uVar16 >> (ulong)uVar7;
            if ((int)(9 - uVar17) <= (int)(uVar16 >> (ulong)uVar7)) {
              uVar20 = 9 - uVar17;
            }
          }
          if ((int)uVar20 < 2) {
            uVar20 = 1;
          }
          *(char *)((long)param_1 + 0xb75) = (char)uVar20;
          *(char *)(param_1 + 0x2dd) = (char)uVar20 + (char)(uVar16 << 1);
          uVar6 = 2;
          if (uVar13 < 0x28) {
            uVar6 = 0xe < uVar13;
          }
          *(undefined1 *)((long)param_1 + 0xb77) = uVar6;
        }
        *(undefined1 *)((long)param_1 + 0xb76) = 0;
        uVar13 = uVar13 + uVar9;
        uVar16 = uVar13;
        if (0x3e < (int)uVar13) {
          uVar16 = 0x3f;
        }
        if ((int)uVar13 < 1) {
          *(undefined1 *)(param_1 + 0x2de) = 0;
        }
        else {
          uVar16 = uVar16 & ((int)uVar16 >> 0x1f ^ 0xffffffffU);
          uVar17 = param_1[0x16];
          uVar20 = uVar16;
          if (0 < (int)uVar17) {
            uVar7 = 1;
            if (4 < uVar17) {
              uVar7 = 2;
            }
            uVar20 = uVar16 >> (ulong)uVar7;
            if ((int)(9 - uVar17) <= (int)(uVar16 >> (ulong)uVar7)) {
              uVar20 = 9 - uVar17;
            }
          }
          if ((int)uVar20 < 2) {
            uVar20 = 1;
          }
          *(char *)((long)param_1 + 0xb79) = (char)uVar20;
          *(char *)(param_1 + 0x2de) = (char)uVar20 + (char)(uVar16 << 1);
          uVar6 = 2;
          if (uVar13 < 0x28) {
            uVar6 = 0xe < uVar13;
          }
          *(undefined1 *)((long)param_1 + 0xb7b) = uVar6;
        }
        *(undefined1 *)((long)param_1 + 0xb7a) = 1;
        uVar13 = iVar30 + *(char *)((long)param_1 + 0x92);
        uVar16 = uVar13;
        if (0x3e < (int)uVar13) {
          uVar16 = 0x3f;
        }
        if ((int)uVar13 < 1) {
          *(undefined1 *)(param_1 + 0x2df) = 0;
        }
        else {
          uVar16 = uVar16 & ((int)uVar16 >> 0x1f ^ 0xffffffffU);
          uVar17 = param_1[0x16];
          uVar20 = uVar16;
          if (0 < (int)uVar17) {
            uVar7 = 1;
            if (4 < uVar17) {
              uVar7 = 2;
            }
            uVar20 = uVar16 >> (ulong)uVar7;
            if ((int)(9 - uVar17) <= (int)(uVar16 >> (ulong)uVar7)) {
              uVar20 = 9 - uVar17;
            }
          }
          if ((int)uVar20 < 2) {
            uVar20 = 1;
          }
          *(char *)((long)param_1 + 0xb7d) = (char)uVar20;
          *(char *)(param_1 + 0x2df) = (char)uVar20 + (char)(uVar16 << 1);
          uVar6 = 2;
          if (uVar13 < 0x28) {
            uVar6 = 0xe < uVar13;
          }
          *(undefined1 *)((long)param_1 + 0xb7f) = uVar6;
        }
        *(undefined1 *)((long)param_1 + 0xb7e) = 0;
        uVar13 = uVar13 + uVar9;
        uVar16 = uVar13;
        if (0x3e < (int)uVar13) {
          uVar16 = 0x3f;
        }
        if ((int)uVar13 < 1) {
          *(undefined1 *)(param_1 + 0x2e0) = 0;
        }
        else {
          uVar16 = uVar16 & ((int)uVar16 >> 0x1f ^ 0xffffffffU);
          uVar17 = param_1[0x16];
          uVar20 = uVar16;
          if (0 < (int)uVar17) {
            uVar7 = 1;
            if (4 < uVar17) {
              uVar7 = 2;
            }
            uVar20 = uVar16 >> (ulong)uVar7;
            if ((int)(9 - uVar17) <= (int)(uVar16 >> (ulong)uVar7)) {
              uVar20 = 9 - uVar17;
            }
          }
          if ((int)uVar20 < 2) {
            uVar20 = 1;
          }
          *(char *)((long)param_1 + 0xb81) = (char)uVar20;
          *(char *)(param_1 + 0x2e0) = (char)uVar20 + (char)(uVar16 << 1);
          uVar6 = 2;
          if (uVar13 < 0x28) {
            uVar6 = 0xe < uVar13;
          }
          *(undefined1 *)((long)param_1 + 0xb83) = uVar6;
        }
        *(undefined1 *)((long)param_1 + 0xb82) = 1;
        uVar16 = iVar30 + *(char *)((long)param_1 + 0x93);
        uVar13 = uVar16;
        if (0x3e < (int)uVar16) {
          uVar13 = 0x3f;
        }
        if ((int)uVar16 < 1) {
          *(undefined1 *)(param_1 + 0x2e1) = 0;
        }
        else {
          uVar13 = uVar13 & ((int)uVar13 >> 0x1f ^ 0xffffffffU);
          uVar17 = param_1[0x16];
          uVar20 = uVar13;
          if (0 < (int)uVar17) {
            uVar7 = 1;
            if (4 < uVar17) {
              uVar7 = 2;
            }
            uVar20 = uVar13 >> (ulong)uVar7;
            if ((int)(9 - uVar17) <= (int)(uVar13 >> (ulong)uVar7)) {
              uVar20 = 9 - uVar17;
            }
          }
          if ((int)uVar20 < 2) {
            uVar20 = 1;
          }
          *(char *)((long)param_1 + 0xb85) = (char)uVar20;
          *(char *)(param_1 + 0x2e1) = (char)uVar20 + (char)(uVar13 << 1);
          uVar6 = 2;
          if (uVar16 < 0x28) {
            uVar6 = 0xe < uVar16;
          }
          *(undefined1 *)((long)param_1 + 0xb87) = uVar6;
        }
        *(undefined1 *)((long)param_1 + 0xb86) = 0;
        uVar16 = uVar16 + uVar9;
        uVar13 = uVar16;
        if (0x3e < (int)uVar16) {
          uVar13 = 0x3f;
        }
        if ((int)uVar16 < 1) goto LAB_00222dbc;
        uVar13 = uVar13 & ((int)uVar13 >> 0x1f ^ 0xffffffffU);
        uVar9 = param_1[0x16];
      }
      else {
        uVar13 = uVar16 + (int)(char)param_1[0x24];
        uVar9 = uVar13;
        if (0x3e < (int)uVar13) {
          uVar9 = 0x3f;
        }
        if ((int)uVar13 < 1) {
          *(undefined1 *)(param_1 + 0x2db) = 0;
        }
        else {
          uVar9 = uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU);
          uVar17 = param_1[0x16];
          uVar20 = uVar9;
          if (0 < (int)uVar17) {
            uVar7 = 1;
            if (4 < uVar17) {
              uVar7 = 2;
            }
            uVar20 = uVar9 >> (ulong)uVar7;
            if ((int)(9 - uVar17) <= (int)(uVar9 >> (ulong)uVar7)) {
              uVar20 = 9 - uVar17;
            }
          }
          if ((int)uVar20 < 2) {
            uVar20 = 1;
          }
          *(char *)((long)param_1 + 0xb6d) = (char)uVar20;
          *(char *)(param_1 + 0x2db) = (char)uVar20 + (char)(uVar9 << 1);
          uVar6 = 2;
          if (uVar13 < 0x28) {
            uVar6 = 0xe < uVar13;
          }
          *(undefined1 *)((long)param_1 + 0xb6f) = uVar6;
        }
        *(undefined1 *)((long)param_1 + 0xb6e) = 0;
        uVar20 = param_1[0x1c];
        uVar13 = uVar20 + uVar13;
        uVar9 = uVar13;
        if (0x3e < (int)uVar13) {
          uVar9 = 0x3f;
        }
        if ((int)uVar13 < 1) {
          *(undefined1 *)(param_1 + 0x2dc) = 0;
        }
        else {
          uVar9 = uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU);
          uVar7 = param_1[0x16];
          uVar17 = uVar9;
          if (0 < (int)uVar7) {
            uVar8 = 1;
            if (4 < uVar7) {
              uVar8 = 2;
            }
            uVar17 = uVar9 >> (ulong)uVar8;
            if ((int)(9 - uVar7) <= (int)(uVar9 >> (ulong)uVar8)) {
              uVar17 = 9 - uVar7;
            }
          }
          if ((int)uVar17 < 2) {
            uVar17 = 1;
          }
          *(char *)((long)param_1 + 0xb71) = (char)uVar17;
          *(char *)(param_1 + 0x2dc) = (char)uVar17 + (char)(uVar9 << 1);
          uVar6 = 2;
          if (uVar13 < 0x28) {
            uVar6 = 0xe < uVar13;
          }
          *(undefined1 *)((long)param_1 + 0xb73) = uVar6;
        }
        *(undefined1 *)((long)param_1 + 0xb72) = 1;
        uVar13 = uVar16 + (int)*(char *)((long)param_1 + 0x91);
        uVar9 = uVar13;
        if (0x3e < (int)uVar13) {
          uVar9 = 0x3f;
        }
        if ((int)uVar13 < 1) {
          *(undefined1 *)(param_1 + 0x2dd) = 0;
        }
        else {
          uVar9 = uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU);
          uVar7 = param_1[0x16];
          uVar17 = uVar9;
          if (0 < (int)uVar7) {
            uVar8 = 1;
            if (4 < uVar7) {
              uVar8 = 2;
            }
            uVar17 = uVar9 >> (ulong)uVar8;
            if ((int)(9 - uVar7) <= (int)(uVar9 >> (ulong)uVar8)) {
              uVar17 = 9 - uVar7;
            }
          }
          if ((int)uVar17 < 2) {
            uVar17 = 1;
          }
          *(char *)((long)param_1 + 0xb75) = (char)uVar17;
          *(char *)(param_1 + 0x2dd) = (char)uVar17 + (char)(uVar9 << 1);
          uVar6 = 2;
          if (uVar13 < 0x28) {
            uVar6 = 0xe < uVar13;
          }
          *(undefined1 *)((long)param_1 + 0xb77) = uVar6;
        }
        *(undefined1 *)((long)param_1 + 0xb76) = 0;
        uVar13 = uVar13 + uVar20;
        uVar9 = uVar13;
        if (0x3e < (int)uVar13) {
          uVar9 = 0x3f;
        }
        if ((int)uVar13 < 1) {
          *(undefined1 *)(param_1 + 0x2de) = 0;
        }
        else {
          uVar9 = uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU);
          uVar7 = param_1[0x16];
          uVar17 = uVar9;
          if (0 < (int)uVar7) {
            uVar8 = 1;
            if (4 < uVar7) {
              uVar8 = 2;
            }
            uVar17 = uVar9 >> (ulong)uVar8;
            if ((int)(9 - uVar7) <= (int)(uVar9 >> (ulong)uVar8)) {
              uVar17 = 9 - uVar7;
            }
          }
          if ((int)uVar17 < 2) {
            uVar17 = 1;
          }
          *(char *)((long)param_1 + 0xb79) = (char)uVar17;
          *(char *)(param_1 + 0x2de) = (char)uVar17 + (char)(uVar9 << 1);
          uVar6 = 2;
          if (uVar13 < 0x28) {
            uVar6 = 0xe < uVar13;
          }
          *(undefined1 *)((long)param_1 + 0xb7b) = uVar6;
        }
        *(undefined1 *)((long)param_1 + 0xb7a) = 1;
        uVar13 = uVar16 + (int)*(char *)((long)param_1 + 0x92);
        uVar9 = uVar13;
        if (0x3e < (int)uVar13) {
          uVar9 = 0x3f;
        }
        if ((int)uVar13 < 1) {
          *(undefined1 *)(param_1 + 0x2df) = 0;
        }
        else {
          uVar9 = uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU);
          uVar7 = param_1[0x16];
          uVar17 = uVar9;
          if (0 < (int)uVar7) {
            uVar8 = 1;
            if (4 < uVar7) {
              uVar8 = 2;
            }
            uVar17 = uVar9 >> (ulong)uVar8;
            if ((int)(9 - uVar7) <= (int)(uVar9 >> (ulong)uVar8)) {
              uVar17 = 9 - uVar7;
            }
          }
          if ((int)uVar17 < 2) {
            uVar17 = 1;
          }
          *(char *)((long)param_1 + 0xb7d) = (char)uVar17;
          *(char *)(param_1 + 0x2df) = (char)uVar17 + (char)(uVar9 << 1);
          uVar6 = 2;
          if (uVar13 < 0x28) {
            uVar6 = 0xe < uVar13;
          }
          *(undefined1 *)((long)param_1 + 0xb7f) = uVar6;
        }
        *(undefined1 *)((long)param_1 + 0xb7e) = 0;
        uVar13 = uVar13 + uVar20;
        uVar9 = uVar13;
        if (0x3e < (int)uVar13) {
          uVar9 = 0x3f;
        }
        if ((int)uVar13 < 1) {
          *(undefined1 *)(param_1 + 0x2e0) = 0;
        }
        else {
          uVar9 = uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU);
          uVar7 = param_1[0x16];
          uVar17 = uVar9;
          if (0 < (int)uVar7) {
            uVar8 = 1;
            if (4 < uVar7) {
              uVar8 = 2;
            }
            uVar17 = uVar9 >> (ulong)uVar8;
            if ((int)(9 - uVar7) <= (int)(uVar9 >> (ulong)uVar8)) {
              uVar17 = 9 - uVar7;
            }
          }
          if ((int)uVar17 < 2) {
            uVar17 = 1;
          }
          *(char *)((long)param_1 + 0xb81) = (char)uVar17;
          *(char *)(param_1 + 0x2e0) = (char)uVar17 + (char)(uVar9 << 1);
          uVar6 = 2;
          if (uVar13 < 0x28) {
            uVar6 = 0xe < uVar13;
          }
          *(undefined1 *)((long)param_1 + 0xb83) = uVar6;
        }
        *(undefined1 *)((long)param_1 + 0xb82) = 1;
        uVar16 = uVar16 + (int)*(char *)((long)param_1 + 0x93);
        uVar13 = uVar16;
        if (0x3e < (int)uVar16) {
          uVar13 = 0x3f;
        }
        if ((int)uVar16 < 1) {
          *(undefined1 *)(param_1 + 0x2e1) = 0;
        }
        else {
          uVar13 = uVar13 & ((int)uVar13 >> 0x1f ^ 0xffffffffU);
          uVar17 = param_1[0x16];
          uVar9 = uVar13;
          if (0 < (int)uVar17) {
            uVar7 = 1;
            if (4 < uVar17) {
              uVar7 = 2;
            }
            uVar9 = uVar13 >> (ulong)uVar7;
            if ((int)(9 - uVar17) <= (int)(uVar13 >> (ulong)uVar7)) {
              uVar9 = 9 - uVar17;
            }
          }
          if ((int)uVar9 < 2) {
            uVar9 = 1;
          }
          *(char *)((long)param_1 + 0xb85) = (char)uVar9;
          *(char *)(param_1 + 0x2e1) = (char)uVar9 + (char)(uVar13 << 1);
          uVar6 = 2;
          if (uVar16 < 0x28) {
            uVar6 = 0xe < uVar16;
          }
          *(undefined1 *)((long)param_1 + 0xb87) = uVar6;
        }
        *(undefined1 *)((long)param_1 + 0xb86) = 0;
        uVar16 = uVar16 + uVar20;
        uVar13 = uVar16;
        if (0x3e < (int)uVar16) {
          uVar13 = 0x3f;
        }
        if ((int)uVar16 < 1) goto LAB_00222dbc;
        uVar13 = uVar13 & ((int)uVar13 >> 0x1f ^ 0xffffffffU);
        uVar9 = param_1[0x16];
      }
      uVar20 = uVar13;
      if (0 < (int)uVar9) {
        uVar17 = 1;
        if (4 < uVar9) {
          uVar17 = 2;
        }
        uVar20 = uVar13 >> (ulong)uVar17;
        if ((int)(9 - uVar9) <= (int)(uVar13 >> (ulong)uVar17)) {
          uVar20 = 9 - uVar9;
        }
      }
      if ((int)uVar20 < 2) {
        uVar20 = 1;
      }
      *(char *)((long)param_1 + 0xb89) = (char)uVar20;
      *(char *)(param_1 + 0x2e2) = (char)uVar20 + (char)(uVar13 << 1);
      uVar6 = 2;
      if (uVar16 < 0x28) {
        uVar6 = 0xe < uVar16;
      }
      goto LAB_00222da0;
    }
    uVar16 = param_1[0x15] + uVar16;
    uVar13 = uVar16;
    if (0x3e < (int)uVar16) {
      uVar13 = 0x3f;
    }
    uVar13 = uVar13 & ((int)uVar13 >> 0x1f ^ 0xffffffffU);
    if ((int)uVar16 < 1) {
      *(undefined1 *)(param_1 + 0x2db) = 0;
    }
    else {
      uVar20 = param_1[0x16];
      uVar9 = uVar13;
      if (0 < (int)uVar20) {
        uVar17 = 1;
        if (4 < uVar20) {
          uVar17 = 2;
        }
        uVar9 = uVar13 >> (ulong)uVar17;
        if ((int)(9 - uVar20) <= (int)(uVar13 >> (ulong)uVar17)) {
          uVar9 = 9 - uVar20;
        }
      }
      if ((int)uVar9 < 2) {
        uVar9 = 1;
      }
      *(char *)((long)param_1 + 0xb6d) = (char)uVar9;
      *(char *)(param_1 + 0x2db) = (char)uVar9 + (char)(uVar13 << 1);
      uVar6 = 2;
      if (uVar16 < 0x28) {
        uVar6 = 0xe < uVar16;
      }
      *(undefined1 *)((long)param_1 + 0xb6f) = uVar6;
    }
    *(undefined1 *)((long)param_1 + 0xb6e) = 0;
    uVar9 = param_1[0x1c] + uVar16;
    uVar20 = uVar9;
    if (0x3e < (int)uVar9) {
      uVar20 = 0x3f;
    }
    uVar20 = uVar20 & ((int)uVar20 >> 0x1f ^ 0xffffffffU);
    if ((int)uVar9 < 1) {
      *(undefined1 *)(param_1 + 0x2dc) = 0;
      *(undefined1 *)((long)param_1 + 0xb72) = 1;
      if (0 < (int)uVar16) goto LAB_00222064;
LAB_00222370:
      *(undefined1 *)(param_1 + 0x2dd) = 0;
      *(undefined1 *)((long)param_1 + 0xb76) = 0;
      if (0 < (int)uVar9) goto LAB_002220cc;
LAB_00222380:
      *(undefined1 *)(param_1 + 0x2de) = 0;
      *(undefined1 *)((long)param_1 + 0xb7a) = 1;
      if (0 < (int)uVar16) goto LAB_00222138;
LAB_00222394:
      *(undefined1 *)(param_1 + 0x2df) = 0;
      *(undefined1 *)((long)param_1 + 0xb7e) = 0;
      if (0 < (int)uVar9) goto LAB_002221a0;
LAB_002223a4:
      *(undefined1 *)(param_1 + 0x2e0) = 0;
      *(undefined1 *)((long)param_1 + 0xb82) = 1;
      if (0 < (int)uVar16) goto LAB_0022220c;
LAB_002223b8:
      *(undefined1 *)(param_1 + 0x2e1) = 0;
      *(undefined1 *)((long)param_1 + 0xb86) = 0;
    }
    else {
      uVar7 = param_1[0x16];
      uVar17 = uVar20;
      if (0 < (int)uVar7) {
        uVar8 = 1;
        if (4 < uVar7) {
          uVar8 = 2;
        }
        uVar17 = uVar20 >> (ulong)uVar8;
        if ((int)(9 - uVar7) <= (int)(uVar20 >> (ulong)uVar8)) {
          uVar17 = 9 - uVar7;
        }
      }
      if ((int)uVar17 < 2) {
        uVar17 = 1;
      }
      *(char *)((long)param_1 + 0xb71) = (char)uVar17;
      *(char *)(param_1 + 0x2dc) = (char)uVar17 + (char)(uVar20 << 1);
      uVar6 = 2;
      if (uVar9 < 0x28) {
        uVar6 = 0xe < uVar9;
      }
      *(undefined1 *)((long)param_1 + 0xb73) = uVar6;
      *(undefined1 *)((long)param_1 + 0xb72) = 1;
      if ((int)uVar16 < 1) goto LAB_00222370;
LAB_00222064:
      uVar7 = param_1[0x16];
      uVar17 = uVar13;
      if (0 < (int)uVar7) {
        uVar8 = 1;
        if (4 < uVar7) {
          uVar8 = 2;
        }
        uVar17 = uVar13 >> (ulong)uVar8;
        if ((int)(9 - uVar7) <= (int)(uVar13 >> (ulong)uVar8)) {
          uVar17 = 9 - uVar7;
        }
      }
      if ((int)uVar17 < 2) {
        uVar17 = 1;
      }
      *(char *)((long)param_1 + 0xb75) = (char)uVar17;
      *(char *)(param_1 + 0x2dd) = (char)uVar17 + (char)(uVar13 << 1);
      uVar6 = 2;
      if (uVar16 < 0x28) {
        uVar6 = 0xe < uVar16;
      }
      *(undefined1 *)((long)param_1 + 0xb77) = uVar6;
      *(undefined1 *)((long)param_1 + 0xb76) = 0;
      if ((int)uVar9 < 1) goto LAB_00222380;
LAB_002220cc:
      uVar7 = param_1[0x16];
      uVar17 = uVar20;
      if (0 < (int)uVar7) {
        uVar8 = 1;
        if (4 < uVar7) {
          uVar8 = 2;
        }
        uVar17 = uVar20 >> (ulong)uVar8;
        if ((int)(9 - uVar7) <= (int)(uVar20 >> (ulong)uVar8)) {
          uVar17 = 9 - uVar7;
        }
      }
      if ((int)uVar17 < 2) {
        uVar17 = 1;
      }
      *(char *)((long)param_1 + 0xb79) = (char)uVar17;
      *(char *)(param_1 + 0x2de) = (char)uVar17 + (char)(uVar20 << 1);
      uVar6 = 2;
      if (uVar9 < 0x28) {
        uVar6 = 0xe < uVar9;
      }
      *(undefined1 *)((long)param_1 + 0xb7b) = uVar6;
      *(undefined1 *)((long)param_1 + 0xb7a) = 1;
      if ((int)uVar16 < 1) goto LAB_00222394;
LAB_00222138:
      uVar7 = param_1[0x16];
      uVar17 = uVar13;
      if (0 < (int)uVar7) {
        uVar8 = 1;
        if (4 < uVar7) {
          uVar8 = 2;
        }
        uVar17 = uVar13 >> (ulong)uVar8;
        if ((int)(9 - uVar7) <= (int)(uVar13 >> (ulong)uVar8)) {
          uVar17 = 9 - uVar7;
        }
      }
      if ((int)uVar17 < 2) {
        uVar17 = 1;
      }
      *(char *)((long)param_1 + 0xb7d) = (char)uVar17;
      *(char *)(param_1 + 0x2df) = (char)uVar17 + (char)(uVar13 << 1);
      uVar6 = 2;
      if (uVar16 < 0x28) {
        uVar6 = 0xe < uVar16;
      }
      *(undefined1 *)((long)param_1 + 0xb7f) = uVar6;
      *(undefined1 *)((long)param_1 + 0xb7e) = 0;
      if ((int)uVar9 < 1) goto LAB_002223a4;
LAB_002221a0:
      uVar7 = param_1[0x16];
      uVar17 = uVar20;
      if (0 < (int)uVar7) {
        uVar8 = 1;
        if (4 < uVar7) {
          uVar8 = 2;
        }
        uVar17 = uVar20 >> (ulong)uVar8;
        if ((int)(9 - uVar7) <= (int)(uVar20 >> (ulong)uVar8)) {
          uVar17 = 9 - uVar7;
        }
      }
      if ((int)uVar17 < 2) {
        uVar17 = 1;
      }
      *(char *)((long)param_1 + 0xb81) = (char)uVar17;
      *(char *)(param_1 + 0x2e0) = (char)uVar17 + (char)(uVar20 << 1);
      uVar6 = 2;
      if (uVar9 < 0x28) {
        uVar6 = 0xe < uVar9;
      }
      *(undefined1 *)((long)param_1 + 0xb83) = uVar6;
      *(undefined1 *)((long)param_1 + 0xb82) = 1;
      if ((int)uVar16 < 1) goto LAB_002223b8;
LAB_0022220c:
      uVar7 = param_1[0x16];
      uVar17 = uVar13;
      if (0 < (int)uVar7) {
        uVar8 = 1;
        if (4 < uVar7) {
          uVar8 = 2;
        }
        uVar17 = uVar13 >> (ulong)uVar8;
        if ((int)(9 - uVar7) <= (int)(uVar13 >> (ulong)uVar8)) {
          uVar17 = 9 - uVar7;
        }
      }
      if ((int)uVar17 < 2) {
        uVar17 = 1;
      }
      *(char *)((long)param_1 + 0xb85) = (char)uVar17;
      *(char *)(param_1 + 0x2e1) = (char)uVar17 + (char)(uVar13 << 1);
      uVar6 = 2;
      if (uVar16 < 0x28) {
        uVar6 = 0xe < uVar16;
      }
      *(undefined1 *)((long)param_1 + 0xb87) = uVar6;
      *(undefined1 *)((long)param_1 + 0xb86) = 0;
    }
    if ((int)uVar9 < 1) goto LAB_00222dbc;
    uVar16 = param_1[0x16];
    uVar13 = uVar20;
    if (0 < (int)uVar16) {
      uVar17 = 1;
      if (4 < uVar16) {
        uVar17 = 2;
      }
      uVar13 = uVar20 >> (ulong)uVar17;
      if ((int)(9 - uVar16) <= (int)(uVar20 >> (ulong)uVar17)) {
        uVar13 = 9 - uVar16;
      }
    }
    if ((int)uVar13 < 2) {
      uVar13 = 1;
    }
    *(char *)((long)param_1 + 0xb89) = (char)uVar13;
    *(char *)(param_1 + 0x2e2) = (char)uVar13 + (char)(uVar20 << 1);
    uVar6 = 2;
    if (uVar9 < 0x28) {
      uVar6 = 0xe < uVar9;
    }
    goto LAB_00222da0;
  }
  if (uVar13 == 0) {
    uVar16 = param_1[0x15];
  }
  else {
    uVar16 = (uint)(char)param_1[0x24];
    if (param_1[0x22] == 0) {
      uVar16 = param_1[0x15] + uVar16;
    }
  }
  uVar9 = uVar16;
  if (0x3e < (int)uVar16) {
    uVar9 = 0x3f;
  }
  uVar6 = 2;
  if (uVar16 < 0x28) {
    uVar6 = 0xe < uVar16;
  }
  if ((int)uVar16 < 1) {
    *(undefined1 *)(param_1 + 0x2db) = 0;
    *(undefined1 *)((long)param_1 + 0xb6e) = 0;
    *(undefined1 *)(param_1 + 0x2dc) = 0;
    *(undefined1 *)((long)param_1 + 0xb72) = 1;
    if (uVar13 != 0) goto LAB_002222b0;
LAB_00221fc0:
    uVar16 = param_1[0x15];
  }
  else {
    uVar16 = uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU);
    uVar20 = param_1[0x16];
    if ((int)uVar20 < 1) {
      if ((int)uVar9 < 2) {
        uVar9 = 1;
      }
      cVar19 = (char)uVar9;
      *(char *)((long)param_1 + 0xb6d) = cVar19;
    }
    else {
      uVar9 = 1;
      if (4 < uVar20) {
        uVar9 = 2;
      }
      uVar9 = uVar16 >> (ulong)uVar9;
      if ((int)(9 - uVar20) <= (int)uVar9) {
        uVar9 = 9 - uVar20;
      }
      if ((int)uVar9 < 2) {
        uVar9 = 1;
      }
      cVar19 = (char)uVar9;
      *(char *)((long)param_1 + 0xb6d) = cVar19;
    }
    cVar15 = cVar19 + (char)uVar16 * '\x02';
    *(char *)(param_1 + 0x2db) = cVar15;
    *(undefined1 *)((long)param_1 + 0xb6f) = uVar6;
    *(undefined1 *)((long)param_1 + 0xb6e) = 0;
    *(char *)((long)param_1 + 0xb71) = cVar19;
    *(char *)(param_1 + 0x2dc) = cVar15;
    *(undefined1 *)((long)param_1 + 0xb73) = uVar6;
    *(undefined1 *)((long)param_1 + 0xb72) = 1;
    if (uVar13 == 0) goto LAB_00221fc0;
LAB_002222b0:
    uVar16 = (uint)*(char *)((long)param_1 + 0x91);
    if (param_1[0x22] == 0) {
      uVar16 = param_1[0x15] + uVar16;
    }
  }
  uVar9 = uVar16;
  if (0x3e < (int)uVar16) {
    uVar9 = 0x3f;
  }
  uVar6 = 2;
  if (uVar16 < 0x28) {
    uVar6 = 0xe < uVar16;
  }
  if ((int)uVar16 < 1) {
    *(undefined1 *)(param_1 + 0x2dd) = 0;
    *(undefined1 *)((long)param_1 + 0xb76) = 0;
    *(undefined1 *)(param_1 + 0x2de) = 0;
    *(undefined1 *)((long)param_1 + 0xb7a) = 1;
    if (uVar13 != 0) goto LAB_0022245c;
LAB_00222354:
    uVar16 = param_1[0x15];
  }
  else {
    uVar16 = uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU);
    uVar20 = param_1[0x16];
    if ((int)uVar20 < 1) {
      if ((int)uVar9 < 2) {
        uVar9 = 1;
      }
      cVar19 = (char)uVar9;
      *(char *)((long)param_1 + 0xb75) = cVar19;
    }
    else {
      uVar9 = 1;
      if (4 < uVar20) {
        uVar9 = 2;
      }
      uVar9 = uVar16 >> (ulong)uVar9;
      if ((int)(9 - uVar20) <= (int)uVar9) {
        uVar9 = 9 - uVar20;
      }
      if ((int)uVar9 < 2) {
        uVar9 = 1;
      }
      cVar19 = (char)uVar9;
      *(char *)((long)param_1 + 0xb75) = cVar19;
    }
    cVar15 = cVar19 + (char)uVar16 * '\x02';
    *(char *)(param_1 + 0x2dd) = cVar15;
    *(undefined1 *)((long)param_1 + 0xb77) = uVar6;
    *(undefined1 *)((long)param_1 + 0xb76) = 0;
    *(char *)((long)param_1 + 0xb79) = cVar19;
    *(char *)(param_1 + 0x2de) = cVar15;
    *(undefined1 *)((long)param_1 + 0xb7b) = uVar6;
    *(undefined1 *)((long)param_1 + 0xb7a) = 1;
    if (uVar13 == 0) goto LAB_00222354;
LAB_0022245c:
    uVar16 = (uint)*(char *)((long)param_1 + 0x92);
    if (param_1[0x22] == 0) {
      uVar16 = param_1[0x15] + uVar16;
    }
  }
  uVar9 = uVar16;
  if (0x3e < (int)uVar16) {
    uVar9 = 0x3f;
  }
  uVar6 = 2;
  if (uVar16 < 0x28) {
    uVar6 = 0xe < uVar16;
  }
  if ((int)uVar16 < 1) {
    *(undefined1 *)(param_1 + 0x2df) = 0;
    *(undefined1 *)((long)param_1 + 0xb7e) = 0;
    *(undefined1 *)(param_1 + 0x2e0) = 0;
    *(undefined1 *)((long)param_1 + 0xb82) = 1;
    if (uVar13 != 0) goto LAB_00222540;
LAB_00222500:
    uVar13 = param_1[0x15];
  }
  else {
    uVar16 = uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU);
    uVar20 = param_1[0x16];
    if ((int)uVar20 < 1) {
      if ((int)uVar9 < 2) {
        uVar9 = 1;
      }
      cVar19 = (char)uVar9;
      *(char *)((long)param_1 + 0xb7d) = cVar19;
    }
    else {
      uVar9 = 1;
      if (4 < uVar20) {
        uVar9 = 2;
      }
      uVar9 = uVar16 >> (ulong)uVar9;
      if ((int)(9 - uVar20) <= (int)uVar9) {
        uVar9 = 9 - uVar20;
      }
      if ((int)uVar9 < 2) {
        uVar9 = 1;
      }
      cVar19 = (char)uVar9;
      *(char *)((long)param_1 + 0xb7d) = cVar19;
    }
    cVar15 = cVar19 + (char)uVar16 * '\x02';
    *(char *)(param_1 + 0x2df) = cVar15;
    *(undefined1 *)((long)param_1 + 0xb7f) = uVar6;
    *(undefined1 *)((long)param_1 + 0xb7e) = 0;
    *(char *)((long)param_1 + 0xb81) = cVar19;
    *(char *)(param_1 + 0x2e0) = cVar15;
    *(undefined1 *)((long)param_1 + 0xb83) = uVar6;
    *(undefined1 *)((long)param_1 + 0xb82) = 1;
    if (uVar13 == 0) goto LAB_00222500;
LAB_00222540:
    uVar13 = (uint)*(char *)((long)param_1 + 0x93);
    if (param_1[0x22] == 0) {
      uVar13 = param_1[0x15] + uVar13;
    }
  }
  uVar16 = uVar13;
  if (0x3e < (int)uVar13) {
    uVar16 = 0x3f;
  }
  uVar6 = 2;
  if (uVar13 < 0x28) {
    uVar6 = 0xe < uVar13;
  }
  if ((int)uVar13 < 1) {
    *(undefined1 *)(param_1 + 0x2e1) = 0;
    *(undefined1 *)((long)param_1 + 0xb86) = 0;
LAB_00222dbc:
    *(undefined1 *)(param_1 + 0x2e2) = 0;
    *(undefined1 *)((long)param_1 + 0xb8a) = 1;
    return (uint *)0x0;
  }
  uVar13 = uVar16 & ((int)uVar16 >> 0x1f ^ 0xffffffffU);
  uVar9 = param_1[0x16];
  if ((int)uVar9 < 1) {
    if ((int)uVar16 < 2) {
      uVar16 = 1;
    }
    cVar19 = (char)uVar16;
    *(char *)((long)param_1 + 0xb85) = cVar19;
  }
  else {
    uVar16 = 1;
    if (4 < uVar9) {
      uVar16 = 2;
    }
    uVar16 = uVar13 >> (ulong)uVar16;
    if ((int)(9 - uVar9) <= (int)uVar16) {
      uVar16 = 9 - uVar9;
    }
    if ((int)uVar16 < 2) {
      uVar16 = 1;
    }
    cVar19 = (char)uVar16;
    *(char *)((long)param_1 + 0xb85) = cVar19;
  }
  cVar15 = cVar19 + (char)uVar13 * '\x02';
  *(char *)(param_1 + 0x2e1) = cVar15;
  *(undefined1 *)((long)param_1 + 0xb87) = uVar6;
  *(undefined1 *)((long)param_1 + 0xb86) = 0;
  *(char *)((long)param_1 + 0xb89) = cVar19;
  *(char *)(param_1 + 0x2e2) = cVar15;
LAB_00222da0:
  *(undefined1 *)((long)param_1 + 0xb8b) = uVar6;
  *(undefined1 *)((long)param_1 + 0xb8a) = 1;
  return (uint *)0x0;
}



/* Entry: 00221cac; end: 00222e3b;  */

undefined4 FUN_00221cac(undefined4 *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  char cVar12;
  uint uVar13;
  uint uVar14;
  
  if ((*(code **)(param_2 + 0x48) != (code *)0x0) &&
     (lVar4 = param_2, (**(code **)(param_2 + 0x48))(), (int)lVar4 == 0)) {
    FUN_00225d8c(param_1,6,"Frame setup failed");
    return *param_1;
  }
  if (*(int *)(param_2 + 0x70) == 0) {
    iVar6 = param_1[0x2da];
    uVar9 = (uint)(byte)(&UNK_007edd0a)[iVar6];
    if (iVar6 != 2) goto LAB_00221d14;
    param_1[0x68] = 0;
    iVar6 = 2;
LAB_00221d70:
    param_1[0x69] = 0;
  }
  else {
    uVar9 = 0;
    iVar6 = 0;
    param_1[0x2da] = 0;
LAB_00221d14:
    iVar1 = (int)(*(int *)(param_2 + 0x78) - uVar9) >> 4;
    param_1[0x68] = iVar1;
    iVar2 = (int)(*(int *)(param_2 + 0x80) - uVar9) >> 4;
    param_1[0x69] = iVar2;
    if (iVar1 < 0) {
      param_1[0x68] = 0;
    }
    if (iVar2 < 0) goto LAB_00221d70;
  }
  iVar1 = (int)(uVar9 + 0xf + *(int *)(param_2 + 0x84)) >> 4;
  param_1[0x6b] = iVar1;
  iVar2 = (int)(uVar9 + 0xf + *(int *)(param_2 + 0x7c)) >> 4;
  if ((int)param_1[0x66] <= iVar2) {
    iVar2 = param_1[0x66];
  }
  param_1[0x6a] = iVar2;
  if ((int)param_1[0x67] < iVar1) {
    param_1[0x6b] = param_1[0x67];
  }
  if (iVar6 < 1) {
    return 0;
  }
  iVar6 = param_1[0x20];
  if (param_1[0x17] != 0) {
    iVar1 = param_1[0x18];
    if (iVar6 != 0) {
      if (param_1[0x22] == 0) {
        iVar1 = param_1[0x15] + iVar1;
        uVar9 = iVar1 + *(char *)(param_1 + 0x24);
        uVar7 = uVar9;
        if (0x3e < (int)uVar9) {
          uVar7 = 0x3f;
        }
        if ((int)uVar9 < 1) {
          *(undefined1 *)(param_1 + 0x2db) = 0;
        }
        else {
          uVar7 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
          uVar11 = param_1[0x16];
          uVar13 = uVar7;
          if (0 < (int)uVar11) {
            uVar10 = 1;
            if (4 < uVar11) {
              uVar10 = 2;
            }
            uVar13 = uVar7 >> (ulong)uVar10;
            if ((int)(9 - uVar11) <= (int)(uVar7 >> (ulong)uVar10)) {
              uVar13 = 9 - uVar11;
            }
          }
          if ((int)uVar13 < 2) {
            uVar13 = 1;
          }
          *(char *)((long)param_1 + 0xb6d) = (char)uVar13;
          *(char *)(param_1 + 0x2db) = (char)uVar13 + (char)(uVar7 << 1);
          uVar5 = 2;
          if (uVar9 < 0x28) {
            uVar5 = 0xe < uVar9;
          }
          *(undefined1 *)((long)param_1 + 0xb6f) = uVar5;
        }
        *(undefined1 *)((long)param_1 + 0xb6e) = 0;
        iVar6 = param_1[0x1c];
        uVar9 = iVar6 + uVar9;
        uVar7 = uVar9;
        if (0x3e < (int)uVar9) {
          uVar7 = 0x3f;
        }
        if ((int)uVar9 < 1) {
          *(undefined1 *)(param_1 + 0x2dc) = 0;
        }
        else {
          uVar7 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
          uVar11 = param_1[0x16];
          uVar13 = uVar7;
          if (0 < (int)uVar11) {
            uVar10 = 1;
            if (4 < uVar11) {
              uVar10 = 2;
            }
            uVar13 = uVar7 >> (ulong)uVar10;
            if ((int)(9 - uVar11) <= (int)(uVar7 >> (ulong)uVar10)) {
              uVar13 = 9 - uVar11;
            }
          }
          if ((int)uVar13 < 2) {
            uVar13 = 1;
          }
          *(char *)((long)param_1 + 0xb71) = (char)uVar13;
          *(char *)(param_1 + 0x2dc) = (char)uVar13 + (char)(uVar7 << 1);
          uVar5 = 2;
          if (uVar9 < 0x28) {
            uVar5 = 0xe < uVar9;
          }
          *(undefined1 *)((long)param_1 + 0xb73) = uVar5;
        }
        *(undefined1 *)((long)param_1 + 0xb72) = 1;
        uVar9 = iVar1 + *(char *)((long)param_1 + 0x91);
        uVar7 = uVar9;
        if (0x3e < (int)uVar9) {
          uVar7 = 0x3f;
        }
        if ((int)uVar9 < 1) {
          *(undefined1 *)(param_1 + 0x2dd) = 0;
        }
        else {
          uVar7 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
          uVar11 = param_1[0x16];
          uVar13 = uVar7;
          if (0 < (int)uVar11) {
            uVar10 = 1;
            if (4 < uVar11) {
              uVar10 = 2;
            }
            uVar13 = uVar7 >> (ulong)uVar10;
            if ((int)(9 - uVar11) <= (int)(uVar7 >> (ulong)uVar10)) {
              uVar13 = 9 - uVar11;
            }
          }
          if ((int)uVar13 < 2) {
            uVar13 = 1;
          }
          *(char *)((long)param_1 + 0xb75) = (char)uVar13;
          *(char *)(param_1 + 0x2dd) = (char)uVar13 + (char)(uVar7 << 1);
          uVar5 = 2;
          if (uVar9 < 0x28) {
            uVar5 = 0xe < uVar9;
          }
          *(undefined1 *)((long)param_1 + 0xb77) = uVar5;
        }
        *(undefined1 *)((long)param_1 + 0xb76) = 0;
        uVar9 = uVar9 + iVar6;
        uVar7 = uVar9;
        if (0x3e < (int)uVar9) {
          uVar7 = 0x3f;
        }
        if ((int)uVar9 < 1) {
          *(undefined1 *)(param_1 + 0x2de) = 0;
        }
        else {
          uVar7 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
          uVar11 = param_1[0x16];
          uVar13 = uVar7;
          if (0 < (int)uVar11) {
            uVar10 = 1;
            if (4 < uVar11) {
              uVar10 = 2;
            }
            uVar13 = uVar7 >> (ulong)uVar10;
            if ((int)(9 - uVar11) <= (int)(uVar7 >> (ulong)uVar10)) {
              uVar13 = 9 - uVar11;
            }
          }
          if ((int)uVar13 < 2) {
            uVar13 = 1;
          }
          *(char *)((long)param_1 + 0xb79) = (char)uVar13;
          *(char *)(param_1 + 0x2de) = (char)uVar13 + (char)(uVar7 << 1);
          uVar5 = 2;
          if (uVar9 < 0x28) {
            uVar5 = 0xe < uVar9;
          }
          *(undefined1 *)((long)param_1 + 0xb7b) = uVar5;
        }
        *(undefined1 *)((long)param_1 + 0xb7a) = 1;
        uVar9 = iVar1 + *(char *)((long)param_1 + 0x92);
        uVar7 = uVar9;
        if (0x3e < (int)uVar9) {
          uVar7 = 0x3f;
        }
        if ((int)uVar9 < 1) {
          *(undefined1 *)(param_1 + 0x2df) = 0;
        }
        else {
          uVar7 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
          uVar11 = param_1[0x16];
          uVar13 = uVar7;
          if (0 < (int)uVar11) {
            uVar10 = 1;
            if (4 < uVar11) {
              uVar10 = 2;
            }
            uVar13 = uVar7 >> (ulong)uVar10;
            if ((int)(9 - uVar11) <= (int)(uVar7 >> (ulong)uVar10)) {
              uVar13 = 9 - uVar11;
            }
          }
          if ((int)uVar13 < 2) {
            uVar13 = 1;
          }
          *(char *)((long)param_1 + 0xb7d) = (char)uVar13;
          *(char *)(param_1 + 0x2df) = (char)uVar13 + (char)(uVar7 << 1);
          uVar5 = 2;
          if (uVar9 < 0x28) {
            uVar5 = 0xe < uVar9;
          }
          *(undefined1 *)((long)param_1 + 0xb7f) = uVar5;
        }
        *(undefined1 *)((long)param_1 + 0xb7e) = 0;
        uVar9 = uVar9 + iVar6;
        uVar7 = uVar9;
        if (0x3e < (int)uVar9) {
          uVar7 = 0x3f;
        }
        if ((int)uVar9 < 1) {
          *(undefined1 *)(param_1 + 0x2e0) = 0;
        }
        else {
          uVar7 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
          uVar11 = param_1[0x16];
          uVar13 = uVar7;
          if (0 < (int)uVar11) {
            uVar10 = 1;
            if (4 < uVar11) {
              uVar10 = 2;
            }
            uVar13 = uVar7 >> (ulong)uVar10;
            if ((int)(9 - uVar11) <= (int)(uVar7 >> (ulong)uVar10)) {
              uVar13 = 9 - uVar11;
            }
          }
          if ((int)uVar13 < 2) {
            uVar13 = 1;
          }
          *(char *)((long)param_1 + 0xb81) = (char)uVar13;
          *(char *)(param_1 + 0x2e0) = (char)uVar13 + (char)(uVar7 << 1);
          uVar5 = 2;
          if (uVar9 < 0x28) {
            uVar5 = 0xe < uVar9;
          }
          *(undefined1 *)((long)param_1 + 0xb83) = uVar5;
        }
        *(undefined1 *)((long)param_1 + 0xb82) = 1;
        uVar9 = iVar1 + *(char *)((long)param_1 + 0x93);
        uVar7 = uVar9;
        if (0x3e < (int)uVar9) {
          uVar7 = 0x3f;
        }
        if ((int)uVar9 < 1) {
          *(undefined1 *)(param_1 + 0x2e1) = 0;
        }
        else {
          uVar7 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
          uVar11 = param_1[0x16];
          uVar13 = uVar7;
          if (0 < (int)uVar11) {
            uVar10 = 1;
            if (4 < uVar11) {
              uVar10 = 2;
            }
            uVar13 = uVar7 >> (ulong)uVar10;
            if ((int)(9 - uVar11) <= (int)(uVar7 >> (ulong)uVar10)) {
              uVar13 = 9 - uVar11;
            }
          }
          if ((int)uVar13 < 2) {
            uVar13 = 1;
          }
          *(char *)((long)param_1 + 0xb85) = (char)uVar13;
          *(char *)(param_1 + 0x2e1) = (char)uVar13 + (char)(uVar7 << 1);
          uVar5 = 2;
          if (uVar9 < 0x28) {
            uVar5 = 0xe < uVar9;
          }
          *(undefined1 *)((long)param_1 + 0xb87) = uVar5;
        }
        *(undefined1 *)((long)param_1 + 0xb86) = 0;
        uVar9 = uVar9 + iVar6;
        uVar7 = uVar9;
        if (0x3e < (int)uVar9) {
          uVar7 = 0x3f;
        }
        if ((int)uVar9 < 1) goto LAB_00222dbc;
        uVar7 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
        uVar13 = param_1[0x16];
      }
      else {
        uVar9 = iVar1 + *(char *)(param_1 + 0x24);
        uVar7 = uVar9;
        if (0x3e < (int)uVar9) {
          uVar7 = 0x3f;
        }
        if ((int)uVar9 < 1) {
          *(undefined1 *)(param_1 + 0x2db) = 0;
        }
        else {
          uVar7 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
          uVar11 = param_1[0x16];
          uVar13 = uVar7;
          if (0 < (int)uVar11) {
            uVar10 = 1;
            if (4 < uVar11) {
              uVar10 = 2;
            }
            uVar13 = uVar7 >> (ulong)uVar10;
            if ((int)(9 - uVar11) <= (int)(uVar7 >> (ulong)uVar10)) {
              uVar13 = 9 - uVar11;
            }
          }
          if ((int)uVar13 < 2) {
            uVar13 = 1;
          }
          *(char *)((long)param_1 + 0xb6d) = (char)uVar13;
          *(char *)(param_1 + 0x2db) = (char)uVar13 + (char)(uVar7 << 1);
          uVar5 = 2;
          if (uVar9 < 0x28) {
            uVar5 = 0xe < uVar9;
          }
          *(undefined1 *)((long)param_1 + 0xb6f) = uVar5;
        }
        *(undefined1 *)((long)param_1 + 0xb6e) = 0;
        iVar6 = param_1[0x1c];
        uVar9 = iVar6 + uVar9;
        uVar7 = uVar9;
        if (0x3e < (int)uVar9) {
          uVar7 = 0x3f;
        }
        if ((int)uVar9 < 1) {
          *(undefined1 *)(param_1 + 0x2dc) = 0;
        }
        else {
          uVar7 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
          uVar11 = param_1[0x16];
          uVar13 = uVar7;
          if (0 < (int)uVar11) {
            uVar10 = 1;
            if (4 < uVar11) {
              uVar10 = 2;
            }
            uVar13 = uVar7 >> (ulong)uVar10;
            if ((int)(9 - uVar11) <= (int)(uVar7 >> (ulong)uVar10)) {
              uVar13 = 9 - uVar11;
            }
          }
          if ((int)uVar13 < 2) {
            uVar13 = 1;
          }
          *(char *)((long)param_1 + 0xb71) = (char)uVar13;
          *(char *)(param_1 + 0x2dc) = (char)uVar13 + (char)(uVar7 << 1);
          uVar5 = 2;
          if (uVar9 < 0x28) {
            uVar5 = 0xe < uVar9;
          }
          *(undefined1 *)((long)param_1 + 0xb73) = uVar5;
        }
        *(undefined1 *)((long)param_1 + 0xb72) = 1;
        uVar9 = iVar1 + *(char *)((long)param_1 + 0x91);
        uVar7 = uVar9;
        if (0x3e < (int)uVar9) {
          uVar7 = 0x3f;
        }
        if ((int)uVar9 < 1) {
          *(undefined1 *)(param_1 + 0x2dd) = 0;
        }
        else {
          uVar7 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
          uVar11 = param_1[0x16];
          uVar13 = uVar7;
          if (0 < (int)uVar11) {
            uVar10 = 1;
            if (4 < uVar11) {
              uVar10 = 2;
            }
            uVar13 = uVar7 >> (ulong)uVar10;
            if ((int)(9 - uVar11) <= (int)(uVar7 >> (ulong)uVar10)) {
              uVar13 = 9 - uVar11;
            }
          }
          if ((int)uVar13 < 2) {
            uVar13 = 1;
          }
          *(char *)((long)param_1 + 0xb75) = (char)uVar13;
          *(char *)(param_1 + 0x2dd) = (char)uVar13 + (char)(uVar7 << 1);
          uVar5 = 2;
          if (uVar9 < 0x28) {
            uVar5 = 0xe < uVar9;
          }
          *(undefined1 *)((long)param_1 + 0xb77) = uVar5;
        }
        *(undefined1 *)((long)param_1 + 0xb76) = 0;
        uVar9 = uVar9 + iVar6;
        uVar7 = uVar9;
        if (0x3e < (int)uVar9) {
          uVar7 = 0x3f;
        }
        if ((int)uVar9 < 1) {
          *(undefined1 *)(param_1 + 0x2de) = 0;
        }
        else {
          uVar7 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
          uVar11 = param_1[0x16];
          uVar13 = uVar7;
          if (0 < (int)uVar11) {
            uVar10 = 1;
            if (4 < uVar11) {
              uVar10 = 2;
            }
            uVar13 = uVar7 >> (ulong)uVar10;
            if ((int)(9 - uVar11) <= (int)(uVar7 >> (ulong)uVar10)) {
              uVar13 = 9 - uVar11;
            }
          }
          if ((int)uVar13 < 2) {
            uVar13 = 1;
          }
          *(char *)((long)param_1 + 0xb79) = (char)uVar13;
          *(char *)(param_1 + 0x2de) = (char)uVar13 + (char)(uVar7 << 1);
          uVar5 = 2;
          if (uVar9 < 0x28) {
            uVar5 = 0xe < uVar9;
          }
          *(undefined1 *)((long)param_1 + 0xb7b) = uVar5;
        }
        *(undefined1 *)((long)param_1 + 0xb7a) = 1;
        uVar9 = iVar1 + *(char *)((long)param_1 + 0x92);
        uVar7 = uVar9;
        if (0x3e < (int)uVar9) {
          uVar7 = 0x3f;
        }
        if ((int)uVar9 < 1) {
          *(undefined1 *)(param_1 + 0x2df) = 0;
        }
        else {
          uVar7 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
          uVar11 = param_1[0x16];
          uVar13 = uVar7;
          if (0 < (int)uVar11) {
            uVar10 = 1;
            if (4 < uVar11) {
              uVar10 = 2;
            }
            uVar13 = uVar7 >> (ulong)uVar10;
            if ((int)(9 - uVar11) <= (int)(uVar7 >> (ulong)uVar10)) {
              uVar13 = 9 - uVar11;
            }
          }
          if ((int)uVar13 < 2) {
            uVar13 = 1;
          }
          *(char *)((long)param_1 + 0xb7d) = (char)uVar13;
          *(char *)(param_1 + 0x2df) = (char)uVar13 + (char)(uVar7 << 1);
          uVar5 = 2;
          if (uVar9 < 0x28) {
            uVar5 = 0xe < uVar9;
          }
          *(undefined1 *)((long)param_1 + 0xb7f) = uVar5;
        }
        *(undefined1 *)((long)param_1 + 0xb7e) = 0;
        uVar9 = uVar9 + iVar6;
        uVar7 = uVar9;
        if (0x3e < (int)uVar9) {
          uVar7 = 0x3f;
        }
        if ((int)uVar9 < 1) {
          *(undefined1 *)(param_1 + 0x2e0) = 0;
        }
        else {
          uVar7 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
          uVar11 = param_1[0x16];
          uVar13 = uVar7;
          if (0 < (int)uVar11) {
            uVar10 = 1;
            if (4 < uVar11) {
              uVar10 = 2;
            }
            uVar13 = uVar7 >> (ulong)uVar10;
            if ((int)(9 - uVar11) <= (int)(uVar7 >> (ulong)uVar10)) {
              uVar13 = 9 - uVar11;
            }
          }
          if ((int)uVar13 < 2) {
            uVar13 = 1;
          }
          *(char *)((long)param_1 + 0xb81) = (char)uVar13;
          *(char *)(param_1 + 0x2e0) = (char)uVar13 + (char)(uVar7 << 1);
          uVar5 = 2;
          if (uVar9 < 0x28) {
            uVar5 = 0xe < uVar9;
          }
          *(undefined1 *)((long)param_1 + 0xb83) = uVar5;
        }
        *(undefined1 *)((long)param_1 + 0xb82) = 1;
        uVar9 = iVar1 + *(char *)((long)param_1 + 0x93);
        uVar7 = uVar9;
        if (0x3e < (int)uVar9) {
          uVar7 = 0x3f;
        }
        if ((int)uVar9 < 1) {
          *(undefined1 *)(param_1 + 0x2e1) = 0;
        }
        else {
          uVar7 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
          uVar11 = param_1[0x16];
          uVar13 = uVar7;
          if (0 < (int)uVar11) {
            uVar10 = 1;
            if (4 < uVar11) {
              uVar10 = 2;
            }
            uVar13 = uVar7 >> (ulong)uVar10;
            if ((int)(9 - uVar11) <= (int)(uVar7 >> (ulong)uVar10)) {
              uVar13 = 9 - uVar11;
            }
          }
          if ((int)uVar13 < 2) {
            uVar13 = 1;
          }
          *(char *)((long)param_1 + 0xb85) = (char)uVar13;
          *(char *)(param_1 + 0x2e1) = (char)uVar13 + (char)(uVar7 << 1);
          uVar5 = 2;
          if (uVar9 < 0x28) {
            uVar5 = 0xe < uVar9;
          }
          *(undefined1 *)((long)param_1 + 0xb87) = uVar5;
        }
        *(undefined1 *)((long)param_1 + 0xb86) = 0;
        uVar9 = uVar9 + iVar6;
        uVar7 = uVar9;
        if (0x3e < (int)uVar9) {
          uVar7 = 0x3f;
        }
        if ((int)uVar9 < 1) goto LAB_00222dbc;
        uVar7 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
        uVar13 = param_1[0x16];
      }
      uVar11 = uVar7;
      if (0 < (int)uVar13) {
        uVar10 = 1;
        if (4 < uVar13) {
          uVar10 = 2;
        }
        uVar11 = uVar7 >> (ulong)uVar10;
        if ((int)(9 - uVar13) <= (int)(uVar7 >> (ulong)uVar10)) {
          uVar11 = 9 - uVar13;
        }
      }
      if ((int)uVar11 < 2) {
        uVar11 = 1;
      }
      *(char *)((long)param_1 + 0xb89) = (char)uVar11;
      *(char *)(param_1 + 0x2e2) = (char)uVar11 + (char)(uVar7 << 1);
      uVar5 = 2;
      if (uVar9 < 0x28) {
        uVar5 = 0xe < uVar9;
      }
      goto LAB_00222da0;
    }
    uVar9 = param_1[0x15] + iVar1;
    uVar7 = uVar9;
    if (0x3e < (int)uVar9) {
      uVar7 = 0x3f;
    }
    uVar7 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
    if ((int)uVar9 < 1) {
      *(undefined1 *)(param_1 + 0x2db) = 0;
    }
    else {
      uVar11 = param_1[0x16];
      uVar13 = uVar7;
      if (0 < (int)uVar11) {
        uVar10 = 1;
        if (4 < uVar11) {
          uVar10 = 2;
        }
        uVar13 = uVar7 >> (ulong)uVar10;
        if ((int)(9 - uVar11) <= (int)(uVar7 >> (ulong)uVar10)) {
          uVar13 = 9 - uVar11;
        }
      }
      if ((int)uVar13 < 2) {
        uVar13 = 1;
      }
      *(char *)((long)param_1 + 0xb6d) = (char)uVar13;
      *(char *)(param_1 + 0x2db) = (char)uVar13 + (char)(uVar7 << 1);
      uVar5 = 2;
      if (uVar9 < 0x28) {
        uVar5 = 0xe < uVar9;
      }
      *(undefined1 *)((long)param_1 + 0xb6f) = uVar5;
    }
    *(undefined1 *)((long)param_1 + 0xb6e) = 0;
    uVar13 = param_1[0x1c] + uVar9;
    uVar11 = uVar13;
    if (0x3e < (int)uVar13) {
      uVar11 = 0x3f;
    }
    uVar11 = uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU);
    if ((int)uVar13 < 1) {
      *(undefined1 *)(param_1 + 0x2dc) = 0;
      *(undefined1 *)((long)param_1 + 0xb72) = 1;
      if ((int)uVar9 < 1) goto LAB_00222370;
LAB_00222064:
      uVar3 = param_1[0x16];
      uVar10 = uVar7;
      if (0 < (int)uVar3) {
        uVar14 = 1;
        if (4 < uVar3) {
          uVar14 = 2;
        }
        uVar10 = uVar7 >> (ulong)uVar14;
        if ((int)(9 - uVar3) <= (int)(uVar7 >> (ulong)uVar14)) {
          uVar10 = 9 - uVar3;
        }
      }
      if ((int)uVar10 < 2) {
        uVar10 = 1;
      }
      *(char *)((long)param_1 + 0xb75) = (char)uVar10;
      *(char *)(param_1 + 0x2dd) = (char)uVar10 + (char)(uVar7 << 1);
      uVar5 = 2;
      if (uVar9 < 0x28) {
        uVar5 = 0xe < uVar9;
      }
      *(undefined1 *)((long)param_1 + 0xb77) = uVar5;
      *(undefined1 *)((long)param_1 + 0xb76) = 0;
      if (0 < (int)uVar13) goto LAB_002220cc;
LAB_00222380:
      *(undefined1 *)(param_1 + 0x2de) = 0;
      *(undefined1 *)((long)param_1 + 0xb7a) = 1;
      if ((int)uVar9 < 1) goto LAB_00222394;
LAB_00222138:
      uVar3 = param_1[0x16];
      uVar10 = uVar7;
      if (0 < (int)uVar3) {
        uVar14 = 1;
        if (4 < uVar3) {
          uVar14 = 2;
        }
        uVar10 = uVar7 >> (ulong)uVar14;
        if ((int)(9 - uVar3) <= (int)(uVar7 >> (ulong)uVar14)) {
          uVar10 = 9 - uVar3;
        }
      }
      if ((int)uVar10 < 2) {
        uVar10 = 1;
      }
      *(char *)((long)param_1 + 0xb7d) = (char)uVar10;
      *(char *)(param_1 + 0x2df) = (char)uVar10 + (char)(uVar7 << 1);
      uVar5 = 2;
      if (uVar9 < 0x28) {
        uVar5 = 0xe < uVar9;
      }
      *(undefined1 *)((long)param_1 + 0xb7f) = uVar5;
      *(undefined1 *)((long)param_1 + 0xb7e) = 0;
      if (0 < (int)uVar13) goto LAB_002221a0;
LAB_002223a4:
      *(undefined1 *)(param_1 + 0x2e0) = 0;
      *(undefined1 *)((long)param_1 + 0xb82) = 1;
      if ((int)uVar9 < 1) goto LAB_002223b8;
LAB_0022220c:
      uVar3 = param_1[0x16];
      uVar10 = uVar7;
      if (0 < (int)uVar3) {
        uVar14 = 1;
        if (4 < uVar3) {
          uVar14 = 2;
        }
        uVar10 = uVar7 >> (ulong)uVar14;
        if ((int)(9 - uVar3) <= (int)(uVar7 >> (ulong)uVar14)) {
          uVar10 = 9 - uVar3;
        }
      }
      if ((int)uVar10 < 2) {
        uVar10 = 1;
      }
      *(char *)((long)param_1 + 0xb85) = (char)uVar10;
      *(char *)(param_1 + 0x2e1) = (char)uVar10 + (char)(uVar7 << 1);
      uVar5 = 2;
      if (uVar9 < 0x28) {
        uVar5 = 0xe < uVar9;
      }
      *(undefined1 *)((long)param_1 + 0xb87) = uVar5;
      *(undefined1 *)((long)param_1 + 0xb86) = 0;
    }
    else {
      uVar3 = param_1[0x16];
      uVar10 = uVar11;
      if (0 < (int)uVar3) {
        uVar14 = 1;
        if (4 < uVar3) {
          uVar14 = 2;
        }
        uVar10 = uVar11 >> (ulong)uVar14;
        if ((int)(9 - uVar3) <= (int)(uVar11 >> (ulong)uVar14)) {
          uVar10 = 9 - uVar3;
        }
      }
      if ((int)uVar10 < 2) {
        uVar10 = 1;
      }
      *(char *)((long)param_1 + 0xb71) = (char)uVar10;
      *(char *)(param_1 + 0x2dc) = (char)uVar10 + (char)(uVar11 << 1);
      uVar5 = 2;
      if (uVar13 < 0x28) {
        uVar5 = 0xe < uVar13;
      }
      *(undefined1 *)((long)param_1 + 0xb73) = uVar5;
      *(undefined1 *)((long)param_1 + 0xb72) = 1;
      if (0 < (int)uVar9) goto LAB_00222064;
LAB_00222370:
      *(undefined1 *)(param_1 + 0x2dd) = 0;
      *(undefined1 *)((long)param_1 + 0xb76) = 0;
      if ((int)uVar13 < 1) goto LAB_00222380;
LAB_002220cc:
      uVar3 = param_1[0x16];
      uVar10 = uVar11;
      if (0 < (int)uVar3) {
        uVar14 = 1;
        if (4 < uVar3) {
          uVar14 = 2;
        }
        uVar10 = uVar11 >> (ulong)uVar14;
        if ((int)(9 - uVar3) <= (int)(uVar11 >> (ulong)uVar14)) {
          uVar10 = 9 - uVar3;
        }
      }
      if ((int)uVar10 < 2) {
        uVar10 = 1;
      }
      *(char *)((long)param_1 + 0xb79) = (char)uVar10;
      *(char *)(param_1 + 0x2de) = (char)uVar10 + (char)(uVar11 << 1);
      uVar5 = 2;
      if (uVar13 < 0x28) {
        uVar5 = 0xe < uVar13;
      }
      *(undefined1 *)((long)param_1 + 0xb7b) = uVar5;
      *(undefined1 *)((long)param_1 + 0xb7a) = 1;
      if (0 < (int)uVar9) goto LAB_00222138;
LAB_00222394:
      *(undefined1 *)(param_1 + 0x2df) = 0;
      *(undefined1 *)((long)param_1 + 0xb7e) = 0;
      if ((int)uVar13 < 1) goto LAB_002223a4;
LAB_002221a0:
      uVar3 = param_1[0x16];
      uVar10 = uVar11;
      if (0 < (int)uVar3) {
        uVar14 = 1;
        if (4 < uVar3) {
          uVar14 = 2;
        }
        uVar10 = uVar11 >> (ulong)uVar14;
        if ((int)(9 - uVar3) <= (int)(uVar11 >> (ulong)uVar14)) {
          uVar10 = 9 - uVar3;
        }
      }
      if ((int)uVar10 < 2) {
        uVar10 = 1;
      }
      *(char *)((long)param_1 + 0xb81) = (char)uVar10;
      *(char *)(param_1 + 0x2e0) = (char)uVar10 + (char)(uVar11 << 1);
      uVar5 = 2;
      if (uVar13 < 0x28) {
        uVar5 = 0xe < uVar13;
      }
      *(undefined1 *)((long)param_1 + 0xb83) = uVar5;
      *(undefined1 *)((long)param_1 + 0xb82) = 1;
      if (0 < (int)uVar9) goto LAB_0022220c;
LAB_002223b8:
      *(undefined1 *)(param_1 + 0x2e1) = 0;
      *(undefined1 *)((long)param_1 + 0xb86) = 0;
    }
    if ((int)uVar13 < 1) goto LAB_00222dbc;
    uVar7 = param_1[0x16];
    uVar9 = uVar11;
    if (0 < (int)uVar7) {
      uVar10 = 1;
      if (4 < uVar7) {
        uVar10 = 2;
      }
      uVar9 = uVar11 >> (ulong)uVar10;
      if ((int)(9 - uVar7) <= (int)(uVar11 >> (ulong)uVar10)) {
        uVar9 = 9 - uVar7;
      }
    }
    if ((int)uVar9 < 2) {
      uVar9 = 1;
    }
    *(char *)((long)param_1 + 0xb89) = (char)uVar9;
    *(char *)(param_1 + 0x2e2) = (char)uVar9 + (char)(uVar11 << 1);
    uVar5 = 2;
    if (uVar13 < 0x28) {
      uVar5 = 0xe < uVar13;
    }
    goto LAB_00222da0;
  }
  if (iVar6 == 0) {
    uVar9 = param_1[0x15];
  }
  else {
    uVar9 = (uint)*(char *)(param_1 + 0x24);
    if (param_1[0x22] == 0) {
      uVar9 = param_1[0x15] + uVar9;
    }
  }
  uVar7 = uVar9;
  if (0x3e < (int)uVar9) {
    uVar7 = 0x3f;
  }
  uVar5 = 2;
  if (uVar9 < 0x28) {
    uVar5 = 0xe < uVar9;
  }
  if ((int)uVar9 < 1) {
    *(undefined1 *)(param_1 + 0x2db) = 0;
    *(undefined1 *)((long)param_1 + 0xb6e) = 0;
    *(undefined1 *)(param_1 + 0x2dc) = 0;
    *(undefined1 *)((long)param_1 + 0xb72) = 1;
    if (iVar6 == 0) goto LAB_00221fc0;
LAB_002222b0:
    uVar9 = (uint)*(char *)((long)param_1 + 0x91);
    if (param_1[0x22] == 0) {
      uVar9 = param_1[0x15] + uVar9;
    }
  }
  else {
    uVar9 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
    uVar13 = param_1[0x16];
    if ((int)uVar13 < 1) {
      if ((int)uVar7 < 2) {
        uVar7 = 1;
      }
      cVar12 = (char)uVar7;
      *(char *)((long)param_1 + 0xb6d) = cVar12;
    }
    else {
      uVar7 = 1;
      if (4 < uVar13) {
        uVar7 = 2;
      }
      uVar7 = uVar9 >> (ulong)uVar7;
      if ((int)(9 - uVar13) <= (int)uVar7) {
        uVar7 = 9 - uVar13;
      }
      if ((int)uVar7 < 2) {
        uVar7 = 1;
      }
      cVar12 = (char)uVar7;
      *(char *)((long)param_1 + 0xb6d) = cVar12;
    }
    cVar8 = cVar12 + (char)uVar9 * '\x02';
    *(char *)(param_1 + 0x2db) = cVar8;
    *(undefined1 *)((long)param_1 + 0xb6f) = uVar5;
    *(undefined1 *)((long)param_1 + 0xb6e) = 0;
    *(char *)((long)param_1 + 0xb71) = cVar12;
    *(char *)(param_1 + 0x2dc) = cVar8;
    *(undefined1 *)((long)param_1 + 0xb73) = uVar5;
    *(undefined1 *)((long)param_1 + 0xb72) = 1;
    if (iVar6 != 0) goto LAB_002222b0;
LAB_00221fc0:
    uVar9 = param_1[0x15];
  }
  uVar7 = uVar9;
  if (0x3e < (int)uVar9) {
    uVar7 = 0x3f;
  }
  uVar5 = 2;
  if (uVar9 < 0x28) {
    uVar5 = 0xe < uVar9;
  }
  if ((int)uVar9 < 1) {
    *(undefined1 *)(param_1 + 0x2dd) = 0;
    *(undefined1 *)((long)param_1 + 0xb76) = 0;
    *(undefined1 *)(param_1 + 0x2de) = 0;
    *(undefined1 *)((long)param_1 + 0xb7a) = 1;
    if (iVar6 == 0) goto LAB_00222354;
LAB_0022245c:
    uVar9 = (uint)*(char *)((long)param_1 + 0x92);
    if (param_1[0x22] == 0) {
      uVar9 = param_1[0x15] + uVar9;
    }
  }
  else {
    uVar9 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
    uVar13 = param_1[0x16];
    if ((int)uVar13 < 1) {
      if ((int)uVar7 < 2) {
        uVar7 = 1;
      }
      cVar12 = (char)uVar7;
      *(char *)((long)param_1 + 0xb75) = cVar12;
    }
    else {
      uVar7 = 1;
      if (4 < uVar13) {
        uVar7 = 2;
      }
      uVar7 = uVar9 >> (ulong)uVar7;
      if ((int)(9 - uVar13) <= (int)uVar7) {
        uVar7 = 9 - uVar13;
      }
      if ((int)uVar7 < 2) {
        uVar7 = 1;
      }
      cVar12 = (char)uVar7;
      *(char *)((long)param_1 + 0xb75) = cVar12;
    }
    cVar8 = cVar12 + (char)uVar9 * '\x02';
    *(char *)(param_1 + 0x2dd) = cVar8;
    *(undefined1 *)((long)param_1 + 0xb77) = uVar5;
    *(undefined1 *)((long)param_1 + 0xb76) = 0;
    *(char *)((long)param_1 + 0xb79) = cVar12;
    *(char *)(param_1 + 0x2de) = cVar8;
    *(undefined1 *)((long)param_1 + 0xb7b) = uVar5;
    *(undefined1 *)((long)param_1 + 0xb7a) = 1;
    if (iVar6 != 0) goto LAB_0022245c;
LAB_00222354:
    uVar9 = param_1[0x15];
  }
  uVar7 = uVar9;
  if (0x3e < (int)uVar9) {
    uVar7 = 0x3f;
  }
  uVar5 = 2;
  if (uVar9 < 0x28) {
    uVar5 = 0xe < uVar9;
  }
  if ((int)uVar9 < 1) {
    *(undefined1 *)(param_1 + 0x2df) = 0;
    *(undefined1 *)((long)param_1 + 0xb7e) = 0;
    *(undefined1 *)(param_1 + 0x2e0) = 0;
    *(undefined1 *)((long)param_1 + 0xb82) = 1;
    if (iVar6 == 0) goto LAB_00222500;
LAB_00222540:
    uVar9 = (uint)*(char *)((long)param_1 + 0x93);
    if (param_1[0x22] == 0) {
      uVar9 = param_1[0x15] + uVar9;
    }
  }
  else {
    uVar9 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
    uVar13 = param_1[0x16];
    if ((int)uVar13 < 1) {
      if ((int)uVar7 < 2) {
        uVar7 = 1;
      }
      cVar12 = (char)uVar7;
      *(char *)((long)param_1 + 0xb7d) = cVar12;
    }
    else {
      uVar7 = 1;
      if (4 < uVar13) {
        uVar7 = 2;
      }
      uVar7 = uVar9 >> (ulong)uVar7;
      if ((int)(9 - uVar13) <= (int)uVar7) {
        uVar7 = 9 - uVar13;
      }
      if ((int)uVar7 < 2) {
        uVar7 = 1;
      }
      cVar12 = (char)uVar7;
      *(char *)((long)param_1 + 0xb7d) = cVar12;
    }
    cVar8 = cVar12 + (char)uVar9 * '\x02';
    *(char *)(param_1 + 0x2df) = cVar8;
    *(undefined1 *)((long)param_1 + 0xb7f) = uVar5;
    *(undefined1 *)((long)param_1 + 0xb7e) = 0;
    *(char *)((long)param_1 + 0xb81) = cVar12;
    *(char *)(param_1 + 0x2e0) = cVar8;
    *(undefined1 *)((long)param_1 + 0xb83) = uVar5;
    *(undefined1 *)((long)param_1 + 0xb82) = 1;
    if (iVar6 != 0) goto LAB_00222540;
LAB_00222500:
    uVar9 = param_1[0x15];
  }
  uVar7 = uVar9;
  if (0x3e < (int)uVar9) {
    uVar7 = 0x3f;
  }
  uVar5 = 2;
  if (uVar9 < 0x28) {
    uVar5 = 0xe < uVar9;
  }
  if ((int)uVar9 < 1) {
    *(undefined1 *)(param_1 + 0x2e1) = 0;
    *(undefined1 *)((long)param_1 + 0xb86) = 0;
LAB_00222dbc:
    *(undefined1 *)(param_1 + 0x2e2) = 0;
    *(undefined1 *)((long)param_1 + 0xb8a) = 1;
    return 0;
  }
  uVar9 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
  uVar13 = param_1[0x16];
  if ((int)uVar13 < 1) {
    if ((int)uVar7 < 2) {
      uVar7 = 1;
    }
    cVar12 = (char)uVar7;
    *(char *)((long)param_1 + 0xb85) = cVar12;
  }
  else {
    uVar7 = 1;
    if (4 < uVar13) {
      uVar7 = 2;
    }
    uVar7 = uVar9 >> (ulong)uVar7;
    if ((int)(9 - uVar13) <= (int)uVar7) {
      uVar7 = 9 - uVar13;
    }
    if ((int)uVar7 < 2) {
      uVar7 = 1;
    }
    cVar12 = (char)uVar7;
    *(char *)((long)param_1 + 0xb85) = cVar12;
  }
  cVar8 = cVar12 + (char)uVar9 * '\x02';
  *(char *)(param_1 + 0x2e1) = cVar8;
  *(undefined1 *)((long)param_1 + 0xb87) = uVar5;
  *(undefined1 *)((long)param_1 + 0xb86) = 0;
  *(char *)((long)param_1 + 0xb89) = cVar12;
  *(char *)(param_1 + 0x2e2) = cVar8;
LAB_00222da0:
  *(undefined1 *)((long)param_1 + 0xb8b) = uVar5;
  *(undefined1 *)((long)param_1 + 0xb8a) = 1;
  return 0;
}



/* Entry: 00222e3c; end: 00222e5b;  */

int FUN_00222e3c(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != 0) {
    iVar1 = 0;
    if (*(int *)(param_1 + 0x28) != 0) {
      iVar1 = (uint)(0x1ff < param_3) << 1;
    }
  }
  return iVar1;
}



/* Entry: 00222e5c; end: 0022315b;  */

void FUN_00222e5c(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  
  *(undefined4 *)(param_1 + 0xcc) = 0;
  if (*(int *)(param_1 + 200) < 1) {
    uVar15 = 1;
    *(undefined4 *)(param_1 + 0xd0) = 1;
  }
  else {
    lVar5 = param_1;
    FUN_0024b11c();
    iVar8 = (int)param_1 + 0x98;
    (**(code **)(lVar5 + 8))();
    if (iVar8 == 0) {
      lVar5 = param_1;
      FUN_00225d8c(param_1,1,"thread initialization failed.");
      if ((int)lVar5 == 0) {
        return;
      }
      uVar15 = (ulong)*(uint *)(param_1 + 0xd0);
    }
    else {
      *(long *)(param_1 + 0xb0) = param_1;
      *(long *)(param_1 + 0xb8) = param_1 + 0xf8;
      *(code **)(param_1 + 0xa8) = FUN_002214a0;
      uVar7 = 2;
      if (0 < *(int *)(param_1 + 0xb68)) {
        uVar7 = 3;
      }
      uVar15 = (ulong)uVar7;
      *(uint *)(param_1 + 0xd0) = uVar7;
    }
  }
  iVar11 = *(int *)(param_1 + 0x198);
  lVar14 = (long)iVar11;
  lVar5 = lVar14 * 2 + 2;
  iVar8 = *(int *)(param_1 + 200);
  uVar7 = iVar11 << (0 < iVar8);
  uVar9 = -(ulong)(uVar7 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar7 << 2;
  if ((long)*(int *)(param_1 + 0xb68) < 1) {
    uVar9 = 0;
  }
  lVar16 = (long)(iVar11 << (iVar8 == 2)) * 800;
  iVar4 = ((int)(uVar15 << 4) + (uint)(byte)(&UNK_007edd0a)[*(int *)(param_1 + 0xb68)]) * 3;
  lVar12 = lVar14 * 0x20 * ((long)((ulong)(uint)(iVar4 - (iVar4 >> 0x1f)) << 0x20) >> 0x21);
  if (*(long *)(param_1 + 0xb98) == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = (ulong)*(ushort *)(param_1 + 0x4a) * (ulong)*(ushort *)(param_1 + 0x48);
  }
  uVar1 = lVar14 * 0x24 + lVar5 + uVar9 + lVar16 + lVar13 + lVar12 + 0x35f;
  uVar6 = *(ulong *)(param_1 + 0xb48);
  if (*(ulong *)(param_1 + 0xb50) < uVar1) {
    func_0x0024b520();
    *(undefined8 *)(param_1 + 0xb50) = 0;
    uVar6 = uVar1;
    func_0x0024b4dc(uVar1,1);
    *(ulong *)(param_1 + 0xb48) = uVar6;
    if (uVar6 == 0) {
      lVar5 = param_1;
      FUN_00225d8c(param_1,1,"no memory during frame initialization.");
      if ((int)lVar5 == 0) {
        return;
      }
      goto LAB_002230f4;
    }
    *(ulong *)(param_1 + 0xb50) = uVar1;
    iVar8 = *(int *)(param_1 + 200);
  }
  *(ulong *)(param_1 + 0xaf8) = uVar6;
  lVar2 = uVar6 + lVar14 * 4;
  *(long *)(param_1 + 0xb08) = lVar2;
  lVar2 = lVar2 + lVar14 * 0x20;
  *(long *)(param_1 + 0xb10) = lVar2 + 2;
  lVar3 = 0;
  if (uVar9 != 0) {
    lVar3 = lVar2 + lVar5;
  }
  *(long *)(param_1 + 0xb18) = lVar3;
  lVar10 = lVar2 + lVar5 + uVar9;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(long *)(param_1 + 0xe8) = lVar3;
  if (iVar8 < 1) {
    uVar9 = lVar10 + 0x1fU & 0xffffffffffffffe0;
    *(ulong *)(param_1 + 0xb20) = uVar9;
    lVar10 = uVar9 + 0x340;
    *(long *)(param_1 + 0xb60) = lVar10;
    *(long *)(param_1 + 0xf0) = lVar10;
  }
  else {
    uVar9 = lVar10 + 0x1fU & 0xffffffffffffffe0;
    *(ulong *)(param_1 + 0xb20) = uVar9;
    lVar10 = uVar9 + 0x340;
    *(long *)(param_1 + 0xb60) = lVar10;
    *(long *)(param_1 + 0xe8) = lVar3 + lVar14 * 4;
    *(long *)(param_1 + 0xf0) = lVar10;
    if (iVar8 == 2) {
      *(long *)(param_1 + 0xf0) = lVar10 + (long)iVar11 * 800;
    }
  }
  lVar10 = lVar10 + lVar16;
  iVar8 = (int)(lVar14 * 0x10);
  *(int *)(param_1 + 0xb40) = iVar8;
  iVar11 = (int)(lVar14 * 8);
  *(int *)(param_1 + 0xb44) = iVar11;
  uVar7 = (uint)((byte)(&UNK_007edd0a)[*(int *)(param_1 + 0xb68)] >> 1);
  lVar16 = lVar10 + lVar14 * 0x10 * (ulong)(byte)(&UNK_007edd0a)[*(int *)(param_1 + 0xb68)];
  *(long *)(param_1 + 0xb28) = lVar16;
  lVar16 = lVar16 + (long)iVar8 * (-(uVar15 >> 0x1f) & 0xfffffff000000000 | uVar15 << 4) +
           (long)(int)uVar7 * (long)iVar11;
  *(long *)(param_1 + 0xb30) = lVar16;
  *(long *)(param_1 + 0xb38) =
       lVar16 + (long)(int)uVar15 * lVar14 * 8 * 8 + (long)(int)uVar7 * (long)iVar11;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  lVar16 = 0;
  if (lVar13 != 0) {
    lVar16 = lVar10 + lVar12;
  }
  *(long *)(param_1 + 3000) = lVar16;
  _bzero(lVar2,lVar5);
  FUN_00226de4(param_1);
  _bzero(*(undefined8 *)(param_1 + 0xaf8),lVar14 * 4);
LAB_002230f4:
  *(undefined4 *)(param_2 + 8) = 0;
  uVar17 = *(undefined8 *)(param_1 + 0xb28);
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0xb30);
  *(undefined8 *)(param_2 + 0x18) = uVar17;
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0xb38);
  *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_1 + 0xb40);
  *(undefined8 *)(param_2 + 0x98) = 0;
  FUN_0022c9e0();
  return;
}



/* Entry: 0022315c; end: 0022317f;  */

void FUN_0022315c(undefined8 param_1,long param_2)

{
  *(code **)(param_2 + 0x48) = FUN_002231f8;
  *(code **)(param_2 + 0x50) = FUN_0022370c;
  *(undefined8 *)(param_2 + 0x38) = param_1;
  *(code **)(param_2 + 0x40) = FUN_00223180;
  return;
}



/* Entry: 00223180; end: 002231f7;  */

undefined8 FUN_00223180(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0xc) < 1 || *(int *)(param_1 + 0x10) < 1) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x38);
  lVar1 = param_1;
  (**(code **)(lVar2 + 0x58))(param_1,lVar2);
  if (*(code **)(lVar2 + 0x60) != (code *)0x0) {
    (**(code **)(lVar2 + 0x60))(param_1,lVar2,lVar1);
  }
  *(int *)(lVar2 + 0x20) = *(int *)(lVar2 + 0x20) + (int)lVar1;
  return 1;
}



/* Entry: 002231f8; end: 0022370b;  */

void FUN_002231f8(long param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined4 uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  code *pcVar16;
  ulong uVar17;
  long lVar18;
  long *plVar19;
  undefined8 *puVar20;
  int *piVar21;
  
  puVar20 = *(undefined8 **)(param_1 + 0x38);
  uVar5 = *(uint *)*puVar20;
  if (uVar5 < 0xd && (1 << (ulong)(uVar5 & 0x1f) & 0x103aU) != 0) {
    bVar7 = false;
    puVar20[0xb] = 0;
    puVar20[10] = 0;
    puVar20[0xd] = 0;
    puVar20[0xc] = 0;
    uVar9 = puVar20[5];
    FUN_0022b778(uVar9,param_1,0xb);
    iVar8 = (int)uVar9;
  }
  else {
    bVar7 = uVar5 - 0xb < 0xfffffffc;
    puVar20[0xb] = 0;
    puVar20[10] = 0;
    puVar20[0xd] = 0;
    puVar20[0xc] = 0;
    uVar12 = 0xb;
    if (bVar7) {
      uVar12 = 0xc;
    }
    uVar9 = puVar20[5];
    FUN_0022b778(uVar9,param_1,uVar12);
    iVar8 = (int)uVar9;
  }
  if (iVar8 == 0) {
    return;
  }
  plVar19 = puVar20 + 10;
  bVar2 = bVar7;
  if (uVar5 - 0xb < 0xfffffffc) {
    bVar2 = true;
  }
  if (!bVar2) {
    func_0x0022fb38();
  }
  if (*(int *)(param_1 + 0x88) == 0) {
    if (uVar5 < 0xb) {
      FUN_00232f40();
      puVar20[0xb] = 0x223734;
      if (*(int *)(param_1 + 0x58) != 0) {
        uVar17 = (long)*(int *)(param_1 + 0xc) + 1;
        lVar11 = 1;
        FUN_0024b4dc(1,(uVar17 & 0xfffffffffffffffe) + (long)*(int *)(param_1 + 0xc));
        *plVar19 = lVar11;
        if (lVar11 == 0) {
          return;
        }
        lVar13 = lVar11 + *(int *)(param_1 + 0xc);
        puVar20[1] = lVar11;
        puVar20[2] = lVar13;
        puVar20[3] = lVar13 + ((int)uVar17 >> 1);
        puVar20[0xb] = FUN_002237a0;
        func_0x0022fb38();
      }
    }
    else {
      puVar20[0xb] = 0x223994;
    }
    if (bVar7) {
      return;
    }
    if (uVar5 != 10 && uVar5 != 5) {
      pcVar16 = FUN_00223cb0;
      if (uVar5 < 0xb) {
        pcVar16 = FUN_00223ba8;
      }
      puVar20[0xc] = pcVar16;
      if (10 < uVar5) {
        return;
      }
      goto LAB_002236c0;
    }
    pcVar16 = FUN_00223aa0;
  }
  else {
    piVar21 = (int *)*puVar20;
    iVar8 = *piVar21;
    uVar6 = iVar8 - 1;
    if (uVar5 < 0xb) {
      if ((uVar6 < 0xc) && ((0x81dU >> (ulong)(uVar6 & 0x1f) & 1) != 0)) {
        bVar7 = false;
      }
      else {
        bVar7 = iVar8 - 0xbU < 0xfffffffc;
      }
      uVar12 = *(undefined4 *)(param_1 + 0x90);
      lVar13 = (long)*(int *)(param_1 + 0x8c);
      iVar8 = *(int *)(param_1 + 0xc);
      iVar3 = *(int *)(param_1 + 0x10);
      lVar11 = 0;
      if (!bVar7) {
        lVar11 = lVar13;
      }
      lVar10 = 0x157;
      lVar18 = lVar13 * 6;
      if (!bVar7) {
        lVar10 = 0x1bf;
        lVar18 = lVar13 << 3;
      }
      lVar11 = lVar11 + lVar13 * 3 + lVar18 * 4;
      lVar14 = 1;
      FUN_0024b4dc(1,lVar11 + lVar10);
      *plVar19 = lVar14;
      if (lVar14 == 0) {
        return;
      }
      iVar3 = iVar3 + 1 >> 1;
      iVar8 = iVar8 + 1 >> 1;
      lVar10 = lVar14 + lVar18 * 4;
      uVar17 = lVar14 + lVar11 + 0x1fU & 0xffffffffffffffe0;
      puVar20[6] = uVar17;
      puVar20[7] = uVar17 + 0x68;
      lVar11 = 0;
      if (!bVar7) {
        lVar11 = uVar17 + 0x138;
      }
      puVar20[8] = uVar17 + 0xd0;
      puVar20[9] = lVar11;
      FUN_0024ae20(uVar17,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),lVar10,
                   lVar13,uVar12,0,1,lVar14);
      FUN_0024ae20(puVar20[7],iVar8,iVar3,lVar10 + lVar13,lVar13,uVar12,0,1,lVar14 + lVar13 * 8);
      FUN_0024ae20(puVar20[8],iVar8,iVar3,lVar10 + lVar13 * 2,lVar13,uVar12,0,1,
                   lVar14 + lVar13 * 0x10);
      puVar20[0xb] = FUN_00223d68;
      FUN_00232ddc();
      if (bVar7) {
        return;
      }
      FUN_0024ae20(puVar20[9],*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
                   lVar10 + lVar13 * 3,lVar13,uVar12,0,1,lVar14 + lVar13 * 0x18);
      pcVar16 = FUN_00223fcc;
      if (*(int *)*puVar20 != 10 && *(int *)*puVar20 != 5) {
        pcVar16 = (code *)0x22412c;
      }
      puVar20[0xc] = FUN_00223f2c;
      puVar20[0xd] = pcVar16;
      goto LAB_002236c0;
    }
    if ((uVar6 < 0xc) && ((0x81dU >> (ulong)(uVar6 & 0x1f) & 1) != 0)) {
      bVar7 = false;
    }
    else {
      bVar7 = iVar8 - 0xbU < 0xfffffffc;
    }
    iVar3 = *(int *)(param_1 + 0x90);
    lVar13 = (long)*(int *)(param_1 + 0x8c);
    uVar5 = *(int *)(param_1 + 0x8c) + 1;
    iVar8 = *(int *)(param_1 + 0xc);
    iVar4 = *(int *)(param_1 + 0x10);
    uVar17 = -(ulong)(uVar5 >> 0x1f) & 0xfffffffe00000000 | (ulong)(uVar5 & 0xfffffffe) << 1;
    lVar11 = 0x157;
    if (!bVar7) {
      lVar11 = 0x1bf;
    }
    lVar10 = 0;
    if (!bVar7) {
      lVar10 = lVar13 * 2;
    }
    lVar18 = (lVar10 + lVar13 * 2 + uVar17) * 4;
    lVar10 = 1;
    FUN_0024b4dc(1,lVar18 + lVar11);
    *plVar19 = lVar10;
    if (lVar10 == 0) {
      return;
    }
    lVar14 = (long)(int)(uVar5 & 0xfffffffe);
    iVar4 = iVar4 + 1 >> 1;
    iVar8 = iVar8 + 1 >> 1;
    iVar1 = iVar3 + 1 >> 1;
    uVar15 = lVar10 + lVar18 + 0x1fU & 0xffffffffffffffe0;
    puVar20[6] = uVar15;
    puVar20[7] = uVar15 + 0x68;
    lVar11 = 0;
    if (!bVar7) {
      lVar11 = uVar15 + 0x138;
    }
    puVar20[8] = uVar15 + 0xd0;
    puVar20[9] = lVar11;
    FUN_0024ae20(uVar15,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
                 *(undefined8 *)(piVar21 + 4),lVar13,iVar3,piVar21[0xc],1,lVar10,lVar14);
    lVar10 = lVar10 + lVar13 * 8;
    FUN_0024ae20(puVar20[7],iVar8,iVar4,*(undefined8 *)(piVar21 + 6),(int)uVar5 >> 1,iVar1,
                 piVar21[0xd],1,lVar10);
    FUN_0024ae20(puVar20[8],iVar8,iVar4,*(undefined8 *)(piVar21 + 8),(int)uVar5 >> 1,iVar1,
                 piVar21[0xe],1,lVar10 + lVar14 * 4);
    puVar20[0xb] = FUN_002242a8;
    if (bVar7) {
      return;
    }
    FUN_0024ae20(puVar20[9],*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
                 *(undefined8 *)(piVar21 + 10),lVar13,iVar3,piVar21[0xf],1,lVar10 + uVar17 * 4);
    pcVar16 = FUN_00224428;
  }
  puVar20[0xc] = pcVar16;
LAB_002236c0:
  FUN_0022c148();
  return;
}



/* Entry: 0022370c; end: 0022379f;  */

void FUN_0022370c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x0024b520(*(undefined8 *)(lVar1 + 0x50));
  *(undefined8 *)(lVar1 + 0x50) = 0;
  return;
}



/* Entry: 002237a0; end: 00223a9f;  */

int FUN_002237a0(long param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint *puVar12;
  code *pcVar13;
  
  iVar2 = *(int *)(param_1 + 0xc);
  iVar3 = *(int *)(param_1 + 0x10);
  puVar12 = (uint *)*param_2;
  iVar4 = *(int *)(param_1 + 8);
  lVar9 = *(long *)(puVar12 + 4) + (long)(int)puVar12[6] * (long)iVar4;
  pcVar13 = *(code **)((ulong)*puVar12 * 8 + 0xb6d2a8);
  lVar10 = *(long *)(param_1 + 0x18);
  lVar11 = *(long *)(param_1 + 0x20);
  lVar6 = *(long *)(param_1 + 0x28);
  if (iVar4 == 0) {
    (*pcVar13)(lVar10,0,lVar11,lVar6,lVar11,lVar6,lVar9,0,iVar2);
    iVar1 = iVar3;
  }
  else {
    (*pcVar13)(param_2[1],lVar10,param_2[2],param_2[3],lVar11,lVar6,lVar9 - (int)puVar12[6],lVar9,
               iVar2);
    iVar1 = iVar3 + 1;
  }
  if (iVar3 < 3) {
    lVar7 = (long)*(int *)(param_1 + 0x30);
    if (*(int *)(param_1 + 0x84) <= *(int *)(param_1 + 0x80) + iVar4 + iVar3) goto LAB_00223940;
  }
  else {
    iVar8 = iVar4 + 2;
    lVar7 = lVar11;
    lVar5 = lVar6;
    do {
      lVar11 = lVar7 + *(int *)(param_1 + 0x34);
      lVar6 = lVar5 + *(int *)(param_1 + 0x34);
      lVar9 = lVar9 + (long)(int)puVar12[6] * 2;
      lVar10 = lVar10 + (long)*(int *)(param_1 + 0x30) * 2;
      (*pcVar13)(lVar10 - *(int *)(param_1 + 0x30),lVar10,lVar7,lVar5,lVar11,lVar6,
                 lVar9 - (int)puVar12[6],lVar9,iVar2);
      iVar8 = iVar8 + 2;
      lVar7 = lVar11;
      lVar5 = lVar6;
    } while (iVar8 < iVar4 + iVar3);
    lVar7 = (long)*(int *)(param_1 + 0x30);
    if (*(int *)(param_1 + 0x84) <= *(int *)(param_1 + 0x80) + iVar4 + iVar3) {
LAB_00223940:
      if ((iVar4 + iVar3 & 1U) == 0) {
        (*pcVar13)(lVar10 + lVar7,0,lVar11,lVar6,lVar11,lVar6,lVar9 + (int)puVar12[6],0,iVar2);
        return iVar1;
      }
      return iVar1;
    }
  }
  _memcpy(param_2[1],lVar10 + lVar7,(long)iVar2);
  lVar9 = (long)((iVar2 + 1) / 2);
  _memcpy(param_2[2],lVar11,lVar9);
  _memcpy(param_2[3],lVar6,lVar9);
  return iVar1 + -1;
}



/* Entry: 00223aa0; end: 00223ba7;  */

undefined8 FUN_00223aa0(int *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  byte bVar11;
  int iVar12;
  byte *pbVar13;
  byte *pbVar14;
  ulong uVar15;
  
  pbVar6 = *(byte **)(param_1 + 0x26);
  if (pbVar6 != (byte *)0x0) {
    iVar8 = param_1[2];
    uVar1 = param_1[3];
    iVar2 = param_1[4];
    iVar12 = iVar8;
    iVar4 = iVar2;
    if (param_1[0x16] != 0) {
      if (iVar8 == 0) {
        iVar12 = 0;
        iVar9 = iVar2 + -1;
      }
      else {
        iVar12 = iVar8 + -1;
        pbVar6 = pbVar6 + -(long)*param_1;
        iVar9 = iVar2;
      }
      iVar4 = (iVar2 + iVar8) - iVar12;
      if (iVar2 + iVar8 + param_1[0x20] != param_1[0x21]) {
        iVar4 = iVar9;
      }
    }
    if (0 < iVar4 && 0 < (int)uVar1) {
      iVar8 = 0;
      piVar10 = (int *)*param_2;
      iVar2 = *piVar10;
      lVar5 = *(long *)(piVar10 + 4) + (long)piVar10[6] * (long)iVar12;
      pbVar14 = (byte *)(lVar5 + 1);
      bVar11 = 0xf;
      uVar15 = (ulong)uVar1;
      pbVar13 = pbVar14;
      pbVar7 = pbVar6;
      do {
        do {
          bVar3 = *pbVar6;
          *pbVar14 = *pbVar14 & 0xf0 | bVar3 >> 4;
          bVar11 = bVar11 & bVar3 >> 4;
          uVar15 = uVar15 - 1;
          pbVar6 = pbVar6 + 1;
          pbVar14 = pbVar14 + 2;
        } while (uVar15 != 0);
        pbVar6 = pbVar7 + *param_1;
        pbVar14 = pbVar13 + piVar10[6];
        iVar8 = iVar8 + 1;
        uVar15 = (ulong)uVar1;
        pbVar13 = pbVar14;
        pbVar7 = pbVar6;
      } while (iVar8 != iVar4);
      if (bVar11 != 0xf && 0xfffffffb < iVar2 - 0xbU) {
        (*pcRam0000000000b6ce58)(lVar5);
      }
    }
  }
  return 0;
}



/* Entry: 00223ba8; end: 00223caf;  */

undefined8 FUN_00223ba8(int *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  
  lVar8 = *(long *)(param_1 + 0x26);
  if (lVar8 != 0) {
    piVar11 = (int *)*param_2;
    iVar5 = *piVar11;
    iVar3 = param_1[2];
    iVar4 = param_1[3];
    iVar6 = param_1[4];
    iVar9 = iVar3;
    iVar7 = iVar6;
    if (param_1[0x16] != 0) {
      if (iVar3 == 0) {
        iVar9 = 0;
        iVar10 = iVar6 + -1;
      }
      else {
        iVar9 = iVar3 + -1;
        lVar8 = lVar8 - *param_1;
        iVar10 = iVar6;
      }
      iVar7 = (iVar6 + iVar3) - iVar9;
      if (iVar6 + iVar3 + param_1[0x20] != param_1[0x21]) {
        iVar7 = iVar10;
      }
    }
    lVar1 = *(long *)(piVar11 + 4) + (long)(piVar11[6] * iVar9);
    lVar2 = 0;
    if (iVar5 != 4 && iVar5 != 9) {
      lVar2 = 3;
    }
    (*pcRam0000000000b6ce60)(lVar8,*param_1,iVar4,iVar7,lVar1 + lVar2);
    if ((int)lVar8 != 0 && 0xfffffffb < iVar5 - 0xbU) {
      (*pcRam0000000000b6ce50)(lVar1,iVar5 == 4 || iVar5 == 9,iVar4,iVar7,piVar11[6]);
    }
  }
  return 0;
}



/* Entry: 00223cb0; end: 00223d67;  */

undefined8 FUN_00223cb0(int *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  
  lVar4 = *(long *)(param_1 + 0x26);
  lVar6 = *param_2;
  iVar1 = param_1[3];
  iVar5 = param_1[4];
  iVar2 = *(int *)(lVar6 + 0x3c);
  lVar3 = *(long *)(lVar6 + 0x28) + (long)iVar2 * (long)param_1[2];
  if (lVar4 == 0) {
    if (*(long *)(lVar6 + 0x28) != 0 && 0 < iVar5) {
      do {
        _memset(lVar3,0xff,(long)iVar1);
        lVar3 = lVar3 + iVar2;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  else if (0 < iVar5) {
    do {
      _memcpy(lVar3,lVar4,(long)iVar1);
      lVar4 = lVar4 + *param_1;
      lVar3 = lVar3 + *(int *)(lVar6 + 0x3c);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return 0;
}



/* Entry: 00223d68; end: 00223f2b;  */

int FUN_00223d68(long param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  code *pcVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 < 1) {
    iVar6 = 0;
  }
  else {
    iVar10 = 0;
    iVar11 = 0;
    iVar6 = 0;
    lVar2 = param_2[6];
    do {
      FUN_0024af88(lVar2,iVar1 - iVar10,
                   *(long *)(param_1 + 0x18) + (long)(*(int *)(param_1 + 0x30) * iVar10));
      uVar3 = param_2[7];
      iVar8 = (iVar1 + 1 >> 1) - iVar11;
      func_0x0024af68(uVar3,iVar8);
      if ((int)uVar3 != 0) {
        uVar3 = param_2[7];
        FUN_0024af88(uVar3,iVar8,
                     *(long *)(param_1 + 0x20) + (long)*(int *)(param_1 + 0x34) * (long)iVar11);
        FUN_0024af88(param_2[8],iVar8,
                     *(long *)(param_1 + 0x28) + (long)*(int *)(param_1 + 0x34) * (long)iVar11);
        iVar11 = (int)uVar3 + iVar11;
      }
      lVar4 = param_2[6];
      if (*(int *)(lVar4 + 0x40) < *(int *)(lVar4 + 0x38)) {
        iVar8 = 0;
        puVar12 = (uint *)*param_2;
        pcVar9 = *(code **)((ulong)*puVar12 * 8 + 0xb6d310);
        lVar7 = *(long *)(puVar12 + 4) +
                (long)(int)puVar12[6] * ((long)*(int *)(param_2 + 4) + (long)iVar6);
        do {
          if (((0 < *(int *)(lVar4 + 0x18)) ||
              (lVar5 = param_2[7], *(int *)(lVar5 + 0x38) <= *(int *)(lVar5 + 0x40))) ||
             (0 < *(int *)(lVar5 + 0x18))) break;
          FUN_0022f9e4();
          FUN_0022f9e4(param_2[7]);
          FUN_0022f9e4(param_2[8]);
          (*pcVar9)(*(undefined8 *)(param_2[6] + 0x48),*(undefined8 *)(param_2[7] + 0x48),
                    *(undefined8 *)(param_2[8] + 0x48),lVar7,*(undefined4 *)(param_2[6] + 0x34));
          lVar7 = lVar7 + (int)puVar12[6];
          iVar8 = iVar8 + 1;
          lVar4 = param_2[6];
        } while (*(int *)(lVar4 + 0x40) < *(int *)(lVar4 + 0x38));
      }
      else {
        iVar8 = 0;
      }
      iVar10 = (int)lVar2 + iVar10;
      iVar6 = iVar8 + iVar6;
      lVar2 = lVar4;
    } while (iVar10 < iVar1);
  }
  return iVar6;
}



/* Entry: 00223f2c; end: 00223fcb;  */

undefined8 FUN_00223f2c(int *param_1,long param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  
  if ((*(long *)(param_1 + 0x26) != 0) && (iVar4 = (int)param_3, 0 < iVar4)) {
    lVar6 = *(long *)(param_2 + 0x48);
    iVar1 = *(int *)(param_2 + 0x20);
    do {
      iVar5 = *(int *)(lVar6 + 0x3c);
      FUN_0024af88(lVar6,(param_1[2] - iVar5) + param_1[4],
                   *(long *)(param_1 + 0x26) + (long)(*param_1 * (iVar5 - param_1[2])));
      iVar5 = (int)param_3;
      lVar3 = param_2;
      (**(code **)(param_2 + 0x68))(param_2,(iVar1 + iVar4) - iVar5,param_3);
      uVar2 = iVar5 - (int)lVar3;
      param_3 = (ulong)uVar2;
    } while (uVar2 != 0 && (int)lVar3 <= iVar5);
  }
  return 0;
}



/* Entry: 00223fcc; end: 002242a7;  */

int FUN_00223fcc(undefined8 *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  byte *pbVar6;
  int iVar7;
  long lVar8;
  int *piVar9;
  byte bVar10;
  byte *pbVar11;
  
  lVar4 = param_1[9];
  if (*(int *)(lVar4 + 0x40) < *(int *)(lVar4 + 0x38)) {
    uVar1 = *(uint *)(lVar4 + 0x34);
    if ((int)uVar1 < 1) {
      iVar7 = 0;
      do {
        if (0 < *(int *)(lVar4 + 0x18) || param_3 <= iVar7) {
          return iVar7;
        }
        FUN_0022f9e4();
        iVar7 = iVar7 + 1;
        lVar4 = param_1[9];
      } while (*(int *)(lVar4 + 0x40) < *(int *)(lVar4 + 0x38));
    }
    else {
      iVar7 = 0;
      piVar9 = (int *)*param_1;
      lVar8 = *(long *)(piVar9 + 4) + (long)piVar9[6] * (long)param_2;
      iVar2 = *piVar9;
      pbVar11 = (byte *)(lVar8 + 1);
      bVar10 = 0xf;
      do {
        if (0 < *(int *)(lVar4 + 0x18) || param_3 <= iVar7) break;
        FUN_0022f9e4();
        uVar5 = 0;
        pbVar6 = pbVar11;
        do {
          bVar3 = *(byte *)(*(long *)(param_1[9] + 0x48) + uVar5) >> 4;
          *pbVar6 = *pbVar6 & 0xf0 | bVar3;
          bVar10 = bVar10 & bVar3;
          uVar5 = uVar5 + 1;
          pbVar6 = pbVar6 + 2;
        } while (uVar1 != uVar5);
        pbVar11 = pbVar11 + piVar9[6];
        iVar7 = iVar7 + 1;
        lVar4 = param_1[9];
      } while (*(int *)(lVar4 + 0x40) < *(int *)(lVar4 + 0x38));
      if ((iVar2 - 7U < 4) && (bVar10 != 0xf)) {
        (*pcRam0000000000b6ce58)(lVar8,(ulong)uVar1,iVar7,piVar9[6]);
      }
    }
  }
  else {
    iVar7 = 0;
  }
  return iVar7;
}



/* Entry: 002242a8; end: 00224427;  */

int FUN_002242a8(undefined4 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  
  iVar5 = param_1[4];
  uVar6 = param_2[6];
  uVar1 = *(uint *)*param_2;
  if (((uVar1 < 0xd && (1 << (ulong)(uVar1 & 0x1f) & 0x103aU) != 0) || (0xfffffffb < uVar1 - 0xb))
     && (*(long *)(param_1 + 0x26) != 0)) {
    FUN_0022c0c8(*(undefined8 *)(param_1 + 6),param_1[0xc],*(long *)(param_1 + 0x26),*param_1,
                 param_1[3],iVar5,0);
  }
  iVar3 = iVar5 + 1 >> 1;
  if (iVar5 < 1) {
    iVar4 = 0;
  }
  else {
    iVar4 = 0;
    iVar7 = param_1[0xc];
    lVar8 = *(long *)(param_1 + 6);
    do {
      uVar2 = uVar6;
      FUN_0024af88(uVar6,iVar5,lVar8,iVar7);
      lVar8 = lVar8 + (int)uVar2 * iVar7;
      iVar5 = iVar5 - (int)uVar2;
      uVar2 = uVar6;
      FUN_0024b0ac(uVar6);
      iVar4 = (int)uVar2 + iVar4;
    } while (0 < iVar5);
  }
  if (0 < iVar3) {
    iVar5 = param_1[0xd];
    uVar6 = param_2[7];
    lVar8 = *(long *)(param_1 + 8);
    iVar7 = iVar3;
    do {
      uVar2 = uVar6;
      FUN_0024af88(uVar6,iVar7,lVar8,iVar5);
      lVar8 = lVar8 + (int)uVar2 * iVar5;
      iVar7 = iVar7 - (int)uVar2;
      FUN_0024b0ac(uVar6);
    } while (0 < iVar7);
    lVar8 = *(long *)(param_1 + 10);
    iVar5 = param_1[0xd];
    uVar6 = param_2[8];
    do {
      uVar2 = uVar6;
      FUN_0024af88(uVar6,iVar3,lVar8,iVar5);
      lVar8 = lVar8 + (int)uVar2 * iVar5;
      iVar3 = iVar3 - (int)uVar2;
      FUN_0024b0ac(uVar6);
    } while (0 < iVar3);
  }
  return iVar4;
}



/* Entry: 00224428; end: 00224547;  */

undefined8 FUN_00224428(int *param_1,long *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar11 = *param_2;
  lVar4 = param_2[4];
  iVar2 = *(int *)(lVar11 + 0x3c);
  lVar7 = *(long *)(lVar11 + 0x28) + (long)iVar2 * (long)(int)lVar4;
  lVar9 = *(long *)(param_1 + 0x26);
  if (lVar9 == 0) {
    if ((0 < param_3) && (*(long *)(lVar11 + 0x28) != 0)) {
      iVar8 = param_1[0x23];
      do {
        _memset(lVar7,0xff,(long)iVar8);
        lVar7 = lVar7 + iVar2;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
  }
  else {
    iVar2 = param_1[4];
    if (0 < iVar2) {
      iVar8 = 0;
      lVar6 = *(long *)(lVar11 + 0x10);
      iVar3 = *(int *)(lVar11 + 0x30);
      iVar1 = *param_1;
      lVar10 = param_2[9];
      do {
        lVar5 = lVar10;
        FUN_0024af88(lVar10,iVar2,lVar9,iVar1);
        lVar9 = lVar9 + (int)lVar5 * iVar1;
        iVar2 = iVar2 - (int)lVar5;
        lVar5 = lVar10;
        FUN_0024b0ac();
        iVar8 = (int)lVar5 + iVar8;
      } while (0 < iVar2);
      if (0 < iVar8) {
        FUN_0022c0c8(lVar6 + (long)iVar3 * (long)(int)lVar4,*(undefined4 *)(lVar11 + 0x30),lVar7,
                     *(undefined4 *)(lVar11 + 0x3c),*(undefined4 *)(param_2[9] + 0x34),iVar8,1);
      }
    }
  }
  return 0;
}



/* Entry: 00224548; end: 002249b3;  */

void FUN_00224548(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar10;
  
  lVar10 = param_1 + 0x10;
  func_0x0021f2e8(lVar10,7);
  uVar7 = (uint)lVar10;
  lVar10 = param_1 + 0x10;
  func_0x0021f2e8(lVar10,1);
  if ((int)lVar10 == 0) {
    iVar12 = 0;
    lVar10 = param_1 + 0x10;
    func_0x0021f2e8(lVar10,1);
    if ((int)lVar10 != 0) goto LAB_002245a0;
LAB_00224640:
    iVar13 = 0;
    lVar10 = param_1 + 0x10;
    func_0x0021f2e8(lVar10,1);
    if ((int)lVar10 != 0) goto LAB_002245c0;
LAB_00224654:
    iVar14 = 0;
    lVar10 = param_1 + 0x10;
    func_0x0021f2e8(lVar10,1);
    if ((int)lVar10 != 0) goto LAB_002245e0;
LAB_00224668:
    iVar8 = 0;
    lVar10 = param_1 + 0x10;
    func_0x0021f2e8(lVar10,1);
    iVar6 = 0;
    if ((int)lVar10 == 0) {
      iVar9 = 0;
      goto LAB_0022460c;
    }
  }
  else {
    lVar10 = param_1 + 0x10;
    FUN_0021f434(lVar10,4);
    iVar12 = (int)lVar10;
    lVar10 = param_1 + 0x10;
    func_0x0021f2e8(lVar10,1);
    if ((int)lVar10 == 0) goto LAB_00224640;
LAB_002245a0:
    lVar10 = param_1 + 0x10;
    FUN_0021f434(lVar10,4);
    iVar13 = (int)lVar10;
    lVar10 = param_1 + 0x10;
    func_0x0021f2e8(lVar10,1);
    if ((int)lVar10 == 0) goto LAB_00224654;
LAB_002245c0:
    lVar10 = param_1 + 0x10;
    FUN_0021f434(lVar10,4);
    iVar14 = (int)lVar10;
    lVar10 = param_1 + 0x10;
    func_0x0021f2e8(lVar10,1);
    if ((int)lVar10 == 0) goto LAB_00224668;
LAB_002245e0:
    lVar10 = param_1 + 0x10;
    FUN_0021f434(lVar10,4);
    iVar8 = (int)lVar10;
    lVar10 = param_1 + 0x10;
    func_0x0021f2e8(lVar10,1);
    iVar9 = 0;
    iVar6 = iVar8;
    if ((int)lVar10 == 0) goto LAB_0022460c;
  }
  iVar8 = iVar6;
  lVar10 = param_1 + 0x10;
  FUN_0021f434(lVar10,4);
  iVar9 = (int)lVar10;
LAB_0022460c:
  uVar11 = uVar7;
  if (*(int *)(param_1 + 0x80) != 0) {
    if (*(int *)(param_1 + 0x88) != 0) {
      uVar11 = 0;
    }
    uVar11 = uVar11 + (int)*(char *)(param_1 + 0x8c);
  }
  uVar1 = uVar11 + iVar12;
  if (0x7e < (int)uVar1) {
    uVar1 = 0x7f;
  }
  *(uint *)(param_1 + 0x424) =
       (uint)(byte)(&UNK_007edd2e)[uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)];
  uVar1 = uVar11;
  if (0x7e < (int)uVar11) {
    uVar1 = 0x7f;
  }
  *(uint *)(param_1 + 0x428) =
       (uint)*(ushort *)(&UNK_007eddae + (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) * 2);
  uVar1 = uVar11 + iVar13;
  if (0x7e < (int)uVar1) {
    uVar1 = 0x7f;
  }
  *(uint *)(param_1 + 0x42c) =
       (uint)(byte)(&UNK_007edd2e)[uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)] << 1;
  uVar1 = uVar11 + iVar14;
  uVar2 = uVar1;
  if (0x7e < (int)uVar1) {
    uVar2 = 0x7f;
  }
  uVar3 = 8;
  if (1 < (int)uVar1) {
    uVar3 = (uint)*(ushort *)
                   (&UNK_007eddae + (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)) * 2) *
            0x18ccd >> 0x10;
  }
  *(uint *)(param_1 + 0x430) = uVar3;
  uVar1 = uVar11 + iVar8;
  if (0x74 < (int)uVar1) {
    uVar1 = 0x75;
  }
  *(uint *)(param_1 + 0x434) =
       (uint)(byte)(&UNK_007edd2e)[uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)];
  uVar11 = uVar11 + iVar9;
  uVar1 = uVar11;
  if (0x7e < (int)uVar11) {
    uVar1 = 0x7f;
  }
  *(uint *)(param_1 + 0x438) =
       (uint)*(ushort *)(&UNK_007eddae + (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) * 2);
  *(uint *)(param_1 + 0x43c) = uVar11;
  if (*(int *)(param_1 + 0x80) == 0) {
    uVar16 = *(undefined8 *)(param_1 + 0x42c);
    uVar15 = *(undefined8 *)(param_1 + 0x424);
    uVar18 = *(undefined8 *)(param_1 + 0x43c);
    uVar17 = *(undefined8 *)(param_1 + 0x434);
    *(undefined8 *)(param_1 + 0x44c) = uVar16;
    *(undefined8 *)(param_1 + 0x444) = uVar15;
    *(undefined8 *)(param_1 + 0x45c) = uVar18;
    *(undefined8 *)(param_1 + 0x454) = uVar17;
    *(undefined8 *)(param_1 + 0x46c) = uVar16;
    *(undefined8 *)(param_1 + 0x464) = uVar15;
    *(undefined8 *)(param_1 + 0x47c) = uVar18;
    *(undefined8 *)(param_1 + 0x474) = uVar17;
    *(undefined8 *)(param_1 + 0x48c) = uVar16;
    *(undefined8 *)(param_1 + 0x484) = uVar15;
    *(undefined8 *)(param_1 + 0x49c) = uVar18;
    *(undefined8 *)(param_1 + 0x494) = uVar17;
    return;
  }
  uVar11 = uVar7;
  if (*(int *)(param_1 + 0x88) != 0) {
    uVar11 = 0;
  }
  uVar2 = uVar11 + (int)*(char *)(param_1 + 0x8d);
  uVar1 = uVar2 + iVar12;
  if (0x7e < (int)uVar1) {
    uVar1 = 0x7f;
  }
  uVar3 = uVar2;
  if (0x7e < (int)uVar2) {
    uVar3 = 0x7f;
  }
  uVar5 = *(ushort *)(&UNK_007eddae + (ulong)(uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU)) * 2);
  *(uint *)(param_1 + 0x444) =
       (uint)(byte)(&UNK_007edd2e)[uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)];
  *(uint *)(param_1 + 0x448) = (uint)uVar5;
  uVar1 = uVar2 + iVar13;
  if (0x7e < (int)uVar1) {
    uVar1 = 0x7f;
  }
  *(uint *)(param_1 + 0x44c) =
       (uint)(byte)(&UNK_007edd2e)[uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)] << 1;
  uVar1 = uVar2 + iVar14;
  uVar3 = uVar1;
  if (0x7e < (int)uVar1) {
    uVar3 = 0x7f;
  }
  uVar4 = 8;
  if (1 < (int)uVar1) {
    uVar4 = (uint)*(ushort *)
                   (&UNK_007eddae + (ulong)(uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU)) * 2) *
            0x18ccd >> 0x10;
  }
  *(uint *)(param_1 + 0x450) = uVar4;
  uVar1 = uVar2 + iVar8;
  if (0x74 < (int)uVar1) {
    uVar1 = 0x75;
  }
  *(uint *)(param_1 + 0x454) =
       (uint)(byte)(&UNK_007edd2e)[uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)];
  uVar2 = uVar2 + iVar9;
  uVar1 = uVar2;
  if (0x7e < (int)uVar2) {
    uVar1 = 0x7f;
  }
  *(uint *)(param_1 + 0x458) =
       (uint)*(ushort *)(&UNK_007eddae + (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) * 2);
  *(uint *)(param_1 + 0x45c) = uVar2;
  uVar11 = uVar11 + (int)*(char *)(param_1 + 0x8e);
  uVar1 = uVar11 + iVar12;
  if (0x7e < (int)uVar1) {
    uVar1 = 0x7f;
  }
  *(uint *)(param_1 + 0x464) =
       (uint)(byte)(&UNK_007edd2e)[uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)];
  uVar1 = uVar11;
  if (0x7e < (int)uVar11) {
    uVar1 = 0x7f;
  }
  *(uint *)(param_1 + 0x468) =
       (uint)*(ushort *)(&UNK_007eddae + (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) * 2);
  uVar1 = uVar11 + iVar13;
  if (0x7e < (int)uVar1) {
    uVar1 = 0x7f;
  }
  *(uint *)(param_1 + 0x46c) =
       (uint)(byte)(&UNK_007edd2e)[uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)] << 1;
  uVar1 = uVar11 + iVar14;
  uVar2 = uVar1;
  if (0x7e < (int)uVar1) {
    uVar2 = 0x7f;
  }
  uVar3 = 8;
  if (1 < (int)uVar1) {
    uVar3 = (uint)*(ushort *)
                   (&UNK_007eddae + (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)) * 2) *
            0x18ccd >> 0x10;
  }
  *(uint *)(param_1 + 0x470) = uVar3;
  uVar1 = uVar11 + iVar8;
  if (0x74 < (int)uVar1) {
    uVar1 = 0x75;
  }
  *(uint *)(param_1 + 0x474) =
       (uint)(byte)(&UNK_007edd2e)[uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)];
  uVar11 = uVar11 + iVar9;
  uVar1 = uVar11;
  if (0x7e < (int)uVar11) {
    uVar1 = 0x7f;
  }
  *(uint *)(param_1 + 0x478) =
       (uint)*(ushort *)(&UNK_007eddae + (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) * 2);
  *(uint *)(param_1 + 0x47c) = uVar11;
  if (*(int *)(param_1 + 0x88) != 0) {
    uVar7 = 0;
  }
  uVar7 = uVar7 + (int)*(char *)(param_1 + 0x8f);
  uVar11 = uVar7 + iVar12;
  if (0x7e < (int)uVar11) {
    uVar11 = 0x7f;
  }
  uVar1 = uVar7;
  if (0x7e < (int)uVar7) {
    uVar1 = 0x7f;
  }
  uVar5 = *(ushort *)(&UNK_007eddae + (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) * 2);
  *(uint *)(param_1 + 0x484) =
       (uint)(byte)(&UNK_007edd2e)[uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU)];
  *(uint *)(param_1 + 0x488) = (uint)uVar5;
  uVar11 = uVar7 + iVar13;
  if (0x7e < (int)uVar11) {
    uVar11 = 0x7f;
  }
  *(uint *)(param_1 + 0x48c) =
       (uint)(byte)(&UNK_007edd2e)[uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU)] << 1;
  uVar11 = uVar7 + iVar14;
  uVar1 = uVar11;
  if (0x7e < (int)uVar11) {
    uVar1 = 0x7f;
  }
  uVar2 = 8;
  if (1 < (int)uVar11) {
    uVar2 = (uint)*(ushort *)
                   (&UNK_007eddae + (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) * 2) *
            0x18ccd >> 0x10;
  }
  *(uint *)(param_1 + 0x490) = uVar2;
  uVar11 = uVar7 + iVar8;
  if (0x74 < (int)uVar11) {
    uVar11 = 0x75;
  }
  *(uint *)(param_1 + 0x494) =
       (uint)(byte)(&UNK_007edd2e)[uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU)];
  uVar7 = uVar7 + iVar9;
  uVar11 = uVar7;
  if (0x7e < (int)uVar7) {
    uVar11 = 0x7f;
  }
  *(uint *)(param_1 + 0x498) =
       (uint)*(ushort *)(&UNK_007eddae + (ulong)(uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU)) * 2);
  *(uint *)(param_1 + 0x49c) = uVar7;
  return;
}



/* Entry: 002249b4; end: 002249c3;  */

void FUN_002249b4(undefined2 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 0xff;
  *param_1 = 0xffff;
  return;
}



/* Entry: 002249c4; end: 00225c3b;  */

bool FUN_002249c4(ulong *param_1,long param_2)

{
  int *piVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  undefined4 *puVar18;
  long lVar19;
  long lVar20;
  long lStack_68;
  
  if (0 < *(int *)(param_2 + 0x198)) {
    lVar19 = 0;
    lStack_68 = 0;
    piVar1 = (int *)(param_2 + 0xb00);
    do {
      lVar8 = *(long *)(param_2 + 0xaf8);
      lVar16 = *(long *)(param_2 + 0xb60);
      uVar5 = 0;
      if (*(int *)(param_2 + 0x84) == 0) {
LAB_00224bf4:
        lVar16 = lVar16 + lStack_68 * 800;
        *(undefined1 *)(lVar16 + 0x31e) = uVar5;
        if (*(int *)(param_2 + 0xaf0) != 0) goto LAB_00224c0c;
LAB_00224d1c:
        iVar12 = (int)param_1[1];
        uVar13 = *(uint *)((long)param_1 + 0xc);
      }
      else {
        bVar3 = *(byte *)(param_2 + 0x4a8);
        uVar11 = param_1[1];
        uVar13 = *(uint *)((long)param_1 + 0xc);
        uVar14 = (ulong)uVar13;
        if ((int)uVar13 < 0) {
          puVar9 = (ulong *)param_1[2];
          if (puVar9 < (ulong *)param_1[4]) {
            uVar14 = *puVar9;
            param_1[2] = (long)puVar9 + 7;
            uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
            uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
            *param_1 = (uVar14 >> 0x20 | uVar14 << 0x20) >> 8 | *param_1 << 0x38;
            uVar14 = (ulong)(uVar13 + 0x38);
          }
          else {
            func_0x0021f280(param_1);
            uVar14 = (ulong)*(uint *)((long)param_1 + 0xc);
          }
        }
        uVar13 = (int)uVar11 * (uint)bVar3 >> 8;
        uVar10 = *param_1;
        uVar15 = (uint)(uVar10 >> (uVar14 & 0x3f));
        if (uVar13 < uVar15) {
          iVar12 = (int)uVar11 - uVar13;
          uVar10 = uVar10 - ((ulong)(uVar13 + 1) << (uVar14 & 0x3f));
          *param_1 = uVar10;
        }
        else {
          iVar12 = uVar13 + 1;
        }
        uVar6 = (uint)LZCOUNT(iVar12) ^ 0x18;
        uVar4 = (int)uVar14 - uVar6;
        uVar14 = (ulong)uVar4;
        iVar12 = (iVar12 << (ulong)(uVar6 & 0x1f)) + -1;
        *(int *)(param_1 + 1) = iVar12;
        *(uint *)((long)param_1 + 0xc) = uVar4;
        if (uVar13 < uVar15) {
          bVar3 = *(byte *)(param_2 + 0x4aa);
          if ((int)uVar4 < 0) {
            puVar9 = (ulong *)param_1[2];
            if (puVar9 < (ulong *)param_1[4]) {
              uVar14 = *puVar9;
              param_1[2] = (long)puVar9 + 7;
              uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
              uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
              uVar10 = (uVar14 >> 0x20 | uVar14 << 0x20) >> 8 | uVar10 << 0x38;
              *param_1 = uVar10;
              uVar14 = (ulong)(uVar4 + 0x38);
            }
            else {
              func_0x0021f280(param_1);
              uVar14 = (ulong)*(uint *)((long)param_1 + 0xc);
              uVar10 = *param_1;
            }
          }
          uVar13 = iVar12 * (uint)bVar3 >> 8;
          uVar15 = (uint)(uVar10 >> (uVar14 & 0x3f));
          if (uVar13 < uVar15) {
            iVar12 = iVar12 - uVar13;
            *param_1 = uVar10 - ((ulong)(uVar13 + 1) << (uVar14 & 0x3f));
          }
          else {
            iVar12 = uVar13 + 1;
          }
          uVar6 = (uint)LZCOUNT(iVar12) ^ 0x18;
          *(int *)(param_1 + 1) = (iVar12 << (ulong)(uVar6 & 0x1f)) + -1;
          *(uint *)((long)param_1 + 0xc) = (int)uVar14 - uVar6;
          uVar5 = 2;
          if (uVar13 < uVar15) {
            uVar5 = 3;
          }
          goto LAB_00224bf4;
        }
        bVar3 = *(byte *)(param_2 + 0x4a9);
        if ((int)uVar4 < 0) {
          puVar9 = (ulong *)param_1[2];
          if (puVar9 < (ulong *)param_1[4]) {
            uVar14 = *puVar9;
            param_1[2] = (long)puVar9 + 7;
            uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
            uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
            uVar10 = (uVar14 >> 0x20 | uVar14 << 0x20) >> 8 | uVar10 << 0x38;
            *param_1 = uVar10;
            uVar14 = (ulong)(uVar4 + 0x38);
            goto LAB_00224b58;
          }
          func_0x0021f280(param_1);
          uVar13 = *(uint *)((long)param_1 + 0xc);
          uVar14 = (ulong)uVar13;
          uVar10 = *param_1;
          uVar15 = iVar12 * (uint)bVar3 >> 8;
          uVar6 = (uint)(uVar10 >> (uVar14 & 0x3f));
          if (uVar6 <= uVar15) goto LAB_00224ce0;
LAB_00224b70:
          uVar13 = (uint)uVar14;
          iVar12 = iVar12 - uVar15;
          *param_1 = uVar10 - ((ulong)(uVar15 + 1) << (uVar14 & 0x3f));
        }
        else {
LAB_00224b58:
          uVar13 = (uint)uVar14;
          uVar15 = iVar12 * (uint)bVar3 >> 8;
          uVar6 = (uint)(uVar10 >> (uVar14 & 0x3f));
          if (uVar15 < uVar6) goto LAB_00224b70;
LAB_00224ce0:
          iVar12 = uVar15 + 1;
        }
        uVar4 = (uint)LZCOUNT(iVar12) ^ 0x18;
        *(int *)(param_1 + 1) = (iVar12 << (ulong)(uVar4 & 0x1f)) + -1;
        *(uint *)((long)param_1 + 0xc) = uVar13 - uVar4;
        lVar16 = lVar16 + lStack_68 * 800;
        *(bool *)(lVar16 + 0x31e) = uVar15 < uVar6;
        if (*(int *)(param_2 + 0xaf0) == 0) goto LAB_00224d1c;
LAB_00224c0c:
        bVar3 = *(byte *)(param_2 + 0xaf4);
        uVar11 = param_1[1];
        uVar13 = *(uint *)((long)param_1 + 0xc);
        uVar14 = (ulong)uVar13;
        if ((int)uVar13 < 0) {
          puVar9 = (ulong *)param_1[2];
          if (puVar9 < (ulong *)param_1[4]) {
            uVar14 = *puVar9;
            param_1[2] = (long)puVar9 + 7;
            uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
            uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
            *param_1 = (uVar14 >> 0x20 | uVar14 << 0x20) >> 8 | *param_1 << 0x38;
            uVar14 = (ulong)(uVar13 + 0x38);
          }
          else {
            func_0x0021f280(param_1);
            uVar14 = (ulong)*(uint *)((long)param_1 + 0xc);
          }
        }
        uVar15 = (int)uVar11 * (uint)bVar3 >> 8;
        uVar6 = (uint)(*param_1 >> (uVar14 & 0x3f));
        if (uVar15 < uVar6) {
          iVar12 = (int)uVar11 - uVar15;
          *param_1 = *param_1 - ((ulong)(uVar15 + 1) << (uVar14 & 0x3f));
        }
        else {
          iVar12 = uVar15 + 1;
        }
        uVar4 = (uint)LZCOUNT(iVar12) ^ 0x18;
        uVar13 = (int)uVar14 - uVar4;
        iVar12 = (iVar12 << (ulong)(uVar4 & 0x1f)) + -1;
        *(int *)(param_1 + 1) = iVar12;
        *(uint *)((long)param_1 + 0xc) = uVar13;
        *(bool *)(lVar16 + 0x31d) = uVar15 < uVar6;
      }
      uVar14 = (ulong)uVar13;
      if ((int)uVar13 < 0) {
        puVar9 = (ulong *)param_1[2];
        if (puVar9 < (ulong *)param_1[4]) {
          uVar14 = *puVar9;
          param_1[2] = (long)puVar9 + 7;
          uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
          uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
          *param_1 = (uVar14 >> 0x20 | uVar14 << 0x20) >> 8 | *param_1 << 0x38;
          uVar14 = (ulong)(uVar13 + 0x38);
        }
        else {
          func_0x0021f280(param_1);
          uVar14 = (ulong)*(uint *)((long)param_1 + 0xc);
        }
      }
      uVar13 = (uint)(iVar12 * 0x91) >> 8;
      uVar11 = *param_1;
      uVar15 = (uint)(uVar11 >> (uVar14 & 0x3f));
      if (uVar13 < uVar15) {
        iVar12 = iVar12 - uVar13;
        uVar11 = uVar11 - ((ulong)(uVar13 + 1) << (uVar14 & 0x3f));
        *param_1 = uVar11;
      }
      else {
        iVar12 = uVar13 + 1;
      }
      uVar6 = (uint)LZCOUNT(iVar12) ^ 0x18;
      uVar4 = (int)uVar14 - uVar6;
      uVar14 = (ulong)uVar4;
      iVar12 = (iVar12 << (ulong)(uVar6 & 0x1f)) + -1;
      *(int *)(param_1 + 1) = iVar12;
      *(uint *)((long)param_1 + 0xc) = uVar4;
      *(bool *)(lVar16 + 0x300) = uVar15 <= uVar13;
      if (uVar15 <= uVar13) {
        lVar20 = 0;
        puVar18 = (undefined4 *)(lVar16 + 0x301);
        do {
          lVar17 = 0;
          uVar14 = (ulong)*(byte *)((long)piVar1 + lVar20);
          do {
            pbVar2 = &UNK_007ee6ee + uVar14 * 9 + (ulong)*(byte *)(lVar8 + lVar19 + lVar17) * 0x5a;
            bVar3 = *pbVar2;
            uVar11 = param_1[1];
            uVar13 = *(uint *)((long)param_1 + 0xc);
            uVar14 = (ulong)uVar13;
            if ((int)uVar13 < 0) {
              puVar9 = (ulong *)param_1[2];
              if (puVar9 < (ulong *)param_1[4]) {
                uVar14 = *puVar9;
                param_1[2] = (long)puVar9 + 7;
                uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
                uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
                *param_1 = (uVar14 >> 0x20 | uVar14 << 0x20) >> 8 | *param_1 << 0x38;
                uVar14 = (ulong)(uVar13 + 0x38);
              }
              else {
                func_0x0021f280(param_1);
                uVar14 = (ulong)*(uint *)((long)param_1 + 0xc);
              }
            }
            uVar13 = (int)uVar11 * (uint)bVar3 >> 8;
            uVar10 = *param_1;
            uVar15 = (uint)(uVar10 >> (uVar14 & 0x3f));
            if (uVar13 < uVar15) {
              iVar12 = (int)uVar11 - uVar13;
              uVar10 = uVar10 - ((ulong)(uVar13 + 1) << (uVar14 & 0x3f));
              *param_1 = uVar10;
            }
            else {
              iVar12 = uVar13 + 1;
            }
            uVar4 = (uint)LZCOUNT(iVar12) ^ 0x18;
            uVar6 = (int)uVar14 - uVar4;
            iVar12 = (iVar12 << (ulong)(uVar4 & 0x1f)) + -1;
            *(int *)(param_1 + 1) = iVar12;
            *(uint *)((long)param_1 + 0xc) = uVar6;
            if (uVar13 < uVar15) {
              bVar3 = pbVar2[1];
              if ((int)uVar6 < 0) {
                puVar9 = (ulong *)param_1[2];
                if (puVar9 < (ulong *)param_1[4]) {
                  uVar14 = *puVar9;
                  param_1[2] = (long)puVar9 + 7;
                  uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
                  uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10
                  ;
                  uVar10 = (uVar14 >> 0x20 | uVar14 << 0x20) >> 8 | uVar10 << 0x38;
                  *param_1 = uVar10;
                  uVar6 = uVar6 + 0x38;
                  goto LAB_00224f00;
                }
                func_0x0021f280(param_1);
                uVar6 = *(uint *)((long)param_1 + 0xc);
                uVar14 = (ulong)uVar6;
                uVar10 = *param_1;
                uVar13 = iVar12 * (uint)bVar3 >> 8;
                uVar15 = (uint)(uVar10 >> (uVar14 & 0x3f));
                if (uVar15 <= uVar13) goto LAB_00224f58;
LAB_00224f18:
                uVar6 = (uint)uVar14;
                iVar12 = iVar12 - uVar13;
                uVar10 = uVar10 - ((ulong)(uVar13 + 1) << (uVar14 & 0x3f));
                *param_1 = uVar10;
              }
              else {
LAB_00224f00:
                uVar14 = (ulong)uVar6;
                uVar13 = iVar12 * (uint)bVar3 >> 8;
                uVar15 = (uint)(uVar10 >> (uVar14 & 0x3f));
                if (uVar13 < uVar15) goto LAB_00224f18;
LAB_00224f58:
                iVar12 = uVar13 + 1;
              }
              uVar4 = (uint)LZCOUNT(iVar12) ^ 0x18;
              uVar6 = uVar6 - uVar4;
              iVar12 = (iVar12 << (ulong)(uVar4 & 0x1f)) + -1;
              *(int *)(param_1 + 1) = iVar12;
              *(uint *)((long)param_1 + 0xc) = uVar6;
              if (uVar13 < uVar15) {
                bVar3 = pbVar2[2];
                if ((int)uVar6 < 0) {
                  puVar9 = (ulong *)param_1[2];
                  if (puVar9 < (ulong *)param_1[4]) {
                    uVar14 = *puVar9;
                    param_1[2] = (long)puVar9 + 7;
                    uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
                    uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar14 & 0xffff0000ffff) << 0x10;
                    uVar10 = (uVar14 >> 0x20 | uVar14 << 0x20) >> 8 | uVar10 << 0x38;
                    *param_1 = uVar10;
                    uVar6 = uVar6 + 0x38;
                    goto LAB_00224fac;
                  }
                  func_0x0021f280(param_1);
                  uVar6 = *(uint *)((long)param_1 + 0xc);
                  uVar14 = (ulong)uVar6;
                  uVar10 = *param_1;
                  uVar13 = iVar12 * (uint)bVar3 >> 8;
                  uVar15 = (uint)(uVar10 >> (uVar14 & 0x3f));
                  if (uVar15 <= uVar13) goto LAB_0022500c;
LAB_00224fc4:
                  uVar6 = (uint)uVar14;
                  iVar12 = iVar12 - uVar13;
                  uVar10 = uVar10 - ((ulong)(uVar13 + 1) << (uVar14 & 0x3f));
                  *param_1 = uVar10;
                }
                else {
LAB_00224fac:
                  uVar14 = (ulong)uVar6;
                  uVar13 = iVar12 * (uint)bVar3 >> 8;
                  uVar15 = (uint)(uVar10 >> (uVar14 & 0x3f));
                  if (uVar13 < uVar15) goto LAB_00224fc4;
LAB_0022500c:
                  iVar12 = uVar13 + 1;
                }
                uVar4 = (uint)LZCOUNT(iVar12) ^ 0x18;
                uVar6 = uVar6 - uVar4;
                iVar12 = (iVar12 << (ulong)(uVar4 & 0x1f)) + -1;
                *(int *)(param_1 + 1) = iVar12;
                *(uint *)((long)param_1 + 0xc) = uVar6;
                if (uVar13 < uVar15) {
                  bVar3 = pbVar2[3];
                  if ((int)uVar6 < 0) {
                    puVar9 = (ulong *)param_1[2];
                    if (puVar9 < (ulong *)param_1[4]) {
                      uVar14 = *puVar9;
                      param_1[2] = (long)puVar9 + 7;
                      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8
                      ;
                      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar14 & 0xffff0000ffff) << 0x10;
                      uVar10 = (uVar14 >> 0x20 | uVar14 << 0x20) >> 8 | uVar10 << 0x38;
                      *param_1 = uVar10;
                      uVar6 = uVar6 + 0x38;
                      goto LAB_00225060;
                    }
                    func_0x0021f280(param_1);
                    uVar6 = *(uint *)((long)param_1 + 0xc);
                    uVar14 = (ulong)uVar6;
                    uVar10 = *param_1;
                    uVar13 = iVar12 * (uint)bVar3 >> 8;
                    uVar15 = (uint)(uVar10 >> (uVar14 & 0x3f));
                    if (uVar15 <= uVar13) goto LAB_002250c0;
LAB_00225078:
                    uVar6 = (uint)uVar14;
                    iVar12 = iVar12 - uVar13;
                    uVar10 = uVar10 - ((ulong)(uVar13 + 1) << (uVar14 & 0x3f));
                    *param_1 = uVar10;
                  }
                  else {
LAB_00225060:
                    uVar14 = (ulong)uVar6;
                    uVar13 = iVar12 * (uint)bVar3 >> 8;
                    uVar15 = (uint)(uVar10 >> (uVar14 & 0x3f));
                    if (uVar13 < uVar15) goto LAB_00225078;
LAB_002250c0:
                    iVar12 = uVar13 + 1;
                  }
                  uVar4 = (uint)LZCOUNT(iVar12) ^ 0x18;
                  uVar6 = uVar6 - uVar4;
                  uVar14 = (ulong)uVar6;
                  iVar12 = (iVar12 << (ulong)(uVar4 & 0x1f)) + -1;
                  *(int *)(param_1 + 1) = iVar12;
                  *(uint *)((long)param_1 + 0xc) = uVar6;
                  if (uVar13 < uVar15) {
                    bVar3 = pbVar2[6];
                    if ((int)uVar6 < 0) {
                      puVar9 = (ulong *)param_1[2];
                      if (puVar9 < (ulong *)param_1[4]) {
                        uVar14 = *puVar9;
                        param_1[2] = (long)puVar9 + 7;
                        uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 |
                                 (uVar14 & 0xff00ff00ff00ff) << 8;
                        uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 |
                                 (uVar14 & 0xffff0000ffff) << 0x10;
                        uVar10 = (uVar14 >> 0x20 | uVar14 << 0x20) >> 8 | uVar10 << 0x38;
                        *param_1 = uVar10;
                        uVar14 = (ulong)(uVar6 + 0x38);
                      }
                      else {
                        func_0x0021f280(param_1);
                        uVar14 = (ulong)*(uint *)((long)param_1 + 0xc);
                        uVar10 = *param_1;
                      }
                    }
                    uVar15 = iVar12 * (uint)bVar3 >> 8;
                    uVar6 = (uint)(uVar10 >> (uVar14 & 0x3f));
                    if (uVar15 < uVar6) {
                      iVar12 = iVar12 - uVar15;
                      uVar10 = uVar10 - ((ulong)(uVar15 + 1) << (uVar14 & 0x3f));
                      *param_1 = uVar10;
                    }
                    else {
                      iVar12 = uVar15 + 1;
                    }
                    uVar4 = (uint)LZCOUNT(iVar12) ^ 0x18;
                    uVar13 = (int)uVar14 - uVar4;
                    iVar12 = (iVar12 << (ulong)(uVar4 & 0x1f)) + -1;
                    *(int *)(param_1 + 1) = iVar12;
                    *(uint *)((long)param_1 + 0xc) = uVar13;
                    if (uVar6 <= uVar15) {
                      uVar14 = 6;
                      goto LAB_00224e10;
                    }
                    bVar3 = pbVar2[7];
                    if ((int)uVar13 < 0) {
                      puVar9 = (ulong *)param_1[2];
                      if (puVar9 < (ulong *)param_1[4]) {
                        uVar14 = *puVar9;
                        param_1[2] = (long)puVar9 + 7;
                        uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 |
                                 (uVar14 & 0xff00ff00ff00ff) << 8;
                        uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 |
                                 (uVar14 & 0xffff0000ffff) << 0x10;
                        uVar10 = (uVar14 >> 0x20 | uVar14 << 0x20) >> 8 | uVar10 << 0x38;
                        *param_1 = uVar10;
                        uVar13 = uVar13 + 0x38;
                        goto LAB_00225210;
                      }
                      func_0x0021f280(param_1);
                      uVar13 = *(uint *)((long)param_1 + 0xc);
                      uVar14 = (ulong)uVar13;
                      uVar10 = *param_1;
                      uVar15 = iVar12 * (uint)bVar3 >> 8;
                      uVar6 = (uint)(uVar10 >> (uVar14 & 0x3f));
                      if (uVar6 <= uVar15) goto LAB_00225328;
LAB_00225228:
                      uVar13 = (uint)uVar14;
                      iVar12 = iVar12 - uVar15;
                      uVar10 = uVar10 - ((ulong)(uVar15 + 1) << (uVar14 & 0x3f));
                      *param_1 = uVar10;
                    }
                    else {
LAB_00225210:
                      uVar14 = (ulong)uVar13;
                      uVar15 = iVar12 * (uint)bVar3 >> 8;
                      uVar6 = (uint)(uVar10 >> (uVar14 & 0x3f));
                      if (uVar15 < uVar6) goto LAB_00225228;
LAB_00225328:
                      iVar12 = uVar15 + 1;
                    }
                    uVar4 = (uint)LZCOUNT(iVar12) ^ 0x18;
                    uVar13 = uVar13 - uVar4;
                    iVar12 = (iVar12 << (ulong)(uVar4 & 0x1f)) + -1;
                    *(int *)(param_1 + 1) = iVar12;
                    *(uint *)((long)param_1 + 0xc) = uVar13;
                    if (uVar6 <= uVar15) {
                      uVar14 = 7;
                      goto LAB_00224e10;
                    }
                    bVar3 = pbVar2[8];
                    if ((int)uVar13 < 0) {
                      puVar9 = (ulong *)param_1[2];
                      if (puVar9 < (ulong *)param_1[4]) {
                        uVar14 = *puVar9;
                        param_1[2] = (long)puVar9 + 7;
                        uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 |
                                 (uVar14 & 0xff00ff00ff00ff) << 8;
                        uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 |
                                 (uVar14 & 0xffff0000ffff) << 0x10;
                        uVar10 = (uVar14 >> 0x20 | uVar14 << 0x20) >> 8 | uVar10 << 0x38;
                        *param_1 = uVar10;
                        uVar13 = uVar13 + 0x38;
                        goto LAB_0022537c;
                      }
                      func_0x0021f280(param_1);
                      uVar13 = *(uint *)((long)param_1 + 0xc);
                      uVar14 = (ulong)uVar13;
                      uVar10 = *param_1;
                      uVar15 = iVar12 * (uint)bVar3 >> 8;
                      if ((uint)(uVar10 >> (uVar14 & 0x3f)) <= uVar15) goto LAB_0022540c;
LAB_00225390:
                      uVar13 = (uint)uVar14;
                      iVar12 = iVar12 - uVar15;
                      *param_1 = uVar10 - ((ulong)(uVar15 + 1) << (uVar14 & 0x3f));
                      uVar14 = 9;
                    }
                    else {
LAB_0022537c:
                      uVar14 = (ulong)uVar13;
                      uVar15 = iVar12 * (uint)bVar3 >> 8;
                      if (uVar15 < (uint)(uVar10 >> (uVar14 & 0x3f))) goto LAB_00225390;
LAB_0022540c:
                      iVar12 = uVar15 + 1;
                      uVar14 = 8;
                    }
                  }
                  else {
                    bVar3 = pbVar2[4];
                    if ((int)uVar6 < 0) {
                      puVar9 = (ulong *)param_1[2];
                      if (puVar9 < (ulong *)param_1[4]) {
                        uVar14 = *puVar9;
                        param_1[2] = (long)puVar9 + 7;
                        uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 |
                                 (uVar14 & 0xff00ff00ff00ff) << 8;
                        uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 |
                                 (uVar14 & 0xffff0000ffff) << 0x10;
                        uVar10 = (uVar14 >> 0x20 | uVar14 << 0x20) >> 8 | uVar10 << 0x38;
                        *param_1 = uVar10;
                        uVar14 = (ulong)(uVar6 + 0x38);
                        goto LAB_00225148;
                      }
                      func_0x0021f280(param_1);
                      uVar13 = *(uint *)((long)param_1 + 0xc);
                      uVar14 = (ulong)uVar13;
                      uVar10 = *param_1;
                      uVar15 = iVar12 * (uint)bVar3 >> 8;
                      uVar6 = (uint)(uVar10 >> (uVar14 & 0x3f));
                      if (uVar6 <= uVar15) goto LAB_00225270;
LAB_00225160:
                      uVar13 = (uint)uVar14;
                      iVar12 = iVar12 - uVar15;
                      uVar10 = uVar10 - ((ulong)(uVar15 + 1) << (uVar14 & 0x3f));
                      *param_1 = uVar10;
                    }
                    else {
LAB_00225148:
                      uVar13 = (uint)uVar14;
                      uVar15 = iVar12 * (uint)bVar3 >> 8;
                      uVar6 = (uint)(uVar10 >> (uVar14 & 0x3f));
                      if (uVar15 < uVar6) goto LAB_00225160;
LAB_00225270:
                      iVar12 = uVar15 + 1;
                    }
                    uVar4 = (uint)LZCOUNT(iVar12) ^ 0x18;
                    uVar13 = uVar13 - uVar4;
                    iVar12 = (iVar12 << (ulong)(uVar4 & 0x1f)) + -1;
                    *(int *)(param_1 + 1) = iVar12;
                    *(uint *)((long)param_1 + 0xc) = uVar13;
                    if (uVar6 <= uVar15) {
                      uVar14 = 3;
                      goto LAB_00224e10;
                    }
                    bVar3 = pbVar2[5];
                    if ((int)uVar13 < 0) {
                      puVar9 = (ulong *)param_1[2];
                      if (puVar9 < (ulong *)param_1[4]) {
                        uVar14 = *puVar9;
                        param_1[2] = (long)puVar9 + 7;
                        uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 |
                                 (uVar14 & 0xff00ff00ff00ff) << 8;
                        uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 |
                                 (uVar14 & 0xffff0000ffff) << 0x10;
                        uVar10 = (uVar14 >> 0x20 | uVar14 << 0x20) >> 8 | uVar10 << 0x38;
                        *param_1 = uVar10;
                        uVar13 = uVar13 + 0x38;
                        goto LAB_002252c4;
                      }
                      func_0x0021f280(param_1);
                      uVar13 = *(uint *)((long)param_1 + 0xc);
                      uVar14 = (ulong)uVar13;
                      uVar10 = *param_1;
                      uVar15 = iVar12 * (uint)bVar3 >> 8;
                      if ((uint)(uVar10 >> (uVar14 & 0x3f)) <= uVar15) goto LAB_002253dc;
                    }
                    else {
LAB_002252c4:
                      uVar14 = (ulong)uVar13;
                      uVar15 = iVar12 * (uint)bVar3 >> 8;
                      if ((uint)(uVar10 >> (uVar14 & 0x3f)) <= uVar15) {
LAB_002253dc:
                        iVar12 = uVar15 + 1;
                        uVar14 = 4;
                        goto LAB_00225414;
                      }
                    }
                    uVar13 = (uint)uVar14;
                    iVar12 = iVar12 - uVar15;
                    *param_1 = uVar10 - ((ulong)(uVar15 + 1) << (uVar14 & 0x3f));
                    uVar14 = 5;
                  }
LAB_00225414:
                  uVar15 = (uint)LZCOUNT(iVar12) ^ 0x18;
                  *(int *)(param_1 + 1) = (iVar12 << (ulong)(uVar15 & 0x1f)) + -1;
                  *(uint *)((long)param_1 + 0xc) = uVar13 - uVar15;
                }
                else {
                  uVar14 = 2;
                }
              }
              else {
                uVar14 = 1;
              }
            }
            else {
              uVar14 = 0;
            }
LAB_00224e10:
            *(char *)(lVar8 + lVar19 + lVar17) = (char)uVar14;
            lVar17 = lVar17 + 1;
          } while (lVar17 != 4);
          *puVar18 = *(undefined4 *)(lVar8 + lStack_68 * 4);
          *(char *)((long)piVar1 + lVar20) = (char)uVar14;
          lVar20 = lVar20 + 1;
          puVar18 = puVar18 + 1;
        } while (lVar20 != 4);
      }
      else {
        if ((int)uVar4 < 0) {
          puVar9 = (ulong *)param_1[2];
          if (puVar9 < (ulong *)param_1[4]) {
            uVar14 = *puVar9;
            param_1[2] = (long)puVar9 + 7;
            uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
            uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
            uVar11 = (uVar14 >> 0x20 | uVar14 << 0x20) >> 8 | uVar11 << 0x38;
            *param_1 = uVar11;
            uVar14 = (ulong)(uVar4 + 0x38);
          }
          else {
            func_0x0021f280(param_1);
            uVar14 = (ulong)*(uint *)((long)param_1 + 0xc);
            uVar11 = *param_1;
          }
        }
        uVar13 = (uint)(iVar12 * 0x9c) >> 8;
        uVar15 = (uint)(uVar11 >> (uVar14 & 0x3f));
        if (uVar13 < uVar15) {
          iVar12 = iVar12 - uVar13;
          uVar11 = uVar11 - ((ulong)(uVar13 + 1) << (uVar14 & 0x3f));
          *param_1 = uVar11;
        }
        else {
          iVar12 = uVar13 + 1;
        }
        uVar4 = (uint)LZCOUNT(iVar12) ^ 0x18;
        uVar6 = (int)uVar14 - uVar4;
        uVar14 = (ulong)uVar6;
        uVar4 = (iVar12 << (ulong)(uVar4 & 0x1f)) - 1;
        *(uint *)(param_1 + 1) = uVar4;
        *(uint *)((long)param_1 + 0xc) = uVar6;
        if (uVar13 < uVar15) {
          if ((int)uVar6 < 0) {
            puVar9 = (ulong *)param_1[2];
            if (puVar9 < (ulong *)param_1[4]) {
              uVar14 = *puVar9;
              param_1[2] = (long)puVar9 + 7;
              uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
              uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
              uVar11 = (uVar14 >> 0x20 | uVar14 << 0x20) >> 8 | uVar11 << 0x38;
              *param_1 = uVar11;
              uVar14 = (ulong)(uVar6 + 0x38);
              goto LAB_002254f4;
            }
            func_0x0021f280(param_1);
            uVar6 = *(uint *)((long)param_1 + 0xc);
            uVar14 = (ulong)uVar6;
            uVar11 = *param_1;
            uVar13 = uVar4 >> 1 & 0xffffff;
            if ((uint)(uVar11 >> (uVar14 & 0x3f)) <= uVar13) goto LAB_002255b0;
          }
          else {
LAB_002254f4:
            uVar6 = (uint)uVar14;
            uVar13 = uVar4 >> 1 & 0xffffff;
            if ((uint)(uVar11 >> (uVar14 & 0x3f)) <= uVar13) {
LAB_002255b0:
              iVar12 = uVar13 + 1;
              iVar7 = 3;
              goto LAB_00225600;
            }
          }
          uVar6 = (uint)uVar14;
          iVar12 = uVar4 - uVar13;
          *param_1 = uVar11 - ((ulong)(uVar13 + 1) << (uVar14 & 0x3f));
          iVar7 = 1;
        }
        else if ((int)uVar6 < 0) {
          puVar9 = (ulong *)param_1[2];
          if ((ulong *)param_1[4] <= puVar9) {
            func_0x0021f280(param_1);
            uVar6 = *(uint *)((long)param_1 + 0xc);
            uVar14 = (ulong)uVar6;
            uVar11 = *param_1;
            uVar13 = uVar4 * 0xa3 >> 8;
            if ((uint)(uVar11 >> (uVar14 & 0x3f)) <= uVar13) goto LAB_00225584;
            goto LAB_002255e4;
          }
          uVar14 = *puVar9;
          param_1[2] = (long)puVar9 + 7;
          uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
          uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
          uVar11 = (uVar14 >> 0x20 | uVar14 << 0x20) >> 8 | uVar11 << 0x38;
          *param_1 = uVar11;
          uVar6 = uVar6 + 0x38;
          uVar14 = (ulong)uVar6;
          uVar13 = uVar4 * 0xa3 >> 8;
          if (uVar13 < (uint)(uVar11 >> (uVar14 & 0x3f))) goto LAB_002255e4;
LAB_00225584:
          iVar7 = 0;
          iVar12 = uVar13 + 1;
        }
        else {
          uVar13 = uVar4 * 0xa3 >> 8;
          if ((uint)(uVar11 >> (uVar14 & 0x3f)) <= uVar13) goto LAB_00225584;
LAB_002255e4:
          uVar6 = (uint)uVar14;
          iVar12 = uVar4 - uVar13;
          *param_1 = uVar11 - ((ulong)(uVar13 + 1) << (uVar14 & 0x3f));
          iVar7 = 2;
        }
LAB_00225600:
        uVar13 = (uint)LZCOUNT(iVar12) ^ 0x18;
        *(int *)(param_1 + 1) = (iVar12 << (ulong)(uVar13 & 0x1f)) + -1;
        *(uint *)((long)param_1 + 0xc) = uVar6 - uVar13;
        *(char *)(lVar16 + 0x301) = (char)iVar7;
        *(int *)(lVar8 + lStack_68 * 4) = iVar7 * 0x1010101;
        *piVar1 = iVar7 * 0x1010101;
      }
      uVar11 = param_1[1];
      uVar13 = *(uint *)((long)param_1 + 0xc);
      uVar14 = (ulong)uVar13;
      if ((int)uVar13 < 0) {
        puVar9 = (ulong *)param_1[2];
        if (puVar9 < (ulong *)param_1[4]) {
          uVar14 = *puVar9;
          param_1[2] = (long)puVar9 + 7;
          uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
          uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
          *param_1 = (uVar14 >> 0x20 | uVar14 << 0x20) >> 8 | *param_1 << 0x38;
          uVar14 = (ulong)(uVar13 + 0x38);
        }
        else {
          func_0x0021f280(param_1);
          uVar14 = (ulong)*(uint *)((long)param_1 + 0xc);
        }
      }
      uVar13 = (uint)((int)uVar11 * 0x8e) >> 8;
      uVar10 = *param_1;
      uVar15 = (uint)(uVar10 >> (uVar14 & 0x3f));
      if (uVar13 < uVar15) {
        iVar12 = (int)uVar11 - uVar13;
        uVar10 = uVar10 - ((ulong)(uVar13 + 1) << (uVar14 & 0x3f));
        *param_1 = uVar10;
      }
      else {
        iVar12 = uVar13 + 1;
      }
      uVar6 = (uint)LZCOUNT(iVar12) ^ 0x18;
      uVar4 = (int)uVar14 - uVar6;
      uVar14 = (ulong)uVar4;
      iVar12 = (iVar12 << (ulong)(uVar6 & 0x1f)) + -1;
      *(int *)(param_1 + 1) = iVar12;
      *(uint *)((long)param_1 + 0xc) = uVar4;
      if (uVar13 < uVar15) {
        if ((int)uVar4 < 0) {
          puVar9 = (ulong *)param_1[2];
          if (puVar9 < (ulong *)param_1[4]) {
            uVar14 = *puVar9;
            param_1[2] = (long)puVar9 + 7;
            uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
            uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
            uVar10 = (uVar14 >> 0x20 | uVar14 << 0x20) >> 8 | uVar10 << 0x38;
            *param_1 = uVar10;
            uVar14 = (ulong)(uVar4 + 0x38);
          }
          else {
            func_0x0021f280(param_1);
            uVar14 = (ulong)*(uint *)((long)param_1 + 0xc);
            uVar10 = *param_1;
          }
        }
        uVar13 = (uint)(iVar12 * 0x72) >> 8;
        uVar15 = (uint)(uVar10 >> (uVar14 & 0x3f));
        if (uVar13 < uVar15) {
          iVar12 = iVar12 - uVar13;
          uVar10 = uVar10 - ((ulong)(uVar13 + 1) << (uVar14 & 0x3f));
          *param_1 = uVar10;
        }
        else {
          iVar12 = uVar13 + 1;
        }
        uVar6 = (uint)LZCOUNT(iVar12) ^ 0x18;
        uVar4 = (int)uVar14 - uVar6;
        uVar14 = (ulong)uVar4;
        iVar12 = (iVar12 << (ulong)(uVar6 & 0x1f)) + -1;
        *(int *)(param_1 + 1) = iVar12;
        *(uint *)((long)param_1 + 0xc) = uVar4;
        if (uVar13 < uVar15) {
          if ((int)uVar4 < 0) {
            puVar9 = (ulong *)param_1[2];
            if (puVar9 < (ulong *)param_1[4]) {
              uVar14 = *puVar9;
              param_1[2] = (long)puVar9 + 7;
              uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
              uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
              uVar10 = (uVar14 >> 0x20 | uVar14 << 0x20) >> 8 | uVar10 << 0x38;
              *param_1 = uVar10;
              uVar14 = (ulong)(uVar4 + 0x38);
            }
            else {
              func_0x0021f280(param_1);
              uVar14 = (ulong)*(uint *)((long)param_1 + 0xc);
              uVar10 = *param_1;
            }
          }
          uVar13 = (uint)(iVar12 * 0xb7) >> 8;
          if (uVar13 < (uint)(uVar10 >> (uVar14 & 0x3f))) {
            iVar12 = iVar12 - uVar13;
            *param_1 = uVar10 - ((ulong)(uVar13 + 1) << (uVar14 & 0x3f));
            uVar5 = 1;
          }
          else {
            iVar12 = uVar13 + 1;
            uVar5 = 3;
          }
          uVar13 = (uint)LZCOUNT(iVar12) ^ 0x18;
          *(int *)(param_1 + 1) = (iVar12 << (ulong)(uVar13 & 0x1f)) + -1;
          *(uint *)((long)param_1 + 0xc) = (int)uVar14 - uVar13;
        }
        else {
          uVar5 = 2;
        }
      }
      else {
        uVar5 = 0;
      }
      *(undefined1 *)(lVar16 + 0x311) = uVar5;
      lStack_68 = lStack_68 + 1;
      lVar19 = lVar19 + 4;
    } while (lStack_68 < *(int *)(param_2 + 0x198));
  }
  return *(int *)(param_2 + 0x38) == 0;
}



/* Entry: 00225c3c; end: 00225c73;  */

undefined8 FUN_00225c3c(undefined8 *param_1,uint param_2)

{
  if ((param_2 & 0xffffff00) == 0x200) {
    if (param_1 != (undefined8 *)0x0) {
      param_1[0x11] = 0;
      param_1[0x10] = 0;
      param_1[0x13] = 0;
      param_1[0x12] = 0;
      param_1[0xd] = 0;
      param_1[0xc] = 0;
      param_1[0xf] = 0;
      param_1[0xe] = 0;
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
    }
    return 1;
  }
  return 0;
}



/* Entry: 00225c74; end: 00225d8b;  */

undefined8 * FUN_00225c74(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
  func_0x0024b500(1,0xbd0);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)puVar2 = 0;
    puVar2[1] = "OK";
    puVar3 = puVar2;
    FUN_0024b11c();
    (*(code *)*puVar3)(puVar2 + 0x13);
    *(undefined4 *)((long)puVar2 + 4) = 0;
    *(undefined4 *)(puVar2 + 0x36) = 0;
    if (pcRam0000000000b5dbe8 == (code *)0x0) {
      if (PTR_DAT_00af8418 != (undefined *)0x0) {
        iVar1 = 2;
        (*(code *)PTR_DAT_00af8418)();
        if (iVar1 != 0) {
          pcRam0000000000b5dbe8 = FUN_0022705c;
          return puVar2;
        }
      }
      pcRam0000000000b5dbe8 = (code *)0x227490;
      return puVar2;
    }
  }
  return puVar2;
}



/* Entry: 00225d8c; end: 00225e5f;  */

undefined8 FUN_00225d8c(int *param_1,int param_2,undefined8 param_3)

{
  if (*param_1 != 0) {
    return 0;
  }
  *(undefined8 *)(param_1 + 2) = param_3;
  *param_1 = param_2;
  param_1[1] = 0;
  return 0;
}



/* Entry: 00225e60; end: 002263bb;  */

int FUN_00225e60(int *param_1,uint *param_2)

{
  uint uVar1;
  byte bVar2;
  uint3 uVar3;
  byte bVar4;
  byte bVar5;
  undefined1 uVar6;
  int *piVar7;
  ulong uVar8;
  char *pcVar9;
  uint3 *puVar10;
  uint uVar11;
  int iVar12;
  byte *pbVar13;
  ulong uVar14;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  *param_1 = 0;
  *(char **)(param_1 + 2) = "OK";
  if (param_2 == (uint *)0x0) {
    *param_1 = 2;
    pcVar9 = "null VP8Io passed to VP8GetHeaders()";
  }
  else {
    uVar8 = *(ulong *)(param_2 + 0x18);
    uVar14 = uVar8 - 3;
    if (uVar8 < 3 || uVar14 == 0) {
      *param_1 = 7;
      pcVar9 = "Truncated header.";
    }
    else {
      puVar10 = *(uint3 **)(param_2 + 0x1a);
      bVar2 = (byte)*puVar10;
      uVar3 = *puVar10;
      *(byte *)(param_1 + 0x10) = bVar2 & 1 ^ 1;
      bVar4 = bVar2 >> 1 & 7;
      *(byte *)((long)param_1 + 0x41) = bVar4;
      bVar5 = bVar2 >> 4 & 1;
      *(byte *)((long)param_1 + 0x42) = bVar5;
      uVar11 = (uint)(uVar3 >> 5);
      param_1[0x11] = uVar11;
      if (bVar4 < 4) {
        if (bVar5 == 0) {
          *param_1 = 4;
          pcVar9 = "Frame not displayable.";
        }
        else {
          pbVar13 = (byte *)((long)puVar10 + 3);
          if ((bVar2 & 1) == 0) {
            if (uVar14 < 7) {
              *param_1 = 7;
              pcVar9 = "cannot parse picture header";
            }
            else {
              if (((*pbVar13 == 0x9d) && ((byte)puVar10[1] == 1)) &&
                 (*(byte *)((long)puVar10 + 5) == 0x2a)) {
                uVar11 = (uint)*(byte *)((long)puVar10 + 6) |
                         (*(byte *)((long)puVar10 + 7) & 0x3f) << 8;
                *(short *)(param_1 + 0x12) = (short)uVar11;
                *(byte *)(param_1 + 0x13) = *(byte *)((long)puVar10 + 7) >> 6;
                uVar1 = (uint)(byte)puVar10[2] | (*(byte *)((long)puVar10 + 9) & 0x3f) << 8;
                *(short *)((long)param_1 + 0x4a) = (short)uVar1;
                *(byte *)((long)param_1 + 0x4d) = *(byte *)((long)puVar10 + 9) >> 6;
                pbVar13 = (byte *)((long)puVar10 + 10);
                uVar14 = uVar8 - 10;
                param_1[0x66] = uVar11 + 0xf >> 4;
                param_1[0x67] = uVar1 + 0xf >> 4;
                *param_2 = uVar11;
                param_2[1] = uVar1;
                param_2[0x1d] = 0;
                param_2[0x1e] = 0;
                param_2[0x1f] = uVar11;
                param_2[0x20] = 0;
                param_2[0x21] = uVar1;
                param_2[0x22] = 0;
                param_2[0x23] = uVar11;
                param_2[0x24] = uVar1;
                param_2[3] = uVar11;
                param_2[4] = uVar1;
                FUN_002249b4(param_1 + 0x12a);
                param_1[0x22] = 1;
                param_1[0x23] = 0;
                param_1[0x20] = 0;
                param_1[0x21] = 0;
                param_1[0x24] = 0;
                uVar11 = param_1[0x11];
                goto LAB_0022603c;
              }
              *param_1 = 3;
              pcVar9 = "Bad code word";
            }
          }
          else {
LAB_0022603c:
            if (uVar14 < uVar11) {
              if (*param_1 != 0) {
                return 0;
              }
              *param_1 = 7;
              pcVar9 = "bad partition length";
            }
            else {
              func_0x0021f204(param_1 + 4,pbVar13);
              uVar11 = param_1[0x11];
              if ((char)param_1[0x10] != '\0') {
                piVar7 = param_1 + 4;
                func_0x0021f2e8(piVar7,1);
                *(char *)((long)param_1 + 0x4e) = (char)piVar7;
                piVar7 = param_1 + 4;
                func_0x0021f2e8(piVar7,1);
                *(char *)((long)param_1 + 0x4f) = (char)piVar7;
              }
              piVar7 = param_1 + 4;
              func_0x0021f2e8(piVar7,1);
              param_1[0x20] = (int)piVar7;
              if ((int)piVar7 == 0) {
                param_1[0x21] = 0;
              }
              else {
                piVar7 = param_1 + 4;
                func_0x0021f2e8(piVar7,1);
                param_1[0x21] = (int)piVar7;
                piVar7 = param_1 + 4;
                func_0x0021f2e8(piVar7,1);
                if ((int)piVar7 != 0) {
                  piVar7 = param_1 + 4;
                  func_0x0021f2e8(piVar7,1);
                  param_1[0x22] = (int)piVar7;
                  piVar7 = param_1 + 4;
                  func_0x0021f2e8(piVar7,1);
                  uVar6 = 0;
                  if ((int)piVar7 != 0) {
                    piVar7 = param_1 + 4;
                    FUN_0021f434(piVar7,7);
                    uVar6 = SUB81(piVar7,0);
                  }
                  *(undefined1 *)(param_1 + 0x23) = uVar6;
                  piVar7 = param_1 + 4;
                  func_0x0021f2e8(piVar7,1);
                  uVar6 = 0;
                  if ((int)piVar7 != 0) {
                    piVar7 = param_1 + 4;
                    FUN_0021f434(piVar7,7);
                    uVar6 = SUB81(piVar7,0);
                  }
                  *(undefined1 *)((long)param_1 + 0x8d) = uVar6;
                  piVar7 = param_1 + 4;
                  func_0x0021f2e8(piVar7,1);
                  uVar6 = 0;
                  if ((int)piVar7 != 0) {
                    piVar7 = param_1 + 4;
                    FUN_0021f434(piVar7,7);
                    uVar6 = SUB81(piVar7,0);
                  }
                  *(undefined1 *)((long)param_1 + 0x8e) = uVar6;
                  piVar7 = param_1 + 4;
                  func_0x0021f2e8(piVar7,1);
                  uVar6 = 0;
                  if ((int)piVar7 != 0) {
                    piVar7 = param_1 + 4;
                    FUN_0021f434(piVar7,7);
                    uVar6 = SUB81(piVar7,0);
                  }
                  *(undefined1 *)((long)param_1 + 0x8f) = uVar6;
                  piVar7 = param_1 + 4;
                  func_0x0021f2e8(piVar7,1);
                  uVar6 = 0;
                  if ((int)piVar7 != 0) {
                    piVar7 = param_1 + 4;
                    FUN_0021f434(piVar7,6);
                    uVar6 = SUB81(piVar7,0);
                  }
                  *(undefined1 *)(param_1 + 0x24) = uVar6;
                  piVar7 = param_1 + 4;
                  func_0x0021f2e8(piVar7,1);
                  uVar6 = 0;
                  if ((int)piVar7 != 0) {
                    piVar7 = param_1 + 4;
                    FUN_0021f434(piVar7,6);
                    uVar6 = SUB81(piVar7,0);
                  }
                  *(undefined1 *)((long)param_1 + 0x91) = uVar6;
                  piVar7 = param_1 + 4;
                  func_0x0021f2e8(piVar7,1);
                  uVar6 = 0;
                  if ((int)piVar7 != 0) {
                    piVar7 = param_1 + 4;
                    FUN_0021f434(piVar7,6);
                    uVar6 = SUB81(piVar7,0);
                  }
                  *(undefined1 *)((long)param_1 + 0x92) = uVar6;
                  piVar7 = param_1 + 4;
                  func_0x0021f2e8(piVar7,1);
                  if ((int)piVar7 == 0) {
                    uVar6 = 0;
                  }
                  else {
                    piVar7 = param_1 + 4;
                    FUN_0021f434(piVar7,6);
                    uVar6 = SUB81(piVar7,0);
                  }
                  *(undefined1 *)((long)param_1 + 0x93) = uVar6;
                }
                if (param_1[0x21] != 0) {
                  piVar7 = param_1 + 4;
                  func_0x0021f2e8(piVar7,1);
                  if ((int)piVar7 == 0) {
                    uVar6 = 0xff;
                  }
                  else {
                    piVar7 = param_1 + 4;
                    func_0x0021f2e8(piVar7,8);
                    uVar6 = SUB81(piVar7,0);
                  }
                  *(undefined1 *)(param_1 + 0x12a) = uVar6;
                  piVar7 = param_1 + 4;
                  func_0x0021f2e8(piVar7,1);
                  if ((int)piVar7 == 0) {
                    uVar6 = 0xff;
                  }
                  else {
                    piVar7 = param_1 + 4;
                    func_0x0021f2e8(piVar7,8);
                    uVar6 = SUB81(piVar7,0);
                  }
                  *(undefined1 *)((long)param_1 + 0x4a9) = uVar6;
                  piVar7 = param_1 + 4;
                  func_0x0021f2e8(piVar7,1);
                  if ((int)piVar7 == 0) {
                    uVar6 = 0xff;
                  }
                  else {
                    piVar7 = param_1 + 4;
                    func_0x0021f2e8(piVar7,8);
                    uVar6 = SUB81(piVar7,0);
                  }
                  *(undefined1 *)((long)param_1 + 0x4aa) = uVar6;
                }
              }
              if (param_1[0xe] == 0) {
                piVar7 = param_1 + 4;
                FUN_002263bc(piVar7,param_1);
                if ((int)piVar7 == 0) {
                  if (*param_1 != 0) {
                    return 0;
                  }
                  iVar12 = 0;
                  *param_1 = 3;
                  *(char **)(param_1 + 2) = "cannot parse filter header";
                  goto LAB_00225f40;
                }
                piVar7 = param_1;
                FUN_00226554(param_1,pbVar13 + uVar11,uVar14 - uVar11);
                if ((int)piVar7 != 0) {
                  if (*param_1 != 0) {
                    return 0;
                  }
                  iVar12 = 0;
                  *param_1 = (int)piVar7;
                  *(char **)(param_1 + 2) = "cannot parse partitions";
                  goto LAB_00225f40;
                }
                FUN_00224548(param_1);
                if ((char)param_1[0x10] != '\0') {
                  iVar12 = 1;
                  func_0x0021f2e8(param_1 + 4,1);
                  func_0x00225844(param_1 + 4,param_1);
                  goto LAB_00225f40;
                }
                if (*param_1 != 0) {
                  return 0;
                }
                *param_1 = 4;
                pcVar9 = "Not a key frame.";
              }
              else {
                if (*param_1 != 0) {
                  return 0;
                }
                *param_1 = 3;
                pcVar9 = "cannot parse segment header";
              }
            }
          }
        }
      }
      else {
        *param_1 = 3;
        pcVar9 = "Incorrect keyframe parameters.";
      }
    }
  }
  iVar12 = 0;
  *(char **)(param_1 + 2) = pcVar9;
LAB_00225f40:
  param_1[1] = iVar12;
  return iVar12;
}



/* Entry: 002263bc; end: 00226553;  */

bool FUN_002263bc(long param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = param_1;
  func_0x0021f2e8(param_1,1);
  *(int *)(param_2 + 0x50) = (int)lVar1;
  lVar1 = param_1;
  func_0x0021f2e8(param_1,6);
  *(int *)(param_2 + 0x54) = (int)lVar1;
  lVar1 = param_1;
  func_0x0021f2e8(param_1,3);
  *(int *)(param_2 + 0x58) = (int)lVar1;
  lVar1 = param_1;
  func_0x0021f2e8(param_1,1);
  *(int *)(param_2 + 0x5c) = (int)lVar1;
  if (((int)lVar1 != 0) && (lVar1 = param_1, func_0x0021f2e8(param_1,1), (int)lVar1 != 0)) {
    lVar1 = param_1;
    func_0x0021f2e8(param_1,1);
    if ((int)lVar1 != 0) {
      lVar1 = param_1;
      FUN_0021f434(param_1,6);
      *(int *)(param_2 + 0x60) = (int)lVar1;
    }
    lVar1 = param_1;
    func_0x0021f2e8(param_1,1);
    if ((int)lVar1 != 0) {
      lVar1 = param_1;
      FUN_0021f434(param_1,6);
      *(int *)(param_2 + 100) = (int)lVar1;
    }
    lVar1 = param_1;
    func_0x0021f2e8(param_1,1);
    if ((int)lVar1 != 0) {
      lVar1 = param_1;
      FUN_0021f434(param_1,6);
      *(int *)(param_2 + 0x68) = (int)lVar1;
    }
    lVar1 = param_1;
    func_0x0021f2e8(param_1,1);
    if ((int)lVar1 != 0) {
      lVar1 = param_1;
      FUN_0021f434(param_1,6);
      *(int *)(param_2 + 0x6c) = (int)lVar1;
    }
    lVar1 = param_1;
    func_0x0021f2e8(param_1,1);
    if ((int)lVar1 != 0) {
      lVar1 = param_1;
      FUN_0021f434(param_1,6);
      *(int *)(param_2 + 0x70) = (int)lVar1;
    }
    lVar1 = param_1;
    func_0x0021f2e8(param_1,1);
    if ((int)lVar1 != 0) {
      lVar1 = param_1;
      FUN_0021f434(param_1,6);
      *(int *)(param_2 + 0x74) = (int)lVar1;
    }
    lVar1 = param_1;
    func_0x0021f2e8(param_1,1);
    if ((int)lVar1 != 0) {
      lVar1 = param_1;
      FUN_0021f434(param_1,6);
      *(int *)(param_2 + 0x78) = (int)lVar1;
    }
    lVar1 = param_1;
    func_0x0021f2e8(param_1,1);
    if ((int)lVar1 != 0) {
      lVar1 = param_1;
      FUN_0021f434(param_1,6);
      *(int *)(param_2 + 0x7c) = (int)lVar1;
    }
  }
  uVar2 = 0;
  if ((*(int *)(param_2 + 0x54) != 0) && (uVar2 = 1, *(int *)(param_2 + 0x50) == 0)) {
    uVar2 = 2;
  }
  *(undefined4 *)(param_2 + 0xb68) = uVar2;
  return *(int *)(param_1 + 0x28) == 0;
}



/* Entry: 00226554; end: 00226de3;  */

undefined4 FUN_00226554(long param_1,uint3 *param_2,ulong param_3)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  lVar3 = param_1 + 0x10;
  func_0x0021f2e8(lVar3,2);
  uVar2 = ~(-1 << (ulong)((uint)lVar3 & 0x1f));
  uVar7 = (ulong)uVar2;
  *(uint *)(param_1 + 0x1b0) = uVar2;
  uVar6 = uVar7 + (ulong)uVar2 * 2;
  uVar5 = param_3 - uVar6;
  if (param_3 < uVar6) {
    uVar4 = 7;
  }
  else {
    param_3 = (long)param_2 + param_3;
    uVar6 = (long)param_2 + uVar6;
    if ((uint)lVar3 != 0) {
      lVar3 = param_1 + 0x1b8;
      uVar8 = uVar7;
      if (uVar7 < 2) {
        uVar8 = 1;
      }
      do {
        uVar1 = (ulong)*param_2;
        if (uVar5 <= *param_2) {
          uVar1 = uVar5;
        }
        func_0x0021f204(lVar3,uVar6,uVar1);
        uVar6 = uVar6 + uVar1;
        uVar5 = uVar5 - uVar1;
        param_2 = (uint3 *)((long)param_2 + 3);
        lVar3 = lVar3 + 0x30;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    func_0x0021f204(param_1 + uVar7 * 0x30 + 0x1b8,uVar6,uVar5);
    uVar4 = 0;
    if (param_3 <= uVar6) {
      uVar4 = 5;
    }
  }
  return uVar4;
}



/* Entry: 00226de4; end: 00226df7;  */

void FUN_00226de4(long param_1)

{
  *(undefined2 *)(*(long *)(param_1 + 0xb10) + -2) = 0;
  *(undefined4 *)(param_1 + 0xb00) = 0;
  *(undefined4 *)(param_1 + 0xb58) = 0;
  return;
}



/* Entry: 00226df8; end: 0022705b;  */

void FUN_00226df8(int *param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  uint uVar5;
  undefined8 uVar6;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  if (param_2 == 0) {
    if (*param_1 != 0) {
      return;
    }
    *param_1 = 2;
    *(char **)(param_1 + 2) = "NULL VP8Io parameter in VP8Decode().";
    goto LAB_00226fd0;
  }
  if ((param_1[1] == 0) && (piVar3 = param_1, FUN_00225e60(param_1,param_2), (int)piVar3 == 0)) {
    return;
  }
  piVar3 = param_1;
  FUN_00221cac(param_1,param_2);
  if ((int)piVar3 == 0) {
    piVar3 = param_1;
    FUN_00222e5c(param_1,param_2);
    if ((int)piVar3 == 0) {
LAB_00226fb4:
      piVar3 = param_1;
      func_0x00222dd8(param_1,param_2);
    }
    else {
      param_1[0x2d7] = 0;
      if (0 < param_1[0x6b]) {
        uVar5 = 0;
        do {
          uVar1 = param_1[0x6c];
          piVar3 = param_1 + 4;
          FUN_002249c4(piVar3,param_1);
          if ((int)piVar3 == 0) {
            if (*param_1 != 0) goto LAB_00226fb4;
            pcVar4 = "Premature end-of-partition0 encountered.";
LAB_00226ff8:
            *(char **)(param_1 + 2) = pcVar4;
            uVar6 = 7;
LAB_00227004:
            *(undefined8 *)param_1 = uVar6;
            piVar3 = param_1;
            func_0x00222dd8(param_1,param_2);
            goto LAB_00226e4c;
          }
          if (param_1[0x2d6] < param_1[0x66]) {
            do {
              piVar3 = param_1;
              func_0x00226640(param_1,param_1 + (ulong)(uVar1 & uVar5) * 0xc + 0x6e);
              if ((int)piVar3 == 0) {
                if (*param_1 != 0) goto LAB_00226fb4;
                pcVar4 = "Premature end-of-file encountered.";
                goto LAB_00226ff8;
              }
              iVar2 = param_1[0x2d6];
              param_1[0x2d6] = iVar2 + 1;
            } while (iVar2 + 1 < param_1[0x66]);
          }
          *(undefined2 *)(*(long *)(param_1 + 0x2c4) + -2) = 0;
          param_1[0x2c0] = 0;
          param_1[0x2d6] = 0;
          piVar3 = param_1;
          FUN_00220b3c(param_1,param_2);
          if ((int)piVar3 == 0) {
            if (*param_1 == 0) {
              *(char **)(param_1 + 2) = "Output aborted.";
              uVar6 = 6;
              goto LAB_00227004;
            }
            goto LAB_00226fb4;
          }
          uVar5 = param_1[0x2d7] + 1;
          param_1[0x2d7] = uVar5;
        } while ((int)uVar5 < param_1[0x6b]);
      }
      if (0 < param_1[0x32]) {
        FUN_0024b11c();
        iVar2 = (int)param_1 + 0x98;
        (**(code **)(piVar3 + 4))();
        if (iVar2 == 0) goto LAB_00226fb4;
      }
      piVar3 = param_1;
      func_0x00222dd8(param_1,param_2);
      if (((ulong)piVar3 & 1) != 0) goto LAB_00226fd0;
    }
  }
LAB_00226e4c:
  FUN_0024b11c();
  (**(code **)(piVar3 + 10))(param_1 + 0x26);
  FUN_0021ff14(param_1);
  func_0x0024b520(*(undefined8 *)(param_1 + 0x2d2));
  param_1[0x2d4] = 0;
  param_1[0x2d5] = 0;
  param_1[0x2d2] = 0;
  param_1[0x2d3] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
LAB_00226fd0:
  param_1[1] = 0;
  return;
}



/* Entry: 0022705c; end: 00227827;  */

ulong FUN_0022705c(ulong *param_1,long param_2,int param_3,long param_4,ulong param_5,long param_6)

{
  byte bVar1;
  ushort uVar2;
  ulong *puVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  byte *pbVar14;
  uint uVar15;
  ushort uVar16;
  
  if (0xf < (int)param_5) {
    return 0x10;
  }
  pbVar14 = (byte *)(*(long *)(param_2 + (long)(int)param_5 * 8) + (long)param_3 * 0xb);
  uVar15 = (uint)param_1[1];
  uVar5 = *(uint *)((long)param_1 + 0xc);
LAB_002270bc:
  bVar1 = *pbVar14;
  if ((int)uVar5 < 0) {
    puVar3 = (ulong *)param_1[2];
    if (puVar3 < (ulong *)param_1[4]) {
      uVar7 = *puVar3;
      param_1[2] = (long)puVar3 + 7;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      *param_1 = (uVar7 >> 0x20 | uVar7 << 0x20) >> 8 | *param_1 << 0x38;
      uVar5 = uVar5 + 0x38;
      *(uint *)((long)param_1 + 0xc) = uVar5;
      goto LAB_002270f4;
    }
    func_0x0021f280(param_1);
    uVar6 = (ulong)*(uint *)((long)param_1 + 0xc);
    uVar5 = uVar15 * bVar1 >> 8;
    uVar7 = *param_1;
    uVar8 = (uint)(uVar7 >> (uVar6 & 0x3f));
    if (uVar8 <= uVar5) goto LAB_0022715c;
  }
  else {
LAB_002270f4:
    uVar6 = (ulong)uVar5;
    uVar5 = uVar15 * bVar1 >> 8;
    uVar7 = *param_1;
    uVar8 = (uint)(uVar7 >> (uVar6 & 0x3f));
    if (uVar8 <= uVar5) {
LAB_0022715c:
      iVar4 = (int)uVar6;
      uVar15 = uVar5;
      goto joined_r0x00227164;
    }
  }
  iVar4 = (int)uVar6;
  uVar15 = uVar15 - (uVar5 + 1);
  uVar7 = uVar7 - ((ulong)(uVar5 + 1) << (uVar6 & 0x3f));
  *param_1 = uVar7;
joined_r0x00227164:
  if (uVar15 < 0x7f) {
    uVar10 = (ulong)uVar15;
    uVar15 = (uint)(byte)(&UNK_007edbb4)[uVar15];
    uVar6 = (ulong)(iVar4 - (uint)(byte)(&UNK_007edb34)[uVar10]);
    *(uint *)((long)param_1 + 0xc) = iVar4 - (uint)(byte)(&UNK_007edb34)[uVar10];
  }
  *(uint *)(param_1 + 1) = uVar15;
  if (uVar8 <= uVar5) {
    return param_5;
  }
  uVar5 = (uint)param_5;
  lVar13 = (long)(int)uVar5;
  lVar12 = param_5 << 0x20;
  do {
    uVar5 = uVar5 + 1;
    param_5 = (ulong)uVar5;
    bVar1 = pbVar14[1];
    if ((int)uVar6 < 0) {
      puVar3 = (ulong *)param_1[2];
      if (puVar3 < (ulong *)param_1[4]) {
        uVar10 = *puVar3;
        param_1[2] = (long)puVar3 + 7;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar7 = (uVar10 >> 0x20 | uVar10 << 0x20) >> 8 | uVar7 << 0x38;
        *param_1 = uVar7;
        uVar8 = (int)uVar6 + 0x38;
        uVar6 = (ulong)uVar8;
        *(uint *)((long)param_1 + 0xc) = uVar8;
        goto LAB_002271c4;
      }
      func_0x0021f280(param_1);
      uVar6 = (ulong)*(uint *)((long)param_1 + 0xc);
      uVar7 = *param_1;
      uVar8 = uVar15 * bVar1 >> 8;
      uVar9 = (uint)(uVar7 >> (uVar6 & 0x3f));
      if (uVar9 <= uVar8) goto LAB_00227260;
LAB_002271d8:
      iVar4 = (int)uVar6;
      uVar15 = uVar15 - (uVar8 + 1);
      uVar7 = uVar7 - ((ulong)(uVar8 + 1) << (uVar6 & 0x3f));
      *param_1 = uVar7;
    }
    else {
LAB_002271c4:
      uVar8 = uVar15 * bVar1 >> 8;
      uVar9 = (uint)(uVar7 >> (uVar6 & 0x3f));
      if (uVar8 < uVar9) goto LAB_002271d8;
LAB_00227260:
      iVar4 = (int)uVar6;
      uVar15 = uVar8;
    }
    if (uVar15 < 0x7f) {
      uVar10 = (ulong)uVar15;
      uVar15 = (uint)(byte)(&UNK_007edbb4)[uVar15];
      uVar6 = (ulong)(iVar4 - (uint)(byte)(&UNK_007edb34)[uVar10]);
      *(uint *)((long)param_1 + 0xc) = iVar4 - (uint)(byte)(&UNK_007edb34)[uVar10];
    }
    *(uint *)(param_1 + 1) = uVar15;
    if (uVar8 < uVar9) break;
    pbVar14 = *(byte **)(param_2 + 8 + lVar13 * 8);
    lVar13 = lVar13 + 1;
    lVar12 = lVar12 + 0x100000000;
    if (lVar13 == 0x10) {
      return 0x10;
    }
  } while( true );
  lVar11 = *(long *)(param_2 + (long)(int)uVar5 * 8);
  bVar1 = pbVar14[2];
  if ((int)uVar6 < 0) {
    puVar3 = (ulong *)param_1[2];
    if (puVar3 < (ulong *)param_1[4]) {
      uVar10 = *puVar3;
      param_1[2] = (long)puVar3 + 7;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar7 = (uVar10 >> 0x20 | uVar10 << 0x20) >> 8 | uVar7 << 0x38;
      *param_1 = uVar7;
      uVar5 = (int)uVar6 + 0x38;
      uVar6 = (ulong)uVar5;
      *(uint *)((long)param_1 + 0xc) = uVar5;
      uVar5 = uVar15 * bVar1 >> 8;
      uVar9 = (uint)(uVar7 >> (uVar6 & 0x3f));
      uVar8 = uVar5;
      if (uVar9 <= uVar5) goto LAB_00227334;
    }
    else {
      func_0x0021f280(param_1);
      uVar6 = (ulong)*(uint *)((long)param_1 + 0xc);
      uVar7 = *param_1;
      uVar5 = uVar15 * bVar1 >> 8;
      uVar9 = (uint)(uVar7 >> (uVar6 & 0x3f));
      uVar8 = uVar5;
      if (uVar9 <= uVar5) goto LAB_00227334;
    }
  }
  else {
    uVar5 = uVar15 * bVar1 >> 8;
    uVar9 = (uint)(uVar7 >> (uVar6 & 0x3f));
    uVar8 = uVar5;
    if (uVar9 <= uVar5) goto LAB_00227334;
  }
  *param_1 = uVar7 - ((ulong)(uVar5 + 1) << (uVar6 & 0x3f));
  uVar8 = uVar15 - (uVar5 + 1);
LAB_00227334:
  if (uVar8 < 0x7f) {
    uVar15 = (int)uVar6 - (uint)(byte)(&UNK_007edb34)[uVar8];
    uVar6 = (ulong)uVar15;
    *(uint *)(param_1 + 1) = (uint)(byte)(&UNK_007edbb4)[uVar8];
    *(uint *)((long)param_1 + 0xc) = uVar15;
  }
  else {
    *(uint *)(param_1 + 1) = uVar8;
  }
  if (uVar5 < uVar9) {
    puVar3 = param_1;
    FUN_00227828(param_1,pbVar14);
    uVar16 = (ushort)puVar3;
    pbVar14 = (byte *)(lVar11 + 0x16);
    uVar5 = *(uint *)((long)param_1 + 0xc);
    uVar6 = (ulong)uVar5;
  }
  else {
    pbVar14 = (byte *)(lVar11 + 0xb);
    uVar16 = 1;
    uVar5 = (uint)uVar6;
  }
  if ((int)uVar5 < 0) {
    puVar3 = (ulong *)param_1[2];
    if (puVar3 < (ulong *)param_1[4]) {
      uVar7 = *puVar3;
      param_1[2] = (long)puVar3 + 7;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      *param_1 = (uVar7 >> 0x20 | uVar7 << 0x20) >> 8 | *param_1 << 0x38;
      uVar6 = (ulong)(uVar5 + 0x38);
    }
    else {
      func_0x0021f280(param_1);
      uVar6 = (ulong)*(uint *)((long)param_1 + 0xc);
    }
  }
  uVar9 = (uint)param_1[1] >> 1;
  iVar4 = uVar9 - (int)(*param_1 >> (uVar6 & 0x3f));
  uVar8 = iVar4 >> 0x1f;
  uVar5 = (int)uVar6 - 1;
  uVar15 = uVar8 + (uint)param_1[1] | 1;
  *(uint *)(param_1 + 1) = uVar15;
  *(uint *)((long)param_1 + 0xc) = uVar5;
  *param_1 = *param_1 - ((ulong)(uVar8 & uVar9 + 1) << (uVar6 & 0x3f));
  uVar2 = (ushort)(iVar4 >> 0x1f);
  *(ushort *)(param_6 + (ulong)(byte)(&UNK_007eea80)[lVar12 >> 0x20] * 2) =
       ((uVar2 ^ uVar16) - uVar2) * (short)*(undefined4 *)(param_4 + (ulong)(0 < lVar13) * 4);
  if (0xe < lVar13) {
    return 0x10;
  }
  goto LAB_002270bc;
}



/* Entry: 00227828; end: 00227fcf;  */

int FUN_00227828(ulong *param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  
  bVar2 = *(byte *)(param_2 + 3);
  uVar3 = param_1[1];
  uVar13 = *(uint *)((long)param_1 + 0xc);
  uVar9 = (ulong)uVar13;
  if ((int)uVar13 < 0) {
    puVar4 = (ulong *)param_1[2];
    if (puVar4 < (ulong *)param_1[4]) {
      uVar9 = *puVar4;
      param_1[2] = (long)puVar4 + 7;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      *param_1 = (uVar9 >> 0x20 | uVar9 << 0x20) >> 8 | *param_1 << 0x38;
      uVar9 = (ulong)(uVar13 + 0x38);
    }
    else {
      func_0x0021f280(param_1);
      uVar9 = (ulong)*(uint *)((long)param_1 + 0xc);
    }
  }
  uVar13 = (int)uVar3 * (uint)bVar2 >> 8;
  uVar5 = *param_1;
  uVar8 = (uint)(uVar5 >> (uVar9 & 0x3f));
  if (uVar13 < uVar8) {
    iVar6 = (int)uVar3 - uVar13;
    uVar5 = uVar5 - ((ulong)(uVar13 + 1) << (uVar9 & 0x3f));
    *param_1 = uVar5;
  }
  else {
    iVar6 = uVar13 + 1;
  }
  uVar11 = (uint)LZCOUNT(iVar6) ^ 0x18;
  uVar12 = (int)uVar9 - uVar11;
  uVar9 = (ulong)uVar12;
  iVar6 = (iVar6 << (ulong)(uVar11 & 0x1f)) + -1;
  *(int *)(param_1 + 1) = iVar6;
  *(uint *)((long)param_1 + 0xc) = uVar12;
  if (uVar13 < uVar8) {
    bVar2 = *(byte *)(param_2 + 6);
    if ((int)uVar12 < 0) {
      puVar4 = (ulong *)param_1[2];
      if (puVar4 < (ulong *)param_1[4]) {
        uVar9 = *puVar4;
        param_1[2] = (long)puVar4 + 7;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar5 = (uVar9 >> 0x20 | uVar9 << 0x20) >> 8 | uVar5 << 0x38;
        *param_1 = uVar5;
        uVar9 = (ulong)(uVar12 + 0x38);
      }
      else {
        func_0x0021f280(param_1);
        uVar9 = (ulong)*(uint *)((long)param_1 + 0xc);
        uVar5 = *param_1;
      }
    }
    uVar13 = iVar6 * (uint)bVar2 >> 8;
    uVar8 = (uint)(uVar5 >> (uVar9 & 0x3f));
    if (uVar13 < uVar8) {
      iVar6 = iVar6 - uVar13;
      uVar5 = uVar5 - ((ulong)(uVar13 + 1) << (uVar9 & 0x3f));
      *param_1 = uVar5;
    }
    else {
      iVar6 = uVar13 + 1;
    }
    uVar11 = (uint)LZCOUNT(iVar6) ^ 0x18;
    uVar12 = (int)uVar9 - uVar11;
    uVar9 = (ulong)uVar12;
    iVar6 = (iVar6 << (ulong)(uVar11 & 0x1f)) + -1;
    *(int *)(param_1 + 1) = iVar6;
    *(uint *)((long)param_1 + 0xc) = uVar12;
    if (uVar8 <= uVar13) {
      bVar2 = *(byte *)(param_2 + 7);
      if ((int)uVar12 < 0) {
        puVar4 = (ulong *)param_1[2];
        if (puVar4 < (ulong *)param_1[4]) {
          uVar9 = *puVar4;
          param_1[2] = (long)puVar4 + 7;
          uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          uVar5 = (uVar9 >> 0x20 | uVar9 << 0x20) >> 8 | uVar5 << 0x38;
          *param_1 = uVar5;
          uVar9 = (ulong)(uVar12 + 0x38);
          goto LAB_00227a44;
        }
        func_0x0021f280(param_1);
        uVar13 = *(uint *)((long)param_1 + 0xc);
        uVar9 = (ulong)uVar13;
        uVar5 = *param_1;
        uVar8 = iVar6 * (uint)bVar2 >> 8;
        uVar11 = (uint)(uVar5 >> (uVar9 & 0x3f));
        if (uVar11 <= uVar8) goto LAB_00227c2c;
LAB_00227a5c:
        uVar13 = (uint)uVar9;
        iVar6 = iVar6 - uVar8;
        uVar5 = uVar5 - ((ulong)(uVar8 + 1) << (uVar9 & 0x3f));
        *param_1 = uVar5;
      }
      else {
LAB_00227a44:
        uVar13 = (uint)uVar9;
        uVar8 = iVar6 * (uint)bVar2 >> 8;
        uVar11 = (uint)(uVar5 >> (uVar9 & 0x3f));
        if (uVar8 < uVar11) goto LAB_00227a5c;
LAB_00227c2c:
        iVar6 = uVar8 + 1;
      }
      uVar12 = (uint)LZCOUNT(iVar6) ^ 0x18;
      uVar13 = uVar13 - uVar12;
      uVar9 = (ulong)uVar13;
      iVar6 = (iVar6 << (ulong)(uVar12 & 0x1f)) + -1;
      *(int *)(param_1 + 1) = iVar6;
      *(uint *)((long)param_1 + 0xc) = uVar13;
      if (uVar8 < uVar11) {
        if ((int)uVar13 < 0) {
          puVar4 = (ulong *)param_1[2];
          if (puVar4 < (ulong *)param_1[4]) {
            uVar9 = *puVar4;
            param_1[2] = (long)puVar4 + 7;
            uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
            uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
            uVar5 = (uVar9 >> 0x20 | uVar9 << 0x20) >> 8 | uVar5 << 0x38;
            *param_1 = uVar5;
            uVar9 = (ulong)(uVar13 + 0x38);
          }
          else {
            func_0x0021f280(param_1);
            uVar9 = (ulong)*(uint *)((long)param_1 + 0xc);
            uVar5 = *param_1;
          }
        }
        uVar13 = (uint)(iVar6 * 0xa5) >> 8;
        if (uVar13 < (uint)(uVar5 >> (uVar9 & 0x3f))) {
          iVar6 = iVar6 - uVar13;
          uVar5 = uVar5 - ((ulong)(uVar13 + 1) << (uVar9 & 0x3f));
          *param_1 = uVar5;
          iVar14 = 9;
        }
        else {
          iVar6 = uVar13 + 1;
          iVar14 = 7;
        }
        uVar13 = (uint)LZCOUNT(iVar6) ^ 0x18;
        uVar8 = (int)uVar9 - uVar13;
        uVar9 = (ulong)uVar8;
        iVar6 = (iVar6 << (ulong)(uVar13 & 0x1f)) + -1;
        *(int *)(param_1 + 1) = iVar6;
        *(uint *)((long)param_1 + 0xc) = uVar8;
        if ((int)uVar8 < 0) {
          puVar4 = (ulong *)param_1[2];
          if (puVar4 < (ulong *)param_1[4]) {
            uVar9 = *puVar4;
            param_1[2] = (long)puVar4 + 7;
            uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
            uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
            uVar5 = (uVar9 >> 0x20 | uVar9 << 0x20) >> 8 | uVar5 << 0x38;
            *param_1 = uVar5;
            uVar9 = (ulong)(uVar8 + 0x38);
          }
          else {
            func_0x0021f280(param_1);
            uVar9 = (ulong)*(uint *)((long)param_1 + 0xc);
            uVar5 = *param_1;
          }
        }
        uVar13 = (uint)(iVar6 * 0x91) >> 8;
        uVar8 = (uint)(uVar5 >> (uVar9 & 0x3f));
        if (uVar13 < uVar8) {
          iVar6 = iVar6 - uVar13;
          *param_1 = uVar5 - ((ulong)(uVar13 + 1) << (uVar9 & 0x3f));
        }
        else {
          iVar6 = uVar13 + 1;
        }
        uVar11 = (uint)LZCOUNT(iVar6) ^ 0x18;
        *(int *)(param_1 + 1) = (iVar6 << (ulong)(uVar11 & 0x1f)) + -1;
        *(uint *)((long)param_1 + 0xc) = (int)uVar9 - uVar11;
        if (uVar13 < uVar8) {
          iVar14 = iVar14 + 1;
        }
        return iVar14;
      }
      if ((int)uVar13 < 0) {
        puVar4 = (ulong *)param_1[2];
        if (puVar4 < (ulong *)param_1[4]) {
          uVar9 = *puVar4;
          param_1[2] = (long)puVar4 + 7;
          uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          uVar5 = (uVar9 >> 0x20 | uVar9 << 0x20) >> 8 | uVar5 << 0x38;
          *param_1 = uVar5;
          uVar9 = (ulong)(uVar13 + 0x38);
        }
        else {
          func_0x0021f280(param_1);
          uVar9 = (ulong)*(uint *)((long)param_1 + 0xc);
          uVar5 = *param_1;
        }
      }
      uVar13 = (uint)uVar9;
      uVar8 = (uint)(iVar6 * 0x9f) >> 8;
      if (uVar8 < (uint)(uVar5 >> (uVar9 & 0x3f))) {
        iVar6 = iVar6 - uVar8;
        *param_1 = uVar5 - ((ulong)(uVar8 + 1) << (uVar9 & 0x3f));
        iVar14 = 6;
      }
      else {
        iVar6 = uVar8 + 1;
        iVar14 = 5;
      }
      goto LAB_00227f28;
    }
    bVar2 = *(byte *)(param_2 + 8);
    if ((int)uVar12 < 0) {
      puVar4 = (ulong *)param_1[2];
      if (puVar4 < (ulong *)param_1[4]) {
        uVar9 = *puVar4;
        param_1[2] = (long)puVar4 + 7;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar5 = (uVar9 >> 0x20 | uVar9 << 0x20) >> 8 | uVar5 << 0x38;
        *param_1 = uVar5;
        uVar9 = (ulong)(uVar12 + 0x38);
      }
      else {
        func_0x0021f280(param_1);
        uVar9 = (ulong)*(uint *)((long)param_1 + 0xc);
        uVar5 = *param_1;
      }
    }
    uVar13 = iVar6 * (uint)bVar2 >> 8;
    uVar8 = (uint)(uVar5 >> (uVar9 & 0x3f));
    if (uVar13 < uVar8) {
      iVar6 = iVar6 - uVar13;
      uVar5 = uVar5 - ((ulong)(uVar13 + 1) << (uVar9 & 0x3f));
      *param_1 = uVar5;
    }
    else {
      iVar6 = uVar13 + 1;
    }
    uVar12 = (uint)LZCOUNT(iVar6) ^ 0x18;
    uVar11 = (int)uVar9 - uVar12;
    iVar6 = (iVar6 << (ulong)(uVar12 & 0x1f)) + -1;
    *(int *)(param_1 + 1) = iVar6;
    *(uint *)((long)param_1 + 0xc) = uVar11;
    if (uVar13 < uVar8) {
      param_2 = param_2 + 1;
    }
    bVar2 = *(byte *)(param_2 + 9);
    if ((int)uVar11 < 0) {
      puVar4 = (ulong *)param_1[2];
      if (puVar4 < (ulong *)param_1[4]) {
        uVar9 = *puVar4;
        param_1[2] = (long)puVar4 + 7;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar5 = (uVar9 >> 0x20 | uVar9 << 0x20) >> 8 | uVar5 << 0x38;
        *param_1 = uVar5;
        uVar11 = uVar11 + 0x38;
        goto LAB_00227bd4;
      }
      func_0x0021f280(param_1);
      uVar11 = *(uint *)((long)param_1 + 0xc);
      uVar9 = (ulong)uVar11;
      uVar5 = *param_1;
      uVar12 = iVar6 * (uint)bVar2 >> 8;
      uVar7 = (uint)(uVar5 >> (uVar9 & 0x3f));
      if (uVar7 <= uVar12) goto LAB_00227d0c;
    }
    else {
LAB_00227bd4:
      uVar9 = (ulong)uVar11;
      uVar12 = iVar6 * (uint)bVar2 >> 8;
      uVar7 = (uint)(uVar5 >> (uVar9 & 0x3f));
      if (uVar7 <= uVar12) {
LAB_00227d0c:
        iVar6 = uVar12 + 1;
        goto LAB_00227d10;
      }
    }
    uVar11 = (uint)uVar9;
    iVar6 = iVar6 - uVar12;
    uVar5 = uVar5 - ((ulong)(uVar12 + 1) << (uVar9 & 0x3f));
    *param_1 = uVar5;
LAB_00227d10:
    uVar1 = (uint)LZCOUNT(iVar6) ^ 0x18;
    uVar11 = uVar11 - uVar1;
    iVar6 = (iVar6 << (ulong)(uVar1 & 0x1f)) + -1;
    *(int *)(param_1 + 1) = iVar6;
    *(uint *)((long)param_1 + 0xc) = uVar11;
    uVar13 = (uint)(uVar12 < uVar7) | (uint)(uVar13 < uVar8) << 1;
    pbVar10 = (&PTR_DAT_009c0848)[uVar13];
    bVar2 = *pbVar10;
    if (bVar2 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
      do {
        pbVar10 = pbVar10 + 1;
        if ((int)uVar11 < 0) {
          puVar4 = (ulong *)param_1[2];
          if (puVar4 < (ulong *)param_1[4]) {
            uVar9 = *puVar4;
            param_1[2] = (long)puVar4 + 7;
            uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
            uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
            uVar5 = (uVar9 >> 0x20 | uVar9 << 0x20) >> 8 | uVar5 << 0x38;
            *param_1 = uVar5;
            uVar11 = uVar11 + 0x38;
            goto LAB_00227db8;
          }
          func_0x0021f280(param_1);
          uVar11 = *(uint *)((long)param_1 + 0xc);
          uVar9 = (ulong)uVar11;
          uVar5 = *param_1;
          uVar12 = iVar6 * (uint)bVar2 >> 8;
          uVar7 = (uint)(uVar5 >> (uVar9 & 0x3f));
          if (uVar7 <= uVar12) goto LAB_00227d5c;
LAB_00227dd0:
          uVar11 = (uint)uVar9;
          iVar6 = iVar6 - uVar12;
          uVar5 = uVar5 - ((ulong)(uVar12 + 1) << (uVar9 & 0x3f));
          *param_1 = uVar5;
        }
        else {
LAB_00227db8:
          uVar9 = (ulong)uVar11;
          uVar12 = iVar6 * (uint)bVar2 >> 8;
          uVar7 = (uint)(uVar5 >> (uVar9 & 0x3f));
          if (uVar12 < uVar7) goto LAB_00227dd0;
LAB_00227d5c:
          iVar6 = uVar12 + 1;
        }
        uVar1 = (uint)LZCOUNT(iVar6) ^ 0x18;
        uVar11 = uVar11 - uVar1;
        iVar6 = (iVar6 << (ulong)(uVar1 & 0x1f)) + -1;
        *(int *)(param_1 + 1) = iVar6;
        *(uint *)((long)param_1 + 0xc) = uVar11;
        uVar8 = (uint)(uVar12 < uVar7) | uVar8 << 1;
        bVar2 = *pbVar10;
      } while (bVar2 != 0);
    }
    return uVar8 + (8 << (ulong)uVar13) + 3;
  }
  bVar2 = *(byte *)(param_2 + 4);
  if ((int)uVar12 < 0) {
    puVar4 = (ulong *)param_1[2];
    if (puVar4 < (ulong *)param_1[4]) {
      uVar9 = *puVar4;
      param_1[2] = (long)puVar4 + 7;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar5 = (uVar9 >> 0x20 | uVar9 << 0x20) >> 8 | uVar5 << 0x38;
      *param_1 = uVar5;
      uVar9 = (ulong)(uVar12 + 0x38);
      goto LAB_00227948;
    }
    func_0x0021f280(param_1);
    uVar13 = *(uint *)((long)param_1 + 0xc);
    uVar9 = (ulong)uVar13;
    uVar5 = *param_1;
    uVar8 = iVar6 * (uint)bVar2 >> 8;
    uVar11 = (uint)(uVar5 >> (uVar9 & 0x3f));
    if (uVar11 <= uVar8) goto LAB_00227a9c;
LAB_00227960:
    uVar13 = (uint)uVar9;
    iVar6 = iVar6 - uVar8;
    uVar5 = uVar5 - ((ulong)(uVar8 + 1) << (uVar9 & 0x3f));
    *param_1 = uVar5;
  }
  else {
LAB_00227948:
    uVar13 = (uint)uVar9;
    uVar8 = iVar6 * (uint)bVar2 >> 8;
    uVar11 = (uint)(uVar5 >> (uVar9 & 0x3f));
    if (uVar8 < uVar11) goto LAB_00227960;
LAB_00227a9c:
    iVar6 = uVar8 + 1;
  }
  uVar12 = (uint)LZCOUNT(iVar6) ^ 0x18;
  uVar13 = uVar13 - uVar12;
  iVar6 = (iVar6 << (ulong)(uVar12 & 0x1f)) + -1;
  *(int *)(param_1 + 1) = iVar6;
  *(uint *)((long)param_1 + 0xc) = uVar13;
  if (uVar11 <= uVar8) {
    return 2;
  }
  bVar2 = *(byte *)(param_2 + 5);
  if ((int)uVar13 < 0) {
    puVar4 = (ulong *)param_1[2];
    if (puVar4 < (ulong *)param_1[4]) {
      uVar9 = *puVar4;
      param_1[2] = (long)puVar4 + 7;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar5 = (uVar9 >> 0x20 | uVar9 << 0x20) >> 8 | uVar5 << 0x38;
      *param_1 = uVar5;
      uVar13 = uVar13 + 0x38;
      goto LAB_00227af0;
    }
    func_0x0021f280(param_1);
    uVar13 = *(uint *)((long)param_1 + 0xc);
    uVar9 = (ulong)uVar13;
    uVar5 = *param_1;
    uVar8 = iVar6 * (uint)bVar2 >> 8;
    if ((uint)(uVar5 >> (uVar9 & 0x3f)) <= uVar8) goto LAB_00227cd8;
  }
  else {
LAB_00227af0:
    uVar9 = (ulong)uVar13;
    uVar8 = iVar6 * (uint)bVar2 >> 8;
    if ((uint)(uVar5 >> (uVar9 & 0x3f)) <= uVar8) {
LAB_00227cd8:
      iVar6 = uVar8 + 1;
      iVar14 = 3;
      goto LAB_00227f28;
    }
  }
  uVar13 = (uint)uVar9;
  iVar6 = iVar6 - uVar8;
  *param_1 = uVar5 - ((ulong)(uVar8 + 1) << (uVar9 & 0x3f));
  iVar14 = 4;
LAB_00227f28:
  uVar8 = (uint)LZCOUNT(iVar6) ^ 0x18;
  *(int *)(param_1 + 1) = (iVar6 << (ulong)(uVar8 & 0x1f)) + -1;
  *(uint *)((long)param_1 + 0xc) = uVar13 - uVar8;
  return iVar14;
}



/* Entry: 00227fd0; end: 00227ffb;  */

bool FUN_00227fd0(char *param_1,ulong param_2)

{
  if ((4 < param_2) && (*param_1 == '/')) {
    return (byte)param_1[4] < 0x20;
  }
  return false;
}



/* Entry: 00227ffc; end: 00228103;  */

undefined8 FUN_00227ffc(char *param_1,ulong param_2,int *param_3,int *param_4,undefined4 *param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_68 [36];
  int iStack_44;
  
  if ((param_1 != (char *)0x0) && (4 < param_2)) {
    if ((*param_1 != '/') || (0x1f < (byte)param_1[4])) {
      return 0;
    }
    FUN_0021f558(auStack_68,param_1,param_2);
    puVar1 = auStack_68;
    func_0x0021f6f4(puVar1,8);
    if ((int)puVar1 == 0x2f) {
      puVar1 = auStack_68;
      func_0x0021f6f4(puVar1,0xe);
      puVar2 = auStack_68;
      func_0x0021f6f4(puVar2,0xe);
      puVar3 = auStack_68;
      func_0x0021f6f4(puVar3,1);
      puVar4 = auStack_68;
      func_0x0021f6f4(puVar4,3);
      if ((int)puVar4 == 0 && iStack_44 == 0) {
        if (param_3 != (int *)0x0) {
          *param_3 = (int)puVar1 + 1;
        }
        if (param_4 != (int *)0x0) {
          *param_4 = (int)puVar2 + 1;
        }
        if (param_5 != (undefined4 *)0x0) {
          *param_5 = (int)puVar3;
        }
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 00228104; end: 00228143;  */

void FUN_00228104(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
  func_0x0024b500(1,0x170);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0x200000000;
    func_0x0022e690();
  }
  return;
}



/* Entry: 00228144; end: 00228203;  */

void FUN_00228144(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (param_1 != 0) {
    func_0x0024b520(*(undefined8 *)(param_1 + 0xd0));
    func_0x0024b520(*(undefined8 *)(param_1 + 0xe8));
    func_0x0021f85c(*(undefined8 *)(param_1 + 0xe0));
    func_0x0021f800(param_1 + 0xa0);
    func_0x0021f800(param_1 + 0xb0);
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    func_0x0024b520(*(undefined8 *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = 0;
    if (0 < *(int *)(param_1 + 0xf0)) {
      lVar1 = 0;
      puVar2 = (undefined8 *)(param_1 + 0x108);
      do {
        func_0x0024b520(*puVar2);
        *puVar2 = 0;
        lVar1 = lVar1 + 1;
        puVar2 = puVar2 + 3;
      } while (lVar1 < *(int *)(param_1 + 0xf0));
    }
    *(undefined4 *)(param_1 + 0xf0) = 0;
    *(undefined4 *)(param_1 + 0x158) = 0;
    func_0x0024b520(*(undefined8 *)(param_1 + 0x160));
    *(undefined8 *)(param_1 + 0x160) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}



/* Entry: 00228204; end: 0022822f;  */

void FUN_00228204(long param_1)

{
  if (param_1 != 0) {
    FUN_00228144();
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_0099a260)(param_1);
    return;
  }
  return;
}



/* Entry: 00228230; end: 002283d7;  */

undefined8 FUN_00228230(int *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  
  puVar3 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
  func_0x0024b500(1,0x170);
  uVar5 = 0;
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 0x200000000;
    func_0x0022e690();
    iVar2 = *param_1;
    iVar1 = param_1[1];
    *(int *)((long)puVar3 + 0x84) = iVar2;
    *(int *)(puVar3 + 0x11) = iVar1;
    param_1[8] = iVar2;
    puVar3[1] = param_1 + 8;
    *(int **)(param_1 + 0x16) = param_1;
    param_1[9] = iVar1;
    *(undefined4 *)puVar3 = 0;
    FUN_0021f558(puVar3 + 5,param_2,param_3);
    iVar2 = *param_1;
    FUN_002283d8(iVar2,param_1[1],1,puVar3,0);
    if (iVar2 == 0) {
LAB_00228340:
      FUN_00228144(puVar3);
      func_0x0024b520(puVar3);
      return 0;
    }
    if (((*(int *)(puVar3 + 0x1e) == 1) && (*(int *)(puVar3 + 0x1f) == 3)) &&
       (*(int *)(puVar3 + 0x13) < 1)) {
      uVar7 = (ulong)*(uint *)(puVar3 + 0x1b);
      if (0 < (int)*(uint *)(puVar3 + 0x1b)) {
        puVar6 = (undefined8 *)(puVar3[0x1c] + 0x18);
        do {
          if (((*(char *)puVar6[-2] != '\0') || (*(char *)puVar6[-1] != '\0')) ||
             (*(char *)*puVar6 != '\0')) goto LAB_002282e0;
          puVar6 = puVar6 + 0x47;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      param_1[0x30] = 1;
      lVar4 = (long)*(int *)(puVar3 + 0x11) * (long)*(int *)((long)puVar3 + 0x84);
      puVar3[4] = 0;
      func_0x0024b4dc(lVar4,1);
      puVar3[3] = lVar4;
      if (lVar4 == 0) {
        *(undefined4 *)puVar3 = 1;
        goto LAB_00228340;
      }
    }
    else {
LAB_002282e0:
      param_1[0x30] = 0;
      iVar2 = *(int *)((long)puVar3 + 0x84);
      iVar1 = *(int *)(puVar3 + 0x11);
      uVar7 = (long)*param_1 & 0xffff;
      lVar4 = uVar7 + (long)*param_1 * 0x10 + (long)iVar1 * (long)iVar2;
      func_0x0024b4dc(lVar4,4);
      puVar3[3] = lVar4;
      if (lVar4 == 0) {
        *(undefined4 *)puVar3 = 1;
        puVar3[4] = 0;
        goto LAB_00228340;
      }
      puVar3[4] = lVar4 + (long)iVar1 * (long)iVar2 * 4 + uVar7 * 4;
    }
    *(undefined8 **)(param_1 + 6) = puVar3;
    uVar5 = 1;
  }
  return uVar5;
}



/* Entry: 002283d8; end: 002290eb;  */

/* WARNING: Possible PIC construction at 0x002290c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x002290c4) */
/* WARNING: Removing unreachable block (ram,0x002290e0) */
/* WARNING: Removing unreachable block (ram,0x002290c8) */
/* WARNING: Removing unreachable block (ram,0x002290d4) */
/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_002283d8(uint param_1,uint param_2,int param_3,undefined4 *param_4,undefined8 *param_5)

{
  undefined1 uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  byte bVar6;
  ushort uVar7;
  uint uVar8;
  undefined8 uVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  undefined4 *puVar13;
  byte *pbVar14;
  undefined1 *puVar15;
  long lVar16;
  dword *pdVar17;
  dword *pdVar18;
  undefined1 (*pauVar19) [16];
  undefined1 (*pauVar20) [16];
  code *pcVar21;
  int iVar22;
  int iVar23;
  uint *puVar24;
  int *piVar25;
  ulong uVar26;
  ulong uVar27;
  undefined1 *puVar28;
  int iVar29;
  int iVar30;
  undefined4 *puVar31;
  char *pcVar32;
  ulong uVar33;
  int *piVar34;
  uint uVar35;
  ushort *puVar36;
  long lVar37;
  undefined8 *puVar38;
  uint uVar39;
  ulong uVar40;
  ulong uVar41;
  ulong uVar42;
  undefined8 *puVar43;
  char *pcVar44;
  undefined4 *puVar45;
  int iVar46;
  ulong uVar47;
  int iVar48;
  undefined4 *puVar49;
  uint uVar50;
  ulong uVar51;
  uint uVar52;
  uint uVar53;
  undefined8 uVar54;
  long lVar55;
  uint *puVar56;
  uint *puVar57;
  dword *pdVar58;
  long lVar59;
  long lVar60;
  int iVar61;
  long *plVar62;
  byte *pbVar63;
  byte *pbVar64;
  uint uVar65;
  dword *pdVar66;
  byte *pbVar67;
  uint *puVar68;
  uint *puVar69;
  int iVar70;
  uint uVar71;
  ulong uVar72;
  uint uVar73;
  uint uVar74;
  int *piVar75;
  undefined4 uVar76;
  int iVar77;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  long *plStack_630;
  uint *puStack_628;
  uint uStack_614;
  byte *pbStack_568;
  ulong uStack_530;
  dword adStack_510 [142];
  uint *puStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined8 uStack_28c;
  byte abStack_280 [2];
  ushort auStack_27e [255];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_00999f88;
  iVar30 = (int)param_4;
  iVar61 = 0;
  if (param_3 == 0) {
LAB_00228684:
    iVar23 = iVar30 + 0x28;
    pdVar66 = (dword *)((long)&MACH_HEADER.magic + 1);
    func_0x0021f6f4();
    if (iVar23 != 0) {
      pdVar17 = param_4 + 10;
      pdVar66 = &MACH_HEADER.cputype;
      func_0x0021f6f4();
      if ((int)pdVar17 - 1U < 0xb) {
        pbVar63 = (byte *)(ulong)*(ushort *)(&UNK_007eeaac + ((ulong)pdVar17 & 0xffffffff) * 2);
        goto joined_r0x002286c4;
      }
LAB_00228f70:
      uVar76 = 3;
      pdVar17 = pdVar66;
      goto LAB_00228f74;
    }
    pdVar17 = (dword *)0x0;
    pbVar63 = (byte *)((long)&section_00000b50.reloff + 2);
joined_r0x002286c4:
    if (iVar61 == 0) {
      puStack_2d8 = (uint *)0x0;
LAB_00228828:
      pbVar64 = (byte *)0x0;
      uVar27 = 0;
      uVar26 = 1;
      uStack_530 = 1;
LAB_0022882c:
      if (param_4[0x13] == 0) {
        iVar23 = 1 << (ulong)((uint)pdVar17 & 0x1f);
        uVar50 = iVar23 + 0x118;
        if ((int)(uint)pdVar17 < 1) {
          uVar50 = 0x118;
        }
        piVar75 = (int *)(ulong)uVar50;
        func_0x0024b500(piVar75,4);
        iVar70 = (int)uStack_530;
        pbVar63 = (byte *)((long)(int)pbVar63 * (long)iVar70);
        pdVar66 = &MACH_HEADER.cputype;
        func_0x0024b4dc();
        func_0x0021f850();
        if (((uStack_530 == 0) || (piVar75 == (int *)0x0)) || (pbVar63 == (byte *)0x0)) {
LAB_00228f34:
          uVar26 = 1;
          *param_4 = 1;
        }
        else {
          uVar42 = 0;
          pdVar58 = pdVar17;
          pbStack_568 = pbVar63;
          do {
            uVar72 = uVar42;
            if ((uVar27 == 0) ||
               (uVar50 = *(uint *)(uVar27 + uVar42 * 4), uVar72 = (ulong)uVar50,
               uVar50 != 0xffffffff)) {
              bVar11 = false;
              pdVar18 = (dword *)(uStack_530 + (long)(int)uVar72 * 0x238);
              pbVar67 = pbStack_568;
            }
            else {
              pdVar18 = adStack_510;
              bVar11 = true;
              pbVar67 = pbVar64;
            }
            uVar72 = 0;
            iVar46 = 0;
            iVar48 = 0;
            uVar50 = 1;
            do {
              bVar12 = false;
              bVar10 = true;
              if (uVar72 == 0) {
                bVar12 = (int)pdVar58 < 0;
                bVar10 = (int)pdVar58 == 0;
              }
              uVar7 = *(ushort *)(&UNK_007eeac4 + uVar72 * 2);
              *(byte **)(pdVar18 + uVar72 * 2) = pbVar67;
              iVar77 = iVar23;
              if (bVar10 || bVar12) {
                iVar77 = 0;
              }
              uVar73 = iVar77 + (uint)uVar7;
              uVar47 = (ulong)uVar73;
              puVar13 = param_4 + 10;
              func_0x0021f6f4(puVar13,1);
              _bzero(piVar75,uVar47 << 2);
              if ((int)puVar13 == 0) {
                uStack_28c = 0;
                uStack_290 = 0;
                uStack_2a8 = 0;
                uStack_2b0 = 0;
                uStack_298 = 0;
                uStack_294 = 0;
                uStack_2a0 = 0;
                uStack_2c8 = 0;
                uStack_2d0 = 0;
                uStack_2b8 = 0;
                uStack_2c0 = 0;
                iVar77 = iVar30 + 0x28;
                pdVar66 = &MACH_HEADER.cputype;
                func_0x0021f6f4();
                uVar74 = iVar77 + 4;
                uVar51 = (ulong)uVar74;
                if ((int)uVar74 < 0x14) {
                  if (0 < (int)uVar74) {
                    pbVar14 = &UNK_007eeace;
                    do {
                      puVar13 = param_4 + 10;
                      func_0x0021f6f4(puVar13,3);
                      *(int *)((long)&uStack_2d0 + (ulong)*pbVar14 * 4) = (int)puVar13;
                      uVar51 = uVar51 - 1;
                      pbVar14 = pbVar14 + 1;
                    } while (uVar51 != 0);
                  }
                  pbVar14 = abStack_280;
                  pdVar66 = (dword *)((long)&MACH_HEADER.cputype + 3);
                  FUN_0021f868(pbVar14,7,&uStack_2d0,0x13);
                  if ((int)pbVar14 != 0) {
                    iVar77 = iVar30 + 0x28;
                    pdVar66 = (dword *)((long)&MACH_HEADER.magic + 1);
                    func_0x0021f6f4();
                    uVar51 = uVar47;
                    if (iVar77 != 0) {
                      puVar13 = param_4 + 10;
                      func_0x0021f6f4(puVar13,3);
                      iVar77 = iVar30 + 0x28;
                      pdVar66 = (dword *)(ulong)((int)puVar13 * 2 + 2);
                      func_0x0021f6f4();
                      uVar51 = (ulong)(iVar77 + 2U);
                      if ((int)uVar73 < (int)(iVar77 + 2U)) goto LAB_00228ec4;
                    }
                    if (uVar73 != 0) {
                      uVar33 = 0;
                      uVar74 = 8;
                      do {
                        if ((int)uVar51 == 0) break;
                        uVar65 = param_4[0x12];
                        if (0x1f < (int)uVar65) {
                          func_0x0021f610(param_4 + 10);
                          uVar65 = param_4[0x12];
                        }
                        lVar37 = (*(ulong *)(param_4 + 10) >> ((ulong)uVar65 & 0x3f) & 0x7f) * 4;
                        param_4[0x12] = uVar65 + abStack_280[lVar37];
                        uVar7 = *(ushort *)(abStack_280 + lVar37 + 2);
                        iVar77 = (int)uVar33;
                        if (uVar7 < 0x10) {
                          piVar75[iVar77] = (uint)uVar7;
                          uVar33 = (ulong)(iVar77 + 1);
                          if (uVar7 != 0) {
                            uVar74 = (uint)uVar7;
                          }
                        }
                        else {
                          uVar65 = uVar7 - 0x10;
                          pdVar66 = (dword *)(ulong)(byte)(&UNK_007eeae1)[uVar65];
                          bVar6 = (&UNK_007eeae4)[uVar65];
                          iVar22 = iVar30 + 0x28;
                          func_0x0021f6f4();
                          iVar29 = iVar22 + (uint)bVar6;
                          if ((int)uVar73 < iVar29 + iVar77) goto LAB_00228ec4;
                          uVar65 = uVar74;
                          if (uVar7 != 0x10) {
                            uVar65 = 0;
                          }
                          if (0 < iVar29) {
                            uVar41 = (ulong)iVar77;
                            uVar71 = (iVar22 + (uint)bVar6) - 1;
                            if (6 < uVar71) {
                              uVar2 = (ulong)uVar71 + 1;
                              uVar40 = uVar2 & 0x1fffffff8;
                              uVar33 = uVar40 + uVar41;
                              iVar29 = iVar29 - (int)uVar40;
                              puVar24 = (uint *)(piVar75 + uVar41 + 4);
                              uVar41 = uVar40;
                              do {
                                puVar24[-2] = uVar65;
                                puVar24[-1] = uVar65;
                                puVar24[-4] = uVar65;
                                puVar24[-3] = uVar65;
                                puVar24[2] = uVar65;
                                puVar24[3] = uVar65;
                                *puVar24 = uVar65;
                                puVar24[1] = uVar65;
                                puVar24 = puVar24 + 8;
                                uVar41 = uVar41 - 8;
                              } while (uVar41 != 0);
                              uVar41 = uVar33;
                              if (uVar2 == uVar40) goto LAB_00228ac0;
                            }
                            uVar71 = iVar29 + 1;
                            do {
                              uVar33 = uVar41 + 1;
                              piVar75[uVar41] = uVar65;
                              uVar71 = uVar71 - 1;
                              uVar41 = uVar33;
                            } while (1 < uVar71);
                          }
                        }
LAB_00228ac0:
                        uVar51 = (ulong)((int)uVar51 - 1);
                      } while ((int)uVar33 < (int)uVar73);
                    }
                    pdVar58 = (dword *)((ulong)pdVar17 & 0xffffffff);
                    goto LAB_00228be0;
                  }
LAB_00228ec4:
                  pdVar58 = (dword *)((ulong)pdVar17 & 0xffffffff);
                }
LAB_00228ed0:
                *param_4 = 3;
                uVar26 = 1;
                pdVar17 = pdVar58;
                goto LAB_00228f3c;
              }
              puVar13 = param_4 + 10;
              func_0x0021f6f4(puVar13,1);
              puVar31 = param_4 + 10;
              func_0x0021f6f4(puVar31,1);
              uVar74 = 8;
              if ((int)puVar31 == 0) {
                uVar74 = 1;
              }
              pdVar66 = (dword *)(ulong)uVar74;
              iVar77 = iVar30 + 0x28;
              func_0x0021f6f4();
              piVar75[iVar77] = 1;
              if ((int)puVar13 == 1) {
                iVar77 = iVar30 + 0x28;
                pdVar66 = &MACH_HEADER.cpusubtype;
                func_0x0021f6f4();
                piVar75[iVar77] = 1;
              }
LAB_00228be0:
              if (param_4[0x13] != 0) goto LAB_00228ed0;
              pdVar66 = &MACH_HEADER.cpusubtype;
              pbVar14 = pbVar67;
              FUN_0021f868(pbVar67,8,piVar75,uVar47);
              if ((int)pbVar14 == 0) goto LAB_00228ed0;
              if (uVar50 == 0) {
                uVar50 = 0;
                uVar74 = (uint)*pbVar67;
              }
              else {
                uVar74 = (uint)*pbVar67;
                if ((uVar72 & 3) == 0) {
                  uVar50 = 1;
                }
                else {
                  uVar50 = (uint)(uVar74 == 0);
                }
              }
              pbVar67 = pbVar67 + (long)(int)pbVar14 * 4;
              iVar48 = iVar48 + uVar74;
              if (uVar72 == 4) break;
              iVar77 = *piVar75;
              if (1 < uVar73) {
                if (uVar73 < 9) {
                  uVar33 = 1;
                }
                else {
                  uVar41 = uVar47 - 1 & 0xfffffffffffffff8;
                  uVar33 = uVar41 | 1;
                  auVar79._0_8_ = CONCAT44(iVar77,iVar77);
                  auVar79._8_4_ = iVar77;
                  auVar79._12_4_ = iVar77;
                  auVar81._8_8_ = auVar79._8_8_;
                  auVar81._0_8_ = auVar79._0_8_;
                  pauVar19 = (undefined1 (*) [16])(piVar75 + 5);
                  uVar51 = uVar41;
                  do {
                    auVar79 = NEON_smax(pauVar19[-1],auVar79,4);
                    auVar81 = NEON_smax(*pauVar19,auVar81,4);
                    pauVar19 = pauVar19 + 2;
                    uVar51 = uVar51 - 8;
                  } while (uVar51 != 0);
                  auVar79 = NEON_smax(auVar79,auVar81,4);
                  iVar77 = NEON_smaxv(auVar79,4);
                  if (uVar47 - 1 == uVar41) goto LAB_0022893c;
                }
                lVar37 = uVar47 - uVar33;
                piVar34 = piVar75 + uVar33;
                iVar22 = iVar77;
                do {
                  iVar77 = *piVar34;
                  if (*piVar34 <= iVar22) {
                    iVar77 = iVar22;
                  }
                  lVar37 = lVar37 + -1;
                  piVar34 = piVar34 + 1;
                  iVar22 = iVar77;
                } while (lVar37 != 0);
              }
LAB_0022893c:
              iVar46 = iVar77 + iVar46;
              uVar72 = uVar72 + 1;
            } while (uVar72 != 5);
            if (!bVar11) {
              pbStack_568 = pbVar67;
            }
            pdVar18[10] = uVar50;
            pdVar18[0xc] = 0;
            if (uVar50 == 0) {
LAB_00228d74:
              pdVar18[0xd] = (uint)(iVar46 < 6);
              if (iVar46 < 6) {
                lVar37 = 0;
                puVar24 = pdVar18 + 0xf;
                puVar36 = (ushort *)(*(long *)pdVar18 + 2);
                do {
                  while( true ) {
                    bVar6 = (byte)puVar36[-1];
                    uVar50 = (uint)*puVar36;
                    if (uVar50 < 0x100) break;
                    puVar24[-1] = bVar6 | 0x100;
                    *puVar24 = uVar50;
                    puVar36 = puVar36 + 2;
                    lVar37 = lVar37 + 1;
                    puVar24 = puVar24 + 2;
                    if (lVar37 == 0x40) goto LAB_00228e44;
                  }
                  puVar24[-1] = (uint)bVar6;
                  *puVar24 = uVar50 << 8;
                  uVar74 = (uint)lVar37 >> (ulong)(bVar6 & 0x1f);
                  lVar59 = *(long *)(pdVar18 + 4);
                  uVar73 = *(uint *)(*(long *)(pdVar18 + 2) + (ulong)uVar74 * 4);
                  uVar65 = uVar73 & 0xffff0000 | uVar50 << 8;
                  uVar50 = (uint)bVar6 + (uVar73 & 0xff);
                  puVar24[-1] = uVar50;
                  *puVar24 = uVar65;
                  uVar74 = uVar74 >> (ulong)(uVar73 & 0x1f);
                  uVar73 = *(uint *)(lVar59 + (ulong)uVar74 * 4);
                  uVar50 = uVar50 + (uVar73 & 0xff);
                  uVar65 = uVar65 | uVar73 >> 0x10;
                  puVar24[-1] = uVar50;
                  *puVar24 = uVar65;
                  uVar73 = *(uint *)(*(long *)(pdVar18 + 6) +
                                    (ulong)(uVar74 >> (ulong)(uVar73 & 0x1f)) * 4);
                  puVar24[-1] = uVar50 + (uVar73 & 0xff);
                  *puVar24 = uVar65 | (uVar73 >> 0x10) << 0x18;
                  puVar36 = puVar36 + 2;
                  lVar37 = lVar37 + 1;
                  puVar24 = puVar24 + 2;
                } while (lVar37 != 0x40);
              }
            }
            else {
              uVar50 = CONCAT22(*(undefined2 *)(*(long *)(pdVar18 + 2) + 2),
                                *(undefined2 *)(*(long *)(pdVar18 + 4) + 2)) |
                       (uint)*(ushort *)(*(long *)(pdVar18 + 6) + 2) << 0x18;
              pdVar18[0xb] = uVar50;
              if ((iVar48 != 0) || (0xff < *(ushort *)(*(long *)pdVar18 + 2))) goto LAB_00228d74;
              pdVar18[0xb] = uVar50 | (uint)*(ushort *)(*(long *)pdVar18 + 2) << 8;
              *(undefined8 *)(pdVar18 + 0xc) = 1;
            }
LAB_00228e44:
            uVar42 = uVar42 + 1;
          } while (uVar42 != uVar26);
          uVar26 = 0;
          *(uint **)(param_4 + 0x34) = puStack_2d8;
          param_4[0x36] = iVar70;
          *(ulong *)(param_4 + 0x38) = uStack_530;
          *(byte **)(param_4 + 0x3a) = pbVar63;
          pdVar66 = pdVar18;
          pdVar17 = pdVar58;
        }
      }
      else {
        piVar75 = (int *)0x0;
        pbVar63 = (byte *)0x0;
        uStack_530 = 0;
        uVar26 = 1;
      }
    }
    else {
      puStack_2d8 = (uint *)0x0;
      uVar26 = 1;
      iVar23 = iVar30 + 0x28;
      pdVar66 = (dword *)((long)&MACH_HEADER.magic + 1);
      func_0x0021f6f4();
      if (iVar23 == 0) goto LAB_00228828;
      puVar13 = param_4 + 10;
      func_0x0021f6f4(puVar13,3);
      uVar50 = (int)puVar13 + 2;
      iVar23 = 1 << (ulong)(uVar50 & 0x1f);
      uVar73 = (param_1 + iVar23) - 1 >> (ulong)(uVar50 & 0x1f);
      uVar74 = (param_2 + iVar23) - 1 >> (ulong)(uVar50 & 0x1f);
      pdVar66 = (dword *)(ulong)uVar74;
      uVar65 = uVar73;
      FUN_002283d8(uVar73,pdVar66,0,param_4,&puStack_2d8);
      if (uVar65 != 0) {
        uVar73 = uVar73 * uVar74;
        uVar42 = (ulong)uVar73;
        param_4[0x31] = uVar50;
        puVar24 = puStack_2d8;
        uVar27 = uVar42;
        if ((int)uVar73 < 1) {
          if ((int)(param_1 * param_2) < 1) goto LAB_00228780;
LAB_00228eb4:
          uVar27 = 0;
          pbVar64 = (byte *)0x0;
          uStack_530 = uVar26;
          goto LAB_0022882c;
        }
        do {
          uVar7 = *(ushort *)((long)puVar24 + 1);
          *puVar24 = (uint)uVar7;
          uVar50 = (uint)uVar26;
          if (uVar50 <= uVar7) {
            uVar50 = uVar7 + 1;
          }
          uVar26 = (ulong)uVar50;
          uVar27 = uVar27 - 1;
          puVar24 = puVar24 + 1;
        } while (uVar27 != 0);
        if (uVar50 < 0x3e9 && (int)uVar50 <= (int)(param_1 * param_2)) goto LAB_00228eb4;
LAB_00228780:
        pdVar66 = &MACH_HEADER.cputype;
        uVar27 = uVar26;
        func_0x0024b4dc();
        if (uVar27 == 0) {
          piVar75 = (int *)0x0;
          pbVar64 = (byte *)0x0;
          pbVar63 = (byte *)0x0;
          uStack_530 = 0;
          uVar26 = 1;
          *param_4 = 1;
          goto LAB_00228f3c;
        }
        _memset(uVar27,0xff,uVar26 << 2);
        if ((int)uVar73 < 1) {
          uStack_530 = 0;
        }
        else {
          uStack_530 = 0;
          puVar24 = puStack_2d8;
          do {
            uVar50 = *(uint *)(uVar27 + (ulong)*puVar24 * 4);
            if (uVar50 == 0xffffffff) {
              uVar50 = (uint)uStack_530;
              *(uint *)(uVar27 + (ulong)*puVar24 * 4) = uVar50;
              uStack_530 = (ulong)(uVar50 + 1);
            }
            *puVar24 = uVar50;
            uVar42 = uVar42 - 1;
            puVar24 = puVar24 + 1;
          } while (uVar42 != 0);
        }
        pdVar66 = &MACH_HEADER.cputype;
        pbVar64 = pbVar63;
        func_0x0024b4dc();
        if (pbVar64 != (byte *)0x0) goto LAB_0022882c;
        piVar75 = (int *)0x0;
        pbVar63 = (byte *)0x0;
        uStack_530 = 0;
        goto LAB_00228f34;
      }
      piVar75 = (int *)0x0;
      pbVar64 = (byte *)0x0;
      uStack_530 = 0;
      pbVar63 = (byte *)0x0;
      uVar27 = 0;
    }
LAB_00228f3c:
    func_0x0024b520(piVar75);
    func_0x0024b520(pbVar64);
    func_0x0024b520(uVar27);
    if ((int)uVar26 != 0) {
      func_0x0024b520(puStack_2d8);
      func_0x0024b520(pbVar63);
      func_0x0021f85c(uStack_530);
      goto LAB_00228f70;
    }
    if ((int)(uint)pdVar17 < 1) {
      param_4[0x26] = 0;
    }
    else {
      uVar76 = 1;
      param_4[0x26] = 1 << (ulong)((uint)pdVar17 & 0x1f);
      iVar30 = iVar30 + 0xa0;
      func_0x0021f7b4();
      pdVar66 = pdVar17;
      if (iVar30 == 0) goto LAB_00228f74;
    }
    uVar73 = param_4[0x31];
    param_4[0x21] = param_1;
    param_4[0x22] = param_2;
    param_4[0x32] = (param_1 + (1 << (ulong)(uVar73 & 0x1f))) - 1 >> (ulong)(uVar73 & 0x1f);
    uVar50 = 0xffffffff;
    if (uVar73 != 0) {
      uVar50 = ~(-1 << (ulong)(uVar73 & 0x1f));
    }
    param_4[0x30] = uVar50;
    if (iVar61 == 0) {
      lVar37 = (long)(int)param_1 * (long)(int)param_2;
      pdVar17 = &MACH_HEADER.cputype;
      func_0x0024b4dc();
      if (lVar37 != 0) {
        pcVar21 = (code *)0x0;
        uVar50 = param_2;
        goto SUB_00229b80;
      }
      uVar76 = 1;
      goto LAB_00228f74;
    }
    puVar13 = (undefined4 *)0x0;
    param_4[1] = 1;
    if (param_5 != (undefined8 *)0x0) {
      *param_5 = 0;
    }
    param_4[0x24] = 0;
    uVar54 = 1;
    if (iVar61 == 0) goto LAB_00228f84;
  }
  else {
    do {
      while( true ) {
        puVar13 = param_4 + 10;
        func_0x0021f6f4(puVar13,1);
        iVar61 = param_3;
        if ((int)puVar13 == 0) goto LAB_00228684;
        iVar61 = param_4[0x3c];
        uVar50 = iVar30 + 0x28;
        pdVar66 = (dword *)((long)&MACH_HEADER.magic + 2);
        func_0x0021f6f4();
        uVar73 = 1 << (ulong)(uVar50 & 0x1f);
        if ((param_4[0x56] & uVar73) != 0) goto LAB_00228f70;
        puVar57 = param_4 + (long)iVar61 * 6 + 0x3e;
        param_4[0x56] = param_4[0x56] | uVar73;
        *puVar57 = uVar50;
        puVar57[2] = param_1;
        puVar57[3] = param_2;
        puVar24 = puVar57 + 4;
        puVar24[0] = 0;
        puVar24[1] = 0;
        param_4[0x3c] = param_4[0x3c] + 1;
        if (uVar50 < 2) break;
        if (uVar50 == 3) {
          puVar13 = param_4 + 10;
          func_0x0021f6f4(puVar13,8);
          iVar61 = (int)puVar13 + 1;
          uVar50 = 2;
          if (iVar61 < 3) {
            uVar50 = 3;
          }
          uVar73 = 1;
          if (iVar61 < 5) {
            uVar73 = uVar50;
          }
          uVar50 = 0;
          if (iVar61 < 0x11) {
            uVar50 = uVar73;
          }
          uVar73 = puVar57[2];
          puVar57[1] = uVar50;
          pdVar66 = (dword *)((long)&MACH_HEADER.magic + 1);
          iVar23 = iVar61;
          FUN_002283d8(iVar61,1,0,param_4,puVar24);
          if (iVar23 == 0) goto LAB_00228f70;
          uVar26 = 8L >> ((ulong)puVar57[1] & 0x3f);
          puVar13 = (undefined4 *)(1L << (uVar26 & 0x3f));
          pdVar66 = &MACH_HEADER.cputype;
          func_0x0024b4dc();
          if (puVar13 == (undefined4 *)0x0) goto LAB_00228f70;
          puVar31 = *(undefined4 **)puVar24;
          *puVar13 = *puVar31;
          if (iVar61 < 2) {
            uVar74 = 4;
          }
          else {
            uVar74 = iVar61 * 4;
            if ((int)uVar74 < 6) {
              uVar74 = 5;
            }
            uVar27 = (ulong)uVar74;
            uVar42 = uVar27 - 4;
            if ((uVar42 < 4) ||
               ((puVar13 < (undefined4 *)((long)puVar31 + uVar27) &&
                (puVar31 + 1 < (undefined4 *)((long)puVar13 + uVar27))))) {
              lVar37 = 4;
            }
            else {
              uVar47 = uVar42 & 0xfffffffffffffffc;
              lVar37 = uVar47 + 4;
              uVar76 = *puVar13;
              puVar45 = puVar31 + 1;
              uVar72 = uVar47;
              auVar79 = ZEXT716(CONCAT16((char)((uint)uVar76 >> 0x18),
                                         (uint6)CONCAT14((char)((uint)uVar76 >> 0x10),
                                                         (uint)CONCAT12((char)((uint)uVar76 >> 8),
                                                                        (ushort)(byte)uVar76))));
              puVar49 = puVar13;
              do {
                puVar49 = puVar49 + 1;
                uVar76 = *puVar45;
                auVar78._0_2_ = auVar79._0_2_ + (ushort)(byte)uVar76;
                auVar78._2_2_ = auVar79._2_2_ + (ushort)(byte)((uint)uVar76 >> 8);
                auVar78._4_2_ = auVar79._4_2_ + (ushort)(byte)((uint)uVar76 >> 0x10);
                auVar78._6_2_ = auVar79._6_2_ + (ushort)(byte)((uint)uVar76 >> 0x18);
                auVar78._8_2_ = auVar79._8_2_;
                auVar78._10_2_ = auVar79._10_2_;
                auVar78._12_2_ = auVar79._12_2_;
                auVar78._14_2_ = auVar79._14_2_;
                *puVar49 = CONCAT13((char)auVar78._6_2_,
                                    CONCAT12((char)auVar78._4_2_,
                                             CONCAT11((char)auVar78._2_2_,(char)auVar78._0_2_)));
                uVar72 = uVar72 - 4;
                puVar45 = puVar45 + 1;
                auVar79 = auVar78;
              } while (uVar72 != 0);
              if (uVar42 == uVar47) goto LAB_002285f4;
            }
            lVar59 = uVar27 - lVar37;
            pcVar32 = (char *)((long)puVar31 + lVar37);
            pcVar44 = (char *)((long)puVar13 + lVar37);
            do {
              *pcVar44 = pcVar44[-4] + *pcVar32;
              lVar59 = lVar59 + -1;
              pcVar32 = pcVar32 + 1;
              pcVar44 = pcVar44 + 1;
            } while (lVar59 != 0);
          }
LAB_002285f4:
          uVar65 = 4 << (ulong)((uint)uVar26 & 0x1f);
          if (uVar74 < uVar65) {
            _bzero((long)puVar13 + (ulong)uVar74,(ulong)(uVar65 + ~uVar74) + 1);
          }
          param_1 = (uVar73 + (1 << (ulong)uVar50)) - 1 >> (ulong)uVar50;
          func_0x0024b520(*(undefined8 *)puVar24);
          *(undefined4 **)puVar24 = puVar13;
        }
      }
      uVar76 = 3;
      puVar13 = param_4 + 10;
      func_0x0021f6f4(puVar13,3);
      uVar50 = (int)puVar13 + 2;
      puVar57[1] = uVar50;
      uVar74 = ~(-1 << (ulong)(uVar50 & 0x1f));
      uVar73 = puVar57[2] + uVar74 >> (ulong)(uVar50 & 0x1f);
      pdVar17 = (dword *)(ulong)(puVar57[3] + uVar74 >> (ulong)(uVar50 & 0x1f));
      FUN_002283d8(uVar73,pdVar17,0,param_4,puVar24);
    } while (uVar73 != 0);
LAB_00228f74:
    *param_4 = uVar76;
    func_0x0024b520(0);
    uVar54 = 0;
    pdVar66 = pdVar17;
LAB_00228f84:
    func_0x0024b520(*(undefined8 *)(param_4 + 0x34));
    func_0x0024b520(*(undefined8 *)(param_4 + 0x3a));
    func_0x0021f85c(*(undefined8 *)(param_4 + 0x38));
    func_0x0021f800(param_4 + 0x28);
    puVar13 = param_4 + 0x2c;
    func_0x0021f800();
    *(undefined8 *)(param_4 + 0x3a) = 0;
    *(undefined8 *)(param_4 + 0x38) = 0;
    *(undefined8 *)(param_4 + 0x36) = 0;
    *(undefined8 *)(param_4 + 0x34) = 0;
    *(undefined8 *)(param_4 + 0x32) = 0;
    *(undefined8 *)(param_4 + 0x30) = 0;
    *(undefined8 *)(param_4 + 0x2e) = 0;
    *(undefined8 *)(param_4 + 0x2c) = 0;
    *(undefined8 *)(param_4 + 0x2a) = 0;
    *(undefined8 *)(param_4 + 0x28) = 0;
    *(undefined8 *)(param_4 + 0x26) = 0;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_80) {
    return uVar54;
  }
  ___stack_chk_fail();
  param_4 = *(undefined4 **)(puVar13 + 6);
  piVar75 = param_4 + 0x23;
  uVar50 = (uint)pdVar66;
  if (*piVar75 < (int)uVar50) {
    if ((puVar13[0x30] == 0) && (FUN_0022c148(), puVar13[0x30] == 0)) {
      lVar37 = *(long *)(param_4 + 6);
      param_1 = param_4[0x21];
      param_2 = param_4[0x22];
      pcVar21 = (code *)0x22a430;
SUB_00229b80:
      iVar30 = param_4[0x24];
      uVar73 = 0;
      if (param_1 != 0) {
        uVar73 = iVar30 / (int)param_1;
      }
      puVar57 = (uint *)(lVar37 + (long)iVar30 * 4);
      puVar24 = (uint *)(lVar37 + (long)(int)(param_2 * param_1) * 4);
      iVar61 = param_4[0x26];
      uStack_614 = 0x1000000;
      if (param_4[0x14] != 0) {
        uStack_614 = uVar73;
      }
      plVar3 = (long *)(param_4 + 0x28);
      plVar5 = plVar3;
      if (iVar61 < 1) {
        plVar5 = (long *)0x0;
      }
      if (iVar30 < (int)(uVar50 * param_1)) {
        uVar74 = iVar30 - uVar73 * param_1;
        uVar65 = param_4[0x31];
        if (uVar65 == 0) {
          iVar30 = 0;
        }
        else {
          iVar30 = *(int *)(*(long *)(param_4 + 0x34) +
                           (long)(((int)uVar74 >> (uVar65 & 0x1f)) +
                                 param_4[0x32] * ((int)uVar73 >> (uVar65 & 0x1f))) * 4);
        }
        uVar65 = param_4[0x30];
        plVar62 = (long *)(*(long *)(param_4 + 0x38) + (long)iVar30 * 0x238);
        puVar68 = puVar57;
        do {
          if ((int)uStack_614 <= (int)uVar73) {
            *(undefined8 *)(param_4 + 0x18) = *(undefined8 *)(param_4 + 0xc);
            *(undefined8 *)(param_4 + 0x16) = *(undefined8 *)(param_4 + 10);
            *(long *)(param_4 + 0x1c) = SUB168(*(undefined1 (*) [16])(param_4 + 0xe),8);
            *(long *)(param_4 + 0x1a) = SUB168(*(undefined1 (*) [16])(param_4 + 0xe),0);
            *(undefined8 *)(param_4 + 0x1e) = *(undefined8 *)(param_4 + 0x12);
            param_4[0x20] = (int)((ulong)((long)puVar57 - lVar37) >> 2);
            if (0 < (int)param_4[0x26]) {
              func_0x0021f830(plVar3,param_4 + 0x2c);
            }
            uStack_614 = uVar73 + 8;
            if ((uVar74 & uVar65) == 0) goto LAB_00229d90;
LAB_00229c98:
            iVar30 = (int)plVar62[6];
joined_r0x00229c9c:
            if (iVar30 == 0) goto LAB_00229dc4;
LAB_00229ca0:
            uVar71 = *(uint *)((long)plVar62 + 0x2c);
            goto LAB_00229ca4;
          }
          if ((uVar74 & uVar65) != 0) goto LAB_00229c98;
LAB_00229d90:
          uVar71 = param_4[0x31];
          if (uVar71 == 0) {
            plVar62 = *(long **)(param_4 + 0x38);
            iVar30 = (int)plVar62[6];
            goto joined_r0x00229c9c;
          }
          plVar62 = (long *)(*(long *)(param_4 + 0x38) +
                            (long)*(int *)(*(long *)(param_4 + 0x34) +
                                          (long)(((int)uVar74 >> (uVar71 & 0x1f)) +
                                                param_4[0x32] * ((int)uVar73 >> (uVar71 & 0x1f))) *
                                          4) * 0x238);
          if ((int)plVar62[6] != 0) goto LAB_00229ca0;
LAB_00229dc4:
          if (0x1f < (int)param_4[0x12]) {
            func_0x0021f610(param_4 + 10);
          }
          if (*(int *)((long)plVar62 + 0x34) == 0) {
            uVar26 = *(ulong *)(param_4 + 10);
            uVar71 = param_4[0x12];
            pbVar63 = (byte *)(*plVar62 + (uVar26 >> ((ulong)uVar71 & 0x3f) & 0xff) * 4);
            bVar6 = *pbVar63;
            if (8 < bVar6) {
              uVar71 = uVar71 + 8;
              pbVar63 = pbVar63 + (ulong)((uint)(uVar26 >> ((ulong)uVar71 & 0x3f)) &
                                         (-1 << (ulong)(bVar6 - 8 & 0x1f) ^ 0xffffffffU)) * 4 +
                                  (ulong)*(ushort *)(pbVar63 + 2) * 4;
              bVar6 = *pbVar63;
            }
            param_4[0x12] = uVar71 + bVar6;
            if (param_4[0x13] != 0) break;
            uVar71 = (uint)*(ushort *)(pbVar63 + 2);
LAB_00229ec8:
            if ((*(long *)(param_4 + 0x10) == *(long *)(param_4 + 0xe)) &&
               (0x40 < (int)param_4[0x12])) break;
            if ((int)uVar71 < 0x100) {
              if ((int)plVar62[5] != 0) {
                uVar71 = *(uint *)((long)plVar62 + 0x2c) | uVar71 << 8;
                goto LAB_00229ca4;
              }
              uVar53 = param_4[0x12];
              pbVar63 = (byte *)(plVar62[1] + (uVar26 >> ((ulong)uVar53 & 0x3f) & 0xff) * 4);
              bVar6 = *pbVar63;
              if (bVar6 < 9) {
                uVar35 = uVar53 + bVar6;
                param_4[0x12] = uVar35;
                uVar53 = (uint)*(ushort *)(pbVar63 + 2);
                if (0x1f < (int)uVar35) goto LAB_0022a294;
LAB_0022a1bc:
                pbVar63 = (byte *)(plVar62[2] + (uVar26 >> ((ulong)uVar35 & 0x3f) & 0xff) * 4);
                uVar39 = (uint)*pbVar63;
                if (8 < *pbVar63) {
LAB_0022a1d4:
                  uVar35 = uVar35 + 8;
                  pbVar63 = pbVar63 + (ulong)((uint)(uVar26 >> ((ulong)uVar35 & 0x3f)) &
                                             (-1 << (ulong)(uVar39 - 8 & 0x1f) ^ 0xffffffffU)) * 4 +
                                      (ulong)*(ushort *)(pbVar63 + 2) * 4;
                  uVar39 = (uint)*pbVar63;
                }
              }
              else {
                uVar7 = *(ushort *)(pbVar63 + 2);
                uVar35 = uVar53 + 8 +
                         (uint)pbVar63[(ulong)((uint)(uVar26 >> ((ulong)(uVar53 + 8) & 0x3f)) &
                                              (-1 << (ulong)(bVar6 - 8 & 0x1f) ^ 0xffffffffU)) * 4 +
                                       (ulong)uVar7 * 4];
                param_4[0x12] = uVar35;
                uVar53 = (uint)*(ushort *)
                                (pbVar63 + (ulong)((uint)(uVar26 >> ((ulong)(uVar53 + 8) & 0x3f)) &
                                                  (-1 << (ulong)(bVar6 - 8 & 0x1f) ^ 0xffffffffU)) *
                                           4 + (ulong)uVar7 * 4 + 2);
                if ((int)uVar35 < 0x20) goto LAB_0022a1bc;
LAB_0022a294:
                func_0x0021f610(param_4 + 10);
                uVar26 = *(ulong *)(param_4 + 10);
                uVar35 = param_4[0x12];
                pbVar63 = (byte *)(plVar62[2] + (uVar26 >> ((ulong)uVar35 & 0x3f) & 0xff) * 4);
                uVar39 = (uint)*pbVar63;
                if (8 < uVar39) goto LAB_0022a1d4;
              }
              uVar35 = uVar35 + uVar39;
              uVar7 = *(ushort *)(pbVar63 + 2);
              pbVar63 = (byte *)(plVar62[3] + (uVar26 >> ((ulong)uVar35 & 0x3f) & 0xff) * 4);
              bVar6 = *pbVar63;
              if (8 < bVar6) {
                uVar35 = uVar35 + 8;
                pbVar63 = pbVar63 + (ulong)((uint)(uVar26 >> ((ulong)uVar35 & 0x3f)) &
                                           (-1 << (ulong)(bVar6 - 8 & 0x1f) ^ 0xffffffffU)) * 4 +
                                    (ulong)*(ushort *)(pbVar63 + 2) * 4;
                bVar6 = *pbVar63;
              }
              param_4[0x12] = uVar35 + bVar6;
              if ((param_4[0x13] == 0) &&
                 ((*(long *)(param_4 + 0x10) != *(long *)(param_4 + 0xe) ||
                  ((int)(uVar35 + bVar6) < 0x41)))) {
                uVar71 = uVar53 << 0x10 | uVar71 << 8 | (uint)uVar7 |
                         (uint)*(ushort *)(pbVar63 + 2) << 0x18;
LAB_00229ca4:
                *puVar57 = uVar71;
                goto LAB_00229ca8;
              }
              break;
            }
            if (0x117 < uVar71) {
              if ((int)uVar71 < iVar61 + 0x118) {
                lVar59 = *plVar3;
                for (; puVar68 < puVar57; puVar68 = puVar68 + 1) {
                  uVar53 = *puVar68 * 0x1e35a7bd >> ((ulong)*(uint *)(plVar5 + 1) & 0x3f);
                  *(uint *)(lVar59 + (-(ulong)(uVar53 >> 0x1f) & 0xfffffffc00000000 |
                                     (ulong)uVar53 << 2)) = *puVar68;
                }
                uVar71 = *(uint *)(lVar59 + (ulong)uVar71 * 4 + -0x460);
                goto LAB_00229ca4;
              }
              goto LAB_0022a3cc;
            }
            uVar53 = uVar71 - 0x100;
            if (3 < uVar53) {
              iVar30 = (int)param_4 + 0x28;
              func_0x0021f6f4();
              uVar53 = iVar30 + ((uVar71 & 1 | 2) << (ulong)(uVar71 - 0x102 >> 1 & 0x1f));
              uVar26 = *(ulong *)(param_4 + 10);
            }
            uVar71 = param_4[0x12];
            pbVar63 = (byte *)(plVar62[4] + (uVar26 >> ((ulong)uVar71 & 0x3f) & 0xff) * 4);
            bVar6 = *pbVar63;
            if (bVar6 < 9) {
              iVar30 = uVar71 + bVar6;
              param_4[0x12] = iVar30;
              uVar71 = (uint)*(ushort *)(pbVar63 + 2);
              if (0x1f < iVar30) goto LAB_0022a00c;
LAB_00229f90:
              if (uVar71 < 4) goto LAB_00229f98;
LAB_0022a020:
              iVar30 = (int)param_4 + 0x28;
              func_0x0021f6f4();
              uVar71 = iVar30 + ((uVar71 & 1 | 2) << (ulong)(uVar71 - 2 >> 1 & 0x1f));
              if ((int)(uVar71 + 1) < 0x79) goto LAB_0022a050;
LAB_00229fa4:
              uVar71 = uVar71 - 0x77;
            }
            else {
              uVar7 = *(ushort *)(pbVar63 + 2);
              iVar30 = uVar71 + 8 +
                       (uint)pbVar63[(ulong)((uint)(uVar26 >> ((ulong)(uVar71 + 8) & 0x3f)) &
                                            (-1 << (ulong)(bVar6 - 8 & 0x1f) ^ 0xffffffffU)) * 4 +
                                     (ulong)uVar7 * 4];
              param_4[0x12] = iVar30;
              uVar71 = (uint)*(ushort *)
                              (pbVar63 + (ulong)((uint)(uVar26 >> ((ulong)(uVar71 + 8) & 0x3f)) &
                                                (-1 << (ulong)(bVar6 - 8 & 0x1f) ^ 0xffffffffU)) * 4
                                         + (ulong)uVar7 * 4 + 2);
              if (iVar30 < 0x20) goto LAB_00229f90;
LAB_0022a00c:
              func_0x0021f610(param_4 + 10);
              if (3 < uVar71) goto LAB_0022a020;
LAB_00229f98:
              if (0x78 < uVar71 + 1) goto LAB_00229fa4;
LAB_0022a050:
              uVar71 = (((byte)(&UNK_007eeae7)[(int)uVar71] >> 4) * param_1 -
                       ((byte)(&UNK_007eeae7)[(int)uVar71] & 0xf)) + 8;
              if ((int)uVar71 < 2) {
                uVar71 = 1;
              }
            }
            if ((param_4[0x13] != 0) ||
               ((*(long *)(param_4 + 0x10) == *(long *)(param_4 + 0xe) &&
                (0x40 < (int)param_4[0x12])))) break;
            if ((long)puVar57 - lVar37 >> 2 < (long)(ulong)uVar71) goto LAB_0022a3cc;
            iVar30 = uVar53 + 1;
            if ((long)puVar24 - (long)puVar57 >> 2 < (long)iVar30) goto LAB_0022a3cc;
            FUN_0022ae24(puVar57,(ulong)uVar71,iVar30);
            uVar74 = iVar30 + uVar74;
            if ((int)param_1 <= (int)uVar74) {
              uVar71 = uVar73;
              if (pcVar21 == (code *)0x0) {
                do {
                  uVar74 = uVar74 - param_1;
                  uVar73 = uVar73 + 1;
                } while ((int)param_1 <= (int)uVar74);
              }
              else {
                do {
                  uVar73 = uVar71 + 1;
                  if (((int)uVar71 < (int)uVar50) && ((uVar73 & 0xf) == 0)) {
                    (*pcVar21)(param_4,uVar73);
                  }
                  uVar74 = uVar74 - param_1;
                  uVar71 = uVar73;
                } while ((int)param_1 <= (int)uVar74);
              }
            }
            if ((uVar74 & uVar65) != 0) {
              uVar71 = param_4[0x31];
              if (uVar71 == 0) {
                iVar23 = 0;
              }
              else {
                iVar23 = *(int *)(*(long *)(param_4 + 0x34) +
                                 (long)(((int)uVar74 >> (uVar71 & 0x1f)) +
                                       param_4[0x32] * ((int)uVar73 >> (uVar71 & 0x1f))) * 4);
              }
              plVar62 = (long *)(*(long *)(param_4 + 0x38) + (long)iVar23 * 0x238);
            }
            puVar56 = puVar57 + iVar30;
            if ((0 < iVar61) && (puVar68 < puVar56)) {
              lVar59 = *plVar3;
              puVar57 = puVar68;
              do {
                puVar68 = puVar57 + 1;
                uVar71 = *puVar57 * 0x1e35a7bd >> ((ulong)*(uint *)(plVar5 + 1) & 0x3f);
                *(uint *)(lVar59 + (-(ulong)(uVar71 >> 0x1f) & 0xfffffffc00000000 |
                                   (ulong)uVar71 << 2)) = *puVar57;
                puVar57 = puVar68;
              } while (puVar68 < puVar56);
            }
          }
          else {
            uVar26 = *(ulong *)(param_4 + 10);
            uVar27 = uVar26 >> ((ulong)(uint)param_4[0x12] & 0x3f) & 0x3f;
            uVar71 = *(uint *)((long)plVar62 + uVar27 * 8 + 0x3c);
            iVar30 = (int)plVar62[uVar27 + 7] + param_4[0x12];
            if ((int)plVar62[uVar27 + 7] < 0x100) {
              param_4[0x12] = iVar30;
              *puVar57 = uVar71;
              uVar71 = 0;
              iVar30 = param_4[0x13];
            }
            else {
              param_4[0x12] = iVar30 + -0x100;
              iVar30 = param_4[0x13];
            }
            if ((iVar30 != 0) ||
               ((*(long *)(param_4 + 0x10) == *(long *)(param_4 + 0xe) &&
                (0x40 < (int)param_4[0x12])))) break;
            if (uVar71 != 0) goto LAB_00229ec8;
LAB_00229ca8:
            puVar56 = puVar57 + 1;
            uVar74 = uVar74 + 1;
            if ((int)param_1 <= (int)uVar74) {
              uVar71 = uVar73 + 1;
              if (((pcVar21 != (code *)0x0) && ((int)uVar73 < (int)uVar50)) && ((uVar71 & 0xf) == 0)
                 ) {
                (*pcVar21)(param_4,uVar71);
              }
              uVar74 = 0;
              uVar73 = uVar71;
              if ((0 < iVar61) && (puVar68 < puVar56)) {
                lVar59 = *plVar3;
                puVar69 = puVar68;
                do {
                  puVar68 = puVar69 + 1;
                  uVar74 = *puVar69 * 0x1e35a7bd >> ((ulong)*(uint *)(plVar5 + 1) & 0x3f);
                  *(uint *)(lVar59 + (-(ulong)(uVar74 >> 0x1f) & 0xfffffffc00000000 |
                                     (ulong)uVar74 << 2)) = *puVar69;
                  bVar11 = puVar69 < puVar57;
                  puVar69 = puVar68;
                } while (bVar11);
                uVar74 = 0;
              }
            }
          }
          puVar57 = puVar56;
        } while (puVar56 < (uint *)(lVar37 + (long)(int)(uVar50 * param_1) * 4));
      }
      if (param_4[0x13] == 0) {
        if (*(long *)(param_4 + 0x10) == *(long *)(param_4 + 0xe)) {
          uVar1 = 0x40 < (int)param_4[0x12];
          param_4[0x13] = (uint)(byte)uVar1;
          iVar30 = param_4[0x14];
        }
        else {
          uVar1 = false;
          param_4[0x13] = 0;
          iVar30 = param_4[0x14];
        }
      }
      else {
        uVar1 = true;
        param_4[0x13] = 1;
        iVar30 = param_4[0x14];
      }
      if (((iVar30 == 0) || (!(bool)uVar1)) || (puVar24 <= puVar57)) {
        if ((bool)uVar1) {
LAB_0022a3cc:
          *param_4 = 3;
          return 0;
        }
        if (pcVar21 != (code *)0x0) {
          if ((int)uVar50 <= (int)uVar73) {
            uVar73 = uVar50;
          }
          (*pcVar21)(param_4,uVar73);
        }
        *param_4 = 0;
        param_4[0x24] = (int)((ulong)((long)puVar57 - lVar37) >> 2);
      }
      else {
        *param_4 = 5;
        *(undefined8 *)(param_4 + 0xc) = *(undefined8 *)(param_4 + 0x18);
        *(undefined8 *)(param_4 + 10) = *(undefined8 *)(param_4 + 0x16);
        *(undefined8 *)(param_4 + 0x10) = *(undefined8 *)(param_4 + 0x1c);
        *(undefined8 *)(param_4 + 0xe) = *(undefined8 *)(param_4 + 0x1a);
        *(undefined8 *)(param_4 + 0x12) = *(undefined8 *)(param_4 + 0x1e);
        param_4[0x24] = param_4[0x20];
        if (0 < (int)param_4[0x26]) {
          func_0x0021f830(param_4 + 0x2c,plVar3);
        }
      }
      return 1;
    }
    iVar30 = param_4[0x21];
    iVar61 = param_4[0x22];
    uVar73 = param_4[0x24];
    iVar23 = iVar30 * uVar50;
    uVar74 = 0;
    if (iVar30 != 0) {
      uVar74 = (int)uVar73 / iVar30;
    }
    if ((int)uVar73 < iVar23) {
      uVar65 = uVar73 - uVar74 * iVar30;
      uVar71 = param_4[0x31];
      if (uVar71 == 0) {
        iVar46 = 0;
        iVar70 = param_4[0x13];
      }
      else {
        iVar46 = *(int *)(*(long *)(param_4 + 0x34) +
                         (long)(((int)uVar65 >> (uVar71 & 0x1f)) +
                               param_4[0x32] * ((int)uVar74 >> (uVar71 & 0x1f))) * 4);
        iVar70 = param_4[0x13];
      }
      if (iVar70 == 0) {
        puStack_628 = param_4 + 0x13;
        lVar37 = *(long *)(param_4 + 6);
        uVar71 = param_4[0x30];
        plStack_630 = (long *)(*(long *)(param_4 + 0x38) + (long)iVar46 * 0x238);
        pdVar17 = pdVar66;
        do {
          if ((uVar65 & uVar71) == 0) {
            uVar50 = param_4[0x31];
            if (uVar50 == 0) {
              iVar70 = 0;
            }
            else {
              iVar70 = *(int *)(*(long *)(param_4 + 0x34) +
                               (long)(((int)uVar65 >> (uVar50 & 0x1f)) +
                                     param_4[0x32] * ((int)uVar74 >> (uVar50 & 0x1f))) * 4);
            }
            plStack_630 = (long *)(*(long *)(param_4 + 0x38) + (long)iVar70 * 0x238);
            uVar50 = param_4[0x12];
          }
          else {
            uVar50 = param_4[0x12];
          }
          if (0x1f < (int)uVar50) {
            func_0x0021f610(param_4 + 10);
            uVar50 = param_4[0x12];
          }
          uVar26 = *(ulong *)(param_4 + 10);
          pbVar63 = (byte *)(*plStack_630 + (uVar26 >> ((ulong)uVar50 & 0x3f) & 0xff) * 4);
          bVar6 = *pbVar63;
          if (8 < bVar6) {
            uVar50 = uVar50 + 8;
            pbVar63 = pbVar63 + (ulong)((uint)(uVar26 >> ((ulong)uVar50 & 0x3f)) &
                                       (-1 << (ulong)(bVar6 - 8 & 0x1f) ^ 0xffffffffU)) * 4 +
                                (ulong)*(ushort *)(pbVar63 + 2) * 4;
            bVar6 = *pbVar63;
          }
          uVar50 = uVar50 + bVar6;
          param_4[0x12] = uVar50;
          uVar7 = *(ushort *)(pbVar63 + 2);
          uVar53 = uVar74;
          if (0xff < uVar7) {
            uVar35 = (uint)uVar7;
            if (uVar35 < 0x118) {
              uVar39 = uVar35 - 0x100;
              if (3 < uVar39) {
                iVar70 = (int)param_4 + 0x28;
                func_0x0021f6f4();
                uVar39 = iVar70 + ((uVar7 & 1 | 2) << (ulong)(uVar35 - 0x102 >> 1 & 0x1f));
                uVar26 = *(ulong *)(param_4 + 10);
                uVar50 = param_4[0x12];
              }
              pbVar63 = (byte *)(plStack_630[4] + (uVar26 >> ((ulong)uVar50 & 0x3f) & 0xff) * 4);
              bVar6 = *pbVar63;
              if (bVar6 < 9) {
                iVar70 = uVar50 + bVar6;
                param_4[0x12] = iVar70;
                uVar50 = (uint)*(ushort *)(pbVar63 + 2);
                if (0x1f < iVar70) goto LAB_00229428;
LAB_002293f8:
                if (uVar50 < 4) goto LAB_00229400;
LAB_00229438:
                iVar70 = (int)param_4 + 0x28;
                func_0x0021f6f4();
                uVar50 = iVar70 + ((uVar50 & 1 | 2) << (ulong)(uVar50 - 2 >> 1 & 0x1f));
                if ((int)(uVar50 + 1) < 0x79) goto LAB_00229464;
LAB_0022940c:
                uVar50 = uVar50 - 0x77;
              }
              else {
                uVar7 = *(ushort *)(pbVar63 + 2);
                iVar70 = uVar50 + 8 +
                         (uint)pbVar63[(ulong)((uint)(uVar26 >> ((ulong)(uVar50 + 8) & 0x3f)) &
                                              (-1 << (ulong)(bVar6 - 8 & 0x1f) ^ 0xffffffffU)) * 4 +
                                       (ulong)uVar7 * 4];
                param_4[0x12] = iVar70;
                uVar50 = (uint)*(ushort *)
                                (pbVar63 + (ulong)((uint)(uVar26 >> ((ulong)(uVar50 + 8) & 0x3f)) &
                                                  (-1 << (ulong)(bVar6 - 8 & 0x1f) ^ 0xffffffffU)) *
                                           4 + (ulong)uVar7 * 4 + 2);
                if (iVar70 < 0x20) goto LAB_002293f8;
LAB_00229428:
                func_0x0021f610(param_4 + 10);
                if (3 < uVar50) goto LAB_00229438;
LAB_00229400:
                if (0x78 < uVar50 + 1) goto LAB_0022940c;
LAB_00229464:
                uVar50 = ((uint)((byte)(&UNK_007eeae7)[(int)uVar50] >> 4) * iVar30 -
                         ((byte)(&UNK_007eeae7)[(int)uVar50] & 0xf)) + 8;
                if ((int)uVar50 < 2) {
                  uVar50 = 1;
                }
              }
              uVar35 = uVar39 + 1;
              uVar26 = (ulong)uVar35;
              if ((int)uVar50 <= (int)uVar73 && (int)uVar35 <= (int)(iVar61 * iVar30 - uVar73)) {
                uVar27 = (ulong)uVar73;
                puVar28 = (undefined1 *)(lVar37 + uVar27);
                pauVar19 = (undefined1 (*) [16])(puVar28 + -(ulong)uVar50);
                if ((int)uVar35 < 8) {
LAB_00229518:
                  if ((int)uVar50 < (int)uVar35) {
                    uVar42 = 0;
                    lVar59 = -(ulong)uVar50;
                    if ((7 < uVar35) && (0x1f < uVar50)) {
                      if (uVar35 < 0x20) {
                        uVar72 = 0;
                      }
                      else {
                        uVar42 = uVar26 & 0x7fffffe0;
                        puVar38 = (undefined8 *)(lVar37 + 0x10 + uVar27);
                        uVar72 = uVar42;
                        do {
                          auVar79 = *pauVar19;
                          uVar54 = *(undefined8 *)pauVar19[1];
                          uVar9 = *(undefined8 *)(pauVar19[1] + 8);
                          puVar38[-1] = auVar79._8_8_;
                          puVar38[-2] = auVar79._0_8_;
                          puVar38[1] = uVar9;
                          *puVar38 = uVar54;
                          puVar38 = puVar38 + 4;
                          uVar72 = uVar72 - 0x20;
                          pauVar19 = pauVar19 + 2;
                        } while (uVar72 != 0);
                        if (uVar42 == uVar26) goto LAB_002298f0;
                        uVar72 = uVar42;
                        if ((uVar35 & 0x18) == 0) goto LAB_00229788;
                      }
                      uVar42 = uVar26 & 0x7ffffff8;
                      lVar55 = uVar72 - uVar42;
                      puVar38 = (undefined8 *)(lVar37 + uVar72 + uVar27);
                      do {
                        *puVar38 = *(undefined8 *)((long)puVar38 + lVar59);
                        lVar55 = lVar55 + 8;
                        puVar38 = puVar38 + 1;
                      } while (lVar55 != 0);
                      if (uVar42 == uVar26) goto LAB_002298f0;
                    }
LAB_00229788:
                    lVar55 = uVar26 - uVar42;
                    puVar28 = (undefined1 *)(lVar37 + uVar42 + uVar27);
                    do {
                      *puVar28 = puVar28[lVar59];
                      lVar55 = lVar55 + -1;
                      puVar28 = puVar28 + 1;
                    } while (lVar55 != 0);
                  }
                  else {
                    _memcpy(puVar28,pauVar19,(long)(int)uVar35);
                  }
                }
                else {
                  pauVar20 = pauVar19;
                  puVar15 = puVar28;
                  uVar52 = uVar35;
                  if (uVar50 == 4) {
                    uVar50 = *(uint *)*pauVar19;
                    if (((ulong)puVar28 & 3) != 0) goto LAB_00229668;
joined_r0x002297d0:
                    uVar39 = (int)uVar52 >> 2;
                    if ((int)uVar39 < 1) goto LAB_00229714;
LAB_002297d4:
                    uVar26 = (ulong)uVar39;
                    if (uVar39 < 8) {
                      uVar42 = 0;
LAB_0022980c:
                      lVar59 = uVar26 - uVar42;
                      puVar24 = (uint *)(puVar15 + uVar42 * 4);
                      do {
                        *puVar24 = uVar50;
                        lVar59 = lVar59 + -1;
                        puVar24 = puVar24 + 1;
                      } while (lVar59 != 0);
                    }
                    else {
                      uVar42 = uVar26 & 0x7ffffff8;
                      auVar80._0_8_ = CONCAT44(uVar50,uVar50);
                      auVar80._8_4_ = uVar50;
                      auVar80._12_4_ = uVar50;
                      puVar38 = (undefined8 *)(puVar15 + 0x10);
                      uVar27 = uVar42;
                      do {
                        puVar38[-1] = auVar80._8_8_;
                        puVar38[-2] = auVar80._0_8_;
                        puVar38[1] = auVar80._8_8_;
                        *puVar38 = auVar80._0_8_;
                        puVar38 = puVar38 + 4;
                        uVar27 = uVar27 - 8;
                      } while (uVar27 != 0);
                      if (uVar42 != uVar26) goto LAB_0022980c;
                    }
                  }
                  else {
                    if (uVar50 == 2) {
                      uVar50 = CONCAT22(*(undefined2 *)*pauVar19,*(undefined2 *)*pauVar19);
                    }
                    else {
                      if (uVar50 != 1) goto LAB_00229518;
                      uVar50 = (uint)(byte)(*pauVar19)[0] * 0x1010101;
                    }
                    if (((ulong)puVar28 & 3) == 0) goto joined_r0x002297d0;
LAB_00229668:
                    *puVar28 = (*pauVar19)[0];
                    uVar8 = uVar50 >> 8;
                    uVar50 = uVar8 | uVar50 << 0x18;
                    pauVar20 = (undefined1 (*) [16])(*pauVar19 + 1);
                    puVar15 = puVar28 + 1;
                    uVar52 = uVar39;
                    if (((ulong)(puVar28 + 1) & 3) == 0) goto joined_r0x002297d0;
                    puVar15 = puVar28 + 2;
                    puVar28[1] = (*pauVar19)[1];
                    uVar52 = uVar50 >> 8;
                    uVar50 = uVar52 | uVar8 << 0x18;
                    if (((ulong)puVar15 & 3) == 0) {
                      pauVar20 = (undefined1 (*) [16])(*pauVar19 + 2);
                      iVar70 = -1;
LAB_002297c4:
                      uVar52 = uVar39 + iVar70;
                      goto joined_r0x002297d0;
                    }
                    puVar15 = puVar28 + 3;
                    puVar28[2] = (*pauVar19)[2];
                    uVar8 = uVar50 >> 8;
                    uVar50 = uVar8 | uVar52 << 0x18;
                    if (((ulong)puVar15 & 3) == 0) {
                      pauVar20 = (undefined1 (*) [16])(*pauVar19 + 3);
                      iVar70 = -2;
                      goto LAB_002297c4;
                    }
                    pauVar20 = (undefined1 (*) [16])(*pauVar19 + 4);
                    puVar28[3] = (*pauVar19)[3];
                    puVar15 = puVar28 + 4;
                    uVar50 = uVar50 >> 8 | uVar8 << 0x18;
                    uVar52 = uVar39 - 3;
                    uVar39 = (int)uVar52 >> 2;
                    if (0 < (int)uVar39) goto LAB_002297d4;
LAB_00229714:
                    uVar26 = 0;
                  }
                  if ((int)uVar26 * 4 < (int)uVar52) {
                    lVar55 = uVar26 * 4;
                    uVar26 = (ulong)uVar52 + uVar26 * -4;
                    lVar59 = lVar55;
                    if ((7 < uVar26) && (0x1f < (ulong)((long)puVar15 - (long)pauVar20))) {
                      if (uVar26 < 0x20) {
                        uVar42 = 0;
                      }
                      else {
                        uVar42 = uVar26 & 0xffffffffffffffe0;
                        puVar38 = (undefined8 *)(puVar15 + lVar55 + 0x10);
                        puVar43 = (undefined8 *)(pauVar20[1] + lVar55);
                        uVar27 = uVar42;
                        do {
                          auVar79 = *(undefined1 (*) [16])(puVar43 + -2);
                          uVar54 = *puVar43;
                          uVar9 = puVar43[1];
                          puVar38[-1] = auVar79._8_8_;
                          puVar38[-2] = auVar79._0_8_;
                          puVar38[1] = uVar9;
                          *puVar38 = uVar54;
                          puVar38 = puVar38 + 4;
                          puVar43 = puVar43 + 4;
                          uVar27 = uVar27 - 0x20;
                        } while (uVar27 != 0);
                        if (uVar26 == uVar42) goto LAB_002298f0;
                        if ((uVar26 & 0x18) == 0) {
                          lVar59 = lVar55 + uVar42;
                          goto LAB_002298d4;
                        }
                      }
                      uVar27 = uVar26 & 0xfffffffffffffff8;
                      lVar59 = lVar55 + uVar27;
                      lVar60 = uVar42 - uVar27;
                      puVar38 = (undefined8 *)(puVar15 + uVar42 + lVar55);
                      puVar43 = (undefined8 *)(*pauVar20 + uVar42 + lVar55);
                      do {
                        *puVar38 = *puVar43;
                        lVar60 = lVar60 + 8;
                        puVar38 = puVar38 + 1;
                        puVar43 = puVar43 + 1;
                      } while (lVar60 != 0);
                      if (uVar26 == uVar27) goto LAB_002298f0;
                    }
LAB_002298d4:
                    lVar55 = (ulong)uVar52 - lVar59;
                    puVar28 = puVar15 + lVar59;
                    puVar15 = *pauVar20 + lVar59;
                    do {
                      *puVar28 = *puVar15;
                      lVar55 = lVar55 + -1;
                      puVar28 = puVar28 + 1;
                      puVar15 = puVar15 + 1;
                    } while (lVar55 != 0);
                  }
                }
LAB_002298f0:
                for (uVar65 = uVar35 + uVar65; iVar30 <= (int)uVar65; uVar65 = uVar65 - iVar30) {
                  uVar74 = uVar74 + 1;
                  uVar50 = uVar53 + 1;
                  if (((int)uVar53 < (int)pdVar17) && ((uVar50 & 0xf) == 0)) {
                    piVar25 = *(int **)(param_4 + 2);
                    lVar59 = *(long *)(piVar25 + 0xe);
                    piVar34 = piVar25 + 0x20;
                    if (1 < *(uint *)(lVar59 + 0xc)) {
                      piVar34 = piVar75;
                    }
                    iVar70 = param_4[0x23];
                    if ((int)param_4[0x23] <= *piVar34) {
                      iVar70 = *piVar34;
                    }
                    if (iVar70 <= (int)uVar53) {
                      lVar60 = (long)*piVar25;
                      lVar55 = *(long *)(lVar59 + 200) + (long)*piVar25 * (long)iVar70;
                      func_0x0022d49c(param_4 + 0x3e,iVar70,uVar50,
                                      *(long *)(param_4 + 6) +
                                      (long)(int)param_4[0x21] * (long)iVar70,lVar55);
                      if (*(int *)(lVar59 + 0xc) != 0) {
                        iVar70 = uVar74 - iVar70;
                        lVar16 = *(long *)(lVar59 + 0xd0);
                        do {
                          (**(code **)((ulong)*(uint *)(lVar59 + 0xc) * 8 + 0xb6d020))
                                    (lVar16,lVar55,lVar55,lVar60);
                          lVar4 = lVar55 + lVar60;
                          iVar70 = iVar70 + -1;
                          lVar16 = lVar55;
                          lVar55 = lVar4;
                        } while (iVar70 != 0);
                        *(long *)(lVar59 + 0xd0) = lVar4 - lVar60;
                      }
                    }
                    param_4[0x25] = uVar50;
                    param_4[0x23] = uVar50;
                    pdVar17 = (dword *)((ulong)pdVar66 & 0xffffffff);
                  }
                  uVar53 = uVar50;
                }
                uVar73 = uVar35 + uVar73;
                if (((int)uVar73 < iVar23) && ((uVar65 & uVar71) != 0)) {
                  uVar50 = param_4[0x31];
                  if (uVar50 == 0) {
                    iVar70 = 0;
                  }
                  else {
                    iVar70 = *(int *)(*(long *)(param_4 + 0x34) +
                                     (long)(((int)uVar65 >> (uVar50 & 0x1f)) +
                                           param_4[0x32] * ((int)uVar53 >> (uVar50 & 0x1f))) * 4);
                  }
                  plStack_630 = (long *)(*(long *)(param_4 + 0x38) + (long)iVar70 * 0x238);
                }
                goto LAB_00229a4c;
              }
            }
            bVar11 = true;
            uVar50 = *puStack_628;
            goto joined_r0x00229adc;
          }
          *(char *)(lVar37 + (int)uVar73) = (char)uVar7;
          uVar73 = uVar73 + 1;
          uVar65 = uVar65 + 1;
          if (iVar30 <= (int)uVar65) {
            uVar65 = 0;
            uVar53 = uVar74 + 1;
            if (((int)uVar74 < (int)pdVar17) && ((uVar53 & 0xf) == 0)) {
              piVar25 = *(int **)(param_4 + 2);
              lVar59 = *(long *)(piVar25 + 0xe);
              piVar34 = piVar25 + 0x20;
              if (1 < *(uint *)(lVar59 + 0xc)) {
                piVar34 = piVar75;
              }
              iVar70 = param_4[0x23];
              if ((int)param_4[0x23] <= *piVar34) {
                iVar70 = *piVar34;
              }
              if (iVar70 <= (int)uVar74) {
                lVar60 = (long)*piVar25;
                lVar55 = *(long *)(lVar59 + 200) + (long)*piVar25 * (long)iVar70;
                func_0x0022d49c(param_4 + 0x3e,iVar70,uVar53,
                                *(long *)(param_4 + 6) + (long)(int)param_4[0x21] * (long)iVar70,
                                lVar55);
                if (*(int *)(lVar59 + 0xc) != 0) {
                  iVar70 = (uVar74 - iVar70) + 1;
                  lVar16 = *(long *)(lVar59 + 0xd0);
                  do {
                    (**(code **)((ulong)*(uint *)(lVar59 + 0xc) * 8 + 0xb6d020))
                              (lVar16,lVar55,lVar55,lVar60);
                    lVar4 = lVar55 + lVar60;
                    iVar70 = iVar70 + -1;
                    lVar16 = lVar55;
                    lVar55 = lVar4;
                  } while (iVar70 != 0);
                  *(long *)(lVar59 + 0xd0) = lVar4 - lVar60;
                }
              }
              uVar65 = 0;
              param_4[0x25] = uVar53;
              param_4[0x23] = uVar53;
              pdVar17 = (dword *)((ulong)pdVar66 & 0xffffffff);
            }
          }
LAB_00229a4c:
          uVar74 = uVar53;
          uVar50 = (uint)pdVar17;
          if (*puStack_628 != 0) {
            *puStack_628 = 1;
            break;
          }
          if (*(long *)(param_4 + 0x10) == *(long *)(param_4 + 0xe)) {
            uVar53 = (uint)(0x40 < (int)param_4[0x12]);
          }
          else {
            uVar53 = 0;
          }
          *puStack_628 = uVar53;
          if ((uVar53 != 0) || (iVar23 <= (int)uVar73)) break;
        } while( true );
      }
    }
    puStack_628 = param_4 + 0x13;
    if ((int)uVar50 <= (int)uVar74) {
      uVar74 = uVar50;
    }
    piVar25 = *(int **)(param_4 + 2);
    lVar37 = *(long *)(piVar25 + 0xe);
    piVar34 = piVar25 + 0x20;
    if (1 < *(uint *)(lVar37 + 0xc)) {
      piVar34 = piVar75;
    }
    iVar23 = param_4[0x23];
    if ((int)param_4[0x23] <= *piVar34) {
      iVar23 = *piVar34;
    }
    iVar70 = uVar74 - iVar23;
    if (iVar70 != 0 && iVar23 <= (int)uVar74) {
      lVar55 = (long)*piVar25;
      lVar59 = *(long *)(lVar37 + 200) + (long)*piVar25 * (long)iVar23;
      func_0x0022d49c(param_4 + 0x3e,iVar23,uVar74,
                      *(long *)(param_4 + 6) + (long)(int)param_4[0x21] * (long)iVar23,lVar59);
      if (*(int *)(lVar37 + 0xc) != 0) {
        lVar60 = *(long *)(lVar37 + 0xd0);
        do {
          (**(code **)((ulong)*(uint *)(lVar37 + 0xc) * 8 + 0xb6d020))(lVar60,lVar59,lVar59,lVar55);
          lVar16 = lVar59 + lVar55;
          iVar70 = iVar70 + -1;
          lVar60 = lVar59;
          lVar59 = lVar16;
        } while (iVar70 != 0);
        *(long *)(lVar37 + 0xd0) = lVar16 - lVar55;
      }
    }
    bVar11 = false;
    param_4[0x25] = uVar74;
    param_4[0x23] = uVar74;
    uVar50 = *puStack_628;
joined_r0x00229adc:
    if (uVar50 == 0) {
      puStack_628 = param_4 + 0x13;
      if (*(long *)(param_4 + 0x10) == *(long *)(param_4 + 0xe)) {
        bVar12 = 0x40 < (int)param_4[0x12];
        *puStack_628 = (uint)bVar12;
      }
      else {
        bVar12 = false;
        *puStack_628 = 0;
      }
    }
    else {
      puStack_628 = param_4 + 0x13;
      bVar12 = true;
      *puStack_628 = 1;
    }
    if ((bVar11) || ((bVar12 && ((int)uVar73 < iVar61 * iVar30)))) {
      uVar76 = 3;
      if (bVar12) {
        uVar76 = 5;
      }
      *param_4 = uVar76;
      return 0;
    }
    param_4[0x24] = uVar73;
  }
  return 1;
}



/* Entry: 002290ec; end: 0022a603;  */

/* WARNING: Removing unreachable block (ram,0x0022a0e8) */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_002290ec(long param_1,uint param_2)

{
  bool bVar1;
  undefined1 uVar2;
  long *plVar3;
  long lVar4;
  int *piVar5;
  long *plVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  ushort uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  long lVar14;
  uint *puVar15;
  int iVar16;
  int iVar17;
  undefined4 uVar18;
  int *piVar19;
  ulong uVar20;
  ulong uVar21;
  undefined1 *puVar22;
  int iVar23;
  uint uVar24;
  int *piVar25;
  uint *puVar26;
  byte *pbVar27;
  uint uVar28;
  long lVar29;
  byte *pbVar30;
  ulong uVar31;
  undefined8 *puVar32;
  ulong uVar33;
  byte *pbVar34;
  undefined4 *puVar35;
  uint uVar36;
  uint uVar37;
  long lVar38;
  uint *puVar39;
  long lVar40;
  long lVar41;
  long *plVar42;
  int iVar43;
  uint uVar44;
  uint *puVar45;
  uint *puVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  long *plStack_80;
  uint *puStack_78;
  uint uStack_64;
  
  puVar35 = *(undefined4 **)(param_1 + 0x18);
  piVar25 = puVar35 + 0x23;
  if (*piVar25 < (int)param_2) {
    iVar8 = (int)puVar35;
    if ((*(int *)(param_1 + 0xc0) == 0) && (FUN_0022c148(), *(int *)(param_1 + 0xc0) == 0)) {
      lVar29 = *(long *)(puVar35 + 6);
      iVar7 = puVar35[0x21];
      iVar23 = puVar35[0x24];
      uVar48 = 0;
      if (iVar7 != 0) {
        uVar48 = iVar23 / iVar7;
      }
      puVar26 = (uint *)(lVar29 + (long)iVar23 * 4);
      puVar15 = (uint *)(lVar29 + (long)(puVar35[0x22] * iVar7) * 4);
      iVar43 = puVar35[0x26];
      uStack_64 = 0x1000000;
      if (puVar35[0x14] != 0) {
        uStack_64 = uVar48;
      }
      plVar3 = (long *)(puVar35 + 0x28);
      plVar6 = plVar3;
      if (iVar43 < 1) {
        plVar6 = (long *)0x0;
      }
      if (iVar23 < (int)(param_2 * iVar7)) {
        uVar49 = iVar23 - uVar48 * iVar7;
        uVar44 = puVar35[0x31];
        if (uVar44 == 0) {
          iVar23 = 0;
        }
        else {
          iVar23 = *(int *)(*(long *)(puVar35 + 0x34) +
                           (long)(((int)uVar49 >> (uVar44 & 0x1f)) +
                                 puVar35[0x32] * ((int)uVar48 >> (uVar44 & 0x1f))) * 4);
        }
        uVar44 = puVar35[0x30];
        plVar42 = (long *)(*(long *)(puVar35 + 0x38) + (long)iVar23 * 0x238);
        puVar45 = puVar26;
        do {
          if ((int)uStack_64 <= (int)uVar48) {
            *(undefined8 *)(puVar35 + 0x18) = *(undefined8 *)(puVar35 + 0xc);
            *(undefined8 *)(puVar35 + 0x16) = *(undefined8 *)(puVar35 + 10);
            *(undefined8 *)(puVar35 + 0x1c) = *(undefined8 *)(puVar35 + 0x10);
            *(undefined8 *)(puVar35 + 0x1a) = *(undefined8 *)(puVar35 + 0xe);
            *(undefined8 *)(puVar35 + 0x1e) = *(undefined8 *)(puVar35 + 0x12);
            puVar35[0x20] = (int)((ulong)((long)puVar26 - lVar29) >> 2);
            if (0 < (int)puVar35[0x26]) {
              FUN_0021f830(plVar3,puVar35 + 0x2c);
            }
            uStack_64 = uVar48 + 8;
            if ((uVar49 & uVar44) == 0) goto LAB_00229d90;
LAB_00229c98:
            iVar23 = (int)plVar42[6];
joined_r0x00229c9c:
            if (iVar23 == 0) goto LAB_00229dc4;
LAB_00229ca0:
            uVar47 = *(uint *)((long)plVar42 + 0x2c);
            goto LAB_00229ca4;
          }
          if ((uVar49 & uVar44) != 0) goto LAB_00229c98;
LAB_00229d90:
          uVar47 = puVar35[0x31];
          if (uVar47 != 0) {
            plVar42 = (long *)(*(long *)(puVar35 + 0x38) +
                              (long)*(int *)(*(long *)(puVar35 + 0x34) +
                                            (long)(((int)uVar49 >> (uVar47 & 0x1f)) +
                                                  puVar35[0x32] * ((int)uVar48 >> (uVar47 & 0x1f)))
                                            * 4) * 0x238);
            iVar23 = (int)plVar42[6];
            goto joined_r0x00229c9c;
          }
          plVar42 = *(long **)(puVar35 + 0x38);
          if ((int)plVar42[6] != 0) goto LAB_00229ca0;
LAB_00229dc4:
          if (0x1f < (int)puVar35[0x12]) {
            func_0x0021f610(puVar35 + 10);
          }
          if (*(int *)((long)plVar42 + 0x34) == 0) {
            uVar20 = *(ulong *)(puVar35 + 10);
            uVar47 = puVar35[0x12];
            pbVar27 = (byte *)(*plVar42 + (uVar20 >> ((ulong)uVar47 & 0x3f) & 0xff) * 4);
            bVar9 = *pbVar27;
            if (8 < bVar9) {
              uVar47 = uVar47 + 8;
              pbVar27 = pbVar27 + (ulong)((uint)(uVar20 >> ((ulong)uVar47 & 0x3f)) &
                                         (-1 << (ulong)(bVar9 - 8 & 0x1f) ^ 0xffffffffU)) * 4 +
                                  (ulong)*(ushort *)(pbVar27 + 2) * 4;
              bVar9 = *pbVar27;
            }
            puVar35[0x12] = uVar47 + bVar9;
            if (puVar35[0x13] != 0) break;
            uVar47 = (uint)*(ushort *)(pbVar27 + 2);
LAB_00229ec8:
            if ((*(long *)(puVar35 + 0x10) == *(long *)(puVar35 + 0xe)) &&
               (0x40 < (int)puVar35[0x12])) break;
            if ((int)uVar47 < 0x100) {
              if ((int)plVar42[5] != 0) {
                uVar47 = *(uint *)((long)plVar42 + 0x2c) | uVar47 << 8;
                goto LAB_00229ca4;
              }
              uVar36 = puVar35[0x12];
              pbVar27 = (byte *)(plVar42[1] + (uVar20 >> ((ulong)uVar36 & 0x3f) & 0xff) * 4);
              bVar9 = *pbVar27;
              if (bVar9 < 9) {
                uVar24 = uVar36 + bVar9;
                puVar35[0x12] = uVar24;
                uVar36 = (uint)*(ushort *)(pbVar27 + 2);
                if (0x1f < (int)uVar24) goto LAB_0022a294;
LAB_0022a1bc:
                pbVar27 = (byte *)(plVar42[2] + (uVar20 >> ((ulong)uVar24 & 0x3f) & 0xff) * 4);
                uVar28 = (uint)*pbVar27;
                if (8 < *pbVar27) {
LAB_0022a1d4:
                  uVar24 = uVar24 + 8;
                  pbVar27 = pbVar27 + (ulong)((uint)(uVar20 >> ((ulong)uVar24 & 0x3f)) &
                                             (-1 << (ulong)(uVar28 - 8 & 0x1f) ^ 0xffffffffU)) * 4 +
                                      (ulong)*(ushort *)(pbVar27 + 2) * 4;
                  uVar28 = (uint)*pbVar27;
                }
              }
              else {
                uVar10 = *(ushort *)(pbVar27 + 2);
                uVar24 = uVar36 + 8 +
                         (uint)pbVar27[(ulong)((uint)(uVar20 >> ((ulong)(uVar36 + 8) & 0x3f)) &
                                              (-1 << (ulong)(bVar9 - 8 & 0x1f) ^ 0xffffffffU)) * 4 +
                                       (ulong)uVar10 * 4];
                puVar35[0x12] = uVar24;
                uVar36 = (uint)*(ushort *)
                                (pbVar27 + (ulong)((uint)(uVar20 >> ((ulong)(uVar36 + 8) & 0x3f)) &
                                                  (-1 << (ulong)(bVar9 - 8 & 0x1f) ^ 0xffffffffU)) *
                                           4 + (ulong)uVar10 * 4 + 2);
                if ((int)uVar24 < 0x20) goto LAB_0022a1bc;
LAB_0022a294:
                func_0x0021f610(puVar35 + 10);
                uVar20 = *(ulong *)(puVar35 + 10);
                uVar24 = puVar35[0x12];
                pbVar27 = (byte *)(plVar42[2] + (uVar20 >> ((ulong)uVar24 & 0x3f) & 0xff) * 4);
                uVar28 = (uint)*pbVar27;
                if (8 < uVar28) goto LAB_0022a1d4;
              }
              uVar24 = uVar24 + uVar28;
              uVar10 = *(ushort *)(pbVar27 + 2);
              pbVar27 = (byte *)(plVar42[3] + (uVar20 >> ((ulong)uVar24 & 0x3f) & 0xff) * 4);
              bVar9 = *pbVar27;
              if (8 < bVar9) {
                uVar24 = uVar24 + 8;
                pbVar27 = pbVar27 + (ulong)((uint)(uVar20 >> ((ulong)uVar24 & 0x3f)) &
                                           (-1 << (ulong)(bVar9 - 8 & 0x1f) ^ 0xffffffffU)) * 4 +
                                    (ulong)*(ushort *)(pbVar27 + 2) * 4;
                bVar9 = *pbVar27;
              }
              puVar35[0x12] = uVar24 + bVar9;
              if ((puVar35[0x13] == 0) &&
                 ((*(long *)(puVar35 + 0x10) != *(long *)(puVar35 + 0xe) ||
                  ((int)(uVar24 + bVar9) < 0x41)))) {
                uVar47 = uVar36 << 0x10 | uVar47 << 8 | (uint)uVar10 |
                         (uint)*(ushort *)(pbVar27 + 2) << 0x18;
LAB_00229ca4:
                *puVar26 = uVar47;
                goto LAB_00229ca8;
              }
              break;
            }
            if (0x117 < uVar47) {
              if ((int)uVar47 < iVar43 + 0x118) {
                lVar40 = *plVar3;
                for (; puVar45 < puVar26; puVar45 = puVar45 + 1) {
                  uVar36 = *puVar45 * 0x1e35a7bd >> ((ulong)*(uint *)(plVar6 + 1) & 0x3f);
                  *(uint *)(lVar40 + (-(ulong)(uVar36 >> 0x1f) & 0xfffffffc00000000 |
                                     (ulong)uVar36 << 2)) = *puVar45;
                }
                uVar47 = *(uint *)(lVar40 + (ulong)uVar47 * 4 + -0x460);
                goto LAB_00229ca4;
              }
              goto LAB_0022a3cc;
            }
            uVar36 = uVar47 - 0x100;
            if (3 < uVar36) {
              iVar23 = iVar8 + 0x28;
              func_0x0021f6f4();
              uVar36 = iVar23 + ((uVar47 & 1 | 2) << (ulong)(uVar47 - 0x102 >> 1 & 0x1f));
              uVar20 = *(ulong *)(puVar35 + 10);
            }
            uVar47 = puVar35[0x12];
            pbVar27 = (byte *)(plVar42[4] + (uVar20 >> ((ulong)uVar47 & 0x3f) & 0xff) * 4);
            bVar9 = *pbVar27;
            if (bVar9 < 9) {
              iVar23 = uVar47 + bVar9;
              puVar35[0x12] = iVar23;
              uVar47 = (uint)*(ushort *)(pbVar27 + 2);
              if (0x1f < iVar23) goto LAB_0022a00c;
LAB_00229f90:
              if (uVar47 < 4) goto LAB_00229f98;
LAB_0022a020:
              iVar23 = iVar8 + 0x28;
              func_0x0021f6f4();
              uVar47 = iVar23 + ((uVar47 & 1 | 2) << (ulong)(uVar47 - 2 >> 1 & 0x1f));
              if ((int)(uVar47 + 1) < 0x79) goto LAB_0022a050;
LAB_00229fa4:
              uVar47 = uVar47 - 0x77;
            }
            else {
              uVar10 = *(ushort *)(pbVar27 + 2);
              iVar23 = uVar47 + 8 +
                       (uint)pbVar27[(ulong)((uint)(uVar20 >> ((ulong)(uVar47 + 8) & 0x3f)) &
                                            (-1 << (ulong)(bVar9 - 8 & 0x1f) ^ 0xffffffffU)) * 4 +
                                     (ulong)uVar10 * 4];
              puVar35[0x12] = iVar23;
              uVar47 = (uint)*(ushort *)
                              (pbVar27 + (ulong)((uint)(uVar20 >> ((ulong)(uVar47 + 8) & 0x3f)) &
                                                (-1 << (ulong)(bVar9 - 8 & 0x1f) ^ 0xffffffffU)) * 4
                                         + (ulong)uVar10 * 4 + 2);
              if (iVar23 < 0x20) goto LAB_00229f90;
LAB_0022a00c:
              func_0x0021f610(puVar35 + 10);
              if (3 < uVar47) goto LAB_0022a020;
LAB_00229f98:
              if (0x78 < uVar47 + 1) goto LAB_00229fa4;
LAB_0022a050:
              uVar47 = ((uint)((byte)(&UNK_007eeae7)[(int)uVar47] >> 4) * iVar7 -
                       ((byte)(&UNK_007eeae7)[(int)uVar47] & 0xf)) + 8;
              if ((int)uVar47 < 2) {
                uVar47 = 1;
              }
            }
            if ((puVar35[0x13] != 0) ||
               ((*(long *)(puVar35 + 0x10) == *(long *)(puVar35 + 0xe) &&
                (0x40 < (int)puVar35[0x12])))) break;
            if ((long)puVar26 - lVar29 >> 2 < (long)(ulong)uVar47) goto LAB_0022a3cc;
            iVar23 = uVar36 + 1;
            if ((long)puVar15 - (long)puVar26 >> 2 < (long)iVar23) goto LAB_0022a3cc;
            FUN_0022ae24(puVar26,(ulong)uVar47,iVar23);
            for (uVar49 = iVar23 + uVar49; iVar7 <= (int)uVar49; uVar49 = uVar49 - iVar7) {
              uVar47 = uVar48 + 1;
              if (((int)uVar48 < (int)param_2) && ((uVar47 & 0xf) == 0)) {
                (*(code *)0x22a430)(puVar35,uVar47);
              }
              uVar48 = uVar47;
            }
            if ((uVar49 & uVar44) != 0) {
              uVar47 = puVar35[0x31];
              if (uVar47 == 0) {
                iVar17 = 0;
              }
              else {
                iVar17 = *(int *)(*(long *)(puVar35 + 0x34) +
                                 (long)(((int)uVar49 >> (uVar47 & 0x1f)) +
                                       puVar35[0x32] * ((int)uVar48 >> (uVar47 & 0x1f))) * 4);
              }
              plVar42 = (long *)(*(long *)(puVar35 + 0x38) + (long)iVar17 * 0x238);
            }
            puVar39 = puVar26 + iVar23;
            if ((0 < iVar43) && (puVar45 < puVar39)) {
              lVar40 = *plVar3;
              puVar26 = puVar45;
              do {
                puVar45 = puVar26 + 1;
                uVar47 = *puVar26 * 0x1e35a7bd >> ((ulong)*(uint *)(plVar6 + 1) & 0x3f);
                *(uint *)(lVar40 + (-(ulong)(uVar47 >> 0x1f) & 0xfffffffc00000000 |
                                   (ulong)uVar47 << 2)) = *puVar26;
                puVar26 = puVar45;
              } while (puVar45 < puVar39);
            }
          }
          else {
            uVar20 = *(ulong *)(puVar35 + 10);
            uVar21 = uVar20 >> ((ulong)(uint)puVar35[0x12] & 0x3f) & 0x3f;
            uVar47 = *(uint *)((long)plVar42 + uVar21 * 8 + 0x3c);
            iVar23 = (int)plVar42[uVar21 + 7] + puVar35[0x12];
            if ((int)plVar42[uVar21 + 7] < 0x100) {
              puVar35[0x12] = iVar23;
              *puVar26 = uVar47;
              uVar47 = 0;
              iVar23 = puVar35[0x13];
            }
            else {
              puVar35[0x12] = iVar23 + -0x100;
              iVar23 = puVar35[0x13];
            }
            if ((iVar23 != 0) ||
               ((*(long *)(puVar35 + 0x10) == *(long *)(puVar35 + 0xe) &&
                (0x40 < (int)puVar35[0x12])))) break;
            if (uVar47 != 0) goto LAB_00229ec8;
LAB_00229ca8:
            puVar39 = puVar26 + 1;
            uVar49 = uVar49 + 1;
            if (iVar7 <= (int)uVar49) {
              uVar47 = uVar48 + 1;
              if (((int)uVar48 < (int)param_2) && ((uVar47 & 0xf) == 0)) {
                (*(code *)0x22a430)(puVar35,uVar47);
              }
              uVar49 = 0;
              uVar48 = uVar47;
              if ((0 < iVar43) && (puVar45 < puVar39)) {
                lVar40 = *plVar3;
                puVar46 = puVar45;
                do {
                  puVar45 = puVar46 + 1;
                  uVar49 = *puVar46 * 0x1e35a7bd >> ((ulong)*(uint *)(plVar6 + 1) & 0x3f);
                  *(uint *)(lVar40 + (-(ulong)(uVar49 >> 0x1f) & 0xfffffffc00000000 |
                                     (ulong)uVar49 << 2)) = *puVar46;
                  bVar13 = puVar46 < puVar26;
                  puVar46 = puVar45;
                } while (bVar13);
                uVar49 = 0;
              }
            }
          }
          puVar26 = puVar39;
        } while (puVar39 < (uint *)(lVar29 + (long)(int)(param_2 * iVar7) * 4));
      }
      if (puVar35[0x13] == 0) {
        if (*(long *)(puVar35 + 0x10) == *(long *)(puVar35 + 0xe)) {
          uVar2 = 0x40 < (int)puVar35[0x12];
          puVar35[0x13] = (uint)(byte)uVar2;
          iVar8 = puVar35[0x14];
        }
        else {
          uVar2 = false;
          puVar35[0x13] = 0;
          iVar8 = puVar35[0x14];
        }
      }
      else {
        uVar2 = true;
        puVar35[0x13] = 1;
        iVar8 = puVar35[0x14];
      }
      if (((iVar8 == 0) || (!(bool)uVar2)) || (puVar15 <= puVar26)) {
        if ((bool)uVar2) {
LAB_0022a3cc:
          *puVar35 = 3;
          return 0;
        }
        if ((int)param_2 <= (int)uVar48) {
          uVar48 = param_2;
        }
        (*(code *)0x22a430)(puVar35,uVar48);
        *puVar35 = 0;
        puVar35[0x24] = (int)((ulong)((long)puVar26 - lVar29) >> 2);
      }
      else {
        *puVar35 = 5;
        *(undefined8 *)(puVar35 + 0xc) = *(undefined8 *)(puVar35 + 0x18);
        *(undefined8 *)(puVar35 + 10) = *(undefined8 *)(puVar35 + 0x16);
        *(undefined8 *)(puVar35 + 0x10) = *(undefined8 *)(puVar35 + 0x1c);
        *(undefined8 *)(puVar35 + 0xe) = *(undefined8 *)(puVar35 + 0x1a);
        *(undefined8 *)(puVar35 + 0x12) = *(undefined8 *)(puVar35 + 0x1e);
        puVar35[0x24] = puVar35[0x20];
        if (0 < (int)puVar35[0x26]) {
          FUN_0021f830(puVar35 + 0x2c,plVar3);
        }
      }
      return 1;
    }
    iVar7 = puVar35[0x21];
    iVar23 = puVar35[0x22];
    uVar48 = puVar35[0x24];
    iVar43 = iVar7 * param_2;
    uVar49 = 0;
    if (iVar7 != 0) {
      uVar49 = (int)uVar48 / iVar7;
    }
    if ((int)uVar48 < iVar43) {
      uVar44 = uVar48 - uVar49 * iVar7;
      uVar47 = puVar35[0x31];
      if (uVar47 == 0) {
        iVar16 = 0;
        iVar17 = puVar35[0x13];
      }
      else {
        iVar16 = *(int *)(*(long *)(puVar35 + 0x34) +
                         (long)(((int)uVar44 >> (uVar47 & 0x1f)) +
                               puVar35[0x32] * ((int)uVar49 >> (uVar47 & 0x1f))) * 4);
        iVar17 = puVar35[0x13];
      }
      if (iVar17 == 0) {
        puStack_78 = puVar35 + 0x13;
        lVar29 = *(long *)(puVar35 + 6);
        uVar47 = puVar35[0x30];
        plStack_80 = (long *)(*(long *)(puVar35 + 0x38) + (long)iVar16 * 0x238);
        do {
          if ((uVar44 & uVar47) == 0) {
            uVar36 = puVar35[0x31];
            if (uVar36 == 0) {
              iVar17 = 0;
            }
            else {
              iVar17 = *(int *)(*(long *)(puVar35 + 0x34) +
                               (long)(((int)uVar44 >> (uVar36 & 0x1f)) +
                                     puVar35[0x32] * ((int)uVar49 >> (uVar36 & 0x1f))) * 4);
            }
            plStack_80 = (long *)(*(long *)(puVar35 + 0x38) + (long)iVar17 * 0x238);
            uVar36 = puVar35[0x12];
          }
          else {
            uVar36 = puVar35[0x12];
          }
          if (0x1f < (int)uVar36) {
            func_0x0021f610(puVar35 + 10);
            uVar36 = puVar35[0x12];
          }
          uVar20 = *(ulong *)(puVar35 + 10);
          pbVar27 = (byte *)(*plStack_80 + (uVar20 >> ((ulong)uVar36 & 0x3f) & 0xff) * 4);
          bVar9 = *pbVar27;
          if (8 < bVar9) {
            uVar36 = uVar36 + 8;
            pbVar27 = pbVar27 + (ulong)((uint)(uVar20 >> ((ulong)uVar36 & 0x3f)) &
                                       (-1 << (ulong)(bVar9 - 8 & 0x1f) ^ 0xffffffffU)) * 4 +
                                (ulong)*(ushort *)(pbVar27 + 2) * 4;
            bVar9 = *pbVar27;
          }
          uVar36 = uVar36 + bVar9;
          puVar35[0x12] = uVar36;
          uVar10 = *(ushort *)(pbVar27 + 2);
          uVar24 = uVar49;
          if (0xff < uVar10) {
            uVar28 = (uint)uVar10;
            if (uVar28 < 0x118) {
              uVar12 = uVar28 - 0x100;
              if (3 < uVar12) {
                iVar17 = iVar8 + 0x28;
                func_0x0021f6f4();
                uVar12 = iVar17 + ((uVar10 & 1 | 2) << (ulong)(uVar28 - 0x102 >> 1 & 0x1f));
                uVar20 = *(ulong *)(puVar35 + 10);
                uVar36 = puVar35[0x12];
              }
              pbVar27 = (byte *)(plStack_80[4] + (uVar20 >> ((ulong)uVar36 & 0x3f) & 0xff) * 4);
              bVar9 = *pbVar27;
              if (bVar9 < 9) {
                iVar17 = uVar36 + bVar9;
                puVar35[0x12] = iVar17;
                uVar36 = (uint)*(ushort *)(pbVar27 + 2);
                if (0x1f < iVar17) goto LAB_00229428;
LAB_002293f8:
                if (uVar36 < 4) goto LAB_00229400;
LAB_00229438:
                iVar17 = iVar8 + 0x28;
                func_0x0021f6f4();
                uVar36 = iVar17 + ((uVar36 & 1 | 2) << (ulong)(uVar36 - 2 >> 1 & 0x1f));
                if ((int)(uVar36 + 1) < 0x79) goto LAB_00229464;
LAB_0022940c:
                uVar36 = uVar36 - 0x77;
              }
              else {
                uVar10 = *(ushort *)(pbVar27 + 2);
                iVar17 = uVar36 + 8 +
                         (uint)pbVar27[(ulong)((uint)(uVar20 >> ((ulong)(uVar36 + 8) & 0x3f)) &
                                              (-1 << (ulong)(bVar9 - 8 & 0x1f) ^ 0xffffffffU)) * 4 +
                                       (ulong)uVar10 * 4];
                puVar35[0x12] = iVar17;
                uVar36 = (uint)*(ushort *)
                                (pbVar27 + (ulong)((uint)(uVar20 >> ((ulong)(uVar36 + 8) & 0x3f)) &
                                                  (-1 << (ulong)(bVar9 - 8 & 0x1f) ^ 0xffffffffU)) *
                                           4 + (ulong)uVar10 * 4 + 2);
                if (iVar17 < 0x20) goto LAB_002293f8;
LAB_00229428:
                func_0x0021f610(puVar35 + 10);
                if (3 < uVar36) goto LAB_00229438;
LAB_00229400:
                if (0x78 < uVar36 + 1) goto LAB_0022940c;
LAB_00229464:
                uVar36 = ((uint)((byte)(&UNK_007eeae7)[(int)uVar36] >> 4) * iVar7 -
                         ((byte)(&UNK_007eeae7)[(int)uVar36] & 0xf)) + 8;
                if ((int)uVar36 < 2) {
                  uVar36 = 1;
                }
              }
              uVar28 = uVar12 + 1;
              uVar20 = (ulong)uVar28;
              if ((int)uVar36 <= (int)uVar48 && (int)uVar28 <= (int)(iVar23 * iVar7 - uVar48)) {
                uVar21 = (ulong)uVar48;
                pbVar27 = (byte *)(lVar29 + uVar21);
                puVar15 = (uint *)(pbVar27 + -(ulong)uVar36);
                if ((int)uVar28 < 8) {
LAB_00229518:
                  if ((int)uVar36 < (int)uVar28) {
                    uVar33 = 0;
                    lVar40 = -(ulong)uVar36;
                    if ((7 < uVar28) && (0x1f < uVar36)) {
                      if (uVar28 < 0x20) {
                        uVar31 = 0;
                      }
                      else {
                        uVar33 = uVar20 & 0x7fffffe0;
                        puVar32 = (undefined8 *)(lVar29 + 0x10 + uVar21);
                        uVar31 = uVar33;
                        do {
                          uVar50 = *(undefined8 *)puVar15;
                          uVar52 = *(undefined8 *)(puVar15 + 6);
                          uVar51 = *(undefined8 *)(puVar15 + 4);
                          puVar32[-1] = *(undefined8 *)(puVar15 + 2);
                          puVar32[-2] = uVar50;
                          puVar32[1] = uVar52;
                          *puVar32 = uVar51;
                          puVar32 = puVar32 + 4;
                          uVar31 = uVar31 - 0x20;
                          puVar15 = puVar15 + 8;
                        } while (uVar31 != 0);
                        if (uVar33 == uVar20) goto LAB_002298f0;
                        uVar31 = uVar33;
                        if ((uVar28 & 0x18) == 0) goto LAB_00229788;
                      }
                      uVar33 = uVar20 & 0x7ffffff8;
                      lVar38 = uVar31 - uVar33;
                      puVar32 = (undefined8 *)(lVar29 + uVar31 + uVar21);
                      do {
                        *puVar32 = *(undefined8 *)((long)puVar32 + lVar40);
                        lVar38 = lVar38 + 8;
                        puVar32 = puVar32 + 1;
                      } while (lVar38 != 0);
                      if (uVar33 == uVar20) goto LAB_002298f0;
                    }
LAB_00229788:
                    lVar38 = uVar20 - uVar33;
                    puVar22 = (undefined1 *)(lVar29 + uVar33 + uVar21);
                    do {
                      *puVar22 = puVar22[lVar40];
                      lVar38 = lVar38 + -1;
                      puVar22 = puVar22 + 1;
                    } while (lVar38 != 0);
                  }
                  else {
                    _memcpy(pbVar27,puVar15,(long)(int)uVar28);
                  }
                }
                else {
                  puVar26 = puVar15;
                  pbVar30 = pbVar27;
                  uVar37 = uVar28;
                  if (uVar36 == 4) {
                    uVar36 = *puVar15;
                    if (((ulong)pbVar27 & 3) != 0) goto LAB_00229668;
joined_r0x002297d0:
                    uVar12 = (int)uVar37 >> 2;
                    if ((int)uVar12 < 1) goto LAB_00229714;
LAB_002297d4:
                    uVar20 = (ulong)uVar12;
                    if (uVar12 < 8) {
                      uVar33 = 0;
LAB_0022980c:
                      lVar40 = uVar20 - uVar33;
                      puVar15 = (uint *)(pbVar30 + uVar33 * 4);
                      do {
                        *puVar15 = uVar36;
                        lVar40 = lVar40 + -1;
                        puVar15 = puVar15 + 1;
                      } while (lVar40 != 0);
                    }
                    else {
                      uVar33 = uVar20 & 0x7ffffff8;
                      pbVar27 = pbVar30 + 0x10;
                      uVar21 = uVar33;
                      do {
                        *(ulong *)(pbVar27 + -8) = CONCAT44(uVar36,uVar36);
                        *(ulong *)(pbVar27 + -0x10) = CONCAT44(uVar36,uVar36);
                        *(ulong *)(pbVar27 + 8) = CONCAT44(uVar36,uVar36);
                        *(ulong *)pbVar27 = CONCAT44(uVar36,uVar36);
                        pbVar27 = pbVar27 + 0x20;
                        uVar21 = uVar21 - 8;
                      } while (uVar21 != 0);
                      if (uVar33 != uVar20) goto LAB_0022980c;
                    }
                  }
                  else {
                    if (uVar36 == 2) {
                      uVar36 = CONCAT22((short)*puVar15,(short)*puVar15);
                    }
                    else {
                      if (uVar36 != 1) goto LAB_00229518;
                      uVar36 = (uint)(byte)*puVar15 * 0x1010101;
                    }
                    if (((ulong)pbVar27 & 3) == 0) goto joined_r0x002297d0;
LAB_00229668:
                    puVar26 = (uint *)((long)puVar15 + 1);
                    pbVar30 = pbVar27 + 1;
                    *pbVar27 = (byte)*puVar15;
                    uVar11 = uVar36 >> 8;
                    uVar36 = uVar11 | uVar36 << 0x18;
                    uVar37 = uVar12;
                    if (((ulong)pbVar30 & 3) == 0) goto joined_r0x002297d0;
                    pbVar30 = pbVar27 + 2;
                    pbVar27[1] = *(byte *)((long)puVar15 + 1);
                    uVar37 = uVar36 >> 8;
                    uVar36 = uVar37 | uVar11 << 0x18;
                    if (((ulong)pbVar30 & 3) == 0) {
                      puVar26 = (uint *)((long)puVar15 + 2);
                      iVar17 = -1;
LAB_002297c4:
                      uVar37 = uVar12 + iVar17;
                      goto joined_r0x002297d0;
                    }
                    pbVar30 = pbVar27 + 3;
                    pbVar27[2] = *(byte *)((long)puVar15 + 2);
                    uVar11 = uVar36 >> 8;
                    uVar36 = uVar11 | uVar37 << 0x18;
                    if (((ulong)pbVar30 & 3) == 0) {
                      puVar26 = (uint *)((long)puVar15 + 3);
                      iVar17 = -2;
                      goto LAB_002297c4;
                    }
                    puVar26 = puVar15 + 1;
                    pbVar27[3] = *(byte *)((long)puVar15 + 3);
                    pbVar30 = pbVar27 + 4;
                    uVar36 = uVar36 >> 8 | uVar11 << 0x18;
                    uVar37 = uVar12 - 3;
                    uVar12 = (int)uVar37 >> 2;
                    if (0 < (int)uVar12) goto LAB_002297d4;
LAB_00229714:
                    uVar20 = 0;
                  }
                  if ((int)uVar20 * 4 < (int)uVar37) {
                    lVar38 = uVar20 * 4;
                    uVar21 = (ulong)uVar37 + uVar20 * -4;
                    lVar40 = lVar38;
                    if ((7 < uVar21) && (0x1f < (ulong)((long)pbVar30 - (long)puVar26))) {
                      if (uVar21 < 0x20) {
                        uVar33 = 0;
                      }
                      else {
                        uVar33 = uVar21 & 0xffffffffffffffe0;
                        pbVar27 = pbVar30 + lVar38 + 0x10;
                        puVar15 = puVar26 + uVar20 + 4;
                        uVar20 = uVar33;
                        do {
                          uVar50 = *(undefined8 *)(puVar15 + -4);
                          uVar52 = *(undefined8 *)(puVar15 + 2);
                          uVar51 = *(undefined8 *)puVar15;
                          *(undefined8 *)(pbVar27 + -8) = *(undefined8 *)(puVar15 + -2);
                          *(undefined8 *)(pbVar27 + -0x10) = uVar50;
                          *(undefined8 *)(pbVar27 + 8) = uVar52;
                          *(undefined8 *)pbVar27 = uVar51;
                          pbVar27 = pbVar27 + 0x20;
                          puVar15 = puVar15 + 8;
                          uVar20 = uVar20 - 0x20;
                        } while (uVar20 != 0);
                        if (uVar21 == uVar33) goto LAB_002298f0;
                        if ((uVar21 & 0x18) == 0) {
                          lVar40 = lVar38 + uVar33;
                          goto LAB_002298d4;
                        }
                      }
                      uVar20 = uVar21 & 0xfffffffffffffff8;
                      lVar40 = lVar38 + uVar20;
                      lVar41 = uVar33 - uVar20;
                      pbVar27 = pbVar30 + uVar33 + lVar38;
                      pbVar34 = (byte *)((long)puVar26 + uVar33 + lVar38);
                      do {
                        *(undefined8 *)pbVar27 = *(undefined8 *)pbVar34;
                        lVar41 = lVar41 + 8;
                        pbVar27 = pbVar27 + 8;
                        pbVar34 = pbVar34 + 8;
                      } while (lVar41 != 0);
                      if (uVar21 == uVar20) goto LAB_002298f0;
                    }
LAB_002298d4:
                    lVar38 = (ulong)uVar37 - lVar40;
                    pbVar27 = pbVar30 + lVar40;
                    pbVar30 = (byte *)((long)puVar26 + lVar40);
                    do {
                      *pbVar27 = *pbVar30;
                      lVar38 = lVar38 + -1;
                      pbVar27 = pbVar27 + 1;
                      pbVar30 = pbVar30 + 1;
                    } while (lVar38 != 0);
                  }
                }
LAB_002298f0:
                for (uVar44 = uVar28 + uVar44; iVar7 <= (int)uVar44; uVar44 = uVar44 - iVar7) {
                  uVar49 = uVar49 + 1;
                  uVar36 = uVar24 + 1;
                  if (((int)uVar24 < (int)param_2) && ((uVar36 & 0xf) == 0)) {
                    piVar19 = *(int **)(puVar35 + 2);
                    lVar40 = *(long *)(piVar19 + 0xe);
                    piVar5 = piVar19 + 0x20;
                    if (1 < *(uint *)(lVar40 + 0xc)) {
                      piVar5 = piVar25;
                    }
                    iVar17 = puVar35[0x23];
                    if ((int)puVar35[0x23] <= *piVar5) {
                      iVar17 = *piVar5;
                    }
                    if (iVar17 <= (int)uVar24) {
                      lVar41 = (long)*piVar19;
                      lVar38 = *(long *)(lVar40 + 200) + (long)*piVar19 * (long)iVar17;
                      func_0x0022d49c(puVar35 + 0x3e,iVar17,uVar36,
                                      *(long *)(puVar35 + 6) +
                                      (long)(int)puVar35[0x21] * (long)iVar17,lVar38);
                      if (*(int *)(lVar40 + 0xc) != 0) {
                        iVar17 = uVar49 - iVar17;
                        lVar14 = *(long *)(lVar40 + 0xd0);
                        do {
                          (**(code **)((ulong)*(uint *)(lVar40 + 0xc) * 8 + 0xb6d020))
                                    (lVar14,lVar38,lVar38,lVar41);
                          lVar4 = lVar38 + lVar41;
                          iVar17 = iVar17 + -1;
                          lVar14 = lVar38;
                          lVar38 = lVar4;
                        } while (iVar17 != 0);
                        *(long *)(lVar40 + 0xd0) = lVar4 - lVar41;
                      }
                    }
                    puVar35[0x25] = uVar36;
                    puVar35[0x23] = uVar36;
                  }
                  uVar24 = uVar36;
                }
                uVar48 = uVar28 + uVar48;
                if (((int)uVar48 < iVar43) && ((uVar44 & uVar47) != 0)) {
                  uVar49 = puVar35[0x31];
                  if (uVar49 == 0) {
                    iVar17 = 0;
                  }
                  else {
                    iVar17 = *(int *)(*(long *)(puVar35 + 0x34) +
                                     (long)(((int)uVar44 >> (uVar49 & 0x1f)) +
                                           puVar35[0x32] * ((int)uVar24 >> (uVar49 & 0x1f))) * 4);
                  }
                  plStack_80 = (long *)(*(long *)(puVar35 + 0x38) + (long)iVar17 * 0x238);
                }
                goto LAB_00229a4c;
              }
            }
            bVar13 = true;
            uVar49 = *puStack_78;
            goto joined_r0x00229adc;
          }
          *(char *)(lVar29 + (int)uVar48) = (char)uVar10;
          uVar48 = uVar48 + 1;
          uVar44 = uVar44 + 1;
          if (iVar7 <= (int)uVar44) {
            uVar44 = 0;
            uVar24 = uVar49 + 1;
            if (((int)uVar49 < (int)param_2) && ((uVar24 & 0xf) == 0)) {
              piVar19 = *(int **)(puVar35 + 2);
              lVar40 = *(long *)(piVar19 + 0xe);
              piVar5 = piVar19 + 0x20;
              if (1 < *(uint *)(lVar40 + 0xc)) {
                piVar5 = piVar25;
              }
              iVar17 = puVar35[0x23];
              if ((int)puVar35[0x23] <= *piVar5) {
                iVar17 = *piVar5;
              }
              if (iVar17 <= (int)uVar49) {
                lVar41 = (long)*piVar19;
                lVar38 = *(long *)(lVar40 + 200) + (long)*piVar19 * (long)iVar17;
                func_0x0022d49c(puVar35 + 0x3e,iVar17,uVar24,
                                *(long *)(puVar35 + 6) + (long)(int)puVar35[0x21] * (long)iVar17,
                                lVar38);
                if (*(int *)(lVar40 + 0xc) != 0) {
                  iVar17 = (uVar49 - iVar17) + 1;
                  lVar14 = *(long *)(lVar40 + 0xd0);
                  do {
                    (**(code **)((ulong)*(uint *)(lVar40 + 0xc) * 8 + 0xb6d020))
                              (lVar14,lVar38,lVar38,lVar41);
                    lVar4 = lVar38 + lVar41;
                    iVar17 = iVar17 + -1;
                    lVar14 = lVar38;
                    lVar38 = lVar4;
                  } while (iVar17 != 0);
                  *(long *)(lVar40 + 0xd0) = lVar4 - lVar41;
                }
              }
              uVar44 = 0;
              puVar35[0x25] = uVar24;
              puVar35[0x23] = uVar24;
            }
          }
LAB_00229a4c:
          uVar49 = uVar24;
          if (*puStack_78 != 0) {
            *puStack_78 = 1;
            break;
          }
          if (*(long *)(puVar35 + 0x10) == *(long *)(puVar35 + 0xe)) {
            uVar36 = (uint)(0x40 < (int)puVar35[0x12]);
          }
          else {
            uVar36 = 0;
          }
          *puStack_78 = uVar36;
          if ((uVar36 != 0) || (iVar43 <= (int)uVar48)) break;
        } while( true );
      }
    }
    puStack_78 = puVar35 + 0x13;
    if ((int)param_2 <= (int)uVar49) {
      uVar49 = param_2;
    }
    piVar19 = *(int **)(puVar35 + 2);
    lVar29 = *(long *)(piVar19 + 0xe);
    piVar5 = piVar19 + 0x20;
    if (1 < *(uint *)(lVar29 + 0xc)) {
      piVar5 = piVar25;
    }
    iVar8 = puVar35[0x23];
    if ((int)puVar35[0x23] <= *piVar5) {
      iVar8 = *piVar5;
    }
    iVar43 = uVar49 - iVar8;
    if (iVar43 != 0 && iVar8 <= (int)uVar49) {
      lVar38 = (long)*piVar19;
      lVar40 = *(long *)(lVar29 + 200) + (long)*piVar19 * (long)iVar8;
      func_0x0022d49c(puVar35 + 0x3e,iVar8,uVar49,
                      *(long *)(puVar35 + 6) + (long)(int)puVar35[0x21] * (long)iVar8,lVar40);
      if (*(int *)(lVar29 + 0xc) != 0) {
        lVar41 = *(long *)(lVar29 + 0xd0);
        do {
          (**(code **)((ulong)*(uint *)(lVar29 + 0xc) * 8 + 0xb6d020))(lVar41,lVar40,lVar40,lVar38);
          lVar14 = lVar40 + lVar38;
          iVar43 = iVar43 + -1;
          lVar41 = lVar40;
          lVar40 = lVar14;
        } while (iVar43 != 0);
        *(long *)(lVar29 + 0xd0) = lVar14 - lVar38;
      }
    }
    bVar13 = false;
    puVar35[0x25] = uVar49;
    puVar35[0x23] = uVar49;
    uVar49 = *puStack_78;
joined_r0x00229adc:
    if (uVar49 == 0) {
      puStack_78 = puVar35 + 0x13;
      if (*(long *)(puVar35 + 0x10) == *(long *)(puVar35 + 0xe)) {
        bVar1 = 0x40 < (int)puVar35[0x12];
        *puStack_78 = (uint)bVar1;
      }
      else {
        bVar1 = false;
        *puStack_78 = 0;
      }
    }
    else {
      puStack_78 = puVar35 + 0x13;
      bVar1 = true;
      *puStack_78 = 1;
    }
    if ((bVar13) || ((bVar1 && ((int)uVar48 < iVar23 * iVar7)))) {
      uVar18 = 3;
      if (bVar1) {
        uVar18 = 5;
      }
      *puVar35 = uVar18;
      return 0;
    }
    puVar35[0x24] = uVar48;
  }
  return 1;
}



/* Entry: 0022a604; end: 0022a6fb;  */

undefined8 FUN_0022a604(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  if (param_2 == (int *)0x0) {
    *param_1 = 2;
    return 0;
  }
  *(int **)(param_1 + 2) = param_2;
  *param_1 = 0;
  FUN_0021f558(param_1 + 10,*(undefined8 *)(param_2 + 0x1a),*(undefined8 *)(param_2 + 0x18));
  puVar3 = param_1 + 10;
  func_0x0021f6f4(puVar3,8);
  if ((int)puVar3 == 0x2f) {
    puVar3 = param_1 + 10;
    func_0x0021f6f4(puVar3,0xe);
    puVar4 = param_1 + 10;
    func_0x0021f6f4(puVar4,0xe);
    func_0x0021f6f4(param_1 + 10,1);
    puVar5 = param_1 + 10;
    func_0x0021f6f4(puVar5,3);
    if (((int)puVar5 == 0) && (param_1[0x13] == 0)) {
      iVar2 = (int)puVar3 + 1;
      param_1[1] = 2;
      iVar1 = (int)puVar4 + 1;
      *param_2 = iVar2;
      param_2[1] = iVar1;
      FUN_002283d8(iVar2,iVar1,1,param_1,0);
      if (iVar2 != 0) {
        return 1;
      }
      goto LAB_0022a69c;
    }
  }
  *param_1 = 3;
LAB_0022a69c:
  FUN_00228144(param_1);
  return 0;
}



/* Entry: 0022a6fc; end: 0022ae23;  */

undefined8 FUN_0022a6fc(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined4 *puVar6;
  uint uVar7;
  int *piVar8;
  ulong uVar9;
  undefined8 *puVar10;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  piVar8 = *(int **)(param_1 + 2);
  puVar10 = *(undefined8 **)(piVar8 + 0xe);
  if (param_1[1] != 0) {
    *(undefined8 *)(param_1 + 4) = *puVar10;
    uVar3 = puVar10[5];
    FUN_0022b778(uVar3,piVar8,3);
    if ((int)uVar3 == 0) {
      *param_1 = 2;
      goto LAB_0022a8a4;
    }
    iVar1 = param_1[0x21];
    iVar2 = param_1[0x22];
    uVar9 = (long)*piVar8 & 0xffff;
    lVar4 = uVar9 + (long)*piVar8 * 0x10 + (long)iVar2 * (long)iVar1;
    FUN_0024b4dc(lVar4,4);
    *(long *)(param_1 + 6) = lVar4;
    if (lVar4 == 0) {
      *param_1 = 1;
      *(undefined8 *)(param_1 + 8) = 0;
      goto LAB_0022a8a4;
    }
    *(ulong *)(param_1 + 8) = lVar4 + (long)iVar2 * (long)iVar1 * 4 + uVar9 * 4;
    if (piVar8[0x22] == 0) {
LAB_0022a7e8:
      uVar7 = **(uint **)(param_1 + 4);
      if (0xfffffffb < uVar7 - 0xb) goto LAB_0022a7fc;
    }
    else {
      lVar4 = (long)piVar8[0x23] * 0x24 + 0x68;
      FUN_0024b4dc(lVar4,1);
      if (lVar4 == 0) {
        *param_1 = 1;
        goto LAB_0022a8a4;
      }
      *(long *)(param_1 + 0x58) = lVar4;
      *(long *)(param_1 + 0x5a) = lVar4;
      FUN_0024ae20();
      if (piVar8[0x22] == 0) goto LAB_0022a7e8;
LAB_0022a7fc:
      FUN_0022c148();
      uVar7 = **(uint **)(param_1 + 4);
    }
    if ((10 < uVar7) && (FUN_00233d70(), *(long *)(*(long *)(param_1 + 4) + 0x28) != 0)) {
      FUN_0022c148();
    }
    if ((((param_1[0x14] != 0) && (0 < (int)param_1[0x26])) &&
        (plVar5 = (long *)(param_1 + 0x2c), *plVar5 == 0)) &&
       (FUN_0021f7b4(plVar5,param_1[0x2b]), (int)plVar5 == 0)) {
      *param_1 = 1;
      goto LAB_0022a8a4;
    }
    param_1[1] = 0;
  }
  puVar6 = param_1;
  func_0x00229b80(param_1,*(undefined8 *)(param_1 + 6),param_1[0x21],param_1[0x22],piVar8[0x21],
                  0x22a8dc);
  if ((int)puVar6 != 0) {
    *(undefined4 *)(puVar10 + 4) = param_1[0x25];
    return 1;
  }
LAB_0022a8a4:
  FUN_00228144(param_1);
  return 0;
}



/* Entry: 0022ae24; end: 0022af5f;  */

void FUN_0022ae24(undefined8 *param_1,int param_2,ulong param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong *puVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  long lVar8;
  ulong uVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar3 = (ulong *)((long)param_1 + (long)param_2 * -4);
  uVar4 = (uint)param_3;
  if (((((ulong)param_1 & 3) != 0) || (2 < param_2)) || ((int)uVar4 < 4)) {
    if ((int)uVar4 <= param_2) {
                    /* WARNING: Could not recover jumptable at 0x0077a858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_0099a3f8)
                (param_1,puVar3,
                 -(param_3 >> 0x1f & 1) & 0xfffffffc00000000 | (param_3 & 0xffffffff) << 2);
      return;
    }
    if ((int)uVar4 < 1) {
      return;
    }
    uVar5 = 0;
    uVar6 = (ulong)param_2;
    if ((7 < uVar4) && ((uVar6 & 0x3ffffffffffffff8) != 0)) {
      uVar5 = param_3 & 0x7ffffff8;
      puVar11 = param_1;
      uVar12 = uVar5;
      do {
        puVar1 = (undefined8 *)((long)puVar11 + uVar6 * -4);
        uVar13 = *puVar1;
        uVar15 = puVar1[3];
        uVar14 = puVar1[2];
        puVar11[1] = puVar1[1];
        *puVar11 = uVar13;
        puVar11[3] = uVar15;
        puVar11[2] = uVar14;
        uVar12 = uVar12 - 8;
        puVar11 = puVar11 + 4;
      } while (uVar12 != 0);
      if (uVar5 == (param_3 & 0xffffffff)) {
        return;
      }
    }
    lVar8 = (param_3 & 0xffffffff) - uVar5;
    puVar7 = (undefined4 *)((long)param_1 + uVar5 * 4);
    do {
      *puVar7 = puVar7[-uVar6];
      lVar8 = lVar8 + -1;
      puVar7 = puVar7 + 1;
    } while (lVar8 != 0);
    return;
  }
  if (param_2 == 1) {
    uVar2 = (uint)*puVar3;
    uVar6 = (ulong)uVar2;
    uVar5 = CONCAT44(uVar2,uVar2);
  }
  else {
    uVar6 = *puVar3;
    uVar5 = uVar6;
  }
  if (((uint)param_1 >> 2 & 1) != 0) {
    puVar3 = (ulong *)((long)puVar3 + 4);
    *(int *)param_1 = (int)uVar6;
    param_3 = (ulong)(uVar4 - 1);
    uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
    param_1 = (undefined8 *)((long)param_1 + 4);
  }
  uVar6 = param_3 >> 1 & 0x7fffffff;
  if ((uint)param_3 < 8) {
    uVar9 = 0;
  }
  else {
    uVar9 = param_3 >> 1 & 0x7ffffffc;
    puVar10 = param_1 + 2;
    uVar12 = uVar9;
    do {
      puVar10[-1] = uVar5;
      puVar10[-2] = uVar5;
      puVar10[1] = uVar5;
      *puVar10 = uVar5;
      puVar10 = puVar10 + 4;
      uVar12 = uVar12 - 4;
    } while (uVar12 != 0);
    if (uVar9 == uVar6) goto LAB_0022af40;
  }
  lVar8 = uVar6 - uVar9;
  puVar10 = param_1 + uVar9;
  do {
    *puVar10 = uVar5;
    lVar8 = lVar8 + -1;
    puVar10 = puVar10 + 1;
  } while (lVar8 != 0);
LAB_0022af40:
  if ((param_3 & 1) == 0) {
    return;
  }
  uVar4 = (uint)param_3 & 0xfffffffe;
  *(uint *)((long)param_1 + (long)(int)uVar4 * 4) = *(uint *)((long)puVar3 + (long)(int)uVar4 * 4);
  return;
}



/* Entry: 0022af60; end: 0022b32f;  */

uint ** FUN_0022af60(uint *param_1,ulong param_2,uint *param_3,uint *param_4,uint *param_5,
                    uint *param_6,undefined4 *param_7,long *param_8)

{
  bool bVar1;
  bool bVar2;
  uint *puVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  uint **ppuVar8;
  ulong uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  long lStack_a0;
  long lStack_98;
  ulong uStack_90;
  ulong uStack_88;
  long lStack_80;
  uint uStack_78;
  uint uStack_74;
  ulong uStack_70;
  uint *puStack_68;
  
  if (param_8 == (long *)0x0) {
    iVar7 = 0;
  }
  else {
    iVar7 = (int)param_8[2];
  }
  if (param_1 == (uint *)0x0) {
    return (uint **)((long)&MACH_HEADER.cputype + 3);
  }
  if (param_2 < 0xc) {
    return (uint **)((long)&MACH_HEADER.cputype + 3);
  }
  lStack_80 = 0;
  lStack_98 = 0;
  lStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uVar14 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
  uVar14 = uVar14 >> 0x10 | uVar14 << 0x10;
  bVar4 = uVar14 < 0x52494646;
  bVar1 = 0x52494646 < uVar14;
  puStack_68 = param_1;
  uStack_70 = param_2;
  if (bVar1 == bVar4) {
    if ((param_1[2] != 0x50424557) || (uStack_88 = (ulong)param_1[1], param_1[1] + 9 < 0x15))
    goto LAB_0022b230;
    if (((iVar7 != 0) && (param_2 - 8 < uStack_88)) ||
       (puStack_68 = param_1 + 3, uStack_70 = param_2 - 0xc, param_2 - 0xc < 8)) goto LAB_0022b0c4;
  }
  uVar14 = (*puStack_68 & 0xff00ff00) >> 8 | (*puStack_68 & 0xff00ff) << 8;
  uVar14 = uVar14 >> 0x10 | uVar14 << 0x10;
  bVar5 = uVar14 < 0x56503858;
  bVar2 = 0x56503858 < uVar14;
  if (bVar2 == bVar5) {
    if (puStack_68[1] != 10) goto LAB_0022b230;
    bVar6 = uStack_70 < 0x12;
    uStack_70 = uStack_70 - 0x12;
    if (bVar6) {
LAB_0022b0c4:
      return (uint **)((long)&MACH_HEADER.cputype + 3);
    }
    uVar14 = (uint3)puStack_68[3] + 1;
    uVar13 = *(uint3 *)((long)puStack_68 + 0xf) + 1;
    if (((ulong)uVar14 * (ulong)uVar13 & 0xffffffff00000000) != 0) goto LAB_0022b230;
    uVar12 = puStack_68[2];
    puStack_68 = (uint *)((long)puStack_68 + 0x12);
    if (bVar1 != bVar4) goto LAB_0022b230;
    uVar11 = uVar12 >> 1 & 1;
  }
  else {
    uVar11 = 0;
    uVar12 = 0;
    uVar13 = 0;
    uVar14 = 0;
  }
  if (param_5 != (uint *)0x0) {
    *param_5 = uVar12 >> 4 & 1;
  }
  if (param_6 != (uint *)0x0) {
    *param_6 = uVar11;
  }
  if (param_7 != (undefined4 *)0x0) {
    *param_7 = 0;
  }
  uVar12 = 0;
  if (param_8 == (long *)0x0) {
    uVar12 = uVar11;
  }
  uStack_78 = uVar13;
  uStack_74 = uVar14;
  if (uVar12 != 0) goto LAB_0022b1e4;
  if (uStack_70 < 4) goto joined_r0x0022b2b8;
  if (bVar1 == bVar4 && bVar2 == bVar5) {
LAB_0022b158:
    ppuVar8 = &puStack_68;
    FUN_0022b9c0(ppuVar8,&uStack_70,uStack_88,&lStack_a0,&lStack_98);
    uVar9 = uStack_88;
    if ((int)ppuVar8 == 0) goto LAB_0022b1a0;
  }
  else {
    uVar9 = uStack_88;
    if ((bVar1 != bVar4) && (bVar2 != bVar5)) {
      if (*puStack_68 == 0x48504c41) goto LAB_0022b158;
      uVar9 = 0;
    }
LAB_0022b1a0:
    ppuVar8 = &puStack_68;
    FUN_0022baf0(ppuVar8,&uStack_70,iVar7,uVar9,&uStack_90,&lStack_80);
    puVar3 = puStack_68;
    if ((int)ppuVar8 == 0) {
      if (0xfffffff6 < uStack_90) goto LAB_0022b230;
      if ((param_7 != (undefined4 *)0x0) && (uVar11 == 0)) {
        uVar10 = 1;
        if ((int)lStack_80 != 0) {
          uVar10 = 2;
        }
        *param_7 = uVar10;
      }
      if ((int)lStack_80 == 0) {
        if (9 < uStack_70) {
          func_0x00225dac();
          iVar7 = (int)puStack_68;
          goto joined_r0x0022b2d4;
        }
      }
      else if (4 < uStack_70) {
        FUN_00227ffc(puStack_68,uStack_70,&uStack_74,&uStack_78);
        iVar7 = (int)puStack_68;
joined_r0x0022b2d4:
        if (iVar7 == 0) {
LAB_0022b230:
          return (uint **)((long)&MACH_HEADER.magic + 3);
        }
        if (bVar2 == bVar5) {
          ppuVar8 = (uint **)((long)&MACH_HEADER.magic + 3);
          if (uVar14 != uStack_74) {
            return ppuVar8;
          }
          if (uVar13 != uStack_78) {
            return ppuVar8;
          }
        }
        if (param_8 != (long *)0x0) {
          param_8[1] = param_2;
          *param_8 = (long)param_1;
          param_8[3] = 0;
          param_8[2] = 0;
          param_8[5] = lStack_98;
          param_8[4] = lStack_a0;
          param_8[7] = uStack_88;
          param_8[6] = uStack_90;
          param_8[8] = lStack_80;
          param_8[3] = (long)puVar3 - *param_8;
        }
        goto LAB_0022b1e4;
      }
joined_r0x0022b2b8:
      ppuVar8 = (uint **)((long)&MACH_HEADER.cputype + 3);
    }
  }
  if (param_8 != (long *)0x0) {
    return ppuVar8;
  }
  if (bVar2 != bVar5) {
    return ppuVar8;
  }
  if ((int)ppuVar8 != 7) {
    return ppuVar8;
  }
LAB_0022b1e4:
  if (param_5 != (uint *)0x0) {
    *param_5 = *param_5 | (uint)(lStack_a0 != 0);
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = uStack_74;
  }
  if (param_4 == (uint *)0x0) {
    return (uint **)0x0;
  }
  *param_4 = uStack_78;
  return (uint **)0x0;
}



/* Entry: 0022b330; end: 0022b55b;  */

ulong FUN_0022b330(long param_1,long param_2,ulong *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  int iVar4;
  long lStack_120;
  long lStack_118;
  undefined4 uStack_110;
  long lStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  int iStack_e0;
  uint uStack_d8;
  undefined4 uStack_d4;
  long lStack_78;
  long lStack_70;
  int iStack_34;
  
  uStack_110 = 1;
  iStack_34 = 0;
  lStack_120 = param_1;
  lStack_118 = param_2;
  FUN_0022af60(param_1,param_2,0,0,0,&iStack_34,0,&lStack_120);
  uStack_d8 = (uint)param_1;
  if (uStack_d8 == 0) {
    if (iStack_34 != 0) goto LAB_0022b394;
  }
  else if (uStack_d8 == 7 && iStack_34 != 0) {
LAB_0022b394:
    uStack_d8 = 4;
  }
  if (uStack_d8 != 0) {
    return (ulong)uStack_d8;
  }
  FUN_00225c3c(&uStack_d8,0x208);
  lStack_70 = lStack_120 + lStack_108;
  lStack_78 = lStack_118 - lStack_108;
  puVar1 = param_3;
  FUN_0022315c(param_3,&uStack_d8);
  if (iStack_e0 == 0) {
    FUN_00225c74();
    if (puVar1 == (ulong *)0x0) {
      return 1;
    }
    puVar1[0x173] = uStack_100;
    puVar1[0x174] = uStack_f8;
    puVar2 = puVar1;
    FUN_00225e60();
    if ((int)puVar2 == 0) {
LAB_0022b504:
      uVar3 = (ulong)(uint)*puVar1;
    }
    else {
      uVar3 = (ulong)uStack_d8;
      FUN_00220380(uVar3,uStack_d4,param_3[5],*param_3);
      if ((int)uVar3 == 0) {
        uVar3 = param_3[5];
        FUN_00222e3c(uVar3,&lStack_120,uStack_d8,uStack_d4);
        *(uint *)(puVar1 + 0x19) = (uint)uVar3;
        FUN_002209ac(param_3[5],puVar1);
        puVar2 = puVar1;
        FUN_00226df8(puVar1,&uStack_d8);
        if ((int)puVar2 == 0) goto LAB_0022b504;
        uVar3 = 0;
      }
    }
    func_0x00225d2c(puVar1);
    iVar4 = (int)uVar3;
  }
  else {
    FUN_00228104();
    if (puVar1 == (ulong *)0x0) {
      return 1;
    }
    puVar2 = puVar1;
    FUN_0022a604();
    if ((int)puVar2 == 0) {
LAB_0022b4d0:
      uVar3 = (ulong)(uint)*puVar1;
    }
    else {
      uVar3 = (ulong)uStack_d8;
      FUN_00220380(uVar3,uStack_d4,param_3[5],*param_3);
      if ((int)uVar3 == 0) {
        puVar2 = puVar1;
        FUN_0022a6fc();
        if ((int)puVar2 != 0) {
          FUN_00228204(puVar1);
          goto LAB_0022b518;
        }
        goto LAB_0022b4d0;
      }
    }
    FUN_00228204(puVar1);
    iVar4 = (int)uVar3;
  }
  if (iVar4 != 0) {
    FUN_00220694(*param_3);
    return uVar3;
  }
LAB_0022b518:
  if ((param_3[5] != 0) && (*(int *)(param_3[5] + 0x30) != 0)) {
    uVar3 = *param_3;
    FUN_002202e0(uVar3);
    return uVar3;
  }
  return 0;
}



/* Entry: 0022b55c; end: 0022b5bb;  */

undefined8 FUN_0022b55c(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((param_1 != (undefined8 *)0x0) && ((param_2 & 0xffffff00) == 0x200)) {
    param_1[0x1b] = 0;
    param_1[0x1a] = 0;
    param_1[0x1d] = 0;
    param_1[0x1c] = 0;
    param_1[0x17] = 0;
    param_1[0x16] = 0;
    param_1[0x19] = 0;
    param_1[0x18] = 0;
    param_1[0x13] = 0;
    param_1[0x12] = 0;
    param_1[0x15] = 0;
    param_1[0x14] = 0;
    param_1[0xf] = 0;
    param_1[0xe] = 0;
    param_1[0x11] = 0;
    param_1[0x10] = 0;
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[4] = 0;
    FUN_0022065c(param_1 + 5,0x208);
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 0022b5bc; end: 0022b5ff;  */

/* WARNING: Removing unreachable block (ram,0x0022af88) */
/* WARNING: Removing unreachable block (ram,0x0022af94) */
/* WARNING: Removing unreachable block (ram,0x0022b308) */
/* WARNING: Removing unreachable block (ram,0x0022b2bc) */
/* WARNING: Removing unreachable block (ram,0x0022b088) */
/* WARNING: Removing unreachable block (ram,0x0022b05c) */
/* WARNING: Type propagation algorithm not settling */

uint ** FUN_0022b5bc(uint *param_1,ulong param_2,uint *param_3,uint param_4)

{
  bool bVar1;
  bool bVar2;
  uint *puVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint **ppuVar7;
  uint *puVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  long alStack_a0 [4];
  undefined8 uStack_80;
  uint uStack_78;
  uint uStack_74;
  ulong uStack_70;
  uint *puStack_68;
  
  if (((param_1 == (uint *)0x0) || (param_3 == (uint *)0x0)) || ((param_4 & 0xffffff00) != 0x200)) {
    return (uint **)((long)&MACH_HEADER.magic + 2);
  }
  param_3[8] = 0;
  param_3[9] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[0] = 0;
  param_3[1] = 0;
  puVar8 = param_3 + 4;
  param_3[6] = 0;
  param_3[7] = 0;
  puVar8[0] = 0;
  puVar8[1] = 0;
  puVar3 = param_3 + 2;
  if (param_1 == (uint *)0x0) {
    return (uint **)((long)&MACH_HEADER.cputype + 3);
  }
  uVar9 = param_2 - 0xc;
  if (param_2 < 0xc) {
    return (uint **)((long)&MACH_HEADER.cputype + 3);
  }
  uStack_80 = 0;
  alStack_a0[1] = 0;
  alStack_a0[0] = 0;
  alStack_a0[3] = 0;
  alStack_a0[2] = 0;
  uVar13 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
  uVar13 = uVar13 >> 0x10 | uVar13 << 0x10;
  bVar4 = uVar13 < 0x52494646;
  bVar1 = 0x52494646 < uVar13;
  if (bVar1 == bVar4) {
    if ((param_1[2] != 0x50424557) || (alStack_a0[3] = (long)param_1[1], param_1[1] + 9 < 0x15))
    goto LAB_0022b230;
    param_1 = param_1 + 3;
    param_2 = uVar9;
    if (uVar9 < 8) goto LAB_0022b0c4;
  }
  uVar13 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
  uVar13 = uVar13 >> 0x10 | uVar13 << 0x10;
  bVar5 = uVar13 < 0x56503858;
  bVar2 = 0x56503858 < uVar13;
  if (bVar2 == bVar5) {
    if (param_1[1] != 10) goto LAB_0022b230;
    uStack_70 = param_2 - 0x12;
    if (param_2 < 0x12) {
LAB_0022b0c4:
      return (uint **)((long)&MACH_HEADER.cputype + 3);
    }
    uVar13 = (uint3)param_1[3] + 1;
    uVar12 = *(uint3 *)((long)param_1 + 0xf) + 1;
    if (((ulong)uVar13 * (ulong)uVar12 & 0xffffffff00000000) != 0) goto LAB_0022b230;
    uVar10 = param_1[2];
    puStack_68 = (uint *)((long)param_1 + 0x12);
    if (bVar1 != bVar4) goto LAB_0022b230;
    uVar11 = uVar10 >> 1 & 1;
  }
  else {
    uVar11 = 0;
    uVar10 = 0;
    uVar12 = 0;
    uVar13 = 0;
    puStack_68 = param_1;
    uStack_70 = param_2;
  }
  if (puVar3 != (uint *)0x0) {
    *puVar3 = uVar10 >> 4 & 1;
  }
  if (param_3 + 3 != (uint *)0x0) {
    param_3[3] = uVar11;
  }
  if (puVar8 != (uint *)0x0) {
    *puVar8 = 0;
  }
  uStack_78 = uVar12;
  uStack_74 = uVar13;
  if (uVar11 != 0) goto LAB_0022b1e4;
  if (uStack_70 < 4) {
    ppuVar7 = (uint **)((long)&MACH_HEADER.cputype + 3);
  }
  else {
    if (bVar1 == bVar4 && bVar2 == bVar5) {
LAB_0022b158:
      ppuVar7 = &puStack_68;
      FUN_0022b9c0(ppuVar7,&uStack_70,alStack_a0[3],alStack_a0,alStack_a0 + 1);
      uVar9 = alStack_a0[3];
      if ((int)ppuVar7 != 0) goto LAB_0022b1d8;
    }
    else {
      uVar9 = alStack_a0[3];
      if ((bVar1 != bVar4) && (bVar2 != bVar5)) {
        if (*puStack_68 == 0x48504c41) goto LAB_0022b158;
        uVar9 = 0;
      }
    }
    ppuVar7 = &puStack_68;
    FUN_0022baf0(ppuVar7,&uStack_70,0,uVar9,alStack_a0 + 2,&uStack_80);
    if ((int)ppuVar7 == 0) {
      if (0xfffffff6 < (ulong)alStack_a0[2]) goto LAB_0022b230;
      if (puVar8 != (uint *)0x0) {
        uVar10 = 1;
        if ((int)uStack_80 != 0) {
          uVar10 = 2;
        }
        *puVar8 = uVar10;
      }
      if ((int)uStack_80 == 0) {
        if (uStack_70 < 10) goto LAB_0022b2ac;
        func_0x00225dac();
        iVar6 = (int)puStack_68;
      }
      else {
        if (uStack_70 < 5) {
LAB_0022b2ac:
          ppuVar7 = (uint **)((long)&MACH_HEADER.cputype + 3);
          goto LAB_0022b1d8;
        }
        FUN_00227ffc(puStack_68,uStack_70,&uStack_74,&uStack_78);
        iVar6 = (int)puStack_68;
      }
      if (iVar6 == 0) {
LAB_0022b230:
        return (uint **)((long)&MACH_HEADER.magic + 3);
      }
      if (bVar2 == bVar5) {
        ppuVar7 = (uint **)((long)&MACH_HEADER.magic + 3);
        if (uVar13 != uStack_74) {
          return ppuVar7;
        }
        if (uVar12 != uStack_78) {
          return ppuVar7;
        }
      }
      goto LAB_0022b1e4;
    }
  }
LAB_0022b1d8:
  if (bVar2 != bVar5) {
    return ppuVar7;
  }
  if ((int)ppuVar7 != 7) {
    return ppuVar7;
  }
LAB_0022b1e4:
  if (puVar3 != (uint *)0x0) {
    *puVar3 = *puVar3 | (uint)(alStack_a0[0] != 0);
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = uStack_74;
  }
  if (param_3 + 1 == (uint *)0x0) {
    return (uint **)0x0;
  }
  param_3[1] = uStack_78;
  return (uint **)0x0;
}



/* Entry: 0022b600; end: 0022b777;  */

undefined1 * FUN_0022b600(undefined1 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_128 [120];
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (param_3 == (undefined8 *)0x0) {
    return (undefined1 *)((long)&MACH_HEADER.magic + 2);
  }
  if (param_1 == (undefined1 *)0x0) {
    return (undefined1 *)((long)&MACH_HEADER.magic + 2);
  }
  param_3[4] = 0;
  param_3[1] = 0;
  *param_3 = 0;
  param_3[3] = 0;
  param_3[2] = 0;
  puVar2 = param_1;
  FUN_0022af60();
  if ((int)puVar2 != 0) {
    if ((int)puVar2 == 7) {
      puVar2 = (undefined1 *)((long)&MACH_HEADER.magic + 3);
    }
    return puVar2;
  }
  uStack_80 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_a8 = 0;
  puStack_88 = param_3 + 0x14;
  puVar1 = param_3 + 5;
  puVar3 = puVar1;
  puStack_b0 = puVar1;
  func_0x0022096c(puVar1,param_3);
  if ((int)puVar3 != 0) {
    FUN_0022065c(auStack_128,0x208);
    auStack_128._0_4_ = *(undefined4 *)(param_3 + 5);
    auStack_128._4_8_ = *param_3;
    puStack_b0 = (undefined8 *)auStack_128;
    FUN_0022b330(param_1,param_2,&puStack_b0);
    if ((int)param_1 == 0) {
      param_1 = auStack_128;
      FUN_002206d4(param_1,puVar1);
    }
    FUN_00220694(auStack_128);
    return param_1;
  }
  FUN_0022b330(param_1,param_2,&puStack_b0);
  return param_1;
}



/* Entry: 0022b778; end: 0022b9bf;  */

undefined8 FUN_0022b778(int *param_1,undefined8 *param_2,uint param_3)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iStack_28;
  int iStack_24;
  
  iVar9 = (int)*param_2;
  iVar10 = (int)((ulong)*param_2 >> 0x20);
  if (param_1 == (int *)0x0) {
    *(undefined4 *)((long)param_2 + 0x74) = 0;
  }
  else {
    iVar7 = param_1[2];
    *(uint *)((long)param_2 + 0x74) = (uint)(0 < iVar7);
    if (0 < iVar7) {
      uVar3 = *(ulong *)(param_1 + 3);
      uVar3 = uVar3 ^ (uVar3 ^ uVar3 & 0xfffffffefffffffe) &
                      CONCAT44(-(uint)((int)((uint)(10 < param_3) << 0x1f) < 0),
                               -(uint)((int)((uint)(10 < param_3) << 0x1f) < 0));
      iVar5 = (int)uVar3;
      iVar6 = (int)(uVar3 >> 0x20);
      iVar7 = (int)*(undefined8 *)(param_1 + 5);
      iVar8 = (int)((ulong)*(undefined8 *)(param_1 + 5) >> 0x20);
      uVar4 = NEON_umaxv(CONCAT26(-(ushort)(iVar8 < 1),
                                  CONCAT24(-(ushort)(iVar7 < 1),
                                           CONCAT22(-(ushort)((long)uVar3 < 0),-(ushort)(iVar5 < 0))
                                          )),2);
      if ((uVar4 & 1) != 0) {
        return 0;
      }
      if (iVar9 < iVar5 + iVar7) {
        return 0;
      }
      if (iVar10 < iVar6 + iVar8) {
        return 0;
      }
      *(int *)(param_2 + 0xf) = iVar5;
      *(int *)((long)param_2 + 0x7c) = iVar7 + iVar5;
      *(int *)(param_2 + 0x10) = iVar6;
      *(int *)((long)param_2 + 0x84) = iVar8 + iVar6;
      *(int *)((long)param_2 + 0xc) = iVar7;
      *(int *)(param_2 + 2) = iVar8;
      goto joined_r0x0022b890;
    }
  }
  *(undefined4 *)(param_2 + 0xf) = 0;
  *(int *)((long)param_2 + 0x7c) = iVar9;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(int *)((long)param_2 + 0x84) = iVar10;
  *(int *)((long)param_2 + 0xc) = iVar9;
  *(int *)(param_2 + 2) = iVar10;
  iVar7 = iVar9;
  iVar8 = iVar10;
joined_r0x0022b890:
  if (param_1 == (int *)0x0) {
    *(undefined4 *)(param_2 + 0x11) = 0;
    *(undefined4 *)(param_2 + 0xe) = 0;
    *(undefined4 *)(param_2 + 0xb) = 1;
    return 1;
  }
  iVar5 = param_1[7];
  *(uint *)(param_2 + 0x11) = (uint)(0 < iVar5);
  if (iVar5 < 1) {
    bVar1 = true;
  }
  else {
    iStack_24 = param_1[8];
    iStack_28 = param_1[9];
    FUN_0024aefc(iVar7,iVar8,&iStack_24,&iStack_28);
    if (iVar7 == 0) {
      return 0;
    }
    *(int *)((long)param_2 + 0x8c) = iStack_24;
    *(int *)(param_2 + 0x12) = iStack_28;
    bVar1 = *(int *)(param_2 + 0x11) == 0;
  }
  iVar7 = param_1[1];
  *(uint *)(param_2 + 0xe) = (uint)(*param_1 != 0);
  *(uint *)(param_2 + 0xb) = (uint)(iVar7 == 0);
  if (!bVar1) {
    iVar9 = iVar9 * 3;
    iVar7 = iVar9 + 3;
    if (-1 < iVar9) {
      iVar7 = iVar9;
    }
    if (*(int *)((long)param_2 + 0x8c) < iVar7 >> 2) {
      iVar10 = iVar10 * 3;
      iVar9 = iVar10 + 3;
      if (-1 < iVar10) {
        iVar9 = iVar10;
      }
      uVar2 = (uint)(*(int *)(param_2 + 0x12) < iVar9 >> 2);
    }
    else {
      uVar2 = 0;
    }
    *(uint *)(param_2 + 0xe) = uVar2;
    *(undefined4 *)(param_2 + 0xb) = 0;
    return 1;
  }
  return 1;
}



/* Entry: 0022b9c0; end: 0022baef;  */

undefined8 FUN_0022b9c0(long *param_1,ulong *param_2,ulong param_3,long *param_4,ulong *param_5)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int *piVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  piVar4 = (int *)*param_1;
  uVar5 = *param_2;
  *param_4 = 0;
  *param_5 = 0;
  *param_1 = (long)piVar4;
  *param_2 = uVar5;
  if (7 < uVar5) {
    if (param_3 == 0) {
      do {
        uVar2 = piVar4[1];
        if (0xfffffff6 < uVar2) {
          return 3;
        }
        if (*piVar4 == 0x20385056) {
          return 0;
        }
        if (*piVar4 == 0x4c385056) {
          return 0;
        }
        uVar6 = (ulong)(uVar2 + 9 & 0xfffffffe);
        bVar3 = uVar5 < uVar6;
        uVar5 = uVar5 - uVar6;
        if (bVar3) {
          return 7;
        }
        if (*piVar4 == 0x48504c41) {
          *param_4 = (long)(piVar4 + 2);
          *param_5 = (ulong)uVar2;
        }
        piVar4 = (int *)((long)piVar4 + uVar6);
        *param_1 = (long)piVar4;
        *param_2 = uVar5;
      } while (7 < uVar5);
    }
    else {
      uVar6 = 0x16;
      do {
        uVar2 = piVar4[1];
        if (0xfffffff6 < uVar2) {
          return 3;
        }
        uVar1 = uVar2 + 9 & 0xfffffffe;
        uVar7 = (ulong)uVar1;
        uVar6 = (ulong)(uVar1 + (int)uVar6);
        if (param_3 < uVar6) {
          return 3;
        }
        if ((*piVar4 == 0x20385056) || (*piVar4 == 0x4c385056)) {
          return 0;
        }
        bVar3 = uVar5 < uVar7;
        uVar5 = uVar5 - uVar7;
        if (bVar3) {
          return 7;
        }
        if (*piVar4 == 0x48504c41) {
          *param_4 = (long)(piVar4 + 2);
          *param_5 = (ulong)uVar2;
        }
        piVar4 = (int *)((long)piVar4 + uVar7);
        *param_1 = (long)piVar4;
        *param_2 = uVar5;
      } while (7 < uVar5);
    }
  }
  return 7;
}



/* Entry: 0022baf0; end: 0022bbd7;  */

undefined8
FUN_0022baf0(long *param_1,ulong *param_2,int param_3,ulong param_4,ulong *param_5,uint *param_6)

{
  int iVar1;
  int *piVar2;
  ulong uVar3;
  ulong uVar4;
  
  piVar2 = (int *)*param_1;
  iVar1 = *piVar2;
  uVar3 = *param_2;
  if (uVar3 < 8) {
    return 7;
  }
  if (*piVar2 != 0x20385056 && iVar1 != 0x4c385056) {
    FUN_00227fd0(piVar2,uVar3);
    *param_6 = (uint)piVar2;
    *param_5 = *param_2;
    return 0;
  }
  uVar4 = (ulong)(uint)piVar2[1];
  if ((0xb < param_4) && (param_4 - 0xc < uVar4)) {
    return 3;
  }
  if ((param_3 != 0) && (uVar3 - 8 < uVar4)) {
    return 7;
  }
  *param_5 = uVar4;
  *param_1 = (long)(piVar2 + 2);
  *param_2 = *param_2 - 8;
  *param_6 = (uint)(iVar1 == 0x4c385056);
  return 0;
}



/* Entry: 0022bbd8; end: 0022c05f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_0022bbd8(undefined8 *param_1,uint param_2,int param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  uint *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar11;
  ulong uVar10;
  uint uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  uint uVar16;
  ulong uVar15;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  
  if (0 < (int)param_2) {
    uVar1 = (ulong)param_2;
    if (param_3 == 0) {
      if (param_2 < 4) {
        uVar3 = 0;
      }
      else {
        uVar3 = uVar1 & 0x7ffffffc;
        puVar5 = param_1;
        uVar6 = uVar3;
        do {
          uVar14 = puVar5[1];
          uVar7 = *puVar5;
          uVar18 = (uint)uVar7;
          uVar17 = (uint)((ulong)uVar7 >> 0x20);
          uVar21 = (uint)uVar14;
          uVar23 = (uint)((ulong)uVar14 >> 0x20);
          iVar24 = -(uint)(uVar18 < 0x1000000);
          iVar25 = -(uint)(uVar17 < 0x1000000);
          iVar26 = -(uint)(uVar21 < 0x1000000);
          iVar27 = -(uint)(uVar23 < 0x1000000);
          iVar28 = (uVar18 >> 0x18) * 0x10101;
          iVar30 = (uVar17 >> 0x18) * 0x10101;
          iVar32 = (uVar21 >> 0x18) * 0x10101;
          iVar34 = (uVar23 >> 0x18) * 0x10101;
          iVar29 = (uint)(byte)((ulong)uVar7 >> 0x18) * 0x1000000 +
                   (iVar28 * (uint)(byte)uVar7 + 0x800000 >> 0x18);
          iVar31 = (uint)(byte)((ulong)uVar7 >> 0x38) * 0x1000000 +
                   (iVar30 * (uint)(byte)((ulong)uVar7 >> 0x20) + 0x800000 >> 0x18);
          iVar33 = (uint)(byte)((ulong)uVar14 >> 0x18) * 0x1000000 +
                   (iVar32 * (uint)(byte)uVar14 + 0x800000 >> 0x18);
          iVar35 = (uint)(byte)((ulong)uVar14 >> 0x38) * 0x1000000 +
                   (iVar34 * (uint)(byte)((ulong)uVar14 >> 0x20) + 0x800000 >> 0x18);
          uVar10 = CONCAT44(uVar17 >> 0x10,uVar18 >> 0x10) & 0xffff00ffffff00ff;
          uVar15 = CONCAT44(uVar23 >> 0x10,uVar21 >> 0x10) & 0xffff00ffffff00ff;
          uVar9 = CONCAT13((byte)((uint)iVar29 >> 0x18) & ~(byte)((uint)iVar24 >> 0x18),
                           CONCAT12((byte)((uint)(iVar28 * (int)uVar10 + 0x800000) >> 0x18) &
                                    ~(byte)((uint)iVar24 >> 0x10),
                                    CONCAT11((byte)(iVar28 * (uint)(byte)((ulong)uVar7 >> 8) +
                                                    0x800000 >> 0x18) & ~(byte)((uint)iVar24 >> 8),
                                             (byte)iVar29 & ~(byte)iVar24)));
          uVar13 = CONCAT13((byte)((uint)iVar33 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18),
                            CONCAT12((byte)((uint)(iVar32 * (int)uVar15 + 0x800000) >> 0x18) &
                                     ~(byte)((uint)iVar26 >> 0x10),
                                     CONCAT11((byte)(iVar32 * (uint)(byte)((ulong)uVar14 >> 8) +
                                                     0x800000 >> 0x18) & ~(byte)((uint)iVar26 >> 8),
                                              (byte)iVar33 & ~(byte)iVar26)));
          if (uVar18 < 0xff000000) {
            *(undefined4 *)puVar5 = uVar9;
          }
          if (uVar17 < 0xff000000) {
            *(int *)((long)puVar5 + 4) =
                 (int)(CONCAT17((byte)((uint)iVar31 >> 0x18) & ~(byte)((uint)iVar25 >> 0x18),
                                CONCAT16((byte)((uint)(iVar30 * (int)(uVar10 >> 0x20) + 0x800000) >>
                                               0x18) & ~(byte)((uint)iVar25 >> 0x10),
                                         CONCAT15((byte)(iVar30 * (uint)(byte)((ulong)uVar7 >> 0x28)
                                                         + 0x800000 >> 0x18) &
                                                  ~(byte)((uint)iVar25 >> 8),
                                                  CONCAT14((byte)iVar31 & ~(byte)iVar25,uVar9)))) >>
                      0x20);
          }
          if (uVar21 < 0xff000000) {
            *(undefined4 *)(puVar5 + 1) = uVar13;
          }
          if (uVar23 < 0xff000000) {
            *(int *)((long)puVar5 + 0xc) =
                 (int)(CONCAT17((byte)((uint)iVar35 >> 0x18) & ~(byte)((uint)iVar27 >> 0x18),
                                CONCAT16((byte)((uint)(iVar34 * (int)(uVar15 >> 0x20) + 0x800000) >>
                                               0x18) & ~(byte)((uint)iVar27 >> 0x10),
                                         CONCAT15((byte)(iVar34 * (uint)(byte)((ulong)uVar14 >> 0x28
                                                                              ) + 0x800000 >> 0x18)
                                                  & ~(byte)((uint)iVar27 >> 8),
                                                  CONCAT14((byte)iVar35 & ~(byte)iVar27,uVar13))))
                      >> 0x20);
          }
          puVar5 = puVar5 + 2;
          uVar6 = uVar6 - 4;
        } while (uVar6 != 0);
        if (uVar3 == uVar1) {
          return;
        }
      }
      lVar2 = uVar1 - uVar3;
      puVar4 = (uint *)((long)param_1 + uVar3 * 4);
      do {
        uVar18 = *puVar4;
        uVar17 = uVar18 >> 0x18;
        if (uVar17 < 0xff) {
          if (uVar17 == 0) {
            uVar18 = 0;
          }
          else {
            iVar24 = uVar17 * 0x10101;
            uVar1 = NEON_ushl(CONCAT44(uVar18,uVar18),0xfffffff0fffffff8,4);
            uVar7 = NEON_ushl(CONCAT44(iVar24 * (int)((uVar1 & 0xff000000ff) >> 0x20) + 0x800000,
                                       iVar24 * (int)(uVar1 & 0xff000000ff) + 0x800000),
                              0xfffffff8fffffff0,4);
            uVar18 = uVar18 & 0xff000000 | iVar24 * (uVar18 & 0xff) + 0x800000 >> 0x18 |
                     (uint)uVar7 & 0xff00 | (uint)((ulong)uVar7 >> 0x20) & 0xff0000;
          }
          *puVar4 = uVar18;
        }
        puVar4 = puVar4 + 1;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
    else {
      if (param_2 < 4) {
        uVar3 = 0;
      }
      else {
        uVar3 = uVar1 & 0x7ffffffc;
        puVar5 = param_1;
        uVar6 = uVar3;
        do {
          uVar14 = puVar5[1];
          uVar7 = *puVar5;
          uVar8 = (uint)uVar7;
          uVar11 = (uint)((ulong)uVar7 >> 0x20);
          uVar12 = (uint)uVar14;
          uVar16 = (uint)((ulong)uVar14 >> 0x20);
          uVar17 = -(uint)(uVar8 - 0x1000000 < 0xfe000000);
          uVar19 = -(uint)(uVar11 - 0x1000000 < 0xfe000000);
          uVar20 = -(uint)(uVar12 - 0x1000000 < 0xfe000000);
          uVar22 = -(uint)(uVar16 - 0x1000000 < 0xfe000000);
          uVar23 = uVar20;
          uVar18 = uVar22;
          uVar21 = uVar19;
          if ((uVar17 & 1) != 0) {
            uVar17 = 0;
            if (uVar8 >> 0x18 != 0) {
              uVar17 = 0xff000000 / (uVar8 >> 0x18);
            }
            uVar23 = 0;
            uVar18 = 0;
            uVar21 = 0;
          }
          if (((uVar19 & 1) != 0) && (uVar21 = 0, uVar11 >> 0x18 != 0)) {
            uVar21 = 0xff000000 / (uVar11 >> 0x18);
          }
          if (((uVar20 & 1) != 0) && (uVar23 = 0, uVar12 >> 0x18 != 0)) {
            uVar23 = 0xff000000 / (uVar12 >> 0x18);
          }
          if (((uVar22 & 1) != 0) && (uVar18 = 0, uVar16 >> 0x18 != 0)) {
            uVar18 = 0xff000000 / (uVar16 >> 0x18);
          }
          iVar24 = -(uint)(uVar8 < 0x1000000);
          iVar25 = -(uint)(uVar11 < 0x1000000);
          iVar26 = -(uint)(uVar12 < 0x1000000);
          iVar27 = -(uint)(uVar16 < 0x1000000);
          iVar28 = (uint)(byte)((ulong)uVar7 >> 0x18) * 0x1000000 +
                   (uVar17 * (byte)uVar7 + 0x800000 >> 0x18);
          iVar30 = (uint)(byte)((ulong)uVar7 >> 0x38) * 0x1000000 +
                   (uVar21 * (byte)((ulong)uVar7 >> 0x20) + 0x800000 >> 0x18);
          iVar32 = (uint)(byte)((ulong)uVar14 >> 0x18) * 0x1000000 +
                   (uVar23 * (byte)uVar14 + 0x800000 >> 0x18);
          iVar34 = (uint)(byte)((ulong)uVar14 >> 0x38) * 0x1000000 +
                   (uVar18 * (byte)((ulong)uVar14 >> 0x20) + 0x800000 >> 0x18);
          uVar10 = CONCAT44(uVar11 >> 0x10,uVar8 >> 0x10) & 0xffff00ffffff00ff;
          uVar15 = CONCAT44(uVar16 >> 0x10,uVar12 >> 0x10) & 0xffff00ffffff00ff;
          uVar9 = CONCAT13((byte)((uint)iVar28 >> 0x18) & ~(byte)((uint)iVar24 >> 0x18),
                           CONCAT12((byte)(uVar17 * (int)uVar10 + 0x800000 >> 0x18) &
                                    ~(byte)((uint)iVar24 >> 0x10),
                                    CONCAT11((byte)(uVar17 * (byte)((ulong)uVar7 >> 8) + 0x800000 >>
                                                   0x18) & ~(byte)((uint)iVar24 >> 8),
                                             (byte)iVar28 & ~(byte)iVar24)));
          uVar13 = CONCAT13((byte)((uint)iVar32 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18),
                            CONCAT12((byte)(uVar23 * (int)uVar15 + 0x800000 >> 0x18) &
                                     ~(byte)((uint)iVar26 >> 0x10),
                                     CONCAT11((byte)(uVar23 * (byte)((ulong)uVar14 >> 8) + 0x800000
                                                    >> 0x18) & ~(byte)((uint)iVar26 >> 8),
                                              (byte)iVar32 & ~(byte)iVar26)));
          if (uVar8 < 0xff000000) {
            *(undefined4 *)puVar5 = uVar9;
          }
          if (uVar11 < 0xff000000) {
            *(int *)((long)puVar5 + 4) =
                 (int)(CONCAT17((byte)((uint)iVar30 >> 0x18) & ~(byte)((uint)iVar25 >> 0x18),
                                CONCAT16((byte)(uVar21 * (int)(uVar10 >> 0x20) + 0x800000 >> 0x18) &
                                         ~(byte)((uint)iVar25 >> 0x10),
                                         CONCAT15((byte)(uVar21 * (byte)((ulong)uVar7 >> 0x28) +
                                                         0x800000 >> 0x18) &
                                                  ~(byte)((uint)iVar25 >> 8),
                                                  CONCAT14((byte)iVar30 & ~(byte)iVar25,uVar9)))) >>
                      0x20);
          }
          if (uVar12 < 0xff000000) {
            *(undefined4 *)(puVar5 + 1) = uVar13;
          }
          if (uVar16 < 0xff000000) {
            *(int *)((long)puVar5 + 0xc) =
                 (int)(CONCAT17((byte)((uint)iVar34 >> 0x18) & ~(byte)((uint)iVar27 >> 0x18),
                                CONCAT16((byte)(uVar18 * (int)(uVar15 >> 0x20) + 0x800000 >> 0x18) &
                                         ~(byte)((uint)iVar27 >> 0x10),
                                         CONCAT15((byte)(uVar18 * (byte)((ulong)uVar14 >> 0x28) +
                                                         0x800000 >> 0x18) &
                                                  ~(byte)((uint)iVar27 >> 8),
                                                  CONCAT14((byte)iVar34 & ~(byte)iVar27,uVar13))))
                      >> 0x20);
          }
          puVar5 = puVar5 + 2;
          uVar6 = uVar6 - 4;
        } while (uVar6 != 0);
        if (uVar3 == uVar1) {
          return;
        }
      }
      lVar2 = uVar1 - uVar3;
      puVar4 = (uint *)((long)param_1 + uVar3 * 4);
      do {
        uVar18 = *puVar4;
        uVar17 = uVar18 >> 0x18;
        if (uVar17 < 0xff) {
          if (uVar17 == 0) {
            uVar18 = 0;
          }
          else {
            uVar21 = 0;
            if (uVar17 != 0) {
              uVar21 = 0xff000000 / uVar17;
            }
            uVar1 = NEON_ushl(CONCAT44(uVar18,uVar18),0xfffffff0fffffff8,4);
            uVar7 = NEON_ushl(CONCAT44(uVar21 * (int)((uVar1 & 0xff000000ff) >> 0x20) + 0x800000,
                                       uVar21 * (int)(uVar1 & 0xff000000ff) + 0x800000),
                              0xfffffff8fffffff0,4);
            uVar18 = uVar18 & 0xff000000 | uVar21 * (uVar18 & 0xff) + 0x800000 >> 0x18 |
                     (uint)uVar7 & 0xff00 | (uint)((ulong)uVar7 >> 0x20) & 0xff0000;
          }
          *puVar4 = uVar18;
        }
        puVar4 = puVar4 + 1;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
  }
  return;
}



/* Entry: 0022c060; end: 0022c0c7;  */

void FUN_0022c060(long param_1,int param_2,undefined8 param_3,int param_4,undefined8 param_5)

{
  if (0 < param_4) {
    do {
      (*pcRam0000000000b6ce90)(param_1,param_3,param_5);
      param_1 = param_1 + param_2;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}



/* Entry: 0022c0c8; end: 0022c147;  */

void FUN_0022c0c8(long param_1,int param_2,long param_3,int param_4,undefined8 param_5,int param_6,
                 undefined8 param_7)

{
  if (0 < param_6) {
    do {
      (*pcRam0000000000b6ce98)(param_1,param_3,param_5,param_7);
      param_1 = param_1 + param_2;
      param_3 = param_3 + param_4;
      param_6 = param_6 + -1;
    } while (param_6 != 0);
  }
  return;
}



/* Entry: 0022c148; end: 0022c20b;  */

void FUN_0022c148(void)

{
  int iVar1;
  
  iVar1 = 0xaf83d8;
  _pthread_mutex_lock();
  if (iVar1 != 0) {
    return;
  }
  if (PTR_LOOP_00af83d0 != PTR_DAT_00af8418) {
    pcRam0000000000b6ce90 = FUN_0022bbd8;
    uRam0000000000b6ce98 = 0x22bfc0;
    pcRam0000000000b6ce58 = FUN_0022c20c;
    uRam0000000000b6cea0 = 0x22c76c;
    uRam0000000000b6ce88 = 0x22c978;
    uRam0000000000b6ce80 = 0x22c99c;
    func_0x00239020();
  }
  PTR_LOOP_00af83d0 = PTR_DAT_00af8418;
                    /* WARNING: Could not recover jumptable at 0x0077ad38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_mutex_unlock_0099a598)(0xaf83d8);
  return;
}



/* Entry: 0022c20c; end: 0022c9df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0022c20c(long param_1,uint param_2,int param_3,int param_4)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined6 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  ulong uVar16;
  byte *pbVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  int iVar22;
  ulong uVar23;
  int iVar28;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  int iVar27;
  int iVar29;
  undefined1 auVar26 [16];
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  byte bVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  undefined8 uVar46;
  undefined1 auVar47 [16];
  int iVar48;
  int iVar53;
  ulong uVar49;
  int iVar54;
  undefined1 auVar50 [16];
  int iVar55;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  int iVar56;
  undefined8 uVar57;
  int iVar59;
  int iVar60;
  undefined1 auVar58 [16];
  int iVar61;
  int iVar62;
  int iVar65;
  int iVar66;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  int iVar67;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  
  auVar15 = _UNK_007eeb80;
  auVar14 = _UNK_007eeb70;
  if ((0 < param_3) && (0 < (int)param_2)) {
    if (param_2 < 8) {
      param_3 = param_3 + 1;
      pbVar17 = (byte *)(param_1 + 6);
      do {
        bVar38 = pbVar17[-5];
        bVar42 = pbVar17[-6];
        iVar22 = (bVar42 & 0xf) * 0x1111;
        pbVar17[-5] = (byte)(iVar22 * (bVar38 & 0xf0 | (uint)(bVar38 >> 4)) >> 0x10) & 0xf0 |
                      (byte)(iVar22 * (bVar38 & 0xfffff00f | (bVar38 & 0xf) << 4) >> 0x14);
        pbVar17[-6] = (byte)(iVar22 * (bVar42 & 0xf0 | (uint)(bVar42 >> 4)) >> 0x10) & 0xf0 |
                      bVar42 & 0xf;
        if (param_2 != 1) {
          bVar38 = pbVar17[-3];
          bVar42 = pbVar17[-4];
          iVar22 = (bVar42 & 0xf) * 0x1111;
          pbVar17[-3] = (byte)(iVar22 * (bVar38 & 0xf0 | (uint)(bVar38 >> 4)) >> 0x10) & 0xf0 |
                        (byte)(iVar22 * (bVar38 & 0xfffff00f | (bVar38 & 0xf) << 4) >> 0x14);
          pbVar17[-4] = (byte)(iVar22 * (bVar42 & 0xf0 | (uint)(bVar42 >> 4)) >> 0x10) & 0xf0 |
                        bVar42 & 0xf;
          if (param_2 != 2) {
            bVar38 = pbVar17[-1];
            bVar42 = pbVar17[-2];
            iVar22 = (bVar42 & 0xf) * 0x1111;
            pbVar17[-1] = (byte)(iVar22 * (bVar38 & 0xf0 | (uint)(bVar38 >> 4)) >> 0x10) & 0xf0 |
                          (byte)(iVar22 * (bVar38 & 0xfffff00f | (bVar38 & 0xf) << 4) >> 0x14);
            pbVar17[-2] = (byte)(iVar22 * (bVar42 & 0xf0 | (uint)(bVar42 >> 4)) >> 0x10) & 0xf0 |
                          bVar42 & 0xf;
            if (param_2 != 3) {
              bVar38 = pbVar17[1];
              bVar42 = *pbVar17;
              iVar22 = (bVar42 & 0xf) * 0x1111;
              pbVar17[1] = (byte)(iVar22 * (bVar38 & 0xf0 | (uint)(bVar38 >> 4)) >> 0x10) & 0xf0 |
                           (byte)(iVar22 * (bVar38 & 0xfffff00f | (bVar38 & 0xf) << 4) >> 0x14);
              *pbVar17 = (byte)(iVar22 * (bVar42 & 0xf0 | (uint)(bVar42 >> 4)) >> 0x10) & 0xf0 |
                         bVar42 & 0xf;
              if (param_2 != 4) {
                bVar38 = pbVar17[3];
                bVar42 = pbVar17[2];
                iVar22 = (bVar42 & 0xf) * 0x1111;
                pbVar17[3] = (byte)(iVar22 * (bVar38 & 0xf0 | (uint)(bVar38 >> 4)) >> 0x10) & 0xf0 |
                             (byte)(iVar22 * (bVar38 & 0xfffff00f | (bVar38 & 0xf) << 4) >> 0x14);
                pbVar17[2] = (byte)(iVar22 * (bVar42 & 0xf0 | (uint)(bVar42 >> 4)) >> 0x10) & 0xf0 |
                             bVar42 & 0xf;
                if (param_2 != 5) {
                  bVar38 = pbVar17[5];
                  bVar42 = pbVar17[4];
                  iVar22 = (bVar42 & 0xf) * 0x1111;
                  pbVar17[5] = (byte)(iVar22 * (bVar38 & 0xf0 | (uint)(bVar38 >> 4)) >> 0x10) & 0xf0
                               | (byte)(iVar22 * (bVar38 & 0xfffff00f | (bVar38 & 0xf) << 4) >> 0x14
                                       );
                  pbVar17[4] = (byte)(iVar22 * (bVar42 & 0xf0 | (uint)(bVar42 >> 4)) >> 0x10) & 0xf0
                               | bVar42 & 0xf;
                  if (param_2 != 6) {
                    bVar38 = pbVar17[7];
                    bVar42 = pbVar17[6];
                    iVar22 = (bVar42 & 0xf) * 0x1111;
                    pbVar17[7] = (byte)(iVar22 * (bVar38 & 0xf0 | (uint)(bVar38 >> 4)) >> 0x10) &
                                 0xf0 | (byte)(iVar22 * (bVar38 & 0xfffff00f | (bVar38 & 0xf) << 4)
                                              >> 0x14);
                    pbVar17[6] = (byte)(iVar22 * (bVar42 & 0xf0 | (uint)(bVar42 >> 4)) >> 0x10) &
                                 0xf0 | bVar42 & 0xf;
                  }
                }
              }
            }
          }
        }
        param_3 = param_3 + -1;
        pbVar17 = pbVar17 + param_4;
      } while (1 < param_3);
    }
    else {
      uVar16 = (ulong)param_2;
      uVar18 = uVar16 & 0x7ffffff0;
      uVar19 = uVar16 & 0x7ffffff8;
      do {
        if (param_2 < 0x10) {
          uVar23 = 0;
LAB_0022c508:
          lVar20 = uVar23 - uVar19;
          lVar21 = uVar23 << 1;
          do {
            puVar2 = (undefined1 *)(param_1 + lVar21);
            uVar30 = *puVar2;
            uVar31 = puVar2[2];
            uVar32 = puVar2[4];
            uVar33 = puVar2[6];
            uVar34 = puVar2[8];
            uVar35 = puVar2[10];
            uVar36 = puVar2[0xc];
            uVar37 = puVar2[0xe];
            uVar46 = CONCAT17(puVar2[0xf],
                              CONCAT16(puVar2[0xd],
                                       CONCAT15(puVar2[0xb],
                                                CONCAT14(puVar2[9],
                                                         CONCAT13(puVar2[7],
                                                                  CONCAT12(puVar2[5],
                                                                           CONCAT11(puVar2[3],
                                                                                    puVar2[1])))))))
            ;
            uVar23 = CONCAT17(uVar37,CONCAT16(uVar36,CONCAT15(uVar35,CONCAT14(uVar34,CONCAT13(uVar33
                                                  ,CONCAT12(uVar32,CONCAT11(uVar31,uVar30))))))) &
                     0xf0f0f0f0f0f0f0f;
            auVar24._0_8_ =
                 CONCAT17(0,CONCAT16((char)(uVar23 >> 0x18),
                                     (uint6)CONCAT14((char)(uVar23 >> 0x10),
                                                     (uint)CONCAT12((char)(uVar23 >> 8),
                                                                    (ushort)(byte)uVar23))));
            auVar24[8] = (char)(uVar23 >> 0x20);
            auVar24[9] = 0;
            auVar24[10] = (char)(uVar23 >> 0x28);
            auVar24[0xb] = 0;
            auVar24[0xc] = (char)(uVar23 >> 0x30);
            auVar24[0xd] = 0;
            auVar24[0xe] = (char)(uVar23 >> 0x38);
            auVar24[0xf] = 0;
            auVar50 = NEON_ext(auVar24,auVar24,8,1);
            auVar25 = NEON_umull(auVar24._0_8_,0x1111111111111111,2);
            auVar50 = NEON_umull(auVar50._0_8_,0x1111111111111111,2);
            uVar57 = NEON_sri(uVar46,uVar46,4,1);
            bVar38 = (byte)((ulong)uVar57 >> 8);
            iVar48 = auVar50._0_4_;
            iVar53 = auVar50._4_4_;
            iVar54 = auVar50._8_4_;
            iVar55 = auVar50._12_4_;
            iVar22 = auVar25._0_4_;
            iVar27 = auVar25._4_4_;
            iVar28 = auVar25._8_4_;
            iVar29 = auVar25._12_4_;
            auVar63._0_4_ = iVar22 * (CONCAT12(bVar38,(ushort)(byte)uVar57) & 0xffff) >> 0x10;
            auVar63._4_4_ = iVar27 * (uint)bVar38 >> 0x10;
            auVar63._8_4_ = iVar28 * (uint)(byte)((ulong)uVar57 >> 0x10) >> 0x10;
            auVar63._12_4_ = iVar29 * (uint)(byte)((ulong)uVar57 >> 0x18) >> 0x10;
            auVar68._0_4_ = iVar48 * (uint)(byte)((ulong)uVar57 >> 0x20) >> 0x10;
            auVar68._4_4_ = iVar53 * (uint)(byte)((ulong)uVar57 >> 0x28) >> 0x10;
            auVar68._8_4_ = iVar54 * (uint)(byte)((ulong)uVar57 >> 0x30) >> 0x10;
            auVar68._12_4_ = iVar55 * (uint)(byte)((ulong)uVar57 >> 0x38) >> 0x10;
            auVar50 = a64_TBL(ZEXT816(0),auVar63,auVar68,auVar15);
            uVar57 = NEON_sli(uVar46,uVar46,4,1);
            bVar38 = (byte)((ulong)uVar57 >> 8);
            uVar3 = CONCAT13(uVar33,CONCAT12(uVar32,CONCAT11(uVar31,uVar30)));
            uVar4 = CONCAT15(uVar35,CONCAT14(uVar34,uVar3));
            uVar46 = NEON_sri(CONCAT26((short)(CONCAT17(uVar37,CONCAT16(uVar36,uVar4)) >> 0x30),
                                       CONCAT24((short)((uint6)uVar4 >> 0x20),uVar3)),
                              CONCAT17(uVar37,CONCAT16(uVar36,CONCAT15(uVar35,CONCAT14(uVar34,
                                                  CONCAT13(uVar33,CONCAT12(uVar32,CONCAT11(uVar31,
                                                  uVar30))))))),4,1);
            bVar42 = (byte)((ulong)uVar46 >> 8);
            bVar43 = (byte)((ulong)uVar46 >> 0x28);
            auVar5._4_2_ = (short)(iVar27 * (uint)bVar42 >> 0x10);
            auVar5._0_4_ = iVar22 * (CONCAT12(bVar42,(ushort)(byte)uVar46) & 0xffff) >> 0x10;
            auVar5._6_2_ = 0;
            auVar5._8_2_ = (short)(iVar28 * (uint)(byte)((ulong)uVar46 >> 0x10) >> 0x10);
            auVar5._10_2_ = 0;
            auVar5._12_2_ = (short)(iVar29 * (uint)(byte)((ulong)uVar46 >> 0x18) >> 0x10);
            auVar5._14_2_ = 0;
            auVar7._4_4_ = iVar53 * (uint)bVar43 >> 0x10;
            auVar7._0_4_ = iVar48 * (CONCAT12(bVar43,(ushort)(byte)((ulong)uVar46 >> 0x20)) & 0xffff
                                    ) >> 0x10;
            auVar7._8_4_ = iVar54 * (uint)(byte)((ulong)uVar46 >> 0x30) >> 0x10;
            auVar7._12_4_ = iVar55 * (uint)(byte)((ulong)uVar46 >> 0x38) >> 0x10;
            auVar25 = a64_TBL(ZEXT816(0),auVar5,auVar7,auVar15);
            uVar23 = auVar50._0_8_ & 0xf0f0f0f0f0f0f0f0;
            auVar69._0_4_ = iVar22 * (CONCAT12(bVar38,(ushort)(byte)uVar57) & 0xffff) >> 0x14;
            auVar69._4_4_ = iVar27 * (uint)bVar38 >> 0x14;
            auVar69._8_4_ = iVar28 * (uint)(byte)((ulong)uVar57 >> 0x10) >> 0x14;
            auVar69._12_4_ = iVar29 * (uint)(byte)((ulong)uVar57 >> 0x18) >> 0x14;
            auVar6._4_2_ = (ushort)(iVar53 * (uint)(byte)((ulong)uVar57 >> 0x28) >> 0x14);
            auVar6._0_4_ = iVar48 * (uint)(byte)((ulong)uVar57 >> 0x20) >> 0x14;
            auVar6._6_2_ = 0;
            auVar6._8_2_ = (ushort)(iVar54 * (uint)(byte)((ulong)uVar57 >> 0x30) >> 0x14);
            auVar6._10_2_ = 0;
            auVar6._12_2_ = (ushort)(iVar55 * (uint)(byte)((ulong)uVar57 >> 0x38) >> 0x14);
            auVar6._14_2_ = 0;
            auVar50 = a64_TBL(ZEXT816(0),auVar69,auVar6,auVar15);
            uVar49 = CONCAT17(uVar37,CONCAT16(uVar36,CONCAT15(uVar35,CONCAT14(uVar34,CONCAT13(uVar33
                                                  ,CONCAT12(uVar32,CONCAT11(uVar31,uVar30))))))) ^
                     (CONCAT17(uVar37,CONCAT16(uVar36,CONCAT15(uVar35,CONCAT14(uVar34,CONCAT13(
                                                  uVar33,CONCAT12(uVar32,CONCAT11(uVar31,uVar30)))))
                                              )) ^ auVar25._0_8_) & 0xf0f0f0f0f0f0f0f0;
            *puVar2 = (char)uVar49;
            puVar2[1] = (byte)uVar23 | auVar50[0];
            puVar2[2] = (char)(uVar49 >> 8);
            puVar2[3] = (byte)(uVar23 >> 8) | auVar50[1];
            puVar2[4] = (char)(uVar49 >> 0x10);
            puVar2[5] = (byte)(uVar23 >> 0x10) | auVar50[2];
            puVar2[6] = (char)(uVar49 >> 0x18);
            puVar2[7] = (byte)(uVar23 >> 0x18) | auVar50[3];
            puVar2[8] = (char)(uVar49 >> 0x20);
            puVar2[9] = (byte)(uVar23 >> 0x20) | auVar50[4];
            puVar2[10] = (char)(uVar49 >> 0x28);
            puVar2[0xb] = (byte)(uVar23 >> 0x28) | auVar50[5];
            puVar2[0xc] = (char)(uVar49 >> 0x30);
            puVar2[0xd] = (byte)(uVar23 >> 0x30) | auVar50[6];
            puVar2[0xe] = (char)(uVar49 >> 0x38);
            puVar2[0xf] = (byte)(uVar23 >> 0x38) | auVar50[7];
            lVar21 = lVar21 + 0x10;
            lVar20 = lVar20 + 8;
          } while (lVar20 != 0);
          uVar23 = uVar19;
          if (uVar19 != uVar16) {
LAB_0022c6fc:
            lVar20 = uVar16 - uVar23;
            lVar21 = uVar23 << 1;
            do {
              pbVar17 = (byte *)(param_1 + lVar21);
              bVar38 = pbVar17[1];
              bVar42 = *pbVar17;
              iVar22 = (bVar42 & 0xf) * 0x1111;
              pbVar17[1] = (byte)(iVar22 * (bVar38 & 0xf0 | (uint)(bVar38 >> 4)) >> 0x10) & 0xf0 |
                           (byte)(iVar22 * (bVar38 & 0xfffff00f | (bVar38 & 0xf) << 4) >> 0x14);
              *pbVar17 = (byte)(iVar22 * (bVar42 & 0xf0 | (uint)(bVar42 >> 4)) >> 0x10) & 0xf0 |
                         bVar42 & 0xf;
              lVar21 = lVar21 + 2;
              lVar20 = lVar20 + -1;
            } while (lVar20 != 0);
          }
        }
        else {
          lVar21 = 0;
          do {
            puVar2 = (undefined1 *)(param_1 + lVar21);
            uVar30 = *puVar2;
            uVar31 = puVar2[2];
            uVar32 = puVar2[4];
            uVar33 = puVar2[6];
            uVar34 = puVar2[8];
            uVar35 = puVar2[10];
            uVar36 = puVar2[0xc];
            uVar37 = puVar2[0xe];
            auVar47._0_8_ =
                 CONCAT17(puVar2[0xf],
                          CONCAT16(puVar2[0xd],
                                   CONCAT15(puVar2[0xb],
                                            CONCAT14(puVar2[9],
                                                     CONCAT13(puVar2[7],
                                                              CONCAT12(puVar2[5],
                                                                       CONCAT11(puVar2[3],puVar2[1])
                                                                      ))))));
            bVar38 = puVar2[0x10];
            auVar47[8] = puVar2[0x11];
            uVar39 = puVar2[0x12];
            auVar47[9] = puVar2[0x13];
            uVar40 = puVar2[0x14];
            auVar47[10] = puVar2[0x15];
            uVar41 = puVar2[0x16];
            auVar47[0xb] = puVar2[0x17];
            bVar42 = puVar2[0x18];
            auVar47[0xc] = puVar2[0x19];
            bVar43 = puVar2[0x1a];
            auVar47[0xd] = puVar2[0x1b];
            bVar44 = puVar2[0x1c];
            auVar47[0xe] = puVar2[0x1d];
            bVar45 = puVar2[0x1e];
            auVar47[0xf] = puVar2[0x1f];
            uVar23 = CONCAT17(uVar37,CONCAT16(uVar36,CONCAT15(uVar35,CONCAT14(uVar34,CONCAT13(uVar33
                                                  ,CONCAT12(uVar32,CONCAT11(uVar31,uVar30))))))) &
                     0xf0f0f0f0f0f0f0f;
            auVar51._0_8_ =
                 CONCAT17(0,CONCAT16((char)(uVar23 >> 0x18),
                                     (uint6)CONCAT14((char)(uVar23 >> 0x10),
                                                     (uint)CONCAT12((char)(uVar23 >> 8),
                                                                    (ushort)(byte)uVar23))));
            auVar51[8] = (char)(uVar23 >> 0x20);
            auVar51[9] = 0;
            auVar51[10] = (char)(uVar23 >> 0x28);
            auVar51[0xb] = 0;
            auVar51[0xc] = (char)(uVar23 >> 0x30);
            auVar51[0xd] = 0;
            auVar51[0xe] = (char)(uVar23 >> 0x38);
            auVar51[0xf] = 0;
            auVar58 = NEON_ext(auVar51,auVar51,8,1);
            auVar26._0_8_ =
                 CONCAT17(0,CONCAT16(uVar41,(uint6)(CONCAT14(uVar40,(uint)(CONCAT12(uVar39,(ushort)(
                                                  bVar38 & 0xf)) & 0xfffff)) & 0xfffffffff)) &
                            0xfffffffffffff);
            auVar26[8] = bVar42 & 0xf;
            auVar26[9] = 0;
            auVar26[10] = bVar43 & 0xf;
            auVar26[0xb] = 0;
            auVar26[0xc] = bVar44 & 0xf;
            auVar26[0xd] = 0;
            auVar26[0xe] = bVar45 & 0xf;
            auVar26[0xf] = 0;
            auVar50 = NEON_ext(auVar26,auVar26,8,1);
            auVar25 = NEON_umull(auVar26._0_8_,0x1111111111111111,2);
            auVar64 = NEON_umull(auVar50._0_8_,0x1111111111111111,2);
            auVar50 = NEON_umull(auVar51._0_8_,0x1111111111111111,2);
            auVar58 = NEON_umull(auVar58._0_8_,0x1111111111111111,2);
            auVar70._8_8_ = auVar47._8_8_;
            auVar70._0_8_ = auVar47._0_8_;
            auVar71 = NEON_sri(auVar70,auVar47,4,1);
            iVar56 = auVar58._0_4_;
            iVar59 = auVar58._4_4_;
            iVar60 = auVar58._8_4_;
            iVar61 = auVar58._12_4_;
            iVar48 = auVar50._0_4_;
            iVar53 = auVar50._4_4_;
            iVar54 = auVar50._8_4_;
            iVar55 = auVar50._12_4_;
            iVar62 = auVar64._0_4_;
            iVar65 = auVar64._4_4_;
            iVar66 = auVar64._8_4_;
            iVar67 = auVar64._12_4_;
            iVar22 = auVar25._0_4_;
            iVar27 = auVar25._4_4_;
            iVar28 = auVar25._8_4_;
            iVar29 = auVar25._12_4_;
            auVar73._0_4_ = iVar56 * (uint)auVar71[4] >> 0x10;
            auVar73._4_4_ = iVar59 * (uint)auVar71[5] >> 0x10;
            auVar73._8_4_ = iVar60 * (uint)auVar71[6] >> 0x10;
            auVar73._12_4_ = iVar61 * (uint)auVar71[7] >> 0x10;
            auVar64._4_4_ = iVar53 * (uint)auVar71[1] >> 0x10;
            auVar64._0_4_ = iVar48 * (CONCAT12(auVar71[1],(ushort)auVar71[0]) & 0xffff) >> 0x10;
            auVar64._8_4_ = iVar54 * (uint)auVar71[2] >> 0x10;
            auVar64._12_4_ = iVar55 * (uint)auVar71[3] >> 0x10;
            auVar72._4_2_ = (short)(iVar27 * (uint)auVar71[9] >> 0x10);
            auVar72._0_4_ = iVar22 * (CONCAT12(auVar71[9],(ushort)auVar71[8]) & 0xffff) >> 0x10;
            auVar72._6_2_ = 0;
            auVar72._8_2_ = (short)(iVar28 * (uint)auVar71[10] >> 0x10);
            auVar72._10_2_ = 0;
            auVar72._12_2_ = (short)(iVar29 * (uint)auVar71[0xb] >> 0x10);
            auVar72._14_2_ = 0;
            auVar9._4_4_ = iVar65 * (uint)auVar71[0xd] >> 0x10;
            auVar9._0_4_ = iVar62 * (CONCAT12(auVar71[0xd],(ushort)auVar71[0xc]) & 0xffff) >> 0x10;
            auVar9._8_4_ = iVar66 * (uint)auVar71[0xe] >> 0x10;
            auVar9._12_4_ = iVar67 * (uint)auVar71[0xf] >> 0x10;
            auVar72 = a64_TBL(ZEXT816(0),auVar64,auVar73,auVar72,auVar9,auVar14);
            auVar50 = NEON_sli(auVar47,auVar47,4,1);
            auVar74[9] = uVar39;
            auVar74[8] = bVar38;
            auVar74[10] = uVar40;
            auVar74[0xb] = uVar41;
            auVar74[0xc] = bVar42;
            auVar74[0xd] = bVar43;
            auVar74[0xe] = bVar44;
            auVar74[0xf] = bVar45;
            auVar74[1] = uVar31;
            auVar74[0] = uVar30;
            auVar74[2] = uVar32;
            auVar74[3] = uVar33;
            auVar74[4] = uVar34;
            auVar74[5] = uVar35;
            auVar74[6] = uVar36;
            auVar74[7] = uVar37;
            auVar25[1] = uVar31;
            auVar25[0] = uVar30;
            auVar25[2] = uVar32;
            auVar25[3] = uVar33;
            auVar25[4] = uVar34;
            auVar25[5] = uVar35;
            auVar25[6] = uVar36;
            auVar25[7] = uVar37;
            auVar25[8] = bVar38;
            auVar25[9] = uVar39;
            auVar25[10] = uVar40;
            auVar25[0xb] = uVar41;
            auVar25[0xc] = bVar42;
            auVar25[0xd] = bVar43;
            auVar25[0xe] = bVar44;
            auVar25[0xf] = bVar45;
            auVar25 = NEON_sri(auVar74,auVar25,4,1);
            auVar75._0_4_ = iVar48 * (CONCAT12(auVar25[1],(ushort)auVar25[0]) & 0xffff) >> 0x10;
            auVar75._4_4_ = iVar53 * (uint)auVar25[1] >> 0x10;
            auVar75._8_4_ = iVar54 * (uint)auVar25[2] >> 0x10;
            auVar75._12_4_ = iVar55 * (uint)auVar25[3] >> 0x10;
            auVar71._4_2_ = (short)(iVar59 * (uint)auVar25[5] >> 0x10);
            auVar71._0_4_ = iVar56 * (uint)auVar25[4] >> 0x10;
            auVar71._6_2_ = 0;
            auVar71._8_2_ = (short)(iVar60 * (uint)auVar25[6] >> 0x10);
            auVar71._10_2_ = 0;
            auVar71._12_2_ = (short)(iVar61 * (uint)auVar25[7] >> 0x10);
            auVar71._14_2_ = 0;
            auVar10._4_4_ = iVar27 * (uint)auVar25[9] >> 0x10;
            auVar10._0_4_ = iVar22 * (CONCAT12(auVar25[9],(ushort)auVar25[8]) & 0xffff) >> 0x10;
            auVar10._8_4_ = iVar28 * (uint)auVar25[10] >> 0x10;
            auVar10._12_4_ = iVar29 * (uint)auVar25[0xb] >> 0x10;
            auVar12._4_4_ = iVar65 * (uint)auVar25[0xd] >> 0x10;
            auVar12._0_4_ = iVar62 * (CONCAT12(auVar25[0xd],(ushort)auVar25[0xc]) & 0xffff) >> 0x10;
            auVar12._8_4_ = iVar66 * (uint)auVar25[0xe] >> 0x10;
            auVar12._12_4_ = iVar67 * (uint)auVar25[0xf] >> 0x10;
            auVar25 = a64_TBL(ZEXT816(0),auVar75,auVar71,auVar10,auVar12,auVar14);
            uVar23 = auVar72._0_8_ & 0xf0f0f0f0f0f0f0f0;
            auVar76._0_4_ = iVar48 * (CONCAT12(auVar50[1],(ushort)auVar50[0]) & 0xffff) >> 0x14;
            auVar76._4_4_ = iVar53 * (uint)auVar50[1] >> 0x14;
            auVar76._8_4_ = iVar54 * (uint)auVar50[2] >> 0x14;
            auVar76._12_4_ = iVar55 * (uint)auVar50[3] >> 0x14;
            auVar8._4_2_ = (ushort)(iVar59 * (uint)auVar50[5] >> 0x14);
            auVar8._0_4_ = iVar56 * (CONCAT12(auVar50[5],(ushort)auVar50[4]) & 0xffff) >> 0x14;
            auVar8._6_2_ = 0;
            auVar8._8_2_ = (ushort)(iVar60 * (uint)auVar50[6] >> 0x14);
            auVar8._10_2_ = 0;
            auVar8._12_2_ = (ushort)(iVar61 * (uint)auVar50[7] >> 0x14);
            auVar8._14_2_ = 0;
            auVar11._4_4_ = iVar27 * (uint)auVar50[9] >> 0x14;
            auVar11._0_4_ = iVar22 * (CONCAT12(auVar50[9],(ushort)auVar50[8]) & 0xffff) >> 0x14;
            auVar11._8_4_ = iVar28 * (uint)auVar50[10] >> 0x14;
            auVar11._12_4_ = iVar29 * (uint)auVar50[0xb] >> 0x14;
            auVar13._4_4_ = iVar65 * (uint)auVar50[0xd] >> 0x14;
            auVar13._0_4_ = iVar62 * (CONCAT12(auVar50[0xd],(ushort)auVar50[0xc]) & 0xffff) >> 0x14;
            auVar13._8_4_ = iVar66 * (uint)auVar50[0xe] >> 0x14;
            auVar13._12_4_ = iVar67 * (uint)auVar50[0xf] >> 0x14;
            auVar64 = a64_TBL(ZEXT816(0),auVar76,auVar8,auVar11,auVar13,auVar14);
            auVar52._8_8_ = 0xf0f0f0f0f0f0f0f0;
            auVar52._0_8_ = 0xf0f0f0f0f0f0f0f0;
            auVar50[1] = uVar31;
            auVar50[0] = uVar30;
            auVar50[2] = uVar32;
            auVar50[3] = uVar33;
            auVar50[4] = uVar34;
            auVar50[5] = uVar35;
            auVar50[6] = uVar36;
            auVar50[7] = uVar37;
            auVar50[8] = bVar38;
            auVar50[9] = uVar39;
            auVar50[10] = uVar40;
            auVar50[0xb] = uVar41;
            auVar50[0xc] = bVar42;
            auVar50[0xd] = bVar43;
            auVar50[0xe] = bVar44;
            auVar50[0xf] = bVar45;
            auVar58[1] = uVar31;
            auVar58[0] = uVar30;
            auVar58[2] = uVar32;
            auVar58[3] = uVar33;
            auVar58[4] = uVar34;
            auVar58[5] = uVar35;
            auVar58[6] = uVar36;
            auVar58[7] = uVar37;
            auVar58[8] = bVar38;
            auVar58[9] = uVar39;
            auVar58[10] = uVar40;
            auVar58[0xb] = uVar41;
            auVar58[0xc] = bVar42;
            auVar58[0xd] = bVar43;
            auVar58[0xe] = bVar44;
            auVar58[0xf] = bVar45;
            auVar58 = auVar58 ^ (auVar50 ^ auVar25) & auVar52;
            *puVar2 = auVar58[0];
            puVar2[1] = (byte)uVar23 | auVar64[0];
            puVar2[2] = auVar58[1];
            puVar2[3] = (byte)(uVar23 >> 8) | auVar64[1];
            puVar2[4] = auVar58[2];
            puVar2[5] = (byte)(uVar23 >> 0x10) | auVar64[2];
            puVar2[6] = auVar58[3];
            puVar2[7] = (byte)(uVar23 >> 0x18) | auVar64[3];
            puVar2[8] = auVar58[4];
            puVar2[9] = (byte)(uVar23 >> 0x20) | auVar64[4];
            puVar2[10] = auVar58[5];
            puVar2[0xb] = (byte)(uVar23 >> 0x28) | auVar64[5];
            puVar2[0xc] = auVar58[6];
            puVar2[0xd] = (byte)(uVar23 >> 0x30) | auVar64[6];
            puVar2[0xe] = auVar58[7];
            puVar2[0xf] = (byte)(uVar23 >> 0x38) | auVar64[7];
            puVar2[0x10] = auVar58[8];
            puVar2[0x11] = auVar72[8] & 0xf0 | auVar64[8];
            puVar2[0x12] = auVar58[9];
            puVar2[0x13] = auVar72[9] & 0xf0 | auVar64[9];
            puVar2[0x14] = auVar58[10];
            puVar2[0x15] = auVar72[10] & 0xf0 | auVar64[10];
            puVar2[0x16] = auVar58[0xb];
            puVar2[0x17] = auVar72[0xb] & 0xf0 | auVar64[0xb];
            puVar2[0x18] = auVar58[0xc];
            puVar2[0x19] = auVar72[0xc] & 0xf0 | auVar64[0xc];
            puVar2[0x1a] = auVar58[0xd];
            puVar2[0x1b] = auVar72[0xd] & 0xf0 | auVar64[0xd];
            puVar2[0x1c] = auVar58[0xe];
            puVar2[0x1d] = auVar72[0xe] & 0xf0 | auVar64[0xe];
            puVar2[0x1e] = auVar58[0xf];
            puVar2[0x1f] = auVar72[0xf] & 0xf0 | auVar64[0xf];
            lVar21 = lVar21 + 0x20;
          } while (((ulong)(param_2 >> 4) & 0x7ffffff) * 0x20 - lVar21 != 0);
          if (uVar18 != uVar16) {
            uVar23 = uVar18;
            if ((param_2 >> 3 & 1) != 0) goto LAB_0022c508;
            goto LAB_0022c6fc;
          }
        }
        param_1 = param_1 + param_4;
        iVar22 = param_3 + -1;
        bVar1 = 0 < param_3;
        param_3 = iVar22;
      } while (iVar22 != 0 && bVar1);
    }
  }
  return;
}



/* Entry: 0022c9e0; end: 0022cab7;  */

void FUN_0022c9e0(void)

{
  int iVar1;
  
  iVar1 = 0xaf8428;
  _pthread_mutex_lock();
  if (iVar1 != 0) {
    return;
  }
  if (PTR_LOOP_00af8420 != PTR_DAT_00af8418) {
    func_0x0022c9dc();
    pcRam0000000000b6cfd0 = FUN_0022cab8;
    uRam0000000000b6cfc8 = 0x22cb00;
    pcRam0000000000b6cf58 = FUN_0022cb98;
    uRam0000000000b6cf68 = 0x22cc0c;
    uRam0000000000b6cf78 = 0x22ccf8;
    uRam0000000000b6cf80 = 0x22cde4;
    uRam0000000000b6cf88 = 0x22ced0;
    uRam0000000000b6cea8 = 0x22cf6c;
    func_0x00239d7c();
  }
  PTR_LOOP_00af8420 = PTR_DAT_00af8418;
                    /* WARNING: Could not recover jumptable at 0x0077ad38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_mutex_unlock_0099a598)(0xaf8428);
  return;
}



/* Entry: 0022cab8; end: 0022cb97;  */

void FUN_0022cab8(long param_1,long param_2)

{
  (*pcRam0000000000b6cfb0)(param_1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x0022cafc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000b6cfb0)(param_1 + 0x40,param_2 + 0x80,1);
  return;
}



/* Entry: 0022cb98; end: 0022d1bf;  */

void FUN_0022cb98(int *param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  
  bVar3 = *(byte *)((long)param_1 + 0x5f);
  iVar1 = *(byte *)((long)param_1 + 0x1f) + 2;
  *param_1 = (iVar1 + (uint)*(byte *)((long)param_1 + -0x21) +
              (uint)*(byte *)((long)param_1 + -1) * 2 >> 2) * 0x1010101;
  iVar2 = *(byte *)((long)param_1 + 0x3f) + 2;
  param_1[8] = (iVar2 + (uint)*(byte *)((long)param_1 + -1) +
                (uint)*(byte *)((long)param_1 + 0x1f) * 2 >> 2) * 0x1010101;
  param_1[0x10] = (iVar1 + (uint)*(byte *)((long)param_1 + 0x3f) * 2 + (uint)bVar3 >> 2) * 0x1010101
  ;
  param_1[0x18] = (iVar2 + (uint)bVar3 + (uint)bVar3 * 2 >> 2) * 0x1010101;
  return;
}



/* Entry: 0022d1c0; end: 0022d243;  */

void FUN_0022d1c0(void)

{
  int iVar1;
  
  iVar1 = 0xaf8470;
  _pthread_mutex_lock();
  if (iVar1 != 0) {
    return;
  }
  if (PTR_LOOP_00af8468 != PTR_DAT_00af8418) {
    uRam0000000000b6d020 = 0;
    pcRam0000000000b6d038 = FUN_0022d244;
    uRam0000000000b6d000 = 0;
    func_0x0023cc78();
  }
  PTR_LOOP_00af8468 = PTR_DAT_00af8418;
                    /* WARNING: Could not recover jumptable at 0x0077ad38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_mutex_unlock_0099a598)(0xaf8470);
  return;
}



/* Entry: 0022d244; end: 0022d547;  */

void FUN_0022d244(byte *param_1,byte *param_2,char *param_3,uint param_4)

{
  byte bVar1;
  char cVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_1 == (byte *)0x0) {
    if (0 < (int)param_4) {
      cVar2 = '\0';
      uVar3 = (ulong)param_4;
      do {
        cVar2 = cVar2 + *param_2;
        *param_3 = cVar2;
        uVar3 = uVar3 - 1;
        param_2 = param_2 + 1;
        param_3 = param_3 + 1;
      } while (uVar3 != 0);
    }
  }
  else if (0 < (int)param_4) {
    uVar4 = (uint)*param_1;
    uVar3 = (ulong)param_4;
    uVar5 = uVar4;
    do {
      bVar1 = *param_1;
      uVar4 = (bVar1 - uVar5) + (uVar4 & 0xff);
      uVar4 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
      if (0xfe < (int)uVar4) {
        uVar4 = 0xff;
      }
      uVar4 = *param_2 + uVar4;
      *param_3 = (char)uVar4;
      uVar3 = uVar3 - 1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      param_3 = param_3 + 1;
      uVar5 = (uint)bVar1;
    } while (uVar3 != 0);
  }
  return;
}



/* Entry: 0022d548; end: 0022db6b;  */

void FUN_0022d548(int *param_1,ulong param_2,ulong param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  ulong uVar14;
  ulong uVar15;
  uint *puVar16;
  uint *puVar17;
  uint uVar18;
  undefined2 uStack_64;
  undefined1 uStack_62;
  
  uVar1 = param_1[2];
  uVar14 = (ulong)(int)uVar1;
  iVar5 = *param_1;
  uVar4 = (uint)param_3;
  uVar18 = (uint)param_2;
  if (1 < iVar5) {
    if (iVar5 != 3) {
      if (iVar5 != 2) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x0022d73c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000000b6d040)(param_4,uVar1 * (uVar4 - uVar18),param_5);
      return;
    }
    uVar6 = param_1[1];
    if ((param_4 == param_5) && (0 < (int)uVar6)) {
      uVar6 = ((uVar1 + (1 << (ulong)(uVar6 & 0x1f))) - 1 >> (ulong)(uVar6 & 0x1f)) *
              (uVar4 - uVar18);
      param_4 = (uint *)((long)param_5 +
                        ((long)(int)(uVar1 * (uVar4 - uVar18)) * 4 -
                        (-(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2)));
      _memmove(param_4,param_5);
      uVar1 = param_1[1];
      uVar6 = param_1[2];
      uVar14 = (ulong)uVar6;
      lVar3 = *(long *)(param_1 + 4);
      if (uVar1 != 0) {
        if ((int)uVar4 <= (int)uVar18) {
          return;
        }
        if ((int)uVar6 < 1) {
          return;
        }
        uVar18 = 8 >> (ulong)(uVar1 & 0x1f);
        do {
          uVar8 = 0;
          uVar9 = 0;
          puVar10 = param_5;
          do {
            if ((uVar8 & ~(-1 << (ulong)(uVar1 & 0x1f))) == 0) {
              uVar9 = (uint)*(byte *)((long)param_4 + 1);
              param_4 = param_4 + 1;
            }
            param_5 = puVar10 + 1;
            *puVar10 = *(uint *)(lVar3 + (ulong)(uVar9 & ~(-1 << (ulong)(uVar18 & 0x1f))) * 4);
            uVar9 = uVar9 >> (ulong)(uVar18 & 0x1f);
            uVar8 = uVar8 + 1;
            puVar10 = param_5;
          } while (uVar6 != uVar8);
          uVar8 = (int)param_2 + 1;
          param_2 = (ulong)uVar8;
        } while (uVar8 != uVar4);
        return;
      }
    }
    else {
      lVar3 = *(long *)(param_1 + 4);
      if (uVar6 != 0) {
        if ((int)uVar4 <= (int)uVar18) {
          return;
        }
        if ((int)uVar1 < 1) {
          return;
        }
        uVar18 = 8 >> (ulong)(uVar6 & 0x1f);
        do {
          uVar8 = 0;
          uVar9 = 0;
          puVar10 = param_5;
          do {
            if ((uVar8 & ~(-1 << (ulong)(uVar6 & 0x1f))) == 0) {
              uVar9 = (uint)*(byte *)((long)param_4 + 1);
              param_4 = param_4 + 1;
            }
            param_5 = puVar10 + 1;
            *puVar10 = *(uint *)(lVar3 + (ulong)(uVar9 & ~(-1 << (ulong)(uVar18 & 0x1f))) * 4);
            uVar9 = uVar9 >> (ulong)(uVar18 & 0x1f);
            uVar8 = uVar8 + 1;
            puVar10 = param_5;
          } while (uVar1 != uVar8);
          uVar8 = (int)param_2 + 1;
          param_2 = (ulong)uVar8;
        } while (uVar8 != uVar4);
        return;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0022db68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000000b6d070)(param_4,lVar3,param_5,param_2,param_3,uVar14);
    return;
  }
  if (iVar5 != 0) {
    if (iVar5 != 1) {
      return;
    }
    if ((int)uVar4 <= (int)uVar18) {
      return;
    }
    uVar8 = param_1[1];
    uVar9 = 1 << (ulong)(uVar8 & 0x1f);
    uVar6 = uVar1 & -uVar9;
    uVar2 = (uVar9 - 1) + uVar1 >> (ulong)(uVar8 & 0x1f);
    puVar11 = (undefined4 *)
              (*(long *)(param_1 + 4) + (long)(int)(uVar2 * ((int)uVar18 >> (uVar8 & 0x1f))) * 4);
    iVar5 = uVar1 - uVar6;
    uVar15 = -(ulong)(uVar9 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar9 << 2;
    do {
      puVar10 = param_4;
      if ((int)uVar6 < 1) {
        puVar13 = puVar11;
        if (param_4 < param_4 + uVar14) goto LAB_0022d6b8;
      }
      else {
        puVar12 = puVar11;
        do {
          puVar13 = puVar12 + 1;
          uStack_64 = (undefined2)*puVar12;
          uStack_62 = (undefined1)((uint)*puVar12 >> 0x10);
          (*pcRam0000000000b6d280)(&uStack_64,puVar10,(ulong)uVar9,param_5);
          puVar10 = (uint *)((long)puVar10 + uVar15);
          param_5 = (uint *)((long)param_5 + uVar15);
          puVar12 = puVar13;
        } while (puVar10 < param_4 + (int)uVar6);
        puVar16 = param_4 + uVar14;
        param_4 = puVar10;
        if (puVar10 < puVar16) {
LAB_0022d6b8:
          uStack_64 = (undefined2)*puVar13;
          uStack_62 = (undefined1)((uint)*puVar13 >> 0x10);
          (*pcRam0000000000b6d280)(&uStack_64,puVar10,iVar5,param_5);
          param_4 = puVar10 + iVar5;
          param_5 = param_5 + iVar5;
        }
      }
      uVar1 = (int)param_2 + 1;
      param_2 = (ulong)uVar1;
      uVar18 = uVar2;
      if ((uVar1 & uVar9 - 1) != 0) {
        uVar18 = 0;
      }
      puVar11 = puVar11 + (int)uVar18;
      if (uVar1 == uVar4) {
        return;
      }
    } while( true );
  }
  uVar15 = param_3;
  if (uVar18 == 0) {
    uVar6 = *param_4 - 0x1000000;
    *param_5 = uVar6;
    if (1 < (int)uVar1) {
      uVar7 = (ulong)(uVar1 - 1);
      puVar10 = param_4;
      puVar16 = param_5;
      do {
        puVar16 = puVar16 + 1;
        puVar10 = puVar10 + 1;
        uVar6 = (*puVar10 & 0xff00ff00) + (uVar6 & 0xff00ff00) & 0xff00ff00 |
                (*puVar10 & 0xff00ff) + (uVar6 & 0xff00ff) & 0xff00ff;
        *puVar16 = uVar6;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    param_4 = param_4 + uVar14;
    puVar10 = param_5 + uVar14;
    param_2 = 1;
    iVar5 = uVar4 - 1;
    if (iVar5 == 0 || (int)uVar4 < 1) goto LAB_0022daa4;
  }
  else {
    iVar5 = uVar4 - uVar18;
    puVar10 = param_5;
    if (iVar5 == 0 || (int)uVar4 < (int)uVar18) goto LAB_0022daa4;
  }
  if ((int)uVar1 < 2) {
    do {
      *puVar10 = (*param_4 & 0xff00ff00) + (puVar10[-uVar14] & 0xff00ff00) & 0xff00ff00 |
                 (*param_4 & 0xff00ff) + (puVar10[-uVar14] & 0xff00ff) & 0xff00ff;
      param_4 = param_4 + uVar14;
      puVar10 = puVar10 + uVar14;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  else {
    uVar6 = param_1[1];
    iVar5 = 1 << (ulong)(uVar6 & 0x1f);
    uVar8 = (iVar5 - 1U) + uVar1 >> (ulong)(uVar6 & 0x1f);
    puVar16 = (uint *)(*(long *)(param_1 + 4) +
                      (long)(int)(uVar8 * ((int)param_2 >> (uVar6 & 0x1f))) * 4);
    do {
      *puVar10 = (*param_4 & 0xff00ff00) + (puVar10[-uVar14] & 0xff00ff00) & 0xff00ff00 |
                 (*param_4 & 0xff00ff) + (puVar10[-uVar14] & 0xff00ff) & 0xff00ff;
      uVar15 = 1;
      puVar17 = puVar16;
      do {
        uVar6 = ((uint)uVar15 & -iVar5) + iVar5;
        uVar9 = uVar6;
        if ((int)uVar1 <= (int)uVar6) {
          uVar9 = uVar1;
        }
        uVar7 = -(uVar15 >> 0x1f) & 0xfffffffc00000000 | uVar15 << 2;
        (**(code **)(((ulong)(*puVar17 >> 8) & 0xf) * 8 + 0xb6d100))
                  ((long)param_4 + uVar7,(long)puVar10 + uVar14 * -4 + uVar7,uVar9 - (uint)uVar15);
        uVar15 = (ulong)uVar9;
        puVar17 = puVar17 + 1;
      } while ((int)uVar6 < (int)uVar1);
      param_4 = param_4 + uVar14;
      puVar10 = puVar10 + uVar14;
      uVar6 = (int)param_2 + 1;
      param_2 = (ulong)uVar6;
      uVar9 = uVar8;
      if ((uVar6 & iVar5 - 1U) != 0) {
        uVar9 = 0;
      }
      puVar16 = puVar16 + (int)uVar9;
      uVar15 = param_3 & 0xffffffff;
    } while (uVar6 != uVar4);
  }
LAB_0022daa4:
  if (param_1[3] == (int)uVar15) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_0099a3f8)
            (param_5 + -uVar14,param_5 + (int)(uVar1 * (~uVar18 + (int)uVar15)));
  return;
}



/* Entry: 0022db6c; end: 0022e43b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0022db6c(unkbyte10 *param_1,int param_2,undefined1 *param_3)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  unkbyte10 *pVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  unkbyte10 Var17;
  unkbyte10 Var18;
  unkbyte10 Var19;
  undefined1 auVar20 [16];
  undefined1 *puVar21;
  unkbyte10 *pVar22;
  unkbyte10 *pVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  
  if (param_2 < 1) {
    _UNK_007eeb7a = 0x3c3834302c28;
    return;
  }
  puVar2 = (undefined4 *)((long)param_1 + (long)param_2 * 4);
  if (puVar2 <= (undefined4 *)((long)param_1 + 4U)) {
    puVar2 = (undefined4 *)((long)param_1 + 4U);
  }
  uVar25 = (long)puVar2 + ~(ulong)param_1;
  pVar22 = param_1;
  if ((0x1b < uVar25) &&
     ((undefined1 *)((long)param_1 + (uVar25 & 0xfffffffffffffffc) + 4) <= param_3 ||
      param_3 + (uVar25 >> 2) * 3 + 3 <= param_1)) {
    uVar1 = (uVar25 >> 2) + 1;
    if (uVar25 < 0x3c) {
      uVar24 = 0;
    }
    else {
      uVar24 = uVar1 & 0x7ffffffffffffff0;
      auVar20._10_6_ = 0x3c3834302c28;
      auVar20._0_10_ = _UNK_007eeb70;
      puVar21 = param_3;
      uVar25 = uVar24;
      do {
        pVar23 = pVar22 + 2;
        uVar13 = *(undefined8 *)((long)pVar22 + 0x28);
        uVar12 = *(undefined8 *)pVar23;
        Var17 = *pVar23;
        auVar5 = *(undefined1 (*) [16])(pVar22 + 3);
        uVar7 = *(undefined8 *)((long)pVar22 + 8);
        uVar6 = *(undefined8 *)pVar22;
        Var18 = *pVar22;
        pVar4 = pVar22 + 1;
        uVar10 = *(undefined8 *)((long)pVar22 + 0x18);
        uVar9 = *(undefined8 *)pVar4;
        Var19 = *pVar4;
        auVar27._10_2_ = (short)((ulong)uVar7 >> 0x10);
        auVar27._0_10_ = *pVar22;
        auVar27._12_2_ = (short)((ulong)uVar7 >> 0x20);
        auVar27._14_2_ = (short)((ulong)uVar7 >> 0x30);
        auVar28._10_2_ = (short)((ulong)uVar10 >> 0x10);
        auVar28._0_10_ = *pVar4;
        auVar28._12_2_ = (short)((ulong)uVar10 >> 0x20);
        auVar28._14_2_ = (short)((ulong)uVar10 >> 0x30);
        auVar29._10_2_ = (short)((ulong)uVar13 >> 0x10);
        auVar29._0_10_ = *pVar23;
        auVar29._12_2_ = (short)((ulong)uVar13 >> 0x20);
        auVar29._14_2_ = (short)((ulong)uVar13 >> 0x30);
        auVar27 = a64_TBL(ZEXT816(0),auVar27,auVar28,auVar29,auVar5,auVar20);
        *puVar21 = (char)((unkuint10)Var18 >> 0x10);
        puVar21[1] = (char)((ulong)uVar6 >> 8);
        puVar21[2] = auVar27[0];
        puVar21[3] = (char)((unkuint10)Var18 >> 0x30);
        puVar21[4] = (char)((ulong)uVar6 >> 0x28);
        puVar21[5] = auVar27[1];
        puVar21[6] = (char)((ulong)uVar7 >> 0x10);
        puVar21[7] = (char)((ulong)uVar7 >> 8);
        puVar21[8] = auVar27[2];
        puVar21[9] = (char)((ulong)uVar7 >> 0x30);
        puVar21[10] = (char)((ulong)uVar7 >> 0x28);
        puVar21[0xb] = auVar27[3];
        puVar21[0xc] = (char)((unkuint10)Var19 >> 0x10);
        puVar21[0xd] = (char)((ulong)uVar9 >> 8);
        puVar21[0xe] = auVar27[4];
        puVar21[0xf] = (char)((unkuint10)Var19 >> 0x30);
        puVar21[0x10] = (char)((ulong)uVar9 >> 0x28);
        puVar21[0x11] = auVar27[5];
        puVar21[0x12] = (char)((ulong)uVar10 >> 0x10);
        puVar21[0x13] = (char)((ulong)uVar10 >> 8);
        puVar21[0x14] = auVar27[6];
        puVar21[0x15] = (char)((ulong)uVar10 >> 0x30);
        puVar21[0x16] = (char)((ulong)uVar10 >> 0x28);
        puVar21[0x17] = auVar27[7];
        puVar21[0x18] = (char)((unkuint10)Var17 >> 0x10);
        puVar21[0x19] = (char)((ulong)uVar12 >> 8);
        puVar21[0x1a] = auVar27[8];
        puVar21[0x1b] = (char)((unkuint10)Var17 >> 0x30);
        puVar21[0x1c] = (char)((ulong)uVar12 >> 0x28);
        puVar21[0x1d] = auVar27[9];
        puVar21[0x1e] = (char)((ulong)uVar13 >> 0x10);
        puVar21[0x1f] = (char)((ulong)uVar13 >> 8);
        puVar21[0x20] = auVar27[10];
        puVar21[0x21] = (char)((ulong)uVar13 >> 0x30);
        puVar21[0x22] = (char)((ulong)uVar13 >> 0x28);
        puVar21[0x23] = auVar27[0xb];
        puVar21[0x24] = auVar5[2];
        puVar21[0x25] = auVar5[1];
        puVar21[0x26] = auVar27[0xc];
        puVar21[0x27] = auVar5[6];
        puVar21[0x28] = auVar5[5];
        puVar21[0x29] = auVar27[0xd];
        puVar21[0x2a] = auVar5[10];
        puVar21[0x2b] = auVar5[9];
        puVar21[0x2c] = auVar27[0xe];
        puVar21[0x2d] = auVar5[0xe];
        puVar21[0x2e] = auVar5[0xd];
        puVar21[0x2f] = auVar27[0xf];
        puVar21 = puVar21 + 0x30;
        uVar25 = uVar25 - 0x10;
        pVar22 = pVar22 + 4;
      } while (uVar25 != 0);
      if (uVar1 == uVar24) {
        return;
      }
      if (((uint)uVar1 >> 3 & 1) == 0) {
        param_3 = param_3 + uVar24 * 3;
        pVar22 = (unkbyte10 *)((long)param_1 + uVar24 * 4);
        goto LAB_0022dc40;
      }
    }
    auVar20 = _UNK_007eeb80;
    Var17 = _UNK_007eeb70;
    uVar25 = uVar1 & 0x7ffffffffffffff8;
    lVar26 = uVar24 - uVar25;
    puVar21 = param_3 + uVar24 * 3;
    pVar22 = (unkbyte10 *)((long)param_1 + uVar24 * 4);
    do {
      uVar7 = *(undefined8 *)((long)pVar22 + 8);
      uVar6 = *(undefined8 *)pVar22;
      uVar10 = *(undefined8 *)((long)pVar22 + 0x18);
      uVar9 = *(undefined8 *)(pVar22 + 1);
      auVar8._10_2_ = (short)((ulong)uVar7 >> 0x10);
      auVar8._0_10_ = *pVar22;
      auVar8._12_2_ = (short)((ulong)uVar7 >> 0x20);
      auVar8._14_2_ = (short)((ulong)uVar7 >> 0x30);
      auVar11._10_2_ = (short)((ulong)uVar10 >> 0x10);
      auVar11._0_10_ = pVar22[1];
      auVar11._12_2_ = (short)((ulong)uVar10 >> 0x20);
      auVar11._14_2_ = (short)((ulong)uVar10 >> 0x30);
      auVar29 = a64_TBL(ZEXT816(0),auVar8,auVar11,auVar20);
      auVar30._0_4_ = (uint)uVar6 >> 8;
      auVar30._4_4_ = (uint)((ulong)uVar6 >> 0x28);
      auVar30._8_4_ = (uint)uVar7 >> 8;
      auVar30._12_4_ = (uint)((ulong)uVar7 >> 0x28);
      auVar5._10_2_ = 0x2c28;
      auVar5._0_10_ = Var17;
      auVar5._12_2_ = 0x3430;
      auVar5._14_2_ = 0x3c38;
      auVar14._2_2_ = 0;
      auVar14._0_2_ = (ushort)((ulong)uVar6 >> 0x10);
      auVar14[4] = (char)((ulong)uVar6 >> 0x30);
      auVar14[5] = (char)((ulong)uVar6 >> 0x38);
      auVar14._6_2_ = 0;
      auVar14[8] = (char)((ulong)uVar7 >> 0x10);
      auVar14[9] = (char)((ulong)uVar7 >> 0x18);
      auVar14._10_2_ = 0;
      auVar14[0xc] = (char)((ulong)uVar7 >> 0x30);
      auVar14[0xd] = (char)((ulong)uVar7 >> 0x38);
      auVar14._14_2_ = 0;
      auVar15._2_2_ = 0;
      auVar15._0_2_ = (ushort)((ulong)uVar9 >> 0x10);
      auVar15[4] = (char)((ulong)uVar9 >> 0x30);
      auVar15[5] = (char)((ulong)uVar9 >> 0x38);
      auVar15._6_2_ = 0;
      auVar15[8] = (char)((ulong)uVar10 >> 0x10);
      auVar15[9] = (char)((ulong)uVar10 >> 0x18);
      auVar15._10_2_ = 0;
      auVar15[0xc] = (char)((ulong)uVar10 >> 0x30);
      auVar15[0xd] = (char)((ulong)uVar10 >> 0x38);
      auVar15._14_2_ = 0;
      auVar16._4_4_ = (uint)((ulong)uVar9 >> 0x28);
      auVar16._0_4_ = (uint)uVar9 >> 8;
      auVar16._8_4_ = (uint)uVar10 >> 8;
      auVar16._12_4_ = (uint)((ulong)uVar10 >> 0x28);
      auVar27 = a64_TBL(ZEXT816(0),auVar14,auVar15,auVar30,auVar16,auVar5);
      auVar28 = NEON_ext(auVar27,auVar27,8,1);
      *puVar21 = auVar27[0];
      puVar21[1] = auVar28[0];
      puVar21[2] = auVar29[0];
      puVar21[3] = auVar27[1];
      puVar21[4] = auVar28[1];
      puVar21[5] = auVar29[1];
      puVar21[6] = auVar27[2];
      puVar21[7] = auVar28[2];
      puVar21[8] = auVar29[2];
      puVar21[9] = auVar27[3];
      puVar21[10] = auVar28[3];
      puVar21[0xb] = auVar29[3];
      puVar21[0xc] = auVar27[4];
      puVar21[0xd] = auVar28[4];
      puVar21[0xe] = auVar29[4];
      puVar21[0xf] = auVar27[5];
      puVar21[0x10] = auVar28[5];
      puVar21[0x11] = auVar29[5];
      puVar21[0x12] = auVar27[6];
      puVar21[0x13] = auVar28[6];
      puVar21[0x14] = auVar29[6];
      puVar21[0x15] = auVar27[7];
      puVar21[0x16] = auVar28[7];
      puVar21[0x17] = auVar29[7];
      puVar21 = puVar21 + 0x18;
      lVar26 = lVar26 + 8;
      pVar22 = pVar22 + 2;
    } while (lVar26 != 0);
    pVar22 = (unkbyte10 *)((long)param_1 + uVar25 * 4);
    param_3 = param_3 + uVar25 * 3;
    if (uVar1 == uVar25) {
      return;
    }
  }
LAB_0022dc40:
  do {
    pVar23 = (unkbyte10 *)((long)pVar22 + 4);
    uVar3 = *(undefined4 *)pVar22;
    *param_3 = (char)((uint)uVar3 >> 0x10);
    param_3[1] = (char)((uint)uVar3 >> 8);
    param_3[2] = (char)uVar3;
    param_3 = param_3 + 3;
    pVar22 = pVar23;
  } while (pVar23 < (unkbyte10 *)((long)param_1 + (long)param_2 * 4));
                    /* WARNING: Read-only address (ram,0x007eeb70) is written */
                    /* WARNING: Read-only address (ram,0x007eeb7a) is written */
                    /* WARNING: Read-only address (ram,0x007eeb80) is written */
  return;
}



/* Entry: 0022e43c; end: 0022e8b3;  */

void FUN_0022e43c(uint *param_1,ulong param_2,int param_3,uint *param_4)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  
  iVar5 = (int)param_2;
  if (param_3 < 5) {
    if (param_3 < 2) {
      if (param_3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0022e58c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000000b6d050)(param_1,param_2,param_4);
        return;
      }
      if (param_3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0022e560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000000b6d060)(param_1,param_2,param_4);
        return;
      }
    }
    else {
      if (param_3 == 2) {
                    /* WARNING: Could not recover jumptable at 0x0022e630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000000b6d048)(param_1,param_2,param_4);
        return;
      }
      if (param_3 == 3) {
                    /* WARNING: Could not recover jumptable at 0x0077a858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__memcpy_0099a3f8)
                  (param_4,param_1,
                   -(param_2 >> 0x1f & 1) & 0xfffffffc00000000 | (param_2 & 0xffffffff) << 2);
        return;
      }
      if ((param_3 == 4) && (0 < iVar5)) {
        puVar2 = param_1;
        do {
          puVar4 = puVar2 + 1;
          uVar1 = (*puVar2 & 0xff00ff00) >> 8 | (*puVar2 & 0xff00ff) << 8;
          *param_4 = uVar1 >> 0x10 | uVar1 << 0x10;
          puVar2 = puVar4;
          param_4 = param_4 + 1;
        } while (puVar4 < param_1 + iVar5);
      }
    }
  }
  else if (param_3 < 8) {
    if (param_3 == 5) {
                    /* WARNING: Could not recover jumptable at 0x0022e650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000000b6d068)(param_1,param_2,param_4);
      return;
    }
    if (param_3 == 6) {
                    /* WARNING: Could not recover jumptable at 0x0022e5c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000000b6d058)(param_1,param_2,param_4);
      return;
    }
    if (param_3 == 7) {
      (*pcRam0000000000b6d060)(param_1,param_2,param_4);
LAB_0022e664:
                    /* WARNING: Could not recover jumptable at 0x0022e68c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000000b6ce50)(param_4,0,param_2,1,0);
      return;
    }
  }
  else {
    if (param_3 == 8) {
      _memcpy(param_4,param_1,
              -(param_2 >> 0x1f & 1) & 0xfffffffc00000000 | (param_2 & 0xffffffff) << 2);
      goto LAB_0022e664;
    }
    if (param_3 == 9) {
      if (0 < iVar5) {
        puVar2 = param_1;
        puVar4 = param_4;
        do {
          puVar3 = puVar2 + 1;
          uVar1 = (*puVar2 & 0xff00ff00) >> 8 | (*puVar2 & 0xff00ff) << 8;
          *puVar4 = uVar1 >> 0x10 | uVar1 << 0x10;
          puVar2 = puVar3;
          puVar4 = puVar4 + 1;
        } while (puVar3 < param_1 + iVar5);
      }
                    /* WARNING: Could not recover jumptable at 0x0022e610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000000b6ce50)(param_4,1,param_2,1,0);
      return;
    }
    if (param_3 == 10) {
      (*pcRam0000000000b6d068)(param_1,param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x0022e534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000000b6ce58)(param_4,param_2,1,0);
      return;
    }
  }
  return;
}



/* Entry: 0022e8b4; end: 0022f9e3;  */

void FUN_0022e8b4(long param_1,undefined8 param_2,uint param_3,long param_4)

{
  ulong uVar1;
  int *piVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if (0 < (int)param_3) {
    uVar1 = 0;
    uVar3 = (ulong)param_3;
    if ((7 < param_3) && (0x1f < (ulong)(param_4 - param_1))) {
      uVar1 = uVar3 & 0x7ffffff8;
      puVar5 = (undefined8 *)(param_1 + 0x10);
      puVar7 = (undefined8 *)(param_4 + 0x10);
      uVar8 = uVar1;
      do {
        uVar9 = puVar5[-2];
        uVar11 = puVar5[1];
        uVar10 = *puVar5;
        puVar7[-1] = CONCAT44((int)((ulong)puVar5[-1] >> 0x20) + -0x1000000,
                              (int)puVar5[-1] + -0x1000000);
        puVar7[-2] = CONCAT44((int)((ulong)uVar9 >> 0x20) + -0x1000000,(int)uVar9 + -0x1000000);
        puVar7[1] = CONCAT44((int)((ulong)uVar11 >> 0x20) + -0x1000000,(int)uVar11 + -0x1000000);
        *puVar7 = CONCAT44((int)((ulong)uVar10 >> 0x20) + -0x1000000,(int)uVar10 + -0x1000000);
        puVar5 = puVar5 + 4;
        puVar7 = puVar7 + 4;
        uVar8 = uVar8 - 8;
      } while (uVar8 != 0);
      if (uVar1 == uVar3) {
        return;
      }
    }
    lVar4 = uVar3 - uVar1;
    piVar2 = (int *)(param_1 + uVar1 * 4);
    piVar6 = (int *)(param_4 + uVar1 * 4);
    do {
      *piVar6 = *piVar2 + -0x1000000;
      lVar4 = lVar4 + -1;
      piVar2 = piVar2 + 1;
      piVar6 = piVar6 + 1;
    } while (lVar4 != 0);
  }
  return;
}



/* Entry: 0022f9e4; end: 0022fb9b;  */

void FUN_0022f9e4(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    return;
  }
  if (*(int *)(param_1 + 4) == 0) {
    if (*(int *)(param_1 + 0x14) == 0) {
      if (0 < *(int *)(param_1 + 0x34) * *(int *)(param_1 + 8)) {
        lVar2 = 0;
        lVar3 = *(long *)(param_1 + 0x58);
        do {
          *(char *)(*(long *)(param_1 + 0x48) + lVar2) = (char)*(undefined4 *)(lVar3 + lVar2 * 4);
          lVar3 = *(long *)(param_1 + 0x58);
          *(undefined4 *)(lVar3 + lVar2 * 4) = 0;
          lVar2 = lVar2 + 1;
        } while (lVar2 < (long)*(int *)(param_1 + 0x34) * (long)*(int *)(param_1 + 8));
      }
      goto LAB_0022fa34;
    }
    puVar1 = (undefined8 *)0xb6d290;
  }
  else {
    puVar1 = (undefined8 *)0xb6d288;
  }
  (*(code *)*puVar1)();
LAB_0022fa34:
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x1c);
  *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + (long)*(int *)(param_1 + 0x50);
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  return;
}



/* Entry: 0022fb9c; end: 00230a3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0022fb9c(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                 undefined1 *param_4,uint param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  byte bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  unkbyte9 Var12;
  undefined1 auVar13 [12];
  undefined1 *puVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  undefined1 (*pauVar22) [16];
  ulong *puVar23;
  undefined1 (*pauVar24) [16];
  ulong *puVar25;
  undefined1 (*pauVar26) [16];
  undefined8 *puVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  uint uVar39;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  undefined1 auVar40 [16];
  uint uVar44;
  int iVar45;
  int iVar46;
  undefined8 uVar47;
  uint uVar49;
  int iVar50;
  int iVar51;
  uint uVar52;
  int iVar53;
  int iVar54;
  uint uVar55;
  int iVar56;
  int iVar57;
  undefined1 auVar48 [16];
  uint uVar58;
  uint uVar59;
  undefined8 uVar60;
  uint uVar63;
  uint uVar64;
  uint uVar65;
  uint uVar66;
  uint uVar67;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  uint uVar68;
  uint uVar69;
  undefined8 uVar70;
  uint uVar73;
  uint uVar74;
  uint uVar75;
  uint uVar76;
  uint uVar77;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  uint uVar81;
  uint uVar82;
  uint uVar83;
  uint uVar86;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  uint uVar102;
  uint uVar110;
  uint uVar111;
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  uint uVar112;
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  int iVar113;
  undefined8 uVar114;
  int iVar119;
  undefined1 auVar115 [16];
  int iVar118;
  int iVar120;
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  uint uVar121;
  uint uVar122;
  uint uVar124;
  uint uVar125;
  uint uVar126;
  uint uVar127;
  undefined1 auVar123 [16];
  uint uVar128;
  uint uVar129;
  
  if ((int)param_5 < 1) {
    return;
  }
  uVar15 = (ulong)param_5;
  if (param_5 < 8) {
    uVar17 = 0;
  }
  else {
    uVar17 = 0;
    pauVar22 = (undefined1 (*) [16])(param_4 + uVar15 * 4);
    if (((pauVar22 <= param_1 || *param_1 + uVar15 <= param_4) &&
        (*param_2 + uVar15 <= param_4 || pauVar22 <= param_2)) &&
       (*param_3 + uVar15 <= param_4 || pauVar22 <= param_3)) {
      if (param_5 < 0x10) {
        uVar18 = 0;
      }
      else {
        uVar17 = uVar15 & 0x7ffffff0;
        auVar123._8_8_ = 0xffffff0fffffff0e;
        auVar123._0_8_ = 0xffffff0dffffff0c;
        auVar104._8_8_ = 0xffffff0fffffff0e;
        auVar104._0_8_ = 0xffffff0dffffff0c;
        auVar11._8_8_ = 0xffffff0bffffff0a;
        auVar11._0_8_ = 0xffffff09ffffff08;
        auVar10._8_8_ = 0xffffff0bffffff0a;
        auVar10._0_8_ = 0xffffff09ffffff08;
        pauVar22 = param_1;
        pauVar24 = param_2;
        pauVar26 = param_3;
        puVar14 = param_4;
        uVar18 = uVar17;
        do {
          auVar80 = *pauVar24;
          auVar84._8_4_ = 0xffffff06;
          auVar84._0_8_ = 0xffffff05ffffff04;
          auVar115._8_4_ = 0xffffff06;
          auVar115._0_8_ = 0xffffff05ffffff04;
          auVar115._12_4_ = 0xffffff07;
          auVar40 = a64_TBL(ZEXT816(0),auVar80,auVar115);
          auVar61._8_4_ = 0xffffff02;
          auVar61._0_8_ = 0xffffff01ffffff00;
          auVar105._8_4_ = 0xffffff02;
          auVar105._0_8_ = 0xffffff01ffffff00;
          auVar105._12_4_ = 0xffffff03;
          auVar72 = a64_TBL(ZEXT816(0),auVar80,auVar105);
          auVar115 = a64_TBL(ZEXT816(0),auVar80,auVar104);
          auVar105 = a64_TBL(ZEXT816(0),auVar80,auVar10);
          uVar47 = CONCAT26(auVar105._12_2_,
                            CONCAT24(auVar105._8_2_,CONCAT22(auVar105._4_2_,auVar105._0_2_)));
          uVar60 = CONCAT26(auVar115._12_2_,
                            CONCAT24(auVar115._8_2_,CONCAT22(auVar115._4_2_,auVar115._0_2_)));
          uVar70 = CONCAT26(auVar72._12_2_,
                            CONCAT24(auVar72._8_2_,CONCAT22(auVar72._4_2_,auVar72._0_2_)));
          auVar105 = NEON_umull((ulong)CONCAT16((*pauVar22)[0xb],
                                                (uint6)CONCAT14((*pauVar22)[10],
                                                                (uint)CONCAT12((*pauVar22)[9],
                                                                               (ushort)(byte)(*
                                                  pauVar22)[8]))),0x4a854a854a854a85,2);
          uVar55 = (uint)(byte)(*pauVar22)[0xc] * 0x4a85;
          uVar58 = (uint)(byte)(*pauVar22)[0xd] * 0x4a85;
          uVar59 = (uint)(byte)(*pauVar22)[0xe] * 0x4a85;
          uVar63 = (uint)(byte)(*pauVar22)[0xf] * 0x4a85;
          auVar116 = NEON_umull((ulong)CONCAT16((*pauVar22)[3],
                                                (uint6)CONCAT14((*pauVar22)[2],
                                                                (uint)CONCAT12((*pauVar22)[1],
                                                                               (ushort)(byte)(*
                                                  pauVar22)[0]))),0x4a854a854a854a85,2);
          uVar122 = (uint)(byte)(*pauVar22)[4] * 0x4a85;
          uVar125 = (uint)(byte)(*pauVar22)[5] * 0x4a85;
          uVar127 = (uint)(byte)(*pauVar22)[6] * 0x4a85;
          uVar129 = (uint)(byte)(*pauVar22)[7] * 0x4a85;
          auVar115 = NEON_umull(uVar60,0x811a811a811a811a,2);
          auVar80 = NEON_umull(uVar47,0x811a811a811a811a,2);
          auVar72 = NEON_umull(CONCAT17(auVar40[0xd],
                                        CONCAT16(auVar40[0xc],
                                                 CONCAT15(auVar40[9],
                                                          CONCAT14(auVar40[8],
                                                                   CONCAT13(auVar40[5],
                                                                            CONCAT12(auVar40[4],
                                                                                     auVar40._0_2_))
                                                                  )))),0x811a811a811a811a,2);
          uVar68 = (auVar115._0_4_ >> 8) + (uVar55 >> 8);
          uVar69 = (auVar115._4_4_ >> 8) + (uVar58 >> 8);
          uVar73 = (auVar115._8_4_ >> 8) + (uVar59 >> 8);
          uVar74 = (auVar115._12_4_ >> 8) + (uVar63 >> 8);
          uVar64 = auVar105._0_4_;
          uVar65 = auVar105._4_4_;
          uVar66 = auVar105._8_4_;
          uVar67 = auVar105._12_4_;
          uVar75 = (auVar80._0_4_ >> 8) + (uVar64 >> 8);
          uVar76 = (auVar80._4_4_ >> 8) + (uVar65 >> 8);
          uVar77 = (auVar80._8_4_ >> 8) + (uVar66 >> 8);
          uVar81 = (auVar80._12_4_ >> 8) + (uVar67 >> 8);
          uVar102 = (auVar72._0_4_ >> 8) + (uVar122 >> 8);
          uVar110 = (auVar72._4_4_ >> 8) + (uVar125 >> 8);
          uVar111 = (auVar72._8_4_ >> 8) + (uVar127 >> 8);
          uVar112 = (auVar72._12_4_ >> 8) + (uVar129 >> 8);
          uVar39 = uVar75 - 0x4515;
          uVar42 = uVar76 - 0x4515;
          uVar44 = uVar77 - 0x4515;
          uVar52 = uVar81 - 0x4515;
          uVar82 = uVar68 - 0x4515;
          uVar86 = uVar69 - 0x4515;
          uVar124 = uVar73 - 0x4515;
          uVar128 = uVar74 - 0x4515;
          iVar35 = -(uint)(uVar82 < 0x4000);
          iVar36 = -(uint)(uVar86 < 0x4000);
          iVar37 = -(uint)(uVar124 < 0x4000);
          iVar38 = -(uint)(uVar128 < 0x4000);
          iVar45 = -(uint)(uVar39 < 0x4000);
          iVar46 = -(uint)(uVar42 < 0x4000);
          iVar50 = -(uint)(uVar44 < 0x4000);
          iVar51 = -(uint)(uVar52 < 0x4000);
          uVar41 = uVar39 >> 6;
          uVar43 = uVar42 >> 6;
          uVar49 = uVar44 >> 6;
          uVar83 = uVar82 >> 6;
          uVar121 = uVar86 >> 6;
          uVar126 = uVar124 >> 6;
          auVar33[0] = (byte)uVar83 & (byte)iVar35 | ~-(uVar68 < 0x4515) & ~(byte)iVar35;
          auVar33[1] = (byte)(uVar83 >> 8) & (byte)((uint)iVar35 >> 8);
          auVar33[2] = (byte)(uVar83 >> 0x10) & (byte)((uint)iVar35 >> 0x10);
          auVar33[3] = (byte)(uVar82 >> 0x1e) & (byte)((uint)iVar35 >> 0x18);
          auVar33[4] = (byte)uVar121 & (byte)iVar36 | ~-(uVar69 < 0x4515) & ~(byte)iVar36;
          auVar33[5] = (byte)(uVar121 >> 8) & (byte)((uint)iVar36 >> 8);
          auVar33[6] = (byte)(uVar121 >> 0x10) & (byte)((uint)iVar36 >> 0x10);
          auVar33[7] = (byte)(uVar86 >> 0x1e) & (byte)((uint)iVar36 >> 0x18);
          auVar33[8] = (byte)uVar126 & (byte)iVar37 | ~-(uVar73 < 0x4515) & ~(byte)iVar37;
          auVar33[9] = (byte)(uVar126 >> 8) & (byte)((uint)iVar37 >> 8);
          auVar33[10] = (byte)(uVar126 >> 0x10) & (byte)((uint)iVar37 >> 0x10);
          auVar33[0xb] = (byte)(uVar124 >> 0x1e) & (byte)((uint)iVar37 >> 0x18);
          auVar33[0xc] = (byte)(uVar128 >> 6) & (byte)iVar38 | ~-(uVar74 < 0x4515) & ~(byte)iVar38;
          auVar33[0xd] = (byte)((uVar128 >> 6) >> 8) & (byte)((uint)iVar38 >> 8);
          auVar33[0xe] = (byte)((uint3)(uVar128 >> 0xe) >> 8) & (byte)((uint)iVar38 >> 0x10);
          auVar33[0xf] = (byte)(uVar128 >> 0x1e) & (byte)((uint)iVar38 >> 0x18);
          auVar31[0] = (byte)uVar41 & (byte)iVar45 | ~-(uVar75 < 0x4515) & ~(byte)iVar45;
          auVar31[1] = (byte)(uVar41 >> 8) & (byte)((uint)iVar45 >> 8);
          auVar31[2] = (byte)(uVar41 >> 0x10) & (byte)((uint)iVar45 >> 0x10);
          auVar31[3] = (byte)(uVar39 >> 0x1e) & (byte)((uint)iVar45 >> 0x18);
          auVar31[4] = (byte)uVar43 & (byte)iVar46 | ~-(uVar76 < 0x4515) & ~(byte)iVar46;
          auVar31[5] = (byte)(uVar43 >> 8) & (byte)((uint)iVar46 >> 8);
          auVar31[6] = (byte)(uVar43 >> 0x10) & (byte)((uint)iVar46 >> 0x10);
          auVar31[7] = (byte)(uVar42 >> 0x1e) & (byte)((uint)iVar46 >> 0x18);
          auVar31[8] = (byte)uVar49 & (byte)iVar50 | ~-(uVar77 < 0x4515) & ~(byte)iVar50;
          auVar31[9] = (byte)(uVar49 >> 8) & (byte)((uint)iVar50 >> 8);
          auVar31[10] = (byte)(uVar49 >> 0x10) & (byte)((uint)iVar50 >> 0x10);
          auVar31[0xb] = (byte)(uVar44 >> 0x1e) & (byte)((uint)iVar50 >> 0x18);
          auVar31[0xc] = (byte)(uVar52 >> 6) & (byte)iVar51 | ~-(uVar81 < 0x4515) & ~(byte)iVar51;
          auVar31[0xd] = (byte)((uVar52 >> 6) >> 8) & (byte)((uint)iVar51 >> 8);
          auVar31[0xe] = (byte)((uint3)(uVar52 >> 0xe) >> 8) & (byte)((uint)iVar51 >> 0x10);
          auVar31[0xf] = (byte)(uVar52 >> 0x1e) & (byte)((uint)iVar51 >> 0x18);
          uVar39 = uVar102 - 0x4515;
          uVar42 = uVar110 - 0x4515;
          uVar44 = uVar111 - 0x4515;
          uVar52 = uVar112 - 0x4515;
          iVar35 = -(uint)(uVar39 < 0x4000);
          iVar36 = -(uint)(uVar42 < 0x4000);
          iVar37 = -(uint)(uVar44 < 0x4000);
          iVar38 = -(uint)(uVar52 < 0x4000);
          uVar41 = uVar39 >> 6;
          uVar43 = uVar42 >> 6;
          uVar49 = uVar44 >> 6;
          auVar105 = NEON_umull(uVar70,0x811a811a811a811a,2);
          uVar75 = auVar116._0_4_;
          uVar76 = auVar116._4_4_;
          uVar77 = auVar116._8_4_;
          uVar81 = auVar116._12_4_;
          uVar68 = (auVar105._0_4_ >> 8) + (uVar75 >> 8);
          uVar69 = (auVar105._4_4_ >> 8) + (uVar76 >> 8);
          uVar73 = (auVar105._8_4_ >> 8) + (uVar77 >> 8);
          uVar74 = (auVar105._12_4_ >> 8) + (uVar81 >> 8);
          auVar106[0] = (byte)uVar41 & (byte)iVar35 | ~-(uVar102 < 0x4515) & ~(byte)iVar35;
          auVar106[1] = (byte)(uVar41 >> 8) & (byte)((uint)iVar35 >> 8);
          auVar106[2] = (byte)(uVar41 >> 0x10) & (byte)((uint)iVar35 >> 0x10);
          auVar106[3] = (byte)(uVar39 >> 0x1e) & (byte)((uint)iVar35 >> 0x18);
          auVar106[4] = (byte)uVar43 & (byte)iVar36 | ~-(uVar110 < 0x4515) & ~(byte)iVar36;
          auVar106[5] = (byte)(uVar43 >> 8) & (byte)((uint)iVar36 >> 8);
          auVar106[6] = (byte)(uVar43 >> 0x10) & (byte)((uint)iVar36 >> 0x10);
          auVar106[7] = (byte)(uVar42 >> 0x1e) & (byte)((uint)iVar36 >> 0x18);
          auVar106[8] = (byte)uVar49 & (byte)iVar37 | ~-(uVar111 < 0x4515) & ~(byte)iVar37;
          auVar106[9] = (byte)(uVar49 >> 8) & (byte)((uint)iVar37 >> 8);
          auVar106[10] = (byte)(uVar49 >> 0x10) & (byte)((uint)iVar37 >> 0x10);
          auVar106[0xb] = (byte)(uVar44 >> 0x1e) & (byte)((uint)iVar37 >> 0x18);
          auVar106[0xc] = (byte)(uVar52 >> 6) & (byte)iVar38 | ~-(uVar112 < 0x4515) & ~(byte)iVar38;
          auVar106[0xd] = (byte)((uVar52 >> 6) >> 8) & (byte)((uint)iVar38 >> 8);
          auVar106[0xe] = (byte)((uint3)(uVar52 >> 0xe) >> 8) & (byte)((uint)iVar38 >> 0x10);
          auVar106[0xf] = (byte)(uVar52 >> 0x1e) & (byte)((uint)iVar38 >> 0x18);
          uVar39 = uVar68 - 0x4515;
          uVar42 = uVar69 - 0x4515;
          uVar44 = uVar73 - 0x4515;
          uVar52 = uVar74 - 0x4515;
          iVar35 = -(uint)(uVar39 < 0x4000);
          iVar36 = -(uint)(uVar42 < 0x4000);
          iVar37 = -(uint)(uVar44 < 0x4000);
          iVar38 = -(uint)(uVar52 < 0x4000);
          uVar41 = uVar39 >> 6;
          uVar43 = uVar42 >> 6;
          uVar49 = uVar44 >> 6;
          auVar72[0] = (byte)uVar41 & (byte)iVar35 | ~-(uVar68 < 0x4515) & ~(byte)iVar35;
          auVar72[1] = (byte)(uVar41 >> 8) & (byte)((uint)iVar35 >> 8);
          auVar72[2] = (byte)(uVar41 >> 0x10) & (byte)((uint)iVar35 >> 0x10);
          auVar72[3] = (byte)(uVar39 >> 0x1e) & (byte)((uint)iVar35 >> 0x18);
          auVar72[4] = (byte)uVar43 & (byte)iVar36 | ~-(uVar69 < 0x4515) & ~(byte)iVar36;
          auVar72[5] = (byte)(uVar43 >> 8) & (byte)((uint)iVar36 >> 8);
          auVar72[6] = (byte)(uVar43 >> 0x10) & (byte)((uint)iVar36 >> 0x10);
          auVar72[7] = (byte)(uVar42 >> 0x1e) & (byte)((uint)iVar36 >> 0x18);
          auVar72[8] = (byte)uVar49 & (byte)iVar37 | ~-(uVar73 < 0x4515) & ~(byte)iVar37;
          auVar72[9] = (byte)(uVar49 >> 8) & (byte)((uint)iVar37 >> 8);
          auVar72[10] = (byte)(uVar49 >> 0x10) & (byte)((uint)iVar37 >> 0x10);
          auVar72[0xb] = (byte)(uVar44 >> 0x1e) & (byte)((uint)iVar37 >> 0x18);
          auVar72[0xc] = (byte)(uVar52 >> 6) & (byte)iVar38 | ~-(uVar74 < 0x4515) & ~(byte)iVar38;
          auVar72[0xd] = (byte)((uVar52 >> 6) >> 8) & (byte)((uint)iVar38 >> 8);
          auVar72[0xe] = (byte)((uint3)(uVar52 >> 0xe) >> 8) & (byte)((uint)iVar38 >> 0x10);
          auVar72[0xf] = (byte)(uVar52 >> 0x1e) & (byte)((uint)iVar38 >> 0x18);
          auVar105 = *pauVar26;
          auVar80._8_8_ = 0x3c3834302c282420;
          auVar80._0_8_ = 0x1c1814100c080400;
          auVar72 = a64_TBL(ZEXT816(0),auVar72,auVar106,auVar31,auVar33,auVar80);
          auVar115 = a64_TBL(ZEXT816(0),auVar105,auVar11);
          auVar80 = a64_TBL(ZEXT816(0),auVar105,auVar123);
          auVar61._12_4_ = 0xffffff03;
          auVar61 = a64_TBL(ZEXT816(0),auVar105,auVar61);
          auVar84._12_4_ = 0xffffff07;
          auVar105 = a64_TBL(ZEXT816(0),auVar105,auVar84);
          uVar28 = CONCAT26(auVar105._12_2_,
                            CONCAT24(auVar105._8_2_,CONCAT22(auVar105._4_2_,auVar105._0_2_)));
          uVar30 = CONCAT26(auVar61._12_2_,
                            CONCAT24(auVar61._8_2_,CONCAT22(auVar61._4_2_,auVar61._0_2_)));
          uVar29 = CONCAT26(auVar80._12_2_,
                            CONCAT24(auVar80._8_2_,CONCAT22(auVar80._4_2_,auVar80._0_2_)));
          uVar114 = CONCAT26(auVar115._12_2_,
                             CONCAT24(auVar115._8_2_,CONCAT22(auVar115._4_2_,auVar115._0_2_)));
          auVar115 = NEON_umull(CONCAT17(auVar40[0xd],
                                         CONCAT16(auVar40[0xc],
                                                  CONCAT15(auVar40[9],
                                                           CONCAT14(auVar40[8],
                                                                    CONCAT13(auVar40[5],
                                                                             CONCAT12(auVar40[4],
                                                                                      auVar40._0_2_)
                                                                            ))))),0x1913191319131913
                                ,2);
          auVar84 = NEON_umull(uVar70,0x1913191319131913,2);
          auVar61 = NEON_umull(uVar60,0x1913191319131913,2);
          auVar80 = NEON_umull(uVar47,0x1913191319131913,2);
          auVar40 = NEON_umull(uVar28,0x3408340834083408,2);
          auVar116 = NEON_umull(uVar30,0x3408340834083408,2);
          auVar106 = NEON_umull(uVar29,0x3408340834083408,2);
          auVar107 = NEON_umull(uVar114,0x3408340834083408,2);
          auVar105 = NEON_umull(uVar114,0x6625662566256625,2);
          uVar68 = (auVar105._0_4_ >> 8) + (uVar64 >> 8);
          uVar69 = (auVar105._4_4_ >> 8) + (uVar65 >> 8);
          uVar73 = (auVar105._8_4_ >> 8) + (uVar66 >> 8);
          uVar74 = (auVar105._12_4_ >> 8) + (uVar67 >> 8);
          iVar35 = (uVar64 >> 8) - ((auVar80._0_4_ >> 8) + (auVar107._0_4_ >> 8));
          iVar36 = (uVar65 >> 8) - ((auVar80._4_4_ >> 8) + (auVar107._4_4_ >> 8));
          iVar37 = (uVar66 >> 8) - ((auVar80._8_4_ >> 8) + (auVar107._8_4_ >> 8));
          iVar38 = (uVar67 >> 8) - ((auVar80._12_4_ >> 8) + (auVar107._12_4_ >> 8));
          auVar105 = NEON_umull(uVar29,0x6625662566256625,2);
          uVar64 = (auVar105._0_4_ >> 8) + (uVar55 >> 8);
          uVar65 = (auVar105._4_4_ >> 8) + (uVar58 >> 8);
          uVar66 = (auVar105._8_4_ >> 8) + (uVar59 >> 8);
          uVar67 = (auVar105._12_4_ >> 8) + (uVar63 >> 8);
          iVar45 = (uVar55 >> 8) - ((auVar61._0_4_ >> 8) + (auVar106._0_4_ >> 8));
          iVar46 = (uVar58 >> 8) - ((auVar61._4_4_ >> 8) + (auVar106._4_4_ >> 8));
          iVar50 = (uVar59 >> 8) - ((auVar61._8_4_ >> 8) + (auVar106._8_4_ >> 8));
          iVar51 = (uVar63 >> 8) - ((auVar61._12_4_ >> 8) + (auVar106._12_4_ >> 8));
          auVar61 = NEON_umull(uVar30,0x6625662566256625,2);
          auVar105 = NEON_umull(uVar28,0x6625662566256625,2);
          uVar39 = (auVar105._0_4_ >> 8) + (uVar122 >> 8);
          uVar41 = (auVar105._4_4_ >> 8) + (uVar125 >> 8);
          uVar42 = (auVar105._8_4_ >> 8) + (uVar127 >> 8);
          uVar43 = (auVar105._12_4_ >> 8) + (uVar129 >> 8);
          uVar44 = (auVar61._0_4_ >> 8) + (uVar75 >> 8);
          uVar49 = (auVar61._4_4_ >> 8) + (uVar76 >> 8);
          uVar52 = (auVar61._8_4_ >> 8) + (uVar77 >> 8);
          uVar55 = (auVar61._12_4_ >> 8) + (uVar81 >> 8);
          iVar113 = (uVar75 >> 8) - ((auVar84._0_4_ >> 8) + (auVar116._0_4_ >> 8));
          iVar118 = (uVar76 >> 8) - ((auVar84._4_4_ >> 8) + (auVar116._4_4_ >> 8));
          iVar119 = (uVar77 >> 8) - ((auVar84._8_4_ >> 8) + (auVar116._8_4_ >> 8));
          iVar120 = (uVar81 >> 8) - ((auVar84._12_4_ >> 8) + (auVar116._12_4_ >> 8));
          iVar53 = (uVar122 >> 8) - ((auVar115._0_4_ >> 8) + (auVar40._0_4_ >> 8));
          iVar54 = (uVar125 >> 8) - ((auVar115._4_4_ >> 8) + (auVar40._4_4_ >> 8));
          iVar56 = (uVar127 >> 8) - ((auVar115._8_4_ >> 8) + (auVar40._8_4_ >> 8));
          iVar57 = (uVar129 >> 8) - ((auVar115._12_4_ >> 8) + (auVar40._12_4_ >> 8));
          uVar58 = iVar53 + 0x2204;
          uVar59 = iVar54 + 0x2204;
          uVar63 = iVar56 + 0x2204;
          uVar75 = iVar57 + 0x2204;
          iVar54 = -(uint)(iVar54 < -0x2204);
          iVar56 = -(uint)(iVar56 < -0x2204);
          iVar57 = -(uint)(iVar57 < -0x2204);
          auVar94._0_4_ = -(uint)(uVar58 < 0x4000);
          auVar94._4_4_ = -(uint)(uVar59 < 0x4000);
          auVar94._8_4_ = -(uint)(uVar63 < 0x4000);
          auVar94._12_4_ = -(uint)(uVar75 < 0x4000);
          auVar87._0_4_ = uVar58 >> 6;
          auVar87._4_4_ = uVar59 >> 6;
          auVar87._8_4_ = uVar63 >> 6;
          auVar87._12_4_ = uVar75 >> 6;
          auVar34[0] = ~-(iVar53 < -0x2204);
          auVar34._1_3_ = 0;
          auVar34[4] = ~(byte)iVar54;
          auVar34._5_2_ = 0;
          auVar34[7] = ~(byte)((uint)iVar54 >> 0x18);
          auVar34[8] = ~(byte)iVar56;
          auVar34[9] = ~(byte)((uint)iVar56 >> 8);
          auVar34[10] = ~(byte)((uint)iVar56 >> 0x10);
          auVar34[0xb] = ~(byte)((uint)iVar56 >> 0x18);
          auVar34[0xc] = ~(byte)iVar57;
          auVar34[0xd] = ~(byte)((uint)iVar57 >> 8);
          auVar34[0xe] = ~(byte)((uint)iVar57 >> 0x10);
          auVar34[0xf] = ~(byte)((uint)iVar57 >> 0x18);
          auVar34 = auVar34 ^ (auVar34 ^ auVar87) & auVar94;
          uVar58 = iVar113 + 0x2204;
          uVar59 = iVar118 + 0x2204;
          uVar63 = iVar119 + 0x2204;
          uVar75 = iVar120 + 0x2204;
          iVar53 = -(uint)(iVar118 < -0x2204);
          iVar54 = -(uint)(iVar119 < -0x2204);
          iVar56 = -(uint)(iVar120 < -0x2204);
          auVar95._0_4_ = -(uint)(uVar58 < 0x4000);
          auVar95._4_4_ = -(uint)(uVar59 < 0x4000);
          auVar95._8_4_ = -(uint)(uVar63 < 0x4000);
          auVar95._12_4_ = -(uint)(uVar75 < 0x4000);
          auVar88._0_4_ = uVar58 >> 6;
          auVar88._4_4_ = uVar59 >> 6;
          auVar88._8_4_ = uVar63 >> 6;
          auVar88._12_4_ = uVar75 >> 6;
          auVar85[0] = ~-(iVar113 < -0x2204);
          auVar85._1_3_ = 0;
          auVar85[4] = ~(byte)iVar53;
          auVar85._5_2_ = 0;
          auVar85[7] = ~(byte)((uint)iVar53 >> 0x18);
          auVar85[8] = ~(byte)iVar54;
          auVar85[9] = ~(byte)((uint)iVar54 >> 8);
          auVar85[10] = ~(byte)((uint)iVar54 >> 0x10);
          auVar85[0xb] = ~(byte)((uint)iVar54 >> 0x18);
          auVar85[0xc] = ~(byte)iVar56;
          auVar85[0xd] = ~(byte)((uint)iVar56 >> 8);
          auVar85[0xe] = ~(byte)((uint)iVar56 >> 0x10);
          auVar85[0xf] = ~(byte)((uint)iVar56 >> 0x18);
          auVar85 = auVar85 ^ (auVar85 ^ auVar88) & auVar95;
          uVar58 = iVar45 + 0x2204;
          uVar59 = iVar46 + 0x2204;
          uVar63 = iVar50 + 0x2204;
          uVar75 = iVar51 + 0x2204;
          iVar46 = -(uint)(iVar46 < -0x2204);
          iVar50 = -(uint)(iVar50 < -0x2204);
          iVar51 = -(uint)(iVar51 < -0x2204);
          auVar96._0_4_ = -(uint)(uVar58 < 0x4000);
          auVar96._4_4_ = -(uint)(uVar59 < 0x4000);
          auVar96._8_4_ = -(uint)(uVar63 < 0x4000);
          auVar96._12_4_ = -(uint)(uVar75 < 0x4000);
          auVar89._0_4_ = uVar58 >> 6;
          auVar89._4_4_ = uVar59 >> 6;
          auVar89._8_4_ = uVar63 >> 6;
          auVar89._12_4_ = uVar75 >> 6;
          auVar107[0] = ~-(iVar45 < -0x2204);
          auVar107._1_3_ = 0;
          auVar107[4] = ~(byte)iVar46;
          auVar107._5_2_ = 0;
          auVar107[7] = ~(byte)((uint)iVar46 >> 0x18);
          auVar107[8] = ~(byte)iVar50;
          auVar107[9] = ~(byte)((uint)iVar50 >> 8);
          auVar107[10] = ~(byte)((uint)iVar50 >> 0x10);
          auVar107[0xb] = ~(byte)((uint)iVar50 >> 0x18);
          auVar107[0xc] = ~(byte)iVar51;
          auVar107[0xd] = ~(byte)((uint)iVar51 >> 8);
          auVar107[0xe] = ~(byte)((uint)iVar51 >> 0x10);
          auVar107[0xf] = ~(byte)((uint)iVar51 >> 0x18);
          auVar107 = auVar107 ^ (auVar107 ^ auVar89) & auVar96;
          uVar58 = iVar35 + 0x2204;
          uVar59 = iVar36 + 0x2204;
          uVar63 = iVar37 + 0x2204;
          uVar75 = iVar38 + 0x2204;
          iVar36 = -(uint)(iVar36 < -0x2204);
          iVar37 = -(uint)(iVar37 < -0x2204);
          iVar38 = -(uint)(iVar38 < -0x2204);
          auVar97._0_4_ = -(uint)(uVar58 < 0x4000);
          auVar97._4_4_ = -(uint)(uVar59 < 0x4000);
          auVar97._8_4_ = -(uint)(uVar63 < 0x4000);
          auVar97._12_4_ = -(uint)(uVar75 < 0x4000);
          auVar90._0_4_ = uVar58 >> 6;
          auVar90._4_4_ = uVar59 >> 6;
          auVar90._8_4_ = uVar63 >> 6;
          auVar90._12_4_ = uVar75 >> 6;
          auVar116[0] = ~-(iVar35 < -0x2204);
          auVar116._1_3_ = 0;
          auVar116[4] = ~(byte)iVar36;
          auVar116._5_2_ = 0;
          auVar116[7] = ~(byte)((uint)iVar36 >> 0x18);
          auVar116[8] = ~(byte)iVar37;
          auVar116[9] = ~(byte)((uint)iVar37 >> 8);
          auVar116[10] = ~(byte)((uint)iVar37 >> 0x10);
          auVar116[0xb] = ~(byte)((uint)iVar37 >> 0x18);
          auVar116[0xc] = ~(byte)iVar38;
          auVar116[0xd] = ~(byte)((uint)iVar38 >> 8);
          auVar116[0xe] = ~(byte)((uint)iVar38 >> 0x10);
          auVar116[0xf] = ~(byte)((uint)iVar38 >> 0x18);
          auVar116 = auVar116 ^ (auVar116 ^ auVar90) & auVar97;
          uVar58 = uVar39 - 0x379a;
          uVar59 = uVar41 - 0x379a;
          uVar63 = uVar42 - 0x379a;
          uVar75 = uVar43 - 0x379a;
          iVar35 = -(uint)(uVar41 < 0x379a);
          iVar36 = -(uint)(uVar42 < 0x379a);
          iVar37 = -(uint)(uVar43 < 0x379a);
          auVar98._0_4_ = -(uint)(uVar58 < 0x4000);
          auVar98._4_4_ = -(uint)(uVar59 < 0x4000);
          auVar98._8_4_ = -(uint)(uVar63 < 0x4000);
          auVar98._12_4_ = -(uint)(uVar75 < 0x4000);
          auVar91._0_4_ = uVar58 >> 6;
          auVar91._4_4_ = uVar59 >> 6;
          auVar91._8_4_ = uVar63 >> 6;
          auVar91._12_4_ = uVar75 >> 6;
          auVar40[0] = ~-(uVar39 < 0x379a);
          auVar40._1_3_ = 0;
          auVar40[4] = ~(byte)iVar35;
          auVar40._5_2_ = 0;
          auVar40[7] = ~(byte)((uint)iVar35 >> 0x18);
          auVar40[8] = ~(byte)iVar36;
          auVar40[9] = ~(byte)((uint)iVar36 >> 8);
          auVar40[10] = ~(byte)((uint)iVar36 >> 0x10);
          auVar40[0xb] = ~(byte)((uint)iVar36 >> 0x18);
          auVar40[0xc] = ~(byte)iVar37;
          auVar40[0xd] = ~(byte)((uint)iVar37 >> 8);
          auVar40[0xe] = ~(byte)((uint)iVar37 >> 0x10);
          auVar40[0xf] = ~(byte)((uint)iVar37 >> 0x18);
          auVar40 = auVar40 ^ (auVar40 ^ auVar91) & auVar98;
          uVar39 = uVar44 - 0x379a;
          uVar41 = uVar49 - 0x379a;
          uVar42 = uVar52 - 0x379a;
          uVar43 = uVar55 - 0x379a;
          iVar35 = -(uint)(uVar49 < 0x379a);
          iVar36 = -(uint)(uVar52 < 0x379a);
          iVar37 = -(uint)(uVar55 < 0x379a);
          auVar99._0_4_ = -(uint)(uVar39 < 0x4000);
          auVar99._4_4_ = -(uint)(uVar41 < 0x4000);
          auVar99._8_4_ = -(uint)(uVar42 < 0x4000);
          auVar99._12_4_ = -(uint)(uVar43 < 0x4000);
          auVar92._0_4_ = uVar39 >> 6;
          auVar92._4_4_ = uVar41 >> 6;
          auVar92._8_4_ = uVar42 >> 6;
          auVar92._12_4_ = uVar43 >> 6;
          auVar32[0] = ~-(uVar44 < 0x379a);
          auVar32._1_3_ = 0;
          auVar32[4] = ~(byte)iVar35;
          auVar32._5_2_ = 0;
          auVar32[7] = ~(byte)((uint)iVar35 >> 0x18);
          auVar32[8] = ~(byte)iVar36;
          auVar32[9] = ~(byte)((uint)iVar36 >> 8);
          auVar32[10] = ~(byte)((uint)iVar36 >> 0x10);
          auVar32[0xb] = ~(byte)((uint)iVar36 >> 0x18);
          auVar32[0xc] = ~(byte)iVar37;
          auVar32[0xd] = ~(byte)((uint)iVar37 >> 8);
          auVar32[0xe] = ~(byte)((uint)iVar37 >> 0x10);
          auVar32[0xf] = ~(byte)((uint)iVar37 >> 0x18);
          auVar32 = auVar32 ^ (auVar32 ^ auVar92) & auVar99;
          uVar39 = uVar64 - 0x379a;
          uVar41 = uVar65 - 0x379a;
          uVar42 = uVar66 - 0x379a;
          uVar43 = uVar67 - 0x379a;
          iVar35 = -(uint)(uVar65 < 0x379a);
          iVar36 = -(uint)(uVar66 < 0x379a);
          iVar37 = -(uint)(uVar67 < 0x379a);
          auVar108._0_4_ = -(uint)(uVar39 < 0x4000);
          auVar108._4_4_ = -(uint)(uVar41 < 0x4000);
          auVar108._8_4_ = -(uint)(uVar42 < 0x4000);
          auVar108._12_4_ = -(uint)(uVar43 < 0x4000);
          auVar93._0_4_ = uVar39 >> 6;
          auVar93._4_4_ = uVar41 >> 6;
          auVar93._8_4_ = uVar42 >> 6;
          auVar93._12_4_ = uVar43 >> 6;
          auVar100[0] = ~-(uVar64 < 0x379a);
          auVar100._1_3_ = 0;
          auVar100[4] = ~(byte)iVar35;
          auVar100._5_2_ = 0;
          auVar100[7] = ~(byte)((uint)iVar35 >> 0x18);
          auVar100[8] = ~(byte)iVar36;
          auVar100[9] = ~(byte)((uint)iVar36 >> 8);
          auVar100[10] = ~(byte)((uint)iVar36 >> 0x10);
          auVar100[0xb] = ~(byte)((uint)iVar36 >> 0x18);
          auVar100[0xc] = ~(byte)iVar37;
          auVar100[0xd] = ~(byte)((uint)iVar37 >> 8);
          auVar100[0xe] = ~(byte)((uint)iVar37 >> 0x10);
          auVar100[0xf] = ~(byte)((uint)iVar37 >> 0x18);
          auVar93 = auVar93 ^ (auVar93 ^ auVar100) & ~auVar108;
          uVar39 = uVar68 - 0x379a;
          uVar41 = uVar69 - 0x379a;
          uVar42 = uVar73 - 0x379a;
          uVar43 = uVar74 - 0x379a;
          iVar35 = -(uint)(uVar69 < 0x379a);
          iVar36 = -(uint)(uVar73 < 0x379a);
          iVar37 = -(uint)(uVar74 < 0x379a);
          auVar117._0_4_ = -(uint)(uVar39 < 0x4000);
          auVar117._4_4_ = -(uint)(uVar41 < 0x4000);
          auVar117._8_4_ = -(uint)(uVar42 < 0x4000);
          auVar117._12_4_ = -(uint)(uVar43 < 0x4000);
          auVar101._0_4_ = uVar39 >> 6;
          auVar101._4_4_ = uVar41 >> 6;
          auVar101._8_4_ = uVar42 >> 6;
          auVar101._12_4_ = uVar43 >> 6;
          auVar109[0] = ~-(uVar68 < 0x379a);
          auVar109._1_3_ = 0;
          auVar109[4] = ~(byte)iVar35;
          auVar109._5_2_ = 0;
          auVar109[7] = ~(byte)((uint)iVar35 >> 0x18);
          auVar109[8] = ~(byte)iVar36;
          auVar109[9] = ~(byte)((uint)iVar36 >> 8);
          auVar109[10] = ~(byte)((uint)iVar36 >> 0x10);
          auVar109[0xb] = ~(byte)((uint)iVar36 >> 0x18);
          auVar109[0xc] = ~(byte)iVar37;
          auVar109[0xd] = ~(byte)((uint)iVar37 >> 8);
          auVar109[0xe] = ~(byte)((uint)iVar37 >> 0x10);
          auVar109[0xf] = ~(byte)((uint)iVar37 >> 0x18);
          auVar101 = auVar101 ^ (auVar101 ^ auVar109) & ~auVar117;
          *puVar14 = auVar32[0];
          puVar14[1] = auVar85[0];
          puVar14[2] = auVar72[0];
          puVar14[3] = 0xff;
          puVar14[4] = auVar32[4];
          puVar14[5] = auVar85[4];
          puVar14[6] = auVar72[1];
          puVar14[7] = 0xff;
          puVar14[8] = auVar32[8];
          puVar14[9] = auVar85[8];
          puVar14[10] = auVar72[2];
          puVar14[0xb] = 0xff;
          puVar14[0xc] = auVar32[0xc];
          puVar14[0xd] = auVar85[0xc];
          puVar14[0xe] = auVar72[3];
          puVar14[0xf] = 0xff;
          puVar14[0x10] = auVar40[0];
          puVar14[0x11] = auVar34[0];
          puVar14[0x12] = auVar72[4];
          puVar14[0x13] = 0xff;
          puVar14[0x14] = auVar40[4];
          puVar14[0x15] = auVar34[4];
          puVar14[0x16] = auVar72[5];
          puVar14[0x17] = 0xff;
          puVar14[0x18] = auVar40[8];
          puVar14[0x19] = auVar34[8];
          puVar14[0x1a] = auVar72[6];
          puVar14[0x1b] = 0xff;
          puVar14[0x1c] = auVar40[0xc];
          puVar14[0x1d] = auVar34[0xc];
          puVar14[0x1e] = auVar72[7];
          puVar14[0x1f] = 0xff;
          puVar14[0x20] = auVar101[0];
          puVar14[0x21] = auVar116[0];
          puVar14[0x22] = auVar72[8];
          puVar14[0x23] = 0xff;
          puVar14[0x24] = auVar101[4];
          puVar14[0x25] = auVar116[4];
          puVar14[0x26] = auVar72[9];
          puVar14[0x27] = 0xff;
          puVar14[0x28] = auVar101[8];
          puVar14[0x29] = auVar116[8];
          puVar14[0x2a] = auVar72[10];
          puVar14[0x2b] = 0xff;
          puVar14[0x2c] = auVar101[0xc];
          puVar14[0x2d] = auVar116[0xc];
          puVar14[0x2e] = auVar72[0xb];
          puVar14[0x2f] = 0xff;
          puVar14[0x30] = auVar93[0];
          puVar14[0x31] = auVar107[0];
          puVar14[0x32] = auVar72[0xc];
          puVar14[0x33] = 0xff;
          puVar14[0x34] = auVar93[4];
          puVar14[0x35] = auVar107[4];
          puVar14[0x36] = auVar72[0xd];
          puVar14[0x37] = 0xff;
          puVar14[0x38] = auVar93[8];
          puVar14[0x39] = auVar107[8];
          puVar14[0x3a] = auVar72[0xe];
          puVar14[0x3b] = 0xff;
          puVar14[0x3c] = auVar93[0xc];
          puVar14[0x3d] = auVar107[0xc];
          puVar14[0x3e] = auVar72[0xf];
          puVar14[0x3f] = 0xff;
          puVar14 = puVar14 + 0x40;
          uVar18 = uVar18 - 0x10;
          pauVar22 = pauVar22 + 1;
          pauVar24 = pauVar24 + 1;
          pauVar26 = pauVar26 + 1;
        } while (uVar18 != 0);
        if (uVar17 == uVar15) {
          return;
        }
        uVar18 = uVar17;
        if ((param_5 >> 3 & 1) == 0) goto LAB_0022fbd4;
      }
      auVar13 = _UNK_007eeb80;
      Var12 = _UNK_007eeb70;
      auVar11 = _UNK_007edcc0;
      auVar10 = _UNK_007edcb0;
      uVar17 = uVar15 & 0x7ffffff8;
      lVar16 = uVar18 - uVar17;
      puVar14 = param_4 + uVar18 * 4;
      puVar23 = (ulong *)(*param_3 + uVar18);
      puVar25 = (ulong *)(*param_2 + uVar18);
      puVar27 = (undefined8 *)(*param_1 + uVar18);
      do {
        auVar103._0_8_ = *puVar25;
        auVar103._8_8_ = 0;
        uVar114 = *puVar27;
        auVar123 = a64_TBL(ZEXT816(0),auVar103,auVar10);
        auVar104 = a64_TBL(ZEXT816(0),auVar103,auVar11);
        uVar30 = CONCAT26(auVar104._12_2_,
                          CONCAT24(auVar104._8_2_,CONCAT22(auVar104._4_2_,auVar104._0_2_)));
        uVar28 = CONCAT26(auVar123._12_2_,
                          CONCAT24(auVar123._8_2_,CONCAT22(auVar123._4_2_,auVar123._0_2_)));
        uVar121 = (uint)(byte)((ulong)uVar114 >> 0x20) * 0x4a85;
        uVar124 = (uint)(byte)((ulong)uVar114 >> 0x28) * 0x4a85;
        uVar126 = (uint)(byte)((ulong)uVar114 >> 0x30) * 0x4a85;
        uVar128 = (uint)(byte)((ulong)uVar114 >> 0x38) * 0x4a85;
        auVar105 = NEON_umull((ulong)CONCAT16((char)((ulong)uVar114 >> 0x18),
                                              (uint6)CONCAT14((char)((ulong)uVar114 >> 0x10),
                                                              (uint)CONCAT12((char)((ulong)uVar114
                                                                                   >> 8),
                                                                             (ushort)(byte)uVar114))
                                             ),0x4a854a854a854a85,2);
        auVar104 = NEON_umull(uVar30,0x811a811a811a811a,2);
        auVar123 = NEON_umull(uVar28,0x811a811a811a811a,2);
        uVar39 = (auVar104._0_4_ >> 8) + (uVar121 >> 8);
        uVar41 = (auVar104._4_4_ >> 8) + (uVar124 >> 8);
        uVar42 = (auVar104._8_4_ >> 8) + (uVar126 >> 8);
        uVar43 = (auVar104._12_4_ >> 8) + (uVar128 >> 8);
        uVar81 = auVar105._0_4_;
        uVar82 = auVar105._4_4_;
        uVar83 = auVar105._8_4_;
        uVar86 = auVar105._12_4_;
        uVar44 = (auVar123._0_4_ >> 8) + (uVar81 >> 8);
        uVar49 = (auVar123._4_4_ >> 8) + (uVar82 >> 8);
        uVar52 = (auVar123._8_4_ >> 8) + (uVar83 >> 8);
        uVar55 = (auVar123._12_4_ >> 8) + (uVar86 >> 8);
        uVar58 = uVar44 - 0x4515;
        uVar63 = uVar49 - 0x4515;
        uVar65 = uVar52 - 0x4515;
        uVar67 = uVar55 - 0x4515;
        uVar68 = uVar39 - 0x4515;
        uVar73 = uVar41 - 0x4515;
        uVar75 = uVar42 - 0x4515;
        uVar77 = uVar43 - 0x4515;
        iVar35 = -(uint)(uVar68 < 0x4000);
        iVar37 = -(uint)(uVar73 < 0x4000);
        iVar45 = -(uint)(uVar75 < 0x4000);
        iVar50 = -(uint)(uVar77 < 0x4000);
        uVar69 = uVar68 >> 6;
        uVar74 = uVar73 >> 6;
        uVar76 = uVar75 >> 6;
        iVar36 = -(uint)(uVar58 < 0x4000);
        iVar38 = -(uint)(uVar63 < 0x4000);
        iVar46 = -(uint)(uVar65 < 0x4000);
        iVar51 = -(uint)(uVar67 < 0x4000);
        uVar59 = uVar58 >> 6;
        uVar64 = uVar63 >> 6;
        uVar66 = uVar65 >> 6;
        auVar79[0] = (byte)uVar69 & (byte)iVar35 | ~-(uVar39 < 0x4515) & ~(byte)iVar35;
        auVar79[1] = (byte)(uVar69 >> 8) & (byte)((uint)iVar35 >> 8);
        auVar79[2] = (byte)(uVar69 >> 0x10) & (byte)((uint)iVar35 >> 0x10);
        auVar79[3] = (byte)(uVar68 >> 0x1e) & (byte)((uint)iVar35 >> 0x18);
        auVar79[4] = (byte)uVar74 & (byte)iVar37 | ~-(uVar41 < 0x4515) & ~(byte)iVar37;
        auVar79[5] = (byte)(uVar74 >> 8) & (byte)((uint)iVar37 >> 8);
        auVar79[6] = (byte)(uVar74 >> 0x10) & (byte)((uint)iVar37 >> 0x10);
        auVar79[7] = (byte)(uVar73 >> 0x1e) & (byte)((uint)iVar37 >> 0x18);
        auVar79[8] = (byte)uVar76 & (byte)iVar45 | ~-(uVar42 < 0x4515) & ~(byte)iVar45;
        auVar79[9] = (byte)(uVar76 >> 8) & (byte)((uint)iVar45 >> 8);
        auVar79[10] = (byte)(uVar76 >> 0x10) & (byte)((uint)iVar45 >> 0x10);
        auVar79[0xb] = (byte)(uVar75 >> 0x1e) & (byte)((uint)iVar45 >> 0x18);
        auVar79[0xc] = (byte)(uVar77 >> 6) & (byte)iVar50 | ~-(uVar43 < 0x4515) & ~(byte)iVar50;
        auVar79[0xd] = (byte)((uVar77 >> 6) >> 8) & (byte)((uint)iVar50 >> 8);
        auVar79[0xe] = (byte)((uint3)(uVar77 >> 0xe) >> 8) & (byte)((uint)iVar50 >> 0x10);
        auVar79[0xf] = (byte)(uVar77 >> 0x1e) & (byte)((uint)iVar50 >> 0x18);
        auVar78[0] = (byte)uVar59 & (byte)iVar36 | ~-(uVar44 < 0x4515) & ~(byte)iVar36;
        auVar78[1] = (byte)(uVar59 >> 8) & (byte)((uint)iVar36 >> 8);
        auVar78[2] = (byte)(uVar59 >> 0x10) & (byte)((uint)iVar36 >> 0x10);
        auVar78[3] = (byte)(uVar58 >> 0x1e) & (byte)((uint)iVar36 >> 0x18);
        auVar78[4] = (byte)uVar64 & (byte)iVar38 | ~-(uVar49 < 0x4515) & ~(byte)iVar38;
        auVar78[5] = (byte)(uVar64 >> 8) & (byte)((uint)iVar38 >> 8);
        auVar78[6] = (byte)(uVar64 >> 0x10) & (byte)((uint)iVar38 >> 0x10);
        auVar78[7] = (byte)(uVar63 >> 0x1e) & (byte)((uint)iVar38 >> 0x18);
        auVar78[8] = (byte)uVar66 & (byte)iVar46 | ~-(uVar52 < 0x4515) & ~(byte)iVar46;
        auVar78[9] = (byte)(uVar66 >> 8) & (byte)((uint)iVar46 >> 8);
        auVar78[10] = (byte)(uVar66 >> 0x10) & (byte)((uint)iVar46 >> 0x10);
        auVar78[0xb] = (byte)(uVar65 >> 0x1e) & (byte)((uint)iVar46 >> 0x18);
        auVar78[0xc] = (byte)(uVar67 >> 6) & (byte)iVar51 | ~-(uVar55 < 0x4515) & ~(byte)iVar51;
        auVar78[0xd] = (byte)((uVar67 >> 6) >> 8) & (byte)((uint)iVar51 >> 8);
        auVar78[0xe] = (byte)((uint3)(uVar67 >> 0xe) >> 8) & (byte)((uint)iVar51 >> 0x10);
        auVar78[0xf] = (byte)(uVar67 >> 0x1e) & (byte)((uint)iVar51 >> 0x18);
        auVar5._8_8_ = 0;
        auVar5._0_8_ = *puVar23;
        auVar104 = a64_TBL(ZEXT816(0),auVar5,auVar11);
        auVar6._8_8_ = 0;
        auVar6._0_8_ = *puVar23;
        auVar123 = a64_TBL(ZEXT816(0),auVar6,auVar10);
        uVar29 = CONCAT26(auVar123._12_2_,
                          CONCAT24(auVar123._8_2_,CONCAT22(auVar123._4_2_,auVar123._0_2_)));
        uVar114 = CONCAT26(auVar104._12_2_,
                           CONCAT24(auVar104._8_2_,CONCAT22(auVar104._4_2_,auVar104._0_2_)));
        auVar104 = NEON_umull(uVar28,0x1913191319131913,2);
        auVar61 = NEON_umull(uVar29,0x3408340834083408,2);
        auVar105 = NEON_umull(uVar114,0x6625662566256625,2);
        auVar115 = NEON_umull(uVar30,0x1913191319131913,2);
        auVar123 = NEON_umull(uVar114,0x3408340834083408,2);
        uVar44 = (auVar105._0_4_ >> 8) + (uVar121 >> 8);
        uVar49 = (auVar105._4_4_ >> 8) + (uVar124 >> 8);
        uVar52 = (auVar105._8_4_ >> 8) + (uVar126 >> 8);
        uVar55 = (auVar105._12_4_ >> 8) + (uVar128 >> 8);
        auVar105 = NEON_umull(uVar29,0x6625662566256625,2);
        uVar39 = (auVar105._0_4_ >> 8) + (uVar81 >> 8);
        uVar41 = (auVar105._4_4_ >> 8) + (uVar82 >> 8);
        uVar42 = (auVar105._8_4_ >> 8) + (uVar83 >> 8);
        uVar43 = (auVar105._12_4_ >> 8) + (uVar86 >> 8);
        uVar58 = uVar39 - 0x379a;
        uVar63 = uVar41 - 0x379a;
        uVar65 = uVar42 - 0x379a;
        uVar67 = uVar43 - 0x379a;
        iVar113 = (uVar121 >> 8) - ((auVar115._0_4_ >> 8) + (auVar123._0_4_ >> 8));
        iVar118 = (uVar124 >> 8) - ((auVar115._4_4_ >> 8) + (auVar123._4_4_ >> 8));
        iVar119 = (uVar126 >> 8) - ((auVar115._8_4_ >> 8) + (auVar123._8_4_ >> 8));
        iVar120 = (uVar128 >> 8) - ((auVar115._12_4_ >> 8) + (auVar123._12_4_ >> 8));
        uVar68 = uVar44 - 0x379a;
        uVar73 = uVar49 - 0x379a;
        uVar75 = uVar52 - 0x379a;
        uVar77 = uVar55 - 0x379a;
        iVar35 = (uVar81 >> 8) - ((auVar104._0_4_ >> 8) + (auVar61._0_4_ >> 8));
        iVar36 = (uVar82 >> 8) - ((auVar104._4_4_ >> 8) + (auVar61._4_4_ >> 8));
        iVar37 = (uVar83 >> 8) - ((auVar104._8_4_ >> 8) + (auVar61._8_4_ >> 8));
        iVar38 = (uVar86 >> 8) - ((auVar104._12_4_ >> 8) + (auVar61._12_4_ >> 8));
        iVar45 = -(uint)(uVar68 < 0x4000);
        iVar50 = -(uint)(uVar73 < 0x4000);
        iVar53 = -(uint)(uVar75 < 0x4000);
        iVar56 = -(uint)(uVar77 < 0x4000);
        uVar69 = uVar68 >> 6;
        uVar74 = uVar73 >> 6;
        uVar76 = uVar75 >> 6;
        iVar46 = -(uint)(uVar58 < 0x4000);
        iVar51 = -(uint)(uVar63 < 0x4000);
        iVar54 = -(uint)(uVar65 < 0x4000);
        iVar57 = -(uint)(uVar67 < 0x4000);
        uVar59 = uVar58 >> 6;
        uVar64 = uVar63 >> 6;
        uVar66 = uVar65 >> 6;
        auVar8._12_4_ = 0xffffffff;
        auVar8._0_12_ = auVar13;
        auVar105 = a64_TBL(ZEXT816(0),auVar78,auVar79,auVar8);
        auVar62[0] = (byte)uVar69 & (byte)iVar45 | ~-(uVar44 < 0x379a) & ~(byte)iVar45;
        auVar62[1] = (byte)(uVar69 >> 8) & (byte)((uint)iVar45 >> 8);
        auVar62[2] = (byte)(uVar69 >> 0x10) & (byte)((uint)iVar45 >> 0x10);
        auVar62[3] = (byte)(uVar68 >> 0x1e) & (byte)((uint)iVar45 >> 0x18);
        auVar62[4] = (byte)uVar74 & (byte)iVar50 | ~-(uVar49 < 0x379a) & ~(byte)iVar50;
        auVar62[5] = (byte)(uVar74 >> 8) & (byte)((uint)iVar50 >> 8);
        auVar62[6] = (byte)(uVar74 >> 0x10) & (byte)((uint)iVar50 >> 0x10);
        auVar62[7] = (byte)(uVar73 >> 0x1e) & (byte)((uint)iVar50 >> 0x18);
        auVar62[8] = (byte)uVar76 & (byte)iVar53 | ~-(uVar52 < 0x379a) & ~(byte)iVar53;
        auVar62[9] = (byte)(uVar76 >> 8) & (byte)((uint)iVar53 >> 8);
        auVar62[10] = (byte)(uVar76 >> 0x10) & (byte)((uint)iVar53 >> 0x10);
        auVar62[0xb] = (byte)(uVar75 >> 0x1e) & (byte)((uint)iVar53 >> 0x18);
        auVar62[0xc] = (byte)(uVar77 >> 6) & (byte)iVar56 | ~-(uVar55 < 0x379a) & ~(byte)iVar56;
        auVar62[0xd] = (byte)((uVar77 >> 6) >> 8) & (byte)((uint)iVar56 >> 8);
        auVar62[0xe] = (byte)((uint3)(uVar77 >> 0xe) >> 8) & (byte)((uint)iVar56 >> 0x10);
        auVar62[0xf] = (byte)(uVar77 >> 0x1e) & (byte)((uint)iVar56 >> 0x18);
        auVar48[0] = (byte)uVar59 & (byte)iVar46 | ~-(uVar39 < 0x379a) & ~(byte)iVar46;
        auVar48[1] = (byte)(uVar59 >> 8) & (byte)((uint)iVar46 >> 8);
        auVar48[2] = (byte)(uVar59 >> 0x10) & (byte)((uint)iVar46 >> 0x10);
        auVar48[3] = (byte)(uVar58 >> 0x1e) & (byte)((uint)iVar46 >> 0x18);
        auVar48[4] = (byte)uVar64 & (byte)iVar51 | ~-(uVar41 < 0x379a) & ~(byte)iVar51;
        auVar48[5] = (byte)(uVar64 >> 8) & (byte)((uint)iVar51 >> 8);
        auVar48[6] = (byte)(uVar64 >> 0x10) & (byte)((uint)iVar51 >> 0x10);
        auVar48[7] = (byte)(uVar63 >> 0x1e) & (byte)((uint)iVar51 >> 0x18);
        auVar48[8] = (byte)uVar66 & (byte)iVar54 | ~-(uVar42 < 0x379a) & ~(byte)iVar54;
        auVar48[9] = (byte)(uVar66 >> 8) & (byte)((uint)iVar54 >> 8);
        auVar48[10] = (byte)(uVar66 >> 0x10) & (byte)((uint)iVar54 >> 0x10);
        auVar48[0xb] = (byte)(uVar65 >> 0x1e) & (byte)((uint)iVar54 >> 0x18);
        auVar48[0xc] = (byte)(uVar67 >> 6) & (byte)iVar57 | ~-(uVar43 < 0x379a) & ~(byte)iVar57;
        auVar48[0xd] = (byte)((uVar67 >> 6) >> 8) & (byte)((uint)iVar57 >> 8);
        auVar48[0xe] = (byte)((uint3)(uVar67 >> 0xe) >> 8) & (byte)((uint)iVar57 >> 0x10);
        auVar48[0xf] = (byte)(uVar67 >> 0x1e) & (byte)((uint)iVar57 >> 0x18);
        uVar39 = iVar113 + 0x2204;
        uVar44 = iVar118 + 0x2204;
        uVar58 = iVar119 + 0x2204;
        uVar65 = iVar120 + 0x2204;
        iVar45 = -(uint)(uVar39 < 0x4000);
        iVar50 = -(uint)(uVar44 < 0x4000);
        iVar53 = -(uint)(uVar58 < 0x4000);
        iVar56 = -(uint)(uVar65 < 0x4000);
        uVar41 = uVar39 >> 6;
        uVar49 = uVar44 >> 6;
        uVar59 = uVar58 >> 6;
        uVar42 = iVar35 + 0x2204;
        uVar52 = iVar36 + 0x2204;
        uVar63 = iVar37 + 0x2204;
        uVar66 = iVar38 + 0x2204;
        iVar46 = -(uint)(uVar42 < 0x4000);
        iVar51 = -(uint)(uVar52 < 0x4000);
        iVar54 = -(uint)(uVar63 < 0x4000);
        iVar57 = -(uint)(uVar66 < 0x4000);
        uVar43 = uVar42 >> 6;
        uVar55 = uVar52 >> 6;
        uVar64 = uVar63 >> 6;
        auVar71[0] = (byte)uVar43 & (byte)iVar46 | ~-(iVar35 < -0x2204) & ~(byte)iVar46;
        auVar71[1] = (byte)(uVar43 >> 8) & (byte)((uint)iVar46 >> 8);
        auVar71[2] = (byte)(uVar43 >> 0x10) & (byte)((uint)iVar46 >> 0x10);
        auVar71[3] = (byte)(uVar42 >> 0x1e) & (byte)((uint)iVar46 >> 0x18);
        auVar71[4] = (byte)uVar55 & (byte)iVar51 | ~-(iVar36 < -0x2204) & ~(byte)iVar51;
        auVar71[5] = (byte)(uVar55 >> 8) & (byte)((uint)iVar51 >> 8);
        auVar71[6] = (byte)(uVar55 >> 0x10) & (byte)((uint)iVar51 >> 0x10);
        auVar71[7] = (byte)(uVar52 >> 0x1e) & (byte)((uint)iVar51 >> 0x18);
        auVar71[8] = (byte)uVar64 & (byte)iVar54 | ~-(iVar37 < -0x2204) & ~(byte)iVar54;
        auVar71[9] = (byte)(uVar64 >> 8) & (byte)((uint)iVar54 >> 8);
        auVar71[10] = (byte)(uVar64 >> 0x10) & (byte)((uint)iVar54 >> 0x10);
        auVar71[0xb] = (byte)(uVar63 >> 0x1e) & (byte)((uint)iVar54 >> 0x18);
        auVar71[0xc] = (byte)(uVar66 >> 6) & (byte)iVar57 | ~-(iVar38 < -0x2204) & ~(byte)iVar57;
        auVar71[0xd] = (byte)((uVar66 >> 6) >> 8) & (byte)((uint)iVar57 >> 8);
        auVar71[0xe] = (byte)((uint3)(uVar66 >> 0xe) >> 8) & (byte)((uint)iVar57 >> 0x10);
        auVar71[0xf] = (byte)(uVar66 >> 0x1e) & (byte)((uint)iVar57 >> 0x18);
        auVar7[1] = (byte)(uVar41 >> 8) & (byte)((uint)iVar45 >> 8);
        auVar7[0] = (byte)uVar41 & (byte)iVar45 | ~-(iVar113 < -0x2204) & ~(byte)iVar45;
        auVar7[2] = (byte)(uVar41 >> 0x10) & (byte)((uint)iVar45 >> 0x10);
        auVar7[3] = (byte)(uVar39 >> 0x1e) & (byte)((uint)iVar45 >> 0x18);
        auVar7[4] = (byte)uVar49 & (byte)iVar50 | ~-(iVar118 < -0x2204) & ~(byte)iVar50;
        auVar7[5] = (byte)(uVar49 >> 8) & (byte)((uint)iVar50 >> 8);
        auVar7[6] = (byte)(uVar49 >> 0x10) & (byte)((uint)iVar50 >> 0x10);
        auVar7[7] = (byte)(uVar44 >> 0x1e) & (byte)((uint)iVar50 >> 0x18);
        auVar7[8] = (byte)uVar59 & (byte)iVar53 | ~-(iVar119 < -0x2204) & ~(byte)iVar53;
        auVar7[9] = (byte)(uVar59 >> 8) & (byte)((uint)iVar53 >> 8);
        auVar7[10] = (byte)(uVar59 >> 0x10) & (byte)((uint)iVar53 >> 0x10);
        auVar7[0xb] = (byte)(uVar58 >> 0x1e) & (byte)((uint)iVar53 >> 0x18);
        auVar7[0xc] = (byte)(uVar65 >> 6) & (byte)iVar56 | ~-(iVar120 < -0x2204) & ~(byte)iVar56;
        auVar7[0xd] = (byte)((uVar65 >> 6) >> 8) & (byte)((uint)iVar56 >> 8);
        auVar7[0xe] = (byte)((uint3)(uVar65 >> 0xe) >> 8) & (byte)((uint)iVar56 >> 0x10);
        auVar7[0xf] = (byte)(uVar65 >> 0x1e) & (byte)((uint)iVar56 >> 0x18);
        auVar9[9] = 0x24;
        auVar9._0_9_ = Var12;
        auVar9[10] = 0x28;
        auVar9[0xb] = 0x2c;
        auVar9[0xc] = 0x30;
        auVar9[0xd] = 0x34;
        auVar9[0xe] = 0x38;
        auVar9[0xf] = 0x3c;
        auVar104 = a64_TBL(ZEXT816(0),auVar48,auVar62,auVar71,auVar7,auVar9);
        auVar123 = NEON_ext(auVar104,auVar104,8,1);
        *puVar14 = auVar104[0];
        puVar14[1] = auVar123[0];
        puVar14[2] = auVar105[0];
        puVar14[3] = 0xff;
        puVar14[4] = auVar104[1];
        puVar14[5] = auVar123[1];
        puVar14[6] = auVar105[1];
        puVar14[7] = 0xff;
        puVar14[8] = auVar104[2];
        puVar14[9] = auVar123[2];
        puVar14[10] = auVar105[2];
        puVar14[0xb] = 0xff;
        puVar14[0xc] = auVar104[3];
        puVar14[0xd] = auVar123[3];
        puVar14[0xe] = auVar105[3];
        puVar14[0xf] = 0xff;
        puVar14[0x10] = auVar104[4];
        puVar14[0x11] = auVar123[4];
        puVar14[0x12] = auVar105[4];
        puVar14[0x13] = 0xff;
        puVar14[0x14] = auVar104[5];
        puVar14[0x15] = auVar123[5];
        puVar14[0x16] = auVar105[5];
        puVar14[0x17] = 0xff;
        puVar14[0x18] = auVar104[6];
        puVar14[0x19] = auVar123[6];
        puVar14[0x1a] = auVar105[6];
        puVar14[0x1b] = 0xff;
        puVar14[0x1c] = auVar104[7];
        puVar14[0x1d] = auVar123[7];
        puVar14[0x1e] = auVar105[7];
        puVar14[0x1f] = 0xff;
        puVar14 = puVar14 + 0x20;
        lVar16 = lVar16 + 8;
        puVar23 = puVar23 + 1;
        puVar25 = puVar25 + 1;
        puVar27 = puVar27 + 1;
      } while (lVar16 != 0);
      if (uVar17 == uVar15) {
        return;
      }
    }
  }
LAB_0022fbd4:
  lVar16 = uVar15 - uVar17;
  puVar14 = param_4 + uVar17 * 4 + 3;
  pbVar19 = *param_1 + uVar17;
  pbVar20 = *param_2 + uVar17;
  pbVar21 = *param_3 + uVar17;
  do {
    bVar3 = *pbVar20;
    bVar4 = *pbVar21;
    uVar42 = (uint)*pbVar19 * 0x4a85 >> 8;
    uVar39 = uVar42 + ((uint)bVar4 * 0x6625 >> 8);
    uVar41 = uVar39 - 0x379a;
    uVar1 = 0;
    if (0x3799 < uVar39) {
      uVar1 = 0xff;
    }
    uVar2 = (char)(uVar41 >> 6);
    if (0x3fff < uVar41) {
      uVar2 = uVar1;
    }
    puVar14[-3] = uVar2;
    iVar35 = uVar42 - (((uint)bVar3 * 0x1913 >> 8) + ((uint)bVar4 * 0x3408 >> 8));
    uVar39 = iVar35 + 0x2204;
    uVar1 = 0;
    if (-0x2205 < iVar35) {
      uVar1 = 0xff;
    }
    uVar2 = (char)(uVar39 >> 6);
    if (0x3fff < uVar39) {
      uVar2 = uVar1;
    }
    puVar14[-2] = uVar2;
    uVar42 = uVar42 + ((uint)bVar3 * 0x811a >> 8);
    uVar39 = uVar42 - 0x4515;
    uVar1 = 0;
    if (0x4514 < uVar42) {
      uVar1 = 0xff;
    }
    uVar2 = (char)(uVar39 >> 6);
    if (0x3fff < uVar39) {
      uVar2 = uVar1;
    }
    puVar14[-1] = uVar2;
    *puVar14 = 0xff;
    lVar16 = lVar16 + -1;
    puVar14 = puVar14 + 4;
    pbVar19 = pbVar19 + 1;
    pbVar20 = pbVar20 + 1;
    pbVar21 = pbVar21 + 1;
  } while (lVar16 != 0);
                    /* WARNING: Read-only address (ram,0x007edcb0) is written */
                    /* WARNING: Read-only address (ram,0x007edcc0) is written */
                    /* WARNING: Read-only address (ram,0x007eeb70) is written */
                    /* WARNING: Read-only address (ram,0x007eeb80) is written */
  return;
}



/* Entry: 00230a3c; end: 0023115b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00230a3c(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                 undefined1 *param_4,uint param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  byte bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 *puVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  byte *pbVar17;
  ulong uVar18;
  byte *pbVar19;
  byte *pbVar20;
  undefined1 (*pauVar21) [16];
  undefined1 (*pauVar22) [16];
  ulong *puVar23;
  undefined1 (*pauVar24) [16];
  ulong *puVar25;
  undefined8 *puVar26;
  undefined1 auVar27 [16];
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  undefined1 auVar44 [16];
  uint uVar45;
  uint uVar48;
  undefined8 uVar46;
  uint uVar49;
  uint uVar50;
  undefined1 auVar47 [16];
  uint uVar51;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  int iVar60;
  undefined8 uVar61;
  int iVar70;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  int iVar69;
  int iVar71;
  undefined1 auVar65 [16];
  undefined8 uVar62;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  int iVar72;
  int iVar77;
  undefined8 uVar73;
  int iVar78;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  int iVar79;
  undefined1 auVar76 [16];
  uint uVar80;
  undefined8 uVar81;
  uint uVar88;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  uint uVar87;
  uint uVar89;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  uint uVar90;
  undefined8 uVar91;
  uint uVar95;
  uint uVar96;
  uint uVar98;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  uint uVar97;
  uint uVar99;
  undefined1 auVar94 [16];
  uint uVar100;
  uint uVar101;
  uint uVar110;
  uint uVar111;
  uint uVar112;
  uint uVar113;
  uint uVar114;
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  uint uVar115;
  uint uVar116;
  uint uVar117;
  uint uVar118;
  undefined8 uVar119;
  uint uVar125;
  uint uVar126;
  uint uVar127;
  uint uVar129;
  uint uVar130;
  uint uVar131;
  uint uVar133;
  uint uVar134;
  undefined1 auVar120 [16];
  uint uVar128;
  uint uVar132;
  uint uVar135;
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  uint uVar136;
  uint uVar137;
  uint uVar140;
  uint uVar141;
  uint uVar142;
  uint uVar143;
  uint uVar144;
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  
  if ((int)param_5 < 1) {
    return;
  }
  uVar14 = (ulong)param_5;
  if (param_5 < 8) {
    uVar16 = 0;
  }
  else {
    uVar16 = 0;
    pauVar21 = (undefined1 (*) [16])(param_4 + uVar14 * 3);
    if (((pauVar21 <= param_1 || *param_1 + uVar14 <= param_4) &&
        (*param_2 + uVar14 <= param_4 || pauVar21 <= param_2)) &&
       (*param_3 + uVar14 <= param_4 || pauVar21 <= param_3)) {
      if (param_5 < 0x10) {
        uVar18 = 0;
      }
      else {
        uVar16 = uVar14 & 0x7ffffff0;
        pauVar21 = param_1;
        pauVar22 = param_2;
        pauVar24 = param_3;
        puVar13 = param_4;
        uVar18 = uVar16;
        do {
          auVar65 = *pauVar22;
          auVar64._8_8_ = 0xffffff03ffffff02;
          auVar64._0_8_ = 0xffffff01ffffff00;
          auVar84._8_8_ = 0xffffff07ffffff06;
          auVar84._0_8_ = 0xffffff05ffffff04;
          auVar75 = a64_TBL(ZEXT816(0),auVar65,auVar84);
          auVar85 = a64_TBL(ZEXT816(0),auVar65,auVar64);
          auVar82._8_8_ = 0xffffff0bffffff0a;
          auVar82._0_8_ = 0xffffff09ffffff08;
          auVar63._8_8_ = 0xffffff0fffffff0e;
          auVar63._0_8_ = 0xffffff0dffffff0c;
          auVar93 = a64_TBL(ZEXT816(0),auVar65,auVar63);
          auVar65 = a64_TBL(ZEXT816(0),auVar65,auVar82);
          uVar46 = CONCAT26(auVar65._12_2_,
                            CONCAT24(auVar65._8_2_,CONCAT22(auVar65._4_2_,auVar65._0_2_)));
          uVar61 = CONCAT26(auVar85._12_2_,
                            CONCAT24(auVar85._8_2_,CONCAT22(auVar85._4_2_,auVar85._0_2_)));
          auVar65 = *pauVar24;
          auVar85 = a64_TBL(ZEXT816(0),auVar65,auVar82);
          auVar82 = a64_TBL(ZEXT816(0),auVar65,auVar63);
          uVar62 = CONCAT26(auVar75._12_2_,
                            CONCAT24(auVar75._8_2_,CONCAT22(auVar75._4_2_,auVar75._0_2_)));
          auVar75 = a64_TBL(ZEXT816(0),auVar65,auVar64);
          auVar65 = a64_TBL(ZEXT816(0),auVar65,auVar84);
          uVar73 = CONCAT26(auVar65._12_2_,
                            CONCAT24(auVar65._8_2_,CONCAT22(auVar65._4_2_,auVar65._0_2_)));
          uVar81 = CONCAT26(auVar75._12_2_,
                            CONCAT24(auVar75._8_2_,CONCAT22(auVar75._4_2_,auVar75._0_2_)));
          uVar91 = CONCAT26(auVar82._12_2_,
                            CONCAT24(auVar82._8_2_,CONCAT22(auVar82._4_2_,auVar82._0_2_)));
          uVar119 = CONCAT26(auVar85._12_2_,
                             CONCAT24(auVar85._8_2_,CONCAT22(auVar85._4_2_,auVar85._0_2_)));
          auVar63 = NEON_umull((ulong)CONCAT16((*pauVar21)[0xb],
                                               (uint6)CONCAT14((*pauVar21)[10],
                                                               (uint)CONCAT12((*pauVar21)[9],
                                                                              (ushort)(byte)(*
                                                  pauVar21)[8]))),0x4a854a854a854a85,2);
          uVar45 = (uint)(byte)(*pauVar21)[0xc] * 0x4a85;
          uVar50 = (uint)(byte)(*pauVar21)[0xd] * 0x4a85;
          uVar54 = (uint)(byte)(*pauVar21)[0xe] * 0x4a85;
          uVar129 = (uint)(byte)(*pauVar21)[0xf] * 0x4a85;
          auVar82 = NEON_umull((ulong)CONCAT16((*pauVar21)[3],
                                               (uint6)CONCAT14((*pauVar21)[2],
                                                               (uint)CONCAT12((*pauVar21)[1],
                                                                              (ushort)(byte)(*
                                                  pauVar21)[0]))),0x4a854a854a854a85,2);
          uVar80 = (uint)(byte)(*pauVar21)[4] * 0x4a85;
          uVar100 = (uint)(byte)(*pauVar21)[5] * 0x4a85;
          uVar87 = (uint)(byte)(*pauVar21)[6] * 0x4a85;
          uVar110 = (uint)(byte)(*pauVar21)[7] * 0x4a85;
          auVar65 = NEON_umull(uVar62,0x1913191319131913,2);
          auVar64 = NEON_umull(uVar61,0x1913191319131913,2);
          auVar139 = NEON_umull(CONCAT17(auVar93[0xd],
                                         CONCAT16(auVar93[0xc],
                                                  CONCAT15(auVar93[9],
                                                           CONCAT14(auVar93[8],
                                                                    CONCAT13(auVar93[5],
                                                                             CONCAT12(auVar93[4],
                                                                                      auVar93._0_2_)
                                                                            ))))),0x1913191319131913
                                ,2);
          auVar75 = NEON_umull(uVar46,0x1913191319131913,2);
          auVar84 = NEON_umull(uVar73,0x3408340834083408,2);
          auVar85 = NEON_umull(uVar81,0x3408340834083408,2);
          auVar103 = NEON_umull(uVar91,0x3408340834083408,2);
          auVar104 = NEON_umull(uVar119,0x3408340834083408,2);
          uVar48 = auVar63._0_4_;
          uVar49 = auVar63._4_4_;
          uVar51 = auVar63._8_4_;
          uVar115 = auVar63._12_4_;
          iVar60 = (uVar48 >> 8) - ((auVar75._0_4_ >> 8) + (auVar104._0_4_ >> 8));
          iVar69 = (uVar49 >> 8) - ((auVar75._4_4_ >> 8) + (auVar104._4_4_ >> 8));
          iVar70 = (uVar51 >> 8) - ((auVar75._8_4_ >> 8) + (auVar104._8_4_ >> 8));
          iVar71 = (uVar115 >> 8) - ((auVar75._12_4_ >> 8) + (auVar104._12_4_ >> 8));
          iVar72 = (uVar45 >> 8) - ((auVar139._0_4_ >> 8) + (auVar103._0_4_ >> 8));
          iVar77 = (uVar50 >> 8) - ((auVar139._4_4_ >> 8) + (auVar103._4_4_ >> 8));
          iVar78 = (uVar54 >> 8) - ((auVar139._8_4_ >> 8) + (auVar103._8_4_ >> 8));
          iVar79 = (uVar129 >> 8) - ((auVar139._12_4_ >> 8) + (auVar103._12_4_ >> 8));
          uVar125 = auVar82._0_4_;
          uVar55 = auVar82._4_4_;
          uVar56 = auVar82._8_4_;
          uVar133 = auVar82._12_4_;
          iVar36 = (uVar125 >> 8) - ((auVar64._0_4_ >> 8) + (auVar85._0_4_ >> 8));
          iVar37 = (uVar55 >> 8) - ((auVar64._4_4_ >> 8) + (auVar85._4_4_ >> 8));
          iVar38 = (uVar56 >> 8) - ((auVar64._8_4_ >> 8) + (auVar85._8_4_ >> 8));
          iVar39 = (uVar133 >> 8) - ((auVar64._12_4_ >> 8) + (auVar85._12_4_ >> 8));
          iVar32 = (uVar80 >> 8) - ((auVar65._0_4_ >> 8) + (auVar84._0_4_ >> 8));
          iVar33 = (uVar100 >> 8) - ((auVar65._4_4_ >> 8) + (auVar84._4_4_ >> 8));
          iVar34 = (uVar87 >> 8) - ((auVar65._8_4_ >> 8) + (auVar84._8_4_ >> 8));
          iVar35 = (uVar110 >> 8) - ((auVar65._12_4_ >> 8) + (auVar84._12_4_ >> 8));
          auVar65 = NEON_umull(uVar119,0x6625662566256625,2);
          auVar75 = NEON_umull(uVar91,0x6625662566256625,2);
          auVar82 = NEON_umull(uVar81,0x6625662566256625,2);
          auVar64 = NEON_umull(uVar73,0x6625662566256625,2);
          uVar130 = (auVar65._0_4_ >> 8) + (uVar48 >> 8);
          uVar131 = (auVar65._4_4_ >> 8) + (uVar49 >> 8);
          uVar134 = (auVar65._8_4_ >> 8) + (uVar51 >> 8);
          uVar136 = (auVar65._12_4_ >> 8) + (uVar115 >> 8);
          uVar137 = (auVar75._0_4_ >> 8) + (uVar45 >> 8);
          uVar140 = (auVar75._4_4_ >> 8) + (uVar50 >> 8);
          uVar141 = (auVar75._8_4_ >> 8) + (uVar54 >> 8);
          uVar142 = (auVar75._12_4_ >> 8) + (uVar129 >> 8);
          auVar65 = NEON_umull(CONCAT17(auVar93[0xd],
                                        CONCAT16(auVar93[0xc],
                                                 CONCAT15(auVar93[9],
                                                          CONCAT14(auVar93[8],
                                                                   CONCAT13(auVar93[5],
                                                                            CONCAT12(auVar93[4],
                                                                                     auVar93._0_2_))
                                                                  )))),0x811a811a811a811a,2);
          auVar75 = NEON_umull(uVar46,0x811a811a811a811a,2);
          auVar63 = NEON_umull(uVar62,0x811a811a811a811a,2);
          uVar143 = (auVar82._0_4_ >> 8) + (uVar125 >> 8);
          uVar144 = (auVar82._4_4_ >> 8) + (uVar55 >> 8);
          uVar97 = (auVar82._8_4_ >> 8) + (uVar56 >> 8);
          uVar99 = (auVar82._12_4_ >> 8) + (uVar133 >> 8);
          auVar82 = NEON_umull(uVar61,0x811a811a811a811a,2);
          uVar118 = (auVar64._0_4_ >> 8) + (uVar80 >> 8);
          uVar128 = (auVar64._4_4_ >> 8) + (uVar100 >> 8);
          uVar132 = (auVar64._8_4_ >> 8) + (uVar87 >> 8);
          uVar135 = (auVar64._12_4_ >> 8) + (uVar110 >> 8);
          uVar45 = (auVar65._0_4_ >> 8) + (uVar45 >> 8);
          uVar50 = (auVar65._4_4_ >> 8) + (uVar50 >> 8);
          uVar54 = (auVar65._8_4_ >> 8) + (uVar54 >> 8);
          uVar129 = (auVar65._12_4_ >> 8) + (uVar129 >> 8);
          uVar48 = (auVar75._0_4_ >> 8) + (uVar48 >> 8);
          uVar49 = (auVar75._4_4_ >> 8) + (uVar49 >> 8);
          uVar51 = (auVar75._8_4_ >> 8) + (uVar51 >> 8);
          uVar115 = (auVar75._12_4_ >> 8) + (uVar115 >> 8);
          uVar116 = (auVar63._0_4_ >> 8) + (uVar80 >> 8);
          uVar117 = (auVar63._4_4_ >> 8) + (uVar100 >> 8);
          uVar126 = (auVar63._8_4_ >> 8) + (uVar87 >> 8);
          uVar127 = (auVar63._12_4_ >> 8) + (uVar110 >> 8);
          uVar101 = (auVar82._0_4_ >> 8) + (uVar125 >> 8);
          uVar111 = (auVar82._4_4_ >> 8) + (uVar55 >> 8);
          uVar113 = (auVar82._8_4_ >> 8) + (uVar56 >> 8);
          uVar114 = (auVar82._12_4_ >> 8) + (uVar133 >> 8);
          uVar125 = uVar48 - 0x4515;
          uVar56 = uVar49 - 0x4515;
          uVar80 = uVar51 - 0x4515;
          uVar87 = uVar115 - 0x4515;
          uVar88 = uVar45 - 0x4515;
          uVar89 = uVar50 - 0x4515;
          uVar95 = uVar54 - 0x4515;
          uVar98 = uVar129 - 0x4515;
          iVar40 = -(uint)(uVar88 < 0x4000);
          iVar41 = -(uint)(uVar89 < 0x4000);
          iVar42 = -(uint)(uVar95 < 0x4000);
          iVar43 = -(uint)(uVar98 < 0x4000);
          iVar28 = -(uint)(uVar125 < 0x4000);
          iVar29 = -(uint)(uVar56 < 0x4000);
          iVar30 = -(uint)(uVar80 < 0x4000);
          iVar31 = -(uint)(uVar87 < 0x4000);
          uVar55 = uVar125 >> 6;
          uVar133 = uVar56 >> 6;
          uVar100 = uVar80 >> 6;
          uVar110 = uVar87 >> 6;
          uVar112 = uVar88 >> 6;
          uVar90 = uVar89 >> 6;
          uVar96 = uVar95 >> 6;
          auVar53[0] = (byte)uVar55 & (byte)iVar28 | ~-(uVar48 < 0x4515) & ~(byte)iVar28;
          auVar53[1] = (byte)(uVar55 >> 8) & (byte)((uint)iVar28 >> 8);
          auVar53[2] = (byte)(uVar55 >> 0x10) & (byte)((uint)iVar28 >> 0x10);
          auVar53[3] = (byte)(uVar125 >> 0x1e) & (byte)((uint)iVar28 >> 0x18);
          auVar53[4] = (byte)uVar133 & (byte)iVar29 | ~-(uVar49 < 0x4515) & ~(byte)iVar29;
          auVar53[5] = (byte)(uVar133 >> 8) & (byte)((uint)iVar29 >> 8);
          auVar53[6] = (byte)(uVar133 >> 0x10) & (byte)((uint)iVar29 >> 0x10);
          auVar53[7] = (byte)(uVar56 >> 0x1e) & (byte)((uint)iVar29 >> 0x18);
          auVar53[8] = (byte)uVar100 & (byte)iVar30 | ~-(uVar51 < 0x4515) & ~(byte)iVar30;
          auVar53[9] = (byte)(uVar100 >> 8) & (byte)((uint)iVar30 >> 8);
          auVar53[10] = (byte)(uVar100 >> 0x10) & (byte)((uint)iVar30 >> 0x10);
          auVar53[0xb] = (byte)(uVar80 >> 0x1e) & (byte)((uint)iVar30 >> 0x18);
          auVar53[0xc] = (byte)uVar110 & (byte)iVar31 | ~-(uVar115 < 0x4515) & ~(byte)iVar31;
          auVar53[0xd] = (byte)(uVar110 >> 8) & (byte)((uint)iVar31 >> 8);
          auVar53[0xe] = (byte)(uVar110 >> 0x10) & (byte)((uint)iVar31 >> 0x10);
          auVar53[0xf] = (byte)(uVar87 >> 0x1e) & (byte)((uint)iVar31 >> 0x18);
          uVar48 = uVar116 - 0x4515;
          uVar51 = uVar117 - 0x4515;
          uVar125 = uVar126 - 0x4515;
          uVar56 = uVar127 - 0x4515;
          iVar28 = -(uint)(uVar48 < 0x4000);
          iVar29 = -(uint)(uVar51 < 0x4000);
          iVar30 = -(uint)(uVar125 < 0x4000);
          iVar31 = -(uint)(uVar56 < 0x4000);
          uVar49 = uVar48 >> 6;
          uVar115 = uVar51 >> 6;
          uVar55 = uVar125 >> 6;
          auVar47[0] = (byte)uVar49 & (byte)iVar28 | ~-(uVar116 < 0x4515) & ~(byte)iVar28;
          auVar47[1] = (byte)(uVar49 >> 8) & (byte)((uint)iVar28 >> 8);
          auVar47[2] = (byte)(uVar49 >> 0x10) & (byte)((uint)iVar28 >> 0x10);
          auVar47[3] = (byte)(uVar48 >> 0x1e) & (byte)((uint)iVar28 >> 0x18);
          auVar47[4] = (byte)uVar115 & (byte)iVar29 | ~-(uVar117 < 0x4515) & ~(byte)iVar29;
          auVar47[5] = (byte)(uVar115 >> 8) & (byte)((uint)iVar29 >> 8);
          auVar47[6] = (byte)(uVar115 >> 0x10) & (byte)((uint)iVar29 >> 0x10);
          auVar47[7] = (byte)(uVar51 >> 0x1e) & (byte)((uint)iVar29 >> 0x18);
          auVar47[8] = (byte)uVar55 & (byte)iVar30 | ~-(uVar126 < 0x4515) & ~(byte)iVar30;
          auVar47[9] = (byte)(uVar55 >> 8) & (byte)((uint)iVar30 >> 8);
          auVar47[10] = (byte)(uVar55 >> 0x10) & (byte)((uint)iVar30 >> 0x10);
          auVar47[0xb] = (byte)(uVar125 >> 0x1e) & (byte)((uint)iVar30 >> 0x18);
          auVar47[0xc] = (byte)(uVar56 >> 6) & (byte)iVar31 | ~-(uVar127 < 0x4515) & ~(byte)iVar31;
          auVar47[0xd] = (byte)((uVar56 >> 6) >> 8) & (byte)((uint)iVar31 >> 8);
          auVar47[0xe] = (byte)((uint3)(uVar56 >> 0xe) >> 8) & (byte)((uint)iVar31 >> 0x10);
          auVar47[0xf] = (byte)(uVar56 >> 0x1e) & (byte)((uint)iVar31 >> 0x18);
          uVar48 = uVar101 - 0x4515;
          uVar51 = uVar111 - 0x4515;
          uVar125 = uVar113 - 0x4515;
          uVar56 = uVar114 - 0x4515;
          iVar28 = -(uint)(uVar48 < 0x4000);
          iVar29 = -(uint)(uVar51 < 0x4000);
          iVar30 = -(uint)(uVar125 < 0x4000);
          iVar31 = -(uint)(uVar56 < 0x4000);
          uVar49 = uVar48 >> 6;
          uVar115 = uVar51 >> 6;
          uVar55 = uVar125 >> 6;
          auVar44[0] = (byte)uVar49 & (byte)iVar28 | ~-(uVar101 < 0x4515) & ~(byte)iVar28;
          auVar44[1] = (byte)(uVar49 >> 8) & (byte)((uint)iVar28 >> 8);
          auVar44[2] = (byte)(uVar49 >> 0x10) & (byte)((uint)iVar28 >> 0x10);
          auVar44[3] = (byte)(uVar48 >> 0x1e) & (byte)((uint)iVar28 >> 0x18);
          auVar44[4] = (byte)uVar115 & (byte)iVar29 | ~-(uVar111 < 0x4515) & ~(byte)iVar29;
          auVar44[5] = (byte)(uVar115 >> 8) & (byte)((uint)iVar29 >> 8);
          auVar44[6] = (byte)(uVar115 >> 0x10) & (byte)((uint)iVar29 >> 0x10);
          auVar44[7] = (byte)(uVar51 >> 0x1e) & (byte)((uint)iVar29 >> 0x18);
          auVar44[8] = (byte)uVar55 & (byte)iVar30 | ~-(uVar113 < 0x4515) & ~(byte)iVar30;
          auVar44[9] = (byte)(uVar55 >> 8) & (byte)((uint)iVar30 >> 8);
          auVar44[10] = (byte)(uVar55 >> 0x10) & (byte)((uint)iVar30 >> 0x10);
          auVar44[0xb] = (byte)(uVar125 >> 0x1e) & (byte)((uint)iVar30 >> 0x18);
          auVar44[0xc] = (byte)(uVar56 >> 6) & (byte)iVar31 | ~-(uVar114 < 0x4515) & ~(byte)iVar31;
          auVar44[0xd] = (byte)((uVar56 >> 6) >> 8) & (byte)((uint)iVar31 >> 8);
          auVar44[0xe] = (byte)((uint3)(uVar56 >> 0xe) >> 8) & (byte)((uint)iVar31 >> 0x10);
          auVar44[0xf] = (byte)(uVar56 >> 0x1e) & (byte)((uint)iVar31 >> 0x18);
          uVar48 = iVar32 + 0x2204;
          uVar49 = iVar33 + 0x2204;
          uVar51 = iVar34 + 0x2204;
          uVar115 = iVar35 + 0x2204;
          iVar28 = -(uint)(iVar33 < -0x2204);
          iVar29 = -(uint)(iVar34 < -0x2204);
          iVar30 = -(uint)(iVar35 < -0x2204);
          auVar104._0_4_ = -(uint)(uVar48 < 0x4000);
          auVar104._4_4_ = -(uint)(uVar49 < 0x4000);
          auVar104._8_4_ = -(uint)(uVar51 < 0x4000);
          auVar104._12_4_ = -(uint)(uVar115 < 0x4000);
          auVar93._0_4_ = uVar48 >> 6;
          auVar93._4_4_ = uVar49 >> 6;
          auVar93._8_4_ = uVar51 >> 6;
          auVar93._12_4_ = uVar115 >> 6;
          auVar85[0] = ~-(iVar32 < -0x2204);
          auVar85._1_3_ = 0;
          auVar85[4] = ~(byte)iVar28;
          auVar85._5_2_ = 0;
          auVar85[7] = ~(byte)((uint)iVar28 >> 0x18);
          auVar85[8] = ~(byte)iVar29;
          auVar85[9] = ~(byte)((uint)iVar29 >> 8);
          auVar85[10] = ~(byte)((uint)iVar29 >> 0x10);
          auVar85[0xb] = ~(byte)((uint)iVar29 >> 0x18);
          auVar85[0xc] = ~(byte)iVar30;
          auVar85[0xd] = ~(byte)((uint)iVar30 >> 8);
          auVar85[0xe] = ~(byte)((uint)iVar30 >> 0x10);
          auVar85[0xf] = ~(byte)((uint)iVar30 >> 0x18);
          auVar85 = auVar85 ^ (auVar85 ^ auVar93) & auVar104;
          uVar48 = iVar36 + 0x2204;
          uVar49 = iVar37 + 0x2204;
          uVar51 = iVar38 + 0x2204;
          uVar115 = iVar39 + 0x2204;
          iVar28 = -(uint)(iVar37 < -0x2204);
          iVar29 = -(uint)(iVar38 < -0x2204);
          iVar30 = -(uint)(iVar39 < -0x2204);
          auVar57._0_4_ = -(uint)(uVar48 < 0x4000);
          auVar57._4_4_ = -(uint)(uVar49 < 0x4000);
          auVar57._8_4_ = -(uint)(uVar51 < 0x4000);
          auVar57._12_4_ = -(uint)(uVar115 < 0x4000);
          auVar103._0_4_ = uVar48 >> 6;
          auVar103._4_4_ = uVar49 >> 6;
          auVar103._8_4_ = uVar51 >> 6;
          auVar103._12_4_ = uVar115 >> 6;
          auVar139[0] = ~-(iVar36 < -0x2204);
          auVar139._1_3_ = 0;
          auVar139[4] = ~(byte)iVar28;
          auVar139._5_2_ = 0;
          auVar139[7] = ~(byte)((uint)iVar28 >> 0x18);
          auVar139[8] = ~(byte)iVar29;
          auVar139[9] = ~(byte)((uint)iVar29 >> 8);
          auVar139[10] = ~(byte)((uint)iVar29 >> 0x10);
          auVar139[0xb] = ~(byte)((uint)iVar29 >> 0x18);
          auVar139[0xc] = ~(byte)iVar30;
          auVar139[0xd] = ~(byte)((uint)iVar30 >> 8);
          auVar139[0xe] = ~(byte)((uint)iVar30 >> 0x10);
          auVar139[0xf] = ~(byte)((uint)iVar30 >> 0x18);
          auVar103 = auVar103 ^ (auVar103 ^ auVar139) & ~auVar57;
          uVar48 = iVar72 + 0x2204;
          uVar49 = iVar77 + 0x2204;
          uVar51 = iVar78 + 0x2204;
          uVar115 = iVar79 + 0x2204;
          iVar28 = -(uint)(iVar77 < -0x2204);
          iVar29 = -(uint)(iVar78 < -0x2204);
          iVar30 = -(uint)(iVar79 < -0x2204);
          auVar66._0_4_ = -(uint)(uVar48 < 0x4000);
          auVar66._4_4_ = -(uint)(uVar49 < 0x4000);
          auVar66._8_4_ = -(uint)(uVar51 < 0x4000);
          auVar66._12_4_ = -(uint)(uVar115 < 0x4000);
          auVar27._0_4_ = uVar48 >> 6;
          auVar27._4_4_ = uVar49 >> 6;
          auVar27._8_4_ = uVar51 >> 6;
          auVar27._12_4_ = uVar115 >> 6;
          auVar58[0] = ~-(iVar72 < -0x2204);
          auVar58._1_3_ = 0;
          auVar58[4] = ~(byte)iVar28;
          auVar58._5_2_ = 0;
          auVar58[7] = ~(byte)((uint)iVar28 >> 0x18);
          auVar58[8] = ~(byte)iVar29;
          auVar58[9] = ~(byte)((uint)iVar29 >> 8);
          auVar58[10] = ~(byte)((uint)iVar29 >> 0x10);
          auVar58[0xb] = ~(byte)((uint)iVar29 >> 0x18);
          auVar58[0xc] = ~(byte)iVar30;
          auVar58[0xd] = ~(byte)((uint)iVar30 >> 8);
          auVar58[0xe] = ~(byte)((uint)iVar30 >> 0x10);
          auVar58[0xf] = ~(byte)((uint)iVar30 >> 0x18);
          auVar27 = auVar27 ^ (auVar27 ^ auVar58) & ~auVar66;
          uVar48 = iVar60 + 0x2204;
          uVar49 = iVar69 + 0x2204;
          uVar51 = iVar70 + 0x2204;
          uVar115 = iVar71 + 0x2204;
          iVar28 = -(uint)(iVar69 < -0x2204);
          iVar29 = -(uint)(iVar70 < -0x2204);
          iVar30 = -(uint)(iVar71 < -0x2204);
          auVar105._0_4_ = -(uint)(uVar48 < 0x4000);
          auVar105._4_4_ = -(uint)(uVar49 < 0x4000);
          auVar105._8_4_ = -(uint)(uVar51 < 0x4000);
          auVar105._12_4_ = -(uint)(uVar115 < 0x4000);
          auVar59._0_4_ = uVar48 >> 6;
          auVar59._4_4_ = uVar49 >> 6;
          auVar59._8_4_ = uVar51 >> 6;
          auVar59._12_4_ = uVar115 >> 6;
          auVar67[0] = ~-(iVar60 < -0x2204);
          auVar67._1_3_ = 0;
          auVar67[4] = ~(byte)iVar28;
          auVar67._5_2_ = 0;
          auVar67[7] = ~(byte)((uint)iVar28 >> 0x18);
          auVar67[8] = ~(byte)iVar29;
          auVar67[9] = ~(byte)((uint)iVar29 >> 8);
          auVar67[10] = ~(byte)((uint)iVar29 >> 0x10);
          auVar67[0xb] = ~(byte)((uint)iVar29 >> 0x18);
          auVar67[0xc] = ~(byte)iVar30;
          auVar67[0xd] = ~(byte)((uint)iVar30 >> 8);
          auVar67[0xe] = ~(byte)((uint)iVar30 >> 0x10);
          auVar67[0xf] = ~(byte)((uint)iVar30 >> 0x18);
          auVar59 = auVar59 ^ (auVar59 ^ auVar67) & ~auVar105;
          uVar48 = uVar118 - 0x379a;
          uVar49 = uVar128 - 0x379a;
          uVar51 = uVar132 - 0x379a;
          uVar115 = uVar135 - 0x379a;
          iVar28 = -(uint)(uVar128 < 0x379a);
          iVar29 = -(uint)(uVar132 < 0x379a);
          iVar30 = -(uint)(uVar135 < 0x379a);
          auVar121._0_4_ = -(uint)(uVar48 < 0x4000);
          auVar121._4_4_ = -(uint)(uVar49 < 0x4000);
          auVar121._8_4_ = -(uint)(uVar51 < 0x4000);
          auVar121._12_4_ = -(uint)(uVar115 < 0x4000);
          auVar68._0_4_ = uVar48 >> 6;
          auVar68._4_4_ = uVar49 >> 6;
          auVar68._8_4_ = uVar51 >> 6;
          auVar68._12_4_ = uVar115 >> 6;
          auVar106[0] = ~-(uVar118 < 0x379a);
          auVar106._1_3_ = 0;
          auVar106[4] = ~(byte)iVar28;
          auVar106._5_2_ = 0;
          auVar106[7] = ~(byte)((uint)iVar28 >> 0x18);
          auVar106[8] = ~(byte)iVar29;
          auVar106[9] = ~(byte)((uint)iVar29 >> 8);
          auVar106[10] = ~(byte)((uint)iVar29 >> 0x10);
          auVar106[0xb] = ~(byte)((uint)iVar29 >> 0x18);
          auVar106[0xc] = ~(byte)iVar30;
          auVar106[0xd] = ~(byte)((uint)iVar30 >> 8);
          auVar106[0xe] = ~(byte)((uint)iVar30 >> 0x10);
          auVar106[0xf] = ~(byte)((uint)iVar30 >> 0x18);
          auVar68 = auVar68 ^ (auVar68 ^ auVar106) & ~auVar121;
          uVar48 = uVar143 - 0x379a;
          uVar49 = uVar144 - 0x379a;
          uVar51 = uVar97 - 0x379a;
          uVar115 = uVar99 - 0x379a;
          iVar28 = -(uint)(uVar144 < 0x379a);
          iVar29 = -(uint)(uVar97 < 0x379a);
          iVar30 = -(uint)(uVar99 < 0x379a);
          auVar122._0_4_ = -(uint)(uVar48 < 0x4000);
          auVar122._4_4_ = -(uint)(uVar49 < 0x4000);
          auVar122._8_4_ = -(uint)(uVar51 < 0x4000);
          auVar122._12_4_ = -(uint)(uVar115 < 0x4000);
          auVar107._0_4_ = uVar48 >> 6;
          auVar107._4_4_ = uVar49 >> 6;
          auVar107._8_4_ = uVar51 >> 6;
          auVar107._12_4_ = uVar115 >> 6;
          auVar94[0] = ~-(uVar143 < 0x379a);
          auVar94._1_3_ = 0;
          auVar94[4] = ~(byte)iVar28;
          auVar94._5_2_ = 0;
          auVar94[7] = ~(byte)((uint)iVar28 >> 0x18);
          auVar94[8] = ~(byte)iVar29;
          auVar94[9] = ~(byte)((uint)iVar29 >> 8);
          auVar94[10] = ~(byte)((uint)iVar29 >> 0x10);
          auVar94[0xb] = ~(byte)((uint)iVar29 >> 0x18);
          auVar94[0xc] = ~(byte)iVar30;
          auVar94[0xd] = ~(byte)((uint)iVar30 >> 8);
          auVar94[0xe] = ~(byte)((uint)iVar30 >> 0x10);
          auVar94[0xf] = ~(byte)((uint)iVar30 >> 0x18);
          auVar94 = auVar94 ^ (auVar94 ^ auVar107) & auVar122;
          uVar48 = uVar137 - 0x379a;
          uVar49 = uVar140 - 0x379a;
          uVar51 = uVar141 - 0x379a;
          uVar115 = uVar142 - 0x379a;
          iVar28 = -(uint)(uVar140 < 0x379a);
          iVar29 = -(uint)(uVar141 < 0x379a);
          iVar30 = -(uint)(uVar142 < 0x379a);
          auVar123._0_4_ = -(uint)(uVar48 < 0x4000);
          auVar123._4_4_ = -(uint)(uVar49 < 0x4000);
          auVar123._8_4_ = -(uint)(uVar51 < 0x4000);
          auVar123._12_4_ = -(uint)(uVar115 < 0x4000);
          auVar108._0_4_ = uVar48 >> 6;
          auVar108._4_4_ = uVar49 >> 6;
          auVar108._8_4_ = uVar51 >> 6;
          auVar108._12_4_ = uVar115 >> 6;
          auVar86[0] = ~-(uVar137 < 0x379a);
          auVar86._1_3_ = 0;
          auVar86[4] = ~(byte)iVar28;
          auVar86._5_2_ = 0;
          auVar86[7] = ~(byte)((uint)iVar28 >> 0x18);
          auVar86[8] = ~(byte)iVar29;
          auVar86[9] = ~(byte)((uint)iVar29 >> 8);
          auVar86[10] = ~(byte)((uint)iVar29 >> 0x10);
          auVar86[0xb] = ~(byte)((uint)iVar29 >> 0x18);
          auVar86[0xc] = ~(byte)iVar30;
          auVar86[0xd] = ~(byte)((uint)iVar30 >> 8);
          auVar86[0xe] = ~(byte)((uint)iVar30 >> 0x10);
          auVar86[0xf] = ~(byte)((uint)iVar30 >> 0x18);
          auVar86 = auVar86 ^ (auVar86 ^ auVar108) & auVar123;
          uVar48 = uVar130 - 0x379a;
          uVar49 = uVar131 - 0x379a;
          uVar51 = uVar134 - 0x379a;
          uVar115 = uVar136 - 0x379a;
          iVar28 = -(uint)(uVar131 < 0x379a);
          iVar29 = -(uint)(uVar134 < 0x379a);
          iVar30 = -(uint)(uVar136 < 0x379a);
          auVar124._0_4_ = -(uint)(uVar48 < 0x4000);
          auVar124._4_4_ = -(uint)(uVar49 < 0x4000);
          auVar124._8_4_ = -(uint)(uVar51 < 0x4000);
          auVar124._12_4_ = -(uint)(uVar115 < 0x4000);
          auVar109._0_4_ = uVar48 >> 6;
          auVar109._4_4_ = uVar49 >> 6;
          auVar109._8_4_ = uVar51 >> 6;
          auVar109._12_4_ = uVar115 >> 6;
          auVar76[0] = ~-(uVar130 < 0x379a);
          auVar76._1_3_ = 0;
          auVar76[4] = ~(byte)iVar28;
          auVar76._5_2_ = 0;
          auVar76[7] = ~(byte)((uint)iVar28 >> 0x18);
          auVar76[8] = ~(byte)iVar29;
          auVar76[9] = ~(byte)((uint)iVar29 >> 8);
          auVar76[10] = ~(byte)((uint)iVar29 >> 0x10);
          auVar76[0xb] = ~(byte)((uint)iVar29 >> 0x18);
          auVar76[0xc] = ~(byte)iVar30;
          auVar76[0xd] = ~(byte)((uint)iVar30 >> 8);
          auVar76[0xe] = ~(byte)((uint)iVar30 >> 0x10);
          auVar76[0xf] = ~(byte)((uint)iVar30 >> 0x18);
          auVar76 = auVar76 ^ (auVar76 ^ auVar109) & auVar124;
          auVar75._8_8_ = 0x3c3834302c282420;
          auVar75._0_8_ = 0x1c1814100c080400;
          auVar65[1] = (byte)(uVar112 >> 8) & (byte)((uint)iVar40 >> 8);
          auVar65[0] = (byte)uVar112 & (byte)iVar40 | ~-(uVar45 < 0x4515) & ~(byte)iVar40;
          auVar65[2] = (byte)(uVar112 >> 0x10) & (byte)((uint)iVar40 >> 0x10);
          auVar65[3] = (byte)(uVar88 >> 0x1e) & (byte)((uint)iVar40 >> 0x18);
          auVar65[4] = (byte)uVar90 & (byte)iVar41 | ~-(uVar50 < 0x4515) & ~(byte)iVar41;
          auVar65[5] = (byte)(uVar90 >> 8) & (byte)((uint)iVar41 >> 8);
          auVar65[6] = (byte)(uVar90 >> 0x10) & (byte)((uint)iVar41 >> 0x10);
          auVar65[7] = (byte)(uVar89 >> 0x1e) & (byte)((uint)iVar41 >> 0x18);
          auVar65[8] = (byte)uVar96 & (byte)iVar42 | ~-(uVar54 < 0x4515) & ~(byte)iVar42;
          auVar65[9] = (byte)(uVar96 >> 8) & (byte)((uint)iVar42 >> 8);
          auVar65[10] = (byte)(uVar96 >> 0x10) & (byte)((uint)iVar42 >> 0x10);
          auVar65[0xb] = (byte)(uVar95 >> 0x1e) & (byte)((uint)iVar42 >> 0x18);
          auVar65[0xc] = (byte)(uVar98 >> 6) & (byte)iVar43 | ~-(uVar129 < 0x4515) & ~(byte)iVar43;
          auVar65[0xd] = (byte)((uVar98 >> 6) >> 8) & (byte)((uint)iVar43 >> 8);
          auVar65[0xe] = (byte)((uint3)(uVar98 >> 0xe) >> 8) & (byte)((uint)iVar43 >> 0x10);
          auVar65[0xf] = (byte)(uVar98 >> 0x1e) & (byte)((uint)iVar43 >> 0x18);
          auVar65 = a64_TBL(ZEXT816(0),auVar44,auVar47,auVar53,auVar65,auVar75);
          *puVar13 = auVar94[0];
          puVar13[1] = auVar103[0];
          puVar13[2] = auVar65[0];
          puVar13[3] = auVar94[4];
          puVar13[4] = auVar103[4];
          puVar13[5] = auVar65[1];
          puVar13[6] = auVar94[8];
          puVar13[7] = auVar103[8];
          puVar13[8] = auVar65[2];
          puVar13[9] = auVar94[0xc];
          puVar13[10] = auVar103[0xc];
          puVar13[0xb] = auVar65[3];
          puVar13[0xc] = auVar68[0];
          puVar13[0xd] = auVar85[0];
          puVar13[0xe] = auVar65[4];
          puVar13[0xf] = auVar68[4];
          puVar13[0x10] = auVar85[4];
          puVar13[0x11] = auVar65[5];
          puVar13[0x12] = auVar68[8];
          puVar13[0x13] = auVar85[8];
          puVar13[0x14] = auVar65[6];
          puVar13[0x15] = auVar68[0xc];
          puVar13[0x16] = auVar85[0xc];
          puVar13[0x17] = auVar65[7];
          puVar13[0x18] = auVar76[0];
          puVar13[0x19] = auVar59[0];
          puVar13[0x1a] = auVar65[8];
          puVar13[0x1b] = auVar76[4];
          puVar13[0x1c] = auVar59[4];
          puVar13[0x1d] = auVar65[9];
          puVar13[0x1e] = auVar76[8];
          puVar13[0x1f] = auVar59[8];
          puVar13[0x20] = auVar65[10];
          puVar13[0x21] = auVar76[0xc];
          puVar13[0x22] = auVar59[0xc];
          puVar13[0x23] = auVar65[0xb];
          puVar13[0x24] = auVar86[0];
          puVar13[0x25] = auVar27[0];
          puVar13[0x26] = auVar65[0xc];
          puVar13[0x27] = auVar86[4];
          puVar13[0x28] = auVar27[4];
          puVar13[0x29] = auVar65[0xd];
          puVar13[0x2a] = auVar86[8];
          puVar13[0x2b] = auVar27[8];
          puVar13[0x2c] = auVar65[0xe];
          puVar13[0x2d] = auVar86[0xc];
          puVar13[0x2e] = auVar27[0xc];
          puVar13[0x2f] = auVar65[0xf];
          puVar13 = puVar13 + 0x30;
          uVar18 = uVar18 - 0x10;
          pauVar21 = pauVar21 + 1;
          pauVar22 = pauVar22 + 1;
          pauVar24 = pauVar24 + 1;
        } while (uVar18 != 0);
        if (uVar16 == uVar14) {
          return;
        }
        uVar18 = uVar16;
        if ((param_5 >> 3 & 1) == 0) goto LAB_00230a74;
      }
      auVar12 = _UNK_007eeb80;
      auVar11 = _UNK_007eeb70;
      auVar10 = _UNK_007edcc0;
      auVar65 = _UNK_007edcb0;
      uVar16 = uVar14 & 0x7ffffff8;
      lVar15 = uVar18 - uVar16;
      puVar13 = param_4 + uVar18 * 3;
      puVar23 = (ulong *)(*param_3 + uVar18);
      puVar25 = (ulong *)(*param_2 + uVar18);
      puVar26 = (undefined8 *)(*param_1 + uVar18);
      do {
        uVar61 = *puVar26;
        auVar74._0_8_ = *puVar25;
        auVar74._8_8_ = 0;
        auVar82 = a64_TBL(ZEXT816(0),auVar74,auVar65);
        auVar6._12_4_ = 0xffffff07;
        auVar6._0_12_ = auVar10;
        auVar75 = a64_TBL(ZEXT816(0),auVar74,auVar6);
        uVar46 = CONCAT26(auVar75._12_2_,
                          CONCAT24(auVar75._8_2_,CONCAT22(auVar75._4_2_,auVar75._0_2_)));
        uVar73 = CONCAT26(auVar82._12_2_,
                          CONCAT24(auVar82._8_2_,CONCAT22(auVar82._4_2_,auVar82._0_2_)));
        auVar83._0_8_ = *puVar23;
        auVar83._8_8_ = 0;
        auVar7._12_4_ = 0xffffff07;
        auVar7._0_12_ = auVar10;
        auVar82 = a64_TBL(ZEXT816(0),auVar83,auVar7);
        auVar75 = a64_TBL(ZEXT816(0),auVar83,auVar65);
        uVar62 = CONCAT26(auVar75._12_2_,
                          CONCAT24(auVar75._8_2_,CONCAT22(auVar75._4_2_,auVar75._0_2_)));
        uVar81 = CONCAT26(auVar82._12_2_,
                          CONCAT24(auVar82._8_2_,CONCAT22(auVar82._4_2_,auVar82._0_2_)));
        uVar115 = (uint)(byte)((ulong)uVar61 >> 0x20) * 0x4a85;
        uVar125 = (uint)(byte)((ulong)uVar61 >> 0x28) * 0x4a85;
        uVar129 = (uint)(byte)((ulong)uVar61 >> 0x30) * 0x4a85;
        uVar133 = (uint)(byte)((ulong)uVar61 >> 0x38) * 0x4a85;
        auVar75 = NEON_umull((ulong)CONCAT16((char)((ulong)uVar61 >> 0x18),
                                             (uint6)CONCAT14((char)((ulong)uVar61 >> 0x10),
                                                             (uint)CONCAT12((char)((ulong)uVar61 >>
                                                                                  8),(ushort)(byte)
                                                  uVar61))),0x4a854a854a854a85,2);
        uVar90 = auVar75._0_4_;
        uVar95 = auVar75._4_4_;
        uVar96 = auVar75._8_4_;
        uVar98 = auVar75._12_4_;
        auVar82 = NEON_umull(uVar81,0x6625662566256625,2);
        auVar75 = NEON_umull(uVar62,0x6625662566256625,2);
        auVar63 = NEON_umull(uVar73,0x1913191319131913,2);
        uVar51 = (auVar82._0_4_ >> 8) + (uVar115 >> 8);
        uVar54 = (auVar82._4_4_ >> 8) + (uVar125 >> 8);
        uVar55 = (auVar82._8_4_ >> 8) + (uVar129 >> 8);
        uVar56 = (auVar82._12_4_ >> 8) + (uVar133 >> 8);
        auVar82 = NEON_umull(uVar62,0x3408340834083408,2);
        auVar64 = NEON_umull(uVar46,0x1913191319131913,2);
        auVar84 = NEON_umull(uVar81,0x3408340834083408,2);
        uVar45 = (auVar75._0_4_ >> 8) + (uVar90 >> 8);
        uVar48 = (auVar75._4_4_ >> 8) + (uVar95 >> 8);
        uVar49 = (auVar75._8_4_ >> 8) + (uVar96 >> 8);
        uVar50 = (auVar75._12_4_ >> 8) + (uVar98 >> 8);
        uVar80 = uVar45 - 0x379a;
        uVar87 = uVar48 - 0x379a;
        uVar88 = uVar49 - 0x379a;
        uVar89 = uVar50 - 0x379a;
        iVar60 = (uVar115 >> 8) - ((auVar64._0_4_ >> 8) + (auVar84._0_4_ >> 8));
        iVar69 = (uVar125 >> 8) - ((auVar64._4_4_ >> 8) + (auVar84._4_4_ >> 8));
        iVar70 = (uVar129 >> 8) - ((auVar64._8_4_ >> 8) + (auVar84._8_4_ >> 8));
        iVar71 = (uVar133 >> 8) - ((auVar64._12_4_ >> 8) + (auVar84._12_4_ >> 8));
        uVar100 = uVar51 - 0x379a;
        uVar110 = uVar54 - 0x379a;
        uVar112 = uVar55 - 0x379a;
        uVar114 = uVar56 - 0x379a;
        auVar75 = NEON_umull(uVar46,0x811a811a811a811a,2);
        auVar64 = NEON_umull(uVar73,0x811a811a811a811a,2);
        uVar115 = (auVar75._0_4_ >> 8) + (uVar115 >> 8);
        uVar125 = (auVar75._4_4_ >> 8) + (uVar125 >> 8);
        uVar129 = (auVar75._8_4_ >> 8) + (uVar129 >> 8);
        uVar133 = (auVar75._12_4_ >> 8) + (uVar133 >> 8);
        iVar72 = (uVar90 >> 8) - ((uint)auVar63._1_3_ + (auVar82._0_4_ >> 8));
        iVar77 = (uVar95 >> 8) - ((uint)auVar63._5_3_ + (auVar82._4_4_ >> 8));
        iVar78 = (uVar96 >> 8) - ((uint)auVar63._9_3_ + (auVar82._8_4_ >> 8));
        iVar79 = (uVar98 >> 8) - ((uint)auVar63._13_3_ + (auVar82._12_4_ >> 8));
        uVar90 = (auVar64._0_4_ >> 8) + (uVar90 >> 8);
        uVar95 = (auVar64._4_4_ >> 8) + (uVar95 >> 8);
        uVar96 = (auVar64._8_4_ >> 8) + (uVar96 >> 8);
        uVar98 = (auVar64._12_4_ >> 8) + (uVar98 >> 8);
        uVar116 = uVar90 - 0x4515;
        uVar126 = uVar95 - 0x4515;
        uVar130 = uVar96 - 0x4515;
        uVar134 = uVar98 - 0x4515;
        uVar136 = uVar115 - 0x4515;
        uVar140 = uVar125 - 0x4515;
        uVar142 = uVar129 - 0x4515;
        uVar144 = uVar133 - 0x4515;
        iVar28 = -(uint)(uVar136 < 0x4000);
        iVar32 = -(uint)(uVar140 < 0x4000);
        iVar36 = -(uint)(uVar142 < 0x4000);
        iVar40 = -(uint)(uVar144 < 0x4000);
        uVar137 = uVar136 >> 6;
        uVar141 = uVar140 >> 6;
        uVar143 = uVar142 >> 6;
        iVar29 = -(uint)(uVar116 < 0x4000);
        iVar33 = -(uint)(uVar126 < 0x4000);
        iVar37 = -(uint)(uVar130 < 0x4000);
        iVar41 = -(uint)(uVar134 < 0x4000);
        uVar117 = uVar116 >> 6;
        uVar127 = uVar126 >> 6;
        uVar131 = uVar130 >> 6;
        iVar30 = -(uint)(uVar100 < 0x4000);
        iVar34 = -(uint)(uVar110 < 0x4000);
        iVar38 = -(uint)(uVar112 < 0x4000);
        iVar42 = -(uint)(uVar114 < 0x4000);
        uVar101 = uVar100 >> 6;
        uVar111 = uVar110 >> 6;
        uVar113 = uVar112 >> 6;
        auVar102[1] = (byte)(uVar101 >> 8) & (byte)((uint)iVar30 >> 8);
        auVar102[2] = (byte)(uVar101 >> 0x10) & (byte)((uint)iVar30 >> 0x10);
        auVar102[3] = (byte)(uVar100 >> 0x1e) & (byte)((uint)iVar30 >> 0x18);
        auVar102[5] = (byte)(uVar111 >> 8) & (byte)((uint)iVar34 >> 8);
        auVar102[6] = (byte)(uVar111 >> 0x10) & (byte)((uint)iVar34 >> 0x10);
        auVar102[7] = (byte)(uVar110 >> 0x1e) & (byte)((uint)iVar34 >> 0x18);
        auVar102[9] = (byte)(uVar113 >> 8) & (byte)((uint)iVar38 >> 8);
        auVar102[10] = (byte)(uVar113 >> 0x10) & (byte)((uint)iVar38 >> 0x10);
        auVar102[0xb] = (byte)(uVar112 >> 0x1e) & (byte)((uint)iVar38 >> 0x18);
        auVar102[0xd] = (byte)((uVar114 >> 6) >> 8) & (byte)((uint)iVar42 >> 8);
        auVar102[0xe] = (byte)((uint3)(uVar114 >> 0xe) >> 8) & (byte)((uint)iVar42 >> 0x10);
        auVar102[0xf] = (byte)(uVar114 >> 0x1e) & (byte)((uint)iVar42 >> 0x18);
        iVar31 = -(uint)(uVar80 < 0x4000);
        iVar35 = -(uint)(uVar87 < 0x4000);
        iVar39 = -(uint)(uVar88 < 0x4000);
        iVar43 = -(uint)(uVar89 < 0x4000);
        uVar100 = uVar80 >> 6;
        uVar110 = uVar87 >> 6;
        uVar112 = uVar88 >> 6;
        auVar52[0] = (byte)uVar117 & (byte)iVar29 | ~-(uVar90 < 0x4515) & ~(byte)iVar29;
        auVar52[1] = (byte)(uVar117 >> 8) & (byte)((uint)iVar29 >> 8);
        auVar52[2] = (byte)(uVar117 >> 0x10) & (byte)((uint)iVar29 >> 0x10);
        auVar52[3] = (byte)(uVar116 >> 0x1e) & (byte)((uint)iVar29 >> 0x18);
        auVar52[4] = (byte)uVar127 & (byte)iVar33 | ~-(uVar95 < 0x4515) & ~(byte)iVar33;
        auVar52[5] = (byte)(uVar127 >> 8) & (byte)((uint)iVar33 >> 8);
        auVar52[6] = (byte)(uVar127 >> 0x10) & (byte)((uint)iVar33 >> 0x10);
        auVar52[7] = (byte)(uVar126 >> 0x1e) & (byte)((uint)iVar33 >> 0x18);
        auVar52[8] = (byte)uVar131 & (byte)iVar37 | ~-(uVar96 < 0x4515) & ~(byte)iVar37;
        auVar52[9] = (byte)(uVar131 >> 8) & (byte)((uint)iVar37 >> 8);
        auVar52[10] = (byte)(uVar131 >> 0x10) & (byte)((uint)iVar37 >> 0x10);
        auVar52[0xb] = (byte)(uVar130 >> 0x1e) & (byte)((uint)iVar37 >> 0x18);
        auVar52[0xc] = (byte)(uVar134 >> 6) & (byte)iVar41 | ~-(uVar98 < 0x4515) & ~(byte)iVar41;
        auVar52[0xd] = (byte)((uVar134 >> 6) >> 8) & (byte)((uint)iVar41 >> 8);
        auVar52[0xe] = (byte)((uint3)(uVar134 >> 0xe) >> 8) & (byte)((uint)iVar41 >> 0x10);
        auVar52[0xf] = (byte)(uVar134 >> 0x1e) & (byte)((uint)iVar41 >> 0x18);
        auVar102[0] = (byte)uVar101 & (byte)iVar30 | ~-(uVar51 < 0x379a) & ~(byte)iVar30;
        auVar102[4] = (byte)uVar111 & (byte)iVar34 | ~-(uVar54 < 0x379a) & ~(byte)iVar34;
        auVar102[8] = (byte)uVar113 & (byte)iVar38 | ~-(uVar55 < 0x379a) & ~(byte)iVar38;
        auVar102[0xc] = (byte)(uVar114 >> 6) & (byte)iVar42 | ~-(uVar56 < 0x379a) & ~(byte)iVar42;
        auVar92[0] = (byte)uVar100 & (byte)iVar31 | ~-(uVar45 < 0x379a) & ~(byte)iVar31;
        auVar92[1] = (byte)(uVar100 >> 8) & (byte)((uint)iVar31 >> 8);
        auVar92[2] = (byte)(uVar100 >> 0x10) & (byte)((uint)iVar31 >> 0x10);
        auVar92[3] = (byte)(uVar80 >> 0x1e) & (byte)((uint)iVar31 >> 0x18);
        auVar92[4] = (byte)uVar110 & (byte)iVar35 | ~-(uVar48 < 0x379a) & ~(byte)iVar35;
        auVar92[5] = (byte)(uVar110 >> 8) & (byte)((uint)iVar35 >> 8);
        auVar92[6] = (byte)(uVar110 >> 0x10) & (byte)((uint)iVar35 >> 0x10);
        auVar92[7] = (byte)(uVar87 >> 0x1e) & (byte)((uint)iVar35 >> 0x18);
        auVar92[8] = (byte)uVar112 & (byte)iVar39 | ~-(uVar49 < 0x379a) & ~(byte)iVar39;
        auVar92[9] = (byte)(uVar112 >> 8) & (byte)((uint)iVar39 >> 8);
        auVar92[10] = (byte)(uVar112 >> 0x10) & (byte)((uint)iVar39 >> 0x10);
        auVar92[0xb] = (byte)(uVar88 >> 0x1e) & (byte)((uint)iVar39 >> 0x18);
        auVar92[0xc] = (byte)(uVar89 >> 6) & (byte)iVar43 | ~-(uVar50 < 0x379a) & ~(byte)iVar43;
        auVar92[0xd] = (byte)((uVar89 >> 6) >> 8) & (byte)((uint)iVar43 >> 8);
        auVar92[0xe] = (byte)((uint3)(uVar89 >> 0xe) >> 8) & (byte)((uint)iVar43 >> 0x10);
        auVar92[0xf] = (byte)(uVar89 >> 0x1e) & (byte)((uint)iVar43 >> 0x18);
        uVar45 = iVar60 + 0x2204;
        uVar49 = iVar69 + 0x2204;
        uVar51 = iVar70 + 0x2204;
        uVar55 = iVar71 + 0x2204;
        iVar29 = -(uint)(uVar45 < 0x4000);
        iVar30 = -(uint)(uVar49 < 0x4000);
        iVar31 = -(uint)(uVar51 < 0x4000);
        iVar33 = -(uint)(uVar55 < 0x4000);
        uVar48 = uVar45 >> 6;
        uVar50 = uVar49 >> 6;
        uVar54 = uVar51 >> 6;
        auVar138[0] = (byte)uVar48 & (byte)iVar29 | ~-(iVar60 < -0x2204) & ~(byte)iVar29;
        auVar138[1] = (byte)(uVar48 >> 8) & (byte)((uint)iVar29 >> 8);
        auVar138[2] = (byte)(uVar48 >> 0x10) & (byte)((uint)iVar29 >> 0x10);
        auVar138[3] = (byte)(uVar45 >> 0x1e) & (byte)((uint)iVar29 >> 0x18);
        auVar138[4] = (byte)uVar50 & (byte)iVar30 | ~-(iVar69 < -0x2204) & ~(byte)iVar30;
        auVar138[5] = (byte)(uVar50 >> 8) & (byte)((uint)iVar30 >> 8);
        auVar138[6] = (byte)(uVar50 >> 0x10) & (byte)((uint)iVar30 >> 0x10);
        auVar138[7] = (byte)(uVar49 >> 0x1e) & (byte)((uint)iVar30 >> 0x18);
        auVar138[8] = (byte)uVar54 & (byte)iVar31 | ~-(iVar70 < -0x2204) & ~(byte)iVar31;
        auVar138[9] = (byte)(uVar54 >> 8) & (byte)((uint)iVar31 >> 8);
        auVar138[10] = (byte)(uVar54 >> 0x10) & (byte)((uint)iVar31 >> 0x10);
        auVar138[0xb] = (byte)(uVar51 >> 0x1e) & (byte)((uint)iVar31 >> 0x18);
        auVar138[0xc] = (byte)(uVar55 >> 6) & (byte)iVar33 | ~-(iVar71 < -0x2204) & ~(byte)iVar33;
        auVar138[0xd] = (byte)((uVar55 >> 6) >> 8) & (byte)((uint)iVar33 >> 8);
        auVar138[0xe] = (byte)((uint3)(uVar55 >> 0xe) >> 8) & (byte)((uint)iVar33 >> 0x10);
        auVar138[0xf] = (byte)(uVar55 >> 0x1e) & (byte)((uint)iVar33 >> 0x18);
        uVar45 = iVar72 + 0x2204;
        uVar49 = iVar77 + 0x2204;
        uVar51 = iVar78 + 0x2204;
        uVar55 = iVar79 + 0x2204;
        iVar29 = -(uint)(uVar45 < 0x4000);
        iVar30 = -(uint)(uVar49 < 0x4000);
        iVar31 = -(uint)(uVar51 < 0x4000);
        iVar33 = -(uint)(uVar55 < 0x4000);
        uVar48 = uVar45 >> 6;
        uVar50 = uVar49 >> 6;
        uVar54 = uVar51 >> 6;
        auVar120[0] = (byte)uVar48 & (byte)iVar29 | ~-(iVar72 < -0x2204) & ~(byte)iVar29;
        auVar120[1] = (byte)(uVar48 >> 8) & (byte)((uint)iVar29 >> 8);
        auVar120[2] = (byte)(uVar48 >> 0x10) & (byte)((uint)iVar29 >> 0x10);
        auVar120[3] = (byte)(uVar45 >> 0x1e) & (byte)((uint)iVar29 >> 0x18);
        auVar120[4] = (byte)uVar50 & (byte)iVar30 | ~-(iVar77 < -0x2204) & ~(byte)iVar30;
        auVar120[5] = (byte)(uVar50 >> 8) & (byte)((uint)iVar30 >> 8);
        auVar120[6] = (byte)(uVar50 >> 0x10) & (byte)((uint)iVar30 >> 0x10);
        auVar120[7] = (byte)(uVar49 >> 0x1e) & (byte)((uint)iVar30 >> 0x18);
        auVar120[8] = (byte)uVar54 & (byte)iVar31 | ~-(iVar78 < -0x2204) & ~(byte)iVar31;
        auVar120[9] = (byte)(uVar54 >> 8) & (byte)((uint)iVar31 >> 8);
        auVar120[10] = (byte)(uVar54 >> 0x10) & (byte)((uint)iVar31 >> 0x10);
        auVar120[0xb] = (byte)(uVar51 >> 0x1e) & (byte)((uint)iVar31 >> 0x18);
        auVar120[0xc] = (byte)(uVar55 >> 6) & (byte)iVar33 | ~-(iVar79 < -0x2204) & ~(byte)iVar33;
        auVar120[0xd] = (byte)((uVar55 >> 6) >> 8) & (byte)((uint)iVar33 >> 8);
        auVar120[0xe] = (byte)((uint3)(uVar55 >> 0xe) >> 8) & (byte)((uint)iVar33 >> 0x10);
        auVar120[0xf] = (byte)(uVar55 >> 0x1e) & (byte)((uint)iVar33 >> 0x18);
        auVar5[1] = (byte)(uVar137 >> 8) & (byte)((uint)iVar28 >> 8);
        auVar5[0] = (byte)uVar137 & (byte)iVar28 | ~-(uVar115 < 0x4515) & ~(byte)iVar28;
        auVar5[2] = (byte)(uVar137 >> 0x10) & (byte)((uint)iVar28 >> 0x10);
        auVar5[3] = (byte)(uVar136 >> 0x1e) & (byte)((uint)iVar28 >> 0x18);
        auVar5[4] = (byte)uVar141 & (byte)iVar32 | ~-(uVar125 < 0x4515) & ~(byte)iVar32;
        auVar5[5] = (byte)(uVar141 >> 8) & (byte)((uint)iVar32 >> 8);
        auVar5[6] = (byte)(uVar141 >> 0x10) & (byte)((uint)iVar32 >> 0x10);
        auVar5[7] = (byte)(uVar140 >> 0x1e) & (byte)((uint)iVar32 >> 0x18);
        auVar5[8] = (byte)uVar143 & (byte)iVar36 | ~-(uVar129 < 0x4515) & ~(byte)iVar36;
        auVar5[9] = (byte)(uVar143 >> 8) & (byte)((uint)iVar36 >> 8);
        auVar5[10] = (byte)(uVar143 >> 0x10) & (byte)((uint)iVar36 >> 0x10);
        auVar5[0xb] = (byte)(uVar142 >> 0x1e) & (byte)((uint)iVar36 >> 0x18);
        auVar5[0xc] = (byte)(uVar144 >> 6) & (byte)iVar40 | ~-(uVar133 < 0x4515) & ~(byte)iVar40;
        auVar5[0xd] = (byte)((uVar144 >> 6) >> 8) & (byte)((uint)iVar40 >> 8);
        auVar5[0xe] = (byte)((uint3)(uVar144 >> 0xe) >> 8) & (byte)((uint)iVar40 >> 0x10);
        auVar5[0xf] = (byte)(uVar144 >> 0x1e) & (byte)((uint)iVar40 >> 0x18);
        auVar8._12_4_ = 0xffffffff;
        auVar8._0_12_ = auVar12;
        auVar63 = a64_TBL(ZEXT816(0),auVar52,auVar5,auVar8);
        auVar9._12_4_ = 0x3c383430;
        auVar9._0_12_ = auVar11;
        auVar75 = a64_TBL(ZEXT816(0),auVar92,auVar102,auVar120,auVar138,auVar9);
        auVar82 = NEON_ext(auVar75,auVar75,8,1);
        *puVar13 = auVar75[0];
        puVar13[1] = auVar82[0];
        puVar13[2] = auVar63[0];
        puVar13[3] = auVar75[1];
        puVar13[4] = auVar82[1];
        puVar13[5] = auVar63[1];
        puVar13[6] = auVar75[2];
        puVar13[7] = auVar82[2];
        puVar13[8] = auVar63[2];
        puVar13[9] = auVar75[3];
        puVar13[10] = auVar82[3];
        puVar13[0xb] = auVar63[3];
        puVar13[0xc] = auVar75[4];
        puVar13[0xd] = auVar82[4];
        puVar13[0xe] = auVar63[4];
        puVar13[0xf] = auVar75[5];
        puVar13[0x10] = auVar82[5];
        puVar13[0x11] = auVar63[5];
        puVar13[0x12] = auVar75[6];
        puVar13[0x13] = auVar82[6];
        puVar13[0x14] = auVar63[6];
        puVar13[0x15] = auVar75[7];
        puVar13[0x16] = auVar82[7];
        puVar13[0x17] = auVar63[7];
        puVar13 = puVar13 + 0x18;
        lVar15 = lVar15 + 8;
        puVar23 = puVar23 + 1;
        puVar25 = puVar25 + 1;
        puVar26 = puVar26 + 1;
      } while (lVar15 != 0);
      if (uVar16 == uVar14) {
        return;
      }
    }
  }
LAB_00230a74:
  lVar15 = uVar14 - uVar16;
  pbVar17 = *param_3 + uVar16;
  pbVar19 = *param_1 + uVar16;
  pbVar20 = *param_2 + uVar16;
  puVar13 = param_4 + uVar16 * 3 + 2;
  do {
    bVar3 = *pbVar20;
    bVar4 = *pbVar17;
    uVar49 = (uint)*pbVar19 * 0x4a85 >> 8;
    uVar45 = uVar49 + ((uint)bVar4 * 0x6625 >> 8);
    uVar48 = uVar45 - 0x379a;
    uVar1 = 0;
    if (0x3799 < uVar45) {
      uVar1 = 0xff;
    }
    uVar2 = (char)(uVar48 >> 6);
    if (0x3fff < uVar48) {
      uVar2 = uVar1;
    }
    puVar13[-2] = uVar2;
    iVar28 = uVar49 - (((uint)bVar3 * 0x1913 >> 8) + ((uint)bVar4 * 0x3408 >> 8));
    uVar45 = iVar28 + 0x2204;
    uVar1 = 0;
    if (-0x2205 < iVar28) {
      uVar1 = 0xff;
    }
    uVar2 = (char)(uVar45 >> 6);
    if (0x3fff < uVar45) {
      uVar2 = uVar1;
    }
    puVar13[-1] = uVar2;
    uVar49 = uVar49 + ((uint)bVar3 * 0x811a >> 8);
    uVar45 = uVar49 - 0x4515;
    uVar1 = 0;
    if (0x4514 < uVar49) {
      uVar1 = 0xff;
    }
    uVar2 = (char)(uVar45 >> 6);
    if (0x3fff < uVar45) {
      uVar2 = uVar1;
    }
    *puVar13 = uVar2;
    lVar15 = lVar15 + -1;
    pbVar17 = pbVar17 + 1;
    pbVar19 = pbVar19 + 1;
    pbVar20 = pbVar20 + 1;
    puVar13 = puVar13 + 3;
  } while (lVar15 != 0);
                    /* WARNING: Read-only address (ram,0x007edcb0) is written */
                    /* WARNING: Read-only address (ram,0x007edcc0) is written */
                    /* WARNING: Read-only address (ram,0x007eeb70) is written */
                    /* WARNING: Read-only address (ram,0x007eeb80) is written */
  return;
}



/* Entry: 0023115c; end: 00231877;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0023115c(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                 undefined1 *param_4,uint param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  byte bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  undefined1 auVar16 [12];
  undefined1 *puVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  byte *pbVar21;
  ulong uVar22;
  byte *pbVar23;
  byte *pbVar24;
  undefined1 (*pauVar25) [16];
  undefined1 (*pauVar26) [16];
  ulong *puVar27;
  undefined1 (*pauVar28) [16];
  ulong *puVar29;
  undefined8 *puVar30;
  uint uVar31;
  undefined8 uVar32;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  undefined1 auVar33 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  uint uVar54;
  uint uVar55;
  int iVar56;
  uint uVar58;
  uint uVar59;
  int iVar60;
  uint uVar61;
  uint uVar62;
  int iVar63;
  uint uVar64;
  uint uVar65;
  int iVar66;
  undefined1 auVar57 [16];
  uint uVar67;
  uint uVar69;
  uint uVar70;
  uint uVar71;
  undefined1 auVar68 [16];
  int iVar72;
  undefined8 uVar73;
  int iVar82;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  int iVar81;
  int iVar83;
  undefined1 auVar77 [16];
  undefined8 uVar74;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  int iVar84;
  int iVar90;
  undefined8 uVar85;
  int iVar91;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  int iVar92;
  undefined1 auVar89 [16];
  uint uVar93;
  uint uVar101;
  uint uVar102;
  uint uVar103;
  uint uVar104;
  undefined8 uVar98;
  uint uVar106;
  undefined1 auVar99 [16];
  uint uVar94;
  uint uVar95;
  uint uVar96;
  uint uVar97;
  uint uVar105;
  uint uVar107;
  uint uVar108;
  uint uVar109;
  uint uVar110;
  undefined1 auVar100 [16];
  uint uVar111;
  undefined8 uVar113;
  uint uVar119;
  undefined1 auVar114 [16];
  uint uVar117;
  uint uVar121;
  undefined1 auVar115 [16];
  uint uVar112;
  uint uVar118;
  uint uVar120;
  uint uVar122;
  undefined1 auVar116 [16];
  uint uVar123;
  uint uVar132;
  uint uVar133;
  uint uVar134;
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  uint uVar135;
  uint uVar136;
  uint uVar137;
  int iVar138;
  uint uVar147;
  uint uVar148;
  uint uVar149;
  uint uVar151;
  uint uVar152;
  uint uVar153;
  uint uVar155;
  uint uVar156;
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  int iVar150;
  int iVar154;
  int iVar157;
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  
  auVar14 = _UNK_007edcc0;
  if ((int)param_5 < 1) {
    _UNK_007edccc = 0xffffff07;
    return;
  }
  uVar18 = (ulong)param_5;
  if (param_5 < 8) {
    uVar20 = 0;
  }
  else {
    uVar20 = 0;
    pauVar25 = (undefined1 (*) [16])(param_4 + uVar18 * 3);
    if (((pauVar25 <= param_1 || *param_1 + uVar18 <= param_4) &&
        (*param_2 + uVar18 <= param_4 || pauVar25 <= param_2)) &&
       (*param_3 + uVar18 <= param_4 || pauVar25 <= param_3)) {
      if (param_5 < 0x10) {
        uVar22 = 0;
      }
      else {
        uVar20 = uVar18 & 0x7ffffff0;
        pauVar25 = param_1;
        pauVar26 = param_2;
        pauVar28 = param_3;
        puVar17 = param_4;
        uVar22 = uVar20;
        do {
          auVar87 = *pauVar26;
          auVar140._8_8_ = 0xffffff0fffffff0e;
          auVar140._0_8_ = 0xffffff0dffffff0c;
          auVar13._8_8_ = 0xffffff0bffffff0a;
          auVar13._0_8_ = 0xffffff09ffffff08;
          auVar77 = a64_TBL(ZEXT816(0),auVar87,auVar13);
          auVar76 = a64_TBL(ZEXT816(0),auVar87,auVar140);
          auVar125[8] = 2;
          auVar125._0_8_ = 0xffffff01ffffff00;
          auVar88[8] = 2;
          auVar88._0_8_ = 0xffffff01ffffff00;
          auVar88[9] = 0xff;
          auVar88[10] = 0xff;
          auVar88[0xb] = 0xff;
          auVar88[0xc] = 3;
          auVar88[0xd] = 0xff;
          auVar88[0xe] = 0xff;
          auVar88[0xf] = 0xff;
          auVar99 = a64_TBL(ZEXT816(0),auVar87,auVar88);
          auVar75._12_4_ = 0xffffff07;
          auVar75._0_12_ = auVar14;
          auVar87 = a64_TBL(ZEXT816(0),auVar87,auVar75);
          uVar85 = CONCAT26(auVar87._12_2_,
                            CONCAT24(auVar87._8_2_,CONCAT22(auVar87._4_2_,auVar87._0_2_)));
          uVar98 = CONCAT26(auVar99._12_2_,
                            CONCAT24(auVar99._8_2_,CONCAT22(auVar99._4_2_,auVar99._0_2_)));
          uVar113 = CONCAT26(auVar76._12_2_,
                             CONCAT24(auVar76._8_2_,CONCAT22(auVar76._4_2_,auVar76._0_2_)));
          auVar87 = *pauVar28;
          auVar99 = a64_TBL(ZEXT816(0),auVar87,auVar13);
          auVar75 = a64_TBL(ZEXT816(0),auVar87,auVar140);
          auVar125[9] = 0xff;
          auVar125[10] = 0xff;
          auVar125[0xb] = 0xff;
          auVar125[0xc] = 3;
          auVar125[0xd] = 0xff;
          auVar125[0xe] = 0xff;
          auVar125[0xf] = 0xff;
          auVar88 = a64_TBL(ZEXT816(0),auVar87,auVar125);
          auVar76._12_4_ = 0xffffff07;
          auVar76._0_12_ = auVar14;
          auVar87 = a64_TBL(ZEXT816(0),auVar87,auVar76);
          uVar73 = CONCAT26(auVar87._12_2_,
                            CONCAT24(auVar87._8_2_,CONCAT22(auVar87._4_2_,auVar87._0_2_)));
          uVar74 = CONCAT26(auVar75._12_2_,
                            CONCAT24(auVar75._8_2_,CONCAT22(auVar75._4_2_,auVar75._0_2_)));
          uVar32 = CONCAT26(auVar99._12_2_,
                            CONCAT24(auVar99._8_2_,CONCAT22(auVar99._4_2_,auVar99._0_2_)));
          auVar75 = NEON_umull((ulong)CONCAT16((*pauVar25)[0xb],
                                               (uint6)CONCAT14((*pauVar25)[10],
                                                               (uint)CONCAT12((*pauVar25)[9],
                                                                              (ushort)(byte)(*
                                                  pauVar25)[8]))),0x4a854a854a854a85,2);
          uVar35 = (uint)(byte)(*pauVar25)[0xc] * 0x4a85;
          uVar36 = (uint)(byte)(*pauVar25)[0xd] * 0x4a85;
          uVar31 = (uint)(byte)(*pauVar25)[0xe] * 0x4a85;
          uVar34 = (uint)(byte)(*pauVar25)[0xf] * 0x4a85;
          auVar99 = NEON_umull((ulong)CONCAT16((*pauVar25)[3],
                                               (uint6)CONCAT14((*pauVar25)[2],
                                                               (uint)CONCAT12((*pauVar25)[1],
                                                                              (ushort)(byte)(*
                                                  pauVar25)[0]))),0x4a854a854a854a85,2);
          uVar95 = (uint)(byte)(*pauVar25)[4] * 0x4a85;
          uVar96 = (uint)(byte)(*pauVar25)[5] * 0x4a85;
          uVar103 = (uint)(byte)(*pauVar25)[6] * 0x4a85;
          uVar104 = (uint)(byte)(*pauVar25)[7] * 0x4a85;
          auVar125 = NEON_umull(uVar85,0x1913191319131913,2);
          auVar140 = NEON_umull(uVar98,0x1913191319131913,2);
          auVar87 = NEON_umull(uVar113,0x1913191319131913,2);
          auVar76 = NEON_umull(CONCAT17(auVar77[0xd],
                                        CONCAT16(auVar77[0xc],
                                                 CONCAT15(auVar77[9],
                                                          CONCAT14(auVar77[8],
                                                                   CONCAT13(auVar77[5],
                                                                            CONCAT12(auVar77[4],
                                                                                     auVar77._0_2_))
                                                                  )))),0x1913191319131913,2);
          auVar126 = NEON_umull(uVar73,0x3408340834083408,2);
          auVar127 = NEON_umull(CONCAT17(auVar88[0xd],
                                         CONCAT16(auVar88[0xc],
                                                  CONCAT15(auVar88[9],
                                                           CONCAT14(auVar88[8],
                                                                    CONCAT13(auVar88[5],
                                                                             CONCAT12(auVar88[4],
                                                                                      auVar88._0_2_)
                                                                            ))))),0x3408340834083408
                                ,2);
          auVar128 = NEON_umull(uVar74,0x3408340834083408,2);
          auVar129 = NEON_umull(uVar32,0x3408340834083408,2);
          uVar54 = auVar75._0_4_;
          uVar55 = auVar75._4_4_;
          uVar65 = auVar75._8_4_;
          uVar67 = auVar75._12_4_;
          iVar84 = (uVar54 >> 8) - ((auVar76._0_4_ >> 8) + (auVar129._0_4_ >> 8));
          iVar90 = (uVar55 >> 8) - ((auVar76._4_4_ >> 8) + (auVar129._4_4_ >> 8));
          iVar91 = (uVar65 >> 8) - ((auVar76._8_4_ >> 8) + (auVar129._8_4_ >> 8));
          iVar92 = (uVar67 >> 8) - ((auVar76._12_4_ >> 8) + (auVar129._12_4_ >> 8));
          iVar138 = (uVar35 >> 8) - ((auVar87._0_4_ >> 8) + (auVar128._0_4_ >> 8));
          iVar150 = (uVar36 >> 8) - ((auVar87._4_4_ >> 8) + (auVar128._4_4_ >> 8));
          iVar154 = (uVar31 >> 8) - ((auVar87._8_4_ >> 8) + (auVar128._8_4_ >> 8));
          iVar157 = (uVar34 >> 8) - ((auVar87._12_4_ >> 8) + (auVar128._12_4_ >> 8));
          uVar58 = auVar99._0_4_;
          uVar71 = auVar99._4_4_;
          uVar93 = auVar99._8_4_;
          uVar94 = auVar99._12_4_;
          iVar56 = (uVar58 >> 8) - ((auVar140._0_4_ >> 8) + (auVar127._0_4_ >> 8));
          iVar60 = (uVar71 >> 8) - ((auVar140._4_4_ >> 8) + (auVar127._4_4_ >> 8));
          iVar63 = (uVar93 >> 8) - ((auVar140._8_4_ >> 8) + (auVar127._8_4_ >> 8));
          iVar66 = (uVar94 >> 8) - ((auVar140._12_4_ >> 8) + (auVar127._12_4_ >> 8));
          iVar72 = (uVar95 >> 8) - ((auVar125._0_4_ >> 8) + (auVar126._0_4_ >> 8));
          iVar81 = (uVar96 >> 8) - ((auVar125._4_4_ >> 8) + (auVar126._4_4_ >> 8));
          iVar82 = (uVar103 >> 8) - ((auVar125._8_4_ >> 8) + (auVar126._8_4_ >> 8));
          iVar83 = (uVar104 >> 8) - ((auVar125._12_4_ >> 8) + (auVar126._12_4_ >> 8));
          auVar87 = NEON_umull(CONCAT17(auVar77[0xd],
                                        CONCAT16(auVar77[0xc],
                                                 CONCAT15(auVar77[9],
                                                          CONCAT14(auVar77[8],
                                                                   CONCAT13(auVar77[5],
                                                                            CONCAT12(auVar77[4],
                                                                                     auVar77._0_2_))
                                                                  )))),0x811a811a811a811a,2);
          auVar99 = NEON_umull(uVar113,0x811a811a811a811a,2);
          auVar76 = NEON_umull(uVar98,0x811a811a811a811a,2);
          auVar125 = NEON_umull(uVar85,0x811a811a811a811a,2);
          uVar149 = (auVar87._0_4_ >> 8) + (uVar54 >> 8);
          uVar152 = (auVar87._4_4_ >> 8) + (uVar55 >> 8);
          uVar153 = (auVar87._8_4_ >> 8) + (uVar65 >> 8);
          uVar156 = (auVar87._12_4_ >> 8) + (uVar67 >> 8);
          uVar97 = (auVar99._0_4_ >> 8) + (uVar35 >> 8);
          uVar105 = (auVar99._4_4_ >> 8) + (uVar36 >> 8);
          uVar108 = (auVar99._8_4_ >> 8) + (uVar31 >> 8);
          uVar110 = (auVar99._12_4_ >> 8) + (uVar34 >> 8);
          auVar99 = NEON_umull(uVar74,0x6625662566256625,2);
          auVar87 = NEON_umull(uVar32,0x6625662566256625,2);
          auVar75 = NEON_umull(uVar73,0x6625662566256625,2);
          uVar112 = (auVar76._0_4_ >> 8) + (uVar58 >> 8);
          uVar118 = (auVar76._4_4_ >> 8) + (uVar71 >> 8);
          uVar120 = (auVar76._8_4_ >> 8) + (uVar93 >> 8);
          uVar122 = (auVar76._12_4_ >> 8) + (uVar94 >> 8);
          auVar76 = NEON_umull(CONCAT17(auVar88[0xd],
                                        CONCAT16(auVar88[0xc],
                                                 CONCAT15(auVar88[9],
                                                          CONCAT14(auVar88[8],
                                                                   CONCAT13(auVar88[5],
                                                                            CONCAT12(auVar88[4],
                                                                                     auVar88._0_2_))
                                                                  )))),0x6625662566256625,2);
          uVar135 = (uint)auVar125._1_3_ + (uVar95 >> 8);
          uVar147 = (uint)auVar125._5_3_ + (uVar96 >> 8);
          uVar151 = (uint)auVar125._9_3_ + (uVar103 >> 8);
          uVar155 = (uint)auVar125._13_3_ + (uVar104 >> 8);
          uVar59 = (auVar99._0_4_ >> 8) + (uVar35 >> 8);
          uVar61 = (auVar99._4_4_ >> 8) + (uVar36 >> 8);
          uVar62 = (auVar99._8_4_ >> 8) + (uVar31 >> 8);
          uVar64 = (auVar99._12_4_ >> 8) + (uVar34 >> 8);
          uVar31 = (auVar87._0_4_ >> 8) + (uVar54 >> 8);
          uVar34 = (auVar87._4_4_ >> 8) + (uVar55 >> 8);
          uVar54 = (auVar87._8_4_ >> 8) + (uVar65 >> 8);
          uVar55 = (auVar87._12_4_ >> 8) + (uVar67 >> 8);
          uVar65 = (auVar75._0_4_ >> 8) + (uVar95 >> 8);
          uVar67 = (auVar75._4_4_ >> 8) + (uVar96 >> 8);
          uVar69 = (auVar75._8_4_ >> 8) + (uVar103 >> 8);
          uVar70 = (auVar75._12_4_ >> 8) + (uVar104 >> 8);
          uVar134 = (auVar76._0_4_ >> 8) + (uVar58 >> 8);
          uVar136 = (auVar76._4_4_ >> 8) + (uVar71 >> 8);
          uVar137 = (auVar76._8_4_ >> 8) + (uVar93 >> 8);
          uVar148 = (auVar76._12_4_ >> 8) + (uVar94 >> 8);
          uVar71 = uVar31 - 0x379a;
          uVar94 = uVar34 - 0x379a;
          uVar102 = uVar54 - 0x379a;
          uVar107 = uVar55 - 0x379a;
          uVar111 = uVar59 - 0x379a;
          uVar119 = uVar61 - 0x379a;
          uVar123 = uVar62 - 0x379a;
          uVar133 = uVar64 - 0x379a;
          iVar42 = -(uint)(uVar111 < 0x4000);
          iVar43 = -(uint)(uVar119 < 0x4000);
          iVar44 = -(uint)(uVar123 < 0x4000);
          iVar45 = -(uint)(uVar133 < 0x4000);
          iVar46 = -(uint)(uVar71 < 0x4000);
          iVar47 = -(uint)(uVar94 < 0x4000);
          iVar48 = -(uint)(uVar102 < 0x4000);
          iVar49 = -(uint)(uVar107 < 0x4000);
          uVar93 = uVar71 >> 6;
          uVar101 = uVar94 >> 6;
          uVar106 = uVar102 >> 6;
          uVar109 = uVar107 >> 6;
          uVar117 = uVar111 >> 6;
          uVar121 = uVar119 >> 6;
          uVar132 = uVar123 >> 6;
          uVar95 = uVar65 - 0x379a;
          uVar103 = uVar67 - 0x379a;
          uVar35 = uVar69 - 0x379a;
          uVar58 = uVar70 - 0x379a;
          iVar50 = -(uint)(uVar95 < 0x4000);
          iVar51 = -(uint)(uVar103 < 0x4000);
          iVar52 = -(uint)(uVar35 < 0x4000);
          iVar53 = -(uint)(uVar58 < 0x4000);
          uVar96 = uVar95 >> 6;
          uVar104 = uVar103 >> 6;
          uVar36 = uVar35 >> 6;
          auVar68[0] = (byte)uVar96 & (byte)iVar50 | ~-(uVar65 < 0x379a) & ~(byte)iVar50;
          auVar68[1] = (byte)(uVar96 >> 8) & (byte)((uint)iVar50 >> 8);
          auVar68[2] = (byte)(uVar96 >> 0x10) & (byte)((uint)iVar50 >> 0x10);
          auVar68[3] = (byte)(uVar95 >> 0x1e) & (byte)((uint)iVar50 >> 0x18);
          auVar68[4] = (byte)uVar104 & (byte)iVar51 | ~-(uVar67 < 0x379a) & ~(byte)iVar51;
          auVar68[5] = (byte)(uVar104 >> 8) & (byte)((uint)iVar51 >> 8);
          auVar68[6] = (byte)(uVar104 >> 0x10) & (byte)((uint)iVar51 >> 0x10);
          auVar68[7] = (byte)(uVar103 >> 0x1e) & (byte)((uint)iVar51 >> 0x18);
          auVar68[8] = (byte)uVar36 & (byte)iVar52 | ~-(uVar69 < 0x379a) & ~(byte)iVar52;
          auVar68[9] = (byte)(uVar36 >> 8) & (byte)((uint)iVar52 >> 8);
          auVar68[10] = (byte)(uVar36 >> 0x10) & (byte)((uint)iVar52 >> 0x10);
          auVar68[0xb] = (byte)(uVar35 >> 0x1e) & (byte)((uint)iVar52 >> 0x18);
          auVar68[0xc] = (byte)(uVar58 >> 6) & (byte)iVar53 | ~-(uVar70 < 0x379a) & ~(byte)iVar53;
          auVar68[0xd] = (byte)((uVar58 >> 6) >> 8) & (byte)((uint)iVar53 >> 8);
          auVar68[0xe] = (byte)((uint3)(uVar58 >> 0xe) >> 8) & (byte)((uint)iVar53 >> 0x10);
          auVar68[0xf] = (byte)(uVar58 >> 0x1e) & (byte)((uint)iVar53 >> 0x18);
          uVar95 = uVar134 - 0x379a;
          uVar103 = uVar136 - 0x379a;
          uVar35 = uVar137 - 0x379a;
          uVar58 = uVar148 - 0x379a;
          iVar50 = -(uint)(uVar95 < 0x4000);
          iVar51 = -(uint)(uVar103 < 0x4000);
          iVar52 = -(uint)(uVar35 < 0x4000);
          iVar53 = -(uint)(uVar58 < 0x4000);
          uVar96 = uVar95 >> 6;
          uVar104 = uVar103 >> 6;
          uVar36 = uVar35 >> 6;
          auVar57[0] = (byte)uVar96 & (byte)iVar50 | ~-(uVar134 < 0x379a) & ~(byte)iVar50;
          auVar57[1] = (byte)(uVar96 >> 8) & (byte)((uint)iVar50 >> 8);
          auVar57[2] = (byte)(uVar96 >> 0x10) & (byte)((uint)iVar50 >> 0x10);
          auVar57[3] = (byte)(uVar95 >> 0x1e) & (byte)((uint)iVar50 >> 0x18);
          auVar57[4] = (byte)uVar104 & (byte)iVar51 | ~-(uVar136 < 0x379a) & ~(byte)iVar51;
          auVar57[5] = (byte)(uVar104 >> 8) & (byte)((uint)iVar51 >> 8);
          auVar57[6] = (byte)(uVar104 >> 0x10) & (byte)((uint)iVar51 >> 0x10);
          auVar57[7] = (byte)(uVar103 >> 0x1e) & (byte)((uint)iVar51 >> 0x18);
          auVar57[8] = (byte)uVar36 & (byte)iVar52 | ~-(uVar137 < 0x379a) & ~(byte)iVar52;
          auVar57[9] = (byte)(uVar36 >> 8) & (byte)((uint)iVar52 >> 8);
          auVar57[10] = (byte)(uVar36 >> 0x10) & (byte)((uint)iVar52 >> 0x10);
          auVar57[0xb] = (byte)(uVar35 >> 0x1e) & (byte)((uint)iVar52 >> 0x18);
          auVar57[0xc] = (byte)(uVar58 >> 6) & (byte)iVar53 | ~-(uVar148 < 0x379a) & ~(byte)iVar53;
          auVar57[0xd] = (byte)((uVar58 >> 6) >> 8) & (byte)((uint)iVar53 >> 8);
          auVar57[0xe] = (byte)((uint3)(uVar58 >> 0xe) >> 8) & (byte)((uint)iVar53 >> 0x10);
          auVar57[0xf] = (byte)(uVar58 >> 0x1e) & (byte)((uint)iVar53 >> 0x18);
          uVar95 = iVar72 + 0x2204;
          uVar96 = iVar81 + 0x2204;
          uVar103 = iVar82 + 0x2204;
          uVar104 = iVar83 + 0x2204;
          iVar50 = -(uint)(iVar81 < -0x2204);
          iVar51 = -(uint)(iVar82 < -0x2204);
          iVar52 = -(uint)(iVar83 < -0x2204);
          auVar39._0_4_ = -(uint)(uVar95 < 0x4000);
          auVar39._4_4_ = -(uint)(uVar96 < 0x4000);
          auVar39._8_4_ = -(uint)(uVar103 < 0x4000);
          auVar39._12_4_ = -(uint)(uVar104 < 0x4000);
          auVar33._0_4_ = uVar95 >> 6;
          auVar33._4_4_ = uVar96 >> 6;
          auVar33._8_4_ = uVar103 >> 6;
          auVar33._12_4_ = uVar104 >> 6;
          auVar37[0] = ~-(iVar72 < -0x2204);
          auVar37._1_3_ = 0;
          auVar37[4] = ~(byte)iVar50;
          auVar37._5_2_ = 0;
          auVar37[7] = ~(byte)((uint)iVar50 >> 0x18);
          auVar37[8] = ~(byte)iVar51;
          auVar37[9] = ~(byte)((uint)iVar51 >> 8);
          auVar37[10] = ~(byte)((uint)iVar51 >> 0x10);
          auVar37[0xb] = ~(byte)((uint)iVar51 >> 0x18);
          auVar37[0xc] = ~(byte)iVar52;
          auVar37[0xd] = ~(byte)((uint)iVar52 >> 8);
          auVar37[0xe] = ~(byte)((uint)iVar52 >> 0x10);
          auVar37[0xf] = ~(byte)((uint)iVar52 >> 0x18);
          auVar33 = auVar33 ^ (auVar33 ^ auVar37) & ~auVar39;
          uVar95 = iVar56 + 0x2204;
          uVar96 = iVar60 + 0x2204;
          uVar103 = iVar63 + 0x2204;
          uVar104 = iVar66 + 0x2204;
          iVar50 = -(uint)(iVar60 < -0x2204);
          iVar51 = -(uint)(iVar63 < -0x2204);
          iVar52 = -(uint)(iVar66 < -0x2204);
          auVar78._0_4_ = -(uint)(uVar95 < 0x4000);
          auVar78._4_4_ = -(uint)(uVar96 < 0x4000);
          auVar78._8_4_ = -(uint)(uVar103 < 0x4000);
          auVar78._12_4_ = -(uint)(uVar104 < 0x4000);
          auVar38._0_4_ = uVar95 >> 6;
          auVar38._4_4_ = uVar96 >> 6;
          auVar38._8_4_ = uVar103 >> 6;
          auVar38._12_4_ = uVar104 >> 6;
          auVar40[0] = ~-(iVar56 < -0x2204);
          auVar40._1_3_ = 0;
          auVar40[4] = ~(byte)iVar50;
          auVar40._5_2_ = 0;
          auVar40[7] = ~(byte)((uint)iVar50 >> 0x18);
          auVar40[8] = ~(byte)iVar51;
          auVar40[9] = ~(byte)((uint)iVar51 >> 8);
          auVar40[10] = ~(byte)((uint)iVar51 >> 0x10);
          auVar40[0xb] = ~(byte)((uint)iVar51 >> 0x18);
          auVar40[0xc] = ~(byte)iVar52;
          auVar40[0xd] = ~(byte)((uint)iVar52 >> 8);
          auVar40[0xe] = ~(byte)((uint)iVar52 >> 0x10);
          auVar40[0xf] = ~(byte)((uint)iVar52 >> 0x18);
          auVar38 = auVar38 ^ (auVar38 ^ auVar40) & ~auVar78;
          uVar95 = iVar138 + 0x2204;
          uVar96 = iVar150 + 0x2204;
          uVar103 = iVar154 + 0x2204;
          uVar104 = iVar157 + 0x2204;
          iVar50 = -(uint)(iVar150 < -0x2204);
          iVar51 = -(uint)(iVar154 < -0x2204);
          iVar52 = -(uint)(iVar157 < -0x2204);
          auVar141._0_4_ = -(uint)(uVar95 < 0x4000);
          auVar141._4_4_ = -(uint)(uVar96 < 0x4000);
          auVar141._8_4_ = -(uint)(uVar103 < 0x4000);
          auVar141._12_4_ = -(uint)(uVar104 < 0x4000);
          auVar41._0_4_ = uVar95 >> 6;
          auVar41._4_4_ = uVar96 >> 6;
          auVar41._8_4_ = uVar103 >> 6;
          auVar41._12_4_ = uVar104 >> 6;
          auVar79[0] = ~-(iVar138 < -0x2204);
          auVar79._1_3_ = 0;
          auVar79[4] = ~(byte)iVar50;
          auVar79._5_2_ = 0;
          auVar79[7] = ~(byte)((uint)iVar50 >> 0x18);
          auVar79[8] = ~(byte)iVar51;
          auVar79[9] = ~(byte)((uint)iVar51 >> 8);
          auVar79[10] = ~(byte)((uint)iVar51 >> 0x10);
          auVar79[0xb] = ~(byte)((uint)iVar51 >> 0x18);
          auVar79[0xc] = ~(byte)iVar52;
          auVar79[0xd] = ~(byte)((uint)iVar52 >> 8);
          auVar79[0xe] = ~(byte)((uint)iVar52 >> 0x10);
          auVar79[0xf] = ~(byte)((uint)iVar52 >> 0x18);
          auVar41 = auVar41 ^ (auVar41 ^ auVar79) & ~auVar141;
          uVar95 = iVar84 + 0x2204;
          uVar96 = iVar90 + 0x2204;
          uVar103 = iVar91 + 0x2204;
          uVar104 = iVar92 + 0x2204;
          iVar50 = -(uint)(iVar90 < -0x2204);
          iVar51 = -(uint)(iVar91 < -0x2204);
          iVar52 = -(uint)(iVar92 < -0x2204);
          auVar142._0_4_ = -(uint)(uVar95 < 0x4000);
          auVar142._4_4_ = -(uint)(uVar96 < 0x4000);
          auVar142._8_4_ = -(uint)(uVar103 < 0x4000);
          auVar142._12_4_ = -(uint)(uVar104 < 0x4000);
          auVar80._0_4_ = uVar95 >> 6;
          auVar80._4_4_ = uVar96 >> 6;
          auVar80._8_4_ = uVar103 >> 6;
          auVar80._12_4_ = uVar104 >> 6;
          auVar130[0] = ~-(iVar84 < -0x2204);
          auVar130._1_3_ = 0;
          auVar130[4] = ~(byte)iVar50;
          auVar130._5_2_ = 0;
          auVar130[7] = ~(byte)((uint)iVar50 >> 0x18);
          auVar130[8] = ~(byte)iVar51;
          auVar130[9] = ~(byte)((uint)iVar51 >> 8);
          auVar130[10] = ~(byte)((uint)iVar51 >> 0x10);
          auVar130[0xb] = ~(byte)((uint)iVar51 >> 0x18);
          auVar130[0xc] = ~(byte)iVar52;
          auVar130[0xd] = ~(byte)((uint)iVar52 >> 8);
          auVar130[0xe] = ~(byte)((uint)iVar52 >> 0x10);
          auVar130[0xf] = ~(byte)((uint)iVar52 >> 0x18);
          auVar80 = auVar80 ^ (auVar80 ^ auVar130) & ~auVar142;
          uVar95 = uVar135 - 0x4515;
          uVar96 = uVar147 - 0x4515;
          uVar103 = uVar151 - 0x4515;
          uVar104 = uVar155 - 0x4515;
          iVar50 = -(uint)(uVar147 < 0x4515);
          iVar51 = -(uint)(uVar151 < 0x4515);
          iVar52 = -(uint)(uVar155 < 0x4515);
          auVar143._0_4_ = -(uint)(uVar95 < 0x4000);
          auVar143._4_4_ = -(uint)(uVar96 < 0x4000);
          auVar143._8_4_ = -(uint)(uVar103 < 0x4000);
          auVar143._12_4_ = -(uint)(uVar104 < 0x4000);
          auVar131._0_4_ = uVar95 >> 6;
          auVar131._4_4_ = uVar96 >> 6;
          auVar131._8_4_ = uVar103 >> 6;
          auVar131._12_4_ = uVar104 >> 6;
          auVar77._1_3_ = 0;
          auVar77[0] = ~-(uVar135 < 0x4515);
          auVar77[4] = ~(byte)iVar50;
          auVar77._5_2_ = 0;
          auVar77[7] = ~(byte)((uint)iVar50 >> 0x18);
          auVar77[8] = ~(byte)iVar51;
          auVar77[9] = ~(byte)((uint)iVar51 >> 8);
          auVar77[10] = ~(byte)((uint)iVar51 >> 0x10);
          auVar77[0xb] = ~(byte)((uint)iVar51 >> 0x18);
          auVar77[0xc] = ~(byte)iVar52;
          auVar77[0xd] = ~(byte)((uint)iVar52 >> 8);
          auVar77[0xe] = ~(byte)((uint)iVar52 >> 0x10);
          auVar77[0xf] = ~(byte)((uint)iVar52 >> 0x18);
          auVar131 = auVar131 ^ (auVar131 ^ auVar77) & ~auVar143;
          uVar95 = uVar112 - 0x4515;
          uVar96 = uVar118 - 0x4515;
          uVar103 = uVar120 - 0x4515;
          uVar35 = uVar122 - 0x4515;
          iVar50 = -(uint)(uVar118 < 0x4515);
          iVar51 = -(uint)(uVar120 < 0x4515);
          iVar52 = -(uint)(uVar122 < 0x4515);
          auVar144._0_4_ = -(uint)(uVar95 < 0x4000);
          auVar144._4_4_ = -(uint)(uVar96 < 0x4000);
          auVar144._8_4_ = -(uint)(uVar103 < 0x4000);
          auVar144._12_4_ = -(uint)(uVar35 < 0x4000);
          uVar104 = uVar103 >> 6;
          uVar36 = uVar35 >> 6;
          auVar116[0] = ~-(uVar112 < 0x4515);
          auVar116._1_3_ = 0;
          auVar116[4] = ~(byte)iVar50;
          auVar116._5_2_ = 0;
          auVar116[7] = ~(byte)((uint)iVar50 >> 0x18);
          auVar116[8] = ~(byte)iVar51;
          auVar116[9] = ~(byte)((uint)iVar51 >> 8);
          auVar116[10] = ~(byte)((uint)iVar51 >> 0x10);
          auVar116[0xb] = ~(byte)((uint)iVar51 >> 0x18);
          auVar116[0xc] = ~(byte)iVar52;
          auVar116[0xd] = ~(byte)((uint)iVar52 >> 8);
          auVar116[0xe] = ~(byte)((uint)iVar52 >> 0x10);
          auVar116[0xf] = ~(byte)((uint)iVar52 >> 0x18);
          auVar126._5_3_ = 0;
          auVar126._0_5_ = CONCAT14((char)(uVar96 >> 6),uVar95 >> 6) & 0xff000000ff;
          auVar126[8] = (char)uVar104;
          auVar126[9] = (char)(uVar104 >> 8);
          auVar126[10] = (char)(uVar104 >> 0x10);
          auVar126[0xb] = (byte)(uVar103 >> 0x1e);
          auVar126[0xc] = (char)uVar36;
          auVar126[0xd] = (char)(uVar36 >> 8);
          auVar126[0xe] = (char)(uVar36 >> 0x10);
          auVar126[0xf] = (byte)(uVar35 >> 0x1e);
          auVar116 = auVar116 ^ (auVar116 ^ auVar126) & auVar144;
          uVar95 = uVar97 - 0x4515;
          uVar96 = uVar105 - 0x4515;
          uVar103 = uVar108 - 0x4515;
          uVar35 = uVar110 - 0x4515;
          iVar50 = -(uint)(uVar105 < 0x4515);
          iVar51 = -(uint)(uVar108 < 0x4515);
          iVar52 = -(uint)(uVar110 < 0x4515);
          auVar145._0_4_ = -(uint)(uVar95 < 0x4000);
          auVar145._4_4_ = -(uint)(uVar96 < 0x4000);
          auVar145._8_4_ = -(uint)(uVar103 < 0x4000);
          auVar145._12_4_ = -(uint)(uVar35 < 0x4000);
          uVar104 = uVar103 >> 6;
          uVar36 = uVar35 >> 6;
          auVar100[0] = ~-(uVar97 < 0x4515);
          auVar100._1_3_ = 0;
          auVar100[4] = ~(byte)iVar50;
          auVar100._5_2_ = 0;
          auVar100[7] = ~(byte)((uint)iVar50 >> 0x18);
          auVar100[8] = ~(byte)iVar51;
          auVar100[9] = ~(byte)((uint)iVar51 >> 8);
          auVar100[10] = ~(byte)((uint)iVar51 >> 0x10);
          auVar100[0xb] = ~(byte)((uint)iVar51 >> 0x18);
          auVar100[0xc] = ~(byte)iVar52;
          auVar100[0xd] = ~(byte)((uint)iVar52 >> 8);
          auVar100[0xe] = ~(byte)((uint)iVar52 >> 0x10);
          auVar100[0xf] = ~(byte)((uint)iVar52 >> 0x18);
          auVar127._6_2_ = 0;
          auVar127._0_6_ = (uint6)CONCAT14((char)(uVar96 >> 6),uVar95 >> 6) & 0xffff0000ffff;
          auVar127[8] = (char)uVar104;
          auVar127[9] = (char)(uVar104 >> 8);
          auVar127[10] = (char)(uVar104 >> 0x10);
          auVar127[0xb] = (byte)(uVar103 >> 0x1e);
          auVar127[0xc] = (char)uVar36;
          auVar127[0xd] = (char)(uVar36 >> 8);
          auVar127[0xe] = (char)(uVar36 >> 0x10);
          auVar127[0xf] = (byte)(uVar35 >> 0x1e);
          auVar100 = auVar100 ^ (auVar100 ^ auVar127) & auVar145;
          uVar95 = uVar149 - 0x4515;
          uVar96 = uVar152 - 0x4515;
          uVar103 = uVar153 - 0x4515;
          uVar35 = uVar156 - 0x4515;
          iVar50 = -(uint)(uVar152 < 0x4515);
          iVar51 = -(uint)(uVar153 < 0x4515);
          iVar52 = -(uint)(uVar156 < 0x4515);
          auVar146._0_4_ = -(uint)(uVar95 < 0x4000);
          auVar146._4_4_ = -(uint)(uVar96 < 0x4000);
          auVar146._8_4_ = -(uint)(uVar103 < 0x4000);
          auVar146._12_4_ = -(uint)(uVar35 < 0x4000);
          uVar104 = uVar103 >> 6;
          uVar36 = uVar35 >> 6;
          auVar89[0] = ~-(uVar149 < 0x4515);
          auVar89._1_3_ = 0;
          auVar89[4] = ~(byte)iVar50;
          auVar89._5_2_ = 0;
          auVar89[7] = ~(byte)((uint)iVar50 >> 0x18);
          auVar89[8] = ~(byte)iVar51;
          auVar89[9] = ~(byte)((uint)iVar51 >> 8);
          auVar89[10] = ~(byte)((uint)iVar51 >> 0x10);
          auVar89[0xb] = ~(byte)((uint)iVar51 >> 0x18);
          auVar89[0xc] = ~(byte)iVar52;
          auVar89[0xd] = ~(byte)((uint)iVar52 >> 8);
          auVar89[0xe] = ~(byte)((uint)iVar52 >> 0x10);
          auVar89[0xf] = ~(byte)((uint)iVar52 >> 0x18);
          auVar128._5_3_ = 0;
          auVar128._0_5_ = CONCAT14((char)(uVar96 >> 6),uVar95 >> 6) & 0xff000000ff;
          auVar128[8] = (char)uVar104;
          auVar128[9] = (char)(uVar104 >> 8);
          auVar128[10] = (char)(uVar104 >> 0x10);
          auVar128[0xb] = (byte)(uVar103 >> 0x1e);
          auVar128[0xc] = (char)uVar36;
          auVar128[0xd] = (char)(uVar36 >> 8);
          auVar128[0xe] = (char)(uVar36 >> 0x10);
          auVar128[0xf] = (byte)(uVar35 >> 0x1e);
          auVar89 = auVar89 ^ (auVar89 ^ auVar128) & auVar146;
          auVar129._8_8_ = 0x3c3834302c282420;
          auVar129._0_8_ = 0x1c1814100c080400;
          auVar87[1] = (byte)(uVar93 >> 8) & (byte)((uint)iVar46 >> 8);
          auVar87[0] = (byte)uVar93 & (byte)iVar46 | ~-(uVar31 < 0x379a) & ~(byte)iVar46;
          auVar87[2] = (byte)(uVar93 >> 0x10) & (byte)((uint)iVar46 >> 0x10);
          auVar87[3] = (byte)(uVar71 >> 0x1e) & (byte)((uint)iVar46 >> 0x18);
          auVar87[4] = (byte)uVar101 & (byte)iVar47 | ~-(uVar34 < 0x379a) & ~(byte)iVar47;
          auVar87[5] = (byte)(uVar101 >> 8) & (byte)((uint)iVar47 >> 8);
          auVar87[6] = (byte)(uVar101 >> 0x10) & (byte)((uint)iVar47 >> 0x10);
          auVar87[7] = (byte)(uVar94 >> 0x1e) & (byte)((uint)iVar47 >> 0x18);
          auVar87[8] = (byte)uVar106 & (byte)iVar48 | ~-(uVar54 < 0x379a) & ~(byte)iVar48;
          auVar87[9] = (byte)(uVar106 >> 8) & (byte)((uint)iVar48 >> 8);
          auVar87[10] = (byte)(uVar106 >> 0x10) & (byte)((uint)iVar48 >> 0x10);
          auVar87[0xb] = (byte)(uVar102 >> 0x1e) & (byte)((uint)iVar48 >> 0x18);
          auVar87[0xc] = (byte)uVar109 & (byte)iVar49 | ~-(uVar55 < 0x379a) & ~(byte)iVar49;
          auVar87[0xd] = (byte)(uVar109 >> 8) & (byte)((uint)iVar49 >> 8);
          auVar87[0xe] = (byte)(uVar109 >> 0x10) & (byte)((uint)iVar49 >> 0x10);
          auVar87[0xf] = (byte)(uVar107 >> 0x1e) & (byte)((uint)iVar49 >> 0x18);
          auVar99[1] = (byte)(uVar117 >> 8) & (byte)((uint)iVar42 >> 8);
          auVar99[0] = (byte)uVar117 & (byte)iVar42 | ~-(uVar59 < 0x379a) & ~(byte)iVar42;
          auVar99[2] = (byte)(uVar117 >> 0x10) & (byte)((uint)iVar42 >> 0x10);
          auVar99[3] = (byte)(uVar111 >> 0x1e) & (byte)((uint)iVar42 >> 0x18);
          auVar99[4] = (byte)uVar121 & (byte)iVar43 | ~-(uVar61 < 0x379a) & ~(byte)iVar43;
          auVar99[5] = (byte)(uVar121 >> 8) & (byte)((uint)iVar43 >> 8);
          auVar99[6] = (byte)(uVar121 >> 0x10) & (byte)((uint)iVar43 >> 0x10);
          auVar99[7] = (byte)(uVar119 >> 0x1e) & (byte)((uint)iVar43 >> 0x18);
          auVar99[8] = (byte)uVar132 & (byte)iVar44 | ~-(uVar62 < 0x379a) & ~(byte)iVar44;
          auVar99[9] = (byte)(uVar132 >> 8) & (byte)((uint)iVar44 >> 8);
          auVar99[10] = (byte)(uVar132 >> 0x10) & (byte)((uint)iVar44 >> 0x10);
          auVar99[0xb] = (byte)(uVar123 >> 0x1e) & (byte)((uint)iVar44 >> 0x18);
          auVar99[0xc] = (byte)(uVar133 >> 6) & (byte)iVar45 | ~-(uVar64 < 0x379a) & ~(byte)iVar45;
          auVar99[0xd] = (byte)((uVar133 >> 6) >> 8) & (byte)((uint)iVar45 >> 8);
          auVar99[0xe] = (byte)((uint3)(uVar133 >> 0xe) >> 8) & (byte)((uint)iVar45 >> 0x10);
          auVar99[0xf] = (byte)(uVar133 >> 0x1e) & (byte)((uint)iVar45 >> 0x18);
          auVar87 = a64_TBL(ZEXT816(0),auVar57,auVar68,auVar87,auVar99,auVar129);
          *puVar17 = auVar116[0];
          puVar17[1] = auVar38[0];
          puVar17[2] = auVar87[0];
          puVar17[3] = auVar116[4];
          puVar17[4] = auVar38[4];
          puVar17[5] = auVar87[1];
          puVar17[6] = auVar116[8];
          puVar17[7] = auVar38[8];
          puVar17[8] = auVar87[2];
          puVar17[9] = auVar116[0xc];
          puVar17[10] = auVar38[0xc];
          puVar17[0xb] = auVar87[3];
          puVar17[0xc] = auVar131[0];
          puVar17[0xd] = auVar33[0];
          puVar17[0xe] = auVar87[4];
          puVar17[0xf] = auVar131[4];
          puVar17[0x10] = auVar33[4];
          puVar17[0x11] = auVar87[5];
          puVar17[0x12] = auVar131[8];
          puVar17[0x13] = auVar33[8];
          puVar17[0x14] = auVar87[6];
          puVar17[0x15] = auVar131[0xc];
          puVar17[0x16] = auVar33[0xc];
          puVar17[0x17] = auVar87[7];
          puVar17[0x18] = auVar89[0];
          puVar17[0x19] = auVar80[0];
          puVar17[0x1a] = auVar87[8];
          puVar17[0x1b] = auVar89[4];
          puVar17[0x1c] = auVar80[4];
          puVar17[0x1d] = auVar87[9];
          puVar17[0x1e] = auVar89[8];
          puVar17[0x1f] = auVar80[8];
          puVar17[0x20] = auVar87[10];
          puVar17[0x21] = auVar89[0xc];
          puVar17[0x22] = auVar80[0xc];
          puVar17[0x23] = auVar87[0xb];
          puVar17[0x24] = auVar100[0];
          puVar17[0x25] = auVar41[0];
          puVar17[0x26] = auVar87[0xc];
          puVar17[0x27] = auVar100[4];
          puVar17[0x28] = auVar41[4];
          puVar17[0x29] = auVar87[0xd];
          puVar17[0x2a] = auVar100[8];
          puVar17[0x2b] = auVar41[8];
          puVar17[0x2c] = auVar87[0xe];
          puVar17[0x2d] = auVar100[0xc];
          puVar17[0x2e] = auVar41[0xc];
          puVar17[0x2f] = auVar87[0xf];
          puVar17 = puVar17 + 0x30;
          uVar22 = uVar22 - 0x10;
          pauVar25 = pauVar25 + 1;
          pauVar26 = pauVar26 + 1;
          pauVar28 = pauVar28 + 1;
        } while (uVar22 != 0);
        if (uVar20 == uVar18) {
          return;
        }
        uVar22 = uVar20;
        if ((param_5 >> 3 & 1) == 0) goto LAB_00231194;
      }
      auVar16 = _UNK_007eeb80;
      auVar15 = _UNK_007eeb70;
      auVar14 = _UNK_007edcb0;
      uVar20 = uVar18 & 0x7ffffff8;
      lVar19 = uVar22 - uVar20;
      puVar17 = param_4 + uVar22 * 3;
      auVar12._12_4_ = _UNK_007edccc;
      auVar12._0_12_ = _UNK_007edcc0;
      puVar27 = (ulong *)(*param_3 + uVar22);
      puVar29 = (ulong *)(*param_2 + uVar22);
      puVar30 = (undefined8 *)(*param_1 + uVar22);
      do {
        uVar73 = *puVar30;
        auVar86._0_8_ = *puVar29;
        auVar86._8_8_ = 0;
        auVar99 = a64_TBL(ZEXT816(0),auVar86,auVar12);
        auVar7._12_4_ = 0xffffff03;
        auVar7._0_12_ = auVar14;
        auVar87 = a64_TBL(ZEXT816(0),auVar86,auVar7);
        uVar32 = CONCAT26(auVar87._12_2_,
                          CONCAT24(auVar87._8_2_,CONCAT22(auVar87._4_2_,auVar87._0_2_)));
        uVar74 = CONCAT26(auVar99._12_2_,
                          CONCAT24(auVar99._8_2_,CONCAT22(auVar99._4_2_,auVar99._0_2_)));
        auVar114._0_8_ = *puVar27;
        auVar114._8_8_ = 0;
        auVar99 = a64_TBL(ZEXT816(0),auVar114,auVar12);
        auVar8._12_4_ = 0xffffff03;
        auVar8._0_12_ = auVar14;
        auVar87 = a64_TBL(ZEXT816(0),auVar114,auVar8);
        uVar85 = CONCAT26(auVar87._12_2_,
                          CONCAT24(auVar87._8_2_,CONCAT22(auVar87._4_2_,auVar87._0_2_)));
        uVar98 = CONCAT26(auVar99._12_2_,
                          CONCAT24(auVar99._8_2_,CONCAT22(auVar99._4_2_,auVar99._0_2_)));
        uVar35 = (uint)(byte)((ulong)uVar73 >> 0x20) * 0x4a85;
        uVar36 = (uint)(byte)((ulong)uVar73 >> 0x28) * 0x4a85;
        uVar31 = (uint)(byte)((ulong)uVar73 >> 0x30) * 0x4a85;
        uVar34 = (uint)(byte)((ulong)uVar73 >> 0x38) * 0x4a85;
        auVar87 = NEON_umull((ulong)CONCAT16((char)((ulong)uVar73 >> 0x18),
                                             (uint6)CONCAT14((char)((ulong)uVar73 >> 0x10),
                                                             (uint)CONCAT12((char)((ulong)uVar73 >>
                                                                                  8),(ushort)(byte)
                                                  uVar73))),0x4a854a854a854a85,2);
        uVar135 = auVar87._0_4_;
        uVar147 = auVar87._4_4_;
        uVar151 = auVar87._8_4_;
        uVar155 = auVar87._12_4_;
        auVar99 = NEON_umull(uVar74,0x811a811a811a811a,2);
        auVar87 = NEON_umull(uVar32,0x811a811a811a811a,2);
        auVar75 = NEON_umull(uVar32,0x1913191319131913,2);
        auVar88 = NEON_umull(uVar74,0x1913191319131913,2);
        uVar95 = (uint)auVar99._1_3_ + (uVar35 >> 8);
        uVar96 = (uint)auVar99._5_3_ + (uVar36 >> 8);
        uVar103 = (uint)auVar99._9_3_ + (uVar31 >> 8);
        uVar104 = (uint)auVar99._13_3_ + (uVar34 >> 8);
        auVar99 = NEON_umull(uVar85,0x3408340834083408,2);
        auVar76 = NEON_umull(uVar98,0x3408340834083408,2);
        uVar67 = (auVar87._0_4_ >> 8) + (uVar135 >> 8);
        uVar69 = (auVar87._4_4_ >> 8) + (uVar147 >> 8);
        uVar70 = (auVar87._8_4_ >> 8) + (uVar151 >> 8);
        uVar71 = (auVar87._12_4_ >> 8) + (uVar155 >> 8);
        uVar93 = uVar67 - 0x4515;
        uVar101 = uVar69 - 0x4515;
        uVar106 = uVar70 - 0x4515;
        uVar109 = uVar71 - 0x4515;
        iVar72 = (uVar35 >> 8) - ((auVar88._0_4_ >> 8) + (auVar76._0_4_ >> 8));
        iVar81 = (uVar36 >> 8) - ((auVar88._4_4_ >> 8) + (auVar76._4_4_ >> 8));
        iVar82 = (uVar31 >> 8) - ((auVar88._8_4_ >> 8) + (auVar76._8_4_ >> 8));
        iVar83 = (uVar34 >> 8) - ((auVar88._12_4_ >> 8) + (auVar76._12_4_ >> 8));
        uVar54 = uVar95 - 0x4515;
        uVar58 = uVar96 - 0x4515;
        uVar61 = uVar103 - 0x4515;
        uVar64 = uVar104 - 0x4515;
        auVar87 = NEON_umull(uVar98,0x6625662566256625,2);
        auVar76 = NEON_umull(uVar85,0x6625662566256625,2);
        uVar123 = (auVar87._0_4_ >> 8) + (uVar35 >> 8);
        uVar132 = (auVar87._4_4_ >> 8) + (uVar36 >> 8);
        uVar133 = (auVar87._8_4_ >> 8) + (uVar31 >> 8);
        uVar134 = (auVar87._12_4_ >> 8) + (uVar34 >> 8);
        iVar84 = (uVar135 >> 8) - ((uint)auVar75._1_3_ + (auVar99._0_4_ >> 8));
        iVar90 = (uVar147 >> 8) - ((uint)auVar75._5_3_ + (auVar99._4_4_ >> 8));
        iVar91 = (uVar151 >> 8) - ((uint)auVar75._9_3_ + (auVar99._8_4_ >> 8));
        iVar92 = (uVar155 >> 8) - ((uint)auVar75._13_3_ + (auVar99._12_4_ >> 8));
        uVar111 = (auVar76._0_4_ >> 8) + (uVar135 >> 8);
        uVar117 = (auVar76._4_4_ >> 8) + (uVar147 >> 8);
        uVar119 = (auVar76._8_4_ >> 8) + (uVar151 >> 8);
        uVar121 = (auVar76._12_4_ >> 8) + (uVar155 >> 8);
        uVar35 = uVar111 - 0x379a;
        uVar31 = uVar117 - 0x379a;
        uVar135 = uVar119 - 0x379a;
        uVar151 = uVar121 - 0x379a;
        uVar136 = uVar123 - 0x379a;
        uVar148 = uVar132 - 0x379a;
        uVar152 = uVar133 - 0x379a;
        uVar156 = uVar134 - 0x379a;
        iVar42 = -(uint)(uVar136 < 0x4000);
        iVar45 = -(uint)(uVar148 < 0x4000);
        iVar48 = -(uint)(uVar152 < 0x4000);
        iVar51 = -(uint)(uVar156 < 0x4000);
        uVar137 = uVar136 >> 6;
        uVar149 = uVar148 >> 6;
        uVar153 = uVar152 >> 6;
        iVar43 = -(uint)(uVar35 < 0x4000);
        iVar46 = -(uint)(uVar31 < 0x4000);
        iVar49 = -(uint)(uVar135 < 0x4000);
        iVar52 = -(uint)(uVar151 < 0x4000);
        uVar36 = uVar35 >> 6;
        uVar34 = uVar31 >> 6;
        uVar147 = uVar135 >> 6;
        uVar155 = uVar151 >> 6;
        iVar44 = -(uint)(uVar54 < 0x4000);
        iVar47 = -(uint)(uVar58 < 0x4000);
        iVar50 = -(uint)(uVar61 < 0x4000);
        iVar53 = -(uint)(uVar64 < 0x4000);
        uVar55 = uVar54 >> 6;
        uVar59 = uVar58 >> 6;
        uVar62 = uVar61 >> 6;
        uVar65 = uVar64 >> 6;
        iVar56 = -(uint)(uVar93 < 0x4000);
        iVar60 = -(uint)(uVar101 < 0x4000);
        iVar63 = -(uint)(uVar106 < 0x4000);
        iVar66 = -(uint)(uVar109 < 0x4000);
        uVar94 = uVar93 >> 6;
        uVar102 = uVar101 >> 6;
        uVar107 = uVar106 >> 6;
        auVar124[0] = (byte)uVar55 & (byte)iVar44 | ~-(uVar95 < 0x4515) & ~(byte)iVar44;
        auVar124[1] = (byte)(uVar55 >> 8) & (byte)((uint)iVar44 >> 8);
        auVar124[2] = (byte)(uVar55 >> 0x10) & (byte)((uint)iVar44 >> 0x10);
        auVar124[3] = (byte)(uVar54 >> 0x1e) & (byte)((uint)iVar44 >> 0x18);
        auVar124[4] = (byte)uVar59 & (byte)iVar47 | ~-(uVar96 < 0x4515) & ~(byte)iVar47;
        auVar124[5] = (byte)(uVar59 >> 8) & (byte)((uint)iVar47 >> 8);
        auVar124[6] = (byte)(uVar59 >> 0x10) & (byte)((uint)iVar47 >> 0x10);
        auVar124[7] = (byte)(uVar58 >> 0x1e) & (byte)((uint)iVar47 >> 0x18);
        auVar124[8] = (byte)uVar62 & (byte)iVar50 | ~-(uVar103 < 0x4515) & ~(byte)iVar50;
        auVar124[9] = (byte)(uVar62 >> 8) & (byte)((uint)iVar50 >> 8);
        auVar124[10] = (byte)(uVar62 >> 0x10) & (byte)((uint)iVar50 >> 0x10);
        auVar124[0xb] = (byte)(uVar61 >> 0x1e) & (byte)((uint)iVar50 >> 0x18);
        auVar124[0xc] = (byte)uVar65 & (byte)iVar53 | ~-(uVar104 < 0x4515) & ~(byte)iVar53;
        auVar124[0xd] = (byte)(uVar65 >> 8) & (byte)((uint)iVar53 >> 8);
        auVar124[0xe] = (byte)(uVar65 >> 0x10) & (byte)((uint)iVar53 >> 0x10);
        auVar124[0xf] = (byte)(uVar64 >> 0x1e) & (byte)((uint)iVar53 >> 0x18);
        auVar115[0] = (byte)uVar94 & (byte)iVar56 | ~-(uVar67 < 0x4515) & ~(byte)iVar56;
        auVar115[1] = (byte)(uVar94 >> 8) & (byte)((uint)iVar56 >> 8);
        auVar115[2] = (byte)(uVar94 >> 0x10) & (byte)((uint)iVar56 >> 0x10);
        auVar115[3] = (byte)(uVar93 >> 0x1e) & (byte)((uint)iVar56 >> 0x18);
        auVar115[4] = (byte)uVar102 & (byte)iVar60 | ~-(uVar69 < 0x4515) & ~(byte)iVar60;
        auVar115[5] = (byte)(uVar102 >> 8) & (byte)((uint)iVar60 >> 8);
        auVar115[6] = (byte)(uVar102 >> 0x10) & (byte)((uint)iVar60 >> 0x10);
        auVar115[7] = (byte)(uVar101 >> 0x1e) & (byte)((uint)iVar60 >> 0x18);
        auVar115[8] = (byte)uVar107 & (byte)iVar63 | ~-(uVar70 < 0x4515) & ~(byte)iVar63;
        auVar115[9] = (byte)(uVar107 >> 8) & (byte)((uint)iVar63 >> 8);
        auVar115[10] = (byte)(uVar107 >> 0x10) & (byte)((uint)iVar63 >> 0x10);
        auVar115[0xb] = (byte)(uVar106 >> 0x1e) & (byte)((uint)iVar63 >> 0x18);
        auVar115[0xc] = (byte)(uVar109 >> 6) & (byte)iVar66 | ~-(uVar71 < 0x4515) & ~(byte)iVar66;
        auVar115[0xd] = (byte)((uVar109 >> 6) >> 8) & (byte)((uint)iVar66 >> 8);
        auVar115[0xe] = (byte)((uint3)(uVar109 >> 0xe) >> 8) & (byte)((uint)iVar66 >> 0x10);
        auVar115[0xf] = (byte)(uVar109 >> 0x1e) & (byte)((uint)iVar66 >> 0x18);
        uVar95 = iVar72 + 0x2204;
        uVar103 = iVar81 + 0x2204;
        uVar54 = iVar82 + 0x2204;
        uVar58 = iVar83 + 0x2204;
        iVar44 = -(uint)(uVar95 < 0x4000);
        iVar47 = -(uint)(uVar103 < 0x4000);
        iVar50 = -(uint)(uVar54 < 0x4000);
        iVar53 = -(uint)(uVar58 < 0x4000);
        uVar96 = uVar95 >> 6;
        uVar104 = uVar103 >> 6;
        uVar55 = uVar54 >> 6;
        auVar139[0] = (byte)uVar96 & (byte)iVar44 | ~-(iVar72 < -0x2204) & ~(byte)iVar44;
        auVar139[1] = (byte)(uVar96 >> 8) & (byte)((uint)iVar44 >> 8);
        auVar139[2] = (byte)(uVar96 >> 0x10) & (byte)((uint)iVar44 >> 0x10);
        auVar139[3] = (byte)(uVar95 >> 0x1e) & (byte)((uint)iVar44 >> 0x18);
        auVar139[4] = (byte)uVar104 & (byte)iVar47 | ~-(iVar81 < -0x2204) & ~(byte)iVar47;
        auVar139[5] = (byte)(uVar104 >> 8) & (byte)((uint)iVar47 >> 8);
        auVar139[6] = (byte)(uVar104 >> 0x10) & (byte)((uint)iVar47 >> 0x10);
        auVar139[7] = (byte)(uVar103 >> 0x1e) & (byte)((uint)iVar47 >> 0x18);
        auVar139[8] = (byte)uVar55 & (byte)iVar50 | ~-(iVar82 < -0x2204) & ~(byte)iVar50;
        auVar139[9] = (byte)(uVar55 >> 8) & (byte)((uint)iVar50 >> 8);
        auVar139[10] = (byte)(uVar55 >> 0x10) & (byte)((uint)iVar50 >> 0x10);
        auVar139[0xb] = (byte)(uVar54 >> 0x1e) & (byte)((uint)iVar50 >> 0x18);
        auVar139[0xc] = (byte)(uVar58 >> 6) & (byte)iVar53 | ~-(iVar83 < -0x2204) & ~(byte)iVar53;
        auVar139[0xd] = (byte)((uVar58 >> 6) >> 8) & (byte)((uint)iVar53 >> 8);
        auVar139[0xe] = (byte)((uint3)(uVar58 >> 0xe) >> 8) & (byte)((uint)iVar53 >> 0x10);
        auVar139[0xf] = (byte)(uVar58 >> 0x1e) & (byte)((uint)iVar53 >> 0x18);
        uVar95 = iVar84 + 0x2204;
        uVar103 = iVar90 + 0x2204;
        uVar54 = iVar91 + 0x2204;
        uVar58 = iVar92 + 0x2204;
        iVar44 = -(uint)(uVar95 < 0x4000);
        iVar47 = -(uint)(uVar103 < 0x4000);
        iVar50 = -(uint)(uVar54 < 0x4000);
        iVar53 = -(uint)(uVar58 < 0x4000);
        uVar96 = uVar95 >> 6;
        uVar104 = uVar103 >> 6;
        uVar55 = uVar54 >> 6;
        auVar5[1] = (byte)(uVar36 >> 8) & (byte)((uint)iVar43 >> 8);
        auVar5[0] = (byte)uVar36 & (byte)iVar43 | ~-(uVar111 < 0x379a) & ~(byte)iVar43;
        auVar5[2] = (byte)(uVar36 >> 0x10) & (byte)((uint)iVar43 >> 0x10);
        auVar5[3] = (byte)(uVar35 >> 0x1e) & (byte)((uint)iVar43 >> 0x18);
        auVar5[4] = (byte)uVar34 & (byte)iVar46 | ~-(uVar117 < 0x379a) & ~(byte)iVar46;
        auVar5[5] = (byte)(uVar34 >> 8) & (byte)((uint)iVar46 >> 8);
        auVar5[6] = (byte)(uVar34 >> 0x10) & (byte)((uint)iVar46 >> 0x10);
        auVar5[7] = (byte)(uVar31 >> 0x1e) & (byte)((uint)iVar46 >> 0x18);
        auVar5[8] = (byte)uVar147 & (byte)iVar49 | ~-(uVar119 < 0x379a) & ~(byte)iVar49;
        auVar5[9] = (byte)(uVar147 >> 8) & (byte)((uint)iVar49 >> 8);
        auVar5[10] = (byte)(uVar147 >> 0x10) & (byte)((uint)iVar49 >> 0x10);
        auVar5[0xb] = (byte)(uVar135 >> 0x1e) & (byte)((uint)iVar49 >> 0x18);
        auVar5[0xc] = (byte)uVar155 & (byte)iVar52 | ~-(uVar121 < 0x379a) & ~(byte)iVar52;
        auVar5[0xd] = (byte)(uVar155 >> 8) & (byte)((uint)iVar52 >> 8);
        auVar5[0xe] = (byte)(uVar155 >> 0x10) & (byte)((uint)iVar52 >> 0x10);
        auVar5[0xf] = (byte)(uVar151 >> 0x1e) & (byte)((uint)iVar52 >> 0x18);
        auVar6[1] = (byte)(uVar137 >> 8) & (byte)((uint)iVar42 >> 8);
        auVar6[0] = (byte)uVar137 & (byte)iVar42 | ~-(uVar123 < 0x379a) & ~(byte)iVar42;
        auVar6[2] = (byte)(uVar137 >> 0x10) & (byte)((uint)iVar42 >> 0x10);
        auVar6[3] = (byte)(uVar136 >> 0x1e) & (byte)((uint)iVar42 >> 0x18);
        auVar6[4] = (byte)uVar149 & (byte)iVar45 | ~-(uVar132 < 0x379a) & ~(byte)iVar45;
        auVar6[5] = (byte)(uVar149 >> 8) & (byte)((uint)iVar45 >> 8);
        auVar6[6] = (byte)(uVar149 >> 0x10) & (byte)((uint)iVar45 >> 0x10);
        auVar6[7] = (byte)(uVar148 >> 0x1e) & (byte)((uint)iVar45 >> 0x18);
        auVar6[8] = (byte)uVar153 & (byte)iVar48 | ~-(uVar133 < 0x379a) & ~(byte)iVar48;
        auVar6[9] = (byte)(uVar153 >> 8) & (byte)((uint)iVar48 >> 8);
        auVar6[10] = (byte)(uVar153 >> 0x10) & (byte)((uint)iVar48 >> 0x10);
        auVar6[0xb] = (byte)(uVar152 >> 0x1e) & (byte)((uint)iVar48 >> 0x18);
        auVar6[0xc] = (byte)(uVar156 >> 6) & (byte)iVar51 | ~-(uVar134 < 0x379a) & ~(byte)iVar51;
        auVar6[0xd] = (byte)((uVar156 >> 6) >> 8) & (byte)((uint)iVar51 >> 8);
        auVar6[0xe] = (byte)((uint3)(uVar156 >> 0xe) >> 8) & (byte)((uint)iVar51 >> 0x10);
        auVar6[0xf] = (byte)(uVar156 >> 0x1e) & (byte)((uint)iVar51 >> 0x18);
        auVar9._12_4_ = 0xffffffff;
        auVar9._0_12_ = auVar16;
        auVar75 = a64_TBL(ZEXT816(0),auVar5,auVar6,auVar9);
        auVar10._12_4_ = 0x3c383430;
        auVar10._0_12_ = auVar15;
        auVar11[1] = (byte)(uVar96 >> 8) & (byte)((uint)iVar44 >> 8);
        auVar11[0] = (byte)uVar96 & (byte)iVar44 | ~-(iVar84 < -0x2204) & ~(byte)iVar44;
        auVar11[2] = (byte)(uVar96 >> 0x10) & (byte)((uint)iVar44 >> 0x10);
        auVar11[3] = (byte)(uVar95 >> 0x1e) & (byte)((uint)iVar44 >> 0x18);
        auVar11[4] = (byte)uVar104 & (byte)iVar47 | ~-(iVar90 < -0x2204) & ~(byte)iVar47;
        auVar11[5] = (byte)(uVar104 >> 8) & (byte)((uint)iVar47 >> 8);
        auVar11[6] = (byte)(uVar104 >> 0x10) & (byte)((uint)iVar47 >> 0x10);
        auVar11[7] = (byte)(uVar103 >> 0x1e) & (byte)((uint)iVar47 >> 0x18);
        auVar11[8] = (byte)uVar55 & (byte)iVar50 | ~-(iVar91 < -0x2204) & ~(byte)iVar50;
        auVar11[9] = (byte)(uVar55 >> 8) & (byte)((uint)iVar50 >> 8);
        auVar11[10] = (byte)(uVar55 >> 0x10) & (byte)((uint)iVar50 >> 0x10);
        auVar11[0xb] = (byte)(uVar54 >> 0x1e) & (byte)((uint)iVar50 >> 0x18);
        auVar11[0xc] = (byte)(uVar58 >> 6) & (byte)iVar53 | ~-(iVar92 < -0x2204) & ~(byte)iVar53;
        auVar11[0xd] = (byte)((uVar58 >> 6) >> 8) & (byte)((uint)iVar53 >> 8);
        auVar11[0xe] = (byte)((uint3)(uVar58 >> 0xe) >> 8) & (byte)((uint)iVar53 >> 0x10);
        auVar11[0xf] = (byte)(uVar58 >> 0x1e) & (byte)((uint)iVar53 >> 0x18);
        auVar87 = a64_TBL(ZEXT816(0),auVar115,auVar124,auVar11,auVar139,auVar10);
        auVar99 = NEON_ext(auVar87,auVar87,8,1);
        *puVar17 = auVar87[0];
        puVar17[1] = auVar99[0];
        puVar17[2] = auVar75[0];
        puVar17[3] = auVar87[1];
        puVar17[4] = auVar99[1];
        puVar17[5] = auVar75[1];
        puVar17[6] = auVar87[2];
        puVar17[7] = auVar99[2];
        puVar17[8] = auVar75[2];
        puVar17[9] = auVar87[3];
        puVar17[10] = auVar99[3];
        puVar17[0xb] = auVar75[3];
        puVar17[0xc] = auVar87[4];
        puVar17[0xd] = auVar99[4];
        puVar17[0xe] = auVar75[4];
        puVar17[0xf] = auVar87[5];
        puVar17[0x10] = auVar99[5];
        puVar17[0x11] = auVar75[5];
        puVar17[0x12] = auVar87[6];
        puVar17[0x13] = auVar99[6];
        puVar17[0x14] = auVar75[6];
        puVar17[0x15] = auVar87[7];
        puVar17[0x16] = auVar99[7];
        puVar17[0x17] = auVar75[7];
        puVar17 = puVar17 + 0x18;
        lVar19 = lVar19 + 8;
        puVar27 = puVar27 + 1;
        puVar29 = puVar29 + 1;
        puVar30 = puVar30 + 1;
      } while (lVar19 != 0);
      if (uVar20 == uVar18) {
        return;
      }
    }
  }
LAB_00231194:
  lVar19 = uVar18 - uVar20;
  pbVar21 = *param_3 + uVar20;
  pbVar23 = *param_1 + uVar20;
  pbVar24 = *param_2 + uVar20;
  puVar17 = param_4 + uVar20 * 3 + 2;
  do {
    bVar3 = *pbVar24;
    bVar4 = *pbVar21;
    uVar103 = (uint)*pbVar23 * 0x4a85 >> 8;
    uVar95 = uVar103 + ((uint)bVar3 * 0x811a >> 8);
    uVar96 = uVar95 - 0x4515;
    uVar1 = 0;
    if (0x4514 < uVar95) {
      uVar1 = 0xff;
    }
    uVar2 = (char)(uVar96 >> 6);
    if (0x3fff < uVar96) {
      uVar2 = uVar1;
    }
    puVar17[-2] = uVar2;
    iVar42 = uVar103 - (((uint)bVar3 * 0x1913 >> 8) + ((uint)bVar4 * 0x3408 >> 8));
    uVar95 = iVar42 + 0x2204;
    uVar1 = 0;
    if (-0x2205 < iVar42) {
      uVar1 = 0xff;
    }
    uVar2 = (char)(uVar95 >> 6);
    if (0x3fff < uVar95) {
      uVar2 = uVar1;
    }
    puVar17[-1] = uVar2;
    uVar103 = uVar103 + ((uint)bVar4 * 0x6625 >> 8);
    uVar95 = uVar103 - 0x379a;
    uVar1 = 0;
    if (0x3799 < uVar103) {
      uVar1 = 0xff;
    }
    uVar2 = (char)(uVar95 >> 6);
    if (0x3fff < uVar95) {
      uVar2 = uVar1;
    }
    *puVar17 = uVar2;
    lVar19 = lVar19 + -1;
    pbVar21 = pbVar21 + 1;
    pbVar23 = pbVar23 + 1;
    pbVar24 = pbVar24 + 1;
    puVar17 = puVar17 + 3;
  } while (lVar19 != 0);
                    /* WARNING: Read-only address (ram,0x007edcb0) is written */
                    /* WARNING: Read-only address (ram,0x007edcc0) is written */
                    /* WARNING: Read-only address (ram,0x007edccc) is written */
                    /* WARNING: Read-only address (ram,0x007eeb70) is written */
                    /* WARNING: Read-only address (ram,0x007eeb80) is written */
  return;
}



/* Entry: 00231878; end: 00231fd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00231878(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                 undefined1 *param_4,uint param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 *puVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  undefined1 (*pauVar18) [16];
  ulong *puVar19;
  undefined1 (*pauVar20) [16];
  ulong *puVar21;
  undefined1 (*pauVar22) [16];
  undefined8 *puVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined8 uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  uint uVar40;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  uint uVar46;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined8 uVar52;
  uint uVar53;
  uint uVar54;
  uint uVar56;
  uint uVar57;
  undefined8 uVar55;
  uint uVar58;
  uint uVar59;
  uint uVar60;
  uint uVar61;
  uint uVar62;
  undefined8 uVar63;
  uint uVar65;
  uint uVar66;
  uint uVar67;
  uint uVar68;
  uint uVar69;
  undefined1 auVar64 [16];
  uint uVar70;
  int iVar71;
  int iVar72;
  uint uVar73;
  uint uVar81;
  undefined8 uVar74;
  int iVar79;
  int iVar80;
  int iVar82;
  int iVar83;
  uint uVar86;
  int iVar87;
  int iVar88;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  int iVar84;
  int iVar85;
  int iVar89;
  int iVar90;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  uint uVar91;
  undefined1 uVar92;
  undefined1 uVar93;
  undefined1 uVar94;
  undefined1 uVar95;
  undefined1 uVar96;
  undefined1 uVar97;
  undefined1 uVar98;
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined8 uVar102;
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined8 uVar106;
  undefined1 auVar107 [16];
  uint uVar108;
  uint uVar119;
  uint uVar123;
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  uint uVar109;
  uint uVar110;
  uint uVar111;
  uint uVar120;
  uint uVar121;
  uint uVar122;
  uint uVar124;
  uint uVar125;
  uint uVar126;
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  int iVar127;
  int iVar135;
  int iVar137;
  undefined1 auVar129 [16];
  int iVar128;
  int iVar136;
  int iVar138;
  int iVar139;
  int iVar140;
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  
  if ((int)param_5 < 1) {
    return;
  }
  uVar11 = (ulong)param_5;
  if (param_5 < 8) {
    uVar13 = 0;
  }
  else {
    uVar13 = 0;
    pauVar18 = (undefined1 (*) [16])(param_4 + uVar11 * 4);
    if (((pauVar18 <= param_1 || *param_1 + uVar11 <= param_4) &&
        (*param_2 + uVar11 <= param_4 || pauVar18 <= param_2)) &&
       (*param_3 + uVar11 <= param_4 || pauVar18 <= param_3)) {
      if (param_5 < 0x10) {
        uVar14 = 0;
      }
      else {
        uVar13 = uVar11 & 0x7ffffff0;
        auVar129._8_4_ = 0xffffff0e;
        auVar129._0_8_ = 0xffffff0dffffff0c;
        auVar113._8_4_ = 0xffffff0e;
        auVar113._0_8_ = 0xffffff0dffffff0c;
        auVar76._8_8_ = 0xffffff0bffffff0a;
        auVar76._0_8_ = 0xffffff09ffffff08;
        auVar107._8_8_ = 0xffffff0bffffff0a;
        auVar107._0_8_ = 0xffffff09ffffff08;
        auVar7._8_4_ = 0xffffff06;
        auVar7._0_8_ = 0xffffff05ffffff04;
        auVar6._8_4_ = 0xffffff06;
        auVar6._0_8_ = 0xffffff05ffffff04;
        auVar9._8_4_ = 0xffffff02;
        auVar9._0_8_ = 0xffffff01ffffff00;
        auVar8._8_4_ = 0xffffff02;
        auVar8._0_8_ = 0xffffff01ffffff00;
        pauVar18 = param_1;
        pauVar20 = param_2;
        pauVar22 = param_3;
        puVar10 = param_4;
        uVar14 = uVar13;
        do {
          auVar103 = *pauVar22;
          auVar113._12_4_ = 0xffffff0f;
          auVar42 = a64_TBL(ZEXT816(0),auVar103,auVar113);
          auVar48 = a64_TBL(ZEXT816(0),auVar103,auVar107);
          auVar6._12_4_ = 0xffffff07;
          auVar24 = a64_TBL(ZEXT816(0),auVar103,auVar6);
          auVar8._12_4_ = 0xffffff03;
          auVar103 = a64_TBL(ZEXT816(0),auVar103,auVar8);
          uVar102 = CONCAT26(auVar103._12_2_,
                             CONCAT24(auVar103._8_2_,CONCAT22(auVar103._4_2_,auVar103._0_2_)));
          uVar106 = CONCAT26(auVar24._12_2_,
                             CONCAT24(auVar24._8_2_,CONCAT22(auVar24._4_2_,auVar24._0_2_)));
          uVar52 = CONCAT26(auVar48._12_2_,
                            CONCAT24(auVar48._8_2_,CONCAT22(auVar48._4_2_,auVar48._0_2_)));
          auVar103 = NEON_umull((ulong)CONCAT16((*pauVar18)[0xb],
                                                (uint6)CONCAT14((*pauVar18)[10],
                                                                (uint)CONCAT12((*pauVar18)[9],
                                                                               (ushort)(byte)(*
                                                  pauVar18)[8]))),0x4a854a854a854a85,2);
          uVar61 = (uint)(byte)(*pauVar18)[0xc] * 0x4a85;
          uVar62 = (uint)(byte)(*pauVar18)[0xd] * 0x4a85;
          uVar65 = (uint)(byte)(*pauVar18)[0xe] * 0x4a85;
          uVar66 = (uint)(byte)(*pauVar18)[0xf] * 0x4a85;
          auVar130 = NEON_umull((ulong)CONCAT16((*pauVar18)[3],
                                                (uint6)CONCAT14((*pauVar18)[2],
                                                                (uint)CONCAT12((*pauVar18)[1],
                                                                               (ushort)(byte)(*
                                                  pauVar18)[0]))),0x4a854a854a854a85,2);
          uVar111 = (uint)(byte)(*pauVar18)[4] * 0x4a85;
          uVar122 = (uint)(byte)(*pauVar18)[5] * 0x4a85;
          uVar124 = (uint)(byte)(*pauVar18)[6] * 0x4a85;
          uVar126 = (uint)(byte)(*pauVar18)[7] * 0x4a85;
          auVar24 = NEON_umull(CONCAT17(auVar42[0xd],
                                        CONCAT16(auVar42[0xc],
                                                 CONCAT15(auVar42[9],
                                                          CONCAT14(auVar42[8],
                                                                   CONCAT13(auVar42[5],
                                                                            CONCAT12(auVar42[4],
                                                                                     auVar42._0_2_))
                                                                  )))),0x6625662566256625,2);
          auVar48 = NEON_umull(uVar52,0x6625662566256625,2);
          auVar78 = NEON_umull(uVar106,0x6625662566256625,2);
          uVar110 = (auVar24._0_4_ >> 8) + (uVar61 >> 8);
          uVar120 = (auVar24._4_4_ >> 8) + (uVar62 >> 8);
          uVar121 = (auVar24._8_4_ >> 8) + (uVar65 >> 8);
          uVar108 = (auVar24._12_4_ >> 8) + (uVar66 >> 8);
          uVar67 = auVar103._0_4_;
          uVar68 = auVar103._4_4_;
          uVar69 = auVar103._8_4_;
          uVar109 = auVar103._12_4_;
          uVar119 = (auVar48._0_4_ >> 8) + (uVar67 >> 8);
          uVar123 = (auVar48._4_4_ >> 8) + (uVar68 >> 8);
          uVar125 = (auVar48._8_4_ >> 8) + (uVar69 >> 8);
          uVar70 = (auVar48._12_4_ >> 8) + (uVar109 >> 8);
          uVar73 = (auVar78._0_4_ >> 8) + (uVar111 >> 8);
          uVar81 = (auVar78._4_4_ >> 8) + (uVar122 >> 8);
          uVar86 = (auVar78._8_4_ >> 8) + (uVar124 >> 8);
          uVar91 = (auVar78._12_4_ >> 8) + (uVar126 >> 8);
          uVar40 = uVar119 - 0x379a;
          uVar44 = uVar123 - 0x379a;
          uVar46 = uVar125 - 0x379a;
          uVar50 = uVar70 - 0x379a;
          uVar53 = uVar110 - 0x379a;
          uVar56 = uVar120 - 0x379a;
          uVar58 = uVar121 - 0x379a;
          uVar60 = uVar108 - 0x379a;
          iVar71 = -(uint)(uVar53 < 0x4000);
          iVar72 = -(uint)(uVar56 < 0x4000);
          iVar79 = -(uint)(uVar58 < 0x4000);
          iVar80 = -(uint)(uVar60 < 0x4000);
          iVar82 = -(uint)(uVar40 < 0x4000);
          iVar83 = -(uint)(uVar44 < 0x4000);
          iVar87 = -(uint)(uVar46 < 0x4000);
          iVar88 = -(uint)(uVar50 < 0x4000);
          uVar43 = uVar40 >> 6;
          uVar45 = uVar44 >> 6;
          uVar49 = uVar46 >> 6;
          uVar51 = uVar50 >> 6;
          uVar54 = uVar53 >> 6;
          uVar57 = uVar56 >> 6;
          uVar59 = uVar58 >> 6;
          auVar36[1] = (byte)(uVar54 >> 8) & (byte)((uint)iVar71 >> 8);
          auVar36[2] = (byte)(uVar54 >> 0x10) & (byte)((uint)iVar71 >> 0x10);
          auVar36[3] = (byte)(uVar53 >> 0x1e) & (byte)((uint)iVar71 >> 0x18);
          auVar36[5] = (byte)(uVar57 >> 8) & (byte)((uint)iVar72 >> 8);
          auVar36[6] = (byte)(uVar57 >> 0x10) & (byte)((uint)iVar72 >> 0x10);
          auVar36[7] = (byte)(uVar56 >> 0x1e) & (byte)((uint)iVar72 >> 0x18);
          auVar36[9] = (byte)(uVar59 >> 8) & (byte)((uint)iVar79 >> 8);
          auVar36[10] = (byte)(uVar59 >> 0x10) & (byte)((uint)iVar79 >> 0x10);
          auVar36[0xb] = (byte)(uVar58 >> 0x1e) & (byte)((uint)iVar79 >> 0x18);
          auVar36[0xd] = (byte)((uVar60 >> 6) >> 8) & (byte)((uint)iVar80 >> 8);
          auVar36[0xe] = (byte)((uint3)(uVar60 >> 0xe) >> 8) & (byte)((uint)iVar80 >> 0x10);
          auVar36[0xf] = (byte)(uVar60 >> 0x1e) & (byte)((uint)iVar80 >> 0x18);
          auVar36[0] = (byte)uVar54 & (byte)iVar71 | ~-(uVar110 < 0x379a) & ~(byte)iVar71;
          auVar36[4] = (byte)uVar57 & (byte)iVar72 | ~-(uVar120 < 0x379a) & ~(byte)iVar72;
          auVar36[8] = (byte)uVar59 & (byte)iVar79 | ~-(uVar121 < 0x379a) & ~(byte)iVar79;
          auVar36[0xc] = (byte)(uVar60 >> 6) & (byte)iVar80 | ~-(uVar108 < 0x379a) & ~(byte)iVar80;
          auVar32[0] = (byte)uVar43 & (byte)iVar82 | ~-(uVar119 < 0x379a) & ~(byte)iVar82;
          auVar32[1] = (byte)(uVar43 >> 8) & (byte)((uint)iVar82 >> 8);
          auVar32[2] = (byte)(uVar43 >> 0x10) & (byte)((uint)iVar82 >> 0x10);
          auVar32[3] = (byte)(uVar40 >> 0x1e) & (byte)((uint)iVar82 >> 0x18);
          auVar32[4] = (byte)uVar45 & (byte)iVar83 | ~-(uVar123 < 0x379a) & ~(byte)iVar83;
          auVar32[5] = (byte)(uVar45 >> 8) & (byte)((uint)iVar83 >> 8);
          auVar32[6] = (byte)(uVar45 >> 0x10) & (byte)((uint)iVar83 >> 0x10);
          auVar32[7] = (byte)(uVar44 >> 0x1e) & (byte)((uint)iVar83 >> 0x18);
          auVar32[8] = (byte)uVar49 & (byte)iVar87 | ~-(uVar125 < 0x379a) & ~(byte)iVar87;
          auVar32[9] = (byte)(uVar49 >> 8) & (byte)((uint)iVar87 >> 8);
          auVar32[10] = (byte)(uVar49 >> 0x10) & (byte)((uint)iVar87 >> 0x10);
          auVar32[0xb] = (byte)(uVar46 >> 0x1e) & (byte)((uint)iVar87 >> 0x18);
          auVar32[0xc] = (byte)uVar51 & (byte)iVar88 | ~-(uVar70 < 0x379a) & ~(byte)iVar88;
          auVar32[0xd] = (byte)(uVar51 >> 8) & (byte)((uint)iVar88 >> 8);
          auVar32[0xe] = (byte)(uVar51 >> 0x10) & (byte)((uint)iVar88 >> 0x10);
          auVar32[0xf] = (byte)(uVar50 >> 0x1e) & (byte)((uint)iVar88 >> 0x18);
          uVar40 = uVar73 - 0x379a;
          uVar44 = uVar81 - 0x379a;
          uVar46 = uVar86 - 0x379a;
          uVar50 = uVar91 - 0x379a;
          iVar71 = -(uint)(uVar40 < 0x4000);
          iVar72 = -(uint)(uVar44 < 0x4000);
          iVar79 = -(uint)(uVar46 < 0x4000);
          iVar80 = -(uint)(uVar50 < 0x4000);
          uVar43 = uVar40 >> 6;
          uVar45 = uVar44 >> 6;
          uVar49 = uVar46 >> 6;
          auVar103 = NEON_umull(uVar102,0x6625662566256625,2);
          uVar57 = auVar130._0_4_;
          uVar58 = auVar130._4_4_;
          uVar59 = auVar130._8_4_;
          uVar60 = auVar130._12_4_;
          uVar51 = (auVar103._0_4_ >> 8) + (uVar57 >> 8);
          uVar53 = (auVar103._4_4_ >> 8) + (uVar58 >> 8);
          uVar54 = (auVar103._8_4_ >> 8) + (uVar59 >> 8);
          uVar56 = (auVar103._12_4_ >> 8) + (uVar60 >> 8);
          auVar27[0] = (byte)uVar43 & (byte)iVar71 | ~-(uVar73 < 0x379a) & ~(byte)iVar71;
          auVar27[1] = (byte)(uVar43 >> 8) & (byte)((uint)iVar71 >> 8);
          auVar27[2] = (byte)(uVar43 >> 0x10) & (byte)((uint)iVar71 >> 0x10);
          auVar27[3] = (byte)(uVar40 >> 0x1e) & (byte)((uint)iVar71 >> 0x18);
          auVar27[4] = (byte)uVar45 & (byte)iVar72 | ~-(uVar81 < 0x379a) & ~(byte)iVar72;
          auVar27[5] = (byte)(uVar45 >> 8) & (byte)((uint)iVar72 >> 8);
          auVar27[6] = (byte)(uVar45 >> 0x10) & (byte)((uint)iVar72 >> 0x10);
          auVar27[7] = (byte)(uVar44 >> 0x1e) & (byte)((uint)iVar72 >> 0x18);
          auVar27[8] = (byte)uVar49 & (byte)iVar79 | ~-(uVar86 < 0x379a) & ~(byte)iVar79;
          auVar27[9] = (byte)(uVar49 >> 8) & (byte)((uint)iVar79 >> 8);
          auVar27[10] = (byte)(uVar49 >> 0x10) & (byte)((uint)iVar79 >> 0x10);
          auVar27[0xb] = (byte)(uVar46 >> 0x1e) & (byte)((uint)iVar79 >> 0x18);
          auVar27[0xc] = (byte)(uVar50 >> 6) & (byte)iVar80 | ~-(uVar91 < 0x379a) & ~(byte)iVar80;
          auVar27[0xd] = (byte)((uVar50 >> 6) >> 8) & (byte)((uint)iVar80 >> 8);
          auVar27[0xe] = (byte)((uint3)(uVar50 >> 0xe) >> 8) & (byte)((uint)iVar80 >> 0x10);
          auVar27[0xf] = (byte)(uVar50 >> 0x1e) & (byte)((uint)iVar80 >> 0x18);
          uVar40 = uVar51 - 0x379a;
          uVar44 = uVar53 - 0x379a;
          uVar46 = uVar54 - 0x379a;
          uVar50 = uVar56 - 0x379a;
          iVar71 = -(uint)(uVar40 < 0x4000);
          iVar72 = -(uint)(uVar44 < 0x4000);
          iVar79 = -(uint)(uVar46 < 0x4000);
          iVar80 = -(uint)(uVar50 < 0x4000);
          uVar43 = uVar40 >> 6;
          uVar45 = uVar44 >> 6;
          uVar49 = uVar46 >> 6;
          auVar101[0] = (byte)uVar43 & (byte)iVar71 | ~-(uVar51 < 0x379a) & ~(byte)iVar71;
          auVar101[1] = (byte)(uVar43 >> 8) & (byte)((uint)iVar71 >> 8);
          auVar101[2] = (byte)(uVar43 >> 0x10) & (byte)((uint)iVar71 >> 0x10);
          auVar101[3] = (byte)(uVar40 >> 0x1e) & (byte)((uint)iVar71 >> 0x18);
          auVar101[4] = (byte)uVar45 & (byte)iVar72 | ~-(uVar53 < 0x379a) & ~(byte)iVar72;
          auVar101[5] = (byte)(uVar45 >> 8) & (byte)((uint)iVar72 >> 8);
          auVar101[6] = (byte)(uVar45 >> 0x10) & (byte)((uint)iVar72 >> 0x10);
          auVar101[7] = (byte)(uVar44 >> 0x1e) & (byte)((uint)iVar72 >> 0x18);
          auVar101[8] = (byte)uVar49 & (byte)iVar79 | ~-(uVar54 < 0x379a) & ~(byte)iVar79;
          auVar101[9] = (byte)(uVar49 >> 8) & (byte)((uint)iVar79 >> 8);
          auVar101[10] = (byte)(uVar49 >> 0x10) & (byte)((uint)iVar79 >> 0x10);
          auVar101[0xb] = (byte)(uVar46 >> 0x1e) & (byte)((uint)iVar79 >> 0x18);
          auVar101[0xc] = (byte)(uVar50 >> 6) & (byte)iVar80 | ~-(uVar56 < 0x379a) & ~(byte)iVar80;
          auVar101[0xd] = (byte)((uVar50 >> 6) >> 8) & (byte)((uint)iVar80 >> 8);
          auVar101[0xe] = (byte)((uint3)(uVar50 >> 0xe) >> 8) & (byte)((uint)iVar80 >> 0x10);
          auVar101[0xf] = (byte)(uVar50 >> 0x1e) & (byte)((uint)iVar80 >> 0x18);
          uVar26 = *(undefined8 *)(*pauVar20 + 8);
          uVar92 = (undefined1)((ulong)uVar26 >> 8);
          uVar93 = (undefined1)((ulong)uVar26 >> 0x10);
          uVar94 = (undefined1)((ulong)uVar26 >> 0x18);
          uVar95 = (undefined1)((ulong)uVar26 >> 0x20);
          uVar96 = (undefined1)((ulong)uVar26 >> 0x28);
          uVar97 = (undefined1)((ulong)uVar26 >> 0x30);
          uVar98 = (undefined1)((ulong)uVar26 >> 0x38);
          auVar24[9] = uVar92;
          auVar24._0_9_ = *(unkbyte9 *)*pauVar20;
          auVar24[10] = uVar93;
          auVar24[0xb] = uVar94;
          auVar24[0xc] = uVar95;
          auVar24[0xd] = uVar96;
          auVar24[0xe] = uVar97;
          auVar24[0xf] = uVar98;
          auVar7._12_4_ = 0xffffff07;
          auVar130 = a64_TBL(ZEXT816(0),auVar24,auVar7);
          auVar103._8_4_ = 0x2c282420;
          auVar103._0_8_ = 0x1c1814100c080400;
          auVar103._12_4_ = 0x3c383430;
          auVar101 = a64_TBL(ZEXT816(0),auVar101,auVar27,auVar32,auVar36,auVar103);
          auVar48[9] = uVar92;
          auVar48._0_9_ = *(unkbyte9 *)*pauVar20;
          auVar48[10] = uVar93;
          auVar48[0xb] = uVar94;
          auVar48[0xc] = uVar95;
          auVar48[0xd] = uVar96;
          auVar48[0xe] = uVar97;
          auVar48[0xf] = uVar98;
          auVar9._12_4_ = 0xffffff03;
          auVar103 = a64_TBL(ZEXT816(0),auVar48,auVar9);
          auVar78[9] = uVar92;
          auVar78._0_9_ = *(unkbyte9 *)*pauVar20;
          auVar78[10] = uVar93;
          auVar78[0xb] = uVar94;
          auVar78[0xc] = uVar95;
          auVar78[0xd] = uVar96;
          auVar78[0xe] = uVar97;
          auVar78[0xf] = uVar98;
          auVar129._12_4_ = 0xffffff0f;
          auVar24 = a64_TBL(ZEXT816(0),auVar78,auVar129);
          uVar74 = CONCAT26(auVar24._12_2_,
                            CONCAT24(auVar24._8_2_,CONCAT22(auVar24._4_2_,auVar24._0_2_)));
          uVar63 = CONCAT26(auVar103._12_2_,
                            CONCAT24(auVar103._8_2_,CONCAT22(auVar103._4_2_,auVar103._0_2_)));
          uVar55 = CONCAT26(auVar130._12_2_,
                            CONCAT24(auVar130._8_2_,CONCAT22(auVar130._4_2_,auVar130._0_2_)));
          auVar130 = NEON_umull(uVar55,0x1913191319131913,2);
          auVar103 = NEON_umull(uVar106,0x3408340834083408,2);
          auVar24 = NEON_umull(uVar63,0x1913191319131913,2);
          auVar48 = NEON_umull(uVar102,0x3408340834083408,2);
          auVar78 = NEON_umull(uVar74,0x1913191319131913,2);
          auVar42 = NEON_umull(CONCAT17(auVar42[0xd],
                                        CONCAT16(auVar42[0xc],
                                                 CONCAT15(auVar42[9],
                                                          CONCAT14(auVar42[8],
                                                                   CONCAT13(auVar42[5],
                                                                            CONCAT12(auVar42[4],
                                                                                     auVar42._0_2_))
                                                                  )))),0x3408340834083408,2);
          iVar71 = (uVar61 >> 8) - ((auVar78._0_4_ >> 8) + (auVar42._0_4_ >> 8));
          iVar72 = (uVar62 >> 8) - ((auVar78._4_4_ >> 8) + (auVar42._4_4_ >> 8));
          iVar79 = (uVar65 >> 8) - ((auVar78._8_4_ >> 8) + (auVar42._8_4_ >> 8));
          iVar80 = (uVar66 >> 8) - ((auVar78._12_4_ >> 8) + (auVar42._12_4_ >> 8));
          iVar84 = (uVar57 >> 8) - ((auVar24._0_4_ >> 8) + (auVar48._0_4_ >> 8));
          iVar85 = (uVar58 >> 8) - ((auVar24._4_4_ >> 8) + (auVar48._4_4_ >> 8));
          iVar89 = (uVar59 >> 8) - ((auVar24._8_4_ >> 8) + (auVar48._8_4_ >> 8));
          iVar90 = (uVar60 >> 8) - ((auVar24._12_4_ >> 8) + (auVar48._12_4_ >> 8));
          iVar82 = (uVar111 >> 8) - ((auVar130._0_4_ >> 8) + (auVar103._0_4_ >> 8));
          iVar83 = (uVar122 >> 8) - ((auVar130._4_4_ >> 8) + (auVar103._4_4_ >> 8));
          iVar87 = (uVar124 >> 8) - ((auVar130._8_4_ >> 8) + (auVar103._8_4_ >> 8));
          iVar88 = (uVar126 >> 8) - ((auVar130._12_4_ >> 8) + (auVar103._12_4_ >> 8));
          uVar40 = iVar82 + 0x2204;
          uVar43 = iVar83 + 0x2204;
          uVar44 = iVar87 + 0x2204;
          uVar45 = iVar88 + 0x2204;
          iVar83 = -(uint)(iVar83 < -0x2204);
          iVar87 = -(uint)(iVar87 < -0x2204);
          iVar88 = -(uint)(iVar88 < -0x2204);
          auVar37._0_8_ = CONCAT44(-(uint)(uVar43 < 0x4000),-(uint)(uVar40 < 0x4000));
          auVar37._8_4_ = -(uint)(uVar44 < 0x4000);
          auVar37._12_4_ = -(uint)(uVar45 < 0x4000);
          auVar28._0_4_ = uVar40 >> 6;
          auVar28._4_4_ = uVar43 >> 6;
          auVar28._8_4_ = uVar44 >> 6;
          auVar28._12_4_ = uVar45 >> 6;
          auVar105[0] = ~-(iVar82 < -0x2204);
          auVar105._1_3_ = 0;
          auVar105[4] = ~(byte)iVar83;
          auVar105._5_2_ = 0;
          auVar105[7] = ~(byte)((uint)iVar83 >> 0x18);
          auVar105[8] = ~(byte)iVar87;
          auVar105[9] = ~(byte)((uint)iVar87 >> 8);
          auVar105[10] = ~(byte)((uint)iVar87 >> 0x10);
          auVar105[0xb] = ~(byte)((uint)iVar87 >> 0x18);
          auVar105[0xc] = ~(byte)iVar88;
          auVar105[0xd] = ~(byte)((uint)iVar88 >> 8);
          auVar105[0xe] = ~(byte)((uint)iVar88 >> 0x10);
          auVar105[0xf] = ~(byte)((uint)iVar88 >> 0x18);
          auVar104._8_8_ = auVar37._8_8_;
          auVar104._0_8_ = auVar37._0_8_;
          auVar105 = auVar105 ^ (auVar105 ^ auVar28) & auVar104;
          uVar40 = iVar84 + 0x2204;
          uVar43 = iVar85 + 0x2204;
          uVar44 = iVar89 + 0x2204;
          uVar45 = iVar90 + 0x2204;
          iVar82 = -(uint)(iVar85 < -0x2204);
          iVar83 = -(uint)(iVar89 < -0x2204);
          iVar87 = -(uint)(iVar90 < -0x2204);
          auVar33._0_4_ = -(uint)(uVar40 < 0x4000);
          auVar33._4_4_ = -(uint)(uVar43 < 0x4000);
          auVar33._8_4_ = -(uint)(uVar44 < 0x4000);
          auVar33._12_4_ = -(uint)(uVar45 < 0x4000);
          auVar25._0_4_ = uVar40 >> 6;
          auVar25._4_4_ = uVar43 >> 6;
          auVar25._8_4_ = uVar44 >> 6;
          auVar25._12_4_ = uVar45 >> 6;
          auVar29[0] = ~-(iVar84 < -0x2204);
          auVar29._1_3_ = 0;
          auVar29[4] = ~(byte)iVar82;
          auVar29._5_2_ = 0;
          auVar29[7] = ~(byte)((uint)iVar82 >> 0x18);
          auVar29[8] = ~(byte)iVar83;
          auVar29[9] = ~(byte)((uint)iVar83 >> 8);
          auVar29[10] = ~(byte)((uint)iVar83 >> 0x10);
          auVar29[0xb] = ~(byte)((uint)iVar83 >> 0x18);
          auVar29[0xc] = ~(byte)iVar87;
          auVar29[0xd] = ~(byte)((uint)iVar87 >> 8);
          auVar29[0xe] = ~(byte)((uint)iVar87 >> 0x10);
          auVar29[0xf] = ~(byte)((uint)iVar87 >> 0x18);
          auVar25 = auVar25 ^ (auVar25 ^ auVar29) & ~auVar33;
          uVar40 = iVar71 + 0x2204;
          uVar43 = iVar72 + 0x2204;
          uVar44 = iVar79 + 0x2204;
          uVar45 = iVar80 + 0x2204;
          iVar72 = -(uint)(iVar72 < -0x2204);
          iVar79 = -(uint)(iVar79 < -0x2204);
          iVar80 = -(uint)(iVar80 < -0x2204);
          auVar34._0_4_ = -(uint)(uVar40 < 0x4000);
          auVar34._4_4_ = -(uint)(uVar43 < 0x4000);
          auVar34._8_4_ = -(uint)(uVar44 < 0x4000);
          auVar34._12_4_ = -(uint)(uVar45 < 0x4000);
          auVar30._0_4_ = uVar40 >> 6;
          auVar30._4_4_ = uVar43 >> 6;
          auVar30._8_4_ = uVar44 >> 6;
          auVar30._12_4_ = uVar45 >> 6;
          auVar42[0] = ~-(iVar71 < -0x2204);
          auVar42._1_3_ = 0;
          auVar42[4] = ~(byte)iVar72;
          auVar42._5_2_ = 0;
          auVar42[7] = ~(byte)((uint)iVar72 >> 0x18);
          auVar42[8] = ~(byte)iVar79;
          auVar42[9] = ~(byte)((uint)iVar79 >> 8);
          auVar42[10] = ~(byte)((uint)iVar79 >> 0x10);
          auVar42[0xb] = ~(byte)((uint)iVar79 >> 0x18);
          auVar42[0xc] = ~(byte)iVar80;
          auVar42[0xd] = ~(byte)((uint)iVar80 >> 8);
          auVar42[0xe] = ~(byte)((uint)iVar80 >> 0x10);
          auVar42[0xf] = ~(byte)((uint)iVar80 >> 0x18);
          auVar42 = auVar42 ^ (auVar42 ^ auVar30) & auVar34;
          auVar130[9] = uVar92;
          auVar130._0_9_ = *(unkbyte9 *)*pauVar20;
          auVar130[10] = uVar93;
          auVar130[0xb] = uVar94;
          auVar130[0xc] = uVar95;
          auVar130[0xd] = uVar96;
          auVar130[0xe] = uVar97;
          auVar130[0xf] = uVar98;
          auVar103 = a64_TBL(ZEXT816(0),auVar130,auVar76);
          uVar26 = CONCAT26(auVar103._12_2_,
                            CONCAT24(auVar103._8_2_,CONCAT22(auVar103._4_2_,auVar103._0_2_)));
          auVar103 = NEON_umull(uVar26,0x1913191319131913,2);
          auVar24 = NEON_umull(uVar52,0x3408340834083408,2);
          iVar71 = (uVar67 >> 8) - ((auVar103._0_4_ >> 8) + (auVar24._0_4_ >> 8));
          iVar72 = (uVar68 >> 8) - ((auVar103._4_4_ >> 8) + (auVar24._4_4_ >> 8));
          iVar79 = (uVar69 >> 8) - ((auVar103._8_4_ >> 8) + (auVar24._8_4_ >> 8));
          iVar80 = (uVar109 >> 8) - ((auVar103._12_4_ >> 8) + (auVar24._12_4_ >> 8));
          auVar103 = NEON_umull(uVar26,0x811a811a811a811a,2);
          uVar40 = (auVar103._0_4_ >> 8) + (uVar67 >> 8);
          uVar43 = (auVar103._4_4_ >> 8) + (uVar68 >> 8);
          uVar44 = (auVar103._8_4_ >> 8) + (uVar69 >> 8);
          uVar45 = (auVar103._12_4_ >> 8) + (uVar109 >> 8);
          auVar103 = NEON_umull(uVar74,0x811a811a811a811a,2);
          uVar46 = (auVar103._0_4_ >> 8) + (uVar61 >> 8);
          uVar49 = (auVar103._4_4_ >> 8) + (uVar62 >> 8);
          uVar50 = (auVar103._8_4_ >> 8) + (uVar65 >> 8);
          uVar51 = (auVar103._12_4_ >> 8) + (uVar66 >> 8);
          auVar103 = NEON_umull(uVar63,0x811a811a811a811a,2);
          uVar53 = (auVar103._0_4_ >> 8) + (uVar57 >> 8);
          uVar54 = (auVar103._4_4_ >> 8) + (uVar58 >> 8);
          uVar56 = (auVar103._8_4_ >> 8) + (uVar59 >> 8);
          uVar57 = (auVar103._12_4_ >> 8) + (uVar60 >> 8);
          uVar58 = iVar71 + 0x2204;
          uVar59 = iVar72 + 0x2204;
          uVar60 = iVar79 + 0x2204;
          uVar61 = iVar80 + 0x2204;
          auVar103 = NEON_umull(uVar55,0x811a811a811a811a,2);
          iVar72 = -(uint)(iVar72 < -0x2204);
          iVar79 = -(uint)(iVar79 < -0x2204);
          iVar80 = -(uint)(iVar80 < -0x2204);
          uVar62 = (auVar103._0_4_ >> 8) + (uVar111 >> 8);
          uVar65 = (auVar103._4_4_ >> 8) + (uVar122 >> 8);
          uVar66 = (auVar103._8_4_ >> 8) + (uVar124 >> 8);
          uVar67 = (auVar103._12_4_ >> 8) + (uVar126 >> 8);
          auVar114._0_4_ = -(uint)(uVar58 < 0x4000);
          auVar114._4_4_ = -(uint)(uVar59 < 0x4000);
          auVar114._8_4_ = -(uint)(uVar60 < 0x4000);
          auVar114._12_4_ = -(uint)(uVar61 < 0x4000);
          auVar99._0_4_ = uVar58 >> 6;
          auVar99._4_4_ = uVar59 >> 6;
          auVar99._8_4_ = uVar60 >> 6;
          auVar99._12_4_ = uVar61 >> 6;
          auVar35[0] = ~-(iVar71 < -0x2204);
          auVar35._1_3_ = 0;
          auVar35[4] = ~(byte)iVar72;
          auVar35._5_2_ = 0;
          auVar35[7] = ~(byte)((uint)iVar72 >> 0x18);
          auVar35[8] = ~(byte)iVar79;
          auVar35[9] = ~(byte)((uint)iVar79 >> 8);
          auVar35[10] = ~(byte)((uint)iVar79 >> 0x10);
          auVar35[0xb] = ~(byte)((uint)iVar79 >> 0x18);
          auVar35[0xc] = ~(byte)iVar80;
          auVar35[0xd] = ~(byte)((uint)iVar80 >> 8);
          auVar35[0xe] = ~(byte)((uint)iVar80 >> 0x10);
          auVar35[0xf] = ~(byte)((uint)iVar80 >> 0x18);
          auVar35 = auVar35 ^ (auVar35 ^ auVar99) & auVar114;
          uVar58 = uVar62 - 0x4515;
          uVar59 = uVar65 - 0x4515;
          uVar60 = uVar66 - 0x4515;
          uVar61 = uVar67 - 0x4515;
          iVar71 = -(uint)(uVar65 < 0x4515);
          iVar72 = -(uint)(uVar66 < 0x4515);
          iVar79 = -(uint)(uVar67 < 0x4515);
          auVar131._0_4_ = -(uint)(uVar58 < 0x4000);
          auVar131._4_4_ = -(uint)(uVar59 < 0x4000);
          auVar131._8_4_ = -(uint)(uVar60 < 0x4000);
          auVar131._12_4_ = -(uint)(uVar61 < 0x4000);
          auVar100._0_4_ = uVar58 >> 6;
          auVar100._4_4_ = uVar59 >> 6;
          auVar100._8_4_ = uVar60 >> 6;
          auVar100._12_4_ = uVar61 >> 6;
          auVar115[0] = ~-(uVar62 < 0x4515);
          auVar115._1_3_ = 0;
          auVar115[4] = ~(byte)iVar71;
          auVar115._5_2_ = 0;
          auVar115[7] = ~(byte)((uint)iVar71 >> 0x18);
          auVar115[8] = ~(byte)iVar72;
          auVar115[9] = ~(byte)((uint)iVar72 >> 8);
          auVar115[10] = ~(byte)((uint)iVar72 >> 0x10);
          auVar115[0xb] = ~(byte)((uint)iVar72 >> 0x18);
          auVar115[0xc] = ~(byte)iVar79;
          auVar115[0xd] = ~(byte)((uint)iVar79 >> 8);
          auVar115[0xe] = ~(byte)((uint)iVar79 >> 0x10);
          auVar115[0xf] = ~(byte)((uint)iVar79 >> 0x18);
          auVar100 = auVar100 ^ (auVar100 ^ auVar115) & ~auVar131;
          uVar58 = uVar53 - 0x4515;
          uVar59 = uVar54 - 0x4515;
          uVar60 = uVar56 - 0x4515;
          uVar61 = uVar57 - 0x4515;
          iVar71 = -(uint)(uVar54 < 0x4515);
          iVar72 = -(uint)(uVar56 < 0x4515);
          iVar79 = -(uint)(uVar57 < 0x4515);
          auVar132._0_4_ = -(uint)(uVar58 < 0x4000);
          auVar132._4_4_ = -(uint)(uVar59 < 0x4000);
          auVar132._8_4_ = -(uint)(uVar60 < 0x4000);
          auVar132._12_4_ = -(uint)(uVar61 < 0x4000);
          auVar116._0_4_ = uVar58 >> 6;
          auVar116._4_4_ = uVar59 >> 6;
          auVar116._8_4_ = uVar60 >> 6;
          auVar116._12_4_ = uVar61 >> 6;
          auVar39[0] = ~-(uVar53 < 0x4515);
          auVar39._1_3_ = 0;
          auVar39[4] = ~(byte)iVar71;
          auVar39._5_2_ = 0;
          auVar39[7] = ~(byte)((uint)iVar71 >> 0x18);
          auVar39[8] = ~(byte)iVar72;
          auVar39[9] = ~(byte)((uint)iVar72 >> 8);
          auVar39[10] = ~(byte)((uint)iVar72 >> 0x10);
          auVar39[0xb] = ~(byte)((uint)iVar72 >> 0x18);
          auVar39[0xc] = ~(byte)iVar79;
          auVar39[0xd] = ~(byte)((uint)iVar79 >> 8);
          auVar39[0xe] = ~(byte)((uint)iVar79 >> 0x10);
          auVar39[0xf] = ~(byte)((uint)iVar79 >> 0x18);
          auVar39 = auVar39 ^ (auVar39 ^ auVar116) & auVar132;
          uVar53 = uVar46 - 0x4515;
          uVar54 = uVar49 - 0x4515;
          uVar56 = uVar50 - 0x4515;
          uVar57 = uVar51 - 0x4515;
          iVar71 = -(uint)(uVar49 < 0x4515);
          iVar72 = -(uint)(uVar50 < 0x4515);
          iVar79 = -(uint)(uVar51 < 0x4515);
          auVar133._0_4_ = -(uint)(uVar53 < 0x4000);
          auVar133._4_4_ = -(uint)(uVar54 < 0x4000);
          auVar133._8_4_ = -(uint)(uVar56 < 0x4000);
          auVar133._12_4_ = -(uint)(uVar57 < 0x4000);
          auVar117._0_4_ = uVar53 >> 6;
          auVar117._4_4_ = uVar54 >> 6;
          auVar117._8_4_ = uVar56 >> 6;
          auVar117._12_4_ = uVar57 >> 6;
          auVar38[0] = ~-(uVar46 < 0x4515);
          auVar38._1_3_ = 0;
          auVar38[4] = ~(byte)iVar71;
          auVar38._5_2_ = 0;
          auVar38[7] = ~(byte)((uint)iVar71 >> 0x18);
          auVar38[8] = ~(byte)iVar72;
          auVar38[9] = ~(byte)((uint)iVar72 >> 8);
          auVar38[10] = ~(byte)((uint)iVar72 >> 0x10);
          auVar38[0xb] = ~(byte)((uint)iVar72 >> 0x18);
          auVar38[0xc] = ~(byte)iVar79;
          auVar38[0xd] = ~(byte)((uint)iVar79 >> 8);
          auVar38[0xe] = ~(byte)((uint)iVar79 >> 0x10);
          auVar38[0xf] = ~(byte)((uint)iVar79 >> 0x18);
          auVar38 = auVar38 ^ (auVar38 ^ auVar117) & auVar133;
          uVar46 = uVar40 - 0x4515;
          uVar49 = uVar43 - 0x4515;
          uVar50 = uVar44 - 0x4515;
          uVar51 = uVar45 - 0x4515;
          iVar71 = -(uint)(uVar43 < 0x4515);
          iVar72 = -(uint)(uVar44 < 0x4515);
          iVar79 = -(uint)(uVar45 < 0x4515);
          auVar134._0_4_ = -(uint)(uVar46 < 0x4000);
          auVar134._4_4_ = -(uint)(uVar49 < 0x4000);
          auVar134._8_4_ = -(uint)(uVar50 < 0x4000);
          auVar134._12_4_ = -(uint)(uVar51 < 0x4000);
          auVar118._0_4_ = uVar46 >> 6;
          auVar118._4_4_ = uVar49 >> 6;
          auVar118._8_4_ = uVar50 >> 6;
          auVar118._12_4_ = uVar51 >> 6;
          auVar31[0] = ~-(uVar40 < 0x4515);
          auVar31._1_3_ = 0;
          auVar31[4] = ~(byte)iVar71;
          auVar31._5_2_ = 0;
          auVar31[7] = ~(byte)((uint)iVar71 >> 0x18);
          auVar31[8] = ~(byte)iVar72;
          auVar31[9] = ~(byte)((uint)iVar72 >> 8);
          auVar31[10] = ~(byte)((uint)iVar72 >> 0x10);
          auVar31[0xb] = ~(byte)((uint)iVar72 >> 0x18);
          auVar31[0xc] = ~(byte)iVar79;
          auVar31[0xd] = ~(byte)((uint)iVar79 >> 8);
          auVar31[0xe] = ~(byte)((uint)iVar79 >> 0x10);
          auVar31[0xf] = ~(byte)((uint)iVar79 >> 0x18);
          auVar31 = auVar31 ^ (auVar31 ^ auVar118) & auVar134;
          *puVar10 = 0xff;
          puVar10[1] = auVar101[0];
          puVar10[2] = auVar25[0];
          puVar10[3] = auVar39[0];
          puVar10[4] = 0xff;
          puVar10[5] = auVar101[1];
          puVar10[6] = auVar25[4];
          puVar10[7] = auVar39[4];
          puVar10[8] = 0xff;
          puVar10[9] = auVar101[2];
          puVar10[10] = auVar25[8];
          puVar10[0xb] = auVar39[8];
          puVar10[0xc] = 0xff;
          puVar10[0xd] = auVar101[3];
          puVar10[0xe] = auVar25[0xc];
          puVar10[0xf] = auVar39[0xc];
          puVar10[0x10] = 0xff;
          puVar10[0x11] = auVar101[4];
          puVar10[0x12] = auVar105[0];
          puVar10[0x13] = auVar100[0];
          puVar10[0x14] = 0xff;
          puVar10[0x15] = auVar101[5];
          puVar10[0x16] = auVar105[4];
          puVar10[0x17] = auVar100[4];
          puVar10[0x18] = 0xff;
          puVar10[0x19] = auVar101[6];
          puVar10[0x1a] = auVar105[8];
          puVar10[0x1b] = auVar100[8];
          puVar10[0x1c] = 0xff;
          puVar10[0x1d] = auVar101[7];
          puVar10[0x1e] = auVar105[0xc];
          puVar10[0x1f] = auVar100[0xc];
          puVar10[0x20] = 0xff;
          puVar10[0x21] = auVar101[8];
          puVar10[0x22] = auVar35[0];
          puVar10[0x23] = auVar31[0];
          puVar10[0x24] = 0xff;
          puVar10[0x25] = auVar101[9];
          puVar10[0x26] = auVar35[4];
          puVar10[0x27] = auVar31[4];
          puVar10[0x28] = 0xff;
          puVar10[0x29] = auVar101[10];
          puVar10[0x2a] = auVar35[8];
          puVar10[0x2b] = auVar31[8];
          puVar10[0x2c] = 0xff;
          puVar10[0x2d] = auVar101[0xb];
          puVar10[0x2e] = auVar35[0xc];
          puVar10[0x2f] = auVar31[0xc];
          puVar10[0x30] = 0xff;
          puVar10[0x31] = auVar101[0xc];
          puVar10[0x32] = auVar42[0];
          puVar10[0x33] = auVar38[0];
          puVar10[0x34] = 0xff;
          puVar10[0x35] = auVar101[0xd];
          puVar10[0x36] = auVar42[4];
          puVar10[0x37] = auVar38[4];
          puVar10[0x38] = 0xff;
          puVar10[0x39] = auVar101[0xe];
          puVar10[0x3a] = auVar42[8];
          puVar10[0x3b] = auVar38[8];
          puVar10[0x3c] = 0xff;
          puVar10[0x3d] = auVar101[0xf];
          puVar10[0x3e] = auVar42[0xc];
          puVar10[0x3f] = auVar38[0xc];
          puVar10 = puVar10 + 0x40;
          uVar14 = uVar14 - 0x10;
          pauVar18 = pauVar18 + 1;
          pauVar20 = pauVar20 + 1;
          pauVar22 = pauVar22 + 1;
        } while (uVar14 != 0);
        if (uVar13 == uVar11) {
          return;
        }
        uVar14 = uVar13;
        if ((param_5 >> 3 & 1) == 0) goto LAB_002318b0;
      }
      auVar9 = _UNK_007eeb80;
      auVar8 = _UNK_007eeb70;
      auVar7 = _UNK_007edcc0;
      auVar6 = _UNK_007edcb0;
      uVar13 = uVar11 & 0x7ffffff8;
      lVar12 = uVar14 - uVar13;
      puVar10 = param_4 + uVar14 * 4;
      puVar19 = (ulong *)(*param_3 + uVar14);
      puVar21 = (ulong *)(*param_2 + uVar14);
      puVar23 = (undefined8 *)(*param_1 + uVar14);
      do {
        uVar106 = *puVar23;
        auVar112._0_8_ = *puVar19;
        auVar112._8_8_ = 0;
        auVar129 = a64_TBL(ZEXT816(0),auVar112,auVar7);
        auVar113 = a64_TBL(ZEXT816(0),auVar112,auVar6);
        uVar26 = CONCAT26(auVar113._12_2_,
                          CONCAT24(auVar113._8_2_,CONCAT22(auVar113._4_2_,auVar113._0_2_)));
        uVar55 = CONCAT26(auVar129._12_2_,
                          CONCAT24(auVar129._8_2_,CONCAT22(auVar129._4_2_,auVar129._0_2_)));
        uVar108 = (uint)(byte)((ulong)uVar106 >> 0x20) * 0x4a85;
        uVar119 = (uint)(byte)((ulong)uVar106 >> 0x28) * 0x4a85;
        uVar123 = (uint)(byte)((ulong)uVar106 >> 0x30) * 0x4a85;
        uVar125 = (uint)(byte)((ulong)uVar106 >> 0x38) * 0x4a85;
        auVar107 = NEON_umull((ulong)CONCAT16((char)((ulong)uVar106 >> 0x18),
                                              (uint6)CONCAT14((char)((ulong)uVar106 >> 0x10),
                                                              (uint)CONCAT12((char)((ulong)uVar106
                                                                                   >> 8),
                                                                             (ushort)(byte)uVar106))
                                             ),0x4a854a854a854a85,2);
        auVar113 = NEON_umull(uVar55,0x6625662566256625,2);
        auVar129 = NEON_umull(uVar26,0x6625662566256625,2);
        uVar40 = (auVar113._0_4_ >> 8) + (uVar108 >> 8);
        uVar43 = (auVar113._4_4_ >> 8) + (uVar119 >> 8);
        uVar44 = (auVar113._8_4_ >> 8) + (uVar123 >> 8);
        uVar45 = (auVar113._12_4_ >> 8) + (uVar125 >> 8);
        uVar109 = auVar107._0_4_;
        uVar110 = auVar107._4_4_;
        uVar120 = auVar107._8_4_;
        uVar121 = auVar107._12_4_;
        uVar46 = (auVar129._0_4_ >> 8) + (uVar109 >> 8);
        uVar49 = (auVar129._4_4_ >> 8) + (uVar110 >> 8);
        uVar50 = (auVar129._8_4_ >> 8) + (uVar120 >> 8);
        uVar51 = (auVar129._12_4_ >> 8) + (uVar121 >> 8);
        uVar53 = uVar46 - 0x379a;
        uVar56 = uVar49 - 0x379a;
        uVar58 = uVar50 - 0x379a;
        uVar60 = uVar51 - 0x379a;
        uVar61 = uVar40 - 0x379a;
        uVar65 = uVar43 - 0x379a;
        uVar67 = uVar44 - 0x379a;
        uVar69 = uVar45 - 0x379a;
        iVar71 = -(uint)(uVar61 < 0x4000);
        iVar79 = -(uint)(uVar65 < 0x4000);
        iVar82 = -(uint)(uVar67 < 0x4000);
        iVar87 = -(uint)(uVar69 < 0x4000);
        uVar62 = uVar61 >> 6;
        uVar66 = uVar65 >> 6;
        uVar68 = uVar67 >> 6;
        iVar72 = -(uint)(uVar53 < 0x4000);
        iVar80 = -(uint)(uVar56 < 0x4000);
        iVar83 = -(uint)(uVar58 < 0x4000);
        iVar88 = -(uint)(uVar60 < 0x4000);
        uVar54 = uVar53 >> 6;
        uVar57 = uVar56 >> 6;
        uVar59 = uVar58 >> 6;
        auVar75._0_8_ = *puVar21;
        auVar75._8_8_ = 0;
        auVar47[0] = (byte)uVar62 & (byte)iVar71 | ~-(uVar40 < 0x379a) & ~(byte)iVar71;
        auVar47[1] = (byte)(uVar62 >> 8) & (byte)((uint)iVar71 >> 8);
        auVar47[2] = (byte)(uVar62 >> 0x10) & (byte)((uint)iVar71 >> 0x10);
        auVar47[3] = (byte)(uVar61 >> 0x1e) & (byte)((uint)iVar71 >> 0x18);
        auVar47[4] = (byte)uVar66 & (byte)iVar79 | ~-(uVar43 < 0x379a) & ~(byte)iVar79;
        auVar47[5] = (byte)(uVar66 >> 8) & (byte)((uint)iVar79 >> 8);
        auVar47[6] = (byte)(uVar66 >> 0x10) & (byte)((uint)iVar79 >> 0x10);
        auVar47[7] = (byte)(uVar65 >> 0x1e) & (byte)((uint)iVar79 >> 0x18);
        auVar47[8] = (byte)uVar68 & (byte)iVar82 | ~-(uVar44 < 0x379a) & ~(byte)iVar82;
        auVar47[9] = (byte)(uVar68 >> 8) & (byte)((uint)iVar82 >> 8);
        auVar47[10] = (byte)(uVar68 >> 0x10) & (byte)((uint)iVar82 >> 0x10);
        auVar47[0xb] = (byte)(uVar67 >> 0x1e) & (byte)((uint)iVar82 >> 0x18);
        auVar47[0xc] = (byte)(uVar69 >> 6) & (byte)iVar87 | ~-(uVar45 < 0x379a) & ~(byte)iVar87;
        auVar47[0xd] = (byte)((uVar69 >> 6) >> 8) & (byte)((uint)iVar87 >> 8);
        auVar47[0xe] = (byte)((uint3)(uVar69 >> 0xe) >> 8) & (byte)((uint)iVar87 >> 0x10);
        auVar47[0xf] = (byte)(uVar69 >> 0x1e) & (byte)((uint)iVar87 >> 0x18);
        auVar41[0] = (byte)uVar54 & (byte)iVar72 | ~-(uVar46 < 0x379a) & ~(byte)iVar72;
        auVar41[1] = (byte)(uVar54 >> 8) & (byte)((uint)iVar72 >> 8);
        auVar41[2] = (byte)(uVar54 >> 0x10) & (byte)((uint)iVar72 >> 0x10);
        auVar41[3] = (byte)(uVar53 >> 0x1e) & (byte)((uint)iVar72 >> 0x18);
        auVar41[4] = (byte)uVar57 & (byte)iVar80 | ~-(uVar49 < 0x379a) & ~(byte)iVar80;
        auVar41[5] = (byte)(uVar57 >> 8) & (byte)((uint)iVar80 >> 8);
        auVar41[6] = (byte)(uVar57 >> 0x10) & (byte)((uint)iVar80 >> 0x10);
        auVar41[7] = (byte)(uVar56 >> 0x1e) & (byte)((uint)iVar80 >> 0x18);
        auVar41[8] = (byte)uVar59 & (byte)iVar83 | ~-(uVar50 < 0x379a) & ~(byte)iVar83;
        auVar41[9] = (byte)(uVar59 >> 8) & (byte)((uint)iVar83 >> 8);
        auVar41[10] = (byte)(uVar59 >> 0x10) & (byte)((uint)iVar83 >> 0x10);
        auVar41[0xb] = (byte)(uVar58 >> 0x1e) & (byte)((uint)iVar83 >> 0x18);
        auVar41[0xc] = (byte)(uVar60 >> 6) & (byte)iVar88 | ~-(uVar51 < 0x379a) & ~(byte)iVar88;
        auVar41[0xd] = (byte)((uVar60 >> 6) >> 8) & (byte)((uint)iVar88 >> 8);
        auVar41[0xe] = (byte)((uint3)(uVar60 >> 0xe) >> 8) & (byte)((uint)iVar88 >> 0x10);
        auVar41[0xf] = (byte)(uVar60 >> 0x1e) & (byte)((uint)iVar88 >> 0x18);
        auVar113 = a64_TBL(ZEXT816(0),auVar75,auVar6);
        auVar129 = a64_TBL(ZEXT816(0),auVar75,auVar7);
        uVar52 = CONCAT26(auVar129._12_2_,
                          CONCAT24(auVar129._8_2_,CONCAT22(auVar129._4_2_,auVar129._0_2_)));
        uVar106 = CONCAT26(auVar113._12_2_,
                           CONCAT24(auVar113._8_2_,CONCAT22(auVar113._4_2_,auVar113._0_2_)));
        auVar76 = NEON_umull(uVar106,0x1913191319131913,2);
        auVar113 = NEON_umull(uVar26,0x3408340834083408,2);
        auVar129 = NEON_umull(uVar52,0x1913191319131913,2);
        auVar107 = NEON_umull(uVar55,0x3408340834083408,2);
        iVar127 = (uVar108 >> 8) - ((auVar129._0_4_ >> 8) + (auVar107._0_4_ >> 8));
        iVar135 = (uVar119 >> 8) - ((auVar129._4_4_ >> 8) + (auVar107._4_4_ >> 8));
        iVar137 = (uVar123 >> 8) - ((auVar129._8_4_ >> 8) + (auVar107._8_4_ >> 8));
        iVar139 = (uVar125 >> 8) - ((auVar129._12_4_ >> 8) + (auVar107._12_4_ >> 8));
        auVar107 = NEON_umull(uVar52,0x811a811a811a811a,2);
        auVar129 = NEON_umull(uVar106,0x811a811a811a811a,2);
        iVar71 = (uVar109 >> 8) - ((auVar76._0_4_ >> 8) + (auVar113._0_4_ >> 8));
        iVar72 = (uVar110 >> 8) - ((auVar76._4_4_ >> 8) + (auVar113._4_4_ >> 8));
        iVar79 = (uVar120 >> 8) - ((auVar76._8_4_ >> 8) + (auVar113._8_4_ >> 8));
        iVar80 = (uVar121 >> 8) - ((auVar76._12_4_ >> 8) + (auVar113._12_4_ >> 8));
        uVar46 = (auVar107._0_4_ >> 8) + (uVar108 >> 8);
        uVar49 = (auVar107._4_4_ >> 8) + (uVar119 >> 8);
        uVar50 = (auVar107._8_4_ >> 8) + (uVar123 >> 8);
        uVar51 = (auVar107._12_4_ >> 8) + (uVar125 >> 8);
        uVar40 = (auVar129._0_4_ >> 8) + (uVar109 >> 8);
        uVar43 = (auVar129._4_4_ >> 8) + (uVar110 >> 8);
        uVar44 = (auVar129._8_4_ >> 8) + (uVar120 >> 8);
        uVar45 = (auVar129._12_4_ >> 8) + (uVar121 >> 8);
        uVar53 = uVar40 - 0x4515;
        uVar58 = uVar43 - 0x4515;
        uVar62 = uVar44 - 0x4515;
        uVar68 = uVar45 - 0x4515;
        uVar109 = uVar46 - 0x4515;
        uVar120 = uVar49 - 0x4515;
        uVar108 = uVar50 - 0x4515;
        uVar123 = uVar51 - 0x4515;
        iVar82 = -(uint)(uVar109 < 0x4000);
        iVar87 = -(uint)(uVar120 < 0x4000);
        iVar84 = -(uint)(uVar108 < 0x4000);
        iVar89 = -(uint)(uVar123 < 0x4000);
        uVar110 = uVar109 >> 6;
        uVar121 = uVar120 >> 6;
        uVar119 = uVar108 >> 6;
        iVar83 = -(uint)(uVar53 < 0x4000);
        iVar88 = -(uint)(uVar58 < 0x4000);
        iVar85 = -(uint)(uVar62 < 0x4000);
        iVar90 = -(uint)(uVar68 < 0x4000);
        uVar54 = uVar53 >> 6;
        uVar59 = uVar58 >> 6;
        uVar65 = uVar62 >> 6;
        auVar113 = a64_TBL(ZEXT816(0),auVar41,auVar47,auVar9);
        uVar56 = iVar127 + 0x2204;
        uVar60 = iVar135 + 0x2204;
        uVar66 = iVar137 + 0x2204;
        uVar69 = iVar139 + 0x2204;
        iVar128 = -(uint)(uVar56 < 0x4000);
        iVar136 = -(uint)(uVar60 < 0x4000);
        iVar138 = -(uint)(uVar66 < 0x4000);
        iVar140 = -(uint)(uVar69 < 0x4000);
        uVar57 = uVar56 >> 6;
        uVar61 = uVar60 >> 6;
        uVar67 = uVar66 >> 6;
        auVar77[0] = (byte)uVar57 & (byte)iVar128 | ~-(iVar127 < -0x2204) & ~(byte)iVar128;
        auVar77[1] = (byte)(uVar57 >> 8) & (byte)((uint)iVar128 >> 8);
        auVar77[2] = (byte)(uVar57 >> 0x10) & (byte)((uint)iVar128 >> 0x10);
        auVar77[3] = (byte)(uVar56 >> 0x1e) & (byte)((uint)iVar128 >> 0x18);
        auVar77[4] = (byte)uVar61 & (byte)iVar136 | ~-(iVar135 < -0x2204) & ~(byte)iVar136;
        auVar77[5] = (byte)(uVar61 >> 8) & (byte)((uint)iVar136 >> 8);
        auVar77[6] = (byte)(uVar61 >> 0x10) & (byte)((uint)iVar136 >> 0x10);
        auVar77[7] = (byte)(uVar60 >> 0x1e) & (byte)((uint)iVar136 >> 0x18);
        auVar77[8] = (byte)uVar67 & (byte)iVar138 | ~-(iVar137 < -0x2204) & ~(byte)iVar138;
        auVar77[9] = (byte)(uVar67 >> 8) & (byte)((uint)iVar138 >> 8);
        auVar77[10] = (byte)(uVar67 >> 0x10) & (byte)((uint)iVar138 >> 0x10);
        auVar77[0xb] = (byte)(uVar66 >> 0x1e) & (byte)((uint)iVar138 >> 0x18);
        auVar77[0xc] = (byte)(uVar69 >> 6) & (byte)iVar140 | ~-(iVar139 < -0x2204) & ~(byte)iVar140;
        auVar77[0xd] = (byte)((uVar69 >> 6) >> 8) & (byte)((uint)iVar140 >> 8);
        auVar77[0xe] = (byte)((uint3)(uVar69 >> 0xe) >> 8) & (byte)((uint)iVar140 >> 0x10);
        auVar77[0xf] = (byte)(uVar69 >> 0x1e) & (byte)((uint)iVar140 >> 0x18);
        uVar56 = iVar71 + 0x2204;
        uVar60 = iVar72 + 0x2204;
        uVar66 = iVar79 + 0x2204;
        uVar69 = iVar80 + 0x2204;
        iVar127 = -(uint)(uVar56 < 0x4000);
        iVar128 = -(uint)(uVar60 < 0x4000);
        iVar135 = -(uint)(uVar66 < 0x4000);
        iVar136 = -(uint)(uVar69 < 0x4000);
        uVar57 = uVar56 >> 6;
        uVar61 = uVar60 >> 6;
        uVar67 = uVar66 >> 6;
        auVar64[0] = (byte)uVar57 & (byte)iVar127 | ~-(iVar71 < -0x2204) & ~(byte)iVar127;
        auVar64[1] = (byte)(uVar57 >> 8) & (byte)((uint)iVar127 >> 8);
        auVar64[2] = (byte)(uVar57 >> 0x10) & (byte)((uint)iVar127 >> 0x10);
        auVar64[3] = (byte)(uVar56 >> 0x1e) & (byte)((uint)iVar127 >> 0x18);
        auVar64[4] = (byte)uVar61 & (byte)iVar128 | ~-(iVar72 < -0x2204) & ~(byte)iVar128;
        auVar64[5] = (byte)(uVar61 >> 8) & (byte)((uint)iVar128 >> 8);
        auVar64[6] = (byte)(uVar61 >> 0x10) & (byte)((uint)iVar128 >> 0x10);
        auVar64[7] = (byte)(uVar60 >> 0x1e) & (byte)((uint)iVar128 >> 0x18);
        auVar64[8] = (byte)uVar67 & (byte)iVar135 | ~-(iVar79 < -0x2204) & ~(byte)iVar135;
        auVar64[9] = (byte)(uVar67 >> 8) & (byte)((uint)iVar135 >> 8);
        auVar64[10] = (byte)(uVar67 >> 0x10) & (byte)((uint)iVar135 >> 0x10);
        auVar64[0xb] = (byte)(uVar66 >> 0x1e) & (byte)((uint)iVar135 >> 0x18);
        auVar64[0xc] = (byte)(uVar69 >> 6) & (byte)iVar136 | ~-(iVar80 < -0x2204) & ~(byte)iVar136;
        auVar64[0xd] = (byte)((uVar69 >> 6) >> 8) & (byte)((uint)iVar136 >> 8);
        auVar64[0xe] = (byte)((uint3)(uVar69 >> 0xe) >> 8) & (byte)((uint)iVar136 >> 0x10);
        auVar64[0xf] = (byte)(uVar69 >> 0x1e) & (byte)((uint)iVar136 >> 0x18);
        auVar4[1] = (byte)(uVar54 >> 8) & (byte)((uint)iVar83 >> 8);
        auVar4[0] = (byte)uVar54 & (byte)iVar83 | ~-(uVar40 < 0x4515) & ~(byte)iVar83;
        auVar4[2] = (byte)(uVar54 >> 0x10) & (byte)((uint)iVar83 >> 0x10);
        auVar4[3] = (byte)(uVar53 >> 0x1e) & (byte)((uint)iVar83 >> 0x18);
        auVar4[4] = (byte)uVar59 & (byte)iVar88 | ~-(uVar43 < 0x4515) & ~(byte)iVar88;
        auVar4[5] = (byte)(uVar59 >> 8) & (byte)((uint)iVar88 >> 8);
        auVar4[6] = (byte)(uVar59 >> 0x10) & (byte)((uint)iVar88 >> 0x10);
        auVar4[7] = (byte)(uVar58 >> 0x1e) & (byte)((uint)iVar88 >> 0x18);
        auVar4[8] = (byte)uVar65 & (byte)iVar85 | ~-(uVar44 < 0x4515) & ~(byte)iVar85;
        auVar4[9] = (byte)(uVar65 >> 8) & (byte)((uint)iVar85 >> 8);
        auVar4[10] = (byte)(uVar65 >> 0x10) & (byte)((uint)iVar85 >> 0x10);
        auVar4[0xb] = (byte)(uVar62 >> 0x1e) & (byte)((uint)iVar85 >> 0x18);
        auVar4[0xc] = (byte)(uVar68 >> 6) & (byte)iVar90 | ~-(uVar45 < 0x4515) & ~(byte)iVar90;
        auVar4[0xd] = (byte)((uVar68 >> 6) >> 8) & (byte)((uint)iVar90 >> 8);
        auVar4[0xe] = (byte)((uint3)(uVar68 >> 0xe) >> 8) & (byte)((uint)iVar90 >> 0x10);
        auVar4[0xf] = (byte)(uVar68 >> 0x1e) & (byte)((uint)iVar90 >> 0x18);
        auVar5[1] = (byte)(uVar110 >> 8) & (byte)((uint)iVar82 >> 8);
        auVar5[0] = (byte)uVar110 & (byte)iVar82 | ~-(uVar46 < 0x4515) & ~(byte)iVar82;
        auVar5[2] = (byte)(uVar110 >> 0x10) & (byte)((uint)iVar82 >> 0x10);
        auVar5[3] = (byte)(uVar109 >> 0x1e) & (byte)((uint)iVar82 >> 0x18);
        auVar5[4] = (byte)uVar121 & (byte)iVar87 | ~-(uVar49 < 0x4515) & ~(byte)iVar87;
        auVar5[5] = (byte)(uVar121 >> 8) & (byte)((uint)iVar87 >> 8);
        auVar5[6] = (byte)(uVar121 >> 0x10) & (byte)((uint)iVar87 >> 0x10);
        auVar5[7] = (byte)(uVar120 >> 0x1e) & (byte)((uint)iVar87 >> 0x18);
        auVar5[8] = (byte)uVar119 & (byte)iVar84 | ~-(uVar50 < 0x4515) & ~(byte)iVar84;
        auVar5[9] = (byte)(uVar119 >> 8) & (byte)((uint)iVar84 >> 8);
        auVar5[10] = (byte)(uVar119 >> 0x10) & (byte)((uint)iVar84 >> 0x10);
        auVar5[0xb] = (byte)(uVar108 >> 0x1e) & (byte)((uint)iVar84 >> 0x18);
        auVar5[0xc] = (byte)(uVar123 >> 6) & (byte)iVar89 | ~-(uVar51 < 0x4515) & ~(byte)iVar89;
        auVar5[0xd] = (byte)((uVar123 >> 6) >> 8) & (byte)((uint)iVar89 >> 8);
        auVar5[0xe] = (byte)((uint3)(uVar123 >> 0xe) >> 8) & (byte)((uint)iVar89 >> 0x10);
        auVar5[0xf] = (byte)(uVar123 >> 0x1e) & (byte)((uint)iVar89 >> 0x18);
        auVar129 = a64_TBL(ZEXT816(0),auVar64,auVar77,auVar4,auVar5,auVar8);
        auVar107 = NEON_ext(auVar129,auVar129,8,1);
        *puVar10 = 0xff;
        puVar10[1] = auVar113[0];
        puVar10[2] = auVar129[0];
        puVar10[3] = auVar107[0];
        puVar10[4] = 0xff;
        puVar10[5] = auVar113[1];
        puVar10[6] = auVar129[1];
        puVar10[7] = auVar107[1];
        puVar10[8] = 0xff;
        puVar10[9] = auVar113[2];
        puVar10[10] = auVar129[2];
        puVar10[0xb] = auVar107[2];
        puVar10[0xc] = 0xff;
        puVar10[0xd] = auVar113[3];
        puVar10[0xe] = auVar129[3];
        puVar10[0xf] = auVar107[3];
        puVar10[0x10] = 0xff;
        puVar10[0x11] = auVar113[4];
        puVar10[0x12] = auVar129[4];
        puVar10[0x13] = auVar107[4];
        puVar10[0x14] = 0xff;
        puVar10[0x15] = auVar113[5];
        puVar10[0x16] = auVar129[5];
        puVar10[0x17] = auVar107[5];
        puVar10[0x18] = 0xff;
        puVar10[0x19] = auVar113[6];
        puVar10[0x1a] = auVar129[6];
        puVar10[0x1b] = auVar107[6];
        puVar10[0x1c] = 0xff;
        puVar10[0x1d] = auVar113[7];
        puVar10[0x1e] = auVar129[7];
        puVar10[0x1f] = auVar107[7];
        puVar10 = puVar10 + 0x20;
        lVar12 = lVar12 + 8;
        puVar19 = puVar19 + 1;
        puVar21 = puVar21 + 1;
        puVar23 = puVar23 + 1;
      } while (lVar12 != 0);
      if (uVar13 == uVar11) {
        return;
      }
    }
  }
LAB_002318b0:
  lVar12 = uVar11 - uVar13;
  puVar10 = param_4 + uVar13 * 4 + 3;
  pbVar15 = *param_1 + uVar13;
  pbVar16 = *param_2 + uVar13;
  pbVar17 = *param_3 + uVar13;
  do {
    bVar1 = *pbVar15;
    bVar2 = *pbVar16;
    bVar3 = *pbVar17;
    puVar10[-3] = 0xff;
    uVar44 = (uint)bVar1 * 0x4a85 >> 8;
    uVar40 = uVar44 + ((uint)bVar3 * 0x6625 >> 8);
    uVar43 = uVar40 - 0x379a;
    uVar92 = 0;
    if (0x3799 < uVar40) {
      uVar92 = 0xff;
    }
    uVar93 = (char)(uVar43 >> 6);
    if (0x3fff < uVar43) {
      uVar93 = uVar92;
    }
    puVar10[-2] = uVar93;
    iVar71 = uVar44 - (((uint)bVar2 * 0x1913 >> 8) + ((uint)bVar3 * 0x3408 >> 8));
    uVar40 = iVar71 + 0x2204;
    uVar92 = 0;
    if (-0x2205 < iVar71) {
      uVar92 = 0xff;
    }
    uVar93 = (char)(uVar40 >> 6);
    if (0x3fff < uVar40) {
      uVar93 = uVar92;
    }
    puVar10[-1] = uVar93;
    uVar44 = uVar44 + ((uint)bVar2 * 0x811a >> 8);
    uVar40 = uVar44 - 0x4515;
    uVar92 = 0;
    if (0x4514 < uVar44) {
      uVar92 = 0xff;
    }
    uVar93 = (char)(uVar40 >> 6);
    if (0x3fff < uVar40) {
      uVar93 = uVar92;
    }
    *puVar10 = uVar93;
    lVar12 = lVar12 + -1;
    puVar10 = puVar10 + 4;
    pbVar15 = pbVar15 + 1;
    pbVar16 = pbVar16 + 1;
    pbVar17 = pbVar17 + 1;
  } while (lVar12 != 0);
                    /* WARNING: Read-only address (ram,0x007edcb0) is written */
                    /* WARNING: Read-only address (ram,0x007edcc0) is written */
                    /* WARNING: Read-only address (ram,0x007eeb70) is written */
                    /* WARNING: Read-only address (ram,0x007eeb80) is written */
  return;
}


