/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b178ce8; end: 10b178d0f;  */

long FUN_10b178ce8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10b178d10();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10b178d10; end: 10b178d3b;  */

void FUN_10b178d10(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x51eb851eb851ec) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 800);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_110cc0d98;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b178d3c; end: 10b178d3f;  */

void FUN_10b178d3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc0d98;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b178d40; end: 10b178d53;  */

void FUN_10b178d40(void)

{
  func_0x00010b178d60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b178d54; end: 10b178d6f;  */

void FUN_10b178d54(long param_1)

{
  func_0x00010b178db0(param_1 + 0x318);
  __ZNSt13exception_ptrD1Ev(param_1 + 0x310);
  __ZNSt3__15mutexD1Ev(param_1 + 0x2d0);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x2a0);
  if (*(char *)(param_1 + 0x298) == '\x01') {
    func_0x00010b14917c();
  }
  return;
}



/* Entry: 10b178d70; end: 10b178ddb;  */

void FUN_10b178d70(long param_1)

{
  func_0x00010b178db0(param_1 + 0x300);
  __ZNSt13exception_ptrD1Ev(param_1 + 0x2f8);
  __ZNSt3__15mutexD1Ev(param_1 + 0x2b8);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x288);
  if (*(char *)(param_1 + 0x280) == '\x01') {
    func_0x00010b14917c();
  }
  return;
}



/* Entry: 10b178ddc; end: 10b178dfb;  */

void FUN_10b178ddc(long param_1)

{
  if (*(char *)(param_1 + 0x280) == '\x01') {
    func_0x00010b14917c();
  }
  return;
}



/* Entry: 10b178dfc; end: 10b178e0b;  */

void FUN_10b178dfc(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b178e0c; end: 10b178e77;  */

void FUN_10b178e0c(long param_1)

{
  long unaff_x19;
  undefined **ppuStack_28;
  
  func_0x00010b179f40();
  if (*(long *)(param_1 + 8) != 0) {
    ppuStack_28 = &PTR_DAT_1107e6938;
    FUN_10b178e78();
    __ZNSt9exceptionD2Ev(&ppuStack_28);
  }
  func_0x00010b148c7c(unaff_x19 + 0x18);
  func_0x00010b148c7c((long *)(param_1 + 8));
  return;
}



/* Entry: 10b178e78; end: 10b178ee7;  */

void FUN_10b178e78(undefined8 param_1)

{
  undefined **ppuStack_30;
  undefined1 auStack_28 [8];
  
  ppuStack_30 = &PTR_DAT_1107e6938;
  func_0x000104bdfe3c(auStack_28,&ppuStack_30);
  FUN_10b178ee8(param_1,auStack_28);
  __ZNSt13exception_ptrD1Ev(auStack_28);
  __ZNSt9exceptionD2Ev(&ppuStack_30);
  return;
}



/* Entry: 10b178ee8; end: 10b178f07;  */

void FUN_10b178ee8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_10b178f08(param_1,&uStack_18);
  return;
}



/* Entry: 10b178f08; end: 10b178fa3;  */

void FUN_10b178f08(undefined8 param_1,long *param_2)

{
  undefined1 auStack_40 [16];
  long alStack_30 [2];
  
  alStack_30[0] = 0;
  alStack_30[1] = 0;
  func_0x00010b179ef0();
  func_0x00010b179f84();
  func_0x00010b148c7c(auStack_40);
  func_0x00010b179e98();
  __ZNSt3__15mutex4lockEv(alStack_30[0] + 0x2b8);
  FUN_10b178fa4(param_2,alStack_30);
  func_0x00010b179ea8();
  if (param_2 == (long *)0x0) {
    func_0x00010b179f98();
  }
  else {
    func_0x00010b179fa4(*(undefined8 *)(*param_2 + 0x10));
    func_0x00010b179e50();
  }
  func_0x00010b179f08();
  return;
}



/* Entry: 10b178fa4; end: 10b178fb7;  */

void FUN_10b178fa4(undefined8 *param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13exception_ptraSERKS__1103461a0)(*param_2 + 0x2f8,*param_1);
  return;
}



/* Entry: 10b178fb8; end: 10b178fe3;  */

undefined8 * FUN_10b178fb8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc0de8;
  FUN_10b178b70(param_1 + 1);
  return param_1;
}



/* Entry: 10b178fe4; end: 10b178ff7;  */

void FUN_10b178fe4(void)

{
  FUN_10b178fb8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b178ff8; end: 10b17904f;  */

void FUN_10b178ff8(long param_1,undefined8 *param_2)

{
  int extraout_w10;
  undefined8 uStack_30;
  long lStack_28;
  
  uStack_30 = *param_2;
  lStack_28 = param_2[1];
  if (lStack_28 != 0) {
    do {
      func_0x00010b179e80();
    } while (extraout_w10 != 0);
  }
  FUN_10b1789b4(param_1 + 8);
  func_0x0001052a55c0(&uStack_30);
  return;
}



/* Entry: 10b179050; end: 10b17906f;  */

void FUN_10b179050(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_10b179070(param_1,&uStack_18);
  return;
}



/* Entry: 10b179070; end: 10b17911f;  */

void FUN_10b179070(undefined8 param_1,long *param_2)

{
  undefined1 auStack_40 [16];
  long alStack_30 [2];
  
  alStack_30[0] = 0;
  alStack_30[1] = 0;
  func_0x00010b179ef0();
  func_0x00010b179f84();
  func_0x00010b148c7c(auStack_40);
  func_0x00010b179e98();
  __ZNSt3__15mutex4lockEv(alStack_30[0] + 0x2b8);
  FUN_10b179120(param_2,alStack_30);
  func_0x00010b179ea8();
  if (param_2 == (long *)0x0) {
    func_0x00010b179f98();
  }
  else {
    func_0x00010b179fa4(*(undefined8 *)(*param_2 + 0x10));
    func_0x00010b179e50();
  }
  func_0x00010b179f08();
  return;
}



/* Entry: 10b179120; end: 10b17912f;  */

long FUN_10b179120(undefined8 *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (*(char *)(lVar1 + 0x280) == '\x01') {
    FUN_10b179180();
  }
  else {
    FUN_10b179164(lVar1,*param_1);
  }
  return lVar1;
}



/* Entry: 10b179130; end: 10b179163;  */

long FUN_10b179130(long param_1)

{
  if (*(char *)(param_1 + 0x280) == '\x01') {
    FUN_10b179180();
  }
  else {
    FUN_10b179164();
  }
  return param_1;
}



/* Entry: 10b179164; end: 10b17917f;  */

void FUN_10b179164(long param_1)

{
  FUN_10b149108();
  *(undefined1 *)(param_1 + 0x280) = 1;
  return;
}



/* Entry: 10b179180; end: 10b17922b;  */

undefined8 * FUN_10b179180(undefined8 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  puVar2 = &uStack_60;
  if (((*(byte *)(param_1 + 0x4f) & 1) == 0) && ((*(byte *)(param_2 + 0x278) & 1) != 0)) {
    uStack_58 = param_1[1];
    uStack_60 = *param_1;
    uStack_50 = param_1[2];
    uStack_48 = param_1[3];
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    uStack_40 = uStack_40 & 0xffffffffffffff00;
    uStack_28 = *(char *)(param_1 + 7) == '\x01';
    if ((bool)uStack_28) {
      uStack_38 = param_1[5];
      uStack_40 = param_1[4];
      uStack_30 = param_1[6];
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[4] = 0;
    }
    func_0x0001052a03ac();
    FUN_10b17922c();
    func_0x0001052a03ac(&uStack_60);
    return puVar2;
  }
  if (*(char *)(param_1 + 0x4f) != '\x01') {
    if ((*(byte *)(param_2 + 0x278) & 1) != 0) {
      return param_1;
    }
    func_0x000100066230();
    param_1[3] = *(undefined8 *)(param_2 + 0x18);
    func_0x0001002a8208(param_1 + 4,param_2 + 0x20);
    return param_1;
  }
  if (*(byte *)(param_2 + 0x278) != 0) {
    func_0x00010b13448c(param_1,param_2);
    func_0x000107c27b9c();
    func_0x00010b1362b4();
    FUN_10b1215e4();
    uVar4 = *(undefined8 *)(unaff_x19 + 0x81);
    uVar3 = *(undefined8 *)(unaff_x19 + 0x79);
    uVar7 = *(undefined8 *)(unaff_x19 + 0x60);
    uVar6 = *(undefined8 *)(unaff_x19 + 0x78);
    uVar5 = *(undefined8 *)(unaff_x19 + 0x70);
    unaff_x20[0xd] = *(undefined8 *)(unaff_x19 + 0x68);
    unaff_x20[0xc] = uVar7;
    unaff_x20[0xf] = uVar6;
    unaff_x20[0xe] = uVar5;
    *(undefined8 *)((long)unaff_x20 + 0x81) = uVar4;
    *(undefined8 *)((long)unaff_x20 + 0x79) = uVar3;
    FUN_10b121694(unaff_x20 + 0x12,unaff_x19 + 0x90);
    FUN_10b121704(unaff_x20 + 0x27,unaff_x19 + 0x138);
    FUN_10b121750(unaff_x20 + 0x30,unaff_x19 + 0x180);
    uVar1 = *(undefined1 *)(unaff_x19 + 0x1c2);
    *(undefined2 *)(unaff_x20 + 0x38) = *(undefined2 *)(unaff_x19 + 0x1c0);
    *(undefined1 *)((long)unaff_x20 + 0x1c2) = uVar1;
    FUN_10b12157c(unaff_x20 + 0x39,unaff_x19 + 0x1c8);
    func_0x00010b1215a0(unaff_x20 + 0x3b,unaff_x19 + 0x1d8);
    return unaff_x20;
  }
  func_0x00010b121af0();
  func_0x0001052a0844();
  *(undefined1 *)(param_1 + 0x4f) = 0;
  return param_1;
}



/* Entry: 10b17922c; end: 10b17924b;  */

void FUN_10b17922c(long param_1)

{
  FUN_10b121c1c();
  *(undefined1 *)(param_1 + 0x278) = 1;
  return;
}



/* Entry: 10b17924c; end: 10b1792b3;  */

long FUN_10b17924c(long param_1,long param_2)

{
  undefined1 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(char *)(param_1 + 0x278) != '\x01') {
    if ((*(byte *)(param_2 + 0x278) & 1) != 0) {
      return param_1;
    }
    func_0x000100066230();
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    func_0x0001002a8208(param_1 + 0x20,param_2 + 0x20);
    return param_1;
  }
  if (*(byte *)(param_2 + 0x278) != 0) {
    func_0x00010b13448c(param_1,param_2);
    func_0x000107c27b9c();
    func_0x00010b1362b4();
    FUN_10b1215e4();
    uVar3 = *(undefined8 *)(unaff_x19 + 0x81);
    uVar2 = *(undefined8 *)(unaff_x19 + 0x79);
    uVar6 = *(undefined8 *)(unaff_x19 + 0x60);
    uVar5 = *(undefined8 *)(unaff_x19 + 0x78);
    uVar4 = *(undefined8 *)(unaff_x19 + 0x70);
    *(undefined8 *)(unaff_x20 + 0x68) = *(undefined8 *)(unaff_x19 + 0x68);
    *(undefined8 *)(unaff_x20 + 0x60) = uVar6;
    *(undefined8 *)(unaff_x20 + 0x78) = uVar5;
    *(undefined8 *)(unaff_x20 + 0x70) = uVar4;
    *(undefined8 *)(unaff_x20 + 0x81) = uVar3;
    *(undefined8 *)(unaff_x20 + 0x79) = uVar2;
    FUN_10b121694(unaff_x20 + 0x90,unaff_x19 + 0x90);
    FUN_10b121704(unaff_x20 + 0x138,unaff_x19 + 0x138);
    FUN_10b121750(unaff_x20 + 0x180,unaff_x19 + 0x180);
    uVar1 = *(undefined1 *)(unaff_x19 + 0x1c2);
    *(undefined2 *)(unaff_x20 + 0x1c0) = *(undefined2 *)(unaff_x19 + 0x1c0);
    *(undefined1 *)(unaff_x20 + 0x1c2) = uVar1;
    FUN_10b12157c(unaff_x20 + 0x1c8,unaff_x19 + 0x1c8);
    func_0x00010b1215a0(unaff_x20 + 0x1d8,unaff_x19 + 0x1d8);
    return unaff_x20;
  }
  func_0x00010b121af0();
  func_0x0001052a0844();
  *(undefined1 *)(param_1 + 0x278) = 0;
  return param_1;
}



