/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b160c44; end: 10b160c8f;  */

void FUN_10b160c44(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  param_2[2] = 0;
  param_2[3] = 0;
  uVar1 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar1;
  param_2[4] = 0;
  param_2[5] = 0;
  return;
}



/* Entry: 10b160c90; end: 10b160ca3;  */

void FUN_10b160c90(void)

{
  FUN_10b160e0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b160ca4; end: 10b160de3;  */

undefined8 FUN_10b160ca4(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 unaff_x19;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  
  plVar6 = (long *)(*(long *)(param_1 + 0x88) + (*(ulong *)(param_1 + 0xa0) / 0x55) * 8);
  if (*(long *)(param_1 + 0x90) == *(long *)(param_1 + 0x88)) {
    lVar3 = 0;
  }
  else {
    lVar3 = *plVar6 + (*(ulong *)(param_1 + 0xa0) % 0x55) * 0x30;
  }
  FUN_10b149518(param_1 + 0x80);
  do {
    lVar7 = lVar3 + -0xff0;
    do {
      if (lVar3 == param_2) {
        *(undefined8 *)(param_1 + 0xa8) = 0;
        puVar4 = *(undefined8 **)(param_1 + 0x88);
        while( true ) {
          puVar5 = *(undefined8 **)(param_1 + 0x90);
          uVar1 = (long)puVar5 - (long)puVar4 >> 3;
          if (uVar1 < 3) break;
          func_0x00010b1773b0();
          puVar4 = (undefined8 *)(*(long *)(param_1 + 0x88) + 8);
          *(undefined8 **)(param_1 + 0x88) = puVar4;
        }
        if (uVar1 == 1) {
          uVar2 = 0x2a;
        }
        else {
          if (uVar1 != 2) goto LAB_10b160d90;
          uVar2 = 0x55;
        }
        *(undefined8 *)(param_1 + 0xa0) = uVar2;
LAB_10b160d90:
        for (; puVar4 != puVar5; puVar4 = puVar4 + 1) {
          __ZdlPv(*puVar4);
        }
        lVar3 = *(long *)(param_1 + 0x90);
        while (lVar3 != *(long *)(param_1 + 0x88)) {
          lVar3 = lVar3 + -8;
          *(long *)(param_1 + 0x90) = lVar3;
        }
        if (*(long *)(param_1 + 0x80) != 0) {
          __ZdlPv();
        }
        __ZNSt3__15mutexD1Ev(param_1 + 0x40);
        func_0x000106e50c54(param_1 + 0x28);
        param_1 = param_1 + 0x18;
        func_0x00010b1750d4();
        if (param_1 != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        return unaff_x19;
      }
      func_0x00010b175148(**(undefined8 **)(lVar3 + 8));
      lVar7 = lVar7 + 0x30;
      lVar3 = lVar3 + 0x30;
    } while (*plVar6 != lVar7);
    plVar6 = plVar6 + 1;
    lVar3 = *plVar6;
  } while( true );
}



/* Entry: 10b160de4; end: 10b160de7;  */

void FUN_10b160de4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b160de8; end: 10b160e0b;  */

void FUN_10b160de8(long param_1)

{
  func_0x00010b1750d4();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 10b160e0c; end: 10b160e17;  */

void FUN_10b160e0c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cbf550;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b160e18; end: 10b160e83;  */

undefined8 * FUN_10b160e18(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110ccb498;
  if (param_1 != param_2) {
    uVar1 = param_2[1];
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 == 0) {
      FUN_10b252268(param_1);
    }
    else {
      FUN_10b252230(param_1);
    }
  }
  return param_1;
}



/* Entry: 10b160e84; end: 10b160ea3;  */

void FUN_10b160e84(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_10b2520a8();
  }
  return;
}



/* Entry: 10b160ea4; end: 10b160ee3;  */

long FUN_10b160ea4(long param_1)

{
  FUN_10b160ee4(param_1 + 0x30);
  FUN_10b160ffc(param_1 + 0x38);
  FUN_10b160ffc(param_1 + 0x30);
  FUN_10b161024(param_1);
  return param_1;
}



/* Entry: 10b160ee4; end: 10b160f33;  */

void FUN_10b160ee4(long param_1)

{
  int extraout_w11;
  
  while (*(long *)(param_1 + 8) != 0) {
    do {
      func_0x00010b175450();
    } while (extraout_w11 != 0);
    func_0x000107c350d8();
    FUN_10b160f34();
    func_0x00010b1759ec();
  }
  return;
}



/* Entry: 10b160f34; end: 10b160fcf;  */

void FUN_10b160f34(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_2;
  if (*param_1 == lVar3) {
    func_0x00010b160f88(param_1,*(undefined8 *)(lVar3 + 0x18));
    lVar3 = *param_2;
  }
  if (param_1[1] == lVar3) {
    func_0x00010b160f88(param_1 + 1,*(undefined8 *)(lVar3 + 0x10));
    lVar3 = *param_2;
  }
  lVar1 = *(long *)(lVar3 + 0x10);
  lVar2 = *(long *)(lVar3 + 0x18);
  *(undefined8 *)(lVar3 + 0x10) = 0;
  *(undefined8 *)(lVar3 + 0x18) = 0;
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x10) = lVar1;
  }
  if (lVar1 != 0) {
    func_0x00010b9a09a4(lVar1 + 0x18,&stack0xffffffffffffffe8);
  }
  func_0x00010b9a0a78(&stack0xffffffffffffffe8);
  return;
}



/* Entry: 10b160fd0; end: 10b160ffb;  */

void FUN_10b160fd0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b160ff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10b160ffc; end: 10b161023;  */

undefined8 * FUN_10b160ffc(undefined8 *param_1)

{
  FUN_10b160fd0(*param_1);
  return param_1;
}



/* Entry: 10b161024; end: 10b16109f;  */

void FUN_10b161024(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    lVar2 = 0;
    for (lVar3 = 0; lVar3 != lVar1; lVar3 = lVar3 + 1) {
      if (-1 < *(char *)(*param_1 + lVar3)) {
        FUN_10b1610a0(param_1[1] + lVar2);
        lVar1 = param_1[3];
      }
      lVar2 = lVar2 + 0x20;
    }
    __ZdlPv();
    param_1[5] = 0;
    *param_1 = (long)&UNK_10dd5b8b0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}



/* Entry: 10b1610a0; end: 10b1610e7;  */

void FUN_10b1610a0(long param_1)

{
  FUN_10b160ffc(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 10b1610e8; end: 10b16111f;  */

void FUN_10b1610e8(void)

{
  undefined1 auStack_30 [16];
  
  FUN_10b161120(auStack_30);
  FUN_10b124eb8(auStack_30);
  func_0x00010b175524();
  return;
}



/* Entry: 10b161120; end: 10b1612a7;  */

void FUN_10b161120(void)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined8 *puVar3;
  long extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x9;
  long extraout_x10;
  ulong unaff_x20;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 unaff_x23;
  long lVar7;
  undefined8 *unaff_x25;
  
  func_0x00010b1778a0();
  func_0x00010b175674();
  puVar3 = (undefined8 *)0x60;
  __Znwm();
  *puVar3 = FUN_10b16de14;
  puVar3[1] = FUN_10b16dea8;
  puVar3[10] = unaff_x20;
  func_0x00010b176290();
  func_0x00010b175014();
  FUN_10b153d84();
  if ((unaff_x20 & 1) == 0) {
    *(undefined1 *)(puVar3 + 0xb) = 0;
    plVar5 = (long *)puVar3[10];
    lVar4 = *plVar5;
    func_0x00010b1751f0();
    lVar7 = *plVar5;
    if ((*(byte *)(lVar7 + 0x78) & 1) == 0) {
      func_0x00010b177d28();
      if ((bool)in_CY) {
        lVar6 = *(long *)(lVar7 + 0x80);
        func_0x00010b174a38();
        if (extraout_x10 != 0) {
          func_0x00010552fc6c();
LAB_10b161250:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10b161254);
          (*pcVar2)();
        }
        func_0x00010b174770(extraout_x8 - lVar6);
        uVar1 = extraout_x9;
        if ((bool)in_CY) {
          uVar1 = extraout_x8_00;
        }
        if (uVar1 != 0) {
          if (uVar1 >> 0x3d != 0) {
            func_0x000104bd35f4();
            goto LAB_10b161250;
          }
          __Znwm(uVar1 << 3);
        }
        func_0x00010b1747c8();
        *(undefined8 *)(lVar7 + 0x80) = unaff_x23;
        *(undefined8 **)(lVar7 + 0x88) = unaff_x25;
        *(ulong *)(lVar7 + 0x90) = uVar1;
        if (lVar6 != 0) {
          func_0x00010b175554();
        }
      }
      else {
        *unaff_x25 = puVar3;
        unaff_x25 = unaff_x25 + 1;
      }
      *(undefined8 **)(lVar7 + 0x88) = unaff_x25;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(lVar4);
      return;
    }
    func_0x00010b175068();
    func_0x00010b174f14(*puVar3);
  }
  else {
    FUN_10b154f3c(puVar3[10]);
    func_0x00010b174f74();
    func_0x00010b174e8c();
    if ((bool)in_ZR) {
      func_0x00010b174ea4();
      func_0x00010b174c9c();
    }
    else {
      func_0x00010b174a5c();
      func_0x00010b174c90();
      func_0x00010b175084();
    }
    func_0x00010b175038();
    func_0x00010b174f24();
  }
  return;
}



/* Entry: 10b1612a8; end: 10b1612e7;  */

void FUN_10b1612a8(long param_1)

{
  func_0x00010b1612c4();
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  return;
}



/* Entry: 10b1612e8; end: 10b161327;  */

undefined8 FUN_10b1612e8(undefined8 param_1)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x00010b176d08(&UNK_110cc07e8);
  func_0x00010b161340();
  func_0x00010b176db8();
  if (extraout_x8 != 0) {
    do {
      func_0x00010b17493c();
    } while (extraout_w10 != 0);
  }
  return param_1;
}



/* Entry: 10b161328; end: 10b16132b;  */

long FUN_10b161328(long param_1)

{
  long extraout_x8;
  
  func_0x00010b174b2c(&PTR_FUN_110cc07f8);
  if (extraout_x8 != 0) {
    func_0x00010b174ac4();
    func_0x000107c350d8();
    FUN_10b161560();
    func_0x00010b175208();
  }
  FUN_10b141ca0(param_1 + 0x18);
  FUN_10b141ca0();
  return param_1;
}



/* Entry: 10b16132c; end: 10b16135b;  */

void FUN_10b16132c(void)

