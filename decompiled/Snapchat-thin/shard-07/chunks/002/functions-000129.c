/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1052774b4; end: 1052774cb;  */

void FUN_1052774b4(void)

{
  return;
}



/* Entry: 1052774cc; end: 105277523;  */

void FUN_1052774cc(void)

{
  func_0x00010527bc98();
  func_0x0001052774f0();
  return;
}



/* Entry: 105277524; end: 10527752b;  */

void FUN_105277524(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010054d294(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x10;
    func_0x00010b9a8d98();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10527752c; end: 10527755f;  */

void FUN_10527752c(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010054d294();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x10;
    func_0x00010b9a8d98();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 105277560; end: 105277573;  */

undefined8 FUN_105277560(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x00010527bce8(param_1 + 8);
  FUN_105275ccc();
  func_0x00010007e5d0();
  func_0x0001003a8cb8();
  return unaff_x19;
}



/* Entry: 105277574; end: 105277593;  */

undefined8 FUN_105277574(void)

{
  undefined8 unaff_x19;
  
  func_0x00010527be74();
  func_0x00010527c120();
  func_0x00010007e5d0();
  func_0x0001003a8cb8();
  return unaff_x19;
}



/* Entry: 105277594; end: 1052775db;  */

void FUN_105277594(long param_1)

{
  param_1 = param_1 + 8;
  func_0x00010045db50();
  if (param_1 != 0) {
    func_0x0001003a916c();
  }
  return;
}



/* Entry: 1052775dc; end: 1052778c7;  */

void FUN_1052775dc(void)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  long lVar5;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  long unaff_x21;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined *puVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  long lStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  
  func_0x00010527bccc();
  FUN_105276834(&puStack_70);
  FUN_1052778c8(&puStack_a0);
  FUN_105276eb4(&lStack_d8);
  puVar3 = puStack_70;
  puStack_70 = (undefined8 *)0x0;
  puStack_b8 = puVar3;
  puStack_b0 = puStack_a0;
  lStack_a8 = lStack_d8;
  puStack_a0 = (undefined8 *)0x0;
  lStack_d8 = 0;
  func_0x00010527bbb8();
  func_0x000104bddf38(&puStack_a0);
  func_0x00010527c0bc();
  puVar4 = (undefined8 *)0x58;
  __Znwm();
  plVar9 = puVar4 + 1;
  *plVar9 = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110873328;
  if (puVar3 != (undefined8 *)0x0) {
    do {
      func_0x00010527c1d4();
    } while (extraout_w10 != 0);
  }
  lVar5 = *(long *)(unaff_x21 + 0x10);
  if ((lVar5 != 0) && (*(long *)(lVar5 + 0x10) != 0)) {
    do {
      func_0x00010527bf04();
      lVar5 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  puVar6 = puVar4 + 3;
  *puVar6 = &PTR_FUN_110872f58;
  puVar11 = puVar4 + 4;
  *puVar11 = &PTR_FUN_110872f88;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = puVar3;
  puStack_70 = (undefined8 *)0x0;
  puVar4[8] = lVar5;
  puStack_a0 = (undefined8 *)0x0;
  puVar4[9] = 0;
  puVar4[10] = 0;
  FUN_105275ccc(&puStack_a0);
  func_0x00010527c0bc();
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar2) {
      *plVar9 = *plVar9 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  puStack_70 = puVar11;
  puStack_68 = puVar4;
  func_0x0001003a8180(puVar4 + 5,&puStack_70);
  func_0x0001003a90c4(&puStack_70);
  uStack_c8 = 0;
  lStack_d8 = 0;
  uStack_d0 = 0;
  puVar3 = puStack_b0 + 3;
  puStack_c0 = puVar6;
  for (lVar5 = puStack_b0[2] << 4; lVar5 != 0; lVar5 = lVar5 + -0x10) {
    func_0x00010b9a9894(&puStack_70,puVar3);
    func_0x0001000fecf4(&lStack_d8,&puStack_70);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_70);
    puVar3 = puVar3 + 2;
  }
  if (lStack_a8 == 0) {
    uVar7 = 0;
    puVar8 = &UNK_10f7d0ef0;
  }
  else {
    puVar8 = (undefined *)(lStack_a8 + 0x18);
    uVar7 = *(undefined4 *)(lStack_a8 + 0xc);
  }
  uVar10 = *(undefined8 *)(puVar4[8] + 0xb8);
  func_0x00010015bc98(&puStack_a0,&lStack_d8);
  puStack_68 = (undefined8 *)uStack_98;
  puStack_70 = puStack_a0;
  uStack_60 = uStack_90;
  puStack_a0 = (undefined8 *)0x0;
  uStack_98 = 0;
  uStack_90 = 0;
  func_0x00010bcc7c78(auStack_80,uVar10,puVar6,&puStack_70,2,puVar4[8] + 0x18,puVar8,uVar7);
  func_0x0001000e30f4(&puStack_70);
  FUN_105277998(puVar4 + 9,auStack_80);
  FUN_1052758ec(auStack_80);
  func_0x0001000e30f4(&puStack_a0);
  if (puVar4[6] != 0) {
    do {
      func_0x00010527bcd8();
    } while (extraout_w10_00 != 0);
  }
  puStack_70 = puVar11;
  func_0x00010b9a8f78(extraout_x8,&puStack_70);
  func_0x000104bddedc(&puStack_70);
  func_0x00010527be30();
  FUN_1052779d8(&puStack_c0);
  func_0x000105277a04(&puStack_b8);
  return;
}



/* Entry: 1052778c8; end: 10527796b;  */

void FUN_1052778c8(void)

{
  code *pcVar1;
  uint extraout_w8;
  
  func_0x00010527bac0();
  func_0x00010527c1e4();
  func_0x00010b9aab20();
  func_0x00010527c258();
  if ((extraout_w8 & 1) != 0) {
    return;
  }
  func_0x00010527bbdc();
  func_0x00010527c28c();
  func_0x00010527bdac();
  func_0x00010527bb18();
  func_0x00010527bd74();
  func_0x00010527c240();
  func_0x00010527bb00();
  func_0x00010527ba94();
  func_0x00010527bc2c();
  func_0x00010527ba70();
  func_0x00010527bea4();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x105277934);
  (*pcVar1)();
}



/* Entry: 10527796c; end: 10527796f;  */

void FUN_10527796c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110873328;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105277970; end: 105277983;  */

void FUN_105277970(void)

{
  func_0x00010527798c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105277984; end: 105277997;  */

void FUN_105277984(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010527bafc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 105277998; end: 1052779d7;  */

undefined8 * FUN_105277998(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (param_2 != param_1) {
    func_0x00010bcc7964(param_1);
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
    *param_2 = 0;
    param_2[1] = 0;
  }
  return param_1;
}



/* Entry: 1052779d8; end: 105277a33;  */

long * FUN_1052779d8(long *param_1)

{
  if (*param_1 != 0) {
    func_0x0001003a916c(*param_1 + 8);
  }
  return param_1;
}



/* Entry: 105277a34; end: 105277a7b;  */

void FUN_105277a34(long param_1)

{
  param_1 = param_1 + 8;
  func_0x00010045db50();
  if (param_1 != 0) {
    func_0x0001003a916c();
  }
  return;
}



/* Entry: 105277a7c; end: 105277c27;  */

undefined4 * FUN_105277a7c(undefined8 param_1,long param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 in_ZR;
  undefined4 uVar5;
  undefined4 *puVar7;
  undefined8 extraout_x8;
  long extraout_x8_00;
  int extraout_w12;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 auStack_a8 [2];
  code *pcStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined4 uStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uVar6;
  
  uVar6 = param_1;
  func_0x00010527ba24();
  uVar5 = (undefined4)uVar6;
  uStack_48 = extraout_x8;
  FUN_105277c50();
  func_0x00010527bffc(&pcStack_78,param_1);
  uVar6 = param_1;
  FUN_105277cec();
  FUN_105276834(&uStack_c8,param_1,3);
  FUN_105276834(&uStack_80,param_1,4);
  pcVar4 = pcStack_78;
  uStack_88 = uStack_80;
  uStack_90 = uStack_c8;
  uStack_80 = 0;
  pcStack_78 = (code *)0x0;
  pcStack_a0 = pcVar4;
  uStack_c8 = 0;
  auStack_a8[0] = uVar5;
  uStack_98 = uVar6;
  func_0x000104bda388(&uStack_80);
  func_0x00010527bd9c();
  func_0x00010527bfc8();
  lStack_50 = *(long *)(param_2 + 0x10);
  uStack_c8 = CONCAT44(uStack_c8._4_4_,uVar5);
  uStack_58 = uVar6;
  if (pcVar4 != (code *)0x0) {
    pcVar1 = pcVar4 + 8;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar3) {
        *(int *)pcVar1 = *(int *)pcVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lStack_50 = *(long *)(param_2 + 0x10);
    uStack_58 = uStack_98;
  }
  uStack_b8 = uStack_58;
  if ((lStack_50 != 0) && (*(long *)(lStack_50 + 0x10) != 0)) {
    do {
      func_0x00010527bb40();
      lStack_50 = extraout_x8_00;
    } while (extraout_w12 != 0);
  }
  pcStack_78 = FUN_105277d9c;
  ppuStack_70 = &PTR_DAT_110873388;
  uStack_68 = (undefined4)uStack_c8;
  pcStack_60 = pcVar4;
  uStack_c0 = 0;
  uStack_b0 = 0;
  FUN_105276550();
  func_0x00010527ba64(ppuStack_70);
  FUN_105277c28(&uStack_c8);
  func_0x00010527bad8();
  puVar7 = auStack_a8;
  FUN_105278020();
  func_0x00010527ba10(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010527ba64(ppuStack_70);
    FUN_105277c28(&uStack_c8);
    puVar7 = auStack_a8;
    FUN_105278020(puVar7);
    func_0x00010527bb70();
    FUN_105275ccc(puVar7 + 6);
    func_0x00010527c118();
    return puVar7;
  }
  return puVar7;
}



/* Entry: 105277c28; end: 105277c4f;  */

long FUN_105277c28(long param_1)

{
  FUN_105275ccc(param_1 + 0x18);
  func_0x00010527c118();
  return param_1;
}



/* Entry: 105277c50; end: 105277ceb;  */

void FUN_105277c50(void)

{
  code *pcVar1;
  uint extraout_w8;
  
  func_0x00010527bfe0();
  func_0x00010b9aa97c();
  func_0x00010527c2d0();
  if ((extraout_w8 & 1) != 0) {
    return;
  }
  func_0x00010527bbdc();
  func_0x00010527c298();
  func_0x00010527bdac();
  func_0x00010527bb18();
  func_0x00010527bd74();
  func_0x00010527bb00();
  func_0x00010527ba94();
  func_0x00010527be5c();
  func_0x00010527ba48();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x105277cb8);
  (*pcVar1)();
}



/* Entry: 105277cec; end: 105277d9b;  */

void FUN_105277cec(undefined8 param_1)

{
  code *pcVar1;
  ulong extraout_x8;
  
  func_0x00010b9abfa4(param_1,2);
  func_0x00010b9aa9cc();
  func_0x00010527c2d0();
  if ((extraout_x8 & 1) != 0) {
    return;
  }
  func_0x00010527bbdc();
  func_0x00010527c298();
  func_0x00010527bdac();
  func_0x00010527bb18();
  func_0x00010527bd74();
  func_0x00010527bb00();
  func_0x00010527ba94();
  func_0x00010527be5c();
  func_0x00010527ba48();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x105277d68);
  (*pcVar1)();
}



/* Entry: 105277d9c; end: 105277f7b;  */

/* WARNING: Possible PIC construction at 0x000105277f88: Changing call to branch */

void FUN_105277d9c(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  char cVar5;
  char cVar6;
  undefined1 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 extraout_x8;
  long lVar10;
  code *extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined1 *extraout_x10;
  undefined8 extraout_x11;
  int iVar11;
  undefined *puVar12;
  undefined1 auStack_a0 [32];
  undefined8 auStack_80 [5];
  undefined8 uStack_58;
  
  lVar10 = param_1;
  func_0x00010527ba24();
  lVar10 = *(long *)(lVar10 + 0x18);
  if (lVar10 == 0) {
    iVar11 = 0;
    puVar12 = &UNK_10f7d0ef0;
  }
  else {
    puVar12 = (undefined *)(lVar10 + 0x18);
    iVar11 = *(int *)(lVar10 + 0xc);
  }
  iVar2 = *(int *)(param_1 + 0x10);
  uVar7 = iVar2 == 2;
  uStack_58 = extraout_x8;
  if ((bool)uVar7) {
    func_0x00010527bb50();
    func_0x00010527c024();
    func_0x0001004c3d34();
    func_0x00010527baa4(auStack_80[0]);
    func_0x00010bcc8020(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0xb8));
  }
  else {
    cVar5 = SBORROW4(iVar2,1);
    cVar6 = iVar2 + -1 < 0;
    uVar7 = iVar2 == 1;
    if ((bool)uVar7) {
      func_0x00010527bb50();
      func_0x00010527c024();
      func_0x00010527c100();
      func_0x00010527bff0();
      (*extraout_x8_00)(auStack_80);
      plVar8 = *(long **)(*(long *)(param_1 + 0x28) + 0xb8);
      func_0x00010054ccf8();
      if (iVar11 != 0) {
        func_0x0001004c330c();
        uVar3 = *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x28) + 0xb8) + 0x98);
        func_0x00010527c094();
        func_0x00010527c278();
        uVar1 = extraout_x11;
        puVar4 = extraout_x10;
        if (cVar6 == cVar5) {
          uVar1 = extraout_x8_01;
          puVar4 = auStack_a0;
        }
        (**(code **)(*plVar8 + 0x30))
                  (plVar8,uVar3,puVar4,uVar1,puVar12,iVar11,2,*(long *)(param_1 + 0x20) * 1000000);
        func_0x00010527bd5c();
      }
    }
    else if (iVar2 == 0) {
      func_0x00010054bc34(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0xb8));
      func_0x00010527bb50();
      func_0x00010527c024();
      func_0x00010527c100();
      func_0x00010527ba64(auStack_80[0]);
    }
  }
  func_0x00010527bad8();
  func_0x00010527ba10(uStack_58);
  if (!(bool)uVar7) {
    ___stack_chk_fail();
    func_0x00010527bd40();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x00010527bb70();
    puVar9 = (undefined8 *)0x8;
    ___cxa_allocate_exception();
    *puVar9 = &PTR_FUN_110873818;
    ___cxa_throw();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)();
    return;
  }
  return;
}



