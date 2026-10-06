/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1052b243c; end: 1052b2463;  */

long FUN_1052b243c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1052b2464; end: 1052b24d3;  */

undefined8 FUN_1052b2464(void)

{
  int iVar1;
  
  if ((bRam00000001130cc578 & 1) == 0) {
    iVar1 = 0x130cc578;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_1052810e0();
      func_0x00010b9911c4(0x1130cc568);
      ___cxa_guard_release(0x1130cc578);
    }
  }
  return 0x1130cc568;
}



/* Entry: 1052b24d4; end: 1052b2513;  */

void FUN_1052b24d4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    ___dynamic_cast(lVar1,&PTR_DAT_110d7ebe8,&PTR_DAT_110d7e928,0);
  }
  FUN_1052b2560();
  *param_1 = lVar1;
  return;
}



/* Entry: 1052b2514; end: 1052b255f;  */

void FUN_1052b2514(undefined8 *param_1,long param_2)

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
  func_0x0001052b2c84();
  return;
}



/* Entry: 1052b2560; end: 1052b258f;  */

undefined8 * FUN_1052b2560(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if ((param_1 != (undefined8 *)0x0) &&
     (puVar1 = param_1, func_0x00010b9a5818(), ((ulong)puVar1 & 1) == 0)) {
    func_0x00010b9a5890();
    FUN_1052b25b4();
    *puVar1 = &PTR_FUN_110875068;
    return puVar1;
  }
  return param_1;
}



/* Entry: 1052b2590; end: 1052b25b3;  */

void FUN_1052b2590(undefined8 *param_1)

{
  FUN_1052b25b4();
  *param_1 = &PTR_FUN_110875068;
  return;
}



/* Entry: 1052b25b4; end: 1052b25fb;  */

void FUN_1052b25b4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long unaff_x19;
  
  func_0x0001052b2d04();
  func_0x0001052b2614(param_1 + 8);
  *(undefined8 *)(unaff_x19 + 0x20) = *(undefined8 *)(unaff_x19 + 0x10);
  *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(unaff_x19 + 8);
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    plVar1 = (long *)(*(long *)(unaff_x19 + 0x10) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 1052b25fc; end: 1052b25ff;  */

void FUN_1052b25fc(long param_1)

{
  long unaff_x19;
  undefined **ppuStack_28;
  
  func_0x0001052b2d04();
  if (*(long *)(param_1 + 8) != 0) {
    ppuStack_28 = &PTR_DAT_1107e6938;
    FUN_1052b2890();
    __ZNSt9exceptionD2Ev(&ppuStack_28);
  }
  func_0x0001052b22bc(unaff_x19 + 0x18);
  func_0x0001052b22bc((long *)(param_1 + 8));
  return;
}



/* Entry: 1052b2600; end: 1052b262f;  */

void FUN_1052b2600(void)

{
  FUN_1052b282c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1052b2630; end: 1052b2633;  */

void FUN_1052b2630(long param_1)

{
  long unaff_x19;
  undefined **ppuStack_28;
  
  func_0x0001052b2d04();
  if (*(long *)(param_1 + 8) != 0) {
    ppuStack_28 = &PTR_DAT_1107e6938;
    FUN_1052b2890();
    __ZNSt9exceptionD2Ev(&ppuStack_28);
  }
  func_0x0001052b22bc(unaff_x19 + 0x18);
  func_0x0001052b22bc((long *)(param_1 + 8));
  return;
}



/* Entry: 1052b2634; end: 1052b2647;  */

void FUN_1052b2634(void)

{
  FUN_1052b282c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1052b2648; end: 1052b26fb;  */

undefined1 * FUN_1052b2648(long *param_1)

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
  func_0x0001052b2ce8();
  uVar4 = 1;
  uStack_28 = extraout_x8;
  FUN_1052b26fc(auStack_40);
  puVar1 = puStack_30;
  puStack_30[2] = 0;
  *puStack_30 = &PTR_FUN_1108750d0;
  puStack_30[1] = 0;
  puStack_30[4] = 0;
  puStack_30[3] = 0;
  puStack_30[6] = 0;
  puStack_30[5] = 0;
  puStack_30[7] = 0;
  puStack_30[8] = 0x3cb0b1bb;
  puStack_30[10] = 0;
  puStack_30[9] = 0;
  puStack_30[0xc] = 0;
  puStack_30[0xb] = 0;
  puStack_30[0xd] = 0;
  puStack_30[0xe] = 0x32aaaba7;
  puStack_30[0x10] = 0;
  puStack_30[0xf] = 0;
  puStack_30[0x12] = 0;
  puStack_30[0x11] = 0;
  puStack_30[0x14] = 0;
  puStack_30[0x13] = 0;
  puStack_30[0x16] = 0;
  puStack_30[0x15] = 0;
  puStack_30[0x17] = 0;
  puStack_30 = (undefined8 *)0x0;
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = (long)puVar1;
  FUN_1052b281c();
  func_0x0001052b2c98(uStack_28);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *(undefined8 *)(puVar2 + 8) = uVar4;
  puVar3 = puVar2;
  FUN_1052b2724();
  *(undefined1 **)(puVar2 + 0x10) = puVar3;
  return puVar2;
}



/* Entry: 1052b26fc; end: 1052b2723;  */

long FUN_1052b26fc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_1052b2724();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1052b2724; end: 1052b274f;  */

void FUN_1052b2724(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x155555555555556) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0xc0);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_1108750d0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1052b2750; end: 1052b2753;  */

void FUN_1052b2750(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108750d0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1052b2754; end: 1052b2767;  */

void FUN_1052b2754(void)

{
  func_0x0001052b2774();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1052b2768; end: 1052b2787;  */

void FUN_1052b2768(long param_1)

{
  func_0x0001052b27c8(param_1 + 0xb8);
  __ZNSt13exception_ptrD1Ev(param_1 + 0xb0);
  __ZNSt3__15mutexD1Ev(param_1 + 0x70);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x40);
  if (*(char *)(param_1 + 0x38) == '\x01') {
    func_0x0001002a2294();
  }
  return;
}



/* Entry: 1052b2788; end: 1052b27fb;  */

void FUN_1052b2788(long param_1)

{
  func_0x0001052b27c8(param_1 + 0xa0);
  __ZNSt13exception_ptrD1Ev(param_1 + 0x98);
  __ZNSt3__15mutexD1Ev(param_1 + 0x58);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x28);
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x0001002a2294();
  }
  return;
}



/* Entry: 1052b27fc; end: 1052b281b;  */

void FUN_1052b27fc(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x0001002a2294();
  }
  return;
}



/* Entry: 1052b281c; end: 1052b282b;  */