{
  FUN_10b161504();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b16135c; end: 10b16135f;  */

long FUN_10b16135c(long param_1)

{
  long extraout_x8;
  
  func_0x00010b174b2c(&PTR_FUN_110cc07f8);
  if (extraout_x8 != 0) {
    func_0x00010b174ac4();
    func_0x000107c350d8();
    FUN_10b161560();
    func_0x00010b175208();
  }
  FUN_10b141ca0(param_1 + 0x18);
  FUN_10b141ca0();
  return param_1;
}



/* Entry: 10b161360; end: 10b161373;  */

void FUN_10b161360(void)

{
  FUN_10b161504();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b161374; end: 10b1613ff;  */

void FUN_10b161374(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined8 uStack_30;
  
  func_0x000107c350b4();
  func_0x000107c350e4();
  FUN_10b161400();
  func_0x00010b177b98(uStack_30);
  *(undefined8 *)(extraout_x8_00 + 0x10) = 0;
  *(undefined8 *)(extraout_x8_00 + 0x18) = 0;
  *(undefined8 *)(extraout_x8_00 + 0x20) = 0;
  *(undefined8 *)(extraout_x8_00 + 0x28) = 0;
  func_0x00010b175e3c();
  *(undefined8 *)(extraout_x8_01 + 0x30) = extraout_x9;
  uVar1 = 0;
  uVar2 = 0;
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  uVar7 = 0;
  uVar8 = 0;
  uVar9 = 0;
  uVar10 = 0;
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  *(undefined8 *)(extraout_x8_01 + 0x40) = 0;
  *(undefined8 *)(extraout_x8_01 + 0x38) = 0;
  *(undefined8 *)(extraout_x8_01 + 0x50) = 0;
  *(undefined8 *)(extraout_x8_01 + 0x48) = 0;
  func_0x00010b175ef8();
  *(undefined8 *)(extraout_x8_02 + 0x58) = 0;
  *(undefined8 *)(extraout_x8_02 + 0x60) = extraout_x9_00;
  *(ulong *)(extraout_x8_02 + 0x70) =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  *(ulong *)(extraout_x8_02 + 0x68) =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  *(ulong *)(extraout_x8_02 + 0x80) =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  *(ulong *)(extraout_x8_02 + 0x78) =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  *(ulong *)(extraout_x8_02 + 0x90) =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  *(ulong *)(extraout_x8_02 + 0x88) =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  *(ulong *)(extraout_x8_02 + 0xa0) =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  *(ulong *)(extraout_x8_02 + 0x98) =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  *(undefined8 *)(extraout_x8_02 + 0xa8) = 0;
  func_0x000107c350b8();
  FUN_10b1614f4();
  func_0x000107c350b0(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x00010b175f04();
  FUN_10b161420();
  func_0x00010b175eec();
  return;
}



/* Entry: 10b161400; end: 10b16141f;  */

void FUN_10b161400(void)

{
  func_0x00010b175f04();
  FUN_10b161420();
  func_0x00010b175eec();
  return;
}



/* Entry: 10b161420; end: 10b16144b;  */

void FUN_10b161420(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x1745d1745d1745e) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0xb0);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_110cc0818;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b16144c; end: 10b16144f;  */

void FUN_10b16144c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc0818;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b161450; end: 10b161463;  */

void FUN_10b161450(void)

{
  func_0x00010b161470();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b161464; end: 10b16147b;  */

void FUN_10b161464(long param_1)

{
  func_0x00010b1614b0(param_1 + 0xa8);
  func_0x00010b177254();
  func_0x00010b177230();
  func_0x00010b1771b4();
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_10b144044();
  }
  return;
}



/* Entry: 10b16147c; end: 10b1614d3;  */

void FUN_10b16147c(long param_1)

{
  func_0x00010b1614b0(param_1 + 0x90);
  func_0x00010b177254();
  func_0x00010b177230();
  func_0x00010b1771b4();
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_10b144044();
  }
  return;
}



/* Entry: 10b1614d4; end: 10b1614f3;  */

void FUN_10b1614d4(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_10b144044();
  }
  return;
}



/* Entry: 10b1614f4; end: 10b161503;  */

void FUN_10b1614f4(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b161504; end: 10b16155f;  */

long FUN_10b161504(long param_1)

{
  long extraout_x8;
  
  func_0x00010b174b2c(&PTR_FUN_110cc07f8);
  if (extraout_x8 != 0) {
    func_0x00010b174ac4();
    func_0x000107c350d8();
    FUN_10b161560();
    func_0x00010b175208();
  }
  FUN_10b141ca0(param_1 + 0x18);
  FUN_10b141ca0();
  return param_1;
}



/* Entry: 10b161560; end: 10b16159f;  */

void FUN_10b161560(void)

{
  func_0x00010b174ac4();
  func_0x00010b1752d0();
  func_0x000107c350d8();
  FUN_10b1615a0();
  func_0x00010b174f2c();
  func_0x00010b175d54();
  return;
}



/* Entry: 10b1615a0; end: 10b1615bb;  */

void FUN_10b1615a0(void)

{
  func_0x00010b176ac4();
  FUN_10b1615bc();
  return;
}



/* Entry: 10b1615bc; end: 10b16163f;  */

void FUN_10b1615bc(void)

{
  long unaff_x19;
  
  func_0x00010b174c44();
  func_0x00010b174c54();
  FUN_10b145278();
  func_0x00010b17522c();
  FUN_10b1452a0();
  func_0x00010b17554c();
  func_0x00010b175698();
  func_0x00010b1754fc();
  func_0x00010b1750c8();
  FUN_10b161640();
  func_0x00010b174894();
  if (unaff_x19 == 0) {
    func_0x00010b174cb4();
  }
  else {
    func_0x00010b174f84();
    func_0x00010b174a10();
    func_0x00010b1747fc();
  }
  func_0x00010b175564();
  return;
}



/* Entry: 10b161640; end: 10b161643;  */

void FUN_10b161640(undefined8 *param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13exception_ptraSERKS__1103461a0)(*param_2 + 0x88,*param_1);
  return;
}



/* Entry: 10b161644; end: 10b161687;  */

void FUN_10b161644(long param_1)

{
  code *pcVar1;
  
  if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
    return;
  }
  func_0x00010b177184();
  func_0x00010b176afc();
  func_0x00010b176bb4();
  func_0x00010552fc08();
  func_0x00010b1762c0();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b161680);
  (*pcVar1)();
}



/* Entry: 10b161688; end: 10b1616c3;  */

bool FUN_10b161688(undefined8 param_1,long *param_2,long *param_3)

{
  return *param_2 != *param_3;
}



/* Entry: 10b1616c4; end: 10b161707;  */

void FUN_10b1616c4(long param_1)

{
  if (*(uint *)(param_1 + 0x10) != 0xffffffff) {
    func_0x00010b175c88((&PTR_FUN_110cbf5f0)[*(uint *)(param_1 + 0x10)]);
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  return;
}



/* Entry: 10b161708; end: 10b16171b;  */

void FUN_10b161708(undefined8 param_1,long param_2)

{
  func_0x00010b14f1cc();
  if (param_2 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b16171c; end: 10b161833;  */

void FUN_10b16171c(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010b17515c();
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  if (*(char *)(param_2 + 5) == '\x01') {
    func_0x00010b177c14(*(undefined8 *)(unaff_x20 + 0x10));
    *(undefined8 *)(unaff_x20 + 0x18) = 0;
    *(undefined8 *)(unaff_x20 + 0x20) = 0;
    *(undefined8 *)(unaff_x20 + 0x10) = 0;
    *(undefined1 *)(unaff_x19 + 0x28) = 1;
  }
  FUN_10b141b30(unaff_x19 + 0x30,unaff_x20 + 0x30);
  FUN_10b0fafd4(unaff_x19 + 0x98,unaff_x20 + 0x98);
  *(undefined1 *)(unaff_x19 + 0x110) = 0;
  *(undefined1 *)(unaff_x19 + 0x128) = 0;
  if (*(char *)(unaff_x20 + 0x128) == '\x01') {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x118);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x110);
    *(undefined8 *)(unaff_x19 + 0x120) = *(undefined8 *)(unaff_x20 + 0x120);
    *(undefined8 *)(unaff_x19 + 0x118) = uVar2;
    *(undefined8 *)(unaff_x19 + 0x110) = uVar1;
    *(undefined8 *)(unaff_x20 + 0x118) = 0;
    *(undefined8 *)(unaff_x20 + 0x120) = 0;
    *(undefined8 *)(unaff_x20 + 0x110) = 0;
    *(undefined1 *)(unaff_x19 + 0x128) = 1;
  }
  *(undefined1 *)(unaff_x19 + 0x130) = 0;
  *(undefined1 *)(unaff_x19 + 0x148) = 0;
  if (*(char *)(unaff_x20 + 0x148) == '\x01') {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x138);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x130);
    *(undefined8 *)(unaff_x19 + 0x140) = *(undefined8 *)(unaff_x20 + 0x140);
    *(undefined8 *)(unaff_x19 + 0x138) = uVar2;
    *(undefined8 *)(unaff_x19 + 0x130) = uVar1;
    *(undefined8 *)(unaff_x20 + 0x138) = 0;
    *(undefined8 *)(unaff_x20 + 0x140) = 0;
    *(undefined8 *)(unaff_x20 + 0x130) = 0;
    *(undefined1 *)(unaff_x19 + 0x148) = 1;
  }
  FUN_10b162edc(unaff_x19 + 0x150,unaff_x20 + 0x150);
  *(undefined8 *)(unaff_x19 + 0x180) = *(undefined8 *)(unaff_x20 + 0x180);
  return;
}



/* Entry: 10b161834; end: 10b161837;  */

long FUN_10b161834(long param_1)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  long alStack_40 [2];
  
  func_0x00010b174b2c(&PTR_FUN_110cbf660);
  if (extraout_x8 != 0) {
    func_0x00010b17478c();
    alStack_40[0] = 0;
    alStack_40[1] = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    func_0x00010b177948();
    FUN_10b161a04();
    FUN_10b161a30(alStack_40,auStack_50);
    FUN_10b1618e4(auStack_50);
    FUN_10b1618e4(&uStack_60);
    lVar1 = alStack_40[0];
    __ZNSt3__15mutex4lockEv(alStack_40[0] + 0x50);
    __ZNSt13exception_ptraSERKS_(lVar1 + 0x90,auStack_68);
    lVar2 = *(long *)(lVar1 + 0x98);
    *(undefined8 *)(lVar1 + 0x98) = 0;
    __ZNSt3__15mutex6unlockEv(lVar1 + 0x50);
    if (lVar2 == 0) {
      __ZNSt3__118condition_variable10notify_allEv(lVar1 + 0x20);
    }
    else {
      func_0x00010b175150();
      func_0x00010b17555c();
      func_0x00010b1748a8();
    }
    func_0x00010b176558();
    func_0x00010b175060();
    func_0x00010b1750ac();
    func_0x00010b175208();
  }
  FUN_10b1618e4(param_1 + 0x18);
  FUN_10b1618e4();
  return param_1;
}



