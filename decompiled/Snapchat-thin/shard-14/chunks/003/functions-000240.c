/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b1438cc; end: 10b143b2b;  */

void FUN_10b1438cc(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 in_ZR;
  undefined8 *puVar4;
  undefined1 extraout_w8;
  code *extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 *puVar5;
  undefined8 *unaff_x21;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  long lStack_48;
  
  if (param_3 != 0) {
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10 != 0);
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10_00 != 0);
  }
  puVar5 = (undefined8 *)*param_1;
  uStack_c0 = param_2;
  lStack_b8 = param_3;
  func_0x00010b14f0e8();
  uStack_50 = 0;
  lStack_48 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  FUN_10b1437bc(auStack_60,&uStack_c0,&uStack_70);
  FUN_10b1437e8(&uStack_50,auStack_60);
  FUN_10b14368c(auStack_60);
  FUN_10b14368c(&uStack_70);
  func_0x00010b1500c4();
  __ZNSt3__15mutex4lockEv();
  if (lStack_48 != 0) {
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10_01 != 0);
  }
  while (puVar4 = unaff_x21, FUN_10b14389c(), ((ulong)puVar4 & 1) == 0) {
    func_0x00010b150254();
  }
  FUN_10b14368c(&stack0xffffffffffffff80);
  if (unaff_x21[0x11] != 0) {
    __ZNSt13exception_ptrC1ERKS_(auStack_88);
    __ZSt17rethrow_exceptionSt13exception_ptr(auStack_88);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10b143a34);
    (*pcVar3)();
  }
  uVar1 = *unaff_x21;
  uVar2 = unaff_x21[1];
  *unaff_x21 = 0;
  unaff_x21[1] = 0;
  uStack_98 = uVar1;
  uStack_90 = uVar2;
  func_0x00010b14fc70();
  FUN_10b14368c(&uStack_50);
  func_0x00010b14f83c();
  if ((bool)in_ZR) {
    if (*(char *)(unaff_x21 + 10) == '\x01') {
      func_0x00010b14f484();
      func_0x00010b143bb8();
    }
    else {
      func_0x00010b14f7fc();
      unaff_x21[8] = uVar1;
      unaff_x21[9] = uVar2;
      func_0x00010b14f764();
    }
  }
  else {
    unaff_x21[8] = uVar1;
    unaff_x21[9] = uVar2;
    func_0x00010b14f764();
    *(undefined1 *)(unaff_x21 + 0xb) = extraout_w8;
  }
  FUN_10b142294(&uStack_98);
  func_0x00010b14ec48();
  func_0x00010b14ff24();
  while (unaff_x21 != puVar5) {
    func_0x00010b14fd54();
    (*extraout_x8)();
  }
  func_0x00010b14f7f4();
  func_0x00010b14fedc();
  func_0x00010b14f854();
  func_0x000107c27b68(param_1[2]);
  return;
}



/* Entry: 10b143b2c; end: 10b143b2f;  */

undefined8 * FUN_10b143b2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbe640;
  FUN_10b143bf4(param_1 + 1);
  return param_1;
}



/* Entry: 10b143b30; end: 10b143b43;  */

void FUN_10b143b30(void)

{
  FUN_10b143b8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b143b44; end: 10b143b8b;  */

void FUN_10b143b44(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  undefined1 auStack_30 [16];
  
  func_0x00010b14eb80();
  if (param_3 != 0) {
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10 != 0);
  }
  FUN_10b1438cc(param_1 + 8);
  FUN_10b14368c(auStack_30);
  return;
}



/* Entry: 10b143b8c; end: 10b143bdb;  */

undefined8 * FUN_10b143b8c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbe640;
  FUN_10b143bf4(param_1 + 1);
  return param_1;
}



/* Entry: 10b143bdc; end: 10b143bf3;  */

void FUN_10b143bdc(long param_1)

{
  __ZNSt13exception_ptrC1ERKS_();
  *(undefined1 *)(param_1 + 0x10) = 0;
  return;
}



/* Entry: 10b143bf4; end: 10b143c13;  */

long FUN_10b143bf4(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b14ed08();
  lVar1 = unaff_x19;
  func_0x00010b14f1cc();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b143c14; end: 10b143c57;  */

void FUN_10b143c14(long param_1)

{
  code *pcVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    return;
  }
  func_0x00010b150270();
  func_0x00010b14ff40();
  func_0x00010b1500a0();
  func_0x00010552fc08();
  func_0x00010b14fa3c();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b143c50);
  (*pcVar1)();
}



/* Entry: 10b143c58; end: 10b143c7b;  */