/* Entry: 105277f7c; end: 105277fbf;  */

/* WARNING: Possible PIC construction at 0x000105277f88: Changing call to branch */

void FUN_105277f7c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x8;
  ___cxa_allocate_exception();
  *puVar1 = &PTR_FUN_110873818;
  ___cxa_throw();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)();
  return;
}



/* Entry: 105277fc0; end: 105277fc3;  */

void FUN_105277fc0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)();
  return;
}



/* Entry: 105277fc4; end: 105277fd7;  */

void FUN_105277fc4(void)

{
  __ZNSt9exceptionD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105277fd8; end: 10527801f;  */

void FUN_105277fd8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Entry: 105278020; end: 105278047;  */

void FUN_105278020(void)

{
  long unaff_x19;
  
  func_0x00010527c190();
  func_0x000104bda388(unaff_x19 + 0x18);
  func_0x00010527c118();
  return;
}



/* Entry: 105278048; end: 10527808f;  */

void FUN_105278048(long param_1)

{
  param_1 = param_1 + 8;
  func_0x00010045db50();
  if (param_1 != 0) {
    func_0x0001003a916c();
  }
  return;
}



/* Entry: 105278090; end: 1052781a7;  */

void FUN_105278090(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  long *plVar3;
  char cVar4;
  char cVar5;
  long lVar6;
  long *plVar7;
  undefined *puVar8;
  undefined4 uVar9;
  undefined8 extraout_x8;
  undefined1 *extraout_x10;
  undefined8 extraout_x11;
  long unaff_x20;
  long unaff_x21;
  int iVar10;
  long alStack_60 [3];
  long lStack_48;
  int iStack_40;
  long lStack_38;
  
  plVar7 = alStack_60;
  func_0x00010527bccc();
  func_0x00010527c130(alStack_60);
  lVar6 = unaff_x20;
  FUN_105277c50();
  FUN_105277cec();
  lStack_48 = alStack_60[0];
  alStack_60[0] = 0;
  iVar10 = (int)lVar6;
  iStack_40 = iVar10;
  lStack_38 = unaff_x20;
  func_0x0001003a8c94();
  func_0x0001004c330c();
  cVar4 = SBORROW4(iVar10,1);
  cVar5 = iVar10 + -1 < 0;
  if (iVar10 < 2) {
    uVar2 = *(undefined4 *)(*(long *)(*(long *)(unaff_x21 + 0x10) + 0xb8) + 0x98);
    func_0x00010527c094();
    func_0x00010527c278();
    uVar1 = extraout_x11;
    plVar3 = (long *)extraout_x10;
    if (cVar5 == cVar4) {
      uVar1 = extraout_x8;
      plVar3 = alStack_60;
    }
    if (lStack_48 == 0) {
      uVar9 = 0;
      puVar8 = &UNK_10f7d0ef0;
    }
    else {
      puVar8 = (undefined *)(lStack_48 + 0x18);
      uVar9 = *(undefined4 *)(lStack_48 + 0xc);
    }
    (**(code **)(*plVar7 + 0x38))
              (plVar7,uVar2,plVar3,uVar1,puVar8,uVar9,
               *(undefined4 *)(&UNK_10dd76e80 + (long)iStack_40 * 4),lStack_38 * 1000000);
    func_0x00010527bd5c();
  }
  func_0x00010527bad8();
  func_0x00010527bdbc();
  return;
}



/* Entry: 1052781a8; end: 1052781ef;  */

void FUN_1052781a8(long param_1)

{
  param_1 = param_1 + 8;
  func_0x00010045db50();
  if (param_1 != 0) {
    func_0x0001003a916c();
  }
  return;
}



/* Entry: 1052781f0; end: 10527822b;  */

undefined8 * FUN_1052781f0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  long unaff_x20;
  undefined8 uStack_b0;
  undefined8 auStack_a8 [2];
  undefined1 uStack_91;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 auStack_80 [3];
  undefined8 uStack_68;
  
  *param_1 = param_2;
  if (param_3 == 0) {
    param_1[1] = 0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = param_3;
    if (param_3 != 0) {
      return param_1;
    }
  }
  FUN_10527822c();
  plVar2 = (long *)0x8;
  ___cxa_allocate_exception();
  *plVar2 = (long)(PTR___ZTVNSt3__112bad_weak_ptrE_110346af0 + 0x10);
  ___cxa_throw();
  func_0x00010527bef8();
  func_0x00010527ba24();
  uStack_68 = extraout_x8;
  func_0x00010527bbf0(auStack_80);
  func_0x00010527bffc(auStack_a8);
  uStack_90 = auStack_80[0];
  uStack_88 = auStack_a8[0];
  auStack_80[0] = 0;
  auStack_a8[0] = 0;
  func_0x00010527bbb8();
  func_0x0001003a8c94(auStack_80);
  if ((bRam00000001136b96b0 & 1) == 0) {
    iVar1 = 0x136b96b0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_105275d6c(0x1136b96a8);
      ___cxa_guard_release(0x1136b96b0);
    }
  }
  func_0x0001052784a0(auStack_80,&uStack_88);
  func_0x00010527846c(0x1136b96a8,auStack_80);
  puVar3 = auStack_80;
  FUN_105275bd0();
  func_0x00010527c0d8();
  func_0x00010527c034(uStack_91);
  if (extraout_x8_00 != 0) {
    puVar3 = auStack_a8;
    func_0x000100152bb8(puVar3,"file:///");
    if (((ulong)puVar3 & 1) == 0) {
      func_0x00010527bf94();
      puVar4 = puVar3;
      func_0x00010527be18();
      *puVar4 = extraout_x8_02;
      FUN_1052733ec(puVar4 + 3,auStack_a8,0x1136b96a8);
      goto LAB_105278368;
    }
  }
  func_0x00010527bf94();
  puVar4 = puVar3;
  func_0x00010527be18();
  *puVar4 = extraout_x8_01;
  func_0x00010527bf74();
  FUN_1052733ec(puVar3 + 3,auStack_80,0x1136b96a8);
  func_0x00010527bc70();
LAB_105278368:
  FUN_105275cf0(auStack_80,puVar3 + 3,puVar3);
  uStack_b0 = auStack_80[0];
  FUN_105273eb4(*(long *)(unaff_x20 + 0x10) + 0xb0,&uStack_b0);
  FUN_105275cc0(uStack_b0);
  func_0x00010527bad8();
  func_0x00010527bc0c();
  puVar3 = &uStack_90;
  FUN_1052785c8(puVar3);
  func_0x00010527ba10(uStack_68);
  if ((bool)in_ZR) {
    return puVar3;
  }
  ___stack_chk_fail();
  ___cxa_guard_abort(0x1136b96b0);
  FUN_1052785c8(&uStack_90);
  do {
    func_0x00010527bb70();
    func_0x0001003a8c94(auStack_80);
  } while( true );
}



/* Entry: 10527822c; end: 10527825f;  */

void FUN_10527822c(void)

{
  undefined1 in_ZR;
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  long unaff_x20;
  undefined8 uStack_90;
  undefined8 auStack_88 [2];
  undefined1 uStack_71;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 auStack_60 [3];
  undefined8 uStack_48;
  
  plVar2 = (long *)0x8;
  ___cxa_allocate_exception();
  *plVar2 = (long)(PTR___ZTVNSt3__112bad_weak_ptrE_110346af0 + 0x10);
  ___cxa_throw();
  func_0x00010527bef8();
  func_0x00010527ba24();
  uStack_48 = extraout_x8;
  func_0x00010527bbf0(auStack_60);
  func_0x00010527bffc(auStack_88);
  uStack_70 = auStack_60[0];
  uStack_68 = auStack_88[0];
  auStack_60[0] = 0;
  auStack_88[0] = 0;
  func_0x00010527bbb8();
  func_0x0001003a8c94(auStack_60);
  if ((bRam00000001136b96b0 & 1) == 0) {
    iVar1 = 0x136b96b0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_105275d6c(0x1136b96a8);
      ___cxa_guard_release(0x1136b96b0);
    }
  }
  func_0x0001052784a0(auStack_60,&uStack_68);
  func_0x00010527846c(0x1136b96a8,auStack_60);
  puVar3 = auStack_60;
  FUN_105275bd0();
  func_0x00010527c0d8();
  func_0x00010527c034(uStack_71);
  if (extraout_x8_00 != 0) {
    puVar3 = auStack_88;
    func_0x000100152bb8(puVar3,"file:///");
    if (((ulong)puVar3 & 1) == 0) {
      func_0x00010527bf94();
      puVar4 = puVar3;
      func_0x00010527be18();
      *puVar4 = extraout_x8_02;
      FUN_1052733ec(puVar4 + 3,auStack_88,0x1136b96a8);
      goto LAB_105278368;
    }
  }
  func_0x00010527bf94();
  puVar4 = puVar3;
  func_0x00010527be18();
  *puVar4 = extraout_x8_01;
  func_0x00010527bf74();
  FUN_1052733ec(puVar3 + 3,auStack_60,0x1136b96a8);
  func_0x00010527bc70();
LAB_105278368:
  FUN_105275cf0(auStack_60,puVar3 + 3,puVar3);
  uStack_90 = auStack_60[0];
  FUN_105273eb4(*(long *)(unaff_x20 + 0x10) + 0xb0,&uStack_90);
  FUN_105275cc0(uStack_90);
  func_0x00010527bad8();
  func_0x00010527bc0c();
  FUN_1052785c8(&uStack_70);
  func_0x00010527ba10(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  ___cxa_guard_abort(0x1136b96b0);
  FUN_1052785c8(&uStack_70);
  do {
    func_0x00010527bb70();
    func_0x0001003a8c94(auStack_60);
  } while( true );
}



/* Entry: 105278260; end: 10527846b;  */

void FUN_105278260(void)

{
  undefined1 in_ZR;
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  long unaff_x20;
  undefined8 uStack_80;
  undefined8 auStack_78 [2];
  undefined1 uStack_61;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x00010527bef8();
  func_0x00010527ba24();
  uStack_38 = extraout_x8;
  func_0x00010527bbf0(auStack_50);
  func_0x00010527bffc(auStack_78);
  uStack_60 = auStack_50[0];
  uStack_58 = auStack_78[0];
  auStack_50[0] = 0;
  auStack_78[0] = 0;
  func_0x00010527bbb8();
  func_0x0001003a8c94(auStack_50);
  if ((bRam00000001136b96b0 & 1) == 0) {
    iVar1 = 0x136b96b0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_105275d6c(0x1136b96a8);
      ___cxa_guard_release(0x1136b96b0);
    }
  }
  func_0x0001052784a0(auStack_50,&uStack_58);
  func_0x00010527846c(0x1136b96a8,auStack_50);
  puVar2 = auStack_50;
  FUN_105275bd0();
  func_0x00010527c0d8();
  func_0x00010527c034(uStack_61);
  if (extraout_x8_00 != 0) {
    puVar2 = auStack_78;
    func_0x000100152bb8(puVar2,"file:///");
    if (((ulong)puVar2 & 1) == 0) {
      func_0x00010527bf94();
      puVar3 = puVar2;
      func_0x00010527be18();
      *puVar3 = extraout_x8_02;
      FUN_1052733ec(puVar3 + 3,auStack_78,0x1136b96a8);
      goto LAB_105278368;
    }
  }
  func_0x00010527bf94();
  puVar3 = puVar2;
  func_0x00010527be18();
  *puVar3 = extraout_x8_01;
  func_0x00010527bf74();
  FUN_1052733ec(puVar2 + 3,auStack_50,0x1136b96a8);
  func_0x00010527bc70();
LAB_105278368:
  FUN_105275cf0(auStack_50,puVar2 + 3,puVar2);
  uStack_80 = auStack_50[0];
  FUN_105273eb4(*(long *)(unaff_x20 + 0x10) + 0xb0,&uStack_80);
  FUN_105275cc0(uStack_80);
  func_0x00010527bad8();
  func_0x00010527bc0c();
  FUN_1052785c8(&uStack_60);
  func_0x00010527ba10(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  ___cxa_guard_abort(0x1136b96b0);
  FUN_1052785c8(&uStack_60);
  do {
    func_0x00010527bb70();
    func_0x0001003a8c94(auStack_50);
  } while( true );
}



/* Entry: 10527846c; end: 105278567;  */

void FUN_10527846c(void)

{
  long *unaff_x20;
  long unaff_x21;
  
  func_0x00010054d294();
  func_0x00010527c0c4();
  FUN_105278568(*unaff_x20 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x21 + 0x10);
  return;
}



/* Entry: 105278568; end: 105278597;  */

long FUN_105278568(long param_1,long param_2)

{
  if (param_1 != param_2) {
    func_0x00010527c1f0();
    FUN_105275bf4();
  }
  return param_1;
}



/* Entry: 105278598; end: 10527859b;  */