void FUN_1052b281c(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1052b282c; end: 1052b288f;  */

void FUN_1052b282c(long param_1)

{
  long unaff_x19;
  undefined **ppuStack_28;
  
  func_0x0001052b2d04();
  if (*(long *)(param_1 + 8) != 0) {
    ppuStack_28 = &PTR_DAT_1107e6938;
    FUN_1052b2890();
    __ZNSt9exceptionD2Ev(&ppuStack_28);
  }
  func_0x0001052b22bc(unaff_x19 + 0x18);
  func_0x0001052b22bc((long *)(param_1 + 8));
  return;
}



/* Entry: 1052b2890; end: 1052b28fb;  */

void FUN_1052b2890(undefined8 param_1)

{
  undefined **ppuStack_30;
  undefined1 auStack_28 [8];
  
  ppuStack_30 = &PTR_DAT_1107e6938;
  func_0x000104bdfe3c(auStack_28,&ppuStack_30);
  FUN_1052b28fc(param_1,auStack_28);
  func_0x0001052b2ce0();
  __ZNSt9exceptionD2Ev(&ppuStack_30);
  return;
}



/* Entry: 1052b28fc; end: 1052b291b;  */

void FUN_1052b28fc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_1052b291c(param_1,&uStack_18);
  return;
}



/* Entry: 1052b291c; end: 1052b29b3;  */

void FUN_1052b291c(undefined8 param_1,long *param_2)

{
  code *extraout_x8;
  
  func_0x0001052b2cc8();
  func_0x0001052b2d1c();
  func_0x0001052b2cd8();
  func_0x0001052b2c84();
  __ZNSt3__15mutex4lockEv(0x58);
  func_0x0001052b2cf8();
  FUN_1052b29b4();
  func_0x0001052b2cac();
  if (param_2 == (long *)0x0) {
    func_0x0001052b2d4c();
  }
  else {
    func_0x0001052b2cf8(*(undefined8 *)(*param_2 + 0x10));
    (*extraout_x8)();
    func_0x0001052b2c5c();
  }
  func_0x0001052b2c7c();
  return;
}



/* Entry: 1052b29b4; end: 1052b29c7;  */

void FUN_1052b29b4(undefined8 *param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13exception_ptraSERKS__1103461a0)(*param_2 + 0x98,*param_1);
  return;
}



/* Entry: 1052b29c8; end: 1052b29e7;  */

void FUN_1052b29c8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_1052b2a4c(param_1,&uStack_18);
  return;
}



/* Entry: 1052b29e8; end: 1052b2a4b;  */

void FUN_1052b29e8(undefined8 param_1)

{
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [8];
  
  __ZNSt13runtime_errorC1ERKS_(auStack_38);
  FUN_1052b2bd0(auStack_28,auStack_38);
  FUN_1052b28fc(param_1,auStack_28);
  __ZNSt13exception_ptrD1Ev(auStack_28);
  __ZNSt13runtime_errorD1Ev(auStack_38);
  return;
}



/* Entry: 1052b2a4c; end: 1052b2aff;  */

void FUN_1052b2a4c(undefined8 param_1,long *param_2)

{
  code *extraout_x8;
  
  func_0x0001052b2cc8();
  func_0x0001052b2d1c();
  func_0x0001052b2cd8();
  func_0x0001052b2c84();
  __ZNSt3__15mutex4lockEv(0x58);
  func_0x0001052b2cf8();
  FUN_1052b2b00();
  func_0x0001052b2cac();
  if (param_2 == (long *)0x0) {
    func_0x0001052b2d4c();
  }
  else {
    func_0x0001052b2cf8(*(undefined8 *)(*param_2 + 0x10));
    (*extraout_x8)();
    func_0x0001052b2c5c();
  }
  func_0x0001052b2c7c();
  return;
}



/* Entry: 1052b2b00; end: 1052b2b0f;  */

long FUN_1052b2b00(undefined8 *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (*(char *)(lVar1 + 0x20) == '\x01') {
    FUN_1052b2b60();
  }
  else {
    FUN_1052b2b44(lVar1,*param_1);
  }
  return lVar1;
}



/* Entry: 1052b2b10; end: 1052b2b43;  */

long FUN_1052b2b10(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_1052b2b60();
  }
  else {
    FUN_1052b2b44();
  }
  return param_1;
}



/* Entry: 1052b2b44; end: 1052b2b5f;  */

void FUN_1052b2b44(long param_1)

{
  func_0x0001006b78fc();
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 1052b2b60; end: 1052b2b83;  */

undefined8 FUN_1052b2b60(undefined8 param_1)

{
  FUN_1052b2b84();
  return param_1;
}



/* Entry: 1052b2b84; end: 1052b2bab;  */

void FUN_1052b2b84(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = *(char *)(param_1 + 3);
  if (cVar1 != *(char *)(param_2 + 3)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 3) == '\x01') {
        func_0x000100100fec();
        *(undefined1 *)(param_1 + 3) = 0;
      }
      return;
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    uVar2 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    param_1[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    *(undefined1 *)(param_1 + 3) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x0001006203d4();
    uVar2 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    param_1[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    return;
  }
  return;
}



/* Entry: 1052b2bac; end: 1052b2bcf;  */

void FUN_1052b2bac(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x000100100fec();
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



/* Entry: 1052b2bd0; end: 1052b2c27;  */

void FUN_1052b2bd0(void)

{
  code *pcVar1;
  
  ___cxa_allocate_exception(0x10);
  __ZNSt13runtime_errorC1ERKS_();
  ___cxa_throw();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1052b2c0c);
  (*pcVar1)();
}



/* Entry: 1052b2c28; end: 1052b2c4f;  */

undefined8 * FUN_1052b2c28(undefined8 *param_1)

{
  FUN_1052b2c50(*param_1);
  return param_1;
}



/* Entry: 1052b2c50; end: 1052b2d63;  */

void FUN_1052b2c50(long param_1)

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



/* Entry: 1052b2d64; end: 1052b2eb3;  */

void FUN_1052b2d64(ulong param_1)

{
  byte bVar1;
  undefined1 in_ZR;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  bVar1 = *(byte *)((param_1 & 0xffffffff) + 0x1138190c0);
  *(undefined1 *)((param_1 & 0xffffffff) + 0x1138190c0) = 1;
  if ((bVar1 & 1) != 0) goto LAB_1052b2dbc;
  if ((bRam00000001138190d8 & 1) == 0) goto LAB_1052b2dd8;
  while( true ) {
    func_0x000108b80888(0x1138190c8);
LAB_1052b2dbc:
    FUN_1052b2f34();
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
LAB_1052b2dd8:
    iVar2 = 0x138190d8;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_1052b2eb4();
      pcVar3 = "getNetworkRulesWithSignals";
      func_0x0001003a83dc(&uStack_58,"getNetworkRulesWithSignals");
      func_0x000108b80a94();
      pcVar4 = pcVar3;
      func_0x000108b80a94();
      func_0x0001003adcc0(auStack_50,pcVar4);
      func_0x000104bdbd48(auStack_68,pcVar3,auStack_50,1);
      uStack_40 = uStack_58;
      uStack_58 = 0;
      func_0x0001003aef98(auStack_38,auStack_68);
      func_0x000104bdbd44(0x1138190c8,0x1138190e0,1,&uStack_40,1);
      func_0x0001003b1c5c(&uStack_40);
      func_0x0001003adc18(auStack_60);
      func_0x0001003adc18(auStack_48);
      func_0x0001003a8c94(&uStack_58);
      ___cxa_guard_release(0x1138190d8);
    }
  }
  return;
}



/* Entry: 1052b2eb4; end: 1052b2f07;  */

void FUN_1052b2eb4(void)