/* Entry: 10b161838; end: 10b16184b;  */

void FUN_10b161838(void)

{
  FUN_10b161908();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b16184c; end: 10b16184f;  */

long FUN_10b16184c(long param_1)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  long alStack_40 [2];
  
  func_0x00010b174b2c(&PTR_FUN_110cbf660);
  if (extraout_x8 != 0) {
    func_0x00010b17478c();
    alStack_40[0] = 0;
    alStack_40[1] = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    func_0x00010b177948();
    FUN_10b161a04();
    FUN_10b161a30(alStack_40,auStack_50);
    FUN_10b1618e4(auStack_50);
    FUN_10b1618e4(&uStack_60);
    lVar1 = alStack_40[0];
    __ZNSt3__15mutex4lockEv(alStack_40[0] + 0x50);
    __ZNSt13exception_ptraSERKS_(lVar1 + 0x90,auStack_68);
    lVar2 = *(long *)(lVar1 + 0x98);
    *(undefined8 *)(lVar1 + 0x98) = 0;
    __ZNSt3__15mutex6unlockEv(lVar1 + 0x50);
    if (lVar2 == 0) {
      __ZNSt3__118condition_variable10notify_allEv(lVar1 + 0x20);
    }
    else {
      func_0x00010b175150();
      func_0x00010b17555c();
      func_0x00010b1748a8();
    }
    func_0x00010b176558();
    func_0x00010b175060();
    func_0x00010b1750ac();
    func_0x00010b175208();
  }
  FUN_10b1618e4(param_1 + 0x18);
  FUN_10b1618e4();
  return param_1;
}



/* Entry: 10b161850; end: 10b161863;  */

void FUN_10b161850(void)

