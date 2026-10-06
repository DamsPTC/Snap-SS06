/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1036909c4; end: 103690bab;  */

undefined1  [16] FUN_1036909c4(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
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
  undefined8 uStack_18;
  
  uVar3 = 0xed0000796c706552;
  uVar2 = 0x6f4e6172656d6163;
  switch(param_1) {
  case 1:
    pcVar4 = "cameraViewReplyLeft";
    goto code_r0x000103690b24;
  case 2:
    uVar3 = 0xee00746168437765;
    uVar2 = 0x69566172656d6163;
  case 0:
    auVar8._8_8_ = uVar3;
    auVar8._0_8_ = uVar2;
    return auVar8;
  case 3:
    pcVar4 = "cameraViewReplyHydra";
    goto code_r0x000103690b44;
  case 4:
    auVar6._8_8_ = 0x800000010f157ac0;
    auVar6._0_8_ = 0xd000000000000011;
    return auVar6;
  case 5:
    auVar10._8_8_ = 0x800000010f157aa0;
    auVar10._0_8_ = 0xd00000000000001c;
    return auVar10;
  case 6:
    pcVar4 = "cameraViewSnappable";
code_r0x000103690b24:
    auVar12._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    auVar12._0_8_ = 0xd000000000000013;
    return auVar12;
  case 7:
    pcVar4 = "cameraViewReplyOnStory";
    break;
  case 8:
    auVar14._8_8_ = 0x800000010f157a40;
    auVar14._0_8_ = 0xd000000000000019;
    return auVar14;
  case 9:
    pcVar4 = "cameraViewDirectorMode";
    break;
  case 10:
    pcVar4 = "cameraViewCameraRoll";
code_r0x000103690b44:
    auVar13._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    auVar13._0_8_ = 0xd000000000000014;
    return auVar13;
  case 0xb:
    auVar5._8_8_ = 0xe700000000000000;
    auVar5._0_8_ = 0x77656976657270;
    return auVar5;
  case 0xc:
    auVar7._8_8_ = 0xe90000000000006c;
    auVar7._0_8_ = 0x6c61436f65646976;
    return auVar7;
  case 0xd:
    auVar11._8_8_ = 0x800000010f1579e0;
    auVar11._0_8_ = 0xd00000000000001a;
    return auVar11;
  case 0xe:
    pcVar4 = "cameraViewQuickCapture";
    break;
  default:
    uStack_18 = param_1;
    func_0x000107c60614(&UNK_110781ab0,&uStack_18,&UNK_110781ab0,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103690bac);
    (*pcVar1)();
  }
  auVar9._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
  auVar9._0_8_ = 0xd000000000000016;
  return auVar9;
}



/* Entry: 103690bac; end: 10369115f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103690bac(double param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uStack_108;
  undefined1 auStack_100 [16];
  ulong *puStack_f0;
  undefined1 auStack_e0 [16];
  ulong *puStack_d0;
  undefined1 auStack_c0 [16];
  ulong *puStack_b0;
  ulong uStack_a0;
  long lStack_98;
  long alStack_90 [2];
  ulong *puStack_80;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c6157c(uVar6);
  func_0x0001000d224c(alStack_90);
  func_0x000107c61574(uVar6);
  if (alStack_90[0] == 0) {
    return;
  }
  func_0x000107c614f0(alStack_90[0]);
  func_0x000100bc7fa4();
  func_0x000107c61428(unaff_x20 + 0x10,alStack_90,0x21,0);
  FUN_1036914c8(param_2);
  lVar5 = param_3;
  func_0x000107c614a8(alStack_90);
  if (param_3 == 1) {
    uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
    FUN_1036909c4(uVar6);
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar5);
    if (param_4 == 0) {
      uVar3 = 0x64656c65636e6163;
      uVar9 = 0xe800000000000000;
    }
    else if (param_4 == 1) {
      uVar3 = 0x6564656563637573;
      uVar9 = 0xe900000000000064;
    }
    else {
      if (param_4 != 2) goto LAB_10369113c;
      uVar9 = 0xe600000000000000;
      uVar3 = 0x64656c696166;
    }
    func_0x000107c5fadc(uVar3,uVar9);
    func_0x000107c6142c(uVar9);
    func_0x000106bc8ac8(uVar4,uVar6,uVar3,1);
    func_0x00010369159c(param_2,1);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar3);
LAB_103690e0c:
    func_0x000107c615e8(alStack_90[0]);
    return;
  }
  if (param_3 == 2) goto LAB_103690e0c;
  uVar8 = 0x612f6e;
  if (param_3 == 0) {
    uVar6 = 0x612f6e;
    uStack_108 = 0xe300000000000000;
    lVar5 = -0x1d00000000000000;
  }
  else {
    uVar6 = 0x656e6f6e;
    uStack_a0 = uStack_a0 & 0xffffffffffffff00;
    if (*(long *)(param_3 + _DAT_1130820a8) == 0) {
      func_0x0001036915c0(param_2,param_3);
LAB_103690e2c:
      uStack_108 = 0xe400000000000000;
    }
    else {
      puStack_f0 = &uStack_a0;
      puStack_d0 = puStack_f0;
      puStack_b0 = puStack_f0;
      puStack_80 = puStack_f0;
      func_0x000103691614(param_2,param_3);
      func_0x0001036915c0(param_2,param_3);
      func_0x000104502c4c(0x1036915f4,alStack_90,0x1036915fc,auStack_c0,0x103691604,auStack_e0,
                          0x10369160c,auStack_100);
      func_0x00010369159c(param_2,param_3);
      if ((byte)uStack_a0 < 2) {
        if ((byte)uStack_a0 == 0) goto LAB_103690e2c;
        uStack_108 = 0xec00000065707954;
      }
      else {
        if ((byte)uStack_a0 != 2) {
          if ((byte)uStack_a0 == 3) {
            uStack_108 = 0xea00000000007473;
            uVar6 = 0x694c7365736e656c;
          }
          else {
            uStack_108 = 0xe700000000000000;
            uVar6 = 0x747865746e6f63;
          }
          goto LAB_103690e88;
        }
        uStack_108 = 0xee00656372756f53;
      }
      uVar6 = 0x6c6573756f726163;
    }
LAB_103690e88:
    uStack_a0 = 0;
    lStack_98 = 0;
    if (*(long *)(param_3 + _DAT_1130820a8) == 0) {
      lVar5 = -0x1d00000000000000;
    }
    else {
      puStack_f0 = &uStack_a0;
      puStack_d0 = puStack_f0;
      puStack_b0 = puStack_f0;
      puStack_80 = puStack_f0;
      func_0x0001036915c0(param_2,param_3);
      func_0x000104502c4c(0x1036915d4,alStack_90,0x1036915dc,auStack_c0,0x1036915e4,auStack_e0,
                          0x1036915ec,auStack_100);
      func_0x00010369159c(param_2,param_3);
      if (lStack_98 != 0) {
        uVar8 = uStack_a0;
      }
      lVar5 = -0x1d00000000000000;
      if (lStack_98 != 0) {
        lVar5 = lStack_98;
      }
    }
  }
  if ((int)param_4 == 1) {
    uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
    uVar2 = uVar8;
    func_0x000107c5fadc(uVar8,lVar5);
    uVar4 = uVar6;
    uVar3 = uStack_108;
    func_0x000107c5fadc(uVar6,uStack_108);
    uVar9 = *(undefined8 *)(unaff_x20 + 0x28);
    FUN_1036909c4(uVar9);
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar3);
    param_1 = param_1 * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103691134);
      (*pcVar1)();
    }
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103691138);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10369113c);
      (*pcVar1)();
    }
    func_0x000106bc84ac(uVar7,uVar2,uVar4,uVar9,(uint)param_2 & 1,(long)param_1);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar9);
  }
  uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c5fadc(uVar8,lVar5);
  func_0x000107c6142c(lVar5);
  uVar4 = uStack_108;
  func_0x000107c5fadc(uVar6,uStack_108);
  func_0x000107c6142c(uStack_108);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  FUN_1036909c4(uVar3);
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar4);
  if (param_4 == 0) {
    uVar4 = 0x64656c65636e6163;
    uVar7 = 0xe800000000000000;
  }
  else if (param_4 == 1) {
    uVar4 = 0x6564656563637573;
    uVar7 = 0xe900000000000064;
  }
  else {
    if (param_4 != 2) {
LAB_10369113c:
      alStack_90[0] = param_4;
      func_0x000107c60614(&UNK_110726668,alStack_90,&UNK_110726668,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103691160);
      (*pcVar1)();
    }
    uVar7 = 0xe600000000000000;
    uVar4 = 0x64656c696166;
  }
  func_0x000107c5fadc(uVar4,uVar7);
  func_0x000107c6142c(uVar7);
  func_0x000106bc8794(uVar9,uVar8,uVar6,uVar3,uVar4,1);
  func_0x00010369159c(param_2,param_3);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(alStack_90[0]);
  func_0x00010369159c(param_2,param_3);
  return;
}



/* Entry: 103691160; end: 1036911b3;  */