void FUN_105278598(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108733f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10527859c; end: 1052785af;  */

void FUN_10527859c(void)

{
  func_0x0001052785b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1052785b0; end: 1052785c7;  */

void FUN_1052785b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010527bafc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1052785c8; end: 1052785e7;  */

/* WARNING: Possible PIC construction at 0x0001052785d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001052785dc) */
/* WARNING: Removing unreachable block (ram,0x00010527bebc) */

void FUN_1052785c8(void)

{
  func_0x00010527bce8();
  func_0x00010007e5d0();
  func_0x0001003a8cb8();
  return;
}



/* Entry: 1052785e8; end: 105278627;  */

void FUN_1052785e8(long param_1)

{
  param_1 = param_1 + 8;
  func_0x0001003a81cc();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 105278628; end: 105278673;  */

void FUN_105278628(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  char in_NG;
  char in_OV;
  undefined8 extraout_x8;
  undefined1 *extraout_x10;
  undefined8 extraout_x11;
  undefined1 auStack_38 [24];
  
  FUN_105273538(auStack_38,*(undefined8 *)(*(long *)(param_3 + 0x10) + 0xb0));
  func_0x00010527c218();
  uVar1 = extraout_x11;
  puVar2 = extraout_x10;
  if (in_NG == in_OV) {
    uVar1 = extraout_x8;
    puVar2 = auStack_38;
  }
  func_0x00010b9a8dd4(param_1,puVar2,uVar1);
  func_0x00010527bc0c();
  return;
}



/* Entry: 105278674; end: 1052786b3;  */

void FUN_105278674(long param_1)

{
  param_1 = param_1 + 8;
  func_0x0001003a81cc();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1052786b4; end: 105278d13;  */

void FUN_1052786b4(void)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined1 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int extraout_w10;
  ulong uVar12;
  undefined8 *puVar13;
  long unaff_x20;
  char unaff_w21;
  undefined8 uVar14;
  undefined8 *puVar15;
  long *plVar16;
  long lVar17;
  undefined8 *puVar18;
  long *plVar19;
  undefined8 uVar20;
  undefined1 auStack_168 [24];
  undefined1 auStack_150 [24];
  code *pcStack_138;
  undefined8 *puStack_130;
  undefined8 auStack_128 [7];
  code *pcStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  char cStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  code *pcStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  func_0x00010527bef8();
  func_0x00010527ba84();
  uStack_70 = extraout_x8_00;
  func_0x00010527bbf0(&pcStack_b8);
  func_0x00010527bffc(auStack_128);
  FUN_105276790(&uStack_d0);
  cStack_d8 = unaff_w21;
  func_0x00010527c064();
  pcStack_f0 = pcStack_b8;
  pcStack_b8 = (code *)0x0;
  uStack_e8 = auStack_128[0];
  auStack_128[0] = 0;
  uStack_e0 = uStack_d0;
  uStack_d0 = 0;
  func_0x000104bd4e40(&uStack_d0);
  func_0x00010527bfc8();
  func_0x0001003a8c94(&pcStack_b8);
  if (cStack_d8 == '\x01') {
    uVar14 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + 0xb0);
    func_0x00010b9a5e5c(auStack_128,&uStack_e8);
    FUN_105273588(&pcStack_b8,uVar14,auStack_128);
    func_0x00010bcc5450(&pcStack_b8);
    func_0x00010527bf1c();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_128);
  }
  FUN_1052736b0(auStack_128,&uStack_e0);
  func_0x00010b9a5e5c(auStack_150,&pcStack_f0);
  func_0x00010b9a5e5c(auStack_168,&uStack_e8);
  lVar17 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0xb0);
  puVar8 = (undefined8 *)0x70;
  __Znwm();
  plVar19 = puVar8 + 1;
  *plVar19 = 0;
  puVar8[2] = 0;
  *puVar8 = &PTR_FUN_110873480;
  if ((lVar17 != 0) && (*(long *)(lVar17 + 0x10) != 0)) {
    do {
      func_0x00010527bcd8();
    } while (extraout_w10 != 0);
  }
  puVar8[4] = 0;
  puVar8[5] = 0;
  puVar8[3] = &PTR_DAT_110873000;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar8 + 6,auStack_150);
  puVar8[9] = 0;
  puVar8[10] = 0;
  puVar8[0xb] = 0;
  plVar16 = puVar8 + 0xc;
  *plVar16 = lVar17;
  *(undefined1 *)(puVar8 + 0xd) = 0;
  FUN_1052753cc();
  func_0x00010527bc14();
  FUN_105278dd0(plVar16);
  FUN_105273588(&pcStack_b8,*plVar16,auStack_168);
  func_0x00010bcc5dec(puVar8 + 6,&pcStack_b8,auStack_128);
  func_0x00010527bf1c();
  FUN_105275e24(&uStack_d0,*plVar16);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&pcStack_b8,puVar8 + 6);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&puStack_a0,&uStack_d0);
  FUN_105273538(&uStack_88,*plVar16);
  puVar5 = puRam00000001136b96f0;
  puVar18 = puRam00000001136b96e8;
  uVar7 = puRam00000001136b96f0 == puRam00000001136b96f8;
  if (puRam00000001136b96f0 < puRam00000001136b96f8) {
    puRam00000001136b96f0[2] = pcStack_a8;
    puRam00000001136b96f0[1] = ppuStack_b0;
    *puRam00000001136b96f0 = pcStack_b8;
    ppuStack_b0 = (undefined **)0x0;
    pcStack_a8 = (code *)0x0;
    pcStack_b8 = (code *)0x0;
    puRam00000001136b96f0[4] = uStack_98;
    puRam00000001136b96f0[3] = puStack_a0;
    puRam00000001136b96f0[5] = uStack_90;
    uStack_98 = 0;
    uStack_90 = 0;
    puStack_a0 = (undefined8 *)0x0;
    puRam00000001136b96f0[8] = uStack_78;
    puRam00000001136b96f0[7] = uStack_80;
    puRam00000001136b96f0[6] = uStack_88;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_88 = 0;
    puVar15 = puRam00000001136b96f0 + 9;
LAB_105278a8c:
    pcVar6 = (code *)(puVar8 + 3);
    puRam00000001136b96f0 = puVar15;
    func_0x000105275b5c(&pcStack_b8);
    __ZNSt3__15mutex6unlockEv(0x1136b9700);
    func_0x000100066230(puVar8 + 9,&uStack_d0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_d0);
    pcStack_138 = pcVar6;
    puStack_130 = puVar8;
    if ((puVar8[5] == 0) || (uVar7 = *(long *)(puVar8[5] + 8) == -1, (bool)uVar7)) {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar4) {
          *plVar19 = *plVar19 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      pcStack_b8 = pcVar6;
      ppuStack_b0 = (undefined **)puVar8;
      func_0x0001003a8180(puVar8 + 4,&pcStack_b8);
      func_0x0001003a90c4(&pcStack_b8);
    }
    func_0x00010527bdc4();
    func_0x00010527bc70();
    func_0x000104bd4df4(auStack_150);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar4) {
        *plVar19 = *plVar19 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    pcStack_b8 = FUN_105278f3c;
    ppuStack_b0 = &PTR_FUN_1108734c0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    pcStack_a8 = pcVar6;
    puStack_a0 = puVar8;
    FUN_105274694(auStack_150,"unregister",&pcStack_b8);
    func_0x00010527baa4(ppuStack_b0);
    FUN_105278fa4(&uStack_d0);
    func_0x00010b9a8f54(extraout_x8,auStack_150);
    func_0x000104bd4e40(auStack_150);
    FUN_105278fa4(&pcStack_138);
    func_0x00010054d304(auStack_128);
    func_0x000105278fcc(&pcStack_f0);
    func_0x00010527ba10(uStack_70);
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    lVar17 = (long)puRam00000001136b96f0 - (long)puRam00000001136b96e8;
    uVar1 = lVar17 / 0x48 + 1;
    if (uVar1 < 0x38e38e38e38e38f) {
      uVar2 = ((long)puRam00000001136b96f8 - (long)puRam00000001136b96e8) / 0x48;
      uVar12 = uVar2 * 2;
      if (uVar12 < uVar1 || uVar12 - uVar1 == 0) {
        uVar12 = uVar1;
      }
      if (0x1c71c71c71c71c6 < uVar2) {
        uVar12 = 0x38e38e38e38e38e;
      }
      if (0x38e38e38e38e38e < uVar12) {
        func_0x000104bd35f4();
        goto LAB_105278bc4;
      }
      lVar9 = uVar12 * 0x48;
      __Znwm();
      puVar15 = (undefined8 *)(lVar9 + lVar17);
      puVar15[1] = ppuStack_b0;
      *puVar15 = pcStack_b8;
      puVar15[2] = pcStack_a8;
      ppuStack_b0 = (undefined **)0x0;
      pcStack_a8 = (code *)0x0;
      pcStack_b8 = (code *)0x0;
      puVar15[4] = uStack_98;
      puVar15[3] = puStack_a0;
      puVar15[5] = uStack_90;
      puStack_a0 = (undefined8 *)0x0;
      uStack_98 = 0;
      uStack_90 = 0;
      puVar15[8] = uStack_78;
      puVar15[7] = uStack_80;
      puVar15[6] = uStack_88;
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_88 = 0;
      puVar13 = puVar15 + (lVar17 / -0x48) * 9;
      puVar10 = puVar13;
      for (puVar11 = puVar18; puVar11 != puVar5; puVar11 = puVar11 + 9) {
        uVar20 = puVar11[1];
        uVar14 = *puVar11;
        puVar10[2] = puVar11[2];
        puVar10[1] = uVar20;
        *puVar10 = uVar14;
        puVar11[1] = 0;
        puVar11[2] = 0;
        *puVar11 = 0;
        uVar20 = puVar11[4];
        uVar14 = puVar11[3];
        puVar10[5] = puVar11[5];
        puVar10[4] = uVar20;
        puVar10[3] = uVar14;
        puVar11[4] = 0;
        puVar11[5] = 0;
        puVar11[3] = 0;
        uVar20 = puVar11[7];
        uVar14 = puVar11[6];
        puVar10[8] = puVar11[8];
        puVar10[7] = uVar20;
        puVar10[6] = uVar14;
        puVar11[7] = 0;
        puVar11[8] = 0;
        puVar11[6] = 0;
        puVar10 = puVar10 + 9;
      }
      for (; uVar7 = puVar18 == puVar5, !(bool)uVar7; puVar18 = puVar18 + 9) {
        func_0x000105275b5c(puVar18);
      }
      puVar15 = puVar15 + 9;
      puRam00000001136b96f8 = (undefined8 *)(lVar9 + uVar12 * 0x48);
      bVar4 = puRam00000001136b96e8 != (undefined8 *)0x0;
      puRam00000001136b96e8 = puVar13;
      if (bVar4) {
        puRam00000001136b96f0 = puVar15;
        __ZdlPv();
      }
      goto LAB_105278a8c;
    }
  }
  FUN_105278f24();
LAB_105278bc4:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x105278bc8);
  (*pcVar6)();
}



/* Entry: 105278d14; end: 105278daf;  */

void FUN_105278d14(void)

{
  code *pcVar1;
  uint extraout_w8;
  
  func_0x00010527bfe0();
  func_0x00010b9aaa1c();
  func_0x00010527c2d0();
  if ((extraout_w8 & 1) != 0) {
    return;
  }
  func_0x00010527bbdc();
  func_0x00010527c298();
  func_0x00010527bdac();
  func_0x00010527bb18();
  func_0x00010527bd74();
  func_0x00010527bb00();
  func_0x00010527ba94();
  func_0x00010527be5c();
  func_0x00010527ba48();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x105278d7c);
  (*pcVar1)();
}



/* Entry: 105278db0; end: 105278db3;  */

void FUN_105278db0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110873480;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105278db4; end: 105278dc7;  */

void FUN_105278db4(void)

{
  FUN_105278f30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105278dc8; end: 105278dcf;  */

void FUN_105278dc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010527bafc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 105278dd0; end: 105278f23;  */

void FUN_105278dd0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
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
  
  FUN_105273538(auStack_a8,*param_1);
  puVar2 = puRam00000001136b96e8;
  puVar3 = puRam00000001136b96f0;
  while (puVar1 = puVar3, puVar5 = puVar3, puVar2 != puVar3) {
    puVar1 = puVar2 + 6;
    func_0x0001000e107c(puVar1,auStack_a8);
    puVar4 = puVar3;
    if (((ulong)puVar1 & 1) == 0) {
      do {
        puVar3 = puVar4 + -9;
        puVar1 = puVar2;
        puVar5 = puVar2;
        if (puVar3 == puVar2) goto LAB_105278ec8;
        puVar1 = puVar4 + -3;
        func_0x0001000e107c(puVar1,auStack_a8);
        puVar4 = puVar3;
      } while ((int)puVar1 == 0);
      uStack_88 = puVar2[1];
      uStack_90 = *puVar2;
      uStack_80 = puVar2[2];
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = 0;
      uStack_70 = puVar2[4];
      uStack_78 = puVar2[3];
      uStack_68 = puVar2[5];
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[3] = 0;
      uStack_58 = puVar2[7];
      uStack_60 = puVar2[6];
      uStack_50 = puVar2[8];
      puVar2[7] = 0;
      puVar2[8] = 0;
      puVar2[6] = 0;
      func_0x000105275b24(puVar2,puVar3);
      func_0x000105275b24(puVar3,&uStack_90);
      func_0x000105275b5c(&uStack_90);
      puVar2 = puVar2 + 9;
    }
    else {
      puVar2 = puVar2 + 9;
    }
  }
LAB_105278ec8:
  for (; puVar1 != puRam00000001136b96f0; puVar1 = puVar1 + 9) {
    func_0x00010bcc6708(puVar1);
    FUN_105275444(puVar1 + 3,param_1);
  }
  FUN_105275a74(puVar5);
  func_0x00010527bc0c();
  return;
}