{
  FUN_10b161908();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b161864; end: 10b161867;  */

void FUN_10b161864(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbf680;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b161868; end: 10b16187b;  */

void FUN_10b161868(void)

{
  FUN_10b1618d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b16187c; end: 10b1618d3;  */

void FUN_10b16187c(long param_1)

{
  undefined1 in_ZR;
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  if (lVar1 != 0) {
    func_0x00010b174910();
  }
  __ZNSt13exception_ptrD1Ev(param_1 + 0xa8);
  __ZNSt3__15mutexD1Ev(param_1 + 0x68);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x38);
  func_0x00010b177038();
  if ((bool)in_ZR) {
    if (*(uint *)(param_1 + 0x28) != 0xffffffff) {
      func_0x00010b175c88((&PTR_FUN_110cbf5f0)[*(uint *)(param_1 + 0x28)]);
    }
    *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
    return;
  }
  return;
}



/* Entry: 10b1618d4; end: 10b1618e3;  */

void FUN_10b1618d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1618e4; end: 10b161907;  */

void FUN_10b1618e4(long param_1)

{
  func_0x00010b1750d4();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b161908; end: 10b161a03;  */

long FUN_10b161908(long param_1)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  long alStack_40 [2];
  
  func_0x00010b174b2c(&PTR_FUN_110cbf660);
  if (extraout_x8 != 0) {
    func_0x00010b17478c();
    alStack_40[0] = 0;
    alStack_40[1] = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    func_0x00010b177948();
    FUN_10b161a04();
    FUN_10b161a30(alStack_40,auStack_50);
    FUN_10b1618e4(auStack_50);
    FUN_10b1618e4(&uStack_60);
    lVar1 = alStack_40[0];
    __ZNSt3__15mutex4lockEv(alStack_40[0] + 0x50);
    __ZNSt13exception_ptraSERKS_(lVar1 + 0x90,auStack_68);
    lVar2 = *(long *)(lVar1 + 0x98);
    *(undefined8 *)(lVar1 + 0x98) = 0;
    __ZNSt3__15mutex6unlockEv(lVar1 + 0x50);
    if (lVar2 == 0) {
      __ZNSt3__118condition_variable10notify_allEv(lVar1 + 0x20);
    }
    else {
      func_0x00010b175150();
      func_0x00010b17555c();
      func_0x00010b1748a8();
    }
    func_0x00010b176558();
    func_0x00010b175060();
    func_0x00010b1750ac();
    func_0x00010b175208();
  }
  FUN_10b1618e4(param_1 + 0x18);
  FUN_10b1618e4();
  return param_1;
}



/* Entry: 10b161a04; end: 10b161a2f;  */

void FUN_10b161a04(void)

{
  func_0x00010b174884();
  func_0x00010b1752bc();
  func_0x00010b17480c();
  func_0x00010b174da8();
  return;
}



/* Entry: 10b161a30; end: 10b161a53;  */

void FUN_10b161a30(void)

{
  func_0x00010b1747a8();
  FUN_10b1618e4();
  return;
}



/* Entry: 10b161a54; end: 10b162d2f;  */

long **** FUN_10b161a54(long param_1)

{
  ulong uVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  long *****ppppplVar5;
  long *****ppppplVar6;
  undefined1 *puVar7;
  ulong *puVar8;
  long ****pppplVar9;
  byte bVar10;
  undefined4 uVar11;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long ***ppplVar12;
  int extraout_w9;
  int extraout_w9_00;
  code *extraout_x9;
  long ***ppplVar13;
  int extraout_w10;
  int extraout_w10_00;
  long ****pppplVar14;
  long ***ppplVar15;
  long *plVar16;
  long lVar17;
  long ***ppplVar18;
  long *plVar19;
  long ****pppplVar20;
  long *****unaff_x23;
  ulong uVar21;
  long ***ppplVar22;
  ulong uVar23;
  long ***ppplVar24;
  undefined **ppuVar25;
  long lVar26;
  undefined8 in_stack_00000050;
  long ***ppplStack_b28;
  long **pplStack_b20;
  long ***ppplStack_b18;
  undefined8 *puStack_b10;
  code *pcStack_b08;
  uint uStack_afc;
  long lStack_af8;
  undefined4 uStack_aec;
  uint uStack_ae8;
  uint uStack_ae4;
  ulong uStack_ae0;
  ulong uStack_ad8;
  long ****pppplStack_ad0;
  long ****pppplStack_ac8;
  uint uStack_abc;
  long lStack_ab8;
  long ****pppplStack_ab0;
  long ****pppplStack_aa8;
  undefined4 uStack_aa0;
  long ***appplStack_a90 [3];
  long ****pppplStack_a78;
  long ****pppplStack_a70;
  long ****pppplStack_a68;
  undefined8 uStack_a60;
  undefined8 uStack_a58;
  long ****pppplStack_a50;
  undefined8 uStack_a48;
  undefined1 uStack_a40;
  undefined1 auStack_a38 [23];
  undefined1 uStack_a21;
  long ****pppplStack_a20;
  long ****pppplStack_a18;
  ulong uStack_a10;
  ulong uStack_a08;
  undefined8 uStack_a00;
  long alStack_9f8 [2];
  undefined1 auStack_9e8 [24];
  long ****pppplStack_9d0;
  long ****pppplStack_9c8;
  long ***ppplStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined4 uStack_9a8;
  undefined4 uStack_9a4;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined4 uStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined1 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined4 uStack_948;
  undefined1 uStack_940;
  undefined1 uStack_8a0;
  undefined1 uStack_898;
  undefined1 uStack_858;
  undefined1 uStack_850;
  undefined1 uStack_84c;
  undefined1 uStack_848;
  undefined1 uStack_844;
  long ***ppplStack_838;
  long ***ppplStack_830;
  undefined1 uStack_828;
  undefined4 uStack_827;
  undefined3 uStack_823;
  long lStack_7f0;
  byte bStack_7e0;
  int iStack_7d4;
  long lStack_7b8;
  byte bStack_7b0;
  byte bStack_676;
  byte bStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  long ***ppplStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined1 auStack_588 [48];
  byte bStack_558;
  undefined1 auStack_550 [24];
  long **applStack_538 [3];
  long ****pppplStack_520;
  long ****pppplStack_518;
  undefined8 uStack_510;
  ulong uStack_500;
  ulong uStack_4f8;
  undefined1 auStack_4e8 [24];
  undefined1 auStack_4d0 [8];
  undefined1 auStack_4c8 [8];
  undefined1 auStack_4c0 [8];
  undefined1 auStack_4b8 [56];
  ulong *puStack_480;
  undefined4 uStack_474;
  uint uStack_468;
  undefined **ppuStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  ulong uStack_440;
  undefined1 *puStack_438;
  undefined8 uStack_430;
  undefined4 uStack_428;
  long ****pppplStack_420;
  long ****pppplStack_418;
  undefined4 uStack_410;
  long ****pppplStack_1a0;
  long ****pppplStack_198;
  long ****pppplStack_190;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  long ***ppplStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined1 auStack_120 [168];
  undefined1 auStack_78 [72];
  undefined1 uStack_30;
  undefined1 uStack_2c;
  undefined1 uStack_28;
  undefined1 uStack_24;
  undefined8 uStack_18;
  
  func_0x00010b176cc0();
  func_0x00010b1749f4();
  plVar16 = *(long **)(param_1 + 0x10);
  lVar26 = plVar16[0x30];
  lVar17 = *plVar16;
  uStack_18 = extraout_x8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (appplStack_a90,plVar16 + 2);
  func_0x000107c316c8(applStack_538,&UNK_10f730894);
  func_0x00010b1775f0(auStack_588);
  uVar11 = 1;
  if ((char)plVar16[0xe] == '\0') {
    uVar11 = 2;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (&ppplStack_5a0,auStack_588);
  if (*(char *)(lVar17 + 0x18a) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (&uStack_5b8,&ppplStack_5a0);
  }
  else {
    func_0x00010b1756f4();
    func_0x000107c278b8(&uStack_5b8);
  }
  plVar19 = (long *)(lVar17 + 0x38);
  uStack_9b8 = uStack_598;
  ppplStack_9c0 = ppplStack_5a0;
  uStack_9b0 = uStack_590;
  uStack_598 = 0;
  ppplStack_5a0 = (long ***)0x0;
  uStack_590 = 0;
  uStack_9a8 = 1;
  uStack_998 = 0;
  uStack_9a0 = 0;
  uStack_988 = 0;
  uStack_990 = 0;
  uStack_980 = (undefined4)plVar16[0x13];
  uStack_970 = uStack_5b0;
  uStack_978 = uStack_5b8;
  uStack_968 = uStack_5a8;
  uStack_5b0 = 0;
  uStack_5b8 = 0;
  uStack_5a8 = 0;
  uStack_960 = 0;
  uStack_940 = 0;
  uStack_8a0 = 0;
  uStack_898 = 0;
  uStack_858 = 0;
  uStack_850 = 0;
  uStack_84c = 0;
  uStack_848 = 0;
  uStack_844 = 0;
  uStack_958 = 0;
  uStack_950 = 0;
  uStack_948 = 0;
  uStack_9a4 = uVar11;
  FUN_10b1f6ad4(&ppplStack_838,*plVar19,&ppplStack_9c0);
  ppppplVar5 = (long *****)&ppplStack_9c0;
  FUN_10b1213b8();
  func_0x00010b177534(&pppplStack_9d0);
  if ((long *****)pppplStack_9d0 == (long *****)0x0) {
    ppppplVar5 = (long *****)*plVar19;
    FUN_10b1f72cc(ppppplVar5,&ppplStack_838);
  }
  if (((bStack_7e0 & 1) == 0) && ((bStack_7b0 & 1) == 0)) {
LAB_10b161c98:
    if ((bStack_676 == 0) && ((*(byte *)(plVar16 + 0xe) & 1) != 0)) {
      if ((bStack_5c0 & 1) == 0) {
LAB_10b161cac:
        if (bStack_7b0 == 1 && iStack_7d4 == 1) {
          ppppplVar5 = (long *****)&ppplStack_838;
          FUN_10b1c4c88();
          if ((ppppplVar5 != (long *****)0x0) && (0 < *(int *)(ppppplVar5 + 2))) {
            bVar10 = *(byte *)(ppppplVar5 + 6) ^ 1;
            goto LAB_10b161cec;
          }
        }
      }
LAB_10b161ce8:
      bVar10 = 0;
LAB_10b161cec:
      if ((((bStack_5c0 & 1) == 0) && ((bVar10 & 1) == 0)) && (bStack_7b0 == 1 && iStack_7d4 != 2))
      {
        unaff_x23 = (long *****)*plVar19;
        func_0x00010b1775f0(&pppplStack_420);
        func_0x00010b1f70f0(&pppplStack_a78,unaff_x23,&pppplStack_420);
        func_0x00010b17766c();
        ppppplVar5 = (long *****)pppplStack_a78;
        func_0x00010b175ad4();
        (*extraout_x8_00)();
        if ((int)ppppplVar5 == 0) {
          func_0x00010b1763cc(pppplStack_a78);
          (*extraout_x9)(&uStack_a10);
          FUN_10b169990(&pppplStack_1a0,1);
          pppplVar20 = pppplStack_190;
          pppplStack_190[2] = (long ***)0x0;
          *pppplStack_190 = (long ***)&PTR_FUN_110cc0868;
          pppplStack_190[1] = (long ***)0x0;
          FUN_10b121c1c(&pppplStack_420,&ppplStack_838);
          uStack_4f8 = uStack_a08;
          uStack_500 = uStack_a10;
          uStack_a10 = 0;
          uStack_a08 = 0;
          uStack_458 = 0;
          ppuStack_460 = (undefined **)0x0;
          FUN_10b179fe8(pppplVar20 + 3,&pppplStack_420,&uStack_500,&ppuStack_460,plVar19);
          FUN_10b127f28(&ppuStack_460);
          func_0x000107c27d78(&uStack_500);
          func_0x00010b175c0c();
          pppplVar20 = pppplStack_190;
          pppplStack_190 = (long ****)0x0;
          ppppplVar5 = (long *****)(pppplVar20 + 3);
          pppplStack_518 = pppplVar20;
          pppplStack_520 = (long ****)ppppplVar5;
          func_0x00010b169a08(&pppplStack_1a0);
          func_0x000107c27d78(&uStack_a10);
          func_0x00010b176b6c(&pppplStack_1a0);
          pppplStack_418 = pppplVar20;
          pppplStack_420 = (long ****)ppppplVar5;
          if ((long *****)pppplVar20 != (long *****)0x0) {
            do {
              func_0x00010b17493c();
            } while (extraout_w10_00 != 0);
          }
          uStack_410 = 0;
          func_0x00010b17532c(&uStack_500);
          FUN_10b160ffc(&uStack_500);
          func_0x00010b175660();
          pppplStack_aa8 = pppplStack_518;
          pppplStack_ab0 = pppplStack_520;
          pppplStack_520 = (long ****)0x0;
          pppplStack_518 = (long ****)0x0;
          uStack_aa0 = 0;
          func_0x00010b177608();
          FUN_10b169a18(&pppplStack_520);
          func_0x00010b1775e8();
          goto LAB_10b16273c;
        }
        func_0x00010b1775e8();
      }
    }
    else if ((bStack_676 & 1) == 0) goto LAB_10b161ce8;
    if ((long *****)pppplStack_9d0 == (long *****)0x0) {
      FUN_10b155ca4(alStack_9f8,plVar16 + 6);
      pppplVar20 = &ppplStack_838;
      FUN_10b1c41c0();
      if (pppplVar20 == (long ****)0x0) {
        bVar2 = true;
      }
      else {
        bVar2 = *(int *)(pppplVar20 + 4) == 0;
      }
      uVar4 = 0;
      FUN_10b1c4d48();
      uStack_a10 = 0;
      uStack_a08 = 0;
      uStack_a00 = 0;
      lStack_ab8 = lVar26;
      if (*(int *)(alStack_9f8[0] + 0xb8) == 3 && !bVar2) {
        ppplVar22 = pppplVar20[3];
        pppplVar9 = pppplVar20 + 3;
        if (((ulong)ppplVar22 & 1) != 0) {
          pppplVar9 = (long ****)((long)ppplVar22 + 7);
        }
        func_0x000107c281e8(&uStack_a10,(ulong)(*pppplVar9)[9] & 0xfffffffffffffffc);
      }
      else if (*(int *)(alStack_9f8[0] + 0xb8) != 3) {
        (**(code **)(**(long **)(lVar17 + 0x28) + 0x50))
                  (&pppplStack_420,*(long **)(lVar17 + 0x28),plVar16 + 6,appplStack_a90);
        func_0x000107c2797c(&uStack_a10,&pppplStack_420);
        func_0x000107c278a8(&pppplStack_420);
      }
      uVar23 = uStack_a10;
      if (uStack_a10 == uStack_a08) {
        pppplStack_ab0 = (long ****)CONCAT44(pppplStack_ab0._4_4_,2);
        uStack_aa0 = 2;
      }
      else {
        ppuVar25 = (undefined **)(ulong)*(uint *)(plVar16 + 0x13);
        ppppplVar6 = (long *****)0xc8;
        uStack_abc = (uint)bStack_676;
        __Znwm();
        ppppplVar5 = ppppplVar6;
        func_0x00010b176d18();
        *ppppplVar5 = (long ****)&PTR_FUN_110cc00b0;
        pppplStack_ad0 = (long ****)(ppppplVar5 + 3);
        *pppplStack_ad0 = (long ***)&PTR_DAT_110cc0100;
        pppplStack_ac8 = (long ****)ppppplVar5;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (ppppplVar5 + 4,appplStack_a90);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (ppppplVar6 + 7,uVar23);
        func_0x000107c27f70(&pppplStack_420,appplStack_a90);
        func_0x00010b20b440();
        ppuStack_460 = ppuVar25;
        func_0x000105c3d708(&pppplStack_1a0,&ppuStack_460);
        unaff_x23 = (long *****)pppplStack_ac8;
        uStack_500 = uStack_500 & 0xffffffffffffff00;
        auStack_4e8[0] = 0;
        func_0x00010b17672c(pppplStack_ac8 + 10,&pppplStack_420,&pppplStack_1a0,&uStack_500);
        func_0x0001052b933c();
        func_0x000107c279a4(&uStack_500);
        func_0x000107c279a4(&pppplStack_1a0);
        func_0x000107c279a4(&pppplStack_420);
        pppplStack_a20 = pppplStack_ad0;
        pppplStack_a18 = (long ****)unaff_x23;
        if (((uStack_abc != 0) || ((bStack_5c0 & 1) != 0)) ||
           (((bStack_7b0 & 1) == 0 || (0 < lStack_7b8 || (bVar2 || ((uVar4 ^ 1) & 1) != 0))))) {
          uVar23 = plVar16[6];
          FUN_10b155d08();
          uStack_ae4 = *(uint *)((long)plVar16 + 0xb4);
          lStack_af8 = *plVar19;
          uStack_aec = (undefined4)plVar16[0x13];
          uStack_ae0 = plVar16[9];
          uStack_ad8 = uVar23;
          if (*(int *)(alStack_9f8[0] + 0xb8) == 0) {
            puVar7 = (undefined1 *)(alStack_9f8[0] + 8);
            FUN_10b235d88(auStack_a38);
          }
          else if (*(int *)(alStack_9f8[0] + 0xb8) == 1) {
            puVar7 = auStack_a38;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                      (puVar7,*(ulong *)(alStack_9f8[0] + 0x68) & 0xfffffffffffffffc);
          }
          else {
            func_0x00010b1756f4();
            puVar7 = auStack_a38;
            func_0x000107c278b8();
          }
          uVar21 = plVar16[8];
          uStack_afc = (uint)*(byte *)(plVar16 + 0xe);
          uStack_ae8 = (uint)*(byte *)(lVar17 + 0x18a);
          uStack_458 = 0;
          ppuStack_460 = &PTR_FUN_110ccad58;
          uStack_448 = 0;
          uStack_450 = 0;
          puStack_438 = (undefined1 *)0x0;
          uStack_440 = 0;
          uStack_430 = 0;
          func_0x000107c316c4();
          uStack_428 = CONCAT31(uStack_428._1_3_,1);
          puVar8 = &uStack_500;
          puStack_438 = puVar7;
          FUN_10b118220();
          func_0x000107c316c4();
          uVar1 = uStack_a08;
          puStack_480 = puVar8;
          for (uVar23 = uStack_a10; uVar3 = uVar23 == uVar1, !(bool)uVar3; uVar23 = uVar23 + 0x18) {
            puVar7 = auStack_4e8;
            func_0x00010b163134();
            if ((*(ulong *)(puVar7 + 8) & 1) != 0) {
              func_0x00010b177bdc();
            }
            func_0x000107c30248(puVar7 + 0x48,uVar23);
            if ((*(ulong *)(puVar7 + 8) & 1) != 0) {
              func_0x00010b177bdc();
            }
            func_0x000107c30248(puVar7 + 0x50,auStack_550);
          }
          if (plVar16[0x11] != 0) {
            FUN_10b13e138(&pppplStack_a78,plVar16 + 0x11);
            pppplVar20 = pppplStack_a78;
            if ((long *****)pppplStack_a78 != (long *****)0x0) {
              if (*(int *)(pppplStack_a78 + 10) == 0) {
                puVar8 = &uStack_500;
                func_0x00010b1185e0();
                if ((puVar8[1] & 1) != 0) {
                  func_0x00010b177bdc();
                }
                func_0x000107c30248(puVar8 + 9,pppplVar20 + 1);
              }
              else {
                uVar3 = *(int *)(pppplStack_a78 + 10) == 1;
                if ((bool)uVar3) {
                  puVar8 = &uStack_500;
                  func_0x00010b118228();
                  FUN_10b4d1804(&pppplStack_1a0,pppplVar20 + 1);
                  if ((puVar8[1] & 1) != 0) {
                    func_0x00010b177bdc();
                  }
                  func_0x000107c3024c(puVar8 + 2,&pppplStack_1a0);
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                            (&pppplStack_1a0);
                }
              }
            }
            func_0x00010b1440f0(&pppplStack_a78);
          }
          if (((*(byte *)(plVar16 + 0x25) & 1) != 0) || ((*(byte *)(plVar16 + 0x29) & 1) != 0)) {
            uVar23 = uStack_4f8;
            if ((uStack_4f8 & 1) != 0) {
              uVar23 = *(ulong *)(uStack_4f8 & 0xfffffffffffffffe);
            }
            func_0x000107c30248(auStack_4d0,plVar16 + 0x22,uVar23);
            uVar23 = uStack_4f8;
            if ((uStack_4f8 & 1) != 0) {
              uVar23 = *(ulong *)(uStack_4f8 & 0xfffffffffffffffe);
            }
            func_0x000107c30248(auStack_4c8,plVar16 + 0x26,uVar23);
          }
          if ((uStack_ad8 >> 0x20 & 1) != 0) {
            puVar8 = &uStack_500;
            func_0x00010b163124();
            *(int *)(puVar8 + 0xe) = (int)uStack_ad8;
          }
          if ((uStack_ae0 >> 0x20 & 1) != 0) {
            puVar8 = &uStack_500;
            func_0x00010b163124();
            uVar23 = uStack_ae0;
            func_0x00010b23fe18();
            *(int *)(puVar8 + 0x11) = (int)uVar23;
          }
          func_0x00010b1758b4(uStack_a21);
          if (extraout_x8_02 != 0) {
            uVar23 = uStack_4f8;
            if ((uStack_4f8 & 1) != 0) {
              uVar23 = *(ulong *)(uStack_4f8 & 0xfffffffffffffffe);
            }
            func_0x000107c30250(auStack_4c0,uVar23);
            func_0x000107c27b9c();
          }
          if ((uVar21 >> 0x20 & 1) != 0) {
            uVar4 = (int)uVar21 - 1;
            uVar3 = uVar4 == 2;
            if (uVar4 < 3) {
              uStack_474 = *(undefined4 *)(&UNK_10e560a70 + (ulong)uVar4 * 4);
            }
            else {
              uStack_474 = 2;
            }
          }
          func_0x00010b177c78();
          if (((bool)uVar3) &&
             (func_0x00010b1758b4(*(undefined1 *)((long)plVar16 + 0x67)), extraout_x8_03 != 0)) {
            uVar23 = uStack_4f8;
            if ((uStack_4f8 & 1) != 0) {
              uVar23 = *(ulong *)(uStack_4f8 & 0xfffffffffffffffe);
            }
            func_0x000107c30248(auStack_4b8,plVar16 + 10,uVar23);
          }
          unaff_x23 = (long *****)(ulong)uStack_ae4;
          if (uStack_ae4 != 0) {
            uStack_468 = uStack_ae4;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                    (&pppplStack_a78,auStack_588);
          if (uStack_ae8 == 0) {
            func_0x00010b1756f4();
            func_0x000107c278b8(&pppplStack_520);
          }
          else {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                      (&pppplStack_520,&pppplStack_a78);
          }
          pppplStack_198 = pppplStack_a70;
          pppplStack_1a0 = pppplStack_a78;
          pppplStack_190 = pppplStack_a68;
          pppplStack_a70 = (long ****)0x0;
          pppplStack_a68 = (long ****)0x0;
          pppplStack_a78 = (long ****)0x0;
          uStack_184 = 1;
          if (uStack_afc == 0) {
            uStack_184 = 2;
          }
          uStack_188 = 1;
          uStack_178 = 0;
          uStack_180 = 0;
          uStack_168 = 0;
          uStack_170 = 0;
          uStack_160 = uStack_aec;
          uStack_150 = pppplStack_518;
          ppplStack_158 = (long ***)pppplStack_520;
          uStack_148 = uStack_510;
          uStack_510 = 0;
          pppplStack_520 = (long ****)0x0;
          pppplStack_518 = (long ****)0x0;
          uStack_140 = 0;
          uStack_130 = 0;
          uStack_138 = 0;
          uStack_128 = 0;
          FUN_10b121eac(auStack_120,&uStack_500);
          func_0x00010b121ec4(auStack_78,&ppuStack_460);
          uStack_30 = 0;
          uStack_2c = 0;
          uStack_28 = 0;
          uStack_24 = 0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppplStack_520);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppplStack_a78);
          FUN_10b24f5cc(&uStack_500);
          FUN_10b24fff8(&ppuStack_460);
          FUN_10b1f6b3c(&pppplStack_420,lStack_af8,&ppplStack_838,&pppplStack_1a0,uStack_abc);
          func_0x00010b177674();
          func_0x00010b175c0c();
          FUN_10b1213b8(&pppplStack_1a0);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a38);
        }
        else {
          if (((pppplVar20 != (long ****)0x0) && ((*(byte *)(plVar16 + 0xd) & 1) != 0)) &&
             (func_0x00010b1758b4(*(undefined1 *)((long)plVar16 + 0x67)), extraout_x8_01 != 0)) {
            uVar23 = (ulong)pppplVar20[9] & 0xfffffffffffffffc;
            func_0x000107c278d0(uVar23,plVar16 + 10);
            if ((int)uVar23 == 0) goto LAB_10b162650;
          }
          if (bStack_7e0 != 1 || 0 < lStack_7f0) {
            FUN_10b20bea8(*(undefined8 *)(lVar17 + 0x18),&DAT_10f7308c1,0xc);
            unaff_x23 = (long *****)*plVar19;
            ppppplVar5 = &pppplStack_1a0;
            func_0x00010b1775f0();
            ppuStack_460 = (undefined **)CONCAT44(ppuStack_460._4_4_,(int)plVar16[0x13]);
            uStack_448 = 0;
            uStack_458 = 0;
            uStack_450 = 0;
            uStack_440 = uStack_440 & 0xffffffffffffff00;
            uStack_430 = 0;
            puStack_438 = (undefined1 *)0x0;
            uStack_428 = 0;
            pppplStack_a78 = (long ****)&PTR_FUN_110ccad58;
            pppplStack_a70 = (long ****)0x0;
            uStack_a60 = 0;
            pppplStack_a68 = (long ****)0x0;
            pppplStack_a50 = (long ****)0x0;
            uStack_a58 = 0;
            uStack_a48 = 0;
            func_0x000107c316c4();
            uStack_a40 = 1;
            pppplStack_a50 = (long ****)ppppplVar5;
            func_0x00010b121ec4(&uStack_500,&pppplStack_a78);
            FUN_10b1f6db4(&pppplStack_420,unaff_x23,&pppplStack_1a0,&ppuStack_460,1,1,&uStack_500,0,
                          0);
            func_0x00010b177674();
            func_0x00010b175c0c();
            FUN_10b121398(&uStack_500);
            FUN_10b24fff8(&pppplStack_a78);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_458);
            func_0x00010b121e00(&pppplStack_1a0);
          }
        }
LAB_10b162650:
        lVar26 = lStack_ab8;
        if ((bStack_7b0 & 1) != 0) {
          pppplStack_520 = (long ****)0x0;
          if (plVar16[0x2e] == 0) {
            uVar11 = 0;
          }
          else {
            pppplStack_a78 = pppplStack_ad0;
            pppplStack_a70 = pppplStack_ac8;
            do {
              func_0x00010b176d28();
            } while (extraout_w9_00 != 0);
            FUN_10b1ab1e0(&pppplStack_420);
            func_0x00010b138874(&pppplStack_9d0,&pppplStack_420);
            func_0x00010b129c40(&pppplStack_420);
            func_0x0001052ac684(&pppplStack_a78);
            if ((long *****)pppplStack_9d0 != (long *****)0x0) {
              ppppplVar5 = (long *****)pppplStack_9d0;
              FUN_10b19cfcc();
              func_0x00010b1775bc();
              func_0x00010b176820();
              func_0x00010b1766f8();
              func_0x00010b176864();
              goto LAB_10b161d48;
            }
            uVar11 = 2;
          }
          pppplStack_ab0 = (long ****)CONCAT44(pppplStack_ab0._4_4_,uVar11);
          uStack_aa0 = 2;
          func_0x00010b1775bc();
          func_0x00010b176820();
          func_0x00010b1766f8();
          func_0x00010b176864();
          goto LAB_10b16273c;
        }
        FUN_10b20bea8(*(undefined8 *)(lVar17 + 0x18),&UNK_10f7308ce,0x11);
        pppplStack_ab0 = (long ****)CONCAT44(pppplStack_ab0._4_4_,2);
        uStack_aa0 = 2;
        func_0x00010b176820();
      }
      func_0x00010b1766f8();
      func_0x00010b176864();
      lVar26 = lStack_ab8;
      goto LAB_10b16273c;
    }
LAB_10b161d48:
    if ((char)plVar16[0xe] == '\x01') {
      func_0x00010b176b34();
      func_0x00010b176d48();
      func_0x00010b177bbc(&PTR_FUN_110cc01b0);
      pppplStack_418 = (long ****)0x0;
      pppplStack_420 = (long ****)0x0;
      FUN_10b18159c(unaff_x23,plVar16 + 0x13,&pppplStack_9d0,&pppplStack_420,plVar19);
      FUN_10b127f28(&pppplStack_420);
      pppplStack_a78 = (long ****)unaff_x23;
      pppplStack_a70 = (long ****)ppppplVar5;
      func_0x00010b176b6c(&pppplStack_520);
      pppplStack_420 = (long ****)unaff_x23;
      pppplStack_418 = (long ****)ppppplVar5;
      do {
        func_0x00010b176d58();
      } while (extraout_w9 != 0);
      uStack_410 = 0;
      func_0x00010b17532c(&uStack_a10);
      FUN_10b160ffc(&uStack_a10);
      func_0x00010b175660();
      pppplStack_a78 = (long ****)0x0;
      pppplStack_a70 = (long ****)0x0;
      uStack_aa0 = 0;
      pppplStack_ab0 = (long ****)unaff_x23;
      pppplStack_aa8 = (long ****)ppppplVar5;
      func_0x000107c2798c(&pppplStack_520);
      FUN_10b16a07c(&pppplStack_a78);
      goto LAB_10b16273c;
    }
    func_0x00010b176b6c(&pppplStack_a78);
    pppplStack_418 = pppplStack_9c8;
    pppplStack_420 = pppplStack_9d0;
    if ((long *****)pppplStack_9c8 != (long *****)0x0) {
      do {
        func_0x00010b17493c();
      } while (extraout_w10 != 0);
    }
    uStack_410 = 1;
    func_0x00010b17532c(&pppplStack_520);
    FUN_10b160ffc(&pppplStack_520);
    func_0x00010b175660();
    pppplStack_aa8 = pppplStack_9c8;
    pppplStack_ab0 = pppplStack_9d0;
    pppplStack_9d0 = (long ****)0x0;
    pppplStack_9c8 = (long ****)0x0;
    uStack_aa0 = 1;
    ppppplVar5 = &pppplStack_a78;
  }
  else {
    ppppplVar5 = (long *****)&ppplStack_838;
    func_0x000107c278d0(ppppplVar5,auStack_588);
    if (((ulong)ppppplVar5 & 1) != 0) goto LAB_10b161c98;
    unaff_x23 = (long *****)(ulong)bStack_558;
    if (bStack_558 == 1) {
      func_0x00010b1772c0(auStack_588,auStack_9e8);
      FUN_10b2026a0(&pppplStack_420,&ppplStack_838,auStack_9e8);
    }
    else {
      FUN_10b202630(&pppplStack_420,&ppplStack_838);
    }
    FUN_10b1559a4(auStack_588,&pppplStack_420);
    func_0x00010b17766c();
    if (bStack_558 != 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_9e8);
    }
    ppppplVar5 = (long *****)appplStack_a90;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(ppppplVar5,auStack_550)
    ;
    if (((bStack_7b0 != 1) || (lStack_7b8 != 0)) || ((bStack_676 & 1) != 0)) goto LAB_10b161c98;
    func_0x00010b176b6c(&pppplStack_1a0);
    FUN_10b154ff8(&pppplStack_ab0,lVar17,&ppplStack_838);
    pppplStack_420 = (long ****)CONCAT44(pppplStack_420._4_4_,1);
    uStack_410 = 2;
    unaff_x23 = &pppplStack_ab0;
    FUN_10b155140(unaff_x23,&pppplStack_420);
    ppppplVar5 = unaff_x23;
    func_0x00010b175660();
    if (((ulong)unaff_x23 & 1) == 0) {
      func_0x00010b1757b4();
      func_0x00010b177608();
      bVar10 = 0;
      if (((char)plVar16[0xe] == '\x01') && ((bStack_5c0 & 1) == 0)) goto LAB_10b161cac;
      goto LAB_10b161cec;
    }
    ppppplVar5 = &pppplStack_1a0;
  }
  func_0x000107c2798c(ppppplVar5);