void FUN_103691160(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1036911b4; end: 103691297;  */

void FUN_1036911b4(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lStack_48;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c6157c(uVar4);
  func_0x0001000d224c(&lStack_48);
  func_0x000107c61574(uVar4);
  if (lStack_48 != 0) {
    lVar1 = lStack_48;
    func_0x000107c614f0(lStack_48);
    puVar2 = &UNK_11067a248;
    func_0x000107c613fc(&UNK_11067a248,0x18,7);
    func_0x000107c61644(puVar2 + 0x10);
    puVar3 = &UNK_11067a270;
    func_0x000107c613fc(&UNK_11067a270,0x20,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(undefined8 *)(puVar3 + 0x18) = param_1;
    func_0x000107c6157c(puVar2);
    func_0x000107c61174(param_1);
    func_0x00010090569c(FUN_1036914ac,puVar3,lVar1);
    func_0x000107c615e8(lStack_48);
    func_0x000107c61574(puVar2);
    func_0x000107c61574(puVar3);
  }
  return;
}



/* Entry: 103691298; end: 103691313;  */

void FUN_103691298(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    func_0x000103f69f98(0x1036914b4,param_1,0x1036914bc,param_1,0x1036914c4,param_1);
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 103691314; end: 1036913cb;  */

void FUN_103691314(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_5 + 0x10,auStack_58,0x21,0);
  func_0x000107c61174(param_4);
  uVar2 = *(undefined8 *)(param_5 + 0x10);
  func_0x000107c61434(param_2);
  func_0x000107c61558(uVar2);
  uVar1 = *(undefined8 *)(param_5 + 0x10);
  *(undefined8 *)(param_5 + 0x10) = 0x8000000000000000;
  FUN_103691c14(param_3 & 1,param_4,param_1,param_2,uVar2);
  func_0x000107c6142c(param_2);
  *(undefined8 *)(param_5 + 0x10) = uVar1;
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1036913cc; end: 103691467;  */

void FUN_1036913cc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0x21,0);
  func_0x000107c61434(param_2);
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  func_0x000107c61558(uVar1);
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  *(undefined8 *)(param_3 + 0x10) = 0x8000000000000000;
  FUN_103691c14(0,1,param_1,param_2,uVar1);
  func_0x000107c6142c(param_2);
  *(undefined8 *)(param_3 + 0x10) = uVar2;
  func_0x000107c614a8(auStack_48);
  return;
}



/* Entry: 103691468; end: 1036914ab; -[_TtC33LensCarouselPerformanceLoggerImpl29LensCarouselPerformanceLogger logCarouselOperationEvent:] */

void FUN_103691468(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  FUN_1036911b4(param_3);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 1036914ac; end: 1036914c7;  */

void FUN_1036914ac(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar1 + 0x10,auStack_38,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    func_0x000103f69f98(0x1036914b4,lVar1,0x1036914bc,lVar1,0x1036914c4,lVar1);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 1036914c8; end: 10369159b;  */

undefined1  [16] FUN_1036914c8(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long *unaff_x20;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  lVar3 = *unaff_x20;
  func_0x000107c61434(lVar3);
  func_0x000100029284();
  func_0x000107c6142c(lVar3);
  if ((param_2 & 1) == 0) {
    uVar4 = 0;
    uVar5 = 2;
  }
  else {
    iVar2 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar3 = *unaff_x20;
    if (iVar2 == 0) {
      func_0x0001036917d4();
    }
    func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar3 + 0x30) + param_1 * 0x10 + 8));
    puVar1 = (undefined8 *)(*(long *)(lVar3 + 0x38) + param_1 * 0x10);
    uVar4 = *puVar1;
    uVar5 = puVar1[1];
    FUN_103691624(param_1,lVar3);
    *unaff_x20 = lVar3;
  }
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = uVar4;
  return auVar6;
}



/* Entry: 10369159c; end: 103691623;  */

void FUN_10369159c(undefined8 param_1,long param_2)

{
  if (param_2 == 2) {
    return;
  }
  if (param_2 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 103691624; end: 103691c13;  */

void FUN_103691624(ulong param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined1 auStack_a8 [72];
  
  lVar1 = param_2 + 0x40;
  uVar7 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar9 = param_1 + 1 & (uVar7 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar1 + (uVar9 >> 6) * 8) >> (uVar9 & 0x3f) & 1) != 0) {
    uVar7 = ~uVar7;
    uVar10 = param_1;
    func_0x000107c6026c(param_1,lVar1,uVar7);
    uVar10 = uVar10 + 1 & uVar7;
    do {
      puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar9 * 0x10);
      uVar11 = *puVar2;
      uVar4 = puVar2[1];
      func_0x000107c6068c(auStack_a8,*(undefined8 *)(param_2 + 0x28));
      func_0x000107c61434(uVar4);
      puVar6 = auStack_a8;
      func_0x000107c5fb58(puVar6,uVar11,uVar4);
      func_0x000107c606a8();
      func_0x000107c6142c(uVar4);
      uVar8 = (ulong)puVar6 & uVar7;
      if ((long)param_1 < (long)uVar10) {
        if (uVar8 < uVar10) {
LAB_103691718:
          if ((long)param_1 < (long)uVar8) goto LAB_1036916a0;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + param_1 * 0x10);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar9 * 0x10);
        if (((long)param_1 < (long)uVar9) || (puVar3 + 2 <= puVar2 || param_1 != uVar9)) {
          uVar11 = *puVar3;
          puVar2[1] = puVar3[1];
          *puVar2 = uVar11;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0x38) + param_1 * 0x10);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar9 * 0x10);
        if ((((long)param_1 < (long)uVar9) || (puVar3 + 2 <= puVar2)) || (param_1 != uVar9)) {
          uVar11 = *puVar3;
          puVar2[1] = puVar3[1];
          *puVar2 = uVar11;
          param_1 = uVar9;
        }
      }
      else if (uVar10 <= uVar8) goto LAB_103691718;
LAB_1036916a0:
      uVar9 = uVar9 + 1 & uVar7;
    } while ((*(ulong *)(lVar1 + (uVar9 >> 6) * 8) >> (uVar9 & 0x3f) & 1) != 0);
  }
  uVar7 = param_1 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar7) = *(ulong *)(lVar1 + uVar7) & (-1L << (param_1 & 0x3f)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1036917d4);
  (*pcVar5)();
}



/* Entry: 103691c14; end: 103691d6f;  */

ulong FUN_103691c14(ulong param_1,ulong param_2,ulong param_3,ulong param_4,uint param_5)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  uVar3 = param_3;
  uVar4 = param_4;
  func_0x000100029284();
  lVar5 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar7;
  if (SCARRY8(lVar5,uVar7)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103691cf0);
    (*pcVar2)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar6) {
    func_0x000103691958(lVar6,param_5 & 1);
    uVar3 = param_3;
    uVar7 = param_4;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar7 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103691cb8);
      (*pcVar2)();
    }
  }
  else if ((param_5 & 1) == 0) {
    func_0x0001036917d4();
    lVar6 = *unaff_x20;
    goto joined_r0x000103691d04;
  }
  lVar6 = *unaff_x20;
joined_r0x000103691d04:
  if ((uVar4 & 1) == 0) {
    lVar5 = lVar6 + (uVar3 >> 6) * 8;
    *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
    puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
    *puVar1 = param_3;
    puVar1[1] = param_4;
    puVar1 = (ulong *)(*(long *)(lVar6 + 0x38) + uVar3 * 0x10);
    *puVar1 = param_1;
    puVar1[1] = param_2;
    if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103691d70);
      (*pcVar2)();
    }
    *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_4);
    return param_4;
  }
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x38) + uVar3 * 0x10);
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (uVar4 != 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar4);
    return uVar4;
  }
  return uVar3;
}



/* Entry: 103691d70; end: 10369204f;  */