/* Entry: 105278f24; end: 105278f2f;  */

void FUN_105278f24(undefined8 *param_1)

{
  func_0x00010527bb84();
  *param_1 = &PTR_FUN_110873480;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105278f30; end: 105278f3b;  */

void FUN_105278f30(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110873480;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105278f3c; end: 105278f5f;  */

void FUN_105278f3c(undefined8 param_1,long param_2)

{
  FUN_10527595c(*(undefined8 *)(param_2 + 0x10));
  func_0x00010527bad8();
  return;
}



/* Entry: 105278f60; end: 105278fa3;  */

long FUN_105278f60(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x0001000df548();
  }
  return param_1 + 8;
}



/* Entry: 105278fa4; end: 105278ff3;  */

long FUN_105278fa4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 105278ff4; end: 105279033;  */

void FUN_105278ff4(long param_1)

{
  param_1 = param_1 + 8;
  func_0x0001003a81cc();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 105279034; end: 105279113;  */

void FUN_105279034(void)

{
  undefined8 *puVar1;
  undefined1 *unaff_x19;
  undefined8 auStack_a0 [7];
  undefined8 auStack_68 [7];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010527bd34();
  FUN_105276790(auStack_68);
  FUN_105276790(auStack_a0);
  uStack_30 = auStack_68[0];
  auStack_68[0] = 0;
  uStack_28 = auStack_a0[0];
  auStack_a0[0] = 0;
  func_0x00010527c084();
  func_0x00010527bf4c();
  FUN_1052736b0(auStack_68,&uStack_30);
  FUN_1052736b0(auStack_a0,&uStack_28);
  puVar1 = auStack_68;
  func_0x00010bcc8e88(puVar1,auStack_a0);
  *(undefined2 *)(unaff_x19 + 8) = 7;
  *unaff_x19 = (char)puVar1;
  func_0x00010054d304(auStack_a0);
  func_0x00010054d304(auStack_68);
  FUN_105279114(&uStack_30);
  return;
}



/* Entry: 105279114; end: 105279133;  */

/* WARNING: Possible PIC construction at 0x000105279124: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105279128) */
/* WARNING: Removing unreachable block (ram,0x00010527c108) */

void FUN_105279114(void)

{
  func_0x00010527bce8();
  func_0x00010007e5d0();
  func_0x000104bd4e64();
  return;
}



/* Entry: 105279134; end: 105279173;  */

void FUN_105279134(long param_1)

{
  param_1 = param_1 + 8;
  func_0x0001003a81cc();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 105279174; end: 1052791e7;  */

void FUN_105279174(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_50 [24];
  undefined8 **ppuStack_38;
  ulong uStack_30;
  byte bStack_21;
  
  FUN_105273454(auStack_50,*(undefined8 *)(*(long *)(param_3 + 0x10) + 0xb0));
  func_0x00010b9a2460(&ppuStack_38,auStack_50);
  if (-1 < (char)bStack_21) {
    uStack_30 = (ulong)bStack_21;
    ppuStack_38 = &ppuStack_38;
  }
  func_0x00010b9a8dd4(param_1,ppuStack_38,uStack_30);
  func_0x00010527bdc4();
  func_0x0001000e30f4(auStack_50);
  return;
}



/* Entry: 1052791e8; end: 105279227;  */

void FUN_1052791e8(long param_1)

{
  param_1 = param_1 + 8;
  func_0x0001003a81cc();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 105279228; end: 105279377;  */

void FUN_105279228(void)

{
  undefined8 extraout_x8;
  int iVar1;
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 uVar2;
  undefined8 auStack_68 [3];
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined1 uStack_47;
  undefined1 uStack_46;
  
  iVar1 = (int)unaff_x20;
  func_0x00010527bccc();
  func_0x00010527c130(auStack_68);
  FUN_105278d14();
  uVar2 = unaff_x20;
  FUN_105278d14();
  func_0x00010527c064();
  uStack_50 = auStack_68[0];
  auStack_68[0] = 0;
  uStack_48 = (undefined1)iVar1;
  uStack_47 = (undefined1)uVar2;
  uStack_46 = (undefined1)unaff_x20;
  func_0x00010527bbb8();
  if (iVar1 != 0) {
    FUN_1052753cc();
    FUN_105279378(*(long *)(unaff_x21 + 0x10) + 0xb0);
  }
  uVar2 = *(undefined8 *)(unaff_x21 + 0x10);
  func_0x00010527c0d8();
  FUN_105273ee0(extraout_x8,uVar2,auStack_68,uStack_48,uStack_47,uStack_46);
  func_0x00010527bc0c();
  func_0x0001003a8c94(&uStack_50);
  return;
}



/* Entry: 105279378; end: 1052793b3;  */

void FUN_105279378(undefined8 param_1)

{
  func_0x00010527bc14();
  FUN_105278dd0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(0x1136b9700);
  return;
}



/* Entry: 1052793b4; end: 1052793f3;  */

void FUN_1052793b4(long param_1)

{
  param_1 = param_1 + 8;
  func_0x0001003a81cc();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1052793f4; end: 105279667;  */

void FUN_1052793f4(void)

{
  code *pcVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined3 uVar5;
  code *pcVar6;
  undefined1 in_ZR;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar9;
  int extraout_w11;
  int extraout_w11_00;
  long unaff_x20;
  undefined1 unaff_w21;
  long lVar10;
  long lStack_130;
  long lStack_128;
  code *pcStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [2];
  undefined1 uStack_10e;
  undefined8 uStack_108;
  undefined8 uStack_100;
  code *pcStack_f0;
  long lStack_e8;
  undefined1 uStack_e0;
  undefined2 uStack_df;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  long lStack_a8;
  long lStack_a0;
  code *pcStack_98;
  long lStack_90;
  undefined2 uStack_88;
  undefined1 uStack_86;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_58;
  
  func_0x00010527bef8();
  func_0x00010527ba24();
  uStack_58 = extraout_x8;
  func_0x00010527bbf0(&pcStack_b8);
  FUN_105276790(&lStack_130);
  uVar7 = unaff_w21;
  FUN_105278d14();
  uVar8 = unaff_w21;
  func_0x00010527c064();
  FUN_105278d14();
  FUN_105276834(&lStack_c0);
  FUN_105276834(&lStack_c8);
  pcVar6 = pcStack_b8;
  lStack_d8 = lStack_c0;
  lVar10 = lStack_130;
  lStack_c0 = 0;
  pcStack_b8 = (code *)0x0;
  pcStack_f0 = pcVar6;
  lStack_e8 = lStack_130;
  lStack_130 = 0;
  uStack_df = CONCAT11(unaff_w21,uVar8);
  lStack_d0 = lStack_c8;
  lStack_c8 = 0;
  uStack_e0 = uVar7;
  func_0x000104bda388(&lStack_c8);
  func_0x000104bda388(&lStack_c0);
  func_0x00010527c084();
  func_0x0001003a8c94(&pcStack_b8);
  lVar9 = *(long *)(unaff_x20 + 0x10);
  lStack_128 = *(long *)(unaff_x20 + 0x18);
  lStack_130 = lVar9;
  if (lStack_128 != 0) {
    do {
      func_0x00010527bf04();
      lVar9 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  if (pcVar6 != (code *)0x0) {
    pcVar1 = pcVar6 + 8;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar4) {
        *(int *)pcVar1 = *(int *)pcVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      lVar10 = lStack_e8;
    } while (cVar3 != '\0');
  }
  pcStack_120 = pcVar6;
  if (lVar10 != 0) {
    do {
      func_0x00010527bba8();
      lVar9 = extraout_x8_01;
    } while (extraout_w11_00 != 0);
  }
  _auStack_110 = CONCAT21(uStack_df,uStack_e0);
  uVar5 = _auStack_110;
  if (lStack_d8 != 0) {
    plVar2 = (long *)(lStack_d8 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (lStack_d0 != 0) {
    plVar2 = (long *)(lStack_d0 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  pcStack_b8 = FUN_1052796a4;
  ppuStack_b0 = &PTR_DAT_110873560;
  lStack_a0 = lStack_128;
  lStack_a8 = lStack_130;
  pcStack_98 = pcStack_120;
  lStack_128 = 0;
  lStack_130 = 0;
  uStack_118 = 0;
  pcStack_120 = (code *)0x0;
  uStack_10e = (undefined1)((ushort)uStack_df >> 8);
  uStack_86 = uStack_10e;
  auStack_110 = SUB32(uVar5,0);
  uStack_88 = auStack_110;
  lStack_80 = lStack_d8;
  lStack_78 = lStack_d0;
  uStack_100 = 0;
  uStack_108 = 0;
  lStack_90 = lVar10;
  (**(code **)(*(long *)(lVar9 + 0x18) + 0x10))(lVar9 + 0x18,&pcStack_b8);
  func_0x00010527ba64(ppuStack_b0);
  FUN_105279668(&lStack_130);
  func_0x00010527bad8();
  FUN_105279990(&pcStack_f0);
  func_0x00010527ba10(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010527ba64(ppuStack_b0);
    FUN_105279668(&lStack_130);
    FUN_105279990(&pcStack_f0);
    do {
      func_0x00010527bb70();
      func_0x0001003a8c94(&pcStack_b8);
    } while( true );
  }
  return;
}



/* Entry: 105279668; end: 1052796a3;  */

long FUN_105279668(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010527c2b8();
  func_0x000104bda388();
  func_0x000104bda388(unaff_x19 + 0x28);
  func_0x000104bd4e40(unaff_x19 + 0x18);
  func_0x0001003a8c94(unaff_x19 + 0x10);
  lVar1 = unaff_x19;
  func_0x0001003a81cc();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1052796a4; end: 1052798d3;  */

void FUN_1052796a4(long param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 extraout_x8;
  int extraout_w10;
  undefined8 uVar5;
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [16];
  long alStack_80 [7];
  long lStack_48;
  char cStack_40;
  byte bStack_3f;
  undefined8 uStack_38;
  
  lVar3 = param_1;
  func_0x00010527ba84();
  uStack_38 = extraout_x8;
  if (*(char *)(lVar3 + 0x30) == '\x01') {
    FUN_1052753cc();
    FUN_105279378(*(long *)(param_1 + 0x10) + 0xb0);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010b9a5e5c(alStack_80,param_1 + 0x20);
  FUN_105273ee0(&lStack_48,uVar5,alStack_80,*(undefined1 *)(param_1 + 0x30),
                *(undefined1 *)(param_1 + 0x31),*(undefined1 *)(param_1 + 0x32));
  func_0x00010527bf2c();
  uVar2 = cStack_40 == '\b';
  lVar3 = 0;
  if ((((bool)uVar2) && ((bStack_3f & 1) != 0)) && (lVar3 = lStack_48, lStack_48 != 0)) {
    do {
      func_0x00010527c1d4();
    } while (extraout_w10 != 0);
  }
  lStack_98 = lVar3;
  FUN_105274640();
  FUN_1052739d0(lVar3 + 0x10,0x1136b9690);
  func_0x00010b9a94ec(alStack_80);
  FUN_1052798d4(&lStack_a0,alStack_80[0]);
  func_0x000104bddedc(alStack_80);
  if (((*(byte *)(param_1 + 0x30) & 1) == 0) && ((*(byte *)(param_1 + 0x31) & 1) == 0)) {
    FUN_1052736b0(alStack_80,param_1 + 0x28);
    plVar4 = alStack_80;
    func_0x00010054b1c8(plVar4,*(undefined8 *)(lStack_a0 + 0xb8));
    uVar2 = (int)plVar4 == -1;
    if ((bool)uVar2) goto LAB_1052797fc;
    func_0x00010054d304(alStack_80);
  }
  func_0x00010b9a8f04(auStack_90,&lStack_48);
  func_0x00010527bb9c(alStack_80);
  func_0x00010527c06c();
  func_0x00010527bc68();
  FUN_105275ccc(&lStack_a0);
  plVar4 = &lStack_98;
  func_0x000104bd4e40(plVar4);
  func_0x00010527c0f8();
  func_0x00010527ba10(uStack_38);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
LAB_1052797fc:
  func_0x00010527bbdc();
  __ZNSt13runtime_errorC1EPKc();
  func_0x00010527be04();
  ___cxa_throw(plVar4);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x105279820);
  (*pcVar1)();
}



/* Entry: 1052798d4; end: 10527992f;  */

void FUN_1052798d4(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  
  if (param_2 != 0) {
    ___dynamic_cast(param_2,&PTR_DAT_110d7ebe8,&PTR_DAT_110872e38,0);
    if ((param_2 == 0) || (uVar1 = param_2, func_0x00010b9a5818(), (uVar1 & 1) != 0))
    goto LAB_105279924;
    func_0x00010b9a5890();
  }
  param_2 = 0;
LAB_105279924:
  *param_1 = param_2;
  return;
}



/* Entry: 105279930; end: 10527998f;  */

void FUN_105279930(undefined8 *param_1,undefined8 *param_2)

{
  undefined2 uVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_DAT_110873560;
  uVar2 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar2;
  *param_2 = 0;
  param_2[1] = 0;
  uVar2 = param_2[2];
  param_1[4] = param_2[3];
  param_1[3] = uVar2;
  param_2[2] = 0;
  param_2[3] = 0;
  uVar1 = *(undefined2 *)(param_2 + 4);
  *(undefined1 *)((long)param_1 + 0x2a) = *(undefined1 *)((long)param_2 + 0x22);
  *(undefined2 *)(param_1 + 5) = uVar1;
  param_1[6] = param_2[5];
  param_2[5] = 0;
  param_1[7] = param_2[6];
  param_2[6] = 0;
  return;
}



/* Entry: 105279990; end: 1052799bb;  */

long FUN_105279990(void)

{
  long unaff_x19;
  
  func_0x00010527c190();
  func_0x000104bda388(unaff_x19 + 0x18);
  func_0x000104bd4e40(unaff_x19 + 8);
  func_0x00010007e5d0();
  func_0x0001003a8cb8();
  return unaff_x19;
}



/* Entry: 1052799bc; end: 1052799fb;  */

void FUN_1052799bc(long param_1)

{
  param_1 = param_1 + 8;
  func_0x0001003a81cc();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1052799fc; end: 105279c97;  */

void FUN_1052799fc(undefined8 param_1)

{
  code *pcVar1;
  undefined1 in_ZR;
  long lVar2;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  long alStack_b0 [2];
  code *pcStack_a0;
  undefined **ppuStack_98;
  code *pcStack_88;
  code *pcStack_68;
  undefined **ppuStack_60;
  code *pcStack_50;
  undefined8 uStack_38;
  
  func_0x00010527ba24();
  uStack_38 = extraout_x8;
  FUN_105279cd0(alStack_b0,param_1);
  func_0x00010527c0ec();
  func_0x00010b9a9750(auStack_b8);
  func_0x000104bd4df4(auStack_c0);
  lVar2 = 0xe8;
  __Znwm(0xe8);
  func_0x00010527c22c();
  FUN_105279eac();
  FUN_105279e3c(&pcStack_68,lVar2 + 0x18,lVar2);
  pcVar1 = pcStack_68;
  if ((pcStack_68 != (code *)0x0) && (*(long *)(pcStack_68 + 0x10) != 0)) {
    do {
      func_0x00010527bcd8();
    } while (extraout_w10 != 0);
  }
  pcStack_a0 = pcStack_68;
  func_0x00010b9a8f78(&pcStack_68,&pcStack_a0);
  FUN_105274640();
  func_0x00010527bbfc();
  func_0x00010b9a9020();
  func_0x00010b9a8d98(&pcStack_68);
  func_0x00010527bfb0();
  if ((alStack_b0[0] != 0) && (*(long *)(alStack_b0[0] + 0x10) != 0)) {
    do {
      func_0x00010527bf04();
    } while (extraout_w11 != 0);
  }
  if ((pcStack_68 != (code *)0x0) && (*(long *)(pcStack_68 + 0x10) != 0)) {
    do {
      func_0x00010527bf04();
    } while (extraout_w11_00 != 0);
  }
  pcStack_68 = FUN_10527a1a4;
  ppuStack_60 = &PTR_FUN_110873600;
  pcStack_50 = pcVar1;
  pcStack_a0 = (code *)0x0;
  ppuStack_98 = (undefined **)0x0;
  FUN_105274694(auStack_c0,"exec",&pcStack_68);
  func_0x00010527baa4(ppuStack_60);
  FUN_105279c98(&pcStack_a0);
  if ((alStack_b0[0] != 0) && (*(long *)(alStack_b0[0] + 0x10) != 0)) {
    do {
      func_0x00010527bf04();
    } while (extraout_w11_01 != 0);
  }
  if ((pcVar1 != (code *)0x0) && (*(long *)(pcVar1 + 0x10) != 0)) {
    do {
      func_0x00010527bf04();
    } while (extraout_w11_02 != 0);
  }
  pcStack_a0 = FUN_10527a9ec;
  ppuStack_98 = &PTR_DAT_110873638;
  pcStack_88 = pcVar1;
  uStack_d0 = 0;
  uStack_c8 = 0;
  FUN_105274694(auStack_c0,"execNoPromise",&pcStack_a0);
  func_0x00010527baa4(ppuStack_98);
  func_0x000105279cb4(&uStack_d0);
  func_0x00010527c17c();
  FUN_10527588c(pcVar1);
  func_0x00010527bf64();
  func_0x00010527becc();
  FUN_10527ab98(alStack_b0);
  func_0x00010527ba10(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010527baa4(ppuStack_98);
  func_0x000105279cb4(&uStack_d0);
  FUN_10527588c(pcVar1);
  func_0x00010527bf64();
  do {
    func_0x00010527becc();
    FUN_10527ab98(alStack_b0);
    func_0x00010527bb70();
  } while( true );
}



/* Entry: 105279c98; end: 105279ccf;  */

long FUN_105279c98(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010527bc50();
  lVar1 = unaff_x19;
  func_0x00010045db50();
  if (lVar1 != 0) {
    func_0x0001003a916c();
  }
  return unaff_x19;
}



/* Entry: 105279cd0; end: 105279e3b;  */

void FUN_105279cd0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  ulong extraout_x8;
  undefined8 *unaff_x19;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [3];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  
  func_0x000100b9dac4();
  uVar3 = 0;
  func_0x00010b9ac064(auStack_58,param_2);
  func_0x00010527c2d0();
  if ((extraout_x8 & 1) != 0) {
    FUN_105274640();
    func_0x00010527bbfc();
    func_0x00010b9a8f04(&uStack_50,param_2);
    func_0x00010b9a94ec(auStack_70);
    FUN_1052798d4(&uStack_98,auStack_70[0]);
    func_0x00010527bfb0();
    func_0x00010527c074();
    func_0x000104bd4e40(auStack_58);
    func_0x00010527bffc(&uStack_50);
    uVar3 = uStack_98;
    uStack_98 = 0;
    *unaff_x19 = uVar3;
    unaff_x19[1] = uStack_50;
    uStack_50 = 0;
    func_0x0001003a8c94(&uStack_50);
    FUN_105275ccc(&uStack_98);
    return;
  }
  func_0x00010527bbdc();
  func_0x00010527c298();
  func_0x00010b9a0084(auStack_90);
  func_0x00010b99f8ac(auStack_88,auStack_90);
  puVar2 = auStack_88;
  func_0x0001005d466c();
  uStack_50 = 0;
  uStack_48 = 0;
  puStack_40 = puVar2;
  uStack_38 = uVar3;
  func_0x0001003a91d4("invalid object argument at {}: {}");
  func_0x0001003a9204(auStack_70);
  FUN_1052768d8();
  func_0x00010527ba48();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x105279dd4);
  (*pcVar1)();
}



/* Entry: 105279e3c; end: 105279e8b;  */

void FUN_105279e3c(long *param_1,long param_2,long param_3)

{
  int extraout_w10;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 0x10) == 0 || (*(long *)(*(long *)(param_2 + 0x10) + 8) == -1)))) {
    if (param_3 != 0) {
      do {
        func_0x00010527bcd8();
      } while (extraout_w10 != 0);
    }
    func_0x00010527c154();
    func_0x00010527c08c();
    return;
  }
  return;
}



/* Entry: 105279e8c; end: 105279e8f;  */

void FUN_105279e8c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108735a8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105279e90; end: 105279ea3;  */

void FUN_105279e90(void)

{
  FUN_10527a198();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105279ea4; end: 105279eab;  */

void FUN_105279ea4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010527bafc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 105279eac; end: 10527a173;  */

void FUN_105279eac(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long extraout_x8;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int extraout_w11;
  undefined8 *puVar10;
  undefined8 *unaff_x20;
  long *unaff_x21;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uStack_68;
  
  func_0x00010527bccc();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d7ec10;
  func_0x00010054bfa4(param_1 + 3,*(undefined8 *)(*param_2 + 0xb8));
  *unaff_x20 = &PTR_FUN_110872e60;
  unaff_x20[3] = &PTR_FUN_110872ea0;
  lVar6 = *unaff_x21;
  if ((lVar6 != 0) && (*(long *)(lVar6 + 0x10) != 0)) {
    do {
      func_0x00010527bf04();
      lVar6 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  unaff_x20[0x15] = 0;
  unaff_x20[0x14] = lVar6;
  unaff_x20[0x16] = 0;
  unaff_x20[0x17] = 0;
  func_0x00010b9abe10(&uStack_68,0);
  puVar5 = unaff_x20 + 0x18;
  func_0x00010b9a8f84(puVar5,&uStack_68);
  func_0x00010527becc();
  lVar6 = *param_5;
  if (lVar6 != 0) {
    for (lVar12 = 0; lVar12 < *(int *)(lVar6 + 0x10); lVar12 = lVar12 + 1) {
      lVar6 = lVar6 + lVar12 * 0x10;
      if (((*(char *)(lVar6 + 0x20) != '\t') || (lVar6 = *(long *)(lVar6 + 0x18), lVar6 == 0)) ||
         (*(ulong *)(lVar6 + 0x10) < 2)) {
        func_0x00010527bbdc();
        func_0x00010527a174();
        func_0x00010527ba70();
        ___cxa_throw(puVar5);
        goto LAB_10527a108;
      }
      func_0x00010b9a9358(&uStack_68,lVar6 + 0x18);
      puVar5 = (undefined8 *)(lVar6 + 0x28);
      func_0x00010b9a9518();
      puVar10 = (undefined8 *)unaff_x20[0x16];
      if (puVar10 < (undefined8 *)unaff_x20[0x17]) {
        *puVar10 = uStack_68;
        uStack_68 = 0;
        *(int *)(puVar10 + 1) = (int)puVar5;
        puVar10 = puVar10 + 2;
      }
      else {
        puVar11 = (undefined8 *)unaff_x20[0x15];
        lVar6 = (long)puVar10 - (long)puVar11 >> 4;
        uVar1 = lVar6 + 1;
        if (uVar1 >> 0x3c != 0) {
          func_0x00010527a18c();
LAB_10527a108:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10527a10c);
          (*pcVar3)();
        }
        uVar7 = (long)unaff_x20[0x17] - (long)puVar11;
        uVar9 = (long)uVar7 >> 3;
        if (uVar9 <= uVar1) {
          uVar9 = uVar1;
        }
        if (0x7fffffffffffffef < uVar7) {
          uVar9 = 0xfffffffffffffff;
        }
        if (uVar9 >> 0x3c != 0) {
          func_0x000104bd35f4();
          goto LAB_10527a108;
        }
        lVar4 = uVar9 << 4;
        __Znwm();
        puVar2 = (undefined8 *)(lVar4 + ((long)puVar10 - (long)puVar11));
        *puVar2 = uStack_68;
        uStack_68 = 0;
        *(int *)(puVar2 + 1) = (int)puVar5;
        puVar8 = puVar2 + lVar6 * -2;
        for (puVar5 = puVar11; puVar5 != puVar10; puVar5 = puVar5 + 2) {
          *puVar8 = *puVar5;
          *puVar5 = 0;
          *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar5 + 1);
          puVar8 = puVar8 + 2;
        }
        for (; puVar11 != puVar10; puVar11 = puVar11 + 2) {
          func_0x0001003a8c94(puVar11);
        }
        puVar10 = puVar2 + 2;
        puVar5 = (undefined8 *)unaff_x20[0x15];
        unaff_x20[0x15] = puVar2 + lVar6 * -2;
        unaff_x20[0x16] = puVar10;
        unaff_x20[0x17] = lVar4 + uVar9 * 0x10;
        if (puVar5 != (undefined8 *)0x0) {
          __ZdlPv();
        }
      }
      unaff_x20[0x16] = puVar10;
      func_0x00010527bdbc();
      lVar6 = *param_5;
    }
  }
  return;
}



/* Entry: 10527a174; end: 10527a197;  */

void FUN_10527a174(void)

{
  __ZNSt11logic_errorC2EPKc();
  func_0x00010527c204();
  return;
}



/* Entry: 10527a198; end: 10527a1a3;  */

void FUN_10527a198(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108735a8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10527a1a4; end: 10527a267;  */

undefined8 * FUN_10527a1a4(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  int extraout_w11;
  int extraout_w12;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_38;
  
  puVar1 = &uStack_90;
  func_0x00010527ba24(param_1,param_1);
  uStack_38 = extraout_x8;
  func_0x00010527c058();
  if (lStack_80 != 0) {
    do {
      func_0x00010527bba8();
    } while (extraout_w11 != 0);
  }
  if ((*(long *)(param_2 + 0x18) != 0) && (*(long *)(*(long *)(param_2 + 0x18) + 0x10) != 0)) {
    do {
      func_0x00010527bb40();
    } while (extraout_w12 != 0);
  }
  func_0x00010527be80();
  uStack_90 = 0;
  uStack_88 = 0;
  func_0x00010527c014();
  func_0x00010527ba38();
  FUN_10527a268();
  func_0x00010527bad8();
  func_0x00010527bf6c();
  func_0x00010527ba10(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010527ba38();
    FUN_10527a268(&uStack_90);
    func_0x00010527bf6c();
    func_0x00010527bb70();
    func_0x00010527bc50();
    func_0x000104bddf60(*puVar1);
    return puVar1;
  }
  return puVar1;
}



/* Entry: 10527a268; end: 10527a283;  */

void FUN_10527a268(void)

{
  undefined8 *unaff_x19;
  
  func_0x00010527bc50();
  func_0x000104bddf60(*unaff_x19);
  return;
}



/* Entry: 10527a284; end: 10527a313;  */

void FUN_10527a284(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000100b9dac4();
  FUN_1052778c8(&uStack_28);
  FUN_105276834(&uStack_30);
  FUN_105276834(&uStack_38);
  uVar2 = uStack_28;
  uVar1 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  *unaff_x19 = uVar2;
  unaff_x19[1] = uVar1;
  unaff_x19[2] = uStack_38;
  uStack_38 = 0;
  func_0x00010527bd9c();
  func_0x000104bda388(&uStack_30);
  func_0x00010527becc();
  return;
}



/* Entry: 10527a314; end: 10527a317;  */

void FUN_10527a314(undefined8 param_1,double param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  code *pcVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  long *plVar9;
  double dVar10;
  undefined8 ***pppuVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  double dStack_100;
  undefined2 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  double dStack_d0;
  undefined8 auStack_c8 [3];
  undefined4 uStack_ac;
  undefined1 auStack_a8 [8];
  undefined8 **ppuStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  
  lVar2 = *(long *)(param_3 + 0x10);
  lVar3 = *(long *)(param_3 + 0x18);
  for (lVar13 = 0; lVar13 < *(int *)(lVar2 + 0x10); lVar13 = lVar13 + 1) {
    func_0x00010527c184(lVar3);
  }
  dVar10 = (double)(lVar3 + 0x18);
  dStack_d0 = dVar10;
  if (*(long *)(lVar3 + 0xa8) == *(long *)(lVar3 + 0xb0)) {
    func_0x00010054c3a4(dVar10);
    func_0x00010b9a8f04(param_1,lVar3 + 0xc0);
  }
  else {
    lStack_e8 = 0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    while (dVar7 = dVar10, func_0x00010054c3a4(), SUB84(dVar7,0) != 0) {
      func_0x00010527c0a0();
      lVar13 = 8;
      for (uVar14 = 0; uVar14 < (ulong)(*(long *)(lVar3 + 0xb0) - *(long *)(lVar3 + 0xa8) >> 4);
          uVar14 = uVar14 + 1) {
        uVar4 = *(uint *)(*(long *)(lVar3 + 0xa8) + lVar13);
        dVar7 = dVar10;
        func_0x00010054c7ec();
        _sqlite3_column_type();
        uVar1 = uVar4 & 0xf0;
        iVar6 = SUB84(dVar7,0);
        if (uVar1 == 0x10 && iVar6 == 5) {
          uStack_f8 = 0;
          dStack_100 = 0.0;
          goto LAB_10527a74c;
        }
        uVar4 = uVar4 & 0xf;
        switch(uVar4) {
        case 1:
          func_0x00010527bf9c();
          _sqlite3_column_int64();
          param_2 = (double)(long)dVar7;
          goto code_r0x00010527a700;
        case 2:
          func_0x00010527bf9c();
          _sqlite3_column_double();
code_r0x00010527a700:
          uStack_f8 = 6;
          dStack_100 = param_2;
          break;
        case 3:
          if (iVar6 == 5) {
            ppuStack_a0 = (undefined8 ***)0x0;
            uStack_98 = 0;
            uStack_90 = 0;
            pppuVar11 = &ppuStack_a0;
            uVar12 = 0;
          }
          else {
            func_0x00010527bf9c();
            _sqlite3_column_text();
            func_0x00010002b838(&ppuStack_a0,dVar7);
            pppuVar11 = (undefined8 ***)ppuStack_a0;
            uVar12 = uStack_98;
            if (-1 < (long)uStack_90) {
              pppuVar11 = &ppuStack_a0;
              uVar12 = uStack_90 >> 0x38;
            }
          }
          func_0x00010b9a8dd4(&dStack_100,pppuVar11,uVar12);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_a0);
          break;
        case 4:
          func_0x000104bd9060(auStack_c8);
          if (iVar6 != 5) {
            func_0x00010527bf9c();
            _sqlite3_column_bytes();
            dVar8 = dVar7;
            func_0x00010527bf9c();
            _sqlite3_column_blob();
            func_0x00010b99d9f4(auStack_c8[0],dVar8,(long)dVar8 + (long)SUB84(dVar7,0));
          }
          uStack_ac = 9;
          func_0x00010b99daa0(&ppuStack_a0,auStack_c8[0]);
          func_0x000104bd909c(auStack_a8,&uStack_ac,&ppuStack_a0);
          func_0x00010b9a8f90(&dStack_100,auStack_a8);
          func_0x000104bdb38c(auStack_a8);
          func_0x0001003adc18(&ppuStack_a0);
          func_0x000104bdb344(auStack_c8);
          break;
        case 5:
          func_0x00010527bf9c();
          _sqlite3_column_int64();
          uStack_f8 = 5;
          dStack_100 = dVar7;
          break;
        default:
          dVar10 = dVar7;
          func_0x00010527bbdc();
          uStack_98 = 0;
          uStack_80 = (ulong)dVar7 & 0xffffffff;
          uStack_88 = 0;
          uStack_78 = 0;
          ppuStack_a0 = (undefined8 **)(ulong)uVar4;
          uStack_90 = (ulong)uVar1;
          func_0x0001003a91d4("expected column type {} nullability {}, actual column type {}");
          func_0x0001003a9204(auStack_c8);
          __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                    (dVar10,auStack_c8);
          func_0x00010527be04();
          func_0x00010527bea4();
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10527a8ac);
          (*pcVar5)();
        }
LAB_10527a74c:
        FUN_1052739d0(lStack_f0 + 0x10,*(long *)(lVar3 + 0xa8) + lVar13 + -8);
        func_0x00010527bd2c();
        func_0x00010527bc68();
        lVar13 = lVar13 + 0x10;
      }
      if (uStack_e0 < uStack_d8) {
        func_0x00010b9a8f54(uStack_e0,&lStack_f0);
        uVar14 = uStack_e0 + 0x10;
      }
      else {
        plVar9 = &lStack_e8;
        FUN_105277228(plVar9,((long)(uStack_e0 - lStack_e8) >> 4) + 1);
        FUN_1052772ac(&ppuStack_a0,plVar9,(long)(uStack_e0 - lStack_e8) >> 4,&uStack_d8);
        func_0x00010b9a8f54(uStack_90,&lStack_f0);
        uStack_90 = uStack_90 + 0x10;
        FUN_105277268(&lStack_e8,&ppuStack_a0);
        uVar14 = uStack_e0;
        func_0x00010527744c(&ppuStack_a0);
      }
      uStack_e0 = uVar14;
      func_0x00010527bcfc();
    }
    FUN_10527701c(&ppuStack_a0,&lStack_e8);
    func_0x00010b9a8f84(param_1,&ppuStack_a0);
    func_0x000104bddf38(&ppuStack_a0);
    FUN_1052774cc(&lStack_e8);
  }
  func_0x00010062155c(&dStack_d0);
  return;
}



/* Entry: 10527a318; end: 10527a37b;  */

void FUN_10527a318(double param_1,undefined8 param_2,long param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  long *plVar7;
  double dVar8;
  undefined8 ***pppuVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  double dStack_100;
  undefined2 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  double dStack_d0;
  undefined8 auStack_c8 [3];
  undefined4 uStack_ac;
  undefined1 auStack_a8 [8];
  undefined8 **ppuStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  
  for (lVar11 = 0; lVar11 < *(int *)(param_4 + 0x10); lVar11 = lVar11 + 1) {
    func_0x00010527c184(param_3);
  }
  dVar8 = (double)(param_3 + 0x18);
  dStack_d0 = dVar8;
  if (*(long *)(param_3 + 0xa8) == *(long *)(param_3 + 0xb0)) {
    func_0x00010054c3a4(dVar8);
    func_0x00010b9a8f04(param_2,param_3 + 0xc0);
  }
  else {
    lStack_e8 = 0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    while (dVar5 = dVar8, func_0x00010054c3a4(), SUB84(dVar5,0) != 0) {
      func_0x00010527c0a0();
      lVar11 = 8;
      for (uVar12 = 0; uVar12 < (ulong)(*(long *)(param_3 + 0xb0) - *(long *)(param_3 + 0xa8) >> 4);
          uVar12 = uVar12 + 1) {
        uVar2 = *(uint *)(*(long *)(param_3 + 0xa8) + lVar11);
        dVar5 = dVar8;
        func_0x00010054c7ec();
        _sqlite3_column_type();
        uVar1 = uVar2 & 0xf0;
        iVar4 = SUB84(dVar5,0);
        if (uVar1 == 0x10 && iVar4 == 5) {
          uStack_f8 = 0;
          dStack_100 = 0.0;
          goto LAB_10527a74c;
        }
        uVar2 = uVar2 & 0xf;
        switch(uVar2) {
        case 1:
          func_0x00010527bf9c();
          _sqlite3_column_int64();
          param_1 = (double)(long)dVar5;
          goto code_r0x00010527a700;
        case 2:
          func_0x00010527bf9c();
          _sqlite3_column_double();
code_r0x00010527a700:
          uStack_f8 = 6;
          dStack_100 = param_1;
          break;
        case 3:
          if (iVar4 == 5) {
            ppuStack_a0 = (undefined8 ***)0x0;
            uStack_98 = 0;
            uStack_90 = 0;
            pppuVar9 = &ppuStack_a0;
            uVar10 = 0;
          }
          else {
            func_0x00010527bf9c();
            _sqlite3_column_text();
            func_0x00010002b838(&ppuStack_a0,dVar5);
            pppuVar9 = (undefined8 ***)ppuStack_a0;
            uVar10 = uStack_98;
            if (-1 < (long)uStack_90) {
              pppuVar9 = &ppuStack_a0;
              uVar10 = uStack_90 >> 0x38;
            }
          }
          func_0x00010b9a8dd4(&dStack_100,pppuVar9,uVar10);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_a0);
          break;
        case 4:
          func_0x000104bd9060(auStack_c8);
          if (iVar4 != 5) {
            func_0x00010527bf9c();
            _sqlite3_column_bytes();
            dVar6 = dVar5;
            func_0x00010527bf9c();
            _sqlite3_column_blob();
            func_0x00010b99d9f4(auStack_c8[0],dVar6,(long)dVar6 + (long)SUB84(dVar5,0));
          }
          uStack_ac = 9;
          func_0x00010b99daa0(&ppuStack_a0,auStack_c8[0]);
          func_0x000104bd909c(auStack_a8,&uStack_ac,&ppuStack_a0);
          func_0x00010b9a8f90(&dStack_100,auStack_a8);
          func_0x000104bdb38c(auStack_a8);
          func_0x0001003adc18(&ppuStack_a0);
          func_0x000104bdb344(auStack_c8);
          break;
        case 5:
          func_0x00010527bf9c();
          _sqlite3_column_int64();
          uStack_f8 = 5;
          dStack_100 = dVar5;
          break;
        default:
          dVar8 = dVar5;
          func_0x00010527bbdc();
          uStack_98 = 0;
          uStack_80 = (ulong)dVar5 & 0xffffffff;
          uStack_88 = 0;
          uStack_78 = 0;
          ppuStack_a0 = (undefined8 **)(ulong)uVar2;
          uStack_90 = (ulong)uVar1;
          func_0x0001003a91d4("expected column type {} nullability {}, actual column type {}");
          func_0x0001003a9204(auStack_c8);
          __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                    (dVar8,auStack_c8);
          func_0x00010527be04();
          func_0x00010527bea4();
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10527a8ac);
          (*pcVar3)();
        }
LAB_10527a74c:
        FUN_1052739d0(lStack_f0 + 0x10,*(long *)(param_3 + 0xa8) + lVar11 + -8);
        func_0x00010527bd2c();
        func_0x00010527bc68();
        lVar11 = lVar11 + 0x10;
      }
      if (uStack_e0 < uStack_d8) {
        func_0x00010b9a8f54(uStack_e0,&lStack_f0);
        uVar12 = uStack_e0 + 0x10;
      }
      else {
        plVar7 = &lStack_e8;
        FUN_105277228(plVar7,((long)(uStack_e0 - lStack_e8) >> 4) + 1);
        FUN_1052772ac(&ppuStack_a0,plVar7,(long)(uStack_e0 - lStack_e8) >> 4,&uStack_d8);
        func_0x00010b9a8f54(uStack_90,&lStack_f0);
        uStack_90 = uStack_90 + 0x10;
        FUN_105277268(&lStack_e8,&ppuStack_a0);
        uVar12 = uStack_e0;
        func_0x00010527744c(&ppuStack_a0);
      }
      uStack_e0 = uVar12;
      func_0x00010527bcfc();
    }
    FUN_10527701c(&ppuStack_a0,&lStack_e8);
    func_0x00010b9a8f84(param_2,&ppuStack_a0);
    func_0x000104bddf38(&ppuStack_a0);
    FUN_1052774cc(&lStack_e8);
  }
  func_0x00010062155c(&dStack_d0);
  return;
}



/* Entry: 10527a37c; end: 10527a55f;  */

void FUN_10527a37c(undefined8 param_1,long param_2,undefined8 param_3,long *param_4)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long alStack_80 [3];
  undefined1 auStack_68 [24];
  long *plStack_50;
  undefined8 uStack_48;
  
  plVar4 = alStack_80;
  switch((char)param_4[1]) {
  case '\0':
    func_0x00010bccb8cc(param_2 + 0x18,param_3,&plStack_50);
    break;
  default:
    uVar3 = 0x10;
    ___cxa_allocate_exception(0x10);
    func_0x00010b9a8d84(alStack_80,(char)param_4[1]);
    func_0x0001005d466c();
    plStack_50 = plVar4;
    uStack_48 = param_3;
    func_0x0001003a91d4("invalid sql argument type {} at {}");
    func_0x0001003a9204(auStack_68);
    FUN_1052768d8(uVar3,auStack_68);
    func_0x00010527ba48();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10527a518);
    (*pcVar1)();
  case '\x02':
  case '\x03':
    func_0x00010b9a9358(auStack_68,param_4);
    func_0x00010b9a5e5c(&plStack_50,auStack_68);
    func_0x00010527c2c4();
    func_0x0001005ecd60();
    func_0x00010527bc70();
    func_0x00010527bdbc();
    break;
  case '\x04':
    func_0x00010b9a9518();
    iVar2 = (int)param_4;
    goto code_r0x00010527a498;
  case '\x05':
    func_0x00010b9a9588();
    iVar2 = (int)param_4;
code_r0x00010527a498:
    func_0x00010527c2c4();
    func_0x0001005edd44();
    func_0x000107c6132c();
    if (iVar2 != 0) {
      func_0x000107c3a4f8();
      func_0x000107c3a50c();
      func_0x000107c3a520();
      func_0x0001003a91d4(&UNK_10f82fa21);
      func_0x000107c3a500();
      func_0x000107c3a4f0();
      func_0x000107c3a4fc();
      func_0x000107c3a504();
    }
    return;
  case '\x06':
    func_0x00010b9a92f0();
    iVar2 = (int)param_4;
    func_0x00010527c2c4();
    func_0x000107c3a510();
    _sqlite3_bind_double(param_1);
    if (iVar2 != 0) {
      func_0x00010bccb950();
      func_0x00010bccb98c();
      func_0x00010bccb9b8();
      func_0x000107c2793c(&UNK_10f82fa42);
      func_0x00010bccb96c();
      func_0x00010bccb934();
      func_0x00010bccb964();
      func_0x00010bccb97c();
    }
    return;
  case '\n':
    lVar5 = *param_4;
    plVar4 = *(long **)(lVar5 + 0x18);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
    uStack_48 = *(undefined8 *)(lVar5 + 0x20);
    plStack_50 = plVar4;
    func_0x00010527c2c4();
    func_0x000100867984();
    func_0x0001003adc18(&plStack_50);
  }
  return;
}



/* Entry: 10527a560; end: 10527a947;  */

void FUN_10527a560(double param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  long *plVar7;
  double dVar8;
  undefined8 ***pppuVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  double dStack_100;
  undefined2 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  double dStack_d0;
  undefined8 auStack_c8 [3];
  undefined4 uStack_ac;
  undefined1 auStack_a8 [8];
  undefined8 **ppuStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  
  dVar8 = (double)(param_3 + 0x18);
  dStack_d0 = dVar8;
  if (*(long *)(param_3 + 0xa8) == *(long *)(param_3 + 0xb0)) {
    func_0x00010054c3a4(dVar8);
    func_0x00010b9a8f04(param_2,param_3 + 0xc0);
  }
  else {
    lStack_e8 = 0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    while (dVar5 = dVar8, func_0x00010054c3a4(), SUB84(dVar5,0) != 0) {
      func_0x00010527c0a0();
      lVar12 = 8;
      for (uVar11 = 0; uVar11 < (ulong)(*(long *)(param_3 + 0xb0) - *(long *)(param_3 + 0xa8) >> 4);
          uVar11 = uVar11 + 1) {
        uVar2 = *(uint *)(*(long *)(param_3 + 0xa8) + lVar12);
        dVar5 = dVar8;
        func_0x00010054c7ec();
        _sqlite3_column_type();
        uVar1 = uVar2 & 0xf0;
        iVar4 = SUB84(dVar5,0);
        if (uVar1 == 0x10 && iVar4 == 5) {
          uStack_f8 = 0;
          dStack_100 = 0.0;
          goto LAB_10527a74c;
        }
        uVar2 = uVar2 & 0xf;
        switch(uVar2) {
        case 1:
          func_0x00010527bf9c();
          _sqlite3_column_int64();
          param_1 = (double)(long)dVar5;
          goto code_r0x00010527a700;
        case 2:
          func_0x00010527bf9c();
          _sqlite3_column_double();
code_r0x00010527a700:
          uStack_f8 = 6;
          dStack_100 = param_1;
          break;
        case 3:
          if (iVar4 == 5) {
            ppuStack_a0 = (undefined8 ***)0x0;
            uStack_98 = 0;
            uStack_90 = 0;
            pppuVar9 = &ppuStack_a0;
            uVar10 = 0;
          }
          else {
            func_0x00010527bf9c();
            _sqlite3_column_text();
            func_0x00010002b838(&ppuStack_a0,dVar5);
            pppuVar9 = (undefined8 ***)ppuStack_a0;
            uVar10 = uStack_98;
            if (-1 < (long)uStack_90) {
              pppuVar9 = &ppuStack_a0;
              uVar10 = uStack_90 >> 0x38;
            }
          }
          func_0x00010b9a8dd4(&dStack_100,pppuVar9,uVar10);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_a0);
          break;
        case 4:
          func_0x000104bd9060(auStack_c8);
          if (iVar4 != 5) {
            func_0x00010527bf9c();
            _sqlite3_column_bytes();
            dVar6 = dVar5;
            func_0x00010527bf9c();
            _sqlite3_column_blob();
            func_0x00010b99d9f4(auStack_c8[0],dVar6,(long)dVar6 + (long)SUB84(dVar5,0));
          }
          uStack_ac = 9;
          func_0x00010b99daa0(&ppuStack_a0,auStack_c8[0]);
          func_0x000104bd909c(auStack_a8,&uStack_ac,&ppuStack_a0);
          func_0x00010b9a8f90(&dStack_100,auStack_a8);
          func_0x000104bdb38c(auStack_a8);
          func_0x0001003adc18(&ppuStack_a0);
          func_0x000104bdb344(auStack_c8);
          break;
        case 5:
          func_0x00010527bf9c();
          _sqlite3_column_int64();
          uStack_f8 = 5;
          dStack_100 = dVar5;
          break;
        default:
          dVar8 = dVar5;
          func_0x00010527bbdc();
          uStack_98 = 0;
          uStack_80 = (ulong)dVar5 & 0xffffffff;
          uStack_88 = 0;
          uStack_78 = 0;
          ppuStack_a0 = (undefined8 **)(ulong)uVar2;
          uStack_90 = (ulong)uVar1;
          func_0x0001003a91d4("expected column type {} nullability {}, actual column type {}");
          func_0x0001003a9204(auStack_c8);
          __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                    (dVar8,auStack_c8);
          func_0x00010527be04();
          func_0x00010527bea4();
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10527a8ac);
          (*pcVar3)();
        }
LAB_10527a74c:
        FUN_1052739d0(lStack_f0 + 0x10,*(long *)(param_3 + 0xa8) + lVar12 + -8);
        func_0x00010527bd2c();
        func_0x00010527bc68();
        lVar12 = lVar12 + 0x10;
      }
      if (uStack_e0 < uStack_d8) {
        func_0x00010b9a8f54(uStack_e0,&lStack_f0);
        uVar11 = uStack_e0 + 0x10;
      }
      else {
        plVar7 = &lStack_e8;
        FUN_105277228(plVar7,((long)(uStack_e0 - lStack_e8) >> 4) + 1);
        FUN_1052772ac(&ppuStack_a0,plVar7,(long)(uStack_e0 - lStack_e8) >> 4,&uStack_d8);
        func_0x00010b9a8f54(uStack_90,&lStack_f0);
        uStack_90 = uStack_90 + 0x10;
        FUN_105277268(&lStack_e8,&ppuStack_a0);
        uVar11 = uStack_e0;
        func_0x00010527744c(&ppuStack_a0);
      }
      uStack_e0 = uVar11;
      func_0x00010527bcfc();
    }
    FUN_10527701c(&ppuStack_a0,&lStack_e8);
    func_0x00010b9a8f84(param_2,&ppuStack_a0);
    func_0x000104bddf38(&ppuStack_a0);
    FUN_1052774cc(&lStack_e8);
  }
  func_0x00010062155c(&dStack_d0);
  return;
}



/* Entry: 10527a948; end: 10527a95b;  */

void FUN_10527a948(long param_1)

{
  undefined8 *unaff_x19;
  
  func_0x00010527bc50(param_1 + 8);
  func_0x000104bddf60(*unaff_x19);
  return;
}



/* Entry: 10527a95c; end: 10527a97b;  */

void FUN_10527a95c(void)

{
  undefined8 *unaff_x19;
  
  func_0x00010527be74();
  func_0x00010527c120();
  func_0x000104bddf60(*unaff_x19);
  return;
}



/* Entry: 10527a97c; end: 10527a9eb;  */

long FUN_10527a97c(long param_1)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010527bc50(param_1 + 8);
  lVar1 = unaff_x19;
  func_0x00010045db50();
  if (lVar1 != 0) {
    func_0x0001003a916c();
  }
  return unaff_x19;
}



