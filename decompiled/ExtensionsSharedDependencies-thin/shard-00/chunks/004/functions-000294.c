/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 005c1420; end: 005c1433;  */

void FUN_005c1420(void)

{
  FUN_005c1714();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005c1434; end: 005c1713;  */

undefined8 * FUN_005c1434(void)

{
  undefined1 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  code *extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  long unaff_x19;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined1 auStack_350 [56];
  undefined8 uStack_318;
  long lStack_310;
  undefined1 auStack_308 [16];
  undefined1 auStack_2f8 [200];
  undefined1 auStack_230 [24];
  undefined8 uStack_218;
  long lStack_210;
  undefined1 auStack_208 [32];
  undefined1 auStack_1e8 [256];
  long alStack_e8 [3];
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  undefined8 uStack_58;
  
  puVar3 = &uStack_360;
  puVar4 = &uStack_360;
  func_0x005c4670();
  func_0x005c4048();
  func_0x005c4914();
  (*extraout_x8)();
  uStack_358 = *(undefined8 *)(unaff_x19 + 0x10);
  uStack_360 = *(undefined8 *)(unaff_x19 + 8);
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    do {
      func_0x005c3fec();
    } while (extraout_w10 != 0);
  }
  FUN_00484de8(auStack_350);
  lStack_310 = *(long *)(unaff_x19 + 0x20);
  uStack_318 = *(undefined8 *)(unaff_x19 + 0x18);
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    do {
      func_0x005c3fec();
    } while (extraout_w10_00 != 0);
  }
  FUN_005c25f4(auStack_308,unaff_x19 + 0x28);
  FUN_00485f00(auStack_208,unaff_x19 + 0x128);
  FUN_00483978(auStack_1e8,unaff_x19 + 0x148);
  plVar2 = alStack_e8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(plVar2,unaff_x19 + 0x1e8)
  ;
  uStack_d0 = *(undefined1 *)(unaff_x19 + 0x1e0);
  uStack_c0 = *(undefined8 *)(unaff_x19 + 0x250);
  uStack_c8 = *(undefined8 *)(unaff_x19 + 0x248);
  func_0x005c46a0();
  uVar1 = *plVar2 == *(long *)(*(long *)(unaff_x19 + 8) + 0x38);
  if ((bool)uVar1) {
    FUN_005c1740(&uStack_360);
  }
  else {
    pcStack_b8 = FUN_005c2384;
    ppuStack_b0 = &PTR_FUN_00a042a0;
    __Znwm(0x2a8);
    func_0x005c4934();
    if (extraout_x8_00 != 0) {
      do {
        func_0x005c3fec();
      } while (extraout_w10_01 != 0);
    }
    FUN_00484de8(unaff_x19 + 0x10,auStack_350);
    *(long *)(unaff_x19 + 0x50) = lStack_310;
    *(undefined8 *)(unaff_x19 + 0x48) = uStack_318;
    if (lStack_310 != 0) {
      do {
        func_0x005c3fec();
      } while (extraout_w10_02 != 0);
    }
    func_0x005c48e8();
    if (extraout_x8_01 != 0) {
      do {
        func_0x005c3fec();
      } while (extraout_w10_03 != 0);
    }
    func_0x005c26e4(unaff_x19 + 0x68,auStack_2f8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (unaff_x19 + 0x130,auStack_230);
    *(undefined8 *)(unaff_x19 + 0x148) = uStack_218;
    *(long *)(unaff_x19 + 0x150) = lStack_210;
    if (lStack_210 != 0) {
      do {
        func_0x005c3fec();
      } while (extraout_w10_04 != 0);
    }
    FUN_00485dd8(unaff_x19 + 0x158,auStack_208);
    FUN_00483978(unaff_x19 + 0x178,auStack_1e8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (unaff_x19 + 0x278,alStack_e8);
    *(undefined8 *)(unaff_x19 + 0x2a0) = uStack_c0;
    *(undefined8 *)(unaff_x19 + 0x298) = uStack_c8;
    *(ulong *)(unaff_x19 + 0x290) = CONCAT71(uStack_cf,uStack_d0);
    func_0x005c453c();
    func_0x005c45fc();
    func_0x005c42a0(ppuStack_b0);
  }
  FUN_005c23b0();
  func_0x005c3fd8(uStack_58);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x005c42a0(ppuStack_b0);
    FUN_005c23b0();
    func_0x005c4510();
    *puVar4 = &PTR_DAT_00a041c0;
    func_0x005c2428(puVar4 + 1);
    return puVar4;
  }
  return puVar3;
}



/* Entry: 005c1714; end: 005c173f;  */

undefined8 * FUN_005c1714(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_00a041c0;
  func_0x005c2428(param_1 + 1);
  return param_1;
}



/* Entry: 005c1740; end: 005c198f;  */

void FUN_005c1740(double param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 *unaff_x22;
  undefined1 auStack_1f0 [216];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [192];
  
  func_0x005c43a8(param_2 + 0x2b);
  if (*(char *)(*param_2 + 0x34) == '\x01') {
    if ((char)param_2[0x52] == '\x01') {
      func_0x005c436c(param_2 + 0x4f);
    }
    else {
      func_0x005c45f4(param_2 + 0x4f);
    }
    func_0x005c4788();
    func_0x005c45dc();
    func_0x005c4104();
    func_0x005c43dc();
  }
  else {
    func_0x005c4634();
    func_0x0033a204();
    FUN_0033a2e8();
    FUN_005b9d30(param_2 + 0x4f,(long)param_1);
    iVar1 = (int)param_2 + 0x10;
    FUN_005b9944();
    if (iVar1 == 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_118,param_2 + 0x4f);
      func_0x005c45ac(*(undefined8 *)(*param_2 + 0x18),auStack_1f0);
      func_0x005c47a0();
      func_0x005c459c();
      func_0x005c458c();
      func_0x005c4154();
      func_0x005c447c();
      func_0x005c4574();
      func_0x005c45d4();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_118);
      plVar2 = param_2 + 2;
      FUN_005b99e0(plVar2);
      if ((char)param_2[0x52] == '\x01') {
        FUN_005b9d10(param_2 + 0x4f,plVar2);
        func_0x005c41fc();
        FUN_005b9eac();
      }
      else {
        func_0x005b9d20(param_2 + 0x4f,plVar2);
        func_0x005c41fc();
        FUN_005ba190();
      }
      func_0x005c43c4();
      func_0x005c45c4();
      func_0x005c43dc();
      func_0x005c438c();
      func_0x005c41ec();
      func_0x005c45e4();
      goto LAB_005c18bc;
    }
    if (*(long *)(*param_2 + 0x68) != 0) {
      func_0x005c483c(*(undefined8 *)(*(long *)*unaff_x22 + 0x20));
      func_0x005c48d4();
      FUN_005c19a8();
      goto LAB_005c18bc;
    }
    if ((char)param_2[0x52] == '\x01') {
      func_0x005c436c(param_2 + 0x4f);
    }
    else {
      func_0x005c45f4(param_2 + 0x4f);
    }
    func_0x005c4954();
    func_0x005c45dc();
    func_0x005c4104();
    func_0x005c43dc();
  }
  func_0x005c438c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_100);
LAB_005c18bc:
  func_0x005c4690();
  return;
}



/* Entry: 005c1990; end: 005c19a7;  */