void FUN_103691d70(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  if (-1 < (int)uVar1 + -1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 103692050; end: 103692073;  */

void FUN_103692050(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11067a428;
  func_0x0001000285a8(0x112f845b8,&UNK_10dbf8758);
  func_0x000107c613fc(&UNK_11067a428,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_103692244,puVar1);
  return;
}



/* Entry: 103692074; end: 103692243;  */

void FUN_103692074(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = 0x112f5cad0;
  func_0x0001000285a8(0x112f5cad0,&UNK_10dbb5f60);
  func_0x000107c61534();
  *(undefined8 *)(lVar1 + 0x18) = 8;
  *(undefined8 *)(lVar1 + 0x10) = 4;
  uVar4 = 0x112f845d0;
  func_0x0001000285a8(0x112f845d0,&UNK_10dbf8880);
  *(undefined8 *)(lVar1 + 0x20) = uVar4;
  func_0x000107c6157c(param_2);
  uVar2 = 0x1036927e0;
  func_0x0001000823a8(0x1036927e0,param_2);
  *(undefined8 *)(lVar1 + 0x40) = uVar4;
  *(undefined8 *)(lVar1 + 0x28) = uVar2;
  uVar4 = 0x112f5cd08;
  func_0x0001000285a8(0x112f5cd08,&UNK_10dbf89f0);
  *(undefined8 *)(lVar1 + 0x48) = uVar4;
  func_0x000107c6157c(param_3);
  uVar2 = 0x103692800;
  func_0x0001000823a8(0x103692800,param_3);
  *(undefined8 *)(lVar1 + 0x68) = uVar4;
  *(undefined8 *)(lVar1 + 0x50) = uVar2;
  uVar4 = 0x112f845d8;
  func_0x0001000285a8(0x112f845d8,&UNK_10dbf8888);
  *(undefined8 *)(lVar1 + 0x70) = uVar4;
  func_0x000107c6157c(param_4);
  uVar2 = 0x103692820;
  func_0x0001000823a8(0x103692820,param_4);
  *(undefined8 *)(lVar1 + 0x90) = uVar4;
  *(undefined8 *)(lVar1 + 0x78) = uVar2;
  uVar4 = 0x112f845e0;
  func_0x0001000285a8(0x112f845e0,&UNK_10dbf8890);
  *(undefined8 *)(lVar1 + 0x98) = uVar4;
  func_0x000107c6157c(param_5);
  uVar2 = 0x103692840;
  func_0x0001000823a8(0x103692840,param_5);
  *(undefined8 *)(lVar1 + 0xb8) = uVar4;
  *(undefined8 *)(lVar1 + 0xa0) = uVar2;
  lVar3 = lVar1;
  func_0x0001006c82b4();
  func_0x000107c61588(lVar1);
  uVar4 = 0x112f36640;
  func_0x0001000285a8(0x112f36640,&UNK_10dbb6990);
  func_0x000107c61408((undefined8 *)(lVar1 + 0x20),4,uVar4);
  uVar4 = 0;
  func_0x0001045078bc(0);
  func_0x000107c610f8();
  func_0x000104507920(lVar3,uVar4);
  *param_1 = lVar3;
  return;
}



/* Entry: 103692244; end: 103692273;  */

void FUN_103692244(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar5 = 0x112f5cad0;
  func_0x0001000285a8(0x112f5cad0,&UNK_10dbb5f60);
  func_0x000107c61534();
  *(undefined8 *)(lVar5 + 0x18) = 8;
  *(undefined8 *)(lVar5 + 0x10) = 4;
  uVar8 = 0x112f845d0;
  func_0x0001000285a8(0x112f845d0,&UNK_10dbf8880);
  *(undefined8 *)(lVar5 + 0x20) = uVar8;
  func_0x000107c6157c(uVar1);
  uVar6 = 0x1036927e0;
  func_0x0001000823a8(0x1036927e0,uVar1);
  *(undefined8 *)(lVar5 + 0x40) = uVar8;
  *(undefined8 *)(lVar5 + 0x28) = uVar6;
  uVar8 = 0x112f5cd08;
  func_0x0001000285a8(0x112f5cd08,&UNK_10dbf89f0);
  *(undefined8 *)(lVar5 + 0x48) = uVar8;
  func_0x000107c6157c(uVar3);
  uVar6 = 0x103692800;
  func_0x0001000823a8(0x103692800,uVar3);
  *(undefined8 *)(lVar5 + 0x68) = uVar8;
  *(undefined8 *)(lVar5 + 0x50) = uVar6;
  uVar8 = 0x112f845d8;
  func_0x0001000285a8(0x112f845d8,&UNK_10dbf8888);
  *(undefined8 *)(lVar5 + 0x70) = uVar8;
  func_0x000107c6157c(uVar2);
  uVar6 = 0x103692820;
  func_0x0001000823a8(0x103692820,uVar2);
  *(undefined8 *)(lVar5 + 0x90) = uVar8;
  *(undefined8 *)(lVar5 + 0x78) = uVar6;
  uVar8 = 0x112f845e0;
  func_0x0001000285a8(0x112f845e0,&UNK_10dbf8890);
  *(undefined8 *)(lVar5 + 0x98) = uVar8;
  func_0x000107c6157c(uVar4);
  uVar6 = 0x103692840;
  func_0x0001000823a8(0x103692840,uVar4);
  *(undefined8 *)(lVar5 + 0xb8) = uVar8;
  *(undefined8 *)(lVar5 + 0xa0) = uVar6;
  lVar7 = lVar5;
  func_0x0001006c82b4();
  func_0x000107c61588(lVar5);
  uVar8 = 0x112f36640;
  func_0x0001000285a8(0x112f36640,&UNK_10dbb6990);
  func_0x000107c61408((undefined8 *)(lVar5 + 0x20),4,uVar8);
  uVar8 = 0;
  func_0x0001045078bc(0);
  func_0x000107c610f8();
  func_0x000104507920(lVar7,uVar8);
  *param_1 = lVar7;
  return;
}



/* Entry: 103692274; end: 1036923fb;  */

void FUN_103692274(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = 0x112f5cad0;
  func_0x0001000285a8(0x112f5cad0,&UNK_10dbb5f60);
  func_0x000107c61534();
  *(undefined8 *)(lVar1 + 0x18) = 6;
  *(undefined8 *)(lVar1 + 0x10) = 3;
  uVar4 = 0x112f845d0;
  func_0x0001000285a8(0x112f845d0,&UNK_10dbf8880);
  *(undefined8 *)(lVar1 + 0x20) = uVar4;
  func_0x000107c6157c(param_2);
  uVar2 = 0x103692780;
  func_0x0001000823a8(0x103692780,param_2);
  *(undefined8 *)(lVar1 + 0x40) = uVar4;
  *(undefined8 *)(lVar1 + 0x28) = uVar2;
  uVar4 = 0x112f845d8;
  func_0x0001000285a8(0x112f845d8,&UNK_10dbf8888);
  *(undefined8 *)(lVar1 + 0x48) = uVar4;
  func_0x000107c6157c(param_3);
  uVar2 = 0x1036927a0;
  func_0x0001000823a8(0x1036927a0,param_3);
  *(undefined8 *)(lVar1 + 0x68) = uVar4;
  *(undefined8 *)(lVar1 + 0x50) = uVar2;
  uVar4 = 0x112f845e0;
  func_0x0001000285a8(0x112f845e0,&UNK_10dbf8890);
  *(undefined8 *)(lVar1 + 0x70) = uVar4;
  func_0x000107c6157c(param_4);
  uVar2 = 0x1036927c0;
  func_0x0001000823a8(0x1036927c0,param_4);
  *(undefined8 *)(lVar1 + 0x90) = uVar4;
  *(undefined8 *)(lVar1 + 0x78) = uVar2;
  lVar3 = lVar1;
  func_0x0001006c82b4();
  func_0x000107c61588(lVar1);
  uVar4 = 0x112f36640;
  func_0x0001000285a8(0x112f36640,&UNK_10dbb6990);
  func_0x000107c61408((undefined8 *)(lVar1 + 0x20),3,uVar4);
  uVar4 = 0;
  func_0x0001045078dc(0);
  func_0x000107c610f8();
  func_0x000104507928(lVar3,uVar4);
  *param_1 = lVar3;
  return;
}



/* Entry: 1036923fc; end: 10369242b;  */

void FUN_1036923fc(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar3 = 0x112f5cad0;
  func_0x0001000285a8(0x112f5cad0,&UNK_10dbb5f60);
  func_0x000107c61534();
  *(undefined8 *)(lVar3 + 0x18) = 6;
  *(undefined8 *)(lVar3 + 0x10) = 3;
  uVar6 = 0x112f845d0;
  func_0x0001000285a8(0x112f845d0,&UNK_10dbf8880);
  *(undefined8 *)(lVar3 + 0x20) = uVar6;
  func_0x000107c6157c(uVar1);
  uVar4 = 0x103692780;
  func_0x0001000823a8(0x103692780,uVar1);
  *(undefined8 *)(lVar3 + 0x40) = uVar6;
  *(undefined8 *)(lVar3 + 0x28) = uVar4;
  uVar6 = 0x112f845d8;
  func_0x0001000285a8(0x112f845d8,&UNK_10dbf8888);
  *(undefined8 *)(lVar3 + 0x48) = uVar6;
  func_0x000107c6157c(uVar2);
  uVar4 = 0x1036927a0;
  func_0x0001000823a8(0x1036927a0,uVar2);
  *(undefined8 *)(lVar3 + 0x68) = uVar6;
  *(undefined8 *)(lVar3 + 0x50) = uVar4;
  uVar6 = 0x112f845e0;
  func_0x0001000285a8(0x112f845e0,&UNK_10dbf8890);
  *(undefined8 *)(lVar3 + 0x70) = uVar6;
  func_0x000107c6157c(uVar7);
  uVar4 = 0x1036927c0;
  func_0x0001000823a8(0x1036927c0,uVar7);
  *(undefined8 *)(lVar3 + 0x90) = uVar6;
  *(undefined8 *)(lVar3 + 0x78) = uVar4;
  lVar5 = lVar3;
  func_0x0001006c82b4();
  func_0x000107c61588(lVar3);
  uVar6 = 0x112f36640;
  func_0x0001000285a8(0x112f36640,&UNK_10dbb6990);
  func_0x000107c61408((undefined8 *)(lVar3 + 0x20),3,uVar6);
  uVar6 = 0;
  func_0x0001045078dc(0);
  func_0x000107c610f8();
  func_0x000104507928(lVar5,uVar6);
  *param_1 = lVar5;
  return;
}



/* Entry: 10369242c; end: 1036924bb;  */

void FUN_10369242c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  func_0x0001000285a8(param_4,param_5);
  func_0x000107c613fc(param_6,0x28,7);
  *(undefined8 *)(param_6 + 0x10) = param_2;
  *(undefined8 *)(param_6 + 0x18) = param_1;
  *(undefined8 *)(param_6 + 0x20) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(param_7,param_6);
  return;
}



/* Entry: 1036924bc; end: 103692643;  */

void FUN_1036924bc(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar1 = 0x112f5cad0;
  func_0x0001000285a8(0x112f5cad0,&UNK_10dbb5f60);
  func_0x000107c61534();
  *(undefined8 *)(lVar1 + 0x18) = 6;
  *(undefined8 *)(lVar1 + 0x10) = 3;
  uVar5 = 0x112f845d0;
  func_0x0001000285a8(0x112f845d0,&UNK_10dbf8880);
  *(undefined8 *)(lVar1 + 0x20) = uVar5;
  func_0x000107c6157c(param_2);
  pcVar2 = FUN_1036926c4;
  func_0x0001000823a8(FUN_1036926c4,param_2);
  *(undefined8 *)(lVar1 + 0x40) = uVar5;
  *(code **)(lVar1 + 0x28) = pcVar2;
  uVar5 = 0x112f845d8;
  func_0x0001000285a8(0x112f845d8,&UNK_10dbf8888);
  *(undefined8 *)(lVar1 + 0x48) = uVar5;
  func_0x000107c6157c(param_3);
  uVar3 = 0x1036926e4;
  func_0x0001000823a8(0x1036926e4,param_3);
  *(undefined8 *)(lVar1 + 0x68) = uVar5;
  *(undefined8 *)(lVar1 + 0x50) = uVar3;
  uVar5 = 0x112f845e0;
  func_0x0001000285a8(0x112f845e0,&UNK_10dbf8890);
  *(undefined8 *)(lVar1 + 0x70) = uVar5;
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_103692760;
  func_0x0001000823a8(FUN_103692760,param_4);
  *(undefined8 *)(lVar1 + 0x90) = uVar5;
  *(code **)(lVar1 + 0x78) = pcVar2;
  lVar4 = lVar1;
  func_0x0001006c82b4();
  func_0x000107c61588(lVar1);
  uVar5 = 0x112f36640;
  func_0x0001000285a8(0x112f36640,&UNK_10dbb6990);
  func_0x000107c61408((undefined8 *)(lVar1 + 0x20),3,uVar5);
  uVar5 = 0;
  func_0x0001045078fc(0);
  func_0x000107c610f8();
  func_0x000100b5e6f4(lVar4,uVar5);
  *param_1 = lVar4;
  return;
}



/* Entry: 103692644; end: 103692677;  */

void FUN_103692644(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103692678; end: 1036926c3;  */

void FUN_103692678(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar2 = 0x112f5cad0;
  func_0x0001000285a8(0x112f5cad0,&UNK_10dbb5f60);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 6;
  *(undefined8 *)(lVar2 + 0x10) = 3;
  uVar6 = 0x112f845d0;
  func_0x0001000285a8(0x112f845d0,&UNK_10dbf8880);
  *(undefined8 *)(lVar2 + 0x20) = uVar6;
  func_0x000107c6157c(uVar4);
  pcVar3 = FUN_1036926c4;
  func_0x0001000823a8(FUN_1036926c4,uVar4);
  *(undefined8 *)(lVar2 + 0x40) = uVar6;
  *(code **)(lVar2 + 0x28) = pcVar3;
  uVar6 = 0x112f845d8;
  func_0x0001000285a8(0x112f845d8,&UNK_10dbf8888);
  *(undefined8 *)(lVar2 + 0x48) = uVar6;
  func_0x000107c6157c(uVar1);
  uVar4 = 0x1036926e4;
  func_0x0001000823a8(0x1036926e4,uVar1);
  *(undefined8 *)(lVar2 + 0x68) = uVar6;
  *(undefined8 *)(lVar2 + 0x50) = uVar4;
  uVar6 = 0x112f845e0;
  func_0x0001000285a8(0x112f845e0,&UNK_10dbf8890);
  *(undefined8 *)(lVar2 + 0x70) = uVar6;
  func_0x000107c6157c(uVar7);
  pcVar3 = FUN_103692760;
  func_0x0001000823a8(FUN_103692760,uVar7);
  *(undefined8 *)(lVar2 + 0x90) = uVar6;
  *(code **)(lVar2 + 0x78) = pcVar3;
  lVar5 = lVar2;
  func_0x0001006c82b4();
  func_0x000107c61588(lVar2);
  uVar6 = 0x112f36640;
  func_0x0001000285a8(0x112f36640,&UNK_10dbb6990);
  func_0x000107c61408((undefined8 *)(lVar2 + 0x20),3,uVar6);
  uVar6 = 0;
  func_0x0001045078fc(0);
  func_0x000107c610f8();
  func_0x000100b5e6f4(lVar5,uVar6);
  *param_1 = lVar5;
  return;
}



/* Entry: 1036926c4; end: 103692703;  */

void FUN_1036926c4(void)

{
  FUN_103692704();
  return;
}



/* Entry: 103692704; end: 10369275f;  */

void FUN_103692704(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + *param_3);
  func_0x000107c61174();
  func_0x000107c61170(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 103692760; end: 1036928df;  */

void FUN_103692760(void)

{
  FUN_103692704();
  return;
}



/* Entry: 1036928e0; end: 1036928fb;  */

void FUN_1036928e0(undefined8 param_1)

{
  func_0x0001000285a8(0x112f845e8,&UNK_10dbf88b0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_103692a64,param_1);
  return;
}



/* Entry: 1036928fc; end: 103692a63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036928fc(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uVar2 = 0;
  func_0x000100083b20(&lStack_58);
  lVar1 = *(long *)(lStack_58 + _DAT_113081cb0);
  func_0x000107c61174();
  func_0x000107c61170(lStack_58);
  lVar5 = *(long *)(lVar1 + _DAT_113082208);
  func_0x000107c61434(lVar5);
  func_0x000107c61170(lVar1);
  if (*(long *)(lVar5 + 0x10) == 0) {
LAB_10369299c:
    uStack_48 = 0;
    uStack_50 = 0;
    lStack_38 = 0;
    uStack_40 = 0;
  }
  else {
    lVar1 = 0x112f5cd08;
    uVar4 = 0;
    func_0x0001000285a8(0x112f5cd08);
    func_0x0001000a7158();
    if ((uVar4 & 1) == 0) goto LAB_10369299c;
    func_0x0001000bb420(*(long *)(lVar5 + 0x38) + lVar1 * 0x20,&uStack_50);
  }
  func_0x000107c6142c(lVar5);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(&uStack_50);
  }
  else {
    uVar6 = 0x112f5cd08;
    func_0x0001000285a8(0x112f5cd08,&UNK_10dbf89f0);
    func_0x000107c6147c(&uStack_60,&uStack_50,PTR___sypN_11034f1a8 + 8,uVar6,6);
    if ((uVar2 & 1) != 0) {
      func_0x000107c6157c(uStack_60);
      func_0x000100083b20(&uStack_50);
      func_0x000107c61574(uStack_60);
      uVar6 = uStack_50;
      goto LAB_103692a24;
    }
  }
  uVar6 = 0;
  uStack_60 = 0;
LAB_103692a24:
  uVar3 = 0;
  func_0x000104475928(0);
  func_0x000107c610f8();
  func_0x000104475814(uVar6,uVar3);
  func_0x000107c61574(uStack_60);
  *param_1 = uVar6;
  return;
}



/* Entry: 103692a64; end: 103692a87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103692a64(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uVar2 = 0;
  func_0x000100083b20(&lStack_58);
  lVar1 = *(long *)(lStack_58 + _DAT_113081cb0);
  func_0x000107c61174();
  func_0x000107c61170(lStack_58);
  lVar5 = *(long *)(lVar1 + _DAT_113082208);
  func_0x000107c61434(lVar5);
  func_0x000107c61170(lVar1);
  if (*(long *)(lVar5 + 0x10) == 0) {
LAB_10369299c:
    uStack_48 = 0;
    uStack_50 = 0;
    lStack_38 = 0;
    uStack_40 = 0;
  }
  else {
    lVar1 = 0x112f5cd08;
    uVar4 = 0;
    func_0x0001000285a8(0x112f5cd08);
    func_0x0001000a7158();
    if ((uVar4 & 1) == 0) goto LAB_10369299c;
    func_0x0001000bb420(*(long *)(lVar5 + 0x38) + lVar1 * 0x20,&uStack_50);
  }
  func_0x000107c6142c(lVar5);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(&uStack_50);
  }
  else {
    uVar6 = 0x112f5cd08;
    func_0x0001000285a8(0x112f5cd08,&UNK_10dbf89f0);
    func_0x000107c6147c(&uStack_60,&uStack_50,PTR___sypN_11034f1a8 + 8,uVar6,6);
    if ((uVar2 & 1) != 0) {
      func_0x000107c6157c(uStack_60);
      func_0x000100083b20(&uStack_50);
      func_0x000107c61574(uStack_60);
      uVar6 = uStack_50;
      goto LAB_103692a24;
    }
  }
  uVar6 = 0;
  uStack_60 = 0;
LAB_103692a24:
  uVar3 = 0;
  func_0x000104475928(0);
  func_0x000107c610f8();
  func_0x000104475814(uVar6,uVar3);
  func_0x000107c61574(uStack_60);
  *param_1 = uVar6;
  return;
}



/* Entry: 103692a88; end: 103692bf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103692a88(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uVar4 = 0;
  func_0x000100083b20(&lStack_58);
  lVar2 = *(long *)(lStack_58 + _DAT_113081cb0);
  func_0x000107c61174();
  func_0x000107c61170(lStack_58);
  lVar7 = *(long *)(lVar2 + _DAT_113082208);
  func_0x000107c61434(lVar7);
  func_0x000107c61170(lVar2);
  if (*(long *)(lVar7 + 0x10) != 0) {
    lVar2 = 0x112f845d8;
    uVar6 = 0;
    func_0x0001000285a8(0x112f845d8);
    func_0x0001000a7158();
    if ((uVar6 & 1) != 0) {
      func_0x0001000bb420(*(long *)(lVar7 + 0x38) + lVar2 * 0x20,&uStack_50);
      goto LAB_103692b30;
    }
  }
  uStack_48 = 0;
  uStack_50 = 0;
  lStack_38 = 0;
  uStack_40 = 0;
LAB_103692b30:
  func_0x000107c6142c(lVar7);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(&uStack_50);
  }
  else {
    uVar3 = 0x112f845d8;
    func_0x0001000285a8(0x112f845d8,&UNK_10dbf8888);
    func_0x000107c6147c(&uStack_60,&uStack_50,PTR___sypN_11034f1a8 + 8,uVar3,6);
    if ((uVar4 & 1) != 0) {
      func_0x000100083b20(&uStack_50);
      uVar3 = uStack_50;
      uVar5 = 0;
      func_0x000103f9520c(0);
      func_0x000107c610f8();
      func_0x000103f95070(uVar3,uVar5);
      func_0x000107c61574(uStack_60);
      *param_1 = uVar3;
      return;
    }
  }
  func_0x0001048d9980(0xd00000000000004d,0x800000010f157be0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103692bf4);
  (*pcVar1)();
}



/* Entry: 103692bf4; end: 103692c17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103692bf4(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uVar4 = 0;
  func_0x000100083b20(&lStack_58);
  lVar2 = *(long *)(lStack_58 + _DAT_113081cb0);
  func_0x000107c61174();
  func_0x000107c61170(lStack_58);
  lVar7 = *(long *)(lVar2 + _DAT_113082208);
  func_0x000107c61434(lVar7);
  func_0x000107c61170(lVar2);
  if (*(long *)(lVar7 + 0x10) != 0) {
    lVar2 = 0x112f845d8;
    uVar6 = 0;
    func_0x0001000285a8(0x112f845d8);
    func_0x0001000a7158();
    if ((uVar6 & 1) != 0) {
      func_0x0001000bb420(*(long *)(lVar7 + 0x38) + lVar2 * 0x20,&uStack_50);
      goto LAB_103692b30;
    }
  }
  uStack_48 = 0;
  uStack_50 = 0;
  lStack_38 = 0;
  uStack_40 = 0;
LAB_103692b30:
  func_0x000107c6142c(lVar7);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(&uStack_50);
  }
  else {
    uVar3 = 0x112f845d8;
    func_0x0001000285a8(0x112f845d8,&UNK_10dbf8888);
    func_0x000107c6147c(&uStack_60,&uStack_50,PTR___sypN_11034f1a8 + 8,uVar3,6);
    if ((uVar4 & 1) != 0) {
      func_0x000100083b20(&uStack_50);
      uVar3 = uStack_50;
      uVar5 = 0;
      func_0x000103f9520c(0);
      func_0x000107c610f8();
      func_0x000103f95070(uVar3,uVar5);
      func_0x000107c61574(uStack_60);
      *param_1 = uVar3;
      return;
    }
  }
  func_0x0001048d9980(0xd00000000000004d,0x800000010f157be0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103692bf4);
  (*pcVar1)();
}



/* Entry: 103692c18; end: 103692d83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103692c18(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uVar4 = 0;
  func_0x000100083b20(&lStack_58);
  lVar2 = *(long *)(lStack_58 + _DAT_113081cb0);
  func_0x000107c61174();
  func_0x000107c61170(lStack_58);
  lVar7 = *(long *)(lVar2 + _DAT_113082208);
  func_0x000107c61434(lVar7);
  func_0x000107c61170(lVar2);
  if (*(long *)(lVar7 + 0x10) != 0) {
    lVar2 = 0x112f845d0;
    uVar6 = 0;
    func_0x0001000285a8(0x112f845d0);
    func_0x0001000a7158();
    if ((uVar6 & 1) != 0) {
      func_0x0001000bb420(*(long *)(lVar7 + 0x38) + lVar2 * 0x20,&uStack_50);
      goto LAB_103692cc0;
    }
  }
  uStack_48 = 0;
  uStack_50 = 0;
  lStack_38 = 0;
  uStack_40 = 0;
LAB_103692cc0:
  func_0x000107c6142c(lVar7);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(&uStack_50);
  }
  else {
    uVar3 = 0x112f845d0;
    func_0x0001000285a8(0x112f845d0,&UNK_10dbf8880);
    func_0x000107c6147c(&uStack_60,&uStack_50,PTR___sypN_11034f1a8 + 8,uVar3,6);
    if ((uVar4 & 1) != 0) {
      func_0x000100083b20(&uStack_50);
      uVar3 = uStack_50;
      uVar5 = 0;
      func_0x000103f962dc(0);
      func_0x000107c610f8();
      func_0x000103f96140(uVar3,uVar5);
      func_0x000107c61574(uStack_60);
      *param_1 = uVar3;
      return;
    }
  }
  func_0x0001048d9980(0xd000000000000057,0x800000010f157b80);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103692d84);
  (*pcVar1)();
}



/* Entry: 103692d84; end: 103692da7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103692d84(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uVar4 = 0;
  func_0x000100083b20(&lStack_58);
  lVar2 = *(long *)(lStack_58 + _DAT_113081cb0);
  func_0x000107c61174();
  func_0x000107c61170(lStack_58);
  lVar7 = *(long *)(lVar2 + _DAT_113082208);
  func_0x000107c61434(lVar7);
  func_0x000107c61170(lVar2);
  if (*(long *)(lVar7 + 0x10) != 0) {
    lVar2 = 0x112f845d0;
    uVar6 = 0;
    func_0x0001000285a8(0x112f845d0);
    func_0x0001000a7158();
    if ((uVar6 & 1) != 0) {
      func_0x0001000bb420(*(long *)(lVar7 + 0x38) + lVar2 * 0x20,&uStack_50);
      goto LAB_103692cc0;
    }
  }
  uStack_48 = 0;
  uStack_50 = 0;
  lStack_38 = 0;
  uStack_40 = 0;
LAB_103692cc0:
  func_0x000107c6142c(lVar7);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(&uStack_50);
  }
  else {
    uVar3 = 0x112f845d0;
    func_0x0001000285a8(0x112f845d0,&UNK_10dbf8880);
    func_0x000107c6147c(&uStack_60,&uStack_50,PTR___sypN_11034f1a8 + 8,uVar3,6);
    if ((uVar4 & 1) != 0) {
      func_0x000100083b20(&uStack_50);
      uVar3 = uStack_50;
      uVar5 = 0;
      func_0x000103f962dc(0);
      func_0x000107c610f8();
      func_0x000103f96140(uVar3,uVar5);
      func_0x000107c61574(uStack_60);
      *param_1 = uVar3;
      return;
    }
  }
  func_0x0001048d9980(0xd000000000000057,0x800000010f157b80);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103692d84);
  (*pcVar1)();
}



/* Entry: 103692da8; end: 103692f63;  */

void FUN_103692da8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 103692f64; end: 103692fab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103692f64(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uVar4 = 0;
  func_0x000100083b20(&lStack_58);
  lVar2 = *(long *)(lStack_58 + _DAT_113081cb0);
  func_0x000107c61174();
  func_0x000107c61170(lStack_58);
  lVar7 = *(long *)(lVar2 + _DAT_113082208);
  func_0x000107c61434(lVar7);
  func_0x000107c61170(lVar2);
  if (*(long *)(lVar7 + 0x10) != 0) {
    lVar2 = 0x112f845e0;
    uVar6 = 0;
    func_0x0001000285a8(0x112f845e0);
    func_0x0001000a7158();
    if ((uVar6 & 1) != 0) {
      func_0x0001000bb420(*(long *)(lVar7 + 0x38) + lVar2 * 0x20,&uStack_50);
      goto LAB_103692ea0;
    }
  }
  uStack_48 = 0;
  uStack_50 = 0;
  lStack_38 = 0;
  uStack_40 = 0;
LAB_103692ea0:
  func_0x000107c6142c(lVar7);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(&uStack_50);
  }
  else {
    uVar3 = 0x112f845e0;
    func_0x0001000285a8(0x112f845e0,&UNK_10dbf8890);
    func_0x000107c6147c(&uStack_60,&uStack_50,PTR___sypN_11034f1a8 + 8,uVar3,6);
    if ((uVar4 & 1) != 0) {
      func_0x000100083b20(&uStack_50);
      uVar3 = uStack_50;
      uVar5 = 0;
      func_0x000103f95770(0);
      func_0x000107c610f8();
      func_0x000103f955d4(uVar3,uVar5);
      func_0x000107c61574(uStack_60);
      *param_1 = uVar3;
      return;
    }
  }
  func_0x0001048d9980(0xd00000000000005d,0x800000010f157b20);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103692f64);
  (*pcVar1)();
}



/* Entry: 103692fac; end: 103692fdf;  */

void FUN_103692fac(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 103692fe0; end: 103692fe7;  */

void FUN_103692fe0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103692fe8; end: 10369300b;  */

void FUN_103692fe8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10369300c; end: 10369308b;  */

void FUN_10369300c(undefined8 *param_1,undefined8 param_2)

{
  func_0x000100b5c038();
  *param_1 = param_2;
  return;
}



/* Entry: 10369308c; end: 1036931b7;  */

undefined * FUN_10369308c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar4 = &puStack_60;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c4b2ec();
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar3 = &UNK_11067a6e0;
  func_0x000107c613fc(&UNK_11067a6e0,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  pcStack_40 = FUN_10369322c;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_100b5f680;
  puStack_48 = &UNK_11067a6f8;
  puStack_38 = puVar3;
  func_0x000107c60bc4(&puStack_60);
  puVar3 = puStack_38;
  func_0x000107c61174(uVar1);
  func_0x000107c61574(puVar3);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  uVar5 = 0;
  func_0x000100b5c178(0);
  func_0x000107c610f8();
  func_0x000100b5c198(puVar2,uVar5);
  uVar5 = 0;
  func_0x000103f6b5e4(0);
  func_0x000107c610f8();
  func_0x000103f6b4d0(puVar2,uVar5);
  func_0x000107c61170(uVar1);
  return puVar2;
}



/* Entry: 1036931b8; end: 10369322b;  */

void FUN_1036931b8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x000107c4c18c();
    func_0x000107c61180();
    func_0x000107c615e8(param_1);
    puVar2 = PTR_PTR_1126aeea8;
    func_0x000107c610f8(PTR_PTR_1126aeea8);
    func_0x000107c453e4();
    uVar3 = 0;
    func_0x000100b5f734(0);
    func_0x000107c610f8();
    func_0x000100b5f754(puVar2,lVar1,uVar3);
  }
  return;
}