LAB_10b16273c:
  func_0x00010b129c40(&pppplStack_9d0);
  func_0x00010b121af0(&ppplStack_838);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_5b8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppplStack_5a0);
  func_0x00010b121e00(auStack_588);
  func_0x000107c316d0(applStack_538);
  func_0x00010b176a38();
  FUN_10b154f80(&pppplStack_420,lVar26);
  ppplVar22 = *(long ****)(lVar26 + 0xe8);
  if ((ppplVar22 != (long ***)0x0) &&
     (ppplVar18 = (long ***)(lVar26 + 0xf8), *ppplVar18 != (long **)0x0)) {
    ppplVar13 = ppplVar18;
    func_0x000107c278c4(ppplVar18,plVar16 + 2);
    uVar23 = (long)ppplVar22 - 1;
    if (((ulong)ppplVar22 & uVar23) == 0) {
      ppplVar24 = (long ***)((ulong)ppplVar13 & uVar23);
    }
    else {
      ppplVar24 = ppplVar13;
      if (ppplVar22 <= ppplVar13) {
        uVar1 = 0;
        if (ppplVar22 != (long ***)0x0) {
          uVar1 = (ulong)ppplVar13 / (ulong)ppplVar22;
        }
        ppplVar24 = (long ***)((long)ppplVar13 - uVar1 * (long)ppplVar22);
      }
    }
    pppplVar20 = *(long *****)(*(long *)(lVar26 + 0xe0) + (long)ppplVar24 * 8);
    if (pppplVar20 != (long ****)0x0) {
      do {
        while( true ) {
          pppplVar20 = (long ****)*pppplVar20;
          if (pppplVar20 == (long ****)0x0) goto LAB_10b16294c;
          ppplVar12 = pppplVar20[1];
          if (ppplVar12 != ppplVar13) break;
          pppplVar9 = pppplVar20 + 2;
          func_0x000107c278d0(pppplVar9,plVar16 + 2);
          if ((int)pppplVar9 != 0) {
            ppplVar24 = *(long ****)(lVar26 + 0xe8);
            ppplVar22 = *pppplVar20;
            ppplVar13 = pppplVar20[1];
            uVar23 = (long)ppplVar24 - 1;
            if (((ulong)ppplVar24 & uVar23) == 0) {
              ppplVar13 = (long ***)(uVar23 & (ulong)ppplVar13);
            }
            else if (ppplVar24 <= ppplVar13) {
              uVar1 = 0;
              if (ppplVar24 != (long ***)0x0) {
                uVar1 = (ulong)ppplVar13 / (ulong)ppplVar24;
              }
              ppplVar13 = (long ***)((long)ppplVar13 - uVar1 * (long)ppplVar24);
            }
            lVar17 = *(long *)(lVar26 + 0xe0);
            pppplVar9 = *(long *****)(lVar17 + (long)ppplVar13 * 8);
            do {
              pppplVar14 = pppplVar9;
              pppplVar9 = (long ****)*pppplVar14;
            } while ((long ****)*pppplVar14 != pppplVar20);
            ppplStack_830 = (long ***)(lVar26 + 0xf0);
            if (pppplVar14 == (long ****)ppplStack_830) {
LAB_10b1628a4:
              if (ppplVar22 == (long ***)0x0) {
LAB_10b1628d8:
                *(undefined8 *)(lVar17 + (long)ppplVar13 * 8) = 0;
                ppplVar22 = *pppplVar20;
                goto LAB_10b1628e0;
              }
              ppplVar12 = (long ***)ppplVar22[1];
              if (((ulong)ppplVar24 & uVar23) == 0) {
                ppplVar15 = (long ***)((ulong)ppplVar12 & uVar23);
              }
              else {
                ppplVar15 = ppplVar12;
                if (ppplVar24 <= ppplVar12) {
                  uVar1 = 0;
                  if (ppplVar24 != (long ***)0x0) {
                    uVar1 = (ulong)ppplVar12 / (ulong)ppplVar24;
                  }
                  ppplVar15 = (long ***)((long)ppplVar12 - uVar1 * (long)ppplVar24);
                }
              }
              if (ppplVar15 != ppplVar13) goto LAB_10b1628d8;
LAB_10b1628e8:
              if (((ulong)ppplVar24 & uVar23) == 0) {
                ppplVar12 = (long ***)((ulong)ppplVar12 & uVar23);
              }
              else if (ppplVar24 <= ppplVar12) {
                uVar23 = 0;
                if (ppplVar24 != (long ***)0x0) {
                  uVar23 = (ulong)ppplVar12 / (ulong)ppplVar24;
                }
                ppplVar12 = (long ***)((long)ppplVar12 - uVar23 * (long)ppplVar24);
              }
              if (ppplVar12 != ppplVar13) {
                *(long *****)(lVar17 + (long)ppplVar12 * 8) = pppplVar14;
                ppplVar22 = *pppplVar20;
              }
            }
            else {
              ppplVar12 = pppplVar14[1];
              if (((ulong)ppplVar24 & uVar23) == 0) {
                ppplVar12 = (long ***)((ulong)ppplVar12 & uVar23);
              }
              else if (ppplVar24 <= ppplVar12) {
                uVar1 = 0;
                if (ppplVar24 != (long ***)0x0) {
                  uVar1 = (ulong)ppplVar12 / (ulong)ppplVar24;
                }
                ppplVar12 = (long ***)((long)ppplVar12 - uVar1 * (long)ppplVar24);
              }
              if (ppplVar12 != ppplVar13) goto LAB_10b1628a4;
LAB_10b1628e0:
              if (ppplVar22 != (long ***)0x0) {
                ppplVar12 = (long ***)ppplVar22[1];
                goto LAB_10b1628e8;
              }
            }
            *pppplVar14 = ppplVar22;
            *pppplVar20 = (long ***)0x0;
            *ppplVar18 = (long **)((long)*ppplVar18 + -1);
            uStack_828 = 1;
            uStack_827 = 0;
            uStack_823 = 0;
            ppplStack_838 = (long ***)pppplVar20;
            func_0x00010b162e58(&ppplStack_838);
            goto LAB_10b16294c;
          }
        }
        if (((ulong)ppplVar22 & uVar23) == 0) {
          ppplVar12 = (long ***)((ulong)ppplVar12 & uVar23);
        }
        else if (ppplVar22 <= ppplVar12) {
          uVar1 = 0;
          if (ppplVar22 != (long ***)0x0) {
            uVar1 = (ulong)ppplVar12 / (ulong)ppplVar22;
          }
          ppplVar12 = (long ***)((long)ppplVar12 - uVar1 * (long)ppplVar22);
        }
      } while (ppplVar12 == ppplVar24);
    }
  }