/* Entry: 10b1792b4; end: 10b1792cb;  */

void FUN_10b1792b4(void)

{
  FUN_10b1792cc();
  return;
}



/* Entry: 10b1792cc; end: 10b1792ff;  */

void FUN_10b1792cc(long param_1)

{
  func_0x0001052a0844();
  *(undefined1 *)(param_1 + 0x278) = 0;
  return;
}



/* Entry: 10b179300; end: 10b179353;  */

long * FUN_10b179300(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    func_0x00010b179e44();
  }
  return param_1;
}



/* Entry: 10b179354; end: 10b1793e7;  */

void FUN_10b179354(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar4;
  int extraout_w11;
  int extraout_w11_00;
  undefined1 *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 auStack_50 [16];
  long lStack_40;
  undefined8 uStack_38;
  
  puVar1 = auStack_50;
  func_0x00010b179e60();
  FUN_10b179404(auStack_50,1);
  FUN_10b179458(lStack_40,param_2,param_3,param_4);
  lVar2 = lStack_40;
  lStack_40 = 0;
  FUN_10b1793e8(lVar2 + 0x18);
  FUN_10b1798fc();
  func_0x00010b179e20(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b179ebc();
  FUN_10b1798fc();
  func_0x00010b179e3c();
  *extraout_x8 = puVar1;
  extraout_x8[1] = lVar2;
  puVar3 = (undefined8 *)0x0;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = (undefined8 *)(puVar1 + 8);
  }
  if ((puVar3 != (undefined8 *)0x0) && ((puVar3[1] == 0 || (*(long *)(puVar3[1] + 8) == -1)))) {
    pcStack_58 = FUN_10b1793e8;
    lStack_78 = extraout_x8[1];
    uVar4 = 0;
    puStack_80 = puVar1;
    puStack_60 = &stack0xfffffffffffffff0;
    if (lStack_78 != 0) {
      do {
        func_0x00010b179f30();
      } while (extraout_w11 != 0);
      do {
        func_0x00010b179f30();
        uVar4 = extraout_x8_00;
      } while (extraout_w11_00 != 0);
    }
    uStack_68 = puVar3[1];
    uStack_70 = *puVar3;
    *puVar3 = puVar1;
    puVar3[1] = uVar4;
    func_0x00010b179858(&uStack_70);
    func_0x00010b17932c(&puStack_80);
    return;
  }
  return;
}



/* Entry: 10b1793e8; end: 10b179403;  */

void FUN_10b1793e8(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long extraout_x8;
  long lVar2;
  int extraout_w11;
  int extraout_w11_00;
  long lStack_30;
  long lStack_28;
  long lStack_20;
  long lStack_18;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  plVar1 = (long *)0x0;
  if (param_2 != 0) {
    plVar1 = (long *)(param_2 + 8);
  }
  if ((plVar1 != (long *)0x0) && ((plVar1[1] == 0 || (*(long *)(plVar1[1] + 8) == -1)))) {
    lStack_28 = param_1[1];
    lVar2 = 0;
    lStack_30 = param_2;
    if (lStack_28 != 0) {
      do {
        func_0x00010b179f30();
      } while (extraout_w11 != 0);
      do {
        func_0x00010b179f30();
        lVar2 = extraout_x8;
      } while (extraout_w11_00 != 0);
    }
    lStack_18 = plVar1[1];
    lStack_20 = *plVar1;
    *plVar1 = param_2;
    plVar1[1] = lVar2;
    func_0x00010b179858(&lStack_20);
    func_0x00010b17932c(&lStack_30);
    return;
  }
  return;
}



/* Entry: 10b179404; end: 10b17942b;  */