/* Entry: 10369322c; end: 103693257;  */

void FUN_10369322c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar1 = lVar4;
    func_0x000107c4c18c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar4);
    puVar2 = PTR_PTR_1126aeea8;
    func_0x000107c610f8(PTR_PTR_1126aeea8);
    func_0x000107c453e4();
    uVar3 = 0;
    func_0x000100b5f734(0);
    func_0x000107c610f8();
    func_0x000100b5f754(puVar2,lVar1,uVar3);
  }
  return;
}



/* Entry: 103693258; end: 1036932f7;  */

void FUN_103693258(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1036932f8; end: 103693377;  */

void FUN_1036932f8(undefined8 *param_1,undefined8 param_2)

{
  FUN_10369308c();
  *param_1 = param_2;
  return;
}



/* Entry: 103693378; end: 1036934a3;  */

undefined * FUN_103693378(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar4 = &puStack_60;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c4b2ec();
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar3 = &UNK_11067a748;
  func_0x000107c613fc(&UNK_11067a748,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  pcStack_40 = FUN_103693518;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_100b5f680;
  puStack_48 = &UNK_11067a760;
  puStack_38 = puVar3;
  func_0x000107c60bc4(&puStack_60);
  puVar3 = puStack_38;
  func_0x000107c61174(uVar1);
  func_0x000107c61574(puVar3);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  uVar5 = 0;
  func_0x000100b5c178(0);
  func_0x000107c610f8();
  func_0x000100b5c198(puVar2,uVar5);
  uVar5 = 0;
  func_0x000103f6b774(0);
  func_0x000107c610f8();
  func_0x000103f6b660(puVar2,uVar5);
  func_0x000107c61170(uVar1);
  return puVar2;
}



/* Entry: 1036934a4; end: 103693517;  */

void FUN_1036934a4(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x000107c4c18c();
    func_0x000107c61180();
    func_0x000107c615e8(param_1);
    puVar2 = PTR_PTR_1126aeea8;
    func_0x000107c610f8(PTR_PTR_1126aeea8);
    func_0x000107c453e4();
    uVar3 = 0;
    func_0x000100b5f734(0);
    func_0x000107c610f8();
    func_0x000100b5f754(puVar2,lVar1,uVar3);
  }
  return;
}



/* Entry: 103693518; end: 103693543;  */

void FUN_103693518(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar1 = lVar4;
    func_0x000107c4c18c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar4);
    puVar2 = PTR_PTR_1126aeea8;
    func_0x000107c610f8(PTR_PTR_1126aeea8);
    func_0x000107c453e4();
    uVar3 = 0;
    func_0x000100b5f734(0);
    func_0x000107c610f8();
    func_0x000100b5f754(puVar2,lVar1,uVar3);
  }
  return;
}



