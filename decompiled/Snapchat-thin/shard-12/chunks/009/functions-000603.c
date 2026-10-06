/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109c40e6c; end: 109c41023;  */

long FUN_109c40e6c(long param_1)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x100) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar5 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_50,*puVar5,puVar5[1]);
  }
  else {
    uStack_48 = puVar5[1];
    uStack_50 = *puVar5;
    lStack_40 = puVar5[2];
  }
  lVar3 = 0xf8;
  __Znwm();
  FUN_109c2d19c();
  uVar1 = *(uint *)(param_1 + 0x144);
  if (*(char *)(param_1 + 0x1a4) == '\x01') {
    if (*(int *)(param_1 + 0x194) != 2) {
      func_0x000105688514(&UNK_10f5a5962);
LAB_109c40fec:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x109c40ff0);
      (*pcVar2)();
    }
    if (2 < uVar1) {
      func_0x000105688514(&UNK_10f5a5043);
      goto LAB_109c40fec;
    }
    FUN_109c3c254(param_1,lVar3);
  }
  switch(uVar1) {
  case 0:
    uVar4 = 1;
    break;
  case 1:
    *(undefined4 *)(lVar3 + 0x90) = 0;
    goto LAB_109c40f84;
  case 2:
    uVar4 = 2;
    break;
  case 3:
    uVar4 = 3;
    break;
  case 4:
    uVar4 = 4;
    break;
  case 5:
    uVar4 = 5;
    break;
  default:
    _fwrite(&UNK_10f5a50ef,0x1a,1,*(undefined8 *)PTR____stderrp_11034bdc8);
    goto LAB_109c40f84;
  case 8:
    uVar4 = 6;
    break;
  case 9:
    uVar4 = 7;
    break;
  case 10:
    uVar4 = 10;
    break;
  case 0xb:
    uVar4 = 0xb;
    break;
  case 0xc:
    uVar4 = 0xc;
    break;
  case 0xd:
    uVar4 = 0xd;
    break;
  case 0xe:
    uVar4 = 8;
    break;
  case 0xf:
    uVar4 = 9;
  }
  *(undefined4 *)(lVar3 + 0x90) = uVar4;
LAB_109c40f84:
  if (lStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  return lVar3;
}



/* Entry: 109c41024; end: 109c41317;  */

long * FUN_109c41024(long param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong *puVar2;
  undefined4 uVar3;
  char cVar4;
  code *pcVar5;
  bool bVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  ulong uVar11;
  long lVar12;
  ulong *puVar13;
  undefined8 **ppuStack_190;
  ulong uStack_188;
  byte bStack_179;
  undefined8 auStack_178 [3];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long *plStack_100;
  long *plStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined1 auStack_d8 [8];
  long *plStack_d0;
  undefined1 auStack_c8 [8];
  long *plStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  char *pcStack_88;
  undefined8 uStack_80;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_a0 = &UNK_10f5a510a;
  uStack_98 = 0x1c;
  pcStack_88 = "";
  uStack_80 = 0;
  uStack_90 = param_1;
  FUN_109c3ca80(&puStack_a0,&UNK_10f5a5127,9);
  FUN_109c3cb24(&puStack_a0,2);
  plVar7 = (long *)0xb0;
  __Znwm();
  plVar7[0xc] = 0;
  plVar7[0xb] = 0;
  plVar7[0xe] = 0;
  plVar7[0xd] = 0;
  plVar7[0x10] = 0;
  plVar7[0xf] = 0;
  plVar7[8] = 0;
  plVar7[7] = 0;
  plVar7[0x11] = 0;
  plVar7[10] = 0;
  plVar7[9] = 0;
  plVar7[6] = 0;
  plVar7[5] = 0;
  plVar7[4] = 0;
  plVar7[3] = 0;
  plVar7[2] = 0;
  plVar7[1] = 0;
  *(undefined1 *)((long)plVar7 + 0x61) = 1;
  plVar7[0xd] = 0;
  plVar7[0xe] = 0;
  *(undefined4 *)(plVar7 + 0xf) = 0x3f800000;
  *plVar7 = (long)&PTR_FUN_110b2c568;
  plVar7[0x13] = 0;
  plVar7[0x12] = 0;
  plVar7[0x15] = 0;
  plVar7[0x14] = 0;
  *(undefined1 *)((long)plVar7 + 0x47) = 9;
  *(undefined1 *)(plVar7 + 7) = 0x6d;
  plVar7[6] = 0x726f4e6863746142;
  puVar13 = (ulong *)(param_1 + 0x20);
  uVar11 = *puVar13;
  bVar6 = (uVar11 & 1) != 0;
  puVar2 = puVar13;
  if (bVar6) {
    puVar2 = (ulong *)(uVar11 + 7);
  }
  uVar3 = *(undefined4 *)(*puVar2 + 0x18);
  puVar2 = puVar13;
  if (bVar6) {
    puVar2 = (ulong *)(uVar11 + 0xf);
  }
  uStack_90 = *puVar2;
  puStack_a0 = &UNK_10f5a510a;
  uStack_98 = 0x1c;
  pcStack_88 = "beta blob";
  uStack_80 = 9;
  FUN_109c41318(&puStack_a0,uVar3);
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = 1;
  puVar2 = puVar13;
  if ((*puVar13 & 1) != 0) {
    puVar2 = (ulong *)(*puVar13 + 7);
  }
  uStack_b4 = uVar3;
  FUN_109c19c88(&puStack_a0,*param_2,&uStack_b8,*(undefined8 *)(*puVar2 + 0x20),
                (long)*(int *)(*puVar2 + 0x18) & 0x3fffffffffffffff);
  FUN_109c18570(auStack_c8,&puStack_a0);
  FUN_109c180ec(&puStack_a0);
  func_0x000109c1e534(plVar7 + 0x12,auStack_c8);
  if ((*puVar13 & 1) != 0) {
    puVar13 = (ulong *)(*puVar13 + 0xf);
  }
  FUN_109c19c88(&puStack_a0,*param_2,&uStack_b8,*(undefined8 *)(*puVar13 + 0x20),
                (long)*(int *)(*puVar13 + 0x18) & 0x3fffffffffffffff);
  FUN_109c18570(auStack_d8,&puStack_a0);
  FUN_109c180ec(&puStack_a0);
  plVar8 = plVar7 + 0x14;
  puVar10 = auStack_d8;
  func_0x000109c1e534();
  if (plStack_d0 != (long *)0x0) {
    plVar1 = plStack_d0 + 1;
    do {
      lVar12 = *plVar1;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_d0 + 0x10))(plStack_d0);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar8 = plStack_d0;
    }
  }
  plStack_100 = plVar8;
  if (plStack_c0 != (long *)0x0) {
    plVar8 = plStack_c0 + 1;
    do {
      lVar12 = *plVar8;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plStack_100 = plStack_c0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    FUN_109c180ec(&puStack_a0);
    FUN_10959b818(auStack_c8);
    (**(code **)(*plVar7 + 8))(plVar7);
    plVar8 = plStack_100;
    __Unwind_Resume();
    pcStack_e8 = FUN_109c41318;
    if (*(int *)(plVar8[2] + 0x18) < (int)puVar10) {
      plStack_f8 = plVar7;
      puStack_f0 = &stack0xfffffffffffffff0;
      __ZNSt3__19to_stringEi(auStack_178,puVar10);
      puVar9 = auStack_178;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (puVar9,0,&UNK_10f5a5acb,0x15);
      uStack_158 = puVar9[1];
      uStack_160 = *puVar9;
      uStack_150 = puVar9[2];
      puVar9[1] = 0;
      puVar9[2] = 0;
      *puVar9 = 0;
      puVar9 = &uStack_160;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar9,&UNK_10f5a5ab4,5);
      uStack_138 = puVar9[1];
      uStack_140 = *puVar9;
      uStack_130 = puVar9[2];
      puVar9[1] = 0;
      puVar9[2] = 0;
      *puVar9 = 0;
      __ZNSt3__19to_stringEi(&ppuStack_190,*(undefined4 *)(plVar8[2] + 0x18));
      if (-1 < (char)bStack_179) {
        uStack_188 = (ulong)bStack_179;
        ppuStack_190 = &ppuStack_190;
      }
      puVar9 = &uStack_140;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar9,ppuStack_190,uStack_188);
      uStack_118 = puVar9[1];
      uStack_120 = *puVar9;
      uStack_110 = puVar9[2];
      puVar9[1] = 0;
      puVar9[2] = 0;
      *puVar9 = 0;
      FUN_109c49b30(plVar8,&uStack_120);
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x109c41414);
      (*pcVar5)();
    }
    return plVar8;
  }
  return plVar7;
}



/* Entry: 109c41318; end: 109c4148f;  */

void FUN_109c41318(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 **ppuStack_b0;
  ulong uStack_a8;
  byte bStack_99;
  undefined8 auStack_98 [3];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if (*(int *)(*(long *)(param_1 + 0x10) + 0x18) < (int)param_2) {
    __ZNSt3__19to_stringEi(auStack_98,param_2);
    puVar2 = auStack_98;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (puVar2,0,&UNK_10f5a5acb,0x15);
    uStack_78 = puVar2[1];
    uStack_80 = *puVar2;
    uStack_70 = puVar2[2];
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = 0;
    puVar2 = &uStack_80;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar2,&UNK_10f5a5ab4,5);
    uStack_58 = puVar2[1];
    uStack_60 = *puVar2;
    uStack_50 = puVar2[2];
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = 0;
    __ZNSt3__19to_stringEi(&ppuStack_b0,*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x18));
    if (-1 < (char)bStack_99) {
      uStack_a8 = (ulong)bStack_99;
      ppuStack_b0 = &ppuStack_b0;
    }
    puVar2 = &uStack_60;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar2,ppuStack_b0,uStack_a8);
    uStack_38 = puVar2[1];
    uStack_40 = *puVar2;
    uStack_30 = puVar2[2];
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = 0;
    FUN_109c49b30(param_1,&uStack_40);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x109c41414);
    (*pcVar1)();
  }
  return;
}



/* Entry: 109c41490; end: 109c41723;  */