long FUN_10b179404(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10b17942c();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10b17942c; end: 10b179457;  */

undefined8 * FUN_10b17942c(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x1745d1745d1745e) {
    puVar1 = (undefined8 *)(param_2 * 0xb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110cc0e28;
  func_0x00010b1794a8(param_1 + 3);
  return param_1;
}



/* Entry: 10b179458; end: 10b179487;  */

undefined8 * FUN_10b179458(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110cc0e28;
  func_0x00010b1794a8(param_1 + 3);
  return param_1;
}



/* Entry: 10b179488; end: 10b17948b;  */

void FUN_10b179488(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc0e28;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b17948c; end: 10b17949f;  */

void FUN_10b17948c(void)

{
  FUN_10b179880();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1794a0; end: 10b179537;  */

void FUN_10b1794a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b179f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b179538; end: 10b17954b;  */

void FUN_10b179538(void)

{
  FUN_10b17980c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b17954c; end: 10b179693;  */

void FUN_10b17954c(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lStack_48;
  long lStack_40;
  
  lVar3 = param_2[1] - *param_2;
  if (0 < lVar3) {
    plVar1 = (long *)param_2[2];
    if ((plVar1 == (long *)0x0) ||
       (plVar2 = param_2, (**(code **)(*plVar1 + 0x10))(), plVar1 == (long *)0x0)) {
      func_0x000107c278b8(&lStack_48,&UNK_10f730bdd);
      (**(code **)(*param_1 + 0x18))(param_1,3,&lStack_48,0);
      func_0x00010b179f20();
    }
    else {
      __ZNSt3__15mutex4lockEv(param_1 + 9);
      if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
        func_0x00010b11fabc(&lStack_48,param_1 + 3);
        if (lStack_48 == 0) {
          lStack_48 = 0;
        }
        else {
          FUN_10b19cdec();
          if (((ulong)plVar2 & 1) == 0) {
            lStack_48 = 0;
          }
        }
        func_0x00010b129c40(&lStack_48);
        (**(code **)(*(long *)param_1[5] + 0x10))((long *)param_1[5],&lStack_48);
        *(undefined1 *)(param_1 + 0x12) = 1;
      }
      lStack_48 = param_1[0x11];
      lStack_40 = lStack_48 + lVar3;
      (**(code **)(*(long *)param_1[5] + 0x18))((long *)param_1[5],&lStack_48,param_2);
      param_1[0x11] = param_1[0x11] + lVar3;
      func_0x00010b179ea0();
    }
  }
  return;
}



/* Entry: 10b179694; end: 10b1797bf;  */

void FUN_10b179694(undefined8 param_1,int param_2,undefined8 param_3)

{
  long unaff_x19;
  long *plVar1;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  char cStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010b179fb0();
  if ((*(byte *)(unaff_x19 + 0x91) & 1) == 0) {
    plVar1 = *(long **)(unaff_x19 + 0x28);
    uStack_40 = *(undefined8 *)(unaff_x19 + 0x88);
    uStack_38 = *(undefined8 *)(unaff_x19 + 0x40);
    func_0x000107c278b8(&uStack_98,&DAT_10f2e8288);
    func_0x000107c27f70(&uStack_b8,param_3);
    uStack_70 = uStack_88;
    lStack_68 = (long)param_2;
    uStack_78 = uStack_90;
    uStack_80 = uStack_98;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_98 = 0;
    uStack_60 = uStack_60 & 0xffffffffffffff00;
    uStack_48 = cStack_a0 == '\x01';
    if ((bool)uStack_48) {
      uStack_58 = uStack_b0;
      uStack_60 = uStack_b8;
      uStack_50 = uStack_a8;
      uStack_b0 = 0;
      uStack_a8 = 0;
      uStack_b8 = 0;
    }
    (**(code **)(*plVar1 + 0x28))(plVar1,&uStack_40,&uStack_80);
    func_0x0001052a03ac(&uStack_80);
    func_0x000107c279a4(&uStack_b8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_98);
    *(undefined1 *)(unaff_x19 + 0x91) = 1;
  }
  func_0x00010b179ea0();
  return;
}



/* Entry: 10b1797c0; end: 10b17980b;  */

void FUN_10b1797c0(void)

{
  long unaff_x19;
  
  func_0x00010b179fb0();
  if ((*(byte *)(unaff_x19 + 0x91) & 1) == 0) {
    (**(code **)(**(long **)(unaff_x19 + 0x28) + 0x20))();
    *(undefined1 *)(unaff_x19 + 0x91) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 0x48);
  return;
}



/* Entry: 10b17980c; end: 10b17987f;  */

undefined8 * FUN_10b17980c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cc0e78;
  __ZNSt3__15mutexD1Ev(param_1 + 9);
  func_0x0001052aacf8(param_1 + 5);
  func_0x00010b124c0c(param_1 + 3);
  func_0x00010b179858(param_1 + 1);
  return param_1;
}



/* Entry: 10b179880; end: 10b17988b;  */

void FUN_10b179880(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc0e28;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b17988c; end: 10b1798fb;  */

void FUN_10b17988c(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 extraout_x8;
  undefined8 uVar1;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 uStack_30;
  long lStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if ((param_2 != (undefined8 *)0x0) && ((param_2[1] == 0 || (*(long *)(param_2[1] + 8) == -1)))) {
    lStack_28 = *(long *)(param_1 + 8);
    uVar1 = 0;
    uStack_30 = param_3;
    if (lStack_28 != 0) {
      do {
        func_0x00010b179f30();
      } while (extraout_w11 != 0);
      do {
        func_0x00010b179f30();
        uVar1 = extraout_x8;
      } while (extraout_w11_00 != 0);
    }
    uStack_18 = param_2[1];
    uStack_20 = *param_2;
    *param_2 = param_3;
    param_2[1] = uVar1;
    func_0x00010b179858(&uStack_20);
    func_0x00010b17932c(&uStack_30);
    return;
  }
  return;
}



/* Entry: 10b1798fc; end: 10b17990b;  */

void FUN_10b1798fc(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b17990c; end: 10b17999f;  */

long FUN_10b17990c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  undefined1 auStack_60 [16];
  long lStack_50;
  undefined8 uStack_48;
  
  func_0x00010b179e60();
  FUN_10b1799a0(auStack_60,1);
  FUN_10b1799f4(lStack_50,param_2,param_3,param_4,param_5);
  func_0x00010b179f58();
  func_0x00010b179d00();
  func_0x00010b179e20(uStack_48);
  if ((bool)in_ZR) {
    return lStack_50;
  }
  ___stack_chk_fail();
  func_0x00010b179ebc();
  func_0x00010b179d00();
  lVar1 = lStack_50;
  func_0x00010b179e3c();
  *(undefined8 *)(lVar1 + 8) = param_2;
  lVar2 = lVar1;
  FUN_10b1799c8();
  *(long *)(lVar1 + 0x10) = lVar2;
  return lVar1;
}



/* Entry: 10b1799a0; end: 10b1799c7;  */

long FUN_10b1799a0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10b1799c8();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10b1799c8; end: 10b1799f3;  */

undefined8 * FUN_10b1799c8(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x2e8ba2e8ba2e8bb) {
    puVar1 = (undefined8 *)(param_2 * 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110cc0ef8;
  func_0x00010b179a54(param_1 + 3);
  return param_1;
}



/* Entry: 10b1799f4; end: 10b179a33;  */

undefined8 * FUN_10b1799f4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110cc0ef8;
  func_0x00010b179a54(param_1 + 3);
  return param_1;
}



/* Entry: 10b179a34; end: 10b179a37;  */

void FUN_10b179a34(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc0ef8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b179a38; end: 10b179a4b;  */

void FUN_10b179a38(void)

{
  func_0x00010b179cf4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b179a4c; end: 10b179adf;  */

void FUN_10b179a4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b179f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b179ae0; end: 10b179af3;  */

void FUN_10b179ae0(void)

{
  FUN_10b179c30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b179af4; end: 10b179c2f;  */

long * FUN_10b179af4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  long lVar4;
  long *plVar5;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_98 = 0;
  lStack_90 = 0;
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    lStack_90 = lVar4;
    if (lVar4 != 0) {
      lStack_98 = *(long *)(param_1 + 0x18);
    }
  }
  func_0x00010b11fabc(&pcStack_88,param_1 + 8);
  if (pcStack_88 != (code *)0x0) {
    FUN_10b1a1614(pcStack_88,*(undefined8 *)(param_1 + 0x28));
  }
  func_0x00010b129c40(&pcStack_88);
  if (lStack_98 != 0) {
    plVar5 = *(long **)(param_1 + 0x30);
    if (lStack_90 != 0) {
      plVar1 = (long *)(lStack_90 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    pcStack_88 = FUN_10b179c74;
    ppuStack_80 = &PTR_FUN_110cc0f78;
    lStack_78 = lStack_98;
    lStack_70 = lStack_90;
    uStack_a8 = 0;
    uStack_a0 = 0;
    (**(code **)(*plVar5 + 0x10))(plVar5,&pcStack_88);
    (*(code *)*ppuStack_80)(&ppuStack_80);
    func_0x00010b17932c(&uStack_a8);
  }
  plVar5 = &lStack_98;
  func_0x00010b17932c();
  FUN_10b179e20(uStack_28);
  if ((bool)in_ZR) {
    return plVar5;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_80)(&ppuStack_80);
  func_0x00010b17932c(&uStack_a8);
  plVar5 = &lStack_98;
  func_0x00010b17932c();
  func_0x00010b179e3c();
  *plVar5 = (long)&PTR_DAT_110cc0f48;
  func_0x000107c27c20(plVar5 + 6);
  func_0x00010b179858(plVar5 + 3);
  func_0x00010b124c0c(plVar5 + 1);
  return plVar5;
}



/* Entry: 10b179c30; end: 10b179c73;  */

undefined8 * FUN_10b179c30(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cc0f48;
  func_0x000107c27c20(param_1 + 6);
  func_0x00010b179858(param_1 + 3);
  func_0x00010b124c0c(param_1 + 1);
  return param_1;
}



/* Entry: 10b179c74; end: 10b179ccf;  */

void FUN_10b179c74(long param_1)

{
  long *plVar1;
  undefined1 auStack_38 [24];
  
  plVar1 = *(long **)(param_1 + 0x10);
  func_0x000107c278b8(auStack_38,&UNK_10f730bf7);
  (**(code **)(*plVar1 + 0x18))(plVar1,8,auStack_38,0);
  func_0x00010b179f20();
  return;
}



/* Entry: 10b179cd0; end: 10b179d0f;  */

long FUN_10b179cd0(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c278a0();
  }
  return param_1 + 8;
}



/* Entry: 10b179d10; end: 10b179d37;  */

long FUN_10b179d10(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b179d38; end: 10b179d93;  */

void FUN_10b179d38(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_70 [80];
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  FUN_10b202630(auStack_70,param_1 + 0x20);
  FUN_10b1f6940(uVar1,auStack_70,0,0);
  func_0x00010b121e00(auStack_70);
  return;
}



/* Entry: 10b179d94; end: 10b179dd3;  */

long FUN_10b179d94(long param_1)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b179fc8(param_1 + 8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  lVar1 = unaff_x19;
  func_0x000107c350ac();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b179dd4; end: 10b179df7;  */

void FUN_10b179dd4(void)

{
  func_0x00010b179fc8();
  FUN_10b147e24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b179df8; end: 10b179dfb;  */

void FUN_10b179df8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b179dfc);
  (*pcVar1)();
}



/* Entry: 10b179dfc; end: 10b179e1f;  */

void FUN_10b179dfc(void)

{
  func_0x00010b179fc8();
  FUN_10b166914();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b179e20; end: 10b179fe7;  */

void FUN_10b179e20(void)

{
  return;
}



/* Entry: 10b179fe8; end: 10b17a103;  */

undefined8 *
FUN_10b179fe8(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110cc0fb8;
  FUN_10b121c1c(param_1 + 1);
  uVar5 = *param_3;
  param_1[0x51] = param_3[1];
  param_1[0x50] = uVar5;
  *param_3 = 0;
  param_3[1] = 0;
  plVar4 = (long *)param_1[0x50];
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))();
  }
  param_1[0x52] = plVar4;
  lVar1 = param_4[1];
  param_1[0x53] = *param_4;
  param_1[0x54] = lVar1;
  if (lVar1 != 0) {
    plVar4 = (long *)(lVar1 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar5 = *param_5;
  lVar1 = param_5[1];
  param_1[0x55] = uVar5;
  param_1[0x56] = lVar1;
  if (lVar1 != 0) {
    plVar4 = (long *)(lVar1 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar5 = *param_5;
  }
  FUN_10b1330dc(param_1 + 0x57,uVar5,param_1 + 1);
  param_1[0x59] = 0x32aaaba7;
  param_1[100] = 0;
  param_1[99] = 0;
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  param_1[0x5f] = 0;
  param_1[0x5e] = 0;
  *(undefined8 *)((long)param_1 + 0x304) = 0;
  *(undefined8 *)((long)param_1 + 0x2fc) = 0;
  param_1[0x62] = param_1 + 99;
  return param_1;
}



/* Entry: 10b17a104; end: 10b17a2bb;  */

void FUN_10b17a104(undefined8 *param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  undefined1 uStack_50;
  undefined7 uStack_4f;
  
  (**(code **)(*(long *)*param_4 + 0x10))((long *)*param_4,param_2 + 0x290);
  uStack_90 = *param_3;
  plStack_88 = *(long **)(param_2 + 0x280);
  if (plStack_88 == (long *)0x0) {
    uStack_80 = 0;
  }
  else {
    (**(code **)(*plStack_88 + 0x18))();
    uStack_80 = *(undefined8 *)(param_2 + 0x280);
  }
  if ((long)param_3[1] <= (long)plStack_88) {
    plStack_88 = (long *)param_3[1];
  }
  lStack_78 = *(long *)(param_2 + 0x288);
  if (lStack_78 != 0) {
    plVar1 = (long *)(lStack_78 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_70 = uStack_90;
  plStack_68 = plStack_88;
  func_0x000107c27d78(&uStack_a0);
  (**(code **)(*(long *)*param_4 + 0x18))((long *)*param_4,&uStack_70,&uStack_90);
  (**(code **)(*(long *)*param_4 + 0x20))();
  func_0x00010b17a30c(&uStack_60,param_2 + 0x2c8);
  FUN_10b20a8d4(CONCAT71(uStack_4f,uStack_50) + 8,uStack_70,plStack_68);
  uVar2 = *(undefined4 *)CONCAT71(uStack_4f,uStack_50);
  func_0x000107c2798c(&uStack_60);
  if (*(long *)(param_2 + 0x2b8) != 0) {
    if (*(char *)(param_2 + 0x60) == '\x01') {
      uVar6 = *(undefined4 *)(param_2 + 0x20);
    }
    else {
      uVar6 = 5;
    }
    plStack_58 = plStack_68;
    uStack_60 = uStack_70;
    uStack_50 = 1;
    FUN_10b204764(*(long *)(param_2 + 0x2b8),uVar6,uVar2,&uStack_60,0,0);
  }
  puVar5 = (undefined8 *)0x20;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_DAT_110cc1030;
  puVar5[3] = &PTR_DAT_110cc1080;
  *param_1 = puVar5 + 3;
  param_1[1] = puVar5;
  func_0x000107c27d78(&uStack_80);
  return;
}



/* Entry: 10b17a2bc; end: 10b17a2c7;  */

undefined1  [16] FUN_10b17a2bc(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(undefined8 *)(param_1 + 0x290);
  auVar1._8_8_ = 1;
  return auVar1;
}



/* Entry: 10b17a2c8; end: 10b17a32f;  */

void FUN_10b17a2c8(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined1 auStack_38 [16];
  undefined4 *puStack_28;
  
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  func_0x00010b17a30c(auStack_38,param_1 + 0x2c8);
  *puStack_28 = uVar1;
  func_0x000107c2798c(auStack_38);
  return;
}



/* Entry: 10b17a330; end: 10b17a3bb;  */

void FUN_10b17a330(undefined8 param_1,long param_2)

{
  undefined1 auStack_2c8 [632];
  undefined1 uStack_50;
  undefined1 auStack_48 [40];
  
  FUN_10b12394c(auStack_2c8,param_2 + 8);
  uStack_50 = 1;
  FUN_10b178bb8(auStack_48);
  FUN_10b179050();
  FUN_10b178968(param_1,auStack_48);
  FUN_10b178e0c(auStack_48);
  func_0x00010b14917c(auStack_2c8);
  return;
}



/* Entry: 10b17a3bc; end: 10b17a503;  */

void FUN_10b17a3bc(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = (undefined8 *)0x60;
  __Znwm();
  *puVar1 = FUN_10b17a7f4;
  puVar1[1] = FUN_10b17a7f8;
  FUN_10b16657c(puVar1 + 2);
  FUN_10b15b5c8(param_1,puVar1 + 2);
  lVar2 = param_2 + 8;
  FUN_10b1c41c0();
  if (lVar2 == 0) {
    puStack_48 = (undefined8 *)0x0;
    uStack_40 = 0;
  }
  else {
    FUN_10b1c41c0(param_2 + 8);
    FUN_10b1b3d48(&puStack_48);
  }
  FUN_10b16c798(puVar1 + 7,&puStack_48);
  func_0x0001052ac684(&puStack_48);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 0xb) = 0;
  if (*(char *)(puVar1 + 9) == '\x01') {
    puStack_48 = puVar1 + 7;
    func_0x00010b17a830();
    FUN_10b16c638();
  }
  else {
    __ZNSt13exception_ptrC1ERKS_(&uStack_38);
    puStack_48 = &uStack_38;
    func_0x00010b17a830();
    FUN_10b16688c();
    __ZNSt13exception_ptrD1Ev(&uStack_38);
  }
  FUN_10b166914(puVar1 + 2);
  func_0x00010b17a820();
  return;
}



/* Entry: 10b17a504; end: 10b17a60b;  */

void FUN_10b17a504(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  
  puVar2 = (undefined8 *)0x68;
  __Znwm();
  *puVar2 = 0x10b17a7c8;
  puVar2[1] = FUN_10b17a7cc;
  FUN_10b14704c(puVar2 + 2);
  FUN_10b147440(param_1,puVar2 + 2);
  puVar1 = puVar2 + 7;
  FUN_10b16c83c(puVar1,param_2 + 8);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 0xc) = 0;
  if (*(char *)(puVar2 + 10) == '\x01') {
    puStack_38 = puVar1;
    func_0x00010b17a830();
    FUN_10b147d74();
  }
  else {
    __ZNSt13exception_ptrC1ERKS_(&uStack_40,puVar1);
    puStack_38 = &uStack_40;
    func_0x00010b17a830();
    FUN_10b147358();
    __ZNSt13exception_ptrD1Ev(&uStack_40);
  }
  FUN_10b147e24(puVar2 + 2);
  func_0x00010b17a820();
  return;
}



/* Entry: 10b17a60c; end: 10b17a667;  */

void FUN_10b17a60c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  if (*(long *)(param_1 + 0x2b8) != 0) {
    if (*(char *)(param_1 + 0x60) == '\x01') {
      uVar1 = *(undefined4 *)(param_1 + 0x20);
    }
    else {
      uVar1 = 5;
    }
    uStack_28 = param_3[1];
    uStack_30 = *param_3;
    uStack_20 = param_3[2];
    FUN_10b2046a4(*(long *)(param_1 + 0x2b8),uVar1,param_2,&uStack_30);
  }
  return;
}



/* Entry: 10b17a668; end: 10b17a767;  */

undefined8 * FUN_10b17a668(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 auStack_ac [4];
  undefined1 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  char cStack_9c;
  undefined1 auStack_98 [80];
  undefined1 auStack_48 [16];
  undefined4 *puStack_38;
  
  *param_1 = &PTR_FUN_110cc0fb8;
  func_0x00010b17a30c(auStack_48,param_1 + 0x59);
  if (*(char *)(param_1 + 0xc) == '\x01') {
    uVar1 = *(undefined4 *)(param_1 + 4);
    uVar3 = *(undefined4 *)(param_1 + 0xb);
  }
  else {
    uVar3 = 0;
    uVar1 = 5;
  }
  uVar2 = param_1[0x55];
  FUN_10b202630(auStack_98,param_1 + 1);
  auStack_ac[0] = 0;
  uStack_a8 = 0;
  uStack_a4 = *puStack_38;
  cStack_9c = (char)param_1 + '\b';
  uStack_a0 = uVar3;
  FUN_10b1c4a58();
  FUN_10b1f7590(uVar2,auStack_98,uVar1,auStack_ac,puStack_38 + 2);
  func_0x00010b121e00(auStack_98);
  func_0x000107c2798c(auStack_48);
  FUN_10b139f84(param_1 + 0x62);
  __ZNSt3__15mutexD1Ev(param_1 + 0x59);
  FUN_10b133118(param_1 + 0x57);
  func_0x00010b1257f8(param_1 + 0x55);
  FUN_10b127f28(param_1 + 0x53);
  func_0x000107c27d78(param_1 + 0x50);
  func_0x00010b121af0(param_1 + 1);
  return param_1;
}



/* Entry: 10b17a768; end: 10b17a76b;  */

undefined8 * FUN_10b17a768(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 auStack_ac [4];
  undefined1 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  char cStack_9c;
  undefined1 auStack_98 [80];
  undefined1 auStack_48 [16];
  undefined4 *puStack_38;
  
  *param_1 = &PTR_FUN_110cc0fb8;
  func_0x00010b17a30c(auStack_48,param_1 + 0x59);
  if (*(char *)(param_1 + 0xc) == '\x01') {
    uVar1 = *(undefined4 *)(param_1 + 4);
    uVar3 = *(undefined4 *)(param_1 + 0xb);
  }
  else {
    uVar3 = 0;
    uVar1 = 5;
  }
  uVar2 = param_1[0x55];
  FUN_10b202630(auStack_98,param_1 + 1);
  auStack_ac[0] = 0;
  uStack_a8 = 0;
  uStack_a4 = *puStack_38;
  cStack_9c = (char)param_1 + '\b';
  uStack_a0 = uVar3;
  FUN_10b1c4a58();
  FUN_10b1f7590(uVar2,auStack_98,uVar1,auStack_ac,puStack_38 + 2);
  func_0x00010b121e00(auStack_98);
  func_0x000107c2798c(auStack_48);
  FUN_10b139f84(param_1 + 0x62);
  __ZNSt3__15mutexD1Ev(param_1 + 0x59);
  FUN_10b133118(param_1 + 0x57);
  func_0x00010b1257f8(param_1 + 0x55);
  FUN_10b127f28(param_1 + 0x53);
  func_0x000107c27d78(param_1 + 0x50);
  func_0x00010b121af0(param_1 + 1);
  return param_1;
}



/* Entry: 10b17a76c; end: 10b17a77f;  */

void FUN_10b17a76c(void)

{
  FUN_10b17a668();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b17a780; end: 10b17a787;  */

void FUN_10b17a780(void)

{
  return;
}



/* Entry: 10b17a788; end: 10b17a79b;  */

void FUN_10b17a788(void)

{
  func_0x00010b17a7b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b17a79c; end: 10b17a7cb;  */

void FUN_10b17a79c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b17a7a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b17a7cc; end: 10b17a7f3;  */

void FUN_10b17a7cc(long param_1)

{
  FUN_10b147e24(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10b17a7f4; end: 10b17a7f7;  */

void FUN_10b17a7f4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b17a7f8);
  (*pcVar1)();
}



/* Entry: 10b17a7f8; end: 10b17a81f;  */

void FUN_10b17a7f8(long param_1)

{
  FUN_10b166914(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10b17a820; end: 10b17a83b;  */

void FUN_10b17a820(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b17a83c; end: 10b17aa2f;  */

void FUN_10b17a83c(long *param_1)

{
  undefined **ppuVar1;
  ulong uVar2;
  long lVar3;
  undefined8 ****ppppuVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined8 ***pppuStack_68;
  ulong uStack_60;
  ulong uStack_58;
  long alStack_50 [2];
  undefined8 ***pppuStack_40;
  ulong uStack_38;
  byte bStack_29;
  
  FUN_10b155ca4(alStack_50);
  if ((alStack_50[0] == 0) || (3 < *(uint *)(alStack_50[0] + 0xb8))) {
LAB_10b17a9d4:
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  else {
    switch(*(uint *)(alStack_50[0] + 0xb8)) {
    case 0:
      FUN_10b235d88(&pppuStack_40);
      if (-1 < (char)bStack_29) {
        uStack_38 = (ulong)bStack_29;
        pppuStack_40 = &pppuStack_40;
      }
      FUN_10b205f70(&pppuStack_68,pppuStack_40,uStack_38);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppuStack_40);
      param_1[1] = uStack_60;
      *param_1 = (long)pppuStack_68;
      param_1[2] = uStack_58;
      pppuStack_68 = (undefined8 ****)0x0;
      uStack_60 = 0;
      uStack_58 = 0;
      *(undefined1 *)(param_1 + 3) = 1;
      break;
    case 1:
      puVar5 = (undefined8 *)(*(ulong *)(alStack_50[0] + 0x68) & 0xfffffffffffffffc);
      lVar7 = (long)*(char *)((long)puVar5 + 0x17);
      puVar6 = puVar5;
      if (lVar7 < 0) {
        puVar6 = (undefined8 *)*puVar5;
        lVar7 = puVar5[1];
      }
      FUN_10b205f70(&pppuStack_40,puVar6,lVar7);
      FUN_10b17aba8();
      break;
    case 2:
      if (*(int *)(alStack_50[0] + 0x34) == 4) {
        ppuVar8 = *(undefined ***)(alStack_50[0] + 0x28);
      }
      else {
        ppuVar8 = &PTR_PTR_113372ee0;
      }
      ppuVar1 = &PTR_PTR_113373148;
      if ((undefined **)ppuVar8[4] != (undefined **)0x0) {
        ppuVar1 = (undefined **)ppuVar8[4];
      }
      func_0x00010563bf9c(&pppuStack_40,(ulong)ppuVar1[0xc] & 0xfffffffffffffffc,
                          alStack_50[0] + 0x38);
      func_0x000107c2793c(&UNK_10f332706);
      func_0x000107c3173c(&pppuStack_68);
      uVar2 = uStack_60;
      ppppuVar4 = (undefined8 ****)pppuStack_68;
      if (-1 < (long)uStack_58) {
        uVar2 = uStack_58 >> 0x38;
        ppppuVar4 = &pppuStack_68;
      }
      FUN_10b205f70(&pppuStack_40,ppppuVar4,uVar2);
      FUN_10b17aba8();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      break;
    case 3:
      lVar9 = (long)*(char *)(alStack_50[0] + 0x1f);
      lVar7 = lVar9;
      if (lVar9 < 0) {
        lVar7 = *(long *)(alStack_50[0] + 0x10);
      }
      if (lVar7 != 0) {
        lVar7 = *(long *)(alStack_50[0] + 0x10);
        lVar3 = *(long *)(alStack_50[0] + 8);
        if (-1 < *(char *)(alStack_50[0] + 0x1f)) {
          lVar7 = lVar9;
          lVar3 = alStack_50[0] + 8;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm
                  (param_1,lVar3,lVar7);
        *(undefined1 *)(param_1 + 3) = 1;
        goto code_r0x00010b17a9dc;
      }
      goto LAB_10b17a9d4;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
code_r0x00010b17a9dc:
  func_0x00010b167f44(alStack_50);
  return;
}



/* Entry: 10b17aa30; end: 10b17aae3;  */

void FUN_10b17aa30(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined1 auStack_68 [24];
  char cStack_50;
  long lStack_48;
  long lStack_40;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  (**(code **)(*param_2 + 0x38))(&lStack_48);
  for (lVar1 = lStack_48; lVar1 != lStack_40; lVar1 = lVar1 + 0x10) {
    FUN_10b17a83c(auStack_68,lVar1);
    if (cStack_50 == '\x01') {
      func_0x000107c281e8(param_1,auStack_68);
    }
    func_0x000107c279a4(auStack_68);
  }
  func_0x0001052b60a4(&lStack_48);
  return;
}



/* Entry: 10b17aae4; end: 10b17aba7;  */

void FUN_10b17aae4(undefined8 *param_1,undefined8 param_2,ulong *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined1 uStack_58;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c278b8(&uStack_48,&UNK_10f730c0a);
  uVar2 = uStack_38;
  uStack_70 = uStack_70 & 0xffffffffffffff00;
  uVar1 = param_3[3];
  uStack_58 = (char)uVar1 == '\x01';
  if ((bool)uStack_58) {
    uStack_68 = param_3[1];
    uStack_70 = *param_3;
    uStack_60 = param_3[2];
    param_3[1] = 0;
    param_3[2] = 0;
    *param_3 = 0;
  }
  param_1[1] = uStack_40;
  *param_1 = uStack_48;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_48 = 0;
  param_1[2] = uVar2;
  param_1[3] = param_2;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  if ((char)uVar1 != '\0') {
    param_1[5] = uStack_68;
    param_1[4] = uStack_70;
    param_1[6] = uStack_60;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_70 = 0;
    *(undefined1 *)(param_1 + 7) = 1;
  }
  func_0x000107c279a4(&uStack_70);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_48);
  return;
}



/* Entry: 10b17aba8; end: 10b17abdf;  */

undefined8 * FUN_10b17aba8(void)

{
  undefined8 *unaff_x19;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  
  unaff_x19[1] = in_stack_00000038;
  *unaff_x19 = in_stack_00000030;
  unaff_x19[2] = in_stack_00000040;
  *(undefined1 *)(unaff_x19 + 3) = 1;
  return &stack0x00000030;
}



/* Entry: 10b17abe0; end: 10b17ac7f;  */

void FUN_10b17abe0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  
  FUN_10b1260ec(auStack_40,param_4);
  FUN_10b13d714(auStack_50,auStack_40,param_5);
  FUN_10b17ac80(&uStack_60,auStack_50,param_2,param_3);
  param_1[1] = uStack_58;
  *param_1 = uStack_60;
  uStack_60 = 0;
  uStack_58 = 0;
  FUN_10b17e36c(&uStack_60);
  func_0x00010b1257f8(auStack_50);
  func_0x00010b125908(auStack_40);
  return;
}



/* Entry: 10b17ac80; end: 10b17acab;  */

void FUN_10b17ac80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_11;
  
  FUN_10b17e144(&uStack_11,param_1,param_2,param_3);
  return;
}



/* Entry: 10b17acac; end: 10b17adb3;  */

undefined8 *
FUN_10b17acac(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined **ppuVar1;
  long lVar2;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 uVar3;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110cc10c0;
  lVar2 = param_2[1];
  uVar3 = *param_2;
  param_1[4] = param_2[1];
  param_1[3] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x00010b17e94c();
    } while (extraout_w10 != 0);
  }
  lVar2 = param_3[1];
  uVar3 = *param_3;
  param_1[6] = param_3[1];
  param_1[5] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x00010b17e94c();
    } while (extraout_w10_00 != 0);
  }
  lVar2 = param_4[1];
  uVar3 = *param_4;
  param_1[8] = param_4[1];
  param_1[7] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x00010b17e94c();
    } while (extraout_w10_01 != 0);
  }
  ppuVar1 = &PTR_DAT_110cc13c0;
  func_0x000107c2be18();
  param_1[9] = ppuVar1;
  ppuVar1 = &PTR_DAT_110cc13d8;
  func_0x000107c2be18();
  param_1[10] = ppuVar1;
  param_1[0xb] = 0x32aaaba7;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0x3f800000;
  return param_1;
}



/* Entry: 10b17adb4; end: 10b17baa7;  */

void FUN_10b17adb4(undefined8 param_1,long param_2,int param_3,undefined8 param_4)

{
  ulong *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  undefined8 **ppuVar7;
  undefined ***pppuVar8;
  undefined8 **ppuVar9;
  long lVar10;
  undefined8 ***pppuVar11;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  long extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  long extraout_x8_02;
  undefined8 **ppuVar12;
  undefined8 **extraout_x8_03;
  long extraout_x8_04;
  undefined8 ***extraout_x8_05;
  int extraout_w9;
  int extraout_w9_00;
  undefined8 **extraout_x9;
  ulong uVar13;
  ulong extraout_x9_00;
  undefined8 *puVar14;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long *plVar15;
  long *plVar16;
  long *extraout_x10;
  int extraout_w11;
  undefined8 **ppuVar17;
  undefined8 **extraout_x11;
  undefined8 uVar18;
  long *plVar19;
  undefined8 **ppuVar20;
  ulong uVar21;
  undefined8 **ppuVar22;
  long *aplStack_560 [2];
  undefined8 *puStack_550;
  long lStack_548;
  undefined1 auStack_540 [24];
  undefined1 uStack_528;
  undefined1 auStack_520 [24];
  undefined1 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 **ppuStack_4d0;
  long *plStack_4c8;
  undefined8 uStack_4c0;
  long lStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  int iStack_498;
  undefined1 uStack_490;
  char cStack_488;
  undefined1 auStack_478 [24];
  byte bStack_460;
  undefined8 *puStack_458;
  long lStack_450;
  long lStack_440;
  undefined1 uStack_438;
  long lStack_430;
  undefined8 *puStack_428;
  long lStack_420;
  undefined8 uStack_418;
  char cStack_410;
  undefined8 *puStack_408;
  long lStack_400;
  undefined8 uStack_3f8;
  undefined **ppuStack_3f0;
  undefined8 uStack_3e8;
  ulong uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined4 uStack_3c8;
  undefined8 *puStack_3c0;
  long lStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined4 uStack_3a0;
  undefined8 *puStack_390;
  long lStack_388;
  undefined1 uStack_358;
  long *aplStack_350 [2];
  undefined8 **ppuStack_340;
  long *plStack_338;
  undefined8 *puStack_330;
  undefined8 *puStack_328;
  undefined8 *puStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  int iStack_308;
  long lStack_300;
  int iStack_2f0;
  undefined1 uStack_2ec;
  undefined4 uStack_2e8;
  undefined8 uStack_2e0;
  undefined **ppuStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined1 uStack_2a0;
  undefined1 uStack_298;
  int iStack_28c;
  undefined1 uStack_280;
  byte bStack_268;
  
  lStack_440 = param_2 + 0x58;
  uStack_438 = 1;
  __ZNSt3__15mutex4lockEv();
  (**(code **)(**(long **)(param_2 + 0x38) + 0x38))(&puStack_458,*(long **)(param_2 + 0x38),param_4)
  ;
  iVar6 = param_3;
  func_0x00010b20557c();
  if ((iVar6 == 0) || (lStack_450 - (long)puStack_458 != 0x10)) {
    func_0x00010b17eb3c();
    func_0x00010b17ec7c();
    func_0x00010b17eb34();
    goto LAB_10b17b850;
  }
  FUN_10b17a83c(auStack_478,puStack_458);
  if ((bStack_460 & 1) == 0) {
    func_0x00010b17eb3c();
    func_0x00010b17ec7c();
    func_0x00010b17eb34();
  }
  else {
    uVar18 = *(undefined8 *)(param_2 + 0x18);
    func_0x00010b17ed5c();
    FUN_10b1f69e0(&iStack_2f0,uVar18,&ppuStack_340,0,0);
    ppuVar20 = &puStack_428;
    func_0x00010b17ebc8();
    if (((bStack_268 & 1) == 0) || (iStack_28c != 3)) {
      ppuStack_4d0 = (undefined8 **)((ulong)ppuStack_4d0 & 0xffffffffffffff00);
      cStack_488 = '\0';
    }
    else {
      uVar18 = *(undefined8 *)(param_2 + 0x18);
      func_0x00010b17ed5c();
      pppuVar11 = &ppuStack_340;
      func_0x00010b1f70f0(aplStack_350,uVar18,pppuVar11);
      func_0x00010b17ebc8();
      plVar19 = aplStack_350[0];
      (**(code **)(*aplStack_350[0] + 0x10))();
      if ((int)plVar19 == 0) {
        lStack_3b8 = 0;
        puStack_3c0 = (undefined8 *)0x0;
        uStack_3a8 = 0;
        uStack_3b0 = 0;
        uStack_3a0 = 0x3f800000;
        ppuStack_3f0 = &PTR_FUN_110cfd9c8;
        uStack_3e8 = 0;
        uStack_3d8 = 0;
        uStack_3d0 = 0;
        uStack_3e0 = 0;
        uStack_3c8 = 0;
        (**(code **)(*aplStack_350[0] + 0x18))(&ppuStack_340);
        ppuVar7 = ppuStack_340;
        func_0x00010b17edf8(ppuStack_340);
        (*extraout_x8_00)();
        (**(code **)(*aplStack_350[0] + 0x18))(&puStack_390);
        func_0x00010b17edf8(puStack_390);
        (*extraout_x8_01)();
        pppuVar8 = &ppuStack_3f0;
        func_0x000107c3034c(pppuVar8,ppuVar7,pppuVar11);
        func_0x000107c27f10(&puStack_390);
        func_0x000107c27f10(&ppuStack_340);
        if (((ulong)pppuVar8 & 1) == 0) {
          func_0x00010b17ea98();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&puStack_408);
          func_0x000105c3d6a8(&puStack_428,&UNK_10f730c72);
          uVar18 = uStack_3f8;
          lStack_388 = lStack_400;
          puStack_390 = puStack_408;
          lStack_400 = 0;
          uStack_3f8 = 0;
          puStack_408 = (undefined8 *)0x0;
          func_0x00010b17ed98(uVar18);
          if (cStack_410 == '\x01') {
            *(long *)(extraout_x8_02 + 0x28) = lStack_420;
            *(undefined8 **)(extraout_x8_02 + 0x20) = puStack_428;
            *(undefined8 *)(extraout_x8_02 + 0x30) = uStack_418;
            lStack_420 = 0;
            uStack_418 = 0;
            puStack_428 = (undefined8 *)0x0;
            uStack_358 = 1;
          }
          func_0x00010b17ec20();
          func_0x00010b17ed84();
          if (extraout_w9_00 != 0) {
            func_0x00010b17e92c();
            iStack_308 = CONCAT31(iStack_308._1_3_,extraout_w8_00);
          }
          func_0x00010b17ec88();
          func_0x0001052a03ac(&ppuStack_340);
          func_0x0001052a03ac(&puStack_390);
          func_0x000107c279a4(&puStack_428);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_408);
        }
        else {
          puVar1 = &uStack_3e0;
          if ((uStack_3e0 & 1) != 0) {
            puVar1 = (ulong *)(uStack_3e0 + 7);
          }
          for (lVar10 = (long)(int)uStack_3d8 << 3; lVar10 != 0; lVar10 = lVar10 + -8) {
            uVar21 = *puVar1;
            FUN_10b17befc(&ppuStack_340,auStack_478,uVar21);
            FUN_10b152260(&puStack_390,&ppuStack_340);
            FUN_10b17bf98(&puStack_3c0,uVar21);
            func_0x00010880bd10();
            func_0x00010529fde0(&puStack_390);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_340);
            puVar1 = puVar1 + 1;
          }
          FUN_10b17c30c(&ppuStack_340,&puStack_3c0);
          plStack_4c8 = plStack_338;
          ppuStack_4d0 = ppuStack_340;
          plStack_338 = (long *)0x0;
          ppuStack_340 = (undefined8 **)0x0;
          uStack_490 = 1;
          cStack_488 = '\x01';
          func_0x00010b17c3b0(&ppuStack_340);
        }
        FUN_10b5259a4(&ppuStack_3f0);
        func_0x00010b17e0d4(&puStack_3c0);
      }
      else {
        func_0x00010b17ea98();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&puStack_3c0);
        FUN_10b12ee08(&ppuStack_3f0,&UNK_10f730c58);
        uVar18 = uStack_3b0;
        lStack_388 = lStack_3b8;
        puStack_390 = puStack_3c0;
        lStack_3b8 = 0;
        uStack_3b0 = 0;
        puStack_3c0 = (undefined8 *)0x0;
        func_0x00010b17ed98(uVar18);
        if ((char)uStack_3d8 == '\x01') {
          *(undefined8 *)(extraout_x8 + 0x28) = uStack_3e8;
          *(undefined ***)(extraout_x8 + 0x20) = ppuStack_3f0;
          *(ulong *)(extraout_x8 + 0x30) = uStack_3e0;
          uStack_3e8 = 0;
          uStack_3e0 = 0;
          ppuStack_3f0 = (undefined **)0x0;
          uStack_358 = 1;
        }
        func_0x00010b17ec20();
        func_0x00010b17ed84();
        if (extraout_w9 != 0) {
          func_0x00010b17e92c();
          iStack_308 = CONCAT31(iStack_308._1_3_,extraout_w8);
        }
        func_0x00010b17ec88();
        func_0x0001052a03ac(&ppuStack_340);
        func_0x0001052a03ac(&puStack_390);
        func_0x000107c279a4(&ppuStack_3f0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_3c0);
      }
      func_0x00010b10c000(aplStack_350);
    }
    func_0x00010b121af0(&iStack_2f0);
    if (cStack_488 == '\x01') {
      FUN_10b17baa8(param_1,&ppuStack_4d0);
      func_0x00010b17ec94();
    }
    else {
      func_0x00010b17ec94();
      lVar10 = param_2 + 0x98;
      FUN_10b17e390(lVar10,auStack_478);
      if (lVar10 == 0) {
        puStack_320 = (undefined8 *)0x0;
        plStack_338 = (undefined8 *)0x0;
        ppuStack_340 = (undefined8 **)0x0;
        puStack_328 = (undefined8 *)0x0;
        puStack_330 = (undefined8 *)0x0;
        FUN_10b17c40c(&ppuStack_340);
        ppuStack_340 = (undefined8 **)&PTR_FUN_110cc1148;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (&iStack_2f0,auStack_478);
        puStack_2c8 = puStack_330;
        puStack_2d0 = plStack_338;
        puStack_330 = (undefined8 *)0x0;
        plStack_338 = (long *)0x0;
        puStack_2b8 = puStack_320;
        puStack_2c0 = puStack_328;
        puStack_328 = (undefined8 *)0x0;
        puStack_320 = (undefined8 *)0x0;
        ppuStack_2d8 = &PTR_FUN_110cc1148;
        ppuVar7 = (undefined8 **)(param_2 + 0xb0);
        func_0x000107c278c4(ppuVar7,&iStack_2f0);
        ppuVar22 = *(undefined8 ***)(param_2 + 0xa0);
        ppuVar9 = ppuVar7;
        if (ppuVar22 != (undefined8 **)0x0) {
          uVar21 = (long)ppuVar22 - 1;
          if (((ulong)ppuVar22 & uVar21) == 0) {
            ppuVar20 = (undefined8 **)(uVar21 & (ulong)ppuVar7);
          }
          else {
            ppuVar20 = ppuVar7;
            if (ppuVar22 <= ppuVar7) {
              uVar13 = 0;
              if (ppuVar22 != (undefined8 **)0x0) {
                uVar13 = (ulong)ppuVar7 / (ulong)ppuVar22;
              }
              ppuVar20 = (undefined8 **)((long)ppuVar7 - uVar13 * (long)ppuVar22);
            }
          }
          plVar19 = *(long **)(*(long *)(param_2 + 0x98) + (long)ppuVar20 * 8);
          if (plVar19 != (long *)0x0) {
            do {
              while( true ) {
                plVar19 = (long *)*plVar19;
                if (plVar19 == (long *)0x0) goto LAB_10b17b2b0;
                ppuVar12 = (undefined8 **)plVar19[1];
                if (ppuVar12 != ppuVar7) break;
                ppuVar9 = (undefined8 **)(plVar19 + 2);
                func_0x000107c278d0(ppuVar9,&iStack_2f0);
                if (((ulong)ppuVar9 & 1) != 0) goto LAB_10b17b554;
              }
              if (((ulong)ppuVar22 & uVar21) == 0) {
                ppuVar12 = (undefined8 **)((ulong)ppuVar12 & uVar21);
              }
              else if (ppuVar22 <= ppuVar12) {
                uVar13 = 0;
                if (ppuVar22 != (undefined8 **)0x0) {
                  uVar13 = (ulong)ppuVar12 / (ulong)ppuVar22;
                }
                ppuVar12 = (undefined8 **)((long)ppuVar12 - uVar13 * (long)ppuVar22);
              }
            } while (ppuVar12 == ppuVar20);
          }
        }
LAB_10b17b2b0:
        func_0x00010b17ec74();
        plVar19 = (long *)(param_2 + 0xa8);
        uStack_4c0 = 0;
        *ppuVar9 = (undefined8 *)0x0;
        ppuVar9[1] = ppuVar7;
        ppuStack_4d0 = ppuVar9;
        plStack_4c8 = plVar19;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (ppuVar9 + 2,&iStack_2f0);
        puVar2 = puStack_2c8;
        puVar14 = puStack_2d0;
        puStack_2d0 = (undefined8 *)0x0;
        puStack_2c8 = (undefined8 *)0x0;
        ppuVar9[7] = puVar2;
        ppuVar9[6] = puVar14;
        ppuVar9[9] = puStack_2b8;
        ppuVar9[8] = puStack_2c0;
        puStack_2c0 = (undefined8 *)0x0;
        puStack_2b8 = (undefined8 *)0x0;
        ppuVar9[5] = &PTR_FUN_110cc1148;
        uStack_4c0 = CONCAT71(uStack_4c0._1_7_,1);
        if ((ppuVar22 == (undefined8 **)0x0) ||
           (*(float *)(param_2 + 0xb8) * (float)ppuVar22 < (float)(*(long *)(param_2 + 0xb0) + 1)))
        {
          bVar4 = (undefined8 **)0x2 < ppuVar22;
          bVar5 = ppuVar22 == (undefined8 **)0x3;
          func_0x00010b17edd8((long)ppuVar22 << 1);
          ppuVar20 = extraout_x8_03;
          if (!bVar4 || bVar5) {
            ppuVar20 = extraout_x9;
          }
          if ((long)ppuVar20 - 1U == 0) {
            ppuVar20 = (undefined8 **)0x2;
          }
          else if (((ulong)ppuVar20 & (long)ppuVar20 - 1U) != 0) {
            __ZNSt3__112__next_primeEm();
          }
          ppuVar22 = *(undefined8 ***)(param_2 + 0xa0);
          if (ppuVar22 < ppuVar20) {
LAB_10b17b374:
            if ((ulong)ppuVar20 >> 0x3d != 0) {
              func_0x000104bd35f4();
              goto LAB_10b17b87c;
            }
            lVar10 = (long)ppuVar20 << 3;
            __Znwm(lVar10);
            FUN_10b17e458(param_2 + 0x98,lVar10);
            *(undefined8 ***)(param_2 + 0xa0) = ppuVar20;
            lVar10 = *(long *)(param_2 + 0x98);
            for (ppuVar22 = (undefined8 **)0x0; ppuVar20 != ppuVar22;
                ppuVar22 = (undefined8 **)((long)ppuVar22 + 1)) {
              *(undefined8 *)(lVar10 + (long)ppuVar22 * 8) = 0;
            }
            plVar15 = (long *)*plVar19;
            ppuVar22 = ppuVar20;
            if (plVar15 != (long *)0x0) {
              ppuVar12 = (undefined8 **)plVar15[1];
              uVar13 = (long)ppuVar20 - 1;
              uVar21 = 0;
              if (ppuVar20 != (undefined8 **)0x0) {
                uVar21 = (ulong)ppuVar12 / (ulong)ppuVar20;
              }
              ppuVar17 = ppuVar12;
              if (ppuVar20 <= ppuVar12) {
                ppuVar17 = (undefined8 **)((long)ppuVar12 - uVar21 * (long)ppuVar20);
              }
              if (((ulong)ppuVar20 & uVar13) == 0) {
                ppuVar17 = (undefined8 **)((ulong)ppuVar12 & uVar13);
              }
              *(long **)(lVar10 + (long)ppuVar17 * 8) = plVar19;
              while (plVar16 = plVar15, plVar15 = (long *)*plVar16, plVar15 != (long *)0x0) {
                ppuVar12 = (undefined8 **)plVar15[1];
                if (((ulong)ppuVar20 & uVar13) == 0) {
                  ppuVar12 = (undefined8 **)((ulong)ppuVar12 & uVar13);
                }
                else if (ppuVar20 <= ppuVar12) {
                  uVar21 = 0;
                  if (ppuVar20 != (undefined8 **)0x0) {
                    uVar21 = (ulong)ppuVar12 / (ulong)ppuVar20;
                  }
                  ppuVar12 = (undefined8 **)((long)ppuVar12 - uVar21 * (long)ppuVar20);
                }
                if (ppuVar12 != ppuVar17) {
                  if (*(long *)(lVar10 + (long)ppuVar12 * 8) == 0) {
                    *(long **)(lVar10 + (long)ppuVar12 * 8) = plVar16;
                    ppuVar17 = ppuVar12;
                  }
                  else {
                    func_0x00010b17eb0c();
                    lVar10 = extraout_x8_04;
                    uVar13 = extraout_x9_00;
                    plVar15 = extraout_x10;
                    ppuVar17 = extraout_x11;
                  }
                }
              }
            }
          }
          else if (ppuVar20 < ppuVar22) {
            ppuVar12 = (undefined8 **)
                       (long)((float)*(ulong *)(param_2 + 0xb0) / *(float *)(param_2 + 0xb8));
            if ((ppuVar22 < (undefined8 **)0x3) || (((ulong)ppuVar22 & (long)ppuVar22 - 1U) != 0)) {
              __ZNSt3__112__next_primeEm();
            }
            else {
              func_0x00010b17eacc();
            }
            if (ppuVar20 <= ppuVar12) {
              ppuVar20 = ppuVar12;
            }
            if (ppuVar20 < ppuVar22) {
              if (ppuVar20 != (undefined8 **)0x0) goto LAB_10b17b374;
              FUN_10b17e458(param_2 + 0x98,0);
              *(undefined8 *)(param_2 + 0xa0) = 0;
              ppuVar22 = (undefined8 **)0x0;
            }
            else {
              ppuVar22 = *(undefined8 ***)(param_2 + 0xa0);
            }
          }
          if (((ulong)ppuVar22 & (long)ppuVar22 - 1U) == 0) {
            ppuVar20 = (undefined8 **)((long)ppuVar22 - 1U & (ulong)ppuVar7);
          }
          else {
            ppuVar20 = ppuVar7;
            if (ppuVar22 <= ppuVar7) {
              uVar21 = 0;
              if (ppuVar22 != (undefined8 **)0x0) {
                uVar21 = (ulong)ppuVar7 / (ulong)ppuVar22;
              }
              ppuVar20 = (undefined8 **)((long)ppuVar7 - uVar21 * (long)ppuVar22);
            }
          }
        }
        lVar10 = *(long *)(param_2 + 0x98);
        puVar14 = *(undefined8 **)(lVar10 + (long)ppuVar20 * 8);
        if (puVar14 == (undefined8 *)0x0) {
          *ppuVar9 = (undefined8 *)*plVar19;
          *plVar19 = (long)ppuVar9;
          *(long **)(lVar10 + (long)ppuVar20 * 8) = plVar19;
          if (*ppuVar9 != (undefined8 *)0x0) {
            ppuVar20 = (undefined8 **)(*ppuVar9)[1];
            if (((ulong)ppuVar22 & (long)ppuVar22 - 1U) == 0) {
              ppuVar20 = (undefined8 **)((ulong)ppuVar20 & (long)ppuVar22 - 1U);
            }
            else if (ppuVar22 <= ppuVar20) {
              uVar21 = 0;
              if (ppuVar22 != (undefined8 **)0x0) {
                uVar21 = (ulong)ppuVar20 / (ulong)ppuVar22;
              }
              ppuVar20 = (undefined8 **)((long)ppuVar20 - uVar21 * (long)ppuVar22);
            }
            *(undefined8 ***)(lVar10 + (long)ppuVar20 * 8) = ppuVar9;
          }
        }
        else {
          *ppuVar9 = (undefined8 *)*puVar14;
          *puVar14 = ppuVar9;
        }
        ppuStack_4d0 = (undefined8 **)0x0;
        *(long *)(param_2 + 0xb0) = *(long *)(param_2 + 0xb0) + 1;
        FUN_10b17d40c(&ppuStack_4d0);
LAB_10b17b554:
        FUN_10b17c678(&iStack_2f0);
        FUN_10b17c53c(&ppuStack_340);
        func_0x00010b17ecec();
        func_0x000107c280c4(&lStack_440);
        uStack_4f8 = 0;
        uStack_4f0 = 0;
        uStack_500 = 0;
        auStack_520[0] = 0;
        uStack_508 = 0;
        auStack_540[0] = 0;
        uStack_528 = 0;
        uStack_2ec = 0;
        uStack_2e8 = 4;
        ppuStack_2d8 = (undefined **)0x0;
        uStack_2e0 = 0;
        puStack_2c8 = (undefined8 *)0x0;
        puStack_2d0 = (undefined8 *)0x0;
        puStack_2c0 = (undefined8 *)0x0;
        uStack_4e0 = 0;
        uStack_4d8 = 0;
        uStack_4e8 = 0;
        puStack_2b8 = (undefined8 *)((ulong)puStack_2b8 & 0xffffffffffffff00);
        uStack_2a0 = 0;
        uStack_298 = 0;
        uStack_280 = 0;
        iStack_2f0 = param_3;
        func_0x000107c279a4(auStack_540);
        func_0x000107c279a4(auStack_520);
        func_0x000107c278a8(&uStack_4e8);
        func_0x000107c278a8(&uStack_500);
        (**(code **)(**(long **)(param_2 + 0x28) + 0x10))
                  (aplStack_560,*(long **)(param_2 + 0x28),&iStack_2f0,param_4);
        (**(code **)(*aplStack_560[0] + 0x18))(aplStack_350);
        ppuStack_4d0 = *(undefined8 ***)(param_2 + 8);
        plVar19 = *(long **)(param_2 + 0x10);
        if (plVar19 == (long *)0x0) {
          plStack_4c8 = (long *)0x0;
        }
        else {
          __ZNSt3__119__shared_weak_count4lockEv();
          plStack_4c8 = plVar19;
          if (plVar19 != (long *)0x0) {
            lStack_4b8 = puStack_458[1];
            uStack_4c0 = *puStack_458;
            if (puStack_458[1] != 0) {
              do {
                func_0x00010b17e94c();
              } while (extraout_w10 != 0);
            }
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                      (&uStack_4b0,auStack_478);
            puStack_390 = (undefined8 *)0x0;
            lStack_388 = 0;
            ppuStack_3f0 = (undefined **)0x0;
            uStack_3e8 = 0;
            iStack_498 = param_3;
            func_0x0001052a42fc(&ppuStack_340,aplStack_350,&ppuStack_3f0);
            func_0x0001052a4324(&puStack_390,&ppuStack_340);
            func_0x0001052a4560(&ppuStack_340);
            func_0x0001052a4560(&ppuStack_3f0);
            func_0x000107c27b48(&lStack_430);
            func_0x000107c27b4c(&puStack_3c0,lStack_430);
            plStack_338 = plStack_4c8;
            ppuStack_340 = ppuStack_4d0;
            ppuStack_4d0 = (undefined8 **)0x0;
            plStack_4c8 = (long *)0x0;
            puStack_328 = (undefined8 *)lStack_4b8;
            puStack_330 = (undefined8 *)uStack_4c0;
            if (lStack_4b8 != 0) {
              do {
                func_0x00010b17e94c();
              } while (extraout_w10_00 != 0);
            }
            lStack_300 = lStack_430;
            uStack_318 = uStack_4a8;
            puStack_320 = (undefined8 *)uStack_4b0;
            uStack_310 = uStack_4a0;
            uStack_4a8 = 0;
            uStack_4a0 = 0;
            uStack_4b0 = 0;
            iStack_308 = iStack_498;
            lStack_430 = 0;
            puStack_428 = (undefined8 *)0x0;
            lStack_420 = 0;
            puStack_408 = puStack_390 + 0x10;
            lStack_400 = CONCAT71(lStack_400._1_7_,1);
            __ZNSt3__15mutex4lockEv();
            puVar14 = puStack_390;
            func_0x0001052a4348();
            if ((int)puVar14 == 0) {
              func_0x00010b17ec74();
              pppuVar11 = &ppuStack_340;
              *puVar14 = &PTR_SUB_110cc1200;
              puVar14[2] = plStack_338;
              puVar14[1] = ppuStack_340;
              ppuStack_340 = (undefined8 **)0x0;
              plStack_338 = (long *)0x0;
              puVar14[4] = puStack_328;
              puVar14[3] = puStack_330;
              if (puStack_328 != (undefined8 *)0x0) {
                do {
                  func_0x00010b17ea00();
                  pppuVar11 = extraout_x8_05;
                } while (extraout_w11 != 0);
              }
              ppuVar20 = pppuVar11[4];
              puVar14[6] = pppuVar11[5];
              puVar14[5] = ppuVar20;
              puVar14[7] = pppuVar11[6];
              pppuVar11[5] = (undefined8 **)0x0;
              pppuVar11[6] = (undefined8 **)0x0;
              pppuVar11[4] = (undefined8 **)0x0;
              lVar10 = lStack_300;
              *(int *)(puVar14 + 8) = iStack_308;
              lStack_300 = 0;
              puVar14[9] = lVar10;
              plVar19 = (long *)puStack_390[0x19];
              puStack_390[0x19] = puVar14;
              if (plVar19 != (long *)0x0) {
                (**(code **)(*plVar19 + 8))(plVar19);
              }
            }
            else {
              func_0x0001052a4324(&puStack_428,&puStack_390);
            }
            func_0x000107c2798c(&puStack_408);
            if (puStack_428 != (undefined8 *)0x0) {
              puStack_408 = puStack_428;
              lStack_400 = lStack_420;
              if (lStack_420 != 0) {
                do {
                  func_0x00010b17e94c();
                } while (extraout_w10_01 != 0);
              }
              FUN_10b17c698(&ppuStack_340);
              func_0x0001052a4560(&puStack_408);
            }
            lStack_548 = lStack_3b8;
            puStack_550 = puStack_3c0;
            puStack_3c0 = (undefined8 *)0x0;
            lStack_3b8 = 0;
            func_0x0001052a4560(&puStack_428);
            FUN_10b17d334(&ppuStack_340);
            func_0x000107c27b58(&puStack_3c0);
            lVar10 = lStack_430;
            lStack_430 = 0;
            if (lVar10 != 0) {
              func_0x00010b17ea5c();
            }
            func_0x0001052a4560(&puStack_390);
            func_0x000107c27b58(&puStack_550);
            FUN_10b17bc74(&ppuStack_4d0);
            func_0x0001052a4560(aplStack_350);
            func_0x00010529fe38(aplStack_560);
            func_0x00010529fe04(&iStack_2f0);
            goto LAB_10b17b848;
          }
        }
        func_0x00010527822c();
LAB_10b17b87c:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10b17b880);
        (*pcVar3)();
      }
      func_0x00010b17ecec();
    }
  }
LAB_10b17b848:
  func_0x000107c279a4(auStack_478);
LAB_10b17b850:
  func_0x0001052b60a4(&puStack_458);
  func_0x000107c2798c(&lStack_440);
  return;
}



/* Entry: 10b17baa8; end: 10b17bc2f;  */

void FUN_10b17baa8(void)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *unaff_x20;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [32];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010b17edec();
  FUN_10b17c40c(auStack_88);
  puStack_50 = (undefined8 *)0x0;
  uStack_48 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  FUN_10b0fda14(&uStack_40,auStack_80,&uStack_60);
  FUN_10b0fda70(&puStack_50,&uStack_40);
  func_0x00010b17ed54();
  func_0x00010b17ed68();
  puVar2 = puStack_50;
  __ZNSt3__15mutex4lockEv(puStack_50 + 0x10);
  if (*(char *)(puStack_50 + 9) == '\x01') {
    bVar1 = *(byte *)(unaff_x20 + 8);
    if (((*(byte *)(puStack_50 + 8) & 1) == 0) && (bVar1 != 0)) {
      puVar3 = puStack_50;
      func_0x0001052a03ac();
      uVar5 = *unaff_x20;
      puVar3[1] = unaff_x20[1];
      *puVar3 = uVar5;
      *unaff_x20 = 0;
      unaff_x20[1] = 0;
      *(undefined1 *)(puVar3 + 8) = 1;
    }
    else if (*(byte *)(puStack_50 + 8) == 0) {
      if ((bVar1 & 1) == 0) {
        func_0x00010563bf40();
      }
    }
    else if (bVar1 == 0) {
      FUN_10b0fd0b8();
      FUN_10b0fde9c();
    }
    else {
      uVar6 = unaff_x20[1];
      uVar5 = *unaff_x20;
      *unaff_x20 = 0;
      unaff_x20[1] = 0;
      uStack_38 = puStack_50[1];
      uStack_40 = *puStack_50;
      puStack_50[1] = uVar6;
      *puStack_50 = uVar5;
      FUN_10b0fd0b8(&uStack_40);
    }
  }
  else {
    puVar3 = puStack_50;
    func_0x00010b0fde50();
    *(undefined1 *)(puVar3 + 9) = 1;
  }
  plVar4 = (long *)puStack_50[0x19];
  puStack_50[0x19] = 0;
  __ZNSt3__15mutex6unlockEv(puVar2 + 0x10);
  if (plVar4 == (long *)0x0) {
    func_0x00010b17ece4(puStack_50);
  }
  else {
    (**(code **)(*plVar4 + 0x10))(plVar4,&puStack_50);
    func_0x00010b17eb98();
  }
  func_0x00010b0fd928(&puStack_50);
  func_0x00010b17ecec();
  FUN_10b17c53c(auStack_88);
  return;
}