/* Entry: 103693544; end: 1036935e3;  */

void FUN_103693544(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1036935e4; end: 103693663;  */

void FUN_1036935e4(undefined8 *param_1,undefined8 param_2)

{
  FUN_103693378();
  *param_1 = param_2;
  return;
}



/* Entry: 103693664; end: 10369378f;  */

undefined * FUN_103693664(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar4 = &puStack_60;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c4b2ec();
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar3 = &UNK_11067a7b0;
  func_0x000107c613fc(&UNK_11067a7b0,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  pcStack_40 = FUN_103693804;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_100b5f680;
  puStack_48 = &UNK_11067a7c8;
  puStack_38 = puVar3;
  func_0x000107c60bc4(&puStack_60);
  puVar3 = puStack_38;
  func_0x000107c61174(uVar1);
  func_0x000107c61574(puVar3);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  uVar5 = 0;
  func_0x000100b5c178(0);
  func_0x000107c610f8();
  func_0x000100b5c198(puVar2,uVar5);
  uVar5 = 0;
  func_0x000103f6b904(0);
  func_0x000107c610f8();
  func_0x000103f6b7f0(puVar2,uVar5);
  func_0x000107c61170(uVar1);
  return puVar2;
}



/* Entry: 103693790; end: 103693803;  */

void FUN_103693790(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x000107c4c18c();
    func_0x000107c61180();
    func_0x000107c615e8(param_1);
    puVar2 = PTR_PTR_1126aeea8;
    func_0x000107c610f8(PTR_PTR_1126aeea8);
    func_0x000107c453e4();
    uVar3 = 0;
    func_0x000100b5f734(0);
    func_0x000107c610f8();
    func_0x000100b5f754(puVar2,lVar1,uVar3);
  }
  return;
}



/* Entry: 103693804; end: 10369382f;  */

void FUN_103693804(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar1 = lVar4;
    func_0x000107c4c18c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar4);
    puVar2 = PTR_PTR_1126aeea8;
    func_0x000107c610f8(PTR_PTR_1126aeea8);
    func_0x000107c453e4();
    uVar3 = 0;
    func_0x000100b5f734(0);
    func_0x000107c610f8();
    func_0x000100b5f754(puVar2,lVar1,uVar3);
  }
  return;
}