void FUN_005c1990(long *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *extraout_x8;
  
  if (*(long *)(*param_1 + 0x18) == 0) {
                    /* WARNING: Could not recover jumptable at 0x005c44a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)param_1[2] + 0x30))(*(long **)param_1[2],param_1[1],param_2,0);
    return;
  }
  plVar1 = *(long **)(*param_1 + 0x18);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0048533c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))();
    return;
  }
  func_0x004686dc(0,param_1[1]);
  uVar2 = 0x340;
  __Znwm();
  FUN_004854e8();
  *extraout_x8 = uVar2;
  return;
}



/* Entry: 005c19a8; end: 005c1bf3;  */

void FUN_005c19a8(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [200];
  undefined8 auStack_68 [3];
  
  if (*(char *)(*param_1 + 0x34) == '\x01') {
    func_0x005c436c(param_1 + 0x1b);
    func_0x005c4788();
    FUN_00425cb4(auStack_68);
    func_0x005c4260(auStack_130);
    func_0x005c4658();
  }
  else {
    if (*(long *)(*param_1 + 0x68) != 0) {
      uVar2 = 0x1c0;
      __Znwm();
      FUN_0040910c();
      lVar4 = *param_1;
      auStack_68[0] = uVar2;
      func_0x005c45ac(*(undefined8 *)(lVar4 + 0x18),auStack_130);
      func_0x005c4604(lVar4,uVar2);
      puVar3 = auStack_130;
      func_0x00465c30(puVar3);
      FUN_005b950c();
      lVar4 = param_1[2];
      FUN_004859e8(param_1 + 4,uVar2,param_4);
      FUN_00468370(&uStack_138,*(undefined8 *)(lVar4 + 0x68),param_1[3],uVar2,puVar3);
      uVar1 = uStack_138;
      lVar4 = param_1[0x1e];
      uStack_140 = 0;
      uStack_138 = 0;
      auStack_68[0] = 0;
      FUN_005c0698(lVar4 + 0x20,uVar1);
      uStack_148 = 0;
      FUN_005c06d4(lVar4 + 0x18,uVar2);
      FUN_005c1c60(lVar4 + 0x28,param_4);
      puVar3 = auStack_130;
      FUN_005c1368(puVar3,*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10));
      func_0x005c44ec();
      func_0x00485824();
      func_0x005c48c0(&PTR_FUN_00a04200);
      func_0x005c26c0(auStack_130);
      *(undefined1 *)(lVar4 + 0x1c0) = 1;
      FUN_0046c0b8(*(undefined8 *)(lVar4 + 0x20),puVar3);
      FUN_005c06b0(&uStack_148);
      func_0x005c0674(&uStack_140);
      func_0x005c0674(&uStack_138);
      FUN_005c06b0(auStack_68);
      return;
    }
    func_0x005c436c(param_1 + 0x1b);
    func_0x005c4954();
    FUN_00425cb4(auStack_68);
    func_0x005c4260(auStack_130);
    func_0x005c4658();
  }
  func_0x005c4430();
  func_0x005c456c();
  return;
}



/* Entry: 005c1bf4; end: 005c1c5f;  */

void FUN_005c1bf4(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(int *)(param_1 + 0x148) == 3) {
    return;
  }
  FUN_005c1c60(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x148) = 3;
  FUN_005c0f9c(param_1);
                    /* WARNING: Could not recover jumptable at 0x005c1c5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x138) + 0x30))(*(long **)(param_1 + 0x138),param_2,param_3,0);
  return;
}



/* Entry: 005c1c60; end: 005c1e03;  */

void FUN_005c1c60(void)

{
  undefined1 uVar1;
  undefined8 **ppuVar2;
  long lVar3;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  
  func_0x005c4670();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (unaff_x19 + 0x18,unaff_x20 + 0x18);
  ppuVar2 = (undefined8 **)(unaff_x19 + 0x30);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(ppuVar2,unaff_x20 + 0x30)
  ;
  if (unaff_x19 != unaff_x20) {
    *(undefined4 *)(unaff_x19 + 0x68) = *(undefined4 *)(unaff_x20 + 0x68);
    plVar4 = *(long **)(unaff_x20 + 0x58);
    if (*(long *)(unaff_x19 + 0x50) != 0) {
      puVar6 = (undefined8 *)(unaff_x19 + 0x48);
      FUN_00465ff4();
      ppuVar2 = (undefined8 **)puVar6;
      for (plVar5 = plVar4;
          (plVar4 = plVar5, puVar6 != (undefined8 *)0x0 &&
          (plVar4 = (long *)0x0, plVar5 != (long *)0x0)); plVar5 = (long *)*plVar5) {
        ppuVar2 = (undefined8 **)(unaff_x19 + 0x48);
        FUN_00466020(ppuVar2,puVar6 + 2,plVar5 + 2);
        puVar6 = (undefined8 *)*puVar6;
        func_0x005c4864();
      }
      func_0x005c4858();
    }
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      func_0x005c4720();
      uStack_50 = 0;
      puStack_60 = ppuVar2;
      lStack_58 = unaff_x19 + 0x58;
      *ppuVar2 = (undefined8 *)0x0;
      ppuVar2[1] = (undefined8 *)0x0;
      FUN_00459ca4(ppuVar2 + 2,plVar4 + 2);
      uStack_50 = CONCAT71(uStack_50._1_7_,1);
      lVar3 = unaff_x19 + 0x60;
      FUN_004597c4(lVar3,ppuVar2 + 2);
      ppuVar2[1] = (undefined8 *)lVar3;
      func_0x005c4864();
      puStack_60 = (undefined8 *)0x0;
      ppuVar2 = &puStack_60;
      FUN_00459cdc();
    }
  }
  *(undefined8 *)(unaff_x19 + 0x70) = *(undefined8 *)(unaff_x20 + 0x70);
  FUN_00463600(unaff_x19 + 0x78,unaff_x20 + 0x78);
  *(undefined1 *)(unaff_x19 + 0x98) = *(undefined1 *)(unaff_x20 + 0x98);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (unaff_x19 + 0xa0,unaff_x20 + 0xa0);
  uVar1 = *(undefined1 *)(unaff_x20 + 200);
  uVar7 = *(undefined8 *)(unaff_x20 + 0xb8);
  *(undefined8 *)(unaff_x19 + 0xc0) = *(undefined8 *)(unaff_x20 + 0xc0);
  *(undefined8 *)(unaff_x19 + 0xb8) = uVar7;
  *(undefined1 *)(unaff_x19 + 200) = uVar1;
  FUN_00463600(unaff_x19 + 0xd0,unaff_x20 + 0xd0);
  uVar8 = *(undefined8 *)(unaff_x20 + 0xf8);
  uVar7 = *(undefined8 *)(unaff_x20 + 0xf0);
  if (*(long *)(unaff_x20 + 0xf8) != 0) {
    do {
      func_0x005c3fec();
    } while (extraout_w10 != 0);
  }
  lStack_58 = *(undefined8 *)(unaff_x19 + 0xf8);
  puStack_60 = *(undefined8 **)(unaff_x19 + 0xf0);
  *(undefined8 *)(unaff_x19 + 0xf8) = uVar8;
  *(undefined8 *)(unaff_x19 + 0xf0) = uVar7;
  func_0x00467d6c(&puStack_60);
  return;
}



/* Entry: 005c1e04; end: 005c21fb;  */