/* Entry: 10527a9ec; end: 10527aabf;  */

/* WARNING: Possible PIC construction at 0x00010527aa78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010527aaac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010527aa7c) */
/* WARNING: Removing unreachable block (ram,0x00010527aa98) */
/* WARNING: Removing unreachable block (ram,0x00010527aa90) */
/* WARNING: Removing unreachable block (ram,0x00010527bbc0) */
/* WARNING: Removing unreachable block (ram,0x00010527aab0) */
/* WARNING: Removing unreachable block (ram,0x00010527aabc) */

void FUN_10527a9ec(undefined8 param_1,long param_2)

{
  int extraout_w11;
  int extraout_w12;
  undefined8 *unaff_x19;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long alStack_60 [8];
  
  func_0x00010527ba24(param_1,param_1);
  func_0x00010527aadc(alStack_60);
  if (alStack_60[0] != 0) {
    do {
      func_0x00010527bba8();
    } while (extraout_w11 != 0);
  }
  if ((*(long *)(param_2 + 0x18) != 0) && (*(long *)(*(long *)(param_2 + 0x18) + 0x10) != 0)) {
    do {
      func_0x00010527bb40();
    } while (extraout_w12 != 0);
  }
  func_0x00010527be80();
  uStack_70 = 0;
  uStack_68 = 0;
  func_0x00010527c004();
  func_0x00010527bd0c();
  func_0x00010527bd9c();
  func_0x00010527ba38();
  func_0x00010527bc50(&uStack_70);
  func_0x000104bddf60(*unaff_x19);
  return;
}