void FUN_10b143c58(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x00010b143878();
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



/* Entry: 10b143c7c; end: 10b143c7f;  */

void FUN_10b143c7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbe690;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b143c80; end: 10b143c93;  */

void FUN_10b143c80(void)

{
  FUN_10b144038();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b143c94; end: 10b143c9f;  */

void FUN_10b143c94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b14f2dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b143ca0; end: 10b143cb3;  */

void FUN_10b143ca0(void)

{
  FUN_10b143f1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b143cb4; end: 10b143cf7;  */

void FUN_10b143cb4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 auStack_68 [8];
  undefined1 uStack_28;
  
  auStack_68[0] = *param_2;
  uStack_28 = 1;
  FUN_10b143f68(param_1,auStack_68);
  func_0x0001052a4cf0(auStack_68);
  return;
}



/* Entry: 10b143cf8; end: 10b143d7b;  */

long FUN_10b143cf8(long param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined1 *extraout_x8;
  undefined1 *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  long *plVar9;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  long lStack_50;
  long *plStack_48;
  
  lVar6 = *(long *)(param_1 + 0x70);
  lVar4 = param_3[2];
  if (lVar4 == 0) {
    lVar5 = 0;
    puVar7 = (undefined1 *)*param_3;
  }
  else {
    func_0x00010b14f664();
    (*extraout_x8_01)();
    lVar5 = param_3[2];
    puVar7 = (undefined1 *)(lVar4 + *param_3);
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      func_0x00010b14f664();
      (*extraout_x8_02)();
    }
  }
  plVar1 = (long *)(param_1 + 0x68);
  lVar4 = (lVar5 + param_3[1]) - (long)puVar7;
  if (0 < lVar4) {
    plVar9 = (long *)(param_1 + 0x78);
    lVar8 = *(long *)(param_1 + 0x70);
    if (*plVar9 - lVar8 < lVar4) {
      plVar3 = plVar1;
      func_0x0001001e7ae4(plVar1,(lVar4 - *plVar1) + lVar8);
      lVar5 = *plVar1;
      plStack_68 = (long *)0x0;
      plStack_48 = plVar9;
      if (plVar3 != (long *)0x0) {
        func_0x00010002b988();
        plStack_68 = plVar9;
      }
      puStack_60 = (undefined1 *)((long)plStack_68 + (lVar6 - lVar5));
      lStack_50 = (long)plStack_68 + (long)plVar3;
      puStack_58 = puStack_60 + lVar4;
      puVar2 = puStack_60;
      for (; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar2 = *puVar7;
        puVar2 = puVar2 + 1;
        puVar7 = puVar7 + 1;
      }
      func_0x000104bd9b18(plVar1,&plStack_68,lVar6);
      func_0x000104bdb890();
    }
    else {
      lVar8 = lVar8 - lVar6;
      if (lVar4 - lVar8 == 0 || lVar4 < lVar8) {
        func_0x000104bdb8d8();
        puVar2 = extraout_x8_00;
        for (; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar2 = *puVar7;
          puVar2 = puVar2 + 1;
          puVar7 = puVar7 + 1;
        }
      }
      else {
        func_0x00010029a9bc(plVar1,puVar7 + lVar8,lVar5 + param_3[1],lVar4 - lVar8);
        if (0 < lVar8) {
          func_0x000104bdb8d8();
          puVar2 = extraout_x8;
          for (; lVar8 != 0; lVar8 = lVar8 + -1) {
            *puVar2 = *puVar7;
            puVar2 = puVar2 + 1;
            puVar7 = puVar7 + 1;
          }
        }
      }
    }
  }
  return lVar6;
}



/* Entry: 10b143d7c; end: 10b143e47;  */

void FUN_10b143d7c(long param_1)

{
  int extraout_w10;
  undefined8 uStack_80;
  long lStack_78;
  undefined1 uStack_40;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x00010b143fec(param_1 + 0x90);
  func_0x000107c3171c(&uStack_30,param_1 + 0x68);
  lStack_78 = lStack_28;
  uStack_80 = uStack_30;
  if (lStack_28 != 0) {
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10 != 0);
  }
  uStack_40 = 1;
  func_0x000105c411ec(param_1 + 0x18,&uStack_80);
  func_0x0001052a4808(&uStack_80);
  if ((*(long **)(param_1 + 8) != (long *)0x0) && (*(char *)(param_1 + 0x88) == '\x01')) {
    (**(code **)(**(long **)(param_1 + 8) + 0x48))();
  }
  uStack_80 = 0;
  lStack_78 = 0;
  func_0x00010b14f568();
  func_0x00010b144014();
  FUN_10b144044(&uStack_80);
  func_0x000107c27d78(&uStack_30);
  return;
}



/* Entry: 10b143e48; end: 10b143f1b;  */

void FUN_10b143e48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_f0 [64];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_68 [72];
  
  func_0x0001052a0760(&uStack_b0,param_3);
  FUN_10b14347c(auStack_68,&uStack_b0);
  FUN_10b143f68(param_1,auStack_68);
  func_0x0001052a4cf0(auStack_68);
  func_0x00010b14f594();
  func_0x00010b143fec(param_1 + 0x90);
  func_0x0001052a0760(auStack_f0,param_3);
  func_0x00010880bd54(&uStack_b0,auStack_f0);
  func_0x000105c411ec(param_1 + 0x18,&uStack_b0);
  func_0x0001052a4808(&uStack_b0);
  func_0x00010b14f1b8();
  uStack_b0 = 0;
  uStack_a8 = 0;
  func_0x00010b144014(param_1 + 8,&uStack_b0);
  FUN_10b144044(&uStack_b0);
  return;
}



/* Entry: 10b143f1c; end: 10b143f67;  */

undefined8 * FUN_10b143f1c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cbe6e0;
  func_0x000107c27914(param_1 + 0xd);
  FUN_10b142df0(param_1 + 8);
  func_0x000105c40fd0(param_1 + 3);
  FUN_10b144044(param_1 + 1);
  return param_1;
}



/* Entry: 10b143f68; end: 10b143fb7;  */

void FUN_10b143f68(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined8 uStack_28;
  undefined1 **ppuStack_20;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)&lStack_30;
  if (*(long *)(param_1 + 0x80) != -1) {
    ppuStack_20 = &puStack_18;
    lStack_30 = param_1;
    uStack_28 = param_2;
    __ZNSt3__111__call_onceERVmPvPFvS2_E((long *)(param_1 + 0x80),&ppuStack_20,FUN_10b143fb8);
  }
  return;
}



/* Entry: 10b143fb8; end: 10b144037;  */

void FUN_10b143fb8(undefined8 *param_1)

{
  long unaff_x19;
  long *plVar1;
  long lVar2;
  long lStack_30;
  
  plVar1 = *(long **)*param_1;
  lVar2 = *plVar1;
  func_0x00010b143fec(lVar2 + 0xb8);
  func_0x00010b14ede4(lVar2 + 0x40,plVar1[1]);
  func_0x00010b14ee9c();
  func_0x0001052a484c();
  func_0x00010b14f55c();
  func_0x0001052a4874();
  func_0x00010b14fe08();
  func_0x00010b14f274();
  func_0x00010b14fd9c();
  if (*(char *)(lStack_30 + 0x48) == '\x01') {
    FUN_10b1431ec();
  }
  else {
    func_0x0001052a4c9c(lStack_30,unaff_x19);
    func_0x00010b15079c();
  }
  func_0x00010b14ec9c();
  if (unaff_x19 == 0) {
    func_0x00010b14f368();
  }
  else {
    func_0x00010b14f20c();
    func_0x00010b14ec30();
    func_0x00010b14e920();
  }
  func_0x00010b14f85c();
  return;
}