{
  int iVar1;
  
  if ((bRam00000001138190e8 & 1) == 0) {
    iVar1 = 0x138190e8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(0x1138190e0,"_djinni_interface_BoltNetworkRulesProviderCallback");
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x1138190e8);
      return;
    }
  }
  return;
}



/* Entry: 1052b2f08; end: 1052b2f33;  */

long FUN_1052b2f08(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1052b2f34; end: 1052b2f4b;  */

void FUN_1052b2f34(void)

{
  return;
}



/* Entry: 1052b2f4c; end: 1052b3397;  */

void FUN_1052b2f4c(long *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined1 uVar4;
  int iVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  long *plVar8;
  long lVar9;
  undefined8 in_register_00005008;
  code *pcStack_158;
  undefined8 uStack_150;
  code *pcStack_140;
  undefined8 auStack_138 [2];
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  code *pcStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined8 *puStack_e0;
  byte abStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  code *pcStack_98;
  undefined **ppuStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_68;
  
  func_0x0001052b3eb4();
  uStack_68 = extraout_x8;
  if ((bRam00000001136b9e60 & 1) == 0) {
    iVar5 = 0x136b9e60;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      FUN_1052b3a54();
      FUN_1052b36d4(0);
      FUN_1052b36d4(1);
      func_0x00010b9941f8(&pcStack_98);
      func_0x00010b993b40(&pcStack_e8,pcStack_98,0x113819108);
      if ((abStack_d8[0] & 1) == 0) goto LAB_1052b32f0;
      func_0x0001003adcc0(0x1136b9e70,&pcStack_e8);
      func_0x0001003b12dc(&pcStack_e8);
      func_0x000104bdc2fc(&pcStack_98);
      ___cxa_guard_release(0x1136b9e60);
    }
  }
  func_0x0001003b2110(auStack_110,0x1136b9e78);
  pcStack_128 = FUN_1052b3398;
  func_0x0001052b3e78();
  if (extraout_x8_00 != 0) {
    do {
      func_0x0001052b3e00();
    } while (extraout_w10 != 0);
  }
  pcStack_100 = FUN_1052b3398;
  uStack_120 = 0;
  uStack_118 = 0;
  pcVar6 = (code *)0x40;
  __Znwm();
  pcStack_98 = FUN_1052b3aa8;
  ppuStack_90 = &PTR_FUN_110875120;
  pcStack_88 = FUN_1052b3398;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_80 = param_2;
  func_0x00010b9ac22c();
  pcStack_140 = pcVar6;
  func_0x0001052b3ea4();
  pcVar3 = pcVar6 + 8;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
    if (bVar2) {
      *(long *)pcVar3 = *(long *)pcVar3 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  pcStack_98 = pcVar6;
  func_0x00010b9a8ef8(&pcStack_e8,&pcStack_98);
  func_0x000104bda388(&pcStack_98);
  func_0x000104bda3d0(&pcStack_140);
  func_0x0001052b3efc();
  pcStack_98 = FUN_1052b34ec;
  func_0x0001052b3e78();
  ppuStack_90 = (undefined **)param_2;
  if (extraout_x8_01 != 0) {
    do {
      func_0x0001052b3e00();
    } while (extraout_w10_00 != 0);
  }
  FUN_1052b33e0(abStack_d8,&pcStack_98);
  pcStack_100 = FUN_1052b3554;
  func_0x0001052b3e78();
  uStack_f8 = param_2;
  if (extraout_x8_02 != 0) {
    do {
      func_0x0001052b3e00();
    } while (extraout_w10_01 != 0);
  }
  FUN_1052b33e0(auStack_c8,&pcStack_100);
  pcStack_140 = FUN_1052b35b4;
  func_0x0001052b3e78();
  auStack_138[0] = param_2;
  if (extraout_x8_03 != 0) {
    do {
      func_0x0001052b3e00();
    } while (extraout_w10_02 != 0);
  }
  FUN_1052b33e0(auStack_b8,&pcStack_140);
  pcStack_158 = FUN_1052b367c;
  func_0x0001052b3e78();
  uStack_150 = param_2;
  if (extraout_x8_04 != 0) {
    do {
      func_0x0001052b3e00();
    } while (extraout_w10_03 != 0);
  }
  FUN_1052b33e0(auStack_a8,&pcStack_158);
  func_0x000104bdb9bc(auStack_108,auStack_110,&pcStack_e8,5);
  lVar9 = 0x40;
  do {
    func_0x00010b9a8d98((long)&pcStack_e8 + lVar9);
    lVar9 = lVar9 + -0x10;
    uVar4 = lVar9 == -0x10;
  } while (!(bool)uVar4);
  func_0x0001052b3efc();
  func_0x00010529fde0(auStack_138);
  func_0x00010529fde0(&uStack_f8);
  func_0x0001052b3f04();
  func_0x00010529fde0(&uStack_120);
  func_0x0001003b1f60(auStack_110);
  puVar7 = (undefined8 *)0x50;
  __Znwm();
  plVar8 = puVar7 + 1;
  *plVar8 = 0;
  puVar7[2] = 0;
  *puVar7 = &PTR_DAT_110875170;
  pcVar3 = (code *)(puVar7 + 3);
  func_0x00010b9ace44(pcVar3,auStack_108);
  puVar7[3] = &PTR_DAT_1108751c0;
  func_0x0001052b3e78();
  puVar7[9] = in_register_00005008;
  puVar7[8] = param_2;
  if (extraout_x8_05 != 0) {
    do {
      func_0x0001052b3e00();
    } while (extraout_w10_04 != 0);
  }
  if ((puVar7[5] == 0) || (uVar4 = *(long *)(puVar7[5] + 8) == -1, pcVar6 = pcVar3, (bool)uVar4)) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = *plVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    pcStack_e8 = pcVar3;
    puStack_e0 = puVar7;
    func_0x0001003a8180(puVar7 + 4,&pcStack_e8);
    func_0x0001003a90c4(&pcStack_e8);
    pcStack_98 = pcVar3;
    pcVar6 = pcVar3;
    if (puVar7[5] != 0) goto LAB_1052b322c;
  }
  else {
LAB_1052b322c:
    do {
      pcStack_98 = pcVar6;
      func_0x0001052b3e00();
      pcVar6 = pcStack_98;
    } while (extraout_w10_05 != 0);
  }
  *param_1 = (long)pcVar3;
  FUN_1052b3dd4(&pcStack_98);
  func_0x000104bdbf78(auStack_108);
  func_0x0001052b3e44(uStack_68);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
LAB_1052b32f0:
  func_0x000104bdc2c8();
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1052b32f8);
  (*pcVar3)();
}



/* Entry: 1052b3398; end: 1052b33df;  */

void FUN_1052b3398(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_38 [24];
  
  (**(code **)(*(long *)*param_2 + 0x10))(auStack_38);
  FUN_1052808e4(param_1,auStack_38);
  func_0x0001052b3e68();
  return;
}



/* Entry: 1052b33e0; end: 1052b34eb;  */