LAB_10b16294c:
  func_0x000107c2798c(&pppplStack_420);
  ppplStack_830 = (long ***)0x0;
  ppplStack_838 = (long ***)0x0;
  ppplStack_9c0 = (long ***)0x0;
  uStack_9b8 = 0;
  FUN_10b161a04(&pppplStack_420,plVar16 + 0x32,&ppplStack_9c0);
  FUN_10b161a30(&ppplStack_838,&pppplStack_420);
  FUN_10b1618e4(&pppplStack_420);
  FUN_10b1618e4(&ppplStack_9c0);
  ppplVar22 = ppplStack_838;
  __ZNSt3__15mutex4lockEv(ppplStack_838 + 10);
  ppppplVar5 = &pppplStack_ab0;
  uVar3 = *(char *)(ppplVar22 + 3) == '\x01';
  if ((bool)uVar3) {
    FUN_10b162d30();
  }
  else {
    FUN_10b163074(ppplVar22);
    *(undefined1 *)(ppplVar22 + 3) = 1;
  }
  ppplVar18 = (long ***)ppplVar22[0x13];
  ppplVar22[0x13] = (long **)0x0;
  __ZNSt3__15mutex6unlockEv(ppplVar22 + 10);
  if (ppplVar18 == (long ***)0x0) {
    __ZNSt3__118condition_variable10notify_allEv(ppplVar22 + 4);
  }
  else {
    func_0x00010b1755e8();
    ppppplVar5 = (long *****)&ppplStack_838;
    func_0x00010b1761b8();
    func_0x00010b174a6c();
  }
  pppplVar20 = &ppplStack_838;
  FUN_10b1618e4();
  func_0x00010b1757b4();
  func_0x000107c350b0(uStack_18);
  if ((bool)uVar3) {
    return pppplVar20;
  }
  ___stack_chk_fail();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppplStack_1a0);
  func_0x00010b1440f0(&pppplStack_a78);
  FUN_10b24f5cc(&uStack_500);
  FUN_10b24fff8(&ppuStack_460);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a38);
  func_0x00010b176820();
  func_0x00010b1766f8();
  func_0x00010b176864();
  func_0x00010b129c40(&pppplStack_9d0);
  func_0x00010b121af0(&ppplStack_838);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_5b8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppplStack_5a0);
  func_0x00010b121e00(auStack_588);
  pppplVar9 = (long ****)applStack_538;
  func_0x000107c316d0();
  func_0x00010b176a38();
  func_0x00010b174f0c();
  pcStack_b08 = FUN_10b162d30;
  uVar4 = *(uint *)(ppppplVar5 + 2);
  if (*(int *)(pppplVar9 + 2) != -1 || uVar4 != 0xffffffff) {
    pplStack_b20 = (long **)ppplVar18;
    ppplStack_b18 = (long ***)pppplVar20;
    puStack_b10 = &stack0x00000050;
    if (uVar4 == 0xffffffff) {
      FUN_10b1616c4(pppplVar9);
    }
    else {
      ppplStack_b28 = (long ***)pppplVar9;
      (*(code *)(&PTR_FUN_110cbf6c0)[uVar4])(&ppplStack_b28,pppplVar9,ppppplVar5);
    }
  }
  return pppplVar9;
}