long * FUN_109c41490(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  ulong *puVar4;
  undefined **ppuVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  long *plVar13;
  long *plVar14;
  undefined *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 *puVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  uint *puVar23;
  ulong *puVar24;
  long *plStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  uint uStack_1e0;
  undefined4 uStack_1dc;
  int iStack_1d8;
  undefined8 uStack_1d4;
  undefined4 uStack_1cc;
  uint uStack_1c8;
  undefined4 uStack_1c4;
  int iStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined *puStack_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  long *plStack_178;
  char *pcStack_170;
  undefined8 uStack_168;
  long lStack_140;
  undefined8 uStack_c8;
  long *plStack_c0;
  undefined1 auStack_b8 [8];
  long *plStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  char *pcStack_78;
  undefined8 uStack_70;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = &UNK_10f5a513b;
  uStack_88 = 0x16;
  pcStack_78 = "";
  uStack_70 = 0;
  uStack_80 = param_1;
  FUN_109c3ca80(&puStack_90,&UNK_10f5a5152,3);
  FUN_109c3cb24(&puStack_90,2);
  plVar13 = (long *)0xb8;
  __Znwm();
  FUN_109c39a48();
  puVar24 = (ulong *)(param_1 + 0x20);
  uVar18 = *puVar24;
  bVar10 = (uVar18 & 1) != 0;
  puVar4 = puVar24;
  if (bVar10) {
    puVar4 = (ulong *)(uVar18 + 7);
  }
  uVar6 = *(undefined4 *)(*puVar4 + 0x18);
  puVar4 = puVar24;
  if (bVar10) {
    puVar4 = (ulong *)(uVar18 + 0xf);
  }
  uStack_80 = *puVar4;
  puStack_90 = &UNK_10f5a513b;
  uStack_88 = 0x16;
  pcStack_78 = "beta blob";
  uStack_70 = 9;
  FUN_109c41318(&puStack_90,uVar6);
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 1;
  puVar4 = puVar24;
  if ((*puVar24 & 1) != 0) {
    puVar4 = (ulong *)(*puVar24 + 7);
  }
  uStack_a4 = uVar6;
  FUN_109c19c88(&puStack_90,*param_2,&uStack_a8,*(undefined8 *)(*puVar4 + 0x20),
                (long)*(int *)(*puVar4 + 0x18) & 0x3fffffffffffffff);
  FUN_109c18570(auStack_b8,&puStack_90);
  FUN_109c180ec(&puStack_90);
  func_0x000109c1e534(plVar13 + 0x12,auStack_b8);
  if ((*puVar24 & 1) != 0) {
    puVar24 = (ulong *)(*puVar24 + 0xf);
  }
  FUN_109c19c88(&puStack_90,*param_2,&uStack_a8,*(undefined8 *)(*puVar24 + 0x20),
                (long)*(int *)(*puVar24 + 0x18) & 0x3fffffffffffffff);
  FUN_109c18570(&uStack_c8,&puStack_90);
  FUN_109c180ec(&puStack_90);
  plVar14 = plVar13 + 0x14;
  puVar16 = &uStack_c8;
  func_0x000109c1e534();
  *(undefined4 *)(plVar13 + 0x16) = *(undefined4 *)(param_1 + 500);
  if (plStack_c0 != (long *)0x0) {
    plVar1 = plStack_c0 + 1;
    do {
      lVar20 = *plVar1;
      cVar8 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *plVar1 = lVar20 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (lVar20 == 0) {
      (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar14 = plStack_c0;
    }
  }
  if (plStack_b0 != (long *)0x0) {
    plVar1 = plStack_b0 + 1;
    do {
      lVar20 = *plVar1;
      cVar8 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *plVar1 = lVar20 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (lVar20 == 0) {
      (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar14 = plStack_b0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return plVar13;
  }
  ___stack_chk_fail();
  FUN_109c180ec(&puStack_90);
  FUN_10959b818(auStack_b8);
  (**(code **)(*plVar13 + 8))(plVar13);
  __Unwind_Resume();
  lStack_140 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_188 = &UNK_10f5a5156;
  uStack_180 = 0x19;
  pcStack_170 = "";
  uStack_168 = 0;
  plStack_178 = plVar14;
  FUN_109c3ca80(&puStack_188,&UNK_10f5a5170,6);
  FUN_109c3cb24(&puStack_188,1);
  plVar13 = (long *)0x148;
  __Znwm();
  FUN_109c2ae88();
  puVar24 = (ulong *)(plVar14 + 4);
  uVar18 = *puVar24;
  uVar6 = *(undefined4 *)((long)plVar14 + 0x11c);
  uStack_1bc = (undefined4)plVar14[0x24];
  iStack_1c0 = (int)plVar14[0x23];
  *(int *)(plVar13 + 0x12) = iStack_1c0;
  *(undefined4 *)((long)plVar13 + 0x94) = uStack_1bc;
  uVar7 = *(undefined4 *)((long)plVar14 + 0x1d4);
  *(undefined4 *)(plVar13 + 0x13) = uStack_1bc;
  *(undefined4 *)((long)plVar13 + 0x9c) = uVar7;
  *(undefined4 *)(plVar13 + 0x24) = uVar6;
  *(int *)((long)plVar13 + 0x124) = (int)plVar14[0x35];
  puVar4 = puVar24;
  if ((uVar18 & 1) != 0) {
    puVar4 = (ulong *)(uVar18 + 7);
  }
  uVar18 = *puVar4;
  uStack_1dc = *(undefined4 *)(uVar18 + 0x58);
  uStack_1c8 = 4;
  uStack_1b4 = 0;
  iStack_1d8 = *(int *)(uVar18 + 100) * iStack_1c0 * *(int *)(uVar18 + 0x60);
  uStack_1d4 = 0;
  uStack_1cc = 0;
  uStack_1e0 = 2;
  iVar11 = 0xf5749aa;
  uStack_1c4 = uStack_1dc;
  uStack_1b8 = uStack_1bc;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,&uStack_1c4,4);
  uVar3 = uStack_1e0 & ((int)uStack_1e0 >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar3) {
    uVar3 = 5;
  }
  iVar12 = 0xf5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,&uStack_1dc,uVar3);
  if (iVar11 != iVar12) {
    puVar15 = &UNK_10f5a5177;
    goto LAB_109c42068;
  }
  lVar20 = plVar14[5];
  *(bool *)(plVar13 + 0x1d) = 1 < (int)lVar20;
  if (1 < (int)lVar20) {
    uVar6 = (undefined4)plVar13[0x12];
    puStack_188 = &UNK_10f5a5a89;
    uStack_180 = 10;
    pcStack_170 = "";
    uStack_168 = 0;
    plStack_178 = plVar14;
    FUN_109c3cb24(&puStack_188,2);
    puStack_188 = &UNK_10f5a5a89;
    uStack_180 = 10;
    plStack_178 = (long *)CONCAT44(plStack_178._4_4_,uVar6);
    pcStack_170 = "count";
    uStack_168 = 5;
    FUN_109c14834(&puStack_188);
    uStack_19c = 0;
    puStack_1b0 = (undefined *)0x100000004;
    uStack_1a4 = 1;
    uStack_1a0 = 1;
    plStack_1f8 = (long *)0x0;
    plStack_1f0 = (long *)0x0;
    puVar4 = puVar24;
    if ((*puVar24 & 1) != 0) {
      puVar4 = (ulong *)(*puVar24 + 0xf);
    }
    uVar18 = *puVar4;
    uStack_1a8 = uVar6;
    if ((*(byte *)(uVar18 + 0x10) & 1) == 0) {
      FUN_109c19dfc(&puStack_188,*puVar16,&puStack_1b0,*(undefined8 *)(uVar18 + 0x20),
                    ((long)*(int *)(uVar18 + 0x18) & 0x3fffffffffffffffU) << 1);
      func_0x000109c18360(&plStack_1f8,&puStack_188);
      FUN_109c180ec(&puStack_188);
    }
    else {
      puVar19 = (undefined8 *)(*(ulong *)(uVar18 + 0x50) & 0xfffffffffffffffc);
      puVar17 = (undefined8 *)*puVar19;
      uVar18 = puVar19[1];
      if (-1 < (char)*(byte *)((long)puVar19 + 0x17)) {
        puVar17 = puVar19;
        uVar18 = (ulong)*(byte *)((long)puVar19 + 0x17);
      }
      FUN_109c1a57c(&puStack_188,*puVar16,&puStack_1b0,puVar17,uVar18,4);
      func_0x000109c18360(&plStack_1f8,&puStack_188);
      FUN_109c180ec(&puStack_188);
      puVar4 = puVar24;
      if ((*puVar24 & 1) != 0) {
        puVar4 = (ulong *)(*puVar24 + 0xf);
      }
      uVar18 = *puVar4;
      *(undefined4 *)((long)plStack_1f8 + 0x4c) = *(undefined4 *)(uVar18 + 0x70);
      *(undefined4 *)(plStack_1f8 + 10) = *(undefined4 *)(uVar18 + 0x68);
    }
    func_0x000109c1e534(plVar13 + 0x1e,&plStack_1f8);
    plVar1 = plStack_1f0;
    if (plStack_1f0 != (long *)0x0) {
      plVar2 = plStack_1f0 + 1;
      do {
        lVar20 = *plVar2;
        cVar8 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar10) {
          *plVar2 = lVar20 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (lVar20 == 0) {
        (**(code **)(*plStack_1f0 + 0x10))(plStack_1f0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
  }
  if ((*(byte *)((long)plVar14 + 0x1a4) & 1) == 0) {
    if ((*puVar24 & 1) != 0) {
      puVar24 = (ulong *)(*puVar24 + 7);
    }
    FUN_109c19dfc(&puStack_188,*puVar16,&uStack_1c8,*(undefined8 *)(*puVar24 + 0x20),
                  ((long)*(int *)(*puVar24 + 0x18) & 0x3fffffffffffffffU) << 1);
    FUN_109c18570(&puStack_1b0,&puStack_188);
    FUN_109c180ec(&puStack_188);
    *(undefined4 *)(puStack_1b0 + 0x3c) = 1;
    FUN_109c11f88();
    puVar15 = puStack_1b0;
    puVar23 = (uint *)(puStack_1b0 + 8);
    uVar3 = *puVar23 & ((int)*puVar23 >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar3) {
      uVar3 = 5;
    }
    iVar11 = 0xf5749aa;
    FUN_109c60fbc(&UNK_10f5749aa,0x1a,puStack_1b0 + 0xc,uVar3);
    uVar3 = uStack_1e0 & ((int)uStack_1e0 >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar3) {
      uVar3 = 5;
    }
    iVar12 = 0xf5749aa;
    FUN_109c60fbc(&UNK_10f5749aa,0x1a,&uStack_1dc,uVar3);
    puStack_188 = &UNK_10f574cf1;
    uStack_180 = 0xf;
    plStack_178 = (long *)CONCAT71(plStack_178._1_7_,iVar11 == iVar12);
    pcStack_170 = "new dimensions";
    uStack_168 = 0xe;
    FUN_10959b640(&puStack_188);
    uVar3 = uStack_1e0;
    if ((puVar23 != &uStack_1e0) && (iVar11 == iVar12)) {
      if (uStack_1e0 != 0) {
        _memmove(puVar15 + 0xc,&uStack_1dc,(long)(int)uStack_1e0 << 2);
      }
      *puVar23 = uVar3;
    }
    func_0x000109c1e534(plVar13 + 0x15,&puStack_1b0);
    plVar14 = (long *)CONCAT44(uStack_1a4,uStack_1a8);
    if (plVar14 != (long *)0x0) {
      plVar1 = plVar14 + 1;
      do {
        lVar20 = *plVar1;
        cVar8 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar10) {
          *plVar1 = lVar20 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (lVar20 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
      }
    }
LAB_109c42024:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_140) {
      return plVar13;
    }
    ___stack_chk_fail();
  }
  else {
    if (*(int *)((long)plVar14 + 0x194) == 2) {
      uVar22 = *puVar24;
      uVar18 = uVar22 & 1;
      puVar4 = puVar24;
      if (uVar18 != 0) {
        puVar4 = (ulong *)(uVar22 + 7);
      }
      uVar21 = *puVar4;
      if (*(char *)(uVar21 + 0x6c) == '\x01') {
        uStack_1a8 = (undefined4)plVar13[0x12];
        uStack_19c = 0;
        puStack_1b0 = (undefined *)0x100000004;
        uStack_1a4 = 1;
        uStack_1a0 = 1;
        FUN_109c19c88(&puStack_188,*puVar16,&puStack_1b0,*(undefined8 *)(uVar21 + 0x20),
                      (long)*(int *)(uVar21 + 0x18) & 0x3fffffffffffffff);
        FUN_109c18570(&plStack_1f8,&puStack_188);
        FUN_109c180ec(&puStack_188);
        func_0x000109c1e534(plVar13 + 0x22,&plStack_1f8);
        plVar1 = plStack_1f0;
        *(undefined1 *)((long)plVar13 + 0x10d) = 1;
        if (plStack_1f0 != (long *)0x0) {
          plVar2 = plStack_1f0 + 1;
          do {
            lVar20 = *plVar2;
            cVar8 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar10) {
              *plVar2 = lVar20 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (lVar20 == 0) {
            (**(code **)(*plStack_1f0 + 0x10))(plStack_1f0);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
          }
        }
        uVar22 = *puVar24;
        uVar18 = uVar22 & 1;
      }
      puVar4 = puVar24;
      if (uVar18 != 0) {
        puVar4 = (ulong *)(uVar22 + 7);
      }
      plStack_178 = (long *)*puVar4;
      puStack_188 = &UNK_10f5a5156;
      uStack_180 = 0x19;
      pcStack_170 = "weights blob";
      uStack_168 = 0xc;
      uVar3 = uStack_1c8 & ((int)uStack_1c8 >> 0x1f ^ 0xffffffffU);
      if (4 < (int)uVar3) {
        uVar3 = 5;
      }
      iVar11 = 0xf5749aa;
      FUN_109c60fbc(&UNK_10f5749aa,0x1a,&uStack_1c4,uVar3);
      FUN_109c3cec0(&puStack_188,(long)iVar11);
      puVar4 = puVar24;
      if ((*puVar24 & 1) != 0) {
        puVar4 = (ulong *)(*puVar24 + 7);
      }
      puVar17 = (undefined8 *)(*(ulong *)(*puVar4 + 0x50) & 0xfffffffffffffffc);
      lVar20 = (long)*(char *)((long)puVar17 + 0x17);
      if (lVar20 < 0) {
        lVar20 = puVar17[1];
        puVar17 = (undefined8 *)*puVar17;
      }
      puStack_1b0 = (undefined *)0x0;
      uStack_1a8 = 0;
      uStack_1a4 = 0;
      uStack_1a0 = 0;
      uStack_19c = 0;
      FUN_109591c60(&puStack_1b0,puVar17,(long)puVar17 + lVar20,
                    ((long)puVar17 + lVar20) - (long)puVar17);
      FUN_109c19fac(&puStack_188,*puVar16,&uStack_1c8,puStack_1b0,
                    CONCAT44(uStack_1a4,uStack_1a8) - (long)puStack_1b0);
      FUN_109c18570(&plStack_1f8,&puStack_188);
      FUN_109c180ec(&puStack_188);
      *(undefined4 *)((long)plStack_1f8 + 0x3c) = 1;
      FUN_109c11f88();
      plVar1 = plStack_1f8;
      puVar23 = (uint *)(plStack_1f8 + 1);
      uVar3 = *puVar23 & ((int)*puVar23 >> 0x1f ^ 0xffffffffU);
      if (4 < (int)uVar3) {
        uVar3 = 5;
      }
      iVar11 = 0xf5749aa;
      FUN_109c60fbc(&UNK_10f5749aa,0x1a,(long)plStack_1f8 + 0xc,uVar3);
      uVar3 = uStack_1e0 & ((int)uStack_1e0 >> 0x1f ^ 0xffffffffU);
      if (4 < (int)uVar3) {
        uVar3 = 5;
      }
      iVar12 = 0xf5749aa;
      FUN_109c60fbc(&UNK_10f5749aa,0x1a,&uStack_1dc,uVar3);
      puStack_188 = &UNK_10f574cf1;
      uStack_180 = 0xf;
      plStack_178 = (long *)CONCAT71(plStack_178._1_7_,iVar11 == iVar12);
      pcStack_170 = "new dimensions";
      uStack_168 = 0xe;
      FUN_10959b640(&puStack_188);
      uVar3 = uStack_1e0;
      if ((puVar23 != &uStack_1e0) && (iVar11 == iVar12)) {
        if (uStack_1e0 != 0) {
          _memmove((long)plVar1 + 0xc,&uStack_1dc,(long)(int)uStack_1e0 << 2);
        }
        *puVar23 = uVar3;
      }
      if ((plVar14[4] & 1U) != 0) {
        puVar24 = (ulong *)(plVar14[4] + 7);
      }
      uVar18 = *puVar24;
      *(undefined4 *)((long)plStack_1f8 + 0x4c) = *(undefined4 *)(uVar18 + 0x70);
      *(undefined4 *)(plStack_1f8 + 10) = *(undefined4 *)(uVar18 + 0x68);
      func_0x000109c1e534(plVar13 + 0x15,&plStack_1f8);
      FUN_109c3c254(plVar14,plVar13);
      plVar14 = plStack_1f0;
      if (plStack_1f0 != (long *)0x0) {
        plVar1 = plStack_1f0 + 1;
        do {
          lVar20 = *plVar1;
          cVar8 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar10) {
            *plVar1 = lVar20 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar20 == 0) {
          (**(code **)(*plStack_1f0 + 0x10))(plStack_1f0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
        }
      }
      if (puStack_1b0 != (undefined *)0x0) {
        uStack_1a8 = SUB84(puStack_1b0,0);
        uStack_1a4 = (undefined4)((ulong)puStack_1b0 >> 0x20);
LAB_109c42020:
        __ZdlPv();
      }
      goto LAB_109c42024;
    }
    if (*(int *)((long)plVar14 + 0x194) == 1) {
      if ((*puVar24 & 1) != 0) {
        puVar24 = (ulong *)(*puVar24 + 7);
      }
      puVar17 = (undefined8 *)(*(ulong *)(*puVar24 + 0x50) & 0xfffffffffffffffc);
      lVar20 = (long)*(char *)((long)puVar17 + 0x17);
      if (lVar20 < 0) {
        lVar20 = puVar17[1];
        puVar17 = (undefined8 *)*puVar17;
      }
      plStack_1f8 = (long *)0x0;
      plStack_1f0 = (long *)0x0;
      uStack_1e8 = 0;
      FUN_109591c60(&plStack_1f8,puVar17,(long)puVar17 + lVar20,
                    ((long)puVar17 + lVar20) - (long)puVar17);
      ppuVar5 = &PTR_PTR_1132ec9b0;
      if ((undefined **)plVar14[0x22] != (undefined **)0x0) {
        ppuVar5 = (undefined **)plVar14[0x22];
      }
      FUN_109c1acf8(&puStack_188,*puVar16,&uStack_1c8,ppuVar5[4],
                    (long)*(int *)(ppuVar5 + 3) & 0x3fffffffffffffff,&plStack_1f8);
      puVar15 = puStack_188;
      *(undefined4 *)(puStack_188 + 0x3c) = 1;
      FUN_109c11f88(puStack_188);
      puVar23 = (uint *)(puVar15 + 8);
      uVar3 = *puVar23 & ((int)*puVar23 >> 0x1f ^ 0xffffffffU);
      if (4 < (int)uVar3) {
        uVar3 = 5;
      }
      iVar11 = 0xf5749aa;
      FUN_109c60fbc(&UNK_10f5749aa,0x1a,puVar15 + 0xc,uVar3);
      uVar3 = uStack_1e0 & ((int)uStack_1e0 >> 0x1f ^ 0xffffffffU);
      if (4 < (int)uVar3) {
        uVar3 = 5;
      }
      iVar12 = 0xf5749aa;
      FUN_109c60fbc(&UNK_10f5749aa,0x1a,&uStack_1dc,uVar3);
      puStack_1b0 = &UNK_10f574cf1;
      uStack_1a8 = 0xf;
      uStack_1a4 = 0;
      uStack_1a0 = CONCAT31(uStack_1a0._1_3_,iVar11 == iVar12);
      puStack_198 = &UNK_10f574d01;
      uStack_190 = 0xe;
      FUN_10959b640(&puStack_1b0);
      uVar3 = uStack_1e0;
      if ((puVar23 != &uStack_1e0) && (iVar11 == iVar12)) {
        if (uStack_1e0 != 0) {
          _memmove(puVar15 + 0xc,&uStack_1dc,(long)(int)uStack_1e0 << 2);
        }
        *puVar23 = uVar3;
      }
      FUN_109c18570(&puStack_1b0,&puStack_188);
      func_0x000109c1e534(plVar13 + 0x15,&puStack_1b0);
      plVar14 = (long *)CONCAT44(uStack_1a4,uStack_1a8);
      if (plVar14 != (long *)0x0) {
        plVar1 = plVar14 + 1;
        do {
          lVar20 = *plVar1;
          cVar8 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar10) {
            *plVar1 = lVar20 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar20 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
        }
      }
      FUN_109c180ec(&puStack_188);
      if (plStack_1f8 != (long *)0x0) {
        plStack_1f0 = plStack_1f8;
        goto LAB_109c42020;
      }
      goto LAB_109c42024;
    }
  }
  puVar15 = &UNK_10f5a51a7;
LAB_109c42068:
  func_0x000105688514(puVar15);
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x109c42070);
  (*pcVar9)();
}



/* Entry: 109c41724; end: 109c4216b;  */

long FUN_109c41724(long param_1,undefined8 *param_2)

{
  long *plVar1;
  uint uVar2;
  ulong *puVar3;
  undefined **ppuVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  bool bVar8;
  long *plVar9;
  code *pcVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  uint *puVar21;
  ulong *puVar22;
  long *plStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  uint uStack_110;
  undefined4 uStack_10c;
  int iStack_108;
  undefined8 uStack_104;
  undefined4 uStack_fc;
  uint uStack_f8;
  undefined4 uStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined *puStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  char *pcStack_a0;
  undefined8 uStack_98;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_b8 = &UNK_10f5a5156;
  uStack_b0 = 0x19;
  pcStack_a0 = "";
  uStack_98 = 0;
  uStack_a8 = param_1;
  FUN_109c3ca80(&puStack_b8,&UNK_10f5a5170,6);
  FUN_109c3cb24(&puStack_b8,1);
  lVar13 = 0x148;
  __Znwm();
  FUN_109c2ae88();
  puVar22 = (ulong *)(param_1 + 0x20);
  uVar16 = *puVar22;
  uVar5 = *(undefined4 *)(param_1 + 0x11c);
  uStack_ec = *(undefined4 *)(param_1 + 0x120);
  iStack_f0 = *(int *)(param_1 + 0x118);
  *(int *)(lVar13 + 0x90) = iStack_f0;
  *(undefined4 *)(lVar13 + 0x94) = uStack_ec;
  uVar6 = *(undefined4 *)(param_1 + 0x1d4);
  *(undefined4 *)(lVar13 + 0x98) = uStack_ec;
  *(undefined4 *)(lVar13 + 0x9c) = uVar6;
  *(undefined4 *)(lVar13 + 0x120) = uVar5;
  *(undefined4 *)(lVar13 + 0x124) = *(undefined4 *)(param_1 + 0x1a8);
  puVar3 = puVar22;
  if ((uVar16 & 1) != 0) {
    puVar3 = (ulong *)(uVar16 + 7);
  }
  uVar16 = *puVar3;
  uStack_10c = *(undefined4 *)(uVar16 + 0x58);
  uStack_f8 = 4;
  uStack_e4 = 0;
  iStack_108 = *(int *)(uVar16 + 100) * iStack_f0 * *(int *)(uVar16 + 0x60);
  uStack_104 = 0;
  uStack_fc = 0;
  uStack_110 = 2;
  iVar11 = 0xf5749aa;
  uStack_f4 = uStack_10c;
  uStack_e8 = uStack_ec;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,&uStack_f4,4);
  uVar2 = uStack_110 & ((int)uStack_110 >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar2) {
    uVar2 = 5;
  }
  iVar12 = 0xf5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,&uStack_10c,uVar2);
  if (iVar11 != iVar12) {
    puVar14 = &UNK_10f5a5177;
    goto LAB_109c42068;
  }
  iVar11 = *(int *)(param_1 + 0x28);
  *(bool *)(lVar13 + 0xe8) = 1 < iVar11;
  if (1 < iVar11) {
    uVar5 = *(undefined4 *)(lVar13 + 0x90);
    puStack_b8 = &UNK_10f5a5a89;
    uStack_b0 = 10;
    pcStack_a0 = "";
    uStack_98 = 0;
    uStack_a8 = param_1;
    FUN_109c3cb24(&puStack_b8,2);
    puStack_b8 = &UNK_10f5a5a89;
    uStack_b0 = 10;
    uStack_a8 = CONCAT44(uStack_a8._4_4_,uVar5);
    pcStack_a0 = "count";
    uStack_98 = 5;
    FUN_109c14834(&puStack_b8);
    uStack_cc = 0;
    puStack_e0 = (undefined *)0x100000004;
    uStack_d4 = 1;
    uStack_d0 = 1;
    plStack_128 = (long *)0x0;
    plStack_120 = (long *)0x0;
    puVar3 = puVar22;
    if ((*puVar22 & 1) != 0) {
      puVar3 = (ulong *)(*puVar22 + 0xf);
    }
    uVar16 = *puVar3;
    uStack_d8 = uVar5;
    if ((*(byte *)(uVar16 + 0x10) & 1) == 0) {
      FUN_109c19dfc(&puStack_b8,*param_2,&puStack_e0,*(undefined8 *)(uVar16 + 0x20),
                    ((long)*(int *)(uVar16 + 0x18) & 0x3fffffffffffffffU) << 1);
      func_0x000109c18360(&plStack_128,&puStack_b8);
      FUN_109c180ec(&puStack_b8);
    }
    else {
      puVar17 = (undefined8 *)(*(ulong *)(uVar16 + 0x50) & 0xfffffffffffffffc);
      puVar15 = (undefined8 *)*puVar17;
      uVar16 = puVar17[1];
      if (-1 < (char)*(byte *)((long)puVar17 + 0x17)) {
        puVar15 = puVar17;
        uVar16 = (ulong)*(byte *)((long)puVar17 + 0x17);
      }
      FUN_109c1a57c(&puStack_b8,*param_2,&puStack_e0,puVar15,uVar16,4);
      func_0x000109c18360(&plStack_128,&puStack_b8);
      FUN_109c180ec(&puStack_b8);
      puVar3 = puVar22;
      if ((*puVar22 & 1) != 0) {
        puVar3 = (ulong *)(*puVar22 + 0xf);
      }
      uVar16 = *puVar3;
      *(undefined4 *)((long)plStack_128 + 0x4c) = *(undefined4 *)(uVar16 + 0x70);
      *(undefined4 *)(plStack_128 + 10) = *(undefined4 *)(uVar16 + 0x68);
    }
    func_0x000109c1e534(lVar13 + 0xf0,&plStack_128);
    plVar9 = plStack_120;
    if (plStack_120 != (long *)0x0) {
      plVar1 = plStack_120 + 1;
      do {
        lVar18 = *plVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = lVar18 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*plStack_120 + 0x10))(plStack_120);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
  }
  if ((*(byte *)(param_1 + 0x1a4) & 1) == 0) {
    if ((*puVar22 & 1) != 0) {
      puVar22 = (ulong *)(*puVar22 + 7);
    }
    FUN_109c19dfc(&puStack_b8,*param_2,&uStack_f8,*(undefined8 *)(*puVar22 + 0x20),
                  ((long)*(int *)(*puVar22 + 0x18) & 0x3fffffffffffffffU) << 1);
    FUN_109c18570(&puStack_e0,&puStack_b8);
    FUN_109c180ec(&puStack_b8);
    *(undefined4 *)(puStack_e0 + 0x3c) = 1;
    FUN_109c11f88();
    puVar14 = puStack_e0;
    puVar21 = (uint *)(puStack_e0 + 8);
    uVar2 = *puVar21 & ((int)*puVar21 >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar2) {
      uVar2 = 5;
    }
    iVar11 = 0xf5749aa;
    FUN_109c60fbc(&UNK_10f5749aa,0x1a,puStack_e0 + 0xc,uVar2);
    uVar2 = uStack_110 & ((int)uStack_110 >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar2) {
      uVar2 = 5;
    }
    iVar12 = 0xf5749aa;
    FUN_109c60fbc(&UNK_10f5749aa,0x1a,&uStack_10c,uVar2);
    puStack_b8 = &UNK_10f574cf1;
    uStack_b0 = 0xf;
    uStack_a8 = CONCAT71(uStack_a8._1_7_,iVar11 == iVar12);
    pcStack_a0 = "new dimensions";
    uStack_98 = 0xe;
    FUN_10959b640(&puStack_b8);
    uVar2 = uStack_110;
    if ((puVar21 != &uStack_110) && (iVar11 == iVar12)) {
      if (uStack_110 != 0) {
        _memmove(puVar14 + 0xc,&uStack_10c,(long)(int)uStack_110 << 2);
      }
      *puVar21 = uVar2;
    }
    func_0x000109c1e534(lVar13 + 0xa8,&puStack_e0);
    plVar9 = (long *)CONCAT44(uStack_d4,uStack_d8);
    if (plVar9 != (long *)0x0) {
      plVar1 = plVar9 + 1;
      do {
        lVar18 = *plVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = lVar18 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
LAB_109c42024:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return lVar13;
    }
    ___stack_chk_fail();
  }
  else {
    if (*(int *)(param_1 + 0x194) == 2) {
      uVar20 = *puVar22;
      uVar16 = uVar20 & 1;
      puVar3 = puVar22;
      if (uVar16 != 0) {
        puVar3 = (ulong *)(uVar20 + 7);
      }
      uVar19 = *puVar3;
      if (*(char *)(uVar19 + 0x6c) == '\x01') {
        uStack_d8 = *(undefined4 *)(lVar13 + 0x90);
        uStack_cc = 0;
        puStack_e0 = (undefined *)0x100000004;
        uStack_d4 = 1;
        uStack_d0 = 1;
        FUN_109c19c88(&puStack_b8,*param_2,&puStack_e0,*(undefined8 *)(uVar19 + 0x20),
                      (long)*(int *)(uVar19 + 0x18) & 0x3fffffffffffffff);
        FUN_109c18570(&plStack_128,&puStack_b8);
        FUN_109c180ec(&puStack_b8);
        func_0x000109c1e534(lVar13 + 0x110,&plStack_128);
        plVar9 = plStack_120;
        *(undefined1 *)(lVar13 + 0x10d) = 1;
        if (plStack_120 != (long *)0x0) {
          plVar1 = plStack_120 + 1;
          do {
            lVar18 = *plVar1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar8) {
              *plVar1 = lVar18 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar18 == 0) {
            (**(code **)(*plStack_120 + 0x10))(plStack_120);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
          }
        }
        uVar20 = *puVar22;
        uVar16 = uVar20 & 1;
      }
      puVar3 = puVar22;
      if (uVar16 != 0) {
        puVar3 = (ulong *)(uVar20 + 7);
      }
      uStack_a8 = *puVar3;
      puStack_b8 = &UNK_10f5a5156;
      uStack_b0 = 0x19;
      pcStack_a0 = "weights blob";
      uStack_98 = 0xc;
      uVar2 = uStack_f8 & ((int)uStack_f8 >> 0x1f ^ 0xffffffffU);
      if (4 < (int)uVar2) {
        uVar2 = 5;
      }
      iVar11 = 0xf5749aa;
      FUN_109c60fbc(&UNK_10f5749aa,0x1a,&uStack_f4,uVar2);
      FUN_109c3cec0(&puStack_b8,(long)iVar11);
      puVar3 = puVar22;
      if ((*puVar22 & 1) != 0) {
        puVar3 = (ulong *)(*puVar22 + 7);
      }
      puVar15 = (undefined8 *)(*(ulong *)(*puVar3 + 0x50) & 0xfffffffffffffffc);
      lVar18 = (long)*(char *)((long)puVar15 + 0x17);
      if (lVar18 < 0) {
        lVar18 = puVar15[1];
        puVar15 = (undefined8 *)*puVar15;
      }
      puStack_e0 = (undefined *)0x0;
      uStack_d8 = 0;
      uStack_d4 = 0;
      uStack_d0 = 0;
      uStack_cc = 0;
      FUN_109591c60(&puStack_e0,puVar15,(long)puVar15 + lVar18,
                    ((long)puVar15 + lVar18) - (long)puVar15);
      FUN_109c19fac(&puStack_b8,*param_2,&uStack_f8,puStack_e0,
                    CONCAT44(uStack_d4,uStack_d8) - (long)puStack_e0);
      FUN_109c18570(&plStack_128,&puStack_b8);
      FUN_109c180ec(&puStack_b8);
      *(undefined4 *)((long)plStack_128 + 0x3c) = 1;
      FUN_109c11f88();
      plVar9 = plStack_128;
      puVar21 = (uint *)(plStack_128 + 1);
      uVar2 = *puVar21 & ((int)*puVar21 >> 0x1f ^ 0xffffffffU);
      if (4 < (int)uVar2) {
        uVar2 = 5;
      }
      iVar11 = 0xf5749aa;
      FUN_109c60fbc(&UNK_10f5749aa,0x1a,(long)plStack_128 + 0xc,uVar2);
      uVar2 = uStack_110 & ((int)uStack_110 >> 0x1f ^ 0xffffffffU);
      if (4 < (int)uVar2) {
        uVar2 = 5;
      }
      iVar12 = 0xf5749aa;
      FUN_109c60fbc(&UNK_10f5749aa,0x1a,&uStack_10c,uVar2);
      puStack_b8 = &UNK_10f574cf1;
      uStack_b0 = 0xf;
      uStack_a8 = CONCAT71(uStack_a8._1_7_,iVar11 == iVar12);
      pcStack_a0 = "new dimensions";
      uStack_98 = 0xe;
      FUN_10959b640(&puStack_b8);
      uVar2 = uStack_110;
      if ((puVar21 != &uStack_110) && (iVar11 == iVar12)) {
        if (uStack_110 != 0) {
          _memmove((long)plVar9 + 0xc,&uStack_10c,(long)(int)uStack_110 << 2);
        }
        *puVar21 = uVar2;
      }
      if ((*(ulong *)(param_1 + 0x20) & 1) != 0) {
        puVar22 = (ulong *)(*(ulong *)(param_1 + 0x20) + 7);
      }
      uVar16 = *puVar22;
      *(undefined4 *)((long)plStack_128 + 0x4c) = *(undefined4 *)(uVar16 + 0x70);
      *(undefined4 *)(plStack_128 + 10) = *(undefined4 *)(uVar16 + 0x68);
      func_0x000109c1e534(lVar13 + 0xa8,&plStack_128);
      FUN_109c3c254(param_1,lVar13);
      plVar9 = plStack_120;
      if (plStack_120 != (long *)0x0) {
        plVar1 = plStack_120 + 1;
        do {
          lVar18 = *plVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *plVar1 = lVar18 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plStack_120 + 0x10))(plStack_120);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      if (puStack_e0 != (undefined *)0x0) {
        uStack_d8 = SUB84(puStack_e0,0);
        uStack_d4 = (undefined4)((ulong)puStack_e0 >> 0x20);
LAB_109c42020:
        __ZdlPv();
      }
      goto LAB_109c42024;
    }
    if (*(int *)(param_1 + 0x194) == 1) {
      if ((*puVar22 & 1) != 0) {
        puVar22 = (ulong *)(*puVar22 + 7);
      }
      puVar15 = (undefined8 *)(*(ulong *)(*puVar22 + 0x50) & 0xfffffffffffffffc);
      lVar18 = (long)*(char *)((long)puVar15 + 0x17);
      if (lVar18 < 0) {
        lVar18 = puVar15[1];
        puVar15 = (undefined8 *)*puVar15;
      }
      plStack_128 = (long *)0x0;
      plStack_120 = (long *)0x0;
      uStack_118 = 0;
      FUN_109591c60(&plStack_128,puVar15,(long)puVar15 + lVar18,
                    ((long)puVar15 + lVar18) - (long)puVar15);
      ppuVar4 = &PTR_PTR_1132ec9b0;
      if (*(undefined ***)(param_1 + 0x110) != (undefined **)0x0) {
        ppuVar4 = *(undefined ***)(param_1 + 0x110);
      }
      FUN_109c1acf8(&puStack_b8,*param_2,&uStack_f8,ppuVar4[4],
                    (long)*(int *)(ppuVar4 + 3) & 0x3fffffffffffffff,&plStack_128);
      puVar14 = puStack_b8;
      *(undefined4 *)(puStack_b8 + 0x3c) = 1;
      FUN_109c11f88(puStack_b8);
      puVar21 = (uint *)(puVar14 + 8);
      uVar2 = *puVar21 & ((int)*puVar21 >> 0x1f ^ 0xffffffffU);
      if (4 < (int)uVar2) {
        uVar2 = 5;
      }
      iVar11 = 0xf5749aa;
      FUN_109c60fbc(&UNK_10f5749aa,0x1a,puVar14 + 0xc,uVar2);
      uVar2 = uStack_110 & ((int)uStack_110 >> 0x1f ^ 0xffffffffU);
      if (4 < (int)uVar2) {
        uVar2 = 5;
      }
      iVar12 = 0xf5749aa;
      FUN_109c60fbc(&UNK_10f5749aa,0x1a,&uStack_10c,uVar2);
      puStack_e0 = &UNK_10f574cf1;
      uStack_d8 = 0xf;
      uStack_d4 = 0;
      uStack_d0 = CONCAT31(uStack_d0._1_3_,iVar11 == iVar12);
      puStack_c8 = &UNK_10f574d01;
      uStack_c0 = 0xe;
      FUN_10959b640(&puStack_e0);
      uVar2 = uStack_110;
      if ((puVar21 != &uStack_110) && (iVar11 == iVar12)) {
        if (uStack_110 != 0) {
          _memmove(puVar14 + 0xc,&uStack_10c,(long)(int)uStack_110 << 2);
        }
        *puVar21 = uVar2;
      }
      FUN_109c18570(&puStack_e0,&puStack_b8);
      func_0x000109c1e534(lVar13 + 0xa8,&puStack_e0);
      plVar9 = (long *)CONCAT44(uStack_d4,uStack_d8);
      if (plVar9 != (long *)0x0) {
        plVar1 = plVar9 + 1;
        do {
          lVar18 = *plVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *plVar1 = lVar18 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      FUN_109c180ec(&puStack_b8);
      if (plStack_128 != (long *)0x0) {
        plStack_120 = plStack_128;
        goto LAB_109c42020;
      }
      goto LAB_109c42024;
    }
  }
  puVar14 = &UNK_10f5a51a7;
LAB_109c42068:
  func_0x000105688514(puVar14);
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x109c42070);
  (*pcVar10)();
}



/* Entry: 109c4216c; end: 109c42acf;  */

long FUN_109c4216c(ulong param_1,undefined8 *param_2)

{
  long *plVar1;
  uint uVar2;
  ulong *puVar3;
  undefined **ppuVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  bool bVar8;
  long *plVar9;
  code *pcVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  uint *puVar21;
  ulong *puVar22;
  long *plStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  uint uStack_120;
  int iStack_11c;
  undefined4 uStack_118;
  undefined8 uStack_114;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  undefined4 uStack_100;
  int iStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  undefined *puStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  char *pcStack_b0;
  undefined8 uStack_a8;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_c8 = &UNK_10f5a521d;
  uStack_c0 = 0x1e;
  pcStack_b0 = "";
  uStack_a8 = 0;
  uStack_b8 = param_1;
  FUN_109c3ca80(&puStack_c8,&UNK_10f5a523c,0xb);
  FUN_109c3cb24(&puStack_c8,1);
  lVar13 = 0x170;
  __Znwm();
  FUN_109c2c744();
  puVar22 = (ulong *)(param_1 + 0x20);
  uVar16 = *puVar22;
  uVar5 = *(undefined4 *)(param_1 + 0x11c);
  uVar6 = *(undefined4 *)(param_1 + 0x120);
  *(undefined4 *)(lVar13 + 0x94) = uVar6;
  *(undefined4 *)(lVar13 + 0x98) = uVar6;
  *(undefined4 *)(lVar13 + 0x9c) = *(undefined4 *)(param_1 + 0x1d4);
  *(undefined4 *)(lVar13 + 0x120) = uVar5;
  puVar3 = puVar22;
  if ((uVar16 & 1) != 0) {
    puVar3 = (ulong *)(uVar16 + 7);
  }
  uVar16 = *puVar3;
  uVar5 = *(undefined4 *)(uVar16 + 0x58);
  iStack_fc = *(int *)(uVar16 + 0x60);
  iStack_f8 = *(int *)(uVar16 + 100);
  uStack_108 = 0x100000004;
  uStack_f4 = 0;
  iStack_11c = iStack_fc * iStack_f8;
  uStack_114 = 0;
  uStack_10c = 0;
  uStack_120 = 2;
  iVar11 = 0xf5749aa;
  uStack_118 = uVar5;
  uStack_100 = uVar5;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,(ulong)&uStack_108 | 4,4);
  uVar2 = uStack_120 & ((int)uStack_120 >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar2) {
    uVar2 = 5;
  }
  iVar12 = 0xf5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,&iStack_11c,uVar2);
  if (iVar11 != iVar12) {
    puVar14 = &UNK_10f5a5248;
    goto LAB_109c429cc;
  }
  iVar11 = *(int *)(param_1 + 0x28);
  *(bool *)(lVar13 + 0xe8) = 1 < iVar11;
  if (1 < iVar11) {
    puStack_c8 = &UNK_10f5a5a89;
    uStack_c0 = 10;
    pcStack_b0 = "";
    uStack_a8 = 0;
    uStack_b8 = param_1;
    FUN_109c3cb24(&puStack_c8,2);
    puStack_c8 = &UNK_10f5a5a89;
    uStack_c0 = 10;
    uStack_b8 = CONCAT44(uStack_b8._4_4_,uVar5);
    pcStack_b0 = "count";
    uStack_a8 = 5;
    FUN_109c14834(&puStack_c8);
    uStack_dc = 0;
    puStack_f0 = (undefined *)0x100000004;
    uStack_e4 = 1;
    uStack_e0 = 1;
    plStack_138 = (long *)0x0;
    plStack_130 = (long *)0x0;
    puVar3 = puVar22;
    if ((*puVar22 & 1) != 0) {
      puVar3 = (ulong *)(*puVar22 + 0xf);
    }
    uVar16 = *puVar3;
    if ((*(byte *)(uVar16 + 0x10) & 1) == 0) {
      uStack_e8 = uVar5;
      FUN_109c19dfc(&puStack_c8,*param_2,&puStack_f0,*(undefined8 *)(uVar16 + 0x20),
                    ((long)*(int *)(uVar16 + 0x18) & 0x3fffffffffffffffU) << 1);
      func_0x000109c18360(&plStack_138,&puStack_c8);
      FUN_109c180ec(&puStack_c8);
    }
    else {
      puVar17 = (undefined8 *)(*(ulong *)(uVar16 + 0x50) & 0xfffffffffffffffc);
      puVar15 = (undefined8 *)*puVar17;
      uVar16 = puVar17[1];
      if (-1 < (char)*(byte *)((long)puVar17 + 0x17)) {
        puVar15 = puVar17;
        uVar16 = (ulong)*(byte *)((long)puVar17 + 0x17);
      }
      uStack_e8 = uVar5;
      FUN_109c1a57c(&puStack_c8,*param_2,&puStack_f0,puVar15,uVar16,4);
      func_0x000109c18360(&plStack_138,&puStack_c8);
      FUN_109c180ec(&puStack_c8);
      puVar3 = puVar22;
      if ((*puVar22 & 1) != 0) {
        puVar3 = (ulong *)(*puVar22 + 0xf);
      }
      uVar16 = *puVar3;
      *(undefined4 *)((long)plStack_138 + 0x4c) = *(undefined4 *)(uVar16 + 0x70);
      *(undefined4 *)(plStack_138 + 10) = *(undefined4 *)(uVar16 + 0x68);
    }
    func_0x000109c1e534(lVar13 + 0xf0,&plStack_138);
    plVar9 = plStack_130;
    if (plStack_130 != (long *)0x0) {
      plVar1 = plStack_130 + 1;
      do {
        lVar18 = *plVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = lVar18 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*plStack_130 + 0x10))(plStack_130);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
  }
  if ((*(byte *)(param_1 + 0x1a4) & 1) == 0) {
    if ((*puVar22 & 1) != 0) {
      puVar22 = (ulong *)(*puVar22 + 7);
    }
    FUN_109c19dfc(&puStack_c8,*param_2,&uStack_108,*(undefined8 *)(*puVar22 + 0x20),
                  ((long)*(int *)(*puVar22 + 0x18) & 0x3fffffffffffffffU) << 1);
    FUN_109c18570(&puStack_f0,&puStack_c8);
    FUN_109c180ec(&puStack_c8);
    *(undefined4 *)(puStack_f0 + 0x3c) = 1;
    FUN_109c11f88();
    puVar14 = puStack_f0;
    puVar21 = (uint *)(puStack_f0 + 8);
    uVar2 = *puVar21 & ((int)*puVar21 >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar2) {
      uVar2 = 5;
    }
    iVar11 = 0xf5749aa;
    FUN_109c60fbc(&UNK_10f5749aa,0x1a,puStack_f0 + 0xc,uVar2);
    uVar2 = uStack_120 & ((int)uStack_120 >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar2) {
      uVar2 = 5;
    }
    iVar12 = 0xf5749aa;
    FUN_109c60fbc(&UNK_10f5749aa,0x1a,&iStack_11c,uVar2);
    puStack_c8 = &UNK_10f574cf1;
    uStack_c0 = 0xf;
    uStack_b8 = CONCAT71(uStack_b8._1_7_,iVar11 == iVar12);
    pcStack_b0 = "new dimensions";
    uStack_a8 = 0xe;
    FUN_10959b640(&puStack_c8);
    uVar2 = uStack_120;
    if ((puVar21 != &uStack_120) && (iVar11 == iVar12)) {
      if (uStack_120 != 0) {
        _memmove(puVar14 + 0xc,&iStack_11c,(long)(int)uStack_120 << 2);
      }
      *puVar21 = uVar2;
    }
    func_0x000109c1e534(lVar13 + 0xa8,&puStack_f0);
    plVar9 = (long *)CONCAT44(uStack_e4,uStack_e8);
    if (plVar9 != (long *)0x0) {
      plVar1 = plVar9 + 1;
      do {
        lVar18 = *plVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = lVar18 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
LAB_109c42984:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
      return lVar13;
    }
    ___stack_chk_fail();
  }
  else {
    if (*(int *)(param_1 + 0x194) == 2) {
      uVar20 = *puVar22;
      uVar16 = uVar20 & 1;
      puVar3 = puVar22;
      if (uVar16 != 0) {
        puVar3 = (ulong *)(uVar20 + 7);
      }
      uVar19 = *puVar3;
      if (*(char *)(uVar19 + 0x6c) == '\x01') {
        uStack_dc = 0;
        puStack_f0 = (undefined *)0x100000004;
        uStack_e4 = 1;
        uStack_e0 = 1;
        uStack_e8 = uVar5;
        FUN_109c19c88(&puStack_c8,*param_2,&puStack_f0,*(undefined8 *)(uVar19 + 0x20),
                      (long)*(int *)(uVar19 + 0x18) & 0x3fffffffffffffff);
        FUN_109c18570(&plStack_138,&puStack_c8);
        FUN_109c180ec(&puStack_c8);
        func_0x000109c1e534(lVar13 + 0x110,&plStack_138);
        plVar9 = plStack_130;
        *(undefined1 *)(lVar13 + 0x10d) = 1;
        if (plStack_130 != (long *)0x0) {
          plVar1 = plStack_130 + 1;
          do {
            lVar18 = *plVar1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar8) {
              *plVar1 = lVar18 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar18 == 0) {
            (**(code **)(*plStack_130 + 0x10))(plStack_130);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
          }
        }
        uVar20 = *puVar22;
        uVar16 = uVar20 & 1;
      }
      puVar3 = puVar22;
      if (uVar16 != 0) {
        puVar3 = (ulong *)(uVar20 + 7);
      }
      uStack_b8 = *puVar3;
      puStack_c8 = &UNK_10f5a521d;
      uStack_c0 = 0x1e;
      pcStack_b0 = "weights blob";
      uStack_a8 = 0xc;
      uVar2 = (uint)uStack_108 & ((int)(uint)uStack_108 >> 0x1f ^ 0xffffffffU);
      if (4 < (int)uVar2) {
        uVar2 = 5;
      }
      iVar11 = 0xf5749aa;
      FUN_109c60fbc(&UNK_10f5749aa,0x1a,(ulong)&uStack_108 | 4,uVar2);
      FUN_109c3cec0(&puStack_c8,(long)iVar11);
      puVar3 = puVar22;
      if ((*puVar22 & 1) != 0) {
        puVar3 = (ulong *)(*puVar22 + 7);
      }
      puVar15 = (undefined8 *)(*(ulong *)(*puVar3 + 0x50) & 0xfffffffffffffffc);
      lVar18 = (long)*(char *)((long)puVar15 + 0x17);
      if (lVar18 < 0) {
        lVar18 = puVar15[1];
        puVar15 = (undefined8 *)*puVar15;
      }
      puStack_f0 = (undefined *)0x0;
      uStack_e8 = 0;
      uStack_e4 = 0;
      uStack_e0 = 0;
      uStack_dc = 0;
      FUN_109591c60(&puStack_f0,puVar15,(long)puVar15 + lVar18,
                    ((long)puVar15 + lVar18) - (long)puVar15);
      FUN_109c19fac(&puStack_c8,*param_2,&uStack_108,puStack_f0,
                    CONCAT44(uStack_e4,uStack_e8) - (long)puStack_f0);
      FUN_109c18570(&plStack_138,&puStack_c8);
      FUN_109c180ec(&puStack_c8);
      *(undefined4 *)((long)plStack_138 + 0x3c) = 1;
      if ((*(ulong *)(param_1 + 0x20) & 1) != 0) {
        puVar22 = (ulong *)(*(ulong *)(param_1 + 0x20) + 7);
      }
      uVar16 = *puVar22;
      *(undefined4 *)((long)plStack_138 + 0x4c) = *(undefined4 *)(uVar16 + 0x70);
      *(undefined4 *)(plStack_138 + 10) = *(undefined4 *)(uVar16 + 0x68);
      func_0x000109c1e534(lVar13 + 0xa8,&plStack_138);
      FUN_109c3c254(param_1,lVar13);
      plVar9 = plStack_130;
      if (plStack_130 != (long *)0x0) {
        plVar1 = plStack_130 + 1;
        do {
          lVar18 = *plVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *plVar1 = lVar18 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plStack_130 + 0x10))(plStack_130);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      if (puStack_f0 != (undefined *)0x0) {
        uStack_e8 = SUB84(puStack_f0,0);
        uStack_e4 = (undefined4)((ulong)puStack_f0 >> 0x20);
LAB_109c42980:
        __ZdlPv();
      }
      goto LAB_109c42984;
    }
    if (*(int *)(param_1 + 0x194) == 1) {
      if ((*puVar22 & 1) != 0) {
        puVar22 = (ulong *)(*puVar22 + 7);
      }
      puVar15 = (undefined8 *)(*(ulong *)(*puVar22 + 0x50) & 0xfffffffffffffffc);
      lVar18 = (long)*(char *)((long)puVar15 + 0x17);
      if (lVar18 < 0) {
        lVar18 = puVar15[1];
        puVar15 = (undefined8 *)*puVar15;
      }
      plStack_138 = (long *)0x0;
      plStack_130 = (long *)0x0;
      uStack_128 = 0;
      FUN_109591c60(&plStack_138,puVar15,(long)puVar15 + lVar18,
                    ((long)puVar15 + lVar18) - (long)puVar15);
      ppuVar4 = &PTR_PTR_1132ec9b0;
      if (*(undefined ***)(param_1 + 0x110) != (undefined **)0x0) {
        ppuVar4 = *(undefined ***)(param_1 + 0x110);
      }
      FUN_109c1acf8(&puStack_c8,*param_2,&uStack_108,ppuVar4[4],
                    (long)*(int *)(ppuVar4 + 3) & 0x3fffffffffffffff,&plStack_138);
      puVar14 = puStack_c8;
      *(undefined4 *)(puStack_c8 + 0x3c) = 1;
      FUN_109c11f88(puStack_c8);
      puVar21 = (uint *)(puVar14 + 8);
      uVar2 = *puVar21 & ((int)*puVar21 >> 0x1f ^ 0xffffffffU);
      if (4 < (int)uVar2) {
        uVar2 = 5;
      }
      iVar11 = 0xf5749aa;
      FUN_109c60fbc(&UNK_10f5749aa,0x1a,puVar14 + 0xc,uVar2);
      uVar2 = uStack_120 & ((int)uStack_120 >> 0x1f ^ 0xffffffffU);
      if (4 < (int)uVar2) {
        uVar2 = 5;
      }
      iVar12 = 0xf5749aa;
      FUN_109c60fbc(&UNK_10f5749aa,0x1a,&iStack_11c,uVar2);
      puStack_f0 = &UNK_10f574cf1;
      uStack_e8 = 0xf;
      uStack_e4 = 0;
      uStack_e0 = CONCAT31(uStack_e0._1_3_,iVar11 == iVar12);
      puStack_d8 = &UNK_10f574d01;
      uStack_d0 = 0xe;
      FUN_10959b640(&puStack_f0);
      uVar2 = uStack_120;
      if ((puVar21 != &uStack_120) && (iVar11 == iVar12)) {
        if (uStack_120 != 0) {
          _memmove(puVar14 + 0xc,&iStack_11c,(long)(int)uStack_120 << 2);
        }
        *puVar21 = uVar2;
      }
      FUN_109c18570(&puStack_f0,&puStack_c8);
      func_0x000109c1e534(lVar13 + 0xa8,&puStack_f0);
      plVar9 = (long *)CONCAT44(uStack_e4,uStack_e8);
      if (plVar9 != (long *)0x0) {
        plVar1 = plVar9 + 1;
        do {
          lVar18 = *plVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *plVar1 = lVar18 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      FUN_109c180ec(&puStack_c8);
      if (plStack_138 != (long *)0x0) {
        plStack_130 = plStack_138;
        goto LAB_109c42980;
      }
      goto LAB_109c42984;
    }
  }
  puVar14 = &UNK_10f5a527d;
LAB_109c429cc:
  func_0x000105688514(puVar14);
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x109c429d4);
  (*pcVar10)();
}



/* Entry: 109c42ad0; end: 109c42b6f;  */

undefined8 FUN_109c42ad0(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  
  puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x100) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar2 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_40,*puVar2,puVar2[1]);
  }
  else {
    uStack_38 = puVar2[1];
    uStack_40 = *puVar2;
    lStack_30 = puVar2[2];
  }
  uVar1 = 0x90;
  __Znwm(0x90);
  FUN_109c5e0ec();
  if (lStack_30 < 0) {
    __ZdlPv(uStack_40);
  }
  return uVar1;
}



/* Entry: 109c42b70; end: 109c42d5f;  */

long FUN_109c42b70(long param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong *puVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined1 auStack_a8 [8];
  long *plStack_a0;
  undefined4 uStack_98;
  int iStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  long lStack_70;
  char *pcStack_68;
  undefined8 uStack_60;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_80 = &UNK_10f5a52fd;
  uStack_78 = 0x18;
  pcStack_68 = "";
  uStack_60 = 0;
  lStack_70 = param_1;
  FUN_109c3ca80(&puStack_80,&UNK_10f5a5316,5);
  FUN_109c3cb24(&puStack_80,1);
  lVar7 = 0xb8;
  __Znwm();
  FUN_109c53e38();
  uVar8 = *(ulong *)(param_1 + 0x20);
  puVar2 = (ulong *)(param_1 + 0x20);
  if ((uVar8 & 1) != 0) {
    puVar2 = (ulong *)(uVar8 + 7);
  }
  iVar3 = *(int *)(*puVar2 + 0x18);
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_98 = 1;
  iStack_94 = iVar3;
  FUN_109c19c88(&puStack_80,*param_2,&uStack_98,*(undefined8 *)(*puVar2 + 0x20),
                (long)iVar3 & 0x3fffffffffffffff);
  FUN_109c18570(auStack_a8,&puStack_80);
  FUN_109c180ec(&puStack_80);
  func_0x000109c1e534(lVar7 + 0x90,auStack_a8);
  *(int *)(lVar7 + 0xa0) = iVar3;
  if (*(char *)(param_1 + 0x1a4) == '\x01') {
    if (*(int *)(param_1 + 0x194) == 2) {
      if (iVar3 != 1) {
        func_0x000105688514(&UNK_10f5a531c);
        goto LAB_109c42d04;
      }
      FUN_109c3c254(param_1,lVar7);
      goto LAB_109c42c7c;
    }
  }
  else {
LAB_109c42c7c:
    if (plStack_a0 != (long *)0x0) {
      plVar1 = plStack_a0 + 1;
      do {
        lVar9 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a0);
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return lVar7;
    }
    ___stack_chk_fail();
  }
  func_0x000105688514(&UNK_10f5a5962);
LAB_109c42d04:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x109c42d08);
  (*pcVar6)();
}



/* Entry: 109c42d60; end: 109c42e6f;  */

long FUN_109c42d60(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  
  puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x100) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar2 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_40,*puVar2,puVar2[1]);
  }
  else {
    uStack_38 = puVar2[1];
    uStack_40 = *puVar2;
    lStack_30 = puVar2[2];
  }
  lVar1 = 0xa8;
  __Znwm(0xa8);
  FUN_109c5e294();
  FUN_10925b8c4(&lStack_58,(long)*(int *)(param_1 + 0x48));
  if (*(int *)(param_1 + 0x48) != 0) {
    _memmove(lStack_58,*(undefined8 *)(param_1 + 0x50),(long)*(int *)(param_1 + 0x48) << 2);
  }
  FUN_10928555c(lVar1 + 0x90,lStack_58,lStack_50,lStack_50 - lStack_58 >> 2);
  if (lStack_58 != 0) {
    lStack_50 = lStack_58;
    __ZdlPv();
  }
  if (lStack_30 < 0) {
    __ZdlPv(uStack_40);
  }
  return lVar1;
}



/* Entry: 109c42e70; end: 109c42f9f;  */

long * FUN_109c42e70(long param_1)

{
  code *pcVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  
  puVar3 = (undefined8 *)(*(ulong *)(param_1 + 0x100) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar3 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_40,*puVar3,puVar3[1]);
  }
  else {
    uStack_38 = puVar3[1];
    uStack_40 = *puVar3;
    lStack_30 = puVar3[2];
  }
  plVar2 = (long *)0xd0;
  __Znwm();
  FUN_109c5f9dc();
  if (*(int *)(param_1 + 0x48) == 2) {
    plVar2[0x12] = **(long **)(param_1 + 0x50);
    *(undefined1 *)(plVar2 + 0x13) = 1;
  }
  else {
    if (((*(int *)(param_1 + 0x98) != 4) || (*(int *)(param_1 + 0xa8) != 4)) ||
       (*(int *)(param_1 + 0xb8) != 4)) {
      (**(code **)(*plVar2 + 8))(plVar2);
      func_0x000105688514(&UNK_10f5a53a5);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x109c42f74);
      (*pcVar1)();
    }
    uVar4 = **(undefined8 **)(param_1 + 0xa0);
    *(undefined8 *)((long)plVar2 + 0xa4) = (*(undefined8 **)(param_1 + 0xa0))[1];
    *(undefined8 *)((long)plVar2 + 0x9c) = uVar4;
    uVar4 = **(undefined8 **)(param_1 + 0xb0);
    *(undefined8 *)((long)plVar2 + 0xb4) = (*(undefined8 **)(param_1 + 0xb0))[1];
    *(undefined8 *)((long)plVar2 + 0xac) = uVar4;
    uVar4 = **(undefined8 **)(param_1 + 0xc0);
    *(undefined8 *)((long)plVar2 + 0xc4) = (*(undefined8 **)(param_1 + 0xc0))[1];
    *(undefined8 *)((long)plVar2 + 0xbc) = uVar4;
  }
  if (lStack_30 < 0) {
    __ZdlPv(uStack_40);
  }
  return plVar2;
}



/* Entry: 109c42fa0; end: 109c4303f;  */

