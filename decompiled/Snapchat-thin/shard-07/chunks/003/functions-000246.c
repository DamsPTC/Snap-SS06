/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10547d9b4; end: 10547dacb;  */

/* WARNING: Removing unreachable block (ram,0x00010547dcc8) */

void FUN_10547d9b4(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  undefined1 **ppuVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char **ppcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  int iVar18;
  char *pcVar19;
  long *plVar20;
  long lVar21;
  char *unaff_x21;
  char *unaff_x24;
  char *pcVar22;
  char *unaff_x25;
  char *unaff_x26;
  char acStack_350 [24];
  undefined1 *puStack_338;
  undefined1 auStack_330 [24];
  undefined1 auStack_318 [24];
  undefined8 auStack_300 [2];
  char cStack_2e9;
  long lStack_2e8;
  char *pcStack_2e0;
  char *pcStack_2d8;
  char *pcStack_2d0;
  char *pcStack_2c8;
  char *pcStack_2c0;
  char *pcStack_2b8;
  char *pcStack_2b0;
  char *pcStack_2a8;
  undefined1 ****ppppuStack_2a0;
  code *pcStack_298;
  char acStack_290 [24];
  undefined1 *puStack_278;
  char acStack_270 [24];
  undefined1 auStack_258 [24];
  char acStack_240 [23];
  char cStack_229;
  long lStack_228;
  undefined1 ***pppuStack_1e0;
  code *pcStack_1d8;
  char acStack_1c8 [24];
  char *pcStack_1b0;
  char acStack_1a8 [24];
  long alStack_190 [2];
  char cStack_179;
  long lStack_178;
  char *pcStack_170;
  char *pcStack_168;
  char *pcStack_160;
  char *pcStack_158;
  char *pcStack_150;
  char *pcStack_148;
  undefined1 **ppuStack_140;
  code *pcStack_138;
  char acStack_130 [24];
  undefined1 *puStack_118;
  char acStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_80;
  code *pcStack_78;
  char acStack_70 [24];
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  pcVar8 = acStack_70;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = (undefined1 **)0x0;
  pcVar2 = param_3;
  if (param_1 != 0) {
    plVar20 = *(long **)(param_1 + 8);
    pcVar2 = "true";
    if ((int)param_2 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(appuStack_50,pcVar2);
    acStack_70[0] = '\0';
    acStack_70[1] = '\0';
    acStack_70[2] = '\0';
    acStack_70[3] = '\0';
    acStack_70[4] = '\0';
    acStack_70[5] = '\0';
    acStack_70[6] = '\0';
    acStack_70[7] = '\0';
    acStack_70[8] = '\0';
    acStack_70[9] = '\0';
    acStack_70[10] = '\0';
    acStack_70[0xb] = '\0';
    acStack_70[0xc] = '\0';
    acStack_70[0xd] = '\0';
    acStack_70[0xe] = '\0';
    acStack_70[0xf] = '\0';
    acStack_70[0x10] = '\0';
    acStack_70[0x11] = '\0';
    acStack_70[0x12] = '\0';
    acStack_70[0x13] = '\0';
    acStack_70[0x14] = '\0';
    acStack_70[0x15] = '\0';
    acStack_70[0x16] = '\0';
    acStack_70[0x17] = '\0';
    func_0x00010007e1e8(acStack_70,appuStack_50,&lStack_38,1);
    param_2 = "";
    (**(code **)(*plVar20 + 0x18))(plVar20);
    ppuVar1 = &puStack_58;
    puStack_58 = acStack_70;
    func_0x00010007e5dc();
    pcVar2 = pcVar8;
    param_4 = param_3;
    unaff_x21 = acStack_70;
    if (cStack_39 < '\0') {
      ppuVar1 = appuStack_50[0];
      __ZdlPv();
      pcVar2 = pcVar8;
      param_4 = param_3;
      unaff_x21 = acStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puStack_58 = unaff_x21;
  func_0x00010007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  __Unwind_Resume();
  pcVar3 = acStack_130;
  pcStack_78 = FUN_10547dacc;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = param_2;
  pcVar14 = pcVar2;
  pcVar19 = param_4;
  pcVar6 = param_5;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_retain(param_4);
  if (ppuVar1 != (undefined1 **)0x0) {
    plVar20 = (long *)ppuVar1[1];
    unaff_x24 = "false";
    unaff_x25 = "true";
    pcVar8 = unaff_x25;
    if ((int)param_2 == 0) {
      pcVar8 = unaff_x24;
    }
    func_0x00010002b838(acStack_110,pcVar8);
    pcVar8 = unaff_x25;
    if ((int)pcVar2 == 0) {
      pcVar8 = unaff_x24;
    }
    func_0x00010002b838(auStack_f8,pcVar8);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar2 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_e0,pcVar2);
    acStack_130[0] = '\0';
    acStack_130[1] = '\0';
    acStack_130[2] = '\0';
    acStack_130[3] = '\0';
    acStack_130[4] = '\0';
    acStack_130[5] = '\0';
    acStack_130[6] = '\0';
    acStack_130[7] = '\0';
    acStack_130[8] = '\0';
    acStack_130[9] = '\0';
    acStack_130[10] = '\0';
    acStack_130[0xb] = '\0';
    acStack_130[0xc] = '\0';
    acStack_130[0xd] = '\0';
    acStack_130[0xe] = '\0';
    acStack_130[0xf] = '\0';
    acStack_130[0x10] = '\0';
    acStack_130[0x11] = '\0';
    acStack_130[0x12] = '\0';
    acStack_130[0x13] = '\0';
    acStack_130[0x14] = '\0';
    acStack_130[0x15] = '\0';
    acStack_130[0x16] = '\0';
    acStack_130[0x17] = '\0';
    func_0x00010007e1e8(acStack_130,acStack_110,&lStack_c8,3);
    pcVar8 = "";
    (**(code **)(*plVar20 + 0x18))(plVar20);
    puStack_118 = acStack_130;
    func_0x00010007e5dc(&puStack_118);
    lVar21 = 0;
    pcVar14 = pcVar3;
    pcVar19 = param_5;
    do {
      if ((&cStack_c9)[lVar21] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar21));
      }
      lVar21 = lVar21 + -0x18;
      param_2 = acStack_130;
    } while (lVar21 != -0x48);
  }
  pcVar3 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  pcVar15 = acStack_110;
  do {
    param_2 = param_2 + -0x18;
  } while (param_2 != pcVar15);
  _objc_release(param_4);
  pcVar4 = pcVar3;
  __Unwind_Resume();
  pcStack_138 = FUN_10547dcf0;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar5 = (char **)0x0;
  pcVar22 = unaff_x24;
  pcStack_170 = unaff_x24;
  pcStack_168 = pcVar2;
  pcStack_160 = param_2;
  pcStack_158 = pcVar15;
  pcStack_150 = pcVar3;
  pcStack_148 = param_4;
  ppuStack_140 = &puStack_80;
  if (pcVar4 != (char *)0x0) {
    plVar20 = *(long **)(pcVar4 + 8);
    pcVar2 = "true";
    if ((int)pcVar8 == 0) {
      pcVar2 = "false";
    }
    pcVar22 = acStack_1a8;
    func_0x00010002b838(acStack_1a8,pcVar2);
    pcVar2 = "true";
    if ((int)pcVar14 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(alStack_190,pcVar2);
    acStack_1c8[0] = '\0';
    acStack_1c8[1] = '\0';
    acStack_1c8[2] = '\0';
    acStack_1c8[3] = '\0';
    acStack_1c8[4] = '\0';
    acStack_1c8[5] = '\0';
    acStack_1c8[6] = '\0';
    acStack_1c8[7] = '\0';
    acStack_1c8[8] = '\0';
    acStack_1c8[9] = '\0';
    acStack_1c8[10] = '\0';
    acStack_1c8[0xb] = '\0';
    acStack_1c8[0xc] = '\0';
    acStack_1c8[0xd] = '\0';
    acStack_1c8[0xe] = '\0';
    acStack_1c8[0xf] = '\0';
    acStack_1c8[0x10] = '\0';
    acStack_1c8[0x11] = '\0';
    acStack_1c8[0x12] = '\0';
    acStack_1c8[0x13] = '\0';
    acStack_1c8[0x14] = '\0';
    acStack_1c8[0x15] = '\0';
    acStack_1c8[0x16] = '\0';
    acStack_1c8[0x17] = '\0';
    func_0x00010007e1e8(acStack_1c8,acStack_1a8,&lStack_178,2);
    pcVar8 = "";
    pcVar15 = acStack_1c8;
    pcVar14 = acStack_1c8;
    (**(code **)(*plVar20 + 0x18))(plVar20);
    ppcVar5 = &pcStack_1b0;
    pcStack_1b0 = pcVar15;
    func_0x00010007e5dc();
    lVar21 = 0;
    do {
      if ((&cStack_179)[lVar21] < '\0') {
        ppcVar5 = *(char ***)((long)alStack_190 + lVar21);
        __ZdlPv();
      }
      lVar21 = lVar21 + -0x18;
    } while (lVar21 != -0x30);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1b0 = pcVar15;
  func_0x00010007e5dc(&pcStack_1b0);
  lVar21 = -0x30;
  pcVar2 = &cStack_179;
  do {
    if (*pcVar2 < '\0') {
      __ZdlPv(*(undefined8 *)(pcVar2 + -0x17));
    }
    lVar21 = lVar21 + 0x18;
    pcVar2 = pcVar2 + -0x18;
  } while (lVar21 != 0);
  __Unwind_Resume();
  pcVar7 = acStack_290;
  pcStack_1d8 = FUN_10547de74;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = pcVar8;
  pcVar15 = pcVar14;
  pcVar3 = pcVar19;
  pcVar4 = pcVar6;
  pppuStack_1e0 = &ppuStack_140;
  _objc_retain(pcVar8);
  iVar18 = (int)pcVar3;
  pcVar3 = (char *)0x0;
  if (ppcVar5 != (char **)0x0) {
    plVar20 = (long *)ppcVar5[1];
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar8;
      _objc_retainAutorelease(pcVar8);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar8);
    func_0x00010002b838(acStack_270,pcVar2);
    unaff_x25 = "false";
    unaff_x26 = "true";
    pcVar2 = unaff_x26;
    if ((int)pcVar14 == 0) {
      pcVar2 = unaff_x25;
    }
    func_0x00010002b838(auStack_258,pcVar2);
    pcVar14 = acStack_270;
    pcVar22 = acStack_240;
    pcVar2 = unaff_x26;
    if ((int)pcVar19 == 0) {
      pcVar2 = unaff_x25;
    }
    func_0x00010002b838(pcVar22,pcVar2);
    acStack_290[0] = '\0';
    acStack_290[1] = '\0';
    acStack_290[2] = '\0';
    acStack_290[3] = '\0';
    acStack_290[4] = '\0';
    acStack_290[5] = '\0';
    acStack_290[6] = '\0';
    acStack_290[7] = '\0';
    acStack_290[8] = '\0';
    acStack_290[9] = '\0';
    acStack_290[10] = '\0';
    acStack_290[0xb] = '\0';
    acStack_290[0xc] = '\0';
    acStack_290[0xd] = '\0';
    acStack_290[0xe] = '\0';
    acStack_290[0xf] = '\0';
    acStack_290[0x10] = '\0';
    acStack_290[0x11] = '\0';
    acStack_290[0x12] = '\0';
    acStack_290[0x13] = '\0';
    acStack_290[0x14] = '\0';
    acStack_290[0x15] = '\0';
    acStack_290[0x16] = '\0';
    acStack_290[0x17] = '\0';
    func_0x00010007e1e8(acStack_290,acStack_270,&lStack_228,3);
    pcVar2 = "";
    (**(code **)(*plVar20 + 0x18))(plVar20);
    puStack_278 = acStack_290;
    func_0x00010007e5dc(&puStack_278);
    lVar21 = 0;
    pcVar3 = acStack_270;
    pcVar15 = pcVar7;
    do {
      if ((&cStack_229)[lVar21] < '\0') {
        __ZdlPv(*(undefined8 *)(acStack_240 + lVar21));
      }
      iVar18 = (int)pcVar6;
      lVar21 = lVar21 + -0x18;
      pcVar19 = acStack_290;
    } while (lVar21 != -0x48);
  }
  pcVar6 = pcVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_228) {
    ___stack_chk_fail();
    _objc_release(pcVar8);
    _objc_release(pcVar8);
    pcVar7 = pcVar6;
    __Unwind_Resume();
    pcVar17 = acStack_350;
    pcStack_298 = FUN_10547e090;
    lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar16 = pcVar15;
    pcStack_2e0 = unaff_x26;
    pcStack_2d8 = unaff_x25;
    pcStack_2d0 = pcVar22;
    pcStack_2c8 = pcVar14;
    pcStack_2c0 = pcVar19;
    pcStack_2b8 = pcVar3;
    pcStack_2b0 = pcVar6;
    pcStack_2a8 = pcVar8;
    ppppuStack_2a0 = &pppuStack_1e0;
    _objc_retain(pcVar2);
    if (pcVar7 != (char *)0x0) {
      plVar20 = *(long **)(pcVar7 + 8);
      _objc_retain(pcVar2);
      if (pcVar2 == (char *)0x0) {
        pcVar8 = "";
      }
      else {
        pcVar8 = pcVar2;
        _objc_retainAutorelease(pcVar2);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar2);
      func_0x00010002b838(auStack_330,pcVar8);
      pcVar8 = "true";
      if ((int)pcVar15 == 0) {
        pcVar8 = "false";
      }
      func_0x00010002b838(auStack_318,pcVar8);
      pcVar8 = "true";
      if (iVar18 == 0) {
        pcVar8 = "false";
      }
      func_0x00010002b838(auStack_300,pcVar8);
      acStack_350[0] = '\0';
      acStack_350[1] = '\0';
      acStack_350[2] = '\0';
      acStack_350[3] = '\0';
      acStack_350[4] = '\0';
      acStack_350[5] = '\0';
      acStack_350[6] = '\0';
      acStack_350[7] = '\0';
      acStack_350[8] = '\0';
      acStack_350[9] = '\0';
      acStack_350[10] = '\0';
      acStack_350[0xb] = '\0';
      acStack_350[0xc] = '\0';
      acStack_350[0xd] = '\0';
      acStack_350[0xe] = '\0';
      acStack_350[0xf] = '\0';
      acStack_350[0x10] = '\0';
      acStack_350[0x11] = '\0';
      acStack_350[0x12] = '\0';
      acStack_350[0x13] = '\0';
      acStack_350[0x14] = '\0';
      acStack_350[0x15] = '\0';
      acStack_350[0x16] = '\0';
      acStack_350[0x17] = '\0';
      func_0x00010007e1e8(acStack_350,auStack_330,&lStack_2e8,3);
      (**(code **)(*plVar20 + 0x18))(plVar20,&UNK_11088be40,acStack_350,pcVar4);
      puStack_338 = acStack_350;
      func_0x00010007e5dc(&puStack_338);
      lVar21 = 0;
      pcVar16 = pcVar17;
      do {
        if ((&cStack_2e9)[lVar21] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_300 + lVar21));
        }
        lVar21 = lVar21 + -0x18;
      } while (lVar21 != -0x48);
    }
    pcVar8 = pcVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2e8) {
      ___stack_chk_fail();
      _objc_release(pcVar2);
      _objc_release(pcVar2);
      __Unwind_Resume();
      _objc_retain(pcVar16);
      uVar9 = *(undefined8 *)(pcVar8 + 0x28);
      func_0x00010c269d40(uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      func_0x00010bfa6e00();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
      func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar10;
      func_0x00010c0e0e60(uVar10);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(pcVar16);
      uVar13 = uVar12;
      func_0x00010c25ff60(uVar12);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(pcVar16);
      _objc_release(pcVar16);
      _objc_release(uVar12);
      _objc_release(puVar11);
      _objc_release(uVar10);
      _objc_release(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar13);
      return;
    }
    return;
  }
  return;
}



