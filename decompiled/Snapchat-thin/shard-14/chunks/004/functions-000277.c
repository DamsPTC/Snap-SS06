/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b1e88b8; end: 10b1e8917;  */

undefined8 FUN_10b1e88b8(undefined8 *param_1)

{
  code *extraout_x8;
  code *pcVar1;
  undefined8 *puStack_28;
  
  puStack_28 = param_1;
  __ZNSt3__119__thread_local_dataEv();
  *param_1 = 0;
  func_0x000107c28450();
  pcVar1 = (code *)param_1[1];
  if ((param_1[2] & 1) != 0) {
    func_0x00010b1ee478(param_1[3] + ((long)param_1[2] >> 1));
    pcVar1 = extraout_x8;
  }
  (*pcVar1)();
  FUN_10b1e8918(&puStack_28);
  return 0;
}



/* Entry: 10b1e8918; end: 10b1e8973;  */

void FUN_10b1e8918(long param_1)

{
  func_0x00010b1eb114();
  if (param_1 != 0) {
    func_0x000107c28454();
    __ZdlPv();
  }
  return;
}



/* Entry: 10b1e8974; end: 10b1e8977;  */

void FUN_10b1e8974(long *param_1)

{
  *param_1 = (long)&PTR_FUN_110cc4730;
  func_0x00010b1eca48(param_1[0x16]);
  *param_1 = (long)(PTR___ZTVNSt3__117__assoc_sub_stateE_110346b28 + 0x10);
  func_0x000107c60d50(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  func_0x000107c60c18(param_1 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__114__shared_countD2Ev_110346530)(param_1);
  return;
}



/* Entry: 10b1e8978; end: 10b1e898b;  */

void FUN_10b1e8978(void)

{
  FUN_10b1e89f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1e898c; end: 10b1e89ef;  */

void FUN_10b1e898c(void)

{
  func_0x00010b1eda84();
  func_0x00010b1eb918();
  FUN_10b1e883c();
  func_0x00010b1ebf9c();
  return;
}



/* Entry: 10b1e89f0; end: 10b1e8a53;  */

void FUN_10b1e89f0(long *param_1)

{
  *param_1 = (long)&PTR_FUN_110cc4730;
  func_0x00010b1eca48(param_1[0x16]);
  *param_1 = (long)(PTR___ZTVNSt3__117__assoc_sub_stateE_110346b28 + 0x10);
  func_0x000107c60d50(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  func_0x000107c60c18(param_1 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__114__shared_countD2Ev_110346530)(param_1);
  return;
}



/* Entry: 10b1e8a54; end: 10b1e8abb;  */

void FUN_10b1e8a54(undefined8 param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 *puStack_30;
  
  func_0x00010b1eaeac();
  func_0x00010b1ecc3c();
  FUN_10b1e8abc();
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  *puStack_30 = &PTR_FUN_110cc4778;
  puStack_30[3] = *param_2;
  *param_2 = 0;
  func_0x00010b1eb0bc();
  func_0x00010b1e8b28();
  func_0x00010b1eaddc(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x00010b1ed37c();
  FUN_10b1e8adc();
  func_0x00010b1ed010();
  return;
}



/* Entry: 10b1e8abc; end: 10b1e8adb;  */

void FUN_10b1e8abc(void)

{
  func_0x00010b1ed37c();
  FUN_10b1e8adc();
  func_0x00010b1ed010();
  return;
}



/* Entry: 10b1e8adc; end: 10b1e8af7;  */

void FUN_10b1e8adc(undefined8 *param_1,ulong param_2)

{
  if (param_2 >> 0x3b == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 5);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_110cc4778;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b1e8af8; end: 10b1e8afb;  */

void FUN_10b1e8af8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc4778;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b1e8afc; end: 10b1e8b0f;  */

void FUN_10b1e8afc(void)

{
  func_0x00010b1e8b1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1e8b10; end: 10b1e8b37;  */

void FUN_10b1e8b10(long param_1)

{
  long extraout_x9;
  int extraout_w11;
  
  param_1 = param_1 + 0x18;
  func_0x00010b1eb65c();
  if (param_1 != 0) {
    do {
      func_0x00010b1eb104();
    } while (extraout_w11 != 0);
    if (extraout_x9 == 0) {
      func_0x00010b1eb134();
    }
  }
  return;
}



/* Entry: 10b1e8b38; end: 10b1e8b8f;  */

void FUN_10b1e8b38(long param_1)

{
  func_0x00010b1eb954();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b1e8b90; end: 10b1e8b93;  */

void FUN_10b1e8b90(long *param_1)

{
  *param_1 = (long)&PTR_FUN_110cc47c8;
  FUN_10b1e8b38(param_1 + 0x15);
  *param_1 = (long)(PTR___ZTVNSt3__117__assoc_sub_stateE_110346b28 + 0x10);
  func_0x000107c60d50(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  func_0x000107c60c18(param_1 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__114__shared_countD2Ev_110346530)(param_1);
  return;
}



/* Entry: 10b1e8b94; end: 10b1e8ba7;  */

void FUN_10b1e8b94(void)

{
  FUN_10b1e8c3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1e8ba8; end: 10b1e8bcf;  */

void FUN_10b1e8ba8(long *param_1)

{
  __ZNSt3__117__assoc_sub_state4waitEv();
  if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
    FUN_10b124b28(param_1 + 0x12);
  }
                    /* WARNING: Could not recover jumptable at 0x00010b1e8808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 10b1e8bd0; end: 10b1e8c3b;  */

void FUN_10b1e8bd0(long param_1)

{
  undefined1 auStack_38 [24];
  
  FUN_10b1e8c68(auStack_38,**(undefined8 **)(param_1 + 0xa8));
  func_0x00010b1eb918();
  FUN_10b1e883c();
  func_0x00010b1ebf9c();
  return;
}



/* Entry: 10b1e8c3c; end: 10b1e8c67;  */

void FUN_10b1e8c3c(long *param_1)

{
  *param_1 = (long)&PTR_FUN_110cc47c8;
  FUN_10b1e8b38(param_1 + 0x15);
  *param_1 = (long)(PTR___ZTVNSt3__117__assoc_sub_stateE_110346b28 + 0x10);
  func_0x000107c60d50(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  func_0x000107c60c18(param_1 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__114__shared_countD2Ev_110346530)(param_1);
  return;
}



/* Entry: 10b1e8c68; end: 10b1e8d8b;  */

void FUN_10b1e8c68(void)

{
  long lVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x21;
  long lVar4;
  long in_stack_00000038;
  
  func_0x00010b1ee684();
  func_0x00010b1ebbb0();
  func_0x00010b1ebed4();
  __ZNSt3__15mutex4lockEv();
  __ZNSt3__117__assoc_sub_state10__sub_waitERNS_11unique_lockINS_5mutexEEE();
  lVar4 = *(long *)(unaff_x21 + 0x10);
  func_0x00010b1eb730();
  if (lVar4 != 0) {
    __ZNSt13exception_ptrC1ERKS_();
    __ZSt17rethrow_exceptionSt13exception_ptr();
LAB_10b1e8d50:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10b1e8d54);
    (*pcVar2)();
  }
  func_0x00010b1ebf84();
  func_0x00010b1ec2c8();
  lVar4 = *(long *)(unaff_x21 + 0x90);
  lVar1 = *(long *)(unaff_x21 + 0x98);
  func_0x00010b1ed4e4();
  if (!(bool)in_ZR) {
    lVar3 = extraout_x8 / 0x278;
    func_0x00010b1ed5f0();
    if ((bool)in_CY) {
      FUN_10b1da414();
      goto LAB_10b1e8d50;
    }
    FUN_10b1da420();
    *unaff_x19 = lVar3;
    unaff_x19[1] = lVar3;
    func_0x00010b1eb35c(0x278);
    lVar3 = 0;
    for (; lVar4 != lVar1; lVar4 = lVar4 + 0x278) {
      FUN_10b12394c(lVar3,lVar4);
      lVar3 = in_stack_00000038 + 0x278;
      in_stack_00000038 = lVar3;
    }
    func_0x00010b1ed534();
    func_0x00010b1da454();
    unaff_x19[1] = lVar3;
  }
  func_0x00010b1da4cc();
  return;
}



/* Entry: 10b1e8d8c; end: 10b1e8deb;  */

undefined8 FUN_10b1e8d8c(undefined8 *param_1)

{
  code *extraout_x8;
  code *pcVar1;
  undefined8 *puStack_28;
  
  puStack_28 = param_1;
  __ZNSt3__119__thread_local_dataEv();
  *param_1 = 0;
  func_0x000107c28450();
  pcVar1 = (code *)param_1[1];
  if ((param_1[2] & 1) != 0) {
    func_0x00010b1ee478(param_1[3] + ((long)param_1[2] >> 1));
    pcVar1 = extraout_x8;
  }
  (*pcVar1)();
  FUN_10b1e8dec(&puStack_28);
  return 0;
}



/* Entry: 10b1e8dec; end: 10b1e8e47;  */

void FUN_10b1e8dec(long param_1)

{
  func_0x00010b1eb114();
  if (param_1 != 0) {
    func_0x000107c28454();
    __ZdlPv();
  }
  return;
}



/* Entry: 10b1e8e48; end: 10b1e8e4b;  */

void FUN_10b1e8e48(long *param_1)

{
  *param_1 = (long)&PTR_FUN_110cc4810;
  FUN_10b1e8b38(param_1 + 0x15);
  *param_1 = (long)(PTR___ZTVNSt3__117__assoc_sub_stateE_110346b28 + 0x10);
  func_0x000107c60d50(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  func_0x000107c60c18(param_1 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__114__shared_countD2Ev_110346530)(param_1);
  return;
}



/* Entry: 10b1e8e4c; end: 10b1e8e5f;  */

void FUN_10b1e8e4c(void)

{
  FUN_10b1e8ecc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1e8e60; end: 10b1e8ecb;  */

void FUN_10b1e8e60(long param_1)

{
  undefined1 auStack_38 [24];
  
  FUN_10b1e8c68(auStack_38,**(undefined8 **)(param_1 + 0xa8));
  func_0x00010b1eb918();
  FUN_10b1e883c();
  func_0x00010b1ebf9c();
  return;
}



/* Entry: 10b1e8ecc; end: 10b1e8f2b;  */

void FUN_10b1e8ecc(long *param_1)

{
  *param_1 = (long)&PTR_FUN_110cc4810;
  FUN_10b1e8b38(param_1 + 0x15);
  *param_1 = (long)(PTR___ZTVNSt3__117__assoc_sub_stateE_110346b28 + 0x10);
  func_0x000107c60d50(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  func_0x000107c60c18(param_1 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__114__shared_countD2Ev_110346530)(param_1);
  return;
}



/* Entry: 10b1e8f2c; end: 10b1e957b;  */

void FUN_10b1e8f2c(long param_1)

{
  ulong uVar1;
  undefined8 ****ppppuVar2;
  ulong uVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined1 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 extraout_x8;
  long extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  undefined8 ****ppppuVar10;
  undefined8 extraout_x9;
  undefined8 ****extraout_x9_00;
  int extraout_w11;
  long *unaff_x19;
  long lVar11;
  long *plVar12;
  undefined8 ****ppppuVar13;
  undefined8 ****ppppuVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 ***pppuStack_4d0;
  undefined8 **ppuStack_4c8;
  undefined8 **ppuStack_4c0;
  undefined8 ***pppuStack_4b8;
  long *plStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined1 uStack_35c;
  undefined1 uStack_358;
  undefined1 uStack_354;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_338;
  undefined1 uStack_330;
  long lStack_328;
  ulong uStack_2f8;
  ulong uStack_2f0;
  ulong uStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 uStack_2d0;
  long *plStack_2c8;
  long *plStack_2c0;
  long *plStack_2b8;
  undefined1 uStack_2b0;
  long lStack_2a0;
  long lStack_298;
  undefined1 auStack_290 [16];
  long lStack_280;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  func_0x00010b1ec024();
  func_0x00010b1eaeac();
  plVar12 = *(long **)(param_1 + 0x10);
  lVar11 = *plVar12;
  puStack_2d8 = (undefined8 *)0x0;
  puStack_2e0 = (undefined8 *)0x0;
  uStack_2d0 = 0;
  uStack_10 = extraout_x8;
  func_0x00010b1eca58(auStack_290);
  FUN_10b1b8c30(lStack_280,plVar12 + 1);
  plVar12 = (long *)(lStack_280 + 0x118);
  while (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0) {
    FUN_10b1d9650(&puStack_2e0,plVar12[5],plVar12[6]);
  }
  func_0x000107c2798c(auStack_290);
  puVar4 = puStack_2d8;
  puVar17 = puStack_2e0;
  uStack_2f8 = 0;
  uStack_2f0 = 0;
  uStack_2e8 = 0;
  if ((long)puStack_2d8 - (long)puStack_2e0 != 0) {
    uVar8 = (long)puStack_2d8 - (long)puStack_2e0 >> 4;
    if (0x66666666666666 < uVar8) {
      func_0x00010b1d9734();
      goto LAB_10b1e9468;
    }
    FUN_10b1d9740(auStack_290,uVar8,0,&uStack_2e8);
    FUN_10b1d979c(&uStack_2f8,auStack_290);
    FUN_10b1d9864(auStack_290);
  }
  ppppuVar14 = &pppuStack_4d0;
  for (; puVar17 != puVar4; puVar17 = puVar17 + 2) {
    FUN_10b1bebd0(&uStack_338,*puVar17);
    uVar6 = *(char *)(lVar11 + 0x76) == '\x01';
    if ((bool)uVar6) {
      uStack_348 = puVar17[1];
      uStack_350 = *puVar17;
      if (puVar17[1] != 0) {
        do {
          func_0x00010b1eaf98();
        } while (extraout_w11 != 0);
      }
    }
    lVar7 = lStack_328;
    uStack_338 = 0;
    uStack_330 = 0;
    uStack_350 = 0;
    uStack_348 = 0;
    func_0x00010b1de708(&uStack_350);
    func_0x000107c2798c(&uStack_338);
    if ((((*(byte *)(lVar7 + 0x160) & 1) == 0) && (func_0x00010b1ec3bc(), (bool)uVar6)) &&
       (*(long *)(extraout_x8_00 + 0x38) < 1)) {
      lVar15 = *(long *)(extraout_x8_00 + 0x48);
      func_0x00010b1ec6e4(lVar15,*(undefined8 *)(extraout_x8_00 + 0x50));
      if (lVar15 != 0) {
        func_0x00010b1ee4e4();
        uStack_4a8 = 0;
        plStack_4b0 = (long *)0x0;
        uStack_498 = 0;
        uStack_4a0 = 0;
        uStack_480 = 0;
        uStack_478 = 0;
        uStack_488 = 0;
        uStack_468 = 0;
        uStack_460 = 0;
        func_0x00010b1ed608();
        uStack_35c = 0;
        uStack_358 = 0;
        uStack_354 = 0;
        func_0x00010b1ee018(auStack_290);
        uVar8 = uStack_2f0;
        uStack_18 = *(undefined8 *)(lVar7 + 0x60);
        if (uStack_2f0 < uStack_2e8) {
          func_0x00010b1d98e4(uStack_2f0,auStack_290);
          uVar8 = uVar8 + 0x280;
        }
        else {
          if (0x66666666666666 < (long)(uStack_2f0 - uStack_2f8) / 0x280 + 1U) goto LAB_10b1e945c;
          func_0x00010b1eb414((long)(uStack_2e8 - uStack_2f8) / 0x280);
          uVar16 = extraout_x9;
          if (0x33333333333332 < extraout_x8_01) {
            uVar16 = 0x66666666666666;
          }
          FUN_10b1d9740(&plStack_2c8,uVar16);
          func_0x00010b1d98e4(plStack_2b8,auStack_290);
          plStack_2b8 = plStack_2b8 + 0x50;
          FUN_10b1d979c(&uStack_2f8,&plStack_2c8);
          uVar8 = uStack_2f0;
          FUN_10b1d9864(&plStack_2c8);
        }
        uStack_2f0 = uVar8;
        func_0x00010b1ece4c();
        lVar15 = uStack_2f0 - 0x280;
        lVar7 = lVar15;
        FUN_10b1c41c0();
        if ((lVar7 == 0) || (*(long *)(lVar7 + 0x80) == 0)) {
          uVar16 = *(undefined8 *)(lVar11 + 0x238);
          FUN_10b123d58(auStack_290,"message",7,&UNK_10f731bfd);
          func_0x00010b1eb654(&plStack_2c8,auStack_290);
          func_0x00010b1eb040(uVar16);
LAB_10b1e9230:
          FUN_10b120998(&plStack_2c8);
          func_0x00010b1eb5ac(auStack_290);
        }
        else {
          FUN_10b1c4ae8();
          if ((lVar15 == 0) || (*(long *)(lVar15 + 0x28) == 0)) {
            uVar16 = *(undefined8 *)(lVar11 + 0x238);
            FUN_10b123d58(auStack_290,"message",7,&UNK_10f731c1d);
            func_0x00010b1eb654(&plStack_2c8,auStack_290);
            func_0x00010b1eb040(uVar16);
            goto LAB_10b1e9230;
          }
        }
        FUN_10b1213b8(&pppuStack_4d0);
      }
    }
    func_0x00010b1d3e60(&stack0xfffffffffffffce0);
  }
  if (uStack_2f8 != uStack_2f0) {
    func_0x00010b1ebebc();
    FUN_10b1d9908();
  }
  uVar3 = uStack_2f0;
  uVar8 = uStack_2f8;
  func_0x00010b1ee354();
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  plVar12 = unaff_x19 + 2;
  *plVar12 = 0;
  for (; uVar6 = uVar8 == uVar3, !(bool)uVar6; uVar8 = uVar8 + 0x280) {
    uVar9 = uVar8;
    FUN_10b121c1c(auStack_290);
    uVar1 = unaff_x19[1];
    if (uVar1 < (ulong)unaff_x19[2]) {
      FUN_10b121c1c(uVar1,auStack_290);
      lVar7 = uVar1 + 0x278;
    }
    else {
      lVar11 = uVar1 - *unaff_x19;
      if (ppppuVar14 < (undefined8 ****)(lVar11 / 0x278 + 1U)) {
        FUN_10b1da414();
        goto LAB_10b1e9468;
      }
      func_0x00010b1eb414((unaff_x19[2] - *unaff_x19) / 0x278);
      ppppuVar10 = extraout_x9_00;
      if (0x33d91d2a2067b1 < extraout_x8_02) {
        ppppuVar10 = ppppuVar14;
      }
      plStack_4b0 = plVar12;
      if (ppppuVar10 == (undefined8 ****)0x0) {
        ppppuVar10 = (undefined8 ****)0x0;
        uVar9 = 0;
      }
      else {
        FUN_10b1da420();
      }
      lVar11 = (long)ppppuVar10 + lVar11;
      pppuStack_4d0 = ppppuVar10;
      ppuStack_4c8 = (undefined8 **)lVar11;
      ppuStack_4c0 = (undefined8 **)lVar11;
      pppuStack_4b8 = ppppuVar10 + uVar9 * 0x4f;
      FUN_10b121c1c(lVar11,auStack_290);
      lVar7 = lVar11 + 0x278;
      ppppuVar13 = (undefined8 ****)*unaff_x19;
      ppppuVar2 = (undefined8 ****)unaff_x19[1];
      lVar11 = lVar11 + (((long)ppppuVar2 - (long)ppppuVar13) / -0x278) * 0x278;
      plStack_2c0 = &lStack_2a0;
      plStack_2b8 = &lStack_298;
      uStack_2b0 = 0;
      lStack_298 = lVar11;
      ppuStack_4c0 = (undefined8 **)lVar7;
      plStack_2c8 = plVar12;
      lStack_2a0 = lVar11;
      for (ppppuVar14 = ppppuVar13; ppppuVar14 != ppppuVar2; ppppuVar14 = ppppuVar14 + 0x4f) {
        FUN_10b12394c(lStack_298,ppppuVar14);
        lStack_298 = lStack_298 + 0x278;
      }
      uStack_2b0 = 1;
      for (; ppppuVar13 != ppppuVar2; ppppuVar13 = ppppuVar13 + 0x4f) {
        func_0x00010b121af0(ppppuVar13);
      }
      func_0x00010b1da454(&plStack_2c8);
      pppuStack_4d0 = (undefined8 ***)*unaff_x19;
      *unaff_x19 = lVar11;
      unaff_x19[1] = lVar7;
      pppuStack_4b8 = (undefined8 ***)unaff_x19[2];
      unaff_x19[2] = (long)(ppppuVar10 + uVar9 * 0x4f);
      ppuStack_4c8 = pppuStack_4d0;
      ppuStack_4c0 = pppuStack_4d0;
      func_0x00010b1da48c(&pppuStack_4d0);
      func_0x00010b1ee354();
    }
    unaff_x19[1] = lVar7;
    func_0x00010b1ece4c();
  }
  func_0x00010b1da4cc(&stack0xfffffffffffffce0);
  func_0x00010b1cf764(&uStack_2f8);
  func_0x00010b1da4f4(&puStack_2e0);
  func_0x00010b1eaddc(uStack_10);
  if ((bool)uVar6) {
    return;
  }
  ___stack_chk_fail();
LAB_10b1e945c:
  func_0x00010b1d9734();
LAB_10b1e9468:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10b1e946c);
  (*pcVar5)();
}



/* Entry: 10b1e957c; end: 10b1e959b;  */

void FUN_10b1e957c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b1cf73c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1e959c; end: 10b1e959f;  */

void FUN_10b1e959c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b1e95a0; end: 10b1e9603;  */

void FUN_10b1e95a0(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 uStack_30;
  
  func_0x00010b1eaeac();
  func_0x00010b1ecc3c();
  FUN_10b1e9604();
  FUN_10b1e964c(uStack_30,param_2);
  func_0x00010b1eb0bc();
  func_0x00010b1e96bc();
  func_0x00010b1eaddc(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b1eb5a0();
  func_0x00010b1e96bc();
  func_0x00010b1eb590();
  func_0x00010b1ed37c();
  FUN_10b1e9624();
  func_0x00010b1ed010();
  return;
}



/* Entry: 10b1e9604; end: 10b1e9623;  */

void FUN_10b1e9604(void)

{
  func_0x00010b1ed37c();
  FUN_10b1e9624();
  func_0x00010b1ed010();
  return;
}



/* Entry: 10b1e9624; end: 10b1e964b;  */

void FUN_10b1e9624(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  if ((undefined8 *)0x555555555555555 < param_2) {
    func_0x000104bd35f4();
    *param_1 = &PTR_DAT_110cc4870;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = &PTR_DAT_110cc4cc0;
    lVar1 = param_2[1];
    uVar2 = *param_2;
    param_1[5] = param_2[1];
    param_1[4] = uVar2;
    if (lVar1 != 0) {
      do {
        func_0x00010b1eb124();
      } while (extraout_w10 != 0);
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)((long)param_2 * 0x30);
  return;
}



/* Entry: 10b1e964c; end: 10b1e9693;  */

void FUN_10b1e964c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  *param_1 = &PTR_DAT_110cc4870;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = &PTR_DAT_110cc4cc0;
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[5] = param_2[1];
  param_1[4] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010b1eb124();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10b1e9694; end: 10b1e96a7;  */

void FUN_10b1e9694(void)

{
  func_0x00010b1e96b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1e96a8; end: 10b1e96cb;  */

void FUN_10b1e96a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b1eb6a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b1e96cc; end: 10b1e96ef;  */

void FUN_10b1e96cc(long param_1)

{
  func_0x00010b1eb954();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b1e96f0; end: 10b1e96fb;  */

void FUN_10b1e96f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc48c0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b1e96fc; end: 10b1e970f;  */

void FUN_10b1e96fc(void)

{
  FUN_10b1e96f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1e9710; end: 10b1e9737;  */

void FUN_10b1e9710(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b1eb6a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b1e9738; end: 10b1e99a3;  */

undefined1  [16] FUN_10b1e9738(long param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long lVar6;
  long extraout_x8_06;
  ulong extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  ulong uVar7;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  long extraout_x9_03;
  ulong extraout_x9_04;
  ulong extraout_x9_05;
  ulong uVar8;
  long *extraout_x10;
  long *plVar9;
  long *extraout_x10_00;
  ulong extraout_x10_01;
  long extraout_x11;
  ulong extraout_x11_00;
  ulong extraout_x11_01;
  long *extraout_x12;
  long *extraout_x12_00;
  long *extraout_x12_01;
  ulong extraout_x13;
  ulong extraout_x13_00;
  long unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong unaff_x24;
  undefined1 auVar10 [16];
  
  func_0x00010b1ed2f4();
  func_0x00010b1ed594();
  if (unaff_x24 != 0) {
    func_0x00010b1ec098();
    if ((bool)in_ZR) {
      unaff_x21 = extraout_x8 & unaff_x22;
      in_ZR = true;
    }
    else {
      in_NG = (long)(unaff_x24 - unaff_x22) < 0;
      in_ZR = unaff_x24 == unaff_x22;
      unaff_x21 = unaff_x22;
      if (unaff_x24 <= unaff_x22) {
        uVar8 = 0;
        if (unaff_x24 != 0) {
          uVar8 = unaff_x22 / unaff_x24;
        }
        unaff_x21 = unaff_x22 - uVar8 * unaff_x24;
      }
    }
    func_0x00010b1ee190();
    uVar8 = extraout_x8_00;
    if (unaff_x20 != (long *)0x0) {
      do {
        while( true ) {
          unaff_x20 = (long *)*unaff_x20;
          if (unaff_x20 == (long *)0x0) goto LAB_10b1e97cc;
          uVar7 = unaff_x20[1];
          if (uVar7 != unaff_x22) break;
          in_NG = (int)unaff_x20[2] - (int)unaff_x22 < 0;
          in_ZR = 0;
          if ((int)unaff_x20[2] == (int)unaff_x22) {
            uVar5 = 0;
            goto LAB_10b1e9984;
          }
        }
        if ((unaff_x24 & uVar8) == 0) {
          uVar7 = uVar7 & uVar8;
        }
        else if (unaff_x24 <= uVar7) {
          func_0x00010b1ec08c();
          uVar8 = extraout_x8_01;
          uVar7 = extraout_x9;
        }
        in_NG = (long)(uVar7 - unaff_x21) < 0;
        in_ZR = uVar7 == unaff_x21;
      } while ((bool)in_ZR);
    }
  }
LAB_10b1e97cc:
  plVar1 = (long *)(unaff_x19 + 0x10);
  func_0x00010b1ec004();
  func_0x00010b1eb61c();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  func_0x00010b1eb0f0();
  if ((unaff_x24 != 0) && (func_0x00010b1eb5ec(), !(bool)in_NG)) goto LAB_10b1e9938;
  func_0x00010b1eaff0();
  uVar4 = unaff_x24 == 3;
  func_0x00010b1eaeec();
  func_0x00010b1ee224();
  if ((bool)uVar4) {
    unaff_x21 = 2;
  }
  else if ((unaff_x21 & extraout_x8_02) != 0) {
    func_0x00010b1ecfa4();
    func_0x00010b1ed2dc();
  }
  uVar4 = unaff_x21 == unaff_x24;
  if (unaff_x24 < unaff_x21) {
LAB_10b1e9828:
    if (unaff_x21 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10b1e9998);
      (*pcVar2)();
    }
    __Znwm(unaff_x21 << 3);
    FUN_10b1e99a4();
    func_0x00010b1ec590();
    uVar8 = extraout_x9_00;
    while (uVar4 = unaff_x21 == uVar8, !(bool)uVar4) {
      func_0x00010b1ebda4();
      uVar8 = extraout_x9_01;
    }
    unaff_x24 = unaff_x21;
    if (*plVar1 != 0) {
      func_0x00010b1eb8ac();
      func_0x00010b1ec544();
      *(long **)(extraout_x8_03 + extraout_x11 * 8) = plVar1;
      plVar9 = extraout_x10;
      while (*plVar9 != 0) {
        func_0x00010b1ee368();
        lVar6 = extraout_x8_04;
        plVar9 = extraout_x12;
        uVar8 = extraout_x11_00;
        if ((bool)uVar4) {
          uVar7 = extraout_x13 & extraout_x9_02;
        }
        else {
          uVar7 = extraout_x13;
          if (unaff_x21 <= extraout_x13) {
            func_0x00010b1ee20c();
            lVar6 = extraout_x8_05;
            uVar8 = extraout_x11_01;
            plVar9 = extraout_x12_00;
            uVar7 = extraout_x13_00;
          }
        }
        uVar4 = uVar7 == uVar8;
        if (!(bool)uVar4) {
          if (*(long *)(lVar6 + uVar7 * 8) == 0) {
            func_0x00010b1ebf54();
            plVar9 = extraout_x12_01;
          }
          else {
            func_0x00010b1ead88();
            plVar9 = extraout_x10_00;
          }
        }
      }
    }
  }
  else if (unaff_x21 < unaff_x24) {
    func_0x00010b1eafd8();
    uVar3 = 2 < unaff_x24;
    uVar4 = unaff_x24 == 3;
    if (((bool)uVar3) && (func_0x00010b1ed1a0(), extraout_x8_06 == 0)) {
      func_0x00010b1ead68();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    func_0x00010b1ed3f4();
    if ((bool)uVar3) {
      unaff_x24 = *(ulong *)(unaff_x19 + 8);
    }
    else {
      if (unaff_x21 != 0) goto LAB_10b1e9828;
      func_0x00010b1ed31c();
      FUN_10b1e99a4();
      func_0x00010b1ed5e4();
    }
  }
  func_0x00010b1ec098();
  if ((bool)uVar4) {
    in_ZR = 1;
    unaff_x21 = extraout_x8_07 & unaff_x22;
  }
  else {
    in_ZR = unaff_x24 == unaff_x22;
    unaff_x21 = unaff_x22;
    if (unaff_x24 <= unaff_x22) {
      uVar8 = 0;
      if (unaff_x24 != 0) {
        uVar8 = unaff_x22 / unaff_x24;
      }
      unaff_x21 = unaff_x22 - uVar8 * unaff_x24;
    }
  }
LAB_10b1e9938:
  func_0x00010b1ee578();
  if (extraout_x9_03 == 0) {
    func_0x00010b1eb7b8();
    *(long **)(extraout_x8_08 + unaff_x21 * 8) = plVar1;
    if (*unaff_x20 != 0) {
      func_0x00010b1eb5bc();
      lVar6 = extraout_x8_09;
      if ((bool)in_ZR) {
        uVar8 = extraout_x9_04 & extraout_x10_01;
      }
      else {
        uVar8 = extraout_x9_04;
        if (unaff_x24 <= extraout_x9_04) {
          func_0x00010b1ec08c();
          lVar6 = extraout_x8_10;
          uVar8 = extraout_x9_05;
        }
      }
      *(long **)(lVar6 + uVar8 * 8) = unaff_x20;
    }
  }
  else {
    func_0x00010b1eb5cc();
  }
  func_0x00010b1eb1cc();
  FUN_10b1e99bc();
  uVar5 = 1;
LAB_10b1e9984:
  auVar10._8_8_ = uVar5;
  auVar10._0_8_ = unaff_x20;
  return auVar10;
}



/* Entry: 10b1e99a4; end: 10b1e99bb;  */

void FUN_10b1e99a4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1e99bc; end: 10b1e99ef;  */

void FUN_10b1e99bc(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x00010b1eb558();
  if (unaff_x20 != 0) {
    func_0x00010b1ec8c8();
    if ((bool)in_ZR) {
      func_0x00010b125864(unaff_x20 + 0x18);
    }
    func_0x00010b1eb70c();
  }
  return;
}



/* Entry: 10b1e99f0; end: 10b1e99f3;  */

void FUN_10b1e99f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc4960;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b1e99f4; end: 10b1e9a07;  */

void FUN_10b1e99f4(void)

{
  FUN_10b1e9a4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1e9a08; end: 10b1e9a4b;  */

void FUN_10b1e9a08(long param_1)

{
  func_0x000107c281bc(param_1 + 0x90);
  if ((*(char *)(param_1 + 0x88) == '\x01') && ((*(byte *)(param_1 + 0x80) & 1) == 0)) {
    __ZNSt13exception_ptrD1Ev(param_1 + 0x58);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutexD1Ev_110346598)(param_1 + 0x18);
  return;
}



/* Entry: 10b1e9a4c; end: 10b1e9a5b;  */

void FUN_10b1e9a4c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1e9a5c; end: 10b1e9a9b;  */

bool FUN_10b1e9a5c(long param_1)

{
  bool bVar1;
  
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    bVar1 = *(long *)(param_1 + 0xa0) != 0;
    func_0x00010b1ebf94();
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 10b1e9a9c; end: 10b1e9d5b;  */

void FUN_10b1e9a9c(long *param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined8 *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined1 uStack_48;
  undefined8 *puStack_40;
  long lStack_38;
  
  uStack_d8 = param_2;
  lStack_d0 = param_3;
  if (param_3 != 0) {
    do {
      func_0x00010b1eb124();
    } while (extraout_w10 != 0);
    do {
      func_0x00010b1eb124();
    } while (extraout_w10_00 != 0);
  }
  puVar3 = (undefined8 *)*param_1;
  uStack_c8 = param_2;
  lStack_c0 = param_3;
  func_0x00010b1edce4();
  puStack_40 = (undefined8 *)0x0;
  lStack_38 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  FUN_10b1dc30c(&puStack_50,&uStack_c8,&uStack_60);
  FUN_10b1dc35c(&puStack_40,&puStack_50);
  FUN_10b1dc1e0(&puStack_50);
  FUN_10b1dc1e0(&uStack_60);
  puVar5 = puStack_40;
  puStack_50 = puStack_40 + 0xc;
  uStack_48 = 1;
  __ZNSt3__15mutex4lockEv();
  puStack_70 = puVar5;
  lStack_68 = lStack_38;
  if (lStack_38 != 0) {
    do {
      func_0x00010b1eb124();
    } while (extraout_w10_01 != 0);
  }
  while (puVar2 = puVar5, FUN_10b1e9a5c(), ((ulong)puVar2 & 1) == 0) {
    __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(puVar5 + 6,&puStack_50);
  }
  FUN_10b1dc1e0(&puStack_70);
  if (puVar5[0x14] != 0) {
    __ZNSt13exception_ptrC1ERKS_(auStack_78);
    __ZSt17rethrow_exceptionSt13exception_ptr();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10b1e9c54);
    (*pcVar1)();
  }
  uStack_98 = puVar5[1];
  uStack_a0 = *puVar5;
  uStack_88 = puVar5[3];
  uStack_90 = puVar5[2];
  uStack_80 = puVar5[4];
  func_0x000107c2798c(&puStack_50);
  func_0x00010b1ed0d8();
  lVar4 = *param_1;
  if (*(char *)(lVar4 + 0x70) == '\x01') {
    if (*(char *)(lVar4 + 0x68) == '\x01') {
      func_0x00010b1ec4f0();
    }
    else {
      __ZNSt13exception_ptrD1Ev(lVar4 + 0x40);
      func_0x00010b1ec4f0();
      *(undefined1 *)(lVar4 + 0x68) = 1;
    }
  }
  else {
    func_0x00010b1ec4f0();
    *(undefined1 *)(lVar4 + 0x68) = 1;
    *(undefined1 *)(lVar4 + 0x70) = 1;
  }
  lVar4 = *param_1;
  puVar5 = *(undefined8 **)(lVar4 + 0x78);
  uStack_a8 = *(undefined8 *)(lVar4 + 0x88);
  uStack_b0 = *(undefined8 *)(lVar4 + 0x80);
  *(undefined8 *)(lVar4 + 0x80) = 0;
  *(undefined8 *)(lVar4 + 0x88) = 0;
  *(undefined8 *)(lVar4 + 0x78) = 0;
  puStack_b8 = puVar5;
  func_0x00010b1ec5c0();
  func_0x00010b1ee56c();
  for (; puVar5 != puVar3; puVar5 = puVar5 + 1) {
    (**(code **)*puVar5)();
  }
  func_0x00010b1ed270();
  FUN_10b1dc1e0(&uStack_c8);
  FUN_10b1dc1e0(&uStack_d8);
  func_0x000107c27b68(param_1[2]);
  return;
}



/* Entry: 10b1e9d5c; end: 10b1e9d5f;  */

undefined8 * FUN_10b1e9d5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc49b0;
  func_0x00010b1e9de8(param_1 + 1);
  return param_1;
}



/* Entry: 10b1e9d60; end: 10b1e9d73;  */

void FUN_10b1e9d60(void)

{
  FUN_10b1e9dbc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1e9d74; end: 10b1e9dbb;  */

void FUN_10b1e9d74(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  undefined1 auStack_30 [16];
  
  func_0x00010b1ee38c();
  if (param_3 != 0) {
    do {
      func_0x00010b1eb124();
    } while (extraout_w10 != 0);
  }
  FUN_10b1e9a9c(param_1 + 8);
  FUN_10b1dc1e0(auStack_30);
  return;
}



/* Entry: 10b1e9dbc; end: 10b1e9e0b;  */

undefined8 * FUN_10b1e9dbc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc49b0;
  func_0x00010b1e9de8(param_1 + 1);
  return param_1;
}



/* Entry: 10b1e9e0c; end: 10b1e9e5b;  */

void FUN_10b1e9e0c(undefined8 param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  code *extraout_x9;
  code *extraout_x9_00;
  code *pcVar2;
  long extraout_x10;
  uint extraout_w11;
  int extraout_w12;
  
  func_0x00010b1eb388();
  if (extraout_x10 != 0) {
    do {
      func_0x00010b1eb0ac();
    } while (extraout_w12 != 0);
  }
  func_0x00010b1eb02c();
  lVar1 = extraout_x8;
  pcVar2 = extraout_x9;
  if ((extraout_w11 & 1) != 0) {
    func_0x00010b1ec364();
    lVar1 = extraout_x8_00;
    pcVar2 = extraout_x9_00;
  }
  (*pcVar2)(param_1,**(undefined8 **)(lVar1 + 8),(*(undefined8 **)(lVar1 + 8))[1]);
  func_0x00010b1eb728();
  return;
}



/* Entry: 10b1e9e5c; end: 10b1e9e6b;  */

void FUN_10b1e9e5c(void)

{
  return;
}



/* Entry: 10b1e9e6c; end: 10b1e9eb3;  */

long FUN_10b1e9e6c(long param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  
  lVar2 = param_1;
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != 0) {
    func_0x00010b1ed74c();
    func_0x00010b1dd3b4();
    func_0x00010b1eb70c();
    lVar1 = unaff_x21;
  }
  func_0x00010b1ebc2c();
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b1e9eb4; end: 10b1e9f03;  */

void FUN_10b1e9eb4(undefined8 param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  code *extraout_x9;
  code *extraout_x9_00;
  code *pcVar2;
  long extraout_x10;
  uint extraout_w11;
  int extraout_w12;
  
  func_0x00010b1eb388();
  if (extraout_x10 != 0) {
    do {
      func_0x00010b1eb0ac();
    } while (extraout_w12 != 0);
  }
  func_0x00010b1eb02c();
  lVar1 = extraout_x8;
  pcVar2 = extraout_x9;
  if ((extraout_w11 & 1) != 0) {
    func_0x00010b1ec364();
    lVar1 = extraout_x8_00;
    pcVar2 = extraout_x9_00;
  }
  (*pcVar2)(param_1,**(undefined8 **)(lVar1 + 8));
  func_0x00010b1eb728();
  return;
}



/* Entry: 10b1e9f04; end: 10b1e9f13;  */

void FUN_10b1e9f04(void)

{
  return;
}



/* Entry: 10b1e9f14; end: 10b1ea1ab;  */

undefined8 ****** FUN_10b1e9f14(undefined8 ******param_1)

{
  undefined8 ****ppppuVar1;
  char cVar2;
  bool bVar3;
  uint7 uVar4;
  code *pcVar5;
  undefined1 in_ZR;
  undefined1 uVar6;
  long lVar7;
  undefined8 ******ppppppuVar8;
  undefined8 ******ppppppuVar9;
  undefined8 ******ppppppuVar10;
  undefined8 *puVar11;
  undefined8 ******ppppppuVar12;
  undefined8 extraout_x8;
  ulong uVar13;
  uint uVar14;
  undefined8 ****ppppuVar15;
  code ***pppcVar16;
  undefined8 ****ppppuVar17;
  undefined **unaff_x20;
  undefined8 uVar18;
  code ***pppcVar19;
  undefined8 ****ppppuVar20;
  undefined8 *****pppppuVar21;
  undefined8 *****pppppuVar22;
  undefined8 ***pppuVar23;
  undefined8 *****pppppuVar24;
  long lVar25;
  long *plVar26;
  long lVar27;
  undefined8 ******ppppppuVar28;
  ulong uVar29;
  undefined8 *****pppppuVar30;
  undefined1 auStack_410 [88];
  undefined4 uStack_3b8;
  undefined8 *****pppppuStack_3b0;
  undefined8 *****pppppuStack_3a8;
  undefined8 *****pppppuStack_3a0;
  long lStack_398;
  undefined4 uStack_390;
  long lStack_380;
  undefined8 *****pppppuStack_378;
  undefined8 uStack_370;
  undefined8 ****ppppuStack_368;
  undefined4 uStack_360;
  undefined8 uStack_358;
  undefined8 ****ppppuStack_350;
  undefined1 uStack_348;
  undefined1 auStack_340 [16];
  undefined1 uStack_330;
  long alStack_328 [10];
  long lStack_2d8;
  long lStack_2d0;
  undefined1 auStack_2c8 [8];
  undefined8 uStack_2c0;
  ulong uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  char cStack_298;
  undefined8 *****pppppuStack_290;
  undefined8 *****pppppuStack_288;
  undefined8 *****pppppuStack_280;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined1 auStack_240 [48];
  undefined8 uStack_210;
  ulong uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 uStack_1e8;
  undefined1 auStack_1e0 [48];
  undefined1 *apuStack_1b0 [4];
  undefined **ppuStack_190;
  undefined8 *****pppppuStack_188;
  undefined1 *puStack_180;
  undefined8 ****ppppuStack_178;
  undefined8 ****ppppuStack_170;
  undefined8 ****ppppuStack_168;
  undefined8 *****pppppuStack_160;
  undefined8 ****ppppuStack_158;
  undefined8 *****pppppuStack_150;
  undefined8 ****ppppuStack_148;
  undefined8 uStack_140;
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [8];
  undefined4 uStack_120;
  code **ppcStack_118;
  undefined8 *****pppppuStack_110;
  undefined8 *****pppppuStack_108;
  undefined8 *****pppppuStack_100;
  char cStack_f8;
  code *pcStack_e0;
  undefined8 *****pppppuStack_d8;
  undefined8 *****pppppuStack_d0;
  undefined8 *****pppppuStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  code **ppcStack_b0;
  undefined8 ****ppppuStack_a8;
  code *pcStack_a0;
  undefined **ppuStack_98;
  code ***pppcStack_90;
  int iStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  func_0x00010b1eaf40();
  pppppuVar24 = param_1[4];
  if (((ulong)pppppuVar24[0xb] & 1) == 0) {
    *(undefined1 *)((long)pppppuVar24 + 0x69) = 1;
    func_0x00010b1eaddc(extraout_x8);
    if ((bool)in_ZR) {
      return param_1;
    }
SUB_10b125908:
    ___stack_chk_fail();
    func_0x00010b1eb590();
    param_1 = param_1 + 1;
    pppppuStack_188 = pppppuStack_160;
    ppppuStack_178 = (undefined8 ****)FUN_10b1ea1ac;
    ppuStack_190 = unaff_x20;
    puStack_180 = &stack0xfffffffffffffff0;
    func_0x000107c350ac();
    if (param_1 != (undefined8 ******)0x0) {
      func_0x000107c278a0();
    }
    return (undefined8 ******)pppppuStack_160;
  }
  pppppuVar21 = param_1[2];
  pppppuStack_150 = (undefined8 *****)0x0;
  ppppuStack_148 = (undefined8 *****)0x0;
  uStack_140 = 0;
  uStack_70 = extraout_x8;
  func_0x00010b1ecf3c(&pcStack_a0);
  pppcVar16 = pppcStack_90 + 2;
  unaff_x20 = (undefined **)0x3e8;
  while (pppcVar16 = (code ***)*pppcVar16, pppcVar16 != (code ***)0x0) {
    pppcVar19 = pppcVar16 + 0x22;
    while (pppcVar19 = (code ***)*pppcVar19, pppcVar19 != (code ***)0x0) {
      if ((*(code *)(pppcVar19 + 10) == (code)0x1) && (*(code *)(pppcVar19 + 9) == (code)0x1)) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (auStack_138,pppcVar16 + 2);
        uStack_120 = *(undefined4 *)(pppcVar19 + 2);
        pppppuStack_110 = (undefined8 *****)pppcVar19[6];
        ppcStack_118 = pppcVar19[5];
        pppppuStack_108 = (undefined8 *****)pppcVar19[7];
        pppppuStack_100 = (undefined8 *****)((long)pppcVar19[8] / 1000);
        FUN_10b1d7788(&pppppuStack_150,auStack_138);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_138);
        *(code *)(pppcVar19 + 10) = (code)0x0;
      }
    }
  }
  ppppuStack_158 = pppppuVar24;
  func_0x000107c2798c(&pcStack_a0);
  ppppuVar15 = ppppuStack_148;
  uVar6 = pppppuStack_150 == (undefined8 *****)ppppuStack_148;
  if (!(bool)uVar6) {
    unaff_x20 = &PTR_FUN_110cc43b0;
    for (pppppuVar24 = pppppuStack_150; uVar6 = pppppuVar24 == (undefined8 *****)ppppuVar15,
        !(bool)uVar6; pppppuVar24 = pppppuVar24 + 8) {
      pcStack_c0 = FUN_10b1fd070;
      uStack_b8 = 0;
      pppppuStack_d8 = (undefined8 *****)((ulong)pppppuStack_d8 & 0xffffffffffffff00);
      pppppuStack_c8 = (undefined8 *****)((ulong)pppppuStack_c8 & 0xffffffffffffff00);
      pcStack_a0 = FUN_10b1e6424;
      ppuStack_98 = &PTR_FUN_110cc43b0;
      ppcStack_b0 = &pcStack_c0;
      ppppuStack_a8 = pppppuVar24;
      pppcStack_90 = &ppcStack_b0;
      func_0x00010b1ebe34(pppppuVar21 + 0x10,&pcStack_a0,&UNK_10f731917);
      func_0x00010b1eca2c();
      auStack_138[0] = 1;
      pcStack_e0 = (code *)((ulong)pcStack_e0 & 0xffffffff00000000);
      func_0x00010b1dd05c(auStack_138);
      FUN_10b1dd074(auStack_138);
      func_0x00010b1ed234();
    }
  }
  param_1 = &pppppuStack_150;
  FUN_10b1d7c60();
  func_0x00010b1eaddc(uStack_70);
  ppppuVar15 = ppppuStack_158;
  if (!(bool)uVar6) goto SUB_10b125908;
  pppppuVar24 = (undefined8 *****)(ppppuStack_158 + 0xa5);
  uStack_78 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  *(undefined1 *)(ppppuStack_158 + 0xaa) = 0;
  uStack_358 = 0;
  pppppuVar21 = pppppuVar24;
  __ZNSt3__16chrono12steady_clock3nowEv();
  uStack_348 = 1;
  pppppuStack_378 = (undefined8 ******)0x0;
  lStack_380 = 0;
  ppppuStack_368 = (undefined8 *****)0x0;
  uStack_370 = 0;
  uStack_360 = 0x3f800000;
  auStack_340[0] = 0;
  uStack_330 = 0;
  ppppuStack_350 = pppppuVar21;
  func_0x00010bccbc98(alStack_328,ppppuVar15[0xa8],&UNK_10f738224,0x27);
  lStack_2d8 = *(long *)(alStack_328[0] + 8);
  lStack_2d0 = *(long *)(alStack_328[0] + 0x10);
  if (lStack_2d0 != 0) {
    plVar26 = (long *)(lStack_2d0 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar3) {
        *plVar26 = *plVar26 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10b1fa688(auStack_2c8,*(undefined8 *)(lStack_2d8 + 0x10));
  uStack_208 = uStack_208 & 0xffffffffffffff00;
  uStack_1e8 = 0;
  if (cStack_298 != '\0') {
    uStack_200 = uStack_2b0;
    uStack_208 = uStack_2b8;
    uStack_1f8 = uStack_2a8;
    uStack_2b0 = 0;
    uStack_2a8 = 0;
    uStack_2b8 = 0;
    uStack_1f0 = uStack_2a0;
    uStack_1e8 = 1;
    func_0x00010b1b74d0(&uStack_2b8);
  }
  uStack_210 = uStack_2c0;
  uStack_2c0 = 0;
  func_0x00010b1b7450(auStack_1e0,&uStack_210);
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  func_0x00010b1b7450(auStack_240,&uStack_270);
  pppppuStack_288 = (undefined8 ******)0x0;
  pppppuStack_280 = (undefined8 ******)0x0;
  pppppuStack_290 = (undefined8 ******)0x0;
  FUN_10b1b76dc(&puStack_180,auStack_1e0);
  FUN_10b1b76dc(apuStack_1b0,auStack_240);
  pppppuStack_150 = &pppppuStack_290;
  ppppuStack_148 = (undefined8 ****)((ulong)ppppuStack_148 & 0xffffffffffffff00);
  while (((((ulong)ppppuStack_158 & 1) != 0 || (((ulong)pppppuStack_188 & 1) != 0)) &&
         (puStack_180 != apuStack_1b0[0]))) {
    if (((ulong)ppppuStack_158 & 1) == 0) {
      uVar18 = *(undefined8 *)(puStack_180 + 8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&uStack_140,puStack_180 + 0x58);
      func_0x000107c27f54(auStack_128,&UNK_10f2e0451,&uStack_140);
      func_0x00010bcc7444(uVar18,0x65,auStack_128);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_128);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_140);
    }
    pppppuVar21 = pppppuStack_288;
    ppppppuVar8 = (undefined8 ******)pppppuStack_290;
    if (pppppuStack_288 < pppppuStack_280) {
      pppppuStack_288[2] = ppppuStack_168;
      pppppuStack_288[1] = ppppuStack_170;
      *pppppuStack_288 = ppppuStack_178;
      ppppuStack_170 = (undefined8 *****)0x0;
      ppppuStack_168 = (undefined8 *****)0x0;
      ppppuStack_178 = (undefined8 *****)0x0;
      pppppuStack_288[3] = pppppuStack_160;
      ppppppuVar8 = (undefined8 ******)(pppppuStack_288 + 4);
    }
    else {
      lVar25 = (long)pppppuStack_288 - (long)pppppuStack_290;
      lVar27 = lVar25 >> 5;
      uVar29 = lVar27 + 1;
      if (uVar29 >> 0x3b != 0) {
        FUN_10b1b7520();
        goto LAB_10b1b6ff0;
      }
      uVar13 = (long)pppppuStack_280 - (long)pppppuStack_290 >> 4;
      if (uVar13 <= uVar29) {
        uVar13 = uVar29;
      }
      if (0x7fffffffffffffdf < (ulong)((long)pppppuStack_280 - (long)pppppuStack_290)) {
        uVar13 = 0x7ffffffffffffff;
      }
      if (uVar13 == 0) {
        lVar7 = 0;
      }
      else {
        if (uVar13 >> 0x3b != 0) {
          func_0x000104bd35f4();
          goto LAB_10b1b6ff0;
        }
        lVar7 = uVar13 << 5;
        __Znwm();
      }
      ppppuVar17 = ppppuStack_168;
      puVar11 = (undefined8 *)(lVar7 + lVar25);
      puVar11[1] = ppppuStack_170;
      *puVar11 = ppppuStack_178;
      ppppuStack_170 = (undefined8 *****)0x0;
      ppppuStack_168 = (undefined8 *****)0x0;
      ppppuStack_178 = (undefined8 *****)0x0;
      puVar11[2] = ppppuVar17;
      puVar11[3] = pppppuStack_160;
      ppppppuVar28 = (undefined8 ******)(puVar11 + lVar27 * -4);
      ppppppuVar9 = ppppppuVar28;
      for (ppppppuVar10 = ppppppuVar8; ppppppuVar10 != (undefined8 ******)pppppuVar21;
          ppppppuVar10 = ppppppuVar10 + 4) {
        pppppuVar30 = ppppppuVar10[1];
        pppppuVar22 = *ppppppuVar10;
        ppppppuVar9[2] = ppppppuVar10[2];
        ppppppuVar9[1] = pppppuVar30;
        *ppppppuVar9 = pppppuVar22;
        ppppppuVar10[1] = (undefined8 *****)0x0;
        ppppppuVar10[2] = (undefined8 *****)0x0;
        *ppppppuVar10 = (undefined8 *****)0x0;
        ppppppuVar9[3] = ppppppuVar10[3];
        ppppppuVar9 = ppppppuVar9 + 4;
      }
      for (; ppppppuVar8 != (undefined8 ******)pppppuVar21; ppppppuVar8 = ppppppuVar8 + 4) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppppppuVar8);
      }
      ppppppuVar8 = (undefined8 ******)(puVar11 + 4);
      pppppuStack_280 = (undefined8 *****)(lVar7 + uVar13 * 0x20);
      bVar3 = (undefined8 ******)pppppuStack_290 != (undefined8 ******)0x0;
      pppppuStack_290 = ppppppuVar28;
      if (bVar3) {
        pppppuStack_288 = ppppppuVar8;
        __ZdlPv();
      }
    }
    pppppuStack_288 = ppppppuVar8;
    FUN_10b1b7534(&puStack_180);
  }
  ppppuStack_148 = (undefined8 ****)CONCAT71(ppppuStack_148._1_7_,1);
  FUN_10b1b7654(&pppppuStack_150);
  func_0x00010b1b7fb0(apuStack_1b0);
  FUN_10b1b7764(&ppppuStack_178);
  func_0x00010b1b7fb0(auStack_240);
  func_0x00010b1b8024();
  func_0x00010b1b7fb0(auStack_1e0);
  FUN_10b1b7764(&uStack_208);
  pppppuStack_108 = pppppuStack_288;
  pppppuStack_110 = pppppuStack_290;
  pppppuStack_100 = pppppuStack_280;
  pppppuStack_290 = (undefined8 ******)0x0;
  pppppuStack_288 = (undefined8 ******)0x0;
  pppppuStack_280 = (undefined8 ******)0x0;
  cStack_f8 = '\x01';
  FUN_10b1b7784(&pppppuStack_290);
  FUN_10b1b77b8(auStack_2c8);
  FUN_10b1b7824(&lStack_2d8);
  func_0x00010bccbe4c(alStack_328);
  func_0x00010bccbdb4(alStack_328);
  pppppuStack_d8 = (undefined8 *****)((ulong)pppppuStack_d8 & 0xffffffffffffff00);
  uVar29 = (ulong)pcStack_c0 >> 8;
  pcStack_c0 = (code *)((ulong)pcStack_c0 & 0xffffffffffffff00);
  if (cStack_f8 == '\x01') {
    pppppuStack_d0 = pppppuStack_108;
    pppppuStack_d8 = pppppuStack_110;
    pppppuStack_c8 = pppppuStack_100;
    pppppuStack_108 = (undefined8 ******)0x0;
    pppppuStack_100 = (undefined8 ******)0x0;
    pppppuStack_110 = (undefined8 ******)0x0;
    pcStack_c0 = (code *)CONCAT71((int7)uVar29,1);
  }
  iStack_80 = 0;
  func_0x00010b1b7fdc();
  pppppuStack_110 = (undefined8 *****)((ulong)pppppuStack_110 & 0xffffffffffffff00);
  cStack_f8 = 0;
  uVar4 = lStack_398._1_7_;
  if (iStack_80 == 0) {
    pppppuStack_3b0 = (undefined8 *****)((ulong)pppppuStack_3b0._1_7_ << 8);
    lStack_398 = (ulong)lStack_398._1_7_ << 8;
    if ((char)pcStack_c0 == '\x01') {
      pppppuStack_3a8 = pppppuStack_d0;
      pppppuStack_3b0 = pppppuStack_d8;
      pppppuStack_3a0 = pppppuStack_c8;
      pppppuStack_d0 = (undefined8 ******)0x0;
      pppppuStack_c8 = (undefined8 ******)0x0;
      pppppuStack_d8 = (undefined8 ******)0x0;
      lStack_398 = CONCAT71(uVar4,1);
    }
  }
  else {
    if (iStack_80 != 1) goto LAB_10b1b6fec;
    pppppuStack_3b0 = (undefined8 *****)((ulong)pppppuStack_3b0._1_7_ << 8);
    lStack_398 = (ulong)lStack_398._1_7_ << 8;
  }
  func_0x00010b1b7fdc();
  func_0x00010b1b800c();
  FUN_10b1b78d0(auStack_340);
  pppppuVar21 = pppppuStack_3a8;
  ppppppuVar8 = (undefined8 ******)pppppuStack_3b0;
  if ((char)lStack_398 == '\x01') {
    for (; ppppppuVar8 != (undefined8 ******)pppppuVar21; ppppppuVar8 = ppppppuVar8 + 4) {
      pppppuVar22 = ppppppuVar8[3];
      plVar26 = &lStack_380;
      FUN_10b1b7254(plVar26,ppppppuVar8);
      *plVar26 = (long)pppppuVar22 * 1000;
    }
  }
  ppppppuVar8 = &pppppuStack_3b0;
  FUN_10b1b784c();
  uVar14 = 0;
  pppppuStack_3a8 = (undefined8 ******)0x0;
  pppppuStack_3b0 = (undefined8 *****)0x0;
  lStack_398 = 0;
  pppppuStack_3a0 = (undefined8 ******)0x0;
  uStack_390 = 0x3f800000;
  ppppuVar17 = *pppppuVar24;
  ppppuVar1 = (undefined8 ****)ppppuVar15[0xa6];
  while ((pppppuVar24 = pppppuStack_378, ppppuVar17 != ppppuVar1 &&
         (((ulong)ppppuVar15[0xaa] & 1) == 0))) {
    if (((ulong)ppppuVar17[8][1] & 1) == 0) {
      pppuVar23 = ppppuVar17[5];
      if (pppuVar23 == (undefined8 ***)0x0) {
LAB_10b1b6de0:
        ppppuVar20 = ppppuVar17 + 7;
        ppppppuVar10 = (undefined8 ******)(ppppuVar15 + 0xa9);
        (*(code *)*ppppuVar20)(ppppppuVar10,ppppuVar20);
        ppppppuVar9 = ppppppuVar10;
        __ZNSt3__16chrono12system_clock3nowEv();
        ppppppuVar8 = ppppppuVar9;
        func_0x00010b1b8018();
        uVar14 = uVar14 | (uint)ppppppuVar10;
        *ppppppuVar8 = ppppppuVar9;
        if (*(char *)(ppppuVar17 + 6) == '\x01') {
          pppppuStack_c8 = (undefined8 ******)0x0;
          pppppuStack_d0 = (undefined8 ******)0x0;
          uStack_b8 = 0;
          pcStack_c0 = (code *)0x0;
          pcStack_e0 = FUN_10b1b7ec0;
          pppppuStack_d8 = (undefined8 *****)&PTR_DAT_110873830;
          *ppppuVar20 = (undefined8 ***)FUN_10b1b7ec0;
          func_0x000107c2816c(ppppuVar17 + 8,&pppppuStack_d8);
          ppppppuVar8 = &pppppuStack_d8;
          (*(code *)*pppppuStack_d8)();
        }
      }
      else {
        ppppppuVar10 = ppppppuVar8;
        if (((undefined8 ******)pppppuStack_378 != (undefined8 ******)0x0) &&
           ((undefined8 *****)ppppuStack_368 != (undefined8 *****)0x0)) {
          ppppppuVar9 = (undefined8 ******)&ppppuStack_368;
          func_0x000107c278c4(ppppppuVar9,ppppuVar17);
          uVar29 = (long)pppppuVar24 - 1;
          if (((ulong)pppppuVar24 & uVar29) == 0) {
            ppppppuVar28 = (undefined8 ******)((ulong)ppppppuVar9 & uVar29);
          }
          else {
            ppppppuVar28 = ppppppuVar9;
            if (pppppuVar24 <= ppppppuVar9) {
              uVar13 = 0;
              if ((undefined8 ******)pppppuVar24 != (undefined8 ******)0x0) {
                uVar13 = (ulong)ppppppuVar9 / (ulong)pppppuVar24;
              }
              ppppppuVar28 = (undefined8 ******)((long)ppppppuVar9 - uVar13 * (long)pppppuVar24);
            }
          }
          plVar26 = *(long **)(lStack_380 + (long)ppppppuVar28 * 8);
          ppppppuVar8 = ppppppuVar9;
          ppppppuVar10 = ppppppuVar9;
          if (plVar26 != (long *)0x0) {
            do {
              while( true ) {
                plVar26 = (long *)*plVar26;
                ppppppuVar10 = ppppppuVar8;
                if (plVar26 == (long *)0x0) goto LAB_10b1b6da0;
                ppppppuVar12 = (undefined8 ******)plVar26[1];
                if (ppppppuVar12 != ppppppuVar9) break;
                ppppppuVar8 = (undefined8 ******)(plVar26 + 2);
                func_0x000107c278d0(ppppppuVar8,ppppuVar17);
                if (((ulong)ppppppuVar8 & 1) != 0) {
                  lVar25 = plVar26[5];
                  __ZNSt3__16chrono12system_clock3nowEv();
                  if ((undefined8 ******)(lVar25 + (long)pppuVar23 * 1000) <= ppppppuVar8)
                  goto LAB_10b1b6de0;
                  goto LAB_10b1b6e5c;
                }
              }
              if (((ulong)pppppuVar24 & uVar29) == 0) {
                ppppppuVar12 = (undefined8 ******)((ulong)ppppppuVar12 & uVar29);
              }
              else if (pppppuVar24 <= ppppppuVar12) {
                uVar13 = 0;
                if ((undefined8 ******)pppppuVar24 != (undefined8 ******)0x0) {
                  uVar13 = (ulong)ppppppuVar12 / (ulong)pppppuVar24;
                }
                ppppppuVar12 = (undefined8 ******)((long)ppppppuVar12 - uVar13 * (long)pppppuVar24);
              }
            } while (ppppppuVar12 == ppppppuVar28);
          }
        }
LAB_10b1b6da0:
        __ZNSt3__16chrono12system_clock3nowEv();
        ppppppuVar8 = ppppppuVar10;
        func_0x00010b1b8018();
        *ppppppuVar8 = ppppppuVar10 + ((ulong)pppuVar23 >> 1) * -0x7d;
      }
    }
LAB_10b1b6e5c:
    ppppuVar17 = ppppuVar17 + 0xd;
  }
  if (lStack_398 != 0) {
    pppppuStack_150 = &pppppuStack_3b0;
    pppppuStack_110 = (undefined8 *****)FUN_10b1b7ed0;
    pppppuStack_108 = (undefined8 *****)&PTR_FUN_110cc35b8;
    pppppuStack_100 = &pppppuStack_150;
    func_0x00010bccc554(ppppuVar15[0xa8],&pppppuStack_110,&UNK_10f731902,0x14);
    func_0x00010b1b7fcc();
    uStack_3b8 = 0;
    FUN_10b1b78f0(&pcStack_e0,auStack_410);
    uStack_3b8 = 0xffffffff;
  }
  ppppuVar17 = (undefined8 ****)ppppuVar15[0xa9];
  FUN_10b126f8c(&pcStack_e0,0x10005);
  func_0x00010b1b8030(&uStack_b8);
  func_0x00010b1b7ff4();
  puVar11 = &uStack_358;
  func_0x000107c28148(puVar11);
  FUN_10b1135dc(ppppuVar17,0x90,auStack_340,puVar11);
  func_0x00010b1b7fec();
  lVar25 = 0x38;
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev((long)&pcStack_e0 + lVar25)
    ;
    lVar25 = lVar25 + -0x28;
  } while (lVar25 != -0x18);
  ppppuVar15 = (undefined8 ****)ppppuVar15[0xa9];
  func_0x00010b1b8030(&pcStack_e0);
  func_0x00010b123d80(&uStack_b8,&DAT_10f2d063e,9,uVar14 & 1);
  func_0x00010b1b7ff4();
  FUN_10b114b00(ppppuVar15,0x91,auStack_340,1);
  func_0x00010b1b7fec();
  lVar25 = 0x38;
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev((long)&pcStack_e0 + lVar25)
    ;
    lVar25 = lVar25 + -0x28;
    uVar6 = lVar25 == -0x18;
  } while (!(bool)uVar6);
  FUN_10b1b78fc(&pppppuStack_3b0);
  FUN_10b1b78fc(&lStack_380);
  func_0x00010b1b8038(uStack_78);
  if ((bool)uVar6) {
    return (undefined8 ******)(ulong)((uVar14 ^ 0xffffffff) & 1);
  }
  ___stack_chk_fail();
LAB_10b1b6fec:
  func_0x00010563ab98();
LAB_10b1b6ff0:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10b1b6ff4);
  (*pcVar5)();
}



/* Entry: 10b1ea1ac; end: 10b1ea1c7;  */

void FUN_10b1ea1ac(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000107c350ac();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b1ea1c8; end: 10b1ea1e7;  */

void FUN_10b1ea1c8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b1d0d58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1ea1e8; end: 10b1ea1eb;  */

void FUN_10b1ea1e8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b1ea1ec; end: 10b1ea403;  */

void FUN_10b1ea1ec(long param_1)

{
  int *piVar1;
  undefined1 in_ZR;
  int *piVar2;
  undefined8 extraout_x8;
  int *piVar3;
  int *piVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_c0 [16];
  long lStack_b0;
  int *apiStack_98 [3];
  undefined1 auStack_80 [32];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x00010b1eaf40();
  lVar6 = *(long *)(param_1 + 0x10);
  piVar3 = *(int **)(lVar6 + 0x10);
  uStack_58 = extraout_x8;
  func_0x00010b1ec518();
  piVar2 = piVar3;
  func_0x00010b1eb674(auStack_c0,piVar3,lVar6 + 0x18,lVar6 + 0x30);
  if (lStack_b0 != 0) {
    piVar1 = *(int **)(lStack_b0 + 0x50);
    for (piVar4 = *(int **)(lStack_b0 + 0x48); in_ZR = piVar4 == piVar1, !(bool)in_ZR;
        piVar4 = piVar4 + 0x22) {
      in_ZR = *piVar4 == *(int *)(lVar6 + 0x80);
      if ((bool)in_ZR) {
        piVar2 = piVar4 + 2;
        func_0x000107c278d0(piVar2,lVar6 + 0x88);
        if ((int)piVar2 != 0) {
          lVar8 = *(long *)(piVar4 + 10);
          lVar7 = *(long *)(lVar6 + 0xb0);
          uVar5 = *(undefined8 *)(lVar7 + 0x238);
          func_0x00010b1edc58();
          func_0x00010b1eb654(apiStack_98,auStack_80);
          func_0x00010b1eb5b4(uVar5,0xa7,apiStack_98);
          func_0x00010b1ebfdc();
          func_0x00010b1eb5ac(auStack_80);
          uVar5 = *(undefined8 *)(lVar7 + 0x238);
          func_0x00010b1edc58();
          func_0x00010b1eb654(apiStack_98,auStack_80);
          FUN_10b11ef50(uVar5,0xa8,apiStack_98,(*(long *)(lVar6 + 0xc0) - lVar8) / 3600000000);
          func_0x00010b1ebfdc();
          func_0x00010b1eb5ac(auStack_80);
          uVar5 = *(undefined8 *)(lVar7 + 0x238);
          func_0x00010b1edc58();
          func_0x00010b1eb654(apiStack_98,auStack_80);
          FUN_10b11ef50(uVar5,0xa9,apiStack_98,
                        (*(long *)(lVar6 + 0xc0) - *(long *)(lVar6 + 200)) / 3600000000);
          func_0x00010b1ebfdc();
          func_0x00010b1eb5ac(auStack_80);
          *(undefined8 *)(piVar4 + 10) = *(undefined8 *)(lVar6 + 0xd0);
          FUN_10b1be290(apiStack_98,piVar3,lVar6 + 0x18,lStack_b0,piVar4);
          piVar2 = piVar3;
          if (apiStack_98[0] != (int *)0x0) {
            uStack_60 = 0;
            func_0x00010b1ee44c();
            FUN_10b1be194(auStack_c0,auStack_80);
            func_0x00010b1ecef4();
            __ZNSt3__117__assoc_sub_state4waitEv();
            piVar2 = apiStack_98[0];
          }
          func_0x00010b1ec230();
          break;
        }
      }
    }
  }
  func_0x00010b1eb910();
  func_0x00010b1eaddc(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b1ec230();
  func_0x00010b1eb910();
  func_0x00010b1eb590();
  if (*(long *)(piVar2 + 2) == 0) {
    return;
  }
  FUN_10b1d1a90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1ea404; end: 10b1ea423;  */

void FUN_10b1ea404(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b1d1a90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1ea424; end: 10b1ea427;  */

void FUN_10b1ea424(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b1ea428; end: 10b1ea5c3;  */

long * FUN_10b1ea428(long param_1)

{
  undefined1 uVar1;
  long *plVar2;
  undefined8 extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  long extraout_x9;
  int extraout_w10;
  int extraout_w12;
  long unaff_x19;
  long lVar3;
  undefined8 uVar4;
  long lStack_b0;
  long lStack_a8;
  code *pcStack_98;
  undefined **ppuStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_38;
  
  func_0x00010b1eae28();
  lVar3 = *(long *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(lVar3 + 0x238);
  uStack_38 = extraout_x8;
  func_0x00010b1ebd14();
  func_0x00010b1eb884(&pcStack_98);
  func_0x00010b1eb654(&lStack_b0,&pcStack_98);
  func_0x00010b1eb040(uVar4);
  FUN_10b120998(&lStack_b0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_88);
  FUN_10b1bac30(lVar3);
  pcStack_98 = FUN_10b1ea5c4;
  ppuStack_90 = &PTR_DAT_110cc4a68;
  FUN_10b1cdd58(&lStack_b0,lVar3,&pcStack_98,5,0);
  func_0x00010b1eafb4(ppuStack_90);
  uVar1 = lStack_b0 == lStack_a8;
  if (!(bool)uVar1) {
    func_0x00010b1ecfbc();
    FUN_10b1cd118();
  }
  lVar3 = *(long *)(unaff_x19 + 0x10);
  if (lVar3 != 0) {
    lStack_80 = 0;
    if (*(long *)(unaff_x19 + 0x18) != 0) {
      do {
        func_0x00010b1eb0ac();
        lVar3 = extraout_x8_00;
        lStack_80 = extraout_x9;
      } while (extraout_w12 != 0);
    }
    pcStack_98 = (code *)0x10b1ea5d8;
    ppuStack_90 = &PTR_DAT_110cc4a80;
    lStack_88 = lVar3;
    if (lStack_80 != 0) {
      do {
        func_0x00010b1eb124();
      } while (extraout_w10 != 0);
    }
    func_0x00010b1eb9d4();
    (*extraout_x8_01)();
    func_0x00010b1eb150(ppuStack_90);
    func_0x00010b1ed338();
  }
  plVar2 = &lStack_b0;
  func_0x00010b128754(plVar2);
  func_0x00010b1eaddc(uStack_38);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x00010b1eb150(ppuStack_90);
    func_0x00010b1ed338();
    func_0x00010b128754(&lStack_b0);
    func_0x00010b1eb590();
    return (long *)0x0;
  }
  return plVar2;
}



/* Entry: 10b1ea5c4; end: 10b1ea66b;  */

undefined8 FUN_10b1ea5c4(void)

{
  return 0;
}



/* Entry: 10b1ea66c; end: 10b1ea78b;  */

byte * FUN_10b1ea66c(undefined8 param_1,undefined8 param_2,byte *param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 in_ZR;
  code *extraout_x9;
  code *extraout_x9_00;
  code *pcVar1;
  long extraout_x10;
  ulong extraout_x11;
  int extraout_w12;
  uint uVar2;
  int unaff_w20;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 **ppuStack_58;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_88 = &uStack_98;
  pcStack_68 = FUN_10b1ea78c;
  ppuStack_60 = &PTR_FUN_110cc4ab0;
  ppuStack_58 = &puStack_88;
  uStack_98 = param_4;
  uStack_90 = param_5;
  uStack_80 = param_6;
  uStack_78 = param_7;
  uStack_70 = param_8;
  func_0x00010bccc554(param_3,&pcStack_68,param_1,param_2);
  func_0x00010b1eafb4(ppuStack_60);
  func_0x00010b1ec6fc();
  do {
    func_0x00010b1ed360();
    uVar2 = (uint)*param_3;
    while( true ) {
      func_0x00010b1ebffc();
      func_0x00010b1ebcc4();
      func_0x00010b1eaddc(uStack_38);
      if ((bool)in_ZR) {
        return (byte *)(ulong)(uVar2 & 1);
      }
      ___stack_chk_fail();
      func_0x00010b1eb5a0();
      FUN_10b1dd074();
      func_0x00010b1ebcc4();
      do {
        func_0x00010b1eb590();
        func_0x00010b1eb648();
      } while (unaff_w20 == 0);
      func_0x00010b1eafb4(ppuStack_60);
      in_ZR = unaff_w20 == 2;
      if (!(bool)in_ZR) {
        func_0x00010b1eb8dc();
        func_0x00010b1eb388();
        if (extraout_x10 != 0) {
          do {
            func_0x00010b1eb0ac();
          } while (extraout_w12 != 0);
        }
        func_0x00010b1eb02c();
        pcVar1 = extraout_x9;
        if ((extraout_x11 & 1) != 0) {
          func_0x00010b1ec364();
          pcVar1 = extraout_x9_00;
        }
        (*pcVar1)();
        func_0x00010b1eb728();
        return param_3;
      }
      func_0x00010b1ebea4();
      func_0x00010b1ed340();
      ___cxa_end_catch();
      func_0x00010b1ec868();
      if (!(bool)in_ZR) break;
      func_0x00010b1ed330();
      func_0x00010b1ec868();
      if (!(bool)in_ZR) break;
      uVar2 = 0;
    }
  } while( true );
}



/* Entry: 10b1ea78c; end: 10b1ea7e3;  */

void FUN_10b1ea78c(undefined8 param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  code *extraout_x9;
  code *extraout_x9_00;
  code *pcVar2;
  long extraout_x10;
  uint extraout_w11;
  int extraout_w12;
  
  func_0x00010b1eb388();
  if (extraout_x10 != 0) {
    do {
      func_0x00010b1eb0ac();
    } while (extraout_w12 != 0);
  }
  func_0x00010b1eb02c();
  lVar1 = extraout_x8;
  pcVar2 = extraout_x9;
  if ((extraout_w11 & 1) != 0) {
    func_0x00010b1ec364();
    lVar1 = extraout_x8_00;
    pcVar2 = extraout_x9_00;
  }
  (*pcVar2)(param_1,**(undefined8 **)(lVar1 + 8),(*(undefined8 **)(lVar1 + 8))[1],
            *(undefined8 *)(lVar1 + 0x10),**(undefined8 **)(lVar1 + 0x18));
  func_0x00010b1eb728();
  return;
}



/* Entry: 10b1ea7e4; end: 10b1ea80b;  */

void FUN_10b1ea7e4(void)

{
  return;
}



/* Entry: 10b1ea80c; end: 10b1ea863;  */

void FUN_10b1ea80c(long param_1)

{
  func_0x00010b1eb114();
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 10b1ea864; end: 10b1ea8af;  */

void FUN_10b1ea864(undefined8 param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  code *extraout_x9;
  code *extraout_x9_00;
  code *pcVar2;
  long extraout_x10;
  uint extraout_w11;
  int extraout_w12;
  
  func_0x00010b1eb388();
  if (extraout_x10 != 0) {
    do {
      func_0x00010b1eb0ac();
    } while (extraout_w12 != 0);
  }
  func_0x00010b1eb02c();
  lVar1 = extraout_x8;
  pcVar2 = extraout_x9;
  if ((extraout_w11 & 1) != 0) {
    func_0x00010b1ec364();
    lVar1 = extraout_x8_00;
    pcVar2 = extraout_x9_00;
  }
  (*pcVar2)(param_1,*(undefined8 *)(lVar1 + 8));
  func_0x00010b1eb728();
  return;
}



/* Entry: 10b1ea8b0; end: 10b1ea8bf;  */

void FUN_10b1ea8b0(void)

{
  return;
}



/* Entry: 10b1ea8c0; end: 10b1ea92f;  */

undefined8 * FUN_10b1ea8c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 *puStack_40;
  
  func_0x00010b1eaeac();
  func_0x00010b1ecc3c();
  FUN_10b126258();
  FUN_10b1ea930(puStack_40,param_2,param_3);
  func_0x00010b1eb0bc();
  FUN_10b1262e4();
  func_0x00010b1eaddc(extraout_x8);
  if ((bool)in_ZR) {
    return puStack_40;
  }
  ___stack_chk_fail();
  func_0x00010b1eb5a0();
  FUN_10b1262e4();
  func_0x00010b1eb590();
  puStack_40[2] = 0;
  *puStack_40 = &PTR_FUN_110cbd8b0;
  puStack_40[1] = 0;
  FUN_10b1f68fc(puStack_40 + 3);
  return puStack_40;
}



/* Entry: 10b1ea930; end: 10b1ea96b;  */

undefined8 * FUN_10b1ea930(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110cbd8b0;
  param_1[1] = 0;
  FUN_10b1f68fc(param_1 + 3);
  return param_1;
}



/* Entry: 10b1ea96c; end: 10b1eabff;  */

void FUN_10b1ea96c(long param_1)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  long *plVar2;
  long lVar3;
  undefined8 extraout_x8;
  undefined8 uVar4;
  undefined8 extraout_x9;
  undefined8 uVar5;
  long extraout_x9_00;
  long extraout_x9_01;
  int extraout_w10;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w12;
  int extraout_w12_00;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uStack_60;
  long lStack_58;
  undefined1 auStack_50 [16];
  undefined8 *puStack_40;
  long lStack_38;
  
  plVar2 = (long *)(param_1 + 0xf0);
  FUN_10b113f00();
  lVar6 = *plVar2;
  *(long *)(param_1 + 0x90) = lVar6;
  lVar3 = plVar2[1];
  *(long *)(param_1 + 0x98) = lVar3;
  if (lVar3 != 0) {
    do {
      func_0x00010b1eb124();
    } while (extraout_w10 != 0);
  }
  func_0x00010b1edeac();
  uVar4 = *(undefined8 *)(lVar6 + 8);
  lStack_58 = *(long *)(lVar6 + 0x10);
  uVar5 = 0;
  uStack_60 = uVar4;
  if (lStack_58 != 0) {
    do {
      func_0x00010b1eb0ac();
    } while (extraout_w12 != 0);
    do {
      func_0x00010b1eb0ac();
      uVar4 = extraout_x8;
      uVar5 = extraout_x9;
    } while (extraout_w12_00 != 0);
  }
  *(undefined ***)(param_1 + 200) = &PTR_FUN_110cc3de8;
  *(code **)(param_1 + 0xc0) = FUN_10b1dec48;
  *(undefined8 *)(param_1 + 0xd0) = uVar4;
  *(undefined8 *)(param_1 + 0xd8) = uVar5;
  puStack_40 = (undefined8 *)0x0;
  lStack_38 = 0;
  FUN_10b1b9e94(auStack_50,param_1 + 0xc0);
  func_0x00010b1deb20(param_1 + 0x38,auStack_50);
  func_0x00010b1ebf7c();
  func_0x00010b1eb694(*(undefined8 *)(param_1 + 200));
  func_0x00010b1ed074();
  func_0x000107c2bdf4(&uStack_60);
  func_0x00010b1ecf84();
  func_0x00010b1edca8();
  func_0x00010b1ed764();
  if ((bool)in_ZR) {
    lVar3 = param_1 + 0x18;
    __ZNSt3__112__get_sp_mutEPKv(lVar3);
    __ZNSt3__18__sp_mut4lockEv();
    puVar1 = *(undefined8 **)(param_1 + 0x18);
    lVar6 = *(long *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    __ZNSt3__18__sp_mut6unlockEv(lVar3);
    puStack_40 = puVar1;
    lStack_38 = lVar6;
    __ZNSt3__15mutex4lockEv(puVar1 + 9);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    if (*(char *)(puVar1 + 2) == '\x01') {
      uVar5 = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
      lVar3 = puVar1[1];
      *puVar1 = uVar4;
      puVar1[1] = uVar5;
      puVar7 = puStack_40;
      if (lVar3 != 0) {
        do {
          func_0x00010b1eb104();
        } while (extraout_w11 != 0);
        puVar7 = puStack_40;
        if (extraout_x9_00 == 0) {
          func_0x00010b1ebe1c();
          func_0x00010b1eb94c();
          func_0x00010b1edd04();
          puVar7 = puStack_40;
        }
      }
    }
    else {
      *puVar1 = uVar4;
      puVar1[1] = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined1 *)(puVar1 + 2) = 1;
      puVar7 = puVar1;
    }
    lVar3 = puVar7[0x12];
    puVar7[0x12] = 0;
    __ZNSt3__15mutex6unlockEv(puVar1 + 9);
    if (lVar3 == 0) {
      __ZNSt3__118condition_variable10notify_allEv(puVar7 + 3);
    }
    else {
      func_0x00010b1ebe1c();
      func_0x00010b1ebbe0();
      func_0x00010b1eb174();
    }
    if (lStack_38 != 0) {
      do {
        func_0x00010b1eb104();
      } while (extraout_w11_00 != 0);
      if (extraout_x9_01 == 0) {
        func_0x00010b1ebe1c();
        func_0x00010b1eb94c();
        func_0x00010b1edd04();
      }
    }
  }
  else {
    __ZNSt13exception_ptrC1ERKS_(&puStack_40,param_1 + 0x38);
    FUN_10b1d3acc(param_1 + 0x10,&puStack_40);
    func_0x00010b1ed06c();
  }
  FUN_10b1d3b98(param_1 + 0x10);
  func_0x00010b1ebc10();
  return;
}



/* Entry: 10b1eac00; end: 10b1eac33;  */

void FUN_10b1eac00(long param_1)

{
  if ((*(byte *)(param_1 + 0x170) & 1) == 0) {
    func_0x00010b1edeac();
    func_0x00010b1edca8();
  }
  FUN_10b1d3b98(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10b1eac34; end: 10b1eacdf;  */

void FUN_10b1eac34(long param_1)

{
  FUN_10b1dca64(**(undefined8 **)(param_1 + 0x50));
  FUN_10b124fa8(param_1 + 0x38);
  func_0x00010b1ed4b4();
  if (*(char *)(param_1 + 0x40) == '\x01') {
    func_0x00010b1ede20();
  }
  else {
    func_0x00010b1ecf4c();
    func_0x00010b1ede2c();
    func_0x00010b1eb730();
  }
  func_0x00010b1ede44();
  func_0x00010b1ebc10();
  return;
}



/* Entry: 10b1eace0; end: 10b1eacff;  */

void FUN_10b1eace0(void)

{
  func_0x00010b1ed394();
  FUN_10b12505c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1ead00; end: 10b1edaeb;  */

void FUN_10b1ead00(void)

{
  return;
}



/* Entry: 10b1edaec; end: 10b1edb03;  */

void FUN_10b1edaec(void)

{
  FUN_10b1cd6d8();
  return;
}



/* Entry: 10b1edb04; end: 10b1ee78b;  */

void FUN_10b1edb04(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x29;
  
  lVar1 = unaff_x19 + 0x1d8;
  func_0x00010b1eb808(unaff_x29 + -0x20);
  if (lVar1 != 0) {
    func_0x00010b1ec7f8();
    *(long *)(unaff_x19 + 8) = lVar1;
    if (lVar1 != 0) {
      func_0x00010b1ecc80();
    }
  }
  return;
}



/* Entry: 10b1ee78c; end: 10b1ee8f7;  */

void FUN_10b1ee78c(long param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,int *param_6)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *unaff_x19;
  long unaff_x20;
  int iVar5;
  undefined1 auStack_58 [24];
  
  if (*(uint *)(param_1 + 0x18) <= *(uint *)(param_2 + 0x54) || *(int *)(param_2 + 0x20) < 1) {
    func_0x00010b1f1e8c();
    plVar3 = unaff_x19;
    FUN_10b1ee8f8();
    if ((int)plVar3 != 0) {
      plVar3 = (long *)*param_4;
      do {
        if (plVar3 == (long *)param_4[1]) {
          return;
        }
        lVar1 = *plVar3;
        plVar2 = plVar3 + 1;
        plVar3 = plVar3 + 2;
      } while (lVar1 == 0 && *plVar2 == 0);
      plVar4 = unaff_x19;
      FUN_10b1ee958(auStack_58);
      plVar2 = (long *)param_4[1];
      for (plVar3 = (long *)*param_4; plVar3 != plVar2; plVar3 = plVar3 + 2) {
        if (*plVar3 != 0 || plVar3[1] != 0) {
          FUN_10b1eeb0c();
          __ZNSt3__16chrono12system_clock3nowEv();
          plVar4 = plVar3;
          FUN_10b1eed6c();
        }
      }
      if ((*(byte *)(param_6 + 1) & 1) != 0) {
        func_0x00010b1ee6c4();
        iVar5 = iRam000000011336c400;
        plVar3 = unaff_x19;
        FUN_10b1ef15c();
        if (((ulong)plVar4 & 0x100000000) != 0) {
          iVar5 = (int)plVar4;
        }
        if (iVar5 <= *param_6) {
          iVar5 = *param_6;
        }
        *(int *)(plVar3 + 2) = iVar5;
      }
      *(undefined4 *)((long)unaff_x19 + 0x54) = *(undefined4 *)(unaff_x20 + 0x18);
      func_0x00010b1f0cd8(auStack_58);
    }
  }
  return;
}



/* Entry: 10b1ee8f8; end: 10b1ee957;  */

bool FUN_10b1ee8f8(long param_1,long param_2)

{
  ulong *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  if (*(int *)(param_1 + 0x20) < 0x401) {
    lVar4 = 0;
    uVar5 = *(ulong *)(param_1 + 0x18);
    puVar1 = (ulong *)(param_1 + 0x18);
    if ((uVar5 & 1) != 0) {
      puVar1 = (ulong *)(uVar5 + 7);
    }
    lVar6 = (long)*(int *)(param_1 + 0x20) << 3;
    while( true ) {
      if (lVar6 == 0) {
        lVar6 = 0;
        if (param_2 != 0) {
          lVar6 = lVar4 / param_2;
        }
        return lVar6 < 0x40001;
      }
      lVar2 = *(long *)(*puVar1 + 0x28);
      lVar3 = *(long *)(*puVar1 + 0x30);
      if (lVar3 < lVar2) break;
      lVar4 = (lVar3 + lVar4) - lVar2;
      lVar6 = lVar6 + -8;
      puVar1 = puVar1 + 1;
    }
  }
  return false;
}



/* Entry: 10b1ee958; end: 10b1eeb0b;  */

void FUN_10b1ee958(undefined8 *param_1,long param_2,long param_3)

{
  undefined1 in_ZR;
  long *plVar1;
  long *extraout_x9;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [40];
  long lStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  undefined4 uStack_b8;
  byte bStack_a8;
  undefined1 auStack_a0 [40];
  long lStack_78;
  long lStack_70;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  auStack_f8[0] = 0;
  bStack_a8 = 0;
  plVar1 = (long *)(param_3 + 0x18);
  func_0x00010b1f1c60(*plVar1);
  plVar5 = plVar1;
  if (!(bool)in_ZR) {
    plVar5 = extraout_x9;
  }
  plVar1 = plVar5 + (int)plVar1[1];
  do {
    if (plVar5 == plVar1) {
      if ((bStack_a8 & 1) != 0) {
        func_0x00010b1f1dc8();
      }
      func_0x00010b1f0fdc(auStack_f8);
      return;
    }
    lVar3 = *plVar5;
    lStack_110 = 0;
    lStack_108 = 0;
    uStack_100 = 0;
    lVar2 = *(long *)(param_2 + 8);
    lVar6 = 0;
    if (lVar2 != 0) {
      lVar6 = *(long *)(lVar3 + 0x28) / lVar2;
    }
    for (lVar6 = lVar6 * lVar2; lVar2 = lStack_108, lVar4 = lStack_110,
        lVar6 < *(long *)(lVar3 + 0x30); lVar6 = *(long *)(param_2 + 8) + lVar6) {
      FUN_10b1f0014(auStack_a0,lVar3);
      lStack_70 = *(long *)(param_2 + 8) + lVar6;
      lStack_78 = lVar6;
      FUN_10b1f0e84(&lStack_110,auStack_a0);
      FUN_10b24df68(auStack_a0);
    }
    for (; lVar4 != lVar2; lVar4 = lVar4 + 0x50) {
      if (bStack_a8 == 1) {
        if (*(long *)(lVar4 + 0x28) < lStack_c8 && lStack_d0 < *(long *)(lVar4 + 0x30)) {
          if (uStack_c0 < *(ulong *)(lVar4 + 0x38)) {
            uStack_b8 = *(undefined4 *)(lVar4 + 0x40);
            uStack_c0 = *(ulong *)(lVar4 + 0x38);
          }
        }
        else {
          func_0x00010b1f1dc8();
          if (bStack_a8 != 1) goto LAB_10b1eea58;
          FUN_10b1f0868(auStack_f8,lVar4);
        }
      }
      else {
LAB_10b1eea58:
        func_0x00010b1f1e14(auStack_f8);
        bStack_a8 = 1;
      }
    }
    func_0x00010b1f0cd8(&lStack_110);
    plVar5 = plVar5 + 1;
  } while( true );
}



/* Entry: 10b1eeb0c; end: 10b1eed6b;  */

void FUN_10b1eeb0c(long *param_1,long *param_2,long **param_3,long **param_4,undefined8 *param_5,
                  ulong param_6,long param_7)

{
  ulong *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long **pplVar5;
  long **pplVar6;
  long lVar7;
  undefined1 uVar8;
  bool bVar9;
  long *plVar10;
  long **pplVar11;
  long *plVar12;
  int iVar13;
  long **pplVar14;
  undefined8 *puVar15;
  uint uVar16;
  uint uVar17;
  undefined8 extraout_x8;
  long lVar18;
  ulong uVar19;
  long *extraout_x9;
  long lVar20;
  long *plVar21;
  long *plVar22;
  long *unaff_x21;
  long **unaff_x24;
  ulong unaff_x25;
  long *plVar23;
  long lVar24;
  ulong unaff_x28;
  long *plStack_2b0;
  long *plStack_2a8;
  long *plStack_2a0;
  undefined1 auStack_298 [16];
  long *plStack_288;
  undefined1 auStack_248 [8];
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined4 uStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  ulong uStack_208;
  ulong uStack_200;
  long *plStack_1f8;
  long *plStack_1f0;
  long *plStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  undefined1 uStack_1d0;
  undefined7 uStack_1cf;
  ulong uStack_1b0;
  ulong *puStack_1a8;
  long lStack_1a0;
  ulong uStack_198;
  long **pplStack_190;
  long *plStack_188;
  long **pplStack_180;
  long *plStack_178;
  long **pplStack_170;
  long *plStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  long *plStack_150;
  long *plStack_148;
  long **pplStack_140;
  long *plStack_138;
  long *plStack_130;
  long *plStack_128;
  long *aplStack_120 [2];
  long *plStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined1 auStack_e8 [40];
  undefined1 auStack_c0 [40];
  undefined1 auStack_98 [40];
  undefined8 uStack_70;
  
  plVar12 = param_2;
  pplVar11 = param_3;
  pplVar14 = param_4;
  puVar15 = param_5;
  plStack_130 = param_1;
  func_0x00010b1f1b68();
  uStack_70 = extraout_x8;
  __ZNSt3__16chrono12system_clock3nowEv();
  plStack_150 = *param_3;
  plStack_148 = param_3[1];
  uVar19 = param_2[3];
  puVar1 = (ulong *)(param_2 + 3);
  if ((uVar19 & 1) != 0) {
    puVar1 = (ulong *)(uVar19 + 7);
  }
  pplStack_140 = aplStack_120;
  plStack_138 = param_1;
  for (lVar24 = (long)(int)param_2[4] << 3; lVar24 != 0; lVar24 = lVar24 + -8) {
    unaff_x28 = *puVar1;
    plVar10 = *(long **)(unaff_x28 + 0x28);
    pplVar5 = *(long ***)(unaff_x28 + 0x30);
    plVar23 = *param_3;
    pplVar6 = (long **)param_3[1];
    if ((long)plVar10 < (long)pplVar6 && (long)plVar23 < (long)pplVar5) {
      unaff_x21 = plVar23;
      if ((long)plVar23 <= (long)plVar10) {
        unaff_x21 = plVar10;
      }
      unaff_x24 = pplVar6;
      if ((long)pplVar5 <= (long)pplVar6) {
        unaff_x24 = pplVar5;
      }
      uVar17 = *(uint *)(unaff_x28 + 0x40);
      unaff_x25 = (ulong)uVar17;
      if ((((uVar17 != 3) || ((*(byte *)(param_2 + 10) & 1) != 0)) ||
          (*(int *)(unaff_x28 + 0x10) != 1)) || (**(int **)(unaff_x28 + 0x18) == (int)param_4)) {
        plVar10 = param_2;
        func_0x00010b1ee6c4();
        plStack_128 = plVar10;
        aplStack_120[0] = plVar12;
        pplVar11 = pplStack_140;
        if (uVar17 == 3) {
          pplVar11 = &plStack_128;
        }
        *(undefined4 *)param_5 = *(undefined4 *)pplVar11;
        *(undefined1 *)((long)param_5 + 4) = *(undefined1 *)((long)pplVar11 + 4);
        puVar15 = (undefined8 *)((long)unaff_x24 - (long)unaff_x21);
        param_6 = (ulong)*(uint *)(unaff_x28 + 0x40);
        plVar12 = (long *)(ulong)*(uint *)(unaff_x28 + 0x44);
        param_7 = (long)(plStack_138 + *(long *)(unaff_x28 + 0x38) * -0x7d) / 1000000;
        uStack_108 = param_5[1];
        plStack_110 = (long *)*param_5;
        uStack_100 = *(undefined4 *)(param_5 + 2);
        pplVar14 = (long **)(ulong)((1 < *(int *)(unaff_x28 + 0x10) | *(byte *)(param_2 + 10)) & 1);
        param_1 = plStack_130;
        pplVar11 = param_4;
        FUN_10b1f0020();
      }
    }
    puVar1 = puVar1 + 1;
  }
  pplVar5 = (long **)((long)plStack_148 - (long)plStack_150);
  uVar8 = pplVar5 == (long **)0x0;
  if (!(bool)uVar8 && (long)plStack_150 <= (long)plStack_148) {
    unaff_x21 = (long *)*plStack_130;
    uVar17 = 0xca;
    if (*(char *)(param_5 + 2) == '\0') {
      uVar17 = 200;
    }
    param_2 = (long *)(ulong)uVar17;
    func_0x00010b1f1e00();
    func_0x00010b1f1c54();
    func_0x00010b1f1de8(auStack_e8);
    unaff_x24 = &plStack_110;
    FUN_10b1f1ac4(auStack_c0,*(undefined4 *)(param_5 + 1));
    func_0x00010b12aca4(auStack_98,*(undefined4 *)((long)param_5 + 0xc));
    func_0x00010b1f1c24(&plStack_128,&plStack_110);
    pplVar11 = &plStack_128;
    param_1 = unaff_x21;
    plVar12 = param_2;
    pplVar14 = pplVar5;
    FUN_10b114b00();
    func_0x00010b1f1cc0();
    lVar20 = 0x88;
    param_4 = &plStack_110;
    do {
      func_0x00010b1f1d88();
      lVar20 = lVar20 + -0x28;
      uVar8 = lVar20 == -0x18;
    } while (!(bool)uVar8);
  }
  func_0x00010b1f1b44(uStack_70);
  if ((bool)uVar8) {
    return;
  }
  ___stack_chk_fail();
  plVar10 = param_1;
  func_0x00010b1f1cc0();
  func_0x00010b1f1d20(&plStack_110);
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x00010b1f1c48();
    uVar16 = (uint)param_6;
    uVar17 = (uint)pplVar11;
    iVar13 = (int)pplVar14;
  } while (!(bool)uVar8);
  func_0x00010b1f1b78();
  pcStack_158 = FUN_10b1eed6c;
  uStack_1b0 = unaff_x28;
  puStack_1a8 = puVar1;
  lStack_1a0 = lVar24;
  uStack_198 = unaff_x25;
  pplStack_190 = unaff_x24;
  plStack_188 = param_2;
  pplStack_180 = pplVar5;
  plStack_178 = unaff_x21;
  pplStack_170 = param_4;
  plStack_168 = param_1;
  puStack_160 = &stack0xfffffffffffffff0;
  func_0x00010b1f1e64();
  uStack_240 = 0;
  lStack_210 = (long)puVar15 / 1000;
  uStack_200 = 0;
  uStack_238 = 0;
  uStack_230 = 0;
  uStack_228 = 0;
  lStack_218 = plVar12[1];
  lStack_220 = *plVar12;
  uStack_208 = (ulong)uVar17;
  bVar9 = uVar17 == 1;
  if (bVar9) {
    uStack_200 = (ulong)uVar16;
  }
  plVar23 = (long *)0x0;
  plStack_2b0 = (long *)0x0;
  plStack_2a8 = (long *)0x0;
  plStack_2a0 = (long *)0x0;
  plVar21 = plVar10 + 3;
  func_0x00010b1f1c60(*plVar21);
  plVar22 = plVar21;
  if (!bVar9) {
    plVar22 = extraout_x9;
  }
  lVar20 = lStack_220;
  lVar7 = lStack_218;
  for (lVar24 = (long)(int)plVar10[4] << 3; lStack_220 = lVar20, lStack_218 = lVar7, lVar24 != 0;
      lVar24 = lVar24 + -8) {
    lVar20 = *(long *)(*plVar22 + 0x28);
    lVar7 = *(long *)(*plVar22 + 0x30);
    if (plVar23 < plStack_2a0) {
      *plVar23 = lVar20;
      plVar23[1] = lVar7;
      func_0x00010b1f1e40();
      plVar23 = plVar23 + 0xc;
    }
    else {
      pplVar11 = &plStack_2b0;
      FUN_10b1f08cc(pplVar11,((long)plVar23 - (long)plStack_2b0) / 0x60 + 1);
      FUN_10b1f09e0(auStack_298,pplVar11,((long)plStack_2a8 - (long)plStack_2b0) / 0x60,&plStack_2a0
                   );
      plVar10 = plStack_288;
      *plStack_288 = lVar20;
      plStack_288[1] = lVar7;
      func_0x00010b1f1e40();
      plStack_288 = plVar10 + 0xc;
      FUN_10b1f091c(&plStack_2b0,auStack_298);
      plVar23 = plStack_2a8;
      FUN_10b1f0a90(auStack_298);
    }
    plVar22 = plVar22 + 1;
    plStack_2a8 = plVar23;
    lVar20 = lStack_220;
    lVar7 = lStack_218;
  }
  FUN_10b1f0014(auStack_298,auStack_248);
  plVar23 = plStack_2a8;
  lVar24 = 0;
  plStack_1f8 = (long *)0x0;
  plStack_1f0 = (long *)0x0;
  plStack_1e8 = (long *)0x0;
  for (plVar10 = plStack_2b0; plVar22 = plStack_1f0, plVar10 != plVar23; plVar10 = plVar10 + 0xc) {
    lVar4 = *plVar10;
    lVar18 = plVar10[1];
    if (lVar20 < lVar18 && lVar4 < lVar7) {
      lVar2 = lVar4;
      if (lVar4 <= lVar20) {
        lVar2 = lVar20;
      }
      lVar3 = lVar18;
      if (lVar7 <= lVar18) {
        lVar3 = lVar7;
      }
      if (lVar4 < lVar20) {
        if (plStack_1f0 < plStack_1e8) {
          *plStack_1f0 = lVar4;
          plStack_1f0[1] = lVar20;
          func_0x00010b1f1d9c();
          plVar22 = plVar22 + 0xc;
        }
        else {
          func_0x00010b1f1dbc(((long)plStack_1f0 - (long)plStack_1f8) / 0x60);
          func_0x00010b1f1cb0();
          plVar22 = (long *)CONCAT71(uStack_1cf,uStack_1d0);
          *plVar22 = lVar4;
          plVar22[1] = lVar20;
          func_0x00010b1f1d9c();
          func_0x00010b1f1c90();
          func_0x00010b1f1d68();
        }
        lVar18 = plVar10[1];
        plStack_1f0 = plVar22;
      }
      if (lVar7 < lVar18) {
        lStack_1e0 = *plVar10;
        if (*plVar10 <= lVar7) {
          lStack_1e0 = lVar7;
        }
        uStack_1d0 = 1;
        lStack_1d8 = lVar18;
        FUN_10b1f0adc(&plStack_1f8,&lStack_1e0,plVar10 + 2);
      }
      lVar24 = (lVar3 + lVar24) - lVar2;
    }
    else {
      FUN_10b1f0adc(&plStack_1f8,plVar10,plVar10 + 2);
    }
  }
  if (plStack_1f0 < plStack_1e8) {
    func_0x00010b1f1d10();
    plVar22 = plVar22 + 0xc;
  }
  else {
    func_0x00010b1f1dbc(((long)plStack_1f0 - (long)plStack_1f8) / 0x60);
    func_0x00010b1f1cb0();
    plVar22 = (long *)CONCAT71(uStack_1cf,uStack_1d0);
    func_0x00010b1f1d10();
    func_0x00010b1f1c90();
    func_0x00010b1f1d68();
  }
  if (plStack_2b0 != (long *)0x0) {
    plStack_1f0 = plVar22;
    FUN_10b1f0bb8(&plStack_2b0);
    __ZdlPv(plStack_2b0);
    plVar22 = plStack_1f0;
  }
  plStack_2b0 = plStack_1f8;
  plStack_2a0 = plStack_1e8;
  plStack_1f0 = (long *)0x0;
  plStack_1e8 = (long *)0x0;
  plStack_1f8 = (long *)0x0;
  plStack_2a8 = plVar22;
  func_0x00010b1f0c6c(&plStack_1f8);
  FUN_10b24df68(auStack_298);
  if ((iVar13 != 0) && (lVar24 != plVar12[1] - *plVar12)) {
    FUN_10b20bea8(param_7,&UNK_10f732566,0x16);
  }
  FUN_10b24df68(auStack_248);
  FUN_10b1f0bf8(plVar21);
  plVar10 = plStack_2a8;
  for (plVar12 = plStack_2b0; plVar23 = plStack_2b0, plVar12 != plStack_2a8; plVar12 = plVar12 + 0xc
      ) {
    if (*plVar12 != plVar12[7] || plVar12[1] != plVar12[8]) {
      plVar12[7] = *plVar12;
      plVar12[8] = plVar12[1];
    }
  }
  for (; plVar23 != plVar10; plVar23 = plVar23 + 0xc) {
    func_0x00010b1f0c0c(plVar21);
    FUN_10b1f0868();
  }
  FUN_10b1f0548(plVar21);
  func_0x00010b1f1e28();
  return;
}



/* Entry: 10b1eed6c; end: 10b1ef15b;  */

void FUN_10b1eed6c(long param_1,long *param_2,uint param_3,int param_4,long param_5,uint param_6,
                  undefined8 param_7)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  long **pplVar8;
  long lVar9;
  long *extraout_x9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long *plStack_160;
  long *plStack_158;
  long *plStack_150;
  undefined1 auStack_148 [16];
  long *plStack_138;
  undefined1 auStack_f8 [8];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  
  func_0x00010b1f1e64();
  uStack_f0 = 0;
  lStack_c0 = param_5 / 1000;
  uStack_b0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  lStack_c8 = param_2[1];
  lStack_d0 = *param_2;
  uStack_b8 = (ulong)param_3;
  bVar7 = param_3 == 1;
  if (bVar7) {
    uStack_b0 = (ulong)param_6;
  }
  plVar13 = (long *)0x0;
  plStack_160 = (long *)0x0;
  plStack_158 = (long *)0x0;
  plStack_150 = (long *)0x0;
  plVar10 = (long *)(param_1 + 0x18);
  func_0x00010b1f1c60(*plVar10);
  plVar1 = plVar10;
  if (!bVar7) {
    plVar1 = extraout_x9;
  }
  lVar4 = lStack_d0;
  lVar6 = lStack_c8;
  for (lVar12 = (long)*(int *)(param_1 + 0x20) << 3; lStack_d0 = lVar4, lStack_c8 = lVar6,
      lVar12 != 0; lVar12 = lVar12 + -8) {
    lVar4 = *(long *)(*plVar1 + 0x28);
    lVar6 = *(long *)(*plVar1 + 0x30);
    if (plVar13 < plStack_150) {
      *plVar13 = lVar4;
      plVar13[1] = lVar6;
      func_0x00010b1f1e40();
      plVar13 = plVar13 + 0xc;
    }
    else {
      pplVar8 = &plStack_160;
      FUN_10b1f08cc(pplVar8,((long)plVar13 - (long)plStack_160) / 0x60 + 1);
      FUN_10b1f09e0(auStack_148,pplVar8,((long)plStack_158 - (long)plStack_160) / 0x60,&plStack_150)
      ;
      plVar13 = plStack_138;
      *plStack_138 = lVar4;
      plStack_138[1] = lVar6;
      func_0x00010b1f1e40();
      plStack_138 = plVar13 + 0xc;
      FUN_10b1f091c(&plStack_160,auStack_148);
      plVar13 = plStack_158;
      FUN_10b1f0a90(auStack_148);
    }
    plVar1 = plVar1 + 1;
    plStack_158 = plVar13;
    lVar4 = lStack_d0;
    lVar6 = lStack_c8;
  }
  FUN_10b1f0014(auStack_148,auStack_f8);
  plVar1 = plStack_158;
  lVar12 = 0;
  plStack_a8 = (long *)0x0;
  plStack_a0 = (long *)0x0;
  plStack_98 = (long *)0x0;
  for (plVar13 = plStack_160; plVar11 = plStack_a0, plVar13 != plVar1; plVar13 = plVar13 + 0xc) {
    lVar5 = *plVar13;
    lVar9 = plVar13[1];
    if (lVar4 < lVar9 && lVar5 < lVar6) {
      lVar2 = lVar5;
      if (lVar5 <= lVar4) {
        lVar2 = lVar4;
      }
      lVar3 = lVar9;
      if (lVar6 <= lVar9) {
        lVar3 = lVar6;
      }
      if (lVar5 < lVar4) {
        if (plStack_a0 < plStack_98) {
          *plStack_a0 = lVar5;
          plStack_a0[1] = lVar4;
          func_0x00010b1f1d9c();
          plVar11 = plVar11 + 0xc;
        }
        else {
          func_0x00010b1f1dbc(((long)plStack_a0 - (long)plStack_a8) / 0x60);
          func_0x00010b1f1cb0();
          plVar11 = (long *)CONCAT71(uStack_7f,uStack_80);
          *plVar11 = lVar5;
          plVar11[1] = lVar4;
          func_0x00010b1f1d9c();
          func_0x00010b1f1c90();
          func_0x00010b1f1d68();
        }
        lVar9 = plVar13[1];
        plStack_a0 = plVar11;
      }
      if (lVar6 < lVar9) {
        lStack_90 = *plVar13;
        if (*plVar13 <= lVar6) {
          lStack_90 = lVar6;
        }
        uStack_80 = 1;
        lStack_88 = lVar9;
        FUN_10b1f0adc(&plStack_a8,&lStack_90,plVar13 + 2);
      }
      lVar12 = (lVar3 + lVar12) - lVar2;
    }
    else {
      FUN_10b1f0adc(&plStack_a8,plVar13,plVar13 + 2);
    }
  }
  if (plStack_a0 < plStack_98) {
    func_0x00010b1f1d10();
    plVar11 = plVar11 + 0xc;
  }
  else {
    func_0x00010b1f1dbc(((long)plStack_a0 - (long)plStack_a8) / 0x60);
    func_0x00010b1f1cb0();
    plVar11 = (long *)CONCAT71(uStack_7f,uStack_80);
    func_0x00010b1f1d10();
    func_0x00010b1f1c90();
    func_0x00010b1f1d68();
  }
  if (plStack_160 != (long *)0x0) {
    plStack_a0 = plVar11;
    FUN_10b1f0bb8(&plStack_160);
    __ZdlPv(plStack_160);
    plVar11 = plStack_a0;
  }
  plStack_160 = plStack_a8;
  plStack_150 = plStack_98;
  plStack_a0 = (long *)0x0;
  plStack_98 = (long *)0x0;
  plStack_a8 = (long *)0x0;
  plStack_158 = plVar11;
  func_0x00010b1f0c6c(&plStack_a8);
  FUN_10b24df68(auStack_148);
  if ((param_4 != 0) && (lVar12 != param_2[1] - *param_2)) {
    FUN_10b20bea8(param_7,&UNK_10f732566,0x16);
  }
  FUN_10b24df68(auStack_f8);
  FUN_10b1f0bf8(plVar10);
  plVar1 = plStack_158;
  for (plVar13 = plStack_160; plVar11 = plStack_160, plVar13 != plStack_158; plVar13 = plVar13 + 0xc
      ) {
    if (*plVar13 != plVar13[7] || plVar13[1] != plVar13[8]) {
      plVar13[7] = *plVar13;
      plVar13[8] = plVar13[1];
    }
  }
  for (; plVar11 != plVar1; plVar11 = plVar11 + 0xc) {
    func_0x00010b1f0c0c(plVar10);
    FUN_10b1f0868();
  }
  FUN_10b1f0548(plVar10);
  func_0x00010b1f1e28();
  return;
}



/* Entry: 10b1ef15c; end: 10b1ef16b;  */

void FUN_10b1ef15c(long param_1)

{
  ulong uVar1;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
  if (*(long *)(param_1 + 0x40) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    func_0x00010b1b3a40();
    *(ulong *)(param_1 + 0x40) = uVar1;
  }
  return;
}



/* Entry: 10b1ef16c; end: 10b1ef697;  */

ulong * FUN_10b1ef16c(uint5 *param_1,ulong *param_2,ulong param_3,ulong param_4,ulong *param_5,
                     ulong param_6,uint5 *param_7)

{
  uint uVar1;
  uint uVar2;
  uint5 *puVar3;
  undefined1 in_ZR;
  undefined1 uVar4;
  bool bVar5;
  undefined1 uVar6;
  uint5 *puVar7;
  uint5 *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  uint5 *puVar11;
  ulong *puVar12;
  undefined8 extraout_x8;
  ulong uVar13;
  uint5 *extraout_x9;
  uint5 *extraout_x9_00;
  uint5 *extraout_x9_01;
  uint5 *extraout_x9_02;
  uint5 *extraout_x9_03;
  uint5 *extraout_x10;
  ulong uVar14;
  ulong unaff_x20;
  ulong unaff_x21;
  long *plVar15;
  long unaff_x22;
  ulong *puVar16;
  long lVar17;
  ulong *unaff_x25;
  ulong unaff_x26;
  ulong *puVar18;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined4 uStack_210;
  ulong *puStack_1f8;
  ulong uStack_1f0;
  ulong *puStack_1e8;
  uint5 *puStack_1e0;
  ulong *puStack_1d8;
  long lStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong *puStack_1b8;
  undefined1 *puStack_1b0;
  code *pcStack_1a8;
  uint5 *puStack_1a0;
  uint uStack_194;
  long *plStack_190;
  ulong uStack_188;
  uint5 *puStack_180;
  ulong uStack_178;
  uint5 *puStack_170;
  uint5 *puStack_168;
  long lStack_160;
  ulong uStack_158;
  ulong auStack_150 [3];
  ulong uStack_138;
  uint5 *apuStack_128 [3];
  uint5 uStack_110;
  undefined8 uStack_108;
  ulong uStack_100;
  undefined1 auStack_e8 [40];
  undefined1 auStack_c0 [40];
  undefined1 auStack_98 [40];
  undefined8 uStack_70;
  
  puVar7 = param_1;
  puVar12 = param_5;
  uStack_188 = param_6;
  puStack_180 = param_7;
  uStack_158 = param_4;
  func_0x00010b1f1b68();
  puVar18 = param_2;
  uStack_70 = extraout_x8;
  FUN_10b1ee8f8(param_2,*(long *)(puVar7 + 1));
  if ((int)puVar18 == 0) {
    puVar16 = (ulong *)0x0;
    uVar14 = 0;
  }
  else {
    uStack_194 = (uint)param_5;
    FUN_10b1ee958(auStack_150 + 2,param_1,param_2);
    bVar5 = ((ulong)puStack_180 & 1) == 0;
    uStack_178 = uStack_188;
    if (bVar5) {
      uStack_178 = 0;
    }
    auStack_150[1] = 0x7fffffffffffffff;
    auStack_150[0] = uStack_178;
    func_0x00010b1f1c60(param_2[3]);
    puVar7 = extraout_x10;
    if (!bVar5) {
      puVar7 = extraout_x9;
    }
    puStack_170 = puVar7 + (int)extraout_x10[1];
    plStack_190 = (long *)(uStack_158 + 0x10);
    puStack_1a0 = extraout_x10;
    while (uVar2 = uStack_194, in_ZR = puVar7 == puStack_170, !(bool)in_ZR) {
      unaff_x22 = *(long *)puVar7;
      puStack_168 = puVar7;
      if (*(int *)(unaff_x22 + 0x40) == 1) {
        uVar14 = *(ulong *)(unaff_x22 + 0x28);
        if (uVar14 != 0x7fffffffffffffff && (long)uStack_178 < *(long *)(unaff_x22 + 0x30)) {
          uVar13 = uStack_178;
          if ((long)uStack_178 <= (long)uVar14) {
            uVar13 = uVar14;
          }
          lStack_160 = *(long *)(unaff_x22 + 0x30) - uVar13;
          plVar15 = plStack_190;
          while (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0) {
            lVar17 = *(long *)param_1;
            FUN_10b12983c(&uStack_110,(int)plVar15[2]);
            func_0x00010b1f1b04(auStack_e8,*(undefined4 *)(unaff_x22 + 0x40));
            func_0x00010b1f1d2c();
            func_0x00010b1f1c54(auStack_c0);
            func_0x00010b123d80();
            func_0x00010b1ee6c4(param_2);
            func_0x00010b1ee698(auStack_98);
            func_0x00010b1f1c24(apuStack_128,&uStack_110);
            FUN_10b114b00(lVar17,0xc6,apuStack_128,lStack_160);
            FUN_10b120998(apuStack_128);
            lVar17 = 0x88;
            do {
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                        ((long)&uStack_110 + lVar17);
              lVar17 = lVar17 + -0x28;
              unaff_x25 = param_2;
            } while (lVar17 != -0x18);
          }
        }
      }
      puVar7 = puStack_168 + 1;
    }
    uVar14 = (ulong)_uStack_110 >> 0x28;
    uVar1 = (uint)_uStack_110;
    uStack_110 = (uint5)(uVar1 & 0xffffff00);
    _uStack_110 = CONCAT35((int3)uVar14,uStack_110);
    unaff_x26 = (ulong)uStack_194;
    uStack_108 = 0;
    uStack_100 = uStack_100 & 0xffffffffffffff00;
    puVar11 = (uint5 *)(unaff_x26 | 0x100000000);
    puVar12 = auStack_150;
    param_7 = &uStack_110;
    param_6 = uStack_158;
    FUN_10b1ef698();
    __ZNSt3__16chrono12system_clock3nowEv();
    func_0x00010b1f1c60(param_2[3]);
    puVar7 = puStack_1a0;
    if (!(bool)in_ZR) {
      puVar7 = extraout_x9_00;
    }
    lVar17 = (long)(int)param_2[4] << 3;
    puVar8 = puVar7;
joined_r0x00010b1ef38c:
    if (lVar17 == 0) {
      puVar16 = (ulong *)0x0;
      param_3 = auStack_150[2];
      param_4 = uStack_138;
    }
    else {
      puVar3 = puVar7;
      if ((((ulong)puStack_180 & 1) != 0) &&
         (in_ZR = *(ulong *)(*(long *)puVar8 + 0x30) == uStack_188, puVar3 = puVar8,
         (long)*(ulong *)(*(long *)puVar8 + 0x30) <= (long)uStack_188)) goto code_r0x00010b1ef3a8;
      puVar7 = puVar3;
      _uStack_110 = 0;
      uStack_108 = 0;
      uStack_100 = 0;
      puVar11 = (uint5 *)(ulong)((int)param_2[4] + 1);
      func_0x00010b4d36f0(&uStack_110);
      func_0x00010b1f1c60(*(long *)puStack_1a0);
      param_3 = auStack_150[2];
      param_4 = uStack_138;
      puVar8 = puStack_1a0;
      apuStack_128[0] = &uStack_110;
      if (!(bool)in_ZR) {
        puVar8 = extraout_x9_01;
      }
      for (; uVar4 = puVar7 <= puVar8, puVar8 != puVar7; puVar8 = puVar8 + 1) {
        puVar11 = *(uint5 **)puVar8;
        func_0x00010b1f0d8c(apuStack_128);
      }
      uVar6 = 1;
      if (((ulong)puStack_180 & 1) != 0) {
        uVar14 = *(ulong *)(*(long *)puVar7 + 0x28);
        uVar4 = uStack_188 <= uVar14;
        uVar6 = uVar14 == uStack_188;
        if ((long)uVar14 < (long)uStack_188) {
          puVar8 = &uStack_110;
          func_0x00010b1f0c0c();
          puVar11 = *(uint5 **)puVar7;
          func_0x00010b24e2b8();
          uVar14 = uStack_188;
          *(ulong *)(puVar8 + 6) = uStack_188;
          *(ulong *)(*(long *)puVar7 + 0x28) = uVar14;
        }
      }
      unaff_x25 = (ulong *)0x0;
      puVar16 = (ulong *)0x0;
      func_0x00010b1f1d2c();
      *(bool *)(param_2 + 10) = (bool)uVar4 && !(bool)uVar6;
      unaff_x22 = (long)param_1 / 1000;
      while( true ) {
        func_0x00010b1f1c60(param_2[3]);
        puVar8 = puStack_1a0;
        if (!(bool)uVar6) {
          puVar8 = extraout_x9_02;
        }
        if (puVar7 == puVar8 + (int)param_2[4]) break;
        lVar17 = *(long *)puVar7;
        uVar6 = *(int *)(lVar17 + 0x40) == 3;
        if ((bool)uVar6) {
          func_0x00010b1f1d74();
        }
        else {
          puVar16 = (ulong *)((*(ulong *)(lVar17 + 0x30) - *(ulong *)(lVar17 + 0x28)) +
                             (long)puVar16);
          if ((unaff_x25 == (ulong *)0x0) ||
             (uVar6 = unaff_x25[6] == *(ulong *)(lVar17 + 0x28), !(bool)uVar6)) {
            *(long *)(lVar17 + 0x38) = unaff_x22;
            *(undefined4 *)(lVar17 + 0x40) = 3;
            *(uint *)(lVar17 + 0x44) = uVar2;
            func_0x00010b1f1d2c();
            if ((bool)uVar6) {
              puVar11 = (uint5 *)(ulong)*(uint *)(*plStack_190 + 0x10);
              func_0x000107c2845c(lVar17 + 0x10);
            }
            func_0x00010b1f1d74();
            func_0x00010b1f1c60(_uStack_110);
            puVar8 = &uStack_110;
            if (!(bool)uVar6) {
              puVar8 = extraout_x9_03;
            }
            unaff_x25 = *(ulong **)(puVar8 + (long)(int)uStack_108 + -1);
          }
          else {
            unaff_x25[6] = *(ulong *)(lVar17 + 0x30);
          }
        }
        puVar7 = puVar7 + 1;
      }
      in_ZR = puStack_1a0 == &uStack_110;
      if (!(bool)in_ZR) {
        in_ZR = param_2[5] == uStack_100;
        if ((bool)in_ZR) {
          puVar11 = &uStack_110;
          func_0x000107c303a4(puStack_1a0);
        }
        else {
          func_0x00010b1f0bf8(puStack_1a0);
          if ((int)uStack_108 != 0) {
            puVar11 = &uStack_110;
            func_0x000107c303c4(puStack_1a0);
          }
        }
      }
      FUN_10b1f0e54(&uStack_110);
    }
    func_0x00010b24e358(param_2);
    func_0x00010b24e3b8(param_2);
    func_0x00010b1ee6c4(param_2);
    if (((ulong)puVar11 >> 0x20 & 1) == 0) {
      unaff_x20 = 0;
      unaff_x21 = 0;
      uVar14 = 0;
    }
    else {
      func_0x00010b24e328(param_2);
      func_0x00010b24e388(param_2);
      puVar18 = param_2;
      FUN_10b1ef77c();
      *(int *)(puVar18 + 2) = (int)puVar11;
      uVar14 = (ulong)puVar11 & 0xffffff00;
      unaff_x21 = (ulong)puVar11 & 0xff;
      unaff_x20 = 0x100000000;
    }
    puVar18 = auStack_150 + 2;
    func_0x00010b1f0cd8();
    uVar14 = unaff_x21 | unaff_x20 | uVar14;
    param_1 = puVar7;
  }
  func_0x00010b1f1b44(uStack_70);
  if ((bool)in_ZR) {
    return puVar16;
  }
  ___stack_chk_fail();
  FUN_10b1f0e54(&uStack_110);
  puVar9 = auStack_150 + 2;
  func_0x00010b1f0cd8();
  func_0x00010b1f1b78();
  pcStack_1a8 = FUN_10b1ef698;
  puVar10 = puVar9;
  puStack_1f8 = param_2;
  uStack_1f0 = unaff_x26;
  puStack_1e8 = unaff_x25;
  puStack_1e0 = param_1;
  puStack_1d8 = puVar16;
  lStack_1d0 = unaff_x22;
  uStack_1c8 = unaff_x21;
  uStack_1c0 = unaff_x20;
  puStack_1b8 = puVar18;
  puStack_1b0 = &stack0xfffffffffffffff0;
  for (; param_3 != param_4; param_3 = param_3 + 0x50) {
    puVar18 = puVar10;
    if ((*(long *)(param_3 + 0x28) < (long)puVar12[1] && (long)*puVar12 < *(long *)(param_3 + 0x30))
       && (*(int *)(param_3 + 0x40) == 2)) {
      puVar18 = (ulong *)*puVar9;
      uVar13 = *(ulong *)(param_6 + 0x18);
      __ZNSt3__16chrono12system_clock3nowEv();
      uStack_218 = *(undefined8 *)(param_7 + 1);
      uStack_220 = *(undefined8 *)param_7;
      uStack_210 = (undefined4)param_7[2];
      FUN_10b1f06c0(puVar18,param_3,param_6,uVar14,uVar14 >> 0x20 == 0,1 < uVar13,puVar10,
                    &uStack_220);
    }
    puVar10 = puVar18;
  }
  return puVar10;
code_r0x00010b1ef3a8:
  puVar8 = puVar8 + 1;
  lVar17 = lVar17 + -8;
  goto joined_r0x00010b1ef38c;
}



/* Entry: 10b1ef698; end: 10b1ef77b;  */

void FUN_10b1ef698(undefined8 *param_1,ulong param_2,long param_3,long param_4,long *param_5,
                  long param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  
  puVar1 = param_1;
  for (; param_3 != param_4; param_3 = param_3 + 0x50) {
    puVar3 = puVar1;
    if ((*(long *)(param_3 + 0x28) < param_5[1] && *param_5 < *(long *)(param_3 + 0x30)) &&
       (*(int *)(param_3 + 0x40) == 2)) {
      puVar3 = (undefined8 *)*param_1;
      uVar2 = *(ulong *)(param_6 + 0x18);
      __ZNSt3__16chrono12system_clock3nowEv();
      uStack_78 = param_7[1];
      uStack_80 = *param_7;
      uStack_70 = *(undefined4 *)(param_7 + 2);
      FUN_10b1f06c0(puVar3,param_3,param_6,param_2,param_2 >> 0x20 == 0,1 < uVar2,puVar1,&uStack_80)
      ;
    }
    puVar1 = puVar3;
  }
  return;
}



/* Entry: 10b1ef77c; end: 10b1ef7bf;  */

void FUN_10b1ef77c(long param_1)

{
  ulong uVar1;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 8;
  if (*(long *)(param_1 + 0x48) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    func_0x00010b1b3a40();
    *(ulong *)(param_1 + 0x48) = uVar1;
  }
  return;
}



/* Entry: 10b1ef7c0; end: 10b1efcb7;  */

undefined1  [16]
FUN_10b1ef7c0(long *param_1,long *param_2,undefined8 param_3,undefined8 *param_4,undefined8 param_5,
             undefined8 *param_6)

{
  ulong *puVar1;
  byte bVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  int iVar6;
  long *plVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined8 extraout_x8;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined4 uStack_194;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined4 uStack_180;
  long lStack_170;
  long lStack_168;
  long lStack_158;
  long lStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined1 auStack_f8 [40];
  undefined1 auStack_d0 [40];
  undefined1 auStack_a8 [48];
  undefined8 uStack_78;
  
  plVar5 = param_1;
  func_0x00010b1f1b68();
  plVar7 = *(long **)((long)plVar5 + 8);
  plVar5 = param_2;
  uStack_78 = extraout_x8;
  FUN_10b1ee8f8();
  if ((int)plVar5 != 0) {
    puVar3 = (undefined8 *)*param_4;
    while (in_ZR = puVar3 == param_4 + 1, !(bool)in_ZR) {
      if (puVar3[4] != 0 || puVar3[5] != 0) {
        func_0x00010b1f1db0();
        plVar16 = param_1;
        plVar5 = param_2;
        FUN_10b1ee958(&lStack_158);
        __ZNSt3__16chrono12system_clock3nowEv();
        puVar15 = (undefined8 *)*param_4;
        puVar4 = plVar16;
        while (lVar13 = lStack_150, puVar15 != param_4 + 1) {
          lVar12 = puVar15[5];
          lVar14 = puVar15[4];
          lVar11 = lVar12;
          if (0 < (int)*(uint *)(param_2 + 4)) {
            uVar10 = param_2[3];
            puVar1 = (ulong *)(param_2 + 3);
            if ((uVar10 & 1) != 0) {
              puVar1 = (ulong *)(uVar10 + 7);
            }
            if (lVar14 <= *(long *)(*puVar1 + 0x28)) {
              lVar14 = *(long *)(*puVar1 + 0x28);
            }
            lVar11 = *(long *)(puVar1[(ulong)*(uint *)(param_2 + 4) - 1] + 0x30);
            if (lVar12 <= *(long *)(puVar1[(ulong)*(uint *)(param_2 + 4) - 1] + 0x30)) {
              lVar11 = lVar12;
            }
          }
          uStack_188 = param_6[1];
          uStack_190 = *param_6;
          uStack_180 = *(undefined4 *)(param_6 + 2);
          lStack_170 = lVar14;
          lStack_168 = lVar11;
          for (lVar12 = lStack_158; lVar12 != lVar13; lVar12 = lVar12 + 0x50) {
            puVar17 = puVar4;
            if ((*(long *)(lVar12 + 0x28) < lVar11 && lVar14 < *(long *)(lVar12 + 0x30)) &&
               (*(int *)(lVar12 + 0x40) == 1)) {
              puVar17 = (undefined8 *)*param_1;
              __ZNSt3__16chrono12system_clock3nowEv();
              FUN_10b1f057c(puVar17,lVar12,param_5,puVar4,1,&uStack_190);
            }
            puVar4 = puVar17;
          }
          uStack_194 = (undefined4)param_5;
          uStack_118 = 0;
          uStack_120 = 0;
          uStack_108 = 0;
          uStack_110 = 0;
          uStack_100 = 0x3f800000;
          FUN_10b1e6af0(&uStack_120,&uStack_194);
          uStack_138 = param_6[1];
          uStack_140 = *param_6;
          uStack_130 = *(undefined4 *)(param_6 + 2);
          FUN_10b1ef698(param_1,0,lStack_158,lStack_150,&lStack_170,&uStack_120,&uStack_140);
          func_0x000107c2be48(&uStack_120);
          plVar5 = &lStack_170;
          FUN_10b1eed6c(param_2,plVar5,2,1,plVar16,param_5,*param_1);
          func_0x000107c27be0();
          puVar4 = puVar15;
        }
        func_0x00010b1f1db0();
        bVar2 = *(byte *)(param_6 + 2);
        plVar16 = plVar5;
        if (0 < (long)puVar3 - (long)puVar4) {
          lVar13 = *param_1;
          uVar8 = 0xcb;
          if ((bVar2 & 1) == 0) {
            uVar8 = 0xc9;
          }
          plVar16 = (long *)(ulong)uVar8;
          func_0x00010b1f1c3c();
          func_0x00010b1f1c54();
          func_0x00010b1f1de8(auStack_f8);
          func_0x00010b1f1e38(auStack_d0);
          func_0x00010b1f1da8(auStack_a8);
          func_0x00010b1f1b8c();
          FUN_10b114b00(lVar13,plVar16,&uStack_140,(long)puVar3 - (long)puVar4);
          func_0x00010b1f1c34();
          lVar13 = 0x88;
          do {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                      ((long)&uStack_120 + lVar13);
            lVar13 = lVar13 + -0x28;
          } while (lVar13 != -0x18);
        }
        lVar13 = (long)plVar7 - (long)plVar5;
        in_ZR = lVar13 == 1;
        if (0 < lVar13) {
          lVar14 = *param_1;
          uVar9 = 0xca;
          if ((bVar2 & 1) == 0) {
            uVar9 = 200;
          }
          func_0x00010b1f1c3c();
          func_0x00010b1f1c54();
          func_0x00010b1f1ddc(auStack_f8);
          func_0x00010b1f1e38(auStack_d0);
          func_0x00010b1f1da8(auStack_a8);
          func_0x00010b1f1b8c();
          FUN_10b114b00(lVar14,uVar9,&uStack_140,lVar13);
          func_0x00010b1f1c34();
          lVar14 = 0x88;
          do {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                      ((long)&uStack_120 + lVar14);
            lVar14 = lVar14 + -0x28;
          } while (lVar14 != -0x18);
          lVar14 = *param_1;
          uVar8 = 0xcb;
          if ((bVar2 & 1) == 0) {
            uVar8 = 0xc9;
          }
          plVar16 = (long *)(ulong)uVar8;
          func_0x00010b1f1c3c();
          func_0x00010b1f1c54();
          func_0x00010b1f1ddc(auStack_f8);
          func_0x00010b1f1e38(auStack_d0);
          func_0x00010b1f1da8(auStack_a8);
          func_0x00010b1f1b8c();
          FUN_10b114b00(lVar14,plVar16,&uStack_140,lVar13);
          func_0x00010b1f1c34();
          lVar13 = 0x88;
          do {
            func_0x00010b1f1d88();
            lVar13 = lVar13 + -0x28;
            in_ZR = lVar13 == -0x18;
          } while (!(bool)in_ZR);
        }
        func_0x00010b1f0cd8(&lStack_158);
        plVar5 = (long *)0x1;
        plVar7 = plVar16;
        goto LAB_10b1efb78;
      }
      func_0x000107c27be0();
    }
    plVar5 = (long *)0x0;
  }
LAB_10b1efb78:
  func_0x00010b1f1b44(uStack_78);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b1f1c34();
    func_0x00010b1f1d20(&uStack_120);
    do {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      func_0x00010b1f1c48();
      iVar6 = (int)plVar7;
    } while (!(bool)in_ZR);
    plVar5 = &lStack_158;
    func_0x00010b1f0cd8();
    func_0x00010b1f1b78();
    lVar14 = 0;
    lVar13 = 0;
    uVar10 = plVar5[3];
    puVar1 = (ulong *)(plVar5 + 3);
    if ((uVar10 & 1) != 0) {
      puVar1 = (ulong *)(uVar10 + 7);
    }
    for (lVar11 = (long)(int)plVar5[4] << 3; lVar11 != 0; lVar11 = lVar11 + -8) {
      uVar10 = *puVar1;
      if (*(int *)(uVar10 + 0x40) == 1) {
        lVar12 = *(long *)(uVar10 + 0x30) - *(long *)(uVar10 + 0x28);
        if (*(int *)(uVar10 + 0x48) == iVar6) {
          lVar13 = lVar12 + lVar13;
        }
        else {
          lVar14 = lVar12 + lVar14;
        }
      }
      puVar1 = puVar1 + 1;
    }
    auVar19._8_8_ = lVar14;
    auVar19._0_8_ = lVar13;
    return auVar19;
  }
  auVar18._8_8_ = plVar7;
  auVar18._0_8_ = plVar5;
  return auVar18;
}



/* Entry: 10b1efcb8; end: 10b1efd23;  */

undefined1  [16] FUN_10b1efcb8(long param_1,int param_2)

{
  ulong *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  lVar3 = 0;
  lVar2 = 0;
  uVar5 = *(ulong *)(param_1 + 0x18);
  puVar1 = (ulong *)(param_1 + 0x18);
  if ((uVar5 & 1) != 0) {
    puVar1 = (ulong *)(uVar5 + 7);
  }
  for (lVar4 = (long)*(int *)(param_1 + 0x20) << 3; lVar4 != 0; lVar4 = lVar4 + -8) {
    uVar5 = *puVar1;
    if (*(int *)(uVar5 + 0x40) == 1) {
      lVar6 = *(long *)(uVar5 + 0x30) - *(long *)(uVar5 + 0x28);
      if (*(int *)(uVar5 + 0x48) == param_2) {
        lVar2 = lVar6 + lVar2;
      }
      else {
        lVar3 = lVar6 + lVar3;
      }
    }
    puVar1 = puVar1 + 1;
  }
  auVar7._8_8_ = lVar3;
  auVar7._0_8_ = lVar2;
  return auVar7;
}



/* Entry: 10b1efd24; end: 10b1efe87;  */

void FUN_10b1efd24(long param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined ***pppuVar4;
  long *plVar5;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined **ppuStack_88;
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
  
  ppuStack_88 = &PTR_FUN_110ccad08;
  uStack_80 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_38 = 0;
  if ((*(char *)(param_2 + 0x108) == '\x01') &&
     (*(long *)(param_2 + 0xf0) != *(long *)(param_2 + 0xf8))) {
    FUN_10b1d4998(&ppuStack_88,param_2 + 0xf0);
  }
  func_0x000104bff97c(auStack_a0,param_2 + 0x20,&UNK_10f73251c);
  lVar3 = param_1;
  FUN_10b1efe88(param_1,auStack_a0);
  if ((int)lVar3 != 0) {
    uVar2 = uStack_38._4_4_;
    uVar1 = *(uint *)(param_1 + 0x18);
    func_0x00010b1f1e30();
    if (uVar2 < uVar1) goto LAB_10b1efe34;
    func_0x000107c278b8(auStack_a0,&UNK_10f73251c);
    pppuVar4 = &ppuStack_88;
    FUN_10b1ee8f8(pppuVar4,*(undefined8 *)(param_1 + 8));
    if (((ulong)pppuVar4 & 1) != 0) {
      FUN_10b1ee958(auStack_b8,param_1,&ppuStack_88);
      plVar5 = (long *)(param_3 + 0x10);
      while (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0) {
        FUN_10b1efedc(param_1,auStack_b8,*(undefined4 *)(plVar5 + 2));
      }
      FUN_10b1eff6c(param_1,auStack_b8,param_3);
      func_0x00010b1f0cd8(auStack_b8);
    }
  }
  func_0x00010b1f1e30();
LAB_10b1efe34:
  FUN_10b24e4a0(&ppuStack_88);
  return;
}



/* Entry: 10b1efe88; end: 10b1efedb;  */

bool FUN_10b1efe88(long param_1)

{
  ulong uVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined1 uStack_21;
  
  if (*(ulong *)(param_1 + 0x10) < 2) {
    return true;
  }
  puVar2 = &uStack_21;
  func_0x000107c278c4(puVar2);
  uVar3 = *(ulong *)(param_1 + 0x10);
  uVar1 = 0;
  if (uVar3 != 0) {
    uVar1 = (ulong)puVar2 / uVar3;
  }
  return puVar2 == (undefined1 *)(uVar1 * uVar3);
}



/* Entry: 10b1efedc; end: 10b1eff6b;  */

void FUN_10b1efedc(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 auStack_54 [4];
  undefined1 uStack_50;
  undefined8 uStack_4c;
  undefined1 uStack_44;
  
  lVar1 = param_2[1];
  puVar2 = param_1;
  for (lVar3 = *param_2; lVar3 != lVar1; lVar3 = lVar3 + 0x50) {
    puVar4 = puVar2;
    if (*(int *)(lVar3 + 0x40) == 1) {
      puVar4 = (undefined8 *)*param_1;
      __ZNSt3__16chrono12system_clock3nowEv();
      auStack_54[0] = 0;
      uStack_50 = 0;
      uStack_4c = 0;
      uStack_44 = 0;
      FUN_10b1f057c(puVar4,lVar3,param_3,puVar2,0,auStack_54);
    }
    puVar2 = puVar4;
  }
  return;
}



/* Entry: 10b1eff6c; end: 10b1f0013;  */

void FUN_10b1eff6c(undefined8 *param_1,long *param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 auStack_64 [4];
  undefined1 uStack_60;
  undefined8 uStack_5c;
  undefined1 uStack_54;
  
  lVar1 = param_2[1];
  puVar2 = param_1;
  for (lVar4 = *param_2; lVar4 != lVar1; lVar4 = lVar4 + 0x50) {
    puVar5 = puVar2;
    if (*(int *)(lVar4 + 0x40) == 2) {
      puVar5 = (undefined8 *)*param_1;
      uVar3 = *(ulong *)(param_3 + 0x18);
      __ZNSt3__16chrono12system_clock3nowEv();
      auStack_64[0] = 0;
      uStack_60 = 0;
      uStack_5c = 0;
      uStack_54 = 0;
      FUN_10b1f06c0(puVar5,lVar4,param_3,0,0,1 < uVar3,puVar2,auStack_64);
    }
    puVar2 = puVar5;
  }
  return;
}



/* Entry: 10b1f0014; end: 10b1f001f;  */

void FUN_10b1f0014(undefined8 param_1,undefined8 param_2)

{
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010b2507c0(param_1,0,param_2);
  func_0x00010b2509c8(&PTR_FUN_110ccac68);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b2507b4();
  }
  func_0x000107c282d4(unaff_x19 + 0x10);
  *(undefined4 *)(unaff_x19 + 0x20) = 0;
  *(undefined4 *)(unaff_x19 + 0x4c) = 0;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined4 *)(unaff_x19 + 0x48) = *(undefined4 *)(unaff_x20 + 0x48);
  *(undefined8 *)(unaff_x19 + 0x40) = uVar4;
  *(undefined8 *)(unaff_x19 + 0x38) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x30) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x28) = uVar1;
  return;
}



/* Entry: 10b1f0020; end: 10b1f0277;  */

undefined1 *
FUN_10b1f0020(long *param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,long param_5,
             undefined1 *param_6,undefined8 *param_7,undefined8 *param_8)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  long *plVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined8 extraout_x8;
  long *extraout_x9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined1 *puVar14;
  long lVar15;
  long lVar16;
  long *plStack_240;
  undefined8 uStack_238;
  undefined4 uStack_230;
  undefined8 **ppuStack_228;
  undefined4 *puStack_220;
  undefined4 *puStack_218;
  long *plStack_210;
  long lStack_208;
  long lStack_200;
  undefined8 uStack_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 *puStack_1e8;
  undefined1 *puStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long *plStack_1c8;
  undefined1 *puStack_1c0;
  undefined1 *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 *puStack_198;
  undefined1 *puStack_190;
  code *pcStack_188;
  undefined8 *puStack_180;
  undefined1 auStack_178 [24];
  undefined1 auStack_160 [40];
  undefined1 auStack_138 [40];
  undefined1 auStack_110 [40];
  undefined1 auStack_e8 [40];
  undefined1 auStack_c0 [40];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  
  plVar3 = param_1;
  puVar14 = param_3;
  lVar13 = param_5;
  puVar8 = param_6;
  puVar9 = param_8;
  puStack_180 = param_7;
  func_0x00010b1f1b68();
  lVar16 = *plVar3;
  uStack_70 = extraout_x8;
  FUN_10b12983c(auStack_160,puVar14);
  func_0x00010b1f1c54();
  func_0x00010b1f1df4(auStack_138);
  FUN_10b1e6ab0(auStack_110,param_2);
  func_0x00010b1ee698(auStack_e8,*param_8);
  FUN_10b1f1ac4(auStack_c0,*(undefined4 *)(param_8 + 1));
  func_0x00010b12aca4(auStack_98,*(undefined4 *)((long)param_8 + 0xc));
  func_0x00010b1f1ce8();
  lVar5 = 199;
  FUN_10b114b00(lVar16,199,auStack_178);
  func_0x00010b1f1ce0();
  lVar15 = 0xd8;
  do {
    puVar14 = auStack_160 + lVar15;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    lVar15 = lVar15 + -0x28;
  } while (lVar15 != -0x18);
  uVar2 = false;
  if ((int)param_6 == 3) {
    param_6 = (undefined1 *)*param_1;
    FUN_10b12983c(auStack_160,param_3);
    func_0x00010b1f1c54();
    func_0x00010b1f1df4(auStack_138);
    FUN_10b1e6ab0(auStack_110,param_2);
    func_0x00010b1ee698(auStack_e8,*param_8);
    FUN_10b1f1ac4(auStack_c0,*(undefined4 *)(param_8 + 1));
    param_3 = auStack_98;
    func_0x00010b12aca4(param_3,*(undefined4 *)((long)param_8 + 0xc));
    func_0x00010b1f1ce8();
    param_5 = (long)puStack_180 / 0x3c;
    lVar5 = 0xce;
    puVar14 = param_6;
    FUN_10b11ef50(param_6,0xce,auStack_178);
    func_0x00010b1f1ce0();
    lVar10 = 0xd8;
    do {
      func_0x00010b1f1d88();
      lVar10 = lVar10 + -0x28;
      uVar2 = lVar10 == -0x18;
    } while (!(bool)uVar2);
  }
  func_0x00010b1f1b44(uStack_70);
  if ((bool)uVar2) {
    return puVar14;
  }
  ___stack_chk_fail();
  func_0x00010b1f1ce0();
  puVar4 = auStack_88;
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x00010b1f1c48();
    uVar7 = (uint)param_5;
    uStack_1f0 = SUB84(puVar8,0);
    uStack_1ec = (undefined4)lVar13;
  } while (!(bool)uVar2);
  func_0x00010b1f1b78();
  uStack_1a0 = 0xffffffffffffff10;
  pcStack_188 = FUN_10b1f0278;
  lVar13 = lVar5;
  puStack_1e8 = param_7;
  puStack_1e0 = auStack_98;
  lStack_1d8 = lVar16;
  lStack_1d0 = lVar15;
  plStack_1c8 = param_1;
  puStack_1c0 = param_6;
  puStack_1b8 = param_3;
  uStack_1b0 = param_4;
  uStack_1a8 = param_2;
  puStack_198 = puVar14;
  puStack_190 = &stack0xfffffffffffffff0;
  FUN_10b1ee8f8(lVar5,*(undefined8 *)(puVar4 + 8));
  puVar1 = puStack_180;
  if ((int)lVar13 == 0) {
    puVar14 = (undefined1 *)0x0;
  }
  else {
    if (uVar7 != 0) {
      *(undefined1 *)(lVar5 + 0x50) = 1;
    }
    lVar13 = 0;
    puVar6 = (undefined8 *)0x0;
    lStack_208 = 0;
    lStack_200 = 0;
    uStack_1f8 = 0;
    plVar11 = (long *)(lVar5 + 0x18);
    ppuStack_228 = &puStack_1e8;
    puStack_220 = &uStack_1ec;
    puStack_218 = &uStack_1f0;
    plStack_210 = &lStack_208;
    func_0x00010b1f1c60(*plVar11);
    plVar3 = plVar11;
    if (!(bool)uVar2) {
      plVar3 = extraout_x9;
    }
    lVar15 = (long)*(int *)(lVar5 + 0x20) << 3;
    lVar16 = 0x7fffffffffffffff;
    while ((lVar15 != 0 && ((long)puVar6 < (long)puVar9))) {
      lVar12 = *plVar3;
      lVar10 = *(long *)(lVar12 + 0x28);
      if ((long)puVar6 < lVar10) {
        FUN_10b1f04b4(&ppuStack_228);
        lVar10 = *(long *)(lVar12 + 0x28);
      }
      puVar6 = *(undefined8 **)(lVar12 + 0x30);
      if ((long)puVar9 <= (long)*(undefined8 **)(lVar12 + 0x30)) {
        puVar6 = puVar9;
      }
      if ((long)puVar9 <= lVar10) break;
      lVar13 = (lVar13 - lVar10) + (long)puVar6;
      lVar10 = *(long *)(lVar12 + 0x38) * 1000;
      if (lVar16 <= lVar10) {
        lVar10 = lVar16;
      }
      plVar3 = plVar3 + 1;
      lVar15 = lVar15 + -8;
      lVar16 = lVar10;
    }
    if ((long)puVar6 < (long)puVar9) {
      FUN_10b1f04b4(&ppuStack_228);
    }
    puVar14 = (undefined1 *)(ulong)uVar7;
    if (*(char *)((long)puVar1 + 4) == '\x01') {
      lVar15 = lVar5;
      FUN_10b1ef77c();
      *(undefined4 *)(lVar15 + 0x10) = *(undefined4 *)puVar1;
      puVar14 = (undefined1 *)0x1;
    }
    uStack_238 = puVar1[1];
    plStack_240 = (long *)*puVar1;
    uStack_230 = *(undefined4 *)(puVar1 + 2);
    FUN_10b1f0020(puVar4,uStack_1ec,uStack_1f0,(undefined1 *)(ulong)uVar7,lVar13,3,
                  (lVar16 - (long)puStack_1e8) / 1000000,&plStack_240);
    if (lStack_208 != lStack_200) {
      func_0x00010b4d36f0(plVar11,*(int *)(lVar5 + 0x20) + (int)((lStack_200 - lStack_208) / 0x50));
      lVar5 = lStack_200;
      plStack_240 = plVar11;
      for (lVar13 = lStack_208; lVar13 != lVar5; lVar13 = lVar13 + 0x50) {
        func_0x00010b1f0d8c(&plStack_240,lVar13);
      }
      FUN_10b1f0548(plVar11);
      puVar14 = (undefined1 *)0x1;
    }
    func_0x00010b1f0cd8(&lStack_208);
  }
  return puVar14;
}



/* Entry: 10b1f0278; end: 10b1f04b3;  */

int FUN_10b1f0278(long param_1,long param_2,undefined8 param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,long param_7,long param_8,undefined8 *param_9)

{
  long *plVar1;
  long lVar2;
  undefined1 in_ZR;
  long lVar3;
  long lVar4;
  long *extraout_x9;
  long *plVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  long *plStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  long *plStack_a8;
  undefined4 *puStack_a0;
  undefined4 *puStack_98;
  long *plStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  long lStack_68;
  
  lVar7 = param_2;
  uStack_70 = param_6;
  uStack_6c = param_5;
  lStack_68 = param_7;
  FUN_10b1ee8f8(param_2,*(undefined8 *)(param_1 + 8));
  if ((int)lVar7 == 0) {
    iVar8 = 0;
  }
  else {
    if (param_4 != 0) {
      *(undefined1 *)(param_2 + 0x50) = 1;
    }
    lVar7 = 0;
    lVar3 = 0;
    lStack_88 = 0;
    lStack_80 = 0;
    uStack_78 = 0;
    plVar5 = (long *)(param_2 + 0x18);
    plStack_a8 = &lStack_68;
    puStack_a0 = &uStack_6c;
    puStack_98 = &uStack_70;
    plStack_90 = &lStack_88;
    func_0x00010b1f1c60(*plVar5);
    plVar1 = plVar5;
    if (!(bool)in_ZR) {
      plVar1 = extraout_x9;
    }
    lVar9 = (long)*(int *)(param_2 + 0x20) << 3;
    lVar2 = 0x7fffffffffffffff;
    while ((lVar9 != 0 && (lVar3 < param_8))) {
      lVar6 = *plVar1;
      lVar4 = *(long *)(lVar6 + 0x28);
      if (lVar3 < lVar4) {
        FUN_10b1f04b4(&plStack_a8);
        lVar4 = *(long *)(lVar6 + 0x28);
      }
      lVar3 = *(long *)(lVar6 + 0x30);
      if (param_8 <= *(long *)(lVar6 + 0x30)) {
        lVar3 = param_8;
      }
      if (param_8 <= lVar4) break;
      lVar7 = (lVar7 - lVar4) + lVar3;
      lVar4 = *(long *)(lVar6 + 0x38) * 1000;
      if (lVar2 <= lVar4) {
        lVar4 = lVar2;
      }
      plVar1 = plVar1 + 1;
      lVar9 = lVar9 + -8;
      lVar2 = lVar4;
    }
    if (lVar3 < param_8) {
      FUN_10b1f04b4(&plStack_a8);
    }
    iVar8 = param_4;
    if (*(char *)((long)param_9 + 4) == '\x01') {
      lVar3 = param_2;
      FUN_10b1ef77c();
      *(undefined4 *)(lVar3 + 0x10) = *(undefined4 *)param_9;
      iVar8 = 1;
    }
    uStack_b8 = param_9[1];
    plStack_c0 = (long *)*param_9;
    uStack_b0 = *(undefined4 *)(param_9 + 2);
    FUN_10b1f0020(param_1,uStack_6c,uStack_70,param_4,lVar7,3,(lVar2 - lStack_68) / 1000000,
                  &plStack_c0);
    if (lStack_88 != lStack_80) {
      func_0x00010b4d36f0(plVar5,*(int *)(param_2 + 0x20) + (int)((lStack_80 - lStack_88) / 0x50));
      lVar3 = lStack_80;
      plStack_c0 = plVar5;
      for (lVar7 = lStack_88; lVar7 != lVar3; lVar7 = lVar7 + 0x50) {
        func_0x00010b1f0d8c(&plStack_c0,lVar7);
      }
      FUN_10b1f0548(plVar5);
      iVar8 = 1;
    }
    func_0x00010b1f0cd8(&lStack_88);
  }
  return iVar8;
}



/* Entry: 10b1f04b4; end: 10b1f0547;  */

void FUN_10b1f04b4(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  
  if (param_2 < param_3) {
    puVar1 = param_1;
    func_0x00010b1f1e64();
    uStack_68 = 0;
    uStack_28 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_30 = 3;
    lStack_38 = *(long *)*puVar1 / 1000;
    uStack_2c = *(undefined4 *)puVar1[1];
    lStack_48 = param_2;
    lStack_40 = param_3;
    func_0x000107c2845c(&uStack_60,*(undefined4 *)puVar1[2]);
    FUN_10b1f0e84(param_1[3],auStack_70);
    func_0x00010b1f1e0c();
  }
  return;
}



/* Entry: 10b1f0548; end: 10b1f057b;  */

void FUN_10b1f0548(ulong *param_1)

{
  int iVar1;
  char cVar2;
  char cVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  long extraout_x8;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  ulong *puVar16;
  ulong uVar17;
  ulong *puVar18;
  bool bVar19;
  ulong uVar20;
  undefined1 auStack_108 [120];
  long lStack_90;
  
  iVar1 = (int)param_1[1];
  if (iVar1 == 0) {
    return;
  }
  if ((*param_1 & 1) != 0) {
    param_1 = (ulong *)(*param_1 + 7);
  }
  uVar7 = LZCOUNT((long)iVar1) << 1 ^ 0x7e;
  bVar19 = true;
  puVar18 = param_1 + iVar1;
  do {
    puVar8 = param_1;
LAB_10b1f1040:
    while( true ) {
      param_1 = puVar8;
      uVar20 = (long)puVar18 - (long)param_1 >> 3;
      cVar2 = SBORROW8(uVar20,5);
      cVar3 = (long)(uVar20 - 5) < 0;
      switch(uVar20) {
      case 0:
      case 1:
        return;
      case 2:
        func_0x00010b1f1b58(*param_1,puVar18[-1]);
        if (cVar3 == cVar2) {
          return;
        }
        FUN_10b1f1978();
        return;
      case 3:
        func_0x00010b1f1cd8(param_1,param_1 + 1);
        return;
      case 4:
        func_0x00010b1f1708(param_1,param_1 + 1,param_1 + 2,puVar18 + -1);
        return;
      case 5:
        func_0x00010b1f1770(param_1,param_1 + 1,param_1 + 2,param_1 + 3,puVar18 + -1);
        return;
      }
      if ((long)uVar20 < 0x18) {
        if (bVar19 == false) {
          if (param_1 == puVar18) {
            return;
          }
          while( true ) {
            puVar8 = param_1;
            param_1 = puVar8 + 1;
            cVar2 = SBORROW8((long)param_1,(long)puVar18);
            cVar3 = (long)param_1 - (long)puVar18 < 0;
            if (param_1 == puVar18) break;
            func_0x00010b1f1d3c(*puVar8);
            if (cVar3 != cVar2) {
              func_0x00010b1f1c2c();
              uVar7 = *puVar8;
              lVar11 = 8;
              do {
                FUN_10b1f0868(*(undefined8 *)((long)puVar8 + lVar11),uVar7);
                uVar7 = ((undefined8 *)((long)puVar8 + lVar11))[-2];
                lVar11 = lVar11 + -8;
              } while (lStack_90 < *(long *)(uVar7 + 0x28));
              func_0x00010b1f1c1c(*(undefined8 *)((long)puVar8 + lVar11));
              func_0x00010b1f1bc0();
            }
          }
          return;
        }
        if (param_1 == puVar18) {
          return;
        }
        lVar11 = 0;
        puVar8 = param_1;
        goto LAB_10b1f1350;
      }
      if (uVar7 == 0) {
        if (param_1 == puVar18) {
          return;
        }
        uVar17 = uVar20 - 2 >> 1;
        uVar7 = uVar17;
        goto LAB_10b1f13dc;
      }
      puVar8 = param_1 + (uVar20 >> 1);
      cVar2 = SBORROW8(uVar20,0x81);
      cVar3 = (long)(uVar20 - 0x81) < 0;
      if (uVar20 < 0x81) {
        func_0x00010b1f1cd8(puVar8,param_1);
      }
      else {
        func_0x00010b1f1cd8(param_1,puVar8);
        FUN_10b1f1680(param_1 + 1,puVar8 + -1,puVar18 + -2);
        FUN_10b1f1680(param_1 + 2,puVar8 + 1,puVar18 + -3);
        FUN_10b1f1680(puVar8 + -1,puVar8,puVar8 + 1);
        FUN_10b1f1978(*param_1,*puVar8);
      }
      uVar7 = uVar7 - 1;
      if ((bVar19) || (func_0x00010b1f1d4c(param_1[-1]), cVar3 != cVar2)) break;
      func_0x00010b1f1c2c();
      func_0x00010b1f1d5c(lStack_90);
      puVar8 = param_1;
      if (cVar3 == cVar2) {
        do {
          puVar8 = puVar8 + 1;
          if (puVar18 <= puVar8) break;
        } while (*(long *)(*puVar8 + 0x28) <= extraout_x8);
      }
      else {
        do {
          puVar8 = puVar8 + 1;
          func_0x00010b1f1d5c();
        } while (cVar3 == cVar2);
      }
      cVar2 = SBORROW8((long)puVar8,(long)puVar18);
      cVar3 = (long)puVar8 - (long)puVar18 < 0;
      puVar4 = puVar18;
      if (puVar8 < puVar18) {
        do {
          puVar4 = puVar4 + -1;
          func_0x00010b1f1d5c();
        } while (cVar3 != cVar2);
      }
      while( true ) {
        cVar2 = SBORROW8((long)puVar8,(long)puVar4);
        cVar3 = (long)puVar8 - (long)puVar4 < 0;
        if (puVar4 <= puVar8) break;
        FUN_10b1f1978(*puVar8,*puVar4);
        do {
          puVar8 = puVar8 + 1;
          func_0x00010b1f1d5c();
        } while (cVar3 == cVar2);
        do {
          puVar4 = puVar4 + -1;
          func_0x00010b1f1d5c();
        } while (cVar3 != cVar2);
      }
      puVar4 = puVar8 + -1;
      if (param_1 != puVar4) {
        FUN_10b1f0868(*param_1,*puVar4);
      }
      func_0x00010b1f1c1c(*puVar4);
      func_0x00010b1f1bc0();
      bVar19 = false;
    }
    func_0x00010b1f1c2c();
    lVar11 = 0;
    do {
      uVar20 = *(ulong *)((long)param_1 + lVar11 + 8);
      lVar11 = lVar11 + 8;
    } while (*(long *)(uVar20 + 0x28) < lStack_90);
    puVar4 = (ulong *)((long)param_1 + lVar11);
    puVar16 = puVar18;
    puVar8 = puVar4;
    if (lVar11 == 8) {
      do {
        puVar5 = puVar16;
        if (puVar16 <= puVar4) break;
        puVar16 = puVar16 + -1;
        puVar5 = puVar16;
      } while (lStack_90 <= *(long *)(*puVar16 + 0x28));
    }
    else {
      do {
        puVar16 = puVar16 + -1;
        puVar5 = puVar16;
      } while (lStack_90 <= *(long *)(*puVar16 + 0x28));
    }
    while (puVar8 < puVar16) {
      FUN_10b1f1978(uVar20,*puVar16);
      do {
        puVar8 = puVar8 + 1;
        uVar20 = *puVar8;
      } while (*(long *)(uVar20 + 0x28) < lStack_90);
      do {
        puVar16 = puVar16 + -1;
      } while (lStack_90 <= *(long *)(*puVar16 + 0x28));
    }
    puVar16 = puVar8 + -1;
    if (param_1 != puVar16) {
      FUN_10b1f0868(*param_1,*puVar16);
    }
    func_0x00010b1f1c1c(*puVar16);
    func_0x00010b1f1bc0();
    if (puVar4 < puVar5) goto LAB_10b1f11d8;
    puVar4 = param_1;
    func_0x00010b1f1800(param_1,puVar16);
    puVar5 = puVar8;
    func_0x00010b1f1800(puVar8,puVar18);
    if ((int)puVar5 == 0) goto code_r0x00010b1f11d4;
    puVar18 = puVar16;
    if (((ulong)puVar4 & 1) != 0) {
      return;
    }
  } while( true );
LAB_10b1f1350:
  puVar4 = puVar8 + 1;
  cVar2 = SBORROW8((long)puVar4,(long)puVar18);
  cVar3 = (long)puVar4 - (long)puVar18 < 0;
  if (puVar4 == puVar18) {
    return;
  }
  func_0x00010b1f1d3c(*puVar8);
  if (cVar3 != cVar2) {
    func_0x00010b1f1c2c();
    uVar7 = *puVar8;
    lVar13 = lVar11;
    do {
      lVar15 = lVar13;
      FUN_10b1f0868(*(undefined8 *)((long)param_1 + lVar15 + 8),uVar7);
      puVar8 = param_1;
      if (lVar15 == 0) goto LAB_10b1f13ac;
      uVar7 = *(ulong *)((long)param_1 + lVar15 + -8);
      lVar13 = lVar15 + -8;
    } while (lStack_90 < *(long *)(uVar7 + 0x28));
    puVar8 = (ulong *)((long)param_1 + lVar15);
LAB_10b1f13ac:
    func_0x00010b1f1c1c(*puVar8);
    func_0x00010b1f1bc0();
  }
  lVar11 = lVar11 + 8;
  puVar8 = puVar4;
  goto LAB_10b1f1350;
LAB_10b1f13dc:
  do {
    if ((long)uVar7 <= (long)uVar17) {
      uVar14 = (uVar7 & 0x3fffffffffffffff) << 1 | 1;
      puVar8 = param_1 + uVar14;
      uVar6 = uVar7 * 2 + 2;
      uVar9 = *puVar8;
      cVar3 = SBORROW8(uVar6,uVar20);
      lVar11 = uVar6 - uVar20;
      uVar12 = uVar9;
      puVar4 = puVar8;
      uVar10 = uVar14;
      if ((long)uVar6 < (long)uVar20) {
        uVar12 = puVar8[1];
        lVar13 = *(long *)(uVar9 + 0x28);
        lVar15 = *(long *)(uVar12 + 0x28);
        cVar3 = SBORROW8(lVar13,lVar15);
        lVar11 = lVar13 - lVar15;
        puVar4 = puVar8 + 1;
        uVar10 = uVar6;
        if (lVar15 <= lVar13) {
          uVar12 = uVar9;
          puVar4 = puVar8;
          uVar10 = uVar14;
        }
      }
      cVar2 = lVar11 < 0;
      func_0x00010b1f1d4c(uVar12);
      if (cVar2 == cVar3) {
        func_0x00010b1f1c2c();
        uVar6 = *puVar4;
        puVar8 = param_1 + uVar7;
        do {
          puVar16 = puVar4;
          FUN_10b1f0868(*puVar8,uVar6);
          if ((long)uVar17 < (long)uVar10) break;
          uVar12 = uVar10 << 1 | 1;
          puVar8 = param_1 + uVar12;
          uVar14 = uVar10 * 2 + 2;
          uVar9 = *puVar8;
          uVar6 = uVar9;
          uVar10 = uVar12;
          puVar4 = puVar8;
          if ((long)uVar14 < (long)uVar20) {
            uVar6 = puVar8[1];
            uVar10 = uVar14;
            puVar4 = puVar8 + 1;
            if (*(long *)(uVar6 + 0x28) <= *(long *)(uVar9 + 0x28)) {
              uVar6 = uVar9;
              uVar10 = uVar12;
              puVar4 = puVar8;
            }
          }
          puVar8 = puVar16;
        } while (lStack_90 <= *(long *)(uVar6 + 0x28));
        func_0x00010b1f1c1c(*puVar16);
        func_0x00010b1f1bc0();
      }
    }
    uVar7 = uVar7 - 1;
  } while (-1 < (long)uVar7);
  do {
    if ((long)uVar20 < 2) {
      return;
    }
    FUN_10b1f0a54(auStack_108,*param_1);
    puVar8 = param_1;
    uVar7 = 0;
    do {
      puVar16 = puVar8 + uVar7 + 1;
      uVar12 = *puVar16;
      uVar6 = uVar7 << 1 | 1;
      uVar17 = uVar7 * 2 + 2;
      uVar14 = uVar12;
      puVar4 = puVar16;
      uVar10 = uVar6;
      if ((long)uVar17 < (long)uVar20) {
        uVar14 = puVar8[uVar7 + 2];
        puVar4 = puVar8 + uVar7 + 2;
        uVar10 = uVar17;
        if (*(long *)(uVar14 + 0x28) <= *(long *)(uVar12 + 0x28)) {
          uVar14 = uVar12;
          puVar4 = puVar16;
          uVar10 = uVar6;
        }
      }
      FUN_10b1f0868(*puVar8,uVar14);
      puVar8 = puVar4;
      uVar7 = uVar10;
    } while ((long)uVar10 <= (long)(uVar20 - 2 >> 1));
    puVar18 = puVar18 + -1;
    if (puVar4 == puVar18) {
      FUN_10b1f0868(*puVar4,auStack_108);
    }
    else {
      FUN_10b1f0868(*puVar4,*puVar18);
      FUN_10b1f0868(*puVar18,auStack_108);
      lVar11 = (long)puVar4 + (8 - (long)param_1) >> 3;
      cVar2 = SBORROW8(lVar11,2);
      cVar3 = (long)(lVar11 - 2U) < 0;
      if (1 < lVar11) {
        uVar7 = lVar11 - 2U >> 1;
        puVar8 = param_1 + uVar7;
        func_0x00010b1f1d4c(*puVar8);
        if (cVar3 != cVar2) {
          func_0x00010b1f1c2c();
          uVar17 = *puVar8;
          do {
            puVar16 = puVar8;
            FUN_10b1f0868(*puVar4,uVar17);
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1 >> 1;
            uVar17 = param_1[uVar7];
            puVar4 = puVar16;
            puVar8 = param_1 + uVar7;
          } while (*(long *)(uVar17 + 0x28) < lStack_90);
          func_0x00010b1f1c1c(*puVar16);
          func_0x00010b1f1bc0();
        }
      }
    }
    FUN_10b24df68(auStack_108);
    uVar20 = uVar20 - 1;
  } while( true );
code_r0x00010b1f11d4:
  if (((ulong)puVar4 & 1) == 0) {
LAB_10b1f11d8:
    FUN_10b1f0ffc(param_1,puVar16,uVar7,bVar19);
    bVar19 = false;
  }
  goto LAB_10b1f1040;
}