undefined8 * FUN_109c42fa0(long param_1)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 auStack_128 [2];
  char cStack_111;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  ulong uStack_f0;
  undefined *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined1 **ppuStack_d0;
  code *pcStack_c8;
  undefined8 auStack_b8 [2];
  char cStack_a1;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  uVar1 = *(uint *)(param_1 + 0x14);
  lVar3 = 0xb0;
  __Znwm();
  if ((uVar1 >> 0x1a & 1) == 0) {
    FUN_109c4a5ec(0,lVar3);
  }
  else {
    FUN_109c4a5ec(*(undefined4 *)(param_1 + 0x1e0),lVar3);
  }
  if (*(char *)(param_1 + 0x1a4) != '\x01') {
LAB_109c43008:
    return (undefined8 *)(lVar3 + 8);
  }
  if (*(int *)(param_1 + 0x194) == 2) {
    FUN_109c3c254(param_1,lVar3 + 8);
    goto LAB_109c43008;
  }
  puVar4 = &UNK_10f5a5962;
  func_0x000105688514();
  __ZdlPv(lVar3);
  __Unwind_Resume();
  pcStack_38 = FUN_109c43040;
  uVar1 = *(uint *)(puVar4 + 0x14);
  fVar10 = *(float *)(puVar4 + 0x1e0);
  fVar12 = fVar10;
  if ((uVar1 & 0x4000000) == 0) {
    fVar12 = 0.0;
  }
  fVar11 = 6.0;
  if ((uVar1 & 0x8000000) != 0) {
    fVar11 = *(float *)(puVar4 + 0x1e4);
  }
  puVar5 = (undefined8 *)0xb8;
  puStack_40 = &stack0xfffffffffffffff0;
  __Znwm();
  puVar8 = puVar5 + 1;
  *puVar8 = &PTR_FUN_110b2d158;
  puVar5[3] = 0;
  puVar5[2] = 0;
  puVar5[5] = 0;
  puVar5[4] = 0;
  puVar5[7] = 0;
  puVar5[6] = 0;
  puVar5[9] = 0;
  puVar5[8] = 0;
  puVar5[0xb] = 0;
  puVar5[10] = 0;
  *(undefined8 *)((long)puVar5 + 0x61) = 0;
  *(undefined8 *)((long)puVar5 + 0x59) = 0;
  *(undefined2 *)((long)puVar5 + 0x69) = 1;
  *(undefined1 *)((long)puVar5 + 0x6b) = 0;
  puVar5[0xe] = 0;
  puVar5[0xf] = 0;
  puVar5[0x10] = 0x3f800000;
  *(undefined1 *)(puVar5 + 0x11) = 0;
  *(undefined1 *)((long)puVar5 + 0x8c) = 0;
  *(undefined1 *)(puVar5 + 0x12) = 0;
  *(undefined1 *)((long)puVar5 + 0x94) = 0;
  *puVar5 = &PTR_FUN_110b2d130;
  *(float *)(puVar5 + 0x13) = fVar12;
  *(float *)((long)puVar5 + 0x9c) = fVar11;
  *(undefined4 *)(puVar5 + 0x14) = 0;
  puVar5[0x15] = 0;
  puVar5[0x16] = 0;
  func_0x000107c31940(auStack_b8,PTR_DAT_1132edb28);
  puVar6 = auStack_b8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (puVar6,0,&UNK_10f5a582c,7);
  uStack_98 = puVar6[1];
  uStack_a0 = *puVar6;
  lStack_90 = puVar6[2];
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar5 + 7,&uStack_a0);
  if (lStack_90 < 0) {
    __ZdlPv(uStack_a0);
  }
  if (cStack_a1 < '\0') {
    __ZdlPv(auStack_b8[0]);
  }
  *(undefined1 *)((long)puVar5 + 0x6b) = 1;
  if (puVar4[0x1a4] != '\x01') {
    return puVar8;
  }
  if ((((uVar1 >> 0x1a & 1) != 0) && (1e-06 < ABS(fVar10))) || (1e-06 < ABS(fVar11 + -6.0))) {
    func_0x000105688514(&UNK_10f5a5403);
  }
  else if (*(int *)(puVar4 + 0x194) == 2) {
    FUN_109c3c254(puVar4,puVar8);
    return puVar8;
  }
  puVar4 = &UNK_10f5a5962;
  func_0x000105688514();
  if (lStack_90 < 0) {
    __ZdlPv(uStack_a0);
  }
  if (cStack_a1 < '\0') {
    __ZdlPv(auStack_b8[0]);
  }
  FUN_109c21610(puVar8);
  __ZdlPv(puVar5);
  puVar7 = puVar4;
  __Unwind_Resume();
  pcStack_c8 = FUN_109c4323c;
  uStack_f0 = (ulong)uVar1;
  puStack_e8 = puVar4;
  puStack_e0 = puVar5;
  puStack_d8 = puVar8;
  ppuStack_d0 = &puStack_40;
  if (*(int *)(puVar7 + 0xe8) < 1) {
    uVar9 = 0xffffffff;
  }
  else {
    if (*(int *)(puVar7 + 0xe8) != 1) {
      func_0x000105688514(&UNK_10f5a5451);
      goto LAB_109c433a8;
    }
    uVar9 = **(undefined4 **)(puVar7 + 0xf0);
  }
  puVar5 = (undefined8 *)0x4b8;
  __Znwm();
  puVar8 = puVar5 + 1;
  *puVar8 = &PTR_FUN_110b2d1e0;
  puVar5[3] = 0;
  puVar5[2] = 0;
  puVar5[5] = 0;
  puVar5[4] = 0;
  puVar5[7] = 0;
  puVar5[6] = 0;
  puVar5[9] = 0;
  puVar5[8] = 0;
  puVar5[0xb] = 0;
  puVar5[10] = 0;
  *(undefined8 *)((long)puVar5 + 0x61) = 0;
  *(undefined8 *)((long)puVar5 + 0x59) = 0;
  *(undefined2 *)((long)puVar5 + 0x69) = 1;
  *(undefined1 *)((long)puVar5 + 0x6b) = 0;
  puVar5[0xf] = 0;
  puVar5[0xe] = 0;
  puVar5[0x10] = 0x3f800000;
  *(undefined1 *)(puVar5 + 0x11) = 0;
  *(undefined1 *)((long)puVar5 + 0x8c) = 0;
  *(undefined1 *)(puVar5 + 0x12) = 0;
  *(undefined1 *)((long)puVar5 + 0x94) = 0;
  *puVar5 = &PTR_FUN_110b2d1b8;
  *(undefined1 *)(puVar5 + 0x13) = 0;
  *(undefined1 *)(puVar5 + 0x93) = 0;
  *(undefined4 *)((long)puVar5 + 0x49c) = uVar9;
  *(undefined4 *)(puVar5 + 0x94) = 0;
  puVar5[0x96] = 0;
  puVar5[0x95] = 0;
  func_0x000107c31940(auStack_128,PTR_DAT_1132edb40);
  puVar6 = auStack_128;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (puVar6,0,&UNK_10f5a582c,7);
  uStack_108 = puVar6[1];
  uStack_110 = *puVar6;
  lStack_100 = puVar6[2];
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar5 + 7,&uStack_110);
  if (lStack_100 < 0) {
    __ZdlPv(uStack_110);
  }
  if (cStack_111 < '\0') {
    __ZdlPv(auStack_128[0]);
  }
  *(undefined1 *)((long)puVar5 + 0x6b) = 1;
  if (puVar7[0x1a4] == '\x01') {
    if (*(int *)(puVar7 + 0x194) != 2) {
LAB_109c433a8:
      func_0x000105688514(&UNK_10f5a5962);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x109c433b8);
      (*pcVar2)();
    }
    FUN_109c3c254(puVar7,puVar8);
  }
  return puVar8;
}



/* Entry: 109c43040; end: 109c4323b;  */

undefined8 * FUN_109c43040(long param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  ulong uStack_c0;
  undefined *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined8 auStack_88 [2];
  char cStack_71;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  
  uVar1 = *(uint *)(param_1 + 0x14);
  fVar9 = *(float *)(param_1 + 0x1e0);
  fVar11 = fVar9;
  if ((uVar1 & 0x4000000) == 0) {
    fVar11 = 0.0;
  }
  fVar10 = 6.0;
  if ((uVar1 & 0x8000000) != 0) {
    fVar10 = *(float *)(param_1 + 0x1e4);
  }
  puVar3 = (undefined8 *)0xb8;
  __Znwm();
  puVar7 = puVar3 + 1;
  *puVar7 = &PTR_FUN_110b2d158;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
  puVar3[7] = 0;
  puVar3[6] = 0;
  puVar3[9] = 0;
  puVar3[8] = 0;
  puVar3[0xb] = 0;
  puVar3[10] = 0;
  *(undefined8 *)((long)puVar3 + 0x61) = 0;
  *(undefined8 *)((long)puVar3 + 0x59) = 0;
  *(undefined2 *)((long)puVar3 + 0x69) = 1;
  *(undefined1 *)((long)puVar3 + 0x6b) = 0;
  puVar3[0xe] = 0;
  puVar3[0xf] = 0;
  puVar3[0x10] = 0x3f800000;
  *(undefined1 *)(puVar3 + 0x11) = 0;
  *(undefined1 *)((long)puVar3 + 0x8c) = 0;
  *(undefined1 *)(puVar3 + 0x12) = 0;
  *(undefined1 *)((long)puVar3 + 0x94) = 0;
  *puVar3 = &PTR_FUN_110b2d130;
  *(float *)(puVar3 + 0x13) = fVar11;
  *(float *)((long)puVar3 + 0x9c) = fVar10;
  *(undefined4 *)(puVar3 + 0x14) = 0;
  puVar3[0x15] = 0;
  puVar3[0x16] = 0;
  func_0x000107c31940(auStack_88,PTR_DAT_1132edb28);
  puVar4 = auStack_88;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (puVar4,0,&UNK_10f5a582c,7);
  uStack_68 = puVar4[1];
  uStack_70 = *puVar4;
  lStack_60 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar3 + 7,&uStack_70);
  if (lStack_60 < 0) {
    __ZdlPv(uStack_70);
  }
  if (cStack_71 < '\0') {
    __ZdlPv(auStack_88[0]);
  }
  *(undefined1 *)((long)puVar3 + 0x6b) = 1;
  if (*(char *)(param_1 + 0x1a4) != '\x01') {
    return puVar7;
  }
  if ((((uVar1 >> 0x1a & 1) != 0) && (1e-06 < ABS(fVar9))) || (1e-06 < ABS(fVar10 + -6.0))) {
    func_0x000105688514(&UNK_10f5a5403);
  }
  else if (*(int *)(param_1 + 0x194) == 2) {
    FUN_109c3c254(param_1,puVar7);
    return puVar7;
  }
  puVar5 = &UNK_10f5a5962;
  func_0x000105688514();
  if (lStack_60 < 0) {
    __ZdlPv(uStack_70);
  }
  if (cStack_71 < '\0') {
    __ZdlPv(auStack_88[0]);
  }
  FUN_109c21610(puVar7);
  __ZdlPv(puVar3);
  puVar6 = puVar5;
  __Unwind_Resume();
  pcStack_98 = FUN_109c4323c;
  uStack_c0 = (ulong)uVar1;
  puStack_b8 = puVar5;
  puStack_b0 = puVar3;
  puStack_a8 = puVar7;
  puStack_a0 = &stack0xfffffffffffffff0;
  if (*(int *)(puVar6 + 0xe8) < 1) {
    uVar8 = 0xffffffff;
  }
  else {
    if (*(int *)(puVar6 + 0xe8) != 1) {
      func_0x000105688514(&UNK_10f5a5451);
      goto LAB_109c433a8;
    }
    uVar8 = **(undefined4 **)(puVar6 + 0xf0);
  }
  puVar3 = (undefined8 *)0x4b8;
  __Znwm();
  puVar7 = puVar3 + 1;
  *puVar7 = &PTR_FUN_110b2d1e0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
  puVar3[7] = 0;
  puVar3[6] = 0;
  puVar3[9] = 0;
  puVar3[8] = 0;
  puVar3[0xb] = 0;
  puVar3[10] = 0;
  *(undefined8 *)((long)puVar3 + 0x61) = 0;
  *(undefined8 *)((long)puVar3 + 0x59) = 0;
  *(undefined2 *)((long)puVar3 + 0x69) = 1;
  *(undefined1 *)((long)puVar3 + 0x6b) = 0;
  puVar3[0xf] = 0;
  puVar3[0xe] = 0;
  puVar3[0x10] = 0x3f800000;
  *(undefined1 *)(puVar3 + 0x11) = 0;
  *(undefined1 *)((long)puVar3 + 0x8c) = 0;
  *(undefined1 *)(puVar3 + 0x12) = 0;
  *(undefined1 *)((long)puVar3 + 0x94) = 0;
  *puVar3 = &PTR_FUN_110b2d1b8;
  *(undefined1 *)(puVar3 + 0x13) = 0;
  *(undefined1 *)(puVar3 + 0x93) = 0;
  *(undefined4 *)((long)puVar3 + 0x49c) = uVar8;
  *(undefined4 *)(puVar3 + 0x94) = 0;
  puVar3[0x96] = 0;
  puVar3[0x95] = 0;
  func_0x000107c31940(auStack_f8,PTR_DAT_1132edb40);
  puVar4 = auStack_f8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (puVar4,0,&UNK_10f5a582c,7);
  uStack_d8 = puVar4[1];
  uStack_e0 = *puVar4;
  lStack_d0 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar3 + 7,&uStack_e0);
  if (lStack_d0 < 0) {
    __ZdlPv(uStack_e0);
  }
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  *(undefined1 *)((long)puVar3 + 0x6b) = 1;
  if (puVar6[0x1a4] == '\x01') {
    if (*(int *)(puVar6 + 0x194) != 2) {
LAB_109c433a8:
      func_0x000105688514(&UNK_10f5a5962);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x109c433b8);
      (*pcVar2)();
    }
    FUN_109c3c254(puVar6,puVar7);
  }
  return puVar7;
}



/* Entry: 109c4323c; end: 109c4341f;  */

undefined8 * FUN_109c4323c(long param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  if (*(int *)(param_1 + 0xe8) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 0xe8) != 1) {
      func_0x000105688514(&UNK_10f5a5451);
      goto LAB_109c433a8;
    }
    uVar5 = **(undefined4 **)(param_1 + 0xf0);
  }
  puVar2 = (undefined8 *)0x4b8;
  __Znwm();
  puVar4 = puVar2 + 1;
  *puVar4 = &PTR_FUN_110b2d1e0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  puVar2[5] = 0;
  puVar2[4] = 0;
  puVar2[7] = 0;
  puVar2[6] = 0;
  puVar2[9] = 0;
  puVar2[8] = 0;
  puVar2[0xb] = 0;
  puVar2[10] = 0;
  *(undefined8 *)((long)puVar2 + 0x61) = 0;
  *(undefined8 *)((long)puVar2 + 0x59) = 0;
  *(undefined2 *)((long)puVar2 + 0x69) = 1;
  *(undefined1 *)((long)puVar2 + 0x6b) = 0;
  puVar2[0xf] = 0;
  puVar2[0xe] = 0;
  puVar2[0x10] = 0x3f800000;
  *(undefined1 *)(puVar2 + 0x11) = 0;
  *(undefined1 *)((long)puVar2 + 0x8c) = 0;
  *(undefined1 *)(puVar2 + 0x12) = 0;
  *(undefined1 *)((long)puVar2 + 0x94) = 0;
  *puVar2 = &PTR_FUN_110b2d1b8;
  *(undefined1 *)(puVar2 + 0x13) = 0;
  *(undefined1 *)(puVar2 + 0x93) = 0;
  *(undefined4 *)((long)puVar2 + 0x49c) = uVar5;
  *(undefined4 *)(puVar2 + 0x94) = 0;
  puVar2[0x96] = 0;
  puVar2[0x95] = 0;
  func_0x000107c31940(auStack_68,PTR_DAT_1132edb40);
  puVar3 = auStack_68;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (puVar3,0,&UNK_10f5a582c,7);
  uStack_48 = puVar3[1];
  uStack_50 = *puVar3;
  lStack_40 = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar2 + 7,&uStack_50);
  if (lStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  *(undefined1 *)((long)puVar2 + 0x6b) = 1;
  if (*(char *)(param_1 + 0x1a4) == '\x01') {
    if (*(int *)(param_1 + 0x194) != 2) {
LAB_109c433a8:
      func_0x000105688514(&UNK_10f5a5962);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x109c433b8);
      (*pcVar1)();
    }
    FUN_109c3c254(param_1,puVar4);
  }
  return puVar4;
}



/* Entry: 109c43420; end: 109c435ab;  */

undefined8 * FUN_109c43420(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  float fVar5;
  undefined8 auStack_d8 [2];
  char cStack_c1;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  puVar1 = (undefined8 *)0xb0;
  __Znwm();
  puVar4 = puVar1 + 1;
  *puVar4 = &PTR_FUN_110b2d268;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  *(undefined8 *)((long)puVar1 + 0x61) = 0;
  *(undefined8 *)((long)puVar1 + 0x59) = 0;
  *(undefined2 *)((long)puVar1 + 0x69) = 1;
  *(undefined1 *)((long)puVar1 + 0x6b) = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0x3f800000;
  *(undefined1 *)(puVar1 + 0x11) = 0;
  *(undefined1 *)((long)puVar1 + 0x8c) = 0;
  *(undefined1 *)(puVar1 + 0x12) = 0;
  *(undefined1 *)((long)puVar1 + 0x94) = 0;
  *puVar1 = &PTR_FUN_110b2d240;
  *(undefined8 *)((long)puVar1 + 0xa4) = 0;
  *(undefined8 *)((long)puVar1 + 0x9c) = 0;
  *(undefined4 *)((long)puVar1 + 0xac) = 0;
  func_0x000107c31940(auStack_68,PTR_DAT_1132edb30);
  puVar2 = auStack_68;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (puVar2,0,&UNK_10f5a582c,7);
  uStack_48 = puVar2[1];
  uStack_50 = *puVar2;
  lStack_40 = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar1 + 7,&uStack_50);
  if (lStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  *(undefined1 *)((long)puVar1 + 0x6b) = 1;
  if (*(char *)(param_1 + 0x1a4) == '\x01') {
    if (*(int *)(param_1 + 0x194) != 2) {
      puVar3 = &UNK_10f5a5962;
      func_0x000105688514();
      if (lStack_40 < 0) {
        __ZdlPv(uStack_50);
      }
      if (cStack_51 < '\0') {
        __ZdlPv(auStack_68[0]);
      }
      FUN_109c21610(puVar4);
      __ZdlPv(puVar1);
      __Unwind_Resume();
      puVar1 = (undefined8 *)0xb0;
      __Znwm();
      fVar5 = *(float *)(puVar3 + 0x1d8);
      puVar1[1] = &PTR_FUN_110b2d2f0;
      puVar1[3] = 0;
      puVar1[2] = 0;
      puVar1[5] = 0;
      puVar1[4] = 0;
      puVar1[7] = 0;
      puVar1[6] = 0;
      puVar1[9] = 0;
      puVar1[8] = 0;
      puVar1[0xb] = 0;
      puVar1[10] = 0;
      *(undefined8 *)((long)puVar1 + 0x61) = 0;
      *(undefined8 *)((long)puVar1 + 0x59) = 0;
      *(undefined2 *)((long)puVar1 + 0x69) = 1;
      *(undefined1 *)((long)puVar1 + 0x6b) = 0;
      puVar1[0xe] = 0;
      puVar1[0xf] = 0;
      puVar1[0x10] = 0x3f800000;
      *(undefined1 *)(puVar1 + 0x11) = 0;
      *(undefined1 *)((long)puVar1 + 0x8c) = 0;
      *(undefined1 *)(puVar1 + 0x12) = 0;
      *(undefined1 *)((long)puVar1 + 0x94) = 0;
      *puVar1 = &PTR_FUN_110b2d2c8;
      *(float *)(puVar1 + 0x13) = 1.0 - fVar5;
      *(undefined8 *)((long)puVar1 + 0xa4) = 0;
      *(undefined8 *)((long)puVar1 + 0x9c) = 0;
      *(undefined4 *)((long)puVar1 + 0xac) = 0;
      func_0x000107c31940(auStack_d8,PTR_DAT_1132edb18);
      puVar2 = auStack_d8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (puVar2,0,&UNK_10f5a582c,7);
      uStack_b8 = puVar2[1];
      uStack_c0 = *puVar2;
      lStack_b0 = puVar2[2];
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = 0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (puVar1 + 7,&uStack_c0);
      if (lStack_b0 < 0) {
        __ZdlPv(uStack_c0);
      }
      if (cStack_c1 < '\0') {
        __ZdlPv(auStack_d8[0]);
      }
      *(undefined1 *)((long)puVar1 + 0x6b) = 1;
      return puVar1 + 1;
    }
    FUN_109c3c254(param_1,puVar4);
  }
  return puVar4;
}



/* Entry: 109c435ac; end: 109c43717;  */

undefined8 * FUN_109c435ac(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float fVar3;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  puVar1 = (undefined8 *)0xb0;
  __Znwm();
  fVar3 = *(float *)(param_1 + 0x1d8);
  puVar1[1] = &PTR_FUN_110b2d2f0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  *(undefined8 *)((long)puVar1 + 0x61) = 0;
  *(undefined8 *)((long)puVar1 + 0x59) = 0;
  *(undefined2 *)((long)puVar1 + 0x69) = 1;
  *(undefined1 *)((long)puVar1 + 0x6b) = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0x3f800000;
  *(undefined1 *)(puVar1 + 0x11) = 0;
  *(undefined1 *)((long)puVar1 + 0x8c) = 0;
  *(undefined1 *)(puVar1 + 0x12) = 0;
  *(undefined1 *)((long)puVar1 + 0x94) = 0;
  *puVar1 = &PTR_FUN_110b2d2c8;
  *(float *)(puVar1 + 0x13) = 1.0 - fVar3;
  *(undefined8 *)((long)puVar1 + 0xa4) = 0;
  *(undefined8 *)((long)puVar1 + 0x9c) = 0;
  *(undefined4 *)((long)puVar1 + 0xac) = 0;
  func_0x000107c31940(auStack_68,PTR_DAT_1132edb18);
  puVar2 = auStack_68;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (puVar2,0,&UNK_10f5a582c,7);
  uStack_48 = puVar2[1];
  uStack_50 = *puVar2;
  lStack_40 = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar1 + 7,&uStack_50);
  if (lStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  *(undefined1 *)((long)puVar1 + 0x6b) = 1;
  return puVar1 + 1;
}



/* Entry: 109c43718; end: 109c4386f;  */

undefined8 * FUN_109c43718(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  puVar1 = (undefined8 *)0xb0;
  __Znwm();
  puVar1[1] = &PTR_FUN_110b2d378;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  *(undefined8 *)((long)puVar1 + 0x61) = 0;
  *(undefined8 *)((long)puVar1 + 0x59) = 0;
  *(undefined2 *)((long)puVar1 + 0x69) = 1;
  *(undefined1 *)((long)puVar1 + 0x6b) = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0x3f800000;
  *(undefined1 *)(puVar1 + 0x11) = 0;
  *(undefined1 *)((long)puVar1 + 0x8c) = 0;
  *(undefined1 *)(puVar1 + 0x12) = 0;
  *(undefined1 *)((long)puVar1 + 0x94) = 0;
  *puVar1 = &PTR_FUN_110b2d350;
  *(undefined8 *)((long)puVar1 + 0xa4) = 0;
  *(undefined8 *)((long)puVar1 + 0x9c) = 0;
  *(undefined4 *)((long)puVar1 + 0xac) = 0;
  func_0x000107c31940(auStack_68,PTR_DAT_1132edb48);
  puVar2 = auStack_68;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (puVar2,0,&UNK_10f5a582c,7);
  uStack_48 = puVar2[1];
  uStack_50 = *puVar2;
  lStack_40 = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar1 + 7,&uStack_50);
  if (lStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  *(undefined1 *)((long)puVar1 + 0x6b) = 1;
  return puVar1 + 1;
}



/* Entry: 109c43870; end: 109c439d3;  */

undefined8 * FUN_109c43870(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  puVar1 = (undefined8 *)0xb0;
  __Znwm();
  uVar3 = *(undefined4 *)(param_1 + 0x1e0);
  puVar1[1] = &PTR_FUN_110b2d400;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  *(undefined8 *)((long)puVar1 + 0x61) = 0;
  *(undefined8 *)((long)puVar1 + 0x59) = 0;
  *(undefined2 *)((long)puVar1 + 0x69) = 1;
  *(undefined1 *)((long)puVar1 + 0x6b) = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0x3f800000;
  *(undefined1 *)(puVar1 + 0x11) = 0;
  *(undefined1 *)((long)puVar1 + 0x8c) = 0;
  *(undefined1 *)(puVar1 + 0x12) = 0;
  *(undefined1 *)((long)puVar1 + 0x94) = 0;
  *puVar1 = &PTR_FUN_110b2d3d8;
  *(undefined4 *)(puVar1 + 0x13) = uVar3;
  *(undefined8 *)((long)puVar1 + 0xa4) = 0;
  *(undefined8 *)((long)puVar1 + 0x9c) = 0;
  *(undefined4 *)((long)puVar1 + 0xac) = 0;
  func_0x000107c31940(auStack_68,PTR_DAT_1132edb60);
  puVar2 = auStack_68;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (puVar2,0,&UNK_10f5a582c,7);
  uStack_48 = puVar2[1];
  uStack_50 = *puVar2;
  lStack_40 = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar1 + 7,&uStack_50);
  if (lStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  *(undefined1 *)((long)puVar1 + 0x6b) = 1;
  return puVar1 + 1;
}



/* Entry: 109c439d4; end: 109c43b37;  */

undefined8 * FUN_109c439d4(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  puVar1 = (undefined8 *)0xb0;
  __Znwm();
  uVar3 = *(undefined4 *)(param_1 + 0x128);
  puVar1[1] = &PTR_FUN_110b2d488;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  *(undefined8 *)((long)puVar1 + 0x61) = 0;
  *(undefined8 *)((long)puVar1 + 0x59) = 0;
  *(undefined2 *)((long)puVar1 + 0x69) = 1;
  *(undefined1 *)((long)puVar1 + 0x6b) = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0x3f800000;
  *(undefined1 *)(puVar1 + 0x11) = 0;
  *(undefined1 *)((long)puVar1 + 0x8c) = 0;
  *(undefined1 *)(puVar1 + 0x12) = 0;
  *(undefined1 *)((long)puVar1 + 0x94) = 0;
  *puVar1 = &PTR_FUN_110b2d460;
  *(undefined4 *)(puVar1 + 0x13) = uVar3;
  *(undefined8 *)((long)puVar1 + 0xa4) = 0;
  *(undefined8 *)((long)puVar1 + 0x9c) = 0;
  *(undefined4 *)((long)puVar1 + 0xac) = 0;
  func_0x000107c31940(auStack_68,PTR_DAT_1132edb50);
  puVar2 = auStack_68;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (puVar2,0,&UNK_10f5a582c,7);
  uStack_48 = puVar2[1];
  uStack_50 = *puVar2;
  lStack_40 = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar1 + 7,&uStack_50);
  if (lStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  *(undefined1 *)((long)puVar1 + 0x6b) = 1;
  return puVar1 + 1;
}



/* Entry: 109c43b38; end: 109c43c9b;  */

undefined8 * FUN_109c43b38(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  puVar1 = (undefined8 *)0xb0;
  __Znwm();
  uVar3 = *(undefined4 *)(param_1 + 0x128);
  puVar1[1] = &PTR_FUN_110b2d510;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  *(undefined8 *)((long)puVar1 + 0x61) = 0;
  *(undefined8 *)((long)puVar1 + 0x59) = 0;
  *(undefined2 *)((long)puVar1 + 0x69) = 1;
  *(undefined1 *)((long)puVar1 + 0x6b) = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0x3f800000;
  *(undefined1 *)(puVar1 + 0x11) = 0;
  *(undefined1 *)((long)puVar1 + 0x8c) = 0;
  *(undefined1 *)(puVar1 + 0x12) = 0;
  *(undefined1 *)((long)puVar1 + 0x94) = 0;
  *puVar1 = &PTR_FUN_110b2d4e8;
  *(undefined4 *)(puVar1 + 0x13) = uVar3;
  *(undefined8 *)((long)puVar1 + 0xa4) = 0;
  *(undefined8 *)((long)puVar1 + 0x9c) = 0;
  *(undefined4 *)((long)puVar1 + 0xac) = 0;
  func_0x000107c31940(auStack_68,PTR_DAT_1132edb58);
  puVar2 = auStack_68;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (puVar2,0,&UNK_10f5a582c,7);
  uStack_48 = puVar2[1];
  uStack_50 = *puVar2;
  lStack_40 = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar1 + 7,&uStack_50);
  if (lStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  *(undefined1 *)((long)puVar1 + 0x6b) = 1;
  return puVar1 + 1;
}



/* Entry: 109c43c9c; end: 109c43df3;  */

undefined8 * FUN_109c43c9c(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  puVar1 = (undefined8 *)0xb0;
  __Znwm();
  puVar1[1] = &PTR_FUN_110b2d598;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  *(undefined8 *)((long)puVar1 + 0x61) = 0;
  *(undefined8 *)((long)puVar1 + 0x59) = 0;
  *(undefined2 *)((long)puVar1 + 0x69) = 1;
  *(undefined1 *)((long)puVar1 + 0x6b) = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0x3f800000;
  *(undefined1 *)(puVar1 + 0x11) = 0;
  *(undefined1 *)((long)puVar1 + 0x8c) = 0;
  *(undefined1 *)(puVar1 + 0x12) = 0;
  *(undefined1 *)((long)puVar1 + 0x94) = 0;
  *puVar1 = &PTR_FUN_110b2d570;
  *(undefined8 *)((long)puVar1 + 0xa4) = 0;
  *(undefined8 *)((long)puVar1 + 0x9c) = 0;
  *(undefined4 *)((long)puVar1 + 0xac) = 0;
  func_0x000107c31940(auStack_68,PTR_DAT_1132edb68);
  puVar2 = auStack_68;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (puVar2,0,&UNK_10f5a582c,7);
  uStack_48 = puVar2[1];
  uStack_50 = *puVar2;
  lStack_40 = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar1 + 7,&uStack_50);
  if (lStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  *(undefined1 *)((long)puVar1 + 0x6b) = 1;
  return puVar1 + 1;
}



/* Entry: 109c43df4; end: 109c43f4b;  */

undefined8 * FUN_109c43df4(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  puVar1 = (undefined8 *)0xb0;
  __Znwm();
  puVar1[1] = &PTR_FUN_110b2d620;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  *(undefined8 *)((long)puVar1 + 0x61) = 0;
  *(undefined8 *)((long)puVar1 + 0x59) = 0;
  *(undefined2 *)((long)puVar1 + 0x69) = 1;
  *(undefined1 *)((long)puVar1 + 0x6b) = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0x3f800000;
  *(undefined1 *)(puVar1 + 0x11) = 0;
  *(undefined1 *)((long)puVar1 + 0x8c) = 0;
  *(undefined1 *)(puVar1 + 0x12) = 0;
  *(undefined1 *)((long)puVar1 + 0x94) = 0;
  *puVar1 = &PTR_DAT_110b2d5f8;
  *(undefined8 *)((long)puVar1 + 0xa4) = 0;
  *(undefined8 *)((long)puVar1 + 0x9c) = 0;
  *(undefined4 *)((long)puVar1 + 0xac) = 0;
  func_0x000107c31940(auStack_68,PTR_DAT_1132edb70);
  puVar2 = auStack_68;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (puVar2,0,&UNK_10f5a582c,7);
  uStack_48 = puVar2[1];
  uStack_50 = *puVar2;
  lStack_40 = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar1 + 7,&uStack_50);
  if (lStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  *(undefined1 *)((long)puVar1 + 0x6b) = 1;
  return puVar1 + 1;
}



/* Entry: 109c43f4c; end: 109c440a3;  */

undefined8 * FUN_109c43f4c(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  puVar1 = (undefined8 *)0xb0;
  __Znwm();
  puVar1[1] = &PTR_FUN_110b2d6a8;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  *(undefined8 *)((long)puVar1 + 0x61) = 0;
  *(undefined8 *)((long)puVar1 + 0x59) = 0;
  *(undefined2 *)((long)puVar1 + 0x69) = 1;
  *(undefined1 *)((long)puVar1 + 0x6b) = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0x3f800000;
  *(undefined1 *)(puVar1 + 0x11) = 0;
  *(undefined1 *)((long)puVar1 + 0x8c) = 0;
  *(undefined1 *)(puVar1 + 0x12) = 0;
  *(undefined1 *)((long)puVar1 + 0x94) = 0;
  *puVar1 = &PTR_DAT_110b2d680;
  *(undefined8 *)((long)puVar1 + 0xa4) = 0;
  *(undefined8 *)((long)puVar1 + 0x9c) = 0;
  *(undefined4 *)((long)puVar1 + 0xac) = 0;
  func_0x000107c31940(auStack_68,PTR_DAT_1132edb78);
  puVar2 = auStack_68;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (puVar2,0,&UNK_10f5a582c,7);
  uStack_48 = puVar2[1];
  uStack_50 = *puVar2;
  lStack_40 = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar1 + 7,&uStack_50);
  if (lStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  *(undefined1 *)((long)puVar1 + 0x6b) = 1;
  return puVar1 + 1;
}



/* Entry: 109c440a4; end: 109c441fb;  */

undefined8 * FUN_109c440a4(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  puVar1 = (undefined8 *)0xb0;
  __Znwm();
  puVar1[1] = &PTR_FUN_110b2d730;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  *(undefined8 *)((long)puVar1 + 0x61) = 0;
  *(undefined8 *)((long)puVar1 + 0x59) = 0;
  *(undefined2 *)((long)puVar1 + 0x69) = 1;
  *(undefined1 *)((long)puVar1 + 0x6b) = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0x3f800000;
  *(undefined1 *)(puVar1 + 0x11) = 0;
  *(undefined1 *)((long)puVar1 + 0x8c) = 0;
  *(undefined1 *)(puVar1 + 0x12) = 0;
  *(undefined1 *)((long)puVar1 + 0x94) = 0;
  *puVar1 = &PTR_FUN_110b2d708;
  *(undefined8 *)((long)puVar1 + 0xa4) = 0;
  *(undefined8 *)((long)puVar1 + 0x9c) = 0;
  *(undefined4 *)((long)puVar1 + 0xac) = 0;
  func_0x000107c31940(auStack_68,PTR_DAT_1132edb80);
  puVar2 = auStack_68;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (puVar2,0,&UNK_10f5a582c,7);
  uStack_48 = puVar2[1];
  uStack_50 = *puVar2;
  lStack_40 = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar1 + 7,&uStack_50);
  if (lStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  *(undefined1 *)((long)puVar1 + 0x6b) = 1;
  return puVar1 + 1;
}



/* Entry: 109c441fc; end: 109c44353;  */

undefined8 * FUN_109c441fc(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  puVar1 = (undefined8 *)0xb0;
  __Znwm();
  puVar1[1] = &PTR_FUN_110b2d7b8;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  *(undefined8 *)((long)puVar1 + 0x61) = 0;
  *(undefined8 *)((long)puVar1 + 0x59) = 0;
  *(undefined2 *)((long)puVar1 + 0x69) = 1;
  *(undefined1 *)((long)puVar1 + 0x6b) = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0x3f800000;
  *(undefined1 *)(puVar1 + 0x11) = 0;
  *(undefined1 *)((long)puVar1 + 0x8c) = 0;
  *(undefined1 *)(puVar1 + 0x12) = 0;
  *(undefined1 *)((long)puVar1 + 0x94) = 0;
  *puVar1 = &PTR_FUN_110b2d790;
  *(undefined8 *)((long)puVar1 + 0xa4) = 0;
  *(undefined8 *)((long)puVar1 + 0x9c) = 0;
  *(undefined4 *)((long)puVar1 + 0xac) = 0;
  func_0x000107c31940(auStack_68,PTR_DAT_1132edb88);
  puVar2 = auStack_68;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (puVar2,0,&UNK_10f5a582c,7);
  uStack_48 = puVar2[1];
  uStack_50 = *puVar2;
  lStack_40 = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar1 + 7,&uStack_50);
  if (lStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  *(undefined1 *)((long)puVar1 + 0x6b) = 1;
  return puVar1 + 1;
}



/* Entry: 109c44354; end: 109c4474b;  */