/* Entry: 10b144038; end: 10b144043;  */

void FUN_10b144038(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbe690;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b144044; end: 10b14415b;  */

void FUN_10b144044(long param_1)

{
  func_0x00010b14f1cc();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b14415c; end: 10b144633;  */

void FUN_10b14415c(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 *unaff_x28;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  if ((bRam00000001137f4080 & 1) == 0) {
    iVar3 = 0x137f4080;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      puVar9 = (undefined8 *)0x68;
      __Znwm();
      *puVar9 = 0x32aaaba7;
      puVar9[0xb] = 0;
      puVar9[0xc] = 0;
      puVar9[2] = 0;
      puVar9[1] = 0;
      puVar9[4] = 0;
      puVar9[3] = 0;
      puVar9[6] = 0;
      puVar9[5] = 0;
      puVar9[8] = 0;
      puVar9[7] = 0;
      puVar9[10] = 0;
      puVar9[9] = 0;
      *(undefined4 *)(puVar9 + 0xc) = 0x3f800000;
      puRam00000001137f4078 = puVar9;
      ___cxa_guard_release(0x1137f4080);
    }
  }
  puVar1 = puRam00000001137f4078;
  plVar8 = puRam00000001137f4078 + 8;
  __ZNSt3__15mutex4lockEv(puRam00000001137f4078);
  puVar9 = puVar1 + 0xb;
  func_0x000107c278c4(puVar9,param_2);
  puVar16 = (undefined8 *)puVar1[9];
  if (puVar16 != (undefined8 *)0x0) {
    uVar15 = (long)puVar16 - 1;
    if (((ulong)puVar16 & uVar15) == 0) {
      unaff_x28 = (undefined8 *)(uVar15 & (ulong)puVar9);
    }
    else {
      unaff_x28 = puVar9;
      if (puVar16 <= puVar9) {
        uVar7 = 0;
        if (puVar16 != (undefined8 *)0x0) {
          uVar7 = (ulong)puVar9 / (ulong)puVar16;
        }
        unaff_x28 = (undefined8 *)((long)puVar9 - uVar7 * (long)puVar16);
      }
    }
    plVar14 = *(long **)(*plVar8 + (long)unaff_x28 * 8);
    if (plVar14 != (long *)0x0) {
      do {
        while( true ) {
          plVar14 = (long *)*plVar14;
          if (plVar14 == (long *)0x0) goto LAB_10b144260;
          puVar6 = (undefined8 *)plVar14[1];
          if (puVar6 != puVar9) break;
          plVar4 = plVar14 + 2;
          func_0x000107c278d0(plVar4,param_2);
          if (((ulong)plVar4 & 1) != 0) goto LAB_10b144518;
        }
        if (((ulong)puVar16 & uVar15) == 0) {
          puVar6 = (undefined8 *)((ulong)puVar6 & uVar15);
        }
        else if (puVar16 <= puVar6) {
          uVar7 = 0;
          if (puVar16 != (undefined8 *)0x0) {
            uVar7 = (ulong)puVar6 / (ulong)puVar16;
          }
          puVar6 = (undefined8 *)((long)puVar6 - uVar7 * (long)puVar16);
        }
      } while (puVar6 == unaff_x28);
    }
  }
LAB_10b144260:
  plVar14 = (long *)0x38;
  __Znwm();
  plVar4 = puVar1 + 10;
  uStack_68 = 0;
  *plVar14 = 0;
  plVar14[1] = (long)puVar9;
  plStack_78 = plVar14;
  plStack_70 = plVar4;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(plVar14 + 2,param_2);
  plVar14[5] = 0;
  plVar14[6] = 0;
  func_0x00010b14f600();
  if ((puVar16 == (undefined8 *)0x0) ||
     (*(float *)(puVar1 + 0xc) * (float)puVar16 < (float)(puVar1[0xb] + 1))) {
    uVar15 = 1;
    if ((undefined8 *)0x2 < puVar16) {
      uVar15 = (ulong)(((ulong)puVar16 & (long)puVar16 - 1U) != 0);
    }
    puVar6 = (undefined8 *)(uVar15 | (long)puVar16 << 1);
    puVar16 = (undefined8 *)(long)((float)(puVar1[0xb] + 1) / *(float *)(puVar1 + 0xc));
    if (puVar6 <= puVar16) {
      puVar6 = puVar16;
    }
    if ((long)puVar6 - 1U == 0) {
      puVar6 = (undefined8 *)0x2;
    }
    else if (((ulong)puVar6 & (long)puVar6 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
    }
    puVar16 = (undefined8 *)puVar1[9];
    if (puVar16 < puVar6) {
LAB_10b144314:
      if ((ulong)puVar6 >> 0x3d != 0) {
        func_0x000104bd35f4();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10b1445f8);
        (*pcVar2)();
      }
      lVar5 = (long)puVar6 << 3;
      __Znwm(lVar5);
      FUN_10b144670(plVar8,lVar5);
      puVar1[9] = puVar6;
      lVar5 = puVar1[8];
      for (puVar16 = (undefined8 *)0x0; puVar6 != puVar16;
          puVar16 = (undefined8 *)((long)puVar16 + 1)) {
        *(undefined8 *)(lVar5 + (long)puVar16 * 8) = 0;
      }
      plVar10 = (long *)*plVar4;
      puVar16 = puVar6;
      if (plVar10 != (long *)0x0) {
        puVar12 = (undefined8 *)plVar10[1];
        uVar7 = (long)puVar6 - 1;
        uVar15 = 0;
        if (puVar6 != (undefined8 *)0x0) {
          uVar15 = (ulong)puVar12 / (ulong)puVar6;
        }
        puVar13 = puVar12;
        if (puVar6 <= puVar12) {
          puVar13 = (undefined8 *)((long)puVar12 - uVar15 * (long)puVar6);
        }
        if (((ulong)puVar6 & uVar7) == 0) {
          puVar13 = (undefined8 *)((ulong)puVar12 & uVar7);
        }
        *(long **)(lVar5 + (long)puVar13 * 8) = plVar4;
        while (plVar11 = plVar10, plVar10 = (long *)*plVar11, plVar10 != (long *)0x0) {
          puVar12 = (undefined8 *)plVar10[1];
          if (((ulong)puVar6 & uVar7) == 0) {
            puVar12 = (undefined8 *)((ulong)puVar12 & uVar7);
          }
          else if (puVar6 <= puVar12) {
            uVar15 = 0;
            if (puVar6 != (undefined8 *)0x0) {
              uVar15 = (ulong)puVar12 / (ulong)puVar6;
            }
            puVar12 = (undefined8 *)((long)puVar12 - uVar15 * (long)puVar6);
          }
          if (puVar12 != puVar13) {
            if (*(long *)(lVar5 + (long)puVar12 * 8) == 0) {
              *(long **)(lVar5 + (long)puVar12 * 8) = plVar11;
              puVar13 = puVar12;
            }
            else {
              *plVar11 = *plVar10;
              *plVar10 = **(undefined8 **)(lVar5 + (long)puVar12 * 8);
              **(long **)(lVar5 + (long)puVar12 * 8) = (long)plVar10;
              plVar10 = plVar11;
            }
          }
        }
      }
    }
    else if (puVar6 < puVar16) {
      puVar12 = (undefined8 *)(long)((float)(ulong)puVar1[0xb] / *(float *)(puVar1 + 0xc));
      if ((puVar16 < (undefined8 *)0x3) || (((ulong)puVar16 & (long)puVar16 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((undefined8 *)0x1 < puVar12) {
        puVar12 = (undefined8 *)(1L << (-LZCOUNT((long)puVar12 + -1) & 0x3fU));
      }
      if (puVar6 <= puVar12) {
        puVar6 = puVar12;
      }
      if (puVar6 < puVar16) {
        if (puVar6 != (undefined8 *)0x0) goto LAB_10b144314;
        FUN_10b144670(plVar8,0);
        puVar1[9] = 0;
        puVar16 = (undefined8 *)0x0;
      }
      else {
        puVar16 = (undefined8 *)puVar1[9];
      }
    }
    if (((ulong)puVar16 & (long)puVar16 - 1U) == 0) {
      unaff_x28 = (undefined8 *)((long)puVar16 - 1U & (ulong)puVar9);
    }
    else {
      unaff_x28 = puVar9;
      if (puVar16 <= puVar9) {
        uVar15 = 0;
        if (puVar16 != (undefined8 *)0x0) {
          uVar15 = (ulong)puVar9 / (ulong)puVar16;
        }
        unaff_x28 = (undefined8 *)((long)puVar9 - uVar15 * (long)puVar16);
      }
    }
  }
  lVar5 = *plVar8;
  plVar8 = *(long **)(lVar5 + (long)unaff_x28 * 8);
  if (plVar8 == (long *)0x0) {
    *plVar14 = *plVar4;
    *plVar4 = (long)plVar14;
    *(long **)(lVar5 + (long)unaff_x28 * 8) = plVar4;
    if (*plVar14 != 0) {
      puVar9 = *(undefined8 **)(*plVar14 + 8);
      if (((ulong)puVar16 & (long)puVar16 - 1U) == 0) {
        puVar9 = (undefined8 *)((ulong)puVar9 & (long)puVar16 - 1U);
      }
      else if (puVar16 <= puVar9) {
        uVar15 = 0;
        if (puVar16 != (undefined8 *)0x0) {
          uVar15 = (ulong)puVar9 / (ulong)puVar16;
        }
        puVar9 = (undefined8 *)((long)puVar9 - uVar15 * (long)puVar16);
      }
      *(long **)(lVar5 + (long)puVar9 * 8) = plVar14;
    }
  }
  else {
    *plVar14 = *plVar8;
    *plVar8 = (long)plVar14;
  }
  plStack_78 = (long *)0x0;
  puVar1[0xb] = puVar1[0xb] + 1;
  FUN_10b144688(&plStack_78);
LAB_10b144518:
  func_0x00010b150438();
  *param_1 = 0;
  param_1[1] = 0;
  lVar5 = plVar14[6];
  if (lVar5 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar5;
    if (lVar5 != 0) {
      lVar5 = plVar14[5];
      *param_1 = lVar5;
      if ((lVar5 != 0) && ((*(byte *)(*(long *)(lVar5 + 0x38) + 0x160) & 1) == 0))
      goto LAB_10b144570;
    }
  }
  func_0x00010b144138(param_1);
  (*(code *)*param_3)(param_1,param_3);
  FUN_10b144634(plVar14 + 5,*param_1,param_1[1]);
LAB_10b144570:
  func_0x00010b14f89c();
  return;
}



/* Entry: 10b144634; end: 10b14466f;  */

undefined8 * FUN_10b144634(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  if (param_3 != 0) {
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10 != 0);
  }
  func_0x00010b15054c();
  *param_1 = param_2;
  param_1[1] = param_3;
  func_0x00010b150438();
  return param_1;
}



/* Entry: 10b144670; end: 10b144687;  */

void FUN_10b144670(long *param_1,long param_2)

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



/* Entry: 10b144688; end: 10b1446f7;  */

long * FUN_10b144688(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010b1446d4(lVar1 + 0x28);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + 0x10);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 10b1446f8; end: 10b14478f;  */

void FUN_10b1446f8(void)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  long unaff_x20;
  long lVar4;
  undefined8 auStack_58 [3];
  
  func_0x00010b14f67c();
  puVar3 = auStack_58;
  func_0x000107c316c8(puVar3,&UNK_10f73072c);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  plVar2 = *(long **)(unaff_x20 + 0x18);
  lVar4 = *plVar2;
  func_0x00010b14f7d8();
  func_0x00010b14ffc4();
  *puVar3 = extraout_x8;
  FUN_10b13db00(puVar3 + 3,uVar1,plVar2,lVar4 + 0x38);
  FUN_10b144790();
  func_0x000107c316d0(auStack_58);
  return;
}



/* Entry: 10b144790; end: 10b1447e3;  */

void FUN_10b144790(long *param_1,long param_2,long param_3)

{
  int extraout_w10;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 0x10) == 0 || (*(long *)(*(long *)(param_2 + 0x10) + 8) == -1)))) {
    if (param_3 != 0) {
      do {
        func_0x00010b14ea0c();
      } while (extraout_w10 != 0);
    }
    FUN_10b144634(param_2 + 8);
    func_0x00010b14ff14();
    return;
  }
  return;
}



