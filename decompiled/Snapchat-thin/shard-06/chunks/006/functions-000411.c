/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104bdaaf4; end: 104bdab57;  */

void FUN_104bdaaf4(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long extraout_x8;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  func_0x000104bdb564();
  func_0x00010b9a9608();
  func_0x000104bdb89c();
  func_0x000104bdb864(*(undefined8 *)(extraout_x8 + 0x38));
  func_0x000104bdb59c(auStack_50);
  puVar1 = auStack_50;
  FUN_104bda910();
  func_0x000104bdb674();
  func_0x000104bdb4d8(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(puVar1 + 8) != 0) {
    FUN_104bdaad0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 104bdab58; end: 104bdab77;  */

void FUN_104bdab58(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_104bdaad0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 104bdab78; end: 104bdab7b;  */

void FUN_104bdab78(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 104bdab7c; end: 104bdabd3;  */

void FUN_104bdab7c(void)

{
  long extraout_x8;
  int extraout_w11;
  int extraout_w11_00;
  long unaff_x21;
  
  func_0x000104bdb7e4();
  func_0x000104bdb618(&PTR_FUN_1107e6088);
  func_0x000104bdb664();
  if (extraout_x8 != 0) {
    do {
      func_0x000104bdb554();
    } while (extraout_w11 != 0);
  }
  func_0x000104bdb4fc();
  if (*(long *)(unaff_x21 + 0x20) != 0) {
    do {
      func_0x000104bdb5dc();
    } while (extraout_w11_00 != 0);
  }
  func_0x000104bdb7d8();
  return;
}



/* Entry: 104bdabd4; end: 104bdaca3;  */

undefined1 * FUN_104bdabd4(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  long *unaff_x20;
  undefined1 auStack_90 [32];
  long lStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_38;
  
  puVar1 = auStack_90;
  func_0x000104bdb4b4();
  if (extraout_x8 != 0) {
    do {
      func_0x000104bdb554();
    } while (extraout_w11 != 0);
  }
  func_0x000104bdb50c();
  lStack_70 = 0;
  if (*unaff_x20 != 0) {
    do {
      func_0x000104bdb5dc();
      lStack_70 = extraout_x8_00;
    } while (extraout_w11_00 != 0);
  }
  pcStack_68 = FUN_104bdacc8;
  ppuStack_60 = &PTR_FUN_1107e60a8;
  func_0x000104bdb690();
  func_0x000104bdb654();
  if (extraout_x8_01 != 0) {
    do {
      func_0x000104bdb554();
    } while (extraout_w11_01 != 0);
  }
  func_0x000104bdb4fc();
  if (lStack_70 != 0) {
    do {
      func_0x000104bdb5dc();
    } while (extraout_w11_02 != 0);
  }
  func_0x000104bdb53c();
  func_0x000104bdb5fc();
  func_0x000104bdb4ec();
  FUN_104bdaca4();
  func_0x000104bdb4d8(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000104bdb4ec();
    FUN_104bdaca4(auStack_90);
    func_0x000104bdb63c();
    func_0x000104bdb624();
    func_0x000104bdb6e8();
    func_0x000104bdb6d0();
    return puVar1;
  }
  return puVar1;
}



/* Entry: 104bdaca4; end: 104bdacc7;  */

void FUN_104bdaca4(void)

{
  func_0x000104bdb624();
  func_0x000104bdb6e8();
  func_0x000104bdb6d0();
  return;
}



/* Entry: 104bdacc8; end: 104bdad33;  */

void FUN_104bdacc8(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long *unaff_x20;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  func_0x000104bdb564();
  func_0x00010b9aa3b0();
  (**(code **)(*unaff_x20 + 0x40))();
  func_0x000104bdb8a8();
  func_0x000104bdb59c(auStack_50);
  puVar1 = auStack_50;
  FUN_104bda910();
  func_0x000104bdb674();
  func_0x000104bdb4d8(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(puVar1 + 8) != 0) {
    FUN_104bdaca4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 104bdad34; end: 104bdad53;  */

void FUN_104bdad34(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_104bdaca4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 104bdad54; end: 104bdad57;  */

void FUN_104bdad54(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 104bdad58; end: 104bdadaf;  */

void FUN_104bdad58(void)

{
  long extraout_x8;
  int extraout_w11;
  int extraout_w11_00;
  long unaff_x21;
  
  func_0x000104bdb7e4();
  func_0x000104bdb618(&PTR_FUN_1107e60a8);
  func_0x000104bdb664();
  if (extraout_x8 != 0) {
    do {
      func_0x000104bdb554();
    } while (extraout_w11 != 0);
  }
  func_0x000104bdb4fc();
  if (*(long *)(unaff_x21 + 0x20) != 0) {
    do {
      func_0x000104bdb5dc();
    } while (extraout_w11_00 != 0);
  }
  func_0x000104bdb7d8();
  return;
}



/* Entry: 104bdadb0; end: 104bdae7f;  */

undefined1 * FUN_104bdadb0(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  long *unaff_x20;
  undefined1 auStack_90 [32];
  long lStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_38;
  
  puVar1 = auStack_90;
  func_0x000104bdb4b4();
  if (extraout_x8 != 0) {
    do {
      func_0x000104bdb554();
    } while (extraout_w11 != 0);
  }
  func_0x000104bdb50c();
  lStack_70 = 0;
  if (*unaff_x20 != 0) {
    do {
      func_0x000104bdb5dc();
      lStack_70 = extraout_x8_00;
    } while (extraout_w11_00 != 0);
  }
  pcStack_68 = FUN_104bdaea4;
  ppuStack_60 = &PTR_FUN_1107e60c8;
  func_0x000104bdb690();
  func_0x000104bdb654();
  if (extraout_x8_01 != 0) {
    do {
      func_0x000104bdb554();
    } while (extraout_w11_01 != 0);
  }
  func_0x000104bdb4fc();
  if (lStack_70 != 0) {
    do {
      func_0x000104bdb5dc();
    } while (extraout_w11_02 != 0);
  }
  func_0x000104bdb53c();
  func_0x000104bdb5fc();
  func_0x000104bdb4ec();
  FUN_104bdae80();
  func_0x000104bdb4d8(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000104bdb4ec();
    FUN_104bdae80(auStack_90);
    func_0x000104bdb63c();
    func_0x000104bdb624();
    func_0x000104bdb6e8();
    func_0x000104bdb6d0();
    return puVar1;
  }
  return puVar1;
}



/* Entry: 104bdae80; end: 104bdaea3;  */

void FUN_104bdae80(void)

{
  func_0x000104bdb624();
  func_0x000104bdb6e8();
  func_0x000104bdb6d0();
  return;
}



/* Entry: 104bdaea4; end: 104bdaf07;  */

void FUN_104bdaea4(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long extraout_x8;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  func_0x000104bdb564();
  func_0x00010b9a9518();
  func_0x000104bdb89c();
  func_0x000104bdb864(*(undefined8 *)(extraout_x8 + 0x50));
  func_0x000104bdb59c(auStack_50);
  puVar1 = auStack_50;
  FUN_104bda910();
  func_0x000104bdb674();
  func_0x000104bdb4d8(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(puVar1 + 8) != 0) {
    FUN_104bdae80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 104bdaf08; end: 104bdaf27;  */

void FUN_104bdaf08(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_104bdae80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 104bdaf28; end: 104bdaf2b;  */

void FUN_104bdaf28(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 104bdaf2c; end: 104bdaf83;  */

void FUN_104bdaf2c(void)

{
  long extraout_x8;
  int extraout_w11;
  int extraout_w11_00;
  long unaff_x21;
  
  func_0x000104bdb7e4();
  func_0x000104bdb618(&PTR_FUN_1107e60c8);
  func_0x000104bdb664();
  if (extraout_x8 != 0) {
    do {
      func_0x000104bdb554();
    } while (extraout_w11 != 0);
  }
  func_0x000104bdb4fc();
  if (*(long *)(unaff_x21 + 0x20) != 0) {
    do {
      func_0x000104bdb5dc();
    } while (extraout_w11_00 != 0);
  }
  func_0x000104bdb7d8();
  return;
}



/* Entry: 104bdaf84; end: 104bdb053;  */

undefined1 * FUN_104bdaf84(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  long *unaff_x20;
  undefined1 auStack_90 [32];
  long lStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_38;
  
  puVar1 = auStack_90;
  func_0x000104bdb4b4();
  if (extraout_x8 != 0) {
    do {
      func_0x000104bdb554();
    } while (extraout_w11 != 0);
  }
  func_0x000104bdb50c();
  lStack_70 = 0;
  if (*unaff_x20 != 0) {
    do {
      func_0x000104bdb5dc();
      lStack_70 = extraout_x8_00;
    } while (extraout_w11_00 != 0);
  }
  pcStack_68 = FUN_104bdb078;
  ppuStack_60 = &PTR_FUN_1107e60e8;
  func_0x000104bdb690();
  func_0x000104bdb654();
  if (extraout_x8_01 != 0) {
    do {
      func_0x000104bdb554();
    } while (extraout_w11_01 != 0);
  }
  func_0x000104bdb4fc();
  if (lStack_70 != 0) {
    do {
      func_0x000104bdb5dc();
    } while (extraout_w11_02 != 0);
  }
  func_0x000104bdb53c();
  func_0x000104bdb5fc();
  func_0x000104bdb4ec();
  FUN_104bdb054();
  func_0x000104bdb4d8(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000104bdb4ec();
    FUN_104bdb054(auStack_90);
    func_0x000104bdb63c();
    func_0x000104bdb624();
    func_0x000104bdb6e8();
    func_0x000104bdb6d0();
    return puVar1;
  }
  return puVar1;
}



/* Entry: 104bdb054; end: 104bdb077;  */

void FUN_104bdb054(void)

{
  func_0x000104bdb624();
  func_0x000104bdb6e8();
  func_0x000104bdb6d0();
  return;
}



/* Entry: 104bdb078; end: 104bdb0df;  */

void FUN_104bdb078(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  func_0x000104bdb564();
  func_0x00010b9a9588();
  FUN_104bd8ffc();
  func_0x000104bdb59c(auStack_50);
  puVar1 = auStack_50;
  FUN_104bda910();
  func_0x000104bdb674();
  func_0x000104bdb4d8(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(puVar1 + 8) != 0) {
    FUN_104bdb054();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 104bdb0e0; end: 104bdb0ff;  */

void FUN_104bdb0e0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_104bdb054();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 104bdb100; end: 104bdb103;  */

void FUN_104bdb100(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 104bdb104; end: 104bdb15b;  */

void FUN_104bdb104(void)

{
  long extraout_x8;
  int extraout_w11;
  int extraout_w11_00;
  long unaff_x21;
  
  func_0x000104bdb7e4();
  func_0x000104bdb618(&PTR_FUN_1107e60e8);
  func_0x000104bdb664();
  if (extraout_x8 != 0) {
    do {
      func_0x000104bdb554();
    } while (extraout_w11 != 0);
  }
  func_0x000104bdb4fc();
  if (*(long *)(unaff_x21 + 0x20) != 0) {
    do {
      func_0x000104bdb5dc();
    } while (extraout_w11_00 != 0);
  }
  func_0x000104bdb7d8();
  return;
}



/* Entry: 104bdb15c; end: 104bdb22b;  */

undefined1 * FUN_104bdb15c(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  long *unaff_x20;
  undefined1 auStack_90 [32];
  long lStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_38;
  
  puVar1 = auStack_90;
  func_0x000104bdb4b4();
  if (extraout_x8 != 0) {
    do {
      func_0x000104bdb554();
    } while (extraout_w11 != 0);
  }
  func_0x000104bdb50c();
  lStack_70 = 0;
  if (*unaff_x20 != 0) {
    do {
      func_0x000104bdb5dc();
      lStack_70 = extraout_x8_00;
    } while (extraout_w11_00 != 0);
  }
  pcStack_68 = FUN_104bdb250;
  ppuStack_60 = &PTR_FUN_1107e6108;
  func_0x000104bdb690();
  func_0x000104bdb654();
  if (extraout_x8_01 != 0) {
    do {
      func_0x000104bdb554();
    } while (extraout_w11_01 != 0);
  }
  func_0x000104bdb4fc();
  if (lStack_70 != 0) {
    do {
      func_0x000104bdb5dc();
    } while (extraout_w11_02 != 0);
  }
  func_0x000104bdb53c();
  func_0x000104bdb5fc();
  func_0x000104bdb4ec();
  FUN_104bdb22c();
  func_0x000104bdb4d8(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000104bdb4ec();
    FUN_104bdb22c(auStack_90);
    func_0x000104bdb63c();
    func_0x000104bdb624();
    func_0x000104bdb6e8();
    func_0x000104bdb6d0();
    return puVar1;
  }
  return puVar1;
}



/* Entry: 104bdb22c; end: 104bdb24f;  */

void FUN_104bdb22c(void)

{
  func_0x000104bdb624();
  func_0x000104bdb6e8();
  func_0x000104bdb6d0();
  return;
}



/* Entry: 104bdb250; end: 104bdb2c7;  */

void FUN_104bdb250(long param_1)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 extraout_x8;
  undefined8 *puVar2;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  func_0x000104bdb5bc();
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  uStack_28 = extraout_x8;
  (**(code **)(*(long *)*puVar2 + 0x48))(auStack_50,(long *)*puVar2,puVar2 + 1,puVar2 + 2);
  func_0x000104bdb59c(auStack_40);
  puVar1 = auStack_40;
  FUN_104bda910();
  func_0x000104bdb674();
  func_0x000104bdb4d8(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  if (*(long *)(puVar1 + 8) != 0) {
    FUN_104bdb22c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 104bdb2c8; end: 104bdb2e7;  */

void FUN_104bdb2c8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_104bdb22c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 104bdb2e8; end: 104bdb2eb;  */

void FUN_104bdb2e8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 104bdb2ec; end: 104bdb343;  */

void FUN_104bdb2ec(void)

{
  long extraout_x8;
  int extraout_w11;
  int extraout_w11_00;
  long unaff_x21;
  
  func_0x000104bdb7e4();
  func_0x000104bdb618(&PTR_FUN_1107e6108);
  func_0x000104bdb664();
  if (extraout_x8 != 0) {
    do {
      func_0x000104bdb554();
    } while (extraout_w11 != 0);
  }
  func_0x000104bdb4fc();
  if (*(long *)(unaff_x21 + 0x20) != 0) {
    do {
      func_0x000104bdb5dc();
    } while (extraout_w11_00 != 0);
  }
  func_0x000104bdb7d8();
  return;
}



/* Entry: 104bdb344; end: 104bdb367;  */

void FUN_104bdb344(void)

{
  func_0x0001003adc0c();
  FUN_104bdb368();
  return;
}



/* Entry: 104bdb368; end: 104bdb38b;  */

void FUN_104bdb368(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000104bdb638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 104bdb38c; end: 104bdb3af;  */

void FUN_104bdb38c(void)

{
  func_0x0001003adc0c();
  FUN_104bdb3b0();
  return;
}



/* Entry: 104bdb3b0; end: 104bdb3d3;  */

void FUN_104bdb3b0(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000104bdb638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 104bdb3d4; end: 104bdb49b;  */

long FUN_104bdb3d4(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (plVar2 = param_1 + 3, *plVar2 != 0)) {
    func_0x000100102e7c();
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      plVar8 = (long *)((ulong)plVar2 & uVar7);
    }
    else {
      plVar8 = plVar2;
      if (plVar6 <= plVar2) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar2 - uVar1 * (long)plVar6);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)plVar8 * 8);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar5[1];
        if (plVar4 != plVar2) break;
        lVar3 = (long)(plVar5 + 2);
        func_0x0001000e107c(lVar3,param_2);
        if ((int)lVar3 != 0) {
          return (long)plVar5;
        }
      }
      if (((ulong)plVar6 & uVar7) == 0) {
        plVar4 = (long *)((ulong)plVar4 & uVar7);
      }
      else if (plVar6 <= plVar4) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar4 / (ulong)plVar6;
        }
        plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar6);
      }
    } while (plVar4 == plVar8);
  }
  return 0;
}



/* Entry: 104bdb49c; end: 104bdb8d7;  */

void FUN_104bdb49c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 104bdb8d8; end: 104bdb8fb;  */

void FUN_104bdb8d8(void)

{
  FUN_104bd9ad8();
  return;
}



/* Entry: 104bdb8fc; end: 104bdb94b;  */

void FUN_104bdb8fc(undefined8 param_1,long *param_2)

{
  undefined8 uStack_28;
  
  func_0x00010b949538(&uStack_28,*param_2,param_2[1] - *param_2);
  func_0x00010b99db10(param_1,uStack_28);
  FUN_104bdb9a8();
  return;
}



/* Entry: 104bdb94c; end: 104bdb9a7;  */

void FUN_104bdb94c(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uStack_28;
  
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  func_0x00010b949538(&uStack_28,puVar2,uVar1);
  func_0x00010b99db10(param_1,uStack_28);
  FUN_104bdb9a8();
  return;
}



/* Entry: 104bdb9a8; end: 104bdb9bb;  */

void FUN_104bdb9a8(void)

{
  func_0x0001003adc0c(&stack0x00000008);
  FUN_104bdb368();
  return;
}



/* Entry: 104bdb9bc; end: 104bdba13;  */

void FUN_104bdb9bc(long *param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  
  func_0x00010b9acd90();
  lVar1 = *param_1 + 0x18;
  for (param_4 = param_4 << 4; param_4 != 0; param_4 = param_4 + -0x10) {
    func_0x00010b9a9084(lVar1,param_3);
    param_3 = param_3 + 0x10;
    lVar1 = lVar1 + 0x10;
  }
  return;
}



/* Entry: 104bdba14; end: 104bdbaf3;  */

void FUN_104bdba14(ulong param_1)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  long lVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined8 extraout_x8;
  long *plStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_88;
  undefined2 uStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  
  bVar2 = *(byte *)((param_1 & 0xffffffff) + 0x1136a3748);
  *(undefined1 *)((param_1 & 0xffffffff) + 0x1136a3748) = 1;
  if ((bVar2 & 1) != 0) {
    return;
  }
  if ((bRam00000001136a3750 & 1) == 0) {
    iVar6 = 0x136a3750;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      if ((bRam00000001136a3760 & 1) == 0) {
        iVar6 = 0x136a3760;
        ___cxa_guard_acquire();
        if (iVar6 != 0) {
          func_0x0001003a83dc(0x1136a3758,"_djinni_interface_Crypto");
          ___cxa_guard_release(0x1136a3760);
        }
      }
      FUN_104bdbd44(0x1136a3768,0x1136a3758,1,0,0);
      ___cxa_guard_release(0x1136a3750);
    }
  }
  lVar5 = 0x1136a3768;
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010b9941f8(&uStack_48);
  if ((param_1 & 1) == 0) {
    func_0x000107c31000(uStack_48);
    iVar6 = (int)lVar5;
  }
  else {
    uStack_50 = uStack_48;
    func_0x000108b80b74(auStack_40,&uStack_50,0x1136a3768);
    func_0x000107c30f50();
    lStack_88 = *(long *)(lVar5 + 0x10);
    if (lStack_88 != 0) {
      piVar1 = (int *)(lStack_88 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uStack_80 = 0xff00;
    func_0x000107c30fa8(auStack_78,&lStack_88);
    func_0x000107c31030(auStack_68,auStack_78);
    func_0x000107c27900(auStack_70);
    func_0x000107c278f4(&lStack_88);
    puVar7 = auStack_68;
    func_0x00010b994158(uStack_48,puVar7,auStack_38);
    iVar6 = (int)puVar7;
    func_0x000107c27900(auStack_60);
    func_0x000107c2a668(auStack_40);
  }
  FUN_104bdc2fc(&uStack_48);
  func_0x000108b80b80(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  FUN_104bd46a0();
  func_0x00010b9a96d0(&lStack_c8);
  plStack_e0 = *(long **)(lStack_c8 + 0x18);
  if (plStack_e0 != (long *)0x0) {
    (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
  }
  lStack_d0 = *(long *)(lStack_c8 + 0x28);
  lStack_d8 = *(long *)(lStack_c8 + 0x20);
  func_0x000107c27d7c(extraout_x8,lStack_d8,lStack_d8 + lStack_d0);
  func_0x000107c27900(&plStack_e0);
  FUN_104bdb38c(&lStack_c8);
  return;
}



/* Entry: 104bdbaf4; end: 104bdbd43;  */

void FUN_104bdbaf4(long *param_1)

{
  undefined1 uVar1;
  char *pcVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  long lStack_128;
  undefined1 auStack_f0 [16];
  undefined8 uStack_e0;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [16];
  undefined **appuStack_a8 [3];
  undefined ***pppuStack_90;
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000104bdc5e4();
  func_0x0001003a83dc(auStack_c0,"_djinni_interface_Crypto_statics");
  pcVar2 = "sha256FromBytesSync";
  func_0x0001003a83dc(&uStack_c8,"sha256FromBytesSync");
  func_0x000108b80a94();
  func_0x000108b80a94();
  func_0x0001003adcc0(auStack_78,pcVar2);
  func_0x000104bdc5b4(auStack_d8);
  uStack_68 = uStack_c8;
  uStack_c8 = 0;
  func_0x0001003aef98(auStack_60,auStack_d8);
  pcVar2 = "sha256FromStringSync";
  func_0x0001003a83dc(&uStack_e0,"sha256FromStringSync");
  func_0x000108b80a94();
  FUN_104bdbd7c();
  func_0x0001003adcc0(auStack_88,pcVar2);
  func_0x000104bdc5b4(auStack_f0);
  uStack_50 = uStack_e0;
  uStack_e0 = 0;
  func_0x0001003aef98(auStack_48,auStack_f0);
  FUN_104bdbd44(auStack_b8,auStack_c0,0,&uStack_68,2);
  lVar6 = 0x18;
  do {
    func_0x0001003b1c5c(auStack_60 + lVar6 + -8);
    lVar6 = lVar6 + -0x18;
  } while (lVar6 != -0x18);
  func_0x000104bdc58c(auStack_f0);
  func_0x000104bdc58c(auStack_88);
  func_0x0001003a8c94(&uStack_e0);
  puVar5 = auStack_d8;
  func_0x0001003adc18(auStack_d0);
  func_0x000104bdc58c(auStack_78);
  func_0x0001003a8c94(&uStack_c8);
  func_0x0001003a8c94(auStack_c0);
  pppuStack_90 = appuStack_a8;
  appuStack_a8[0] = &PTR_DAT_1107e6138;
  func_0x000108b807f0(auStack_d8,auStack_b8,appuStack_a8);
  func_0x0001006393ec(appuStack_a8);
  func_0x0001003b2110(auStack_88,auStack_d0);
  FUN_104bdbdd4(&uStack_68,FUN_104bdbeb0);
  FUN_104bdbdd4(auStack_58,FUN_104bdbf08);
  FUN_104bdb9bc(auStack_f0,auStack_88,&uStack_68,2);
  func_0x00010b9a8f60(auStack_78,auStack_f0);
  lVar6 = *param_1;
  func_0x0001003a83dc(auStack_c0,"Crypto");
  func_0x000104bd9bd4(lVar6 + 0x10,auStack_c0);
  puVar4 = auStack_78;
  func_0x00010b9a9020();
  func_0x0001003a8c94(auStack_c0);
  func_0x00010b9a8d98(auStack_78);
  FUN_104bdbf78(auStack_f0);
  lVar6 = 0x10;
  do {
    func_0x00010b9a8d98(auStack_60 + lVar6 + -8);
    iVar3 = (int)puVar4;
    lVar6 = lVar6 + -0x10;
    uVar1 = lVar6 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_88);
  func_0x0001003adc18(auStack_d0);
  func_0x000104bdc58c(auStack_b8);
  func_0x000104bdc59c();
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    if (iVar3 == 0) {
      __Unwind_Resume();
    }
    FUN_104bd46a0();
    func_0x0001003b1744();
    func_0x0001003b1d70();
    lVar6 = 0x28;
    for (; puVar5 != (undefined1 *)0x0; puVar5 = puVar5 + -1) {
      func_0x0001003b1e38(lStack_128 + lVar6,auStack_88 + lVar6 + -8);
      lVar6 = lVar6 + 0x18;
    }
    func_0x0001003b1eec(0xfffffffffffffff0,&lStack_128);
    func_0x0001003b1f60(&lStack_128);
    return;
  }
  return;
}



/* Entry: 104bdbd44; end: 104bdbd47;  */

void FUN_104bdbd44(void)

{
  long unaff_x20;
  long unaff_x21;
  long lVar1;
  long lStack_38;
  
  func_0x0001003b1744();
  func_0x0001003b1d70();
  lVar1 = 0x28;
  for (; unaff_x20 != 0; unaff_x20 = unaff_x20 + -1) {
    func_0x0001003b1e38(lStack_38 + lVar1,unaff_x21 + lVar1 + -0x28);
    lVar1 = lVar1 + 0x18;
  }
  func_0x0001003b1eec(&lStack_38);
  func_0x0001003b1f60(&lStack_38);
  return;
}



/* Entry: 104bdbd48; end: 104bdbd7b;  */

void FUN_104bdbd48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uStack_14;
  
  uStack_14 = 0x1000000;
  func_0x0001003b16ac(&uStack_14,param_1,param_2,param_3);
  return;
}



/* Entry: 104bdbd7c; end: 104bdbdd3;  */

undefined8 FUN_104bdbd7c(void)

{
  int iVar1;
  
  if ((bRam00000001130a8308 & 1) == 0) {
    iVar1 = 0x130a8308;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001008d658c(0x1130a82f8);
      ___cxa_guard_release(0x1130a8308);
    }
  }
  return 0x1130a82f8;
}



/* Entry: 104bdbdd4; end: 104bdbeaf;  */

void FUN_104bdbdd4(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  code *pcVar4;
  code **ppcVar5;
  int iVar6;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  code *pcStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  
  ppcVar5 = &pcStack_70;
  func_0x000104bdc5e4();
  pcVar4 = (code *)0x40;
  __Znwm();
  pcStack_68 = FUN_104bdc3dc;
  ppuStack_60 = &PTR_FUN_1107e61d0;
  uStack_58 = param_2;
  func_0x00010b9ac22c();
  pcStack_70 = pcVar4;
  func_0x000104bdc57c();
  pcVar1 = pcVar4 + 8;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar3) {
      *(long *)pcVar1 = *(long *)pcVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  iVar6 = (int)&pcStack_68;
  pcStack_68 = pcVar4;
  func_0x00010b9a8ef8(param_1);
  FUN_104bda388(&pcStack_68);
  FUN_104bda3d0();
  func_0x000104bdc59c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume(ppcVar5);
  }
  else {
    func_0x000104bdc57c();
    __ZdlPv(pcVar4);
  }
  FUN_104bd46a0(ppcVar5);
  pcStack_78 = FUN_104bdbeb0;
  puStack_90 = (undefined1 *)ppcVar5;
  pcStack_88 = pcVar4;
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x000104bdc5d8();
  func_0x000108b8099c(auStack_c0);
  FUN_104bdb8fc(auStack_a8,auStack_c0);
  func_0x000100100fec(auStack_c0);
  func_0x000104bdc5cc();
  func_0x000100100fec(auStack_a8);
  return;
}



/* Entry: 104bdbeb0; end: 104bdbf07;  */

void FUN_104bdbeb0(void)

{
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x000104bdc5d8();
  func_0x000108b8099c(auStack_50);
  FUN_104bdb8fc(auStack_38,auStack_50);
  func_0x000100100fec(auStack_50);
  func_0x000104bdc5cc();
  func_0x000100100fec(auStack_38);
  return;
}



/* Entry: 104bdbf08; end: 104bdbf5f;  */

void FUN_104bdbf08(void)

{
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x000104bdc5d8();
  FUN_104bdbf60(auStack_50);
  FUN_104bdb94c(auStack_38,auStack_50);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_50);
  func_0x000104bdc5cc();
  func_0x000100100fec(auStack_38);
  return;
}



/* Entry: 104bdbf60; end: 104bdbf77;  */

void FUN_104bdbf60(void)

{
  func_0x00010b9a9894();
  return;
}



/* Entry: 104bdbf78; end: 104bdbf9f;  */

undefined8 * FUN_104bdbf78(undefined8 *param_1)

{
  FUN_104bdbfa0(*param_1);
  return param_1;
}



/* Entry: 104bdbfa0; end: 104bdbfcb;  */

void FUN_104bdbfa0(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000104bdc578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 104bdbfcc; end: 104bdc093;  */

long FUN_104bdbfcc(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar7 = (long *)param_1[1];
  if (plVar7 != (long *)0x0) {
    plVar2 = param_1 + 3;
    if (*plVar2 == 0) {
      return 0;
    }
    FUN_104bdc094();
    uVar4 = (long)plVar7 - 1;
    if (((ulong)plVar7 & uVar4) == 0) {
      plVar5 = (long *)((ulong)plVar2 & uVar4);
    }
    else {
      plVar5 = plVar2;
      if (plVar7 <= plVar2) {
        uVar1 = 0;
        if (plVar7 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar7;
        }
        plVar5 = (long *)((long)plVar2 - uVar1 * (long)plVar7);
      }
    }
    plVar3 = *(long **)(*param_1 + (long)plVar5 * 8);
    if (plVar3 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar3 = (long *)*plVar3;
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        plVar6 = (long *)plVar3[1];
        if (plVar6 != plVar2) break;
        if (plVar3[2] == *param_2) {
          return (long)plVar3;
        }
      }
      if (((ulong)plVar7 & uVar4) == 0) {
        plVar6 = (long *)((ulong)plVar6 & uVar4);
      }
      else if (plVar7 <= plVar6) {
        uVar1 = 0;
        if (plVar7 != (long *)0x0) {
          uVar1 = (ulong)plVar6 / (ulong)plVar7;
        }
        plVar6 = (long *)((long)plVar6 - uVar1 * (long)plVar7);
      }
    } while (plVar6 == plVar5);
  }
  return 0;
}



/* Entry: 104bdc094; end: 104bdc09b;  */

void FUN_104bdc094(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = *param_2;
  func_0x0001000df370(&uStack_18,8);
  return;
}



/* Entry: 104bdc09c; end: 104bdc103;  */

void FUN_104bdc09c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_104bdbfcc();
  if (lVar1 != 0) {
    func_0x000104bdc0cc(param_1,lVar1);
  }
  return;
}



/* Entry: 104bdc104; end: 104bdc21f;  */

void FUN_104bdc104(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar7 = uVar4 - 1;
  if ((uVar4 & uVar7) == 0) {
    uVar3 = uVar7 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  lVar6 = *param_2;
  plVar2 = *(long **)(lVar6 + uVar3 * 8);
  do {
    plVar5 = plVar2;
    plVar2 = (long *)*plVar5;
  } while ((long *)*plVar5 != param_3);
  if (plVar5 != param_2 + 2) {
    uVar8 = plVar5[1];
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_104bdc1b8;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_104bdc1b8;
  }
  *(undefined8 *)(lVar6 + uVar3 * 8) = 0;
LAB_104bdc1b8:
  lVar9 = *param_3;
  if (lVar9 != 0) {
    uVar8 = *(ulong *)(lVar9 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar7 = 0;
      if (uVar4 != 0) {
        uVar7 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar7 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(lVar6 + uVar8 * 8) = plVar5;
      lVar9 = *param_3;
    }
  }
  *plVar5 = lVar9;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 104bdc220; end: 104bdc243;  */

undefined8 FUN_104bdc220(undefined8 param_1)

{
  FUN_104bdc244(param_1,0);
  return param_1;
}



/* Entry: 104bdc244; end: 104bdc25b;  */

void FUN_104bdc244(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    func_0x000104bdc2a0(lVar1 + 0x18);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 104bdc25c; end: 104bdc2c7;  */

void FUN_104bdc25c(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x000104bdc2a0(param_2 + 0x18);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 104bdc2c8; end: 104bdc2fb;  */

long * FUN_104bdc2c8(void)

{
  long *plVar1;
  
  plVar1 = (long *)0x8;
  ___cxa_allocate_exception();
  *plVar1 = (long)(PTR___ZTVSt19bad_optional_access_110346b78 + 0x10);
  ___cxa_throw();
  FUN_104bdc324(*plVar1);
  return plVar1;
}



/* Entry: 104bdc2fc; end: 104bdc323;  */

undefined8 * FUN_104bdc2fc(undefined8 *param_1)

{
  FUN_104bdc324(*param_1);
  return param_1;
}



/* Entry: 104bdc324; end: 104bdc337;  */

void FUN_104bdc324(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != 0) {
    uStack_18 = *(undefined8 *)(param_1 + 0x10);
    uStack_20 = *(undefined8 *)(param_1 + 8);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 104bdc338; end: 104bdc35b;  */

void FUN_104bdc338(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_DAT_1107e6138;
  return;
}



/* Entry: 104bdc35c; end: 104bdc37b;  */

void FUN_104bdc35c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_1107e6138;
  return;
}



/* Entry: 104bdc37c; end: 104bdc397;  */

/* WARNING: Removing unreachable block (ram,0x000108b8095c) */

void FUN_104bdc37c(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  undefined1 in_ZR;
  long lVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined8 extraout_x8;
  long *plStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_88;
  undefined2 uStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  
  FUN_104bdba14(0);
  bVar4 = bRam00000001136a3749;
  bRam00000001136a3749 = 1;
  if ((bVar4 & 1) != 0) {
    return;
  }
  if ((bRam00000001136a3750 & 1) == 0) {
    iVar6 = 0x136a3750;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      if ((bRam00000001136a3760 & 1) == 0) {
        iVar6 = 0x136a3760;
        ___cxa_guard_acquire();
        if (iVar6 != 0) {
          func_0x0001003a83dc(0x1136a3758,"_djinni_interface_Crypto");
          ___cxa_guard_release(0x1136a3760);
        }
      }
      FUN_104bdbd44(0x1136a3768,0x1136a3758,1,0,0);
      ___cxa_guard_release(0x1136a3750);
    }
  }
  lVar5 = 0x1136a3768;
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010b9941f8(&uStack_48);
  uStack_50 = uStack_48;
  func_0x000108b80b74(auStack_40,&uStack_50,0x1136a3768);
  func_0x000107c30f50();
  lStack_88 = *(long *)(lVar5 + 0x10);
  if (lStack_88 != 0) {
    piVar1 = (int *)(lStack_88 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_80 = 0xff00;
  func_0x000107c30fa8(auStack_78,&lStack_88);
  func_0x000107c31030(auStack_68,auStack_78);
  func_0x000107c27900(auStack_70);
  func_0x000107c278f4(&lStack_88);
  puVar7 = auStack_68;
  func_0x00010b994158(uStack_48,puVar7,auStack_38);
  iVar6 = (int)puVar7;
  func_0x000107c27900(auStack_60);
  func_0x000107c2a668(auStack_40);
  FUN_104bdc2fc(&uStack_48);
  func_0x000108b80b80(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    if (iVar6 == 0) {
      __Unwind_Resume();
    }
    FUN_104bd46a0();
    func_0x00010b9a96d0(&lStack_c8);
    plStack_e0 = *(long **)(lStack_c8 + 0x18);
    if (plStack_e0 != (long *)0x0) {
      (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
    }
    lStack_d0 = *(long *)(lStack_c8 + 0x28);
    lStack_d8 = *(long *)(lStack_c8 + 0x20);
    func_0x000107c27d7c(extraout_x8,lStack_d8,lStack_d8 + lStack_d0);
    func_0x000107c27900(&plStack_e0);
    FUN_104bdb38c(&lStack_c8);
    return;
  }
  return;
}



/* Entry: 104bdc398; end: 104bdc3cf;  */

long FUN_104bdc398(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1107e61a8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 104bdc3d0; end: 104bdc3db;  */

undefined ** FUN_104bdc3d0(void)

{
  return &PTR_DAT_1107e61a8;
}



/* Entry: 104bdc3dc; end: 104bdc43f;  */

void FUN_104bdc3dc(undefined8 param_1,long param_2)

{
  (**(code **)(param_2 + 0x10))();
  return;
}



/* Entry: 104bdc440; end: 104bdc513;  */

void FUN_104bdc440(undefined8 *param_1,long *param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long *plStack_60;
  undefined1 auStack_58 [24];
  long *plStack_40;
  undefined8 uStack_38;
  
  plVar1 = param_2;
  func_0x0001003a8364();
  (**(code **)(*param_2 + 0x10))();
  uStack_38 = 0;
  plStack_40 = param_2;
  func_0x0001003a91d4("C++: {}");
  func_0x0001003a9204(auStack_58);
  func_0x0001003ac750(&plStack_40,plVar1,auStack_58);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  uVar2 = *(undefined8 *)(param_3 + 0x18);
  plStack_60 = plStack_40;
  plStack_40 = (long *)0x0;
  func_0x00010b99f560(auStack_58,&plStack_60);
  func_0x00010b99ff08(uVar2,auStack_58);
  FUN_104bda93c(auStack_58);
  func_0x0001003a8c94(&plStack_60);
  *(undefined2 *)(param_1 + 1) = 1;
  *param_1 = 0;
  func_0x0001003a8c94(&plStack_40);
  return;
}



/* Entry: 104bdc514; end: 104bdc54b;  */

void FUN_104bdc514(undefined8 *param_1,long param_2,long param_3)

{
  func_0x00010b99febc(*(undefined8 *)(param_3 + 0x18),param_2 + 0x10);
  *(undefined2 *)(param_1 + 1) = 1;
  *param_1 = 0;
  return;
}



/* Entry: 104bdc54c; end: 104bdc5f7;  */

void FUN_104bdc54c(void)

{
  return;
}



/* Entry: 104bdc5f8; end: 104bdc64f;  */

undefined8 FUN_104bdc5f8(void)

{
  int iVar1;
  
  if ((bRam00000001136a3780 & 1) == 0) {
    iVar1 = 0x136a3780;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000104bdd9fc("GraphenePartition");
      func_0x000104bdd9f4();
    }
  }
  return 0x1136a3778;
}



/* Entry: 104bdc650; end: 104bdc90f;  */

undefined8 * FUN_104bdc650(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 **ppuVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1107e6200;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  func_0x000104bdd9a8(auStack_118);
  func_0x00010b9a5e5c(auStack_130,param_3);
  uStack_148 = 0;
  uStack_140 = 0;
  uStack_138 = 0;
  func_0x0001000fc044(&uStack_148,param_4[1] - *param_4 >> 3);
  lVar1 = param_4[1];
  for (lVar7 = *param_4; lVar7 != lVar1; lVar7 = lVar7 + 8) {
    func_0x00010b9a5e5c(&puStack_b0,lVar7);
    func_0x0001000fecf4(&uStack_148,&puStack_b0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_b0);
  }
  puVar4 = (undefined8 *)0x38;
  __Znwm();
  plVar9 = puVar4 + 1;
  *plVar9 = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_1107e63b8;
  puVar8 = puVar4 + 3;
  *puVar8 = &PTR_DAT_1107e6280;
  puVar4[4] = 0;
  puVar4[5] = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&puStack_c8,auStack_118);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_e0,auStack_130);
  func_0x00010015bc98(&uStack_100,&uStack_148);
  uStack_a0 = uStack_b8;
  puStack_a8 = puStack_c0;
  puStack_b0 = puStack_c8;
  puStack_c0 = (undefined8 *)0x0;
  uStack_b8 = 0;
  uStack_90 = uStack_d8;
  uStack_98 = uStack_e0;
  uStack_88 = uStack_d0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  puStack_c8 = (undefined8 *)0x0;
  uStack_78 = uStack_f8;
  uStack_80 = uStack_100;
  uStack_70 = uStack_f0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_100 = 0;
  ppuVar5 = &puStack_b0;
  func_0x00010028f4b0();
  puVar4[6] = ppuVar5;
  func_0x000100164334(&puStack_b0);
  func_0x0001000e30f4(&uStack_100);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_e0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_c8);
  if ((puVar4[5] == 0) || (*(long *)(puVar4[5] + 8) == -1)) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puStack_b0 = puVar8;
    puStack_a8 = puVar4;
    func_0x0001003a8180(puVar4 + 4,&puStack_b0);
    func_0x0001003a90c4(&puStack_b0);
  }
  uVar6 = param_1[3];
  param_1[3] = puVar8;
  FUN_104bdd600(uVar6);
  FUN_104bdd600(0);
  FUN_104bdcf6c(param_1 + 4,param_4);
  func_0x0001000e30f4(&uStack_148);
  func_0x000104bdd9b8();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_118);
  return param_1;
}



/* Entry: 104bdc910; end: 104bdc94f;  */

undefined8 * FUN_104bdc910(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e6200;
  func_0x000104bdd014(param_1 + 4);
  func_0x000104bdd5dc(param_1 + 3);
  func_0x000104bdd9d8();
  return param_1;
}



/* Entry: 104bdc950; end: 104bdc953;  */

undefined8 * FUN_104bdc950(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e6200;
  func_0x000104bdd014(param_1 + 4);
  func_0x000104bdd5dc(param_1 + 3);
  func_0x000104bdd9d8();
  return param_1;
}



/* Entry: 104bdc954; end: 104bdc967;  */

void FUN_104bdc954(void)

{
  FUN_104bdc910();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bdc968; end: 104bdca23;  */

void FUN_104bdc968(undefined8 *param_1,long param_2,undefined4 param_3)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  undefined8 extraout_x8;
  undefined8 *puVar7;
  undefined1 auStack_b8 [8];
  undefined8 **ppuStack_b0;
  ulong uStack_a8;
  byte bStack_99;
  undefined **ppuStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 *puStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 auStack_48 [12];
  undefined4 uStack_3c;
  long lStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  func_0x000104bdd998();
  puVar7 = (undefined8 *)(param_2 + 0x18);
  uStack_3c = param_3;
  uStack_28 = extraout_x8;
  FUN_104bdca24(&lStack_38,*puVar7);
  uVar3 = lStack_38 == 1;
  if ((bool)uVar3) {
    param_3 = SUB84(&uStack_3c,0);
    FUN_104bdcb10(auStack_48,puVar7);
    func_0x000104bdd978(1);
    FUN_104bdd8f8();
  }
  else {
    *param_1 = 2;
    if (lStack_30 != 0) {
      plVar5 = (long *)(lStack_30 + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    param_1[1] = lStack_30;
  }
  plVar5 = &lStack_38;
  func_0x000104bdd63c();
  func_0x000104bdd940(uStack_28);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    plVar6 = &lStack_38;
    func_0x000104bdd63c();
    func_0x000104bdd938();
    pcStack_58 = FUN_104bdca24;
    uStack_88 = 0;
    uStack_80 = 0;
    ppuStack_98 = &PTR_FUN_1107e62c0;
    uStack_90 = 0;
    uStack_78 = param_3;
    puStack_70 = puVar7;
    plStack_68 = plVar5;
    puStack_60 = &stack0xfffffffffffffff0;
    (**(code **)(*(long *)plVar6[3] + 0x20))(&ppuStack_b0,(long *)plVar6[3],&ppuStack_98);
    if (-1 < (char)bStack_99) {
      uStack_a8 = (ulong)bStack_99;
      ppuStack_b0 = &ppuStack_b0;
    }
    iVar4 = 0xf243d7b;
    func_0x0001000633dc("UNREGISTERED_METRIC_NAME",0x18,ppuStack_b0,uStack_a8);
    if (iVar4 == 0) {
      func_0x0001003a8364();
      func_0x0001003ac750(auStack_b8);
      func_0x000104bdd978(1);
      func_0x0001003a8c94();
    }
    else {
      func_0x00010b99f5f8(auStack_b8,"Could not find metric in partition");
      func_0x000104bdd978(2);
      FUN_104bda93c();
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_b0);
    func_0x000104bdd558(&ppuStack_98);
    return;
  }
  return;
}



/* Entry: 104bdca24; end: 104bdcb0f;  */

void FUN_104bdca24(long param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_68 [8];
  undefined8 **ppuStack_60;
  ulong uStack_58;
  byte bStack_49;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  ppuStack_48 = &PTR_FUN_1107e62c0;
  uStack_40 = 0;
  uStack_28 = param_2;
  (**(code **)(**(long **)(param_1 + 0x18) + 0x20))
            (&ppuStack_60,*(long **)(param_1 + 0x18),&ppuStack_48);
  if (-1 < (char)bStack_49) {
    uStack_58 = (ulong)bStack_49;
    ppuStack_60 = &ppuStack_60;
  }
  iVar1 = 0xf243d7b;
  func_0x0001000633dc("UNREGISTERED_METRIC_NAME",0x18,ppuStack_60,uStack_58);
  if (iVar1 == 0) {
    func_0x0001003a8364();
    func_0x0001003ac750(auStack_68);
    func_0x000104bdd978(1);
    func_0x0001003a8c94();
  }
  else {
    func_0x00010b99f5f8(auStack_68,"Could not find metric in partition");
    func_0x000104bdd978(2);
    FUN_104bda93c();
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_60);
  func_0x000104bdd558(&ppuStack_48);
  return;
}



/* Entry: 104bdcb10; end: 104bdcb53;  */

long * FUN_104bdcb10(undefined8 *param_1,long *param_2)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined1 *puVar2;
  long *plVar3;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  undefined8 extraout_x8_01;
  int iVar4;
  char *pcStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 auStack_38 [2];
  undefined8 uStack_28;
  
  func_0x000104bdd998();
  uStack_28 = extraout_x8;
  FUN_104bdd664(auStack_38);
  *param_1 = auStack_38[0];
  func_0x000104bdd940(uStack_28);
  if ((bool)in_ZR) {
    return param_2;
  }
  ___stack_chk_fail();
  iVar4 = 0;
  func_0x000104bdd998();
  lStack_b0 = 0;
  lStack_a8 = 0;
  lStack_a0 = 0;
  uStack_88 = extraout_x8_01;
  do {
    FUN_104bdca24(&lStack_98,param_2[3],iVar4);
    uVar1 = lStack_98 == 1;
    if (!(bool)uVar1) {
      func_0x000104bdd9b0();
      extraout_x8_00[1] = lStack_a8;
      *extraout_x8_00 = lStack_b0;
      extraout_x8_00[2] = lStack_a0;
      lStack_b0 = 0;
      lStack_a8 = 0;
      lStack_a0 = 0;
LAB_104bdcc1c:
      plVar3 = &lStack_b0;
      func_0x000104bdd014();
      func_0x000104bdd940(uStack_88);
      if ((bool)uVar1) {
        return plVar3;
      }
      ___stack_chk_fail();
      func_0x000104bdd9b0();
      func_0x000104bdd014(&lStack_b0);
      func_0x000104bdd938();
      if ((bRam00000001136a3790 & 1) == 0) {
        iVar4 = 0x136a3790;
        ___cxa_guard_acquire();
        if (iVar4 != 0) {
          func_0x000104bdd9fc("GrapheneMetric");
          func_0x000104bdd9f4();
        }
      }
      return (long *)0x1136a3788;
    }
    uVar1 = lStack_b0 == lStack_a8;
    if ((bool)uVar1) {
      pcStack_c0 = "stub";
      uStack_b8 = 4;
      puVar2 = auStack_90;
      func_0x00010b9a5ea8(puVar2,&pcStack_c0);
      if ((int)puVar2 != 0) {
        func_0x000104bdd07c(extraout_x8_00,param_2 + 4);
        func_0x000104bdd9b0();
        goto LAB_104bdcc1c;
      }
    }
    func_0x000104bdd2f0(&lStack_b0,auStack_90);
    func_0x000104bdd9b0();
    iVar4 = iVar4 + 1;
  } while( true );
}



/* Entry: 104bdcb54; end: 104bdcc6b;  */

long * FUN_104bdcb54(long *param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  long *plVar3;
  undefined8 extraout_x8;
  int iVar4;
  char *pcStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  iVar4 = 0;
  func_0x000104bdd998();
  lStack_70 = 0;
  lStack_68 = 0;
  lStack_60 = 0;
  uStack_48 = extraout_x8;
  do {
    FUN_104bdca24(&lStack_58,*(undefined8 *)(param_2 + 0x18),iVar4);
    uVar1 = lStack_58 == 1;
    if (!(bool)uVar1) {
      func_0x000104bdd9b0();
      param_1[1] = lStack_68;
      *param_1 = lStack_70;
      param_1[2] = lStack_60;
      lStack_70 = 0;
      lStack_68 = 0;
      lStack_60 = 0;
LAB_104bdcc1c:
      plVar3 = &lStack_70;
      func_0x000104bdd014();
      func_0x000104bdd940(uStack_48);
      if ((bool)uVar1) {
        return plVar3;
      }
      ___stack_chk_fail();
      func_0x000104bdd9b0();
      func_0x000104bdd014(&lStack_70);
      func_0x000104bdd938();
      if ((bRam00000001136a3790 & 1) == 0) {
        iVar4 = 0x136a3790;
        ___cxa_guard_acquire();
        if (iVar4 != 0) {
          func_0x000104bdd9fc("GrapheneMetric");
          func_0x000104bdd9f4();
        }
      }
      return (long *)0x1136a3788;
    }
    uVar1 = lStack_70 == lStack_68;
    if ((bool)uVar1) {
      pcStack_80 = "stub";
      uStack_78 = 4;
      puVar2 = auStack_50;
      func_0x00010b9a5ea8(puVar2,&pcStack_80);
      if ((int)puVar2 != 0) {
        func_0x000104bdd07c(param_1,param_2 + 0x20);
        func_0x000104bdd9b0();
        goto LAB_104bdcc1c;
      }
    }
    func_0x000104bdd2f0(&lStack_70,auStack_50);
    func_0x000104bdd9b0();
    iVar4 = iVar4 + 1;
  } while( true );
}



/* Entry: 104bdcc6c; end: 104bdcd03;  */

undefined8 FUN_104bdcc6c(void)

{
  int iVar1;
  
  if ((bRam00000001136a3790 & 1) == 0) {
    iVar1 = 0x136a3790;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000104bdd9fc("GrapheneMetric");
      func_0x000104bdd9f4();
    }
  }
  return 0x1136a3788;
}



/* Entry: 104bdcd04; end: 104bdcd0b;  */

undefined8 * FUN_104bdcd04(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e6380;
  func_0x0001000e30f4(param_1 + 1);
  return param_1;
}



/* Entry: 104bdcd0c; end: 104bdcd1f;  */

void FUN_104bdcd0c(void)

{
  func_0x000104bdccc4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bdcd20; end: 104bdcd7f;  */

void FUN_104bdcd20(void)

{
  long unaff_x20;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x000104bdda10();
  func_0x000104bdd9a8(auStack_38);
  func_0x00010b9a5e5c(auStack_50);
  FUN_104bdcd80(unaff_x20 + 0x18,auStack_38,auStack_50);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_50);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
  return;
}



/* Entry: 104bdcd80; end: 104bdcdaf;  */

void FUN_104bdcd80(long param_1)

{
  long unaff_x20;
  
  func_0x000104bdda10();
  func_0x0001000fecf4(param_1 + 8);
  func_0x0001000fecf4(unaff_x20 + 8);
  return;
}



/* Entry: 104bdcdb0; end: 104bdcdf3;  */

void FUN_104bdcdb0(void)

{
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000104bdda10();
  func_0x000104bdd9a8(auStack_38);
  FUN_104bdcdf4(unaff_x20 + 0x18,auStack_38);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
  return;
}



/* Entry: 104bdcdf4; end: 104bdce6b;  */

undefined8 FUN_104bdcdf4(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_30 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  __ZNSt3__19to_stringEx(auStack_58,param_3);
  FUN_104bdcd80(param_1,&uStack_40,auStack_58);
  func_0x000104bdd954();
  func_0x000104bdd9b8();
  return param_1;
}



/* Entry: 104bdce6c; end: 104bdce9f;  */

void FUN_104bdce6c(double param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(*(long *)(param_2 + 0x40) + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000104bdce9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar1)(puVar1,param_2 + 0x18,(long)(param_1 * 1000.0 * 1000.0));
  return;
}



/* Entry: 104bdcea0; end: 104bdcf33;  */

undefined8 FUN_104bdcea0(void)

{
  int iVar1;
  
  if ((bRam00000001136a37a0 & 1) == 0) {
    iVar1 = 0x136a37a0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000104bdd9fc("GrapheneBridgeInternal");
      func_0x000104bdd9f4();
    }
  }
  return 0x1136a3798;
}



/* Entry: 104bdcf34; end: 104bdcf43;  */

undefined4 FUN_104bdcf34(long param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



/* Entry: 104bdcf44; end: 104bdcf57;  */

void FUN_104bdcf44(void)

{
  func_0x000104bdd558();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bdcf58; end: 104bdcf5f;  */

long FUN_104bdcf58(long param_1)

{
  return param_1 + 8;
}



/* Entry: 104bdcf60; end: 104bdcf6b;  */

void FUN_104bdcf60(void)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  
  func_0x000104bdda04();
  func_0x000100048240();
  func_0x000104bdcfa0();
  uVar1 = *unaff_x19;
  unaff_x20[1] = unaff_x19[1];
  *unaff_x20 = uVar1;
  unaff_x20[2] = unaff_x19[2];
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  return;
}



/* Entry: 104bdcf6c; end: 104bdcfd7;  */

void FUN_104bdcf6c(void)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  
  func_0x000100048240();
  func_0x000104bdcfa0();
  uVar1 = *unaff_x19;
  unaff_x20[1] = unaff_x19[1];
  *unaff_x20 = uVar1;
  unaff_x20[2] = unaff_x19[2];
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  return;
}



/* Entry: 104bdcfd8; end: 104bdcfdf;  */

void FUN_104bdcfd8(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000100048240(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -8;
    func_0x0001003a8c94();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 104bdcfe0; end: 104bdd0a3;  */

void FUN_104bdcfe0(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000100048240();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -8;
    func_0x0001003a8c94();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 104bdd0a4; end: 104bdd0f7;  */

void FUN_104bdd0a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    func_0x000100163898();
    FUN_104bdd0f8();
    func_0x0001001638b0();
    FUN_104bdd130();
  }
  uStack_38 = 1;
  func_0x000104bdd2c4(&uStack_40);
  return;
}



/* Entry: 104bdd0f8; end: 104bdd12f;  */

void FUN_104bdd0f8(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3d == 0) {
    plVar1 = param_1 + 2;
    FUN_104bdd16c();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2);
  }
  else {
    FUN_104bdd160();
    plVar1 = param_1 + 2;
    func_0x000104bdd1ac();
    param_1[1] = (long)plVar1;
  }
  return;
}



/* Entry: 104bdd130; end: 104bdd15f;  */

void FUN_104bdd130(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  func_0x000104bdd1ac();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 104bdd160; end: 104bdd16b;  */

void FUN_104bdd160(void)

{
  func_0x000104bdda04();
  FUN_104bdd190();
  return;
}



/* Entry: 104bdd16c; end: 104bdd18f;  */

void FUN_104bdd16c(void)

{
  FUN_104bdd190();
  return;
}



/* Entry: 104bdd190; end: 104bdd1bf;  */

void FUN_104bdd190(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  FUN_104bd35f4();
  FUN_104bdd1c0();
  return;
}