undefined8 * FUN_109c44354(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  ulong *puVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long *plStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  char *pcStack_88;
  undefined8 uStack_80;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_d8 = *(undefined8 *)(param_1 + 0x1e0);
  uStack_d0 = 0;
  plStack_c8 = (long *)0x0;
  if (*(char *)(param_1 + 0x1a4) == '\x01') {
    if (*(int *)(param_1 + 0x194) != 2) goto LAB_109c446a0;
    puStack_a0 = &UNK_10f5a547f;
    uStack_98 = 0x28;
    pcStack_88 = "";
    uStack_80 = 0;
    lStack_90 = param_1;
    FUN_109c3cb24(&puStack_a0,1);
    uVar10 = *(ulong *)(param_1 + 0x20);
    puVar3 = (ulong *)(param_1 + 0x20);
    if ((uVar10 & 1) != 0) {
      puVar3 = (ulong *)(uVar10 + 7);
    }
    uVar12 = *puVar3;
    puVar9 = (undefined8 *)(*(ulong *)(uVar12 + 0x50) & 0xfffffffffffffffc);
    lStack_a8 = 0;
    uStack_b0 = 0;
    uStack_b8 = 0x100000001;
    puVar7 = (undefined8 *)*puVar9;
    uVar10 = puVar9[1];
    if (-1 < (char)*(byte *)((long)puVar9 + 0x17)) {
      puVar7 = puVar9;
      uVar10 = (ulong)*(byte *)((long)puVar9 + 0x17);
    }
    FUN_109c19fac(&puStack_a0,*param_2,&uStack_b8,puVar7,uVar10);
    FUN_109c18570(&uStack_e8,&puStack_a0);
    FUN_109c180ec(&puStack_a0);
    FUN_109c3d058(uVar12,uStack_e8,0);
    func_0x000109c1e534(&uStack_d0,&uStack_e8);
    uStack_c0 = *(undefined4 *)(param_1 + 0x144);
    if (plStack_e0 != (long *)0x0) {
      plVar1 = plStack_e0 + 1;
      do {
        lVar11 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_e0);
      }
    }
  }
  puVar7 = (undefined8 *)0xd0;
  __Znwm();
  plVar1 = plStack_c8;
  if (plStack_c8 != (long *)0x0) {
    plVar2 = plStack_c8 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = *plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puVar9 = puVar7 + 1;
  *puVar9 = &PTR_FUN_110b2d840;
  puVar7[3] = 0;
  puVar7[2] = 0;
  puVar7[5] = 0;
  puVar7[4] = 0;
  puVar7[7] = 0;
  puVar7[6] = 0;
  puVar7[9] = 0;
  puVar7[8] = 0;
  puVar7[0xb] = 0;
  puVar7[10] = 0;
  *(undefined8 *)((long)puVar7 + 0x61) = 0;
  *(undefined8 *)((long)puVar7 + 0x59) = 0;
  *(undefined2 *)((long)puVar7 + 0x69) = 1;
  *(undefined1 *)((long)puVar7 + 0x6b) = 0;
  puVar7[0xe] = 0;
  puVar7[0xf] = 0;
  puVar7[0x10] = 0x3f800000;
  *(undefined1 *)(puVar7 + 0x11) = 0;
  *(undefined1 *)((long)puVar7 + 0x8c) = 0;
  *(undefined1 *)(puVar7 + 0x12) = 0;
  *(undefined1 *)((long)puVar7 + 0x94) = 0;
  *puVar7 = &PTR_FUN_110b2d818;
  puVar7[0x13] = uStack_d8;
  puVar7[0x14] = uStack_d0;
  puVar7[0x15] = plStack_c8;
  if (plStack_c8 != (long *)0x0) {
    plVar2 = plStack_c8 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = *plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *(undefined4 *)(puVar7 + 0x16) = uStack_c0;
  *(undefined4 *)(puVar7 + 0x17) = 0;
  puVar7[0x18] = 0;
  puVar7[0x19] = 0;
  func_0x000107c31940(&uStack_b8,PTR_DAT_1132edb90);
  puVar8 = &uStack_b8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (puVar8,0,&UNK_10f5a582c,7);
  uStack_98 = puVar8[1];
  puStack_a0 = (undefined *)*puVar8;
  lStack_90 = puVar8[2];
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar7 + 7,&puStack_a0);
  if (lStack_90 < 0) {
    __ZdlPv(puStack_a0);
  }
  if (lStack_a8 < 0) {
    __ZdlPv(uStack_b8);
  }
  *(undefined1 *)((long)puVar7 + 0x6b) = 1;
  if (plVar1 != (long *)0x0) {
    plVar2 = plVar1 + 1;
    do {
      lVar11 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if (*(char *)(param_1 + 0x1a4) == '\x01') {
    FUN_109c3c254(param_1,puVar9);
  }
  plVar1 = plStack_c8;
  if (plStack_c8 != (long *)0x0) {
    plVar2 = plStack_c8 + 1;
    do {
      lVar11 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar9;
  }
  ___stack_chk_fail();
LAB_109c446a0:
  func_0x000105688514(&UNK_10f5a5962);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x109c446b0);
  (*pcVar6)();
}



/* Entry: 109c4474c; end: 109c448af;  */

undefined8 * FUN_109c4474c(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  puVar1 = (undefined8 *)0xb0;
  __Znwm();
  uVar3 = *(undefined4 *)(param_1 + 0x1e0);
  puVar1[1] = &PTR_FUN_110b2d8c8;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  *(undefined8 *)((long)puVar1 + 0x61) = 0;
  *(undefined8 *)((long)puVar1 + 0x59) = 0;
  *(undefined2 *)((long)puVar1 + 0x69) = 1;
  *(undefined1 *)((long)puVar1 + 0x6b) = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0x3f800000;
  *(undefined1 *)(puVar1 + 0x11) = 0;
  *(undefined1 *)((long)puVar1 + 0x8c) = 0;
  *(undefined1 *)(puVar1 + 0x12) = 0;
  *(undefined1 *)((long)puVar1 + 0x94) = 0;
  *puVar1 = &PTR_DAT_110b2d8a0;
  *(undefined4 *)(puVar1 + 0x13) = uVar3;
  *(undefined8 *)((long)puVar1 + 0xa4) = 0;
  *(undefined8 *)((long)puVar1 + 0x9c) = 0;
  *(undefined4 *)((long)puVar1 + 0xac) = 0;
  func_0x000107c31940(auStack_68,PTR_DAT_1132edb98);
  puVar2 = auStack_68;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (puVar2,0,&UNK_10f5a582c,7);
  uStack_48 = puVar2[1];
  uStack_50 = *puVar2;
  lStack_40 = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar1 + 7,&uStack_50);
  if (lStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  *(undefined1 *)((long)puVar1 + 0x6b) = 1;
  return puVar1 + 1;
}



/* Entry: 109c448b0; end: 109c44a13;  */

undefined8 * FUN_109c448b0(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  puVar1 = (undefined8 *)0xb0;
  __Znwm();
  uVar3 = *(undefined4 *)(param_1 + 0x1e0);
  puVar1[1] = &PTR_FUN_110b2d950;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  *(undefined8 *)((long)puVar1 + 0x61) = 0;
  *(undefined8 *)((long)puVar1 + 0x59) = 0;
  *(undefined2 *)((long)puVar1 + 0x69) = 1;
  *(undefined1 *)((long)puVar1 + 0x6b) = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0x3f800000;
  *(undefined1 *)(puVar1 + 0x11) = 0;
  *(undefined1 *)((long)puVar1 + 0x8c) = 0;
  *(undefined1 *)(puVar1 + 0x12) = 0;
  *(undefined1 *)((long)puVar1 + 0x94) = 0;
  *puVar1 = &PTR_FUN_110b2d928;
  *(undefined4 *)(puVar1 + 0x13) = uVar3;
  *(undefined8 *)((long)puVar1 + 0xa4) = 0;
  *(undefined8 *)((long)puVar1 + 0x9c) = 0;
  *(undefined4 *)((long)puVar1 + 0xac) = 0;
  func_0x000107c31940(auStack_68,PTR_DAT_1132edba0);
  puVar2 = auStack_68;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (puVar2,0,&UNK_10f5a582c,7);
  uStack_48 = puVar2[1];
  uStack_50 = *puVar2;
  lStack_40 = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar1 + 7,&uStack_50);
  if (lStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  *(undefined1 *)((long)puVar1 + 0x6b) = 1;
  return puVar1 + 1;
}



/* Entry: 109c44a14; end: 109c44b6b;  */

undefined8 * FUN_109c44a14(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  puVar1 = (undefined8 *)0xb0;
  __Znwm();
  puVar1[1] = &PTR_FUN_110b2d9d8;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  *(undefined8 *)((long)puVar1 + 0x61) = 0;
  *(undefined8 *)((long)puVar1 + 0x59) = 0;
  *(undefined2 *)((long)puVar1 + 0x69) = 1;
  *(undefined1 *)((long)puVar1 + 0x6b) = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0x3f800000;
  *(undefined1 *)(puVar1 + 0x11) = 0;
  *(undefined1 *)((long)puVar1 + 0x8c) = 0;
  *(undefined1 *)(puVar1 + 0x12) = 0;
  *(undefined1 *)((long)puVar1 + 0x94) = 0;
  *puVar1 = &PTR_FUN_110b2d9b0;
  *(undefined8 *)((long)puVar1 + 0xa4) = 0;
  *(undefined8 *)((long)puVar1 + 0x9c) = 0;
  *(undefined4 *)((long)puVar1 + 0xac) = 0;
  func_0x000107c31940(auStack_68,PTR_DAT_1132edba8);
  puVar2 = auStack_68;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (puVar2,0,&UNK_10f5a582c,7);
  uStack_48 = puVar2[1];
  uStack_50 = *puVar2;
  lStack_40 = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar1 + 7,&uStack_50);
  if (lStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  *(undefined1 *)((long)puVar1 + 0x6b) = 1;
  return puVar1 + 1;
}



/* Entry: 109c44b6c; end: 109c44cc3;  */

undefined8 * FUN_109c44b6c(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  puVar1 = (undefined8 *)0xb0;
  __Znwm();
  puVar1[1] = &PTR_FUN_110b2da60;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  *(undefined8 *)((long)puVar1 + 0x61) = 0;
  *(undefined8 *)((long)puVar1 + 0x59) = 0;
  *(undefined2 *)((long)puVar1 + 0x69) = 1;
  *(undefined1 *)((long)puVar1 + 0x6b) = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0x3f800000;
  *(undefined1 *)(puVar1 + 0x11) = 0;
  *(undefined1 *)((long)puVar1 + 0x8c) = 0;
  *(undefined1 *)(puVar1 + 0x12) = 0;
  *(undefined1 *)((long)puVar1 + 0x94) = 0;
  *puVar1 = &PTR_FUN_110b2da38;
  *(undefined8 *)((long)puVar1 + 0xa4) = 0;
  *(undefined8 *)((long)puVar1 + 0x9c) = 0;
  *(undefined4 *)((long)puVar1 + 0xac) = 0;
  func_0x000107c31940(auStack_68,PTR_DAT_1132edbb0);
  puVar2 = auStack_68;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (puVar2,0,&UNK_10f5a582c,7);
  uStack_48 = puVar2[1];
  uStack_50 = *puVar2;
  lStack_40 = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar1 + 7,&uStack_50);
  if (lStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  *(undefined1 *)((long)puVar1 + 0x6b) = 1;
  return puVar1 + 1;
}



/* Entry: 109c44cc4; end: 109c44e27;  */

undefined8 * FUN_109c44cc4(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  puVar1 = (undefined8 *)0xb0;
  __Znwm();
  uVar3 = *(undefined4 *)(param_1 + 0x1e4);
  puVar1[1] = &PTR_FUN_110b2dae8;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  *(undefined8 *)((long)puVar1 + 0x61) = 0;
  *(undefined8 *)((long)puVar1 + 0x59) = 0;
  *(undefined2 *)((long)puVar1 + 0x69) = 1;
  *(undefined1 *)((long)puVar1 + 0x6b) = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0x3f800000;
  *(undefined1 *)(puVar1 + 0x11) = 0;
  *(undefined1 *)((long)puVar1 + 0x8c) = 0;
  *(undefined1 *)(puVar1 + 0x12) = 0;
  *(undefined1 *)((long)puVar1 + 0x94) = 0;
  *puVar1 = &PTR_FUN_110b2dac0;
  *(undefined4 *)(puVar1 + 0x13) = uVar3;
  *(undefined8 *)((long)puVar1 + 0xa4) = 0;
  *(undefined8 *)((long)puVar1 + 0x9c) = 0;
  *(undefined4 *)((long)puVar1 + 0xac) = 0;
  func_0x000107c31940(auStack_68,PTR_DAT_1132edbb8);
  puVar2 = auStack_68;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (puVar2,0,&UNK_10f5a582c,7);
  uStack_48 = puVar2[1];
  uStack_50 = *puVar2;
  lStack_40 = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar1 + 7,&uStack_50);
  if (lStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  *(undefined1 *)((long)puVar1 + 0x6b) = 1;
  return puVar1 + 1;
}



/* Entry: 109c44e28; end: 109c44f7f;  */

undefined8 * FUN_109c44e28(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  puVar1 = (undefined8 *)0xb0;
  __Znwm();
  puVar1[1] = &PTR_FUN_110b2db70;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  *(undefined8 *)((long)puVar1 + 0x61) = 0;
  *(undefined8 *)((long)puVar1 + 0x59) = 0;
  *(undefined2 *)((long)puVar1 + 0x69) = 1;
  *(undefined1 *)((long)puVar1 + 0x6b) = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0x3f800000;
  *(undefined1 *)(puVar1 + 0x11) = 0;
  *(undefined1 *)((long)puVar1 + 0x8c) = 0;
  *(undefined1 *)(puVar1 + 0x12) = 0;
  *(undefined1 *)((long)puVar1 + 0x94) = 0;
  *puVar1 = &PTR_FUN_110b2db48;
  *(undefined8 *)((long)puVar1 + 0xa4) = 0;
  *(undefined8 *)((long)puVar1 + 0x9c) = 0;
  *(undefined4 *)((long)puVar1 + 0xac) = 0;
  func_0x000107c31940(auStack_68,PTR_DAT_1132edbc0);
  puVar2 = auStack_68;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (puVar2,0,&UNK_10f5a582c,7);
  uStack_48 = puVar2[1];
  uStack_50 = *puVar2;
  lStack_40 = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar1 + 7,&uStack_50);
  if (lStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  *(undefined1 *)((long)puVar1 + 0x6b) = 1;
  return puVar1 + 1;
}



/* Entry: 109c44f80; end: 109c450d7;  */

undefined8 * FUN_109c44f80(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  puVar1 = (undefined8 *)0xb0;
  __Znwm();
  puVar1[1] = &PTR_FUN_110b2dbf8;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  *(undefined8 *)((long)puVar1 + 0x61) = 0;
  *(undefined8 *)((long)puVar1 + 0x59) = 0;
  *(undefined2 *)((long)puVar1 + 0x69) = 1;
  *(undefined1 *)((long)puVar1 + 0x6b) = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0x3f800000;
  *(undefined1 *)(puVar1 + 0x11) = 0;
  *(undefined1 *)((long)puVar1 + 0x8c) = 0;
  *(undefined1 *)(puVar1 + 0x12) = 0;
  *(undefined1 *)((long)puVar1 + 0x94) = 0;
  *puVar1 = &PTR_FUN_110b2dbd0;
  *(undefined8 *)((long)puVar1 + 0xa4) = 0;
  *(undefined8 *)((long)puVar1 + 0x9c) = 0;
  *(undefined4 *)((long)puVar1 + 0xac) = 0;
  func_0x000107c31940(auStack_68,PTR_DAT_1132edbc8);
  puVar2 = auStack_68;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (puVar2,0,&UNK_10f5a582c,7);
  uStack_48 = puVar2[1];
  uStack_50 = *puVar2;
  lStack_40 = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar1 + 7,&uStack_50);
  if (lStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  *(undefined1 *)((long)puVar1 + 0x6b) = 1;
  return puVar1 + 1;
}



/* Entry: 109c450d8; end: 109c4522f;  */

undefined8 * FUN_109c450d8(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  puVar1 = (undefined8 *)0xb0;
  __Znwm();
  puVar1[1] = &PTR_FUN_110b2dc80;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  *(undefined8 *)((long)puVar1 + 0x61) = 0;
  *(undefined8 *)((long)puVar1 + 0x59) = 0;
  *(undefined2 *)((long)puVar1 + 0x69) = 1;
  *(undefined1 *)((long)puVar1 + 0x6b) = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0x3f800000;
  *(undefined1 *)(puVar1 + 0x11) = 0;
  *(undefined1 *)((long)puVar1 + 0x8c) = 0;
  *(undefined1 *)(puVar1 + 0x12) = 0;
  *(undefined1 *)((long)puVar1 + 0x94) = 0;
  *puVar1 = &PTR_FUN_110b2dc58;
  *(undefined8 *)((long)puVar1 + 0xa4) = 0;
  *(undefined8 *)((long)puVar1 + 0x9c) = 0;
  *(undefined4 *)((long)puVar1 + 0xac) = 0;
  func_0x000107c31940(auStack_68,PTR_DAT_1132edbd0);
  puVar2 = auStack_68;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (puVar2,0,&UNK_10f5a582c,7);
  uStack_48 = puVar2[1];
  uStack_50 = *puVar2;
  lStack_40 = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar1 + 7,&uStack_50);
  if (lStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  *(undefined1 *)((long)puVar1 + 0x6b) = 1;
  return puVar1 + 1;
}



/* Entry: 109c45230; end: 109c45387;  */

undefined8 * FUN_109c45230(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  puVar1 = (undefined8 *)0xb0;
  __Znwm();
  puVar1[1] = &PTR_FUN_110b2dd08;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  *(undefined8 *)((long)puVar1 + 0x61) = 0;
  *(undefined8 *)((long)puVar1 + 0x59) = 0;
  *(undefined2 *)((long)puVar1 + 0x69) = 1;
  *(undefined1 *)((long)puVar1 + 0x6b) = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0x3f800000;
  *(undefined1 *)(puVar1 + 0x11) = 0;
  *(undefined1 *)((long)puVar1 + 0x8c) = 0;
  *(undefined1 *)(puVar1 + 0x12) = 0;
  *(undefined1 *)((long)puVar1 + 0x94) = 0;
  *puVar1 = &PTR_FUN_110b2dce0;
  *(undefined8 *)((long)puVar1 + 0xa4) = 0;
  *(undefined8 *)((long)puVar1 + 0x9c) = 0;
  *(undefined4 *)((long)puVar1 + 0xac) = 0;
  func_0x000107c31940(auStack_68,PTR_DAT_1132edbd8);
  puVar2 = auStack_68;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (puVar2,0,&UNK_10f5a582c,7);
  uStack_48 = puVar2[1];
  uStack_50 = *puVar2;
  lStack_40 = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar1 + 7,&uStack_50);
  if (lStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  *(undefined1 *)((long)puVar1 + 0x6b) = 1;
  return puVar1 + 1;
}



/* Entry: 109c45388; end: 109c454eb;  */

undefined8 * FUN_109c45388(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  puVar1 = (undefined8 *)0xb0;
  __Znwm();
  uVar3 = *(undefined4 *)(param_1 + 0x1e0);
  puVar1[1] = &PTR_FUN_110b2dd90;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  *(undefined8 *)((long)puVar1 + 0x61) = 0;
  *(undefined8 *)((long)puVar1 + 0x59) = 0;
  *(undefined2 *)((long)puVar1 + 0x69) = 1;
  *(undefined1 *)((long)puVar1 + 0x6b) = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0x3f800000;
  *(undefined1 *)(puVar1 + 0x11) = 0;
  *(undefined1 *)((long)puVar1 + 0x8c) = 0;
  *(undefined1 *)(puVar1 + 0x12) = 0;
  *(undefined1 *)((long)puVar1 + 0x94) = 0;
  *puVar1 = &PTR_FUN_110b2dd68;
  *(undefined4 *)(puVar1 + 0x13) = uVar3;
  *(undefined8 *)((long)puVar1 + 0xa4) = 0;
  *(undefined8 *)((long)puVar1 + 0x9c) = 0;
  *(undefined4 *)((long)puVar1 + 0xac) = 0;
  func_0x000107c31940(auStack_68,PTR_DAT_1132edbe0);
  puVar2 = auStack_68;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (puVar2,0,&UNK_10f5a582c,7);
  uStack_48 = puVar2[1];
  uStack_50 = *puVar2;
  lStack_40 = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar1 + 7,&uStack_50);
  if (lStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  *(undefined1 *)((long)puVar1 + 0x6b) = 1;
  return puVar1 + 1;
}



/* Entry: 109c454ec; end: 109c4564f;  */

undefined8 * FUN_109c454ec(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  puVar1 = (undefined8 *)0xb0;
  __Znwm();
  uVar3 = *(undefined4 *)(param_1 + 0x1e0);
  puVar1[1] = &PTR_FUN_110b2de18;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  *(undefined8 *)((long)puVar1 + 0x61) = 0;
  *(undefined8 *)((long)puVar1 + 0x59) = 0;
  *(undefined2 *)((long)puVar1 + 0x69) = 1;
  *(undefined1 *)((long)puVar1 + 0x6b) = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0x3f800000;
  *(undefined1 *)(puVar1 + 0x11) = 0;
  *(undefined1 *)((long)puVar1 + 0x8c) = 0;
  *(undefined1 *)(puVar1 + 0x12) = 0;
  *(undefined1 *)((long)puVar1 + 0x94) = 0;
  *puVar1 = &PTR_FUN_110b2ddf0;
  *(undefined4 *)(puVar1 + 0x13) = uVar3;
  *(undefined8 *)((long)puVar1 + 0xa4) = 0;
  *(undefined8 *)((long)puVar1 + 0x9c) = 0;
  *(undefined4 *)((long)puVar1 + 0xac) = 0;
  func_0x000107c31940(auStack_68,PTR_DAT_1132edbe8);
  puVar2 = auStack_68;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (puVar2,0,&UNK_10f5a582c,7);
  uStack_48 = puVar2[1];
  uStack_50 = *puVar2;
  lStack_40 = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar1 + 7,&uStack_50);
  if (lStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  *(undefined1 *)((long)puVar1 + 0x6b) = 1;
  return puVar1 + 1;
}



/* Entry: 109c45650; end: 109c457a7;  */

undefined8 * FUN_109c45650(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  puVar1 = (undefined8 *)0xb0;
  __Znwm();
  puVar1[1] = &PTR_FUN_110b2dea0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  *(undefined8 *)((long)puVar1 + 0x61) = 0;
  *(undefined8 *)((long)puVar1 + 0x59) = 0;
  *(undefined2 *)((long)puVar1 + 0x69) = 1;
  *(undefined1 *)((long)puVar1 + 0x6b) = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0x3f800000;
  *(undefined1 *)(puVar1 + 0x11) = 0;
  *(undefined1 *)((long)puVar1 + 0x8c) = 0;
  *(undefined1 *)(puVar1 + 0x12) = 0;
  *(undefined1 *)((long)puVar1 + 0x94) = 0;
  *puVar1 = &PTR_FUN_110b2de78;
  *(undefined8 *)((long)puVar1 + 0xa4) = 0;
  *(undefined8 *)((long)puVar1 + 0x9c) = 0;
  *(undefined4 *)((long)puVar1 + 0xac) = 0;
  func_0x000107c31940(auStack_68,PTR_DAT_1132edbf0);
  puVar2 = auStack_68;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (puVar2,0,&UNK_10f5a582c,7);
  uStack_48 = puVar2[1];
  uStack_50 = *puVar2;
  lStack_40 = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar1 + 7,&uStack_50);
  if (lStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  *(undefined1 *)((long)puVar1 + 0x6b) = 1;
  return puVar1 + 1;
}



/* Entry: 109c457a8; end: 109c4589f;  */

long FUN_109c457a8(long param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  
  puVar4 = (undefined8 *)(*(ulong *)(param_1 + 0x100) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar4 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_40,*puVar4,puVar4[1]);
  }
  else {
    uStack_38 = puVar4[1];
    uStack_40 = *puVar4;
    lStack_30 = puVar4[2];
  }
  lVar3 = 0xa8;
  __Znwm();
  FUN_109c50e54();
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  FUN_109c3d9f4(uVar2,*(undefined4 *)(param_1 + 0x154));
  *(undefined4 *)(lVar3 + 0xa0) = uVar2;
  uVar5 = *(undefined8 *)(param_1 + 0x158);
  *(undefined8 *)(lVar3 + 0x98) = *(undefined8 *)(param_1 + 0x160);
  *(undefined8 *)(lVar3 + 0x90) = uVar5;
  if (*(char *)(param_1 + 0x1a4) == '\x01') {
    if (*(int *)(param_1 + 0x194) != 2) {
      func_0x000105688514(&UNK_10f5a5962);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x109c45870);
      (*pcVar1)();
    }
    FUN_109c3c254(param_1,lVar3);
  }
  if (lStack_30 < 0) {
    __ZdlPv(uStack_40);
  }
  return lVar3;
}



/* Entry: 109c458a0; end: 109c4593f;  */

undefined8 FUN_109c458a0(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  
  puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x100) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar2 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_40,*puVar2,puVar2[1]);
  }
  else {
    uStack_38 = puVar2[1];
    uStack_40 = *puVar2;
    lStack_30 = puVar2[2];
  }
  uVar1 = 0x98;
  __Znwm(0x98);
  FUN_109c246b8();
  if (lStack_30 < 0) {
    __ZdlPv(uStack_40);
  }
  return uVar1;
}



/* Entry: 109c45940; end: 109c459df;  */

undefined8 FUN_109c45940(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  
  puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x100) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar2 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_40,*puVar2,puVar2[1]);
  }
  else {
    uStack_38 = puVar2[1];
    uStack_40 = *puVar2;
    lStack_30 = puVar2[2];
  }
  uVar1 = 0x98;
  __Znwm(0x98);
  FUN_109c24784();
  if (lStack_30 < 0) {
    __ZdlPv(uStack_40);
  }
  return uVar1;
}



/* Entry: 109c459e0; end: 109c45cbf;  */

long * FUN_109c459e0(long param_1,undefined8 *param_2)

{
  undefined1 (*pauVar1) [12];
  long *plVar2;
  ulong *puVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  undefined1 auVar9 [16];
  int iVar10;
  undefined4 uVar11;
  code *pcVar12;
  long *plVar13;
  int *piVar14;
  undefined1 *puVar15;
  int iVar16;
  undefined8 *puVar17;
  long lVar18;
  ulong uVar19;
  ulong *puVar20;
  int *piVar21;
  undefined4 uVar22;
  undefined1 auVar23 [16];
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_210;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  undefined4 uStack_1c8;
  int iStack_1c4;
  int iStack_1c0;
  undefined8 uStack_1bc;
  undefined4 uStack_1b4;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  undefined4 uStack_198;
  int iStack_194;
  int iStack_190;
  undefined8 uStack_18c;
  undefined4 uStack_184;
  long *plStack_180;
  int iStack_178;
  undefined4 uStack_174;
  int iStack_170;
  undefined4 uStack_16c;
  char *pcStack_168;
  undefined8 uStack_160;
  long *aplStack_158 [3];
  undefined1 auStack_e0 [8];
  long *plStack_d8;
  undefined1 auStack_d0 [8];
  long *plStack_c8;
  undefined4 uStack_c0;
  int iStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  int *piStack_a8;
  int *piStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  char *pcStack_78;
  undefined8 uStack_70;
  long lStack_48;
  
  puVar15 = auStack_e0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = &UNK_10f5a54a8;
  uStack_88 = 0x1c;
  pcStack_78 = "";
  uStack_70 = 0;
  lStack_80 = param_1;
  FUN_109c3ca80(&puStack_90,&UNK_10f5a54c5,9);
  FUN_109c3cb24(&puStack_90,2);
  plVar13 = (long *)0xd0;
  __Znwm();
  FUN_109c37eb8();
  piStack_a0 = (int *)0x0;
  uStack_98 = 0;
  piStack_a8 = (int *)0x0;
  FUN_10955a79c(&piStack_a8,*(long *)(param_1 + 0xd0),
                *(long *)(param_1 + 0xd0) + (long)*(int *)(param_1 + 200) * 4);
  iStack_bc = 1;
  for (piVar14 = piStack_a8; piVar14 != piStack_a0; piVar14 = piVar14 + 1) {
    iStack_bc = *piVar14 * iStack_bc;
  }
  FUN_10928555c(plVar13 + 0x16,piStack_a8,piStack_a0,(long)piStack_a0 - (long)piStack_a8 >> 2);
  puVar20 = (ulong *)(param_1 + 0x20);
  puVar3 = puVar20;
  if ((*puVar20 & 1) != 0) {
    puVar3 = (ulong *)(*puVar20 + 7);
  }
  if (*(int *)(*puVar3 + 0x18) != iStack_bc) {
    func_0x000105688514(&UNK_10f5a54cf);
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x109c45c38);
    (*pcVar12)();
  }
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_c0 = 1;
  FUN_109c19c88(&puStack_90,*param_2,&uStack_c0,*(undefined8 *)(*puVar3 + 0x20),
                (long)iStack_bc & 0x3fffffffffffffff);
  FUN_109c18570(auStack_d0,&puStack_90);
  FUN_109c180ec(&puStack_90);
  func_0x000109c1e534(plVar13 + 0x12,auStack_d0);
  if ((*puVar20 & 1) != 0) {
    puVar20 = (ulong *)(*puVar20 + 0xf);
  }
  FUN_109c19c88(&puStack_90,*param_2,&uStack_c0,*(undefined8 *)(*puVar20 + 0x20),
                (long)*(int *)(*puVar20 + 0x18) & 0x3fffffffffffffff);
  FUN_109c18570(auStack_e0,&puStack_90);
  FUN_109c180ec(&puStack_90);
  func_0x000109c1e534(plVar13 + 0x14,auStack_e0);
  *(undefined4 *)(plVar13 + 0x19) = *(undefined4 *)(param_1 + 0x128);
  if (plStack_d8 != (long *)0x0) {
    plVar2 = plStack_d8 + 1;
    do {
      lVar18 = *plVar2;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar8) {
        *plVar2 = lVar18 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_d8);
    }
  }
  if (plStack_c8 != (long *)0x0) {
    plVar2 = plStack_c8 + 1;
    do {
      lVar18 = *plVar2;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar8) {
        *plVar2 = lVar18 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_c8);
    }
  }
  piVar14 = piStack_a8;
  if (piStack_a8 != (int *)0x0) {
    piStack_a0 = piStack_a8;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return plVar13;
  }
  ___stack_chk_fail();
  FUN_109c180ec(&puStack_90);
  FUN_10959b818(auStack_d0);
  if (piStack_a8 != (int *)0x0) {
    piStack_a0 = piStack_a8;
    __ZdlPv();
  }
  (**(code **)(*plVar13 + 8))(plVar13);
  __Unwind_Resume();
  puVar17 = (undefined8 *)(*(ulong *)(piVar14 + 0x40) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar17 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_220,*puVar17,puVar17[1]);
  }
  else {
    uStack_218 = puVar17[1];
    uStack_220 = *puVar17;
    lStack_210 = puVar17[2];
  }
  plVar13 = (long *)0x108;
  __Znwm();
  FUN_109c5d6b0();
  iVar4 = piVar14[0x46];
  plStack_180 = (long *)&UNK_10f5a5b38;
  iStack_178 = 0x14;
  uStack_174 = 0;
  pcStack_168 = "num_output";
  uStack_160 = 10;
  iStack_170 = iVar4;
  FUN_109c14834(&plStack_180);
  plStack_180 = (long *)&UNK_10f5a5b38;
  iStack_178 = 0x14;
  uStack_174 = 0;
  iStack_170 = (int)piVar14;
  iVar10 = iStack_170;
  uStack_16c = (undefined4)((ulong)piVar14 >> 0x20);
  uVar11 = uStack_16c;
  pcStack_168 = "";
  uStack_160 = 0;
  FUN_109c3cb24(&plStack_180,1);
  *(int *)((long)plVar13 + 0x94) = iVar4;
  uVar19 = *(ulong *)(piVar14 + 8);
  puVar3 = (ulong *)(piVar14 + 8);
  if ((uVar19 & 1) != 0) {
    puVar3 = (ulong *)(uVar19 + 7);
  }
  pauVar1 = (undefined1 (*) [12])(*puVar3 + 0x58);
  uVar22 = (undefined4)((ulong)*(undefined8 *)(*puVar3 + 0x60) >> 0x20);
  auVar23._12_4_ = uVar22;
  auVar23._0_12_ = *pauVar1;
  auVar9._12_4_ = uVar22;
  auVar9._0_12_ = *pauVar1;
  auVar23 = NEON_ext(auVar23,auVar9,0xc,1);
  iStack_178 = SUB124(*pauVar1,8);
  uStack_174 = auVar23._8_4_;
  plStack_180 = (long *)CONCAT44(auVar23._0_4_,SUB124(*pauVar1,0));
  iVar16 = 0xf5a5b38;
  FUN_109c60fbc(&UNK_10f5a5b38,0x14,&plStack_180,4);
  iStack_190 = 0;
  if (iVar4 != 0) {
    iStack_190 = iVar16 / iVar4;
  }
  *(int *)(plVar13 + 0x12) = iStack_190;
  bVar5 = *(byte *)((long)piVar14 + 0x1bd);
  *(byte *)(plVar13 + 0x20) = bVar5;
  plStack_180 = (long *)&UNK_10f5a5b38;
  iStack_178 = 0x14;
  uStack_174 = 0;
  iVar16 = 1;
  if (bVar5 != 0) {
    iVar16 = 2;
  }
  pcStack_168 = "";
  uStack_160 = 0;
  iVar6 = iVar16 * 2;
  iStack_170 = iVar10;
  uStack_16c = uVar11;
  FUN_109c3cb24(&plStack_180,iVar6);
  uStack_18c = 0;
  uStack_198 = 2;
  uStack_184 = 0;
  iStack_194 = iVar4;
  FUN_109c4ecc4(&lStack_1b0,piVar14,&uStack_198,puVar15,0,iVar16);
  func_0x000109c21668(plVar13 + 0x13);
  plVar13[0x14] = lStack_1a8;
  plVar13[0x13] = lStack_1b0;
  plVar13[0x15] = lStack_1a0;
  lStack_1a8 = 0;
  lStack_1a0 = 0;
  lStack_1b0 = 0;
  uStack_1bc = 0;
  uStack_1b4 = 0;
  uStack_1c8 = 2;
  iStack_1c4 = iVar4;
  iStack_1c0 = iVar4;
  FUN_109c4ecc4(&lStack_1e0,piVar14,&uStack_1c8,puVar15,iVar16,iVar6);
  func_0x000109c21668(plVar13 + 0x16);
  plVar13[0x17] = lStack_1d8;
  plVar13[0x16] = lStack_1e0;
  plVar13[0x18] = lStack_1d0;
  lStack_1d8 = 0;
  lStack_1d0 = 0;
  lStack_1e0 = 0;
  plStack_180 = (long *)0x0;
  iStack_178 = 0;
  uStack_174 = 0;
  iStack_170 = 0;
  uStack_16c = 0;
  FUN_109c4ee38(&plStack_180,(long)piVar14[0x36]);
  if (piVar14[0x36] != 0) {
    piVar21 = *(int **)(piVar14 + 0x38);
    lVar18 = (long)piVar14[0x36] << 2;
    do {
      iVar16 = *piVar21;
      if (iVar16 == 2) {
        FUN_109c4eec8(&plStack_180,2);
      }
      else if (iVar16 == 1) {
        FUN_109c4eec8(&plStack_180,0);
      }
      else if (iVar16 == 0) {
        FUN_109c4eec8(&plStack_180,1);
      }
      piVar21 = piVar21 + 1;
      lVar18 = lVar18 + -4;
    } while (lVar18 != 0);
  }
  lVar18 = plVar13[0x1d];
  if (lVar18 != 0) {
    plVar13[0x1e] = lVar18;
    __ZdlPv();
    plVar13[0x1d] = 0;
    plVar13[0x1e] = 0;
    plVar13[0x1f] = 0;
  }
  plVar13[0x1e] = CONCAT44(uStack_174,iStack_178);
  plVar13[0x1d] = (long)plStack_180;
  plVar13[0x1f] = CONCAT44(uStack_16c,iStack_170);
  iVar16 = piVar14[10];
  *(bool *)(plVar13 + 0x19) = iVar6 < iVar16;
  if (iVar6 < iVar16) {
    plStack_180 = (long *)&UNK_10f5a5b38;
    iStack_178 = 0x14;
    uStack_174 = 0;
    pcStack_168 = "";
    iVar16 = 3 << (ulong)(bVar5 & 0x1f);
    uStack_160 = 0;
    iStack_170 = iVar10;
    uStack_16c = uVar11;
    FUN_109c3cb24(&plStack_180,iVar16);
    plStack_180 = (long *)0x100000004;
    uStack_16c = 0;
    uStack_174 = 1;
    iStack_170 = 1;
    iStack_178 = iVar4;
    FUN_109c4ecc4(&lStack_200,piVar14,&plStack_180,puVar15,iVar6,iVar16);
    func_0x000109c21668(plVar13 + 0x1a);
    plVar13[0x1b] = lStack_1f8;
    plVar13[0x1a] = lStack_200;
    plVar13[0x1c] = lStack_1f0;
    lStack_1f8 = 0;
    lStack_1f0 = 0;
    lStack_200 = 0;
    aplStack_158[0] = &lStack_200;
    FUN_109c2070c(aplStack_158);
  }
  plStack_180 = &lStack_1e0;
  FUN_109c2070c(&plStack_180);
  plStack_180 = &lStack_1b0;
  FUN_109c2070c(&plStack_180);
  if (lStack_210 < 0) {
    __ZdlPv(uStack_220);
  }
  return plVar13;
}