/* Entry: 103693830; end: 1036938cf;  */

void FUN_103693830(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1036938d0; end: 1036938f3;  */

void FUN_1036938d0(undefined8 *param_1,undefined8 param_2)

{
  FUN_103693664();
  *param_1 = param_2;
  return;
}



/* Entry: 1036938f4; end: 1036939ff;  */

void FUN_1036938f4(undefined8 param_1,ulong param_2,long param_3,uint param_4)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  undefined1 auStack_70 [16];
  long lStack_60;
  undefined1 uStack_58;
  char cStack_49;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 == 0) {
    return;
  }
  uVar3 = (uint)param_1;
  uVar1 = uVar3 >> 6 & 3;
  if ((uVar1 == 0) || (uVar3 = uVar3 & 0x3f, uVar1 == 1)) {
    if (((uVar3 & 0xff) != (param_4 & 0xff)) || ((param_2 & 1) == 0)) goto LAB_1036939e8;
    pcVar2 = (code *)0x103693bf8;
  }
  else {
    if (uVar3 != (param_4 & 0xff)) goto LAB_1036939e8;
    pcVar2 = FUN_103693c24;
  }
  lStack_60 = param_3;
  uStack_58 = (char)param_1;
  func_0x000100087bd4(&cStack_49,pcVar2,auStack_70,PTR___sSbN_11034dd40);
  if ((cStack_49 == '\x01') && (*(code **)(param_3 + 0x60) != (code *)0x0)) {
    (**(code **)(param_3 + 0x60))
              (*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18),param_1);
  }
LAB_1036939e8:
  func_0x000107c61574();
  return;
}



/* Entry: 103693a00; end: 103693a67;  */

void FUN_103693a00(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  
  bVar1 = 0xfd < *(byte *)(param_3 + 0x30);
  if (bVar1) {
    *(undefined1 *)(param_3 + 0x30) = 0xbe;
    func_0x000107c40fd4(*(undefined8 *)(param_3 + 0x48));
    *(undefined8 *)(param_3 + 0x78) = param_2;
    *(undefined1 *)(param_3 + 0x80) = 0;
  }
  *(bool *)param_1 = bVar1;
  return;
}



/* Entry: 103693a68; end: 103693b6b;  */