void FUN_1052b33e0(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  code *pcVar4;
  code **ppcVar5;
  int iVar6;
  undefined8 extraout_x8;
  undefined8 uVar7;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [16];
  code *pcStack_d0;
  code **ppcStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  
  func_0x0001052b3eb4();
  uStack_a8 = param_2[1];
  uStack_b0 = *param_2;
  uVar7 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  pcVar4 = (code *)0x40;
  uStack_98 = uStack_b0;
  uStack_48 = extraout_x8;
  __Znwm();
  pcStack_78 = FUN_1052b3c58;
  ppuStack_70 = &PTR_FUN_110875140;
  uStack_60 = uStack_a8;
  uStack_68 = uStack_b0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_58 = uVar7;
  func_0x00010b9ac22c();
  pcStack_80 = pcVar4;
  func_0x0001052b3e94();
  pcVar1 = pcVar4 + 8;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar3) {
      *(long *)pcVar1 = *(long *)pcVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  iVar6 = (int)&pcStack_78;
  pcStack_78 = pcVar4;
  func_0x00010b9a8ef8(param_1);
  func_0x000104bda388(&pcStack_78);
  ppcVar5 = &pcStack_80;
  func_0x000104bda3d0();
  func_0x0001052b3f04();
  func_0x0001052b3e44(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    func_0x0001052b3e58();
  }
  else {
    func_0x0001052b3e94();
    __ZdlPv(pcVar4);
  }
  func_0x000104bd46a0();
  pcStack_b8 = FUN_1052b34ec;
  pcStack_d0 = pcVar4;
  ppcStack_c8 = ppcVar5;
  puStack_c0 = &stack0xfffffffffffffff0;
  func_0x0001052b3e10();
  FUN_1052a8f44(auStack_f8);
  func_0x0001052b3e84();
  FUN_1052a92cc(auStack_f8);
  func_0x0001052b3e60(auStack_e0);
  func_0x0001052b3e70();
  return;
}



/* Entry: 1052b34ec; end: 1052b3553;  */

void FUN_1052b34ec(void)

{
  undefined1 auStack_48 [24];
  undefined1 auStack_30 [16];
  
  func_0x0001052b3e10();
  FUN_1052a8f44(auStack_48);
  func_0x0001052b3e84();
  FUN_1052a92cc(auStack_48);
  func_0x0001052b3e60(auStack_30);
  func_0x0001052b3e70();
  return;
}



/* Entry: 1052b3554; end: 1052b35b3;  */

void FUN_1052b3554(void)

{
  undefined1 auStack_48 [24];
  undefined1 auStack_30 [16];
  
  func_0x0001052b3e10();
  func_0x000104bdbf60(auStack_48);
  func_0x0001052b3e84();
  func_0x0001052b3e68();
  func_0x0001052b3e60(auStack_30);
  func_0x0001052b3e70();
  return;
}



/* Entry: 1052b35b4; end: 1052b367b;  */

void FUN_1052b35b4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [16];
  
  puVar1 = param_1;
  func_0x0001052b3e10();
  func_0x00010b9abfa4(param_2,1);
  plVar2 = (long *)*param_1;
  func_0x000104bdbf60(auStack_58,puVar1);
  func_0x000104bdbf60(auStack_70,param_2);
  (**(code **)(*plVar2 + 0x28))(auStack_40,plVar2,auStack_58,auStack_70);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_70);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  func_0x0001052b3e60(auStack_40);
  func_0x00010529fde0(auStack_40);
  return;
}



/* Entry: 1052b367c; end: 1052b36d3;  */

void FUN_1052b367c(undefined8 *param_1)

{
  undefined1 auStack_30 [16];
  
  (**(code **)(*(long *)*param_1 + 0x30))(auStack_30);
  func_0x0001052b3e60(auStack_30);
  func_0x00010529fde0(auStack_30);
  return;
}



/* Entry: 1052b36d4; end: 1052b39bb;  */

void FUN_1052b36d4(ulong param_1)

{
  byte bVar1;
  undefined1 in_ZR;
  int iVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined8 extraout_x8;
  long lVar5;
  undefined1 auStack_168 [16];
  undefined8 uStack_158;
  undefined1 auStack_150 [16];
  undefined8 uStack_140;
  undefined1 auStack_138 [16];
  undefined8 uStack_128;
  undefined1 auStack_120 [16];
  undefined8 uStack_110;
  undefined1 auStack_108 [16];
  undefined8 uStack_f8;
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined1 auStack_a8 [16];
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x0001052b3eb4();
  bVar1 = *(byte *)((param_1 & 0xffffffff) + 0x1136b9e58);
  *(undefined1 *)((param_1 & 0xffffffff) + 0x1136b9e58) = 1;
  uStack_38 = extraout_x8;
  if ((bVar1 & 1) != 0) goto LAB_1052b3728;
  if ((bRam00000001136b9e68 & 1) == 0) goto LAB_1052b374c;
  while( true ) {
    func_0x000108b80888(0x1136b9e80);
LAB_1052b3728:
    func_0x0001052b3e44(uStack_38);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
LAB_1052b374c:
    iVar2 = 0x136b9e68;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_1052b3a54();
      func_0x0001003a83dc(&uStack_f8,"uniqueIdentifier");
      func_0x000104bdbd7c();
      func_0x0001052b3ef0(auStack_108);
      uStack_b0 = uStack_f8;
      uStack_f8 = 0;
      func_0x0001003aef98(auStack_a8,auStack_108);
      pcVar3 = "withAdditionalSupportedStreamingProtocols";
      func_0x0001003a83dc(&uStack_110,"withAdditionalSupportedStreamingProtocols");
      FUN_1052b39bc();
      FUN_1052a88e4();
      func_0x0001003adcc0(auStack_c0,pcVar3);
      func_0x0001052b3f0c();
      func_0x000104bdbd48(auStack_120);
      uStack_98 = uStack_110;
      uStack_110 = 0;
      func_0x0001003aef98(auStack_90,auStack_120);
      pcVar3 = "withSHA256Validation";
      func_0x0001003a83dc(&uStack_128,"withSHA256Validation");
      FUN_1052b39bc();
      func_0x000104bdbd7c();
      func_0x0001003adcc0(auStack_d0,pcVar3);
      func_0x0001052b3f0c();
      func_0x000104bdbd48(auStack_138);
      uStack_80 = uStack_128;
      uStack_128 = 0;
      func_0x0001003aef98(auStack_78,auStack_138);
      pcVar3 = "withEncryption";
      func_0x0001003a83dc(&uStack_140,"withEncryption");
      FUN_1052b39bc();
      func_0x000104bdbd7c();
      puVar4 = auStack_f0;
      func_0x0001003adcc0(puVar4,pcVar3);
      func_0x000104bdbd7c();
      func_0x0001003adcc0(auStack_e0,puVar4);
      func_0x0001052b3f0c();
      func_0x000104bdbd48(auStack_150);
      uStack_68 = uStack_140;
      uStack_140 = 0;
      func_0x0001003aef98(auStack_60,auStack_150);
      func_0x0001003a83dc(&uStack_158,"storeAsSingleFile");
      FUN_1052b39bc();
      func_0x0001052b3ef0(auStack_168);
      uStack_50 = uStack_158;
      uStack_158 = 0;
      func_0x0001003aef98(auStack_48,auStack_168);
      func_0x000104bdbd44(0x1136b9e80,0x113819108,1,&uStack_b0,5);
      lVar5 = 0x60;
      do {
        func_0x0001003b1c5c(auStack_a8 + lVar5 + -8);
        lVar5 = lVar5 + -0x18;
      } while (lVar5 != -0x18);
      func_0x0001052b3e20(auStack_168);
      func_0x0001003a8c94(&uStack_158);
      func_0x0001052b3e20(auStack_150);
      lVar5 = 0x18;
      do {
        func_0x0001003adc18(auStack_f0 + lVar5);
        lVar5 = lVar5 + -0x10;
        in_ZR = lVar5 == -8;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(&uStack_140);
      func_0x0001052b3e20(auStack_138);
      func_0x0001052b3e20(auStack_d0);
      func_0x0001003a8c94(&uStack_128);
      func_0x0001052b3e20(auStack_120);
      func_0x0001052b3e20(auStack_c0);
      func_0x0001003a8c94(&uStack_110);
      func_0x0001052b3e20(auStack_108);
      func_0x0001003a8c94(&uStack_f8);
      ___cxa_guard_release(0x1136b9e68);
    }
  }
  return;
}



