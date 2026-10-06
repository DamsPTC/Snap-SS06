/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1057e4f0c; end: 1057e4f7f; -[SCGrapheneMessagingNotificationMetric2 init] */

undefined1 * FUN_1057e4f0c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ea5e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1057e4f80; end: 1057e52b3;  */

/* WARNING: Removing unreachable block (ram,0x0001057e55a8) */
/* WARNING: Removing unreachable block (ram,0x0001057e5274) */
/* WARNING: Removing unreachable block (ram,0x0001057e58dc) */

void FUN_1057e4f80(long param_1,char *param_2,char *param_3,char *param_4,char *param_5,
                  char *param_6)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined *puVar6;
  char *pcVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  char *pcVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  char *pcVar28;
  char *pcVar29;
  char *pcVar30;
  char *pcVar31;
  long lVar32;
  long *plVar33;
  char *unaff_x25;
  char *unaff_x26;
  undefined8 uStack_490;
  undefined8 *puStack_488;
  undefined8 uStack_480;
  undefined4 uStack_478;
  undefined8 uStack_470;
  undefined8 *puStack_468;
  undefined8 uStack_460;
  code *pcStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  char acStack_298 [24];
  char *pcStack_280;
  char acStack_278 [24];
  undefined1 auStack_260 [24];
  undefined1 auStack_248 [24];
  undefined8 auStack_230 [2];
  char cStack_219;
  long lStack_218;
  char *pcStack_210;
  char *pcStack_208;
  char *pcStack_200;
  char *pcStack_1f8;
  char *pcStack_1f0;
  char *pcStack_1e8;
  char *pcStack_1e0;
  char *pcStack_1d8;
  undefined1 **ppuStack_1d0;
  code *pcStack_1c8;
  char acStack_1b8 [24];
  char *pcStack_1a0;
  char acStack_198 [24];
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  undefined8 auStack_150 [2];
  char cStack_139;
  long lStack_138;
  char *pcStack_130;
  char *pcStack_128;
  char *pcStack_120;
  char *pcStack_118;
  char *pcStack_110;
  char *pcStack_108;
  char *pcStack_100;
  char *pcStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  char acStack_d8 [24];
  char *pcStack_c0;
  char acStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar7 = param_3;
  pcVar15 = param_4;
  pcVar16 = param_5;
  pcVar4 = param_6;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_1 != 0) {
    plVar33 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(acStack_b8,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_a0,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_5);
    if (param_5 == (char *)0x0) {
      unaff_x26 = "";
    }
    else {
      _objc_retainAutorelease(param_5);
      unaff_x26 = param_5;
      func_0x00010bdc3520();
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_70,unaff_x26);
    acStack_d8[0] = '\0';
    acStack_d8[1] = '\0';
    acStack_d8[2] = '\0';
    acStack_d8[3] = '\0';
    acStack_d8[4] = '\0';
    acStack_d8[5] = '\0';
    acStack_d8[6] = '\0';
    acStack_d8[7] = '\0';
    acStack_d8[8] = '\0';
    acStack_d8[9] = '\0';
    acStack_d8[10] = '\0';
    acStack_d8[0xb] = '\0';
    acStack_d8[0xc] = '\0';
    acStack_d8[0xd] = '\0';
    acStack_d8[0xe] = '\0';
    acStack_d8[0xf] = '\0';
    acStack_d8[0x10] = '\0';
    acStack_d8[0x11] = '\0';
    acStack_d8[0x12] = '\0';
    acStack_d8[0x13] = '\0';
    acStack_d8[0x14] = '\0';
    acStack_d8[0x15] = '\0';
    acStack_d8[0x16] = '\0';
    acStack_d8[0x17] = '\0';
    func_0x00010007e1e8(acStack_d8,acStack_b8,&lStack_58,4);
    pcVar1 = "";
    unaff_x25 = acStack_d8;
    pcVar7 = acStack_d8;
    (**(code **)(*plVar33 + 0x18))(plVar33);
    pcStack_c0 = unaff_x25;
    func_0x00010007e5dc(&pcStack_c0);
    lVar32 = 0;
    pcVar15 = param_6;
    do {
      if ((&cStack_59)[lVar32] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar32));
      }
      lVar32 = lVar32 + -0x18;
    } while (lVar32 != -0x60);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_5);
  pcStack_120 = acStack_b8;
  do {
    unaff_x25 = unaff_x25 + -0x18;
  } while (unaff_x25 != pcStack_120);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_e8 = FUN_1057e52b4;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar17 = pcVar1;
  pcVar18 = pcVar7;
  pcVar19 = pcVar15;
  pcVar28 = pcVar16;
  pcVar30 = pcVar4;
  pcStack_130 = unaff_x26;
  pcStack_128 = unaff_x25;
  pcStack_118 = pcVar2;
  pcStack_110 = param_5;
  pcStack_108 = param_4;
  pcStack_100 = param_3;
  pcStack_f8 = param_2;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar7);
  _objc_retain(pcVar15);
  _objc_retain(pcVar16);
  if (pcVar3 != (char *)0x0) {
    plVar33 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(acStack_198,pcVar2);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar2 = pcVar7;
      func_0x00010bdc3520(pcVar7);
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_180,pcVar2);
    _objc_retain(pcVar15);
    if (pcVar15 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar15);
      pcVar2 = pcVar15;
      func_0x00010bdc3520(pcVar15);
    }
    _objc_release(pcVar15);
    func_0x00010002b838(auStack_168,pcVar2);
    _objc_retain(pcVar16);
    if (pcVar16 == (char *)0x0) {
      unaff_x26 = "";
    }
    else {
      _objc_retainAutorelease(pcVar16);
      unaff_x26 = pcVar16;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar16);
    func_0x00010002b838(auStack_150,unaff_x26);
    acStack_1b8[0] = '\0';
    acStack_1b8[1] = '\0';
    acStack_1b8[2] = '\0';
    acStack_1b8[3] = '\0';
    acStack_1b8[4] = '\0';
    acStack_1b8[5] = '\0';
    acStack_1b8[6] = '\0';
    acStack_1b8[7] = '\0';
    acStack_1b8[8] = '\0';
    acStack_1b8[9] = '\0';
    acStack_1b8[10] = '\0';
    acStack_1b8[0xb] = '\0';
    acStack_1b8[0xc] = '\0';
    acStack_1b8[0xd] = '\0';
    acStack_1b8[0xe] = '\0';
    acStack_1b8[0xf] = '\0';
    acStack_1b8[0x10] = '\0';
    acStack_1b8[0x11] = '\0';
    acStack_1b8[0x12] = '\0';
    acStack_1b8[0x13] = '\0';
    acStack_1b8[0x14] = '\0';
    acStack_1b8[0x15] = '\0';
    acStack_1b8[0x16] = '\0';
    acStack_1b8[0x17] = '\0';
    func_0x00010007e1e8(acStack_1b8,acStack_198,&lStack_138,4);
    pcVar17 = "";
    unaff_x25 = acStack_1b8;
    pcVar18 = acStack_1b8;
    (**(code **)(*plVar33 + 0x18))(plVar33);
    pcStack_1a0 = unaff_x25;
    func_0x00010007e5dc(&pcStack_1a0);
    lVar32 = 0;
    pcVar19 = pcVar4;
    do {
      if ((&cStack_139)[lVar32] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_150 + lVar32));
      }
      lVar32 = lVar32 + -0x18;
    } while (lVar32 != -0x60);
  }
  _objc_release(pcVar16);
  _objc_release(pcVar15);
  _objc_release(pcVar7);
  pcVar4 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar16);
  pcStack_200 = acStack_198;
  do {
    unaff_x25 = unaff_x25 + -0x18;
  } while (unaff_x25 != pcStack_200);
  _objc_release(pcVar16);
  _objc_release(pcVar15);
  _objc_release(pcVar7);
  _objc_release(pcVar1);
  pcVar5 = pcVar4;
  __Unwind_Resume();
  pcStack_1c8 = FUN_1057e55e8;
  lStack_218 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = pcVar17;
  pcVar3 = pcVar18;
  pcVar29 = pcVar19;
  pcVar31 = pcVar28;
  pcStack_210 = unaff_x26;
  pcStack_208 = unaff_x25;
  pcStack_1f8 = pcVar4;
  pcStack_1f0 = pcVar16;
  pcStack_1e8 = pcVar15;
  pcStack_1e0 = pcVar7;
  pcStack_1d8 = pcVar1;
  ppuStack_1d0 = &puStack_f0;
  _objc_retain(pcVar17);
  _objc_retain(pcVar18);
  _objc_retain(pcVar19);
  _objc_retain(pcVar28);
  if (pcVar5 != (char *)0x0) {
    plVar33 = *(long **)(pcVar5 + 8);
    _objc_retain(pcVar17);
    if (pcVar17 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar17;
      _objc_retainAutorelease(pcVar17);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar17);
    func_0x00010002b838(acStack_278,pcVar1);
    _objc_retain(pcVar18);
    if (pcVar18 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar18);
      pcVar1 = pcVar18;
      func_0x00010bdc3520(pcVar18);
    }
    _objc_release(pcVar18);
    func_0x00010002b838(auStack_260,pcVar1);
    _objc_retain(pcVar19);
    if (pcVar19 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar19);
      pcVar1 = pcVar19;
      func_0x00010bdc3520(pcVar19);
    }
    _objc_release(pcVar19);
    func_0x00010002b838(auStack_248,pcVar1);
    _objc_retain(pcVar28);
    if (pcVar28 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar28);
      pcVar1 = pcVar28;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar28);
    func_0x00010002b838(auStack_230,pcVar1);
    acStack_298[0] = '\0';
    acStack_298[1] = '\0';
    acStack_298[2] = '\0';
    acStack_298[3] = '\0';
    acStack_298[4] = '\0';
    acStack_298[5] = '\0';
    acStack_298[6] = '\0';
    acStack_298[7] = '\0';
    acStack_298[8] = '\0';
    acStack_298[9] = '\0';
    acStack_298[10] = '\0';
    acStack_298[0xb] = '\0';
    acStack_298[0xc] = '\0';
    acStack_298[0xd] = '\0';
    acStack_298[0xe] = '\0';
    acStack_298[0xf] = '\0';
    acStack_298[0x10] = '\0';
    acStack_298[0x11] = '\0';
    acStack_298[0x12] = '\0';
    acStack_298[0x13] = '\0';
    acStack_298[0x14] = '\0';
    acStack_298[0x15] = '\0';
    acStack_298[0x16] = '\0';
    acStack_298[0x17] = '\0';
    func_0x00010007e1e8(acStack_298,acStack_278,&lStack_218,4);
    pcVar2 = "";
    unaff_x25 = acStack_298;
    pcVar3 = acStack_298;
    (**(code **)(*plVar33 + 0x18))(plVar33);
    pcStack_280 = unaff_x25;
    func_0x00010007e5dc(&pcStack_280);
    lVar32 = 0;
    pcVar29 = pcVar30;
    do {
      if ((&cStack_219)[lVar32] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_230 + lVar32));
      }
      lVar32 = lVar32 + -0x18;
    } while (lVar32 != -0x60);
  }
  _objc_release(pcVar28);
  _objc_release(pcVar19);
  _objc_release(pcVar18);
  pcVar1 = pcVar17;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_218) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar28);
  do {
    unaff_x25 = unaff_x25 + -0x18;
  } while (unaff_x25 != acStack_278);
  _objc_release(pcVar28);
  _objc_release(pcVar19);
  _objc_release(pcVar18);
  _objc_release(pcVar17);
  __Unwind_Resume();
  lVar32 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar28 = pcVar2;
  _objc_retain();
  _objc_retain(pcVar2);
  _objc_retain(pcVar29);
  _objc_retain(pcVar31);
  puVar6 = PTR_PTR_1126be788;
  _objc_retain(pcVar3);
  _objc_opt_new();
  func_0x00010c1805c0();
  pcVar7 = pcVar1;
  func_0x00010c15f2e0(pcVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ba720(puVar6);
  _objc_release(pcVar7);
  puVar8 = PTR_PTR_1126be930;
  _objc_opt_new();
  puVar9 = PTR_PTR_1126be940;
  _objc_retain(pcVar2);
  _objc_retain(pcVar29);
  _objc_retain(puVar6);
  _objc_opt_new(puVar9);
  puVar10 = PTR_PTR_1126bc778;
  _objc_opt_new(PTR_PTR_1126bc778);
  puVar11 = PTR_PTR_1126b0cd8;
  pcVar7 = pcVar2;
  func_0x00010c2923e0(pcVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pcVar2);
  func_0x00010bdc35c0(puVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pcVar7);
  puVar12 = puVar11;
  func_0x00010bfe5d80(puVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a99c0(puVar10);
  _objc_release(puVar12);
  func_0x00010c20cde0(puVar9);
  func_0x00010c20dbc0(puVar9);
  _objc_release(pcVar29);
  func_0x00010c205740(puVar9);
  _objc_release(puVar6);
  _objc_release(puVar11);
  _objc_release(puVar10);
  func_0x00010c1f5be0(puVar8);
  _objc_release(puVar9);
  puVar11 = PTR_PTR_1126be758;
  _objc_retain(puVar6);
  _objc_opt_new();
  puVar9 = PTR_PTR_1126be948;
  _objc_opt_new(PTR_PTR_1126be948);
  func_0x00010c16cf20(puVar11);
  puVar10 = PTR_PTR_1126be758;
  _objc_opt_new();
  func_0x00010c205720();
  _objc_release(puVar6);
  puVar12 = puVar11;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar10;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar11);
  puVar11 = PTR_PTR_1126be950;
  _objc_alloc(PTR_PTR_1126be950);
  func_0x00010c04dde0();
  puVar9 = PTR_PTR_1126be958;
  _objc_alloc();
  func_0x00010bff5300();
  _objc_release(puVar11);
  puVar11 = PTR_PTR_1126be6f0;
  _objc_opt_new();
  puVar10 = PTR_PTR_1126be960;
  _objc_opt_new(PTR_PTR_1126be960);
  puVar12 = PTR_PTR_1126be968;
  _objc_opt_new(PTR_PTR_1126be968);
  func_0x00010c1f5be0();
  func_0x00010c1fec40(puVar11);
  _objc_release(puVar12);
  _objc_release(puVar10);
  puVar10 = PTR_PTR_1126ba668;
  _objc_opt_new();
  func_0x00010c1fea60();
  puVar12 = PTR_PTR_1126be938;
  _objc_alloc();
  pcVar7 = pcVar31;
  func_0x000108f52130(pcVar31);
  _objc_retainAutoreleasedReturnValue();
  pcVar15 = pcVar1;
  func_0x00010c15f2e0(pcVar1);
  _objc_retainAutoreleasedReturnValue();
  pcVar16 = pcVar1;
  func_0x00010bf0e700(pcVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001085330a8();
  pcVar4 = pcVar1;
  func_0x00010bf5b080(pcVar1);
  _objc_retainAutoreleasedReturnValue();
  pcVar17 = pcVar4;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108534aa8();
  pcVar18 = pcVar1;
  func_0x00010c25c580();
  _objc_retainAutoreleasedReturnValue();
  pcVar19 = pcVar31;
  func_0x000108f52130();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04dc60();
  _objc_release(pcVar19);
  _objc_release(pcVar18);
  _objc_release(pcVar17);
  _objc_release(pcVar4);
  _objc_release(pcVar16);
  _objc_release(pcVar15);
  _objc_release(pcVar7);
  puVar13 = PTR_PTR_1126b1a40;
  func_0x00010c0fe200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pcVar3);
  func_0x00010c2aaec0(puVar13);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar20 = PTR_PTR_1126b28f8;
  _objc_alloc();
  func_0x00010c02b8e0();
  puVar21 = puVar13;
  func_0x00010bf21f60(puVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar20;
  func_0x00010c2a82e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar21);
  _objc_release(puVar20);
  puVar20 = PTR_PTR_1126be6d0;
  _objc_alloc();
  puVar21 = puVar10;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar22;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c002b80();
  puVar24 = puVar11;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar20;
  func_0x00010c2adc40();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar25;
  func_0x00010c2b3ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar26;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar20);
  _objc_release(puVar23);
  _objc_release(puVar21);
  _objc_release(puVar22);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar10);
  _objc_release(puVar11);
  _objc_release(puVar9);
  _objc_release(puVar14);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(pcVar31);
  _objc_release(pcVar29);
  _objc_release(pcVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar32) {
    ___stack_chk_fail();
    _objc_retain();
    _objc_retain(pcVar28);
    puStack_468 = &uStack_470;
    uStack_470 = 0;
    uStack_460 = 0x3032000000;
    pcStack_458 = FUN_1057e61e8;
    uStack_450 = 0x1057e61f8;
    uStack_448 = 0;
    puStack_488 = &uStack_490;
    uStack_490 = 0;
    uStack_480 = 0x2020000000;
    uStack_478 = 0;
    pcVar7 = pcVar1;
    func_0x00010bf0e700(pcVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(pcVar1);
    _objc_retain(pcVar28);
    func_0x00010c0c1320(pcVar7);
    _objc_release(pcVar7);
    lVar32 = puStack_468[5];
    func_0x00010c08fa60();
    if ((lVar32 == 0) || (*(int *)(puStack_488 + 3) == 0)) {
      puVar27 = (undefined *)0x0;
    }
    else {
      puVar27 = (undefined *)puStack_468[5];
      func_0x000108f139ec(puVar27);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(pcVar28);
    _objc_release(pcVar1);
    __Block_object_dispose(&uStack_490,8);
    __Block_object_dispose(&uStack_470,8);
    _objc_release(uStack_448);
    _objc_release(pcVar28);
    _objc_release(pcVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar27);
  return;
}



/* Entry: 1057e52b4; end: 1057e55e7;  */

/* WARNING: Removing unreachable block (ram,0x0001057e55a8) */
/* WARNING: Removing unreachable block (ram,0x0001057e58dc) */

void FUN_1057e52b4(long param_1,char *param_2,char *param_3,char *param_4,char *param_5,
                  char *param_6)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  char *pcVar25;
  char *pcVar26;
  char *pcVar27;
  char *pcVar28;
  char *pcVar29;
  long lVar30;
  long *plVar31;
  char *unaff_x25;
  char *unaff_x26;
  undefined8 uStack_3b0;
  undefined8 *puStack_3a8;
  undefined8 uStack_3a0;
  undefined4 uStack_398;
  undefined8 uStack_390;
  undefined8 *puStack_388;
  undefined8 uStack_380;
  code *pcStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  char acStack_1b8 [24];
  char *pcStack_1a0;
  char acStack_198 [24];
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  undefined8 auStack_150 [2];
  char cStack_139;
  long lStack_138;
  char *pcStack_130;
  char *pcStack_128;
  char *pcStack_120;
  char *pcStack_118;
  char *pcStack_110;
  char *pcStack_108;
  char *pcStack_100;
  char *pcStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  char acStack_d8 [24];
  char *pcStack_c0;
  char acStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar13 = param_3;
  pcVar14 = param_4;
  pcVar15 = param_5;
  pcVar4 = param_6;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_1 != 0) {
    plVar31 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(acStack_b8,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_a0,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_5);
    if (param_5 == (char *)0x0) {
      unaff_x26 = "";
    }
    else {
      _objc_retainAutorelease(param_5);
      unaff_x26 = param_5;
      func_0x00010bdc3520();
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_70,unaff_x26);
    acStack_d8[0] = '\0';
    acStack_d8[1] = '\0';
    acStack_d8[2] = '\0';
    acStack_d8[3] = '\0';
    acStack_d8[4] = '\0';
    acStack_d8[5] = '\0';
    acStack_d8[6] = '\0';
    acStack_d8[7] = '\0';
    acStack_d8[8] = '\0';
    acStack_d8[9] = '\0';
    acStack_d8[10] = '\0';
    acStack_d8[0xb] = '\0';
    acStack_d8[0xc] = '\0';
    acStack_d8[0xd] = '\0';
    acStack_d8[0xe] = '\0';
    acStack_d8[0xf] = '\0';
    acStack_d8[0x10] = '\0';
    acStack_d8[0x11] = '\0';
    acStack_d8[0x12] = '\0';
    acStack_d8[0x13] = '\0';
    acStack_d8[0x14] = '\0';
    acStack_d8[0x15] = '\0';
    acStack_d8[0x16] = '\0';
    acStack_d8[0x17] = '\0';
    func_0x00010007e1e8(acStack_d8,acStack_b8,&lStack_58,4);
    pcVar1 = "";
    unaff_x25 = acStack_d8;
    pcVar13 = acStack_d8;
    (**(code **)(*plVar31 + 0x18))(plVar31);
    pcStack_c0 = unaff_x25;
    func_0x00010007e5dc(&pcStack_c0);
    lVar30 = 0;
    pcVar14 = param_6;
    do {
      if ((&cStack_59)[lVar30] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar30));
      }
      lVar30 = lVar30 + -0x18;
    } while (lVar30 != -0x60);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_5);
  pcStack_120 = acStack_b8;
  do {
    unaff_x25 = unaff_x25 + -0x18;
  } while (unaff_x25 != pcStack_120);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_e8 = FUN_1057e55e8;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar25 = pcVar1;
  pcVar27 = pcVar13;
  pcVar28 = pcVar14;
  pcVar29 = pcVar15;
  pcStack_130 = unaff_x26;
  pcStack_128 = unaff_x25;
  pcStack_118 = pcVar2;
  pcStack_110 = param_5;
  pcStack_108 = param_4;
  pcStack_100 = param_3;
  pcStack_f8 = param_2;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar13);
  _objc_retain(pcVar14);
  _objc_retain(pcVar15);
  if (pcVar3 != (char *)0x0) {
    plVar31 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(acStack_198,pcVar2);
    _objc_retain(pcVar13);
    if (pcVar13 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar13);
      pcVar2 = pcVar13;
      func_0x00010bdc3520(pcVar13);
    }
    _objc_release(pcVar13);
    func_0x00010002b838(auStack_180,pcVar2);
    _objc_retain(pcVar14);
    if (pcVar14 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar14);
      pcVar2 = pcVar14;
      func_0x00010bdc3520(pcVar14);
    }
    _objc_release(pcVar14);
    func_0x00010002b838(auStack_168,pcVar2);
    _objc_retain(pcVar15);
    if (pcVar15 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar15);
      pcVar2 = pcVar15;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar15);
    func_0x00010002b838(auStack_150,pcVar2);
    acStack_1b8[0] = '\0';
    acStack_1b8[1] = '\0';
    acStack_1b8[2] = '\0';
    acStack_1b8[3] = '\0';
    acStack_1b8[4] = '\0';
    acStack_1b8[5] = '\0';
    acStack_1b8[6] = '\0';
    acStack_1b8[7] = '\0';
    acStack_1b8[8] = '\0';
    acStack_1b8[9] = '\0';
    acStack_1b8[10] = '\0';
    acStack_1b8[0xb] = '\0';
    acStack_1b8[0xc] = '\0';
    acStack_1b8[0xd] = '\0';
    acStack_1b8[0xe] = '\0';
    acStack_1b8[0xf] = '\0';
    acStack_1b8[0x10] = '\0';
    acStack_1b8[0x11] = '\0';
    acStack_1b8[0x12] = '\0';
    acStack_1b8[0x13] = '\0';
    acStack_1b8[0x14] = '\0';
    acStack_1b8[0x15] = '\0';
    acStack_1b8[0x16] = '\0';
    acStack_1b8[0x17] = '\0';
    func_0x00010007e1e8(acStack_1b8,acStack_198,&lStack_138,4);
    pcVar25 = "";
    unaff_x25 = acStack_1b8;
    pcVar27 = acStack_1b8;
    (**(code **)(*plVar31 + 0x18))(plVar31);
    pcStack_1a0 = unaff_x25;
    func_0x00010007e5dc(&pcStack_1a0);
    lVar30 = 0;
    pcVar28 = pcVar4;
    do {
      if ((&cStack_139)[lVar30] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_150 + lVar30));
      }
      lVar30 = lVar30 + -0x18;
    } while (lVar30 != -0x60);
  }
  _objc_release(pcVar15);
  _objc_release(pcVar14);
  _objc_release(pcVar13);
  pcVar4 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar15);
  do {
    unaff_x25 = unaff_x25 + -0x18;
  } while (unaff_x25 != acStack_198);
  _objc_release(pcVar15);
  _objc_release(pcVar14);
  _objc_release(pcVar13);
  _objc_release(pcVar1);
  __Unwind_Resume();
  lVar30 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar26 = pcVar25;
  _objc_retain();
  _objc_retain(pcVar25);
  _objc_retain(pcVar28);
  _objc_retain(pcVar29);
  puVar5 = PTR_PTR_1126be788;
  _objc_retain(pcVar27);
  _objc_opt_new();
  func_0x00010c1805c0();
  pcVar1 = pcVar4;
  func_0x00010c15f2e0(pcVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ba720(puVar5);
  _objc_release(pcVar1);
  puVar6 = PTR_PTR_1126be930;
  _objc_opt_new();
  puVar7 = PTR_PTR_1126be940;
  _objc_retain(pcVar25);
  _objc_retain(pcVar28);
  _objc_retain(puVar5);
  _objc_opt_new(puVar7);
  puVar8 = PTR_PTR_1126bc778;
  _objc_opt_new(PTR_PTR_1126bc778);
  puVar9 = PTR_PTR_1126b0cd8;
  pcVar1 = pcVar25;
  func_0x00010c2923e0(pcVar25);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pcVar25);
  func_0x00010bdc35c0(puVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pcVar1);
  puVar10 = puVar9;
  func_0x00010bfe5d80(puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a99c0(puVar8);
  _objc_release(puVar10);
  func_0x00010c20cde0(puVar7);
  func_0x00010c20dbc0(puVar7);
  _objc_release(pcVar28);
  func_0x00010c205740(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar9);
  _objc_release(puVar8);
  func_0x00010c1f5be0(puVar6);
  _objc_release(puVar7);
  puVar9 = PTR_PTR_1126be758;
  _objc_retain(puVar5);
  _objc_opt_new();
  puVar7 = PTR_PTR_1126be948;
  _objc_opt_new(PTR_PTR_1126be948);
  func_0x00010c16cf20(puVar9);
  puVar8 = PTR_PTR_1126be758;
  _objc_opt_new();
  func_0x00010c205720();
  _objc_release(puVar5);
  puVar10 = puVar9;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar8;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar9);
  puVar9 = PTR_PTR_1126be950;
  _objc_alloc(PTR_PTR_1126be950);
  func_0x00010c04dde0();
  puVar7 = PTR_PTR_1126be958;
  _objc_alloc();
  func_0x00010bff5300();
  _objc_release(puVar9);
  puVar9 = PTR_PTR_1126be6f0;
  _objc_opt_new();
  puVar8 = PTR_PTR_1126be960;
  _objc_opt_new(PTR_PTR_1126be960);
  puVar10 = PTR_PTR_1126be968;
  _objc_opt_new(PTR_PTR_1126be968);
  func_0x00010c1f5be0();
  func_0x00010c1fec40(puVar9);
  _objc_release(puVar10);
  _objc_release(puVar8);
  puVar8 = PTR_PTR_1126ba668;
  _objc_opt_new();
  func_0x00010c1fea60();
  puVar10 = PTR_PTR_1126be938;
  _objc_alloc();
  pcVar1 = pcVar29;
  func_0x000108f52130(pcVar29);
  _objc_retainAutoreleasedReturnValue();
  pcVar13 = pcVar4;
  func_0x00010c15f2e0(pcVar4);
  _objc_retainAutoreleasedReturnValue();
  pcVar14 = pcVar4;
  func_0x00010bf0e700(pcVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001085330a8();
  pcVar15 = pcVar4;
  func_0x00010bf5b080(pcVar4);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar15;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108534aa8();
  pcVar3 = pcVar4;
  func_0x00010c25c580();
  _objc_retainAutoreleasedReturnValue();
  pcVar16 = pcVar29;
  func_0x000108f52130();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04dc60();
  _objc_release(pcVar16);
  _objc_release(pcVar3);
  _objc_release(pcVar2);
  _objc_release(pcVar15);
  _objc_release(pcVar14);
  _objc_release(pcVar13);
  _objc_release(pcVar1);
  puVar11 = PTR_PTR_1126b1a40;
  func_0x00010c0fe200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pcVar27);
  func_0x00010c2aaec0(puVar11);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar17 = PTR_PTR_1126b28f8;
  _objc_alloc();
  func_0x00010c02b8e0();
  puVar18 = puVar11;
  func_0x00010bf21f60(puVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar17;
  func_0x00010c2a82e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar18);
  _objc_release(puVar17);
  puVar17 = PTR_PTR_1126be6d0;
  _objc_alloc();
  puVar18 = puVar8;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar19;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c002b80();
  puVar21 = puVar9;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar17;
  func_0x00010c2adc40();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar22;
  func_0x00010c2b3ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar23;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(puVar17);
  _objc_release(puVar20);
  _objc_release(puVar18);
  _objc_release(puVar19);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(puVar12);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(pcVar29);
  _objc_release(pcVar28);
  _objc_release(pcVar25);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar30) {
    ___stack_chk_fail();
    _objc_retain();
    _objc_retain(pcVar26);
    puStack_388 = &uStack_390;
    uStack_390 = 0;
    uStack_380 = 0x3032000000;
    pcStack_378 = FUN_1057e61e8;
    uStack_370 = 0x1057e61f8;
    uStack_368 = 0;
    puStack_3a8 = &uStack_3b0;
    uStack_3b0 = 0;
    uStack_3a0 = 0x2020000000;
    uStack_398 = 0;
    pcVar1 = pcVar4;
    func_0x00010bf0e700(pcVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(pcVar4);
    _objc_retain(pcVar26);
    func_0x00010c0c1320(pcVar1);
    _objc_release(pcVar1);
    lVar30 = puStack_388[5];
    func_0x00010c08fa60();
    if ((lVar30 == 0) || (*(int *)(puStack_3a8 + 3) == 0)) {
      puVar24 = (undefined *)0x0;
    }
    else {
      puVar24 = (undefined *)puStack_388[5];
      func_0x000108f139ec(puVar24);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(pcVar26);
    _objc_release(pcVar4);
    __Block_object_dispose(&uStack_3b0,8);
    __Block_object_dispose(&uStack_390,8);
    _objc_release(uStack_368);
    _objc_release(pcVar26);
    _objc_release(pcVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar24);
  return;
}



/* Entry: 1057e55e8; end: 1057e591b;  */

/* WARNING: Removing unreachable block (ram,0x0001057e58dc) */

void FUN_1057e55e8(long param_1,char *param_2,char *param_3,char *param_4,char *param_5,
                  char *param_6)

{
  char *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  char *pcVar26;
  char *pcVar27;
  char *pcVar28;
  char *pcVar29;
  long lVar30;
  long *plVar31;
  char *unaff_x25;
  undefined8 uStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 uStack_2c0;
  undefined4 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 uStack_2a0;
  code *pcStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  char acStack_d8 [24];
  char *pcStack_c0;
  char acStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar27 = param_3;
  pcVar28 = param_4;
  pcVar29 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_1 != 0) {
    plVar31 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(acStack_b8,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_a0,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_5);
    if (param_5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_5);
      pcVar1 = param_5;
      func_0x00010bdc3520();
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_70,pcVar1);
    acStack_d8[0] = '\0';
    acStack_d8[1] = '\0';
    acStack_d8[2] = '\0';
    acStack_d8[3] = '\0';
    acStack_d8[4] = '\0';
    acStack_d8[5] = '\0';
    acStack_d8[6] = '\0';
    acStack_d8[7] = '\0';
    acStack_d8[8] = '\0';
    acStack_d8[9] = '\0';
    acStack_d8[10] = '\0';
    acStack_d8[0xb] = '\0';
    acStack_d8[0xc] = '\0';
    acStack_d8[0xd] = '\0';
    acStack_d8[0xe] = '\0';
    acStack_d8[0xf] = '\0';
    acStack_d8[0x10] = '\0';
    acStack_d8[0x11] = '\0';
    acStack_d8[0x12] = '\0';
    acStack_d8[0x13] = '\0';
    acStack_d8[0x14] = '\0';
    acStack_d8[0x15] = '\0';
    acStack_d8[0x16] = '\0';
    acStack_d8[0x17] = '\0';
    func_0x00010007e1e8(acStack_d8,acStack_b8,&lStack_58,4);
    pcVar1 = "";
    unaff_x25 = acStack_d8;
    pcVar27 = acStack_d8;
    (**(code **)(*plVar31 + 0x18))(plVar31);
    pcStack_c0 = unaff_x25;
    func_0x00010007e5dc(&pcStack_c0);
    lVar30 = 0;
    pcVar28 = param_6;
    do {
      if ((&cStack_59)[lVar30] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar30));
      }
      lVar30 = lVar30 + -0x18;
    } while (lVar30 != -0x60);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_5);
  do {
    unaff_x25 = unaff_x25 + -0x18;
  } while (unaff_x25 != acStack_b8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  lVar30 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar26 = pcVar1;
  _objc_retain();
  _objc_retain(pcVar1);
  _objc_retain(pcVar28);
  _objc_retain(pcVar29);
  puVar3 = PTR_PTR_1126be788;
  _objc_retain(pcVar27);
  _objc_opt_new();
  func_0x00010c1805c0();
  pcVar4 = pcVar2;
  func_0x00010c15f2e0(pcVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ba720(puVar3);
  _objc_release(pcVar4);
  puVar5 = PTR_PTR_1126be930;
  _objc_opt_new();
  puVar6 = PTR_PTR_1126be940;
  _objc_retain(pcVar1);
  _objc_retain(pcVar28);
  _objc_retain(puVar3);
  _objc_opt_new(puVar6);
  puVar7 = PTR_PTR_1126bc778;
  _objc_opt_new(PTR_PTR_1126bc778);
  puVar8 = PTR_PTR_1126b0cd8;
  pcVar4 = pcVar1;
  func_0x00010c2923e0(pcVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pcVar1);
  func_0x00010bdc35c0(puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pcVar4);
  puVar9 = puVar8;
  func_0x00010bfe5d80(puVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a99c0(puVar7);
  _objc_release(puVar9);
  func_0x00010c20cde0(puVar6);
  func_0x00010c20dbc0(puVar6);
  _objc_release(pcVar28);
  func_0x00010c205740(puVar6);
  _objc_release(puVar3);
  _objc_release(puVar8);
  _objc_release(puVar7);
  func_0x00010c1f5be0(puVar5);
  _objc_release(puVar6);
  puVar8 = PTR_PTR_1126be758;
  _objc_retain(puVar3);
  _objc_opt_new();
  puVar6 = PTR_PTR_1126be948;
  _objc_opt_new(PTR_PTR_1126be948);
  func_0x00010c16cf20(puVar8);
  puVar7 = PTR_PTR_1126be758;
  _objc_opt_new();
  func_0x00010c205720();
  _objc_release(puVar3);
  puVar9 = puVar8;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar7;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar8);
  puVar8 = PTR_PTR_1126be950;
  _objc_alloc(PTR_PTR_1126be950);
  func_0x00010c04dde0();
  puVar6 = PTR_PTR_1126be958;
  _objc_alloc();
  func_0x00010bff5300();
  _objc_release(puVar8);
  puVar8 = PTR_PTR_1126be6f0;
  _objc_opt_new();
  puVar7 = PTR_PTR_1126be960;
  _objc_opt_new(PTR_PTR_1126be960);
  puVar9 = PTR_PTR_1126be968;
  _objc_opt_new(PTR_PTR_1126be968);
  func_0x00010c1f5be0();
  func_0x00010c1fec40(puVar8);
  _objc_release(puVar9);
  _objc_release(puVar7);
  puVar7 = PTR_PTR_1126ba668;
  _objc_opt_new();
  func_0x00010c1fea60();
  puVar9 = PTR_PTR_1126be938;
  _objc_alloc();
  pcVar4 = pcVar29;
  func_0x000108f52130(pcVar29);
  _objc_retainAutoreleasedReturnValue();
  pcVar12 = pcVar2;
  func_0x00010c15f2e0(pcVar2);
  _objc_retainAutoreleasedReturnValue();
  pcVar13 = pcVar2;
  func_0x00010bf0e700(pcVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001085330a8();
  pcVar14 = pcVar2;
  func_0x00010bf5b080(pcVar2);
  _objc_retainAutoreleasedReturnValue();
  pcVar15 = pcVar14;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108534aa8();
  pcVar16 = pcVar2;
  func_0x00010c25c580();
  _objc_retainAutoreleasedReturnValue();
  pcVar17 = pcVar29;
  func_0x000108f52130();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04dc60();
  _objc_release(pcVar17);
  _objc_release(pcVar16);
  _objc_release(pcVar15);
  _objc_release(pcVar14);
  _objc_release(pcVar13);
  _objc_release(pcVar12);
  _objc_release(pcVar4);
  puVar10 = PTR_PTR_1126b1a40;
  func_0x00010c0fe200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pcVar27);
  func_0x00010c2aaec0(puVar10);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar18 = PTR_PTR_1126b28f8;
  _objc_alloc();
  func_0x00010c02b8e0();
  puVar19 = puVar10;
  func_0x00010bf21f60(puVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar18;
  func_0x00010c2a82e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar19);
  _objc_release(puVar18);
  puVar19 = PTR_PTR_1126be6d0;
  _objc_alloc();
  puVar21 = puVar7;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar20;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c002b80();
  puVar22 = puVar8;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar19;
  func_0x00010c2adc40();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar23;
  func_0x00010c2b3ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar24;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar11);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(pcVar29);
  _objc_release(pcVar28);
  _objc_release(pcVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar30) {
    ___stack_chk_fail();
    _objc_retain();
    _objc_retain(pcVar26);
    puStack_2a8 = &uStack_2b0;
    uStack_2b0 = 0;
    uStack_2a0 = 0x3032000000;
    pcStack_298 = FUN_1057e61e8;
    uStack_290 = 0x1057e61f8;
    uStack_288 = 0;
    puStack_2c8 = &uStack_2d0;
    uStack_2d0 = 0;
    uStack_2c0 = 0x2020000000;
    uStack_2b8 = 0;
    pcVar1 = pcVar2;
    func_0x00010bf0e700(pcVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(pcVar2);
    _objc_retain(pcVar26);
    func_0x00010c0c1320(pcVar1);
    _objc_release(pcVar1);
    lVar30 = puStack_2a8[5];
    func_0x00010c08fa60();
    if ((lVar30 == 0) || (*(int *)(puStack_2c8 + 3) == 0)) {
      puVar25 = (undefined *)0x0;
    }
    else {
      puVar25 = (undefined *)puStack_2a8[5];
      func_0x000108f139ec(puVar25);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(pcVar26);
    _objc_release(pcVar2);
    __Block_object_dispose(&uStack_2d0,8);
    __Block_object_dispose(&uStack_2b0,8);
    _objc_release(uStack_288);
    _objc_release(pcVar26);
    _objc_release(pcVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar25);
  return;
}



/* Entry: 1057e591c; end: 1057e5fe7;  */

void FUN_1057e591c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined8 uVar24;
  long lVar25;
  undefined8 uStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 uStack_1e0;
  undefined4 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 uStack_1c0;
  code *pcStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  
  lVar25 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar24 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126be788;
  _objc_retain(param_3);
  _objc_opt_new();
  func_0x00010c1805c0();
  uVar2 = param_1;
  func_0x00010c15f2e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ba720(puVar1);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126be930;
  _objc_opt_new();
  puVar4 = PTR_PTR_1126be940;
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(puVar1);
  _objc_opt_new(puVar4);
  puVar5 = PTR_PTR_1126bc778;
  _objc_opt_new(PTR_PTR_1126bc778);
  puVar6 = PTR_PTR_1126b0cd8;
  uVar2 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bdc35c0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar7 = puVar6;
  func_0x00010bfe5d80(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a99c0(puVar5);
  _objc_release(puVar7);
  func_0x00010c20cde0(puVar4);
  func_0x00010c20dbc0(puVar4);
  _objc_release(param_4);
  func_0x00010c205740(puVar4);
  _objc_release(puVar1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  func_0x00010c1f5be0(puVar3);
  _objc_release(puVar4);
  puVar6 = PTR_PTR_1126be758;
  _objc_retain(puVar1);
  _objc_opt_new();
  puVar4 = PTR_PTR_1126be948;
  _objc_opt_new(PTR_PTR_1126be948);
  func_0x00010c16cf20(puVar6);
  puVar5 = PTR_PTR_1126be758;
  _objc_opt_new();
  func_0x00010c205720();
  _objc_release(puVar1);
  puVar7 = puVar6;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar5;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar6);
  puVar6 = PTR_PTR_1126be950;
  _objc_alloc(PTR_PTR_1126be950);
  func_0x00010c04dde0();
  puVar4 = PTR_PTR_1126be958;
  _objc_alloc();
  func_0x00010bff5300();
  _objc_release(puVar6);
  puVar6 = PTR_PTR_1126be6f0;
  _objc_opt_new();
  puVar5 = PTR_PTR_1126be960;
  _objc_opt_new(PTR_PTR_1126be960);
  puVar7 = PTR_PTR_1126be968;
  _objc_opt_new(PTR_PTR_1126be968);
  func_0x00010c1f5be0();
  func_0x00010c1fec40(puVar6);
  _objc_release(puVar7);
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126ba668;
  _objc_opt_new();
  func_0x00010c1fea60();
  puVar7 = PTR_PTR_1126be938;
  _objc_alloc();
  uVar2 = param_5;
  func_0x000108f52130(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_1;
  func_0x00010c15f2e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_1;
  func_0x00010bf0e700(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001085330a8();
  uVar12 = param_1;
  func_0x00010bf5b080(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108534aa8();
  uVar14 = param_1;
  func_0x00010c25c580();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_5;
  func_0x000108f52130();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04dc60();
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar2);
  puVar8 = PTR_PTR_1126b1a40;
  func_0x00010c0fe200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c2aaec0(puVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar16 = PTR_PTR_1126b28f8;
  _objc_alloc();
  func_0x00010c02b8e0();
  puVar17 = puVar8;
  func_0x00010bf21f60(puVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar16;
  func_0x00010c2a82e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar17);
  _objc_release(puVar16);
  puVar17 = PTR_PTR_1126be6d0;
  _objc_alloc();
  puVar19 = puVar5;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar18;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c002b80();
  puVar20 = puVar6;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar17;
  func_0x00010c2adc40();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar21;
  func_0x00010c2b3ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar22;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar9);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar25) {
    ___stack_chk_fail();
    _objc_retain();
    _objc_retain(uVar24);
    puStack_1c8 = &uStack_1d0;
    uStack_1d0 = 0;
    uStack_1c0 = 0x3032000000;
    pcStack_1b8 = FUN_1057e61e8;
    uStack_1b0 = 0x1057e61f8;
    uStack_1a8 = 0;
    puStack_1e8 = &uStack_1f0;
    uStack_1f0 = 0;
    uStack_1e0 = 0x2020000000;
    uStack_1d8 = 0;
    uVar2 = param_1;
    func_0x00010bf0e700(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_1);
    _objc_retain(uVar24);
    func_0x00010c0c1320(uVar2);
    _objc_release(uVar2);
    lVar25 = puStack_1c8[5];
    func_0x00010c08fa60();
    if ((lVar25 == 0) || (*(int *)(puStack_1e8 + 3) == 0)) {
      puVar23 = (undefined *)0x0;
    }
    else {
      puVar23 = (undefined *)puStack_1c8[5];
      func_0x000108f139ec(puVar23);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(uVar24);
    _objc_release(param_1);
    __Block_object_dispose(&uStack_1f0,8);
    __Block_object_dispose(&uStack_1d0,8);
    _objc_release(uStack_1a8);
    _objc_release(uVar24);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar23);
  return;
}



/* Entry: 1057e5fe8; end: 1057e61e7;  */

void FUN_1057e5fe8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain();
  _objc_retain(param_2);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_1057e61e8;
  uStack_70 = 0x1057e61f8;
  uStack_68 = 0;
  puStack_a8 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a0 = 0x2020000000;
  uStack_98 = 0;
  uVar2 = param_1;
  func_0x00010bf0e700(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  _objc_retain(param_2);
  func_0x00010c0c1320(uVar2);
  _objc_release(uVar2);
  lVar1 = puStack_88[5];
  func_0x00010c08fa60();
  if ((lVar1 == 0) || (*(int *)(puStack_a8 + 3) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = puStack_88[5];
    func_0x000108f139ec(uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
  _objc_release(param_1);
  __Block_object_dispose(&uStack_b0,8);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1057e61e8; end: 1057e61ff;  */

void FUN_1057e61e8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1057e6200; end: 1057e6343;  */

void FUN_1057e6200(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  long lVar7;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf5b080();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar5 = *(undefined8 *)(lVar7 + 0x28);
  *(undefined8 *)(lVar7 + 0x28) = uVar3;
  _objc_release(uVar5);
  _objc_release(uVar2);
  lVar4 = *(long *)(param_1 + 0x28);
  func_0x00010c242760();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar4;
  func_0x00010c08fa60();
  _objc_release(lVar4);
  if (lVar7 == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
    func_0x000100bf119c();
    lVar7 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    if (iVar1 == 0) {
      uVar6 = 0x11;
      goto LAB_1057e62c4;
    }
  }
  else {
    *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = 0x11;
    if (param_2 != 1) {
      return;
    }
    lVar7 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  }
  uVar6 = 0x1a;
LAB_1057e62c4:
  *(undefined4 *)(lVar7 + 0x18) = uVar6;
  return;
}



/* Entry: 1057e6344; end: 1057e6357;  */

void FUN_1057e6344(void)

{
  return;
}



/* Entry: 1057e6358; end: 1057e63fb; -[SCSavedStorySender initWithCoreMessageSender:snapchatterPublicInfoFetcher:] */

undefined1 *
FUN_1057e6358(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ea5f0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1057e63fc; end: 1057e669b; -[SCSavedStorySender saveFriendStory:conversations:platformAnalytics:viewLocation:completionHandler:] */

void FUN_1057e63fc(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined **unaff_x28;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  if (((param_3 == (undefined *)0x0) || (param_5 == 0)) || (param_7 == 0)) {
    puVar6 = (undefined1 *)0xc;
    (**(code **)(param_7 + 0x10))(param_7);
  }
  else {
    puVar1 = param_3;
    func_0x00010bf5b080();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf5b440();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = puVar2;
    func_0x00010c08fa60();
    if (puVar1 == (undefined *)0x0) {
      (**(code **)(param_7 + 0x10))(param_7,0xc);
    }
    _objc_initWeak(auStack_78,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar2;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = 0x15;
    func_0x0001000819a8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_1057e669c;
    puStack_b8 = &UNK_1108b4438;
    _objc_retain(puVar2);
    puStack_b0 = puVar2;
    _objc_retain(param_3);
    puStack_a8 = param_3;
    _objc_retain(param_7);
    puVar6 = auStack_78;
    lStack_90 = param_7;
    _objc_copyWeak(auStack_88);
    _objc_retain(param_4);
    uStack_a0 = param_4;
    _objc_retain(param_5);
    puVar1 = puVar4;
    lStack_98 = param_5;
    uStack_80 = param_6;
    func_0x00010c09d7c0(uVar3);
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(lStack_98);
    _objc_release(uStack_a0);
    _objc_destroyWeak(auStack_88);
    _objc_release(lStack_90);
    _objc_release(puStack_a8);
    _objc_release(puStack_b0);
    _objc_destroyWeak(auStack_78);
    _objc_release(puVar2);
    unaff_x28 = &puStack_d0;
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)unaff_x28 + 0x48));
  _objc_destroyWeak(auStack_78);
  __Unwind_Resume();
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if ((puVar1 == (undefined *)0x0) && (puVar6 != (undefined1 *)0x0)) {
    param_3 = param_3 + 0x48;
    _objc_loadWeakRetained(param_3);
    func_0x00010be991c0();
    _objc_release(param_3);
  }
  else {
    (**(code **)(*(long *)(param_3 + 0x40) + 0x10))(*(long *)(param_3 + 0x40),0xc);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 1057e669c; end: 1057e671f;  */

void FUN_1057e669c(long param_1,long param_2,long param_3)

{
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if ((param_3 == 0) && (param_2 != 0)) {
    param_1 = param_1 + 0x48;
    _objc_loadWeakRetained(param_1);
    func_0x00010be991c0();
    _objc_release(param_1);
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x40) + 0x10))(*(long *)(param_1 + 0x40),0xc);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1057e6720; end: 1057e689b; -[SCSavedStorySender _saveFriendStory:storyPoster:conversations:platformAnalytics:viewLocation:completionHandler:] */

void FUN_1057e6720(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  lVar1 = param_3;
  func_0x000108534ba4(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  FUN_1057e5fe8(param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    (**(code **)(param_8 + 0x10))(param_8,0xc);
  }
  else {
    lVar3 = param_3;
    FUN_1057e591c(param_3,param_4,param_6,lVar1,lVar2,param_7);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = 0x19;
    func_0x0001000819a8(0x19,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15c280(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1057e689c; end: 1057e68cb; -[SCSavedStorySender .cxx_destruct] */

void FUN_1057e689c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1057e68cc; end: 1057e69af; -[SCSavedStorySendingServiceProvider provide] */

void FUN_1057e68cc(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126be970;
  _objc_alloc(PTR_PTR_1126be970);
  func_0x00010c041640();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1057e69b0; end: 1057e69ef;  */

void FUN_1057e69b0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf2c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1057e69f0; end: 1057e6aab; -[SCSavedStorySendingServiceProvider _createSavedStorySender] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057e69f0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126be978;
  _objc_alloc(PTR_PTR_1126be978);
  lVar2 = param_1 + _DAT_112729f6c;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf523a0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112729f70;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010c244620();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c005e00(puVar1,param_2,lVar3,lVar4);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1057e6aac; end: 1057e6aef; -[SCSavedStorySendingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057e6aac(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112729f70);
  _objc_destroyWeak(param_1 + _DAT_112729f6c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112729f74);
  return;
}



/* Entry: 1057e6af0; end: 1057e6b67;  */

void FUN_1057e6af0(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108b4498,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1057e6b68; end: 1057e6c7f;  */

void FUN_1057e6b68(long param_1,undefined *param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined1 **ppuVar2;
  undefined1 **ppuVar3;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 *puStack_98;
  long *plStack_90;
  undefined1 **ppuStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined1 **)0x0;
  if (param_1 != 0) {
    unaff_x20 = *(long **)(param_1 + 8);
    pcVar1 = "true";
    if ((int)param_2 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(appuStack_50,pcVar1);
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x00010007e1e8(&uStack_70,appuStack_50,&lStack_38,1);
    param_2 = &UNK_1108b44e8;
    (**(code **)(*unaff_x20 + 0x18))(unaff_x20,&UNK_1108b44e8,&uStack_70,param_3);
    ppuVar2 = &puStack_58;
    puStack_58 = (undefined1 *)&uStack_70;
    func_0x00010007e5dc();
    unaff_x21 = &uStack_70;
    if (cStack_39 < '\0') {
      ppuVar2 = appuStack_50[0];
      __ZdlPv();
      unaff_x21 = &uStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puStack_58 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  ppuVar3 = ppuVar2;
  __Unwind_Resume();
  puStack_98 = (undefined1 *)&uStack_b0;
  pcStack_78 = FUN_1057e6c80;
  if (ppuVar3 != (undefined1 **)0x0) {
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    plStack_90 = unaff_x20;
    ppuStack_88 = ppuVar2;
    puStack_80 = &stack0xfffffffffffffff0;
    (**(code **)(*(long *)ppuVar3[1] + 0x18))(ppuVar3[1],&UNK_1108b4538,&uStack_b0,param_2);
    func_0x00010007e5dc(&puStack_98);
  }
  return;
}



/* Entry: 1057e6c80; end: 1057e6cf7;  */

void FUN_1057e6c80(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108b4538,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1057e6cf8; end: 1057e6d6f;  */

void FUN_1057e6cf8(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108b4588,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1057e6d70; end: 1057e6e3f; -[CTPUserDataFeedServiceImpl _soundFavoritesFeed] */

void FUN_1057e6d70(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c25d780(uVar1,param_2,&PTR____CFConstantStringClassReference_110e04038,
                      &PTR____CFConstantStringClassReference_110e04018,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126be980;
  func_0x00010bf459e0(PTR_PTR_1126be980,param_2,uVar1,0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b0cb0;
  _objc_alloc(PTR_PTR_1126b0cb0);
  func_0x00010c0559c0();
  puVar4 = PTR_PTR_1126be988;
  _objc_alloc(PTR_PTR_1126be988);
  func_0x00010c0124e0();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1057e6e40; end: 1057e7023; -[CTPUserDataFeedServiceImpl _soundRecentsFeed] */

void FUN_1057e6e40(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c25d780(lVar1,param_2,&PTR____CFConstantStringClassReference_110e04038,
                      &PTR____CFConstantStringClassReference_110e04018,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126be990;
  _objc_alloc_init();
  func_0x00010c19af40();
  puVar3 = PTR_PTR_1126bafb8;
  _objc_alloc_init();
  func_0x00010c17cc80();
  puVar4 = PTR_PTR_1126bafc0;
  _objc_alloc_init();
  func_0x00010c1ec2e0();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar6 = puVar4;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_60,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff4000(puVar5,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar6);
  puVar6 = PTR_PTR_1126be980;
  func_0x00010bf459e0(PTR_PTR_1126be980,param_2,lVar1,puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b0cb0;
  _objc_alloc(PTR_PTR_1126b0cb0);
  func_0x00010c0559c0();
  puVar8 = PTR_PTR_1126be988;
  _objc_alloc(PTR_PTR_1126be988);
  func_0x00010c0124e0();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    uVar9 = *(undefined8 *)(lVar1 + 0x38);
    func_0x00010c25d780(uVar9,param_2,&PTR____CFConstantStringClassReference_110e04038,
                        &PTR____CFConstantStringClassReference_110e04018,0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126be980;
    func_0x00010bf459e0(PTR_PTR_1126be980,param_2,uVar9,0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b0cb0;
    _objc_alloc(PTR_PTR_1126b0cb0);
    func_0x00010c0559c0();
    puVar8 = PTR_PTR_1126be988;
    _objc_alloc(PTR_PTR_1126be988);
    func_0x00010c0124e0();
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(uVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1057e7024; end: 1057e70f3; -[CTPUserDataFeedServiceImpl _soundUnlocksFeed] */

void FUN_1057e7024(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c25d780(uVar1,param_2,&PTR____CFConstantStringClassReference_110e04038,
                      &PTR____CFConstantStringClassReference_110e04018,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126be980;
  func_0x00010bf459e0(PTR_PTR_1126be980,param_2,uVar1,0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b0cb0;
  _objc_alloc(PTR_PTR_1126b0cb0);
  func_0x00010c0559c0();
  puVar4 = PTR_PTR_1126be988;
  _objc_alloc(PTR_PTR_1126be988);
  func_0x00010c0124e0();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1057e70f4; end: 1057e734f; -[CTPUserDataFeedServiceImpl initWithItemsRepository:itemsPersistence:feedsRepository:userDataClient:grapheneRegistry:circumstanceEngine:retryJobProvider:docObjectContext:protobufTransformer:creativeToolsABProvider:] */

undefined1 *
FUN_1057e70f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126ea600;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126be998;
    _objc_alloc();
    func_0x00010c0184a0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126be9a0;
    _objc_alloc();
    func_0x00010c00e160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined **)((long)puVar1 + 0x58) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_11;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1057e7350; end: 1057e764b; -[CTPUserDataFeedServiceImpl addExternalId:toCategory:context:] */

void FUN_1057e7350(undefined **param_1,undefined1 *param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_190 [8];
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 auStack_148 [8];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar5 = PTR_PTR_1126ae558;
  if (param_3 == 0) {
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9c80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  else {
    puVar4 = PTR_PTR_1126be9a8;
    _objc_alloc();
    puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c011260();
    _objc_release(puVar5);
    func_0x00010c0d9840(param_1[9]);
    puVar1 = PTR_PTR_1126ae560;
    _objc_opt_new();
    puVar2 = param_1[5];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_70 = param_3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be62b60(param_1);
    puVar3 = puVar2;
    func_0x00010c11c9e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    _objc_initWeak(auStack_78,param_1);
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_1057e764c;
    puStack_b0 = &UNK_1108b46d8;
    param_1 = &puStack_c8;
    param_2 = auStack_78;
    _objc_copyWeak(auStack_90,param_2);
    _objc_retain(puVar4);
    puStack_a8 = puVar4;
    _objc_retain(puVar1);
    puStack_a0 = puVar1;
    _objc_retain(puVar2);
    puVar5 = puVar3;
    puStack_98 = puVar2;
    uStack_88 = param_5;
    uStack_80 = param_4;
    func_0x00010c25ff60(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(puVar5);
    puVar5 = puVar1;
    func_0x00010bfbc3e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_98);
    _objc_release(puStack_a0);
    _objc_release(puStack_a8);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_78);
    _objc_release(puVar2);
    _objc_release(puVar3);
    _objc_release(puVar1);
    _objc_release(puVar4);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(param_1 + 7);
  _objc_destroyWeak(auStack_78);
  __Unwind_Resume();
  _objc_retain(param_2);
  puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_178 = 0xc2000000;
  pcStack_170 = FUN_1057e77e0;
  puStack_168 = &UNK_1108b46a8;
  _objc_copyWeak(auStack_148,param_3 + 0x38);
  uVar6 = *(undefined8 *)(param_3 + 0x20);
  _objc_retain(uVar6);
  uVar7 = *(undefined8 *)(param_3 + 0x28);
  uStack_160 = uVar6;
  _objc_retain(uVar7);
  uVar6 = *(undefined8 *)(param_3 + 0x30);
  uStack_158 = uVar7;
  _objc_retain(uVar6);
  uStack_138 = *(undefined8 *)(param_3 + 0x48);
  uStack_140 = *(undefined8 *)(param_3 + 0x40);
  uStack_150 = uVar6;
  _objc_copyWeak(auStack_190,param_3 + 0x38);
  uVar6 = *(undefined8 *)(param_3 + 0x20);
  _objc_retain(uVar6);
  uVar7 = *(undefined8 *)(param_3 + 0x28);
  _objc_retain(uVar7);
  uVar8 = *(undefined8 *)(param_3 + 0x30);
  _objc_retain(uVar8);
  uStack_188 = *(undefined8 *)(param_3 + 0x40);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_destroyWeak(auStack_190);
  _objc_release(uStack_150);
  _objc_release(uStack_158);
  _objc_release(uStack_160);
  _objc_destroyWeak(auStack_148);
  _objc_release(param_2);
  return;
}



/* Entry: 1057e764c; end: 1057e77df;  */

void FUN_1057e764c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1057e77e0;
  puStack_88 = &UNK_1108b46a8;
  _objc_copyWeak(auStack_68,param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_80 = uVar1;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_78 = uVar2;
  _objc_retain(uVar1);
  uStack_58 = *(undefined8 *)(param_1 + 0x48);
  uStack_60 = *(undefined8 *)(param_1 + 0x40);
  uStack_70 = uVar1;
  _objc_copyWeak(auStack_b0,param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  uStack_a8 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_b0);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_2);
  return;
}



/* Entry: 1057e77e0; end: 1057e798f;  */

void FUN_1057e77e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1057e7990;
  puStack_88 = &UNK_1108b4648;
  _objc_copyWeak(auStack_68,param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_80 = uVar2;
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_78 = uVar3;
  _objc_retain(uVar2);
  uStack_58 = *(undefined8 *)(param_1 + 0x48);
  uStack_60 = *(undefined8 *)(param_1 + 0x40);
  uStack_70 = uVar2;
  _objc_copyWeak(auStack_b0,param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  uStack_a8 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c0c0800(uVar1);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_b0);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_2);
  return;
}



/* Entry: 1057e7990; end: 1057e7b8f;  */

void FUN_1057e7990(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  _objc_retain(param_2);
  lStack_58 = 0;
  puVar2 = PTR_PTR_1126b0cb8;
  func_0x00010c0f40e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lStack_58;
  _objc_retain(lStack_58);
  lVar3 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar3);
  if (lVar1 == 0) {
    lVar4 = lVar3;
    func_0x00010be0ec20(lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,param_1 + 0x38);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar6);
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar7);
    uVar8 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar8);
    uStack_68 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(puVar2);
    _objc_retain(param_2);
    uStack_60 = *(undefined8 *)(param_1 + 0x48);
    param_1 = param_1 + 0x38;
    _objc_loadWeakRetained(param_1);
    lVar5 = param_1;
    func_0x00010c0f98a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(lVar4);
    _objc_release(lVar5);
    _objc_release(param_1);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(param_2);
    _objc_release(puVar2);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_destroyWeak(auStack_70);
  }
  else {
    func_0x00010bde34c0(lVar3);
    _objc_release(lVar3);
  }
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1057e7b90; end: 1057e7f93;  */

/* WARNING: Possible PIC construction at 0x0001057e7c04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001057e7c08) */

void FUN_1057e7b90(long param_1,undefined *param_2,undefined *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_3;
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_3 != (undefined *)0x0) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      uVar12 = *(undefined8 *)(param_1 + 0x30);
      uVar13 = *(undefined8 *)(param_1 + 0x50);
      puVar4 = param_3;
      goto code_r0x00010bde34c0;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf15da0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar4 = param_2;
    func_0x00010bfa3d00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27dd80();
    puVar5 = param_2;
    func_0x00010bfa3d00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4e080();
    lVar6 = lVar1;
    func_0x00010be73660();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
    lVar7 = lVar1;
    func_0x00010c085200(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_2;
    func_0x00010bfa3d00(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c28f160(lVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    uVar12 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar12);
    uVar13 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar13);
    lVar10 = lVar1;
    func_0x00010c0f98a0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(lVar9);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(lVar8);
    _objc_release(lVar7);
    lVar7 = lVar1;
    func_0x00010be73660();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar5;
    func_0x00010bed5200(lVar1);
    _objc_release(puVar5);
    if (*(long *)(param_1 + 0x58) == 0) {
      puVar4 = param_2;
      func_0x00010bfa3d00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4e080();
      lVar8 = lVar1;
      func_0x00010be73660();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      puVar5 = param_2;
      func_0x00010bfa3d00(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar5;
      func_0x00010bf4e080();
      puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bedbb80(lVar1);
      _objc_release(puVar11);
      _objc_release(puVar5);
      _objc_release(lVar8);
    }
    _objc_release(lVar7);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar2);
    _objc_release(lVar6);
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return;
  }
  ___stack_chk_fail();
  lVar1 = *(long *)(param_2 + 0x20);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  uVar12 = *(undefined8 *)(param_2 + 0x38);
  uVar13 = *(undefined8 *)(param_2 + 0x40);
code_r0x00010bde34c0:
                    /* WARNING: Could not recover jumptable at 0x00010bde34d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (lVar1,PTR_s__completeUpdateJob_promise_lifec_1125566d0,uVar3,uVar2,uVar12,uVar13,puVar4
            );
  return;
}



/* Entry: 1057e7f94; end: 1057e7fab;  */

void FUN_1057e7f94(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde34d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__completeUpdateJob_promise_lifec_1125566d0,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),param_3);
  return;
}



/* Entry: 1057e7fac; end: 1057e8063;  */

void FUN_1057e7fac(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde34c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1057e8064; end: 1057e835f; -[CTPUserDataFeedServiceImpl removeExternalId:fromCategory:context:] */

void FUN_1057e8064(undefined **param_1,undefined1 *param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_190 [8];
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 auStack_148 [8];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar5 = PTR_PTR_1126ae558;
  if (param_3 == 0) {
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9c80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  else {
    puVar4 = PTR_PTR_1126be9a8;
    _objc_alloc();
    puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c011260();
    _objc_release(puVar5);
    func_0x00010c0d9840(param_1[9]);
    puVar1 = PTR_PTR_1126ae560;
    _objc_opt_new();
    puVar2 = param_1[5];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_70 = param_3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be62b60(param_1);
    puVar3 = puVar2;
    func_0x00010c12ef40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    _objc_initWeak(auStack_78,param_1);
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_1057e8360;
    puStack_b0 = &UNK_1108b46d8;
    param_1 = &puStack_c8;
    param_2 = auStack_78;
    _objc_copyWeak(auStack_90,param_2);
    uStack_88 = param_4;
    uStack_80 = param_5;
    _objc_retain(puVar4);
    puStack_a8 = puVar4;
    _objc_retain(puVar1);
    puStack_a0 = puVar1;
    _objc_retain(puVar2);
    puVar5 = puVar3;
    puStack_98 = puVar2;
    func_0x00010c25ff60(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(puVar5);
    puVar5 = puVar1;
    func_0x00010bfbc3e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_98);
    _objc_release(puStack_a0);
    _objc_release(puStack_a8);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_78);
    _objc_release(puVar2);
    _objc_release(puVar3);
    _objc_release(puVar1);
    _objc_release(puVar4);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(param_1 + 7);
  _objc_destroyWeak(auStack_78);
  __Unwind_Resume();
  _objc_retain(param_2);
  puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_178 = 0xc2000000;
  pcStack_170 = FUN_1057e84f4;
  puStack_168 = &UNK_1108b46a8;
  _objc_copyWeak(auStack_148,param_3 + 0x38);
  uStack_138 = *(undefined8 *)(param_3 + 0x48);
  uStack_140 = *(undefined8 *)(param_3 + 0x40);
  uVar6 = *(undefined8 *)(param_3 + 0x20);
  _objc_retain(uVar6);
  uVar7 = *(undefined8 *)(param_3 + 0x28);
  uStack_160 = uVar6;
  _objc_retain(uVar7);
  uVar6 = *(undefined8 *)(param_3 + 0x30);
  uStack_158 = uVar7;
  _objc_retain(uVar6);
  uStack_150 = uVar6;
  _objc_copyWeak(auStack_190,param_3 + 0x38);
  uVar6 = *(undefined8 *)(param_3 + 0x20);
  _objc_retain(uVar6);
  uVar7 = *(undefined8 *)(param_3 + 0x28);
  _objc_retain(uVar7);
  uVar8 = *(undefined8 *)(param_3 + 0x30);
  _objc_retain(uVar8);
  uStack_188 = *(undefined8 *)(param_3 + 0x48);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_destroyWeak(auStack_190);
  _objc_release(uStack_150);
  _objc_release(uStack_158);
  _objc_release(uStack_160);
  _objc_destroyWeak(auStack_148);
  _objc_release(param_2);
  return;
}



/* Entry: 1057e8360; end: 1057e84f3;  */

void FUN_1057e8360(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1057e84f4;
  puStack_88 = &UNK_1108b46a8;
  _objc_copyWeak(auStack_68,param_1 + 0x38);
  uStack_58 = *(undefined8 *)(param_1 + 0x48);
  uStack_60 = *(undefined8 *)(param_1 + 0x40);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_80 = uVar1;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_78 = uVar2;
  _objc_retain(uVar1);
  uStack_70 = uVar1;
  _objc_copyWeak(auStack_b0,param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  uStack_a8 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_b0);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_2);
  return;
}



/* Entry: 1057e84f4; end: 1057e86a3;  */

void FUN_1057e84f4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1057e86a4;
  puStack_88 = &UNK_1108b4738;
  _objc_copyWeak(auStack_68,param_1 + 0x38);
  uStack_58 = *(undefined8 *)(param_1 + 0x48);
  uStack_60 = *(undefined8 *)(param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_80 = uVar2;
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_78 = uVar3;
  _objc_retain(uVar2);
  uStack_70 = uVar2;
  _objc_copyWeak(auStack_b0,param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  uStack_a8 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c0c0800(uVar1);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_b0);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_2);
  return;
}



/* Entry: 1057e86a4; end: 1057e881b;  */

void FUN_1057e86a4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010be0ec20();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_58,param_1 + 0x38);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar6);
  uStack_50 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(param_2);
  uStack_48 = *(undefined8 *)(param_1 + 0x40);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x00010c0f98a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(lVar2);
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_2);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 1057e881c; end: 1057e8aef;  */

/* WARNING: Possible PIC construction at 0x0001057e8890: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001057e8894) */

void FUN_1057e881c(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = param_3;
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_3 != 0) {
      uVar11 = *(undefined8 *)(param_1 + 0x20);
      uVar12 = *(undefined8 *)(param_1 + 0x28);
      uVar8 = *(undefined8 *)(param_1 + 0x30);
      uVar9 = *(undefined8 *)(param_1 + 0x48);
      lVar7 = param_3;
      goto code_r0x00010bde34c0;
    }
    lVar7 = lVar1;
    func_0x00010c085200(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_2;
    func_0x00010bfa3d00(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010c28f160(lVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar11);
    uVar12 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar12);
    uVar8 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar8);
    lVar6 = lVar1;
    func_0x00010c0f98a0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(lVar5);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(puVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar7);
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = 0;
    func_0x00010bed5200(lVar1);
    _objc_release(puVar4);
    if (*(long *)(param_1 + 0x50) == 0) {
      lVar2 = param_2;
      func_0x00010bfa3d00(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar2;
      func_0x00010bf4e080();
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bedbb80(lVar1);
      _objc_release(puVar4);
      _objc_release(lVar2);
    }
    _objc_release(uVar8);
    _objc_release(uVar12);
    _objc_release(uVar11);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  lVar1 = *(long *)(param_2 + 0x20);
  uVar11 = *(undefined8 *)(param_2 + 0x28);
  uVar12 = *(undefined8 *)(param_2 + 0x30);
  uVar8 = *(undefined8 *)(param_2 + 0x38);
  uVar9 = *(undefined8 *)(param_2 + 0x40);
code_r0x00010bde34c0:
                    /* WARNING: Could not recover jumptable at 0x00010bde34d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (lVar1,PTR_s__completeUpdateJob_promise_lifec_1125566d0,uVar11,uVar12,uVar8,uVar9,lVar7)
  ;
  return;
}



/* Entry: 1057e8af0; end: 1057e8b07;  */

void FUN_1057e8af0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde34d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__completeUpdateJob_promise_lifec_1125566d0,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),param_3);
  return;
}



/* Entry: 1057e8b08; end: 1057e8bbf;  */

void FUN_1057e8b08(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde34c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1057e8bc0; end: 1057e8c53; -[CTPUserDataFeedServiceImpl userDataForCategory:context:] */

void FUN_1057e8bc0(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 < 2) {
    if (param_3 != 0) {
      if (param_3 == 1) {
        func_0x00010bebe420(param_1);
        _objc_retainAutoreleasedReturnValue();
      }
      goto LAB_1057e8c4c;
    }
  }
  else {
    if (param_3 == 2) {
      func_0x00010bebe4c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1057e8c4c;
    }
    if (param_3 == 5) {
      func_0x00010bebe520(param_1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1057e8c4c;
    }
    if (param_3 != 4) goto LAB_1057e8c4c;
  }
  func_0x00010be11ea0(param_1);
  _objc_retainAutoreleasedReturnValue();
LAB_1057e8c4c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1057e8c54; end: 1057e8dd3; -[CTPUserDataFeedServiceImpl userDataForCategory:pageToken:pageSize:context:] */

void FUN_1057e8c54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  _objc_initWeak(auStack_48,param_1);
  uVar2 = param_1;
  func_0x00010be0ec20(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(puVar1);
  _objc_retain(param_4);
  uStack_50 = param_5;
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar2);
  _objc_release(param_1);
  _objc_release(uVar2);
  puVar3 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1057e8dd4; end: 1057e8f63;  */

void FUN_1057e8dd4(long param_1,undefined *param_2,undefined *param_3,undefined8 param_4,
                  undefined *param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (lVar1 == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    param_5 = puVar2;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf43ca0(uVar5);
    _objc_release(puVar3);
  }
  else {
    if (param_3 != (undefined *)0x0) {
      puVar4 = param_3;
      func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20));
      goto LAB_1057e8ee0;
    }
    if (param_2 != (undefined *)0x0) {
      param_5 = *(undefined **)(param_1 + 0x38);
      puVar4 = param_2;
      func_0x00010be11f00(lVar1);
      goto LAB_1057e8ee0;
    }
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    puVar2 = PTR_PTR_1126be9b0;
    _objc_alloc();
    func_0x00010c020520();
    puVar4 = puVar2;
    func_0x00010bf43d60(uVar5);
  }
  _objc_release(puVar2);
LAB_1057e8ee0:
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  puVar3 = param_2;
  func_0x00010c1196c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar4;
  func_0x00010c0840e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = puVar3;
  func_0x00010c084460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar3);
  if (puVar4 == (undefined *)0x0) {
    param_2 = PTR_PTR_1126ae558;
    func_0x00010bfe9ca0(PTR_PTR_1126ae558);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_5 + -2 < (undefined *)0x3) {
      uVar5 = *(undefined8 *)(&UNK_10ddbe818 + (long)(param_5 + -2) * 8);
    }
    else {
      uVar5 = 0;
    }
    puVar3 = puVar4;
    func_0x0001091620c4(puVar4,uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0726a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1057e8f64; end: 1057e908b; -[CTPUserDataFeedServiceImpl isProtobufItemInUserData:category:context:] */

void FUN_1057e8f64(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = param_1;
  func_0x00010c1196c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0840e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010c084460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x0) {
    param_1 = PTR_PTR_1126ae558;
    func_0x00010bfe9ca0(PTR_PTR_1126ae558);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_5 - 2U < 3) {
      uVar3 = *(undefined8 *)(&UNK_10ddbe818 + (param_5 - 2U) * 8);
    }
    else {
      uVar3 = 0;
    }
    puVar1 = puVar2;
    func_0x0001091620c4(puVar2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0726a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1057e908c; end: 1057e9193; -[CTPUserDataFeedServiceImpl isExternalIdInUserData:category:context:] */

void FUN_1057e908c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  lVar2 = param_1;
  func_0x00010c291900(param_1,param_2,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1057e9194;
  puStack_58 = &UNK_1108599d8;
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  puStack_50 = puVar1;
  uStack_48 = param_3;
  _objc_retain(param_3);
  _objc_retain(puVar1);
  func_0x00010c297260(lVar2,param_2,&puStack_70,uVar4);
  _objc_release(lVar2);
  puVar3 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_48);
  _objc_release(puStack_50);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1057e9194; end: 1057e93cf;  */

void FUN_1057e9194(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  if (param_3 == 0) {
    _objc_retain(param_2);
    lVar3 = param_2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_2);
        }
        lVar4 = *(long *)(lVar11 * 8);
        func_0x00010c084fc0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010bf52a60();
        lVar2 = lRam0000000000000000;
        while (lVar5 != 0) {
          lVar10 = 0;
          do {
            if (lRam0000000000000000 != lVar2) {
              _objc_enumerationMutation(lVar4);
            }
            uVar6 = *(undefined8 *)(lVar10 * 8);
            func_0x00010bf9e140();
            _objc_retainAutoreleasedReturnValue();
            uVar7 = *(undefined8 *)(param_1 + 0x28);
            func_0x00010bfe5e40(uVar7);
            _objc_retainAutoreleasedReturnValue();
            uVar9 = uVar6;
            func_0x00010c0720c0();
            _objc_release(uVar7);
            _objc_release(uVar6);
            if ((int)uVar9 != 0) {
              func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
              _objc_release(lVar4);
              _objc_release(param_2);
              goto LAB_1057e938c;
            }
            lVar10 = lVar10 + 1;
          } while (lVar5 != lVar10);
          lVar5 = lVar4;
          func_0x00010bf52a60();
        }
        _objc_release(lVar4);
        lVar11 = lVar11 + 1;
      } while (lVar11 != lVar3);
      lVar3 = param_2;
      func_0x00010bf52a60();
    }
    _objc_release(param_2);
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20));
  }
LAB_1057e938c:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  uVar9 = *(undefined8 *)(param_2 + 0x48);
  _objc_retain(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar9);
  return;
}



/* Entry: 1057e93d0; end: 1057e93f7; -[CTPUserDataFeedServiceImpl userDataUpdateObservable] */

void FUN_1057e93d0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1057e93f8; end: 1057e948b; -[CTPUserDataFeedServiceImpl updateCTPItem:userDataCategory:] */

void FUN_1057e93f8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf9e140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    func_0x00010c0856a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbde0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1057e948c; end: 1057e96cf; -[CTPUserDataFeedServiceImpl _fetchItemsForFeed:pageToken:pageSize:promise:] */

void FUN_1057e948c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_initWeak(auStack_80,param_1);
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x2020000000;
  uStack_88 = 0;
  func_0x00010c085260(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0850c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfb0d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_a8,auStack_80);
  _objc_retain(param_6);
  _objc_retain(param_3);
  _objc_retain(param_6);
  uVar4 = uVar3;
  func_0x00010c25ff80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_a8);
  __Block_object_dispose(&uStack_a0,8);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1057e96d0; end: 1057e989f;  */

void FUN_1057e96d0(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_2;
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 1;
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (lVar1 == 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(uVar7);
    _objc_release(puVar2);
  }
  else {
    puVar8 = *(undefined **)(param_1 + 0x28);
    _objc_retain(puVar8);
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar9);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar7);
    func_0x00010c0c0800(param_2);
    _objc_release(uVar7);
    _objc_release(uVar9);
  }
  _objc_release(puVar8);
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar5);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c085200(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010bfa3d00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010bfa4280(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_2 + 0x30);
  _objc_retain(uVar11);
  uVar10 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(lVar5);
  func_0x00010c0f98a0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar9);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar4);
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(uVar11);
  _objc_release(lVar5);
  _objc_release(lVar5);
  return;
}



/* Entry: 1057e98a0; end: 1057e99e7;  */

void FUN_1057e98a0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c085200(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfa3d00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bfa4280(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar6);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0f98a0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar6);
  _objc_release(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 1057e99e8; end: 1057e9a8f;  */

void FUN_1057e99e8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126be9b0;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c0f1e20(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c020520(puVar1);
  _objc_release(uVar2);
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1057e9a90; end: 1057e9a9b;  */

void FUN_1057e9a90(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0,param_2);
  return;
}



/* Entry: 1057e9a9c; end: 1057e9b87;  */

void FUN_1057e9a9c(undefined *param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined8 uStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    uStack_48 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    ppuStack_40 = &PTR____CFConstantStringClassReference_110e040b8;
    param_1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_40,&uStack_48,1);
    _objc_retainAutoreleasedReturnValue();
    param_4 = 0;
    param_5 = param_1;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar1;
    func_0x00010bf43ca0(uVar3);
    _objc_release(puVar1);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126be9b8;
  func_0x00010c291a00();
  _objc_retainAutoreleasedReturnValue();
  if (param_7 == 0) {
    func_0x00010c2b9fa0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2aab80(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar2);
    func_0x00010bf43d60(param_4);
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    puVar2 = puVar1;
    func_0x00010bf21f60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a3880(uVar3);
    _objc_release(puVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    puVar2 = puVar1;
    func_0x00010bf21f60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3);
    _objc_release(puVar2);
    func_0x00010bf86d80(param_5);
  }
  else {
    _objc_initWeak(auStack_b8,param_1);
    puVar2 = param_3;
    func_0x00010bf9e140(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf33240(param_3);
    func_0x00010c0726a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar1);
    _objc_retain(param_7);
    _objc_retain(param_4);
    _objc_copyWeak(auStack_c0,auStack_b8);
    _objc_retain(param_5);
    func_0x00010c297260(param_1);
    _objc_release(param_1);
    _objc_release(puVar2);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_c0);
    _objc_release(param_4);
    _objc_release(param_7);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_b8);
  }
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1057e9b88; end: 1057e9e27; -[CTPUserDataFeedServiceImpl _completeUpdateJob:promise:lifecycle:context:withError:] */

void FUN_1057e9b88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126be9b8;
  func_0x00010c291a00();
  _objc_retainAutoreleasedReturnValue();
  if (param_7 == 0) {
    func_0x00010c2b9fa0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2aab80(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar2);
    func_0x00010bf43d60(param_4);
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    puVar2 = puVar1;
    func_0x00010bf21f60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a3880(uVar3);
    _objc_release(puVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    puVar2 = puVar1;
    func_0x00010bf21f60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3);
    _objc_release(puVar2);
    func_0x00010bf86d80(param_5);
  }
  else {
    _objc_initWeak(auStack_68,param_1);
    uVar3 = param_3;
    func_0x00010bf9e140(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf33240(param_3);
    func_0x00010c0726a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar1);
    _objc_retain(param_7);
    _objc_retain(param_4);
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_5);
    func_0x00010c297260(param_1);
    _objc_release(param_1);
    _objc_release(uVar3);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_70);
    _objc_release(param_4);
    _objc_release(param_7);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1057e9e28; end: 1057e9f67;  */

void FUN_1057e9e28(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  func_0x00010c2ad520(*(undefined8 *)(param_1 + 0x20));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b9fa0(*(undefined8 *)(param_1 + 0x20));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2adac0(*(undefined8 *)(param_1 + 0x20));
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2aab80(uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf21f60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x30));
  lVar2 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c2918e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a3880();
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c286c60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840();
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x38));
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1057e9f68; end: 1057ea0b7; -[CTPUserDataFeedServiceImpl _updateMirroredFavoritesCacheFromContext:upsertedItems:deletedItemIds:] */

void FUN_1057e9f68(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  puVar2 = PTR_PTR_1126b0cb0;
  uVar1 = 2;
  if (param_3 != 3) {
    uVar1 = 3;
  }
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc(puVar2);
  func_0x00010c0559c0();
  uVar3 = param_1;
  func_0x00010c085200(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c28f160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc0000000;
  pcStack_68 = FUN_1057ea0b8;
  puStack_60 = &UNK_1108b47f8;
  uStack_58 = uVar1;
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar5,param_2,&puStack_78,param_1);
  _objc_release(param_1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  return;
}



/* Entry: 1057ea0b8; end: 1057ea0bb;  */

void FUN_1057ea0b8(void)

{
  return;
}



/* Entry: 1057ea0bc; end: 1057ea1b7; -[CTPUserDataFeedServiceImpl _feedForCategory:context:] */

void FUN_1057ea0bc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new(PTR_PTR_1126ae560);
  if (param_3 < 2) {
    if (param_3 == 0) {
      uVar3 = 0xd;
LAB_1057ea17c:
      func_0x00010be0ece0(param_1,param_2,uVar3,param_4,puVar1);
      goto LAB_1057ea188;
    }
    if (param_3 != 1) goto LAB_1057ea188;
    func_0x00010bebe440(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_3 == 2) {
    func_0x00010bebe4e0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_3 == 4) {
      uVar3 = 0x16;
      goto LAB_1057ea17c;
    }
    if (param_3 != 5) goto LAB_1057ea188;
    func_0x00010bebe540(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bf43d60(puVar1,param_2,param_1);
  _objc_release(param_1);
LAB_1057ea188:
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1057ea1b8; end: 1057ea2c7; -[CTPUserDataFeedServiceImpl _feedNodeForType:context:promise:] */

void FUN_1057ea1b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa4020();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfb0d80();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1057ea2c8;
  puStack_50 = &UNK_110849f28;
  uStack_48 = param_5;
  _objc_retain(param_5);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uStack_48);
  _objc_release(param_5);
  return;
}



/* Entry: 1057ea2c8; end: 1057ea383;  */

void FUN_1057ea2c8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1057ea384; end: 1057ea39b;  */

void FUN_1057ea384(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 1057ea39c; end: 1057ea4c7; -[CTPUserDataFeedServiceImpl _fetchItemsForCategory:context:] */

void FUN_1057ea39c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  _objc_initWeak(auStack_38,param_1);
  func_0x00010be0ec20(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar1);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c297260(param_1);
  _objc_release(param_1);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_40);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1057ea4c8; end: 1057ea65b;  */

void FUN_1057ea4c8(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == 0) {
    if (param_2 == 0) {
      func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
    }
    else {
      lVar1 = param_1 + 0x28;
      _objc_loadWeakRetained();
      if (lVar1 == 0) {
        func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
      }
      else {
        lVar2 = lVar1;
        func_0x00010c085260(lVar1);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c0850a0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010bfb0d80();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = *(undefined8 *)(param_1 + 0x20);
        _objc_retain(uVar7);
        lVar6 = lVar5;
        func_0x00010c25ff60(lVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1a3e0();
        _objc_release(lVar6);
        _objc_release(lVar5);
        _objc_release(lVar4);
        _objc_release(lVar3);
        _objc_release(lVar2);
        _objc_release(uVar7);
      }
      _objc_release(lVar1);
    }
  }
  else {
    func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1057ea65c; end: 1057ea717;  */

void FUN_1057ea65c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1057ea718; end: 1057ea72f;  */

void FUN_1057ea718(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 1057ea730; end: 1057ea88f; -[CTPUserDataFeedServiceImpl _soundFavorites] */

void FUN_1057ea730(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uVar2 = param_1;
  func_0x00010c085260(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bebe440(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0850a0(uVar3,param_2,param_1,0);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfb0d80();
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1057ea890;
  puStack_60 = &UNK_110849f28;
  puStack_58 = puVar1;
  _objc_retain(puVar1);
  uVar6 = uVar5;
  func_0x00010c25ff60(uVar5,param_2,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar7 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_58);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1057ea890; end: 1057ea94b;  */

void FUN_1057ea890(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1057ea94c; end: 1057ea963;  */

void FUN_1057ea94c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 1057ea964; end: 1057eaac3; -[CTPUserDataFeedServiceImpl _soundRecents] */

void FUN_1057ea964(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uVar2 = param_1;
  func_0x00010c085260(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bebe4e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0850a0(uVar3,param_2,param_1,0);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfb0d80();
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1057eaac4;
  puStack_60 = &UNK_110849f28;
  puStack_58 = puVar1;
  _objc_retain(puVar1);
  uVar6 = uVar5;
  func_0x00010c25ff60(uVar5,param_2,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar7 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_58);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1057eaac4; end: 1057eab7f;  */

void FUN_1057eaac4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1057eab80; end: 1057eab97;  */

void FUN_1057eab80(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 1057eab98; end: 1057eacf7; -[CTPUserDataFeedServiceImpl _soundUnlocks] */

void FUN_1057eab98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uVar2 = param_1;
  func_0x00010c085260(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bebe540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0850a0(uVar3,param_2,param_1,0);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfb0d80();
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1057eacf8;
  puStack_60 = &UNK_110849f28;
  puStack_58 = puVar1;
  _objc_retain(puVar1);
  uVar6 = uVar5;
  func_0x00010c25ff60(uVar5,param_2,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar7 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_58);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1057eacf8; end: 1057eadb3;  */

void FUN_1057eacf8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1057eadb4; end: 1057eadcb;  */

void FUN_1057eadb4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 1057eadcc; end: 1057eadef; -[CTPUserDataFeedServiceImpl _networkUserDataCategoryForFeedCategory:] */

undefined8 FUN_1057eadcc(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 6) {
    return *(undefined8 *)(&UNK_10ddbe830 + (param_3 - 1U) * 8);
  }
  return 1;
}



/* Entry: 1057eadf0; end: 1057eaedb; -[CTPUserDataFeedServiceImpl _persistedItemForItemId:data:feedType:feedsTreeContext:] */

void FUN_1057eadf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b0cb0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0559c0();
  puVar2 = PTR_PTR_1126bacd0;
  _objc_alloc(PTR_PTR_1126bacd0);
  puVar3 = PTR_PTR_1126badb8;
  func_0x00010c11fd80(PTR_PTR_1126badb8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01ffe0(puVar2,param_2,param_3,puVar3,param_4,0,puVar1,
                      &PTR____CFConstantStringClassReference_110db1158,0,0,0);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1057eaedc; end: 1057eafb7; -[CTPUserDataFeedServiceImpl _updateChatHometabFeedCacheIfNecessaryWithUpsertedItems:deletedItemsIds:category:] */

void FUN_1057eaedc(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_5 == 0) && (lVar1 = param_4, func_0x00010bf529e0(), lVar1 == 0)) {
    puVar2 = PTR_PTR_1126b0cb0;
    _objc_alloc(PTR_PTR_1126b0cb0);
    func_0x00010c0559c0();
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c28f160();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1057eafb8; end: 1057eafbb;  */

void FUN_1057eafb8(void)

{
  return;
}



/* Entry: 1057eafbc; end: 1057eafc3; -[CTPUserDataFeedServiceImpl itemsRepository] */

undefined8 FUN_1057eafbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1057eafc4; end: 1057eaff3; -[CTPUserDataFeedServiceImpl setItemsRepository:] */

void FUN_1057eafc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1057eaff4; end: 1057eaffb; -[CTPUserDataFeedServiceImpl itemsPersistence] */

undefined8 FUN_1057eaff4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1057eaffc; end: 1057eb02b; -[CTPUserDataFeedServiceImpl setItemsPersistence:] */

void FUN_1057eaffc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1057eb02c; end: 1057eb033; -[CTPUserDataFeedServiceImpl feedsRepository] */

undefined8 FUN_1057eb02c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1057eb034; end: 1057eb063; -[CTPUserDataFeedServiceImpl setFeedsRepository:] */

void FUN_1057eb034(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1057eb064; end: 1057eb06b; -[CTPUserDataFeedServiceImpl userDataClient] */

undefined8 FUN_1057eb064(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1057eb06c; end: 1057eb09b; -[CTPUserDataFeedServiceImpl setUserDataClient:] */

void FUN_1057eb06c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1057eb09c; end: 1057eb0a3; -[CTPUserDataFeedServiceImpl protobufTransformer] */

undefined8 FUN_1057eb09c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1057eb0a4; end: 1057eb0d3; -[CTPUserDataFeedServiceImpl setProtobufTransformer:] */

void FUN_1057eb0a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1057eb0d4; end: 1057eb0db; -[CTPUserDataFeedServiceImpl circumstanceEngine] */

undefined8 FUN_1057eb0d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1057eb0dc; end: 1057eb10b; -[CTPUserDataFeedServiceImpl setCircumstanceEngine:] */

void FUN_1057eb0dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1057eb10c; end: 1057eb113; -[CTPUserDataFeedServiceImpl userDataFeedServiceLogger] */

undefined8 FUN_1057eb10c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1057eb114; end: 1057eb143; -[CTPUserDataFeedServiceImpl setUserDataFeedServiceLogger:] */

void FUN_1057eb114(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1057eb144; end: 1057eb14b; -[CTPUserDataFeedServiceImpl updateJobObservable] */

undefined8 FUN_1057eb144(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1057eb14c; end: 1057eb17b; -[CTPUserDataFeedServiceImpl setUpdateJobObservable:] */

void FUN_1057eb14c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1057eb17c; end: 1057eb183; -[CTPUserDataFeedServiceImpl performer] */

undefined8 FUN_1057eb17c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1057eb184; end: 1057eb1b3; -[CTPUserDataFeedServiceImpl setPerformer:] */

void FUN_1057eb184(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1057eb1b4; end: 1057eb1bb; -[CTPUserDataFeedServiceImpl jobProcessor] */

undefined8 FUN_1057eb1b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 1057eb1bc; end: 1057eb1eb; -[CTPUserDataFeedServiceImpl setJobProcessor:] */

void FUN_1057eb1bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1057eb1ec; end: 1057eb287; -[CTPUserDataFeedServiceImpl .cxx_destruct] */

void FUN_1057eb1ec(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}


