/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10877c6d8; end: 10877c6db;  */

void FUN_10877c6d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6dbf8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10877c6dc; end: 10877c6ef;  */

void FUN_10877c6dc(void)

{
  func_0x00010877c6f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10877c6f0; end: 10877c703;  */

void FUN_10877c6f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001008510ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10877c704; end: 10877c727;  */

void FUN_10877c704(long param_1)

{
  func_0x000107c3335c();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10877c728; end: 10877c72b;  */

void FUN_10877c728(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6dc48;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10877c72c; end: 10877c73f;  */

void FUN_10877c72c(void)

{
  func_0x00010877c748();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10877c740; end: 10877c753;  */

void FUN_10877c740(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001008510ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10877c754; end: 10877c777;  */

void FUN_10877c754(long param_1)

{
  func_0x000107c3335c();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10877c778; end: 10877c77b;  */

void FUN_10877c778(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6dc98;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10877c77c; end: 10877c78f;  */

void FUN_10877c77c(void)

{
  func_0x00010877c934();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10877c790; end: 10877c797;  */

void FUN_10877c790(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001008510ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10877c798; end: 10877c7c3;  */

undefined8 * FUN_10877c798(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6dce8;
  func_0x000104be3970(param_1 + 1);
  return param_1;
}



/* Entry: 10877c7c4; end: 10877c7d7;  */

void FUN_10877c7c4(void)

{
  FUN_10877c798();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10877c7d8; end: 10877c7ff;  */

void FUN_10877c7d8(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  int extraout_w10;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  puVar2 = (undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110a6dce8;
  lVar3 = *(long *)(param_1 + 0x10);
  uVar4 = *puVar2;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar4;
  if (lVar3 != 0) {
    do {
      func_0x000107c3332c();
    } while (extraout_w10 != 0);
  }
  puVar1[3] = puVar2[2];
  return;
}



/* Entry: 10877c800; end: 10877c823;  */

void FUN_10877c800(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110a6dce8;
  lVar2 = *(long *)(param_1 + 0x10);
  uVar3 = *puVar1;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000107c3332c();
    } while (extraout_w10 != 0);
  }
  param_2[3] = puVar1[2];
  return;
}



/* Entry: 10877c824; end: 10877c8eb;  */

void FUN_10877c824(long param_1,ulong *param_2,long *param_3)

{
  long *plVar1;
  ulong uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar2 = *param_2;
  if ((uVar2 >> 0x20 & 1) == 0) {
    if (*(long *)(param_1 + 0x18) != 1) {
      plVar1 = *(long **)(param_1 + 8);
LAB_10877c88c:
                    /* WARNING: Could not recover jumptable at 0x00010877c89c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x10))();
      return;
    }
    if (param_3[1] - *param_3 != 0x38) {
      plVar1 = *(long **)(param_1 + 8);
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x18);
      uVar2 = 0;
      goto LAB_10877c87c;
    }
    uVar2 = *param_3 + 0x18;
    FUN_1086d5eb4();
    plVar1 = *(long **)(param_1 + 8);
    if ((uVar2 >> 0x20 & 1) == 0) goto LAB_10877c88c;
  }
  else {
    plVar1 = *(long **)(param_1 + 8);
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x18);
LAB_10877c87c:
                    /* WARNING: Could not recover jumptable at 0x00010877c884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,uVar2);
  return;
}



/* Entry: 10877c8ec; end: 10877c94b;  */

undefined ** FUN_10877c8ec(void)

{
  return &PTR_DAT_110a6dd48;
}



/* Entry: 10877c94c; end: 10877c96f;  */

void FUN_10877c94c(long param_1)

{
  func_0x000107c3335c();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10877c970; end: 10877c973;  */

void FUN_10877c970(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6dd68;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10877c974; end: 10877c987;  */

void FUN_10877c974(void)

{
  func_0x00010877c990();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10877c988; end: 10877c99b;  */

void FUN_10877c988(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001008510ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10877c99c; end: 10877c9bf;  */

void FUN_10877c99c(long param_1)

{
  func_0x000107c3335c();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10877c9c0; end: 10877c9c3;  */

void FUN_10877c9c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6ddb8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10877c9c4; end: 10877c9d7;  */

void FUN_10877c9c4(void)

{
  func_0x00010877c9e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10877c9d8; end: 10877c9eb;  */

void FUN_10877c9d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001008510ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10877c9ec; end: 10877ca0f;  */

void FUN_10877c9ec(long param_1)

{
  func_0x000107c3335c();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10877ca10; end: 10877ca13;  */

void FUN_10877ca10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6de08;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10877ca14; end: 10877ca27;  */

void FUN_10877ca14(void)

{
  func_0x00010877cc00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10877ca28; end: 10877ca2f;  */

void FUN_10877ca28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001008510ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10877ca30; end: 10877ca5b;  */

undefined8 * FUN_10877ca30(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6de58;
  func_0x000107c27f98(param_1 + 1);
  return param_1;
}



/* Entry: 10877ca5c; end: 10877ca6f;  */

void FUN_10877ca5c(void)

{
  FUN_10877ca30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10877ca70; end: 10877cabb;  */

void FUN_10877ca70(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  
  puVar4 = (undefined8 *)0x10;
  __Znwm();
  lVar5 = *(long *)(param_1 + 8);
  *puVar4 = &PTR_FUN_110a6de58;
  puVar4[1] = lVar5;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 10877cabc; end: 10877caff;  */

void FUN_10877cabc(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 8);
  *param_2 = &PTR_FUN_110a6de58;
  param_2[1] = lVar4;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 10877cb00; end: 10877cbaf;  */

void FUN_10877cb00(void)

{
  uint uVar1;
  long lVar2;
  long unaff_x19;
  long lVar3;
  long unaff_x21;
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x00010877e24c();
  lVar3 = *(long *)(unaff_x19 + 8);
  do {
    uStack_50 = 0;
    lVar2 = lVar3 + 0x10;
    func_0x00010877df04(lVar2,&uStack_50);
    if ((int)lVar2 != 0) {
      lVar2 = lVar3 + 0x98;
      func_0x000108775ac4(lVar2);
      *(undefined1 *)(lVar3 + 0x98) = 0;
      *(undefined4 *)(lVar3 + 200) = 0xffffffff;
      FUN_108775030(lVar2);
      uVar1 = *(uint *)(unaff_x21 + 0x30);
      if (uVar1 != 0xffffffff) {
        lStack_48 = lVar2;
        (*(code *)(&PTR_DAT_110a6dec8)[uVar1])(&lStack_48);
        *(uint *)(lVar3 + 200) = uVar1;
      }
      *(undefined1 *)(lVar3 + 0xd0) = 1;
      func_0x00010877de50();
      return;
    }
  } while (((uint)uStack_50 >> 1 & 1) == 0);
  return;
}



/* Entry: 10877cbb0; end: 10877cbe7;  */

long FUN_10877cbb0(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110a6ded8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10877cbe8; end: 10877cc17;  */

undefined ** FUN_10877cbe8(void)

{
  return &PTR_DAT_110a6ded8;
}



/* Entry: 10877cc18; end: 10877cc63;  */

void FUN_10877cc18(long param_1)

{
  func_0x000107c3335c();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10877cc64; end: 10877cc6f;  */

void FUN_10877cc64(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6def8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10877cc70; end: 10877cc83;  */

void FUN_10877cc70(void)

{
  FUN_10877cc64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10877cc84; end: 10877cc8b;  */

void FUN_10877cc84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001008510ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10877cc8c; end: 10877cccb;  */

void FUN_10877cc8c(void)

{
  func_0x00010877e038();
  func_0x00010877cda8();
  return;
}



/* Entry: 10877cccc; end: 10877cd0b;  */

void FUN_10877cccc(long param_1,undefined4 param_2)

{
  undefined4 auStack_58 [12];
  undefined4 uStack_28;
  
  uStack_28 = 0;
  auStack_58[0] = param_2;
  FUN_10877cdc4(param_1 + 0x10,auStack_58);
  FUN_108730a74(auStack_58);
  return;
}



/* Entry: 10877cd0c; end: 10877cd53;  */

void FUN_10877cd0c(void)

{
  long unaff_x19;
  undefined1 auStack_58 [48];
  undefined4 uStack_28;
  
  func_0x00010084ff68();
  func_0x000108730ad4();
  uStack_28 = 1;
  FUN_10877cdc4(unaff_x19 + 0x10,auStack_58);
  FUN_108730a74(auStack_58);
  return;
}



/* Entry: 10877cd54; end: 10877cd57;  */

undefined8 * FUN_10877cd54(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6dff0;
  if (*(char *)(param_1 + 0x1a) == '\x01') {
    FUN_108730a74(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 10877cd58; end: 10877cd6b;  */

void FUN_10877cd58(void)

{
  FUN_10877cd6c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10877cd6c; end: 10877cdc3;  */

undefined8 * FUN_10877cd6c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6dff0;
  if (*(char *)(param_1 + 0x1a) == '\x01') {
    FUN_108730a74(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 10877cdc4; end: 10877ce27;  */

void FUN_10877cdc4(long *param_1)

{
  long lVar1;
  uint uStack_38;
  
  func_0x00010877e24c();
  lVar1 = *param_1;
  do {
    func_0x00010877de78();
    if ((int)param_1 != 0) {
      if (*(char *)(lVar1 + 0xd0) == '\x01') {
        FUN_108730a74(lVar1 + 0x98);
        *(undefined1 *)(lVar1 + 0xd0) = 0;
      }
      func_0x00010877e504();
      FUN_1087309ec();
      *(undefined1 *)(lVar1 + 0xd0) = 1;
      func_0x00010877de50();
      return;
    }
  } while ((uStack_38 >> 1 & 1) == 0);
  return;
}



/* Entry: 10877ce28; end: 10877ce57;  */

undefined8 FUN_10877ce28(undefined8 param_1)

{
  func_0x00010877e344(&PTR_FUN_110a6e030);
  func_0x000107c27f9c();
  return param_1;
}



/* Entry: 10877ce58; end: 10877ce6b;  */

void FUN_10877ce58(void)

{
  FUN_10877ce28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10877ce6c; end: 10877cf1b;  */

void FUN_10877ce6c(long param_1,undefined4 param_2)

{
  long lVar1;
  uint uStack_38;
  
  lVar1 = *(long *)(param_1 + 0x10);
  do {
    func_0x00010877de78();
    if ((int)param_1 != 0) {
      FUN_10877cfc0(lVar1 + 0x98);
      *(undefined4 *)(lVar1 + 0x98) = param_2;
      *(undefined4 *)(lVar1 + 0xe8) = 0;
      *(undefined1 *)(lVar1 + 0xf0) = 1;
      func_0x00010877de50();
      return;
    }
  } while ((uStack_38 >> 1 & 1) == 0);
  return;
}



/* Entry: 10877cf1c; end: 10877cf1f;  */

undefined8 * FUN_10877cf1c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6e088;
  if (*(char *)(param_1 + 0x1e) == '\x01') {
    FUN_10877cf70(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 10877cf20; end: 10877cf33;  */

void FUN_10877cf20(void)

{
  FUN_10877cf34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10877cf34; end: 10877cf6f;  */

undefined8 * FUN_10877cf34(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6e088;
  if (*(char *)(param_1 + 0x1e) == '\x01') {
    FUN_10877cf70(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 10877cf70; end: 10877cfb3;  */

void FUN_10877cf70(long param_1)

{
  if (*(uint *)(param_1 + 0x50) != 0xffffffff) {
    func_0x00010877e448((&PTR_FUN_110a6e0b8)[*(uint *)(param_1 + 0x50)]);
  }
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  return;
}



/* Entry: 10877cfb4; end: 10877cfbf;  */

void FUN_10877cfb4(void)

{
  return;
}



/* Entry: 10877cfc0; end: 10877cfef;  */

void FUN_10877cfc0(long param_1)

{
  if (*(char *)(param_1 + 0x58) == '\x01') {
    FUN_10877cf70();
    *(undefined1 *)(param_1 + 0x58) = 0;
  }
  return;
}



/* Entry: 10877cff0; end: 10877cfff;  */

undefined8 * FUN_10877cff0(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_110a98d00;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010892a274();
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    func_0x0001088f38e0(0,*(undefined8 *)(param_2 + 0x18));
  }
  param_1[3] = uVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    FUN_1088f0114(0,*(undefined8 *)(param_2 + 0x20));
  }
  param_1[4] = uVar2;
  uVar4 = *(undefined8 *)(param_2 + 0x30);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  *(undefined2 *)(param_1 + 7) = *(undefined2 *)(param_2 + 0x38);
  param_1[6] = uVar4;
  param_1[5] = uVar3;
  switch(*(undefined4 *)(param_1 + 9)) {
  case 6:
    func_0x00010892a1a8();
    FUN_108923688();
    break;
  case 7:
    func_0x00010892a1a8();
    FUN_10892370c();
    break;
  case 8:
    func_0x00010892a1a8();
    FUN_108923790();
    break;
  case 9:
    func_0x00010892a1a8();
    func_0x000108923a20();
    break;
  case 10:
    func_0x00010892a1a8();
    func_0x000108923a50();
    break;
  case 0xb:
    func_0x00010892a1a8();
    func_0x000108923ae0();
    break;
  case 0xc:
    func_0x00010892a1a8();
    FUN_10892390c();
    break;
  case 0xd:
    func_0x00010892a1a8();
    func_0x0001088b6ce4();
    break;
  default:
    goto LAB_1089299d4;
  }
  param_1[8] = uVar2;
LAB_1089299d4:
  return param_1;
}



/* Entry: 10877d000; end: 10877d013;  */

void FUN_10877d000(void)

{
  func_0x00010877d01c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10877d014; end: 10877d033;  */

void FUN_10877d014(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001008510ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10877d034; end: 10877d057;  */

void FUN_10877d034(long param_1)

{
  func_0x000107c3335c();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10877d058; end: 10877d05b;  */

void FUN_10877d058(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6e128;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10877d05c; end: 10877d06f;  */

void FUN_10877d05c(void)

{
  func_0x00010877d078();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10877d070; end: 10877d083;  */

void FUN_10877d070(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001008510ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10877d084; end: 10877d0a7;  */

void FUN_10877d084(long param_1)

{
  func_0x000107c3335c();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10877d0a8; end: 10877d1b7;  */

void FUN_10877d0a8(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lStack_68;
  undefined4 uStack_60;
  undefined4 uStack_40;
  undefined8 uStack_38;
  
  lVar3 = *(long *)(param_2 + 0x10);
  lStack_68 = *param_1;
  *param_1 = 0;
  plVar4 = *(long **)(lVar3 + 200);
  (**(code **)(*plVar4 + 0x108))();
  uStack_60 = 3;
  func_0x000107c33354(&uStack_38);
  func_0x000107c33338(uStack_38);
  uStack_40 = 0x86;
  func_0x000107c333e4();
  func_0x000107c33364();
  uVar2 = *(undefined8 *)(lVar3 + 0x58);
  plVar1 = plVar4;
  (**(code **)(*plVar4 + 0x108))();
  FUN_10877a908(plVar4,uVar2,lVar3,lVar3 + 0x18,lVar3 + 0x30,&lStack_68,&uStack_38,lVar3 + 0x80,
                *plVar1 + 0x270);
  func_0x000107c29578(&uStack_38);
  if (lStack_68 != 0) {
    func_0x00010877def8();
  }
  return;
}



/* Entry: 10877d1b8; end: 10877d1d7;  */

void FUN_10877d1b8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10877a8cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10877d1d8; end: 10877d1db;  */

void FUN_10877d1d8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10877d1dc; end: 10877d223;  */

void FUN_10877d1dc(void)

{
  long unaff_x19;
  undefined1 auStack_60 [56];
  undefined4 uStack_28;
  
  func_0x00010877e018();
  func_0x00010877d53c();
  uStack_28 = 1;
  func_0x00010877d3d0(unaff_x19 + 0x10,auStack_60);
  FUN_10877d380(auStack_60);
  return;
}



/* Entry: 10877d224; end: 10877d263;  */

void FUN_10877d224(long param_1,undefined4 param_2)

{
  undefined4 auStack_60 [14];
  undefined4 uStack_28;
  
  uStack_28 = 0;
  auStack_60[0] = param_2;
  func_0x00010877d3d0(param_1 + 0x10,auStack_60);
  FUN_10877d380(auStack_60);
  return;
}



/* Entry: 10877d264; end: 10877d2a3;  */

void FUN_10877d264(void)

{
  func_0x00010877e038();
  FUN_10877d548();
  return;
}



/* Entry: 10877d2a4; end: 10877d2df;  */

void FUN_10877d2a4(void)

{
  undefined1 auStack_28 [8];
  
  func_0x000107c33418();
  FUN_10877d2e0();
  func_0x00010877e32c();
  func_0x000107c27f9c(auStack_28);
  return;
}



/* Entry: 10877d2e0; end: 10877d307;  */

void FUN_10877d2e0(long param_1)

{
  func_0x000107c31510();
  func_0x000107c333d4(&PTR_FUN_110a6e238);
  *(undefined1 *)(param_1 + 0xd8) = 0;
  return;
}



/* Entry: 10877d308; end: 10877d30b;  */

undefined8 * FUN_10877d308(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6e238;
  func_0x00010877d350(param_1 + 0x13);
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 10877d30c; end: 10877d31f;  */

void FUN_10877d30c(void)

{
  FUN_10877d320();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10877d320; end: 10877d37f;  */

undefined8 * FUN_10877d320(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6e238;
  func_0x00010877d350(param_1 + 0x13);
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 10877d380; end: 10877d3c3;  */

void FUN_10877d380(long param_1)

{
  if (*(uint *)(param_1 + 0x38) != 0xffffffff) {
    func_0x00010877e448((&PTR_FUN_110a6e268)[*(uint *)(param_1 + 0x38)]);
  }
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  return;
}



/* Entry: 10877d3c4; end: 10877d3df;  */

void FUN_10877d3c4(void)

{
  return;
}



/* Entry: 10877d3e0; end: 10877d43b;  */

undefined8 FUN_10877d3e0(undefined8 param_1)

{
  uint uStack_38;
  
  do {
    func_0x00010877de78();
    if ((int)param_1 != 0) {
      func_0x00010877e504();
      FUN_10877d43c();
      func_0x00010877de50();
      return param_1;
    }
  } while ((uStack_38 >> 1 & 1) == 0);
  return param_1;
}



/* Entry: 10877d43c; end: 10877d49b;  */

undefined8 FUN_10877d43c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010877d46c();
  FUN_10877d49c(param_1,param_2);
  return param_1;
}



/* Entry: 10877d49c; end: 10877d4b7;  */

void FUN_10877d49c(long param_1)

{
  FUN_10877d4b8();
  *(undefined1 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 10877d4b8; end: 10877d4e7;  */

void FUN_10877d4b8(void)

{
  func_0x00010877e57c();
  FUN_10877d4e8();
  return;
}



/* Entry: 10877d4e8; end: 10877d52b;  */

void FUN_10877d4e8(void)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c333ec();
  FUN_10877d380();
  iVar1 = *(int *)(unaff_x20 + 0x38);
  if (iVar1 != -1) {
    func_0x00010877e2a8(&PTR_FUN_110a6e278);
    *(int *)(unaff_x19 + 0x38) = iVar1;
  }
  return;
}



/* Entry: 10877d52c; end: 10877d547;  */

void FUN_10877d52c(undefined8 *param_1,undefined4 *param_2)

{
  *(undefined4 *)*param_1 = *param_2;
  return;
}



/* Entry: 10877d548; end: 10877d563;  */

void FUN_10877d548(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *unaff_x19;
  long *plVar5;
  
  func_0x000107c33344();
  plVar5 = (long *)*unaff_x19;
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  return;
}



/* Entry: 10877d564; end: 10877d56b;  */

undefined8 * FUN_10877d564(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6e298;
  if (*(char *)(param_1 + 0x1b) == '\x01') {
    func_0x000100851890(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 10877d56c; end: 10877d57f;  */

void FUN_10877d56c(void)

{
  FUN_10877d580();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10877d580; end: 10877d58f;  */

void FUN_10877d580(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a6e2d8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10877d590; end: 10877d5a3;  */

void FUN_10877d590(void)

{
  func_0x00010877d5ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10877d5a4; end: 10877d5b7;  */

void FUN_10877d5a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001008510ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10877d5b8; end: 10877d5db;  */

void FUN_10877d5b8(long param_1)

{
  func_0x000107c3335c();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10877d5dc; end: 10877d5df;  */

void FUN_10877d5dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6e378;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10877d5e0; end: 10877d5f3;  */

void FUN_10877d5e0(void)

{
  func_0x00010877d5fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10877d5f4; end: 10877d607;  */

void FUN_10877d5f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001008510ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10877d608; end: 10877d62b;  */

void FUN_10877d608(long param_1)

{
  func_0x000107c3335c();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10877d62c; end: 10877d62f;  */

void FUN_10877d62c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6e3c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10877d630; end: 10877d643;  */

void FUN_10877d630(void)

{
  func_0x00010877d64c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10877d644; end: 10877d657;  */

void FUN_10877d644(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001008510ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10877d658; end: 10877d67b;  */

void FUN_10877d658(long param_1)

{
  func_0x000107c3335c();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10877d67c; end: 10877d67f;  */

undefined8 * FUN_10877d67c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6e418;
  func_0x000108731500(param_1 + 0x13);
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 10877d680; end: 10877d693;  */

void FUN_10877d680(void)

{
  FUN_10877d694();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