/* Entry: 1052b39bc; end: 1052b3a53;  */

void FUN_1052b39bc(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lStack_20;
  undefined2 uStack_18;
  
  if ((bRam0000000113819100 & 1) == 0) {
    iVar4 = 0x13819100;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      FUN_1052b3a54();
      lStack_20 = lRam0000000113819108;
      if (lRam0000000113819108 != 0) {
        piVar1 = (int *)(lRam0000000113819108 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_18 = 0xff00;
      func_0x0001003ad9a4(0x1138190f0,&lStack_20);
      func_0x0001003a8c94(&lStack_20);
      ___cxa_guard_release(0x113819100);
    }
  }
  func_0x0001052b3f0c();
  return;
}



/* Entry: 1052b3a54; end: 1052b3aa7;  */

void FUN_1052b3a54(void)

{
  int iVar1;
  
  if ((bRam0000000113819110 & 1) == 0) {
    iVar1 = 0x13819110;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(0x113819108,"_djinni_interface_ContentBundle");
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x113819110);
      return;
    }
  }
  return;
}



/* Entry: 1052b3aa8; end: 1052b3b03;  */

void FUN_1052b3aa8(void)

{
  func_0x0001052b3ed8();
  return;
}



/* Entry: 1052b3b04; end: 1052b3bd3;  */

void FUN_1052b3b04(undefined8 *param_1,long *param_2,long param_3)

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
  func_0x0001052b3e68();
  uVar2 = *(undefined8 *)(param_3 + 0x18);
  plStack_60 = plStack_40;
  plStack_40 = (long *)0x0;
  func_0x00010b99f560(auStack_58,&plStack_60);
  func_0x00010b99ff08(uVar2,auStack_58);
  func_0x000104bda93c(auStack_58);
  func_0x0001003a8c94(&plStack_60);
  *(undefined2 *)(param_1 + 1) = 1;
  *param_1 = 0;
  func_0x0001003a8c94(&plStack_40);
  return;
}



/* Entry: 1052b3bd4; end: 1052b3c0b;  */

void FUN_1052b3bd4(undefined8 *param_1,long param_2,long param_3)

{
  func_0x00010b99febc(*(undefined8 *)(param_3 + 0x18),param_2 + 0x10);
  *(undefined2 *)(param_1 + 1) = 1;
  *param_1 = 0;
  return;
}



/* Entry: 1052b3c0c; end: 1052b3c57;  */

void FUN_1052b3c0c(long param_1)

{
  param_1 = param_1 + 0x10;
  func_0x0001005f1e70();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1052b3c58; end: 1052b3cb3;  */

void FUN_1052b3c58(void)

{
  func_0x0001052b3ed8();
  return;
}



/* Entry: 1052b3cb4; end: 1052b3cd7;  */

void FUN_1052b3cb4(long param_1)

{
  param_1 = param_1 + 0x10;
  func_0x0001005f1e70();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1052b3cd8; end: 1052b3ceb;  */

void FUN_1052b3cd8(void)

{
  FUN_1052b3dc4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1052b3cec; end: 1052b3cff;  */

void FUN_1052b3cec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001052b3cf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1052b3d00; end: 1052b3d13;  */

void FUN_1052b3d00(void)

{
  FUN_1052b3d24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1052b3d14; end: 1052b3d23;  */

undefined1  [16] FUN_1052b3d14(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x10;
  auVar1._0_8_ = "Djinni C++ Proxy";
  return auVar1;
}



/* Entry: 1052b3d24; end: 1052b3dc3;  */

void FUN_1052b3d24(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uStack_28;
  
  *param_1 = &PTR_DAT_1108751c0;
  __ZNSt3__15mutex4lockEv(0x11328ada8);
  puVar3 = param_1 + 5;
  uStack_28 = *puVar3;
  lVar2 = 0x11328ad40;
  func_0x000104bdbfcc(0x11328ad40,&uStack_28);
  iVar1 = *(int *)(lVar2 + 0x28) + -1;
  *(int *)(lVar2 + 0x28) = iVar1;
  if (iVar1 == 0) {
    uStack_28 = *puVar3;
    func_0x000104bdc09c(0x11328ad40,&uStack_28);
  }
  __ZNSt3__15mutex6unlockEv(0x11328ada8);
  func_0x00010529fde0(puVar3);
  func_0x00010b9ace94(param_1);
  return;
}



/* Entry: 1052b3dc4; end: 1052b3dd3;  */

void FUN_1052b3dc4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110875170;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1052b3dd4; end: 1052b3dff;  */

long * FUN_1052b3dd4(long *param_1)

{
  if (*param_1 != 0) {
    func_0x0001003a916c();
  }
  return param_1;
}



/* Entry: 1052b3e00; end: 1052b3f23;  */

void FUN_1052b3e00(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 1052b3f24; end: 1052b40e3;  */

void FUN_1052b3f24(ulong param_1)

{
  byte bVar1;
  undefined1 in_ZR;
  int iVar2;
  long lVar3;
  undefined1 auStack_c8 [16];
  undefined8 uStack_b8;
  undefined1 auStack_b0 [16];
  undefined8 uStack_a0;
  undefined1 auStack_98 [16];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_1052b439c();
  bVar1 = *(byte *)((param_1 & 0xffffffff) + 0x113819118);
  *(undefined1 *)((param_1 & 0xffffffff) + 0x113819118) = 1;
  if ((bVar1 & 1) != 0) goto LAB_1052b3f88;
  if ((bRam0000000113819148 & 1) == 0) goto LAB_1052b3fac;
  while( true ) {
    func_0x000108b80888(0x113819138,param_1);
LAB_1052b3f88:
    func_0x0001052b4388(uStack_38);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
LAB_1052b3fac:
    iVar2 = 0x13819148;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_1052b417c();
      func_0x0001003a83dc(&uStack_88,"contentLocation");
      FUN_1052b44c0();
      func_0x0001052b4364(auStack_98);
      uStack_80 = uStack_88;
      uStack_88 = 0;
      func_0x0001003aef98(auStack_78,auStack_98);
      func_0x0001003a83dc(&uStack_a0,"videoMetadata");
      FUN_1052b42ac();
      func_0x0001052b4364(auStack_b0);
      uStack_68 = uStack_a0;
      uStack_a0 = 0;
      func_0x0001003aef98(auStack_60,auStack_b0);
      func_0x0001003a83dc(&uStack_b8,"selectedVariantInfo");
      FUN_1052b4308();
      func_0x0001052b4364(auStack_c8);
      uStack_50 = uStack_b8;
      uStack_b8 = 0;
      func_0x0001003aef98(auStack_48,auStack_c8);
      func_0x000104bdbd44(0x113819138,0x113819150,1,&uStack_80,3);
      lVar3 = 0x30;
      do {
        func_0x0001003b1c5c(auStack_78 + lVar3 + -8);
        lVar3 = lVar3 + -0x18;
        in_ZR = lVar3 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001052b4380(auStack_c8);
      func_0x0001003a8c94(&uStack_b8);
      func_0x0001052b4380(auStack_b0);
      func_0x0001003a8c94(&uStack_a0);
      func_0x0001052b4380(auStack_98);
      func_0x0001003a8c94(&uStack_88);
      ___cxa_guard_release(0x113819148);
    }
  }
  return;
}



/* Entry: 1052b40e4; end: 1052b417b;  */

undefined8 FUN_1052b40e4(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lStack_20;
  undefined2 uStack_18;
  
  if ((bRam0000000113819130 & 1) == 0) {
    iVar4 = 0x13819130;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      FUN_1052b417c();
      lStack_20 = lRam0000000113819150;
      if (lRam0000000113819150 != 0) {
        piVar1 = (int *)(lRam0000000113819150 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_18 = 0xff00;
      func_0x0001003ad9a4(0x113819120,&lStack_20);
      func_0x0001052b4370();
      ___cxa_guard_release(0x113819130);
    }
  }
  return 0x113819120;
}



/* Entry: 1052b417c; end: 1052b41cf;  */

void FUN_1052b417c(void)

{
  int iVar1;
  
  if ((bRam0000000113819158 & 1) == 0) {
    iVar1 = 0x13819158;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(0x113819150,"_djinni_interface_ContentBundleResolutionResult");
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x113819158);
      return;
    }
  }
  return;
}



/* Entry: 1052b41d0; end: 1052b41f7;  */

long FUN_1052b41d0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1052b41f8; end: 1052b4237;  */

void FUN_1052b41f8(long param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    FUN_1052ac664();
  }
  return;
}



/* Entry: 1052b4238; end: 1052b42ab;  */

long FUN_1052b4238(long param_1)

{
  func_0x0001001148fc(param_1 + 200);
  func_0x0001001148fc(param_1 + 0xa8);
  func_0x0001001148fc(param_1 + 0x88);
  func_0x0001001148fc(param_1 + 0x68);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x28);
  return param_1;
}



/* Entry: 1052b42ac; end: 1052b4307;  */

undefined8 FUN_1052b42ac(void)

{
  int iVar1;
  
  if ((bRam00000001130cc590 & 1) == 0) {
    iVar1 = 0x130cc590;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_1052b6f50();
      func_0x00010b990784(0x1130cc580);
      ___cxa_guard_release(0x1130cc590);
    }
  }
  return 0x1130cc580;
}



/* Entry: 1052b4308; end: 1052b4363;  */

undefined8 FUN_1052b4308(void)

{
  int iVar1;
  
  if ((bRam00000001130cc5a8 & 1) == 0) {
    iVar1 = 0x130cc5a8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_1052b696c();
      func_0x00010b990784(0x1130cc598);
      ___cxa_guard_release(0x1130cc5a8);
    }
  }
  return 0x1130cc598;
}