void FUN_103693a68(undefined1 *param_1,double param_2,long param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined1 uVar2;
  double dVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((byte)(*(byte *)(param_3 + 0x30) >> 1 | 0x20) == 0x7f) {
    if ((*(char *)(param_3 + 0x80) != '\x01') && (dVar3 = *(double *)(param_3 + 0x78), 0.0 < dVar3))
    {
      func_0x000107c40fd4(*(undefined8 *)(param_3 + 0x48));
      *(double *)(param_3 + 0x28) = param_2 - dVar3;
    }
    *(undefined1 *)(param_3 + 0x30) = param_4;
    uStack_50 = 0;
    uStack_48 = 0xe000000000000000;
    func_0x000107c602fc(0x14);
    func_0x000107c5fb78(0xd000000000000012,0x800000010f157d80);
    func_0x000107c5fddc(*(undefined8 *)(param_3 + 0x28),&uStack_50,
                        PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x000107c6142c(uStack_48);
    uVar1 = *(undefined8 *)(param_3 + 0x40);
    *(undefined8 *)(param_3 + 0x40) = 0;
    func_0x000107c61574(uVar1);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  *param_1 = uVar2;
  return;
}



/* Entry: 103693b6c; end: 103693c13;  */

void FUN_103693b6c(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  FUN_103693c14(*(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 103693c14; end: 103693c23;  */

void FUN_103693c14(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 103693c24; end: 103693c37;  */

void FUN_103693c24(void)

{
  func_0x000103693bf8();
  return;
}



/* Entry: 103693c38; end: 103693e1f;  */

int FUN_103693c38(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0x7d < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0x82) {
      iVar2 = 4;
    }
    if (param_2 + 0x82 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103693cb4;
        goto LAB_103693c98;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103693c98:
      return ((uint)*param_1 | uVar1 << 8) - 0x82;
    }
  }
LAB_103693cb4:
  uVar1 = ((uint)(*param_1 >> 6) | (*param_1 >> 1 & 0x1f) << 2) ^ 0x7f;
  if (0x7c < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103693e20; end: 103693e3f; -[_TtC27SCLensCarouselSchedulerImpl30LensCarouselOperationScheduler delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103693e20(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112f84a40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103693e40; end: 103693e9f; -[_TtC27SCLensCarouselSchedulerImpl30LensCarouselOperationScheduler init] */

void FUN_103693e40(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensCarouselSchedulerImpl.LensCarouselOperationScheduler",0x3a,"init()",6,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103693e6c);
  (*pcVar1)();
}



/* Entry: 103693ea0; end: 103693f27; -[_TtC27SCLensCarouselSchedulerImpl30LensCarouselOperationScheduler .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103693efc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103693f00) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103693ea0(long param_1)

{
  FUN_103695698(param_1 + _DAT_112f84a40);
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f84a48));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f84a50));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f84a58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f84a68));
  return;
}



/* Entry: 103693f28; end: 103694047; -[_TtC27SCLensCarouselSchedulerImpl30LensCarouselOperationScheduler startActivationRequestWithUuid:operation:completion:] */

void FUN_103693f28(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  puVar1 = &UNK_11067aa20;
  func_0x000107c613fc(&UNK_11067aa20,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  if (param_5 == 0) {
    puVar3 = (undefined *)0x0;
    pcVar2 = (code *)0x0;
  }
  else {
    puVar3 = &UNK_11067aa48;
    func_0x000107c613fc(&UNK_11067aa48,0x18,7);
    *(long *)(puVar3 + 0x10) = param_5;
    pcVar2 = FUN_1036956bc;
  }
  func_0x000107c61174(param_1);
  FUN_103694048(param_3,param_2,FUN_1036956d4,puVar1,pcVar2,puVar3,0,FUN_1036956d8,0x1036956ec);
  func_0x000101237350(pcVar2,puVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61574(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 103694048; end: 10369415b;  */

/* WARNING: Removing unreachable block (ram,0x0001036940c0) */
/* WARNING: Removing unreachable block (ram,0x0001036940e4) */
/* WARNING: Removing unreachable block (ram,0x000103694140) */
/* WARNING: Removing unreachable block (ram,0x000103694108) */
/* WARNING: Removing unreachable block (ram,0x000103694144) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103694048(void)

{
  undefined8 in_x7;
  undefined1 auStack_a0 [16];
  
  func_0x000100087bd4(in_x7,auStack_a0,PTR___sytN_11034f1b0 + 8);
  return;
}



/* Entry: 10369415c; end: 10369427b; -[_TtC27SCLensCarouselSchedulerImpl30LensCarouselOperationScheduler startDeactivationRequestWithUuid:operation:completion:] */

void FUN_10369415c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  puVar1 = &UNK_11067a8b8;
  func_0x000107c613fc(&UNK_11067a8b8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  if (param_5 == 0) {
    puVar3 = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    puVar3 = &UNK_11067a8e0;
    func_0x000107c613fc(&UNK_11067a8e0,0x18,7);
    *(long *)(puVar3 + 0x10) = param_5;
    uVar2 = 0x103694d68;
  }
  func_0x000107c61174(param_1);
  FUN_103694048(param_3,param_2,FUN_103694d64,puVar1,uVar2,puVar3,1,FUN_103694d7c,0x103694d90);
  func_0x000101237350(uVar2,puVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61574(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10369427c; end: 103694307;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10369427c(byte param_1)

{
  undefined1 auStack_50 [16];
  
  func_0x000100087bd4(FUN_1036956c0,auStack_50,PTR___sytN_11034f1b0 + 8);
  auStack_50[0] = 0;
  if ((param_1 & 1) == 0) {
    auStack_50[0] = 0x40;
  }
  func_0x0001002a64a8(auStack_50);
  return;
}



/* Entry: 103694308; end: 103694337; -[_TtC27SCLensCarouselSchedulerImpl30LensCarouselOperationScheduler didFinishCarouselPresentingWithSuccess:] */

void FUN_103694308(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_10369427c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103694338; end: 1036943c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103694338(byte param_1)

{
  undefined1 auStack_50 [16];
  
  func_0x000100087bd4(FUN_103694990,auStack_50,PTR___sytN_11034f1b0 + 8);
  auStack_50[0] = 0x41;
  if ((param_1 & 1) != 0) {
    auStack_50[0] = 1;
  }
  func_0x0001002a64a8(auStack_50);
  return;
}



/* Entry: 1036943c8; end: 1036943f7; -[_TtC27SCLensCarouselSchedulerImpl30LensCarouselOperationScheduler didFinishCarouselHidingWithSuccess:] */

void FUN_1036943c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_103694338(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1036943f8; end: 103694863;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036943f8(long param_1,long param_2,byte *param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  long *param_10)

{
  uint uVar1;
  byte bVar2;
  undefined1 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  undefined *puVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  long extraout_x8;
  long lVar15;
  code *pcVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  uint uStack_9c;
  ulong uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  uVar1 = (uint)param_2 & 0xff;
  lVar4 = 0;
  lVar14 = param_2;
  uStack_c8 = param_8;
  uStack_b8 = param_6;
  uStack_b0 = param_7;
  func_0x000107c5eec8();
  lVar17 = *(long *)(lVar4 + -8);
  lVar13 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar17 + 0x40));
  lVar7 = _DAT_112f84a60;
  lVar15 = (long)&uStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  bVar2 = *(byte *)(param_1 + _DAT_112f84a60);
  if (bVar2 != 2 && bVar2 != uVar1) {
    *param_3 = bVar2;
  }
  *(char *)(param_1 + lVar7) = (char)param_2;
  lStack_d8 = param_4;
  lStack_d0 = param_5;
  uStack_9c = uVar1;
  if (param_5 == 0) {
    func_0x000107c5eec4(lVar15);
    func_0x000107c5eeac();
    lStack_d8 = lVar13;
    lStack_d0 = lVar14;
    (**(code **)(lVar17 + 8))(lVar15,lVar4);
  }
  uStack_e0 = *(undefined8 *)(param_1 + _DAT_112f84a48);
  uVar18 = *(undefined8 *)(param_1 + _DAT_112f84a68);
  puVar5 = &UNK_11067a908;
  uStack_c0 = uVar18;
  func_0x000107c613fc(&UNK_11067a908,0x18,7);
  func_0x000107c61614(puVar5 + 0x10,param_1);
  puVar6 = &UNK_11067a930;
  func_0x000107c613fc(&UNK_11067a930,0x28,7);
  uVar8 = uStack_c8;
  *(undefined **)(puVar6 + 0x10) = puVar5;
  *(undefined8 *)(puVar6 + 0x18) = uStack_c8;
  *(undefined8 *)(puVar6 + 0x20) = param_9;
  lVar7 = 0;
  puStack_a8 = puVar5;
  func_0x000103693bd8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar7 + 0x28) = 0;
  *(undefined1 *)(lVar7 + 0x30) = 0xfe;
  func_0x00010006a340(0);
  func_0x000107c613fc();
  func_0x000107c61434(param_5);
  func_0x000107c6157c(uVar18);
  func_0x000107c6157c(puVar5);
  func_0x000101237340(uVar8,param_9);
  func_0x00010006a360();
  *(undefined8 *)(lVar7 + 0x38) = uVar8;
  *(undefined8 *)(lVar7 + 0x40) = 0;
  func_0x0001000285a8(0x112d53b48,&UNK_10d925340);
  func_0x000107c613fc();
  plVar9 = (long *)0x1;
  func_0x00010008747c();
  uVar18 = uStack_b0;
  uVar8 = uStack_e0;
  *(long **)(lVar7 + 0x70) = plVar9;
  *(undefined8 *)(lVar7 + 0x78) = 0;
  *(undefined1 *)(lVar7 + 0x80) = 1;
  *(long *)(lVar7 + 0x10) = lStack_d8;
  *(long *)(lVar7 + 0x18) = lStack_d0;
  uVar3 = (undefined1)uStack_9c;
  *(undefined1 *)(lVar7 + 0x20) = uVar3;
  *(undefined8 *)(lVar7 + 0x48) = uStack_e0;
  *(undefined8 *)(lVar7 + 0x50) = uStack_b8;
  *(undefined8 *)(lVar7 + 0x58) = uStack_b0;
  *(code **)(lVar7 + 0x60) = FUN_103694da8;
  *(undefined **)(lVar7 + 0x68) = puVar6;
  uStack_90 = 0x6974656c706d6f63;
  uStack_88 = 0xec000000203a6e6f;
  puVar5 = &UNK_11067a958;
  func_0x000107c613fc(&UNK_11067a958,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_103694da8;
  *(undefined **)(puVar5 + 0x18) = puVar6;
  pcStack_70 = FUN_103694db4;
  puStack_68 = puVar5;
  func_0x000107c61580(puVar6,2);
  func_0x000107c615f0(uVar8);
  func_0x000107c6157c(uVar18);
  uVar8 = 0x112f84aa8;
  func_0x0001000285a8(0x112f84aa8,&UNK_10dbf8c48);
  func_0x000107c5fb18(&pcStack_70,uVar8);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar8);
  func_0x000107c6142c(uStack_88);
  uVar18 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(lVar7 + 0x40) = uVar18;
  func_0x000107c6157c();
  uStack_90 = uStack_90 & 0xffffffffffffff00;
  func_0x000107c6157c(plVar9);
  func_0x000100087c34(&uStack_90);
  func_0x000107c61574(plVar9);
  plVar10 = plVar9;
  func_0x000107c6157c();
  uVar8 = uStack_c0;
  func_0x0001006c733c();
  func_0x000107c61574(plVar9);
  puVar5 = &UNK_11067a980;
  func_0x000107c613fc(&UNK_11067a980,0x18,7);
  func_0x000107c61644(puVar5 + 0x10,lVar7);
  puVar11 = &UNK_11067a9a8;
  func_0x000107c613fc(&UNK_11067a9a8,0x19,7);
  *(undefined **)(puVar11 + 0x10) = puVar5;
  puVar11[0x18] = uVar3;
  puVar5 = &UNK_11067a9d0;
  func_0x000107c613fc(&UNK_11067a9d0,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_103694de4;
  *(undefined **)(puVar5 + 0x18) = puVar11;
  pcVar16 = *(code **)(*plVar10 + 0x60);
  func_0x000107c6157c(lVar7);
  pcVar12 = FUN_103694df0;
  puVar11 = puVar5;
  (*pcVar16)(FUN_103694df0);
  func_0x000107c61574(plVar10);
  func_0x000107c61574(puVar5);
  pcVar16 = pcVar12;
  func_0x000107c614f0(pcVar12);
  (**(code **)(puVar11 + 0x10))(uVar18,pcVar16,puVar11);
  func_0x000107c61574(puStack_a8);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(uVar18);
  func_0x000107c615e8(pcVar12);
  lStack_80 = param_1;
  lStack_78 = lVar7;
  func_0x000100087bd4(FUN_103694e18,&uStack_90,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(lVar7);
  lVar13 = *param_10;
  *param_10 = lVar7;
  func_0x000107c61574(lVar13);
  return;
}



/* Entry: 103694864; end: 10369498f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103694864(undefined8 param_1,undefined8 param_2,undefined1 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_78,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61618();
  if (param_4 != 0) {
    uVar3 = *(undefined8 *)(param_4 + _DAT_112f84a50);
    func_0x000107c614f0(uVar3);
    puVar1 = &UNK_11067a908;
    func_0x000107c613fc(&UNK_11067a908,0x18,7);
    func_0x000107c61614(puVar1 + 0x10,param_4);
    puVar2 = &UNK_11067a9f8;
    func_0x000107c613fc(&UNK_11067a9f8,0x40,7);
    *(undefined **)(puVar2 + 0x10) = puVar1;
    *(undefined8 *)(puVar2 + 0x18) = param_1;
    *(undefined8 *)(puVar2 + 0x20) = param_2;
    puVar2[0x28] = param_3;
    *(undefined8 *)(puVar2 + 0x30) = param_5;
    *(undefined8 *)(puVar2 + 0x38) = param_6;
    func_0x000107c6157c(puVar1);
    func_0x000107c61434(param_2);
    func_0x000101237340(param_5,param_6);
    func_0x00010090569c(FUN_1036955f8,puVar2,uVar3);
    func_0x000107c61170(param_4);
    func_0x000107c61574(puVar1);
    func_0x000107c61574(puVar2);
  }
  return;
}



/* Entry: 103694990; end: 1036949a3;  */

void FUN_103694990(void)

{
  FUN_103694d14();
  return;
}



/* Entry: 1036949a4; end: 103694b43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036949a4(long param_1,undefined8 param_2,undefined8 param_3,uint param_4,code *param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_c0 [16];
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_90;
  undefined1 auStack_88 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_88,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar3 = 0x112f84ab8;
    lStack_b0 = param_1;
    uStack_a8 = param_2;
    uStack_a0 = param_3;
    func_0x0001000285a8(0x112f84ab8,&UNK_10dbf8c58);
    func_0x000100087bd4(&lStack_90,FUN_10369560c,auStack_c0,uVar3);
    if (lStack_90 != 0) {
      uVar4 = *(undefined8 *)(lStack_90 + 0x28);
      uVar3 = *(undefined8 *)(&UNK_10dbf8c68 + (ulong)(param_4 >> 6 & 3) * 8);
      func_0x000103f6bb6c(0);
      func_0x000107c610f8();
      func_0x000107c6157c(lStack_90);
      func_0x000103f6b9a0(uVar4,uVar3);
      lVar2 = param_1 + _DAT_112f84a40;
      func_0x000107c61618();
      if (lVar2 != 0) {
        uVar4 = *(undefined8 *)(lStack_90 + 0x10);
        uVar1 = *(undefined8 *)(lStack_90 + 0x18);
        func_0x000107c61434(uVar1);
        func_0x000107c5fadc(uVar4,uVar1);
        func_0x000107c6142c(uVar1);
        func_0x000107c41ab4(lVar2);
        func_0x000107c615e8(lVar2);
        func_0x000107c61170(uVar4);
      }
      func_0x000107c61574(lStack_90);
      func_0x000107c61170(uVar3);
    }
    if (param_5 != (code *)0x0) {
      (*param_5)((param_4 & 0xc0) == 0);
    }
    func_0x000107c61170(param_1);
    func_0x000107c61574(lStack_90);
  }
  return;
}



/* Entry: 103694b44; end: 103694beb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103694b44(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 auStack_68 [24];
  
  lVar1 = _DAT_112f84a58;
  func_0x000107c61428(param_2 + _DAT_112f84a58,auStack_68,0x21,0);
  FUN_103694e30(param_3,param_4);
  func_0x000107c614a8(auStack_68);
  if (*(long *)(*(long *)(param_2 + lVar1) + 0x10) == 0) {
    *(undefined1 *)(param_2 + _DAT_112f84a60) = 2;
  }
  *param_1 = param_3;
  return;
}



/* Entry: 103694bec; end: 103694cab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103694bec(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [24];
  
  lVar3 = _DAT_112f84a58;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61428(param_1 + _DAT_112f84a58,auStack_68,0x21,0);
  func_0x000107c61434(uVar2);
  func_0x000107c6157c(param_2);
  uVar4 = *(undefined8 *)(param_1 + lVar3);
  func_0x000107c61558(uVar4);
  uVar5 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0x8000000000000000;
  FUN_1036954a8(param_2,uVar1,uVar2,uVar4);
  func_0x000107c6142c(uVar2);
  *(undefined8 *)(param_1 + lVar3) = uVar5;
  func_0x000107c614a8(auStack_68);
  return;
}



/* Entry: 103694cac; end: 103694d13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103694cac(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f84a58;
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar2 + _DAT_112f84a58,auStack_48,0,0);
  *(bool *)param_1 = *(long *)(*(long *)(lVar2 + lVar1) + 0x10) == 0;
  return;
}



/* Entry: 103694d14; end: 103694d63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103694d14(void)

{
  long unaff_x20;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  undefined1 uStack_11;
  
  uStack_30 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000100087bd4(&uStack_11,FUN_103694cac,auStack_40,PTR___sSbN_11034dd40);
  return;
}



/* Entry: 103694d64; end: 103694d7b;  */

void FUN_103694d64(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5fadc();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103694d7c; end: 103694da7;  */

void FUN_103694d7c(void)

{
  FUN_103695660();
  return;
}



/* Entry: 103694da8; end: 103694db3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103694da8(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined1 auStack_78 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_78,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    uVar6 = *(undefined8 *)(lVar2 + _DAT_112f84a50);
    func_0x000107c614f0(uVar6);
    puVar3 = &UNK_11067a908;
    func_0x000107c613fc(&UNK_11067a908,0x18,7);
    func_0x000107c61614(puVar3 + 0x10,lVar2);
    puVar4 = &UNK_11067a9f8;
    func_0x000107c613fc(&UNK_11067a9f8,0x40,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(undefined8 *)(puVar4 + 0x18) = param_1;
    *(undefined8 *)(puVar4 + 0x20) = param_2;
    puVar4[0x28] = param_3;
    *(undefined8 *)(puVar4 + 0x30) = uVar1;
    *(undefined8 *)(puVar4 + 0x38) = uVar5;
    func_0x000107c6157c(puVar3);
    func_0x000107c61434(param_2);
    func_0x000101237340(uVar1,uVar5);
    func_0x00010090569c(FUN_1036955f8,puVar4,uVar6);
    func_0x000107c61170(lVar2);
    func_0x000107c61574(puVar3);
    func_0x000107c61574(puVar4);
  }
  return;
}



/* Entry: 103694db4; end: 103694de3;  */

void FUN_103694db4(undefined8 *param_1,undefined1 *param_2)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,param_1[1],*param_2);
  return;
}



/* Entry: 103694de4; end: 103694def;  */

void FUN_103694de4(undefined8 param_1,ulong param_2)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  code *pcVar4;
  uint uVar5;
  long unaff_x20;
  undefined1 auStack_70 [16];
  long lStack_60;
  undefined1 uStack_58;
  char cStack_49;
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  bVar1 = *(byte *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar3 + 0x10,auStack_48,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  if (lVar3 == 0) {
    return;
  }
  uVar5 = (uint)param_1;
  uVar2 = uVar5 >> 6 & 3;
  if ((uVar2 == 0) || (uVar5 = uVar5 & 0x3f, uVar2 == 1)) {
    if (((uVar5 & 0xff) != (uint)bVar1) || ((param_2 & 1) == 0)) goto LAB_1036939e8;
    pcVar4 = (code *)0x103693bf8;
  }
  else {
    if (uVar5 != bVar1) goto LAB_1036939e8;
    pcVar4 = FUN_103693c24;
  }
  lStack_60 = lVar3;
  uStack_58 = (char)param_1;
  func_0x000100087bd4(&cStack_49,pcVar4,auStack_70,PTR___sSbN_11034dd40);
  if ((cStack_49 == '\x01') && (*(code **)(lVar3 + 0x60) != (code *)0x0)) {
    (**(code **)(lVar3 + 0x60))(*(undefined8 *)(lVar3 + 0x10),*(undefined8 *)(lVar3 + 0x18),param_1)
    ;
  }
LAB_1036939e8:
  func_0x000107c61574();
  return;
}



/* Entry: 103694df0; end: 103694e17;  */

void FUN_103694df0(undefined1 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,param_1[1]);
  return;
}



/* Entry: 103694e18; end: 103694e2f;  */

void FUN_103694e18(void)

{
  long unaff_x20;
  
  FUN_103694bec(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 103694e30; end: 103694eeb;  */

undefined8 FUN_103694e30(long param_1,ulong param_2)

{
  int iVar1;
  long *unaff_x20;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *unaff_x20;
  func_0x000107c61434(lVar2);
  func_0x000100029284();
  func_0x000107c6142c(lVar2);
  if ((param_2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar2 = *unaff_x20;
    if (iVar1 == 0) {
      FUN_10369509c();
    }
    func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar2 + 0x30) + param_1 * 0x10 + 8));
    uVar3 = *(undefined8 *)(*(long *)(lVar2 + 0x38) + param_1 * 8);
    FUN_103694eec(param_1,lVar2);
    *unaff_x20 = lVar2;
  }
  return uVar3;
}



/* Entry: 103694eec; end: 10369509b;  */

void FUN_103694eec(ulong param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined1 auStack_a8 [72];
  
  lVar1 = param_2 + 0x40;
  uVar7 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar9 = param_1 + 1 & (uVar7 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar1 + (uVar9 >> 6) * 8) >> (uVar9 & 0x3f) & 1) != 0) {
    uVar7 = ~uVar7;
    uVar10 = param_1;
    func_0x000107c6026c(param_1,lVar1,uVar7);
    uVar10 = uVar10 + 1 & uVar7;
    do {
      puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar9 * 0x10);
      uVar11 = *puVar2;
      uVar4 = puVar2[1];
      func_0x000107c6068c(auStack_a8,*(undefined8 *)(param_2 + 0x28));
      func_0x000107c61434(uVar4);
      puVar6 = auStack_a8;
      func_0x000107c5fb58(puVar6,uVar11,uVar4);
      func_0x000107c606a8();
      func_0x000107c6142c(uVar4);
      uVar8 = (ulong)puVar6 & uVar7;
      if ((long)param_1 < (long)uVar10) {
        if (uVar8 < uVar10) {
LAB_103694fe0:
          if ((long)param_1 < (long)uVar8) goto LAB_103694f68;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + param_1 * 0x10);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar9 * 0x10);
        if (((long)param_1 < (long)uVar9) || (puVar3 + 2 <= puVar2 || param_1 != uVar9)) {
          uVar11 = *puVar3;
          puVar2[1] = puVar3[1];
          *puVar2 = uVar11;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0x38) + param_1 * 8);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar9 * 8);
        if ((((long)param_1 < (long)uVar9) || (puVar3 + 1 <= puVar2)) || (param_1 != uVar9)) {
          *puVar2 = *puVar3;
          param_1 = uVar9;
        }
      }
      else if (uVar10 <= uVar8) goto LAB_103694fe0;
LAB_103694f68:
      uVar9 = uVar9 + 1 & uVar7;
    } while ((*(ulong *)(lVar1 + (uVar9 >> 6) * 8) >> (uVar9 & 0x3f) & 1) != 0);
  }
  uVar7 = param_1 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar7) = *(ulong *)(lVar1 + uVar7) & (-1L << (param_1 & 0x3f)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10369509c);
  (*pcVar5)();
}



/* Entry: 10369509c; end: 10369520b;  */

void FUN_10369509c(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  
  func_0x0001000285a8(0x112f84ab0,&UNK_10dbf8c50);
  lVar11 = *unaff_x20;
  lVar7 = lVar11;
  func_0x000107c6048c();
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar1 = lVar11 + 0x40;
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar11 || lVar1 + uVar8 * 8 <= lVar7 + 0x40U) {
      func_0x000107c610b8(lVar7 + 0x40U,lVar1,uVar8 << 3);
    }
    lVar13 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar11 + 0x40);
    if (uVar8 == 0) goto LAB_103695178;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar13 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar11 + 0x30) + uVar10 * 0x10);
        uVar5 = puVar3[1];
        uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar10 * 8);
        puVar4 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar10 * 8) = uVar12;
        func_0x000107c61434();
        func_0x000107c6157c(uVar12);
        if (uVar8 != 0) break;
LAB_103695178:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10369520c);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_1036951e4;
          uVar8 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar13 = lVar2;
      }
    } while( true );
  }