/* Entry: 109c45cc0; end: 109c460df;  */

long FUN_109c45cc0(long param_1,undefined8 param_2)

{
  undefined1 (*pauVar1) [12];
  ulong *puVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  undefined1 auVar6 [16];
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  int iVar10;
  undefined8 *puVar11;
  ulong uVar12;
  int *piVar13;
  long lVar14;
  undefined4 uVar15;
  undefined1 auVar16 [16];
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  int iStack_e4;
  int iStack_e0;
  undefined8 uStack_dc;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  int iStack_b4;
  int iStack_b0;
  undefined8 uStack_ac;
  undefined4 uStack_a4;
  undefined8 *puStack_a0;
  int iStack_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  char *pcStack_88;
  undefined8 uStack_80;
  undefined8 *apuStack_78 [3];
  
  puVar11 = (undefined8 *)(*(ulong *)(param_1 + 0x100) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar11 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_140,*puVar11,puVar11[1]);
  }
  else {
    uStack_138 = puVar11[1];
    uStack_140 = *puVar11;
    lStack_130 = puVar11[2];
  }
  lVar9 = 0x108;
  __Znwm();
  FUN_109c5d6b0();
  iVar3 = *(int *)(param_1 + 0x118);
  puStack_a0 = (undefined8 *)&UNK_10f5a5b38;
  iStack_98 = 0x14;
  uStack_94 = 0;
  pcStack_88 = "num_output";
  uStack_80 = 10;
  iStack_90 = iVar3;
  FUN_109c14834(&puStack_a0);
  puStack_a0 = (undefined8 *)&UNK_10f5a5b38;
  iStack_98 = 0x14;
  uStack_94 = 0;
  iStack_90 = (int)param_1;
  iVar7 = iStack_90;
  uStack_8c = (undefined4)((ulong)param_1 >> 0x20);
  uVar8 = uStack_8c;
  pcStack_88 = "";
  uStack_80 = 0;
  FUN_109c3cb24(&puStack_a0,1);
  *(int *)(lVar9 + 0x94) = iVar3;
  uVar12 = *(ulong *)(param_1 + 0x20);
  puVar2 = (ulong *)(param_1 + 0x20);
  if ((uVar12 & 1) != 0) {
    puVar2 = (ulong *)(uVar12 + 7);
  }
  pauVar1 = (undefined1 (*) [12])(*puVar2 + 0x58);
  uVar15 = (undefined4)((ulong)*(undefined8 *)(*puVar2 + 0x60) >> 0x20);
  auVar16._12_4_ = uVar15;
  auVar16._0_12_ = *pauVar1;
  auVar6._12_4_ = uVar15;
  auVar6._0_12_ = *pauVar1;
  auVar16 = NEON_ext(auVar16,auVar6,0xc,1);
  iStack_98 = SUB124(*pauVar1,8);
  uStack_94 = auVar16._8_4_;
  puStack_a0 = (undefined8 *)CONCAT44(auVar16._0_4_,SUB124(*pauVar1,0));
  iVar10 = 0xf5a5b38;
  FUN_109c60fbc(&UNK_10f5a5b38,0x14,&puStack_a0,4);
  iStack_b0 = 0;
  if (iVar3 != 0) {
    iStack_b0 = iVar10 / iVar3;
  }
  *(int *)(lVar9 + 0x90) = iStack_b0;
  bVar4 = *(byte *)(param_1 + 0x1bd);
  *(byte *)(lVar9 + 0x100) = bVar4;
  puStack_a0 = (undefined8 *)&UNK_10f5a5b38;
  iStack_98 = 0x14;
  uStack_94 = 0;
  iVar10 = 1;
  if (bVar4 != 0) {
    iVar10 = 2;
  }
  pcStack_88 = "";
  uStack_80 = 0;
  iVar5 = iVar10 * 2;
  iStack_90 = iVar7;
  uStack_8c = uVar8;
  FUN_109c3cb24(&puStack_a0,iVar5);
  uStack_ac = 0;
  uStack_b8 = 2;
  uStack_a4 = 0;
  iStack_b4 = iVar3;
  FUN_109c4ecc4(&uStack_d0,param_1,&uStack_b8,param_2,0,iVar10);
  func_0x000109c21668(lVar9 + 0x98);
  *(undefined8 *)(lVar9 + 0xa0) = uStack_c8;
  *(undefined8 *)(lVar9 + 0x98) = uStack_d0;
  *(undefined8 *)(lVar9 + 0xa8) = uStack_c0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_d0 = 0;
  uStack_dc = 0;
  uStack_d4 = 0;
  uStack_e8 = 2;
  iStack_e4 = iVar3;
  iStack_e0 = iVar3;
  FUN_109c4ecc4(&uStack_100,param_1,&uStack_e8,param_2,iVar10,iVar5);
  func_0x000109c21668(lVar9 + 0xb0);
  *(undefined8 *)(lVar9 + 0xb8) = uStack_f8;
  *(undefined8 *)(lVar9 + 0xb0) = uStack_100;
  *(undefined8 *)(lVar9 + 0xc0) = uStack_f0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_100 = 0;
  puStack_a0 = (undefined8 *)0x0;
  iStack_98 = 0;
  uStack_94 = 0;
  iStack_90 = 0;
  uStack_8c = 0;
  FUN_109c4ee38(&puStack_a0,(long)*(int *)(param_1 + 0xd8));
  if (*(int *)(param_1 + 0xd8) != 0) {
    piVar13 = *(int **)(param_1 + 0xe0);
    lVar14 = (long)*(int *)(param_1 + 0xd8) << 2;
    do {
      iVar10 = *piVar13;
      if (iVar10 == 2) {
        FUN_109c4eec8(&puStack_a0,2);
      }
      else if (iVar10 == 1) {
        FUN_109c4eec8(&puStack_a0,0);
      }
      else if (iVar10 == 0) {
        FUN_109c4eec8(&puStack_a0,1);
      }
      piVar13 = piVar13 + 1;
      lVar14 = lVar14 + -4;
    } while (lVar14 != 0);
  }
  lVar14 = *(long *)(lVar9 + 0xe8);
  if (lVar14 != 0) {
    *(long *)(lVar9 + 0xf0) = lVar14;
    __ZdlPv();
    *(long *)(lVar9 + 0xe8) = 0;
    *(undefined8 *)(lVar9 + 0xf0) = 0;
    *(undefined8 *)(lVar9 + 0xf8) = 0;
  }
  *(ulong *)(lVar9 + 0xf0) = CONCAT44(uStack_94,iStack_98);
  *(undefined8 **)(lVar9 + 0xe8) = puStack_a0;
  *(ulong *)(lVar9 + 0xf8) = CONCAT44(uStack_8c,iStack_90);
  iVar10 = *(int *)(param_1 + 0x28);
  *(bool *)(lVar9 + 200) = iVar5 < iVar10;
  if (iVar5 < iVar10) {
    puStack_a0 = (undefined8 *)&UNK_10f5a5b38;
    iStack_98 = 0x14;
    uStack_94 = 0;
    pcStack_88 = "";
    iVar10 = 3 << (ulong)(bVar4 & 0x1f);
    uStack_80 = 0;
    iStack_90 = iVar7;
    uStack_8c = uVar8;
    FUN_109c3cb24(&puStack_a0,iVar10);
    puStack_a0 = (undefined8 *)0x100000004;
    uStack_8c = 0;
    uStack_94 = 1;
    iStack_90 = 1;
    iStack_98 = iVar3;
    FUN_109c4ecc4(&uStack_120,param_1,&puStack_a0,param_2,iVar5,iVar10);
    func_0x000109c21668(lVar9 + 0xd0);
    *(undefined8 *)(lVar9 + 0xd8) = uStack_118;
    *(undefined8 *)(lVar9 + 0xd0) = uStack_120;
    *(undefined8 *)(lVar9 + 0xe0) = uStack_110;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_120 = 0;
    apuStack_78[0] = &uStack_120;
    FUN_109c2070c(apuStack_78);
  }
  puStack_a0 = &uStack_100;
  FUN_109c2070c(&puStack_a0);
  puStack_a0 = &uStack_d0;
  FUN_109c2070c(&puStack_a0);
  if (lStack_130 < 0) {
    __ZdlPv(uStack_140);
  }
  return lVar9;
}



/* Entry: 109c460e0; end: 109c46397;  */

long * FUN_109c460e0(long param_1,undefined8 *param_2)

{
  undefined1 (*pauVar1) [12];
  ulong *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  long *plVar11;
  int iVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long **pplVar16;
  int iVar17;
  undefined8 *puVar18;
  long lVar19;
  ulong uVar20;
  ulong *puVar21;
  int *piVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 auVar25 [16];
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  undefined4 uStack_198;
  int iStack_194;
  int iStack_190;
  undefined8 uStack_18c;
  undefined4 uStack_184;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  undefined4 uStack_168;
  int iStack_164;
  int iStack_160;
  undefined8 uStack_15c;
  undefined4 uStack_154;
  long *plStack_150;
  int iStack_148;
  undefined4 uStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  char *pcStack_138;
  undefined8 uStack_130;
  long *aplStack_128 [3];
  long *plStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  undefined4 uStack_98;
  int iStack_94;
  int iStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  long *plStack_80;
  long *plStack_78;
  long lStack_70;
  char *pcStack_68;
  undefined8 uStack_60;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_80 = (long *)&UNK_10f5a5532;
  plStack_78 = (long *)0x1c;
  pcStack_68 = "";
  uStack_60 = 0;
  lStack_70 = param_1;
  FUN_109c3ca80(&plStack_80,&DAT_10f5a554f,9);
  FUN_109c3cb24(&plStack_80,1);
  iVar3 = *(int *)(param_1 + 0x118);
  plStack_80 = (long *)&UNK_10f5a5532;
  plStack_78 = (long *)0x1c;
  lStack_70 = CONCAT44(lStack_70._4_4_,iVar3);
  pcStack_68 = "num_output";
  uStack_60 = 10;
  FUN_109c14834(&plStack_80);
  plVar13 = (long *)0xa8;
  __Znwm();
  FUN_109c31e44();
  *(int *)((long)plVar13 + 0xa4) = iVar3;
  puVar21 = (ulong *)(param_1 + 0x20);
  puVar2 = puVar21;
  if ((*puVar21 & 1) != 0) {
    puVar2 = (ulong *)(*puVar21 + 7);
  }
  pauVar1 = (undefined1 (*) [12])(*puVar2 + 0x58);
  uVar23 = (undefined4)((ulong)*(undefined8 *)(*puVar2 + 0x60) >> 0x20);
  auVar25._12_4_ = uVar23;
  auVar25._0_12_ = *pauVar1;
  auVar8._12_4_ = uVar23;
  auVar8._0_12_ = *pauVar1;
  auVar25 = NEON_ext(auVar25,auVar8,0xc,1);
  plStack_78 = (long *)CONCAT44(auVar25._8_4_,SUB124(*pauVar1,8));
  plStack_80 = (long *)CONCAT44(auVar25._0_4_,SUB124(*pauVar1,0));
  iVar12 = 0xf5a5532;
  FUN_109c60fbc(&UNK_10f5a5532,0x1c,&plStack_80,4);
  iStack_90 = 0;
  if (iVar3 != 0) {
    iStack_90 = iVar12 / iVar3;
  }
  *(int *)(plVar13 + 0x14) = iStack_90;
  uStack_8c = 0;
  uStack_84 = 0;
  uStack_98 = 2;
  if ((*puVar21 & 1) != 0) {
    puVar21 = (ulong *)(*puVar21 + 7);
  }
  iStack_94 = iVar3;
  FUN_109c19c88(&plStack_80,*param_2,&uStack_98,*(undefined8 *)(*puVar21 + 0x20),
                (long)*(int *)(*puVar21 + 0x18) & 0x3fffffffffffffff);
  FUN_109c18570(&uStack_a8,&plStack_80);
  FUN_109c180ec(&plStack_80);
  FUN_109c3f634(&plStack_b0,uStack_a8);
  plVar11 = plStack_b0;
  plStack_80 = plStack_b0;
  if (plStack_b0 == (long *)0x0) {
    plVar14 = (long *)0x0;
  }
  else {
    plVar14 = (long *)0x20;
    __Znwm();
    *plVar14 = (long)&PTR_FUN_110b2cfe0;
    plVar14[1] = 0;
    plVar14[2] = 0;
    plVar14[3] = (long)plStack_b0;
  }
  plStack_b0 = (long *)0x0;
  plVar15 = plVar13 + 0x12;
  pplVar16 = &plStack_80;
  plStack_78 = plVar14;
  func_0x000109c1e534(plVar15,pplVar16);
  plVar14 = plStack_78;
  if (plStack_78 != (long *)0x0) {
    plVar15 = plStack_78 + 1;
    do {
      lVar19 = *plVar15;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar7) {
        *plVar15 = lVar19 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
    }
    plVar15 = plStack_b0;
    if (plStack_b0 != (long *)0x0) {
      (**(code **)(*plStack_b0 + 8))();
    }
  }
  if (plStack_a0 != (long *)0x0) {
    plVar14 = plStack_a0 + 1;
    do {
      lVar19 = *plVar14;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar7) {
        *plVar14 = lVar19 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar15 = plStack_a0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar13;
  }
  ___stack_chk_fail();
  (**(code **)(*plVar11 + 8))(plVar11);
  FUN_10959b818(&uStack_a8);
  (**(code **)(*plVar13 + 8))(plVar13);
  __Unwind_Resume();
  puVar18 = (undefined8 *)(plVar15[0x20] & 0xfffffffffffffffc);
  if (*(char *)((long)puVar18 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_1f0,*puVar18,puVar18[1]);
  }
  else {
    uStack_1e8 = puVar18[1];
    uStack_1f0 = *puVar18;
    lStack_1e0 = puVar18[2];
  }
  plVar13 = (long *)0x108;
  __Znwm();
  FUN_109c376e0();
  iVar3 = (int)plVar15[0x23];
  plStack_150 = (long *)&UNK_10f5a5b38;
  iStack_148 = 0x14;
  uStack_144 = 0;
  pcStack_138 = "num_output";
  uStack_130 = 10;
  iStack_140 = iVar3;
  FUN_109c14834(&plStack_150);
  plStack_150 = (long *)&UNK_10f5a5b38;
  iStack_148 = 0x14;
  uStack_144 = 0;
  iStack_140 = (int)plVar15;
  iVar12 = iStack_140;
  uStack_13c = (undefined4)((ulong)plVar15 >> 0x20);
  uVar23 = uStack_13c;
  pcStack_138 = "";
  uStack_130 = 0;
  FUN_109c3cb24(&plStack_150,1);
  *(int *)((long)plVar13 + 0x94) = iVar3;
  uVar20 = plVar15[4];
  puVar2 = (ulong *)(plVar15 + 4);
  if ((uVar20 & 1) != 0) {
    puVar2 = (ulong *)(uVar20 + 7);
  }
  pauVar1 = (undefined1 (*) [12])(*puVar2 + 0x58);
  uVar24 = (undefined4)((ulong)*(undefined8 *)(*puVar2 + 0x60) >> 0x20);
  auVar9._12_4_ = uVar24;
  auVar9._0_12_ = *pauVar1;
  auVar10._12_4_ = uVar24;
  auVar10._0_12_ = *pauVar1;
  auVar25 = NEON_ext(auVar9,auVar10,0xc,1);
  iStack_148 = SUB124(*pauVar1,8);
  uStack_144 = auVar25._8_4_;
  plStack_150 = (long *)CONCAT44(auVar25._0_4_,SUB124(*pauVar1,0));
  iVar17 = 0xf5a5b38;
  FUN_109c60fbc(&UNK_10f5a5b38,0x14,&plStack_150,4);
  iStack_160 = 0;
  if (iVar3 != 0) {
    iStack_160 = iVar17 / iVar3;
  }
  *(int *)(plVar13 + 0x12) = iStack_160;
  cVar6 = *(char *)((long)plVar15 + 0x1bd);
  *(char *)(plVar13 + 0x20) = cVar6;
  plStack_150 = (long *)&UNK_10f5a5b38;
  iStack_148 = 0x14;
  uStack_144 = 0;
  iVar17 = 6;
  if (cVar6 == '\0') {
    iVar17 = 3;
  }
  pcStack_138 = "";
  uStack_130 = 0;
  iVar5 = iVar17 * 2;
  iStack_140 = iVar12;
  uStack_13c = uVar23;
  FUN_109c3cb24(&plStack_150,iVar5);
  uStack_15c = 0;
  uStack_168 = 2;
  uStack_154 = 0;
  iStack_164 = iVar3;
  FUN_109c4ecc4(&lStack_180,plVar15,&uStack_168,pplVar16,0,iVar17);
  func_0x000109c21668(plVar13 + 0x13);
  plVar13[0x14] = lStack_178;
  plVar13[0x13] = lStack_180;
  plVar13[0x15] = lStack_170;
  lStack_178 = 0;
  lStack_170 = 0;
  lStack_180 = 0;
  uStack_18c = 0;
  uStack_184 = 0;
  uStack_198 = 2;
  iStack_194 = iVar3;
  iStack_190 = iVar3;
  FUN_109c4ecc4(&lStack_1b0,plVar15,&uStack_198,pplVar16,iVar17,iVar5);
  func_0x000109c21668(plVar13 + 0x16);
  plVar13[0x17] = lStack_1a8;
  plVar13[0x16] = lStack_1b0;
  plVar13[0x18] = lStack_1a0;
  lStack_1a8 = 0;
  lStack_1a0 = 0;
  lStack_1b0 = 0;
  plStack_150 = (long *)0x0;
  iStack_148 = 0;
  uStack_144 = 0;
  iStack_140 = 0;
  uStack_13c = 0;
  FUN_109c4ee38(&plStack_150,(long)(int)plVar15[0x1b]);
  if ((int)plVar15[0x1b] != 0) {
    piVar22 = (int *)plVar15[0x1c];
    lVar19 = (long)(int)plVar15[0x1b] << 2;
    do {
      iVar4 = *piVar22;
      if (iVar4 == 2) {
        FUN_109c4eec8(&plStack_150,2);
      }
      else if (iVar4 == 1) {
        FUN_109c4eec8(&plStack_150,0);
      }
      else if (iVar4 == 0) {
        FUN_109c4eec8(&plStack_150,1);
      }
      piVar22 = piVar22 + 1;
      lVar19 = lVar19 + -4;
    } while (lVar19 != 0);
  }
  lVar19 = plVar13[0x1d];
  if (lVar19 != 0) {
    plVar13[0x1e] = lVar19;
    __ZdlPv();
    plVar13[0x1d] = 0;
    plVar13[0x1e] = 0;
    plVar13[0x1f] = 0;
  }
  plVar13[0x1e] = CONCAT44(uStack_144,iStack_148);
  plVar13[0x1d] = (long)plStack_150;
  plVar13[0x1f] = CONCAT44(uStack_13c,iStack_140);
  lVar19 = plVar15[5];
  *(bool *)(plVar13 + 0x19) = iVar5 < (int)lVar19;
  if (iVar5 < (int)lVar19) {
    plStack_150 = (long *)&UNK_10f5a5b38;
    iStack_148 = 0x14;
    uStack_144 = 0;
    pcStack_138 = "";
    uStack_130 = 0;
    iStack_140 = iVar12;
    uStack_13c = uVar23;
    FUN_109c3cb24(&plStack_150,iVar17 * 3);
    plStack_150 = (long *)0x100000004;
    uStack_13c = 0;
    uStack_144 = 1;
    iStack_140 = 1;
    iStack_148 = iVar3;
    FUN_109c4ecc4(&lStack_1d0,plVar15,&plStack_150,pplVar16,iVar5,iVar17 * 3);
    func_0x000109c21668(plVar13 + 0x1a);
    plVar13[0x1b] = lStack_1c8;
    plVar13[0x1a] = lStack_1d0;
    plVar13[0x1c] = lStack_1c0;
    lStack_1c8 = 0;
    lStack_1c0 = 0;
    lStack_1d0 = 0;
    aplStack_128[0] = &lStack_1d0;
    FUN_109c2070c(aplStack_128);
  }
  plStack_150 = &lStack_1b0;
  FUN_109c2070c(&plStack_150);
  plStack_150 = &lStack_180;
  FUN_109c2070c(&plStack_150);
  if (lStack_1e0 < 0) {
    __ZdlPv(uStack_1f0);
  }
  return plVar13;
}



/* Entry: 109c46398; end: 109c4679f;  */

long FUN_109c46398(long param_1,undefined8 param_2)

{
  undefined1 (*pauVar1) [12];
  ulong *puVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined1 auVar7 [16];
  int iVar8;
  undefined4 uVar9;
  long lVar10;
  int iVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  int *piVar15;
  undefined4 uVar16;
  undefined1 auVar17 [16];
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  int iStack_e4;
  int iStack_e0;
  undefined8 uStack_dc;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  int iStack_b4;
  int iStack_b0;
  undefined8 uStack_ac;
  undefined4 uStack_a4;
  undefined8 *puStack_a0;
  int iStack_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  char *pcStack_88;
  undefined8 uStack_80;
  undefined8 *apuStack_78 [3];
  
  puVar12 = (undefined8 *)(*(ulong *)(param_1 + 0x100) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar12 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_140,*puVar12,puVar12[1]);
  }
  else {
    uStack_138 = puVar12[1];
    uStack_140 = *puVar12;
    lStack_130 = puVar12[2];
  }
  lVar10 = 0x108;
  __Znwm();
  FUN_109c376e0();
  iVar3 = *(int *)(param_1 + 0x118);
  puStack_a0 = (undefined8 *)&UNK_10f5a5b38;
  iStack_98 = 0x14;
  uStack_94 = 0;
  pcStack_88 = "num_output";
  uStack_80 = 10;
  iStack_90 = iVar3;
  FUN_109c14834(&puStack_a0);
  puStack_a0 = (undefined8 *)&UNK_10f5a5b38;
  iStack_98 = 0x14;
  uStack_94 = 0;
  iStack_90 = (int)param_1;
  iVar8 = iStack_90;
  uStack_8c = (undefined4)((ulong)param_1 >> 0x20);
  uVar9 = uStack_8c;
  pcStack_88 = "";
  uStack_80 = 0;
  FUN_109c3cb24(&puStack_a0,1);
  *(int *)(lVar10 + 0x94) = iVar3;
  uVar13 = *(ulong *)(param_1 + 0x20);
  puVar2 = (ulong *)(param_1 + 0x20);
  if ((uVar13 & 1) != 0) {
    puVar2 = (ulong *)(uVar13 + 7);
  }
  pauVar1 = (undefined1 (*) [12])(*puVar2 + 0x58);
  uVar16 = (undefined4)((ulong)*(undefined8 *)(*puVar2 + 0x60) >> 0x20);
  auVar17._12_4_ = uVar16;
  auVar17._0_12_ = *pauVar1;
  auVar7._12_4_ = uVar16;
  auVar7._0_12_ = *pauVar1;
  auVar17 = NEON_ext(auVar17,auVar7,0xc,1);
  iStack_98 = SUB124(*pauVar1,8);
  uStack_94 = auVar17._8_4_;
  puStack_a0 = (undefined8 *)CONCAT44(auVar17._0_4_,SUB124(*pauVar1,0));
  iVar11 = 0xf5a5b38;
  FUN_109c60fbc(&UNK_10f5a5b38,0x14,&puStack_a0,4);
  iStack_b0 = 0;
  if (iVar3 != 0) {
    iStack_b0 = iVar11 / iVar3;
  }
  *(int *)(lVar10 + 0x90) = iStack_b0;
  cVar5 = *(char *)(param_1 + 0x1bd);
  *(char *)(lVar10 + 0x100) = cVar5;
  puStack_a0 = (undefined8 *)&UNK_10f5a5b38;
  iStack_98 = 0x14;
  uStack_94 = 0;
  iVar11 = 6;
  if (cVar5 == '\0') {
    iVar11 = 3;
  }
  pcStack_88 = "";
  uStack_80 = 0;
  iVar6 = iVar11 * 2;
  iStack_90 = iVar8;
  uStack_8c = uVar9;
  FUN_109c3cb24(&puStack_a0,iVar6);
  uStack_ac = 0;
  uStack_b8 = 2;
  uStack_a4 = 0;
  iStack_b4 = iVar3;
  FUN_109c4ecc4(&uStack_d0,param_1,&uStack_b8,param_2,0,iVar11);
  func_0x000109c21668(lVar10 + 0x98);
  *(undefined8 *)(lVar10 + 0xa0) = uStack_c8;
  *(undefined8 *)(lVar10 + 0x98) = uStack_d0;
  *(undefined8 *)(lVar10 + 0xa8) = uStack_c0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_d0 = 0;
  uStack_dc = 0;
  uStack_d4 = 0;
  uStack_e8 = 2;
  iStack_e4 = iVar3;
  iStack_e0 = iVar3;
  FUN_109c4ecc4(&uStack_100,param_1,&uStack_e8,param_2,iVar11,iVar6);
  func_0x000109c21668(lVar10 + 0xb0);
  *(undefined8 *)(lVar10 + 0xb8) = uStack_f8;
  *(undefined8 *)(lVar10 + 0xb0) = uStack_100;
  *(undefined8 *)(lVar10 + 0xc0) = uStack_f0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_100 = 0;
  puStack_a0 = (undefined8 *)0x0;
  iStack_98 = 0;
  uStack_94 = 0;
  iStack_90 = 0;
  uStack_8c = 0;
  FUN_109c4ee38(&puStack_a0,(long)*(int *)(param_1 + 0xd8));
  if (*(int *)(param_1 + 0xd8) != 0) {
    piVar15 = *(int **)(param_1 + 0xe0);
    lVar14 = (long)*(int *)(param_1 + 0xd8) << 2;
    do {
      iVar4 = *piVar15;
      if (iVar4 == 2) {
        FUN_109c4eec8(&puStack_a0,2);
      }
      else if (iVar4 == 1) {
        FUN_109c4eec8(&puStack_a0,0);
      }
      else if (iVar4 == 0) {
        FUN_109c4eec8(&puStack_a0,1);
      }
      piVar15 = piVar15 + 1;
      lVar14 = lVar14 + -4;
    } while (lVar14 != 0);
  }
  lVar14 = *(long *)(lVar10 + 0xe8);
  if (lVar14 != 0) {
    *(long *)(lVar10 + 0xf0) = lVar14;
    __ZdlPv();
    *(long *)(lVar10 + 0xe8) = 0;
    *(undefined8 *)(lVar10 + 0xf0) = 0;
    *(undefined8 *)(lVar10 + 0xf8) = 0;
  }
  *(ulong *)(lVar10 + 0xf0) = CONCAT44(uStack_94,iStack_98);
  *(undefined8 **)(lVar10 + 0xe8) = puStack_a0;
  *(ulong *)(lVar10 + 0xf8) = CONCAT44(uStack_8c,iStack_90);
  iVar4 = *(int *)(param_1 + 0x28);
  *(bool *)(lVar10 + 200) = iVar6 < iVar4;
  if (iVar6 < iVar4) {
    puStack_a0 = (undefined8 *)&UNK_10f5a5b38;
    iStack_98 = 0x14;
    uStack_94 = 0;
    pcStack_88 = "";
    uStack_80 = 0;
    iStack_90 = iVar8;
    uStack_8c = uVar9;
    FUN_109c3cb24(&puStack_a0,iVar11 * 3);
    puStack_a0 = (undefined8 *)0x100000004;
    uStack_8c = 0;
    uStack_94 = 1;
    iStack_90 = 1;
    iStack_98 = iVar3;
    FUN_109c4ecc4(&uStack_120,param_1,&puStack_a0,param_2,iVar6,iVar11 * 3);
    func_0x000109c21668(lVar10 + 0xd0);
    *(undefined8 *)(lVar10 + 0xd8) = uStack_118;
    *(undefined8 *)(lVar10 + 0xd0) = uStack_120;
    *(undefined8 *)(lVar10 + 0xe0) = uStack_110;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_120 = 0;
    apuStack_78[0] = &uStack_120;
    FUN_109c2070c(apuStack_78);
  }
  puStack_a0 = &uStack_100;
  FUN_109c2070c(&puStack_a0);
  puStack_a0 = &uStack_d0;
  FUN_109c2070c(&puStack_a0);
  if (lStack_130 < 0) {
    __ZdlPv(uStack_140);
  }
  return lVar10;
}



/* Entry: 109c467a0; end: 109c46bc3;  */

long FUN_109c467a0(long param_1,undefined8 param_2)

{
  undefined1 (*pauVar1) [12];
  ulong *puVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined1 auVar6 [16];
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  int iVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  int *piVar14;
  long lVar15;
  undefined1 auVar16 [16];
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  int iStack_e4;
  int iStack_e0;
  undefined8 uStack_dc;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  int iStack_b4;
  int iStack_b0;
  undefined8 uStack_ac;
  undefined4 uStack_a4;
  undefined8 *puStack_a0;
  int iStack_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  char *pcStack_88;
  undefined8 uStack_80;
  undefined8 *apuStack_78 [3];
  
  puVar12 = (undefined8 *)(*(ulong *)(param_1 + 0x100) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar12 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_140,*puVar12,puVar12[1]);
  }
  else {
    uStack_138 = puVar12[1];
    uStack_140 = *puVar12;
    lStack_130 = puVar12[2];
  }
  lVar9 = 0x108;
  __Znwm();
  FUN_109c38ab8();
  iVar3 = *(int *)(param_1 + 0x118);
  puStack_a0 = (undefined8 *)&UNK_10f5a5b38;
  iStack_98 = 0x14;
  uStack_94 = 0;
  pcStack_88 = "num_output";
  uStack_80 = 10;
  iStack_90 = iVar3;
  FUN_109c14834(&puStack_a0);
  puStack_a0 = (undefined8 *)&UNK_10f5a5b38;
  iStack_98 = 0x14;
  uStack_94 = 0;
  iStack_90 = (int)param_1;
  iVar7 = iStack_90;
  uStack_8c = (undefined4)((ulong)param_1 >> 0x20);
  uVar8 = uStack_8c;
  pcStack_88 = "";
  uStack_80 = 0;
  FUN_109c3cb24(&puStack_a0,1);
  *(int *)(lVar9 + 0x94) = iVar3;
  uVar13 = *(ulong *)(param_1 + 0x20);
  puVar2 = (ulong *)(param_1 + 0x20);
  if ((uVar13 & 1) != 0) {
    puVar2 = (ulong *)(uVar13 + 7);
  }
  pauVar1 = (undefined1 (*) [12])(*puVar2 + 0x58);
  uVar11 = (undefined4)((ulong)*(undefined8 *)(*puVar2 + 0x60) >> 0x20);
  auVar16._12_4_ = uVar11;
  auVar16._0_12_ = *pauVar1;
  auVar6._12_4_ = uVar11;
  auVar6._0_12_ = *pauVar1;
  auVar16 = NEON_ext(auVar16,auVar6,0xc,1);
  iStack_98 = SUB124(*pauVar1,8);
  uStack_94 = auVar16._8_4_;
  puStack_a0 = (undefined8 *)CONCAT44(auVar16._0_4_,SUB124(*pauVar1,0));
  iVar10 = 0xf5a5b38;
  FUN_109c60fbc(&UNK_10f5a5b38,0x14,&puStack_a0,4);
  iStack_b0 = 0;
  if (iVar3 != 0) {
    iStack_b0 = iVar10 / iVar3;
  }
  *(int *)(lVar9 + 0x90) = iStack_b0;
  cVar4 = *(char *)(param_1 + 0x1bd);
  *(char *)(lVar9 + 0x100) = cVar4;
  puStack_a0 = (undefined8 *)&UNK_10f5a5b38;
  iStack_98 = 0x14;
  uStack_94 = 0;
  iVar10 = 8;
  if (cVar4 == '\0') {
    iVar10 = 4;
  }
  pcStack_88 = "";
  uStack_80 = 0;
  iVar5 = iVar10 * 2;
  iStack_90 = iVar7;
  uStack_8c = uVar8;
  FUN_109c3cb24(&puStack_a0,iVar5);
  uStack_ac = 0;
  uStack_b8 = 2;
  uStack_a4 = 0;
  iStack_b4 = iVar3;
  FUN_109c4ecc4(&uStack_d0,param_1,&uStack_b8,param_2,0,iVar10);
  func_0x000109c21668(lVar9 + 0x98);
  *(undefined8 *)(lVar9 + 0xa0) = uStack_c8;
  *(undefined8 *)(lVar9 + 0x98) = uStack_d0;
  *(undefined8 *)(lVar9 + 0xa8) = uStack_c0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_d0 = 0;
  uStack_dc = 0;
  uStack_d4 = 0;
  uStack_e8 = 2;
  iStack_e4 = iVar3;
  iStack_e0 = iVar3;
  FUN_109c4ecc4(&uStack_100,param_1,&uStack_e8,param_2,iVar10,iVar5);
  func_0x000109c21668(lVar9 + 0xb0);
  *(undefined8 *)(lVar9 + 0xb8) = uStack_f8;
  *(undefined8 *)(lVar9 + 0xb0) = uStack_100;
  *(undefined8 *)(lVar9 + 0xc0) = uStack_f0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_100 = 0;
  puStack_a0 = (undefined8 *)0x0;
  iStack_98 = 0;
  uStack_94 = 0;
  iStack_90 = 0;
  uStack_8c = 0;
  FUN_109c4ee38(&puStack_a0,(long)*(int *)(param_1 + 0xd8));
  if (*(int *)(param_1 + 0xd8) != 0) {
    piVar14 = *(int **)(param_1 + 0xe0);
    lVar15 = (long)*(int *)(param_1 + 0xd8) << 2;
    do {
      iVar10 = *piVar14;
      if (iVar10 == 2) {
        FUN_109c4eec8(&puStack_a0,2);
      }
      else if (iVar10 == 1) {
        FUN_109c4eec8(&puStack_a0,0);
      }
      else if (iVar10 == 0) {
        FUN_109c4eec8(&puStack_a0,1);
      }
      piVar14 = piVar14 + 1;
      lVar15 = lVar15 + -4;
    } while (lVar15 != 0);
  }
  lVar15 = *(long *)(lVar9 + 0xe8);
  if (lVar15 != 0) {
    *(long *)(lVar9 + 0xf0) = lVar15;
    __ZdlPv();
    *(long *)(lVar9 + 0xe8) = 0;
    *(undefined8 *)(lVar9 + 0xf0) = 0;
    *(undefined8 *)(lVar9 + 0xf8) = 0;
  }
  *(ulong *)(lVar9 + 0xf0) = CONCAT44(uStack_94,iStack_98);
  *(undefined8 **)(lVar9 + 0xe8) = puStack_a0;
  *(ulong *)(lVar9 + 0xf8) = CONCAT44(uStack_8c,iStack_90);
  iVar10 = *(int *)(param_1 + 0x28);
  *(bool *)(lVar9 + 200) = iVar5 < iVar10;
  if (iVar5 < iVar10) {
    puStack_a0 = (undefined8 *)&UNK_10f5a5b38;
    iStack_98 = 0x14;
    uStack_94 = 0;
    pcStack_88 = "";
    uVar11 = 0x18;
    if (cVar4 == '\0') {
      uVar11 = 0xc;
    }
    uStack_80 = 0;
    iStack_90 = iVar7;
    uStack_8c = uVar8;
    FUN_109c3cb24(&puStack_a0,uVar11);
    puStack_a0 = (undefined8 *)0x100000004;
    uStack_8c = 0;
    uStack_94 = 1;
    iStack_90 = 1;
    iStack_98 = iVar3;
    FUN_109c4ecc4(&uStack_120,param_1,&puStack_a0,param_2,iVar5,uVar11);
    func_0x000109c21668(lVar9 + 0xd0);
    *(undefined8 *)(lVar9 + 0xd8) = uStack_118;
    *(undefined8 *)(lVar9 + 0xd0) = uStack_120;
    *(undefined8 *)(lVar9 + 0xe0) = uStack_110;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_120 = 0;
    apuStack_78[0] = &uStack_120;
    FUN_109c2070c(apuStack_78);
  }
  puStack_a0 = &uStack_100;
  FUN_109c2070c(&puStack_a0);
  puStack_a0 = &uStack_d0;
  FUN_109c2070c(&puStack_a0);
  if (lStack_130 < 0) {
    __ZdlPv(uStack_140);
  }
  return lVar9;
}