/* Entry: 1052b4364; end: 1052b439b;  */

void FUN_1052b4364(undefined8 param_1)

{
  undefined4 uStack_14;
  
  uStack_14 = 0x1000000;
  func_0x0001003b16ac(&uStack_14,param_1,0,0);
  return;
}



/* Entry: 1052b439c; end: 1052b44bf;  */

void FUN_1052b439c(ulong param_1)

{
  byte bVar1;
  undefined1 in_ZR;
  int iVar2;
  undefined8 extraout_x8;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  
  func_0x0001052b45c4();
  bVar1 = *(byte *)((param_1 & 0xffffffff) + 0x113819160);
  *(undefined1 *)((param_1 & 0xffffffff) + 0x113819160) = 1;
  uStack_28 = extraout_x8;
  if ((bVar1 & 1) != 0) goto LAB_1052b43ec;
  if ((bRam0000000113819190 & 1) == 0) goto LAB_1052b440c;
  while( true ) {
    func_0x000108b80888(0x113819180);
LAB_1052b43ec:
    func_0x0001052b45b0(uStack_28);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
LAB_1052b440c:
    iVar2 = 0x13819190;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_1052b455c();
      func_0x0001003a83dc(&uStack_48,"uniqueIdentifier");
      func_0x000104bdbd7c();
      func_0x000104bdbd48(auStack_58);
      uStack_40 = uStack_48;
      uStack_48 = 0;
      func_0x0001003aef98(auStack_38,auStack_58);
      func_0x000104bdbd44(0x113819180,0x113819198,1,&uStack_40,1);
      func_0x0001003b1c5c(&uStack_40);
      func_0x0001003adc18(auStack_50);
      func_0x0001003a8c94(&uStack_48);
      ___cxa_guard_release(0x113819190);
    }
  }
  return;
}



/* Entry: 1052b44c0; end: 1052b455b;  */

undefined8 FUN_1052b44c0(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lStack_20;
  undefined2 uStack_18;
  
  if ((bRam0000000113819178 & 1) == 0) {
    iVar4 = 0x13819178;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      FUN_1052b455c();
      lStack_20 = lRam0000000113819198;
      if (lRam0000000113819198 != 0) {
        piVar1 = (int *)(lRam0000000113819198 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_18 = 0xff00;
      func_0x0001003ad9a4(0x113819168,&lStack_20);
      func_0x0001003a8c94(&lStack_20);
      ___cxa_guard_release(0x113819178);
    }
  }
  return 0x113819168;
}



/* Entry: 1052b455c; end: 1052b45af;  */

void FUN_1052b455c(void)

{
  int iVar1;
  
  if ((bRam00000001138191a0 & 1) == 0) {
    iVar1 = 0x138191a0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(0x113819198,"_djinni_interface_ContentLocation");
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x1138191a0);
      return;
    }
  }
  return;
}



/* Entry: 1052b45b0; end: 1052b45d3;  */

void FUN_1052b45b0(void)

{
  return;
}



/* Entry: 1052b45d4; end: 1052b4adb;  */

undefined8 FUN_1052b45d4(void)

