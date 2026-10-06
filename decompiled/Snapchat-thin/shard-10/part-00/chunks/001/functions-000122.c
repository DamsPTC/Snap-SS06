/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1074fe188; end: 1074fe1af;  */

void FUN_1074fe188(undefined8 param_1)

{
  func_0x0001074feaf8();
  func_0x0001074fea08(param_1,&PTR_DAT_1109b6ee0);
  func_0x0001074fe67c();
  return;
}



/* Entry: 1074fe1b0; end: 1074fe1bb;  */

undefined ** FUN_1074fe1b0(void)

{
  return &PTR_DAT_1109b6ee0;
}



/* Entry: 1074fe1bc; end: 1074fe207;  */

void FUN_1074fe1bc(void)

{
  func_0x0001074fe980();
  FUN_1074fe5b8(&PTR_SUB_1109b6e70);
  return;
}



/* Entry: 1074fe208; end: 1074fe21b;  */

void FUN_1074fe208(void)

{
  func_0x0001074fe1e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074fe21c; end: 1074fe23b;  */

void FUN_1074fe21c(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x0001074fe704();
  func_0x0001074fe980(param_1,unaff_x19 + 8);
  FUN_1074fe5b8(&PTR_SUB_1109b6f00);
  return;
}



/* Entry: 1074fe23c; end: 1074fe25b;  */

void FUN_1074fe23c(long param_1,undefined8 param_2)

{
  func_0x0001074fe980(param_2,param_1 + 8);
  FUN_1074fe5b8(&PTR_SUB_1109b6f00);
  return;
}



/* Entry: 1074fe25c; end: 1074fe2cb;  */

void FUN_1074fe25c(int param_1)

{
  long unaff_x20;
  long *plVar1;
  undefined1 auStack_38 [24];
  
  func_0x0001074fe980();
  func_0x0001074ff7f8();
  func_0x0001074ff0dc();
  if (param_1 != 0) {
    plVar1 = *(long **)(*(long *)(unaff_x20 + 0x20) + 0x30);
    func_0x00010724ef84(auStack_38);
    (**(code **)(*plVar1 + 0x48))(plVar1,auStack_38);
    func_0x0001074ff7c4();
  }
  func_0x0001074fefec();
  return;
}



/* Entry: 1074fe2cc; end: 1074fe2f3;  */

void FUN_1074fe2cc(undefined8 param_1)

{
  func_0x0001074feaf8();
  func_0x0001074fea08(param_1,&PTR_DAT_1109b6f60);
  func_0x0001074fe67c();
  return;
}



/* Entry: 1074fe2f4; end: 1074fe2ff;  */

undefined ** FUN_1074fe2f4(void)

{
  return &PTR_DAT_1109b6f60;
}



/* Entry: 1074fe300; end: 1074fe323;  */

void FUN_1074fe300(void)

{
  func_0x0001074fe980();
  FUN_1074fe5b8(&PTR_SUB_1109b6f00);
  return;
}



/* Entry: 1074fe324; end: 1074fe327;  */

void FUN_1074fe324(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109b6f80;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1074fe328; end: 1074fe33b;  */

void FUN_1074fe328(void)

{
  func_0x0001074fe348();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074fe33c; end: 1074fe353;  */

long FUN_1074fe33c(long param_1)

{
  FUN_1073b4e18(param_1 + 0x50);
  func_0x0001000e30f4(param_1 + 0x38);
  FUN_1073b4994(param_1 + 0x20);
  return param_1 + 0x18;
}



/* Entry: 1074fe354; end: 1074fe3bf;  */

void FUN_1074fe354(void)

{
  func_0x0001074fe960();
  func_0x000107410d38();
  return;
}



/* Entry: 1074fe3c0; end: 1074fe5b7;  */

void FUN_1074fe3c0(long param_1)

{
  ulong uVar1;
  long lVar2;
  long *unaff_x19;
  byte unaff_w21;
  
  uVar1 = unaff_x19[2];
  lVar2 = *unaff_x19;
  *(byte *)(lVar2 + param_1) = unaff_w21 & 0x7f;
  *(byte *)(lVar2 + (param_1 - 7U & uVar1) + (uVar1 & 7)) = unaff_w21 & 0x7f;
  return;
}



/* Entry: 1074fe5b8; end: 1074fe5d7;  */

void FUN_1074fe5b8(undefined8 param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  *param_2 = param_1;
  FUN_1074fd498(param_2 + 1);
  *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 1074fe5d8; end: 1074ffaff;  */

ulong FUN_1074fe5d8(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *unaff_x19;
  undefined8 uVar5;
  ulong uVar6;
  
  uVar4 = *unaff_x19;
  uVar2 = unaff_x19[2];
  uVar3 = (uVar4 >> 0xc ^ param_1 >> 7) & uVar2;
  uVar5 = *(undefined8 *)(uVar4 + uVar3);
  lVar1 = 0;
  uVar6 = CONCAT17(-((char)((ulong)uVar5 >> 0x38) < -1),
                   CONCAT16(-((char)((ulong)uVar5 >> 0x30) < -1),
                            CONCAT15(-((char)((ulong)uVar5 >> 0x28) < -1),
                                     CONCAT14(-((char)((ulong)uVar5 >> 0x20) < -1),
                                              CONCAT13(-((char)((ulong)uVar5 >> 0x18) < -1),
                                                       CONCAT12(-((char)((ulong)uVar5 >> 0x10) < -1)
                                                                ,CONCAT11(-((char)((ulong)uVar5 >> 8
                                                                                  ) < -1),
                                                                          -((char)uVar5 < -1))))))))
  ;
  while (uVar6 == 0) {
    lVar1 = lVar1 + 8;
    uVar3 = lVar1 + uVar3 & uVar2;
    uVar5 = *(undefined8 *)(uVar4 + uVar3);
    uVar6 = CONCAT17(-((char)((ulong)uVar5 >> 0x38) < -1),
                     CONCAT16(-((char)((ulong)uVar5 >> 0x30) < -1),
                              CONCAT15(-((char)((ulong)uVar5 >> 0x28) < -1),
                                       CONCAT14(-((char)((ulong)uVar5 >> 0x20) < -1),
                                                CONCAT13(-((char)((ulong)uVar5 >> 0x18) < -1),
                                                         CONCAT12(-((char)((ulong)uVar5 >> 0x10) <
                                                                   -1),CONCAT11(-((char)((ulong)
                                                  uVar5 >> 8) < -1),-((char)uVar5 < -1))))))));
  }
  uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
  uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
  uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
  uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
  return uVar3 + ((ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3) & uVar2;
}



/* Entry: 1074ffb00; end: 1074ffde7;  */

void FUN_1074ffb00(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  long lVar2;
  long lVar3;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  lVar3 = *param_2;
  switch(*(undefined1 *)(lVar3 + 8)) {
  case 0:
    if (param_2[1] != 0) {
      do {
        func_0x000107500148();
      } while (extraout_w10 != 0);
    }
    func_0x000107500130();
    func_0x0001074fffa0();
    __Znwm(0x228);
    func_0x000107500120();
    func_0x000107500104();
    FUN_107510c1c();
    func_0x0001074fffa0(&lStack_60);
    func_0x000107500170();
    func_0x0001074fffa0();
    break;
  case 1:
    if (param_2[1] != 0) {
      do {
        func_0x000107500148();
      } while (extraout_w10_01 != 0);
    }
    func_0x000107500130();
    func_0x0001074fffc4();
    __Znwm(0x228);
    func_0x000107500120();
    func_0x000107500104();
    FUN_10750dc48();
    func_0x0001074fffc4(&lStack_60);
    func_0x000107500170();
    func_0x0001074fffc4();
    break;
  case 2:
    if (param_2[1] != 0) {
      do {
        func_0x000107500148();
      } while (extraout_w10_02 != 0);
    }
    func_0x000107500130();
    func_0x0001074fffe8();
    __Znwm(0x1c0);
    func_0x000107500120();
    func_0x000107500104();
    FUN_10750bdc0();
    func_0x0001074fffe8(&lStack_60);
    func_0x000107500170();
    func_0x0001074fffe8();
    break;
  default:
    *param_1 = 0;
    break;
  case 4:
    lVar2 = param_2[1];
    if (lVar2 != 0) {
      do {
        func_0x000107500148();
      } while (extraout_w10_00 != 0);
    }
    lStack_60 = 0;
    lStack_58 = 0;
    lStack_70 = lVar3;
    lStack_68 = lVar2;
    func_0x00010750000c(&lStack_60);
    uVar1 = 0xb8;
    __Znwm();
    lStack_70 = 0;
    lStack_68 = 0;
    lStack_60 = lVar3;
    lStack_58 = lVar2;
    FUN_10750cef4();
    func_0x00010750000c(&lStack_60);
    *param_1 = uVar1;
    func_0x00010750000c(&lStack_70);
    break;
  case 5:
    FUN_1074ffde8(&lStack_70);
    __Znwm(0x1b0);
    lStack_58 = lStack_68;
    lStack_60 = lStack_70;
    lStack_70 = 0;
    lStack_68 = 0;
    func_0x000107500104();
    FUN_10750b600();
    func_0x000107500030(&lStack_60);
    func_0x000107500170();
    func_0x000107500030();
    break;
  case 6:
    if (param_2[1] != 0) {
      do {
        func_0x000107500148();
      } while (extraout_w10_03 != 0);
    }
    func_0x000107500130();
    func_0x000107500054();
    __Znwm(0x1d8);
    func_0x000107500120();
    func_0x000107500104();
    FUN_1075103e8();
    func_0x000107500054(&lStack_60);
    func_0x000107500170();
    func_0x000107500054();
  }
  return;
}



/* Entry: 1074ffde8; end: 1074ffe2f;  */

void FUN_1074ffde8(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar5 = param_2[1];
  uVar4 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[1] = uVar5;
  *param_1 = uVar4;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x000107500030(&uStack_20);
  return;
}



/* Entry: 1074ffe30; end: 1074ffec3;  */

undefined8 *
FUN_1074ffe30(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_DAT_1109b7210;
  uVar1 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[3] = &PTR_PTR_1131ad7d8;
  func_0x000107500088(param_1 + 4,param_3);
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[0x10] = param_4;
  return param_1;
}



/* Entry: 1074ffec4; end: 1074fff3f;  */

void FUN_1074ffec4(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001074ffedc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))
            (*(long **)(param_1 + 0x18),param_1,param_2 + 0xc);
  return;
}



/* Entry: 1074fff40; end: 1074fff7f;  */

void FUN_1074fff40(long param_1)

{
  func_0x0001078696e8(param_1);
  func_0x0001078696e8(param_1 + 0x18);
  return;
}



/* Entry: 1074fff80; end: 1074fff9f;  */

void FUN_1074fff80(void)

{
  return;
}



/* Entry: 1074fffa0; end: 107500077;  */

void FUN_1074fffa0(long param_1)

{
  func_0x000107500164();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 107500078; end: 1075001c3;  */

void FUN_107500078(void)

{
  return;
}



/* Entry: 1075001c4; end: 1075003cf;  */

undefined1 * FUN_1075001c4(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x38] = 0;
  param_1[0x30] = 0;
  param_1[0x68] = 0;
  param_1[0x70] = 0;
  param_1[0xa0] = 0;
  param_1[0xa8] = 0;
  param_1[0xe0] = 0;
  param_1[0xd8] = 0;
  param_1[0x110] = 0;
  param_1[0x118] = 0;
  param_1[0x148] = 0;
  param_1[0x150] = 0;
  param_1[0x168] = 0;
  param_1[0x170] = 0;
  param_1[0x188] = 0;
  param_1[400] = 0;
  param_1[0x1a8] = 0;
  param_1[0x1b0] = 0;
  param_1[0x1c8] = 0;
  param_1[0x1d0] = 0;
  param_1[0x1e8] = 0;
  param_1[0x1f0] = 0;
  param_1[0x220] = 0;
  param_1[0x228] = 0;
  param_1[0x240] = 0;
  param_1[0x248] = 0;
  param_1[0x278] = 0;
  param_1[0x280] = 0;
  param_1[0x298] = 0;
  param_1[0x2a0] = 0;
  param_1[0x2d0] = 0;
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  *(undefined8 *)(param_1 + 0x2e8) = 8;
  *(undefined8 *)(param_1 + 0x2f0) = 0x24;
  *(undefined4 *)(param_1 + 0x2f8) = 0;
  param_1[0x300] = 0;
  param_1[0x330] = 0;
  param_1[0x338] = 0;
  param_1[0x350] = 0;
  *(undefined8 *)(param_1 + 0x360) = 0;
  *(undefined8 *)(param_1 + 0x358) = 0;
  *(undefined8 *)(param_1 + 0x368) = 0x21;
  *(undefined8 *)(param_1 + 0x370) = 0x5d;
  *(undefined4 *)(param_1 + 0x378) = 0;
  param_1[0x380] = 0;
  param_1[0x398] = 0;
  param_1[0x3a0] = 0;
  *(undefined8 *)(param_1 + 0x3a4) = 0;
  FUN_1075003d0(param_1 + 0x3b0,0);
  FUN_1075003d0(param_1 + 0x3c8,1);
  FUN_107500434(param_1 + 0x3e0);
  func_0x000107500184(param_1 + 0x3f8);
  return param_1;
}



/* Entry: 1075003d0; end: 107500433;  */

void FUN_1075003d0(void)

{
  func_0x000107501c08();
  FUN_107500560();
  return;
}



/* Entry: 107500434; end: 1075004a7;  */

void FUN_107500434(undefined8 *param_1)

{
  int iVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  iVar1 = 0x20;
  do {
    ___sincosf_stret();
    func_0x000107501c6c();
    FUN_1074b2678();
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}



/* Entry: 1075004a8; end: 1075004df;  */

void FUN_1075004a8(void)

{
  func_0x000107501c08();
  func_0x000107501bac();
  return;
}



/* Entry: 1075004e0; end: 10750052b;  */

long FUN_1075004e0(void)

{
  long lVar1;
  ulong extraout_x8;
  long extraout_x8_00;
  ulong extraout_x9;
  long unaff_x19;
  
  func_0x000107501d80();
  if (extraout_x8 < extraout_x9) {
    func_0x000107501c18();
    lVar1 = extraout_x8_00 + 0x28;
  }
  else {
    lVar1 = unaff_x19;
    FUN_1075013b8();
  }
  *(long *)(unaff_x19 + 8) = lVar1;
  return lVar1 + -0x28;
}



/* Entry: 10750052c; end: 10750055f;  */

void FUN_10750052c(void)

{
  func_0x000107501c08();
  func_0x000107501bac();
  return;
}



/* Entry: 107500560; end: 1075005ab;  */

long FUN_107500560(void)

{
  long lVar1;
  ulong extraout_x8;
  long extraout_x8_00;
  ulong extraout_x9;
  long unaff_x19;
  
  func_0x000107501d80();
  if (extraout_x8 < extraout_x9) {
    func_0x000107501c18();
    lVar1 = extraout_x8_00 + 0x28;
  }
  else {
    lVar1 = unaff_x19;
    FUN_107501420();
  }
  *(long *)(unaff_x19 + 8) = lVar1;
  return lVar1 + -0x28;
}



/* Entry: 1075005ac; end: 10750101b;  */

void FUN_1075005ac(long param_1,undefined8 param_2)

{
  ulong uVar1;
  code *extraout_x9;
  long lVar2;
  int iVar3;
  undefined4 *puVar4;
  short sVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  float *pfVar9;
  float *pfVar10;
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined **ppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  float *pfStack_a8;
  float *pfStack_a0;
  float *pfStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  
  if ((*(byte *)(param_1 + 0x3a0) & 1) == 0) {
    func_0x000107501d5c();
    dVar7 = 0.0;
    dVar8 = 0.0;
    for (lVar2 = 0; lVar2 != 0x40; lVar2 = lVar2 + 0x10) {
      iVar3 = 0x10;
      do {
        FUN_107501488(&pfStack_a0,(int)dVar7 & 0xffffU | (int)dVar8 << 0x10);
        dVar7 = dVar7 + *(double *)(&UNK_10de78478 + lVar2) * 512.0;
        dVar8 = dVar8 + *(double *)(&UNK_10de78480 + lVar2) * 512.0;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    func_0x000107501ab4();
    lVar2 = param_1;
    func_0x000107309708(param_1,&ppuStack_d0);
    func_0x000107501ae8();
    if (lVar2 != 0) {
      func_0x000107501a7c();
    }
    func_0x000107501ce4();
    FUN_1075010a4(&pfStack_a0,0xf);
    func_0x000107501bf4();
    FUN_107456684();
    lVar2 = param_1 + 0x38;
    func_0x000107501b64();
    func_0x000107501ae8();
    if (lVar2 != 0) {
      func_0x000107501a7c();
    }
    func_0x000107501cdc();
    FUN_1075010a4(&pfStack_a0,0x7f);
    func_0x000107501bf4();
    FUN_107456684();
    lVar2 = param_1 + 0x70;
    func_0x000107501b64();
    func_0x000107501ae8();
    if (lVar2 != 0) {
      func_0x000107501a7c();
    }
    func_0x000107501cdc();
    func_0x000107501d5c();
    FUN_10750162c(&pfStack_a0,0);
    FUN_10750162c(&pfStack_a0,2);
    FUN_10750162c(&pfStack_a0,0x20000);
    pfVar10 = pfStack_98;
    pfVar9 = pfStack_a0;
    func_0x000107501ad0(param_2);
    func_0x000107501c88();
    func_0x000107501d68();
    func_0x000107501bc4();
    ppuStack_d0 = (undefined **)((long)pfVar10 - (long)pfVar9 >> 2);
    uStack_c8 = CONCAT71(uStack_c8._1_7_,1);
    func_0x000107501d34(4);
    lVar2 = param_1 + 0xa8;
    func_0x000107501b64();
    func_0x000107501ae8();
    if (lVar2 != 0) {
      func_0x000107501a7c();
    }
    FUN_1075016f0(&pfStack_a0);
    func_0x000107501d5c();
    uStack_e8 = (ulong)uStack_e8._6_2_ << 0x30;
    func_0x000107501ac4();
    uStack_e8._4_4_ = (uint)(uStack_e8 >> 0x20) & 0xffff0000;
    uStack_e8._0_4_ = 1;
    func_0x000107501ac4();
    uStack_e8._4_4_ = uStack_e8._4_4_ & 0xffff0000;
    uStack_e8._0_4_ = 2;
    func_0x000107501ac4();
    uStack_e8._4_4_ = uStack_e8._4_4_ & 0xffff0000;
    uStack_e8 = CONCAT44(uStack_e8._4_4_,3);
    func_0x000107501ac4();
    func_0x000107501bf4();
    FUN_1074c0518();
    lVar2 = param_1 + 0xe0;
    func_0x000107501b64();
    func_0x000107501ae8();
    if (lVar2 != 0) {
      func_0x000107501a7c();
    }
    func_0x0001074c587c(&pfStack_a0);
    func_0x000107501d5c();
    FUN_107501714(&pfStack_a0,0);
    FUN_107501714(&pfStack_a0,1);
    FUN_107501714(&pfStack_a0,2);
    FUN_107501714(&pfStack_a0,3);
    FUN_107501714(&pfStack_a0,4);
    FUN_107501714(&pfStack_a0,5);
    FUN_107501714(&pfStack_a0,6);
    FUN_107501714(&pfStack_a0,7);
    func_0x000107501ad0(param_2);
    func_0x000107501c88();
    func_0x000107501d68();
    func_0x000107501bc4();
    ppuStack_d0 = (undefined **)((long)pfStack_98 - (long)pfStack_a0 >> 3);
    uStack_c8 = CONCAT71(uStack_c8._1_7_,1);
    func_0x000107501d34(8);
    lVar2 = param_1 + 0x118;
    func_0x000107501b64();
    func_0x000107501ae8();
    if (lVar2 != 0) {
      func_0x000107501a7c();
    }
    FUN_1075017e4(&pfStack_a0);
    sVar5 = 0;
    ppuStack_d0 = &PTR_DAT_1109b7388;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    for (iVar3 = 0; iVar3 != 4; iVar3 = iVar3 + 1) {
      iVar6 = 0x10;
      do {
        uStack_e8 = CONCAT62(uStack_e8._2_6_,sVar5);
        func_0x000107501a88();
        sVar5 = sVar5 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    uStack_e8 = uStack_e8 & 0xffffffffffff0000;
    func_0x000107501a88();
    func_0x000107501a68();
    lVar2 = param_1 + 0x150;
    func_0x000107501b78();
    func_0x000107501b6c();
    if (lVar2 != 0) {
      func_0x000107501a7c();
    }
    func_0x00010730b05c(&uStack_c8);
    ppuStack_d0 = &PTR_DAT_11099ed40;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    func_0x000107501d48();
    func_0x000107501a58();
    func_0x000107501a68();
    lVar2 = param_1 + 0x170;
    func_0x000107501b78();
    func_0x000107501b6c();
    if (lVar2 != 0) {
      func_0x000107501a7c();
    }
    func_0x00010730b05c(&uStack_c8);
    ppuStack_d0 = &PTR_DAT_1109b7388;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_e8 = uStack_e8 & 0xffffffffffff0000;
    func_0x000107501a88();
    uStack_e8._0_2_ = 1;
    func_0x000107501a88();
    uStack_e8._0_2_ = 2;
    func_0x000107501a88();
    uStack_e8._0_2_ = 3;
    func_0x000107501a88();
    uStack_e8 = (ulong)uStack_e8._2_6_ << 0x10;
    func_0x000107501a88();
    func_0x000107501a68();
    lVar2 = param_1 + 400;
    func_0x000107501b78();
    func_0x000107501b6c();
    if (lVar2 != 0) {
      func_0x000107501a7c();
    }
    func_0x00010730b05c(&uStack_c8);
    func_0x000107501ca8(&PTR_FUN_1109ad9e0);
    puVar4 = (undefined4 *)(param_1 + 0x3fc);
    lVar2 = 0x60;
    do {
      uStack_e8._0_4_ = CONCAT22((short)*puVar4,(short)puVar4[-1]);
      func_0x0001074086a4(&ppuStack_d0,&uStack_e8,2);
      puVar4 = puVar4 + 2;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
    func_0x000107501a68();
    lVar2 = param_1 + 0x1b0;
    func_0x000107501b78();
    func_0x000107501b6c();
    if (lVar2 != 0) {
      func_0x000107501a7c();
    }
    func_0x000107501d14();
    FUN_107501174(&ppuStack_d0,0xf);
    func_0x000107501a68();
    lVar2 = param_1 + 0x1d0;
    func_0x000107501b78();
    func_0x000107501b6c();
    if (lVar2 != 0) {
      func_0x000107501a7c();
    }
    func_0x000107501d08();
    FUN_107501268(&pfStack_a0,0xf);
    func_0x000107501ab4();
    lVar2 = param_1 + 0x1f0;
    func_0x000107501b64();
    func_0x000107501ae8();
    if (lVar2 != 0) {
      func_0x000107501a7c();
    }
    func_0x000107501ce4();
    FUN_107501174(&ppuStack_d0,0x7f);
    func_0x000107501a68();
    lVar2 = param_1 + 0x228;
    func_0x000107501b78();
    func_0x000107501b6c();
    if (lVar2 != 0) {
      func_0x000107501a7c();
    }
    func_0x000107501d08();
    FUN_107501268(&pfStack_a0,0x7f);
    func_0x000107501ab4();
    lVar2 = param_1 + 0x248;
    func_0x000107501b64();
    func_0x000107501ae8();
    if (lVar2 != 0) {
      func_0x000107501a7c();
    }
    func_0x000107501ce4();
    func_0x000107501ca8(&PTR_DAT_11099ed40);
    uStack_e8._0_6_ = 0x100020005;
    func_0x000107501a58();
    uStack_e8._0_6_ = 0x500020006;
    func_0x000107501a58();
    uStack_e8._0_6_ = 0x300000007;
    func_0x000107501a58();
    uStack_e8._0_6_ = 0x700000004;
    func_0x000107501a58();
    uStack_e8._0_6_ = 0x400050006;
    func_0x000107501a58();
    uStack_e8._0_6_ = 0x600070004;
    func_0x000107501a58();
    func_0x000107501d48();
    func_0x000107501a58();
    uStack_e8._0_6_ = 0x30002;
    func_0x000107501a58();
    uStack_e8._0_6_ = 0x10005;
    func_0x000107501a58();
    uStack_e8._0_6_ = 0x500040000;
    func_0x000107501a58();
    uStack_e8._0_6_ = 0x300060002;
    func_0x000107501a58();
    uStack_e8 = CONCAT26(uStack_e8._6_2_,0x300070006);
    func_0x000107501a58();
    func_0x000107501a68();
    lVar2 = param_1 + 0x280;
    func_0x000107501b78();
    func_0x000107501b6c();
    if (lVar2 != 0) {
      func_0x000107501a7c();
    }
    func_0x000107501d14();
    uStack_e8 = 0;
    lStack_e0 = 0;
    lStack_d8 = 0;
    plStack_80 = &lStack_d8;
    lVar2 = 0x60;
    __Znwm();
    lStack_d8 = lVar2 + 0x60;
    pfStack_98 = (float *)0x0;
    pfStack_a0 = (float *)0x0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_e8 = lVar2;
    lStack_e0 = lVar2;
    FUN_1075018f0(&pfStack_a0);
    pfVar10 = (float *)NEON_fmov(0xbf800000,4);
    pfStack_98._0_4_ = 0xbf800000;
    pfStack_a0 = pfVar10;
    func_0x000107501a98();
    pfVar9 = (float *)NEON_fmov(0x3f800000,4);
    pfStack_98._0_4_ = 0xbf800000;
    pfStack_a0 = (float *)-(double)pfVar9;
    func_0x000107501a98();
    pfStack_98._0_4_ = 0x3f800000;
    pfStack_a0 = (float *)-(double)pfVar9;
    func_0x000107501a98();
    pfStack_98._0_4_ = 0x3f800000;
    pfStack_a0 = pfVar10;
    func_0x000107501a98();
    pfStack_98._0_4_ = 0xbf800000;
    pfStack_a0 = (float *)-(double)pfVar10;
    func_0x000107501a98();
    pfStack_98._0_4_ = 0xbf800000;
    pfStack_a0 = pfVar9;
    func_0x000107501a98();
    pfStack_98._0_4_ = 0x3f800000;
    pfStack_a0 = pfVar9;
    func_0x000107501a98();
    pfStack_98 = (float *)CONCAT44(pfStack_98._4_4_,0x3f800000);
    pfStack_a0 = (float *)-(double)pfVar10;
    func_0x000107501a98();
    func_0x000107501ad0(param_2);
    func_0x000107501d1c();
    lVar2 = lStack_e0 - uStack_e8;
    func_0x000107501d68();
    (*extraout_x9)(&pfStack_a0,param_2);
    ppuStack_d0 = (undefined **)(lVar2 / 0xc);
    uStack_c8 = CONCAT71(uStack_c8._1_7_,1);
    uStack_c0 = 0xc;
    uStack_b8 = CONCAT71(uStack_b8._1_7_,1);
    pfStack_a8 = pfStack_a0;
    lVar2 = param_1 + 0x2a0;
    func_0x000107501b64();
    func_0x000107501ae8();
    if (lVar2 != 0) {
      func_0x000107501a7c();
    }
    FUN_107501a34(&uStack_e8);
    FUN_107500434(&pfStack_a0);
    uStack_e8 = 0;
    lStack_e0 = 0;
    lStack_d8 = 0;
    FUN_10750184c(&uStack_e8,(int)((ulong)((long)pfStack_98 - (long)pfStack_a0) >> 3) + 1);
    FUN_107501488(&uStack_e8,0);
    pfVar9 = pfStack_98;
    for (pfVar10 = pfStack_a0; pfVar10 != pfVar9; pfVar10 = pfVar10 + 2) {
      FUN_107501488(&uStack_e8,
                    (int)(*pfVar10 * 1024.0) & 0xffffU | (int)(pfVar10[1] * 1024.0) << 0x10);
    }
    func_0x0001072a7938(&pfStack_a0);
    FUN_10750101c(&ppuStack_d0,param_2,&uStack_e8);
    lVar2 = param_1 + 0x300;
    func_0x000107501b64();
    func_0x000107501ae8();
    if (lVar2 != 0) {
      func_0x000107501a7c();
    }
    func_0x000107501608(&uStack_e8);
    func_0x000107501ca8(&PTR_DAT_11099ed40);
    iVar3 = 1;
    while (iVar3 != 0x20) {
      uVar1 = uStack_e8 >> 0x30;
      uStack_e8._0_4_ = iVar3 << 0x10;
      iVar3 = iVar3 + 1;
      uStack_e8._0_6_ = CONCAT24((short)iVar3,(int)uStack_e8);
      uStack_e8 = CONCAT26((short)uVar1,(undefined6)uStack_e8);
      func_0x000107501a58();
    }
    func_0x000107501a68();
    lVar2 = param_1 + 0x338;
    func_0x000107501b78();
    func_0x000107501b6c();
    if (lVar2 != 0) {
      func_0x000107501a7c();
    }
    func_0x000107501d14();
    *(undefined1 *)(param_1 + 0x3a0) = 1;
  }
  return;
}



/* Entry: 10750101c; end: 1075010a3;  */

void FUN_10750101c(long *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  code *extraout_x9;
  long lStack_38;
  
  func_0x000107501ad0(param_2);
  func_0x000107501d1c();
  lVar1 = *param_3;
  lVar2 = param_3[1];
  func_0x000107501d68();
  (*extraout_x9)(&lStack_38,param_2);
  *param_1 = lVar2 - lVar1 >> 2;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 4;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[5] = lStack_38;
  return;
}



/* Entry: 1075010a4; end: 107501173;  */

void FUN_1075010a4(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puStack_70;
  undefined4 *puStack_68;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  func_0x000107501cd0(&puStack_70);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar2 = (ulong)((long)puStack_68 - (long)puStack_70) >> 2 & 0xffffffff;
  puVar3 = puStack_70;
  puVar4 = puStack_68;
  if (uVar2 != 0) {
    puVar1 = param_1 + 2;
    puStack_38 = puVar1;
    FUN_107457404();
    puStack_40 = puVar1 + uVar2;
    puStack_58 = puVar1;
    puStack_50 = puVar1;
    puStack_48 = puVar1;
    FUN_107457378(param_1,&puStack_58);
    FUN_107457444(&puStack_58);
    puVar3 = puStack_70;
    puVar4 = puStack_68;
  }
  for (; puVar3 != puVar4; puVar3 = puVar3 + 1) {
    puStack_58 = (undefined8 *)CONCAT44(*puVar3,*puVar3);
    func_0x000107457248(param_1,&puStack_58);
  }
  func_0x000104c336c8(&puStack_70);
  return;
}



/* Entry: 107501174; end: 107501267;  */

void FUN_107501174(undefined8 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  param_1[1] = 0;
  *param_1 = &PTR_DAT_11099ed40;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_107454eb4(param_1,param_2 * param_2 * 6);
  iVar2 = 0;
  while (iVar2 != param_2) {
    iVar2 = iVar2 + 1;
    for (iVar1 = param_2; iVar1 != 0; iVar1 = iVar1 + -1) {
      func_0x000107501d28();
      func_0x000107501d28();
    }
  }
  return;
}



/* Entry: 107501268; end: 1075012f3;  */

void FUN_107501268(undefined8 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puStack_48;
  undefined4 *puStack_40;
  
  func_0x000107501cd0(&puStack_48);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10750184c(param_1,(ulong)((long)puStack_40 - (long)puStack_48) >> 2 & 0xffffffff);
  for (puVar1 = puStack_48; puVar1 != puStack_40; puVar1 = puVar1 + 1) {
    FUN_107501488(param_1,*puVar1);
  }
  func_0x000104c336c8(&puStack_48);
  return;
}



/* Entry: 1075012f4; end: 1075013b7;  */

void FUN_1075012f4(int param_1)

{
  int iVar1;
  undefined4 extraout_w8;
  undefined4 extraout_var;
  int iVar2;
  
  func_0x000107501c08();
  param_1 = param_1 + 1;
  func_0x000104c33d24(CONCAT44(extraout_var,extraout_w8),param_1 * param_1);
  for (iVar2 = 0; iVar1 = param_1, iVar2 != param_1; iVar2 = iVar2 + 1) {
    for (; iVar1 != 0; iVar1 = iVar1 + -1) {
      func_0x0001072c7768();
    }
  }
  return;
}



/* Entry: 1075013b8; end: 10750141f;  */

undefined8 FUN_1075013b8(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined8 uStack_58;
  
  func_0x000107501af4();
  func_0x000107501b90();
  func_0x000107501c18(uStack_58);
  func_0x000107501c6c();
  FUN_107408540();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x000107501c78();
  return uVar1;
}



/* Entry: 107501420; end: 107501487;  */

undefined8 FUN_107501420(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined8 uStack_58;
  
  func_0x000107501af4();
  func_0x000107501b90();
  func_0x000107501c18(uStack_58);
  func_0x000107501c6c();
  FUN_107408540();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x000107501c78();
  return uVar1;
}



/* Entry: 107501488; end: 10750155b;  */

/* WARNING: Possible PIC construction at 0x000107501510: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107501514) */

void FUN_107501488(long *param_1,undefined4 param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long extraout_x8;
  ulong uVar4;
  undefined4 *puVar5;
  undefined1 auStack_58 [16];
  undefined4 *puStack_48;
  
  puVar5 = (undefined4 *)param_1[1];
  if (puVar5 < (undefined4 *)param_1[2]) {
    *puVar5 = param_2;
    param_1[1] = (long)(puVar5 + 1);
    return;
  }
  lVar2 = (long)puVar5 - *param_1 >> 2;
  uVar1 = lVar2 + 1;
  if (uVar1 >> 0x3e == 0) {
    uVar3 = param_1[2] - *param_1;
    uVar4 = (long)uVar3 >> 1;
    if (uVar4 <= uVar1) {
      uVar4 = uVar1;
    }
    if (0x7ffffffffffffffb < uVar3) {
      uVar4 = 0x3fffffffffffffff;
    }
    FUN_107501568(auStack_58,uVar4);
    *puStack_48 = param_2;
    puStack_48 = puStack_48 + 1;
    func_0x000107501c6c();
  }
  else {
    FUN_10750155c();
  }
  func_0x000107501cb8();
  _memcpy(extraout_x8 - lVar2);
  func_0x000107501b20();
  return;
}



/* Entry: 10750155c; end: 107501567;  */

long * FUN_10750155c(long *param_1,ulong param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x9;
  
  func_0x000107501adc();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    if (param_2 >> 0x3e != 0) {
      func_0x000104bd35f4();
      func_0x000107501d80();
      lVar2 = extraout_x9;
      while (lVar2 != extraout_x8) {
        lVar2 = lVar2 + -4;
        param_1[2] = lVar2;
      }
      if (*param_1 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    lVar2 = param_2 << 2;
    __Znwm();
  }
  lVar1 = lVar2 + param_3 * 4;
  *param_1 = lVar2;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = lVar2 + param_2 * 4;
  return param_1;
}



/* Entry: 107501568; end: 1075015cb;  */

long * FUN_107501568(long *param_1,ulong param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x9;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    if (param_2 >> 0x3e != 0) {
      func_0x000104bd35f4();
      func_0x000107501d80();
      lVar2 = extraout_x9;
      while (lVar2 != extraout_x8) {
        lVar2 = lVar2 + -4;
        param_1[2] = lVar2;
      }
      if (*param_1 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    lVar2 = param_2 << 2;
    __Znwm();
  }
  lVar1 = lVar2 + param_3 * 4;
  *param_1 = lVar2;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = lVar2 + param_2 * 4;
  return param_1;
}



/* Entry: 1075015cc; end: 10750162b;  */

void FUN_1075015cc(void)

{
  long extraout_x8;
  long extraout_x9;
  long lVar1;
  long *unaff_x19;
  
  func_0x000107501d80();
  lVar1 = extraout_x9;
  while (lVar1 != extraout_x8) {
    lVar1 = lVar1 + -4;
    unaff_x19[2] = lVar1;
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 10750162c; end: 1075016e3;  */

undefined8 * FUN_10750162c(undefined8 *param_1,undefined4 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined4 *puVar9;
  
  puVar3 = (undefined4 *)param_1[1];
  if (puVar3 < (undefined4 *)param_1[2]) {
    puVar9 = puVar3 + 1;
    *puVar3 = param_2;
    puVar4 = param_1;
LAB_1075016d0:
    param_1[1] = puVar9;
    return puVar4;
  }
  puVar7 = (undefined8 *)*param_1;
  lVar8 = (long)puVar3 - (long)puVar7 >> 2;
  uVar1 = lVar8 + 1;
  puVar4 = param_1;
  if (uVar1 >> 0x3e == 0) {
    uVar5 = (long)param_1[2] - (long)puVar7;
    uVar6 = (long)uVar5 >> 1;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7ffffffffffffffb < uVar5) {
      uVar6 = 0x3fffffffffffffff;
    }
    if (uVar6 >> 0x3e == 0) {
      puVar4 = (undefined8 *)(uVar6 << 2);
      __Znwm();
      puVar3 = (undefined4 *)((long)puVar4 + ((long)puVar3 - (long)puVar7));
      lVar2 = (long)puVar4 + uVar6 * 4;
      puVar9 = puVar3 + 1;
      *puVar3 = param_2;
      func_0x000107501c98();
      *param_1 = puVar3 + -lVar8;
      param_1[1] = puVar9;
      param_1[2] = lVar2;
      if (puVar7 != (undefined8 *)0x0) {
        __ZdlPv(puVar7);
        puVar4 = puVar7;
      }
      goto LAB_1075016d0;
    }
  }
  else {
    FUN_1075016e4();
  }
  func_0x000104bd35f4();
  func_0x000107501adc();
  func_0x000107501d74();
  if (puVar4 != (undefined8 *)0x0) {
    func_0x000107501c80();
  }
  return param_1;
}



/* Entry: 1075016e4; end: 1075016ef;  */

void FUN_1075016e4(long param_1)

{
  func_0x000107501adc();
  func_0x000107501d74();
  if (param_1 != 0) {
    func_0x000107501c80();
  }
  return;
}



/* Entry: 1075016f0; end: 107501713;  */

void FUN_1075016f0(long param_1)

{
  func_0x000107501d74();
  if (param_1 != 0) {
    func_0x000107501c80();
  }
  return;
}



/* Entry: 107501714; end: 1075017d7;  */

undefined8 * FUN_107501714(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  
  puVar3 = (undefined8 *)param_1[1];
  if (puVar3 < (undefined8 *)param_1[2]) {
    puVar9 = puVar3 + 1;
    *puVar3 = param_2;
    puVar4 = param_1;
  }
  else {
    puVar7 = (undefined8 *)*param_1;
    lVar8 = (long)puVar3 - (long)puVar7 >> 3;
    uVar1 = lVar8 + 1;
    puVar4 = param_1;
    if (uVar1 >> 0x3d != 0) {
      FUN_1075017d8();
LAB_1075017d4:
      func_0x000104bd35f4();
      func_0x000107501adc();
      func_0x000107501d74();
      if (puVar4 != (undefined8 *)0x0) {
        func_0x000107501c80();
      }
      return param_1;
    }
    uVar5 = (long)param_1[2] - (long)puVar7;
    uVar6 = (long)uVar5 >> 2;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar6 = 0x1fffffffffffffff;
    }
    if (uVar6 == 0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      if (uVar6 >> 0x3d != 0) goto LAB_1075017d4;
      puVar4 = (undefined8 *)(uVar6 << 3);
      __Znwm();
    }
    puVar3 = (undefined8 *)((long)puVar4 + ((long)puVar3 - (long)puVar7));
    puVar2 = puVar4 + uVar6;
    puVar9 = puVar3 + 1;
    *puVar3 = param_2;
    func_0x000107501c98();
    *param_1 = puVar3 + -lVar8;
    param_1[1] = puVar9;
    param_1[2] = puVar2;
    if (puVar7 != (undefined8 *)0x0) {
      __ZdlPv(puVar7);
      puVar4 = puVar7;
    }
  }
  param_1[1] = puVar9;
  return puVar4;
}



/* Entry: 1075017d8; end: 1075017e3;  */

void FUN_1075017d8(long param_1)

{
  func_0x000107501adc();
  func_0x000107501d74();
  if (param_1 != 0) {
    func_0x000107501c80();
  }
  return;
}



/* Entry: 1075017e4; end: 107501807;  */

void FUN_1075017e4(long param_1)

{
  func_0x000107501d74();
  if (param_1 != 0) {
    func_0x000107501c80();
  }
  return;
}



/* Entry: 107501808; end: 10750184b;  */

long * FUN_107501808(long param_1,undefined2 *param_2,long param_3)

{
  long lVar1;
  undefined2 *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined2 *extraout_x8;
  undefined2 *extraout_x8_00;
  long lVar7;
  undefined1 auStack_78 [16];
  undefined2 *puStack_68;
  
  plVar5 = *(long **)(param_1 + 0x10);
  plVar4 = (long *)(param_1 + 8);
  lVar6 = (long)(param_2 + param_3) - (long)param_2 >> 1;
  if (0 < lVar6) {
    lVar7 = *(long *)(param_1 + 0x10);
    if (*(long *)(param_1 + 0x18) - lVar7 >> 1 < lVar6) {
      plVar3 = plVar4;
      func_0x00010730bcd0(plVar4,lVar6 + (lVar7 - *plVar4 >> 1));
      func_0x00010730babc(auStack_78,plVar3,(long)plVar5 - *plVar4 >> 1,(long *)(param_1 + 0x18));
      puVar2 = puStack_68;
      for (lVar7 = lVar6 << 1; lVar7 != 0; lVar7 = lVar7 + -2) {
        *puVar2 = *param_2;
        param_2 = param_2 + 1;
        puVar2 = puVar2 + 1;
      }
      puStack_68 = puStack_68 + lVar6;
      func_0x00010730bd08(plVar4,auStack_78,plVar5);
      func_0x00010730cbec();
      plVar5 = plVar4;
    }
    else {
      lVar7 = lVar7 - (long)plVar5;
      lVar1 = lVar7 >> 1;
      if (lVar1 < lVar6) {
        func_0x000100b56b4c(plVar4,(long)param_2 + lVar7,param_2 + param_3,lVar6 - lVar1);
        if (0 < lVar1) {
          func_0x00010730ccd4();
          puVar2 = extraout_x8;
          for (; lVar7 != 0; lVar7 = lVar7 + -2) {
            *puVar2 = *param_2;
            puVar2 = puVar2 + 1;
            param_2 = param_2 + 1;
          }
        }
      }
      else {
        func_0x00010730ccd4();
        puVar2 = extraout_x8_00;
        for (lVar6 = lVar6 << 1; lVar6 != 0; lVar6 = lVar6 + -2) {
          *puVar2 = *param_2;
          puVar2 = puVar2 + 1;
          param_2 = param_2 + 1;
        }
      }
    }
  }
  return plVar5;
}



/* Entry: 10750184c; end: 1075018ab;  */

void FUN_10750184c(long *param_1,ulong param_2)

{
  undefined1 auStack_48 [40];
  
  if ((ulong)(param_1[2] - *param_1 >> 2) < param_2) {
    FUN_107501568(auStack_48,param_2,param_1[1] - *param_1 >> 2);
    func_0x000107501c6c();
    func_0x000107501530();
    FUN_1075015cc(auStack_48);
  }
  return;
}



/* Entry: 1075018ac; end: 1075018b7;  */

void FUN_1075018ac(undefined8 param_1,undefined8 param_2,long param_3)

{
  long extraout_x8;
  
  func_0x000107501adc();
  func_0x000107501cb8();
  _memcpy(extraout_x8 + (param_3 / -0xc) * 0xc);
  func_0x000107501b20();
  return;
}



/* Entry: 1075018b8; end: 1075018ef;  */

void FUN_1075018b8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long extraout_x8;
  
  func_0x000107501cb8();
  _memcpy(extraout_x8 + (param_3 / -0xc) * 0xc);
  func_0x000107501b20();
  return;
}



/* Entry: 1075018f0; end: 10750192b;  */

void FUN_1075018f0(void)

{
  long extraout_x8;
  long extraout_x9;
  long lVar1;
  long *unaff_x19;
  
  func_0x000107501d80();
  lVar1 = extraout_x9;
  while (lVar1 != extraout_x8) {
    lVar1 = lVar1 + -0xc;
    unaff_x19[2] = lVar1;
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 10750192c; end: 107501a33;  */

long * FUN_10750192c(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  long lStack_58;
  undefined8 *puStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  plVar4 = param_1 + 2;
  puVar7 = (undefined8 *)param_1[1];
  if (puVar7 < (undefined8 *)*plVar4) {
    uVar6 = *param_2;
    *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(param_2 + 1);
    *puVar7 = uVar6;
    lVar9 = (long)puVar7 + 0xc;
    plVar4 = param_1;
  }
  else {
    lVar9 = (long)puVar7 - *param_1;
    uVar1 = lVar9 / 0xc + 1;
    plVar5 = param_1;
    if (0x1555555555555555 < uVar1) {
      FUN_1075018ac();
LAB_107501a30:
      func_0x000104bd35f4();
      func_0x000107501d74();
      if (plVar5 != (long *)0x0) {
        func_0x000107501c80();
      }
      return param_1;
    }
    uVar2 = (*plVar4 - *param_1) / 0xc;
    uVar8 = uVar2 * 2;
    if (uVar8 < uVar1 || uVar8 - uVar1 == 0) {
      uVar8 = uVar1;
    }
    if (0xaaaaaaaaaaaaaa9 < uVar2) {
      uVar8 = 0x1555555555555555;
    }
    plStack_38 = plVar4;
    if (uVar8 == 0) {
      lVar3 = 0;
    }
    else {
      if (0x1555555555555555 < uVar8) goto LAB_107501a30;
      lVar3 = uVar8 * 0xc;
      __Znwm();
    }
    puStack_50 = (undefined8 *)(lVar3 + lVar9);
    lStack_40 = lVar3 + uVar8 * 0xc;
    *puStack_50 = *param_2;
    *(undefined4 *)(puStack_50 + 1) = *(undefined4 *)(param_2 + 1);
    lStack_48 = (long)puStack_50 + 0xc;
    func_0x000107501c6c();
    FUN_1075018b8();
    lVar9 = param_1[1];
    plVar4 = &lStack_58;
    FUN_1075018f0(plVar4);
  }
  param_1[1] = lVar9;
  return plVar4;
}



/* Entry: 107501a34; end: 107501a57;  */

void FUN_107501a34(long param_1)

{
  func_0x000107501d74();
  if (param_1 != 0) {
    func_0x000107501c80();
  }
  return;
}



/* Entry: 107501a58; end: 107501d8b;  */

/* WARNING: Removing unreachable block (ram,0x00010730bc5c) */
/* WARNING: Removing unreachable block (ram,0x00010730bc6c) */
/* WARNING: Removing unreachable block (ram,0x00010730bc54) */

undefined8 * FUN_107501a58(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined2 *extraout_x8;
  long lVar6;
  undefined8 *puVar7;
  long in_stack_00000048;
  undefined8 *in_stack_00000050;
  long in_stack_00000058;
  undefined1 auStack_78 [16];
  undefined2 *puStack_68;
  
  puVar7 = in_stack_00000050;
  puVar4 = &stack0x00000048;
  lVar5 = (long)&stack0x0000002e - (long)&stack0x00000028 >> 1;
  if (0 < lVar5) {
    if (in_stack_00000058 - (long)in_stack_00000050 >> 1 < lVar5) {
      puVar3 = puVar4;
      func_0x00010730bcd0(puVar4,lVar5 + ((long)in_stack_00000050 - in_stack_00000048 >> 1));
      func_0x00010730babc(auStack_78,puVar3,(long)puVar7 - in_stack_00000048 >> 1,&stack0x00000058);
      puVar1 = (undefined2 *)&stack0x00000028;
      puVar2 = puStack_68;
      for (lVar6 = lVar5 << 1; lVar6 != 0; lVar6 = lVar6 + -2) {
        *puVar2 = *puVar1;
        puVar1 = puVar1 + 1;
        puVar2 = puVar2 + 1;
      }
      puStack_68 = puStack_68 + lVar5;
      func_0x00010730bd08(puVar4,auStack_78,puVar7);
      func_0x00010730cbec();
      puVar7 = puVar4;
    }
    else if (lVar5 < 1) {
      func_0x00010730ccd4();
      puVar1 = (undefined2 *)&stack0x00000028;
      puVar2 = extraout_x8;
      for (lVar5 = lVar5 << 1; lVar5 != 0; lVar5 = lVar5 + -2) {
        *puVar2 = *puVar1;
        puVar1 = puVar1 + 1;
        puVar2 = puVar2 + 1;
      }
    }
    else {
      func_0x000100b56b4c(puVar4,&stack0x00000028,&stack0x0000002e,lVar5);
    }
  }
  return puVar7;
}



/* Entry: 107501d8c; end: 107501db7;  */

long FUN_107501d8c(long param_1)

{
  func_0x00010749f518(param_1 + 0x220);
  FUN_107502750(param_1 + 0x210);
  return param_1;
}



/* Entry: 107501db8; end: 107501edf;  */

void FUN_107501db8(undefined8 param_1,undefined8 param_2,float *param_3,uint param_4,long param_5,
                  int param_6,undefined8 param_7)

{
  float fVar1;
  float fVar2;
  double dVar3;
  ulong uVar4;
  ulong uVar5;
  float fStack_58;
  float fStack_54;
  
  fStack_58 = *param_3;
  uVar5 = (ulong)(uint)fStack_58;
  fStack_54 = param_3[1];
  if ((fStack_58 == 0.0) && (fStack_54 == 0.0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)(param_1,param_2,0x80);
    return;
  }
  dVar3 = 0.0;
  if (param_6 == 0) {
    if (param_4 != 0) {
      dVar3 = -*(double *)(param_5 + 0x70);
    }
  }
  else if ((param_4 & 1) == 0) {
    dVar3 = *(double *)(param_5 + 0x70);
  }
  uVar4 = (ulong)(uint)(float)dVar3;
  FUN_107501ee0(uVar4,&fStack_58);
  if (param_6 == 0) {
    dVar3 = *(double *)(param_5 + 0x78);
    _log2(dVar3);
    FUN_107501f18(uVar4,(float)dVar3,param_7);
    fVar1 = (float)uVar4;
    dVar3 = *(double *)(param_5 + 0x78);
    _log2(dVar3);
    FUN_107501f18(uVar5,(float)dVar3,param_7);
    fVar2 = (float)uVar5;
  }
  else {
    fVar1 = (float)uVar4;
    fVar2 = (float)uVar5;
  }
  func_0x000107876d6c((double)fVar1,(double)fVar2,0,param_1,param_2);
  return;
}



/* Entry: 107501ee0; end: 107501f17;  */

float FUN_107501ee0(float param_1,float param_2,float *param_3)

{
  ___sincosf_stret();
  return -(param_3[1] * param_1) + *param_3 * param_2;
}



/* Entry: 107501f18; end: 107501f67;  */

float FUN_107501f18(float param_1,float param_2,long param_3)

{
  float fVar1;
  double dVar2;
  
  fVar1 = (float)NEON_ucvtf((uint)*(byte *)(param_3 + 4));
  dVar2 = (double)(param_2 - fVar1);
  _exp2(dVar2);
  return (float)((8192.0 / (dVar2 * 512.0)) * (double)param_1);
}



/* Entry: 107501f68; end: 107501f87;  */

/* WARNING: Removing unreachable block (ram,0x000107501e2c) */
/* WARNING: Removing unreachable block (ram,0x000107501e30) */
/* WARNING: Removing unreachable block (ram,0x000107501e60) */

void FUN_107501f68(undefined8 param_1,long param_2,float *param_3,int param_4,long param_5)

{
  double dVar1;
  ulong uVar2;
  ulong uVar3;
  float fStack_58;
  float fStack_54;
  
  fStack_58 = *param_3;
  uVar3 = (ulong)(uint)fStack_58;
  fStack_54 = param_3[1];
  if ((fStack_58 == 0.0) && (fStack_54 == 0.0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)(param_1,param_2 + 0x10,0x80);
    return;
  }
  dVar1 = 0.0;
  if (param_4 != 0) {
    dVar1 = -*(double *)(param_5 + 0x70);
  }
  uVar2 = (ulong)(uint)(float)dVar1;
  FUN_107501ee0(uVar2,&fStack_58);
  dVar1 = *(double *)(param_5 + 0x78);
  _log2(dVar1);
  FUN_107501f18(uVar2,(float)dVar1,param_2);
  dVar1 = *(double *)(param_5 + 0x78);
  _log2(dVar1);
  FUN_107501f18(uVar3,(float)dVar1,param_2);
  func_0x000107876d6c((double)(float)uVar2,(double)(float)uVar3,0,param_1,param_2 + 0x10);
  return;
}



/* Entry: 107501f88; end: 107501fdb;  */

void FUN_107501f88(void)

{
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
  
  uStack_90 = 0x3ff0000000000000;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_68 = 0x3ff0000000000000;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0x3ff0000000000000;
  uStack_30 = 0;
  uStack_38 = 0;
  uStack_20 = 0;
  uStack_28 = 0;
  uStack_18 = 0x3ff0000000000000;
  FUN_107501db8(&uStack_90);
  return;
}



/* Entry: 107501fdc; end: 107501feb;  */

void FUN_107501fdc(long param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  
  dVar22 = *(double *)(param_1 + 0x110);
  dVar10 = *(double *)(param_1 + 0x118);
  dVar2 = *(double *)(param_1 + 0x120);
  dVar1 = *(double *)(param_1 + 0x128);
  dVar24 = *(double *)(param_1 + 0x130);
  dVar21 = *(double *)(param_1 + 0x138);
  dVar17 = *(double *)(param_1 + 0x140);
  dVar3 = *(double *)(param_1 + 0x148);
  dVar26 = *(double *)(param_1 + 0x150);
  dVar23 = *(double *)(param_1 + 0x158);
  dVar19 = *(double *)(param_1 + 0x160);
  dVar5 = *(double *)(param_1 + 0x168);
  dVar27 = *param_2;
  dVar28 = param_2[1];
  dVar30 = param_2[2];
  dVar7 = param_2[3];
  dVar31 = param_2[4];
  dVar32 = param_2[5];
  dVar11 = param_2[6];
  dVar8 = param_2[7];
  dVar12 = param_2[8];
  dVar14 = param_2[9];
  dVar29 = param_2[10];
  dVar9 = param_2[0xb];
  dVar15 = param_2[0xc];
  dVar16 = param_2[0xd];
  dVar25 = param_2[0xe];
  dVar13 = param_2[0xf];
  dVar4 = *(double *)(param_1 + 0x170);
  dVar18 = *(double *)(param_1 + 0x178);
  dVar6 = *(double *)(param_1 + 0x180);
  dVar20 = *(double *)(param_1 + 0x188);
  *param_2 = dVar24 * dVar28 + dVar27 * dVar22 + dVar30 * dVar26 + dVar7 * dVar4;
  param_2[1] = dVar21 * dVar28 + dVar27 * dVar10 + dVar30 * dVar23 + dVar7 * dVar18;
  param_2[2] = dVar17 * dVar28 + dVar27 * dVar2 + dVar30 * dVar19 + dVar7 * dVar6;
  param_2[3] = dVar3 * dVar28 + dVar27 * dVar1 + dVar30 * dVar5 + dVar7 * dVar20;
  param_2[4] = dVar24 * dVar32 + dVar31 * dVar22 + dVar11 * dVar26 + dVar8 * dVar4;
  param_2[5] = dVar21 * dVar32 + dVar31 * dVar10 + dVar11 * dVar23 + dVar8 * dVar18;
  param_2[6] = dVar17 * dVar32 + dVar31 * dVar2 + dVar11 * dVar19 + dVar8 * dVar6;
  param_2[7] = dVar3 * dVar32 + dVar31 * dVar1 + dVar11 * dVar5 + dVar8 * dVar20;
  param_2[8] = dVar24 * dVar14 + dVar12 * dVar22 + dVar29 * dVar26 + dVar9 * dVar4;
  param_2[9] = dVar21 * dVar14 + dVar12 * dVar10 + dVar29 * dVar23 + dVar9 * dVar18;
  param_2[10] = dVar17 * dVar14 + dVar12 * dVar2 + dVar29 * dVar19 + dVar9 * dVar6;
  param_2[0xb] = dVar3 * dVar14 + dVar12 * dVar1 + dVar29 * dVar5 + dVar9 * dVar20;
  param_2[0xc] = dVar24 * dVar16 + dVar15 * dVar22 + dVar25 * dVar26 + dVar13 * dVar4;
  param_2[0xd] = dVar21 * dVar16 + dVar15 * dVar10 + dVar25 * dVar23 + dVar13 * dVar18;
  param_2[0xe] = dVar17 * dVar16 + dVar15 * dVar2 + dVar25 * dVar19 + dVar13 * dVar6;
  param_2[0xf] = dVar3 * dVar16 + dVar15 * dVar1 + dVar25 * dVar5 + dVar13 * dVar20;
  return;
}



/* Entry: 107501fec; end: 107502033;  */

void FUN_107501fec(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined4 uStack_5c;
  undefined1 uStack_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [16];
  long lStack_40;
  long lStack_28;
  
  (**(code **)(**(long **)(param_1 + 0x220) + 0x40))();
  lVar3 = *(long *)(param_1 + 0x210);
  if (lVar3 != 0) {
    if (*(long *)(lVar3 + 0x78) != *(long *)(lVar3 + 0x80)) {
      FUN_1074409ec(auStack_50,param_2,(long *)(lVar3 + 0x78),1);
      func_0x000107309708(lVar3 + 0xe0,auStack_50);
      lVar1 = lStack_28;
      lStack_28 = 0;
      if (lVar1 != 0) {
        func_0x000107440ea4();
      }
      FUN_1073da574(auStack_50,param_2,lVar3 + 0x90,1);
      func_0x000107309778(lVar3 + 0x118,auStack_50);
      lVar1 = lStack_40;
      lStack_40 = 0;
      if (lVar1 != 0) {
        func_0x000107440ea4();
      }
    }
    if ((*(byte *)(lVar3 + 0x150) & 1) == 0) {
      uStack_54 = 0;
      if ((bRam00000001136cb8e8 & 1) == 0) {
        iVar2 = 0x136cb8e8;
        ___cxa_guard_acquire();
        if (iVar2 != 0) {
          FUN_10743a370(0x1136cb8f0,0x100000001,&uStack_54,4);
          ___cxa_guard_release(0x1136cb8e8);
        }
      }
      uStack_58 = 0;
      uStack_5c = 0;
      FUN_107432024(auStack_50,param_2,0x1136cb8f0,&uStack_5c,0);
      FUN_107440a90(lVar3 + 0x138,auStack_50);
      lVar3 = lStack_40;
      lStack_40 = 0;
      if (lVar3 != 0) {
        func_0x000107440ea4();
      }
    }
    return;
  }
  return;
}



/* Entry: 107502034; end: 1075022fb;  */

void FUN_107502034(long param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  byte bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  byte *pbVar9;
  byte bVar10;
  long lVar11;
  long *plVar12;
  int *piVar13;
  byte bVar14;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  
  (**(code **)(**(long **)(param_1 + 0x218) + 0x10))(&uStack_100);
  uVar7 = uStack_f8;
  uVar8 = uStack_100;
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_a8 = *(undefined8 *)(param_1 + 0x228);
  lStack_b0 = *(long *)(param_1 + 0x220);
  *(undefined8 *)(param_1 + 0x228) = uVar7;
  *(undefined8 *)(param_1 + 0x220) = uVar8;
  func_0x00010749f518(&lStack_b0);
  func_0x00010749f518(&uStack_100);
  lStack_b0 = param_2[2];
  (**(code **)(**(long **)(param_1 + 0x220) + 0x48))(*(long **)(param_1 + 0x220),&lStack_b0);
  plVar12 = *(long **)(param_1 + 0x218);
  *(char *)(param_1 + 0x230) = (char)plVar12[0xf];
  piVar13 = (int *)param_2[1];
  iVar5 = *piVar13;
  puVar1 = (undefined8 *)(param_1 + 0x210);
  if (iVar5 == 0) {
    FUN_1075022fc(puVar1,0);
    goto LAB_107502250;
  }
  pbVar9 = (byte *)*puVar1;
  if (pbVar9 == (byte *)0x0) {
    bVar14 = *(byte *)(plVar12 + 0x22);
  }
  else {
    bVar6 = *pbVar9;
    bVar14 = *(byte *)(plVar12 + 0x22);
    if (bVar6 == *(byte *)(plVar12 + 0x22)) {
      if (*(char *)((long)plVar12 + 0x8a) == '\x01') {
        bVar10 = *(byte *)((long)plVar12 + 0x89) ^ 1;
      }
      else {
        bVar10 = 0;
      }
      bVar14 = bVar6;
      if (pbVar9[1] == (bVar10 & 1)) {
        bVar6 = pbVar9[0x10];
        if ((bVar6 == *(byte *)(plVar12 + 0xc)) && (bVar6 != 0)) {
          if (*(long *)(pbVar9 + 8) == plVar12[0xb]) {
LAB_107502154:
            bVar6 = pbVar9[0x20];
            if ((bVar6 == *(byte *)(plVar12 + 0xe)) && (bVar6 != 0)) {
              if (*(long *)(pbVar9 + 0x18) == plVar12[0xd]) {
LAB_107502184:
                if (*(int *)(pbVar9 + 0x28) == iVar5) goto LAB_107502250;
              }
            }
            else if (bVar6 == *(byte *)(plVar12 + 0xe)) goto LAB_107502184;
          }
        }
        else if (bVar6 == *(byte *)(plVar12 + 0xc)) goto LAB_107502154;
      }
    }
  }
  if (*(char *)((long)plVar12 + 0x8a) == '\x01') {
    bVar6 = *(byte *)((long)plVar12 + 0x89) ^ 1;
  }
  else {
    bVar6 = 0;
  }
  (**(code **)(*plVar12 + 0x60))(&uStack_100,plVar12);
  iVar5 = *piVar13;
  uVar8 = 0x158;
  __Znwm(0x158);
  lVar11 = plVar12[0xb];
  lVar3 = plVar12[0xc];
  lVar2 = plVar12[0xd];
  lVar4 = plVar12[0xe];
  func_0x0001073ebf24(&lStack_b0,&uStack_100);
  FUN_1074401bc(uVar8,(long)plVar12 + 0xc,bVar14 & 1,bVar6 & 1,lVar11,lVar3,lVar2,lVar4,iVar5);
  func_0x0001073ebef4(&lStack_b0);
  uStack_b8 = 0;
  FUN_1075022fc(puVar1,uVar8);
  FUN_107502750(&uStack_b8);
  func_0x0001073ebef4(&uStack_100);
LAB_107502250:
  lVar11 = *param_2;
  func_0x000107415eec(lVar11 + 0x180,param_1 + 0x10,param_1,0x2000);
  func_0x000107502818(param_1 + 0x90);
  func_0x000107502818(param_1 + 0x110);
  func_0x000107502818(param_1 + 400);
  func_0x000107417744(*param_2 + 0x180,param_1 + 400);
  func_0x000107877034(param_1 + 0x10,lVar11,param_1 + 0x10);
  func_0x000107877034(param_1 + 0x90,lVar11 + 0x100,param_1 + 0x90);
  return;
}



/* Entry: 1075022fc; end: 107502313;  */

void FUN_1075022fc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_107502790(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107502314; end: 107502747;  */

void FUN_107502314(undefined8 param_1,float param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,long param_6)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b0;
  float fStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  uint uStack_a0;
  undefined4 uStack_9c;
  undefined2 uStack_98;
  undefined1 uStack_96;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined2 uStack_78;
  undefined8 *apuStack_70 [2];
  undefined1 auStack_60 [8];
  undefined1 uStack_58;
  
  if (*(char *)(param_5 + 0x230) != '\x01') {
    return;
  }
  uVar3 = *(uint *)(param_6 + 0x68);
  if (uVar3 == 0) {
    return;
  }
  if ((uVar3 & 0xe) == 0) {
LAB_107502574:
    if ((uVar3 & 0xc) != 0) {
      (**(code **)(**(long **)(param_6 + 0x18) + 0x58))
                (*(long **)(param_6 + 0x18),*(long *)(param_5 + 0x210) + 0x118);
      (**(code **)(**(long **)(param_6 + 0x18) + 0x60))
                (*(long **)(param_6 + 0x18),0,*(long *)(param_5 + 0x210) + 0xe0);
      auVar5 = NEON_fmov(0x3f800000,4);
      func_0x0001075027ec(auVar5._0_8_,*(undefined8 *)(param_6 + 0x18));
      lVar1 = *(long *)(*(long *)(param_5 + 0x210) + 0xb8);
      for (lVar4 = *(long *)(*(long *)(param_5 + 0x210) + 0xb0); lVar4 != lVar1;
          lVar4 = lVar4 + 0x28) {
        fStack_ac = *(float *)(param_6 + 0x78) * 4.0;
        uStack_b0 = CONCAT31(uStack_b0._1_3_,1);
        func_0x000107502804();
      }
      func_0x0001075027ec(0,*(undefined8 *)(param_6 + 0x18));
      lVar1 = *(long *)(*(long *)(param_5 + 0x210) + 0xb8);
      for (lVar4 = *(long *)(*(long *)(param_5 + 0x210) + 0xb0); lVar4 != lVar1;
          lVar4 = lVar4 + 0x28) {
        fStack_ac = *(float *)(param_6 + 0x78) + *(float *)(param_6 + 0x78);
        uStack_b0 = CONCAT31(uStack_b0._1_3_,1);
        func_0x000107502804(*(undefined8 *)(param_6 + 0x18));
      }
      uVar3 = *(uint *)(param_6 + 0x68);
    }
    if ((uVar3 >> 1 & 1) != 0) {
      if (*(long *)(*(long *)(param_5 + 0x210) + 200) ==
          *(long *)(*(long *)(param_5 + 0x210) + 0xd0)) {
        FUN_1075004a8(&uStack_b0);
        func_0x00010745939c(*(long *)(param_5 + 0x210) + 200,&uStack_b0);
        FUN_1073eb118(&uStack_b0);
      }
      (**(code **)(**(long **)(param_6 + 0x18) + 0x58))
                (*(long **)(param_6 + 0x18),*(long *)(param_6 + 0x48) + 0x150);
      func_0x000107502834(*(undefined8 *)(**(long **)(param_6 + 0x18) + 0x60));
      func_0x0001075027ec(0x3f800000,*(undefined8 *)(param_6 + 0x18));
      lVar1 = *(long *)(*(long *)(param_5 + 0x210) + 0xd0);
      for (lVar4 = *(long *)(*(long *)(param_5 + 0x210) + 200); lVar4 != lVar1; lVar4 = lVar4 + 0x28
          ) {
        fStack_ac = *(float *)(param_6 + 0x78) * 4.0;
        uStack_b0 = CONCAT31(uStack_b0._1_3_,3);
        func_0x000107502804(*(undefined8 *)(param_6 + 0x18));
      }
    }
  }
  else {
    auStack_60[0] = 0;
    uStack_58 = 0;
    uStack_b0 = 0x10;
    uStack_a8 = 0;
    uStack_a4 = 0;
    uVar3 = (uint)*(byte *)(*(long *)(param_6 + 0x28) + 0xa94);
    uStack_9c = *(undefined4 *)(param_6 + 0x78);
    uStack_98 = 0;
    uStack_96 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0x101010100000000;
    uStack_78 = 0xf01;
    uStack_a0 = uVar3;
    FUN_1073ca29c(apuStack_70,*(undefined8 *)(param_6 + 0x90),auStack_60,&uStack_b0);
    if (apuStack_70[0] != (undefined8 *)0x0) {
      plVar2 = (long *)*apuStack_70[0];
      (**(code **)(*plVar2 + 0x18))();
      if ((int)plVar2 == 2) {
        uStack_c0 = 7;
        uStack_b8 = 0x3f800000;
        fStack_ac = 9.80909e-45;
        uStack_a8 = 0;
        uStack_a4 = 0;
        uStack_a0 = CONCAT13(uStack_a0._3_1_,0x10101);
        (**(code **)(**(long **)(param_6 + 0x18) + 0x80))
                  (*(long **)(param_6 + 0x18),&uStack_c0,&uStack_b0);
        uStack_b0 = CONCAT13(uStack_b0._3_1_,0x10000);
        uStack_b0 = CONCAT22(uStack_b0._2_2_,0x100);
        (**(code **)(**(long **)(param_6 + 0x18) + 0x88))(*(long **)(param_6 + 0x18),&uStack_b0);
        (**(code **)(**(long **)(param_6 + 0x18) + 0x40))(*(long **)(param_6 + 0x18),apuStack_70[0])
        ;
        plVar2 = *(long **)(param_6 + 0x18);
        func_0x000107482794(&uStack_b0,param_5 + 0x10);
        func_0x000107502834(*(undefined8 *)(*plVar2 + 0xd0),plVar2);
        (**(code **)(**(long **)(param_6 + 0x18) + 0xa0))(*(long **)(param_6 + 0x18),1);
        if (uVar3 != 0) {
          plVar2 = *(long **)(param_6 + 0x18);
          uStack_b0 = func_0x000107415f50(*(undefined8 *)(param_6 + 0x28),param_5,0x2000);
          fStack_ac = param_2;
          uStack_a8 = param_3;
          uStack_a4 = param_4;
          (**(code **)(*plVar2 + 0xb8))(plVar2,2,&uStack_b0);
          plVar2 = *(long **)(param_6 + 0x18);
          lVar4 = *(long *)(param_6 + 0x28);
          FUN_107416bf8(lVar4);
          func_0x000107482794(&uStack_b0,lVar4 + 0xaa0);
          (**(code **)(*plVar2 + 0xd0))(plVar2,3,&uStack_b0);
          plVar2 = *(long **)(param_6 + 0x18);
          lVar4 = *(long *)(param_6 + 0x28);
          FUN_107416bf8(lVar4);
          (**(code **)(*plVar2 + 0xb8))(plVar2,4,lVar4 + 0xe30);
          (**(code **)(**(long **)(param_6 + 0x18) + 0xa0))(*(long **)(param_6 + 0x18),5);
        }
        plVar2 = *(long **)(param_6 + 0x18);
        FUN_1073b9c0c(*(long *)(param_5 + 0x210) + 0x138);
        func_0x000107502834(*(undefined8 *)(*plVar2 + 0x70),plVar2);
        func_0x000107502824();
        uVar3 = *(uint *)(param_6 + 0x68);
        goto LAB_107502574;
      }
    }
    func_0x000107502824();
  }
  return;
}



/* Entry: 107502748; end: 10750274f;  */

void FUN_107502748(undefined8 *param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  long lVar2;
  undefined8 unaff_x30;
  undefined8 uVar3;
  
  lVar1 = *(long *)(*(long *)(param_2 + 0x218) + 0x1e8);
  if (lVar1 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  lVar2 = *(long *)(lVar1 + 0x38);
  uVar3 = *(undefined8 *)(lVar1 + 0x30);
  param_1[1] = *(undefined8 *)(lVar1 + 0x38);
  *param_1 = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000107832cb4(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 107502750; end: 107502773;  */

undefined8 FUN_107502750(undefined8 param_1)

{
  FUN_1075022fc(param_1,0);
  return param_1;
}



/* Entry: 107502774; end: 10750278f;  */

void FUN_107502774(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_107502790(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107502790; end: 1075027eb;  */

long FUN_107502790(long param_1)

{
  FUN_107440dd8(param_1 + 0x138);
  func_0x00010730b10c(param_1 + 0x118);
  func_0x00010730b13c(param_1 + 0xe0);
  FUN_1073eb118(param_1 + 200);
  FUN_1073eb118(param_1 + 0xb0);
  func_0x00010730b05c(param_1 + 0x98);
  func_0x000107440e08(param_1 + 0x78);
  func_0x0001073ebef4(param_1 + 0x30);
  return param_1;
}



/* Entry: 1075027ec; end: 107502877;  */

void FUN_1075027ec(undefined8 param_1,long *param_2)

{
  undefined8 uStack0000000000000010;
  
  uStack0000000000000010 = param_1;
                    /* WARNING: Could not recover jumptable at 0x000107502800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0xb8))(param_2,6,&stack0x00000010);
  return;
}



/* Entry: 107502878; end: 107502b4b;  */

undefined8 *
FUN_107502878(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 *param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 extraout_x8;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 *puStack_108;
  undefined8 auStack_100 [3];
  undefined8 *puStack_e8;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_80;
  undefined8 uStack_78;
  
  puVar4 = param_2;
  func_0x000107503ea0();
  *puVar4 = &PTR_FUN_1109b7420;
  plVar11 = puVar4 + 1;
  *plVar11 = 0;
  puVar10 = puVar4 + 2;
  *puVar10 = 0;
  puVar4[3] = 0;
  puVar5 = (undefined8 *)0x8;
  uStack_78 = extraout_x8;
  __Znwm();
  *puVar5 = 0;
  param_2[4] = puVar5;
  *(undefined2 *)(param_2 + 5) = 0;
  *(undefined4 *)((long)param_2 + 0x2c) = 0;
  func_0x00010726ed14(param_2 + 6);
  param_2[8] = param_2;
  func_0x0001077f3c4c();
  func_0x0001077f3790();
  puVar4 = &uStack_120;
  FUN_1075037cc(puVar4,param_2 + 6);
  puStack_e8 = (undefined8 *)0x0;
  puStack_108 = param_2;
  func_0x000107503f7c();
  *puVar4 = &PTR_SUB_1109b75e8;
  puVar4[2] = uStack_118;
  puVar4[1] = uStack_120;
  uStack_120 = 0;
  uStack_118 = 0;
  puVar4[3] = uStack_110;
  puVar4[4] = param_2;
  puVar6 = &uStack_140;
  puStack_e8 = puVar4;
  FUN_1075037cc(puVar6,param_2 + 6);
  puStack_c8 = (undefined8 *)0x0;
  puStack_128 = param_2;
  func_0x000107503f7c();
  *puVar6 = &PTR_SUB_1109b7668;
  puVar6[2] = uStack_138;
  puVar6[1] = uStack_140;
  uStack_140 = 0;
  uStack_138 = 0;
  puVar6[3] = uStack_130;
  puVar6[4] = param_2;
  lVar7 = 0x1b8;
  puStack_c8 = puVar6;
  __Znwm();
  FUN_1073b295c(&uStack_c0,auStack_100);
  uStack_80 = 1;
  FUN_1073b0c1c(lVar7,puVar5 + 1,&uStack_c0);
  func_0x0001072bcf50(&uStack_c0);
  lVar8 = *plVar11;
  *plVar11 = lVar7;
  if (lVar8 != 0) {
    func_0x000107503ee8();
  }
  func_0x0001072bcf70(auStack_100);
  func_0x000107503fd8();
  func_0x00010725b1d4(&uStack_120);
  lVar7 = *plVar11;
  lVar8 = param_6[1];
  uVar13 = param_6[1];
  uVar12 = *param_6;
  uVar9 = 0x2c00;
  __Znwm(0x2c00);
  if (lVar8 != 0) {
    plVar1 = (long *)(lVar8 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_c0 = uVar12;
  uStack_b8 = uVar13;
  FUN_107504014(param_1,uVar9,param_3,param_5,lVar7,param_4,&uStack_c0);
  func_0x00010725afe8(&uStack_c0);
  auStack_100[0] = 0;
  FUN_107502c40(puVar10,uVar9);
  puVar4 = auStack_100;
  func_0x0001075038fc(puVar4);
  func_0x000107503e70(uStack_78);
  if ((bool)in_ZR) {
    return param_2;
  }
  ___stack_chk_fail();
  func_0x00010725afe8(&uStack_c0);
  __ZdlPv(uVar9);
  FUN_10750396c(param_2 + 6);
  do {
    func_0x0001075038d0(param_2 + 4);
    func_0x000107503920(param_2 + 3);
    func_0x0001075038fc(puVar10);
    func_0x0001072bc6f8(plVar11);
    __Unwind_Resume(puVar4);
  } while( true );
}



/* Entry: 107502b4c; end: 107502bbb;  */

void FUN_107502b4c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000107503fac();
  puVar1 = (undefined8 *)0x8;
  __Znwm();
  uVar2 = 1;
  __Znwm();
  *puVar1 = uVar2;
  uStack_38 = 0;
  FUN_107503944(unaff_x20 + 0x18,puVar1);
  func_0x000107503920(&uStack_38);
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    FUN_107504464();
  }
  return;
}



/* Entry: 107502bbc; end: 107502c3f;  */

undefined8 * FUN_107502bbc(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_1109b7420;
  plVar1 = param_1 + 2;
  if (*plVar1 != 0) {
    func_0x000107503fe0(param_1,*(undefined8 *)(*plVar1 + 0x2b28));
    FUN_107502c40(plVar1,0);
    func_0x000107503fec();
  }
  FUN_10750396c(param_1 + 6);
  func_0x0001075038d0(param_1 + 4);
  func_0x000107503920(param_1 + 3);
  func_0x0001075038fc(plVar1);
  func_0x0001072bc6f8(param_1 + 1);
  return param_1;
}



/* Entry: 107502c40; end: 107502c67;  */

void FUN_107502c40(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_1075043c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107502c68; end: 107502c6b;  */

undefined8 * FUN_107502c68(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_1109b7420;
  plVar1 = param_1 + 2;
  if (*plVar1 != 0) {
    func_0x000107503fe0(param_1,*(undefined8 *)(*plVar1 + 0x2b28));
    FUN_107502c40(plVar1,0);
    func_0x000107503fec();
  }
  FUN_10750396c(param_1 + 6);
  func_0x0001075038d0(param_1 + 4);
  func_0x000107503920(param_1 + 3);
  func_0x0001075038fc(plVar1);
  func_0x0001072bc6f8(param_1 + 1);
  return param_1;
}



/* Entry: 107502c6c; end: 107502c7f;  */

void FUN_107502c6c(void)

{
  FUN_107502bbc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107502c80; end: 107502cc7;  */

void FUN_107502c80(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x2a59) = 1;
  return;
}



/* Entry: 107502cc8; end: 107503063;  */

void FUN_107502cc8(undefined8 param_1,undefined8 param_2,long *param_3,long *param_4)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  undefined *puVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 in_ZR;
  undefined1 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  long ******pppppplVar14;
  long ******pppppplVar15;
  long ******pppppplVar16;
  long ******pppppplVar17;
  undefined8 *puVar18;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  ulong extraout_x8_01;
  ulong uVar19;
  long extraout_x8_02;
  undefined8 extraout_x8_03;
  long *extraout_x8_04;
  long extraout_x9;
  long lVar20;
  long extraout_x10;
  long ******pppppplVar21;
  int iVar22;
  long *****ppppplVar23;
  long ****pppplVar24;
  long ******pppppplVar25;
  long lVar26;
  long lVar27;
  long *****ppppplVar28;
  long ******pppppplVar29;
  long ******pppppplVar30;
  long ******pppppplVar31;
  long *****ppppplVar32;
  undefined8 uVar33;
  float fVar34;
  long ****pppplStack_a98;
  long lStack_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  long lStack_a78;
  long lStack_a70;
  long ****pppplStack_a60;
  long *****ppppplStack_a58;
  long ****pppplStack_a50;
  long *****ppppplStack_a48;
  undefined8 uStack_a40;
  long lStack_a38;
  long ****apppplStack_a30 [16];
  long ****pppplStack_9b0;
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined *puStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  long ****pppplStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  long lStack_950;
  long lStack_948;
  long *****ppppplStack_930;
  long *****ppppplStack_928;
  long *****ppppplStack_920;
  long *****ppppplStack_918;
  long *****ppppplStack_910;
  long *plStack_908;
  long *****ppppplStack_900;
  long ****pppplStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  long lStack_8d8;
  long *****ppppplStack_8d0;
  long *****ppppplStack_8c8;
  long *****ppppplStack_8c0;
  long *****ppppplStack_8b8;
  undefined8 uStack_8b0;
  long *plStack_7e8;
  long lStack_7e0;
  long *****ppppplStack_740;
  long *****ppppplStack_738;
  long *****ppppplStack_730;
  long *****ppppplStack_728;
  long ****pppplStack_5b0;
  long *****ppppplStack_5a8;
  undefined1 uStack_5a0;
  long *****ppppplStack_590;
  long *****ppppplStack_588;
  long *plStack_580;
  long *****ppppplStack_578;
  long *****ppppplStack_570;
  undefined1 uStack_568;
  long lStack_558;
  long lStack_550;
  long ****pppplStack_400;
  long *****ppppplStack_3f8;
  undefined1 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined4 auStack_358 [6];
  undefined4 uStack_340;
  undefined **ppuStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined4 uStack_318;
  undefined4 uStack_310;
  undefined1 uStack_30c;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  long lStack_2e8;
  undefined1 uStack_2d9;
  long ****apppplStack_2d8 [14];
  ulong auStack_268 [2];
  byte bStack_258;
  char cStack_1d8;
  undefined1 auStack_160 [264];
  undefined8 uStack_58;
  
  plVar11 = param_3;
  func_0x000107503ea0();
  uStack_58 = extraout_x8_03;
  func_0x0001077f3c4c();
  func_0x0001077f3790();
  piVar1 = (int *)(plVar11[0x38] + 0xa8);
  do {
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = *piVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  *(int *)((long)param_3 + 0x2c) = *(int *)((long)param_3 + 0x2c) + 1;
  func_0x000107417778(*param_4 + 0x20);
  uVar33 = *(undefined8 *)(*param_4 + 0x98);
  _log2(uVar33);
  func_0x0001078bc0c8(param_1,param_2,uVar33,plVar11 + 0x38);
  lVar20 = param_3[2];
  *(undefined4 *)(lVar20 + 0x2b70) = *(undefined4 *)(*param_4 + 4);
  *(undefined1 *)(lVar20 + 0x2b74) = 1;
  lVar20 = *param_4 + 0x20;
  FUN_1074178c4();
  uStack_2d9 = (undefined1)lVar20;
  FUN_1073c89ec();
  lStack_2e8 = lVar20;
  FUN_1074f0cc8(apppplStack_2d8,0x67,1,&PTR_DAT_1109b75b8,&uStack_2d9,&PTR_s_api_1109b75c0,
                &lStack_2e8);
  FUN_10743cc34(auStack_268,apppplStack_2d8,7);
  FUN_10743d7bc(auStack_160,auStack_268);
  func_0x000107288cd8(auStack_268);
  func_0x000107262330(apppplStack_2d8);
  auStack_358[0] = 0x68;
  uStack_340 = 0;
  uStack_328 = 0;
  uStack_320 = 0;
  ppuStack_338 = &PTR_DAT_110996720;
  uStack_330 = 0;
  uStack_318 = 0x68;
  uStack_310 = 0;
  uStack_30c = 1;
  uStack_300 = 0;
  uStack_2f8 = 0;
  uStack_308 = 0;
  func_0x0001073caeb8(*(undefined8 *)(param_3[2] + 0x2b28));
  auStack_268[0] = 0;
  FUN_10743d80c(&lStack_2e8,auStack_268);
  if (auStack_268[0] != 0) {
    func_0x000107503ee8();
  }
  func_0x000107262330(auStack_358);
  func_0x0001078b6f88(param_3[4]);
  lVar27 = param_3[2];
  puVar12 = *(undefined8 **)(lVar27 + 0x2b28);
  func_0x0001073caeb8();
  auStack_268[0] = auStack_268[0] & 0xffffffffffffff00;
  lVar20 = *(long *)(param_3[2] + 0x2b50) + 0xab0;
  func_0x00010724e2c8(lVar20,auStack_268);
  FUN_1074eb76c(apppplStack_2d8,lVar27 + 0x480,param_4,puVar12,lVar20);
  ppppplVar23 = (long *****)apppplStack_2d8[0];
  if ((long *****)apppplStack_2d8[0] == (long *****)0x0) {
    pppppplVar17 = (long ******)0x2;
    (**(code **)(**(long **)(param_3[2] + 0x2b28) + 0x48))();
    ppppplVar23 = (long *****)apppplStack_2d8[0];
    if ((long *****)apppplStack_2d8[0] != (long *****)0x0) goto LAB_107502eb8;
LAB_107502f34:
    if ((char)param_3[5] == '\x01') {
      pppppplVar17 = (long ******)&UNK_10de789cc;
      (**(code **)(*param_3 + 0x178))(param_3);
    }
    in_ZR = *(char *)((long)param_3 + 0x29) == '\x01';
    if ((bool)in_ZR) {
      *(undefined1 *)((long)param_3 + 0x29) = 0;
      (**(code **)(*param_3 + 0x148))(param_3);
    }
    func_0x0001078bc240(plVar11 + 0x38);
  }
  else {
LAB_107502eb8:
    (*(code *)(*ppppplVar23)[2])();
    func_0x00010785f1f4();
    auStack_268[0] = auStack_268[0] & 0xffffffffffffff00;
    ppppplVar23 = ppppplVar23 + 0x100;
    func_0x00010724e2c8(ppppplVar23,auStack_268);
    if ((int)ppppplVar23 != 0) {
      FUN_10750622c(auStack_268,param_3[2],apppplStack_2d8);
      in_ZR = cStack_1d8 == '\x01';
      if ((bool)in_ZR) {
        (**(code **)(**(long **)(param_3[2] + 0x2b30) + 0x50))
                  (*(long **)(param_3[2] + 0x2b30),auStack_268);
      }
      func_0x000107503824(auStack_268);
    }
    pppppplVar17 = (long ******)apppplStack_2d8;
    FUN_1075048c8(auStack_268,param_3[2]);
    if ((bStack_258 & 1) != 0) {
      func_0x000107503fd0();
      goto LAB_107502f34;
    }
    pppppplVar17 = (long ******)&UNK_10de789ba;
    (**(code **)(*param_3 + 0x178))(param_3);
    func_0x000107503fd0();
  }
  FUN_1075038a8(apppplStack_2d8);
  FUN_10743d840(&lStack_2e8);
  FUN_10743d7e4();
  func_0x000107503e70(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107503824(auStack_268);
  FUN_1075038a8(apppplStack_2d8);
  FUN_10743d840(&lStack_2e8);
  puVar13 = auStack_160;
  FUN_10743d7e4();
  func_0x000107503e84();
  plVar11 = (long *)(*(long *)(puVar13 + 0x10) + 0x480);
  pppppplVar14 = pppppplVar17;
  puVar18 = puVar12;
  uStack_3d0 = param_2;
  uStack_3c8 = param_1;
  func_0x0001074fe5e8();
  pppplStack_a98 = (long ****)&UNK_10e52b660;
  lStack_a90 = 0;
  uStack_a88 = 0;
  uStack_a80 = 0;
  uStack_3e8 = extraout_x8;
  if (*(char *)(puVar18 + 3) == '\x01') {
    pppppplVar30 = (long ******)puVar12[1];
    pppppplVar21 = (long ******)*puVar12;
    for (; pppppplVar21 != pppppplVar30; pppppplVar21 = pppppplVar21 + 7) {
      plVar9 = plVar11 + 0x1f0;
      pppppplVar14 = pppppplVar21;
      func_0x0001074f3ee4();
      if ((plVar9 != (long *)0x0) && (ppppplVar23 = pppppplVar14[7], ppppplVar23 != (long *****)0x0)
         ) {
        pppplVar24 = ppppplVar23[3];
        ppppplVar28 = &pppplStack_a98;
        pppppplVar14 = (long ******)(pppplVar24 + 1);
        FUN_1074fbeac();
        if (((ulong)pppppplVar14 & 1) != 0) {
          lVar20 = lStack_a90 + (long)ppppplVar28 * 0x40;
          pppppplVar14 = (long ******)(pppplVar24 + 1);
          func_0x000104c2fe00();
          *(long ******)(lVar20 + 0x38) = ppppplVar23;
        }
      }
      puVar12 = puVar18;
    }
  }
  else {
    pppppplVar21 = (long ******)(plVar11 + 0x1f0);
    FUN_1074eb354();
    ppppplStack_590 = (long *****)pppppplVar21;
    ppppplStack_588 = (long *****)pppppplVar14;
    while ((long ******)ppppplStack_590 != (long ******)0x0) {
      ppppplVar28 = (long *****)ppppplStack_588[7];
      pppplVar24 = ppppplVar28[3];
      ppppplVar23 = &pppplStack_a98;
      pppppplVar14 = (long ******)(pppplVar24 + 1);
      FUN_1074fbeac();
      if (((ulong)pppppplVar14 & 1) != 0) {
        lVar20 = lStack_a90 + (long)ppppplVar23 * 0x40;
        pppppplVar14 = (long ******)(pppplVar24 + 1);
        func_0x000104c2fe00();
        *(long ******)(lVar20 + 0x38) = ppppplVar28;
      }
      FUN_1074eb374(&ppppplStack_590);
      puVar12 = puVar18;
    }
  }
  if (*(char *)(puVar12 + 0x1b) == '\x01' && puVar12[0x19] != 0) {
    pppppplVar21 = (long ******)&pppplStack_a98;
    FUN_1074f2a7c();
    ppppplStack_740 = (long *****)pppppplVar21;
    ppppplStack_738 = (long *****)pppppplVar14;
joined_r0x0001074f1c30:
    if ((long ******)ppppplStack_740 != (long ******)0x0) {
      func_0x0001074e3ac0(&ppppplStack_590,ppppplStack_738[7]);
      pppppplVar21 = (long ******)(ppppplStack_590 + 2);
      do {
        pppppplVar21 = (long ******)*pppppplVar21;
        if (pppppplVar21 == (long ******)0x0) {
          func_0x000107283194(&ppppplStack_590);
          ppppplVar23 = ppppplStack_738;
          pppppplVar14 = (long ******)ppppplStack_740;
          func_0x0001074ff6e0();
          func_0x000104c2f714(ppppplVar23);
          func_0x0001074ff77c(&pppplStack_a98);
          goto joined_r0x0001074f1c30;
        }
        puVar8 = puVar12 + 0x16;
        pppppplVar14 = pppppplVar21 + 2;
        func_0x0001072623d4();
      } while (puVar8 == (undefined8 *)0x0);
      func_0x000107283194(&ppppplStack_590);
      func_0x0001074ff6e0();
      goto joined_r0x0001074f1c30;
    }
  }
  pppplStack_970 = (long ****)&UNK_10e52b660;
  uStack_968 = 0;
  uStack_960 = 0;
  uStack_958 = 0;
  puStack_990 = &UNK_10e52b660;
  uStack_988 = 0;
  uStack_980 = 0;
  uStack_978 = 0;
  pppplStack_9b0 = (long ****)&UNK_10e52b660;
  uStack_9a8 = 0;
  uStack_9a0 = 0;
  uStack_998 = 0;
  ppppplVar23 = &pppplStack_a98;
  FUN_1074f2a7c();
  ppppplStack_740 = ppppplVar23;
  while (ppppplStack_738 = (long *****)pppppplVar14, ppppplStack_740 != (long *****)0x0) {
    if ((((*(char *)(pppppplVar14[7] + 7) != '\0') &&
         (pppplVar24 = pppppplVar14[7][3], ((ulong)pppplVar24[0x2c] & 1) == 0)) &&
        (*(float *)(pppplVar24 + 0x26) <= *(float *)(plVar11 + 7))) &&
       (*(float *)(plVar11 + 7) <= *(float *)((long)pppplVar24 + 0x134))) {
      FUN_1074f2b40(&ppppplStack_590,&puStack_990,pppppplVar14);
      func_0x0001072628ec(&ppppplStack_590,&pppplStack_970,pppppplVar14[7][3] + 8);
    }
    func_0x0001074ff6e0();
    pppppplVar14 = (long ******)ppppplStack_738;
  }
  iVar22 = 0;
  plVar2 = (long *)((undefined8 *)plVar11[0x1e9])[1];
  ppppplStack_740 = (long *****)0x0;
  for (plVar9 = *(long **)plVar11[0x1e9]; uVar7 = plVar9 == plVar2, !(bool)uVar7;
      plVar9 = plVar9 + 2) {
    ppppplVar23 = &pppplStack_9b0;
    FUN_1074f8038(ppppplVar23,*plVar9 + 8);
    *(int *)ppppplVar23 = iVar22;
    iVar22 = iVar22 + 1;
  }
  pppppplVar14 = (long ******)(plVar11 + 0xb);
  pppppplVar21 = (long ******)apppplStack_a30;
  FUN_10741607c(pppppplVar14,pppppplVar21,1,0);
  pppplStack_a50 = (long ****)&UNK_10e52b660;
  ppppplStack_a48 = (long *****)0x0;
  uStack_a40 = 0;
  lStack_a38 = 0;
  pppppplVar30 = (long ******)&pppplStack_970;
  func_0x0001072621e0();
  pppppplVar25 = pppppplVar21;
  while (ppppplStack_918 = (long *****)pppppplVar30, ppppplStack_910 = (long *****)pppppplVar25,
        pppppplVar30 != (long ******)0x0) {
    plVar9 = plVar11;
    FUN_1074f146c();
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x88))(&ppppplStack_590);
      pppppplVar30 = (long ******)ppppplStack_590;
      pppppplVar21 = (long ******)ppppplStack_588;
      func_0x0001074f2acc();
      pppppplVar25 = (long ******)ppppplStack_a48;
      func_0x0001074f2acc(pppplStack_a50);
      ppppplVar23 = &pppplStack_a50;
      ppppplStack_8d0 = (long *****)pppppplVar30;
      while (ppppplStack_8c8 = (long *****)pppppplVar21, ppppplStack_740 = ppppplVar23,
            (long ******)ppppplStack_8d0 != (long ******)0x0) {
        ppppplVar28 = ppppplVar23;
        pppppplVar25 = pppppplVar21;
        FUN_1073c6228();
        if (((ulong)pppppplVar25 & 1) != 0) {
          pppplVar24 = ppppplVar23[1] + (long)ppppplVar28 * 10;
          pppppplVar25 = pppppplVar21;
          func_0x000104c2fe00();
          pppplVar24[7] = (long ***)0x0;
          pppplVar24[8] = (long ***)0x0;
          pppplVar24[9] = (long ***)0x0;
          ppppplVar32 = pppppplVar21[7];
          pppplVar24[8] = (long ***)pppppplVar21[8];
          pppplVar24[7] = (long ***)ppppplVar32;
          pppplVar24[9] = (long ***)pppppplVar21[9];
          pppppplVar21[7] = (long *****)0x0;
          pppppplVar21[8] = (long *****)0x0;
          pppppplVar21[9] = (long *****)0x0;
        }
        ppppplStack_738 = (long *****)((long)*ppppplVar23 + (long)ppppplVar28);
        ppppplStack_730 = (long *****)(ppppplVar23[1] + (long)ppppplVar28 * 10);
        FUN_1074f2aec(&ppppplStack_738);
        FUN_1074f2aec(&ppppplStack_8d0);
        ppppplVar23 = ppppplStack_740;
        pppppplVar21 = (long ******)ppppplStack_8c8;
      }
      FUN_1073c4728(&ppppplStack_590);
    }
    func_0x000107262260(&ppppplStack_918);
    pppppplVar30 = (long ******)ppppplStack_918;
    pppppplVar21 = pppppplVar25;
    pppppplVar25 = (long ******)ppppplStack_910;
  }
  pppplStack_8f0 = (long ****)&UNK_10e52b660;
  uStack_8e8 = 0;
  uStack_8e0 = 0;
  lStack_8d8 = 0;
  func_0x0001074ff248();
  pppppplVar25 = (long ******)&pppplStack_8f0;
  pppppplVar15 = pppppplVar21;
  FUN_1074f2a7c();
  ppppplStack_740 = &pppplStack_8f0;
  ppppplStack_8d0 = (long *****)pppppplVar30;
  ppppplStack_738 = (long *****)pppppplVar25;
  ppppplStack_8c8 = (long *****)pppppplVar21;
  ppppplStack_730 = (long *****)pppppplVar15;
  while ((long ******)ppppplStack_8d0 != (long ******)0x0) {
    pppplVar24 = (long ****)ppppplStack_8c8[7][3];
    func_0x0001074ff554();
    (*extraout_x8_00)();
    if (*(int *)((long)pppplVar24 + 0x14) == 0) {
      pppppplVar15 = (long ******)ppppplStack_740;
      FUN_1074f2b40(&ppppplStack_590,ppppplStack_740,ppppplStack_8c8);
      ppppplStack_730 = ppppplStack_588;
      ppppplStack_738 = ppppplStack_590;
      FUN_1074f2b94(&ppppplStack_738);
    }
    FUN_1074f2b94(&ppppplStack_8d0);
  }
  if (lStack_8d8 != 0) {
    ppppplVar23 = (long *****)plVar11[0x4a5];
    pppppplVar21 = pppppplVar17;
    func_0x0001077f67c0(&ppppplStack_918,ppppplVar23 + 8);
    ppppplStack_930 = (long *****)0x0;
    ppppplStack_928 = (long *****)0x0;
    ppppplStack_920 = (long *****)0x0;
    plVar9 = plStack_908;
    if ((long ******)ppppplStack_900 != (long ******)0x0) {
      if ((ulong)ppppplStack_900 >> 0x3d != 0) goto LAB_1074f2840;
      pppppplVar30 = (long ******)ppppplStack_900;
      ppppplStack_570 = (long *****)&ppppplStack_920;
      FUN_1074f75c4();
      pppppplVar25 = (long ******)
                     ((long)pppppplVar30 - ((long)ppppplStack_928 - (long)ppppplStack_930));
      _memcpy(pppppplVar25);
      ppppplVar28 = ppppplStack_930;
      ppppplStack_930 = (long *****)pppppplVar25;
      ppppplStack_928 = (long *****)pppppplVar30;
      ppppplStack_920 = (long *****)(pppppplVar30 + (long)pppppplVar21);
      func_0x0001074fee98(ppppplVar28);
      plVar9 = plStack_908;
    }
    for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
      ppppplVar28 = ppppplVar23;
      func_0x00010781a640(ppppplVar23,*(undefined4 *)(plVar9 + 2));
      if (ppppplStack_928 < ppppplStack_920) {
        pppppplVar30 = (long ******)(ppppplStack_928 + 1);
        *ppppplStack_928 = (long ****)ppppplVar28;
      }
      else {
        lVar20 = (long)ppppplStack_928 - (long)ppppplStack_930;
        if ((lVar20 >> 3) + 1U >> 0x3d != 0) {
          FUN_1074f75b8();
          goto LAB_1074f2844;
        }
        pppppplVar21 = (long ******)ppppplStack_930;
        func_0x0001074ff948();
        lVar27 = extraout_x10;
        if (0x7ffffffffffffff7 < extraout_x8_01) {
          lVar27 = 0x1fffffffffffffff;
        }
        if (lVar27 == 0) {
          pppppplVar21 = (long ******)0x0;
          lVar26 = extraout_x9;
          ppppplStack_570 = (long *****)&ppppplStack_920;
        }
        else {
          ppppplStack_570 = (long *****)&ppppplStack_920;
          FUN_1074f75c4();
          lVar26 = (long)ppppplStack_928 - (long)ppppplStack_930 >> 3;
        }
        puVar12 = (undefined8 *)(lVar27 + lVar20);
        pppppplVar30 = (long ******)(puVar12 + 1);
        *puVar12 = ppppplVar28;
        _memcpy(puVar12 + -lVar26);
        ppppplVar28 = ppppplStack_930;
        ppppplStack_930 = (long *****)(puVar12 + -lVar26);
        ppppplStack_928 = (long *****)pppppplVar30;
        ppppplStack_920 = (long *****)(lVar27 + (long)pppppplVar21 * 8);
        func_0x0001074fee98(ppppplVar28);
      }
      ppppplStack_928 = (long *****)pppppplVar30;
    }
    pppppplVar21 = (long ******)ppppplStack_930;
    pppppplVar15 = (long ******)ppppplStack_928;
    if (ppppplStack_930 != ppppplStack_928) {
      FUN_1074f7624(ppppplStack_930,ppppplStack_928,
                    LZCOUNT((long)ppppplStack_928 - (long)ppppplStack_930 >> 3) << 1 ^ 0x7e,1);
      pppppplVar21 = (long ******)ppppplStack_930;
      pppppplVar15 = (long ******)ppppplStack_928;
    }
    for (; uVar7 = pppppplVar21 == pppppplVar15, !(bool)uVar7; pppppplVar21 = pppppplVar21 + 1) {
      ppppplVar23 = *pppppplVar21;
      pppplVar24 = ppppplVar23[1];
      pppppplVar30 = &ppppplStack_918;
      func_0x0001074f2a9c(pppppplVar30,ppppplVar23);
      FUN_1073c0da8(&lStack_950,pppplVar24,pppppplVar30,puVar18,&pppplStack_8f0,ppppplVar23 + 3,
                    ppppplVar23 + 5,plVar11[0x1de]);
      lVar27 = lStack_950;
      lVar20 = lStack_948;
      func_0x0001074f2acc();
      lStack_a78 = lVar27;
      while (lStack_a70 = lVar20, lStack_a78 != 0) {
        func_0x0001074ff650(&ppppplStack_590);
        func_0x0001072f40f4(&lStack_558,lVar20 + 0x38);
        ppppplVar23 = &pppplStack_a50;
        FUN_1073c1490(ppppplVar23,&ppppplStack_590);
        lVar27 = lStack_550;
        pppppplVar30 = (long ******)ppppplVar23[1];
        for (lVar20 = lStack_558; lVar20 != lVar27; lVar20 = lVar20 + 0x1b0) {
          pppppplVar25 = (long ******)ppppplVar23[1];
          if (pppppplVar25 < ppppplVar23[2]) {
            pppppplVar31 = pppppplVar30;
            if (pppppplVar30 == pppppplVar25) {
              FUN_1073c5174(ppppplVar23,lVar20);
            }
            else {
              pppppplVar29 = pppppplVar25;
              for (pppppplVar16 = pppppplVar25 + -0x36; pppppplVar16 < pppppplVar25;
                  pppppplVar16 = pppppplVar16 + 0x36) {
                func_0x0001074ff66c();
                pppppplVar29 = pppppplVar29 + 0x36;
              }
              ppppplVar23[1] = (long ****)pppppplVar29;
              pppppplVar16 = pppppplVar25 + -0x6c;
              pppppplVar25 = pppppplVar25 + -0x36;
              for (; pppppplVar16 + 0x36 != pppppplVar30; pppppplVar16 = pppppplVar16 + -0x36) {
                func_0x00010729bf90(pppppplVar25);
                pppppplVar25 = pppppplVar25 + -0x36;
              }
              func_0x00010729bf90(pppppplVar30,lVar20);
            }
          }
          else {
            ppppplVar28 = ppppplVar23;
            func_0x00010729bde0(ppppplVar23,((long)pppppplVar25 - (long)*ppppplVar23) / 0x1b0 + 1);
            func_0x00010729cd10(&ppppplStack_8d0,ppppplVar28,
                                ((long)pppppplVar30 - (long)*ppppplVar23) / 0x1b0,ppppplVar23 + 2);
            if (ppppplStack_8c0 == ppppplStack_8b8) {
              if (ppppplStack_8c8 < ppppplStack_8d0 ||
                  (long)ppppplStack_8c8 - (long)ppppplStack_8d0 == 0) {
                uVar19 = ((long)ppppplStack_8c0 - (long)ppppplStack_8d0) / 0x1b0 << 1;
                if ((long)ppppplStack_8c0 - (long)ppppplStack_8d0 == 0) {
                  uVar19 = 1;
                }
                func_0x00010729cd10(&ppppplStack_740,uVar19,uVar19 >> 2,uStack_8b0);
                lVar26 = (long)ppppplStack_8c0 - (long)ppppplStack_8c8;
                pppppplVar25 = (long ******)((long)ppppplStack_730 + lVar26);
                for (; lVar26 != 0; lVar26 = lVar26 + -0x1b0) {
                  func_0x0001074ff66c();
                }
                pppppplVar31 = (long ******)ppppplStack_8d0;
                ppppplStack_8d0 = ppppplStack_740;
                pppppplVar16 = (long ******)ppppplStack_8c8;
                ppppplStack_8c8 = ppppplStack_738;
                ppppplStack_730 = ppppplStack_8c0;
                ppppplStack_8c0 = (long *****)pppppplVar25;
                pppppplVar25 = (long ******)ppppplStack_8b8;
                ppppplStack_8b8 = ppppplStack_728;
                ppppplStack_740 = (long *****)pppppplVar31;
                ppppplStack_738 = (long *****)pppppplVar16;
                ppppplStack_728 = (long *****)pppppplVar25;
                func_0x00010729cdf4(&ppppplStack_740);
              }
              else {
                lVar26 = (((long)ppppplStack_8c8 - (long)ppppplStack_8d0) / 0x1b0 + 1) / -2;
                pppppplVar25 = (long ******)ppppplStack_8c8;
                FUN_1074f7fcc(ppppplStack_8c8,ppppplStack_8c0,ppppplStack_8c8 + lVar26 * 0x36);
                ppppplStack_8c8 = ppppplStack_8c8 + lVar26 * 0x36;
                ppppplStack_8c0 = (long *****)pppppplVar25;
              }
            }
            func_0x00010729b464(ppppplStack_8c0,lVar20);
            pppppplVar31 = (long ******)ppppplStack_8c8;
            ppppplStack_8c0 = ppppplStack_8c0 + 0x36;
            func_0x00010729cd44(ppppplVar23 + 2,pppppplVar30,ppppplVar23[1]);
            ppppplStack_8c0 =
                 (long *****)((long)ppppplStack_8c0 + ((long)ppppplVar23[1] - (long)pppppplVar30));
            ppppplVar23[1] = (long ****)pppppplVar30;
            pppppplVar25 = (long ******)
                           (ppppplStack_8c8 +
                           (((long)pppppplVar30 - (long)*ppppplVar23) / -0x1b0) * 0x36);
            func_0x00010729cd44(ppppplVar23 + 2,*ppppplVar23,pppppplVar30,pppppplVar25);
            ppppplStack_8d0 = (long *****)*ppppplVar23;
            *ppppplVar23 = (long ****)pppppplVar25;
            ppppplStack_8c8 = ppppplStack_8d0;
            ppppplVar23[1] = (long ****)ppppplStack_8c0;
            pppppplVar30 = (long ******)ppppplVar23[2];
            ppppplStack_8c0 = ppppplStack_8d0;
            ppppplVar23[2] = (long ****)ppppplStack_8b8;
            ppppplStack_8b8 = (long *****)pppppplVar30;
            func_0x00010729cdf4(&ppppplStack_8d0);
          }
          pppppplVar30 = pppppplVar31 + 0x36;
        }
        func_0x0001073c5808(&ppppplStack_590);
        FUN_1074f2aec(&lStack_a78);
        lVar20 = lStack_a70;
      }
      FUN_1073c4728(&lStack_950);
    }
    FUN_1074f8014(&ppppplStack_930);
    FUN_1074fc0dc(&ppppplStack_918);
  }
  pppppplVar21 = (long ******)&pppplStack_8f0;
  FUN_1074f7554();
  pppplStack_8f0 = (long ****)0x0;
  uStack_8e8 = 0;
  uStack_8e0 = 0;
  func_0x0001074ff248();
  ppppplStack_590 = (long *****)pppppplVar21;
  ppppplStack_588 = (long *****)pppppplVar15;
  while ((long ******)ppppplStack_590 != (long ******)0x0) {
    func_0x0001074ff0ac(ppppplStack_588);
    (**(code **)(extraout_x8_02 + 0x90))();
    FUN_1074f2b94(&ppppplStack_590);
  }
  pppppplVar21 = (long ******)&pppplStack_a50;
  FUN_1073c16ac(&pppplStack_8f0,pppppplVar21,pppppplVar17,pppppplVar14,
                *(undefined1 *)(puVar18 + 0x15));
  ppppplVar23 = (long *****)plVar11[0x1de];
  FUN_10745f750(&lStack_950);
  func_0x0001074ff248();
  ppppplStack_8c8 = (long *****)pppppplVar21;
  while (ppppplVar23 != (long *****)0x0) {
    ppppplVar28 = (long *****)ppppplStack_8c8[7];
    ppppplStack_8d0 = ppppplVar23;
    func_0x0001074ff724(ppppplVar28[3]);
    if (ppppplVar23 == (long *****)0x0) {
      func_0x0001078699c4();
      FUN_1074f80c0(&ppppplStack_740,ppppplVar23);
    }
    else {
      FUN_10750a4d8(&ppppplStack_740);
    }
    ppppplStack_570 = (long *****)CONCAT71(ppppplStack_570._1_7_,1);
    ppppplStack_590 = (long *****)pppppplVar17;
    ppppplStack_588 = (long *****)pppppplVar14;
    plStack_580 = &lStack_950;
    ppppplStack_578 = (long *****)&ppppplStack_740;
    func_0x0001074e3ac0(&ppppplStack_918,ppppplVar28);
    puVar12 = puVar18;
    FUN_1073c1420(puVar18,&ppppplStack_918);
    uStack_568 = SUB81(puVar12,0);
    pppppplVar21 = &ppppplStack_590;
    (*(code *)(*ppppplVar28)[0x1b])(ppppplVar28,pppppplVar21,&pppplStack_a50);
    func_0x000107283194(&ppppplStack_918);
    func_0x00010726e4c8(&ppppplStack_740);
    FUN_1074f2b94(&ppppplStack_8d0);
    ppppplVar23 = ppppplStack_8d0;
  }
  *extraout_x8_04 = 0;
  extraout_x8_04[1] = 0;
  extraout_x8_04[2] = 0;
  ppppplStack_8d0 = (long *****)0x0;
  if (lStack_a38 != 0) {
    ppppplStack_8d0 = ppppplVar23;
    func_0x0001074ff248();
    pppplStack_a60 = (long ****)ppppplVar23;
    puVar4 = PTR___ZSt7nothrow_1103469d8;
joined_r0x0001074f24f8:
    PTR___ZSt7nothrow_1103469d8 = puVar4;
    ppppplStack_a58 = (long *****)pppppplVar21;
    if ((long *****)pppplStack_a60 != (long *****)0x0) {
      ppppplVar23 = &pppplStack_a50;
      pppplVar24 = pppppplVar21[7][3] + 1;
      FUN_10748a4c0(ppppplVar23,pppplVar24);
      if (ppppplVar23 != (long *****)0x0) {
        func_0x0001074ff724(pppppplVar21[7][3]);
        func_0x0001072f40f4(&ppppplStack_930,pppplVar24 + 7);
        pppppplVar14 = (long ******)ppppplStack_930;
        pppppplVar17 = (long ******)ppppplStack_928;
        if (*(char *)(puVar18 + 0x11) == '\x01') {
          fVar34 = *(float *)(plVar11 + 7);
          if (*(float *)(pppppplVar21[7][3] + 0x26) <= fVar34) {
            bVar6 = fVar34 <= *(float *)((long)pppppplVar21[7][3] + 0x134);
          }
          else {
            bVar6 = false;
          }
          lVar20 = plVar11[0x1d9];
          func_0x000107751284(&ppppplStack_8d0);
          if (bVar6) {
            pppppplVar17 = &ppppplStack_590;
            func_0x0001077512dc(fVar34,pppppplVar17);
            func_0x0001074ff6b4();
          }
          else {
            pppppplVar17 = &ppppplStack_590;
            func_0x000107751284(pppppplVar17);
            func_0x0001074ff6b4();
          }
          func_0x0001074ff1f8();
          lStack_7e0 = lVar20 + 0x70;
          plStack_7e8 = &lStack_950;
          if (ppppplVar23 == (long *****)0x0) {
            func_0x0001078699c4();
            FUN_1074f80c0(&ppppplStack_918,pppppplVar17);
          }
          else {
            FUN_10750a4d8(&ppppplStack_918,ppppplVar23,pppppplVar21[7][3] + 0xf);
          }
          ppppplVar23 = pppppplVar21[7];
          func_0x0001072f40f4(&lStack_a78,&ppppplStack_930);
          func_0x000107751334(&ppppplStack_740,&ppppplStack_8d0);
          lVar27 = lStack_a70;
          lVar20 = lStack_a78;
          uStack_5a0 = 1;
          pppplStack_5b0 = (long ****)ppppplVar23;
          ppppplStack_5a8 = (long *****)&ppppplStack_918;
          func_0x000107751334(&ppppplStack_590,&ppppplStack_740);
          ppppplStack_3f8 = ppppplStack_5a8;
          pppplStack_400 = pppplStack_5b0;
          uStack_3f0 = uStack_5a0;
          for (; lVar26 = lVar27, lVar20 != lVar27; lVar20 = lVar20 + 0x1b0) {
            pppppplVar17 = &ppppplStack_590;
            FUN_1074f80e4(pppppplVar17,lVar20);
            lVar26 = lVar20;
            if ((int)pppppplVar17 != 0) goto LAB_1074f2658;
          }
          goto LAB_1074f268c;
        }
        goto LAB_1074f26e4;
      }
      goto LAB_1074f2708;
    }
    lVar20 = *extraout_x8_04;
    lVar27 = extraout_x8_04[1];
    ppppplStack_8d0 = &pppplStack_9b0;
    lVar26 = lVar27 - lVar20;
    ppppplStack_588 = (long *****)0x0;
    ppppplStack_590 = (long *****)0x0;
    uVar7 = lVar26 == 1;
    pppplStack_a60 = (long ****)0x0;
    pppppplVar17 = (long ******)(lVar26 / 0x1b0);
    if (lVar26 < 1) {
      pppppplVar17 = (long ******)0x0;
    }
    else {
      for (; uVar7 = pppppplVar17 == (long ******)0x1, 0 < (long)pppppplVar17;
          pppppplVar17 = (long ******)((ulong)pppppplVar17 >> 1)) {
        lVar10 = (long)pppppplVar17 * 0x1b0;
        __ZnwmRKSt9nothrow_t(lVar10,puVar4);
        if (lVar10 != 0) goto LAB_1074f278c;
      }
      lVar10 = 0;
LAB_1074f278c:
      ppppplStack_740 = (long *****)0x0;
      ppppplStack_738 = (long *****)pppppplVar17;
      FUN_1074fc8e4(&ppppplStack_590,lVar10);
      ppppplStack_588 = (long *****)pppppplVar17;
      FUN_1074fc8fc(&ppppplStack_740);
    }
    FUN_1074fc60c(lVar20,lVar27,&ppppplStack_8d0,(long ******)(lVar26 / 0x1b0),ppppplStack_590,
                  pppppplVar17);
    FUN_1074fc8fc(&ppppplStack_590);
  }
  func_0x00010726b264(&lStack_950);
  FUN_1073c5230(&pppplStack_8f0);
  FUN_1073c4728(&pppplStack_a50);
  FUN_1074f8344(&pppplStack_9b0);
  FUN_1074f7554(&puStack_990);
  func_0x000107261dac(&pppplStack_970);
  FUN_1074f7554(&pppplStack_a98);
  func_0x0001074fe49c(uStack_3e8);
  if ((bool)uVar7) {
    return;
  }
  ___stack_chk_fail();
LAB_1074f2840:
  FUN_1074f75b8();
LAB_1074f2844:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1074f2848);
  (*pcVar5)();
LAB_1074f2658:
  while (lVar20 = lVar20 + 0x1b0, lVar20 != lVar27) {
    pppppplVar17 = &ppppplStack_590;
    FUN_1074f80e4(pppppplVar17,lVar20);
    if (((ulong)pppppplVar17 & 1) == 0) {
      func_0x00010729bf90(lVar26,lVar20);
      lVar26 = lVar26 + 0x1b0;
    }
  }
LAB_1074f268c:
  if (lVar26 != lStack_a70) {
    lVar20 = lStack_a70;
    FUN_1074f7fcc(lStack_a70,lStack_a70,lVar26);
    func_0x00010729cb64(&lStack_a78,lVar20);
  }
  func_0x0001074ff1f8();
  func_0x000107267da8(&ppppplStack_740);
  FUN_1073c5a34(&ppppplStack_930,&lStack_a78);
  func_0x00010729d51c(&lStack_a78);
  func_0x00010726e4c8(&ppppplStack_918);
  func_0x000107267da8(&ppppplStack_8d0);
  pppppplVar14 = (long ******)ppppplStack_930;
  pppppplVar17 = (long ******)ppppplStack_928;
LAB_1074f26e4:
  for (; pppppplVar14 != pppppplVar17; pppppplVar14 = pppppplVar14 + 0x36) {
    FUN_1073c14b8(extraout_x8_04,pppppplVar14);
  }
  func_0x00010729d51c(&ppppplStack_930);
LAB_1074f2708:
  FUN_1074f2b94(&pppplStack_a60);
  pppppplVar21 = (long ******)ppppplStack_a58;
  puVar4 = PTR___ZSt7nothrow_1103469d8;
  goto joined_r0x0001074f24f8;
}



/* Entry: 107503064; end: 10750306f;  */

void FUN_107503064(long *param_1,long param_2,long ******param_3,ulong *param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  long *plVar7;
  ulong *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long ******pppppplVar12;
  long ******pppppplVar13;
  ulong *puVar14;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  ulong extraout_x8_01;
  ulong uVar15;
  long extraout_x8_02;
  long extraout_x9;
  long extraout_x10;
  long ******pppppplVar16;
  int iVar17;
  long *****ppppplVar18;
  long ****pppplVar19;
  long ******pppppplVar20;
  long lVar21;
  long lVar22;
  long ******pppppplVar23;
  long *****ppppplVar24;
  long ******pppppplVar25;
  long ******pppppplVar26;
  long ******pppppplVar27;
  long *****ppppplVar28;
  float fVar29;
  long ****pppplStack_738;
  long lStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  long lStack_718;
  long lStack_710;
  long ****pppplStack_700;
  long *****ppppplStack_6f8;
  long ****pppplStack_6f0;
  long *****ppppplStack_6e8;
  undefined8 uStack_6e0;
  long lStack_6d8;
  long ****apppplStack_6d0 [16];
  long ****pppplStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined *puStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  long ****pppplStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  long lStack_5f0;
  long lStack_5e8;
  long *****ppppplStack_5d0;
  long *****ppppplStack_5c8;
  long *****ppppplStack_5c0;
  long *****ppppplStack_5b8;
  long *****ppppplStack_5b0;
  long *plStack_5a8;
  long *****ppppplStack_5a0;
  long ****pppplStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  long lStack_578;
  long *****ppppplStack_570;
  long *****ppppplStack_568;
  long *****ppppplStack_560;
  long *****ppppplStack_558;
  undefined8 uStack_550;
  long *plStack_488;
  long lStack_480;
  long *****ppppplStack_3e0;
  long *****ppppplStack_3d8;
  long *****ppppplStack_3d0;
  long *****ppppplStack_3c8;
  long ****pppplStack_250;
  long *****ppppplStack_248;
  undefined1 uStack_240;
  long *****ppppplStack_230;
  long *****ppppplStack_228;
  long *plStack_220;
  long *****ppppplStack_218;
  long *****ppppplStack_210;
  undefined1 uStack_208;
  long lStack_1f8;
  long lStack_1f0;
  long ****pppplStack_a0;
  long *****ppppplStack_98;
  undefined1 uStack_90;
  undefined8 uStack_88;
  
  plVar7 = (long *)(*(long *)(param_2 + 0x10) + 0x480);
  pppppplVar23 = param_3;
  puVar14 = param_4;
  func_0x0001074fe5e8();
  pppplStack_738 = (long ****)&UNK_10e52b660;
  lStack_730 = 0;
  uStack_728 = 0;
  uStack_720 = 0;
  uStack_88 = extraout_x8;
  if ((char)puVar14[3] == '\x01') {
    pppppplVar26 = (long ******)param_4[1];
    pppppplVar16 = (long ******)*param_4;
    for (; pppppplVar16 != pppppplVar26; pppppplVar16 = pppppplVar16 + 7) {
      plVar9 = plVar7 + 0x1f0;
      pppppplVar23 = pppppplVar16;
      func_0x0001074f3ee4();
      if ((plVar9 != (long *)0x0) && (ppppplVar18 = pppppplVar23[7], ppppplVar18 != (long *****)0x0)
         ) {
        pppplVar19 = ppppplVar18[3];
        ppppplVar24 = &pppplStack_738;
        pppppplVar23 = (long ******)(pppplVar19 + 1);
        FUN_1074fbeac();
        if (((ulong)pppppplVar23 & 1) != 0) {
          lVar22 = lStack_730 + (long)ppppplVar24 * 0x40;
          pppppplVar23 = (long ******)(pppplVar19 + 1);
          func_0x000104c2fe00();
          *(long ******)(lVar22 + 0x38) = ppppplVar18;
        }
      }
      param_4 = puVar14;
    }
  }
  else {
    pppppplVar16 = (long ******)(plVar7 + 0x1f0);
    FUN_1074eb354();
    ppppplStack_230 = (long *****)pppppplVar16;
    ppppplStack_228 = (long *****)pppppplVar23;
    while ((long ******)ppppplStack_230 != (long ******)0x0) {
      ppppplVar24 = (long *****)ppppplStack_228[7];
      pppplVar19 = ppppplVar24[3];
      ppppplVar18 = &pppplStack_738;
      pppppplVar23 = (long ******)(pppplVar19 + 1);
      FUN_1074fbeac();
      if (((ulong)pppppplVar23 & 1) != 0) {
        lVar22 = lStack_730 + (long)ppppplVar18 * 0x40;
        pppppplVar23 = (long ******)(pppplVar19 + 1);
        func_0x000104c2fe00();
        *(long ******)(lVar22 + 0x38) = ppppplVar24;
      }
      FUN_1074eb374(&ppppplStack_230);
      param_4 = puVar14;
    }
  }
  if ((char)param_4[0x1b] == '\x01' && param_4[0x19] != 0) {
    pppppplVar16 = (long ******)&pppplStack_738;
    FUN_1074f2a7c();
    ppppplStack_3e0 = (long *****)pppppplVar16;
    ppppplStack_3d8 = (long *****)pppppplVar23;
joined_r0x0001074f1c30:
    if ((long ******)ppppplStack_3e0 != (long ******)0x0) {
      func_0x0001074e3ac0(&ppppplStack_230,ppppplStack_3d8[7]);
      pppppplVar16 = (long ******)(ppppplStack_230 + 2);
      do {
        pppppplVar16 = (long ******)*pppppplVar16;
        if (pppppplVar16 == (long ******)0x0) {
          func_0x000107283194(&ppppplStack_230);
          ppppplVar18 = ppppplStack_3d8;
          pppppplVar23 = (long ******)ppppplStack_3e0;
          func_0x0001074ff6e0();
          func_0x000104c2f714(ppppplVar18);
          func_0x0001074ff77c(&pppplStack_738);
          goto joined_r0x0001074f1c30;
        }
        puVar8 = param_4 + 0x16;
        pppppplVar23 = pppppplVar16 + 2;
        func_0x0001072623d4();
      } while (puVar8 == (ulong *)0x0);
      func_0x000107283194(&ppppplStack_230);
      func_0x0001074ff6e0();
      goto joined_r0x0001074f1c30;
    }
  }
  pppplStack_610 = (long ****)&UNK_10e52b660;
  uStack_608 = 0;
  uStack_600 = 0;
  uStack_5f8 = 0;
  puStack_630 = &UNK_10e52b660;
  uStack_628 = 0;
  uStack_620 = 0;
  uStack_618 = 0;
  pppplStack_650 = (long ****)&UNK_10e52b660;
  uStack_648 = 0;
  uStack_640 = 0;
  uStack_638 = 0;
  ppppplVar18 = &pppplStack_738;
  FUN_1074f2a7c();
  ppppplStack_3e0 = ppppplVar18;
  while (ppppplStack_3d8 = (long *****)pppppplVar23, ppppplStack_3e0 != (long *****)0x0) {
    if ((((*(char *)(pppppplVar23[7] + 7) != '\0') &&
         (pppplVar19 = pppppplVar23[7][3], ((ulong)pppplVar19[0x2c] & 1) == 0)) &&
        (*(float *)(pppplVar19 + 0x26) <= *(float *)(plVar7 + 7))) &&
       (*(float *)(plVar7 + 7) <= *(float *)((long)pppplVar19 + 0x134))) {
      FUN_1074f2b40(&ppppplStack_230,&puStack_630,pppppplVar23);
      func_0x0001072628ec(&ppppplStack_230,&pppplStack_610,pppppplVar23[7][3] + 8);
    }
    func_0x0001074ff6e0();
    pppppplVar23 = (long ******)ppppplStack_3d8;
  }
  iVar17 = 0;
  plVar2 = (long *)((undefined8 *)plVar7[0x1e9])[1];
  ppppplStack_3e0 = (long *****)0x0;
  for (plVar9 = *(long **)plVar7[0x1e9]; uVar6 = plVar9 == plVar2, !(bool)uVar6; plVar9 = plVar9 + 2
      ) {
    ppppplVar18 = &pppplStack_650;
    FUN_1074f8038(ppppplVar18,*plVar9 + 8);
    *(int *)ppppplVar18 = iVar17;
    iVar17 = iVar17 + 1;
  }
  pppppplVar23 = (long ******)(plVar7 + 0xb);
  pppppplVar16 = (long ******)apppplStack_6d0;
  FUN_10741607c(pppppplVar23,pppppplVar16,1,0);
  pppplStack_6f0 = (long ****)&UNK_10e52b660;
  ppppplStack_6e8 = (long *****)0x0;
  uStack_6e0 = 0;
  lStack_6d8 = 0;
  pppppplVar26 = (long ******)&pppplStack_610;
  func_0x0001072621e0();
  pppppplVar20 = pppppplVar16;
  while (ppppplStack_5b8 = (long *****)pppppplVar26, ppppplStack_5b0 = (long *****)pppppplVar20,
        pppppplVar26 != (long ******)0x0) {
    plVar9 = plVar7;
    FUN_1074f146c();
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x88))(&ppppplStack_230);
      pppppplVar26 = (long ******)ppppplStack_230;
      pppppplVar16 = (long ******)ppppplStack_228;
      func_0x0001074f2acc();
      pppppplVar20 = (long ******)ppppplStack_6e8;
      func_0x0001074f2acc(pppplStack_6f0);
      ppppplVar18 = &pppplStack_6f0;
      ppppplStack_570 = (long *****)pppppplVar26;
      while (ppppplStack_568 = (long *****)pppppplVar16, ppppplStack_3e0 = ppppplVar18,
            (long ******)ppppplStack_570 != (long ******)0x0) {
        ppppplVar24 = ppppplVar18;
        pppppplVar20 = pppppplVar16;
        FUN_1073c6228();
        if (((ulong)pppppplVar20 & 1) != 0) {
          pppplVar19 = ppppplVar18[1] + (long)ppppplVar24 * 10;
          pppppplVar20 = pppppplVar16;
          func_0x000104c2fe00();
          pppplVar19[7] = (long ***)0x0;
          pppplVar19[8] = (long ***)0x0;
          pppplVar19[9] = (long ***)0x0;
          ppppplVar28 = pppppplVar16[7];
          pppplVar19[8] = (long ***)pppppplVar16[8];
          pppplVar19[7] = (long ***)ppppplVar28;
          pppplVar19[9] = (long ***)pppppplVar16[9];
          pppppplVar16[7] = (long *****)0x0;
          pppppplVar16[8] = (long *****)0x0;
          pppppplVar16[9] = (long *****)0x0;
        }
        ppppplStack_3d8 = (long *****)((long)*ppppplVar18 + (long)ppppplVar24);
        ppppplStack_3d0 = (long *****)(ppppplVar18[1] + (long)ppppplVar24 * 10);
        FUN_1074f2aec(&ppppplStack_3d8);
        FUN_1074f2aec(&ppppplStack_570);
        ppppplVar18 = ppppplStack_3e0;
        pppppplVar16 = (long ******)ppppplStack_568;
      }
      FUN_1073c4728(&ppppplStack_230);
    }
    func_0x000107262260(&ppppplStack_5b8);
    pppppplVar26 = (long ******)ppppplStack_5b8;
    pppppplVar16 = pppppplVar20;
    pppppplVar20 = (long ******)ppppplStack_5b0;
  }
  pppplStack_590 = (long ****)&UNK_10e52b660;
  uStack_588 = 0;
  uStack_580 = 0;
  lStack_578 = 0;
  func_0x0001074ff248();
  pppppplVar20 = (long ******)&pppplStack_590;
  pppppplVar12 = pppppplVar16;
  FUN_1074f2a7c();
  ppppplStack_3e0 = &pppplStack_590;
  ppppplStack_570 = (long *****)pppppplVar26;
  ppppplStack_3d8 = (long *****)pppppplVar20;
  ppppplStack_568 = (long *****)pppppplVar16;
  ppppplStack_3d0 = (long *****)pppppplVar12;
  while ((long ******)ppppplStack_570 != (long ******)0x0) {
    pppplVar19 = (long ****)ppppplStack_568[7][3];
    func_0x0001074ff554();
    (*extraout_x8_00)();
    if (*(int *)((long)pppplVar19 + 0x14) == 0) {
      pppppplVar12 = (long ******)ppppplStack_3e0;
      FUN_1074f2b40(&ppppplStack_230,ppppplStack_3e0,ppppplStack_568);
      ppppplStack_3d0 = ppppplStack_228;
      ppppplStack_3d8 = ppppplStack_230;
      FUN_1074f2b94(&ppppplStack_3d8);
    }
    FUN_1074f2b94(&ppppplStack_570);
  }
  if (lStack_578 != 0) {
    ppppplVar18 = (long *****)plVar7[0x4a5];
    pppppplVar16 = param_3;
    func_0x0001077f67c0(&ppppplStack_5b8,ppppplVar18 + 8);
    ppppplStack_5d0 = (long *****)0x0;
    ppppplStack_5c8 = (long *****)0x0;
    ppppplStack_5c0 = (long *****)0x0;
    plVar9 = plStack_5a8;
    if ((long ******)ppppplStack_5a0 != (long ******)0x0) {
      if ((ulong)ppppplStack_5a0 >> 0x3d != 0) goto LAB_1074f2840;
      pppppplVar26 = (long ******)ppppplStack_5a0;
      ppppplStack_210 = (long *****)&ppppplStack_5c0;
      FUN_1074f75c4();
      pppppplVar20 = (long ******)
                     ((long)pppppplVar26 - ((long)ppppplStack_5c8 - (long)ppppplStack_5d0));
      _memcpy(pppppplVar20);
      ppppplVar24 = ppppplStack_5d0;
      ppppplStack_5d0 = (long *****)pppppplVar20;
      ppppplStack_5c8 = (long *****)pppppplVar26;
      ppppplStack_5c0 = (long *****)(pppppplVar26 + (long)pppppplVar16);
      func_0x0001074fee98(ppppplVar24);
      plVar9 = plStack_5a8;
    }
    for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
      ppppplVar24 = ppppplVar18;
      func_0x00010781a640(ppppplVar18,*(undefined4 *)(plVar9 + 2));
      if (ppppplStack_5c8 < ppppplStack_5c0) {
        pppppplVar26 = (long ******)(ppppplStack_5c8 + 1);
        *ppppplStack_5c8 = (long ****)ppppplVar24;
      }
      else {
        lVar22 = (long)ppppplStack_5c8 - (long)ppppplStack_5d0;
        if ((lVar22 >> 3) + 1U >> 0x3d != 0) {
          FUN_1074f75b8();
          goto LAB_1074f2844;
        }
        pppppplVar16 = (long ******)ppppplStack_5d0;
        func_0x0001074ff948();
        lVar10 = extraout_x10;
        if (0x7ffffffffffffff7 < extraout_x8_01) {
          lVar10 = 0x1fffffffffffffff;
        }
        if (lVar10 == 0) {
          pppppplVar16 = (long ******)0x0;
          lVar21 = extraout_x9;
          ppppplStack_210 = (long *****)&ppppplStack_5c0;
        }
        else {
          ppppplStack_210 = (long *****)&ppppplStack_5c0;
          FUN_1074f75c4();
          lVar21 = (long)ppppplStack_5c8 - (long)ppppplStack_5d0 >> 3;
        }
        puVar1 = (undefined8 *)(lVar10 + lVar22);
        pppppplVar26 = (long ******)(puVar1 + 1);
        *puVar1 = ppppplVar24;
        _memcpy(puVar1 + -lVar21);
        ppppplVar24 = ppppplStack_5d0;
        ppppplStack_5d0 = (long *****)(puVar1 + -lVar21);
        ppppplStack_5c8 = (long *****)pppppplVar26;
        ppppplStack_5c0 = (long *****)(lVar10 + (long)pppppplVar16 * 8);
        func_0x0001074fee98(ppppplVar24);
      }
      ppppplStack_5c8 = (long *****)pppppplVar26;
    }
    pppppplVar16 = (long ******)ppppplStack_5d0;
    pppppplVar12 = (long ******)ppppplStack_5c8;
    if (ppppplStack_5d0 != ppppplStack_5c8) {
      FUN_1074f7624(ppppplStack_5d0,ppppplStack_5c8,
                    LZCOUNT((long)ppppplStack_5c8 - (long)ppppplStack_5d0 >> 3) << 1 ^ 0x7e,1);
      pppppplVar16 = (long ******)ppppplStack_5d0;
      pppppplVar12 = (long ******)ppppplStack_5c8;
    }
    for (; uVar6 = pppppplVar16 == pppppplVar12, !(bool)uVar6; pppppplVar16 = pppppplVar16 + 1) {
      ppppplVar18 = *pppppplVar16;
      pppplVar19 = ppppplVar18[1];
      pppppplVar26 = &ppppplStack_5b8;
      func_0x0001074f2a9c(pppppplVar26,ppppplVar18);
      FUN_1073c0da8(&lStack_5f0,pppplVar19,pppppplVar26,puVar14,&pppplStack_590,ppppplVar18 + 3,
                    ppppplVar18 + 5,plVar7[0x1de]);
      lVar10 = lStack_5f0;
      lVar22 = lStack_5e8;
      func_0x0001074f2acc();
      lStack_718 = lVar10;
      while (lStack_710 = lVar22, lStack_718 != 0) {
        func_0x0001074ff650(&ppppplStack_230);
        func_0x0001072f40f4(&lStack_1f8,lVar22 + 0x38);
        ppppplVar18 = &pppplStack_6f0;
        FUN_1073c1490(ppppplVar18,&ppppplStack_230);
        lVar10 = lStack_1f0;
        pppppplVar26 = (long ******)ppppplVar18[1];
        for (lVar22 = lStack_1f8; lVar22 != lVar10; lVar22 = lVar22 + 0x1b0) {
          pppppplVar20 = (long ******)ppppplVar18[1];
          if (pppppplVar20 < ppppplVar18[2]) {
            pppppplVar27 = pppppplVar26;
            if (pppppplVar26 == pppppplVar20) {
              FUN_1073c5174(ppppplVar18,lVar22);
            }
            else {
              pppppplVar25 = pppppplVar20;
              for (pppppplVar13 = pppppplVar20 + -0x36; pppppplVar13 < pppppplVar20;
                  pppppplVar13 = pppppplVar13 + 0x36) {
                func_0x0001074ff66c();
                pppppplVar25 = pppppplVar25 + 0x36;
              }
              ppppplVar18[1] = (long ****)pppppplVar25;
              pppppplVar13 = pppppplVar20 + -0x6c;
              pppppplVar20 = pppppplVar20 + -0x36;
              for (; pppppplVar13 + 0x36 != pppppplVar26; pppppplVar13 = pppppplVar13 + -0x36) {
                func_0x00010729bf90(pppppplVar20);
                pppppplVar20 = pppppplVar20 + -0x36;
              }
              func_0x00010729bf90(pppppplVar26,lVar22);
            }
          }
          else {
            ppppplVar24 = ppppplVar18;
            func_0x00010729bde0(ppppplVar18,((long)pppppplVar20 - (long)*ppppplVar18) / 0x1b0 + 1);
            func_0x00010729cd10(&ppppplStack_570,ppppplVar24,
                                ((long)pppppplVar26 - (long)*ppppplVar18) / 0x1b0,ppppplVar18 + 2);
            if (ppppplStack_560 == ppppplStack_558) {
              if (ppppplStack_568 < ppppplStack_570 ||
                  (long)ppppplStack_568 - (long)ppppplStack_570 == 0) {
                uVar15 = ((long)ppppplStack_560 - (long)ppppplStack_570) / 0x1b0 << 1;
                if ((long)ppppplStack_560 - (long)ppppplStack_570 == 0) {
                  uVar15 = 1;
                }
                func_0x00010729cd10(&ppppplStack_3e0,uVar15,uVar15 >> 2,uStack_550);
                lVar21 = (long)ppppplStack_560 - (long)ppppplStack_568;
                pppppplVar20 = (long ******)((long)ppppplStack_3d0 + lVar21);
                for (; lVar21 != 0; lVar21 = lVar21 + -0x1b0) {
                  func_0x0001074ff66c();
                }
                pppppplVar27 = (long ******)ppppplStack_570;
                ppppplStack_570 = ppppplStack_3e0;
                pppppplVar13 = (long ******)ppppplStack_568;
                ppppplStack_568 = ppppplStack_3d8;
                ppppplStack_3d0 = ppppplStack_560;
                ppppplStack_560 = (long *****)pppppplVar20;
                pppppplVar20 = (long ******)ppppplStack_558;
                ppppplStack_558 = ppppplStack_3c8;
                ppppplStack_3e0 = (long *****)pppppplVar27;
                ppppplStack_3d8 = (long *****)pppppplVar13;
                ppppplStack_3c8 = (long *****)pppppplVar20;
                func_0x00010729cdf4(&ppppplStack_3e0);
              }
              else {
                lVar21 = (((long)ppppplStack_568 - (long)ppppplStack_570) / 0x1b0 + 1) / -2;
                pppppplVar20 = (long ******)ppppplStack_568;
                FUN_1074f7fcc(ppppplStack_568,ppppplStack_560,ppppplStack_568 + lVar21 * 0x36);
                ppppplStack_568 = ppppplStack_568 + lVar21 * 0x36;
                ppppplStack_560 = (long *****)pppppplVar20;
              }
            }
            func_0x00010729b464(ppppplStack_560,lVar22);
            pppppplVar27 = (long ******)ppppplStack_568;
            ppppplStack_560 = ppppplStack_560 + 0x36;
            func_0x00010729cd44(ppppplVar18 + 2,pppppplVar26,ppppplVar18[1]);
            ppppplStack_560 =
                 (long *****)((long)ppppplStack_560 + ((long)ppppplVar18[1] - (long)pppppplVar26));
            ppppplVar18[1] = (long ****)pppppplVar26;
            pppppplVar20 = (long ******)
                           (ppppplStack_568 +
                           (((long)pppppplVar26 - (long)*ppppplVar18) / -0x1b0) * 0x36);
            func_0x00010729cd44(ppppplVar18 + 2,*ppppplVar18,pppppplVar26,pppppplVar20);
            ppppplStack_570 = (long *****)*ppppplVar18;
            *ppppplVar18 = (long ****)pppppplVar20;
            ppppplStack_568 = ppppplStack_570;
            ppppplVar18[1] = (long ****)ppppplStack_560;
            pppppplVar26 = (long ******)ppppplVar18[2];
            ppppplStack_560 = ppppplStack_570;
            ppppplVar18[2] = (long ****)ppppplStack_558;
            ppppplStack_558 = (long *****)pppppplVar26;
            func_0x00010729cdf4(&ppppplStack_570);
          }
          pppppplVar26 = pppppplVar27 + 0x36;
        }
        func_0x0001073c5808(&ppppplStack_230);
        FUN_1074f2aec(&lStack_718);
        lVar22 = lStack_710;
      }
      FUN_1073c4728(&lStack_5f0);
    }
    FUN_1074f8014(&ppppplStack_5d0);
    FUN_1074fc0dc(&ppppplStack_5b8);
  }
  pppppplVar16 = (long ******)&pppplStack_590;
  FUN_1074f7554();
  pppplStack_590 = (long ****)0x0;
  uStack_588 = 0;
  uStack_580 = 0;
  func_0x0001074ff248();
  ppppplStack_230 = (long *****)pppppplVar16;
  ppppplStack_228 = (long *****)pppppplVar12;
  while ((long ******)ppppplStack_230 != (long ******)0x0) {
    func_0x0001074ff0ac(ppppplStack_228);
    (**(code **)(extraout_x8_02 + 0x90))();
    FUN_1074f2b94(&ppppplStack_230);
  }
  pppppplVar16 = (long ******)&pppplStack_6f0;
  FUN_1073c16ac(&pppplStack_590,pppppplVar16,param_3,pppppplVar23,(char)puVar14[0x15]);
  ppppplVar18 = (long *****)plVar7[0x1de];
  FUN_10745f750(&lStack_5f0);
  func_0x0001074ff248();
  ppppplStack_568 = (long *****)pppppplVar16;
  while (ppppplVar18 != (long *****)0x0) {
    ppppplVar24 = (long *****)ppppplStack_568[7];
    ppppplStack_570 = ppppplVar18;
    func_0x0001074ff724(ppppplVar24[3]);
    if (ppppplVar18 == (long *****)0x0) {
      func_0x0001078699c4();
      FUN_1074f80c0(&ppppplStack_3e0,ppppplVar18);
    }
    else {
      FUN_10750a4d8(&ppppplStack_3e0);
    }
    ppppplStack_210 = (long *****)CONCAT71(ppppplStack_210._1_7_,1);
    ppppplStack_230 = (long *****)param_3;
    ppppplStack_228 = (long *****)pppppplVar23;
    plStack_220 = &lStack_5f0;
    ppppplStack_218 = (long *****)&ppppplStack_3e0;
    func_0x0001074e3ac0(&ppppplStack_5b8,ppppplVar24);
    puVar8 = puVar14;
    FUN_1073c1420(puVar14,&ppppplStack_5b8);
    uStack_208 = SUB81(puVar8,0);
    pppppplVar16 = &ppppplStack_230;
    (*(code *)(*ppppplVar24)[0x1b])(ppppplVar24,pppppplVar16,&pppplStack_6f0);
    func_0x000107283194(&ppppplStack_5b8);
    func_0x00010726e4c8(&ppppplStack_3e0);
    FUN_1074f2b94(&ppppplStack_570);
    ppppplVar18 = ppppplStack_570;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  ppppplStack_570 = (long *****)0x0;
  if (lStack_6d8 != 0) {
    ppppplStack_570 = ppppplVar18;
    func_0x0001074ff248();
    pppplStack_700 = (long ****)ppppplVar18;
    puVar3 = PTR___ZSt7nothrow_1103469d8;
joined_r0x0001074f24f8:
    PTR___ZSt7nothrow_1103469d8 = puVar3;
    ppppplStack_6f8 = (long *****)pppppplVar16;
    if ((long *****)pppplStack_700 != (long *****)0x0) {
      ppppplVar18 = &pppplStack_6f0;
      pppplVar19 = pppppplVar16[7][3] + 1;
      FUN_10748a4c0(ppppplVar18,pppplVar19);
      if (ppppplVar18 != (long *****)0x0) {
        func_0x0001074ff724(pppppplVar16[7][3]);
        func_0x0001072f40f4(&ppppplStack_5d0,pppplVar19 + 7);
        pppppplVar26 = (long ******)ppppplStack_5d0;
        pppppplVar23 = (long ******)ppppplStack_5c8;
        if ((char)puVar14[0x11] == '\x01') {
          fVar29 = *(float *)(plVar7 + 7);
          if (*(float *)(pppppplVar16[7][3] + 0x26) <= fVar29) {
            bVar5 = fVar29 <= *(float *)((long)pppppplVar16[7][3] + 0x134);
          }
          else {
            bVar5 = false;
          }
          lVar22 = plVar7[0x1d9];
          func_0x000107751284(&ppppplStack_570);
          if (bVar5) {
            pppppplVar23 = &ppppplStack_230;
            func_0x0001077512dc(fVar29,pppppplVar23);
            func_0x0001074ff6b4();
          }
          else {
            pppppplVar23 = &ppppplStack_230;
            func_0x000107751284(pppppplVar23);
            func_0x0001074ff6b4();
          }
          func_0x0001074ff1f8();
          lStack_480 = lVar22 + 0x70;
          plStack_488 = &lStack_5f0;
          if (ppppplVar18 == (long *****)0x0) {
            func_0x0001078699c4();
            FUN_1074f80c0(&ppppplStack_5b8,pppppplVar23);
          }
          else {
            FUN_10750a4d8(&ppppplStack_5b8,ppppplVar18,pppppplVar16[7][3] + 0xf);
          }
          ppppplVar18 = pppppplVar16[7];
          func_0x0001072f40f4(&lStack_718,&ppppplStack_5d0);
          func_0x000107751334(&ppppplStack_3e0,&ppppplStack_570);
          lVar10 = lStack_710;
          lVar22 = lStack_718;
          uStack_240 = 1;
          pppplStack_250 = (long ****)ppppplVar18;
          ppppplStack_248 = (long *****)&ppppplStack_5b8;
          func_0x000107751334(&ppppplStack_230,&ppppplStack_3e0);
          ppppplStack_98 = ppppplStack_248;
          pppplStack_a0 = pppplStack_250;
          uStack_90 = uStack_240;
          for (; lVar21 = lVar10, lVar22 != lVar10; lVar22 = lVar22 + 0x1b0) {
            pppppplVar23 = &ppppplStack_230;
            FUN_1074f80e4(pppppplVar23,lVar22);
            lVar21 = lVar22;
            if ((int)pppppplVar23 != 0) goto LAB_1074f2658;
          }
          goto LAB_1074f268c;
        }
        goto LAB_1074f26e4;
      }
      goto LAB_1074f2708;
    }
    lVar22 = *param_1;
    lVar10 = param_1[1];
    ppppplStack_570 = &pppplStack_650;
    lVar21 = lVar10 - lVar22;
    ppppplStack_228 = (long *****)0x0;
    ppppplStack_230 = (long *****)0x0;
    uVar6 = lVar21 == 1;
    pppplStack_700 = (long ****)0x0;
    pppppplVar23 = (long ******)(lVar21 / 0x1b0);
    if (lVar21 < 1) {
      pppppplVar23 = (long ******)0x0;
    }
    else {
      for (; uVar6 = pppppplVar23 == (long ******)0x1, 0 < (long)pppppplVar23;
          pppppplVar23 = (long ******)((ulong)pppppplVar23 >> 1)) {
        lVar11 = (long)pppppplVar23 * 0x1b0;
        __ZnwmRKSt9nothrow_t(lVar11,puVar3);
        if (lVar11 != 0) goto LAB_1074f278c;
      }
      lVar11 = 0;
LAB_1074f278c:
      ppppplStack_3e0 = (long *****)0x0;
      ppppplStack_3d8 = (long *****)pppppplVar23;
      FUN_1074fc8e4(&ppppplStack_230,lVar11);
      ppppplStack_228 = (long *****)pppppplVar23;
      FUN_1074fc8fc(&ppppplStack_3e0);
    }
    FUN_1074fc60c(lVar22,lVar10,&ppppplStack_570,(long ******)(lVar21 / 0x1b0),ppppplStack_230,
                  pppppplVar23);
    FUN_1074fc8fc(&ppppplStack_230);
  }
  func_0x00010726b264(&lStack_5f0);
  FUN_1073c5230(&pppplStack_590);
  FUN_1073c4728(&pppplStack_6f0);
  FUN_1074f8344(&pppplStack_650);
  FUN_1074f7554(&puStack_630);
  func_0x000107261dac(&pppplStack_610);
  FUN_1074f7554(&pppplStack_738);
  func_0x0001074fe49c(uStack_88);
  if ((bool)uVar6) {
    return;
  }
  ___stack_chk_fail();
LAB_1074f2840:
  FUN_1074f75b8();
LAB_1074f2844:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1074f2848);
  (*pcVar4)();
LAB_1074f2658:
  while (lVar22 = lVar22 + 0x1b0, lVar22 != lVar10) {
    pppppplVar23 = &ppppplStack_230;
    FUN_1074f80e4(pppppplVar23,lVar22);
    if (((ulong)pppppplVar23 & 1) == 0) {
      func_0x00010729bf90(lVar21,lVar22);
      lVar21 = lVar21 + 0x1b0;
    }
  }
LAB_1074f268c:
  if (lVar21 != lStack_710) {
    lVar22 = lStack_710;
    FUN_1074f7fcc(lStack_710,lStack_710,lVar21);
    func_0x00010729cb64(&lStack_718,lVar22);
  }
  func_0x0001074ff1f8();
  func_0x000107267da8(&ppppplStack_3e0);
  FUN_1073c5a34(&ppppplStack_5d0,&lStack_718);
  func_0x00010729d51c(&lStack_718);
  func_0x00010726e4c8(&ppppplStack_5b8);
  func_0x000107267da8(&ppppplStack_570);
  pppppplVar26 = (long ******)ppppplStack_5d0;
  pppppplVar23 = (long ******)ppppplStack_5c8;
LAB_1074f26e4:
  for (; pppppplVar26 != pppppplVar23; pppppplVar26 = pppppplVar26 + 0x36) {
    FUN_1073c14b8(param_1,pppppplVar26);
  }
  func_0x00010729d51c(&ppppplStack_5d0);
LAB_1074f2708:
  FUN_1074f2b94(&pppplStack_700);
  pppppplVar16 = (long ******)ppppplStack_6f8;
  puVar3 = PTR___ZSt7nothrow_1103469d8;
  goto joined_r0x0001074f24f8;
}



/* Entry: 107503070; end: 1075030f3;  */

void FUN_107503070(undefined8 param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined1 *extraout_x8_01;
  long lStack_118;
  undefined8 *puStack_110;
  undefined1 auStack_e0 [56];
  undefined8 uStack_a8;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  func_0x000107503ea0();
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  puVar6 = &uStack_50;
  uStack_38 = extraout_x8_00;
  func_0x000107503dac(auStack_68,puVar6,1);
  func_0x000107503f08();
  puVar5 = auStack_68;
  func_0x000104c31c5c();
  func_0x000107503e70(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107503f38();
  func_0x000104c31c5c();
  func_0x000107503e84();
  lVar2 = *(long *)(puVar5 + 0x10) + 0x480;
  puVar3 = puVar6;
  func_0x0001074fe5e8();
  lVar2 = lVar2 + 0xf80;
  uStack_a8 = extraout_x8;
  FUN_1074eb354();
  lStack_118 = lVar2;
  while ((lStack_118 != 0 &&
         (puStack_110 = puVar3, func_0x000107283140(puVar3,puVar6), iVar1 = (int)puVar3,
         puVar3 = puStack_110, iVar1 == 0))) {
    FUN_1074eb374(&lStack_118);
    puVar3 = puStack_110;
  }
  puStack_110 = puVar3;
  if (lStack_118 == 0) {
    *extraout_x8_01 = 0;
    extraout_x8_01[0x70] = 0;
    plVar4 = (long *)0x0;
  }
  else {
    func_0x000104c2fe00(&lStack_118,*(long *)(puVar3[7] + 0x18) + 0x40);
    func_0x000104c2fe00(auStack_e0,*(long *)(puVar3[7] + 0x18) + 0x78);
    func_0x0001074fec24();
    FUN_1074f72bc();
    plVar4 = &lStack_118;
    func_0x000107284df4();
    puVar6 = puVar3;
  }
  func_0x0001074fe49c(uStack_a8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x0001074fe980();
  puVar5 = (undefined1 *)plVar4[1];
  while (puVar5 != extraout_x8_01) {
    puVar5 = puVar5 + -0x10;
    FUN_1073ad37c();
  }
  puVar6[1] = extraout_x8_01;
  return;
}



/* Entry: 1075030f4; end: 1075030ff;  */

void FUN_1075030f4(undefined1 *param_1,long param_2,long param_3)

{
  undefined1 in_ZR;
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined8 extraout_x8;
  long lStack_a8;
  long lStack_a0;
  undefined1 auStack_70 [56];
  undefined8 uStack_38;
  
  lVar2 = *(long *)(param_2 + 0x10) + 0x480;
  lVar3 = param_3;
  func_0x0001074fe5e8();
  lVar2 = lVar2 + 0xf80;
  uStack_38 = extraout_x8;
  FUN_1074eb354();
  lStack_a8 = lVar2;
  while ((lStack_a8 != 0 &&
         (lStack_a0 = lVar3, func_0x000107283140(lVar3,param_3), iVar1 = (int)lVar3,
         lVar3 = lStack_a0, iVar1 == 0))) {
    FUN_1074eb374(&lStack_a8);
    lVar3 = lStack_a0;
  }
  lStack_a0 = lVar3;
  if (lStack_a8 == 0) {
    *param_1 = 0;
    param_1[0x70] = 0;
    plVar4 = (long *)0x0;
  }
  else {
    func_0x000104c2fe00(&lStack_a8,*(long *)(*(long *)(lVar3 + 0x38) + 0x18) + 0x40);
    func_0x000104c2fe00(auStack_70,*(long *)(*(long *)(lVar3 + 0x38) + 0x18) + 0x78);
    func_0x0001074fec24();
    FUN_1074f72bc();
    plVar4 = &lStack_a8;
    func_0x000107284df4();
    param_3 = lVar3;
  }
  func_0x0001074fe49c(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x0001074fe980();
  puVar5 = (undefined1 *)plVar4[1];
  while (puVar5 != param_1) {
    puVar5 = puVar5 + -0x10;
    FUN_1073ad37c();
  }
  *(undefined1 **)(param_3 + 8) = param_1;
  return;
}



/* Entry: 107503100; end: 1075031a3;  */

void FUN_107503100(undefined8 param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined1 auVar3 [16];
  undefined1 auStack_a8 [24];
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
  undefined8 uStack_38;
  
  func_0x000107503ea0();
  uStack_88 = param_2[1];
  uStack_90 = *param_2;
  auVar3 = NEON_ext(*(undefined1 (*) [16])(param_2 + 1),*(undefined1 (*) [16])(param_2 + 1),8,1);
  uStack_78 = auVar3._8_8_;
  uStack_80 = auVar3._0_8_;
  uStack_70 = param_2[2];
  uStack_68 = param_2[3];
  uStack_60 = *param_2;
  uStack_58 = param_2[3];
  uStack_50 = uStack_90;
  uStack_48 = uStack_88;
  uStack_38 = extraout_x8;
  func_0x000107503dac(auStack_a8,&uStack_90,5);
  func_0x000107503f08();
  puVar2 = auStack_a8;
  func_0x000104c31c5c();
  func_0x000107503e70(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107503f38();
  func_0x000104c31c5c();
  func_0x000107503e84();
  plVar1 = (long *)(*(long *)(puVar2 + 0x10) + 0x480);
  FUN_1074f146c();
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001074f2bf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x90))(extraout_x8_00);
    return;
  }
  *extraout_x8_00 = 0;
  extraout_x8_00[1] = 0;
  extraout_x8_00[2] = 0;
  return;
}



/* Entry: 1075031a4; end: 10750323f;  */

void FUN_1075031a4(undefined8 *param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = (long *)(*(long *)(param_2 + 0x10) + 0x480);
  FUN_1074f146c();
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001074f2bf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x90))(param_1);
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 107503240; end: 1075032bb;  */

void FUN_107503240(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_68 [40];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  lVar1 = *(long *)(param_1 + 0x10);
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_30 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  func_0x0001072cdd90(auStack_68,param_3);
  FUN_1074f39f8(lVar1 + 0x480,&uStack_40,auStack_68);
  func_0x0001072cdc88(auStack_68);
  func_0x0001072bc168(&uStack_40);
  return;
}



/* Entry: 1075032bc; end: 10750330b;  */

void FUN_1075032bc(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long extraout_x8;
  long extraout_x9;
  undefined1 auStack_30 [16];
  
  func_0x000107504000();
  if (extraout_x9 != 0) {
    plVar1 = (long *)(extraout_x9 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_1074f3a74(extraout_x8 + 0x480,auStack_30);
  func_0x000107503f64();
  return;
}



/* Entry: 10750330c; end: 10750335b;  */

void FUN_10750330c(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long extraout_x8;
  long extraout_x9;
  undefined1 auStack_30 [16];
  
  func_0x000107504000();
  if (extraout_x9 != 0) {
    plVar1 = (long *)(extraout_x9 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_1074f3b08(extraout_x8 + 0x480,auStack_30);
  func_0x000107503f64();
  return;
}



/* Entry: 10750335c; end: 1075033a3;  */

void FUN_10750335c(void)

{
  func_0x00010747b8f8();
  return;
}



/* Entry: 1075033a4; end: 1075033f7;  */

void FUN_1075033a4(long param_1,undefined8 param_2)

{
  func_0x000107503fe0(param_1,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x2b28));
  FUN_107506834(*(undefined8 *)(param_1 + 0x10));
  FUN_1074f3cd4(*(long *)(param_1 + 0x10) + 0x480,param_2);
  func_0x000107503fec();
  return;
}



/* Entry: 1075033f8; end: 10750343b;  */

void FUN_1075033f8(long param_1)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 uVar2;
  undefined8 auStack_38 [3];
  
  lVar1 = *(long *)(param_1 + 0x10);
  FUN_1074f404c();
  func_0x0001074ff9a0(*(undefined8 *)(lVar1 + 0x13c8));
  if (!(bool)in_ZR) {
    func_0x0001074eb11c(auStack_38);
    func_0x0001074f4098(lVar1 + 0x13c8,auStack_38);
    func_0x0001074f4dd8(auStack_38);
  }
  func_0x0001074ff9a0(*(undefined8 *)(lVar1 + 0x13a8));
  if (!(bool)in_ZR) {
    func_0x0001074eb0cc(auStack_38);
    func_0x0001074f40c4(lVar1 + 0x13a8,auStack_38);
    func_0x0001074f4d90(auStack_38);
  }
  func_0x0001074f40f0(lVar1 + 0x1400);
  func_0x0001077fa3d8(lVar1 + 0x2978);
  if (*(long *)(*(long *)(lVar1 + 0x1358) + 0x10) != 0) {
    func_0x0001074eb070(auStack_38);
    uVar2 = auStack_38[0];
    auStack_38[0] = 0;
    FUN_1074f92bc(lVar1 + 0x1358,uVar2);
    func_0x0001074f929c(auStack_38);
  }
  if (*(long *)(*(long *)(lVar1 + 0x1360) + 0xa0) != 0) {
    func_0x0001074eb0a4(auStack_38);
    uVar2 = auStack_38[0];
    auStack_38[0] = 0;
    FUN_1074f9310(lVar1 + 0x1360,uVar2);
    FUN_1074f92f0(auStack_38);
  }
  FUN_107430144(*(undefined8 *)(lVar1 + 0x1350));
  FUN_10747c4b0(*(undefined8 *)(lVar1 + 0x1348));
  uVar2 = *(undefined8 *)(lVar1 + 0x1340);
  func_0x00010786e938(auStack_38,*(undefined8 *)(lVar1 + 0x13c8));
  func_0x00010780f410(uVar2,auStack_38);
  FUN_1074fa6a0(auStack_38);
  if (*(long *)(lVar1 + 0x13d8) != 0) {
    FUN_10746e8e0();
  }
  return;
}



/* Entry: 10750343c; end: 107503507;  */

void FUN_10750343c(long param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long lVar2;
  undefined1 *unaff_x20;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined1 auStack_98 [64];
  undefined1 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [32];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == 0) {
    if (param_2[4] != 0) {
      auStack_a8[0] = 3;
      uStack_a0 = *param_2;
      unaff_x20 = auStack_a8;
      auStack_98[0] = 0;
      uStack_58 = 0;
      func_0x00010725b570(param_2 + 1,auStack_a8);
      func_0x00010725b590(auStack_98);
    }
  }
  else {
    unaff_x20 = auStack_50;
    func_0x00010725b620(auStack_50,param_2);
    FUN_1075044d4(lVar2,auStack_50);
    func_0x00010725b6a4(auStack_48);
  }
  func_0x000107503e70(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = unaff_x20 + 0x10;
  func_0x00010725b590();
  func_0x000107503e84();
  if (*(long **)(*(long *)(puVar1 + 0x10) + 0x2b30) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010750351c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(*(long *)(puVar1 + 0x10) + 0x2b30) + 0x10))();
    return;
  }
  return;
}



/* Entry: 107503508; end: 10750352b;  */

void FUN_107503508(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(*(long *)(param_1 + 0x10) + 0x2b30);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010750351c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}



/* Entry: 10750352c; end: 107503587;  */

void FUN_10750352c(long param_1)

{
  undefined1 auStack_38 [24];
  
  FUN_1074eb4c4(*(long *)(param_1 + 0x10) + 0x480);
  func_0x000107503f44();
  FUN_107503588(auStack_38,*(undefined4 *)(param_1 + 0x2c));
  func_0x000107503f00();
  func_0x000107503f44();
  func_0x000107503ff4(*(undefined8 *)(param_1 + 8));
  func_0x000107503f00();
  return;
}



/* Entry: 107503588; end: 107503613;  */

void FUN_107503588(long param_1)

{
  long lVar1;
  
  func_0x0001077f3c4c();
  func_0x0001077f3790();
  lVar1 = param_1;
  func_0x000107503eb0(0xb5);
  func_0x000107503fb8();
  func_0x000107503f1c();
  func_0x000107503f94(param_1 + 8,lVar1);
  func_0x000107503f30();
  func_0x000107503fa4();
  return;
}



/* Entry: 107503614; end: 10750369f;  */

void FUN_107503614(long param_1)

{
  long lVar1;
  
  func_0x0001077f3c4c();
  func_0x0001077f3790();
  lVar1 = param_1;
  func_0x000107503eb0(0xb8);
  func_0x000107503fb8();
  func_0x000107503f1c();
  func_0x000107503f94(param_1 + 8,lVar1);
  func_0x000107503f30();
  func_0x000107503fa4();
  return;
}



/* Entry: 1075036a0; end: 1075036fb;  */

void FUN_1075036a0(long param_1)

{
  undefined1 auStack_38 [24];
  
  FUN_1074eb6e0(*(long *)(param_1 + 0x10) + 0x480);
  func_0x000107503f54();
  FUN_107503588(auStack_38,*(undefined4 *)(param_1 + 0x2c));
  func_0x000107503f00();
  func_0x000107503f54();
  func_0x000107503ff4(*(undefined8 *)(param_1 + 8));
  func_0x000107503f00();
  return;
}



/* Entry: 1075036fc; end: 107503707;  */

void FUN_1075036fc(long param_1,undefined8 param_2,ulong *param_3,undefined8 param_4)

{
  long *plVar1;
  code *extraout_x8;
  long lVar2;
  int extraout_w10;
  undefined1 auStack_58 [4];
  int iStack_54;
  ulong uStack_50;
  ulong uStack_48;
  undefined1 uStack_40;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if ((char)param_3[2] == '\x01') {
    func_0x000107392e34();
    uStack_48 = param_3[1];
    uStack_50 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x0001074fe68c();
      } while (extraout_w10 != 0);
    }
    uStack_40 = 1;
  }
  else {
    uStack_40 = 0;
    uStack_50 = uStack_50 & 0xffffffffffffff00;
  }
  plVar1 = *(long **)(lVar2 + 0x1368);
  (**(code **)(*plVar1 + 0x28))(auStack_58,plVar1,param_2,&uStack_50,param_4);
  if (iStack_54 == 0) {
    func_0x0001074fe8d0();
    (*extraout_x8)();
  }
  func_0x0001074ff320();
  return;
}