/* Entry: 109c46bc4; end: 109c46c63;  */

undefined8 FUN_109c46bc4(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  
  puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x100) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar2 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_40,*puVar2,puVar2[1]);
  }
  else {
    uStack_38 = puVar2[1];
    uStack_40 = *puVar2;
    lStack_30 = puVar2[2];
  }
  uVar1 = 0x90;
  __Znwm(0x90);
  FUN_109c24b34();
  if (lStack_30 < 0) {
    __ZdlPv(uStack_40);
  }
  return uVar1;
}



/* Entry: 109c46c64; end: 109c46cf7;  */

long FUN_109c46c64(long param_1)

{
  long lVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  
  puStack_48 = &UNK_10f5a5559;
  uStack_40 = 0x19;
  pcStack_30 = "";
  uStack_28 = 0;
  lStack_38 = param_1;
  FUN_109c3ca80(&puStack_48,&UNK_10f5a5573,6);
  FUN_109c46cf8(&puStack_48);
  lVar1 = 0x98;
  __Znwm();
  FUN_109c36384();
  *(undefined4 *)(lVar1 + 0x90) = **(undefined4 **)(param_1 + 0xf0);
  return lVar1;
}



/* Entry: 109c46cf8; end: 109c46e6f;  */

void FUN_109c46cf8(long param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 **ppuStack_b0;
  ulong uStack_a8;
  byte bStack_99;
  undefined8 auStack_98 [3];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if (*(int *)(*(long *)(param_1 + 0x10) + 0xe8) < 1) {
    __ZNSt3__19to_stringEi(auStack_98,1);
    puVar2 = auStack_98;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (puVar2,0,&UNK_10f5a5a67,0x12);
    uStack_78 = puVar2[1];
    uStack_80 = *puVar2;
    uStack_70 = puVar2[2];
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = 0;
    puVar2 = &uStack_80;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar2,&UNK_10f5a5b4d,0x14);
    uStack_58 = puVar2[1];
    uStack_60 = *puVar2;
    uStack_50 = puVar2[2];
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = 0;
    __ZNSt3__19to_stringEi(&ppuStack_b0,*(undefined4 *)(*(long *)(param_1 + 0x10) + 0xe8));
    if (-1 < (char)bStack_99) {
      uStack_a8 = (ulong)bStack_99;
      ppuStack_b0 = &ppuStack_b0;
    }
    puVar2 = &uStack_60;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar2,ppuStack_b0,uStack_a8);
    uStack_38 = puVar2[1];
    uStack_40 = *puVar2;
    uStack_30 = puVar2[2];
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = 0;
    FUN_109c49990(param_1,&uStack_40);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x109c46df4);
    (*pcVar1)();
  }
  return;
}



/* Entry: 109c46e70; end: 109c46fdf;  */

long FUN_109c46e70(long param_1)

{
  byte bVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 *puVar4;
  int *piVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  long lVar8;
  undefined *puStack_80;
  undefined8 uStack_78;
  long lStack_70;
  char *pcStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  puStack_80 = &UNK_10f5a557a;
  uStack_78 = 0x17;
  pcStack_68 = "";
  uStack_60 = 0;
  puVar6 = (undefined8 *)(*(ulong *)(param_1 + 0x100) & 0xfffffffffffffffc);
  bVar1 = *(byte *)((long)puVar6 + 0x17);
  puVar7 = (ulong *)&UNK_110b2cf20;
  lVar8 = 0x20;
  lStack_70 = param_1;
  do {
    puVar4 = puVar6;
    uVar3 = (ulong)bVar1;
    if ((char)bVar1 < '\0') {
      puVar4 = (undefined8 *)*puVar6;
      uVar3 = puVar6[1];
    }
    if (*puVar7 == uVar3) {
      uVar3 = puVar7[-1];
      _memcmp(uVar3,puVar4);
      if ((int)uVar3 == 0) {
        FUN_109c46cf8(&puStack_80);
        lVar8 = 0xa0;
        __Znwm();
        FUN_109c5026c();
        *(undefined4 *)(lVar8 + 0x90) = **(undefined4 **)(param_1 + 0xf0);
        piVar5 = (int *)(*(ulong *)(param_1 + 0x100) & 0xfffffffffffffffc);
        if (*(char *)((long)piVar5 + 0x17) < '\0') {
          if (*(long *)(piVar5 + 2) != 6) {
            return lVar8;
          }
          piVar5 = *(int **)piVar5;
        }
        else if (*(char *)((long)piVar5 + 0x17) != '\x06') {
          return lVar8;
        }
        if (*piVar5 == 0x61706e75 && (short)piVar5[1] == 0x6b63) {
          *(undefined4 *)(lVar8 + 0x94) = *(undefined4 *)(param_1 + 0x118);
          *(undefined1 *)(lVar8 + 0x98) = 1;
        }
        return lVar8;
      }
    }
    puVar7 = puVar7 + 2;
    lVar8 = lVar8 + -0x10;
  } while (lVar8 != 0);
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_58,&UNK_10f5a5a4f,puVar6);
  FUN_109c49990(&puStack_80,auStack_58);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x109c46f1c);
  (*pcVar2)();
}



/* Entry: 109c46fe0; end: 109c4701f;  */

undefined8 FUN_109c46fe0(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x90;
  __Znwm(0x90);
  FUN_109c5ded4();
  return uVar1;
}



/* Entry: 109c47020; end: 109c470b7;  */

long FUN_109c47020(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = 0x100;
  __Znwm();
  FUN_109c58024();
  *(undefined4 *)(lVar1 + 0x90) = *(undefined4 *)(param_1 + 0x198);
  *(undefined8 *)(lVar1 + 0xa0) = *(undefined8 *)(lVar1 + 0x98);
  if (*(int *)(param_1 + 0xe8) != 0) {
    lVar2 = *(long *)(param_1 + 0xf0);
    lVar3 = (long)*(int *)(param_1 + 0xe8) << 2;
    do {
      FUN_10923b3a0((undefined8 *)(lVar1 + 0x98),lVar2);
      lVar2 = lVar2 + 4;
      lVar3 = lVar3 + -4;
    } while (lVar3 != 0);
  }
  *(undefined1 *)(lVar1 + 0xb0) = *(undefined1 *)(param_1 + 0x1a6);
  return lVar1;
}



/* Entry: 109c470b8; end: 109c471ff;  */

undefined1 * FUN_109c470b8(long param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong *puVar2;
  undefined1 uVar3;
  char cVar4;
  bool bVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined1 auStack_a8 [8];
  long *plStack_a0;
  undefined4 uStack_98;
  int iStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [72];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = (undefined1 *)0xb8;
  __Znwm();
  puVar7 = puVar6;
  FUN_109c5c0b0();
  if (*(int *)(param_1 + 0x28) == 1) {
    uVar8 = *(ulong *)(param_1 + 0x20);
    puVar2 = (ulong *)(param_1 + 0x20);
    if ((uVar8 & 1) != 0) {
      puVar2 = (ulong *)(uVar8 + 7);
    }
    iStack_94 = *(int *)(*puVar2 + 0x38);
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_98 = 1;
    FUN_109c1a120(auStack_80,*param_2,&uStack_98,*(undefined8 *)(*puVar2 + 0x40),
                  (long)iStack_94 & 0x3fffffffffffffff);
    FUN_109c18570(auStack_a8,auStack_80);
    func_0x000109c1e534(puVar6 + 0x90,auStack_a8);
    *(undefined4 *)(*(long *)(puVar6 + 0x90) + 0x3c) = 2;
    if (plStack_a0 != (long *)0x0) {
      plVar1 = plStack_a0 + 1;
      do {
        lVar9 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a0);
      }
    }
    puVar7 = auStack_80;
    FUN_109c180ec();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar6;
  }
  ___stack_chk_fail();
  FUN_109c180ec(auStack_80);
  __Unwind_Resume();
  puVar6 = (undefined1 *)0x98;
  __Znwm();
  FUN_109c252a8();
  uVar3 = puVar7[0x1bc];
  puVar6[0x90] = puVar7[0x1a7];
  puVar6[0x91] = uVar3;
  return puVar6;
}



/* Entry: 109c47200; end: 109c47253;  */

long FUN_109c47200(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  
  lVar2 = 0x98;
  __Znwm();
  FUN_109c252a8();
  uVar1 = *(undefined1 *)(param_1 + 0x1bc);
  *(undefined1 *)(lVar2 + 0x90) = *(undefined1 *)(param_1 + 0x1a7);
  *(undefined1 *)(lVar2 + 0x91) = uVar1;
  return lVar2;
}



/* Entry: 109c47254; end: 109c47497;  */

undefined8 FUN_109c47254(long param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong *puVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined1 auStack_b8 [8];
  long *plStack_b0;
  undefined1 auStack_a8 [8];
  long *plStack_a0;
  int iStack_98;
  undefined8 uStack_94;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined *puStack_80;
  undefined8 uStack_78;
  long lStack_70;
  char *pcStack_68;
  undefined8 uStack_60;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_80 = &UNK_10f5a559e;
  uStack_78 = 0x1b;
  pcStack_68 = "";
  uStack_60 = 0;
  lStack_70 = param_1;
  FUN_109c3ca80(&puStack_80,&UNK_10f5a3b93,8);
  FUN_109c3cb24(&puStack_80,1);
  uVar8 = *(ulong *)(param_1 + 0x20);
  puVar2 = (ulong *)(param_1 + 0x20);
  if ((uVar8 & 1) != 0) {
    puVar2 = (ulong *)(uVar8 + 7);
  }
  uVar8 = *puVar2;
  iVar3 = *(int *)(uVar8 + 0x28);
  uStack_8c = 0;
  uStack_94 = 0;
  uStack_84 = 0;
  if (5 < iVar3) {
    FUN_10940ce60(&UNK_10f574967,*(undefined8 *)(uVar8 + 0x30));
    goto LAB_109c47444;
  }
  iStack_98 = iVar3;
  if (iVar3 != 0) {
    _memmove(&uStack_94,*(undefined8 *)(uVar8 + 0x30),(long)iVar3 << 2);
  }
  iVar3 = *(int *)(uVar8 + 0x38);
  if (iVar3 == 0) {
    iVar3 = *(int *)(uVar8 + 0x18);
    if (iVar3 != 0) {
      uVar7 = 0xa0;
      __Znwm(0xa0);
      FUN_109c19dfc(&puStack_80,*param_2,&iStack_98,*(undefined8 *)(uVar8 + 0x20),
                    ((long)iVar3 & 0x3fffffffffffffffU) << 1);
      FUN_109c18570(auStack_b8,&puStack_80);
      FUN_109c26e08(uVar7,auStack_b8);
      if (plStack_b0 != (long *)0x0) {
        plVar1 = plStack_b0 + 1;
        do {
          lVar9 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar9 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          plVar10 = plStack_b0;
        } while (cVar4 != '\0');
        goto LAB_109c473d0;
      }
      goto LAB_109c473ec;
    }
  }
  else {
    uVar7 = 0xa0;
    __Znwm(0xa0);
    FUN_109c1a120(&puStack_80,*param_2,&iStack_98,*(undefined8 *)(uVar8 + 0x40),
                  (long)iVar3 & 0x3fffffffffffffff);
    FUN_109c18570(auStack_a8,&puStack_80);
    FUN_109c26e08(uVar7,auStack_a8);
    if (plStack_a0 != (long *)0x0) {
      plVar1 = plStack_a0 + 1;
      do {
        lVar9 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        plVar10 = plStack_a0;
      } while (cVar4 != '\0');
LAB_109c473d0:
      if (lVar9 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
LAB_109c473ec:
    FUN_109c180ec(&puStack_80);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return uVar7;
    }
    ___stack_chk_fail();
  }
  func_0x000105688514(&UNK_10f5a55ba);
LAB_109c47444:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x109c47448);
  (*pcVar6)();
}



/* Entry: 109c47498; end: 109c474df;  */

undefined8 FUN_109c47498(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x98;
  __Znwm(0x98);
  FUN_109c2e950();
  return uVar1;
}



/* Entry: 109c474e0; end: 109c47573;  */

long FUN_109c474e0(long param_1)

{
  long lVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  
  puStack_48 = &UNK_10f5a55e9;
  uStack_40 = 0x1c;
  pcStack_30 = "";
  uStack_28 = 0;
  lStack_38 = param_1;
  FUN_109c3ca80(&puStack_48,&UNK_10f5a5606,9);
  FUN_109c46cf8(&puStack_48);
  lVar1 = 0x98;
  __Znwm();
  FUN_109c262a0();
  *(undefined4 *)(lVar1 + 0x90) = **(undefined4 **)(param_1 + 0xf0);
  return lVar1;
}



/* Entry: 109c47574; end: 109c476bb;  */

long * FUN_109c47574(long param_1,undefined8 *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong *puVar11;
  long lVar12;
  ulong uVar13;
  undefined1 auStack_318 [8];
  long *plStack_310;
  undefined1 auStack_308 [8];
  long *plStack_300;
  undefined1 auStack_2f8 [8];
  long *plStack_2f0;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined4 uStack_2b8;
  int iStack_2b4;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  long alStack_270 [9];
  long lStack_228;
  undefined8 uStack_1c8;
  long *plStack_1c0;
  undefined1 auStack_1b8 [8];
  long *plStack_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined4 uStack_190;
  int iStack_18c;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 auStack_178 [72];
  long alStack_130 [9];
  long lStack_e8;
  undefined8 uStack_a8;
  long *plStack_a0;
  undefined4 uStack_98;
  int iStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long alStack_80 [9];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = (long *)0xa0;
  puVar7 = param_2;
  __Znwm();
  plVar5 = plVar4;
  FUN_109c51e10();
  if (*(int *)(param_1 + 0x28) == 1) {
    uVar9 = *(ulong *)(param_1 + 0x20);
    puVar1 = (ulong *)(param_1 + 0x20);
    if ((uVar9 & 1) != 0) {
      puVar1 = (ulong *)(uVar9 + 7);
    }
    iStack_94 = *(int *)(*puVar1 + 0x38);
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_98 = 1;
    FUN_109c1a120(alStack_80,*param_2,&uStack_98,*(undefined8 *)(*puVar1 + 0x40),
                  (long)iStack_94 & 0x3fffffffffffffff);
    FUN_109c18570(&uStack_a8,alStack_80);
    puVar7 = &uStack_a8;
    func_0x000109c1e534(plVar4 + 0x12);
    *(undefined4 *)(plVar4[0x12] + 0x3c) = 2;
    if (plStack_a0 != (long *)0x0) {
      plVar5 = plStack_a0 + 1;
      do {
        lVar10 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a0);
      }
    }
    plVar5 = alStack_80;
    FUN_109c180ec();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar4;
  }
  ___stack_chk_fail();
  FUN_109c180ec(alStack_80);
  __Unwind_Resume();
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = (long *)0xe0;
  puVar8 = puVar7;
  __Znwm();
  plVar4 = plVar6;
  FUN_109c5e4b4();
  if ((int)plVar5[5] == 2) {
    puVar11 = (ulong *)(plVar5 + 4);
    uVar9 = *puVar11;
    bVar3 = (uVar9 & 1) != 0;
    puVar1 = puVar11;
    if (bVar3) {
      puVar1 = (ulong *)(uVar9 + 7);
    }
    iStack_18c = *(int *)(*puVar1 + 0x38);
    uStack_188 = 0;
    uStack_180 = 0;
    uStack_190 = 1;
    if (bVar3) {
      puVar11 = (ulong *)(uVar9 + 0xf);
    }
    uVar9 = *puVar11;
    uStack_1a4 = *(undefined4 *)(uVar9 + 0x38);
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_1a8 = 1;
    FUN_109c1a120(alStack_130,*puVar7,&uStack_190,*(undefined8 *)(*puVar1 + 0x40),
                  (long)iStack_18c & 0x3fffffffffffffff);
    FUN_109c18570(auStack_1b8,alStack_130);
    FUN_109c1a120(auStack_178,*puVar7,&uStack_1a8,*(undefined8 *)(uVar9 + 0x40),
                  (long)*(int *)(uVar9 + 0x38) & 0x3fffffffffffffff);
    FUN_109c18570(&uStack_1c8,auStack_178);
    func_0x000109c1e534(plVar6 + 0x14,auStack_1b8);
    puVar8 = &uStack_1c8;
    func_0x000109c1e534(plVar6 + 0x1a);
    *(undefined4 *)(plVar6[0x14] + 0x3c) = 2;
    *(undefined4 *)(plVar6[0x1a] + 0x3c) = 2;
    if (plStack_1c0 != (long *)0x0) {
      plVar5 = plStack_1c0 + 1;
      do {
        lVar10 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_1c0 + 0x10))(plStack_1c0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1c0);
      }
    }
    FUN_109c180ec(auStack_178);
    if (plStack_1b0 != (long *)0x0) {
      plVar5 = plStack_1b0 + 1;
      do {
        lVar10 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_1b0 + 0x10))(plStack_1b0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1b0);
      }
    }
    plVar4 = alStack_130;
    FUN_109c180ec();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return plVar6;
  }
  ___stack_chk_fail();
  FUN_109c180ec(auStack_178);
  FUN_10959b818(auStack_1b8);
  FUN_109c180ec(alStack_130);
  __Unwind_Resume();
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = (long *)0xe0;
  __Znwm();
  plVar5 = plVar6;
  FUN_109c5e4b4();
  *(undefined1 *)(plVar6 + 0x12) = 1;
  *(undefined8 *)((long)plVar6 + 0x94) = *(undefined8 *)((long)plVar4 + 0x1ac);
  *(undefined4 *)((long)plVar6 + 0x9c) = *(undefined4 *)((long)plVar4 + 0x1b4);
  if (1 < (int)plVar4[5]) {
    puVar11 = (ulong *)(plVar4 + 4);
    uVar9 = *puVar11;
    bVar3 = (uVar9 & 1) != 0;
    puVar1 = puVar11;
    if (bVar3) {
      puVar1 = (ulong *)(uVar9 + 7);
    }
    uVar13 = *puVar1;
    uStack_2cc = *(undefined4 *)(uVar13 + 0x38);
    uStack_2c8 = 0;
    uStack_2c0 = 0;
    uStack_2d0 = 1;
    puVar1 = puVar11;
    if (bVar3) {
      puVar1 = (ulong *)(uVar9 + 0xf);
    }
    uVar9 = *puVar1;
    uStack_2e4 = *(undefined4 *)(uVar9 + 0x38);
    uStack_2e0 = 0;
    uStack_2d8 = 0;
    uStack_2e8 = 1;
    FUN_109c31d7c(auStack_2f8,alStack_270);
    if ((int)plVar4[5] == 3) {
      if ((*puVar11 & 1) != 0) {
        puVar11 = (ulong *)(*puVar11 + 0x17);
      }
      iStack_2b4 = *(int *)(*puVar11 + 0x38);
      uStack_2b0 = 0;
      uStack_2a8 = 0;
      uStack_2b8 = 1;
      FUN_109c1a120(alStack_270,*puVar8,&uStack_2b8,*(undefined8 *)(*puVar11 + 0x40),
                    (long)iStack_2b4 & 0x3fffffffffffffff);
      func_0x000109c18360(auStack_2f8,alStack_270);
      FUN_109c180ec(alStack_270);
    }
    FUN_109c1a120(alStack_270,*puVar8,&uStack_2d0,*(undefined8 *)(uVar13 + 0x40),
                  (long)*(int *)(uVar13 + 0x38) & 0x3fffffffffffffff);
    FUN_109c18570(auStack_308,alStack_270);
    FUN_109c1a120(&uStack_2b8,*puVar8,&uStack_2e8,*(undefined8 *)(uVar9 + 0x40),
                  (long)*(int *)(uVar9 + 0x38) & 0x3fffffffffffffff);
    FUN_109c18570(auStack_318,&uStack_2b8);
    func_0x000109c1e534(plVar6 + 0x14,auStack_308);
    func_0x000109c1e534(plVar6 + 0x16,auStack_318);
    func_0x000109c1e534(plVar6 + 0x18,auStack_2f8);
    *(undefined4 *)(plVar6[0x14] + 0x3c) = 2;
    *(undefined4 *)(plVar6[0x16] + 0x3c) = 2;
    *(undefined4 *)(plVar6[0x18] + 0x3c) = 2;
    if (plStack_310 != (long *)0x0) {
      plVar5 = plStack_310 + 1;
      do {
        lVar10 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_310 + 0x10))(plStack_310);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_310);
      }
    }
    FUN_109c180ec(&uStack_2b8);
    if (plStack_300 != (long *)0x0) {
      plVar5 = plStack_300 + 1;
      do {
        lVar10 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_300 + 0x10))(plStack_300);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_300);
      }
    }
    plVar5 = alStack_270;
    FUN_109c180ec();
    if (plStack_2f0 != (long *)0x0) {
      plVar4 = plStack_2f0 + 1;
      do {
        lVar10 = *plVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_2f0 + 0x10))(plStack_2f0);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        plVar5 = plStack_2f0;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return plVar6;
  }
  ___stack_chk_fail();
  FUN_109c180ec(alStack_270);
  FUN_10959b818(auStack_2f8);
  __Unwind_Resume();
  plVar4 = (long *)0xa8;
  __Znwm(0xa8);
  FUN_109c60300();
  if ((int)plVar5[0x1d] != 0) {
    lVar10 = plVar5[0x1e];
    lVar12 = (long)(int)plVar5[0x1d] << 2;
    do {
      FUN_10923b3a0(plVar4 + 0x12,lVar10);
      lVar10 = lVar10 + 4;
      lVar12 = lVar12 + -4;
    } while (lVar12 != 0);
  }
  return plVar4;
}



/* Entry: 109c476bc; end: 109c478b7;  */

long * FUN_109c476bc(long param_1,undefined8 *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  ulong *puVar10;
  long lVar11;
  ulong uVar12;
  undefined1 auStack_268 [8];
  long *plStack_260;
  undefined1 auStack_258 [8];
  long *plStack_250;
  undefined1 auStack_248 [8];
  long *plStack_240;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined4 uStack_208;
  int iStack_204;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long alStack_1c0 [9];
  long lStack_178;
  undefined8 uStack_118;
  long *plStack_110;
  undefined1 auStack_108 [8];
  long *plStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  int iStack_dc;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [72];
  long alStack_80 [9];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = (long *)0xe0;
  puVar7 = param_2;
  __Znwm();
  plVar6 = plVar4;
  FUN_109c5e4b4();
  if (*(int *)(param_1 + 0x28) == 2) {
    puVar10 = (ulong *)(param_1 + 0x20);
    uVar8 = *puVar10;
    bVar3 = (uVar8 & 1) != 0;
    puVar1 = puVar10;
    if (bVar3) {
      puVar1 = (ulong *)(uVar8 + 7);
    }
    iStack_dc = *(int *)(*puVar1 + 0x38);
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e0 = 1;
    if (bVar3) {
      puVar10 = (ulong *)(uVar8 + 0xf);
    }
    uVar8 = *puVar10;
    uStack_f4 = *(undefined4 *)(uVar8 + 0x38);
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_f8 = 1;
    FUN_109c1a120(alStack_80,*param_2,&uStack_e0,*(undefined8 *)(*puVar1 + 0x40),
                  (long)iStack_dc & 0x3fffffffffffffff);
    FUN_109c18570(auStack_108,alStack_80);
    FUN_109c1a120(auStack_c8,*param_2,&uStack_f8,*(undefined8 *)(uVar8 + 0x40),
                  (long)*(int *)(uVar8 + 0x38) & 0x3fffffffffffffff);
    FUN_109c18570(&uStack_118,auStack_c8);
    func_0x000109c1e534(plVar4 + 0x14,auStack_108);
    puVar7 = &uStack_118;
    func_0x000109c1e534(plVar4 + 0x1a);
    *(undefined4 *)(plVar4[0x14] + 0x3c) = 2;
    *(undefined4 *)(plVar4[0x1a] + 0x3c) = 2;
    if (plStack_110 != (long *)0x0) {
      plVar6 = plStack_110 + 1;
      do {
        lVar9 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_110 + 0x10))(plStack_110);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_110);
      }
    }
    FUN_109c180ec(auStack_c8);
    if (plStack_100 != (long *)0x0) {
      plVar6 = plStack_100 + 1;
      do {
        lVar9 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_100 + 0x10))(plStack_100);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_100);
      }
    }
    plVar6 = alStack_80;
    FUN_109c180ec();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar4;
  }
  ___stack_chk_fail();
  FUN_109c180ec(auStack_c8);
  FUN_10959b818(auStack_108);
  FUN_109c180ec(alStack_80);
  __Unwind_Resume();
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = (long *)0xe0;
  __Znwm();
  plVar4 = plVar5;
  FUN_109c5e4b4();
  *(undefined1 *)(plVar5 + 0x12) = 1;
  *(undefined8 *)((long)plVar5 + 0x94) = *(undefined8 *)((long)plVar6 + 0x1ac);
  *(undefined4 *)((long)plVar5 + 0x9c) = *(undefined4 *)((long)plVar6 + 0x1b4);
  if (1 < (int)plVar6[5]) {
    puVar10 = (ulong *)(plVar6 + 4);
    uVar8 = *puVar10;
    bVar3 = (uVar8 & 1) != 0;
    puVar1 = puVar10;
    if (bVar3) {
      puVar1 = (ulong *)(uVar8 + 7);
    }
    uVar12 = *puVar1;
    uStack_21c = *(undefined4 *)(uVar12 + 0x38);
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_220 = 1;
    puVar1 = puVar10;
    if (bVar3) {
      puVar1 = (ulong *)(uVar8 + 0xf);
    }
    uVar8 = *puVar1;
    uStack_234 = *(undefined4 *)(uVar8 + 0x38);
    uStack_230 = 0;
    uStack_228 = 0;
    uStack_238 = 1;
    FUN_109c31d7c(auStack_248,alStack_1c0);
    if ((int)plVar6[5] == 3) {
      if ((*puVar10 & 1) != 0) {
        puVar10 = (ulong *)(*puVar10 + 0x17);
      }
      iStack_204 = *(int *)(*puVar10 + 0x38);
      uStack_200 = 0;
      uStack_1f8 = 0;
      uStack_208 = 1;
      FUN_109c1a120(alStack_1c0,*puVar7,&uStack_208,*(undefined8 *)(*puVar10 + 0x40),
                    (long)iStack_204 & 0x3fffffffffffffff);
      func_0x000109c18360(auStack_248,alStack_1c0);
      FUN_109c180ec(alStack_1c0);
    }
    FUN_109c1a120(alStack_1c0,*puVar7,&uStack_220,*(undefined8 *)(uVar12 + 0x40),
                  (long)*(int *)(uVar12 + 0x38) & 0x3fffffffffffffff);
    FUN_109c18570(auStack_258,alStack_1c0);
    FUN_109c1a120(&uStack_208,*puVar7,&uStack_238,*(undefined8 *)(uVar8 + 0x40),
                  (long)*(int *)(uVar8 + 0x38) & 0x3fffffffffffffff);
    FUN_109c18570(auStack_268,&uStack_208);
    func_0x000109c1e534(plVar5 + 0x14,auStack_258);
    func_0x000109c1e534(plVar5 + 0x16,auStack_268);
    func_0x000109c1e534(plVar5 + 0x18,auStack_248);
    *(undefined4 *)(plVar5[0x14] + 0x3c) = 2;
    *(undefined4 *)(plVar5[0x16] + 0x3c) = 2;
    *(undefined4 *)(plVar5[0x18] + 0x3c) = 2;
    if (plStack_260 != (long *)0x0) {
      plVar6 = plStack_260 + 1;
      do {
        lVar9 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_260 + 0x10))(plStack_260);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_260);
      }
    }
    FUN_109c180ec(&uStack_208);
    if (plStack_250 != (long *)0x0) {
      plVar6 = plStack_250 + 1;
      do {
        lVar9 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_250 + 0x10))(plStack_250);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_250);
      }
    }
    plVar4 = alStack_1c0;
    FUN_109c180ec();
    if (plStack_240 != (long *)0x0) {
      plVar6 = plStack_240 + 1;
      do {
        lVar9 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_240 + 0x10))(plStack_240);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        plVar4 = plStack_240;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return plVar5;
  }
  ___stack_chk_fail();
  FUN_109c180ec(alStack_1c0);
  FUN_10959b818(auStack_248);
  __Unwind_Resume();
  plVar6 = (long *)0xa8;
  __Znwm(0xa8);
  FUN_109c60300();
  if ((int)plVar4[0x1d] != 0) {
    lVar9 = plVar4[0x1e];
    lVar11 = (long)(int)plVar4[0x1d] << 2;
    do {
      FUN_10923b3a0(plVar6 + 0x12,lVar9);
      lVar9 = lVar9 + 4;
      lVar11 = lVar11 + -4;
    } while (lVar11 != 0);
  }
  return plVar6;
}



/* Entry: 109c478b8; end: 109c47baf;  */

long * FUN_109c478b8(long param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong *puVar11;
  undefined1 auStack_148 [8];
  long *plStack_140;
  undefined1 auStack_138 [8];
  long *plStack_130;
  undefined1 auStack_128 [8];
  long *plStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  int iStack_e4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long alStack_a0 [9];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = (long *)0xe0;
  __Znwm();
  plVar6 = plVar5;
  FUN_109c5e4b4();
  *(undefined1 *)(plVar5 + 0x12) = 1;
  *(undefined8 *)((long)plVar5 + 0x94) = *(undefined8 *)(param_1 + 0x1ac);
  *(undefined4 *)((long)plVar5 + 0x9c) = *(undefined4 *)(param_1 + 0x1b4);
  if (1 < *(int *)(param_1 + 0x28)) {
    puVar11 = (ulong *)(param_1 + 0x20);
    uVar7 = *puVar11;
    bVar4 = (uVar7 & 1) != 0;
    puVar2 = puVar11;
    if (bVar4) {
      puVar2 = (ulong *)(uVar7 + 7);
    }
    uVar10 = *puVar2;
    uStack_fc = *(undefined4 *)(uVar10 + 0x38);
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_100 = 1;
    puVar2 = puVar11;
    if (bVar4) {
      puVar2 = (ulong *)(uVar7 + 0xf);
    }
    uVar7 = *puVar2;
    uStack_114 = *(undefined4 *)(uVar7 + 0x38);
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_118 = 1;
    FUN_109c31d7c(auStack_128,alStack_a0);
    if (*(int *)(param_1 + 0x28) == 3) {
      if ((*puVar11 & 1) != 0) {
        puVar11 = (ulong *)(*puVar11 + 0x17);
      }
      iStack_e4 = *(int *)(*puVar11 + 0x38);
      uStack_e0 = 0;
      uStack_d8 = 0;
      uStack_e8 = 1;
      FUN_109c1a120(alStack_a0,*param_2,&uStack_e8,*(undefined8 *)(*puVar11 + 0x40),
                    (long)iStack_e4 & 0x3fffffffffffffff);
      func_0x000109c18360(auStack_128,alStack_a0);
      FUN_109c180ec(alStack_a0);
    }
    FUN_109c1a120(alStack_a0,*param_2,&uStack_100,*(undefined8 *)(uVar10 + 0x40),
                  (long)*(int *)(uVar10 + 0x38) & 0x3fffffffffffffff);
    FUN_109c18570(auStack_138,alStack_a0);
    FUN_109c1a120(&uStack_e8,*param_2,&uStack_118,*(undefined8 *)(uVar7 + 0x40),
                  (long)*(int *)(uVar7 + 0x38) & 0x3fffffffffffffff);
    FUN_109c18570(auStack_148,&uStack_e8);
    func_0x000109c1e534(plVar5 + 0x14,auStack_138);
    func_0x000109c1e534(plVar5 + 0x16,auStack_148);
    func_0x000109c1e534(plVar5 + 0x18,auStack_128);
    *(undefined4 *)(plVar5[0x14] + 0x3c) = 2;
    *(undefined4 *)(plVar5[0x16] + 0x3c) = 2;
    *(undefined4 *)(plVar5[0x18] + 0x3c) = 2;
    if (plStack_140 != (long *)0x0) {
      plVar6 = plStack_140 + 1;
      do {
        lVar8 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_140 + 0x10))(plStack_140);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_140);
      }
    }
    FUN_109c180ec(&uStack_e8);
    if (plStack_130 != (long *)0x0) {
      plVar6 = plStack_130 + 1;
      do {
        lVar8 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_130 + 0x10))(plStack_130);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_130);
      }
    }
    plVar6 = alStack_a0;
    FUN_109c180ec();
    if (plStack_120 != (long *)0x0) {
      plVar1 = plStack_120 + 1;
      do {
        lVar8 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_120 + 0x10))(plStack_120);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        plVar6 = plStack_120;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return plVar5;
  }
  ___stack_chk_fail();
  FUN_109c180ec(alStack_a0);
  FUN_10959b818(auStack_128);
  __Unwind_Resume();
  plVar5 = (long *)0xa8;
  __Znwm(0xa8);
  FUN_109c60300();
  if ((int)plVar6[0x1d] != 0) {
    lVar8 = plVar6[0x1e];
    lVar9 = (long)(int)plVar6[0x1d] << 2;
    do {
      FUN_10923b3a0(plVar5 + 0x12,lVar8);
      lVar8 = lVar8 + 4;
      lVar9 = lVar9 + -4;
    } while (lVar9 != 0);
  }
  return plVar5;
}



/* Entry: 109c47bb0; end: 109c47c23;  */

long FUN_109c47bb0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = 0xa8;
  __Znwm(0xa8);
  FUN_109c60300();
  if (*(int *)(param_1 + 0xe8) != 0) {
    lVar2 = *(long *)(param_1 + 0xf0);
    lVar3 = (long)*(int *)(param_1 + 0xe8) << 2;
    do {
      FUN_10923b3a0(lVar1 + 0x90,lVar2);
      lVar2 = lVar2 + 4;
      lVar3 = lVar3 + -4;
    } while (lVar3 != 0);
  }
  return lVar1;
}



/* Entry: 109c47c24; end: 109c47e57;  */