/* Entry: 10b17bc30; end: 10b17bc6f;  */

void FUN_10b17bc30(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uStack_20;
  long lStack_18;
  
  uStack_20 = param_2;
  lStack_18 = param_3;
  if (param_3 != 0) {
    do {
      func_0x00010b17e94c();
    } while (extraout_w10 != 0);
    do {
      func_0x00010b17e94c();
    } while (extraout_w10_00 != 0);
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  func_0x00010b0fd928(&uStack_20);
  return;
}



/* Entry: 10b17bc70; end: 10b17bc73;  */

void FUN_10b17bc70(long param_1)

{
  long unaff_x19;
  long *plVar1;
  long *unaff_x21;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  long alStack_40 [2];
  
  func_0x00010b17edac();
  plVar1 = (long *)(param_1 + 8);
  if (*plVar1 != 0) {
    ppuStack_78 = &PTR_DAT_1107e6938;
    ppuStack_70 = &PTR_DAT_1107e6938;
    func_0x000104bdfe3c(auStack_68,&ppuStack_70);
    alStack_40[0] = 0;
    alStack_40[1] = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    FUN_10b0fda14(auStack_50,plVar1,&uStack_60);
    FUN_10b0fda70(alStack_40,auStack_50);
    func_0x00010b17ed68();
    func_0x00010b0fd928(&uStack_60);
    __ZNSt3__15mutex4lockEv(alStack_40[0] + 0x80);
    __ZNSt13exception_ptraSERKS_(alStack_40[0] + 0xc0,auStack_68);
    func_0x00010b17ebd8(alStack_40[0]);
    if (unaff_x21 == (long *)0x0) {
      func_0x00010b17ece4(alStack_40[0]);
    }
    else {
      (**(code **)(*unaff_x21 + 0x10))();
      func_0x00010b17e95c();
    }
    func_0x00010b17ed54();
    __ZNSt13exception_ptrD1Ev(auStack_68);
    __ZNSt9exceptionD2Ev(&ppuStack_70);
    __ZNSt9exceptionD2Ev(&ppuStack_78);
  }
  func_0x00010b0fd928(unaff_x19 + 0x18);
  func_0x00010b0fd928(plVar1);
  return;
}



/* Entry: 10b17bc74; end: 10b17bca3;  */

undefined8 FUN_10b17bc74(long param_1)

{
  undefined8 unaff_x19;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x20);
  func_0x0001052b41d0(param_1 + 0x10);
  func_0x00010b17edc0();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b17bca4; end: 10b17be83;  */

void FUN_10b17bca4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined ***pppuVar3;
  undefined1 extraout_w8;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  char cStack_c0;
  undefined **ppuStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  ulong uStack_48;
  undefined1 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_28;
  
  if ((*(char *)(param_4 + 0x18) == '\x01') && (lVar2 = param_4, FUN_10b23b9ec(), (int)lVar2 != 0))
  {
    FUN_10b23e18c(&ppuStack_60,param_4);
    if (ppuStack_60 != (undefined **)0x0) {
      FUN_10b17be84(&uStack_a0);
      func_0x00010b17e9d0();
      func_0x00010b17eca4();
      return;
    }
    func_0x00010b17eca4();
  }
  else if (*(char *)(param_4 + 0x38) == '\x01') {
    ppuStack_60 = &PTR_FUN_110ceb6d8;
    uStack_58 = 0;
    puStack_50 = &DAT_11383d918;
    uStack_38 = 0;
    uStack_48 = uStack_48 & 0xffffffff00000000;
    pppuVar3 = &ppuStack_60;
    func_0x000107c3034c(pppuVar3,*(undefined8 *)(param_4 + 0x20),
                        *(int *)(param_4 + 0x28) - (int)*(undefined8 *)(param_4 + 0x20));
    iVar1 = 0;
    if (uStack_38._4_4_ == 4) {
      iVar1 = (int)pppuVar3;
    }
    if (iVar1 == 1) {
      FUN_10b17be84(&uStack_a0,&ppuStack_60);
      func_0x00010b17e9d0();
      func_0x00010b17ecac();
      return;
    }
    func_0x00010b17ecac();
  }
  func_0x00010b17ea98();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&ppuStack_b8);
  func_0x00010b141c88(&uStack_d8,&UNK_10f730c22);
  puStack_50 = (undefined *)uStack_a8;
  uStack_58 = uStack_b0;
  ppuStack_60 = ppuStack_b8;
  uStack_b0 = 0;
  uStack_a8 = 0;
  ppuStack_b8 = (undefined **)0x0;
  uStack_88 = 6;
  uStack_80 = uStack_80 & 0xffffffffffffff00;
  uStack_68 = cStack_c0 == '\x01';
  if ((bool)uStack_68) {
    uStack_78 = uStack_d0;
    uStack_80 = uStack_d8;
    uStack_70 = uStack_c8;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_d8 = 0;
  }
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_a0 = 0;
  uStack_48 = 6;
  uStack_40 = 0;
  uStack_28 = 0;
  if (cStack_c0 != '\0') {
    func_0x00010b17e92c();
    uStack_28 = extraout_w8;
  }
  FUN_10b17d44c(param_1,&ppuStack_60);
  func_0x0001052a03ac(&ppuStack_60);
  func_0x0001052a03ac(&uStack_a0);
  func_0x000107c279a4(&uStack_d8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_b8);
  return;
}