/* Entry: 10b1447e4; end: 10b1447e7;  */

void FUN_10b1447e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbe738;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b1447e8; end: 10b1447fb;  */

void FUN_10b1447e8(void)

{
  func_0x00010b144804();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1447fc; end: 10b14482b;  */

void FUN_10b1447fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b14f2dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b14482c; end: 10b144897;  */

void FUN_10b14482c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010b14ea9c();
  func_0x00010b14fb78();
  FUN_10b126258();
  FUN_10b144898(uStack_40,param_2,param_3);
  func_0x00010b14ea84();
  FUN_10b1262e4();
  func_0x00010b14e980(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b14f0dc();
  FUN_10b1262e4();
  func_0x00010b14efcc();
  func_0x00010b150720();
  func_0x00010b150618(&UNK_110cbd8a0);
  FUN_10b1f68fc();
  return;
}



/* Entry: 10b144898; end: 10b1448cb;  */

void FUN_10b144898(void)

{
  func_0x00010b150720();
  func_0x00010b150618(&UNK_110cbd8a0);
  FUN_10b1f68fc();
  return;
}



/* Entry: 10b1448cc; end: 10b144923;  */

long FUN_10b1448cc(undefined8 param_1)

{
  long lVar1;
  long alStack_30 [2];
  
  FUN_10b144924(alStack_30,param_1);
  func_0x00010b14f420(alStack_30[0] + 0x48);
  __ZNSt3__15mutex4lockEv();
  lVar1 = alStack_30[0];
  func_0x00010b1419cc(alStack_30[0]);
  func_0x00010b14f5e4();
  func_0x00010b14fe00();
  return lVar1;
}



/* Entry: 10b144924; end: 10b14495f;  */

void FUN_10b144924(undefined8 param_1)

{
  long extraout_x8;
  int extraout_w10;
  undefined8 *unaff_x21;
  undefined8 in_register_00005008;
  
  func_0x00010b14ef5c();
  func_0x00010b14fed4();
  func_0x00010b14f8d0();
  unaff_x21[1] = in_register_00005008;
  *unaff_x21 = param_1;
  if (extraout_x8 != 0) {
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)();
  return;
}



/* Entry: 10b144960; end: 10b144a43;  */

void FUN_10b144960(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uStack_50;
  long lStack_48;
  undefined1 auStack_40 [16];
  
  if (param_3 != 0) {
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10 != 0);
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10_00 != 0);
  }
  uStack_50 = param_2;
  lStack_48 = param_3;
  FUN_10b144924(auStack_40,&uStack_50);
  func_0x00010b1501bc();
  func_0x00010b14f574();
  func_0x00010b14f774();
  func_0x00010b1419a8(auStack_40);
  (**(code **)*param_1)();
  func_0x00010b1419a8(&uStack_50);
  func_0x00010b14fe00();
  func_0x000107c27b68(param_1[2]);
  return;
}