{
  undefined1 in_ZR;
  int iVar1;
  char *pcVar2;
  long lVar3;
  undefined1 auStack_200 [8];
  undefined1 auStack_1f8 [8];
  undefined1 auStack_1f0 [8];
  undefined1 auStack_1e8 [8];
  undefined1 auStack_1e0 [8];
  undefined1 auStack_1d8 [8];
  undefined1 auStack_1d0 [8];
  undefined1 auStack_1c8 [8];
  undefined1 auStack_1c0 [8];
  undefined1 auStack_1b8 [8];
  undefined1 auStack_1b0 [8];
  undefined1 auStack_1a8 [8];
  undefined1 auStack_1a0 [8];
  undefined1 auStack_198 [8];
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam00000001136b9e90 & 1) == 0) {
    iVar1 = 0x136b9e90;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(auStack_190,"_djinni_record_ContentResolveExtractedParams");
      pcVar2 = "contentId";
      func_0x0001003a83dc(auStack_198,"contentId");
      func_0x000104bdbd7c();
      func_0x0001003b1b50(auStack_188,auStack_198,pcVar2);
      pcVar2 = "videoMetadata";
      func_0x0001003a83dc(auStack_1a0,"videoMetadata");
      FUN_1052b42ac();
      func_0x0001003b1b50(auStack_170,auStack_1a0,pcVar2);
      func_0x0001003a83dc(auStack_1a8,"seekPointList");
      if ((bRam00000001136b9e98 & 1) == 0) goto LAB_1052b497c;
      goto LAB_1052b46bc;
    }
  }
  while (func_0x0001052b53c0(uStack_38), !(bool)in_ZR) {
    ___stack_chk_fail();
LAB_1052b497c:
    iVar1 = 0x136b9e98;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if ((bRam00000001136b9ea0 & 1) == 0) {
        iVar1 = 0x136b9ea0;
        ___cxa_guard_acquire();
        if (iVar1 != 0) {
          FUN_1052b6828();
          func_0x00010b990868(0x1136b9ed8);
          ___cxa_guard_release(0x1136b9ea0);
        }
      }
      func_0x00010b990784(0x1136b9ed8);
      ___cxa_guard_release(0x1136b9e98);
    }
LAB_1052b46bc:
    func_0x0001003b1b50(auStack_158,auStack_1a8,0x1136b9ec8);
    pcVar2 = "isOriginalUrl";
    func_0x0001003a83dc(auStack_1b0,"isOriginalUrl");
    func_0x000104bef4f0();
    func_0x0001003b1b50(auStack_140,auStack_1b0,pcVar2);
    func_0x0001003a83dc(auStack_1b8,"originalUrlReason");
    if ((bRam00000001136b9ea8 & 1) == 0) {
      iVar1 = 0x136b9ea8;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        func_0x00010b990e20(0x1136b9ee8);
        ___cxa_guard_release(0x1136b9ea8);
      }
    }
    func_0x0001003b1b50(auStack_128,auStack_1b8,0x1136b9ee8);
    pcVar2 = "isBoltFallbackServiceUrl";
    func_0x0001003a83dc(auStack_1c0,"isBoltFallbackServiceUrl");
    func_0x000104bef4f0();
    func_0x0001003b1b50(auStack_110,auStack_1c0,pcVar2);
    func_0x0001003a83dc(auStack_1c8,"boltFallbackServiceUrlReason");
    if ((bRam00000001136b9eb0 & 1) == 0) {
      iVar1 = 0x136b9eb0;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        func_0x00010b990e20(0x1136b9ef8);
        ___cxa_guard_release(0x1136b9eb0);
      }
    }
    func_0x0001003b1b50(auStack_f8,auStack_1c8,0x1136b9ef8);
    pcVar2 = "wasSecondaryUrlAvailable";
    func_0x0001003a83dc(auStack_1d0,"wasSecondaryUrlAvailable");
    func_0x000104bef4f0();
    func_0x0001003b1b50(auStack_e0,auStack_1d0,pcVar2);
    pcVar2 = "resolveTime";
    func_0x0001003a83dc(auStack_1d8,"resolveTime");
    func_0x000104bef438();
    func_0x0001003b1b50(auStack_c8,auStack_1d8,pcVar2);
    pcVar2 = "selectedVariantInfo";
    func_0x0001003a83dc(auStack_1e0,"selectedVariantInfo");
    FUN_1052b4308();
    func_0x0001003b1b50(auStack_b0,auStack_1e0,pcVar2);
    func_0x0001003a83dc(auStack_1e8,"additionalVariantRankingInfo");
    if ((bRam00000001136b9eb8 & 1) == 0) {
      iVar1 = 0x136b9eb8;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        FUN_1052b1c4c();
        func_0x00010b990784(0x1136b9f08);
        ___cxa_guard_release(0x1136b9eb8);
      }
    }
    func_0x0001003b1b50(auStack_98,auStack_1e8,0x1136b9f08);
    func_0x0001003a83dc(auStack_1f0,"availableVariants");
    if ((bRam00000001136b9ec0 & 1) == 0) {
      iVar1 = 0x136b9ec0;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        FUN_10527ed64();
        func_0x00010b990784(0x1136b9f18);
        ___cxa_guard_release(0x1136b9ec0);
      }
    }
    func_0x0001003b1b50(auStack_80,auStack_1f0,0x1136b9f18);
    pcVar2 = "assetGroupRelativePath";
    func_0x0001003a83dc(auStack_1f8,"assetGroupRelativePath");
    func_0x000104bf1120();
    func_0x0001003b1b50(auStack_68,auStack_1f8,pcVar2);
    pcVar2 = "expirationTime";
    func_0x0001003a83dc(auStack_200,"expirationTime");
    func_0x000104bef438();
    func_0x0001003b1b50(auStack_50,auStack_200,pcVar2);
    func_0x000104bdbd44(0x1138191a8,auStack_190,0,auStack_188,0xe);
    lVar3 = 0x138;
    do {
      func_0x0001003b1c5c(auStack_188 + lVar3);
      lVar3 = lVar3 + -0x18;
      in_ZR = lVar3 == -0x18;
    } while (!(bool)in_ZR);
    func_0x0001003a8c94(auStack_200);
    func_0x0001003a8c94(auStack_1f8);
    func_0x0001003a8c94(auStack_1f0);
    func_0x0001003a8c94(auStack_1e8);
    func_0x0001003a8c94(auStack_1e0);
    func_0x0001003a8c94(auStack_1d8);
    func_0x0001003a8c94(auStack_1d0);
    func_0x0001003a8c94(auStack_1c8);
    func_0x0001003a8c94(auStack_1c0);
    func_0x0001003a8c94(auStack_1b8);
    func_0x0001003a8c94(auStack_1b0);
    func_0x0001003a8c94(auStack_1a8);
    func_0x0001003a8c94(auStack_1a0);
    func_0x0001003a8c94(auStack_198);
    func_0x0001003a8c94(auStack_190);
    ___cxa_guard_release(0x1136b9e90);
  }
  return 0x1138191a8;
}



/* Entry: 1052b4adc; end: 1052b4c13;  */