/* Entry: 10b162d30; end: 10b162d9b;  */

long FUN_10b162d30(long param_1,long param_2)

{
  uint uVar1;
  long lStack_28;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if (*(int *)(param_1 + 0x10) != -1 || uVar1 != 0xffffffff) {
    if (uVar1 == 0xffffffff) {
      FUN_10b1616c4(param_1);
    }
    else {
      lStack_28 = param_1;
      (*(code *)(&PTR_FUN_110cbf6c0)[uVar1])(&lStack_28,param_1,param_2);
    }
  }
  return param_1;
}



/* Entry: 10b162d9c; end: 10b162ebb;  */

undefined8 * FUN_10b162d9c(undefined8 *param_1)

{
  int extraout_w8;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  
  func_0x00010b176d78();
  if (extraout_w8 != 0) {
    func_0x00010b177524();
    uVar1 = *unaff_x19;
    unaff_x20[1] = unaff_x19[1];
    *unaff_x20 = uVar1;
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
    *(undefined4 *)(unaff_x20 + 2) = 0;
    return param_1;
  }
  func_0x00010b177960();
  func_0x00010b14e8d0();
  FUN_10b144044();
  return unaff_x19;
}



/* Entry: 10b162ebc; end: 10b162edb;  */

void FUN_10b162ebc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010b16180c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b162edc; end: 10b162f4f;  */

void FUN_10b162edc(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b162f50; end: 10b162f73;  */

void FUN_10b162f50(long param_1)

{
  func_0x00010b1750d4();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b162f74; end: 10b162f93;  */

void FUN_10b162f74(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_10b162f50();
  }
  return;
}



/* Entry: 10b162f94; end: 10b162fb7;  */

void FUN_10b162f94(void)

{
  long extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x00010b177ee8();
  FUN_10b145224();
  func_0x00010b174b2c(&PTR_FUN_110cc07f8);
  if (extraout_x8 != 0) {
    func_0x00010b174ac4();
    func_0x000107c350d8();
    FUN_10b161560();
    func_0x00010b175208();
  }
  FUN_10b141ca0(unaff_x19 + 0x18);
  FUN_10b141ca0(unaff_x20);
  return;
}



/* Entry: 10b162fb8; end: 10b163017;  */

void FUN_10b162fb8(void)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b17515c();
  func_0x00010b1765c8();
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if (uVar1 != 0xffffffff) {
    func_0x00010b1759fc((&PTR_FUN_110cbf6f0)[uVar1]);
    *(uint *)(unaff_x19 + 0x10) = uVar1;
  }
  return;
}



/* Entry: 10b163018; end: 10b163073;  */

void FUN_10b163018(long *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  int extraout_w10;
  undefined8 unaff_x30;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)*param_1;
  lVar1 = param_2[1];
  uVar3 = *param_2;
  puVar2[1] = param_2[1];
  *puVar2 = uVar3;
  if (lVar1 != 0) {
    do {
      func_0x00010b17493c(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10b163074; end: 10b1630cb;  */

void FUN_10b163074(void)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b17515c();
  func_0x00010b1765c8();
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if (uVar1 != 0xffffffff) {
    func_0x00010b1759fc((&PTR_FUN_110cbf708)[uVar1]);
    *(uint *)(unaff_x19 + 0x10) = uVar1;
  }
  return;
}



/* Entry: 10b1630cc; end: 10b1630d7;  */

void FUN_10b1630cc(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = *param_2;
  puVar1[1] = param_2[1];
  *puVar1 = uVar2;
  *param_2 = 0;
  param_2[1] = 0;
  return;
}



/* Entry: 10b1630d8; end: 10b163123;  */

void FUN_10b1630d8(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  int extraout_w10;
  
  lVar1 = *param_2;
  if ((lVar1 == 0) || (func_0x00010b175970(), lVar1 == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar2 = param_2[1];
    *param_1 = lVar1;
    param_1[1] = lVar2;
    if (lVar2 != 0) {
      do {
        func_0x00010b17493c();
      } while (extraout_w10 != 0);
    }
  }
  return;
}



/* Entry: 10b163124; end: 10b16313f;  */

void FUN_10b163124(long param_1)

{
  ulong uVar1;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x10;
  if (*(long *)(param_1 + 0x70) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    func_0x00010b163178();
    *(ulong *)(param_1 + 0x70) = uVar1;
  }
  return;
}



/* Entry: 10b163140; end: 10b163227;  */

void FUN_10b163140(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x70) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    func_0x00010b163178();
    *(ulong *)(param_1 + 0x70) = uVar1;
  }
  return;
}



/* Entry: 10b163228; end: 10b16322f;  */

void FUN_10b163228(long param_1)

{
  undefined1 uStack_11;
  
  uStack_11 = 1;
  func_0x0001003b834c(param_1 + 0x18,&uStack_11);
  return;
}



/* Entry: 10b163230; end: 10b163257;  */

undefined8 FUN_10b163230(undefined8 param_1)

{
  func_0x00010b1772d0(&PTR_FUN_110cbf720);
  return param_1;
}



/* Entry: 10b163258; end: 10b163267;  */

void FUN_10b163258(long param_1)

{
  long unaff_x19;
  undefined **ppuStack_28;
  
  param_1 = param_1 + 0x10;
  func_0x0001003b6a18();
  if (*(long *)(param_1 + 8) != 0) {
    ppuStack_28 = &PTR_DAT_1107e6938;
    func_0x000104bf336c();
    func_0x000107c60dfc(&ppuStack_28);
  }
  func_0x0001003b6c64(unaff_x19 + 0x18);
  func_0x0001003b6c64((long *)(param_1 + 8));
  return;
}



/* Entry: 10b163268; end: 10b16328b;  */

void FUN_10b163268(undefined8 *param_1)

{
  FUN_10b16328c();
  *param_1 = &PTR_DAT_1107e8958;
  return;
}



/* Entry: 10b16328c; end: 10b1632ab;  */

void FUN_10b16328c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1107e89a0;
  func_0x00010b177f74();
  return;
}



/* Entry: 10b1632ac; end: 10b1632cb;  */

long FUN_10b1632ac(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b1755f4();
  func_0x000107c27b5c();
  lVar1 = unaff_x19;
  func_0x000107c350ac();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b1632cc; end: 10b163403;  */

void FUN_10b1632cc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auStack_50 [16];
  
  FUN_10b154f80(auStack_50,*(undefined8 *)(param_1 + 0x10));
  lVar3 = *(long *)(param_1 + 0x10);
  if (*(long *)(lVar3 + 0xf8) != 0) {
    FUN_10b163404(*(undefined8 *)(lVar3 + 0xf0));
    *(undefined8 *)(lVar3 + 0xf0) = 0;
    lVar2 = *(long *)(lVar3 + 0xe8);
    for (lVar1 = 0; lVar2 != lVar1; lVar1 = lVar1 + 1) {
      *(undefined8 *)(*(long *)(lVar3 + 0xe0) + lVar1 * 8) = 0;
    }
    *(undefined8 *)(lVar3 + 0xf8) = 0;
    lVar3 = *(long *)(param_1 + 0x10);
  }
  if (*(long *)(lVar3 + 0x118) != 0) {
    uVar4 = *(ulong *)(lVar3 + 0x120);
    if (uVar4 < 0x80) {
      if (uVar4 != 0) {
        lVar1 = 0;
        for (uVar5 = 0; uVar5 != uVar4; uVar5 = uVar5 + 1) {
          if (-1 < *(char *)(*(long *)(lVar3 + 0x108) + uVar5)) {
            FUN_10b1610a0(*(long *)(lVar3 + 0x110) + lVar1);
            uVar4 = *(ulong *)(lVar3 + 0x120);
          }
          lVar1 = lVar1 + 0x20;
        }
        *(undefined8 *)(lVar3 + 0x118) = 0;
        _memset(*(undefined8 *)(lVar3 + 0x108),0x80,uVar4 + 8);
        *(undefined1 *)(*(long *)(lVar3 + 0x108) + uVar4) = 0xff;
        uVar4 = *(ulong *)(lVar3 + 0x120);
        lVar1 = 6;
        if (uVar4 != 7) {
          lVar1 = uVar4 - (uVar4 >> 3);
        }
        *(long *)(lVar3 + 0x130) = lVar1 - *(long *)(lVar3 + 0x118);
      }
    }
    else {
      FUN_10b161024(lVar3 + 0x108);
    }
  }
  FUN_10b160ee4(lVar3 + 0x138);
  func_0x000107c2798c(auStack_50);
  func_0x000107c27b68(param_1 + 0x20);
  return;
}