LAB_1036951e4:
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 10369520c; end: 1036954a7;  */

void FUN_10369520c(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x112f84ab0;
  func_0x0001000285a8(0x112f84ab0,&UNK_10dbf8c50);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_103695474:
    func_0x000107c61574(lVar17);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1036954a4);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_103695474;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar3);
      func_0x000107c6157c(uVar18);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar6,uVar3);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1036954a8);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 1036954a8; end: 1036955f7;  */

void FUN_1036954a8(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar8;
  if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103695580);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_10369520c(lVar6,param_4 & 1);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103695548);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_10369509c();
    lVar6 = *unaff_x20;
    goto joined_r0x000103695594;
  }
  lVar6 = *unaff_x20;
joined_r0x000103695594:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar7);
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1036955f8);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 1036955f8; end: 10369560b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036955f8(void)

{
  code *pcVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined1 auStack_c0 [16];
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_90;
  undefined1 auStack_88 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  pcVar1 = *(code **)(unaff_x20 + 0x30);
  bVar2 = *(byte *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar3 + 0x10,auStack_88,0,0,pcVar1,*(undefined8 *)(unaff_x20 + 0x38));
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    uVar4 = 0x112f84ab8;
    lStack_b0 = lVar3;
    uStack_a8 = uVar7;
    uStack_a0 = uVar6;
    func_0x0001000285a8(0x112f84ab8,&UNK_10dbf8c58);
    func_0x000100087bd4(&lStack_90,FUN_10369560c,auStack_c0,uVar4);
    if (lStack_90 != 0) {
      uVar6 = *(undefined8 *)(lStack_90 + 0x28);
      uVar7 = *(undefined8 *)(&UNK_10dbf8c68 + (ulong)(bVar2 >> 6) * 8);
      func_0x000103f6bb6c(0);
      func_0x000107c610f8();
      func_0x000107c6157c(lStack_90);
      func_0x000103f6b9a0(uVar6,uVar7);
      lVar5 = lVar3 + _DAT_112f84a40;
      func_0x000107c61618();
      if (lVar5 != 0) {
        uVar6 = *(undefined8 *)(lStack_90 + 0x10);
        uVar4 = *(undefined8 *)(lStack_90 + 0x18);
        func_0x000107c61434(uVar4);
        func_0x000107c5fadc(uVar6,uVar4);
        func_0x000107c6142c(uVar4);
        func_0x000107c41ab4(lVar5);
        func_0x000107c615e8(lVar5);
        func_0x000107c61170(uVar6);
      }
      func_0x000107c61574(lStack_90);
      func_0x000107c61170(uVar7);
    }
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)((bVar2 & 0xc0) == 0);
    }
    func_0x000107c61170(lVar3);
    func_0x000107c61574(lStack_90);
  }
  return;
}



/* Entry: 10369560c; end: 103695627;  */

void FUN_10369560c(void)

{
  long unaff_x20;
  
  FUN_103694b44(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 103695628; end: 10369565f;  */

void FUN_103695628(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5fadc();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103695660; end: 103695697;  */

void FUN_103695660(void)

{
  long unaff_x20;
  
  FUN_1036943f8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined1 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 103695698; end: 1036956bb;  */

undefined8 FUN_103695698(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1036956bc; end: 1036956bf;  */

void FUN_1036956bc(uint param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000103694d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1 & 1);
  return;
}



/* Entry: 1036956c0; end: 1036956d3;  */

void FUN_1036956c0(void)

{
  FUN_103694990();
  return;
}



/* Entry: 1036956d4; end: 1036956d7;  */

void FUN_1036956d4(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5fadc();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1036956d8; end: 1036956ff;  */

void FUN_1036956d8(void)

{
  FUN_103694d7c();
  return;
}