void FUN_005c1e04(long param_1,long param_2)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x19;
  long *unaff_x20;
  ulong *puVar11;
  ulong uVar12;
  long *plVar13;
  uint uVar14;
  long *plVar15;
  ulong uVar16;
  byte bVar17;
  
  func_0x005c4670();
  uVar9 = param_1 + 0x18;
  FUN_004597c4(uVar9,param_2 + 0x10);
  puVar11 = (ulong *)(unaff_x19 + 1);
  uVar12 = *puVar11;
  unaff_x20[1] = uVar9;
  if ((uVar12 != 0) && ((float)(unaff_x19[3] + 1) <= *(float *)(unaff_x19 + 4) * (float)uVar12))
  goto LAB_005c204c;
  uVar4 = 1;
  if (2 < uVar12) {
    uVar4 = (ulong)((uVar12 & uVar12 - 1) != 0);
  }
  uVar4 = uVar4 | uVar12 << 1;
  uVar8 = (ulong)((float)(unaff_x19[3] + 1) / *(float *)(unaff_x19 + 4));
  if (uVar4 <= uVar8) {
    uVar4 = uVar8;
  }
  if (uVar4 - 1 == 0) {
    uVar4 = 2;
  }
  else if ((uVar4 & uVar4 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
    uVar12 = *puVar11;
  }
  if (uVar12 < uVar4) {
LAB_005c1ec8:
    FUN_004594fc(puVar11,uVar4);
    FUN_004594e4();
    unaff_x19[1] = uVar4;
    lVar5 = *unaff_x19;
    for (uVar12 = 0; uVar4 != uVar12; uVar12 = uVar12 + 1) {
      *(undefined8 *)(lVar5 + uVar12 * 8) = 0;
    }
    plVar13 = (long *)unaff_x19[2];
    if (plVar13 != (long *)0x0) {
      uVar12 = plVar13[1];
      uVar8 = uVar4 - 1;
      if ((uVar4 & uVar8) == 0) {
        uVar12 = uVar12 & uVar8;
      }
      else if (uVar4 <= uVar12) {
        uVar16 = 0;
        if (uVar4 != 0) {
          uVar16 = uVar12 / uVar4;
        }
        uVar12 = uVar12 - uVar16 * uVar4;
      }
      *(long **)(lVar5 + uVar12 * 8) = unaff_x19 + 2;
      while (plVar15 = plVar13, plVar13 = (long *)*plVar15, plVar13 != (long *)0x0) {
        uVar16 = plVar13[1];
        if ((uVar4 & uVar8) == 0) {
          uVar16 = uVar16 & uVar8;
        }
        else if (uVar4 <= uVar16) {
          uVar10 = 0;
          if (uVar4 != 0) {
            uVar10 = uVar16 / uVar4;
          }
          uVar16 = uVar16 - uVar10 * uVar4;
        }
        if (uVar16 != uVar12) {
          plVar7 = plVar13;
          if (*(long *)(lVar5 + uVar16 * 8) == 0) {
            *(long **)(lVar5 + uVar16 * 8) = plVar15;
            uVar12 = uVar16;
          }
          else {
            do {
              plVar6 = plVar7;
              plVar7 = (long *)0x0;
              if (*plVar6 == 0) break;
              plVar3 = plVar13 + 2;
              FUN_00459c38(plVar3,*plVar6 + 0x10);
              plVar7 = (long *)*plVar6;
            } while (((ulong)plVar3 & 1) != 0);
            *plVar15 = (long)plVar7;
            lVar5 = *unaff_x19;
            *plVar6 = **(long **)(lVar5 + uVar16 * 8);
            **(undefined8 **)(lVar5 + uVar16 * 8) = plVar13;
            plVar13 = plVar15;
          }
        }
      }
    }
  }
  else if (uVar4 < uVar12) {
    uVar8 = (ulong)((float)(ulong)unaff_x19[3] / *(float *)(unaff_x19 + 4));
    if ((uVar12 < 3) || ((uVar12 & uVar12 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar8) {
      uVar8 = 1L << (-LZCOUNT(uVar8 - 1) & 0x3fU);
    }
    if (uVar4 <= uVar8) {
      uVar4 = uVar8;
    }
    if (uVar4 < uVar12) {
      if (uVar4 != 0) goto LAB_005c1ec8;
      FUN_004594e4();
      unaff_x19[1] = 0;
    }
  }
  uVar12 = *puVar11;
LAB_005c204c:
  uVar4 = uVar12 - 1;
  if ((uVar12 & uVar4) == 0) {
    uVar8 = uVar4 & uVar9;
  }
  else {
    uVar8 = uVar9;
    if (uVar12 <= uVar9) {
      uVar8 = 0;
      if (uVar12 != 0) {
        uVar8 = uVar9 / uVar12;
      }
      uVar8 = uVar9 - uVar8 * uVar12;
    }
  }
  plVar13 = *(long **)(*unaff_x19 + uVar8 * 8);
  if (plVar13 != (long *)0x0) {
    uVar14 = 0;
    bVar17 = 0;
    for (; lVar5 = *plVar13, lVar5 != 0; plVar13 = (long *)*plVar13) {
      uVar16 = *(ulong *)(lVar5 + 8);
      if ((uVar12 & uVar4) == 0) {
        uVar10 = uVar16 & uVar4;
      }
      else {
        uVar10 = uVar16;
        if (uVar12 <= uVar16) {
          uVar10 = 0;
          if (uVar12 != 0) {
            uVar10 = uVar16 / uVar12;
          }
          uVar10 = uVar16 - uVar10 * uVar12;
        }
      }
      if (uVar10 != uVar8) break;
      if (uVar16 == uVar9) {
        lVar5 = lVar5 + 0x10;
        FUN_00459c38(lVar5,unaff_x20 + 2);
        uVar2 = (uint)lVar5;
      }
      else {
        uVar2 = 0;
      }
      bVar1 = uVar2 != uVar14;
      if ((bool)(bVar17 & bVar1)) break;
      uVar14 = uVar14 | bVar1;
      bVar17 = bVar17 | bVar1;
    }
    uVar12 = *puVar11;
  }
  bVar17 = POPCOUNT((char)uVar12) + POPCOUNT((char)(uVar12 >> 8)) + POPCOUNT((char)(uVar12 >> 0x10))
           + POPCOUNT((char)(uVar12 >> 0x18)) + POPCOUNT((char)(uVar12 >> 0x20)) +
           POPCOUNT((char)(uVar12 >> 0x28)) + POPCOUNT((char)(uVar12 >> 0x30)) +
           POPCOUNT((char)(uVar12 >> 0x38));
  uVar9 = unaff_x20[1];
  if (bVar17 < 2) {
    uVar9 = uVar12 - 1 & uVar9;
  }
  else if (uVar12 <= uVar9) {
    uVar4 = 0;
    if (uVar12 != 0) {
      uVar4 = uVar9 / uVar12;
    }
    uVar9 = uVar9 - uVar4 * uVar12;
  }
  if (plVar13 == (long *)0x0) {
    plVar13 = unaff_x19 + 2;
    *unaff_x20 = *plVar13;
    *plVar13 = (long)unaff_x20;
    lVar5 = *unaff_x19;
    *(long **)(lVar5 + uVar9 * 8) = plVar13;
    if (*unaff_x20 != 0) {
      uVar9 = *(ulong *)(*unaff_x20 + 8);
      if (bVar17 < 2) {
        uVar9 = uVar9 & uVar12 - 1;
      }
      else if (uVar12 <= uVar9) {
        uVar4 = 0;
        if (uVar12 != 0) {
          uVar4 = uVar9 / uVar12;
        }
        uVar9 = uVar9 - uVar4 * uVar12;
      }
      *(long **)(lVar5 + uVar9 * 8) = unaff_x20;
    }
  }
  else {
    *unaff_x20 = *plVar13;
    *plVar13 = (long)unaff_x20;
    if (*unaff_x20 != 0) {
      uVar4 = *(ulong *)(*unaff_x20 + 8);
      if (bVar17 < 2) {
        uVar4 = uVar4 & uVar12 - 1;
      }
      else if (uVar12 <= uVar4) {
        uVar8 = 0;
        if (uVar12 != 0) {
          uVar8 = uVar4 / uVar12;
        }
        uVar4 = uVar4 - uVar8 * uVar12;
      }
      if (uVar4 != uVar9) {
        *(long **)(*unaff_x19 + uVar4 * 8) = unaff_x20;
      }
    }
  }
  unaff_x19[3] = unaff_x19[3] + 1;
  return;
}



/* Entry: 005c21fc; end: 005c21ff;  */

undefined8 * FUN_005c21fc(undefined8 *param_1)

{
  func_0x005c4728(&PTR_FUN_00a04200);
  *param_1 = &PTR_DAT_009e8600;
  func_0x0045a078(param_1 + 1);
  return param_1;
}



/* Entry: 005c2200; end: 005c2213;  */

void FUN_005c2200(void)

{
  func_0x005c2268();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005c2214; end: 005c228f;  */

void FUN_005c2214(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 in_stack_ffffffffffffffd0;
  undefined8 in_stack_ffffffffffffffd8;
  
  puVar3 = *(undefined8 **)(param_1 + 0x20);
  *(undefined1 *)(puVar3 + 0x38) = 0;
  if ((param_2 == 0) || (*(int *)(puVar3 + 0x29) != 0)) {
    *(undefined4 *)(puVar3 + 0x29) = 2;
    if (*(int *)(puVar3 + 0x29) != 3) {
      if (*(char *)(puVar3 + 0x38) == '\x01') {
        lVar2 = puVar3[3];
        (**(code **)(*plRam0000000000b65da0 + 0x80))(plRam0000000000b65da0,lVar2 + 0x18);
        if (*(long *)(lVar2 + 0x58) == 0) {
          *(undefined1 *)(lVar2 + 0x60) = 1;
        }
        else {
          FUN_004091e8(lVar2);
          FUN_003f1bf4(*(undefined8 *)(lVar2 + 0x58),0);
        }
        (**(code **)(*plRam0000000000b65da0 + 0x88))(plRam0000000000b65da0,lVar2 + 0x18);
        return;
      }
      puVar5 = puVar3;
      FUN_005c0f9c();
      if (((*(byte *)((long)puVar3 + 0x1c1) & 1) == 0) &&
         (iVar1 = *(int *)(puVar3 + 0x29), *(undefined4 *)(puVar3 + 0x29) = 2, iVar1 != 0)) {
        func_0x005c4740();
        func_0x005c44ec();
        puVar4 = puVar5;
        func_0x005c482c();
        *puVar4 = &PTR_FUN_00a04090;
        puVar4[5] = in_stack_ffffffffffffffd8;
        puVar4[4] = in_stack_ffffffffffffffd0;
        func_0x005c4374();
        FUN_0046c1f8(puVar3[4],puVar5);
        *(undefined1 *)((long)puVar3 + 0x1c1) = 1;
      }
    }
  }
  else {
    *(undefined4 *)(puVar3 + 0x29) = 1;
    FUN_005c0d70();
    puVar4 = *(undefined8 **)(param_1 + 0x20);
    puVar3 = puVar4;
    func_0x005c4740(puVar4,puVar4[1],puVar4[2]);
    func_0x005c44ec();
    puVar5 = puVar3;
    func_0x005c482c();
    *puVar5 = &PTR_FUN_00a04258;
    puVar5[5] = in_stack_ffffffffffffffd8;
    puVar5[4] = in_stack_ffffffffffffffd0;
    func_0x005c4374();
    FUN_0046c248(puVar4[4],puVar4 + 0x30,puVar3);
  }
  return;
}



/* Entry: 005c2290; end: 005c22f3;  */

void FUN_005c2290(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = param_1;
  func_0x005c4740(param_1,param_1[1],param_1[2]);
  func_0x005c44ec();
  puVar2 = puVar1;
  func_0x005c482c();
  *puVar2 = &PTR_FUN_00a04258;
  puVar2[5] = uStack_28;
  puVar2[4] = uStack_30;
  func_0x005c4374();
  FUN_0046c248(param_1[4],param_1 + 0x30,puVar1);
  return;
}



/* Entry: 005c22f4; end: 005c22f7;  */

undefined8 * FUN_005c22f4(undefined8 *param_1)

{
  func_0x005c4728(&PTR_FUN_00a04258);
  *param_1 = &PTR_DAT_009e8600;
  func_0x0045a078(param_1 + 1);
  return param_1;
}



/* Entry: 005c22f8; end: 005c230b;  */

void FUN_005c22f8(void)

{
  func_0x005c235c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005c230c; end: 005c2383;  */

void FUN_005c230c(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 in_stack_ffffffffffffffd0;
  undefined8 in_stack_ffffffffffffffd8;
  
  puVar4 = *(undefined8 **)(param_1 + 0x20);
  if (param_2 == 0) {
    if (*(int *)(puVar4 + 0x29) != 3) {
      if (*(char *)(puVar4 + 0x38) == '\x01') {
        lVar2 = puVar4[3];
        (**(code **)(*plRam0000000000b65da0 + 0x80))(plRam0000000000b65da0,lVar2 + 0x18);
        if (*(long *)(lVar2 + 0x58) == 0) {
          *(undefined1 *)(lVar2 + 0x60) = 1;
        }
        else {
          FUN_004091e8(lVar2);
          FUN_003f1bf4(*(undefined8 *)(lVar2 + 0x58),0);
        }
        (**(code **)(*plRam0000000000b65da0 + 0x88))(plRam0000000000b65da0,lVar2 + 0x18);
        return;
      }
      puVar3 = puVar4;
      FUN_005c0f9c();
      if (((*(byte *)((long)puVar4 + 0x1c1) & 1) == 0) &&
         (iVar1 = *(int *)(puVar4 + 0x29), *(undefined4 *)(puVar4 + 0x29) = 2, iVar1 != 0)) {
        func_0x005c4740();
        func_0x005c44ec();
        puVar5 = puVar3;
        func_0x005c482c();
        *puVar5 = &PTR_FUN_00a04090;
        puVar5[5] = in_stack_ffffffffffffffd8;
        puVar5[4] = in_stack_ffffffffffffffd0;
        func_0x005c4374();
        FUN_0046c1f8(puVar4[4],puVar3);
        *(undefined1 *)((long)puVar4 + 0x1c1) = 1;
      }
    }
  }
  else {
    (**(code **)(*(long *)puVar4[0x27] + 0x38))((long *)puVar4[0x27],puVar4 + 5,puVar4 + 0x30);
    puVar5 = *(undefined8 **)(param_1 + 0x20);
    puVar4 = puVar5;
    func_0x005c4740(puVar5,puVar5[1],puVar5[2]);
    func_0x005c44ec();
    puVar3 = puVar4;
    func_0x005c482c();
    *puVar3 = &PTR_FUN_00a04258;
    puVar3[5] = in_stack_ffffffffffffffd8;
    puVar3[4] = in_stack_ffffffffffffffd0;
    func_0x005c4374();
    FUN_0046c248(puVar5[4],puVar5 + 0x30,puVar4);
  }
  return;
}



/* Entry: 005c2384; end: 005c238b;  */

void FUN_005c2384(double param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *unaff_x22;
  undefined1 auStack_1f0 [216];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [192];
  
  plVar3 = *(long **)(param_2 + 0x10);
  func_0x005c43a8(plVar3 + 0x2b);
  if (*(char *)(*plVar3 + 0x34) == '\x01') {
    if ((char)plVar3[0x52] == '\x01') {
      func_0x005c436c(plVar3 + 0x4f);
    }
    else {
      func_0x005c45f4(plVar3 + 0x4f);
    }
    func_0x005c4788();
    func_0x005c45dc();
    func_0x005c4104();
    func_0x005c43dc();
  }
  else {
    func_0x005c4634();
    func_0x0033a204();
    FUN_0033a2e8();
    FUN_005b9d30(plVar3 + 0x4f,(long)param_1);
    iVar1 = (int)plVar3 + 0x10;
    FUN_005b9944();
    if (iVar1 == 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_118,plVar3 + 0x4f);
      func_0x005c45ac(*(undefined8 *)(*plVar3 + 0x18),auStack_1f0);
      func_0x005c47a0();
      func_0x005c459c();
      func_0x005c458c();
      func_0x005c4154();
      func_0x005c447c();
      func_0x005c4574();
      func_0x005c45d4();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_118);
      plVar2 = plVar3 + 2;
      FUN_005b99e0(plVar2);
      if ((char)plVar3[0x52] == '\x01') {
        FUN_005b9d10(plVar3 + 0x4f,plVar2);
        func_0x005c41fc();
        FUN_005b9eac();
      }
      else {
        func_0x005b9d20(plVar3 + 0x4f,plVar2);
        func_0x005c41fc();
        FUN_005ba190();
      }
      func_0x005c43c4();
      func_0x005c45c4();
      func_0x005c43dc();
      func_0x005c438c();
      func_0x005c41ec();
      func_0x005c45e4();
      goto LAB_005c18bc;
    }
    if (*(long *)(*plVar3 + 0x68) != 0) {
      func_0x005c483c(*(undefined8 *)(*(long *)*unaff_x22 + 0x20));
      func_0x005c48d4();
      FUN_005c19a8();
      goto LAB_005c18bc;
    }
    if ((char)plVar3[0x52] == '\x01') {
      func_0x005c436c(plVar3 + 0x4f);
    }
    else {
      func_0x005c45f4(plVar3 + 0x4f);
    }
    func_0x005c4954();
    func_0x005c45dc();
    func_0x005c4104();
    func_0x005c43dc();
  }
  func_0x005c438c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_100);
LAB_005c18bc:
  func_0x005c4690();
  return;
}



/* Entry: 005c238c; end: 005c23ab;  */

void FUN_005c238c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_005c23b0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 005c23ac; end: 005c23af;  */

void FUN_005c23ac(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 005c23b0; end: 005c23f7;  */

undefined8 FUN_005c23b0(long param_1)

{
  undefined8 unaff_x19;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x278);
  func_0x00467d18(param_1 + 0x178);
  func_0x00485f90(param_1 + 0x158);
  FUN_005c2668(param_1 + 0x58);
  func_0x00485fd4(param_1 + 0x48);
  func_0x005c467c();
  func_0x0046cd3c();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return unaff_x19;
}



/* Entry: 005c23f8; end: 005c2403;  */

void FUN_005c23f8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_00a04170;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 005c2404; end: 005c2463;  */

void FUN_005c2404(long param_1)

{
  func_0x005c4318();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 005c2464; end: 005c2467;  */

undefined8 * FUN_005c2464(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a042c8;
  func_0x005c26c0(param_1 + 1);
  return param_1;
}



/* Entry: 005c2468; end: 005c247b;  */

void FUN_005c2468(void)

{
  FUN_005c2560();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005c247c; end: 005c24c3;  */

void FUN_005c247c(long param_1)

{
  dword *pdVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  pdVar1 = &MACH_HEADER.flags;
  __Znwm();
  *(undefined ***)pdVar1 = &PTR_FUN_00a042c8;
  lVar2 = *(long *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(pdVar1 + 4) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(pdVar1 + 2) = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x005c3fec();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 005c24c4; end: 005c251b;  */

void FUN_005c24c4(long param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 unaff_x30;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00a042c8;
  lVar1 = *(long *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x005c3fec(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 005c251c; end: 005c2553;  */

long FUN_005c251c(long param_1,undefined8 param_2)

{
  FUN_0046a7e8(param_2,&PTR_DAT_00a04338);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 005c2554; end: 005c255f;  */

undefined ** FUN_005c2554(void)

{
  return &PTR_DAT_00a04338;
}



/* Entry: 005c2560; end: 005c258b;  */

undefined8 * FUN_005c2560(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a042c8;
  func_0x005c26c0(param_1 + 1);
  return param_1;
}



/* Entry: 005c258c; end: 005c25cf;  */

void FUN_005c258c(void)

{
  undefined1 auStack_58 [56];
  
  func_0x005c47cc();
  FUN_005c19a8();
  FUN_00470b00(auStack_58);
  return;
}



/* Entry: 005c25d0; end: 005c25ef;  */

void FUN_005c25d0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x005c2698();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 005c25f0; end: 005c25f3;  */

void FUN_005c25f0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 005c25f4; end: 005c2667;  */

void FUN_005c25f4(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x005c4670();
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  *param_2 = 0;
  param_2[1] = 0;
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  FUN_00463a14(param_1 + 4,param_2 + 4);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (unaff_x19 + 0xd8,unaff_x20 + 0xd8);
  lVar1 = *(long *)(unaff_x20 + 0xf8);
  uVar2 = *(undefined8 *)(unaff_x20 + 0xf0);
  *(undefined8 *)(unaff_x19 + 0xf8) = *(undefined8 *)(unaff_x20 + 0xf8);
  *(undefined8 *)(unaff_x19 + 0xf0) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x005c3fec();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 005c2668; end: 005c2723;  */

undefined8 FUN_005c2668(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x005c26c0(param_1 + 0xf0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xd8);
  func_0x005c457c();
  func_0x0046cd3c();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return unaff_x19;
}



/* Entry: 005c2724; end: 005c27cf;  */

undefined1 *
FUN_005c2724(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  undefined1 auStack_60 [16];
  long lStack_50;
  undefined8 uStack_48;
  
  puVar2 = auStack_60;
  func_0x005c4048();
  uStack_48 = extraout_x8;
  FUN_005c27d0(auStack_60,1);
  FUN_005c2828(lStack_50,param_3,param_4,param_5,param_6);
  lVar1 = lStack_50;
  lStack_50 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  func_0x005c2890();
  func_0x005c3fd8(uStack_48);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x005c439c();
  func_0x005c2890();
  func_0x005c4134();
  *(undefined8 *)(puVar2 + 8) = param_3;
  puVar3 = puVar2;
  FUN_005c27f8();
  *(undefined1 **)(puVar2 + 0x10) = puVar3;
  return puVar2;
}



/* Entry: 005c27d0; end: 005c27f7;  */

long FUN_005c27d0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_005c27f8();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 005c27f8; end: 005c2827;  */

undefined8 * FUN_005c27f8(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x2e8ba2e8ba2e8bb) {
    puVar1 = (undefined8 *)(param_2 * 0x58);
                    /* WARNING: Could not recover jumptable at 0x0077a078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_0099c630)(puVar1);
    return puVar1;
  }
  FUN_0040cee8();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_00a04370;
  FUN_005bce8c(param_1 + 3);
  return param_1;
}



/* Entry: 005c2828; end: 005c2863;  */

undefined8 * FUN_005c2828(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_00a04370;
  FUN_005bce8c(param_1 + 3);
  return param_1;
}



/* Entry: 005c2864; end: 005c2867;  */

void FUN_005c2864(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a04370;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 005c2868; end: 005c287b;  */

void FUN_005c2868(void)

{
  func_0x005c2884();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005c287c; end: 005c289f;  */

void FUN_005c287c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x005c4060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 005c28a0; end: 005c28c3;  */

void FUN_005c28a0(long param_1)

{
  func_0x005c4318();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 005c28c4; end: 005c29ab;  */

undefined8 * FUN_005c28c4(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  func_0x005c4048();
  uStack_28 = extraout_x8;
  FUN_0064bbc8();
  FUN_005c29ac(&uStack_40,1);
  puVar1 = puStack_30;
  puStack_30[2] = 0;
  *puStack_30 = &PTR_FUN_00a04850;
  puStack_30[1] = 0;
  func_0x005c43c4();
  puVar2 = &uStack_58;
  FUN_0064c268(puVar1 + 3,puVar2,10,param_1,0);
  func_0x005c41ec();
  puVar1 = puStack_30;
  puStack_30 = (undefined8 *)0x0;
  func_0x005c2a34(&uStack_40);
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_58 = puRam0000000000b62af8;
  uStack_50 = puRam0000000000b62b00;
  puRam0000000000b62b00 = puVar1;
  puRam0000000000b62af8 = puVar1 + 3;
  func_0x0045a078(&uStack_58);
  puVar1 = &uStack_40;
  func_0x0045a078();
  func_0x005c3fd8(uStack_28);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x005c41ec();
  func_0x005c47e4();
  puVar1 = &uStack_40;
  func_0x005c2a34();
  func_0x005c4510();
  puVar1[1] = puVar2;
  puVar2 = puVar1;
  FUN_005c29d4();
  puVar1[2] = puVar2;
  return puVar1;
}



/* Entry: 005c29ac; end: 005c29d3;  */

long FUN_005c29ac(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_005c29d4();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 005c29d4; end: 005c2a03;  */

void FUN_005c29d4(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x1642c8590b21643) {
                    /* WARNING: Could not recover jumptable at 0x0077a078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_0099c630)(param_2 * 0xb8);
    return;
  }
  FUN_0040cee8();
  *param_1 = &PTR_FUN_00a04850;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 005c2a04; end: 005c2a07;  */

void FUN_005c2a04(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a04850;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 005c2a08; end: 005c2a1b;  */

void FUN_005c2a08(void)

{
  func_0x005c2a24();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005c2a1c; end: 005c2a47;  */

void FUN_005c2a1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x005c4060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 005c2a48; end: 005c2a5b;  */

void FUN_005c2a48(void)

{
  func_0x005c2a68();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005c2a5c; end: 005c2a77;  */

void FUN_005c2a5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00779ea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_00998be0)(param_1 + 0x20);
  return;
}



/* Entry: 005c2a78; end: 005c2a8b;  */

void FUN_005c2a78(void)

{
  FUN_005c3010();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005c2a8c; end: 005c2a97;  */

void FUN_005c2a8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x005c4060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 005c2a98; end: 005c2aab;  */

void FUN_005c2a98(void)

{
  FUN_005c2d94();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005c2aac; end: 005c2bb3;  */

undefined1 * FUN_005c2aac(void)

{
  undefined1 in_ZR;
  int iVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  undefined8 uVar4;
  long unaff_x21;
  long unaff_x22;
  long lVar5;
  undefined1 in_stack_00000030;
  undefined1 in_stack_00000040;
  code *in_stack_00000050;
  undefined **in_stack_00000058;
  undefined8 in_stack_00000088;
  undefined8 *in_stack_000000c0;
  undefined1 *puVar3;
  
  func_0x005c4978();
  func_0x005c4048();
  func_0x005c434c();
  if (extraout_x8 != 0) {
    do {
      func_0x005c3fec();
    } while (extraout_w10 != 0);
  }
  func_0x005c46d0();
  FUN_0045cc3c();
  func_0x005c4928();
  func_0x005c4584();
  lVar5 = *(long *)(unaff_x22 + 0x70);
  in_stack_00000050 = FUN_005c2df8;
  in_stack_00000058 = &PTR_FUN_00a044b8;
  func_0x005c46c8();
  func_0x005c4120();
  func_0x005c46c0();
  func_0x005c4460();
  func_0x005c4294();
  func_0x005c4010();
  func_0x005c437c();
  if (lVar5 == 0) {
    func_0x005c4238();
    if (extraout_x8_00 != 0) {
      do {
        func_0x005c3fec();
      } while (extraout_w10_00 != 0);
    }
    func_0x005c430c();
    func_0x005c4384();
    func_0x005c41f4();
  }
  puVar2 = (undefined1 *)register0x00000008;
  FUN_005c2ea0();
  func_0x005c3fd8(in_stack_00000088);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x005c40dc();
    puVar2 = (undefined1 *)register0x00000008;
    FUN_005c2ea0();
    func_0x005c4134();
    func_0x005c4978();
    puVar3 = puVar2;
    in_stack_000000c0 = &stack0x000000c0;
    func_0x005c4048();
    iVar1 = (int)puVar3;
    in_stack_00000030 = 0;
    in_stack_00000040 = 0;
    in_stack_00000088 = extraout_x8_01;
    func_0x005c4870();
    uVar4 = *(undefined8 *)(puVar2 + 0x20);
    if (iVar1 == 0) {
      func_0x005c4450();
      if (extraout_x8_04 != 0) {
        do {
          func_0x005c3fec();
        } while (extraout_w10_03 != 0);
      }
      func_0x005c4224();
      if ((bool)in_ZR) {
        func_0x005c4210();
      }
      FUN_0045cc3c();
      func_0x005c4794();
      func_0x005c4520();
      lVar5 = *(long *)(unaff_x21 + 0x70);
      in_stack_00000050 = FUN_005c2f48;
      in_stack_00000058 = &PTR_FUN_00a044e8;
      func_0x005c44e4();
      func_0x005c4064();
      if ((bool)in_ZR) {
        func_0x005c40e8();
      }
      func_0x005c4420();
      func_0x005c4288();
      func_0x005c4020();
      func_0x005c4344();
      if (lVar5 == 0) {
        func_0x005c424c();
        if (extraout_x8_05 != 0) {
          do {
            func_0x005c3fec();
          } while (extraout_w10_04 != 0);
        }
        func_0x005c430c();
        func_0x005c4384();
        func_0x005c41f4();
      }
      puVar2 = (undefined1 *)register0x00000008;
      FUN_005c2ff4();
    }
    else {
      func_0x005c4450();
      if (extraout_x8_02 != 0) {
        do {
          func_0x005c3fec();
        } while (extraout_w10_01 != 0);
      }
      func_0x005c4224();
      if ((bool)in_ZR) {
        func_0x005c4210();
      }
      FUN_0045cc3c();
      func_0x005c4794();
      func_0x005c4520();
      lVar5 = *(long *)(unaff_x21 + 0x70);
      in_stack_00000050 = FUN_005c2ebc;
      in_stack_00000058 = &PTR_FUN_00a044d0;
      func_0x005c44e4();
      func_0x005c4064();
      if ((bool)in_ZR) {
        func_0x005c40e8();
      }
      func_0x005c4420();
      func_0x005c4288();
      func_0x005c4020();
      func_0x005c4344();
      if (lVar5 == 0) {
        func_0x005c424c();
        if (extraout_x8_03 != 0) {
          do {
            func_0x005c3fec();
          } while (extraout_w10_02 != 0);
        }
        func_0x005c430c();
        func_0x005c4384();
        func_0x005c41f4();
      }
      puVar2 = (undefined1 *)register0x00000008;
      FUN_005c2f2c();
    }
    func_0x005c4738();
    func_0x005c3fd8(in_stack_00000088);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x005c40dc();
      FUN_005c2ff4();
      func_0x005c4738();
      func_0x005c4134();
      puVar2 = (undefined1 *)register0x00000008;
      func_0x005c46f4(&PTR_DAT_00a04460);
      func_0x005c2dd4(puVar2 + 0x30);
      func_0x0045cbec((undefined1 *)((long)register0x00000008 + 0x20));
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(uVar4);
      return (undefined1 *)register0x00000008;
    }
  }
  return puVar2;
}



/* Entry: 005c2bb4; end: 005c2d93;  */

undefined1 * FUN_005c2bb4(long param_1)

{
  undefined1 in_ZR;
  int iVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  undefined8 uVar3;
  long unaff_x21;
  long lVar4;
  undefined1 in_stack_00000030;
  undefined1 in_stack_00000040;
  code *in_stack_00000050;
  undefined **in_stack_00000058;
  undefined8 in_stack_00000088;
  
  func_0x005c4978();
  lVar4 = param_1;
  func_0x005c4048();
  iVar1 = (int)lVar4;
  in_stack_00000030 = 0;
  in_stack_00000040 = 0;
  in_stack_00000088 = extraout_x8;
  func_0x005c4870();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar2 = (undefined1 *)register0x00000008;
  if (iVar1 == 0) {
    func_0x005c4450();
    if (extraout_x8_02 != 0) {
      do {
        func_0x005c3fec();
      } while (extraout_w10_01 != 0);
    }
    func_0x005c4224();
    if ((bool)in_ZR) {
      func_0x005c4210();
    }
    FUN_0045cc3c();
    func_0x005c4794();
    func_0x005c4520();
    lVar4 = *(long *)(unaff_x21 + 0x70);
    in_stack_00000050 = FUN_005c2f48;
    in_stack_00000058 = &PTR_FUN_00a044e8;
    func_0x005c44e4();
    func_0x005c4064();
    if ((bool)in_ZR) {
      func_0x005c40e8();
    }
    func_0x005c4420();
    func_0x005c4288();
    func_0x005c4020();
    func_0x005c4344();
    if (lVar4 == 0) {
      func_0x005c424c();
      if (extraout_x8_03 != 0) {
        do {
          func_0x005c3fec();
        } while (extraout_w10_02 != 0);
      }
      func_0x005c430c();
      func_0x005c4384();
      func_0x005c41f4();
    }
    FUN_005c2ff4();
  }
  else {
    func_0x005c4450();
    if (extraout_x8_00 != 0) {
      do {
        func_0x005c3fec();
      } while (extraout_w10 != 0);
    }
    func_0x005c4224();
    if ((bool)in_ZR) {
      func_0x005c4210();
    }
    FUN_0045cc3c();
    func_0x005c4794();
    func_0x005c4520();
    lVar4 = *(long *)(unaff_x21 + 0x70);
    in_stack_00000050 = FUN_005c2ebc;
    in_stack_00000058 = &PTR_FUN_00a044d0;
    func_0x005c44e4();
    func_0x005c4064();
    if ((bool)in_ZR) {
      func_0x005c40e8();
    }
    func_0x005c4420();
    func_0x005c4288();
    func_0x005c4020();
    func_0x005c4344();
    if (lVar4 == 0) {
      func_0x005c424c();
      if (extraout_x8_01 != 0) {
        do {
          func_0x005c3fec();
        } while (extraout_w10_00 != 0);
      }
      func_0x005c430c();
      func_0x005c4384();
      func_0x005c41f4();
    }
    FUN_005c2f2c();
  }
  func_0x005c4738();
  func_0x005c3fd8(in_stack_00000088);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x005c40dc();
    FUN_005c2ff4();
    func_0x005c4738();
    func_0x005c4134();
    puVar2 = (undefined1 *)register0x00000008;
    func_0x005c46f4(&PTR_DAT_00a04460);
    func_0x005c2dd4(puVar2 + 0x30);
    func_0x0045cbec((undefined1 *)((long)register0x00000008 + 0x20));
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(uVar3);
    return (undefined1 *)register0x00000008;
  }
  return puVar2;
}



/* Entry: 005c2d94; end: 005c2df7;  */

long FUN_005c2d94(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x005c46f4(&PTR_DAT_00a04460);
  func_0x005c2dd4(lVar1 + 0x30);
  func_0x0045cbec(param_1 + 0x20);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  return param_1;
}



/* Entry: 005c2df8; end: 005c2e7b;  */

void FUN_005c2df8(undefined8 param_1)

{
  undefined8 uStack_98;
  undefined1 auStack_48 [16];
  undefined1 uStack_38;
  
  func_0x005c4684();
  auStack_48[0] = 0;
  uStack_38 = 0;
  func_0x005c4300();
  func_0x005c4334();
  func_0x005c4560(uStack_98);
  func_0x005c40c0();
  func_0x005c47d8(param_1,auStack_48);
  func_0x005c4394();
  func_0x005c4268();
  func_0x005c41ec();
  func_0x005c4624();
  return;
}



/* Entry: 005c2e7c; end: 005c2e9b;  */

void FUN_005c2e7c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_005c2ea0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 005c2e9c; end: 005c2e9f;  */

void FUN_005c2e9c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 005c2ea0; end: 005c2ebb;  */

long FUN_005c2ea0(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x005c42d0();
  lVar1 = unaff_x19;
  func_0x005c4318();
  if (lVar1 != 0) {
    func_0x0040ce94();
  }
  return unaff_x19;
}



/* Entry: 005c2ebc; end: 005c2f07;  */

void FUN_005c2ebc(long param_1)

{
  code *extraout_x8;
  undefined1 auStack_48 [32];
  undefined1 uStack_28;
  
  auStack_48[0] = 0;
  uStack_28 = 0;
  func_0x005c430c(**(undefined8 **)(param_1 + 0x10),*(undefined8 **)(param_1 + 0x10) + 2);
  (*extraout_x8)();
  FUN_005be34c(auStack_48);
  return;
}



/* Entry: 005c2f08; end: 005c2f27;  */

void FUN_005c2f08(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_005c2f2c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 005c2f28; end: 005c2f2b;  */

void FUN_005c2f28(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 005c2f2c; end: 005c2f47;  */

long FUN_005c2f2c(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x005c42dc();
  lVar1 = unaff_x19;
  func_0x005c4318();
  if (lVar1 != 0) {
    func_0x0040ce94();
  }
  return unaff_x19;
}



/* Entry: 005c2f48; end: 005c2fcf;  */

void FUN_005c2f48(undefined8 param_1)

{
  undefined1 auStack_38 [16];
  undefined1 uStack_28;
  
  func_0x005c4684();
  auStack_38[0] = 0;
  uStack_28 = 0;
  func_0x005c43c4(param_1,"Failed to convert response");
  func_0x005c4334();
  func_0x005c4560();
  func_0x005c40c0();
  func_0x005c47d8(param_1,auStack_38);
  func_0x005c4394();
  func_0x005c4268();
  func_0x005c41ec();
  func_0x005c45ec();
  return;
}



/* Entry: 005c2fd0; end: 005c2fef;  */

void FUN_005c2fd0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_005c2ff4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 005c2ff0; end: 005c2ff3;  */

void FUN_005c2ff0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 005c2ff4; end: 005c300f;  */

long FUN_005c2ff4(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x005c42dc();
  lVar1 = unaff_x19;
  func_0x005c4318();
  if (lVar1 != 0) {
    func_0x0040ce94();
  }
  return unaff_x19;
}



/* Entry: 005c3010; end: 005c301b;  */

void FUN_005c3010(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_00a04410;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 005c301c; end: 005c303f;  */

void FUN_005c301c(long param_1)

{
  func_0x005c4318();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 005c3040; end: 005c3043;  */

void FUN_005c3040(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a04510;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 005c3044; end: 005c3057;  */

void FUN_005c3044(void)

{
  FUN_005c310c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005c3058; end: 005c3063;  */

void FUN_005c3058(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x005c4060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 005c3064; end: 005c3077;  */

void FUN_005c3064(void)

{
  FUN_005c30e0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005c3078; end: 005c30df;  */

void FUN_005c3078(long param_1)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  byte *pbVar4;
  
  pbVar4 = *(byte **)(param_1 + 8);
  if (pbVar4 != (byte *)0x0) {
    do {
      bVar1 = *pbVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pbVar4,0x10);
      if (bVar3) {
        *pbVar4 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((bVar1 & 1) == 0) {
      __ZNSt3__15mutex4lockEv(pbVar4 + 8);
      if (*(long *)(pbVar4 + 0x48) != 0) {
        FUN_00409548();
      }
                    /* WARNING: Could not recover jumptable at 0x00779e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__15mutex6unlockEv_00998bd8)(pbVar4 + 8);
      return;
    }
  }
  return;
}



/* Entry: 005c30e0; end: 005c310b;  */

undefined8 * FUN_005c30e0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_00a04560;
  func_0x00467d6c(param_1 + 1);
  return param_1;
}



/* Entry: 005c310c; end: 005c3117;  */

void FUN_005c310c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a04510;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 005c3118; end: 005c313b;  */

void FUN_005c3118(long param_1)

{
  func_0x005c4318();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 005c313c; end: 005c313f;  */

void FUN_005c313c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a045b0;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 005c3140; end: 005c3153;  */

void FUN_005c3140(void)

{
  FUN_005c3a1c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005c3154; end: 005c315f;  */

void FUN_005c3154(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x005c4060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 005c3160; end: 005c3173;  */

void FUN_005c3160(void)

{
  FUN_005c3674();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005c3174; end: 005c327b;  */

code ** FUN_005c3174(void)

{
  undefined1 in_ZR;
  int iVar1;
  code **ppcVar2;
  undefined1 *puVar3;
  code **ppcVar5;
  code **ppcVar6;
  code *pcVar7;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  undefined8 extraout_x8_06;
  code *extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  long unaff_x21;
  long unaff_x22;
  long lVar8;
  long lVar9;
  undefined8 **in_stack_00000030;
  code *in_stack_00000038;
  undefined1 in_stack_00000040;
  code *in_stack_00000050;
  undefined **in_stack_00000058;
  undefined8 in_stack_00000088;
  undefined8 *in_stack_000000c0;
  code *pcStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined **ppuStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  undefined8 *puStack_10;
  code *pcStack_8;
  undefined1 *puVar4;
  
  func_0x005c4978();
  func_0x005c4048();
  func_0x005c434c();
  if (extraout_x8 != 0) {
    do {
      func_0x005c3fec();
    } while (extraout_w10 != 0);
  }
  func_0x005c46d0();
  FUN_0045cc3c();
  func_0x005c4928();
  func_0x005c4584();
  lVar9 = *(long *)(unaff_x22 + 0x70);
  in_stack_00000050 = FUN_005c36b4;
  in_stack_00000058 = &PTR_FUN_00a04668;
  func_0x005c46c8();
  func_0x005c4120();
  func_0x005c46c0();
  func_0x005c4460();
  func_0x005c4294();
  func_0x005c4010();
  func_0x005c437c();
  if (lVar9 == 0) {
    func_0x005c4238();
    if (extraout_x8_00 != 0) {
      do {
        func_0x005c3fec();
      } while (extraout_w10_00 != 0);
    }
    func_0x005c430c();
    func_0x005c4384();
    func_0x005c41f4();
  }
  ppcVar2 = (code **)register0x00000008;
  FUN_005c3764();
  func_0x005c3fd8(in_stack_00000088);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x005c40dc();
    puVar3 = (undefined1 *)register0x00000008;
    FUN_005c3764();
    func_0x005c4134();
    func_0x005c4978();
    puVar4 = puVar3;
    in_stack_000000c0 = &stack0x000000c0;
    func_0x005c4048();
    iVar1 = (int)puVar4;
    in_stack_00000030 = (undefined8 **)((ulong)in_stack_00000030 & 0xffffffffffffff00);
    in_stack_00000040 = 0;
    in_stack_00000088 = extraout_x8_01;
    func_0x005c4870();
    if (iVar1 == 0) {
      func_0x005c4450();
      if (extraout_x8_04 != 0) {
        do {
          func_0x005c3fec();
        } while (extraout_w10_03 != 0);
      }
      func_0x005c4224();
      if ((bool)in_ZR) {
        func_0x005c4210();
      }
      FUN_0045cc3c();
      func_0x005c4794();
      func_0x005c4520();
      lVar9 = *(long *)(unaff_x21 + 0x70);
      in_stack_00000050 = FUN_005c3810;
      in_stack_00000058 = &PTR_FUN_00a04698;
      func_0x005c44e4();
      func_0x005c4064();
      if ((bool)in_ZR) {
        func_0x005c40e8();
      }
      func_0x005c4420();
      func_0x005c4288();
      func_0x005c4020();
      func_0x005c4344();
      if (lVar9 == 0) {
        func_0x005c424c();
        if (extraout_x8_05 != 0) {
          do {
            func_0x005c3fec();
          } while (extraout_w10_04 != 0);
        }
        func_0x005c430c();
        func_0x005c4384();
        func_0x005c41f4();
      }
      ppcVar2 = (code **)register0x00000008;
      FUN_005c38c8();
    }
    else {
      func_0x005c4450();
      if (extraout_x8_02 != 0) {
        do {
          func_0x005c3fec();
        } while (extraout_w10_01 != 0);
      }
      func_0x005c4224();
      if ((bool)in_ZR) {
        func_0x005c4210();
      }
      FUN_0045cc3c();
      func_0x005c4794();
      func_0x005c4520();
      lVar9 = *(long *)(unaff_x21 + 0x70);
      in_stack_00000050 = FUN_005c3780;
      in_stack_00000058 = &PTR_FUN_00a04680;
      func_0x005c44e4();
      func_0x005c4064();
      if ((bool)in_ZR) {
        func_0x005c40e8();
      }
      func_0x005c4420();
      func_0x005c4288();
      func_0x005c4020();
      func_0x005c4344();
      if (lVar9 == 0) {
        func_0x005c424c();
        if (extraout_x8_03 != 0) {
          do {
            func_0x005c3fec();
          } while (extraout_w10_02 != 0);
        }
        func_0x005c430c();
        func_0x005c4384();
        func_0x005c41f4();
      }
      ppcVar2 = (code **)register0x00000008;
      FUN_005c37f4();
    }
    func_0x005c4738();
    func_0x005c3fd8(in_stack_00000088);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x005c40dc();
      puVar4 = (undefined1 *)register0x00000008;
      FUN_005c38c8();
      func_0x005c4738();
      func_0x005c4134();
      ppcVar2 = &pcStack_90;
      ppcVar6 = &pcStack_90;
      pcStack_8 = FUN_005c345c;
      puStack_10 = &stack0x000000c0;
      func_0x005c4048();
      lVar9 = *(long *)(puVar4 + 0x20);
      uStack_88 = *(undefined8 *)(puVar4 + 0x38);
      pcStack_90 = *(code **)(puVar4 + 0x30);
      uStack_48 = extraout_x8_06;
      if (*(long *)(puVar4 + 0x38) != 0) {
        do {
          func_0x005c3fec();
        } while (extraout_w10_05 != 0);
      }
      FUN_0045cc3c();
      func_0x005c4794();
      func_0x005c4520();
      lVar8 = *(long *)(unaff_x21 + 0x70);
      pcStack_80 = FUN_005c38e4;
      ppuStack_78 = &PTR_FUN_00a046b0;
      uStack_68 = uStack_88;
      pcStack_70 = pcStack_90;
      pcStack_90 = (code *)0x0;
      uStack_88 = 0;
      ppcVar5 = (code **)(unaff_x21 + 0x48);
      puStack_50 = puVar3;
      FUN_0045cc5c(ppcVar5,&pcStack_80);
      func_0x005c4090(ppuStack_78);
      func_0x005c4344();
      if (lVar8 == 0) {
        ppuStack_78 = *(undefined ***)(lVar9 + 0x18);
        pcStack_80 = *(code **)(lVar9 + 0x10);
        if (*(long *)(lVar9 + 0x18) != 0) {
          do {
            func_0x005c3fec();
          } while (extraout_w10_06 != 0);
        }
        func_0x005c430c();
        (*extraout_x8_07)();
        ppcVar5 = &pcStack_80;
        FUN_0045d30c();
      }
      func_0x005c44b4();
      func_0x005c3fd8(uStack_48);
      if ((bool)in_ZR) {
        return ppcVar5;
      }
      ___stack_chk_fail();
      FUN_0045d30c(&pcStack_80);
      func_0x005c44b4();
      func_0x005c4134();
      pcVar7 = FUN_005c3570;
      func_0x005c4978();
      in_stack_00000030 = &puStack_10;
      in_stack_00000038 = pcVar7;
      func_0x005c4048();
      func_0x005c434c();
      if (extraout_x8_08 != 0) {
        do {
          func_0x005c3fec();
        } while (extraout_w10_07 != 0);
      }
      func_0x005c46d0();
      FUN_0045cc3c();
      func_0x005c4928();
      func_0x005c4584();
      lVar8 = *(long *)(lVar8 + 0x70);
      func_0x005c46c8();
      func_0x005c4120();
      func_0x005c46c0();
      func_0x005c4460();
      func_0x005c4294();
      func_0x005c4010();
      func_0x005c437c();
      if (lVar8 == 0) {
        func_0x005c4238();
        if (extraout_x8_09 != 0) {
          do {
            func_0x005c3fec();
          } while (extraout_w10_08 != 0);
        }
        func_0x005c430c();
        func_0x005c4384();
        func_0x005c41f4();
      }
      FUN_005c39dc(&pcStack_90);
      func_0x005c3fd8(pcStack_8);
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x005c40dc();
        FUN_005c39dc(&pcStack_90);
        func_0x005c4134();
        ppcVar2 = ppcVar6;
        func_0x005c46f4(&PTR_DAT_00a04600);
        func_0x005c39f8(ppcVar2 + 6);
        func_0x0045cbec(ppcVar6 + 4);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar9);
        return ppcVar6;
      }
    }
  }
  return ppcVar2;
}



/* Entry: 005c327c; end: 005c345b;  */

code ** FUN_005c327c(undefined8 param_1)

{
  undefined1 in_ZR;
  int iVar1;
  code **ppcVar3;
  undefined1 *puVar4;
  code **ppcVar5;
  code **ppcVar6;
  code *pcVar7;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  undefined8 extraout_x8_04;
  code *extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  long unaff_x21;
  long lVar8;
  long lVar9;
  undefined8 **in_stack_00000030;
  code *in_stack_00000038;
  undefined1 in_stack_00000040;
  code *in_stack_00000050;
  undefined **in_stack_00000058;
  undefined8 in_stack_00000088;
  undefined8 in_stack_000000c0;
  code *pcStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined **ppuStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 *puStack_10;
  code *pcStack_8;
  undefined8 uVar2;
  
  func_0x005c4978();
  uVar2 = param_1;
  func_0x005c4048();
  iVar1 = (int)uVar2;
  in_stack_00000030 = (undefined8 **)((ulong)in_stack_00000030 & 0xffffffffffffff00);
  in_stack_00000040 = 0;
  in_stack_00000088 = extraout_x8;
  func_0x005c4870();
  ppcVar3 = (code **)register0x00000008;
  if (iVar1 == 0) {
    func_0x005c4450();
    if (extraout_x8_02 != 0) {
      do {
        func_0x005c3fec();
      } while (extraout_w10_01 != 0);
    }
    func_0x005c4224();
    if ((bool)in_ZR) {
      func_0x005c4210();
    }
    FUN_0045cc3c();
    func_0x005c4794();
    func_0x005c4520();
    lVar8 = *(long *)(unaff_x21 + 0x70);
    in_stack_00000050 = FUN_005c3810;
    in_stack_00000058 = &PTR_FUN_00a04698;
    func_0x005c44e4();
    func_0x005c4064();
    if ((bool)in_ZR) {
      func_0x005c40e8();
    }
    func_0x005c4420();
    func_0x005c4288();
    func_0x005c4020();
    func_0x005c4344();
    if (lVar8 == 0) {
      func_0x005c424c();
      if (extraout_x8_03 != 0) {
        do {
          func_0x005c3fec();
        } while (extraout_w10_02 != 0);
      }
      func_0x005c430c();
      func_0x005c4384();
      func_0x005c41f4();
    }
    FUN_005c38c8();
  }
  else {
    func_0x005c4450();
    if (extraout_x8_00 != 0) {
      do {
        func_0x005c3fec();
      } while (extraout_w10 != 0);
    }
    func_0x005c4224();
    if ((bool)in_ZR) {
      func_0x005c4210();
    }
    FUN_0045cc3c();
    func_0x005c4794();
    func_0x005c4520();
    lVar8 = *(long *)(unaff_x21 + 0x70);
    in_stack_00000050 = FUN_005c3780;
    in_stack_00000058 = &PTR_FUN_00a04680;
    func_0x005c44e4();
    func_0x005c4064();
    if ((bool)in_ZR) {
      func_0x005c40e8();
    }
    func_0x005c4420();
    func_0x005c4288();
    func_0x005c4020();
    func_0x005c4344();
    if (lVar8 == 0) {
      func_0x005c424c();
      if (extraout_x8_01 != 0) {
        do {
          func_0x005c3fec();
        } while (extraout_w10_00 != 0);
      }
      func_0x005c430c();
      func_0x005c4384();
      func_0x005c41f4();
    }
    FUN_005c37f4();
  }
  func_0x005c4738();
  func_0x005c3fd8(in_stack_00000088);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x005c40dc();
    puVar4 = (undefined1 *)register0x00000008;
    FUN_005c38c8();
    func_0x005c4738();
    func_0x005c4134();
    ppcVar3 = &pcStack_90;
    ppcVar6 = &pcStack_90;
    pcStack_8 = FUN_005c345c;
    puStack_10 = &stack0x000000c0;
    func_0x005c4048();
    lVar8 = *(long *)(puVar4 + 0x20);
    uStack_88 = *(undefined8 *)(puVar4 + 0x38);
    pcStack_90 = *(code **)(puVar4 + 0x30);
    uStack_48 = extraout_x8_04;
    if (*(long *)(puVar4 + 0x38) != 0) {
      do {
        func_0x005c3fec();
      } while (extraout_w10_03 != 0);
    }
    FUN_0045cc3c();
    func_0x005c4794();
    func_0x005c4520();
    lVar9 = *(long *)(unaff_x21 + 0x70);
    pcStack_80 = FUN_005c38e4;
    ppuStack_78 = &PTR_FUN_00a046b0;
    uStack_68 = uStack_88;
    pcStack_70 = pcStack_90;
    pcStack_90 = (code *)0x0;
    uStack_88 = 0;
    ppcVar5 = (code **)(unaff_x21 + 0x48);
    uStack_50 = param_1;
    FUN_0045cc5c(ppcVar5,&pcStack_80);
    func_0x005c4090(ppuStack_78);
    func_0x005c4344();
    if (lVar9 == 0) {
      ppuStack_78 = *(undefined ***)(lVar8 + 0x18);
      pcStack_80 = *(code **)(lVar8 + 0x10);
      if (*(long *)(lVar8 + 0x18) != 0) {
        do {
          func_0x005c3fec();
        } while (extraout_w10_04 != 0);
      }
      func_0x005c430c();
      (*extraout_x8_05)();
      ppcVar5 = &pcStack_80;
      FUN_0045d30c();
    }
    func_0x005c44b4();
    func_0x005c3fd8(uStack_48);
    if ((bool)in_ZR) {
      return ppcVar5;
    }
    ___stack_chk_fail();
    FUN_0045d30c(&pcStack_80);
    func_0x005c44b4();
    func_0x005c4134();
    pcVar7 = FUN_005c3570;
    func_0x005c4978();
    in_stack_00000030 = &puStack_10;
    in_stack_00000038 = pcVar7;
    func_0x005c4048();
    func_0x005c434c();
    if (extraout_x8_06 != 0) {
      do {
        func_0x005c3fec();
      } while (extraout_w10_05 != 0);
    }
    func_0x005c46d0();
    FUN_0045cc3c();
    func_0x005c4928();
    func_0x005c4584();
    lVar9 = *(long *)(lVar9 + 0x70);
    func_0x005c46c8();
    func_0x005c4120();
    func_0x005c46c0();
    func_0x005c4460();
    func_0x005c4294();
    func_0x005c4010();
    func_0x005c437c();
    if (lVar9 == 0) {
      func_0x005c4238();
      if (extraout_x8_07 != 0) {
        do {
          func_0x005c3fec();
        } while (extraout_w10_06 != 0);
      }
      func_0x005c430c();
      func_0x005c4384();
      func_0x005c41f4();
    }
    FUN_005c39dc(&pcStack_90);
    func_0x005c3fd8(pcStack_8);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x005c40dc();
      FUN_005c39dc(&pcStack_90);
      func_0x005c4134();
      ppcVar3 = ppcVar6;
      func_0x005c46f4(&PTR_DAT_00a04600);
      func_0x005c39f8(ppcVar3 + 6);
      func_0x0045cbec(ppcVar6 + 4);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar8);
      return ppcVar6;
    }
  }
  return ppcVar3;
}



/* Entry: 005c345c; end: 005c356f;  */

code ** FUN_005c345c(long param_1)

{
  undefined1 in_ZR;
  code **ppcVar1;
  code **ppcVar2;
  code **ppcVar3;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long lVar4;
  long unaff_x21;
  long lVar5;
  undefined8 unaff_x30;
  code *pcStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined **ppuStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  
  ppcVar2 = &pcStack_90;
  ppcVar3 = &pcStack_90;
  func_0x005c4048();
  lVar4 = *(long *)(param_1 + 0x20);
  uStack_88 = *(undefined8 *)(param_1 + 0x38);
  pcStack_90 = *(code **)(param_1 + 0x30);
  if (*(long *)(param_1 + 0x38) != 0) {
    do {
      func_0x005c3fec();
    } while (extraout_w10 != 0);
  }
  FUN_0045cc3c();
  func_0x005c4794();
  func_0x005c4520();
  lVar5 = *(long *)(unaff_x21 + 0x70);
  pcStack_80 = FUN_005c38e4;
  ppuStack_78 = &PTR_FUN_00a046b0;
  uStack_68 = uStack_88;
  pcStack_70 = pcStack_90;
  pcStack_90 = (code *)0x0;
  uStack_88 = 0;
  ppcVar1 = (code **)(unaff_x21 + 0x48);
  FUN_0045cc5c(ppcVar1,&pcStack_80);
  func_0x005c4090(ppuStack_78);
  func_0x005c4344();
  if (lVar5 == 0) {
    ppuStack_78 = *(undefined ***)(lVar4 + 0x18);
    pcStack_80 = *(code **)(lVar4 + 0x10);
    if (*(long *)(lVar4 + 0x18) != 0) {
      do {
        func_0x005c3fec();
      } while (extraout_w10_00 != 0);
    }
    func_0x005c430c();
    (*extraout_x8_00)();
    ppcVar1 = &pcStack_80;
    FUN_0045d30c();
  }
  func_0x005c44b4();
  func_0x005c3fd8(extraout_x8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    FUN_0045d30c(&pcStack_80);
    func_0x005c44b4();
    func_0x005c4134();
    func_0x005c4978();
    func_0x005c4048();
    func_0x005c434c();
    if (extraout_x8_01 != 0) {
      do {
        func_0x005c3fec();
      } while (extraout_w10_01 != 0);
    }
    func_0x005c46d0();
    FUN_0045cc3c();
    func_0x005c4928();
    func_0x005c4584();
    lVar5 = *(long *)(lVar5 + 0x70);
    func_0x005c46c8();
    func_0x005c4120();
    func_0x005c46c0();
    func_0x005c4460();
    func_0x005c4294();
    func_0x005c4010();
    func_0x005c437c();
    if (lVar5 == 0) {
      func_0x005c4238();
      if (extraout_x8_02 != 0) {
        do {
          func_0x005c3fec();
        } while (extraout_w10_02 != 0);
      }
      func_0x005c430c();
      func_0x005c4384();
      func_0x005c41f4();
    }
    FUN_005c39dc(&pcStack_90);
    func_0x005c3fd8(unaff_x30);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x005c40dc();
      FUN_005c39dc(&pcStack_90);
      func_0x005c4134();
      ppcVar2 = ppcVar3;
      func_0x005c46f4(&PTR_DAT_00a04600);
      func_0x005c39f8(ppcVar2 + 6);
      func_0x0045cbec(ppcVar3 + 4);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar4);
      return ppcVar3;
    }
    return ppcVar2;
  }
  return ppcVar1;
}



/* Entry: 005c3570; end: 005c3673;  */

undefined1 * FUN_005c3570(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x22;
  long lVar2;
  code *in_stack_00000050;
  undefined **in_stack_00000058;
  undefined8 in_stack_00000088;
  
  func_0x005c4978();
  func_0x005c4048();
  func_0x005c434c();
  if (extraout_x8 != 0) {
    do {
      func_0x005c3fec();
    } while (extraout_w10 != 0);
  }
  func_0x005c46d0();
  FUN_0045cc3c();
  func_0x005c4928();
  func_0x005c4584();
  lVar2 = *(long *)(unaff_x22 + 0x70);
  in_stack_00000050 = FUN_005c3958;
  in_stack_00000058 = &PTR_FUN_00a046c8;
  func_0x005c46c8();
  func_0x005c4120();
  func_0x005c46c0();
  func_0x005c4460();
  func_0x005c4294();
  func_0x005c4010();
  func_0x005c437c();
  if (lVar2 == 0) {
    func_0x005c4238();
    if (extraout_x8_00 != 0) {
      do {
        func_0x005c3fec();
      } while (extraout_w10_00 != 0);
    }
    func_0x005c430c();
    func_0x005c4384();
    func_0x005c41f4();
  }
  puVar1 = (undefined1 *)register0x00000008;
  FUN_005c39dc();
  func_0x005c3fd8(in_stack_00000088);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x005c40dc();
    FUN_005c39dc();
    func_0x005c4134();
    puVar1 = (undefined1 *)register0x00000008;
    func_0x005c46f4(&PTR_DAT_00a04600);
    func_0x005c39f8(puVar1 + 0x30);
    func_0x0045cbec((undefined1 *)((long)register0x00000008 + 0x20));
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    return (undefined1 *)register0x00000008;
  }
  return puVar1;
}



/* Entry: 005c3674; end: 005c36b3;  */

long FUN_005c3674(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x005c46f4(&PTR_DAT_00a04600);
  func_0x005c39f8(lVar1 + 0x30);
  func_0x0045cbec(param_1 + 0x20);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  return param_1;
}



/* Entry: 005c36b4; end: 005c373f;  */

void FUN_005c36b4(void)

{
  undefined8 uStack_98;
  
  func_0x005c4684();
  func_0x005c4300();
  func_0x005c4334();
  func_0x005c4560(uStack_98);
  func_0x005c40c0();
  func_0x005c47b4();
  func_0x005c4394();
  func_0x005c4268();
  func_0x005c41ec();
  func_0x005c4624();
  return;
}



/* Entry: 005c3740; end: 005c375f;  */

void FUN_005c3740(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_005c3764();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 005c3760; end: 005c3763;  */

void FUN_005c3760(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 005c3764; end: 005c377f;  */

long FUN_005c3764(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x005c42d0();
  lVar1 = unaff_x19;
  func_0x005c4318();
  if (lVar1 != 0) {
    func_0x0040ce94();
  }
  return unaff_x19;
}



/* Entry: 005c3780; end: 005c37cf;  */

void FUN_005c3780(long param_1,undefined8 param_2)

{
  code *extraout_x8;
  undefined1 auStack_48 [32];
  undefined1 uStack_28;
  
  auStack_48[0] = 0;
  uStack_28 = 0;
  func_0x005c430c(**(undefined8 **)(param_1 + 0x10),param_2,*(undefined8 **)(param_1 + 0x10) + 2);
  (*extraout_x8)();
  FUN_005be34c(auStack_48);
  return;
}



/* Entry: 005c37d0; end: 005c37ef;  */

void FUN_005c37d0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_005c37f4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 005c37f0; end: 005c37f3;  */

void FUN_005c37f0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 005c37f4; end: 005c380f;  */

long FUN_005c37f4(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x005c42dc();
  lVar1 = unaff_x19;
  func_0x005c4318();
  if (lVar1 != 0) {
    func_0x0040ce94();
  }
  return unaff_x19;
}



/* Entry: 005c3810; end: 005c38a3;  */

void FUN_005c3810(void)

{
  code *extraout_x8;
  
  func_0x005c4684();
  func_0x005c43c4();
  func_0x005c4334();
  func_0x005c4560();
  func_0x005c40c0();
  (*extraout_x8)();
  func_0x005c4394();
  func_0x005c4268();
  func_0x005c41ec();
  func_0x005c45ec();
  return;
}



/* Entry: 005c38a4; end: 005c38c3;  */

void FUN_005c38a4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_005c38c8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 005c38c4; end: 005c38c7;  */

void FUN_005c38c4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 005c38c8; end: 005c38e3;  */

long FUN_005c38c8(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x005c42dc();
  lVar1 = unaff_x19;
  func_0x005c4318();
  if (lVar1 != 0) {
    func_0x0040ce94();
  }
  return unaff_x19;
}



/* Entry: 005c38e4; end: 005c3943;  */

void FUN_005c38e4(long param_1)

{
  undefined1 auStack_60 [32];
  undefined1 uStack_40;
  undefined1 auStack_38 [16];
  undefined1 uStack_28;
  
  auStack_38[0] = 0;
  uStack_28 = 0;
  auStack_60[0] = 0;
  uStack_40 = 0;
  func_0x005c430c(*(undefined8 *)(param_1 + 0x10));
  func_0x005c47b4();
  FUN_005be34c(auStack_60);
  FUN_005be37c(auStack_38);
  return;
}