/* Entry: 10527aac0; end: 10527ab0f;  */

void FUN_10527aac0(void)

{
  undefined8 *unaff_x19;
  
  func_0x00010527bc50();
  func_0x000104bddf60(*unaff_x19);
  return;
}



/* Entry: 10527ab10; end: 10527ab97;  */

void FUN_10527ab10(undefined8 param_1,double param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  code *pcVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  long *plVar9;
  double dVar10;
  undefined8 ***pppuVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  double dStack_100;
  undefined2 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  double dStack_d0;
  undefined8 auStack_c8 [3];
  undefined4 uStack_ac;
  undefined1 auStack_a8 [8];
  undefined8 **ppuStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  
  lVar2 = *(long *)(param_3 + 0x10);
  lVar3 = *(long *)(param_3 + 0x18);
  for (lVar13 = 0; lVar13 < *(int *)(lVar2 + 0x10); lVar13 = lVar13 + 1) {
    func_0x00010527c184(lVar3);
  }
  dVar10 = (double)(lVar3 + 0x18);
  dStack_d0 = dVar10;
  if (*(long *)(lVar3 + 0xa8) == *(long *)(lVar3 + 0xb0)) {
    func_0x00010054c3a4(dVar10);
    func_0x00010b9a8f04(param_1,lVar3 + 0xc0);
  }
  else {
    lStack_e8 = 0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    while (dVar7 = dVar10, func_0x00010054c3a4(), SUB84(dVar7,0) != 0) {
      func_0x00010527c0a0();
      lVar13 = 8;
      for (uVar14 = 0; uVar14 < (ulong)(*(long *)(lVar3 + 0xb0) - *(long *)(lVar3 + 0xa8) >> 4);
          uVar14 = uVar14 + 1) {
        uVar4 = *(uint *)(*(long *)(lVar3 + 0xa8) + lVar13);
        dVar7 = dVar10;
        func_0x00010054c7ec();
        _sqlite3_column_type();
        uVar1 = uVar4 & 0xf0;
        iVar6 = SUB84(dVar7,0);
        if (uVar1 == 0x10 && iVar6 == 5) {
          uStack_f8 = 0;
          dStack_100 = 0.0;
          goto LAB_10527a74c;
        }
        uVar4 = uVar4 & 0xf;
        switch(uVar4) {
        case 1:
          func_0x00010527bf9c();
          _sqlite3_column_int64();
          param_2 = (double)(long)dVar7;
          goto code_r0x00010527a700;
        case 2:
          func_0x00010527bf9c();
          _sqlite3_column_double();
code_r0x00010527a700:
          uStack_f8 = 6;
          dStack_100 = param_2;
          break;
        case 3:
          if (iVar6 == 5) {
            ppuStack_a0 = (undefined8 ***)0x0;
            uStack_98 = 0;
            uStack_90 = 0;
            pppuVar11 = &ppuStack_a0;
            uVar12 = 0;
          }
          else {
            func_0x00010527bf9c();
            _sqlite3_column_text();
            func_0x00010002b838(&ppuStack_a0,dVar7);
            pppuVar11 = (undefined8 ***)ppuStack_a0;
            uVar12 = uStack_98;
            if (-1 < (long)uStack_90) {
              pppuVar11 = &ppuStack_a0;
              uVar12 = uStack_90 >> 0x38;
            }
          }
          func_0x00010b9a8dd4(&dStack_100,pppuVar11,uVar12);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_a0);
          break;
        case 4:
          func_0x000104bd9060(auStack_c8);
          if (iVar6 != 5) {
            func_0x00010527bf9c();
            _sqlite3_column_bytes();
            dVar8 = dVar7;
            func_0x00010527bf9c();
            _sqlite3_column_blob();
            func_0x00010b99d9f4(auStack_c8[0],dVar8,(long)dVar8 + (long)SUB84(dVar7,0));
          }
          uStack_ac = 9;
          func_0x00010b99daa0(&ppuStack_a0,auStack_c8[0]);
          func_0x000104bd909c(auStack_a8,&uStack_ac,&ppuStack_a0);
          func_0x00010b9a8f90(&dStack_100,auStack_a8);
          func_0x000104bdb38c(auStack_a8);
          func_0x0001003adc18(&ppuStack_a0);
          func_0x000104bdb344(auStack_c8);
          break;
        case 5:
          func_0x00010527bf9c();
          _sqlite3_column_int64();
          uStack_f8 = 5;
          dStack_100 = dVar7;
          break;
        default:
          dVar10 = dVar7;
          func_0x00010527bbdc();
          uStack_98 = 0;
          uStack_80 = (ulong)dVar7 & 0xffffffff;
          uStack_88 = 0;
          uStack_78 = 0;
          ppuStack_a0 = (undefined8 **)(ulong)uVar4;
          uStack_90 = (ulong)uVar1;
          func_0x0001003a91d4("expected column type {} nullability {}, actual column type {}");
          func_0x0001003a9204(auStack_c8);
          __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                    (dVar10,auStack_c8);
          func_0x00010527be04();
          func_0x00010527bea4();
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10527a8ac);
          (*pcVar5)();
        }
LAB_10527a74c:
        FUN_1052739d0(lStack_f0 + 0x10,*(long *)(lVar3 + 0xa8) + lVar13 + -8);
        func_0x00010527bd2c();
        func_0x00010527bc68();
        lVar13 = lVar13 + 0x10;
      }
      if (uStack_e0 < uStack_d8) {
        func_0x00010b9a8f54(uStack_e0,&lStack_f0);
        uVar14 = uStack_e0 + 0x10;
      }
      else {
        plVar9 = &lStack_e8;
        FUN_105277228(plVar9,((long)(uStack_e0 - lStack_e8) >> 4) + 1);
        FUN_1052772ac(&ppuStack_a0,plVar9,(long)(uStack_e0 - lStack_e8) >> 4,&uStack_d8);
        func_0x00010b9a8f54(uStack_90,&lStack_f0);
        uStack_90 = uStack_90 + 0x10;
        FUN_105277268(&lStack_e8,&ppuStack_a0);
        uVar14 = uStack_e0;
        func_0x00010527744c(&ppuStack_a0);
      }
      uStack_e0 = uVar14;
      func_0x00010527bcfc();
    }
    FUN_10527701c(&ppuStack_a0,&lStack_e8);
    func_0x00010b9a8f84(param_1,&ppuStack_a0);
    func_0x000104bddf38(&ppuStack_a0);
    FUN_1052774cc(&lStack_e8);
  }
  func_0x00010062155c(&dStack_d0);
  return;
}