/* Entry: 10b144a44; end: 10b144a47;  */

undefined8 FUN_10b144a44(undefined8 param_1)

{
  func_0x00010b14fd24(&PTR_FUN_110cbe7a0);
  return param_1;
}



/* Entry: 10b144a48; end: 10b144a5b;  */

void FUN_10b144a48(void)

{
  FUN_10b144aa4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b144a5c; end: 10b144aa3;  */

void FUN_10b144a5c(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  undefined1 auStack_30 [16];
  
  func_0x00010b14eb80();
  if (param_3 != 0) {
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10 != 0);
  }
  FUN_10b144960(param_1 + 8);
  func_0x00010b1419a8(auStack_30);
  return;
}



/* Entry: 10b144aa4; end: 10b144acb;  */

undefined8 FUN_10b144aa4(undefined8 param_1)

{
  func_0x00010b14fd24(&PTR_FUN_110cbe7a0);
  return param_1;
}



/* Entry: 10b144acc; end: 10b144b77;  */

void FUN_10b144acc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 extraout_x8;
  int extraout_w10;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar3 = (long *)param_2[2];
  lVar2 = *plVar3;
  lVar4 = *(long *)(lVar2 + 0x28);
  uVar6 = *(undefined8 *)(lVar2 + 0x28);
  uVar5 = *(undefined8 *)(lVar2 + 0x20);
  func_0x00010b14f7d8();
  puVar1 = param_2;
  func_0x00010b14ffc4();
  *puVar1 = extraout_x8;
  uStack_50 = uVar5;
  uStack_48 = uVar6;
  if (lVar4 != 0) {
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10 != 0);
  }
  FUN_10b13db00(param_2 + 3,&uStack_50,plVar3 + 2,plVar3 + 4);
  func_0x0001052a1398(&uStack_50);
  FUN_10b144790(param_1,param_2 + 3,param_2);
  return;
}



/* Entry: 10b144b78; end: 10b144b97;  */