/* Entry: 10b17be84; end: 10b17bed7;  */

void FUN_10b17be84(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  func_0x00010b17ec68();
  func_0x00010b17ec74();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_SUB_110cc12a0;
  param_1[3] = &PTR_FUN_110cc12f0;
  FUN_10b151ff4(param_1 + 4);
  *unaff_x20 = param_1 + 3;
  unaff_x20[1] = param_1;
  return;
}



/* Entry: 10b17bed8; end: 10b17befb;  */

void FUN_10b17bed8(long param_1)

{
  func_0x00010b17edc0();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b17befc; end: 10b17bf97;  */

void FUN_10b17befc(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x000107c27d14(auStack_38,param_2,&UNK_10f730d25);
  uVar1 = param_3[1];
  puVar2 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar2 = param_3;
  }
  FUN_10b205f70(auStack_50,puVar2,uVar1);
  func_0x00010533a9c0(param_1,auStack_38,auStack_50);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_50);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
  return;
}



/* Entry: 10b17bf98; end: 10b17c30b;  */

long * FUN_10b17bf98(ulong param_1,undefined8 param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  ulong extraout_x8;
  long lVar6;
  long extraout_x8_00;
  ulong extraout_x9;
  ulong uVar7;
  ulong extraout_x9_00;
  long *plVar8;
  long *plVar9;
  long *extraout_x10;
  ulong uVar10;
  ulong uVar11;
  ulong extraout_x11;
  long *unaff_x19;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  ulong unaff_x25;
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  func_0x00010b17edcc();
  func_0x000107c278c4();
  uVar14 = unaff_x19[1];
  if (uVar14 != 0) {
    uVar13 = uVar14 - 1;
    if ((uVar14 & uVar13) == 0) {
      unaff_x25 = uVar13 & param_1;
    }
    else {
      unaff_x25 = param_1;
      if (uVar14 <= param_1) {
        uVar5 = 0;
        if (uVar14 != 0) {
          uVar5 = param_1 / uVar14;
        }
        unaff_x25 = param_1 - uVar5 * uVar14;
      }
    }
    plVar12 = *(long **)(*unaff_x19 + unaff_x25 * 8);
    if (plVar12 != (long *)0x0) {
      do {
        while( true ) {
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_10b17c054;
          uVar5 = plVar12[1];
          if (uVar5 != param_1) break;
          plVar4 = plVar12 + 2;
          func_0x000107c278d0(plVar4,param_2);
          if (((ulong)plVar4 & 1) != 0) goto LAB_10b17c2d0;
        }
        if ((uVar14 & uVar13) == 0) {
          uVar5 = uVar5 & uVar13;
        }
        else if (uVar14 <= uVar5) {
          uVar7 = 0;
          if (uVar14 != 0) {
            uVar7 = uVar5 / uVar14;
          }
          uVar5 = uVar5 - uVar7 * uVar14;
        }
      } while (uVar5 == unaff_x25);
    }
  }
LAB_10b17c054:
  plVar4 = unaff_x19 + 2;
  plVar12 = (long *)0x38;
  __Znwm();
  uStack_58 = 0;
  *plVar12 = 0;
  plVar12[1] = param_1;
  plStack_68 = plVar12;
  plStack_60 = plVar4;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(plVar12 + 2,param_2);
  plVar12[5] = 0;
  plVar12[6] = 0;
  uStack_58 = CONCAT71(uStack_58._1_7_,1);
  if ((uVar14 != 0) && ((float)(unaff_x19[3] + 1) <= *(float *)(unaff_x19 + 4) * (float)uVar14))
  goto LAB_10b17c258;
  bVar2 = 2 < uVar14;
  bVar3 = uVar14 == 3;
  func_0x00010b17edd8(uVar14 << 1);
  uVar13 = extraout_x8;
  if (!bVar2 || bVar3) {
    uVar13 = extraout_x9;
  }
  if (uVar13 - 1 == 0) {
    uVar13 = 2;
  }
  else if ((uVar13 & uVar13 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar14 = unaff_x19[1];
  if (uVar14 < uVar13) {
LAB_10b17c0fc:
    if (uVar13 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10b17c2f8);
      (*pcVar1)();
    }
    __Znwm(uVar13 << 3);
    FUN_10b17e650();
    unaff_x19[1] = uVar13;
    lVar6 = *unaff_x19;
    for (uVar14 = 0; uVar13 != uVar14; uVar14 = uVar14 + 1) {
      *(undefined8 *)(lVar6 + uVar14 * 8) = 0;
    }
    plVar8 = (long *)*plVar4;
    uVar14 = uVar13;
    if (plVar8 != (long *)0x0) {
      uVar10 = plVar8[1];
      uVar7 = uVar13 - 1;
      uVar5 = 0;
      if (uVar13 != 0) {
        uVar5 = uVar10 / uVar13;
      }
      uVar11 = uVar10;
      if (uVar13 <= uVar10) {
        uVar11 = uVar10 - uVar5 * uVar13;
      }
      if ((uVar13 & uVar7) == 0) {
        uVar11 = uVar10 & uVar7;
      }
      *(long **)(lVar6 + uVar11 * 8) = plVar4;
      while (plVar9 = plVar8, plVar8 = (long *)*plVar9, plVar8 != (long *)0x0) {
        uVar5 = plVar8[1];
        if ((uVar13 & uVar7) == 0) {
          uVar5 = uVar5 & uVar7;
        }
        else if (uVar13 <= uVar5) {
          uVar10 = 0;
          if (uVar13 != 0) {
            uVar10 = uVar5 / uVar13;
          }
          uVar5 = uVar5 - uVar10 * uVar13;
        }
        if (uVar5 != uVar11) {
          if (*(long *)(lVar6 + uVar5 * 8) == 0) {
            *(long **)(lVar6 + uVar5 * 8) = plVar9;
            uVar11 = uVar5;
          }
          else {
            func_0x00010b17eb0c();
            lVar6 = extraout_x8_00;
            uVar7 = extraout_x9_00;
            plVar8 = extraout_x10;
            uVar11 = extraout_x11;
          }
        }
      }
    }
  }
  else if (uVar13 < uVar14) {
    uVar5 = (ulong)((float)(ulong)unaff_x19[3] / *(float *)(unaff_x19 + 4));
    if ((uVar14 < 3) || ((uVar14 & uVar14 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x00010b17eacc();
    }
    if (uVar13 <= uVar5) {
      uVar13 = uVar5;
    }
    if (uVar13 < uVar14) {
      if (uVar13 != 0) goto LAB_10b17c0fc;
      FUN_10b17e650();
      unaff_x19[1] = 0;
      uVar14 = 0;
    }
    else {
      uVar14 = unaff_x19[1];
    }
  }
  if ((uVar14 & uVar14 - 1) == 0) {
    unaff_x25 = uVar14 - 1 & param_1;
  }
  else {
    unaff_x25 = param_1;
    if (uVar14 <= param_1) {
      uVar13 = 0;
      if (uVar14 != 0) {
        uVar13 = param_1 / uVar14;
      }
      unaff_x25 = param_1 - uVar13 * uVar14;
    }
  }
LAB_10b17c258:
  lVar6 = *unaff_x19;
  plVar8 = *(long **)(lVar6 + unaff_x25 * 8);
  if (plVar8 == (long *)0x0) {
    *plVar12 = *plVar4;
    *plVar4 = (long)plVar12;
    *(long **)(lVar6 + unaff_x25 * 8) = plVar4;
    if (*plVar12 != 0) {
      uVar13 = *(ulong *)(*plVar12 + 8);
      if ((uVar14 & uVar14 - 1) == 0) {
        uVar13 = uVar13 & uVar14 - 1;
      }
      else if (uVar14 <= uVar13) {
        uVar5 = 0;
        if (uVar14 != 0) {
          uVar5 = uVar13 / uVar14;
        }
        uVar13 = uVar13 - uVar5 * uVar14;
      }
      *(long **)(lVar6 + uVar13 * 8) = plVar12;
    }
  }
  else {
    *plVar12 = *plVar8;
    *plVar8 = (long)plVar12;
  }
  plStack_68 = (long *)0x0;
  unaff_x19[3] = unaff_x19[3] + 1;
  FUN_10b17e668(&plStack_68);
LAB_10b17c2d0:
  return plVar12 + 5;
}



/* Entry: 10b17c30c; end: 10b17c3d3;  */

void FUN_10b17c30c(void)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *unaff_x19;
  long *unaff_x20;
  
  func_0x00010b17edec();
  puVar4 = (undefined8 *)0x48;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110cc1340;
  puVar4[3] = &PTR_FUN_110cc1390;
  lVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  *unaff_x20 = 0;
  unaff_x20[1] = 0;
  puVar4[4] = lVar1;
  puVar4[5] = uVar2;
  lVar5 = unaff_x20[2];
  puVar4[6] = lVar5;
  lVar7 = unaff_x20[3];
  puVar4[7] = lVar7;
  *(int *)(puVar4 + 8) = (int)unaff_x20[4];
  if (lVar7 != 0) {
    uVar6 = *(ulong *)(lVar5 + 8);
    if ((uVar2 & uVar2 - 1) == 0) {
      uVar6 = uVar6 & uVar2 - 1;
    }
    else if (uVar2 <= uVar6) {
      uVar3 = 0;
      if (uVar2 != 0) {
        uVar3 = uVar6 / uVar2;
      }
      uVar6 = uVar6 - uVar3 * uVar2;
    }
    *(undefined8 **)(lVar1 + uVar6 * 8) = puVar4 + 6;
    unaff_x20[2] = 0;
    unaff_x20[3] = 0;
  }
  *unaff_x19 = puVar4 + 3;
  unaff_x19[1] = puVar4;
  return;
}



/* Entry: 10b17c3d4; end: 10b17c3d7;  */

undefined8 * FUN_10b17c3d4(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_110cc10c0;
  plVar2 = (long *)param_1[0x15];
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 2);
    plVar2 = (long *)*plVar2;
    FUN_10b17c678(lVar1);
    func_0x00010b17eb2c();
  }
  lVar1 = param_1[0x13];
  param_1[0x13] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0xb);
  func_0x0001052a1398(param_1 + 7);
  func_0x000107c27f08(param_1 + 5);
  func_0x00010b1257f8(param_1 + 3);
  FUN_10b17e338(param_1 + 1);
  return param_1;
}



/* Entry: 10b17c3d8; end: 10b17c40b;  */

void FUN_10b17c3d8(void)

{
  FUN_10b17e050();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