/* Entry: 10527ab98; end: 10527abb7;  */

long FUN_10527ab98(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010527bce8();
  func_0x0001003a8c94();
  lVar1 = unaff_x19;
  func_0x00010045db50();
  if (lVar1 != 0) {
    func_0x0001003a916c();
  }
  return unaff_x19;
}



/* Entry: 10527abb8; end: 10527abd3;  */

void FUN_10527abb8(void)

{
  return;
}



/* Entry: 10527abd4; end: 10527af27;  */

void FUN_10527abd4(undefined8 param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined1 in_ZR;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar5;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  undefined8 *puVar6;
  code *pcVar7;
  long *plVar8;
  code *pcVar9;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  code *pcStack_e8;
  undefined1 auStack_e0 [8];
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  code *pcStack_c0;
  undefined **ppuStack_b8;
  code *pcStack_a8;
  code *pcStack_88;
  undefined **ppuStack_80;
  code *pcStack_70;
  undefined8 uStack_58;
  
  func_0x00010527ba24();
  uStack_58 = extraout_x8;
  FUN_105279cd0(&lStack_d0,param_1);
  func_0x00010527c0ec();
  func_0x00010b9a9750(&lStack_d8);
  func_0x00010527c0a0();
  lVar3 = lStack_d0;
  if (lStack_c8 == 0) {
    puVar6 = (undefined8 *)0x0;
    pcVar9 = (code *)&UNK_10f7d0ef0;
  }
  else {
    pcVar9 = (code *)(lStack_c8 + 0x18);
    puVar6 = (undefined8 *)(ulong)*(uint *)(lStack_c8 + 0xc);
  }
  puVar4 = (undefined8 *)0x60;
  __Znwm();
  plVar8 = puVar4 + 1;
  *plVar8 = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110873688;
  pcVar7 = (code *)(puVar4 + 3);
  *(undefined ***)pcVar7 = &PTR_DAT_110872f00;
  puVar4[4] = 0;
  puVar4[5] = 0;
  pcStack_88 = pcVar9;
  ppuStack_80 = (undefined **)puVar6;
  if ((lVar3 != 0) && (*(long *)(lVar3 + 0x10) != 0)) {
    do {
      func_0x00010527bcd8();
    } while (extraout_w10 != 0);
  }
  puVar4[6] = lVar3;
  func_0x000100060b18(puVar4 + 7,&pcStack_88);
  uVar5 = 0;
  if (lStack_d8 != 0) {
    do {
      func_0x00010527bba8();
      uVar5 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  puVar4[10] = uVar5;
  puVar4[0xb] = 0;
  pcStack_e8 = pcVar7;
  if ((puVar4[5] == 0) || (in_ZR = *(long *)(puVar4[5] + 8) == -1, (bool)in_ZR)) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = *plVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    pcStack_88 = pcVar7;
    ppuStack_80 = (undefined **)puVar4;
    func_0x0001003a8180(puVar4 + 4,&pcStack_88);
    func_0x0001003a90c4(&pcStack_88);
    if (puVar4[5] == 0) goto LAB_10527ad1c;
  }
  do {
    func_0x00010527bcd8();
  } while (extraout_w10_00 != 0);
LAB_10527ad1c:
  pcStack_c0 = pcVar7;
  func_0x00010b9a8f78(&pcStack_88,&pcStack_c0);
  FUN_105274640();
  func_0x00010527bbfc();
  func_0x00010b9a9020();
  func_0x00010b9a8d98(&pcStack_88);
  func_0x000104bddedc(&pcStack_c0);
  if ((lStack_d0 != 0) && (*(long *)(lStack_d0 + 0x10) != 0)) {
    do {
      func_0x00010527bf04();
    } while (extraout_w11_00 != 0);
  }
  if (puVar4[5] != 0) {
    do {
      func_0x00010527bf04();
    } while (extraout_w11_01 != 0);
  }
  pcStack_88 = FUN_10527af8c;
  ppuStack_80 = &PTR_DAT_110873748;
  pcStack_c0 = (code *)0x0;
  ppuStack_b8 = (undefined **)0x0;
  pcStack_70 = pcVar7;
  FUN_105274694(auStack_e0,"exec",&pcStack_88);
  func_0x00010527baa4(ppuStack_80);
  FUN_10527af28(&pcStack_c0);
  if ((lStack_d0 != 0) && (*(long *)(lStack_d0 + 0x10) != 0)) {
    do {
      func_0x00010527bf04();
    } while (extraout_w11_02 != 0);
  }
  if (puVar4[5] != 0) {
    do {
      func_0x00010527bf04();
    } while (extraout_w11_03 != 0);
  }
  pcStack_c0 = FUN_10527b7b8;
  ppuStack_b8 = &PTR_DAT_110873780;
  uStack_100 = 0;
  uStack_f8 = 0;
  pcStack_a8 = pcVar7;
  FUN_105274694(auStack_e0,"execNoPromise",&pcStack_c0);
  func_0x00010527ba64(ppuStack_b8);
  func_0x00010527af44(&uStack_100);
  func_0x00010527c17c();
  FUN_10527b930(&pcStack_e8);
  func_0x00010527bcfc();
  func_0x000104bddf38(&lStack_d8);
  FUN_10527ab98(&lStack_d0);
  func_0x00010527ba10(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010527ba64(ppuStack_b8);
    func_0x00010527af44(&uStack_100);
    FUN_10527b930(&pcStack_e8);
    func_0x00010527bcfc();
    do {
      func_0x000104bddf38(&lStack_d8);
      FUN_10527ab98(&lStack_d0);
      func_0x00010527bb70();
    } while( true );
  }
  return;
}



/* Entry: 10527af28; end: 10527af5f;  */

long FUN_10527af28(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010527bc5c();
  lVar1 = unaff_x19;
  func_0x00010045db50();
  if (lVar1 != 0) {
    func_0x0001003a916c();
  }
  return unaff_x19;
}



/* Entry: 10527af60; end: 10527af63;  */

void FUN_10527af60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110873688;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10527af64; end: 10527af77;  */

void FUN_10527af64(void)

{
  func_0x00010527af80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10527af78; end: 10527af8b;  */

void FUN_10527af78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010527bafc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10527af8c; end: 10527b04f;  */

undefined8 * FUN_10527af8c(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  int extraout_w11;
  int extraout_w12;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_38;
  
  puVar1 = &uStack_90;
  func_0x00010527ba24(param_1,param_1);
  uStack_38 = extraout_x8;
  func_0x00010527c058();
  if (lStack_80 != 0) {
    do {
      func_0x00010527bba8();
    } while (extraout_w11 != 0);
  }
  if ((*(long *)(param_2 + 0x18) != 0) && (*(long *)(*(long *)(param_2 + 0x18) + 0x10) != 0)) {
    do {
      func_0x00010527bb40();
    } while (extraout_w12 != 0);
  }
  func_0x00010527be80();
  uStack_90 = 0;
  uStack_88 = 0;
  func_0x00010527c014();
  func_0x00010527ba38();
  FUN_10527b050();
  func_0x00010527bad8();
  func_0x00010527bf6c();
  func_0x00010527ba10(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010527ba38();
    FUN_10527b050(&uStack_90);
    func_0x00010527bf6c();
    func_0x00010527bb70();
    func_0x00010527bc5c();
    func_0x000104bddf60(*puVar1);
    return puVar1;
  }
  return puVar1;
}



/* Entry: 10527b050; end: 10527b06b;  */

void FUN_10527b050(void)

{
  undefined8 *unaff_x19;
  
  func_0x00010527bc5c();
  func_0x000104bddf60(*unaff_x19);
  return;
}



/* Entry: 10527b06c; end: 10527b06f;  */

undefined8 * FUN_10527b06c(undefined8 param_1,long param_2)

{
  char *pcVar1;
  long *plVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long *unaff_x20;
  long *plVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  undefined4 uStack_100;
  undefined8 uStack_e8;
  undefined1 auStack_b8 [24];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long alStack_68 [2];
  undefined8 uStack_58;
  
  lVar10 = *(long *)(param_2 + 0x10);
  lVar9 = lVar10;
  func_0x000100b9dac4(param_1,*(undefined8 *)(param_2 + 0x18));
  func_0x00010527ba84();
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  plVar7 = (long *)(lVar9 + 0x18);
  pcVar1 = (char *)(lVar9 + 0x20);
  uStack_58 = extraout_x8;
  for (lVar9 = *(long *)(lVar9 + 0x10) << 4; lVar9 != 0; lVar9 = lVar9 + -0x10) {
    if (*pcVar1 == '\t') {
      func_0x000100676930(auStack_b8,*(undefined8 *)(*(long *)(pcVar1 + -8) + 0x10));
      FUN_10527b278(&uStack_a0,auStack_b8);
      func_0x00010527bc0c();
    }
    pcVar1 = pcVar1 + 0x10;
  }
  func_0x0001005d4650(unaff_x20 + 4);
  func_0x0001003a9204(auStack_b8);
  lVar9 = 0xe8;
  __Znwm(0xe8);
  func_0x00010527c22c();
  func_0x00010527c218();
  FUN_105279eac();
  FUN_105279e3c(alStack_68,lVar9 + 0x18,lVar9);
  lVar9 = unaff_x20[8];
  unaff_x20[8] = alStack_68[0];
  FUN_10527588c(lVar9);
  FUN_10527588c(0);
  func_0x00010527bc0c();
  plVar2 = plVar7 + *(long *)(lVar10 + 0x10) * 2;
  iVar8 = 1;
  for (; uVar3 = plVar7 == plVar2, !(bool)uVar3; plVar7 = plVar7 + 2) {
    if ((char)plVar7[1] == '\t') {
      for (lVar10 = *(long *)(*plVar7 + 0x10) << 4; lVar10 != 0; lVar10 = lVar10 + -0x10) {
        func_0x00010527c184(unaff_x20[8]);
        iVar8 = iVar8 + 1;
      }
    }
    else {
      FUN_10527a37c(unaff_x20[8],iVar8,plVar7);
      iVar8 = iVar8 + 1;
    }
  }
  FUN_10527a560();
  puVar4 = &uStack_a0;
  func_0x00010527b690();
  func_0x00010527ba10(uStack_58);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    puVar5 = &uStack_a0;
    func_0x00010527b690();
    func_0x00010527bb70();
    func_0x00010527c2b8();
    FUN_10527b2f4();
    func_0x00010527ba84();
    uStack_100 = 0xd;
    puVar6 = puVar5;
    uStack_e8 = extraout_x8_00;
    func_0x0001005d4650();
    puStack_110 = puVar5;
    puStack_108 = puVar6;
    FUN_10527b354(puVar4,&puStack_110);
    func_0x00010527ba10(uStack_e8);
    if (!(bool)uVar3) {
      ___stack_chk_fail();
      func_0x00010527bccc();
      lVar10 = 0x28;
      __Znwm();
      FUN_10527b5ac();
      FUN_10527b578(lVar10 + 8,unaff_x20);
      lVar9 = *unaff_x20;
      *unaff_x20 = lVar10;
      if (lVar9 != 0) {
        func_0x00010527bae8();
      }
      return (undefined8 *)(lVar10 + 0x10);
    }
    return puVar4;
  }
  return puVar4;
}