long FUN_109c47c24(long param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong *puVar2;
  uint uVar3;
  char cVar4;
  long *plVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong *puVar11;
  undefined4 uStack_a8;
  undefined8 uStack_a4;
  undefined8 uStack_9c;
  undefined4 uStack_94;
  long lStack_90;
  long *plStack_88;
  undefined1 auStack_80 [72];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = 0x110;
  __Znwm();
  FUN_109c39f14();
  *(undefined1 *)(lVar8 + 0x10c) = *(undefined1 *)(param_1 + 0x1a6);
  *(undefined4 *)(lVar8 + 0xa8) = *(undefined4 *)(param_1 + 0x118);
  lStack_90 = 0;
  plStack_88 = (long *)0x0;
  if (0 < *(int *)(param_1 + 0x28)) {
    puVar11 = (ulong *)(param_1 + 0x20);
    puVar2 = puVar11;
    if ((*puVar11 & 1) != 0) {
      puVar2 = (ulong *)(*puVar11 + 7);
    }
    uVar9 = *puVar2;
    if (*(int *)(uVar9 + 0x28) == 2) {
      uStack_a4 = **(undefined8 **)(uVar9 + 0x30);
      uStack_a8 = 2;
      uStack_9c = 0;
      uStack_94 = 0;
      if ((*(byte *)(param_1 + 0x1a4) & 1) != 0) goto LAB_109c47e0c;
      FUN_109c19dfc(auStack_80,*param_2,&uStack_a8,*(undefined8 *)(uVar9 + 0x20),
                    ((long)*(int *)(uVar9 + 0x18) & 0x3fffffffffffffffU) << 1);
      func_0x000109c18360(&lStack_90,auStack_80);
      FUN_109c180ec(auStack_80);
      *(undefined4 *)(lStack_90 + 0x3c) = 2;
      if ((*puVar11 & 1) != 0) {
        puVar11 = (ulong *)(*puVar11 + 7);
      }
      uVar9 = *puVar11;
      *(undefined4 *)(lStack_90 + 0x4c) = *(undefined4 *)(uVar9 + 0x70);
      *(undefined4 *)(lStack_90 + 0x50) = *(undefined4 *)(uVar9 + 0x68);
    }
  }
  func_0x000109c1e534(lVar8 + 0xb0,&lStack_90);
  uVar3 = *(uint *)(param_1 + 0x28);
  if ((int)uVar3 < 1) {
    *(undefined1 *)(lVar8 + 0xc0) = 0;
  }
  else {
    uVar9 = *(ulong *)(param_1 + 0x20);
    puVar2 = (ulong *)(param_1 + 0x20);
    if ((uVar9 & 1) != 0) {
      puVar2 = (ulong *)(uVar9 + 7);
    }
    bVar7 = *(int *)(puVar2[(ulong)uVar3 - 1] + 0x28) == 1;
    *(bool *)(lVar8 + 0xc0) = bVar7;
    if (bVar7) {
      FUN_109c3cc9c(lVar8,param_1,uVar3 - 1,*(undefined4 *)(lVar8 + 0xa8),param_2);
    }
  }
  plVar5 = plStack_88;
  *(undefined4 *)(lVar8 + 0x78) = *(undefined4 *)(param_1 + 0x200);
  *(undefined4 *)(lVar8 + 0x7c) = *(undefined4 *)(param_1 + 0x1a0);
  if (plStack_88 != (long *)0x0) {
    plVar1 = plStack_88 + 1;
    do {
      lVar10 = *plVar1;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return lVar8;
  }
  ___stack_chk_fail();
LAB_109c47e0c:
  func_0x000105688514(&UNK_10f5a5610);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x109c47e1c);
  (*pcVar6)();
}



/* Entry: 109c47e58; end: 109c47ec7;  */

long FUN_109c47e58(long param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  int *piVar10;
  long lVar11;
  ulong *puVar12;
  undefined *puVar13;
  undefined1 *puStack_140;
  ulong uStack_138;
  byte bStack_129;
  undefined8 auStack_128 [2];
  char cStack_111;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  long *plStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  int iStack_bc;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  char *pcStack_98;
  undefined8 uStack_90;
  long lStack_68;
  
  if ((*(int *)(param_1 + 0x1b8) == 4) || (*(int *)(param_1 + 0x1b8) == 1)) {
    lVar6 = 0x98;
    __Znwm(0x98);
    FUN_109c25dc8();
    return lVar6;
  }
  puVar13 = &UNK_10f5a3de6;
  func_0x000105688514();
  __ZdlPv();
  __Unwind_Resume();
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_b0 = &UNK_10f5a562f;
  uStack_a8 = 0x1b;
  pcStack_98 = "";
  uStack_90 = 0;
  uStack_a0 = puVar13;
  FUN_109c3ca80(&puStack_b0,&UNK_10f5a564b,8);
  if (*(int *)(puVar13 + 0x28) == 2) {
    puVar12 = (ulong *)(puVar13 + 0x20);
    puVar2 = puVar12;
    if ((*puVar12 & 1) != 0) {
      puVar2 = (ulong *)(*puVar12 + 7);
    }
    puVar13 = (undefined *)*puVar2;
    puStack_b0 = &UNK_10f5a562f;
    uStack_a8 = 0x1b;
    pcStack_98 = "paddings blob";
    uStack_90 = 0xd;
    uStack_a0 = puVar13;
    if (*(int *)(puVar13 + 0x28) == 2) {
      piVar10 = *(int **)(puVar13 + 0x30);
      if (*piVar10 < 0) {
        uVar9 = 0;
      }
      else {
        if (-1 < piVar10[1]) {
          lVar6 = (long)piVar10[1] * (long)*piVar10;
          if (lVar6 - *(int *)(puVar13 + 0x38) == 0 || lVar6 < *(int *)(puVar13 + 0x38)) {
            puStack_b0 = &UNK_10f5a562f;
            uStack_a8 = 0x1b;
            uStack_a0 = (undefined *)CONCAT44((int)((ulong)puVar13 >> 0x20),piVar10[1]);
            pcStack_98 = "paddings inner dim";
            uStack_90 = 0x12;
            FUN_109c11768(&puStack_b0,2,&UNK_10f5a5675,0x10);
            lVar6 = 0xa8;
            __Znwm();
            FUN_109c26f9c();
            uStack_d0 = 2;
            uStack_c4 = 0;
            uStack_c0 = 0;
            iStack_bc = 0;
            uStack_cc = (undefined4)**(undefined8 **)(puVar13 + 0x30);
            uStack_c8 = (undefined4)((ulong)**(undefined8 **)(puVar13 + 0x30) >> 0x20);
            FUN_109c1a120(&puStack_b0,*param_2,&uStack_d0,*(undefined8 *)(puVar13 + 0x40),
                          (long)*(int *)(puVar13 + 0x38) & 0x3fffffffffffffff);
            FUN_109c18570(&uStack_f0,&puStack_b0);
            func_0x000109c1e534(lVar6 + 0x90,&uStack_f0);
            if (plStack_e8 != (long *)0x0) {
              plVar1 = plStack_e8 + 1;
              do {
                lVar11 = *plVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar4) {
                  *plVar1 = lVar11 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (lVar11 == 0) {
                (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_e8);
              }
            }
            ppuVar7 = &puStack_b0;
            FUN_109c180ec();
            puVar2 = puVar12;
            if ((*puVar12 & 1) != 0) {
              puVar2 = (ulong *)(*puVar12 + 0xf);
            }
            uStack_a0 = (undefined *)*puVar2;
            puStack_b0 = &UNK_10f5a562f;
            uStack_a8 = 0x1b;
            pcStack_98 = "pad value blob";
            uStack_90 = 0xe;
            FUN_109c41318();
            if ((*puVar12 & 1) != 0) {
              puVar12 = (ulong *)(*puVar12 + 0xf);
            }
            *(undefined4 *)(lVar6 + 0xa0) = **(undefined4 **)(*puVar12 + 0x20);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
              return lVar6;
            }
            ___stack_chk_fail();
            if (iStack_bc < 0) {
              __ZdlPv(CONCAT44(uStack_cc,uStack_d0));
            }
            if ((char)bStack_129 < '\0') {
              __ZdlPv(puStack_140);
            }
            if (uStack_e0._7_1_ < '\0') {
              __ZdlPv(uStack_f0);
            }
            if (uStack_100._7_1_ < '\0') {
              __ZdlPv(uStack_110);
            }
            if (cStack_111 < '\0') {
              __ZdlPv(auStack_128[0]);
            }
            __Unwind_Resume(ppuVar7);
            lVar6 = 0x90;
            __Znwm(0x90);
            FUN_109c5479c();
            return lVar6;
          }
          __ZNSt3__19to_stringEx(auStack_128);
          puVar8 = auStack_128;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                    (puVar8,0,&UNK_10f5a5bb2,0x19);
          uStack_108 = puVar8[1];
          uStack_110 = *puVar8;
          uStack_100 = puVar8[2];
          puVar8[1] = 0;
          puVar8[2] = 0;
          *puVar8 = 0;
          puVar8 = &uStack_110;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (puVar8,&UNK_10f5a5ab4,5);
          plStack_e8 = (long *)puVar8[1];
          uStack_f0 = *puVar8;
          uStack_e0 = puVar8[2];
          puVar8[1] = 0;
          puVar8[2] = 0;
          *puVar8 = 0;
          __ZNSt3__19to_stringEi(&puStack_140,*(undefined4 *)(puVar13 + 0x38));
          if (-1 < (char)bStack_129) {
            uStack_138 = (ulong)bStack_129;
            puStack_140 = (undefined1 *)&puStack_140;
          }
          puVar8 = &uStack_f0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (puVar8,puStack_140,uStack_138);
          uStack_c0 = (undefined4)puVar8[2];
          iStack_bc = (int)((ulong)puVar8[2] >> 0x20);
          uStack_c8 = (undefined4)puVar8[1];
          uStack_c4 = (undefined4)((ulong)puVar8[1] >> 0x20);
          uStack_d0 = (undefined4)*puVar8;
          uStack_cc = (undefined4)((ulong)*puVar8 >> 0x20);
          puVar8[1] = 0;
          puVar8[2] = 0;
          *puVar8 = 0;
          FUN_109c49b30(&puStack_b0,&uStack_d0);
          goto LAB_109c483b4;
        }
        uVar9 = 1;
      }
      __ZNSt3__19to_stringEi(&uStack_110,uVar9);
      puVar8 = &uStack_110;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (puVar8,0,&UNK_10f5a5b95,5);
      plStack_e8 = (long *)puVar8[1];
      uStack_f0 = *puVar8;
      uStack_e0 = puVar8[2];
      puVar8[1] = 0;
      puVar8[2] = 0;
      *puVar8 = 0;
      puVar8 = &uStack_f0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar8,&UNK_10f5a5b9b,0x16);
      uStack_c0 = (undefined4)puVar8[2];
      iStack_bc = (int)((ulong)puVar8[2] >> 0x20);
      uStack_c8 = (undefined4)puVar8[1];
      uStack_c4 = (undefined4)((ulong)puVar8[1] >> 0x20);
      uStack_d0 = (undefined4)*puVar8;
      uStack_cc = (undefined4)((ulong)*puVar8 >> 0x20);
      puVar8[1] = 0;
      puVar8[2] = 0;
      *puVar8 = 0;
      FUN_109c49b30(&puStack_b0,&uStack_d0);
    }
    else {
      __ZNSt3__19to_stringEi(auStack_128,2);
      puVar8 = auStack_128;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (puVar8,0,&UNK_10f5a5b74,0x12);
      uStack_108 = puVar8[1];
      uStack_110 = *puVar8;
      uStack_100 = puVar8[2];
      puVar8[1] = 0;
      puVar8[2] = 0;
      *puVar8 = 0;
      puVar8 = &uStack_110;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar8,&UNK_10f5a5b87,0xd);
      plStack_e8 = (long *)puVar8[1];
      uStack_f0 = *puVar8;
      uStack_e0 = puVar8[2];
      puVar8[1] = 0;
      puVar8[2] = 0;
      *puVar8 = 0;
      __ZNSt3__19to_stringEi(&puStack_140,*(undefined4 *)(puVar13 + 0x28));
      if (-1 < (char)bStack_129) {
        uStack_138 = (ulong)bStack_129;
        puStack_140 = (undefined1 *)&puStack_140;
      }
      puVar8 = &uStack_f0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar8,puStack_140,uStack_138);
      uStack_c0 = (undefined4)puVar8[2];
      iStack_bc = (int)((ulong)puVar8[2] >> 0x20);
      uStack_c8 = (undefined4)puVar8[1];
      uStack_c4 = (undefined4)((ulong)puVar8[1] >> 0x20);
      uStack_d0 = (undefined4)*puVar8;
      uStack_cc = (undefined4)((ulong)*puVar8 >> 0x20);
      puVar8[1] = 0;
      puVar8[2] = 0;
      *puVar8 = 0;
      FUN_109c49b30(&puStack_b0,&uStack_d0);
    }
  }
  else {
    __ZNSt3__19to_stringEi(auStack_128,2);
    puVar8 = auStack_128;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (puVar8,0,&UNK_10f5a5b62,0x11);
    uStack_108 = puVar8[1];
    uStack_110 = *puVar8;
    uStack_100 = puVar8[2];
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = 0;
    puVar8 = &uStack_110;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar8,&UNK_10f5a5a7a,0xe);
    plStack_e8 = (long *)puVar8[1];
    uStack_f0 = *puVar8;
    uStack_e0 = puVar8[2];
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = 0;
    __ZNSt3__19to_stringEi(&puStack_140,*(undefined4 *)(puVar13 + 0x28));
    if (-1 < (char)bStack_129) {
      uStack_138 = (ulong)bStack_129;
      puStack_140 = (undefined1 *)&puStack_140;
    }
    puVar8 = &uStack_f0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar8,puStack_140,uStack_138);
    uStack_c0 = (undefined4)puVar8[2];
    iStack_bc = (int)((ulong)puVar8[2] >> 0x20);
    uStack_c8 = (undefined4)puVar8[1];
    uStack_c4 = (undefined4)((ulong)puVar8[1] >> 0x20);
    uStack_d0 = (undefined4)*puVar8;
    uStack_cc = (undefined4)((ulong)*puVar8 >> 0x20);
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = 0;
    FUN_109c49990(&puStack_b0,&uStack_d0);
  }
LAB_109c483b4:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109c483b8);
  (*pcVar5)();
}



/* Entry: 109c47ec8; end: 109c484e3;  */

long FUN_109c47ec8(ulong param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  int *piVar10;
  long lVar11;
  ulong *puVar12;
  ulong uVar13;
  undefined1 *puStack_120;
  ulong uStack_118;
  byte bStack_109;
  undefined8 auStack_108 [2];
  char cStack_f1;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  int iStack_9c;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  char *pcStack_78;
  undefined8 uStack_70;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = &UNK_10f5a562f;
  uStack_88 = 0x1b;
  pcStack_78 = "";
  uStack_70 = 0;
  uStack_80 = param_1;
  FUN_109c3ca80(&puStack_90,&UNK_10f5a564b,8);
  if (*(int *)(param_1 + 0x28) == 2) {
    puVar12 = (ulong *)(param_1 + 0x20);
    puVar2 = puVar12;
    if ((*puVar12 & 1) != 0) {
      puVar2 = (ulong *)(*puVar12 + 7);
    }
    uVar13 = *puVar2;
    puStack_90 = &UNK_10f5a562f;
    uStack_88 = 0x1b;
    pcStack_78 = "paddings blob";
    uStack_70 = 0xd;
    uStack_80 = uVar13;
    if (*(int *)(uVar13 + 0x28) == 2) {
      piVar10 = *(int **)(uVar13 + 0x30);
      if (*piVar10 < 0) {
        uVar9 = 0;
      }
      else {
        if (-1 < piVar10[1]) {
          lVar6 = (long)piVar10[1] * (long)*piVar10;
          if (lVar6 - *(int *)(uVar13 + 0x38) == 0 || lVar6 < *(int *)(uVar13 + 0x38)) {
            puStack_90 = &UNK_10f5a562f;
            uStack_88 = 0x1b;
            uStack_80 = CONCAT44((int)(uVar13 >> 0x20),piVar10[1]);
            pcStack_78 = "paddings inner dim";
            uStack_70 = 0x12;
            FUN_109c11768(&puStack_90,2,&UNK_10f5a5675,0x10);
            lVar6 = 0xa8;
            __Znwm();
            FUN_109c26f9c();
            uStack_b0 = 2;
            uStack_a4 = 0;
            uStack_a0 = 0;
            iStack_9c = 0;
            uStack_ac = (undefined4)**(undefined8 **)(uVar13 + 0x30);
            uStack_a8 = (undefined4)((ulong)**(undefined8 **)(uVar13 + 0x30) >> 0x20);
            FUN_109c1a120(&puStack_90,*param_2,&uStack_b0,*(undefined8 *)(uVar13 + 0x40),
                          (long)*(int *)(uVar13 + 0x38) & 0x3fffffffffffffff);
            FUN_109c18570(&uStack_d0,&puStack_90);
            func_0x000109c1e534(lVar6 + 0x90,&uStack_d0);
            if (plStack_c8 != (long *)0x0) {
              plVar1 = plStack_c8 + 1;
              do {
                lVar11 = *plVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar4) {
                  *plVar1 = lVar11 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (lVar11 == 0) {
                (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_c8);
              }
            }
            ppuVar7 = &puStack_90;
            FUN_109c180ec();
            puVar2 = puVar12;
            if ((*puVar12 & 1) != 0) {
              puVar2 = (ulong *)(*puVar12 + 0xf);
            }
            uStack_80 = *puVar2;
            puStack_90 = &UNK_10f5a562f;
            uStack_88 = 0x1b;
            pcStack_78 = "pad value blob";
            uStack_70 = 0xe;
            FUN_109c41318();
            if ((*puVar12 & 1) != 0) {
              puVar12 = (ulong *)(*puVar12 + 0xf);
            }
            *(undefined4 *)(lVar6 + 0xa0) = **(undefined4 **)(*puVar12 + 0x20);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
              ___stack_chk_fail();
              if (iStack_9c < 0) {
                __ZdlPv(CONCAT44(uStack_ac,uStack_b0));
              }
              if ((char)bStack_109 < '\0') {
                __ZdlPv(puStack_120);
              }
              if (uStack_c0._7_1_ < '\0') {
                __ZdlPv(uStack_d0);
              }
              if (uStack_e0._7_1_ < '\0') {
                __ZdlPv(uStack_f0);
              }
              if (cStack_f1 < '\0') {
                __ZdlPv(auStack_108[0]);
              }
              __Unwind_Resume(ppuVar7);
              lVar6 = 0x90;
              __Znwm(0x90);
              FUN_109c5479c();
              return lVar6;
            }
            return lVar6;
          }
          __ZNSt3__19to_stringEx(auStack_108);
          puVar8 = auStack_108;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                    (puVar8,0,&UNK_10f5a5bb2,0x19);
          uStack_e8 = puVar8[1];
          uStack_f0 = *puVar8;
          uStack_e0 = puVar8[2];
          puVar8[1] = 0;
          puVar8[2] = 0;
          *puVar8 = 0;
          puVar8 = &uStack_f0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (puVar8,&UNK_10f5a5ab4,5);
          plStack_c8 = (long *)puVar8[1];
          uStack_d0 = *puVar8;
          uStack_c0 = puVar8[2];
          puVar8[1] = 0;
          puVar8[2] = 0;
          *puVar8 = 0;
          __ZNSt3__19to_stringEi(&puStack_120,*(undefined4 *)(uVar13 + 0x38));
          if (-1 < (char)bStack_109) {
            uStack_118 = (ulong)bStack_109;
            puStack_120 = (undefined1 *)&puStack_120;
          }
          puVar8 = &uStack_d0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (puVar8,puStack_120,uStack_118);
          uStack_a0 = (undefined4)puVar8[2];
          iStack_9c = (int)((ulong)puVar8[2] >> 0x20);
          uStack_a8 = (undefined4)puVar8[1];
          uStack_a4 = (undefined4)((ulong)puVar8[1] >> 0x20);
          uStack_b0 = (undefined4)*puVar8;
          uStack_ac = (undefined4)((ulong)*puVar8 >> 0x20);
          puVar8[1] = 0;
          puVar8[2] = 0;
          *puVar8 = 0;
          FUN_109c49b30(&puStack_90,&uStack_b0);
          goto LAB_109c483b4;
        }
        uVar9 = 1;
      }
      __ZNSt3__19to_stringEi(&uStack_f0,uVar9);
      puVar8 = &uStack_f0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (puVar8,0,&UNK_10f5a5b95,5);
      plStack_c8 = (long *)puVar8[1];
      uStack_d0 = *puVar8;
      uStack_c0 = puVar8[2];
      puVar8[1] = 0;
      puVar8[2] = 0;
      *puVar8 = 0;
      puVar8 = &uStack_d0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar8,&UNK_10f5a5b9b,0x16);
      uStack_a0 = (undefined4)puVar8[2];
      iStack_9c = (int)((ulong)puVar8[2] >> 0x20);
      uStack_a8 = (undefined4)puVar8[1];
      uStack_a4 = (undefined4)((ulong)puVar8[1] >> 0x20);
      uStack_b0 = (undefined4)*puVar8;
      uStack_ac = (undefined4)((ulong)*puVar8 >> 0x20);
      puVar8[1] = 0;
      puVar8[2] = 0;
      *puVar8 = 0;
      FUN_109c49b30(&puStack_90,&uStack_b0);
    }
    else {
      __ZNSt3__19to_stringEi(auStack_108,2);
      puVar8 = auStack_108;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (puVar8,0,&UNK_10f5a5b74,0x12);
      uStack_e8 = puVar8[1];
      uStack_f0 = *puVar8;
      uStack_e0 = puVar8[2];
      puVar8[1] = 0;
      puVar8[2] = 0;
      *puVar8 = 0;
      puVar8 = &uStack_f0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar8,&UNK_10f5a5b87,0xd);
      plStack_c8 = (long *)puVar8[1];
      uStack_d0 = *puVar8;
      uStack_c0 = puVar8[2];
      puVar8[1] = 0;
      puVar8[2] = 0;
      *puVar8 = 0;
      __ZNSt3__19to_stringEi(&puStack_120,*(undefined4 *)(uVar13 + 0x28));
      if (-1 < (char)bStack_109) {
        uStack_118 = (ulong)bStack_109;
        puStack_120 = (undefined1 *)&puStack_120;
      }
      puVar8 = &uStack_d0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar8,puStack_120,uStack_118);
      uStack_a0 = (undefined4)puVar8[2];
      iStack_9c = (int)((ulong)puVar8[2] >> 0x20);
      uStack_a8 = (undefined4)puVar8[1];
      uStack_a4 = (undefined4)((ulong)puVar8[1] >> 0x20);
      uStack_b0 = (undefined4)*puVar8;
      uStack_ac = (undefined4)((ulong)*puVar8 >> 0x20);
      puVar8[1] = 0;
      puVar8[2] = 0;
      *puVar8 = 0;
      FUN_109c49b30(&puStack_90,&uStack_b0);
    }
  }
  else {
    __ZNSt3__19to_stringEi(auStack_108,2);
    puVar8 = auStack_108;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (puVar8,0,&UNK_10f5a5b62,0x11);
    uStack_e8 = puVar8[1];
    uStack_f0 = *puVar8;
    uStack_e0 = puVar8[2];
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = 0;
    puVar8 = &uStack_f0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar8,&UNK_10f5a5a7a,0xe);
    plStack_c8 = (long *)puVar8[1];
    uStack_d0 = *puVar8;
    uStack_c0 = puVar8[2];
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = 0;
    __ZNSt3__19to_stringEi(&puStack_120,*(undefined4 *)(param_1 + 0x28));
    if (-1 < (char)bStack_109) {
      uStack_118 = (ulong)bStack_109;
      puStack_120 = (undefined1 *)&puStack_120;
    }
    puVar8 = &uStack_d0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar8,puStack_120,uStack_118);
    uStack_a0 = (undefined4)puVar8[2];
    iStack_9c = (int)((ulong)puVar8[2] >> 0x20);
    uStack_a8 = (undefined4)puVar8[1];
    uStack_a4 = (undefined4)((ulong)puVar8[1] >> 0x20);
    uStack_b0 = (undefined4)*puVar8;
    uStack_ac = (undefined4)((ulong)*puVar8 >> 0x20);
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = 0;
    FUN_109c49990(&puStack_90,&uStack_b0);
  }
LAB_109c483b4:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109c483b8);
  (*pcVar5)();
}



/* Entry: 109c484e4; end: 109c48523;  */

undefined8 FUN_109c484e4(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x90;
  __Znwm(0x90);
  FUN_109c5479c();
  return uVar1;
}



/* Entry: 109c48524; end: 109c48563;  */

undefined8 FUN_109c48524(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x90;
  __Znwm(0x90);
  FUN_109c33520();
  return uVar1;
}



/* Entry: 109c48564; end: 109c485a3;  */

undefined8 FUN_109c48564(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x90;
  __Znwm(0x90);
  FUN_109c335f0();
  return uVar1;
}



/* Entry: 109c485a4; end: 109c485e3;  */

undefined8 FUN_109c485a4(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x90;
  __Znwm(0x90);
  FUN_109c336c0();
  return uVar1;
}



/* Entry: 109c485e4; end: 109c48623;  */

undefined8 FUN_109c485e4(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x90;
  __Znwm(0x90);
  FUN_109c338d0();
  return uVar1;
}



/* Entry: 109c48624; end: 109c48727;  */

long FUN_109c48624(long param_1)

{
  long lVar1;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  
  puStack_48 = &UNK_10f5a5695;
  puStack_40 = (undefined *)0x18;
  pcStack_30 = "";
  uStack_28 = 0;
  lStack_38 = param_1;
  FUN_109c3ca80(&puStack_48,&DAT_10f595cf3,5);
  FUN_109c46cf8(&puStack_48);
  lVar1 = 0xb0;
  __Znwm();
  FUN_109c5fcf0();
  *(undefined4 *)(lVar1 + 0x90) = **(undefined4 **)(param_1 + 0xf0);
  puStack_40 = (undefined *)0x0;
  lStack_38 = 0;
  puStack_48 = (undefined *)0x0;
  FUN_10955a79c(&puStack_48,*(long *)(param_1 + 0x50),
                *(long *)(param_1 + 0x50) + (long)*(int *)(param_1 + 0x48) * 4);
  FUN_10928555c(lVar1 + 0x98,puStack_48,puStack_40,(long)puStack_40 - (long)puStack_48 >> 2);
  if (puStack_48 != (undefined *)0x0) {
    puStack_40 = puStack_48;
    __ZdlPv();
  }
  return lVar1;
}



/* Entry: 109c48728; end: 109c48767;  */

undefined8 FUN_109c48728(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x90;
  __Znwm(0x90);
  FUN_109c5dc5c();
  return uVar1;
}



/* Entry: 109c48768; end: 109c488c7;  */

undefined8 * FUN_109c48768(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  puVar1 = (undefined8 *)0xb8;
  __Znwm();
  puVar1[1] = &PTR_FUN_110b2df28;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  *(undefined8 *)((long)puVar1 + 0x61) = 0;
  *(undefined8 *)((long)puVar1 + 0x59) = 0;
  *(undefined2 *)((long)puVar1 + 0x69) = 1;
  *(undefined1 *)((long)puVar1 + 0x6b) = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0x3f800000;
  *(undefined1 *)(puVar1 + 0x11) = 0;
  *(undefined1 *)((long)puVar1 + 0x8c) = 0;
  *(undefined1 *)(puVar1 + 0x12) = 0;
  *(undefined1 *)((long)puVar1 + 0x94) = 0;
  *puVar1 = &PTR_LAB_110b2df00;
  puVar1[0x13] = *(undefined8 *)(param_1 + 0x1e0);
  *(undefined4 *)(puVar1 + 0x14) = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  func_0x000107c31940(auStack_68,PTR_DAT_1132edbf8);
  puVar2 = auStack_68;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (puVar2,0,&UNK_10f5a582c,7);
  uStack_48 = puVar2[1];
  uStack_50 = *puVar2;
  lStack_40 = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar1 + 7,&uStack_50);
  if (lStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  *(undefined1 *)((long)puVar1 + 0x6b) = 1;
  return puVar1 + 1;
}



/* Entry: 109c488c8; end: 109c48a2b;  */

undefined8 * FUN_109c488c8(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  puVar1 = (undefined8 *)0xb0;
  __Znwm();
  uVar3 = *(undefined4 *)(param_1 + 0x1e0);
  puVar1[1] = &PTR_FUN_110b2dfb0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  *(undefined8 *)((long)puVar1 + 0x61) = 0;
  *(undefined8 *)((long)puVar1 + 0x59) = 0;
  *(undefined2 *)((long)puVar1 + 0x69) = 1;
  *(undefined1 *)((long)puVar1 + 0x6b) = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0x3f800000;
  *(undefined1 *)(puVar1 + 0x11) = 0;
  *(undefined1 *)((long)puVar1 + 0x8c) = 0;
  *(undefined1 *)(puVar1 + 0x12) = 0;
  *(undefined1 *)((long)puVar1 + 0x94) = 0;
  *puVar1 = &PTR_FUN_110b2df88;
  *(undefined4 *)(puVar1 + 0x13) = uVar3;
  *(undefined8 *)((long)puVar1 + 0xa4) = 0;
  *(undefined8 *)((long)puVar1 + 0x9c) = 0;
  *(undefined4 *)((long)puVar1 + 0xac) = 0;
  func_0x000107c31940(auStack_68,PTR_DAT_1132edc00);
  puVar2 = auStack_68;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (puVar2,0,&UNK_10f5a582c,7);
  uStack_48 = puVar2[1];
  uStack_50 = *puVar2;
  lStack_40 = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar1 + 7,&uStack_50);
  if (lStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  *(undefined1 *)((long)puVar1 + 0x6b) = 1;
  return puVar1 + 1;
}



/* Entry: 109c48a2c; end: 109c48b83;  */

undefined8 * FUN_109c48a2c(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  puVar1 = (undefined8 *)0xb0;
  __Znwm();
  puVar1[1] = &PTR_FUN_110b2e038;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  *(undefined8 *)((long)puVar1 + 0x61) = 0;
  *(undefined8 *)((long)puVar1 + 0x59) = 0;
  *(undefined2 *)((long)puVar1 + 0x69) = 1;
  *(undefined1 *)((long)puVar1 + 0x6b) = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0x3f800000;
  *(undefined1 *)(puVar1 + 0x11) = 0;
  *(undefined1 *)((long)puVar1 + 0x8c) = 0;
  *(undefined1 *)(puVar1 + 0x12) = 0;
  *(undefined1 *)((long)puVar1 + 0x94) = 0;
  *puVar1 = &PTR_FUN_110b2e010;
  *(undefined8 *)((long)puVar1 + 0xa4) = 0;
  *(undefined8 *)((long)puVar1 + 0x9c) = 0;
  *(undefined4 *)((long)puVar1 + 0xac) = 0;
  func_0x000107c31940(auStack_68,PTR_DAT_1132edc08);
  puVar2 = auStack_68;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (puVar2,0,&UNK_10f5a582c,7);
  uStack_48 = puVar2[1];
  uStack_50 = *puVar2;
  lStack_40 = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar1 + 7,&uStack_50);
  if (lStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  *(undefined1 *)((long)puVar1 + 0x6b) = 1;
  return puVar1 + 1;
}



/* Entry: 109c48b84; end: 109c48ce7;  */

undefined8 * FUN_109c48b84(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  puVar1 = (undefined8 *)0xb0;
  __Znwm();
  uVar3 = *(undefined4 *)(param_1 + 0x1e0);
  puVar1[1] = &PTR_FUN_110b2e0c0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  *(undefined8 *)((long)puVar1 + 0x61) = 0;
  *(undefined8 *)((long)puVar1 + 0x59) = 0;
  *(undefined2 *)((long)puVar1 + 0x69) = 1;
  *(undefined1 *)((long)puVar1 + 0x6b) = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0x3f800000;
  *(undefined1 *)(puVar1 + 0x11) = 0;
  *(undefined1 *)((long)puVar1 + 0x8c) = 0;
  *(undefined1 *)(puVar1 + 0x12) = 0;
  *(undefined1 *)((long)puVar1 + 0x94) = 0;
  *puVar1 = &PTR_FUN_110b2e098;
  *(undefined4 *)(puVar1 + 0x13) = uVar3;
  *(undefined8 *)((long)puVar1 + 0xa4) = 0;
  *(undefined8 *)((long)puVar1 + 0x9c) = 0;
  *(undefined4 *)((long)puVar1 + 0xac) = 0;
  func_0x000107c31940(auStack_68,PTR_DAT_1132edc10);
  puVar2 = auStack_68;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (puVar2,0,&UNK_10f5a582c,7);
  uStack_48 = puVar2[1];
  uStack_50 = *puVar2;
  lStack_40 = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar1 + 7,&uStack_50);
  if (lStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  *(undefined1 *)((long)puVar1 + 0x6b) = 1;
  return puVar1 + 1;
}



/* Entry: 109c48ce8; end: 109c48e4b;  */

undefined8 * FUN_109c48ce8(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  puVar1 = (undefined8 *)0xb0;
  __Znwm();
  uVar3 = *(undefined4 *)(param_1 + 0x1e0);
  puVar1[1] = &PTR_FUN_110b2e148;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  *(undefined8 *)((long)puVar1 + 0x61) = 0;
  *(undefined8 *)((long)puVar1 + 0x59) = 0;
  *(undefined2 *)((long)puVar1 + 0x69) = 1;
  *(undefined1 *)((long)puVar1 + 0x6b) = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0x3f800000;
  *(undefined1 *)(puVar1 + 0x11) = 0;
  *(undefined1 *)((long)puVar1 + 0x8c) = 0;
  *(undefined1 *)(puVar1 + 0x12) = 0;
  *(undefined1 *)((long)puVar1 + 0x94) = 0;
  *puVar1 = &PTR_FUN_110b2e120;
  *(undefined4 *)(puVar1 + 0x13) = uVar3;
  *(undefined8 *)((long)puVar1 + 0xa4) = 0;
  *(undefined8 *)((long)puVar1 + 0x9c) = 0;
  *(undefined4 *)((long)puVar1 + 0xac) = 0;
  func_0x000107c31940(auStack_68,PTR_DAT_1132edc18);
  puVar2 = auStack_68;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (puVar2,0,&UNK_10f5a582c,7);
  uStack_48 = puVar2[1];
  uStack_50 = *puVar2;
  lStack_40 = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar1 + 7,&uStack_50);
  if (lStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  *(undefined1 *)((long)puVar1 + 0x6b) = 1;
  return puVar1 + 1;
}



/* Entry: 109c48e4c; end: 109c48fd7;  */

undefined8 * FUN_109c48e4c(long param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  puVar2 = (undefined8 *)0xb8;
  __Znwm();
  if (*(uint *)(param_1 + 0x1cc) < 3) {
    puVar4 = (&PTR_FUN_110b2e2a8)[*(uint *)(param_1 + 0x1cc)];
    puVar2[1] = &PTR_FUN_110b2e1d0;
    *(undefined8 *)((long)puVar2 + 0x61) = 0;
    *(undefined8 *)((long)puVar2 + 0x59) = 0;
    puVar2[9] = 0;
    puVar2[8] = 0;
    puVar2[0xb] = 0;
    puVar2[10] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[7] = 0;
    puVar2[6] = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    *(undefined2 *)((long)puVar2 + 0x69) = 1;
    *(undefined1 *)((long)puVar2 + 0x6b) = 0;
    puVar2[0xe] = 0;
    puVar2[0xf] = 0;
    puVar2[0x10] = 0x3f800000;
    *(undefined1 *)(puVar2 + 0x11) = 0;
    *(undefined1 *)((long)puVar2 + 0x8c) = 0;
    *(undefined1 *)(puVar2 + 0x12) = 0;
    *(undefined1 *)((long)puVar2 + 0x94) = 0;
    *puVar2 = &PTR_FUN_110b2e1a8;
    puVar2[0x13] = puVar4;
    *(undefined4 *)(puVar2 + 0x14) = 0;
    puVar2[0x15] = 0;
    puVar2[0x16] = 0;
    func_0x000107c31940(auStack_68,PTR_DAT_1132edc20);
    puVar3 = auStack_68;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (puVar3,0,&UNK_10f5a582c,7);
    uStack_48 = puVar3[1];
    uStack_50 = *puVar3;
    lStack_40 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar2 + 7,&uStack_50);
    if (lStack_40 < 0) {
      __ZdlPv(uStack_50);
    }
    if (cStack_51 < '\0') {
      __ZdlPv(auStack_68[0]);
    }
    *(undefined1 *)((long)puVar2 + 0x6b) = 1;
    return puVar2 + 1;
  }
  func_0x000105688514(&UNK_10f5a37f4);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109c48f84);
  (*pcVar1)();
}