/* Entry: 10547dacc; end: 10547dcef;  */

/* WARNING: Removing unreachable block (ram,0x00010547dcc8) */

void FUN_10547dacc(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char **ppcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  int iVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  long lVar19;
  long *plVar20;
  char *unaff_x24;
  char *pcVar21;
  char *unaff_x25;
  char *unaff_x26;
  char acStack_2e0 [24];
  undefined1 *puStack_2c8;
  undefined1 auStack_2c0 [24];
  undefined1 auStack_2a8 [24];
  undefined8 auStack_290 [2];
  char cStack_279;
  long lStack_278;
  char *pcStack_270;
  char *pcStack_268;
  char *pcStack_260;
  char *pcStack_258;
  char *pcStack_250;
  char *pcStack_248;
  char *pcStack_240;
  char *pcStack_238;
  undefined1 ***pppuStack_230;
  code *pcStack_228;
  char acStack_220 [24];
  undefined1 *puStack_208;
  char acStack_200 [24];
  undefined1 auStack_1e8 [24];
  char acStack_1d0 [23];
  char cStack_1b9;
  long lStack_1b8;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  char acStack_158 [24];
  char *pcStack_140;
  char acStack_138 [24];
  long alStack_120 [2];
  char cStack_109;
  long lStack_108;
  char *pcStack_100;
  char *pcStack_f8;
  char *pcStack_f0;
  char *pcStack_e8;
  char *pcStack_e0;
  char *pcStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  char acStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar1 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = param_2;
  pcVar12 = param_3;
  pcVar16 = param_4;
  pcVar4 = param_5;
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar20 = *(long **)(param_1 + 8);
    unaff_x24 = "false";
    unaff_x25 = "true";
    pcVar6 = unaff_x25;
    if ((int)param_2 == 0) {
      pcVar6 = unaff_x24;
    }
    func_0x00010002b838(acStack_a0,pcVar6);
    pcVar6 = unaff_x25;
    if ((int)param_3 == 0) {
      pcVar6 = unaff_x24;
    }
    func_0x00010002b838(auStack_88,pcVar6);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      param_3 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      param_3 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,param_3);
    acStack_c0[0] = '\0';
    acStack_c0[1] = '\0';
    acStack_c0[2] = '\0';
    acStack_c0[3] = '\0';
    acStack_c0[4] = '\0';
    acStack_c0[5] = '\0';
    acStack_c0[6] = '\0';
    acStack_c0[7] = '\0';
    acStack_c0[8] = '\0';
    acStack_c0[9] = '\0';
    acStack_c0[10] = '\0';
    acStack_c0[0xb] = '\0';
    acStack_c0[0xc] = '\0';
    acStack_c0[0xd] = '\0';
    acStack_c0[0xe] = '\0';
    acStack_c0[0xf] = '\0';
    acStack_c0[0x10] = '\0';
    acStack_c0[0x11] = '\0';
    acStack_c0[0x12] = '\0';
    acStack_c0[0x13] = '\0';
    acStack_c0[0x14] = '\0';
    acStack_c0[0x15] = '\0';
    acStack_c0[0x16] = '\0';
    acStack_c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_c0,acStack_a0,&lStack_58,3);
    pcVar6 = "";
    (**(code **)(*plVar20 + 0x18))(plVar20);
    puStack_a8 = acStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar19 = 0;
    pcVar12 = pcVar1;
    pcVar16 = param_5;
    do {
      if ((&cStack_59)[lVar19] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar19));
      }
      lVar19 = lVar19 + -0x18;
      param_2 = acStack_c0;
    } while (lVar19 != -0x48);
  }
  pcVar1 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  pcVar17 = acStack_a0;
  do {
    param_2 = param_2 + -0x18;
  } while (param_2 != pcVar17);
  _objc_release(param_4);
  pcVar2 = pcVar1;
  __Unwind_Resume();
  pcStack_c8 = FUN_10547dcf0;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar3 = (char **)0x0;
  pcVar21 = unaff_x24;
  pcStack_100 = unaff_x24;
  pcStack_f8 = param_3;
  pcStack_f0 = param_2;
  pcStack_e8 = pcVar17;
  pcStack_e0 = pcVar1;
  pcStack_d8 = param_4;
  puStack_d0 = &stack0xfffffffffffffff0;
  if (pcVar2 != (char *)0x0) {
    plVar20 = *(long **)(pcVar2 + 8);
    pcVar1 = "true";
    if ((int)pcVar6 == 0) {
      pcVar1 = "false";
    }
    pcVar21 = acStack_138;
    func_0x00010002b838(acStack_138,pcVar1);
    pcVar6 = "true";
    if ((int)pcVar12 == 0) {
      pcVar6 = "false";
    }
    func_0x00010002b838(alStack_120,pcVar6);
    acStack_158[0] = '\0';
    acStack_158[1] = '\0';
    acStack_158[2] = '\0';
    acStack_158[3] = '\0';
    acStack_158[4] = '\0';
    acStack_158[5] = '\0';
    acStack_158[6] = '\0';
    acStack_158[7] = '\0';
    acStack_158[8] = '\0';
    acStack_158[9] = '\0';
    acStack_158[10] = '\0';
    acStack_158[0xb] = '\0';
    acStack_158[0xc] = '\0';
    acStack_158[0xd] = '\0';
    acStack_158[0xe] = '\0';
    acStack_158[0xf] = '\0';
    acStack_158[0x10] = '\0';
    acStack_158[0x11] = '\0';
    acStack_158[0x12] = '\0';
    acStack_158[0x13] = '\0';
    acStack_158[0x14] = '\0';
    acStack_158[0x15] = '\0';
    acStack_158[0x16] = '\0';
    acStack_158[0x17] = '\0';
    func_0x00010007e1e8(acStack_158,acStack_138,&lStack_108,2);
    pcVar6 = "";
    pcVar17 = acStack_158;
    pcVar12 = acStack_158;
    (**(code **)(*plVar20 + 0x18))(plVar20);
    ppcVar3 = &pcStack_140;
    pcStack_140 = pcVar17;
    func_0x00010007e5dc();
    lVar19 = 0;
    do {
      if ((&cStack_109)[lVar19] < '\0') {
        ppcVar3 = *(char ***)((long)alStack_120 + lVar19);
        __ZdlPv();
      }
      lVar19 = lVar19 + -0x18;
    } while (lVar19 != -0x30);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_108) {
    ___stack_chk_fail();
    pcStack_140 = pcVar17;
    func_0x00010007e5dc(&pcStack_140);
    lVar19 = -0x30;
    pcVar1 = &cStack_109;
    do {
      if (*pcVar1 < '\0') {
        __ZdlPv(*(undefined8 *)(pcVar1 + -0x17));
      }
      lVar19 = lVar19 + 0x18;
      pcVar1 = pcVar1 + -0x18;
    } while (lVar19 != 0);
    __Unwind_Resume();
    pcVar5 = acStack_220;
    pcStack_168 = FUN_10547de74;
    lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar1 = pcVar6;
    pcVar2 = pcVar12;
    pcVar17 = pcVar16;
    pcVar18 = pcVar4;
    ppuStack_170 = &puStack_d0;
    _objc_retain(pcVar6);
    iVar15 = (int)pcVar17;
    pcVar17 = (char *)0x0;
    if (ppcVar3 != (char **)0x0) {
      plVar20 = (long *)ppcVar3[1];
      _objc_retain(pcVar6);
      if (pcVar6 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar6;
        _objc_retainAutorelease(pcVar6);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar6);
      func_0x00010002b838(acStack_200,pcVar1);
      unaff_x25 = "false";
      unaff_x26 = "true";
      pcVar1 = unaff_x26;
      if ((int)pcVar12 == 0) {
        pcVar1 = unaff_x25;
      }
      func_0x00010002b838(auStack_1e8,pcVar1);
      pcVar12 = acStack_200;
      pcVar21 = acStack_1d0;
      pcVar1 = unaff_x26;
      if ((int)pcVar16 == 0) {
        pcVar1 = unaff_x25;
      }
      func_0x00010002b838(pcVar21,pcVar1);
      acStack_220[0] = '\0';
      acStack_220[1] = '\0';
      acStack_220[2] = '\0';
      acStack_220[3] = '\0';
      acStack_220[4] = '\0';
      acStack_220[5] = '\0';
      acStack_220[6] = '\0';
      acStack_220[7] = '\0';
      acStack_220[8] = '\0';
      acStack_220[9] = '\0';
      acStack_220[10] = '\0';
      acStack_220[0xb] = '\0';
      acStack_220[0xc] = '\0';
      acStack_220[0xd] = '\0';
      acStack_220[0xe] = '\0';
      acStack_220[0xf] = '\0';
      acStack_220[0x10] = '\0';
      acStack_220[0x11] = '\0';
      acStack_220[0x12] = '\0';
      acStack_220[0x13] = '\0';
      acStack_220[0x14] = '\0';
      acStack_220[0x15] = '\0';
      acStack_220[0x16] = '\0';
      acStack_220[0x17] = '\0';
      func_0x00010007e1e8(acStack_220,acStack_200,&lStack_1b8,3);
      pcVar1 = "";
      (**(code **)(*plVar20 + 0x18))(plVar20);
      puStack_208 = acStack_220;
      func_0x00010007e5dc(&puStack_208);
      lVar19 = 0;
      pcVar17 = acStack_200;
      pcVar2 = pcVar5;
      do {
        if ((&cStack_1b9)[lVar19] < '\0') {
          __ZdlPv(*(undefined8 *)(acStack_1d0 + lVar19));
        }
        iVar15 = (int)pcVar4;
        lVar19 = lVar19 + -0x18;
        pcVar16 = acStack_220;
      } while (lVar19 != -0x48);
    }
    pcVar4 = pcVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b8) {
      ___stack_chk_fail();
      _objc_release(pcVar6);
      _objc_release(pcVar6);
      pcVar5 = pcVar4;
      __Unwind_Resume();
      pcVar14 = acStack_2e0;
      pcStack_228 = FUN_10547e090;
      lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar13 = pcVar2;
      pcStack_270 = unaff_x26;
      pcStack_268 = unaff_x25;
      pcStack_260 = pcVar21;
      pcStack_258 = pcVar12;
      pcStack_250 = pcVar16;
      pcStack_248 = pcVar17;
      pcStack_240 = pcVar4;
      pcStack_238 = pcVar6;
      pppuStack_230 = &ppuStack_170;
      _objc_retain(pcVar1);
      if (pcVar5 != (char *)0x0) {
        plVar20 = *(long **)(pcVar5 + 8);
        _objc_retain(pcVar1);
        if (pcVar1 == (char *)0x0) {
          pcVar6 = "";
        }
        else {
          pcVar6 = pcVar1;
          _objc_retainAutorelease(pcVar1);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar1);
        func_0x00010002b838(auStack_2c0,pcVar6);
        pcVar6 = "true";
        if ((int)pcVar2 == 0) {
          pcVar6 = "false";
        }
        func_0x00010002b838(auStack_2a8,pcVar6);
        pcVar6 = "true";
        if (iVar15 == 0) {
          pcVar6 = "false";
        }
        func_0x00010002b838(auStack_290,pcVar6);
        acStack_2e0[0] = '\0';
        acStack_2e0[1] = '\0';
        acStack_2e0[2] = '\0';
        acStack_2e0[3] = '\0';
        acStack_2e0[4] = '\0';
        acStack_2e0[5] = '\0';
        acStack_2e0[6] = '\0';
        acStack_2e0[7] = '\0';
        acStack_2e0[8] = '\0';
        acStack_2e0[9] = '\0';
        acStack_2e0[10] = '\0';
        acStack_2e0[0xb] = '\0';
        acStack_2e0[0xc] = '\0';
        acStack_2e0[0xd] = '\0';
        acStack_2e0[0xe] = '\0';
        acStack_2e0[0xf] = '\0';
        acStack_2e0[0x10] = '\0';
        acStack_2e0[0x11] = '\0';
        acStack_2e0[0x12] = '\0';
        acStack_2e0[0x13] = '\0';
        acStack_2e0[0x14] = '\0';
        acStack_2e0[0x15] = '\0';
        acStack_2e0[0x16] = '\0';
        acStack_2e0[0x17] = '\0';
        func_0x00010007e1e8(acStack_2e0,auStack_2c0,&lStack_278,3);
        (**(code **)(*plVar20 + 0x18))(plVar20,&UNK_11088be40,acStack_2e0,pcVar18);
        puStack_2c8 = acStack_2e0;
        func_0x00010007e5dc(&puStack_2c8);
        lVar19 = 0;
        pcVar13 = pcVar14;
        do {
          if ((&cStack_279)[lVar19] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_290 + lVar19));
          }
          lVar19 = lVar19 + -0x18;
        } while (lVar19 != -0x48);
      }
      pcVar6 = pcVar1;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_278) {
        ___stack_chk_fail();
        _objc_release(pcVar1);
        _objc_release(pcVar1);
        __Unwind_Resume();
        _objc_retain(pcVar13);
        uVar7 = *(undefined8 *)(pcVar6 + 0x28);
        func_0x00010c269d40(uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010bfa6e00();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
        func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar8;
        func_0x00010c0e0e60(uVar8);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(pcVar13);
        uVar11 = uVar10;
        func_0x00010c25ff60(uVar10);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(pcVar13);
        _objc_release(pcVar13);
        _objc_release(uVar10);
        _objc_release(puVar9);
        _objc_release(uVar8);
        _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar11);
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 10547dcf0; end: 10547de73;  */

void FUN_10547dcf0(long param_1,char *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined8 **ppuVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined1 *puVar14;
  long lVar15;
  long *plVar16;
  undefined8 *unaff_x21;
  undefined8 *puVar17;
  undefined8 *unaff_x24;
  char *unaff_x25;
  char *unaff_x26;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  undefined1 auStack_200 [24];
  undefined1 auStack_1e8 [24];
  undefined8 auStack_1d0 [2];
  char cStack_1b9;
  long lStack_1b8;
  char *pcStack_1b0;
  char *pcStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined1 *puStack_190;
  undefined8 *puStack_188;
  char *pcStack_180;
  char *pcStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 *puStack_148;
  undefined8 auStack_140 [3];
  undefined1 auStack_128 [24];
  undefined8 auStack_110 [2];
  char cStack_f9;
  long lStack_f8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [3];
  long alStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = (undefined8 **)0x0;
  if (param_1 != 0) {
    plVar16 = *(long **)(param_1 + 8);
    pcVar2 = "true";
    if ((int)param_2 == 0) {
      pcVar2 = "false";
    }
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,pcVar2);
    pcVar2 = "true";
    if ((int)param_3 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(alStack_60,pcVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    param_2 = "";
    unaff_x21 = &uStack_98;
    param_3 = &uStack_98;
    (**(code **)(*plVar16 + 0x18))(plVar16);
    ppuVar1 = &puStack_80;
    puStack_80 = unaff_x21;
    func_0x00010007e5dc();
    lVar15 = 0;
    do {
      if ((&cStack_49)[lVar15] < '\0') {
        ppuVar1 = *(undefined8 ***)((long)alStack_60 + lVar15);
        __ZdlPv();
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puStack_80 = unaff_x21;
  func_0x00010007e5dc(&puStack_80);
  lVar15 = -0x30;
  pcVar2 = &cStack_49;
  do {
    if (*pcVar2 < '\0') {
      __ZdlPv(*(undefined8 *)(pcVar2 + -0x17));
    }
    lVar15 = lVar15 + 0x18;
    pcVar2 = pcVar2 + -0x18;
  } while (lVar15 != 0);
  __Unwind_Resume();
  puVar11 = &uStack_160;
  pcStack_a8 = FUN_10547de74;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = param_2;
  puVar10 = param_3;
  puVar14 = (undefined1 *)param_4;
  uVar6 = param_5;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(param_2);
  iVar13 = (int)puVar14;
  puVar17 = (undefined8 *)0x0;
  if (ppuVar1 != (undefined8 **)0x0) {
    plVar16 = ppuVar1[1];
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_140,pcVar2);
    unaff_x25 = "false";
    unaff_x26 = "true";
    pcVar2 = unaff_x26;
    if ((int)param_3 == 0) {
      pcVar2 = unaff_x25;
    }
    func_0x00010002b838(auStack_128,pcVar2);
    param_3 = auStack_140;
    unaff_x24 = auStack_110;
    pcVar2 = unaff_x26;
    if ((int)param_4 == 0) {
      pcVar2 = unaff_x25;
    }
    func_0x00010002b838(unaff_x24,pcVar2);
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    func_0x00010007e1e8(&uStack_160,auStack_140,&lStack_f8,3);
    pcVar2 = "";
    (**(code **)(*plVar16 + 0x18))(plVar16);
    puStack_148 = (undefined1 *)&uStack_160;
    func_0x00010007e5dc(&puStack_148);
    lVar15 = 0;
    puVar17 = auStack_140;
    puVar10 = puVar11;
    do {
      if ((&cStack_f9)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_110 + lVar15));
      }
      iVar13 = (int)param_5;
      lVar15 = lVar15 + -0x18;
      param_4 = &uStack_160;
    } while (lVar15 != -0x48);
  }
  pcVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  pcVar4 = pcVar3;
  __Unwind_Resume();
  puVar12 = &uStack_220;
  pcStack_168 = FUN_10547e090;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = puVar10;
  pcStack_1b0 = unaff_x26;
  pcStack_1a8 = unaff_x25;
  puStack_1a0 = unaff_x24;
  puStack_198 = param_3;
  puStack_190 = (undefined1 *)param_4;
  puStack_188 = puVar17;
  pcStack_180 = pcVar3;
  pcStack_178 = param_2;
  ppuStack_170 = &puStack_b0;
  _objc_retain(pcVar2);
  if (pcVar4 != (char *)0x0) {
    plVar16 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = pcVar2;
      _objc_retainAutorelease(pcVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar2);
    func_0x00010002b838(auStack_200,pcVar3);
    pcVar3 = "true";
    if ((int)puVar10 == 0) {
      pcVar3 = "false";
    }
    func_0x00010002b838(auStack_1e8,pcVar3);
    pcVar3 = "true";
    if (iVar13 == 0) {
      pcVar3 = "false";
    }
    func_0x00010002b838(auStack_1d0,pcVar3);
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    func_0x00010007e1e8(&uStack_220,auStack_200,&lStack_1b8,3);
    (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_11088be40,&uStack_220,uVar6);
    puStack_208 = (undefined1 *)&uStack_220;
    func_0x00010007e5dc(&puStack_208);
    lVar15 = 0;
    puVar11 = puVar12;
    do {
      if ((&cStack_1b9)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1d0 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x48);
  }
  pcVar3 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar2);
  _objc_release(pcVar2);
  __Unwind_Resume();
  _objc_retain(puVar11);
  uVar5 = *(undefined8 *)(pcVar3 + 0x28);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bfa6e00();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010c0e0e60(uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar11);
  uVar9 = uVar8;
  func_0x00010c25ff60(uVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  _objc_release(puVar11);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar9);
  return;
}



/* Entry: 10547de74; end: 10547e08f;  */

void FUN_10547de74(long param_1,char *param_2,undefined1 *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  int iVar12;
  undefined1 *puVar13;
  long lVar14;
  long *plVar15;
  undefined8 *unaff_x24;
  char *unaff_x25;
  char *unaff_x26;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  char *pcStack_110;
  char *pcStack_108;
  undefined8 *puStack_100;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  undefined1 *puStack_e8;
  char *pcStack_e0;
  char *pcStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar10 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  puVar9 = param_3;
  puVar13 = (undefined1 *)param_4;
  uVar5 = param_5;
  _objc_retain(param_2);
  iVar12 = (int)puVar13;
  puVar13 = (undefined1 *)0x0;
  if (param_1 != 0) {
    plVar15 = *(long **)(param_1 + 8);
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
    func_0x00010002b838(auStack_a0,pcVar1);
    unaff_x25 = "false";
    unaff_x26 = "true";
    pcVar1 = unaff_x26;
    if ((int)param_3 == 0) {
      pcVar1 = unaff_x25;
    }
    func_0x00010002b838(auStack_88,pcVar1);
    param_3 = auStack_a0;
    unaff_x24 = auStack_70;
    pcVar1 = unaff_x26;
    if ((int)param_4 == 0) {
      pcVar1 = unaff_x25;
    }
    func_0x00010002b838(unaff_x24,pcVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    pcVar1 = "";
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar14 = 0;
    puVar13 = auStack_a0;
    puVar9 = (undefined1 *)puVar10;
    do {
      if ((&cStack_59)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar14));
      }
      iVar12 = (int)param_5;
      lVar14 = lVar14 + -0x18;
      param_4 = &uStack_c0;
    } while (lVar14 != -0x48);
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  puVar10 = &uStack_180;
  pcStack_c8 = FUN_10547e090;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = puVar9;
  pcStack_110 = unaff_x26;
  pcStack_108 = unaff_x25;
  puStack_100 = unaff_x24;
  puStack_f8 = param_3;
  puStack_f0 = (undefined1 *)param_4;
  puStack_e8 = puVar13;
  pcStack_e0 = pcVar2;
  pcStack_d8 = param_2;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  if (pcVar3 != (char *)0x0) {
    plVar15 = *(long **)(pcVar3 + 8);
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
    func_0x00010002b838(auStack_160,pcVar2);
    pcVar2 = "true";
    if ((int)puVar9 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(auStack_148,pcVar2);
    pcVar2 = "true";
    if (iVar12 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(auStack_130,pcVar2);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_118,3);
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11088be40,&uStack_180,uVar5);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    lVar14 = 0;
    puVar11 = (undefined1 *)puVar10;
    do {
      if ((&cStack_119)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x48);
  }
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  __Unwind_Resume();
  _objc_retain(puVar11);
  uVar4 = *(undefined8 *)(pcVar2 + 0x28);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfa6e00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010c0e0e60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar11);
  uVar8 = uVar7;
  func_0x00010c25ff60(uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  _objc_release(puVar11);
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
  return;
}



/* Entry: 10547e090; end: 10547e2ab;  */

void FUN_10547e090(long param_1,char *param_2,undefined1 *param_3,int param_4,undefined8 param_5)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar8 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar10 = *(long **)(param_1 + 8);
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
    func_0x00010002b838(auStack_a0,pcVar1);
    pcVar1 = "true";
    if ((int)param_3 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_88,pcVar1);
    pcVar1 = "true";
    if (param_4 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_70,pcVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_11088be40,&uStack_c0,param_5);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar9 = 0;
    puVar7 = (undefined1 *)puVar8;
    do {
      if ((&cStack_59)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x48);
  }
  pcVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  _objc_retain(puVar7);
  uVar2 = *(undefined8 *)(pcVar1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfa6e00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c0e0e60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar7);
  uVar6 = uVar5;
  func_0x00010c25ff60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar7);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 10547e2ac; end: 10547e3d3; -[SCBitmoji3dBatchingFetcherAdapter _fetchGLB:feature:renderSurface:] */

void FUN_10547e2ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa6e00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0e0e60(uVar2,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10547e3d4;
  puStack_50 = &UNK_110849f28;
  uStack_48 = param_3;
  _objc_retain(param_3);
  uVar5 = uVar4;
  func_0x00010c25ff60(uVar4,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 10547e3d4; end: 10547e48f;  */

void FUN_10547e3d4(long param_1,undefined8 param_2)

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



/* Entry: 10547e490; end: 10547e497;  */

void FUN_10547e490(void)

{
  return;
}



/* Entry: 10547e498; end: 10547e5bf; -[SCBitmoji3dBatchingFetcherAdapter initWithBitmojiClientRenderer:fetcher:bitmojiAvatarProvider:configProvider:bitmojiGLBFetcher:clientRenderGatingProvider:] */

undefined1 *
FUN_10547e498(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_48 = PTR_PTR_1126e8640;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x40) = 0;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10547e5c0; end: 10547e7d7; -[SCBitmoji3dBatchingFetcherAdapter observeFetchBatchImageData:avatarId:friendAvatarId:sceneIds:attribution:sceneType:scale:useStaging:engineType:] */

void FUN_10547e5c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined1 param_10,undefined4 param_11)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar3 = param_7;
  func_0x000109006080();
  uVar1 = uVar3;
  func_0x000109006644();
  uVar2 = *(ulong *)(param_1 + 8);
  func_0x00010bfc3b60(uVar2,param_2,param_4,param_5,uVar3);
  lVar5 = 0;
  if ((long)uVar2 < 3) {
    if (uVar2 < 2) {
LAB_10547e750:
      lVar5 = *(long *)(param_1 + 0x18);
      func_0x00010c0e0a60(lVar5,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                          param_10,param_11);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10547e78c;
    }
    if (uVar2 != 2) goto LAB_10547e78c;
  }
  else {
    if (uVar2 == 3) {
      lVar5 = param_1;
      func_0x00010be11780(param_1,param_2,param_4,uVar3,uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      *(long *)(param_1 + 0x30) = lVar5;
      _objc_release(uVar4);
      if (param_5 != 0) {
        lVar5 = param_1;
        func_0x00010be11780(param_1,param_2,param_5,uVar3,uVar1);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = *(undefined8 *)(param_1 + 0x38);
        *(long *)(param_1 + 0x38) = lVar5;
        _objc_release(uVar3);
      }
      goto LAB_10547e750;
    }
    if (uVar2 != 4) goto LAB_10547e78c;
  }
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfc6f60(uVar3,param_2,uVar1,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be66bc0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  lVar5 = param_1;
LAB_10547e78c:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 10547e7d8; end: 10547e7f7; -[SCBitmoji3dBatchingFetcherAdapter isClientSideOffscreenRenderingEnabled:friendAvatarId:feature:] */

bool FUN_10547e7d8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bfc3b60(lVar1);
  return lVar1 != 0;
}



/* Entry: 10547e7f8; end: 10547e85b; -[SCBitmoji3dBatchingFetcherAdapter _removeSceneId:remainingSceneIds:] */

void FUN_10547e7f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x40);
  func_0x00010c12d360(param_4,param_2,param_3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x40);
  return;
}



/* Entry: 10547e85c; end: 10547eab7; -[SCBitmoji3dBatchingFetcherAdapter _observeRenderBatchImageDataClientSide:avatarId:friendAvatarId:sceneIds:attribution:sceneType:scale:renderSurface:lensId:isStaging:engineType:] */

void FUN_10547e85c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 in_stack_00000010;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(in_stack_00000010);
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x3032000000;
  pcStack_80 = FUN_10547eab8;
  uStack_78 = 0x10547eac8;
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = puVar1;
  _objc_initWeak(auStack_a0,param_1);
  puVar1 = PTR_PTR_1126b9500;
  _objc_alloc(PTR_PTR_1126b9500);
  _objc_copyWeak(auStack_a8,auStack_a0);
  func_0x00010bffadc0(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c12fbc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_a0);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(puStack_70);
  _objc_release(in_stack_00000010);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10547eab8; end: 10547eacf;  */

void FUN_10547eab8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10547ead0; end: 10547eb2b;  */

void FUN_10547ead0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8d1c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10547eb2c; end: 10547eb97; -[SCBitmoji3dBatchingFetcherAdapter .cxx_destruct] */

void FUN_10547eb2c(long param_1)

{
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



/* Entry: 10547eb98; end: 10547ec3f; -[SCBitmoji3DBatchedSceneClientURIMetricEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10547eb98(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b9508;
  _objc_opt_new(PTR_PTR_1126b9508);
  puVar2 = PTR_PTR_1126b1cb0;
  _objc_alloc(PTR_PTR_1126b1cb0);
  func_0x00010c0199e0();
  param_1 = param_1 + _DAT_112723d64;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x00010c28f2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10547ec40; end: 10547ec4f; -[SCBitmoji3DBatchedSceneClientURIMetricEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10547ec40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112723d64);
  return;
}



/* Entry: 10547ec50; end: 10547ee1b;  */

void FUN_10547ec50(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar1 = param_1 + 0x58;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    lVar2 = param_1 + 0x60;
    _objc_loadWeakRetained();
    if (lVar2 == 0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      func_0x00010bf575a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1bc860(lVar1,param_2,lVar2);
      puVar3 = PTR_PTR_1126b9510;
      _objc_alloc();
      uVar11 = *(undefined8 *)(param_1 + 0x20);
      lVar4 = lVar2;
      func_0x00010c0f98a0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c001320(puVar3,param_2,uVar11,lVar4,*(undefined8 *)(param_1 + 0x28));
      _objc_release(lVar4);
      puVar9 = PTR_PTR_1126b9518;
      _objc_alloc();
      uVar11 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c269d40(uVar11);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(param_1 + 0x20);
      uVar8 = *(undefined8 *)(param_1 + 0x50);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c025600(puVar9,param_2,lVar2,uVar11,uVar5,uVar6,uVar7,uVar10,uVar8,puVar3);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar11);
      _objc_release(puVar3);
      _objc_release(lVar2);
    }
    _objc_release();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10547ee1c; end: 10547eeab;  */

void FUN_10547ee1c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x60);
  _objc_destroyWeak(param_1 + 0x58);
  _objc_release(*(undefined8 *)(param_1 + 0x50));
  _objc_release(*(undefined8 *)(param_1 + 0x48));
  _objc_release(*(undefined8 *)(param_1 + 0x40));
  _objc_release(*(undefined8 *)(param_1 + 0x38));
  _objc_release(*(undefined8 *)(param_1 + 0x30));
  _objc_release(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10547eeac; end: 10547ef97;  */

void FUN_10547eeac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126b9528;
  _objc_alloc(PTR_PTR_1126b9528);
  puVar4 = PTR_PTR_1126b9530;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf54280(puVar4,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff7ea0(puVar2,param_2,uVar1,puVar4,uVar5,*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126b9538;
  _objc_alloc(PTR_PTR_1126b9538);
  func_0x00010c0129a0();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10547ef98; end: 10547efff; -[SCBitmojiFlatlandBatchContentServiceProvider end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10547ef98(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = param_1 + _DAT_112723d98;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c137fe0();
  _objc_release(lVar1);
  puStack_28 = PTR_PTR_1126e8648;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10547f000; end: 10547f01f; -[SCBitmojiFlatlandBatchContentServiceProvider lensProcessor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10547f000(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112723d98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10547f020; end: 10547f033; -[SCBitmojiFlatlandBatchContentServiceProvider setLensProcessor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10547f020(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112723d98,param_3);
  return;
}



/* Entry: 10547f034; end: 10547f18b; -[SCBitmojiFlatlandBatchContentServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10547f034(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112723d98);
  _objc_destroyWeak(param_1 + _DAT_112723d94);
  _objc_destroyWeak(param_1 + _DAT_112723d90);
  _objc_destroyWeak(param_1 + _DAT_112723d7c);
  _objc_destroyWeak(param_1 + _DAT_112723d84);
  _objc_destroyWeak(param_1 + _DAT_112723d78);
  _objc_destroyWeak(param_1 + _DAT_112723d68);
  _objc_destroyWeak(param_1 + _DAT_112723d74);
  _objc_destroyWeak(param_1 + _DAT_112723d80);
  _objc_destroyWeak(param_1 + _DAT_112723d70);
  _objc_destroyWeak(param_1 + _DAT_112723d6c);
  _objc_destroyWeak(param_1 + _DAT_112723d88);
  _objc_destroyWeak(param_1 + _DAT_112723d8c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112723d9c);
  return;
}



/* Entry: 10547f18c; end: 10547f213;  */

void FUN_10547f18c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar3 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010bdec660(lVar3,param_2,uVar1,uVar2,uVar4,*(undefined8 *)(param_1 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 10547f214; end: 10547f287;  */

void FUN_10547f214(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bdec200(lVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10547f288; end: 10547f2d3;  */

void FUN_10547f288(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bea1520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10547f2d4; end: 10547f523; -[SCBitmojiFlatlandContentServiceProvider _createConfigProviderWithOpsMetricsLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10547f2d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_retain(param_3);
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f2c32da);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021520(puVar1,param_2,puVar2,0x19,0,8);
  _objc_release(puVar2);
  lVar10 = param_1 + _DAT_112723da0;
  _objc_loadWeakRetained();
  lVar3 = lVar10;
  func_0x00010c12f8a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar10);
  puVar2 = PTR_PTR_1126b9558;
  _objc_alloc_init();
  puVar5 = PTR_PTR_1126b9560;
  _objc_alloc();
  if (param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1 + _DAT_112723db0;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar10;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_112723db4;
    _objc_loadWeakRetained(lVar11);
  }
  uVar6 = param_3;
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar7 = param_1 + _DAT_112723da4;
  _objc_loadWeakRetained(lVar7);
  lVar8 = lVar7;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112723da8;
  _objc_loadWeakRetained();
  lVar9 = param_1;
  func_0x00010bf1ad00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffe340(puVar5,param_2,lVar3,puVar1,puVar2,lVar11,uVar6,lVar8,lVar9,lVar4);
  _objc_release(lVar9);
  _objc_release(param_1);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(lVar11);
  _objc_release(lVar3);
  _objc_release(lVar10);
  _objc_release(puVar2);
  _objc_release(lVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10547f524; end: 10547f6c7; -[SCBitmojiFlatlandContentServiceProvider _serverBatchSceneFetcherWithLogger:configProvider:renderConfigProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10547f524(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  puVar1 = PTR_PTR_1126b9538;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  puVar4 = PTR_PTR_1126b9530;
  if (param_1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = param_1 + _DAT_112723dc0;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar8;
  func_0x00010c0d5b20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf54280(puVar4,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x0001003c0d90(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf4c240();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001003c0dbc(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010bf4c240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0129a0(puVar1,param_2,puVar4,lVar6,lVar7,param_3,param_4,param_5);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar7);
  _objc_release(param_1);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10547f6c8; end: 10547f773; -[SCBitmojiFlatlandContentServiceProvider _createContentFetcherWithConfigProvider:contentManager:opsMetricsLogger:renderConfigProvider:] */

void FUN_10547f6c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b9568;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0037e0();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10547f774; end: 10547f80b; -[SCBitmojiFlatlandContentServiceProvider _createRenderConfigProviderWithConfigProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10547f774(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b9520;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  param_1 = param_1 + _DAT_112723dac;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf1c460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c013720(puVar1,param_2,param_3,lVar2);
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10547f80c; end: 10547f8cb; -[SCBitmojiFlatlandContentServiceProvider _createCombinedContentFetcherWithContentFetcher:contentManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10547f80c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b9570;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_112723dc8;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010bfe7720(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c003800(puVar1,param_2,param_4,param_3,lVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10547f8cc; end: 10547f973;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10547f8cc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_1 + _DAT_112723dc4;
    _objc_loadWeakRetained(lVar3);
  }
  lVar1 = lVar3;
  func_0x00010bfcdfa0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(param_1);
  lVar3 = lVar1;
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010bf1b580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10547f974; end: 10547fa17; -[SCBitmojiFlatlandContentServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10547f974(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112723da0);
  _objc_destroyWeak(param_1 + _DAT_112723dac);
  _objc_destroyWeak(param_1 + _DAT_112723da8);
  _objc_destroyWeak(param_1 + _DAT_112723dc8);
  _objc_destroyWeak(param_1 + _DAT_112723dc4);
  _objc_destroyWeak(param_1 + _DAT_112723da4);
  _objc_destroyWeak(param_1 + _DAT_112723dc0);
  _objc_destroyWeak(param_1 + _DAT_112723dbc);
  _objc_destroyWeak(param_1 + _DAT_112723db8);
  _objc_destroyWeak(param_1 + _DAT_112723db0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112723db4);
  return;
}



/* Entry: 10547fa18; end: 10547fa53;  */

float FUN_10547fa18(uint param_1)

{
  _arc4random();
  return (float)(param_1 % 10000) / 10000.0;
}



/* Entry: 10547fa54; end: 10547fafb; -[SCBitmoji3DBatchedSceneCallbackAdapter initWithCallback:onSceneIdRender:] */

undefined1 *
FUN_10547fa54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e8650;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10547fafc; end: 10547fb03; -[SCBitmoji3DBatchedSceneCallbackAdapter cancelled] */

void FUN_10547fafc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2f690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_cancelled_1125a9748);
  return;
}



/* Entry: 10547fb04; end: 10547fb0b; -[SCBitmoji3DBatchedSceneCallbackAdapter setCancelled:] */

void FUN_10547fb04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c178270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_setCancelled__11263bab8)
  ;
  return;
}



/* Entry: 10547fb0c; end: 10547fb87; -[SCBitmoji3DBatchedSceneCallbackAdapter didRenderImageData:forSceneId:complete:] */

void FUN_10547fb0c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  code *pcVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  pcVar2 = *(code **)(lVar1 + 0x10);
  _objc_retain(param_4);
  _objc_retain(param_3);
  (*pcVar2)(lVar1,param_4);
  func_0x00010c0e2ea0(*(undefined8 *)(param_1 + 8));
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10547fb88; end: 10547fb8f; -[SCBitmoji3DBatchedSceneCallbackAdapter didFailRenderWithError:forSceneId:] */

void FUN_10547fb88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e2e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_onClientRenderFailedWithError_fo_1126165b8);
  return;
}



/* Entry: 10547fb90; end: 10547fbbf; -[SCBitmoji3DBatchedSceneCallbackAdapter .cxx_destruct] */

void FUN_10547fb90(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10547fbc0; end: 10547fd43; -[SCBitmoji3DBatchedSceneFetcher initWithFetcher:contentDelivery:userContentDelivery:flatlandLogger:flatlandConfigProvider:renderConfigProvider:] */

undefined1 *
FUN_10547fbc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126e8658;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
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
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    func_0x00010bfcd0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10547fd44; end: 10547ffc7; -[SCBitmoji3DBatchedSceneFetcher submitBatchForAvatarId:friendAvatarId:sceneIds:feature:scale:sceneType:renderStyle:] */

void FUN_10547fd44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined4 uStack_78;
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_9);
  uVar1 = param_6;
  func_0x00010900605c();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf17b60();
  _objc_release(puVar3);
  _objc_initWeak(auStack_70,param_1);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_5;
  func_0x00010bfb1920(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bfc3f40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_98,auStack_70);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uStack_78 = (undefined4)param_6;
  _objc_retain(param_5);
  uVar8 = uVar7;
  uStack_90 = param_7;
  uStack_88 = param_8;
  puStack_80 = puVar4;
  func_0x00010bfb2660(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c25ffc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_98);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_70);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_9);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar9);
  return;
}



/* Entry: 10547ffc8; end: 1054801cb;  */

void FUN_10547ffc8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  puVar4 = PTR_PTR_1126ae6b8;
  if (lVar1 == 0) {
    puVar5 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x30);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c130200(param_2);
    func_0x00010bf3d3a0();
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae6b8;
    puVar5 = *(undefined **)(param_1 + 0x20);
    _objc_retain(puVar5);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar2);
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar6);
    _objc_retain(param_2);
    func_0x00010bf54280(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(param_2);
    _objc_release(uVar6);
    _objc_release(uVar2);
  }
  _objc_release(puVar5);
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1054801cc; end: 10548028b;  */

void FUN_1054801cc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c07f720();
  func_0x00010bf960a0();
  func_0x00010be05d00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10548028c; end: 1054803c3;  */

void FUN_10548028c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1054803c4;
  uStack_40 = 0x1054803d4;
  uStack_38 = 0;
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar1);
  func_0x00010c0c0800(param_2);
  uVar2 = puStack_58[5];
  _objc_retain(uVar2);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1054803c4; end: 1054803db;  */

void FUN_1054803c4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1054803dc; end: 10548044b;  */

void FUN_1054803dc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010c14fa80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2619e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10548044c; end: 105480493;  */

void FUN_10548044c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105480494; end: 10548063f; -[SCBitmoji3DBatchedSceneFetcher isSceneCachedForAvatarId:friendAvatarId:sceneId:scale:sceneType:feature:] */

void FUN_105480494(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfc3f40();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,auStack_68);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uStack_70 = param_8;
  _objc_retain(param_5);
  uVar3 = uVar2;
  uStack_80 = param_6;
  uStack_78 = param_7;
  func_0x00010bfb2660(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_88);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105480640; end: 105480927;  */

void FUN_105480640(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  _objc_retain(param_2);
  lVar3 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar3 == 0) {
    puVar8 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar4 = *(undefined8 *)(lVar3 + 0x30);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c130200(param_2);
    func_0x00010bf3d3a0(uVar4);
    _objc_release(uVar4);
    uVar9 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bf960a0(param_2);
    func_0x00010be1d720(uVar9);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    uVar10 = *(undefined8 *)(param_1 + 0x38);
    uVar7 = *(undefined8 *)(param_1 + 0x48);
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    uVar5 = param_2;
    func_0x00010bf26960(param_2);
    uVar6 = param_2;
    func_0x00010c07f720(param_2);
    func_0x000105480814(uVar4,uVar1,uVar10,uVar7,uVar2,uVar5,uVar6,uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bde7b80();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126ae6b8;
    _objc_retain();
    func_0x00010bf54280(puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(uVar7);
    _objc_release(uVar4);
  }
  _objc_release(lVar3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 105480928; end: 105480a5b;  */

void FUN_105480928(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  func_0x00010c11d240(uVar1);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105480a5c; end: 105480a5f;  */

void FUN_105480a5c(void)

{
  return;
}



/* Entry: 105480a60; end: 105480a97; -[SCBitmoji3DBatchedSceneFetcher _contentDeliveryForSceneType:] */

void FUN_105480a60(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = 0x20;
  if (param_3 != 3) {
    lVar1 = 0x18;
  }
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  _objc_retain(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105480a98; end: 10548101f; -[SCBitmoji3DBatchedSceneFetcher _downloadBatchForAvatarId:friendAvatarId:sceneIds:feature:scale:sceneType:useStaging:engineType:clientRendererLensId:observer:] */

undefined *
FUN_105480a98(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5,
             uint param_6,undefined8 param_7,undefined8 param_8,undefined1 param_9)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined *puVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 in_stack_00000010;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(in_stack_00000010);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf529e0(param_5);
  func_0x00010bf71fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  lVar3 = param_5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar20 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_5);
      }
      uVar19 = *(undefined8 *)(lVar20 * 8);
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf26e20();
      _objc_release(uVar4);
      lVar17 = param_1;
      func_0x00010be1d720(param_1);
      uVar4 = param_3;
      func_0x000105480814(param_3,param_4,uVar19,param_7,param_8,uVar5,param_9,lVar17);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar2);
      _objc_release(uVar4);
      lVar20 = lVar20 + 1;
    } while (lVar3 != lVar20);
    lVar3 = param_5;
    func_0x00010bf52a60();
  }
  _objc_release(param_5);
  lVar20 = param_1;
  func_0x00010bde7b80();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b9590;
  _objc_alloc();
  func_0x00010c0031a0();
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(param_5);
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  lVar3 = param_5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar17 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_5);
      }
      puVar8 = puVar2;
      func_0x00010c0e00e0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar20;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c11d220();
      _objc_release(lVar9);
      puVar13 = PTR_PTR_1126af5d0;
      if (lVar10 == 0) {
        puVar11 = PTR_PTR_1126b9598;
        _objc_alloc(PTR_PTR_1126b9598);
        func_0x00010c041ae0();
        func_0x00010c2619e0(puVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0d9840(in_stack_00000010);
        _objc_release(puVar13);
        _objc_release(puVar11);
      }
      else {
        func_0x00010befa120(puVar7);
      }
      _objc_release(puVar8);
      lVar17 = lVar17 + 1;
    } while (lVar3 != lVar17);
    lVar3 = param_5;
    func_0x00010bf52a60();
  }
  _objc_release(param_5);
  uVar18 = (ulong)param_6;
  func_0x00010900605c(uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(ulong *)(param_1 + 8);
  uVar5 = param_4;
  func_0x00010c06e9e0();
  uVar15 = (uint)uVar5;
  puVar13 = puVar7;
  func_0x00010bf529e0();
  if (puVar13 == (undefined *)0x0) {
    func_0x00010bf436e0(in_stack_00000010);
    uVar14 = 0;
    puVar13 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar8 = puVar7;
    func_0x00010bf529e0();
    puVar13 = PTR_PTR_1126af5d0;
    if (puVar8 == (undefined *)0x1 && (uVar12 & 1) == 0) {
      puVar8 = PTR_PTR_1126b9598;
      _objc_alloc(PTR_PTR_1126b9598);
      puVar11 = puVar7;
      func_0x00010bfb1920(puVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar15 = 0;
      func_0x00010c041ae0(puVar8);
      func_0x00010c2619e0(puVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(in_stack_00000010);
      _objc_release(puVar13);
      _objc_release(puVar8);
      _objc_release(puVar11);
      func_0x00010bf436e0(in_stack_00000010);
      uVar14 = 0;
      puVar13 = PTR_PTR_1126b0418;
      func_0x00010bf54280(PTR_PTR_1126b0418);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar13 = *(undefined **)(param_1 + 8);
      puVar8 = puVar6;
      uVar5 = param_3;
      func_0x00010c0e0a60(puVar13);
      uVar14 = (uint)puVar8;
      uVar15 = (uint)uVar5;
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_release(uVar18);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(lVar20);
  _objc_release(puVar2);
  _objc_release(in_stack_00000010);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
    return puVar13;
  }
  ___stack_chk_fail();
  if ((int)uVar15 < 1 && uVar14 != 0) {
    uVar15 = uVar14;
  }
  return (undefined *)(ulong)uVar15;
}



/* Entry: 105481020; end: 10548102f; -[SCBitmoji3DBatchedSceneFetcher _getCacheEngineType:engineType:] */

int FUN_105481020(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  if (param_4 < 1 && param_3 != 0) {
    param_4 = param_3;
  }
  return param_4;
}



/* Entry: 105481030; end: 10548109b; -[SCBitmoji3DBatchedSceneFetcher .cxx_destruct] */

void FUN_105481030(long param_1)

{
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



/* Entry: 10548109c; end: 10548120b; -[SCBitmoji3DBatchedSceneFetcherCallback initWithContentDelivery:observer:performer:flatlandLogger:avatarId:sceneIdToContentKey:] */

undefined1 *
FUN_10548109c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126e8660;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10548120c; end: 1054812e7; -[SCBitmoji3DBatchedSceneFetcherCallback onBatchImageDataDownloadComplete:] */

void FUN_10548120c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = param_1;
  func_0x00010bf2f680();
  if ((uVar3 & 1) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1054812e8;
    puStack_50 = &UNK_110848ba8;
    _objc_retain(param_3);
    uStack_48 = param_3;
    uStack_40 = param_1;
    uStack_38 = uVar2;
    func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
    _objc_release(uStack_48);
  }
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 1054812e8; end: 105481393;  */

void FUN_1054812e8(long param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  uStack_28 = 0x105481374;
  puStack_20 = &UNK_11088c230;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105481394;
  puStack_50 = &UNK_11088c260;
  auVar1 = *(undefined1 (*) [16])(param_1 + 0x28);
  uStack_18 = auVar1._0_8_;
  auVar1 = NEON_ext(auVar1,auVar1,8,1);
  uStack_40 = auVar1._8_8_;
  uStack_48 = auVar1._0_8_;
  func_0x00010c0bfa60(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_38,&puStack_68);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 105481394; end: 1054813fb;  */

undefined8 FUN_105481394(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010c067fc0(param_2);
  func_0x00010bf99240(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be690a0(*(undefined8 *)(param_1 + 0x28));
  _objc_release(puVar1);
  return 0;
}



/* Entry: 1054813fc; end: 105481603; -[SCBitmoji3DBatchedSceneFetcherCallback onClientRenderImageWithData:forSceneId:completed:] */

void FUN_1054813fc(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar3 = param_1;
  func_0x00010bf2f680();
  if ((uVar3 & 1) == 0) {
    uVar3 = 0x168;
    _arc4random_uniform(0x168);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0aebc0();
    _objc_release(uVar4);
    puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf64e40((double)(((uVar3 & 0xffffffff) + 0x2760) * 0x3c));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    uVar9 = *(undefined8 *)(param_1 + 0x10);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar2);
    _objc_retain(uVar1);
    _objc_retain(uVar4);
    _objc_retain(uVar9);
    func_0x00010c0e00e0(uVar7,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_105481604;
    puStack_a8 = &UNK_11088c290;
    uStack_a0 = uVar4;
    uStack_98 = uVar1;
    _objc_retain(param_4);
    uStack_90 = param_4;
    _objc_retain(param_3);
    uStack_88 = param_3;
    uStack_80 = uVar7;
    uStack_78 = uVar2;
    uStack_70 = uVar9;
    uStack_68 = param_5;
    _objc_retain(uVar7);
    func_0x00010c14a860(uVar8,param_2,param_3,uVar7,puVar6,0,&puStack_c0);
    _objc_release(uVar8);
    _objc_release(uStack_80);
    _objc_release(uStack_88);
    _objc_release(uStack_90);
    _objc_release(uVar7);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar4);
    _objc_release(uVar9);
    _objc_release(puVar6);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105481604; end: 105481873;  */

void FUN_105481604(double param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  uVar4 = *(undefined8 *)(param_2 + 0x40);
  func_0x00010c0c5180(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010548172c(uVar7,uVar2,0,uVar1,uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f3a0(*(undefined8 *)(param_2 + 0x48));
  func_0x00010c0aeba0(-param_1,uVar3);
  _objc_release(uVar7);
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar6 = PTR_PTR_1126af5d0;
  uVar7 = *(undefined8 *)(param_2 + 0x50);
  puVar5 = PTR_PTR_1126b9598;
  _objc_alloc(PTR_PTR_1126b9598);
  func_0x00010c041ae0();
  func_0x00010c2619e0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  if (*(char *)(param_2 + 0x58) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_2 + 0x50),PTR_s_complete_1125ae760)
    ;
    return;
  }
  return;
}



/* Entry: 105481874; end: 10548199b; -[SCBitmoji3DBatchedSceneFetcherCallback onClientRenderFailedWithError:forSceneId:] */

void FUN_105481874(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf87dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0720c0();
  if ((int)lVar2 == 0) {
    _objc_release(lVar1);
  }
  else {
    lVar2 = param_3;
    func_0x00010bf3ec40();
    _objc_release(lVar1);
    if (lVar2 == 2) {
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      puVar3 = PTR_PTR_1126af5d0;
      func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar5,param_2,puVar3);
      goto LAB_105481974;
    }
  }
  puVar4 = PTR_PTR_1126af5d0;
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  puVar3 = PTR_PTR_1126b9598;
  _objc_alloc(PTR_PTR_1126b9598);
  func_0x00010c041ae0();
  func_0x00010c2619e0(puVar4,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar5,param_2,puVar4);
  _objc_release(puVar4);
LAB_105481974:
  _objc_release(puVar3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10548199c; end: 105481cf3; -[SCBitmoji3DBatchedSceneFetcherCallback _cacheImageDataMap:] */

void FUN_10548199c(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  double dVar17;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  code *pcStack_1c0;
  undefined *puStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = 0x168;
  _arc4random_uniform(0x168);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0aebc0();
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf64e40((double)(((uVar1 & 0xffffffff) + 0x2760) * 0x3c));
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _dispatch_group_create();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain();
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain();
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain();
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar8 = param_3;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010bf52a60();
  if (lVar9 != 0) {
    lVar15 = *plStack_130;
    do {
      lVar16 = 0;
      do {
        if (*plStack_130 != lVar15) {
          _objc_enumerationMutation(lVar8);
        }
        uVar14 = *(undefined8 *)(lStack_138 + lVar16 * 8);
        _dispatch_group_enter(puVar3);
        lVar10 = param_3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = *(undefined8 *)(param_1 + 0x30);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = *(undefined8 *)(param_1 + 8);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puStack_1a0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_198 = 0xc2000000;
        pcStack_190 = FUN_105481cf4;
        puStack_188 = &UNK_11088c2c0;
        uStack_180 = uVar14;
        uStack_178 = uVar5;
        uStack_170 = uVar6;
        lStack_168 = lVar10;
        uStack_160 = uVar11;
        uStack_158 = uVar7;
        uStack_150 = uVar2;
        puStack_148 = puVar3;
        _objc_retain(uVar11);
        _objc_retain(lVar10);
        func_0x00010c14a860(uVar12);
        _objc_release(uVar12);
        _objc_release(uStack_160);
        _objc_release(lStack_168);
        _objc_release(uVar11);
        _objc_release(lVar10);
        lVar16 = lVar16 + 1;
      } while (lVar9 != lVar16);
      lVar9 = lVar8;
      func_0x00010bf52a60();
    } while (lVar9 != 0);
  }
  _objc_release(lVar8);
  uVar11 = 2;
  _dispatch_get_global_queue(2,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_1d0 = PTR___NSConcreteStackBlock_11034bd00;
  dVar17 = 1.60807493534087e-314;
  uStack_1c8 = 0xc2000000;
  pcStack_1c0 = FUN_105481e04;
  puStack_1b8 = &UNK_110841f80;
  lStack_1b0 = param_3;
  uStack_1a8 = uVar2;
  _objc_retain(param_3);
  func_0x000100bc0718(puVar3,uVar11,&puStack_1d0);
  _objc_release(uVar11);
  _objc_release(lStack_1b0);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  uVar6 = *(undefined8 *)(puVar4 + 0x28);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(puVar4 + 0x20);
  uVar2 = *(undefined8 *)(puVar4 + 0x30);
  uVar5 = *(undefined8 *)(puVar4 + 0x38);
  uVar7 = *(undefined8 *)(puVar4 + 0x40);
  func_0x00010c0c5180(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010548172c(uVar2,uVar11,0,uVar5,uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f3a0(*(undefined8 *)(puVar4 + 0x48));
  func_0x00010c0aeba0(-dVar17,uVar6);
  _objc_release(uVar2);
  _objc_release(uVar7);
  _objc_release(uVar6);
  puVar3 = PTR_PTR_1126af5d0;
  uVar2 = *(undefined8 *)(puVar4 + 0x50);
  puVar13 = PTR_PTR_1126b9598;
  _objc_alloc(PTR_PTR_1126b9598);
  func_0x00010c041ae0();
  func_0x00010c2619e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar3);
  _objc_release(puVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(puVar4 + 0x58));
  return;
}



/* Entry: 105481cf4; end: 105481e03;  */

void FUN_105481cf4(double param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_2 + 0x20);
  uVar6 = *(undefined8 *)(param_2 + 0x30);
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  uVar3 = *(undefined8 *)(param_2 + 0x40);
  func_0x00010c0c5180(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010548172c(uVar6,uVar7,0,uVar1,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f3a0(*(undefined8 *)(param_2 + 0x48));
  func_0x00010c0aeba0(-param_1,uVar2);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126af5d0;
  uVar6 = *(undefined8 *)(param_2 + 0x50);
  puVar4 = PTR_PTR_1126b9598;
  _objc_alloc(PTR_PTR_1126b9598);
  func_0x00010c041ae0();
  func_0x00010c2619e0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_2 + 0x58));
  return;
}



/* Entry: 105481e04; end: 105481e0b;  */

void FUN_105481e04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x28),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 105481e0c; end: 105481fff; -[SCBitmoji3DBatchedSceneFetcherCallback _onError:] */

ulong FUN_105481e0c(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  double dVar12;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  dVar12 = 0.0;
  lVar2 = *(long *)(param_1 + 0x30);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      uVar10 = *(undefined8 *)(lVar8 * 8);
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c0e00e0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)(param_1 + 0x28);
      uVar9 = uVar4;
      func_0x00010c0c5180(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010548172c(uVar11,uVar10,param_3,0,uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f3a0(*(undefined8 *)(param_1 + 0x38));
      dVar12 = -dVar12;
      func_0x00010c0aeba0(dVar12,uVar5);
      _objc_release(uVar11);
      _objc_release(uVar9);
      _objc_release(uVar5);
      _objc_release(uVar4);
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  puVar6 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar9);
  _objc_release(puVar6);
  func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x10));
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return param_3;
  }
  ___stack_chk_fail();
  return (ulong)(*(byte *)(param_3 + 0x40) & 1);
}



/* Entry: 105482000; end: 10548200b; -[SCBitmoji3DBatchedSceneFetcherCallback cancelled] */

byte FUN_105482000(long param_1)

{
  return *(byte *)(param_1 + 0x40) & 1;
}



/* Entry: 10548200c; end: 105482013; -[SCBitmoji3DBatchedSceneFetcherCallback setCancelled:] */

void FUN_10548200c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 105482014; end: 10548207f; -[SCBitmoji3DBatchedSceneFetcherCallback .cxx_destruct] */

void FUN_105482014(long param_1)

{
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



/* Entry: 105482080; end: 10548218f; -[SCNBitmoji3dBatchingFetcher observeFetchBatchImageData:avatarId:friendAvatarId:sceneIds:attribution:sceneType:scale:useStaging:engineType:] */

void FUN_105482080(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined4 param_9,undefined1 param_10,undefined4 param_11)

{
  undefined *puVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  func_0x00010bf88920(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8 == 1,param_9,2
                      ,param_10,param_11);
  puVar1 = PTR_PTR_1126b0418;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105482190;
  puStack_70 = &UNK_110842e18;
  uStack_68 = param_3;
  _objc_retain(param_3);
  func_0x00010bf54280(puVar1,param_2,&puStack_88);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_68);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105482190; end: 10548219b;  */

void FUN_105482190(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c178270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setCancelled__11263bab8,1);
  return;
}



/* Entry: 10548219c; end: 1054821a3; -[SCNBitmoji3dBatchingFetcher isClientSideOffscreenRenderingEnabled:friendAvatarId:feature:] */

undefined8 FUN_10548219c(void)

{
  return 0;
}



/* Entry: 1054821a4; end: 1054821a7; -[SCNBitmoji3dBatchingFetcher clearResources] */

void FUN_1054821a4(void)

{
  return;
}



/* Entry: 1054821a8; end: 10548228b;  */

/* WARNING: Possible PIC construction at 0x0001054822a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001054822a4) */
/* WARNING: Removing unreachable block (ram,0x0001054822bc) */
/* WARNING: Removing unreachable block (ram,0x0001054822a8) */

void FUN_1054821a8(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c0b5750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10548228c; end: 1054822e7; -[SCBitmojiAnimatedImageImplementation animatedImageLoopCount] */

/* WARNING: Possible PIC construction at 0x0001054822a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001054822a4) */
/* WARNING: Removing unreachable block (ram,0x0001054822bc) */
/* WARNING: Removing unreachable block (ram,0x0001054822a8) */

void FUN_10548228c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b5750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_loopCount_11260afe8);
  return;
}



/* Entry: 1054822e8; end: 1054822f7; -[SCBitmojiAnimatedImageImplementation loopCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1054822e8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112723e10);
}



/* Entry: 1054822f8; end: 105482307; -[SCBitmojiAnimatedImageImplementation setLoopCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054822f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112723e10) = param_3;
  return;
}



/* Entry: 105482308; end: 1054824f7; -[SCBitmojiCustomojiFetcher fetchCustomojiForAvatarId:friendAvatarId:sceneId:text:rendererId:scale:attribution:] */

void FUN_105482308(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_80,auStack_68);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uStack_70 = param_9;
  uStack_78 = param_8;
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25ffc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1054824f8; end: 10548257f;  */

void FUN_1054824f8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be10c40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105482580; end: 10548267b;  */

void FUN_105482580(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10548267c;
  uStack_30 = 0x10548268c;
  uStack_28 = 0;
  func_0x00010c0c0800(param_2);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10548267c; end: 105482693;  */

void FUN_10548267c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105482694; end: 105482703;  */

void FUN_105482694(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010bfe7300(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2619e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105482704; end: 10548274b;  */

void FUN_105482704(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10548274c; end: 1054829a7; -[SCBitmojiCustomojiFetcher _fetchCustomojiForAvatarId:friendAvatarId:sceneId:observer:text:rendererId:scale:attribution:] */

void FUN_10548274c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,int param_10)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_initWeak(auStack_68,param_1);
  uVar6 = 0x17;
  if (param_10 == 0x10) {
    uVar6 = 0x18;
  }
  uVar1 = 0x19;
  if (param_10 != 0x12) {
    uVar1 = uVar6;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfc3f40();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_80,auStack_68);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uStack_78 = param_9;
  uStack_70 = uVar1;
  _objc_retain(param_6);
  uVar4 = uVar3;
  func_0x00010bfb2660(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c25fd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(param_6);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_80);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 1054829a8; end: 105482f33;  */

void FUN_1054829a8(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = param_2;
  _objc_retain(param_2);
  lVar2 = param_1 + 0x50;
  _objc_loadWeakRetained();
  puVar8 = PTR_PTR_1126ae6b8;
  if (lVar2 == 0) {
    puVar6 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
  }
  else {
    func_0x00010c07f720();
    func_0x00010bf960a0();
    func_0x00010c130200();
    puVar8 = PTR_PTR_1126af5d8;
    uVar14 = *(undefined8 *)(param_1 + 0x20);
    uVar16 = *(undefined8 *)(param_1 + 0x28);
    uVar15 = *(undefined8 *)(param_1 + 0x30);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    uVar17 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar14);
    _objc_retain(uVar16);
    _objc_retain(uVar15);
    _objc_retain(uVar1);
    _objc_retain(uVar17);
    _objc_alloc(puVar8);
    func_0x00010bff6020(*(undefined8 *)PTR__CGSizeZero_110347620,
                        *(undefined8 *)(PTR__CGSizeZero_110347620 + 8));
    _objc_release(uVar15);
    _objc_release(uVar16);
    _objc_release(uVar14);
    puVar6 = puVar8;
    func_0x00010bf268e0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar17);
    _objc_release(uVar1);
    puVar3 = PTR_PTR_1126b08b8;
    _objc_alloc();
    func_0x00010c0295e0();
    _objc_release(puVar6);
    _objc_release(puVar8);
    lVar4 = *(long *)(lVar2 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c11d220();
    _objc_release(lVar4);
    if (lVar5 == 0) {
      puVar6 = PTR_PTR_1126b1060;
      _objc_alloc();
      uVar9 = (ulong)*(uint *)(param_1 + 0x60);
      func_0x00010900605c(uVar9);
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = &PTR____CFConstantStringClassReference_110de0c98;
      func_0x00010c25ce40();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c032f60();
      _objc_release(puVar8);
      _objc_release(ppuVar10);
      _objc_release(uVar9);
      puVar8 = PTR_PTR_1126ae6b8;
      _objc_retain(puVar3);
      uVar14 = *(undefined8 *)(param_1 + 0x30);
      _objc_retain(uVar14);
      _objc_retain(puVar6);
      func_0x00010bf54280();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar14);
      _objc_release(puVar6);
      puVar7 = puVar3;
    }
    else {
      puVar6 = *(undefined **)(lVar2 + 0x30);
      func_0x00010bfc6f60();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c08fa60();
      puVar11 = PTR_PTR_1126af5d0;
      puVar8 = PTR_PTR_1126ae6b8;
      if (puVar7 == (undefined *)0x0) {
        puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99240();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa01c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0860a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar11);
      }
      else {
        puVar7 = PTR_PTR_1126b9590;
        _objc_alloc(PTR_PTR_1126b9590);
        puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0031a0(puVar7);
        _objc_release(puVar8);
        puVar11 = PTR_PTR_1126b9500;
        _objc_alloc();
        func_0x00010bffadc0();
        puVar8 = PTR_PTR_1126ae6b8;
        uVar14 = *(undefined8 *)(param_1 + 0x30);
        _objc_retain(uVar14);
        uVar15 = *(undefined8 *)(param_1 + 0x28);
        _objc_retain(uVar15);
        _objc_retain(puVar6);
        uVar16 = *(undefined8 *)(param_1 + 0x38);
        _objc_retain(uVar16);
        _objc_retain(puVar11);
        func_0x00010bf54280();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar16);
        _objc_release(puVar6);
        _objc_release(uVar15);
        _objc_release(uVar14);
        _objc_release(puVar11);
        _objc_release(puVar11);
      }
    }
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
    ___stack_chk_fail();
    _objc_retain(lVar12);
    uVar15 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x18);
    func_0x00010c269d40(uVar15);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_2 + 0x38);
    _objc_retain(uVar16);
    _objc_retain(lVar12);
    uVar14 = uVar15;
    func_0x00010c13e480(uVar15);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar15);
    puVar8 = PTR_PTR_1126b0418;
    func_0x00010c2a9f80(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar14);
    _objc_release(uVar16);
    _objc_release(lVar12);
    _objc_release(lVar12);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 105482f34; end: 105483107;  */

void FUN_105482f34(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar4);
  _objc_retain(param_2);
  uVar2 = uVar1;
  func_0x00010c13e480(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b0418;
  func_0x00010c2a9f80(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105483108; end: 10548310b;  */

void FUN_105483108(void)

{
  return;
}



/* Entry: 10548310c; end: 10548323b;  */

void FUN_10548310c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = (ulong)*(uint *)(param_1 + 0x58);
  func_0x00010900605c();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c12fbc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(lVar1 + 0x38,0);
  _objc_storeStrong(lVar1 + 0x30,0);
  _objc_storeStrong(lVar1 + 0x28,0);
  _objc_storeStrong(lVar1 + 0x20,0);
  _objc_storeStrong(lVar1 + 0x18,0);
  _objc_storeStrong(lVar1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar1 + 8,0);
  return;
}



/* Entry: 10548323c; end: 1054832a7; -[SCBitmojiCustomojiFetcher .cxx_destruct] */

void FUN_10548323c(long param_1)

{
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



/* Entry: 1054832a8; end: 105483497; -[SCBitmojiFlatlandBackgroundFetchRequest cacheKey] */

void FUN_1054832a8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_105483498;
  uStack_40 = 0x1054834a8;
  uStack_38 = 0;
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x2020000000;
  uStack_68 = 0;
  lVar1 = param_1;
  func_0x00010bf13c20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0be440();
  _objc_release(lVar1);
  func_0x00010c23d0a0();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_1 == 0) {
    if ((*(byte *)(puStack_78 + 3) & 1) != 0) goto LAB_1054833cc;
  }
  else if ((param_1 == 1) && (*(char *)(puStack_78 + 3) == '\x01')) {
LAB_1054833cc:
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_105483434;
  }
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
LAB_105483434:
  __Block_object_dispose(&uStack_80,8);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105483498; end: 1054834af;  */

void FUN_105483498(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1054834b0; end: 105483513;  */

void FUN_1054834b0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105483514; end: 10548354b;  */

void FUN_105483514(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10548354c; end: 105483707; -[SCBitmojiFlatlandCOFConfigProvider initWithCircumstanceEngine:callbackPerformer:userHasher:userSessionScope:opsMetricsLogger:preferences:avatarIdProvider:clientRenderGatingProvider:] */

undefined1 *
FUN_10548354c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

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
  puStack_68 = PTR_PTR_1126e8678;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_6);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126af7d0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_10;
    _objc_release(uVar2);
  }
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



/* Entry: 105483708; end: 10548371f; -[SCBitmojiFlatlandCOFConfigProvider useStagingHost] */

void FUN_105483708(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110db0f18,0,0);
  return;
}



/* Entry: 105483720; end: 10548376b; -[SCBitmojiFlatlandCOFConfigProvider pistachioContentTag] */

void FUN_105483720(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf1f440(uVar2,param_2,&PTR____CFConstantStringClassReference_110de0e38,0,0);
  ppuVar1 = &PTR____CFConstantStringClassReference_110de0e58;
  if ((int)uVar2 == 0) {
    ppuVar1 = (undefined **)0x0;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10548376c; end: 105483783; -[SCBitmojiFlatlandCOFConfigProvider engineType] */

void FUN_10548376c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c067f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_intValueForConfigKeySync_default_1125f79d0,
             &PTR____CFConstantStringClassReference_110de0e78,0,0);
  return;
}