undefined8 *
FUN_1052b4adc(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined4 param_6,undefined1 param_7,undefined4 param_8,
             undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 *param_16,
             undefined8 param_17,undefined8 param_18)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  FUN_1052b4c14(param_1 + 3,param_3);
  FUN_1052b4c98(param_1 + 0xb,param_4);
  *(undefined1 *)(param_1 + 0xf) = param_5;
  *(undefined4 *)((long)param_1 + 0x7c) = param_6;
  *(undefined1 *)(param_1 + 0x10) = param_7;
  *(undefined4 *)((long)param_1 + 0x84) = param_8;
  *(undefined1 *)(param_1 + 0x11) = param_9;
  param_1[0x12] = param_11;
  param_1[0x13] = param_12;
  FUN_1052b4cd8(param_1 + 0x14,param_13);
  FUN_1052b4e64(param_1 + 0x32,param_14);
  FUN_1052b4f0c(param_1 + 0x3b,param_15);
  *(undefined1 *)(param_1 + 0x3f) = 0;
  *(undefined1 *)(param_1 + 0x42) = 0;
  if (*(char *)(param_16 + 3) == '\x01') {
    uVar2 = param_16[1];
    uVar1 = *param_16;
    param_1[0x41] = param_16[2];
    param_1[0x40] = uVar2;
    param_1[0x3f] = uVar1;
    param_16[1] = 0;
    param_16[2] = 0;
    *param_16 = 0;
    *(undefined1 *)(param_1 + 0x42) = 1;
  }
  param_1[0x43] = param_17;
  param_1[0x44] = param_18;
  return param_1;
}



/* Entry: 1052b4c14; end: 1052b4c3b;  */

void FUN_1052b4c14(long param_1)

{
  func_0x0001052b53a8();
  *(undefined1 *)(param_1 + 0x38) = 0;
  FUN_1052b4c3c();
  return;
}



/* Entry: 1052b4c3c; end: 1052b4c4f;  */

void FUN_1052b4c3c(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_1052b4c6c();
    *(undefined1 *)(param_1 + 0x38) = 1;
    return;
  }
  return;
}



/* Entry: 1052b4c50; end: 1052b4c6b;  */

void FUN_1052b4c50(long param_1)

{
  FUN_1052b4c6c();
  *(undefined1 *)(param_1 + 0x38) = 1;
  return;
}



/* Entry: 1052b4c6c; end: 1052b4c97;  */

void FUN_1052b4c6c(long param_1,long param_2)

{
  undefined8 uVar1;
  
  FUN_1052ac5d8();
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  return;
}



/* Entry: 1052b4c98; end: 1052b4cbf;  */

void FUN_1052b4c98(long param_1)

{
  func_0x0001052b53a8();
  *(undefined1 *)(param_1 + 0x18) = 0;
  FUN_1052b4cc0();
  return;
}



/* Entry: 1052b4cc0; end: 1052b4cd7;  */

void FUN_1052b4cc0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_2 + 3) == '\x01') {
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
  return;
}



/* Entry: 1052b4cd8; end: 1052b4cff;  */

void FUN_1052b4cd8(long param_1)

{
  func_0x0001052b53a8();
  *(undefined1 *)(param_1 + 0xe8) = 0;
  FUN_1052b4d00();
  return;
}



/* Entry: 1052b4d00; end: 1052b4d13;  */

void FUN_1052b4d00(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0xe8) == '\x01') {
    FUN_1052b4d30();
    *(undefined1 *)(param_1 + 0xe8) = 1;
    return;
  }
  return;
}



/* Entry: 1052b4d14; end: 1052b4d2f;  */

void FUN_1052b4d14(long param_1)

{
  FUN_1052b4d30();
  *(undefined1 *)(param_1 + 0xe8) = 1;
  return;
}



/* Entry: 1052b4d30; end: 1052b4e63;  */

void FUN_1052b4d30(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = param_2[1];
  uVar2 = *param_2;
  uVar5 = param_2[3];
  uVar4 = param_2[2];
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  param_1[1] = uVar3;
  *param_1 = uVar2;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  uVar3 = param_2[6];
  uVar2 = param_2[5];
  param_1[7] = param_2[7];
  param_1[6] = uVar3;
  param_1[5] = uVar2;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[5] = 0;
  param_1[8] = param_2[8];
  uVar3 = param_2[10];
  uVar2 = param_2[9];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar3;
  param_1[9] = uVar2;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[9] = 0;
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined1 *)(param_1 + 0x10) = 0;
  if (*(char *)(param_2 + 0x10) == '\x01') {
    uVar3 = param_2[0xe];
    uVar2 = param_2[0xd];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar3;
    param_1[0xd] = uVar2;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    param_2[0xd] = 0;
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  if (*(char *)(param_2 + 0x14) == '\x01') {
    uVar3 = param_2[0x12];
    uVar2 = param_2[0x11];
    param_1[0x13] = param_2[0x13];
    param_1[0x12] = uVar3;
    param_1[0x11] = uVar2;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0x11] = 0;
    *(undefined1 *)(param_1 + 0x14) = 1;
  }
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  if (*(char *)(param_2 + 0x18) == '\x01') {
    uVar3 = param_2[0x16];
    uVar2 = param_2[0x15];
    param_1[0x17] = param_2[0x17];
    param_1[0x16] = uVar3;
    param_1[0x15] = uVar2;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    param_2[0x15] = 0;
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  if (*(char *)(param_2 + 0x1c) == '\x01') {
    uVar3 = param_2[0x1a];
    uVar2 = param_2[0x19];
    param_1[0x1b] = param_2[0x1b];
    param_1[0x1a] = uVar3;
    param_1[0x19] = uVar2;
    param_2[0x1a] = 0;
    param_2[0x1b] = 0;
    param_2[0x19] = 0;
    *(undefined1 *)(param_1 + 0x1c) = 1;
  }
  return;
}



/* Entry: 1052b4e64; end: 1052b4e8b;  */

void FUN_1052b4e64(long param_1)

{
  func_0x0001052b53a8();
  *(undefined1 *)(param_1 + 0x40) = 0;
  FUN_1052b4e8c();
  return;
}



/* Entry: 1052b4e8c; end: 1052b4e9f;  */

void FUN_1052b4e8c(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_1052b4ebc();
    *(undefined1 *)(param_1 + 0x40) = 1;
    return;
  }
  return;
}



/* Entry: 1052b4ea0; end: 1052b4ebb;  */

void FUN_1052b4ea0(long param_1)

{
  FUN_1052b4ebc();
  *(undefined1 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 1052b4ebc; end: 1052b4f0b;  */

undefined4 * FUN_1052b4ebc(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  uVar1 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = uVar1;
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  func_0x0001006b78fc(param_1 + 8,param_2 + 8);
  return param_1;
}



/* Entry: 1052b4f0c; end: 1052b4f33;  */

void FUN_1052b4f0c(long param_1)

{
  func_0x0001052b53a8();
  *(undefined1 *)(param_1 + 0x18) = 0;
  FUN_1052b4f34();
  return;
}



/* Entry: 1052b4f34; end: 1052b4f4b;  */

void FUN_1052b4f34(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_2 + 3) == '\x01') {
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
  return;
}



/* Entry: 1052b4f4c; end: 1052b4f8b;  */

void FUN_1052b4f4c(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x0001002920a0();
  }
  return;
}



/* Entry: 1052b4f8c; end: 1052b4fb7;  */

long FUN_1052b4f8c(long param_1)

{
  func_0x0001002a2294(param_1 + 0x20);
  func_0x0001002920a0(param_1 + 8);
  return param_1;
}



/* Entry: 1052b4fb8; end: 1052b4fd7;  */

void FUN_1052b4fb8(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_1052b4fd8();
  }
  return;
}



/* Entry: 1052b4fd8; end: 1052b500b;  */

undefined8 FUN_1052b4fd8(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  FUN_1052b500c(&uStack_28);
  return param_1;
}


