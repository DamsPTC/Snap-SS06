/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104be43b4; end: 104be43d7;  */

void FUN_104be43b4(void)

{
  code *extraout_x8;
  
  func_0x000104be5e98();
  (*extraout_x8)();
  return;
}



/* Entry: 104be43d8; end: 104be43e3;  */

void FUN_104be43d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e78d0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104be43e4; end: 104be43f7;  */

void FUN_104be43e4(void)

{
  FUN_104be43d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104be43f8; end: 104be43ff;  */

void FUN_104be43f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104be5e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 104be4400; end: 104be4427;  */

undefined8 FUN_104be4400(undefined8 param_1)

{
  func_0x000104be62b8(&PTR_FUN_1107e7920);
  return param_1;
}



/* Entry: 104be4428; end: 104be443b;  */

void FUN_104be4428(void)

{
  FUN_104be4400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104be443c; end: 104be46cb;  */

void FUN_104be443c(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  long *plVar3;
  int extraout_w10;
  undefined1 auStack_d0 [16];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long *aplStack_a0 [2];
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long alStack_60 [3];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  func_0x000104be5f50();
  uStack_28 = extraout_x8;
  FUN_104be47a4(aplStack_a0,*(undefined8 *)(param_2 + 8));
  if (aplStack_a0[0] == (long *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    FUN_104be48f8(alStack_60);
    FUN_104be47f0();
    FUN_104be48bc(param_1,uStack_48,uStack_40);
    FUN_104be4c38(alStack_60);
    FUN_104be4d64(&uStack_c0);
  }
  else {
    (**(code **)(*aplStack_a0[0] + 0x10))(auStack_d0,aplStack_a0[0],param_3);
    alStack_60[0] = 0;
    alStack_60[1] = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    FUN_104be4db4(&uStack_c0,auStack_d0,&uStack_70);
    FUN_104be4ddc(alStack_60,&uStack_c0);
    func_0x000104be63c0();
    FUN_104be4f5c(&uStack_70);
    param_3 = (undefined8 *)0x28;
    __Znwm();
    param_3[4] = 0;
    param_3[1] = 0;
    *param_3 = 0;
    param_3[3] = 0;
    param_3[2] = 0;
    FUN_104be48f8();
    *param_3 = &PTR_FUN_1107e7a00;
    FUN_104be48bc(&uStack_c0,param_3[3],param_3[4]);
    lStack_80 = 0;
    lStack_78 = 0;
    lStack_90 = alStack_60[0] + 0x58;
    lStack_88 = CONCAT71(lStack_88._1_7_,1);
    puStack_30 = param_3;
    __ZNSt3__15mutex4lockEv();
    lVar1 = alStack_60[0];
    func_0x000104be4e00();
    if ((int)lVar1 == 0) {
      puVar2 = (undefined8 *)0x18;
      __Znwm();
      *puVar2 = &PTR_FUN_1107e7a38;
      puStack_30 = (undefined8 *)0x0;
      puVar2[2] = param_3;
      plVar3 = *(long **)(alStack_60[0] + 0xa0);
      *(undefined8 **)(alStack_60[0] + 0xa0) = puVar2;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
      param_3 = (undefined8 *)0x0;
    }
    else {
      FUN_104be4ddc(&lStack_80,alStack_60);
    }
    func_0x0001000df5a0(&lStack_90);
    if (lStack_80 != 0) {
      lStack_90 = lStack_80;
      lStack_88 = lStack_78;
      if (lStack_78 != 0) {
        do {
          func_0x000104be5e40();
        } while (extraout_w10 != 0);
      }
      FUN_104be4e48(auStack_38);
      FUN_104be4f5c(&lStack_90);
    }
    param_1[1] = uStack_b8;
    *param_1 = uStack_c0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    FUN_104be4f5c(&lStack_80);
    if (param_3 != (undefined8 *)0x0) {
      func_0x000104be5ff0();
    }
    func_0x000104be6484();
    FUN_104be4f5c(alStack_60);
    func_0x000104be63b8();
  }
  FUN_104be51f4(aplStack_a0);
  func_0x000104be5e2c(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000104be6344();
    func_0x0001000df5a0();
    FUN_104be4f5c(&lStack_80);
    puStack_30 = (undefined8 *)0x0;
    if (param_3 != (undefined8 *)0x0) {
      func_0x000104be5ff0();
    }
    func_0x000104be6484();
    FUN_104be4f5c(alStack_60);
    func_0x000104be63b8();
    do {
      FUN_104be51f4(aplStack_a0);
      func_0x000104be6084();
    } while( true );
  }
  return;
}



/* Entry: 104be46cc; end: 104be4733;  */

void FUN_104be46cc(void)

{
  undefined8 uStack_30;
  
  func_0x000104be6418();
  if (uStack_30 == (long *)0x0) {
    func_0x000104be6568();
    FUN_104be5218();
    func_0x000104be6458();
  }
  else {
    (**(code **)(*uStack_30 + 0x20))();
  }
  func_0x000104be64a4();
  return;
}



/* Entry: 104be4734; end: 104be47a3;  */

void FUN_104be4734(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  
  func_0x000104be6418();
  if (uStack_30 == (long *)0x0) {
    func_0x000104be6568();
    FUN_104be5218();
    func_0x000104be6458();
  }
  else {
    (**(code **)(*uStack_30 + 0x28))(uStack_30,param_2);
  }
  func_0x000104be64a4();
  return;
}



/* Entry: 104be47a4; end: 104be47ef;  */

void FUN_104be47a4(undefined8 *param_1,long param_2)

{
  long alStack_30 [2];
  
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    func_0x000104be62dc();
    if (alStack_30[0] != 0) {
      func_0x000104be62cc();
    }
    *param_1 = 0;
    param_1[1] = 0;
    FUN_104be51f4(alStack_30);
  }
  return;
}



/* Entry: 104be47f0; end: 104be48bb;  */

void FUN_104be47f0(void)

{
  long *plVar1;
  undefined8 *puStack_40;
  
  func_0x000104be64d4();
  func_0x000104be64c4();
  func_0x000104be6600();
  func_0x000104be6484();
  func_0x000104be6350();
  __ZNSt3__15mutex4lockEv(puStack_40 + 10);
  if (*(char *)(puStack_40 + 3) == '\x01') {
    func_0x000104be4a88(puStack_40);
    func_0x000104be643c();
  }
  else {
    *puStack_40 = 0;
    puStack_40[1] = 0;
    puStack_40[2] = 0;
    func_0x000104be643c();
    *(undefined1 *)(puStack_40 + 3) = 1;
  }
  plVar1 = (long *)puStack_40[0x13];
  puStack_40[0x13] = 0;
  __ZNSt3__15mutex6unlockEv(puStack_40 + 10);
  if (plVar1 == (long *)0x0) {
    func_0x000104be62f4();
  }
  else {
    func_0x000104be6298(*(undefined8 *)(*plVar1 + 0x10));
    func_0x000104be5f10();
  }
  func_0x000104be649c();
  return;
}



/* Entry: 104be48bc; end: 104be48f3;  */

void FUN_104be48bc(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  int extraout_w10_00;
  
  if (param_3 != 0) {
    do {
      func_0x000104be5e40();
    } while (extraout_w10 != 0);
    do {
      func_0x000104be5e40();
    } while (extraout_w10_00 != 0);
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  func_0x000104be6350();
  return;
}



/* Entry: 104be48f4; end: 104be48f7;  */

void FUN_104be48f4(long param_1)

{
  long unaff_x19;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x000104be6634();
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000104be64e4();
    FUN_104bdfe3c(auStack_28,auStack_30);
    FUN_104be4cd0();
    __ZNSt13exception_ptrD1Ev(auStack_28);
    __ZNSt9exceptionD2Ev(auStack_30);
    __ZNSt9exceptionD2Ev(auStack_38);
  }
  FUN_104be4a18(unaff_x19 + 0x18);
  FUN_104be4a18((long *)(param_1 + 8));
  return;
}



/* Entry: 104be48f8; end: 104be497f;  */

void FUN_104be48f8(void)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long unaff_x19;
  
  func_0x000104be6634();
  puVar3 = (undefined8 *)0xb8;
  __Znwm();
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_1107e79b0;
  puVar3[6] = 0;
  puVar3[5] = 0;
  puVar5 = puVar3 + 3;
  puVar3[4] = 0;
  *puVar5 = 0;
  puVar3[7] = 0x3cb0b1bb;
  puVar3[9] = 0;
  puVar3[8] = 0;
  puVar3[0xb] = 0;
  puVar3[10] = 0;
  puVar3[0xc] = 0;
  puVar3[0xd] = 0x32aaaba7;
  puVar3[0xf] = 0;
  puVar3[0xe] = 0;
  puVar3[0x11] = 0;
  puVar3[0x10] = 0;
  puVar3[0x13] = 0;
  puVar3[0x12] = 0;
  puVar3[0x15] = 0;
  puVar3[0x14] = 0;
  puVar3[0x16] = 0;
  *(undefined8 **)(unaff_x19 + 8) = puVar5;
  *(undefined8 **)(unaff_x19 + 0x10) = puVar3;
  *(undefined8 **)(unaff_x19 + 0x18) = puVar5;
  *(undefined8 **)(unaff_x19 + 0x20) = puVar3;
  plVar4 = puVar3 + 1;
  *plVar4 = 0;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  return;
}



/* Entry: 104be4980; end: 104be4993;  */

void FUN_104be4980(void)

{
  FUN_104be4c38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104be4994; end: 104be4997;  */

void FUN_104be4994(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e79b0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104be4998; end: 104be49ab;  */

void FUN_104be4998(void)

{
  FUN_104be4a08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104be49ac; end: 104be4a07;  */

long FUN_104be49ac(long param_1)

{
  long lVar1;
  long unaff_x19;
  
  lVar1 = *(long *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  if (lVar1 != 0) {
    func_0x000104be62e8();
  }
  __ZNSt13exception_ptrD1Ev(param_1 + 0xa8);
  __ZNSt3__15mutexD1Ev(param_1 + 0x68);
  lVar1 = param_1 + 0x38;
  __ZNSt3__118condition_variableD1Ev(lVar1);
  if (*(char *)(param_1 + 0x30) == '\x01') {
    func_0x000100292090(param_1 + 0x18);
    func_0x000104be4d88();
    return unaff_x19;
  }
  return lVar1;
}



/* Entry: 104be4a08; end: 104be4a17;  */

void FUN_104be4a08(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104be4a18; end: 104be4a3b;  */

void FUN_104be4a18(long param_1)

{
  func_0x00010054ffe4();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 104be4a3c; end: 104be4a63;  */

void FUN_104be4a3c(void)

{
  func_0x000104be61c0();
  func_0x000104be65d8();
  func_0x000104be6030();
  func_0x000104be6514();
  return;
}



/* Entry: 104be4a64; end: 104be4abf;  */

void FUN_104be4a64(void)

{
  func_0x000104be608c();
  FUN_104be4a18();
  return;
}



/* Entry: 104be4ac0; end: 104be4ac7;  */

void FUN_104be4ac0(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x00010065adc4(param_1,*param_1);
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x19;
    func_0x000104be4af8();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 104be4ac8; end: 104be4b77;  */

void FUN_104be4ac8(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010065adc4();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -200;
    func_0x000104be4af8();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 104be4b78; end: 104be4b7f;  */

void FUN_104be4b78(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x00010065adc4(param_1,*param_1);
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x1b;
    func_0x000104be4bb0();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 104be4b80; end: 104be4be3;  */

void FUN_104be4b80(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010065adc4();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0xd8;
    func_0x000104be4bb0();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 104be4be4; end: 104be4c03;  */

void FUN_104be4be4(long param_1)

{
  if (*(char *)(param_1 + 0x80) == '\x01') {
    FUN_104be4c04();
  }
  return;
}



/* Entry: 104be4c04; end: 104be4c37;  */

/* WARNING: Possible PIC construction at 0x000104be4c18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104be4c24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104be4c1c) */
/* WARNING: Removing unreachable block (ram,0x000104be4c28) */

void FUN_104be4c04(long param_1)

{
  if (*(char *)(param_1 + 0x78) == '\x01') {
    func_0x000107c60ca0();
  }
  return;
}



/* Entry: 104be4c38; end: 104be4ccf;  */

void FUN_104be4c38(long param_1)

{
  long unaff_x19;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x000104be6634();
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000104be64e4();
    FUN_104bdfe3c(auStack_28,auStack_30);
    FUN_104be4cd0();
    __ZNSt13exception_ptrD1Ev(auStack_28);
    __ZNSt9exceptionD2Ev(auStack_30);
    __ZNSt9exceptionD2Ev(auStack_38);
  }
  FUN_104be4a18(unaff_x19 + 0x18);
  FUN_104be4a18((long *)(param_1 + 8));
  return;
}



/* Entry: 104be4cd0; end: 104be4d63;  */

void FUN_104be4cd0(void)

{
  long *unaff_x19;
  undefined8 uStack_30;
  
  func_0x000104be64d4();
  func_0x000104be64c4();
  func_0x000104be6600();
  func_0x000104be6484();
  func_0x000104be6350();
  __ZNSt3__15mutex4lockEv(uStack_30 + 0x50);
  __ZNSt13exception_ptraSERKS_(uStack_30 + 0x90);
  func_0x000104be6388();
  if (unaff_x19 == (long *)0x0) {
    func_0x000104be62f4();
  }
  else {
    func_0x000104be6298(*(undefined8 *)(*unaff_x19 + 0x10));
    func_0x000104be5f10();
  }
  func_0x000104be649c();
  return;
}



/* Entry: 104be4d64; end: 104be4db3;  */

void FUN_104be4d64(void)

{
  func_0x000100292090();
  func_0x000104be4d88();
  return;
}



/* Entry: 104be4db4; end: 104be4ddb;  */

void FUN_104be4db4(void)

{
  func_0x000104be61c0();
  func_0x000104be65d8();
  func_0x000104be6030();
  func_0x000104be6514();
  return;
}



/* Entry: 104be4ddc; end: 104be4e47;  */

void FUN_104be4ddc(void)

{
  func_0x000104be608c();
  FUN_104be4f5c();
  return;
}



/* Entry: 104be4e48; end: 104be4f5b;  */

void FUN_104be4e48(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  char cStack_38;
  
  func_0x000100658080();
  if (param_3 != 0) {
    do {
      func_0x000104be5e40();
    } while (extraout_w10 != 0);
    do {
      func_0x000104be5e40();
    } while (extraout_w10_00 != 0);
  }
  uStack_80 = param_2;
  lStack_78 = param_3;
  FUN_104be5034(&uStack_50,&uStack_80);
  if (cStack_38 == '\x01') {
    uStack_68 = uStack_48;
    uStack_70 = uStack_50;
    uStack_60 = uStack_40;
    puVar1 = &uStack_50;
  }
  else {
    puVar1 = &uStack_70;
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  FUN_104be51d4(&uStack_50);
  FUN_104be47f0();
  FUN_104be4d64(&uStack_70);
  func_0x000104be64ac();
  func_0x000104be63c0();
  return;
}



/* Entry: 104be4f5c; end: 104be4f7f;  */

void FUN_104be4f5c(long param_1)

{
  func_0x00010054ffe4();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 104be4f80; end: 104be4f83;  */

void FUN_104be4f80(long param_1)

{
  long unaff_x19;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x000104be6634();
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000104be64e4();
    FUN_104bdfe3c(auStack_28,auStack_30);
    FUN_104be4cd0();
    __ZNSt13exception_ptrD1Ev(auStack_28);
    __ZNSt9exceptionD2Ev(auStack_30);
    __ZNSt9exceptionD2Ev(auStack_38);
  }
  FUN_104be4a18(unaff_x19 + 0x18);
  FUN_104be4a18((long *)(param_1 + 8));
  return;
}



/* Entry: 104be4f84; end: 104be4f97;  */

void FUN_104be4f84(void)

{
  FUN_104be4c38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104be4f98; end: 104be4fcf;  */

undefined8 * FUN_104be4f98(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_1107e7a38;
  lVar1 = param_1[2];
  param_1[2] = 0;
  if (lVar1 != 0) {
    func_0x000104be62e8();
  }
  return param_1;
}



/* Entry: 104be4fd0; end: 104be4fe3;  */

void FUN_104be4fd0(void)

{
  FUN_104be4f98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104be4fe4; end: 104be5033;  */

void FUN_104be4fe4(long param_1,long param_2)

{
  int extraout_w10;
  
  if (*(long *)(param_2 + 8) != 0) {
    do {
      func_0x000104be5e40();
    } while (extraout_w10 != 0);
  }
  FUN_104be4e48(param_1 + 8);
  func_0x000104be63b8();
  return;
}



/* Entry: 104be5034; end: 104be514b;  */

void FUN_104be5034(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 auStack_68 [8];
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined1 uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_30 = 0;
  lStack_28 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_104be4db4(&lStack_40,param_2,&uStack_50);
  FUN_104be4ddc(&lStack_30,&lStack_40);
  FUN_104be4f5c(&lStack_40);
  func_0x000104be64ac();
  lStack_40 = lStack_30 + 0x58;
  uStack_38 = 1;
  __ZNSt3__15mutex4lockEv();
  lStack_60 = lStack_30;
  lStack_58 = lStack_28;
  if (lStack_28 != 0) {
    plVar1 = (long *)(lStack_28 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_104be514c(lStack_30 + 0x28,&lStack_40,&lStack_60);
  func_0x000104be63c0();
  if (*(long *)(lStack_30 + 0x98) == 0) {
    FUN_104be5190(param_1);
    func_0x0001000df5a0(&lStack_40);
    FUN_104be4f5c(&lStack_30);
    return;
  }
  __ZNSt13exception_ptrC1ERKS_(auStack_68,(long *)(lStack_30 + 0x98));
  __ZSt17rethrow_exceptionSt13exception_ptr(auStack_68);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x104be5110);
  (*pcVar4)();
}



/* Entry: 104be514c; end: 104be5187;  */

void FUN_104be514c(undefined8 param_1)

{
  ulong uVar1;
  ulong unaff_x19;
  
  func_0x000104be62c0();
  while (uVar1 = unaff_x19, FUN_104be5188(), (uVar1 & 1) == 0) {
    __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(param_1);
  }
  return;
}



/* Entry: 104be5188; end: 104be518f;  */

bool FUN_104be5188(long *param_1)

{
  bool bVar1;
  
  if ((*(byte *)(*param_1 + 0x20) & 1) == 0) {
    bVar1 = *(long *)(*param_1 + 0x98) != 0;
    func_0x000104be6324();
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 104be5190; end: 104be51cf;  */

void FUN_104be5190(undefined8 param_1,undefined4 *param_2)

{
  undefined4 *unaff_x19;
  
  func_0x00010028af74();
  if (*(char *)(param_2 + 6) == '\x01') {
    FUN_104be51d0();
  }
  else {
    *unaff_x19 = *param_2;
    *(undefined1 *)(unaff_x19 + 6) = 0;
  }
  return;
}



/* Entry: 104be51d0; end: 104be51d3;  */

void FUN_104be51d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 104be51d4; end: 104be51f3;  */

void FUN_104be51d4(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_104be4d64();
  }
  return;
}



/* Entry: 104be51f4; end: 104be5217;  */

void FUN_104be51f4(long param_1)

{
  func_0x00010054ffe4();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 104be5218; end: 104be5377;  */

void FUN_104be5218(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  long *plVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [32];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  func_0x0001002921c4();
  FUN_104be53c8(auStack_88);
  puStack_40 = (undefined8 *)0x0;
  uStack_38 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  FUN_104be5630(auStack_50,auStack_80,&uStack_60);
  FUN_104be5658(&puStack_40,auStack_50);
  FUN_104be55fc(auStack_50);
  FUN_104be55fc(&uStack_60);
  puVar1 = puStack_40;
  __ZNSt3__15mutex4lockEv(puStack_40 + 10);
  puVar2 = puStack_40;
  if (*(char *)(puStack_40 + 3) == '\x01') {
    FUN_104be5680(puStack_40);
    uVar4 = *unaff_x20;
    puVar2[1] = unaff_x20[1];
    *puVar2 = uVar4;
    puVar2[2] = unaff_x20[2];
    *unaff_x20 = 0;
    unaff_x20[1] = 0;
    unaff_x20[2] = 0;
  }
  else {
    FUN_104be567c(puStack_40);
  }
  plVar3 = (long *)puStack_40[0x13];
  puStack_40[0x13] = 0;
  __ZNSt3__15mutex6unlockEv(puVar1 + 10);
  if (plVar3 == (long *)0x0) {
    __ZNSt3__118condition_variable10notify_allEv(puStack_40 + 4);
  }
  else {
    (**(code **)(*plVar3 + 0x10))(plVar3,&puStack_40);
    func_0x000104be5ff0();
  }
  FUN_104be55fc(&puStack_40);
  FUN_104be5378(auStack_88);
  FUN_104be5724(auStack_88);
  return;
}



/* Entry: 104be5378; end: 104be53c3;  */

void FUN_104be5378(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  lVar3 = *(long *)(param_2 + 0x20);
  if (lVar3 != 0) {
    plVar1 = (long *)(lVar3 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *param_1 = uVar2;
  param_1[1] = lVar3;
  func_0x000104be6474();
  return;
}



/* Entry: 104be53c4; end: 104be53c7;  */

void FUN_104be53c4(long param_1)

{
  long unaff_x19;
  undefined1 auStack_28 [8];
  
  func_0x000104be6574();
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000104be64e4();
    func_0x000104be6568();
    FUN_104be577c();
    __ZNSt9exceptionD2Ev(auStack_28);
  }
  FUN_104be55fc(unaff_x19 + 0x18);
  FUN_104be55fc((long *)(param_1 + 8));
  return;
}



/* Entry: 104be53c8; end: 104be5407;  */

void FUN_104be53c8(long param_1)

{
  int extraout_w10;
  long unaff_x19;
  
  func_0x000104be6574();
  FUN_104be5408(param_1 + 8);
  *(undefined8 *)(unaff_x19 + 0x20) = *(undefined8 *)(unaff_x19 + 0x10);
  *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(unaff_x19 + 8);
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    do {
      func_0x000104be5e40();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 104be5408; end: 104be5437;  */

void FUN_104be5408(void)

{
  undefined1 uStack_11;
  
  FUN_104be5438(&uStack_11);
  return;
}



/* Entry: 104be5438; end: 104be54e3;  */

undefined1 * FUN_104be5438(long *param_1)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 extraout_x8;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  puVar2 = auStack_40;
  func_0x000104be5f50();
  uVar4 = 1;
  uStack_28 = extraout_x8;
  FUN_104be54e4(auStack_40);
  puVar1 = puStack_30;
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  *puStack_30 = &PTR_FUN_1107e7ab8;
  puStack_30[4] = 0;
  puStack_30[3] = 0;
  puStack_30[6] = 0;
  puStack_30[5] = 0;
  puStack_30[7] = 0x3cb0b1bb;
  puStack_30[9] = 0;
  puStack_30[8] = 0;
  puStack_30[0xb] = 0;
  puStack_30[10] = 0;
  puStack_30[0xc] = 0;
  puStack_30[0xd] = 0x32aaaba7;
  puStack_30[0xf] = 0;
  puStack_30[0xe] = 0;
  puStack_30[0x11] = 0;
  puStack_30[0x10] = 0;
  puStack_30[0x13] = 0;
  puStack_30[0x12] = 0;
  puStack_30[0x15] = 0;
  puStack_30[0x14] = 0;
  puStack_30[0x16] = 0;
  puStack_30 = (undefined8 *)0x0;
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = (long)puVar1;
  FUN_104be5620();
  func_0x000104be5e2c(uStack_28);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *(undefined8 *)(puVar2 + 8) = uVar4;
  puVar3 = puVar2;
  FUN_104be550c();
  *(undefined1 **)(puVar2 + 0x10) = puVar3;
  return puVar2;
}



/* Entry: 104be54e4; end: 104be550b;  */

long FUN_104be54e4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_104be550c();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 104be550c; end: 104be553b;  */

void FUN_104be550c(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x1642c8590b21643) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0xb8);
    return;
  }
  FUN_104bd35f4();
  *param_1 = &PTR_FUN_1107e7ab8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104be553c; end: 104be553f;  */

void FUN_104be553c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e7ab8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104be5540; end: 104be5553;  */

void FUN_104be5540(void)

{
  func_0x000104be5560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104be5554; end: 104be556f;  */

void FUN_104be5554(long param_1)

{
  func_0x000104be55b0(param_1 + 0xb0);
  __ZNSt13exception_ptrD1Ev(param_1 + 0xa8);
  __ZNSt3__15mutexD1Ev(param_1 + 0x68);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x38);
  if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_104be58b8();
  }
  return;
}



/* Entry: 104be5570; end: 104be55db;  */

void FUN_104be5570(long param_1)

{
  func_0x000104be55b0(param_1 + 0x98);
  __ZNSt13exception_ptrD1Ev(param_1 + 0x90);
  __ZNSt3__15mutexD1Ev(param_1 + 0x50);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x20);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_104be58b8();
  }
  return;
}



/* Entry: 104be55dc; end: 104be55fb;  */

void FUN_104be55dc(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_104be58b8();
  }
  return;
}



/* Entry: 104be55fc; end: 104be561f;  */

void FUN_104be55fc(long param_1)

{
  func_0x00010054ffe4();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 104be5620; end: 104be562f;  */

void FUN_104be5620(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 104be5630; end: 104be5657;  */

void FUN_104be5630(void)

{
  func_0x000104be61c0();
  func_0x000104be65d8();
  func_0x000104be6030();
  func_0x000104be6514();
  return;
}



/* Entry: 104be5658; end: 104be567b;  */

void FUN_104be5658(void)

{
  func_0x000104be608c();
  FUN_104be55fc();
  return;
}



/* Entry: 104be567c; end: 104be567f;  */

void FUN_104be567c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 104be5680; end: 104be56b7;  */

void FUN_104be5680(long *param_1)

{
  if (*param_1 != 0) {
    FUN_104be56b8();
    __ZdlPv(*param_1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 104be56b8; end: 104be56bf;  */

void FUN_104be56b8(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x00010065adc4(param_1,*param_1);
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x15;
    func_0x000104be56f0();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 104be56c0; end: 104be5723;  */

void FUN_104be56c0(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010065adc4();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0xa8;
    func_0x000104be56f0();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 104be5724; end: 104be577b;  */

void FUN_104be5724(long param_1)

{
  long unaff_x19;
  undefined1 auStack_28 [8];
  
  func_0x000104be6574();
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000104be64e4();
    func_0x000104be6568();
    FUN_104be577c();
    __ZNSt9exceptionD2Ev(auStack_28);
  }
  FUN_104be55fc(unaff_x19 + 0x18);
  FUN_104be55fc((long *)(param_1 + 8));
  return;
}



/* Entry: 104be577c; end: 104be57d3;  */

void FUN_104be577c(void)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x000104be64e4();
  FUN_104bdfe3c(auStack_28,auStack_30);
  func_0x000104be6568();
  FUN_104be57d4();
  func_0x000104be6324();
  __ZNSt9exceptionD2Ev(auStack_30);
  return;
}



/* Entry: 104be57d4; end: 104be57f3;  */

void FUN_104be57d4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_104be57f4(param_1,&uStack_18);
  return;
}



/* Entry: 104be57f4; end: 104be58a3;  */

void FUN_104be57f4(long param_1)

{
  long *unaff_x19;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  long alStack_30 [2];
  
  func_0x000104be64d4();
  FUN_104be5630(auStack_40,param_1 + 8,auStack_50);
  FUN_104be5658(alStack_30,auStack_40);
  FUN_104be55fc(auStack_40);
  func_0x000104be6474();
  __ZNSt3__15mutex4lockEv(alStack_30[0] + 0x50);
  FUN_104be58a4();
  func_0x000104be6388();
  if (unaff_x19 == (long *)0x0) {
    func_0x000104be62f4();
  }
  else {
    func_0x000104be6298(*(undefined8 *)(*unaff_x19 + 0x10));
    func_0x000104be5f10();
  }
  FUN_104be55fc(alStack_30);
  return;
}



/* Entry: 104be58a4; end: 104be58b7;  */

void FUN_104be58a4(undefined8 *param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13exception_ptraSERKS__1103461a0)(*param_2 + 0x90,*param_1);
  return;
}



/* Entry: 104be58b8; end: 104be5907;  */

void FUN_104be58b8(void)

{
  func_0x000100292090();
  func_0x000104be58dc();
  return;
}



/* Entry: 104be5908; end: 104be5913;  */

void FUN_104be5908(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e7b08;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104be5914; end: 104be5927;  */

void FUN_104be5914(void)

{
  FUN_104be5908();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104be5928; end: 104be592f;  */

void FUN_104be5928(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104be5e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 104be5930; end: 104be5957;  */

undefined8 FUN_104be5930(undefined8 param_1)

{
  func_0x000104be62b8(&PTR_FUN_1107e7b58);
  return param_1;
}



/* Entry: 104be5958; end: 104be596b;  */

void FUN_104be5958(void)

{
  FUN_104be5930();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104be596c; end: 104be59c7;  */

void FUN_104be596c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_40;
  
  func_0x000104be6210();
  if (uStack_40 != (long *)0x0) {
    (**(code **)(*uStack_40 + 0x10))(uStack_40,param_2,param_3,param_4);
  }
  func_0x000104be6288();
  return;
}



/* Entry: 104be59c8; end: 104be5a0b;  */

void FUN_104be59c8(void)

{
  undefined8 uStack_30;
  
  func_0x000104be6210();
  if (uStack_30 != 0) {
    func_0x000104be6160();
    func_0x000104be65ec();
  }
  func_0x000104be6288();
  return;
}



/* Entry: 104be5a0c; end: 104be5a4f;  */

void FUN_104be5a0c(void)

{
  undefined8 uStack_30;
  
  func_0x000104be6210();
  if (uStack_30 != 0) {
    func_0x000104be6428();
    func_0x000104be65ec();
  }
  func_0x000104be6288();
  return;
}



/* Entry: 104be5a50; end: 104be5a97;  */

void FUN_104be5a50(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  
  func_0x000104be6210();
  if (uStack_30 != (long *)0x0) {
    (**(code **)(*uStack_30 + 0x28))(uStack_30,param_2);
  }
  func_0x000104be6288();
  return;
}



/* Entry: 104be5a98; end: 104be5adf;  */

void FUN_104be5a98(undefined8 *param_1,long param_2)

{
  long lStack_30;
  
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    func_0x000104be62dc();
    if (lStack_30 != 0) {
      func_0x000104be62cc();
    }
    *param_1 = 0;
    param_1[1] = 0;
    func_0x000104be6288();
  }
  return;
}



/* Entry: 104be5ae0; end: 104be5aeb;  */

void FUN_104be5ae0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e7bc0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104be5aec; end: 104be5aff;  */

void FUN_104be5aec(void)

{
  FUN_104be5ae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104be5b00; end: 104be5b07;  */

void FUN_104be5b00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104be5e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 104be5b08; end: 104be5b2f;  */

undefined8 FUN_104be5b08(undefined8 param_1)

{
  func_0x000104be62b8(&PTR_FUN_1107e7c10);
  return param_1;
}



/* Entry: 104be5b30; end: 104be5b43;  */

void FUN_104be5b30(void)

{
  FUN_104be5b08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104be5b44; end: 104be5c8b;  */

void FUN_104be5b44(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long extraout_x8;
  int extraout_w9;
  int extraout_w10;
  long *plVar3;
  undefined8 in_register_00005008;
  long *in_stack_00000010;
  undefined8 *in_stack_00000018;
  long *in_stack_00000020;
  undefined8 *in_stack_00000028;
  
  func_0x000104be6648();
  if (*(long **)(param_2 + 8) == (long *)0x0) {
    in_stack_00000010 = (long *)0x0;
    in_stack_00000018 = (undefined8 *)0x0;
    puVar1 = (undefined8 *)0x0;
  }
  else {
    (**(code **)(**(long **)(param_2 + 8) + 0x80))(&stack0x00000020);
    if (in_stack_00000020 == (long *)0x0) {
      puVar1 = &stack0x00000010;
    }
    else {
      in_stack_00000010 = in_stack_00000020;
      in_stack_00000018 = in_stack_00000028;
      puVar1 = &stack0x00000020;
    }
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = &stack0x00000020;
    func_0x000100573504();
  }
  func_0x000104be617c();
  puVar1[1] = 0;
  puVar1[2] = 0;
  func_0x000104be6534(&PTR_FUN_1107e7c60);
  if (extraout_x8 != 0) {
    do {
      func_0x000104be5e40();
    } while (extraout_w10 != 0);
  }
  plVar3 = puVar1 + 3;
  *plVar3 = (long)&PTR_FUN_1107e7cb0;
  puVar1[5] = in_register_00005008;
  puVar1[4] = param_1;
  func_0x000104be621c();
  FUN_104be5d60();
  plVar2 = in_stack_00000010;
  if (in_stack_00000010 == (long *)0x0) {
    FUN_104be5d3c(plVar3,0);
  }
  else {
    do {
      in_stack_00000028 = puVar1;
      in_stack_00000020 = plVar3;
      func_0x000104be6504();
      plVar3 = in_stack_00000020;
      puVar1 = in_stack_00000028;
    } while (extraout_w9 != 0);
    (**(code **)(*plVar2 + 0x10))();
    FUN_104be5d60(&stack0x00000020);
  }
  FUN_104be5c8c();
  func_0x000100573504(&stack0x00000010);
  return;
}



/* Entry: 104be5c8c; end: 104be5caf;  */

void FUN_104be5c8c(long param_1)

{
  func_0x00010054ffe4();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 104be5cb0; end: 104be5cbb;  */

void FUN_104be5cb0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e7c60;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104be5cbc; end: 104be5ccf;  */

void FUN_104be5cbc(void)

{
  FUN_104be5cb0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104be5cd0; end: 104be5cd7;  */

void FUN_104be5cd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104be5e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 104be5cd8; end: 104be5d03;  */

undefined8 * FUN_104be5cd8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e7cb0;
  FUN_104be5d60(param_1 + 1);
  return param_1;
}



/* Entry: 104be5d04; end: 104be5d17;  */

void FUN_104be5d04(void)

{
  FUN_104be5cd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104be5d18; end: 104be5d3b;  */

void FUN_104be5d18(void)

{
  code *extraout_x8;
  
  func_0x000104be5e88();
  (*extraout_x8)();
  return;
}



/* Entry: 104be5d3c; end: 104be5d5f;  */

void FUN_104be5d3c(void)

{
  code *extraout_x8;
  
  func_0x000104be5e98();
  (*extraout_x8)();
  return;
}



/* Entry: 104be5d60; end: 104be5da7;  */

void FUN_104be5d60(long param_1)

{
  func_0x00010054ffe4();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 104be5da8; end: 104be665b;  */

void FUN_104be5da8(undefined8 param_1)

{
  long unaff_x21;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  
  *(undefined8 *)(unaff_x21 + 0x18) = param_1;
  *(undefined8 *)(unaff_x21 + 0x20) = unaff_x24;
  *(undefined8 *)(unaff_x21 + 0x28) = unaff_x25;
  uStack0000000000000040 = 0;
  uStack0000000000000048 = 0;
  *(undefined8 *)(unaff_x21 + 0x38) = in_stack_00000030;
  *(undefined8 *)(unaff_x21 + 0x30) = in_stack_00000028;
  *(undefined8 *)(unaff_x21 + 0x40) = in_stack_00000038;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00000028);
  return;
}