/* Entry: 109c48fd8; end: 109c4912f;  */

undefined8 * FUN_109c48fd8(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  puVar1 = (undefined8 *)0xb0;
  __Znwm();
  puVar1[1] = &PTR_FUN_110b2e258;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  *(undefined8 *)((long)puVar1 + 0x61) = 0;
  *(undefined8 *)((long)puVar1 + 0x59) = 0;
  *(undefined2 *)((long)puVar1 + 0x69) = 1;
  *(undefined1 *)((long)puVar1 + 0x6b) = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0x3f800000;
  *(undefined1 *)(puVar1 + 0x11) = 0;
  *(undefined1 *)((long)puVar1 + 0x8c) = 0;
  *(undefined1 *)(puVar1 + 0x12) = 0;
  *(undefined1 *)((long)puVar1 + 0x94) = 0;
  *puVar1 = &PTR_FUN_110b2e230;
  *(undefined8 *)((long)puVar1 + 0xa4) = 0;
  *(undefined8 *)((long)puVar1 + 0x9c) = 0;
  *(undefined4 *)((long)puVar1 + 0xac) = 0;
  func_0x000107c31940(auStack_68,PTR_DAT_1132edc28);
  puVar2 = auStack_68;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (puVar2,0,&UNK_10f5a582c,7);
  uStack_48 = puVar2[1];
  uStack_50 = *puVar2;
  lStack_40 = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar1 + 7,&uStack_50);
  if (lStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  *(undefined1 *)((long)puVar1 + 0x6b) = 1;
  return puVar1 + 1;
}



/* Entry: 109c49130; end: 109c49287;  */

undefined8 * FUN_109c49130(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  puVar1 = (undefined8 *)0xb0;
  __Znwm();
  puVar1[1] = &PTR_FUN_110b2cf70;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  *(undefined8 *)((long)puVar1 + 0x61) = 0;
  *(undefined8 *)((long)puVar1 + 0x59) = 0;
  *(undefined2 *)((long)puVar1 + 0x69) = 1;
  *(undefined1 *)((long)puVar1 + 0x6b) = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0x3f800000;
  *(undefined1 *)(puVar1 + 0x11) = 0;
  *(undefined1 *)((long)puVar1 + 0x8c) = 0;
  *(undefined1 *)(puVar1 + 0x12) = 0;
  *(undefined1 *)((long)puVar1 + 0x94) = 0;
  *puVar1 = &PTR_FUN_110b2cf48;
  *(undefined8 *)((long)puVar1 + 0xa4) = 0;
  *(undefined8 *)((long)puVar1 + 0x9c) = 0;
  *(undefined4 *)((long)puVar1 + 0xac) = 0;
  func_0x000107c31940(auStack_68,PTR_DAT_1132edb38);
  puVar2 = auStack_68;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (puVar2,0,&UNK_10f5a582c,7);
  uStack_48 = puVar2[1];
  uStack_50 = *puVar2;
  lStack_40 = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar1 + 7,&uStack_50);
  if (lStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  *(undefined1 *)((long)puVar1 + 0x6b) = 1;
  return puVar1 + 1;
}



/* Entry: 109c49288; end: 109c492d7;  */

long FUN_109c49288(long param_1)

{
  FUN_109c21610(param_1 + 8);
  return param_1;
}



/* Entry: 109c492d8; end: 109c49447;  */

undefined8 * FUN_109c492d8(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long lStack_90;
  long *plStack_88;
  undefined1 auStack_80 [72];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  lVar7 = *plVar8;
  bVar3 = *(byte *)(param_1 + 0x6b);
  if (bVar3 == 1) {
    plStack_88 = (long *)plVar8[1];
    lStack_90 = lVar7;
    if (plStack_88 != (long *)0x0) {
      plVar1 = plStack_88 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
  }
  else {
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x70))
              (auStack_80,(undefined8 *)**(undefined8 **)(param_1 + 0x70),lVar7 + 8,
               *(undefined1 *)(lVar7 + 0x48));
    FUN_109c18570(&lStack_90,auStack_80);
  }
  func_0x000109c1e534(*param_3,&lStack_90);
  plVar1 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar2 = plStack_88 + 1;
    do {
      lVar7 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if ((bVar3 & 1) == 0) {
    FUN_109c180ec(auStack_80);
  }
  FUN_109c11af8(*(undefined8 *)*param_3,*plVar8);
  puVar6 = *(undefined8 **)*param_3;
  FUN_109c37e0c();
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar8 + 0x3c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    FUN_109c180ec(auStack_80);
    __Unwind_Resume();
    *puVar6 = &PTR_FUN_110b2c3e0;
    func_0x000109c20db4(puVar6 + 0xd);
    if (*(char *)((long)puVar6 + 0x5f) < '\0') {
      __ZdlPv(puVar6[9]);
    }
    if (*(char *)((long)puVar6 + 0x47) < '\0') {
      __ZdlPv(puVar6[6]);
    }
    FUN_109c61bbc(puVar6 + 1);
    return puVar6;
  }
  return puVar6;
}



/* Entry: 109c49448; end: 109c4944b;  */

undefined8 * FUN_109c49448(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2c3e0;
  func_0x000109c20db4(param_1 + 0xd);
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  FUN_109c61bbc(param_1 + 1);
  return param_1;
}



/* Entry: 109c4944c; end: 109c4946f;  */

void FUN_109c4944c(long param_1)

{
  FUN_109c21610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1 + -8);
  return;
}



/* Entry: 109c49470; end: 109c49477;  */

undefined8 * FUN_109c49470(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long lStack_90;
  long *plStack_88;
  undefined1 auStack_80 [72];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  lVar7 = *plVar8;
  bVar3 = *(byte *)(param_1 + 99);
  if (bVar3 == 1) {
    plStack_88 = (long *)plVar8[1];
    lStack_90 = lVar7;
    if (plStack_88 != (long *)0x0) {
      plVar1 = plStack_88 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
  }
  else {
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x68))
              (auStack_80,(undefined8 *)**(undefined8 **)(param_1 + 0x68),lVar7 + 8,
               *(undefined1 *)(lVar7 + 0x48));
    FUN_109c18570(&lStack_90,auStack_80);
  }
  func_0x000109c1e534(*param_3,&lStack_90);
  plVar1 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar2 = plStack_88 + 1;
    do {
      lVar7 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if ((bVar3 & 1) == 0) {
    FUN_109c180ec(auStack_80);
  }
  FUN_109c11af8(*(undefined8 *)*param_3,*plVar8);
  puVar6 = *(undefined8 **)*param_3;
  FUN_109c37e0c();
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar8 + 0x3c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    FUN_109c180ec(auStack_80);
    __Unwind_Resume();
    *puVar6 = &PTR_FUN_110b2c3e0;
    func_0x000109c20db4(puVar6 + 0xd);
    if (*(char *)((long)puVar6 + 0x5f) < '\0') {
      __ZdlPv(puVar6[9]);
    }
    if (*(char *)((long)puVar6 + 0x47) < '\0') {
      __ZdlPv(puVar6[6]);
    }
    FUN_109c61bbc(puVar6 + 1);
    return puVar6;
  }
  return puVar6;
}



/* Entry: 109c49478; end: 109c498df;  */

void FUN_109c49478(long *param_1,long param_2)

{
  long *plVar1;
  bool bVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  ulong unaff_x23;
  long lVar16;
  
  uRam00000001137e1b28 = 0;
  lRam00000001137e1b20 = 0;
  uRam00000001137e1b38 = 0;
  plRam00000001137e1b30 = (long *)0x0;
  fRam00000001137e1b40 = 1.0;
  if (param_2 != 0) {
    plVar1 = param_1 + param_2 * 4;
    do {
      uVar9 = 0x1137e1b20;
      func_0x000107c31944(0x1137e1b20,param_1);
      uVar10 = uRam00000001137e1b28;
      if (uRam00000001137e1b28 != 0) {
        uVar15 = uRam00000001137e1b28 - 1;
        if ((uRam00000001137e1b28 & uVar15) == 0) {
          unaff_x23 = uVar15 & uVar9;
        }
        else {
          unaff_x23 = uVar9;
          if (uRam00000001137e1b28 <= uVar9) {
            uVar7 = 0;
            if (uRam00000001137e1b28 != 0) {
              uVar7 = uVar9 / uRam00000001137e1b28;
            }
            unaff_x23 = uVar9 - uVar7 * uRam00000001137e1b28;
          }
        }
        plVar6 = *(long **)(lRam00000001137e1b20 + unaff_x23 * 8);
        if (plVar6 != (long *)0x0) {
          for (plVar6 = (long *)*plVar6; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
            uVar7 = plVar6[1];
            if (uVar7 == uVar9) {
              uVar7 = 0x1137e1b20;
              func_0x000104c4fbc4(0x1137e1b20,plVar6 + 2,param_1);
              if ((uVar7 & 1) != 0) goto LAB_109c49830;
            }
            else {
              if ((uVar10 & uVar15) == 0) {
                uVar7 = uVar7 & uVar15;
              }
              else if (uVar10 <= uVar7) {
                uVar8 = 0;
                if (uVar10 != 0) {
                  uVar8 = uVar7 / uVar10;
                }
                uVar7 = uVar7 - uVar8 * uVar10;
              }
              if (uVar7 != unaff_x23) break;
            }
          }
        }
      }
      plVar6 = (long *)0x30;
      __Znwm();
      *plVar6 = 0;
      plVar6[1] = uVar9;
      if (*(char *)((long)param_1 + 0x17) < '\0') {
        func_0x000107c3192c(plVar6 + 2,*param_1,param_1[1]);
      }
      else {
        lVar16 = param_1[1];
        lVar5 = *param_1;
        plVar6[4] = param_1[2];
        plVar6[3] = lVar16;
        plVar6[2] = lVar5;
      }
      plVar6[5] = param_1[3];
      if ((uVar10 == 0) ||
         (fRam00000001137e1b40 * (float)uVar10 < (float)(uRam00000001137e1b38 + 1))) {
        uVar15 = 1;
        if (2 < uVar10) {
          uVar15 = (ulong)((uVar10 & uVar10 - 1) != 0);
        }
        uVar15 = uVar15 | uVar10 << 1;
        uVar10 = (ulong)((float)(uRam00000001137e1b38 + 1) / fRam00000001137e1b40);
        if (uVar15 <= uVar10) {
          uVar15 = uVar10;
        }
        if (uVar15 - 1 == 0) {
          uVar15 = 2;
        }
        else if ((uVar15 & uVar15 - 1) != 0) {
          __ZNSt3__112__next_primeEm();
        }
        uVar7 = uRam00000001137e1b28;
        if (uRam00000001137e1b28 < uVar15) {
LAB_109c49634:
          if (uVar15 >> 0x3d != 0) {
            func_0x000104c4f740();
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x109c498a8);
            (*pcVar4)();
          }
          lVar5 = uVar15 << 3;
          __Znwm();
          bVar2 = lRam00000001137e1b20 != 0;
          lRam00000001137e1b20 = lVar5;
          if (bVar2) {
            __ZdlPv();
          }
          uVar10 = 0;
          uRam00000001137e1b28 = uVar15;
          do {
            *(undefined8 *)(lRam00000001137e1b20 + uVar10 * 8) = 0;
            plVar11 = plRam00000001137e1b30;
            uVar10 = uVar10 + 1;
          } while (uVar15 != uVar10);
          uVar10 = uVar15;
          if (plRam00000001137e1b30 != (long *)0x0) {
            uVar7 = plRam00000001137e1b30[1];
            uVar8 = uVar15 - 1;
            if ((uVar15 & uVar8) == 0) {
              uVar7 = uVar7 & uVar8;
            }
            else if (uVar15 <= uVar7) {
              uVar14 = 0;
              if (uVar15 != 0) {
                uVar14 = uVar7 / uVar15;
              }
              uVar7 = uVar7 - uVar14 * uVar15;
            }
            *(undefined8 *)(lRam00000001137e1b20 + uVar7 * 8) = 0x1137e1b30;
            plVar12 = (long *)*plVar11;
            lVar5 = lRam00000001137e1b20;
            while (lRam00000001137e1b20 = lVar5, plVar12 != (long *)0x0) {
              uVar14 = plVar12[1];
              if ((uVar15 & uVar8) == 0) {
                uVar14 = uVar14 & uVar8;
              }
              else if (uVar15 <= uVar14) {
                uVar3 = 0;
                if (uVar15 != 0) {
                  uVar3 = uVar14 / uVar15;
                }
                uVar14 = uVar14 - uVar3 * uVar15;
              }
              plVar13 = plVar12;
              if (uVar14 != uVar7) {
                if (*(long *)(lVar5 + uVar14 * 8) == 0) {
                  *(long **)(lVar5 + uVar14 * 8) = plVar11;
                  uVar7 = uVar14;
                }
                else {
                  *plVar11 = *plVar12;
                  *plVar12 = **(long **)(lVar5 + uVar14 * 8);
                  **(undefined8 **)(lVar5 + uVar14 * 8) = plVar12;
                  plVar13 = plVar11;
                }
              }
              lVar5 = lRam00000001137e1b20;
              plVar11 = plVar13;
              plVar12 = (long *)*plVar13;
            }
          }
        }
        else {
          uVar10 = uRam00000001137e1b28;
          if (uVar15 < uRam00000001137e1b28) {
            uVar10 = (ulong)((float)uRam00000001137e1b38 / fRam00000001137e1b40);
            if ((uRam00000001137e1b28 < 3) ||
               ((uRam00000001137e1b28 & uRam00000001137e1b28 - 1) != 0)) {
              __ZNSt3__112__next_primeEm();
            }
            else if (1 < uVar10) {
              uVar10 = 1L << (-LZCOUNT(uVar10 - 1) & 0x3fU);
            }
            lVar5 = lRam00000001137e1b20;
            if (uVar15 <= uVar10) {
              uVar15 = uVar10;
            }
            uVar10 = uRam00000001137e1b28;
            if (uVar15 < uVar7) {
              if (uVar15 != 0) goto LAB_109c49634;
              lRam00000001137e1b20 = 0;
              if (lVar5 != 0) {
                __ZdlPv();
              }
              uRam00000001137e1b28 = 0;
              uVar10 = 0;
            }
          }
        }
        if ((uVar10 & uVar10 - 1) == 0) {
          unaff_x23 = uVar10 - 1 & uVar9;
        }
        else {
          unaff_x23 = uVar9;
          if (uVar10 <= uVar9) {
            uVar15 = 0;
            if (uVar10 != 0) {
              uVar15 = uVar9 / uVar10;
            }
            unaff_x23 = uVar9 - uVar15 * uVar10;
          }
        }
      }
      lVar5 = lRam00000001137e1b20;
      plVar11 = *(long **)(lRam00000001137e1b20 + unaff_x23 * 8);
      if (plVar11 == (long *)0x0) {
        *plVar6 = (long)plRam00000001137e1b30;
        plRam00000001137e1b30 = plVar6;
        *(undefined8 *)(lVar5 + unaff_x23 * 8) = 0x1137e1b30;
        if (*plVar6 != 0) {
          uVar9 = *(ulong *)(*plVar6 + 8);
          if ((uVar10 & uVar10 - 1) == 0) {
            uVar9 = uVar9 & uVar10 - 1;
          }
          else if (uVar10 <= uVar9) {
            uVar15 = 0;
            if (uVar10 != 0) {
              uVar15 = uVar9 / uVar10;
            }
            uVar9 = uVar9 - uVar15 * uVar10;
          }
          *(long **)(lRam00000001137e1b20 + uVar9 * 8) = plVar6;
        }
      }
      else {
        *plVar6 = *plVar11;
        *plVar11 = (long)plVar6;
      }
      uRam00000001137e1b38 = uRam00000001137e1b38 + 1;
LAB_109c49830:
      param_1 = param_1 + 4;
    } while (param_1 != plVar1);
  }
  return;
}



/* Entry: 109c498e0; end: 109c49977;  */

void FUN_109c498e0(ulong param_1,long param_2)

{
  if (((param_1 & 1) != 0) && (*(char *)(param_2 + 0x27) < '\0')) {
    __ZdlPv(*(undefined8 *)(param_2 + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 109c49978; end: 109c4998f;  */

int FUN_109c49978(byte param_1)

{
  return (int)(char)(param_1 ^ 0x80);
}



/* Entry: 109c49990; end: 109c49aa7;  */

void FUN_109c49990(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 ***pppuVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 ***pppuVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  uVar5 = param_1[1];
  if (0x7ffffffffffffff7 < uVar5) {
    func_0x000104c4f6b8();
  }
  uVar6 = *param_1;
  if (uVar5 < 0x17) {
    uStack_48 = CONCAT17((char)uVar5,(undefined7)uStack_48);
    pppuVar4 = &ppuStack_58;
    if (uVar5 == 0) goto LAB_109c49a18;
  }
  else {
    pppuVar1 = (undefined8 ***)0x19;
    if ((uVar5 | 7) != 0x17) {
      pppuVar1 = (undefined8 ***)((uVar5 | 7) + 1);
    }
    pppuVar4 = pppuVar1;
    __Znwm();
    uStack_48 = (ulong)pppuVar1 | 0x8000000000000000;
    ppuStack_58 = pppuVar4;
    uStack_50 = uVar5;
  }
  _memmove(pppuVar4,uVar6,uVar5);
LAB_109c49a18:
  *(undefined1 *)((long)pppuVar4 + uVar5) = 0;
  if (param_1[4] != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&ppuStack_58,": ",2);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&ppuStack_58,param_1[3],param_1[4]);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(&ppuStack_58,": ",2);
  uVar5 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar5 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&ppuStack_58,puVar2,uVar5);
  FUN_109c61b6c(&ppuStack_58);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x109c49a64);
  (*pcVar3)();
}



/* Entry: 109c49aa8; end: 109c49b2f;  */

void FUN_109c49aa8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x70;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar2 = puVar1 + 3;
  *puVar1 = &PTR_FUN_110b2c750;
  FUN_109c111e0(puVar2,param_2,param_3,param_4,param_5);
  *param_1 = puVar2;
  param_1[1] = puVar1;
  return;
}



/* Entry: 109c49b30; end: 109c49c47;  */

void FUN_109c49b30(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 ***pppuVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 ***pppuVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  uVar5 = param_1[1];
  if (0x7ffffffffffffff7 < uVar5) {
    func_0x000104c4f6b8();
  }
  uVar6 = *param_1;
  if (uVar5 < 0x17) {
    uStack_48 = CONCAT17((char)uVar5,(undefined7)uStack_48);
    pppuVar4 = &ppuStack_58;
    if (uVar5 == 0) goto LAB_109c49bb8;
  }
  else {
    pppuVar1 = (undefined8 ***)0x19;
    if ((uVar5 | 7) != 0x17) {
      pppuVar1 = (undefined8 ***)((uVar5 | 7) + 1);
    }
    pppuVar4 = pppuVar1;
    __Znwm();
    uStack_48 = (ulong)pppuVar1 | 0x8000000000000000;
    ppuStack_58 = pppuVar4;
    uStack_50 = uVar5;
  }
  _memmove(pppuVar4,uVar6,uVar5);
LAB_109c49bb8:
  *(undefined1 *)((long)pppuVar4 + uVar5) = 0;
  if (param_1[4] != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&ppuStack_58,": ",2);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&ppuStack_58,param_1[3],param_1[4]);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(&ppuStack_58,": ",2);
  uVar5 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar5 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&ppuStack_58,puVar2,uVar5);
  FUN_109c61b6c(&ppuStack_58);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x109c49c04);
  (*pcVar3)();
}



/* Entry: 109c49c48; end: 109c4a007;  */

long * FUN_109c49c48(long *param_1,uint param_2,undefined4 *param_3)

{
  uint uVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  ulong unaff_x24;
  
  uVar14 = (ulong)param_2;
  uVar16 = param_1[1];
  if (uVar16 != 0) {
    uVar5 = uVar16 - 1;
    uVar15 = (uint)uVar16;
    if ((uVar16 & uVar5) == 0) {
      unaff_x24 = (ulong)(uVar15 - 1 & param_2);
    }
    else {
      unaff_x24 = uVar14;
      if (uVar16 <= uVar14) {
        uVar1 = 0;
        if (uVar15 != 0) {
          uVar1 = param_2 / uVar15;
        }
        unaff_x24 = (ulong)(param_2 - uVar1 * uVar15);
      }
    }
    plVar8 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar8 != (long *)0x0) {
      for (plVar8 = (long *)*plVar8; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        uVar9 = plVar8[1];
        if (uVar9 == uVar14) {
          if (*(uint *)(plVar8 + 2) == param_2) {
            return plVar8;
          }
        }
        else {
          if ((uVar16 & uVar5) == 0) {
            uVar9 = uVar9 & uVar5;
          }
          else if (uVar16 <= uVar9) {
            uVar6 = 0;
            if (uVar16 != 0) {
              uVar6 = uVar9 / uVar16;
            }
            uVar9 = uVar9 - uVar6 * uVar16;
          }
          if (uVar9 != unaff_x24) break;
        }
      }
    }
  }
  plVar8 = (long *)0x30;
  __Znwm();
  *plVar8 = 0;
  plVar8[1] = uVar14;
  *(undefined4 *)(plVar8 + 2) = *param_3;
  plVar8[4] = 0;
  plVar8[5] = 0;
  plVar8[3] = 0;
  if ((uVar16 == 0) || (*(float *)(param_1 + 4) * (float)uVar16 < (float)(param_1[3] + 1))) {
    uVar5 = 1;
    if (2 < uVar16) {
      uVar5 = (ulong)((uVar16 & uVar16 - 1) != 0);
    }
    uVar5 = uVar5 | uVar16 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar5 <= uVar9) {
      uVar5 = uVar9;
    }
    if (uVar5 - 1 == 0) {
      uVar5 = 2;
    }
    else if ((uVar5 & uVar5 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar16 = param_1[1];
    }
    if (uVar16 < uVar5) {
LAB_109c49dac:
      if (uVar5 >> 0x3d != 0) {
        func_0x000104c4f740();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x109c49ff0);
        (*pcVar3)();
      }
      lVar10 = uVar5 << 3;
      __Znwm();
      lVar4 = *param_1;
      *param_1 = lVar10;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      uVar16 = 0;
      param_1[1] = uVar5;
      do {
        *(undefined8 *)(*param_1 + uVar16 * 8) = 0;
        uVar16 = uVar16 + 1;
      } while (uVar5 != uVar16);
      plVar7 = (long *)param_1[2];
      uVar16 = uVar5;
      if (plVar7 != (long *)0x0) {
        uVar9 = plVar7[1];
        uVar6 = uVar5 - 1;
        if ((uVar5 & uVar6) == 0) {
          uVar9 = uVar9 & uVar6;
        }
        else if (uVar5 <= uVar9) {
          uVar13 = 0;
          if (uVar5 != 0) {
            uVar13 = uVar9 / uVar5;
          }
          uVar9 = uVar9 - uVar13 * uVar5;
        }
        *(long **)(*param_1 + uVar9 * 8) = param_1 + 2;
        plVar11 = (long *)*plVar7;
        while (plVar11 != (long *)0x0) {
          uVar13 = plVar11[1];
          if ((uVar5 & uVar6) == 0) {
            uVar13 = uVar13 & uVar6;
          }
          else if (uVar5 <= uVar13) {
            uVar2 = 0;
            if (uVar5 != 0) {
              uVar2 = uVar13 / uVar5;
            }
            uVar13 = uVar13 - uVar2 * uVar5;
          }
          plVar12 = plVar11;
          if (uVar13 != uVar9) {
            lVar10 = *param_1;
            if (*(long *)(lVar10 + uVar13 * 8) == 0) {
              *(long **)(lVar10 + uVar13 * 8) = plVar7;
              uVar9 = uVar13;
            }
            else {
              *plVar7 = *plVar11;
              *plVar11 = **(undefined8 **)(lVar10 + uVar13 * 8);
              **(long **)(lVar10 + uVar13 * 8) = (long)plVar11;
              plVar12 = plVar7;
            }
          }
          plVar7 = plVar12;
          plVar11 = (long *)*plVar12;
        }
      }
    }
    else if (uVar5 < uVar16) {
      uVar9 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar16 < 3) || ((uVar16 & uVar16 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar9) {
        uVar9 = 1L << (-LZCOUNT(uVar9 - 1) & 0x3fU);
      }
      if (uVar5 <= uVar9) {
        uVar5 = uVar9;
      }
      if (uVar5 < uVar16) {
        if (uVar5 != 0) goto LAB_109c49dac;
        lVar10 = *param_1;
        *param_1 = 0;
        if (lVar10 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        uVar16 = 0;
      }
      else {
        uVar16 = param_1[1];
      }
    }
    if ((uVar16 & uVar16 - 1) == 0) {
      unaff_x24 = (ulong)((int)uVar16 - 1U & param_2);
    }
    else {
      unaff_x24 = uVar14;
      if (uVar16 <= uVar14) {
        uVar5 = 0;
        if (uVar16 != 0) {
          uVar5 = uVar14 / uVar16;
        }
        unaff_x24 = uVar14 - uVar5 * uVar16;
      }
    }
  }
  lVar10 = *param_1;
  plVar7 = *(long **)(lVar10 + unaff_x24 * 8);
  if (plVar7 == (long *)0x0) {
    plVar7 = param_1 + 2;
    *plVar8 = *plVar7;
    *plVar7 = (long)plVar8;
    *(long **)(lVar10 + unaff_x24 * 8) = plVar7;
    if (*plVar8 == 0) goto LAB_109c49f88;
    uVar14 = *(ulong *)(*plVar8 + 8);
    if ((uVar16 & uVar16 - 1) == 0) {
      uVar14 = uVar14 & uVar16 - 1;
    }
    else if (uVar16 <= uVar14) {
      uVar5 = 0;
      if (uVar16 != 0) {
        uVar5 = uVar14 / uVar16;
      }
      uVar14 = uVar14 - uVar5 * uVar16;
    }
    plVar7 = (long *)(*param_1 + uVar14 * 8);
  }
  else {
    *plVar8 = *plVar7;
  }
  *plVar7 = (long)plVar8;
LAB_109c49f88:
  param_1[3] = param_1[3] + 1;
  return plVar8;
}



/* Entry: 109c4a008; end: 109c4a03b;  */

void FUN_109c4a008(ulong param_1,long param_2)

{
  if (((param_1 & 1) != 0) && (*(long *)(param_2 + 0x18) != 0)) {
    *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x18);
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 109c4a03c; end: 109c4a03f;  */

void FUN_109c4a03c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109c4a040; end: 109c4a053;  */

void FUN_109c4a040(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c4a054; end: 109c4a06b;  */

void FUN_109c4a054(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000109c4a064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 109c4a06c; end: 109c4a0a3;  */

undefined8 FUN_109c4a06c(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110afd9a8);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109c4a0a4; end: 109c4a0a7;  */

void FUN_109c4a0a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c4a0a8; end: 109c4a467;  */

long * FUN_109c4a0a8(long *param_1,uint param_2,undefined4 *param_3)

{
  uint uVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  ulong unaff_x24;
  
  uVar14 = (ulong)param_2;
  uVar16 = param_1[1];
  if (uVar16 != 0) {
    uVar5 = uVar16 - 1;
    uVar15 = (uint)uVar16;
    if ((uVar16 & uVar5) == 0) {
      unaff_x24 = (ulong)(uVar15 - 1 & param_2);
    }
    else {
      unaff_x24 = uVar14;
      if (uVar16 <= uVar14) {
        uVar1 = 0;
        if (uVar15 != 0) {
          uVar1 = param_2 / uVar15;
        }
        unaff_x24 = (ulong)(param_2 - uVar1 * uVar15);
      }
    }
    plVar8 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar8 != (long *)0x0) {
      for (plVar8 = (long *)*plVar8; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        uVar9 = plVar8[1];
        if (uVar9 == uVar14) {
          if (*(uint *)(plVar8 + 2) == param_2) {
            return plVar8;
          }
        }
        else {
          if ((uVar16 & uVar5) == 0) {
            uVar9 = uVar9 & uVar5;
          }
          else if (uVar16 <= uVar9) {
            uVar6 = 0;
            if (uVar16 != 0) {
              uVar6 = uVar9 / uVar16;
            }
            uVar9 = uVar9 - uVar6 * uVar16;
          }
          if (uVar9 != unaff_x24) break;
        }
      }
    }
  }
  plVar8 = (long *)0x30;
  __Znwm();
  *plVar8 = 0;
  plVar8[1] = uVar14;
  *(undefined4 *)(plVar8 + 2) = *param_3;
  *(undefined8 *)((long)plVar8 + 0x14) = 0;
  *(undefined8 *)((long)plVar8 + 0x24) = 0;
  *(undefined8 *)((long)plVar8 + 0x1c) = 0;
  if ((uVar16 == 0) || (*(float *)(param_1 + 4) * (float)uVar16 < (float)(param_1[3] + 1))) {
    uVar5 = 1;
    if (2 < uVar16) {
      uVar5 = (ulong)((uVar16 & uVar16 - 1) != 0);
    }
    uVar5 = uVar5 | uVar16 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar5 <= uVar9) {
      uVar5 = uVar9;
    }
    if (uVar5 - 1 == 0) {
      uVar5 = 2;
    }
    else if ((uVar5 & uVar5 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar16 = param_1[1];
    }
    if (uVar16 < uVar5) {
LAB_109c4a210:
      if (uVar5 >> 0x3d != 0) {
        func_0x000104c4f740();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x109c4a454);
        (*pcVar3)();
      }
      lVar10 = uVar5 << 3;
      __Znwm();
      lVar4 = *param_1;
      *param_1 = lVar10;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      uVar16 = 0;
      param_1[1] = uVar5;
      do {
        *(undefined8 *)(*param_1 + uVar16 * 8) = 0;
        uVar16 = uVar16 + 1;
      } while (uVar5 != uVar16);
      plVar7 = (long *)param_1[2];
      uVar16 = uVar5;
      if (plVar7 != (long *)0x0) {
        uVar9 = plVar7[1];
        uVar6 = uVar5 - 1;
        if ((uVar5 & uVar6) == 0) {
          uVar9 = uVar9 & uVar6;
        }
        else if (uVar5 <= uVar9) {
          uVar13 = 0;
          if (uVar5 != 0) {
            uVar13 = uVar9 / uVar5;
          }
          uVar9 = uVar9 - uVar13 * uVar5;
        }
        *(long **)(*param_1 + uVar9 * 8) = param_1 + 2;
        plVar11 = (long *)*plVar7;
        while (plVar11 != (long *)0x0) {
          uVar13 = plVar11[1];
          if ((uVar5 & uVar6) == 0) {
            uVar13 = uVar13 & uVar6;
          }
          else if (uVar5 <= uVar13) {
            uVar2 = 0;
            if (uVar5 != 0) {
              uVar2 = uVar13 / uVar5;
            }
            uVar13 = uVar13 - uVar2 * uVar5;
          }
          plVar12 = plVar11;
          if (uVar13 != uVar9) {
            lVar10 = *param_1;
            if (*(long *)(lVar10 + uVar13 * 8) == 0) {
              *(long **)(lVar10 + uVar13 * 8) = plVar7;
              uVar9 = uVar13;
            }
            else {
              *plVar7 = *plVar11;
              *plVar11 = **(undefined8 **)(lVar10 + uVar13 * 8);
              **(long **)(lVar10 + uVar13 * 8) = (long)plVar11;
              plVar12 = plVar7;
            }
          }
          plVar7 = plVar12;
          plVar11 = (long *)*plVar12;
        }
      }
    }
    else if (uVar5 < uVar16) {
      uVar9 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar16 < 3) || ((uVar16 & uVar16 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar9) {
        uVar9 = 1L << (-LZCOUNT(uVar9 - 1) & 0x3fU);
      }
      if (uVar5 <= uVar9) {
        uVar5 = uVar9;
      }
      if (uVar5 < uVar16) {
        if (uVar5 != 0) goto LAB_109c4a210;
        lVar10 = *param_1;
        *param_1 = 0;
        if (lVar10 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        uVar16 = 0;
      }
      else {
        uVar16 = param_1[1];
      }
    }
    if ((uVar16 & uVar16 - 1) == 0) {
      unaff_x24 = (ulong)((int)uVar16 - 1U & param_2);
    }
    else {
      unaff_x24 = uVar14;
      if (uVar16 <= uVar14) {
        uVar5 = 0;
        if (uVar16 != 0) {
          uVar5 = uVar14 / uVar16;
        }
        unaff_x24 = uVar14 - uVar5 * uVar16;
      }
    }
  }
  lVar10 = *param_1;
  plVar7 = *(long **)(lVar10 + unaff_x24 * 8);
  if (plVar7 == (long *)0x0) {
    plVar7 = param_1 + 2;
    *plVar8 = *plVar7;
    *plVar7 = (long)plVar8;
    *(long **)(lVar10 + unaff_x24 * 8) = plVar7;
    if (*plVar8 == 0) goto LAB_109c4a3ec;
    uVar14 = *(ulong *)(*plVar8 + 8);
    if ((uVar16 & uVar16 - 1) == 0) {
      uVar14 = uVar14 & uVar16 - 1;
    }
    else if (uVar16 <= uVar14) {
      uVar5 = 0;
      if (uVar16 != 0) {
        uVar5 = uVar14 / uVar16;
      }
      uVar14 = uVar14 - uVar5 * uVar16;
    }
    plVar7 = (long *)(*param_1 + uVar14 * 8);
  }
  else {
    *plVar8 = *plVar7;
  }
  *plVar7 = (long)plVar8;
LAB_109c4a3ec:
  param_1[3] = param_1[3] + 1;
  return plVar8;
}



/* Entry: 109c4a468; end: 109c4a57f;  */

void FUN_109c4a468(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 ***pppuVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 ***pppuVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  uVar5 = param_1[1];
  if (0x7ffffffffffffff7 < uVar5) {
    func_0x000104c4f6b8();
  }
  uVar6 = *param_1;
  if (uVar5 < 0x17) {
    uStack_48 = CONCAT17((char)uVar5,(undefined7)uStack_48);
    pppuVar4 = &ppuStack_58;
    if (uVar5 == 0) goto LAB_109c4a4f0;
  }
  else {
    pppuVar1 = (undefined8 ***)0x19;
    if ((uVar5 | 7) != 0x17) {
      pppuVar1 = (undefined8 ***)((uVar5 | 7) + 1);
    }
    pppuVar4 = pppuVar1;
    __Znwm();
    uStack_48 = (ulong)pppuVar1 | 0x8000000000000000;
    ppuStack_58 = pppuVar4;
    uStack_50 = uVar5;
  }
  _memmove(pppuVar4,uVar6,uVar5);
LAB_109c4a4f0:
  *(undefined1 *)((long)pppuVar4 + uVar5) = 0;
  if (param_1[4] != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&ppuStack_58,": ",2);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&ppuStack_58,param_1[3],param_1[4]);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(&ppuStack_58,": ",2);
  uVar5 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar5 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&ppuStack_58,puVar2,uVar5);
  FUN_109c61b6c(&ppuStack_58);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x109c4a53c);
  (*pcVar3)();
}



/* Entry: 109c4a580; end: 109c4a583;  */

void FUN_109c4a580(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109c4a584; end: 109c4a597;  */

void FUN_109c4a584(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