void FUN_10b144b78(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b13da54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b144b98; end: 10b144b9b;  */

void FUN_10b144b98(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b144b9c; end: 10b144bbb;  */

void FUN_10b144b9c(void)

{
  func_0x00010b14f288();
  FUN_10b144bbc();
  func_0x00010b14fb20();
  return;
}



/* Entry: 10b144bbc; end: 10b144bdf;  */

void FUN_10b144bbc(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_10b141a30();
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



/* Entry: 10b144be0; end: 10b144cdb;  */

void FUN_10b144be0(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  long lVar3;
  int extraout_w10;
  int extraout_w10_00;
  long *plVar4;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 auStack_58 [3];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  plVar4 = *(long **)(param_2 + 0x10);
  lVar3 = *plVar4;
  uStack_38 = *(undefined8 *)(lVar3 + 0x10);
  uStack_40 = *(undefined8 *)(lVar3 + 8);
  if (*(long *)(lVar3 + 0x10) != 0) {
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10 != 0);
  }
  puVar1 = auStack_58;
  func_0x000107c316c8(puVar1,&UNK_10f73072c);
  lVar3 = *plVar4;
  uStack_68 = *(undefined8 *)(lVar3 + 0x20);
  uStack_70 = *(undefined8 *)(lVar3 + 0x18);
  if (*(long *)(lVar3 + 0x20) != 0) {
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10_00 != 0);
  }
  lVar3 = plVar4[4];
  func_0x00010b14f7d8();
  puVar2 = puVar1;
  func_0x00010b14ffc4();
  *puVar2 = extraout_x8;
  FUN_10b13db00(puVar2 + 3,&uStack_70,plVar4 + 4,lVar3 + 0x38);
  FUN_10b144790(param_1,puVar1 + 3,puVar1);
  func_0x0001052a1398(&uStack_70);
  func_0x000107c316d0(auStack_58);
  func_0x000107c2bdf4(&uStack_40);
  return;
}



/* Entry: 10b144cdc; end: 10b144cfb;  */

void FUN_10b144cdc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010b13da84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b144cfc; end: 10b144cff;  */

void FUN_10b144cfc(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b144d00; end: 10b144d57;  */

void FUN_10b144d00(void)

{
  undefined1 in_ZR;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010b14ea9c();
  func_0x00010b14fb78();
  FUN_10b144d58();
  FUN_10b144da4(uStack_30);
  func_0x00010b14ea84();
  func_0x00010b144e2c();
  func_0x00010b14e980(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b14f0dc();
  func_0x00010b144e2c();
  func_0x00010b14efcc();
  func_0x00010b14fb6c();
  FUN_10b144d78();
  func_0x00010b14fb14();
  return;
}



/* Entry: 10b144d58; end: 10b144d77;  */

void FUN_10b144d58(void)

{
  func_0x00010b14fb6c();
  FUN_10b144d78();
  func_0x00010b14fb14();
  return;
}



/* Entry: 10b144d78; end: 10b144da3;  */

void FUN_10b144d78(undefined8 param_1,ulong param_2)

{
  if (param_2 < 0x666666666666667) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x28);
    return;
  }
  func_0x000104bd35f4();
  func_0x00010b150720();
  func_0x00010b150618(&UNK_110cbef40);
  FUN_10b144df8();
  return;
}



/* Entry: 10b144da4; end: 10b144dd7;  */

void FUN_10b144da4(void)

{
  func_0x00010b150720();
  func_0x00010b150618(&UNK_110cbef40);
  FUN_10b144df8();
  return;
}



/* Entry: 10b144dd8; end: 10b144ddb;  */

void FUN_10b144dd8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbef50;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b144ddc; end: 10b144def;  */

void FUN_10b144ddc(void)

{
  FUN_10b144e20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b144df0; end: 10b144df7;  */

void FUN_10b144df0(void)

{
  return;
}



/* Entry: 10b144df8; end: 10b144e1f;  */

undefined4 * FUN_10b144df8(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = 0;
  puVar1 = param_1;
  FUN_10b24b460();
  *(undefined4 **)(param_1 + 2) = puVar1;
  return param_1;
}



/* Entry: 10b144e20; end: 10b144e3b;  */

void FUN_10b144e20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbef50;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b144e3c; end: 10b144e5b;  */

void FUN_10b144e3c(void)

{
  func_0x00010b14fb6c();
  FUN_10b144e5c();
  func_0x00010b14fb14();
  return;
}



/* Entry: 10b144e5c; end: 10b144e77;  */

void FUN_10b144e5c(undefined8 *param_1,ulong param_2)

{
  if (param_2 >> 0x3a == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 6);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_110cbed78;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b144e78; end: 10b144e7b;  */

void FUN_10b144e78(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbed78;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b144e7c; end: 10b144e8f;  */

void FUN_10b144e7c(void)

{
  func_0x00010b144e98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b144e90; end: 10b144eb3;  */

void FUN_10b144e90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b14f2dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b144eb4; end: 10b144ed7;  */

void FUN_10b144eb4(long param_1)

{
  func_0x00010b14f1cc();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b144ed8; end: 10b144f3f;  */

void FUN_10b144ed8(undefined8 param_1)

{
  long extraout_x8;
  int extraout_w10;
  long unaff_x19;
  undefined1 auStack_40 [32];
  
  func_0x00010b14f3d0();
  FUN_10b144f40(param_1);
  func_0x00010b15054c(*(undefined8 *)(unaff_x19 + 8));
  if (extraout_x8 != 0) {
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10 != 0);
  }
  func_0x00010b14f18c();
  FUN_10b144f5c();
  func_0x00010b14fdf0();
  func_0x00010b141cc4(auStack_40);
  return;
}



/* Entry: 10b144f40; end: 10b144f5b;  */

void FUN_10b144f40(void)

{
  undefined1 uStack_11;
  
  FUN_10b1450ac(&uStack_11);
  return;
}



/* Entry: 10b144f5c; end: 10b1450ab;  */

void FUN_10b144f5c(void)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x9;
  int extraout_w10;
  undefined8 *unaff_x20;
  undefined1 auStack_b8 [40];
  long lStack_90;
  undefined1 auStack_80 [56];
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  int iStack_30;
  
  func_0x00010b14f1e4();
  func_0x00010b150674();
  FUN_10b145278();
  func_0x00010b1504e4();
  FUN_10b1452a0();
  FUN_10b141ca0(auStack_80);
  FUN_10b141ca0(auStack_40);
  func_0x00010b14fa0c();
  func_0x00010b14fefc(uStack_48);
  func_0x00010b150624();
  *unaff_x20 = 0;
  unaff_x20[1] = 0;
  func_0x00010b14efa0();
  func_0x00010b14f400(extraout_x8 + 0x48);
  __ZNSt3__15mutex4lockEv();
  func_0x00010b1452c4();
  if (iStack_30 == 0) {
    func_0x00010b150778();
    FUN_10b145398();
    func_0x00010b14f694();
    lVar1 = *(long *)(extraout_x8_00 + 0x90);
    *(undefined8 *)(extraout_x8_00 + 0x90) = extraout_x9;
    if (lVar1 != 0) {
      func_0x00010b14e9f4();
      func_0x00010b150744();
      if (lVar1 != 0) {
        func_0x00010b14e9f4();
      }
    }
  }
  else {
    func_0x00010b150738();
    FUN_10b1452a0();
  }
  func_0x00010b14f4bc();
  if (lStack_90 != 0) {
    func_0x00010b150644();
    if (extraout_x8_01 != 0) {
      do {
        func_0x00010b14ea0c();
      } while (extraout_w10 != 0);
    }
    func_0x00010b150650();
    FUN_10b1452f4();
    FUN_10b141ca0(auStack_b8);
  }
  func_0x00010b14f1f8();
  FUN_10b141ca0();
  puVar2 = auStack_80;
  FUN_10b1457b4();
  func_0x00010b14f498();
  func_0x00010b14f5f4();
  if (puVar2 != (undefined1 *)0x0) {
    func_0x00010b14e9f4();
  }
  func_0x00010b14fbf4();
  return;
}



/* Entry: 10b1450ac; end: 10b145103;  */

void FUN_10b1450ac(void)

{
  undefined1 in_ZR;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010b14ea9c();
  func_0x00010b14fb78();
  FUN_10b145104();
  FUN_10b145154(uStack_30);
  func_0x00010b14ea84();
  FUN_10b145268();
  func_0x00010b14e980(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b14f0dc();
  FUN_10b145268();
  func_0x00010b14efcc();
  func_0x00010b14fb6c();
  FUN_10b145124();
  func_0x00010b14fb14();
  return;
}



/* Entry: 10b145104; end: 10b145123;  */

void FUN_10b145104(void)

{
  func_0x00010b14fb6c();
  FUN_10b145124();
  func_0x00010b14fb14();
  return;
}



/* Entry: 10b145124; end: 10b145153;  */

void FUN_10b145124(undefined8 param_1,ulong param_2)

{
  if (param_2 < 0x1c71c71c71c71c8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x90);
    return;
  }
  func_0x000104bd35f4();
  func_0x00010b150720();
  func_0x00010b150618(&UNK_110cbe810);
  func_0x00010b1451ac();
  return;
}



/* Entry: 10b145154; end: 10b145187;  */

void FUN_10b145154(void)

{
  func_0x00010b150720();
  func_0x00010b150618(&UNK_110cbe810);
  func_0x00010b1451ac();
  return;
}



/* Entry: 10b145188; end: 10b14518b;  */

void FUN_10b145188(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbe820;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b14518c; end: 10b14519f;  */

void FUN_10b14518c(void)

{
  FUN_10b1451ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1451a0; end: 10b1451c7;  */

void FUN_10b1451a0(long param_1)

{
  func_0x000107c281bc(param_1 + 0x78);
  FUN_10b145224(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutexD1Ev_110346598)(param_1 + 0x18);
  return;
}



/* Entry: 10b1451c8; end: 10b1451eb;  */

void FUN_10b1451c8(long param_1)

{
  __ZNSt3__115recursive_mutexC1Ev();
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  return;
}



/* Entry: 10b1451ec; end: 10b1451f7;  */

void FUN_10b1451ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbe820;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b1451f8; end: 10b145223;  */

void FUN_10b1451f8(long param_1)

{
  func_0x000107c281bc(param_1 + 0x60);
  FUN_10b145224(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutexD1Ev_110346598)(param_1);
  return;
}



/* Entry: 10b145224; end: 10b145267;  */

void FUN_10b145224(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x00010b145244();
  }
  return;
}



/* Entry: 10b145268; end: 10b145277;  */

void FUN_10b145268(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b145278; end: 10b14529f;  */

void FUN_10b145278(void)

{
  func_0x00010b14ec8c();
  func_0x00010b14f4e4();
  func_0x00010b14e948();
  func_0x00010b14eff4();
  return;
}



/* Entry: 10b1452a0; end: 10b1452f3;  */

void FUN_10b1452a0(void)

{
  func_0x00010b14e8d0();
  FUN_10b141ca0();
  return;
}



/* Entry: 10b1452f4; end: 10b145397;  */

void FUN_10b1452f4(void)

{
  long extraout_x9;
  int extraout_w11;
  int extraout_w12;
  long unaff_x19;
  
  func_0x00010b14f918();
  if (extraout_x9 != 0) {
    do {
      func_0x00010b14ec7c();
    } while (extraout_w12 != 0);
    do {
      func_0x00010b14ee64();
    } while (extraout_w11 != 0);
  }
  func_0x00010b14f1d8();
  FUN_10b145454();
  func_0x00010b14fda4();
  func_0x00010b14fdf8();
  func_0x000107c27b68(*(undefined8 *)(unaff_x19 + 0x10));
  return;
}



/* Entry: 10b145398; end: 10b1453bb;  */

void FUN_10b145398(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  func_0x00010b14ef90();
  FUN_10b1453bc();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 10b1453bc; end: 10b1453cb;  */

void FUN_10b1453bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_DAT_110cbe870;
  uVar1 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = param_2[2];
  param_2[2] = 0;
  param_1[3] = uVar1;
  return;
}



/* Entry: 10b1453cc; end: 10b1453df;  */

void FUN_10b1453cc(void)

{
  FUN_10b145428();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1453e0; end: 10b145427;  */

void FUN_10b1453e0(void)

{
  long extraout_x8;
  int extraout_w10;
  undefined1 auStack_30 [16];
  
  func_0x00010b14f864();
  if (extraout_x8 != 0) {
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10 != 0);
  }
  func_0x00010b14f478();
  FUN_10b1452f4();
  FUN_10b141ca0(auStack_30);
  return;
}



/* Entry: 10b145428; end: 10b145453;  */

undefined8 * FUN_10b145428(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cbe870;
  FUN_10b1457b4(param_1 + 1);
  return param_1;
}



/* Entry: 10b145454; end: 10b1454a7;  */

void FUN_10b145454(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 *puStack_30;
  
  uStack_48 = param_1;
  uStack_40 = param_2;
  FUN_10b1454a8(&puStack_38,&uStack_48);
  for (puVar1 = puStack_38; puVar1 != puStack_30; puVar1 = puVar1 + 1) {
    (**(code **)*puVar1)();
  }
  func_0x00010b14ff04();
  return;
}



/* Entry: 10b1454a8; end: 10b145577;  */

void FUN_10b1454a8(void)

{
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 uVar1;
  undefined1 auStack_40 [16];
  
  func_0x00010b14f6f8();
  FUN_10b145578(auStack_40,*(undefined8 *)(unaff_x21 + 8));
  func_0x00010b14fce0();
  FUN_10b145638(extraout_x8 + 0x40,auStack_40);
  FUN_10b144044(auStack_40);
  func_0x00010b14fce0();
  uVar1 = *(undefined8 *)(extraout_x8_00 + 0x60);
  unaff_x20[1] = *(undefined8 *)(extraout_x8_00 + 0x68);
  *unaff_x20 = uVar1;
  unaff_x20[2] = *(undefined8 *)(extraout_x8_00 + 0x70);
  *(undefined8 *)(extraout_x8_00 + 0x68) = 0;
  *(undefined8 *)(extraout_x8_00 + 0x70) = 0;
  *(undefined8 *)(extraout_x8_00 + 0x60) = 0;
  func_0x00010b14fec0();
  return;
}



/* Entry: 10b145578; end: 10b145637;  */

void FUN_10b145578(void)

{
  code *pcVar1;
  undefined8 ****ppppuVar2;
  long extraout_x8;
  long extraout_x8_00;
  long lVar3;
  long extraout_x9;
  long extraout_x9_00;
  int extraout_w11;
  undefined8 ***apppuStack_40 [4];
  
  func_0x00010b14f670();
  func_0x00010b1504fc();
  FUN_10b145278();
  func_0x00010b1504f0();
  FUN_10b1452a0();
  ppppuVar2 = apppuStack_40;
  FUN_10b141ca0();
  func_0x00010b14fda4();
  func_0x00010b150034();
  apppuStack_40[0] = ppppuVar2;
  func_0x00010b14f600();
  __ZNSt3__15mutex4lockEv();
  func_0x00010b150680();
  lVar3 = extraout_x8;
  if (extraout_x9 != 0) {
    do {
      func_0x00010b14eb14();
      lVar3 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  func_0x00010b150558(lVar3 + 0x18);
  FUN_10b1456a8();
  func_0x00010b14fdf8();
  func_0x00010b14ff74();
  if (extraout_x9_00 != 0) {
    func_0x00010b1503e8();
    func_0x00010b14f374();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10b145608);
    (*pcVar1)();
  }
  func_0x00010b150004();
  func_0x00010b14f4ec();
  func_0x00010b14fbf4();
  return;
}



/* Entry: 10b145638; end: 10b1456a7;  */

long FUN_10b145638(long param_1)

{
  undefined1 extraout_w8;
  
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_10b1456e0(param_1);
  }
  else {
    func_0x00010b150088();
    *(undefined1 *)(param_1 + 0x18) = extraout_w8;
  }
  return param_1;
}



/* Entry: 10b1456a8; end: 10b1456d7;  */

void FUN_10b1456a8(void)

{
  ulong uVar1;
  ulong unaff_x19;
  
  func_0x00010b14f108();
  while (uVar1 = unaff_x19, FUN_10b1456d8(), (uVar1 & 1) == 0) {
    func_0x00010b14f320();
  }
  return;
}



/* Entry: 10b1456d8; end: 10b1456df;  */

undefined8 FUN_10b1456d8(long *param_1)

{
  undefined8 unaff_x19;
  
  if ((*(byte *)(*param_1 + 0x10) & 1) == 0) {
    func_0x00010b14ea5c();
  }
  else {
    unaff_x19 = 1;
  }
  return unaff_x19;
}



/* Entry: 10b1456e0; end: 10b14576b;  */

void FUN_10b1456e0(void)

{
  undefined1 in_ZR;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  
  func_0x00010b14f3d0();
  func_0x00010b150148();
  if ((bool)in_ZR) {
    func_0x00010b144014();
  }
  else {
    __ZNSt13exception_ptrD1Ev();
    uVar1 = *unaff_x20;
    unaff_x19[1] = unaff_x20[1];
    *unaff_x19 = uVar1;
    *unaff_x20 = 0;
    unaff_x20[1] = 0;
    *(undefined1 *)(unaff_x19 + 2) = 1;
  }
  return;
}



/* Entry: 10b14576c; end: 10b145783;  */

void FUN_10b14576c(void)

{
  FUN_10b145784();
  func_0x00010b14fccc();
  return;
}



/* Entry: 10b145784; end: 10b14579b;  */

void FUN_10b145784(void)

{
  FUN_10b14579c();
  return;
}



/* Entry: 10b14579c; end: 10b1457b3;  */

void FUN_10b14579c(long param_1)

{
  __ZNSt13exception_ptrC1ERKS_();
  *(undefined1 *)(param_1 + 0x10) = 0;
  return;
}



/* Entry: 10b1457b4; end: 10b1457d3;  */

long FUN_10b1457b4(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b14ed08();
  lVar1 = unaff_x19;
  func_0x00010b14f1cc();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b1457d4; end: 10b1457d7;  */

void FUN_10b1457d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbe8b0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b1457d8; end: 10b1457eb;  */

void FUN_10b1457d8(void)

{
  FUN_10b14c160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1457ec; end: 10b1457f3;  */

void FUN_10b1457ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b14f2dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