/* Entry: 10b163404; end: 10b163473;  */

void FUN_10b163404(long *param_1)

{
  long lVar1;
  
  while (param_1 != (long *)0x0) {
    lVar1 = (long)(param_1 + 2);
    param_1 = (long *)*param_1;
    func_0x00010b162e98(lVar1);
    func_0x00010b174f24();
  }
  return;
}



/* Entry: 10b163474; end: 10b16348b;  */

long FUN_10b163474(long param_1)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b1755f4(param_1 + 8);
  func_0x000107c27b5c();
  lVar1 = unaff_x19;
  func_0x000107c350ac();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b16348c; end: 10b1634b3;  */

undefined8 FUN_10b16348c(undefined8 param_1)

{
  func_0x00010b1772d0(&PTR_FUN_110cbf750);
  return param_1;
}



/* Entry: 10b1634b4; end: 10b1634c3;  */

void FUN_10b1634b4(long param_1)

{
  long unaff_x19;
  undefined **ppuStack_28;
  
  param_1 = param_1 + 0x10;
  func_0x0001003b6a18();
  if (*(long *)(param_1 + 8) != 0) {
    ppuStack_28 = &PTR_DAT_1107e6938;
    func_0x000104bf336c();
    func_0x000107c60dfc(&ppuStack_28);
  }
  func_0x0001003b6c64(unaff_x19 + 0x18);
  func_0x0001003b6c64((long *)(param_1 + 8));
  return;
}



/* Entry: 10b1634c4; end: 10b163517;  */

void FUN_10b1634c4(long param_1)

{
  func_0x000107c278b8();
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 10b163518; end: 10b16353b;  */

long FUN_10b163518(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b1770a4();
  FUN_10b163678();
  func_0x00010b1755f4();
  func_0x00010b1440f0();
  lVar1 = unaff_x19;
  func_0x0001005f1e70();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10b16353c; end: 10b16353f;  */

long FUN_10b16353c(long param_1)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  long alStack_40 [2];
  
  func_0x00010b174b2c(&PTR_FUN_110cbf7c0);
  if (extraout_x8 != 0) {
    func_0x00010b17478c();
    alStack_40[0] = 0;
    alStack_40[1] = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    func_0x00010b177948();
    FUN_10b163768();
    FUN_10b163794(alStack_40,auStack_50);
    func_0x00010b176530();
    func_0x00010b175250();
    lVar1 = alStack_40[0];
    func_0x00010b1772a8();
    __ZNSt13exception_ptraSERKS_(lVar1 + 0x88,auStack_68);
    lVar2 = *(long *)(lVar1 + 0x90);
    *(undefined8 *)(lVar1 + 0x90) = 0;
    __ZNSt3__15mutex6unlockEv(lVar1 + 0x48);
    if (lVar2 == 0) {
      __ZNSt3__118condition_variable10notify_allEv(lVar1 + 0x18);
    }
    else {
      func_0x00010b175150();
      func_0x00010b17555c();
      func_0x00010b1748a8();
    }
    func_0x00010b176568();
    func_0x00010b175060();
    func_0x00010b1750ac();
    func_0x00010b175208();
  }
  FUN_10b163654(param_1 + 0x18);
  FUN_10b163654();
  return param_1;
}



/* Entry: 10b163540; end: 10b1635b7;  */

undefined8 * FUN_10b163540(undefined8 *param_1)

{
  undefined8 *puVar1;
  int extraout_w9;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  
  *param_1 = &PTR_FUN_110cbf7c0;
  puVar1 = param_1;
  func_0x00010b175850();
  puVar1[3] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110cbf7e0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  func_0x00010b175e3c();
  puVar1[6] = extraout_x9;
  func_0x00010b177fc8();
  func_0x00010b175ef8();
  puVar1[0xb] = 0;
  puVar1[0xc] = extraout_x9_00;
  func_0x00010b17508c();
  func_0x00010b175a34();
  do {
    func_0x00010b175a24();
  } while (extraout_w9 != 0);
  *param_1 = &PTR_FUN_110cbf778;
  return param_1;
}



/* Entry: 10b1635b8; end: 10b1635cb;  */

void FUN_10b1635b8(void)

{
  FUN_10b163678();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1635cc; end: 10b1635cf;  */

long FUN_10b1635cc(long param_1)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  long alStack_40 [2];
  
  func_0x00010b174b2c(&PTR_FUN_110cbf7c0);
  if (extraout_x8 != 0) {
    func_0x00010b17478c();
    alStack_40[0] = 0;
    alStack_40[1] = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    func_0x00010b177948();
    FUN_10b163768();
    FUN_10b163794(alStack_40,auStack_50);
    func_0x00010b176530();
    func_0x00010b175250();
    lVar1 = alStack_40[0];
    func_0x00010b1772a8();
    __ZNSt13exception_ptraSERKS_(lVar1 + 0x88,auStack_68);
    lVar2 = *(long *)(lVar1 + 0x90);
    *(undefined8 *)(lVar1 + 0x90) = 0;
    __ZNSt3__15mutex6unlockEv(lVar1 + 0x48);
    if (lVar2 == 0) {
      __ZNSt3__118condition_variable10notify_allEv(lVar1 + 0x18);
    }
    else {
      func_0x00010b175150();
      func_0x00010b17555c();
      func_0x00010b1748a8();
    }
    func_0x00010b176568();
    func_0x00010b175060();
    func_0x00010b1750ac();
    func_0x00010b175208();
  }
  FUN_10b163654(param_1 + 0x18);
  FUN_10b163654();
  return param_1;
}



/* Entry: 10b1635d0; end: 10b1635e3;  */

void FUN_10b1635d0(void)

{
  FUN_10b163678();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1635e4; end: 10b1635e7;  */

void FUN_10b1635e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbf7e0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b1635e8; end: 10b1635fb;  */

void FUN_10b1635e8(void)

{
  FUN_10b163644();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1635fc; end: 10b163643;  */

long FUN_10b1635fc(long param_1)

{
  long unaff_x19;
  
  func_0x00010b176d88();
  if (param_1 != 0) {
    func_0x00010b174910();
  }
  func_0x00010b177274();
  func_0x00010b1775f8();
  func_0x00010b1772ec();
  if (*(char *)(unaff_x19 + 0x28) == '\x01') {
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      func_0x0001000df548();
    }
    return unaff_x19 + 0x18;
  }
  return param_1;
}



/* Entry: 10b163644; end: 10b163653;  */

void FUN_10b163644(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b163654; end: 10b163677;  */

void FUN_10b163654(long param_1)

{
  func_0x00010b1750d4();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b163678; end: 10b163767;  */

long FUN_10b163678(long param_1)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  long alStack_40 [2];
  
  func_0x00010b174b2c(&PTR_FUN_110cbf7c0);
  if (extraout_x8 != 0) {
    func_0x00010b17478c();
    alStack_40[0] = 0;
    alStack_40[1] = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    func_0x00010b177948();
    FUN_10b163768();
    FUN_10b163794(alStack_40,auStack_50);
    func_0x00010b176530();
    func_0x00010b175250();
    lVar1 = alStack_40[0];
    func_0x00010b1772a8();
    __ZNSt13exception_ptraSERKS_(lVar1 + 0x88,auStack_68);
    lVar2 = *(long *)(lVar1 + 0x90);
    *(undefined8 *)(lVar1 + 0x90) = 0;
    __ZNSt3__15mutex6unlockEv(lVar1 + 0x48);
    if (lVar2 == 0) {
      __ZNSt3__118condition_variable10notify_allEv(lVar1 + 0x18);
    }
    else {
      func_0x00010b175150();
      func_0x00010b17555c();
      func_0x00010b1748a8();
    }
    func_0x00010b176568();
    func_0x00010b175060();
    func_0x00010b1750ac();
    func_0x00010b175208();
  }
  FUN_10b163654(param_1 + 0x18);
  FUN_10b163654();
  return param_1;
}



/* Entry: 10b163768; end: 10b163793;  */

void FUN_10b163768(void)

{
  func_0x00010b174884();
  func_0x00010b1752bc();
  func_0x00010b17480c();
  func_0x00010b174da8();
  return;
}



/* Entry: 10b163794; end: 10b1637b7;  */

void FUN_10b163794(void)

{
  func_0x00010b1747a8();
  FUN_10b163654();
  return;
}



/* Entry: 10b1637b8; end: 10b163857;  */

void FUN_10b1637b8(long param_1)

{
  int extraout_w10;
  undefined1 auStack_58 [40];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)(param_1 + 0x28);
  uStack_30 = *(undefined8 *)(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    do {
      func_0x00010b17493c();
    } while (extraout_w10 != 0);
  }
  func_0x00010b177298();
  func_0x00010b17750c(auStack_58);
  func_0x00010b175a14();
  func_0x00010529fde0(&uStack_30);
  func_0x00010b1772f4();
  func_0x0001052b4284(auStack_58);
  return;
}



/* Entry: 10b163858; end: 10b1638ff;  */

void FUN_10b163858(void)

{
  undefined1 extraout_w8;
  long lVar1;
  undefined8 uStack_30;
  
  func_0x00010b174a94();
  func_0x00010b174dc8();
  FUN_10b163768();
  func_0x00010b17522c();
  FUN_10b163794();
  func_0x00010b17553c();
  func_0x00010b17552c();
  func_0x00010b1754fc();
  if (*(char *)(uStack_30 + 0x10) == '\x01') {
    func_0x00010b1751c8();
    FUN_10b163900();
  }
  else {
    func_0x00010b174c70();
    *(undefined1 *)(uStack_30 + 0x10) = extraout_w8;
  }
  lVar1 = *(long *)(uStack_30 + 0x90);
  *(undefined8 *)(uStack_30 + 0x90) = 0;
  func_0x00010b17534c();
  if (lVar1 == 0) {
    __ZNSt3__118condition_variable10notify_allEv(uStack_30 + 0x18);
  }
  else {
    func_0x00010b174f84();
    func_0x00010b174a10();
    func_0x00010b1747fc();
  }
  func_0x00010b175250();
  return;
}



/* Entry: 10b163900; end: 10b16394b;  */

void FUN_10b163900(void)

{
  func_0x00010b1747a8();
  func_0x0001052b4284();
  return;
}



/* Entry: 10b16394c; end: 10b163977;  */

long FUN_10b16394c(long param_1)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b1770a4(param_1 + 8);
  FUN_10b163678();
  func_0x00010b1755f4();
  func_0x00010b1440f0();
  lVar1 = unaff_x19;
  func_0x0001005f1e70();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10b163978; end: 10b16399f;  */

void FUN_10b163978(undefined8 *param_1)

{
  FUN_10b1639a0();
  *param_1 = &PTR_FUN_110cbf848;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  return;
}


