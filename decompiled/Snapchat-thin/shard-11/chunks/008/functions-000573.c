/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108988f48; end: 108989027;  */

void FUN_108988f48(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long alStack_30 [2];
  
  param_1 = param_1 + 0x18;
  FUN_108986748(alStack_30);
  if (alStack_30[0] != 0) {
    __ZNSt3__16chrono12steady_clock3nowEv();
    cVar1 = *(char *)(alStack_30[0] + 0x128);
    if (cVar1 == '\x01') {
      plVar3 = *(long **)(alStack_30[0] + 0x110);
    }
    else {
      lVar4 = *(long *)(alStack_30[0] + 0x118);
      if (lVar4 == *(long *)(alStack_30[0] + 0x100)) {
        lVar4 = *(long *)(alStack_30[0] + 0x108);
      }
      plVar3 = (long *)(lVar4 + -8);
    }
    if (*(long *)(alStack_30[0] + 0x120) == 0) {
      bVar2 = false;
    }
    else {
      bVar2 = 10000000000 < param_1 - *plVar3;
    }
    *(bool *)(alStack_30[0] + 0x128) = bVar2;
    if ((bVar2 != false) && ((bool)cVar1 != bVar2)) {
      (**(code **)(**(long **)(alStack_30[0] + 0x48) + 0x18))
                (*(long **)(alStack_30[0] + 0x48),*(undefined8 *)(alStack_30[0] + 0xf8),
                 alStack_30[0] + 0x18);
      if (*(char *)(alStack_30[0] + 0x134) == '\x01') {
        *(undefined1 *)(alStack_30[0] + 0x134) = 0;
      }
    }
    FUN_1089886d4(alStack_30[0]);
  }
  func_0x000108986a2c(alStack_30);
  return;
}



/* Entry: 108989028; end: 10898913f;  */

void FUN_108989028(void)

{
  return;
}



/* Entry: 108989140; end: 10898924b;  */

void FUN_108989140(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  puVar4 = (undefined8 *)0x150;
  __Znwm();
  plVar6 = puVar4 + 1;
  *plVar6 = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_110aa2520;
  puVar1 = puVar4 + 3;
  lStack_48 = param_3[1];
  uStack_50 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  FUN_1089880f0(puVar1,&uStack_50);
  FUN_1089493c4(&uStack_50);
  lVar5 = puVar4[5];
  if ((lVar5 == 0) || (*(long *)(lVar5 + 8) == -1)) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar6 = puVar4 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uStack_50 = puVar4[4];
    puVar4[4] = puVar1;
    puVar4[5] = puVar4;
    puStack_70 = puVar1;
    puStack_68 = puVar4;
    puStack_60 = puVar1;
    puStack_58 = puVar4;
    lStack_48 = lVar5;
    func_0x000108986998(&uStack_50);
    func_0x000108986a2c(&puStack_60);
  }
  *param_1 = (long)puVar1;
  param_1[1] = (long)puVar4;
  puStack_70 = (undefined8 *)0x0;
  puStack_68 = (undefined8 *)0x0;
  func_0x000108986a2c(&puStack_70);
  return;
}



/* Entry: 10898924c; end: 108989257;  */

void FUN_10898924c(void)

{
  return;
}



/* Entry: 108989258; end: 10898926b;  */

void FUN_108989258(void)

{
  func_0x00010898927c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10898926c; end: 10898928b;  */

void FUN_10898926c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108989274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x10))();
  return;
}



/* Entry: 10898928c; end: 10898939b;  */

undefined8 *
FUN_10898928c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,long *param_8)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  
  uStack_5c = (undefined4)param_4;
  lVar4 = *param_8;
  uStack_70 = param_7;
  uStack_68 = param_6;
  uStack_58 = param_3;
  if (lVar4 == 0) {
    FUN_10898939c(&lStack_90,param_2,&uStack_5c,&uStack_68,&uStack_70,param_5,&uStack_58);
    lStack_80 = 0;
    if (lStack_90 != 0) {
      lStack_80 = lStack_90 + 0x20;
    }
    lStack_78 = lStack_88;
    lStack_90 = 0;
    lStack_88 = 0;
  }
  else {
    lStack_78 = param_8[1];
    lStack_80 = lVar4;
    if (lStack_78 != 0) {
      plVar1 = (long *)(lStack_78 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  func_0x00010897dde0(param_1,0,param_3,param_4,param_5,param_6,param_7,&lStack_80);
  func_0x00010897e37c(&lStack_80);
  if (lVar4 == 0) {
    FUN_108989988(&lStack_90);
  }
  *param_1 = &PTR_FUN_110aa2570;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  return param_1;
}



/* Entry: 10898939c; end: 1089893d3;  */

void FUN_10898939c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 uStack_11;
  
  FUN_108989748(&uStack_11,param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



/* Entry: 1089893d4; end: 108989433;  */

void FUN_1089893d4(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  *(long *)(param_1 + 0x70) = param_2;
  *(undefined8 *)(param_1 + 0x78) = param_3;
  param_1 = param_1 + 0x50;
  lVar1 = param_2;
  FUN_10897e114();
  lStack_30 = param_1;
  lStack_28 = lVar1;
  while (lStack_30 != 0) {
    (**(code **)(**(long **)(lStack_28 + 8) + 0x28))(*(long **)(lStack_28 + 8),param_2,param_3);
    FUN_10897e140(&lStack_30);
  }
  return;
}



/* Entry: 108989434; end: 1089894ff;  */

void FUN_108989434(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long *plVar3;
  undefined4 uStack_34;
  ulong uStack_30;
  undefined8 *puStack_28;
  
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = param_1 + 1;
  if (*(char *)(param_2 + 0x18) == '\x01') {
    uStack_30 = uStack_30 & 0xffffffff00000000;
    (**(code **)(**(long **)(param_2 + 0x40) + 0x10))(*(long **)(param_2 + 0x40),&uStack_30);
    param_3 = (undefined8 *)0xffffffffffffffff;
    FUN_108989500(param_1,0xffffffffffffffff,&uStack_30);
  }
  uVar2 = param_2 + 0x50;
  FUN_10897e114();
  uStack_30 = uVar2;
  puStack_28 = param_3;
  while (uStack_30 != 0) {
    uVar1 = *puStack_28;
    plVar3 = (long *)puStack_28[1];
    (**(code **)(*plVar3 + 0x18))();
    uStack_34 = SUB84(plVar3,0);
    FUN_108989500(param_1,uVar1,&uStack_34);
    FUN_10897e140(&uStack_30);
  }
  return;
}



/* Entry: 108989500; end: 10898952b;  */

void FUN_108989500(undefined4 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 uStack_28;
  
  uVar1 = *param_3;
  uStack_28 = param_2;
  func_0x00010898958c(param_1,&uStack_28);
  *param_1 = uVar1;
  return;
}



/* Entry: 10898952c; end: 108989573;  */

void FUN_10898952c(undefined8 *param_1,long param_2)

{
  FUN_10897e23c();
  (**(code **)(*(long *)*param_1 + 0x28))
            ((long *)*param_1,*(undefined8 *)(param_2 + 0x70),*(undefined8 *)(param_2 + 0x78));
  return;
}



/* Entry: 108989574; end: 108989577;  */

undefined8 * FUN_108989574(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa17b0;
  FUN_10897e2fc(param_1 + 10);
  func_0x00010897e37c(param_1 + 8);
  func_0x00010897b3e4(param_1 + 4);
  return param_1;
}



/* Entry: 108989578; end: 1089895bf;  */

void FUN_108989578(void)

{
  FUN_10897de64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1089895c0; end: 108989667;  */

undefined1  [16]
FUN_1089895c0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar2 = param_1;
  FUN_108989668(param_1,&uStack_48,param_2);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    lVar3 = 0x30;
    __Znwm();
    uStack_50 = 1;
    *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)*param_4;
    *(undefined4 *)(lVar3 + 0x28) = 0;
    plStack_58 = param_1 + 1;
    FUN_1089896b8(param_1,uStack_48,plVar2,lVar3);
    uStack_60 = 0;
    func_0x00010898970c(&uStack_60);
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 108989668; end: 1089896b7;  */

long * FUN_108989668(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar1 = (long *)(param_1 + 8);
  plVar2 = plVar1;
  if ((long *)*plVar1 != (long *)0x0) {
    plVar3 = (long *)*plVar1;
    do {
      while (plVar2 = plVar3, plVar3[4] <= *param_3) {
        if (*param_3 <= plVar3[4]) goto LAB_1089896b0;
        plVar1 = plVar3 + 1;
        plVar3 = (long *)*plVar1;
        if ((long *)*plVar1 == (long *)0x0) goto LAB_1089896b0;
      }
      plVar4 = (long *)*plVar3;
      plVar1 = plVar3;
      plVar3 = plVar4;
    } while (plVar4 != (long *)0x0);
  }
LAB_1089896b0:
  *param_2 = (long)plVar2;
  return plVar1;
}



/* Entry: 1089896b8; end: 10898972f;  */

void FUN_1089896b8(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  func_0x000107c27be4(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 108989730; end: 108989747;  */

void FUN_108989730(long *param_1,long param_2)

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



/* Entry: 108989748; end: 108989827;  */

undefined1 *
FUN_108989748(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_70 [16];
  long lStack_60;
  long lStack_58;
  
  puVar2 = auStack_70;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_108989828(auStack_70,1);
  FUN_10898987c(lStack_60,param_3,param_4,param_5,param_6,param_7,param_8);
  lVar1 = lStack_60;
  lStack_60 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  func_0x000108989978();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x000108989978(auStack_70);
  __Unwind_Resume();
  *(undefined8 *)(puVar2 + 8) = param_3;
  puVar3 = puVar2;
  FUN_108989850();
  *(undefined1 **)(puVar2 + 0x10) = puVar3;
  return puVar2;
}



/* Entry: 108989828; end: 10898984f;  */

long FUN_108989828(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_108989850();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 108989850; end: 10898987b;  */

undefined8 * FUN_108989850(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x111111111111112) {
    puVar1 = (undefined8 *)(param_2 * 0xf0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110aa25b0;
  FUN_1089898e4(param_1 + 3);
  return param_1;
}



/* Entry: 10898987c; end: 1089898bb;  */

undefined8 * FUN_10898987c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110aa25b0;
  FUN_1089898e4(param_1 + 3);
  return param_1;
}



/* Entry: 1089898bc; end: 1089898bf;  */

void FUN_1089898bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa25b0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1089898c0; end: 1089898d3;  */

void FUN_1089898c0(void)

{
  FUN_108989968();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1089898d4; end: 1089898e3;  */

void FUN_1089898d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001089898dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x10))();
  return;
}



/* Entry: 1089898e4; end: 108989967;  */

undefined8
FUN_1089898e4(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = *param_3;
  uVar5 = *param_4;
  uVar6 = *param_5;
  uStack_28 = param_6[1];
  uStack_30 = *param_6;
  if (param_6[1] != 0) {
    plVar1 = (long *)(param_6[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_108980564(param_1,param_2,uVar2,uVar5,uVar6,&uStack_30,*param_7);
  func_0x00010897b3e4(&uStack_30);
  return param_1;
}



/* Entry: 108989968; end: 108989987;  */

void FUN_108989968(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa25b0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108989988; end: 1089899af;  */

long FUN_108989988(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 1089899b0; end: 1089899cb;  */

void FUN_1089899b0(void)

{
  return;
}



/* Entry: 1089899cc; end: 108989a5f;  */

void FUN_1089899cc(void)

{
  undefined1 auStack_28 [8];
  
  func_0x000108989a24(auStack_28);
  func_0x000108989dc8();
  FUN_108989b40();
  return;
}



/* Entry: 108989a60; end: 108989a77;  */

void FUN_108989a60(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  piVar1 = (int *)(param_1 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return;
}



/* Entry: 108989a78; end: 108989abb;  */

bool FUN_108989a78(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  
  piVar1 = (int *)(param_1 + 8);
  do {
    iVar2 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar2 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((param_1 != 0) && (iVar2 == 1)) {
    func_0x000108989dbc();
  }
  return iVar2 != 1;
}



/* Entry: 108989abc; end: 108989ad3;  */

void FUN_108989abc(void)

{
  return;
}



/* Entry: 108989ad4; end: 108989aef;  */

ulong FUN_108989ad4(undefined8 param_1,ulong param_2)

{
  func_0x0001089f80b8(param_2);
  return param_2 >> 0x20 & 1;
}



/* Entry: 108989af0; end: 108989b3b;  */

void FUN_108989af0(undefined8 *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  uVar2 = param_3;
  func_0x0001089f80b8();
  if ((uVar2 >> 0x20 & 1) == 0) {
    *param_1 = 0;
    return;
  }
  uStack_38 = (undefined4)uVar2;
  iVar1 = (int)&uStack_40;
  uStack_40 = param_4;
  func_0x0001089f8070();
  if (iVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_3 + 8);
    uVar4 = uVar5;
    func_0x0001089f8844(uVar5,&UNK_10f4f58f2,0x26);
    uVar3 = 1;
    if ((int)uVar4 != 0) {
      uVar3 = 2;
    }
    uStack_4c = (int)((ulong)param_4 >> 0x20);
    if ((uVar2 & 1) == 0) {
      uStack_4c = uVar3;
    }
    func_0x0001089f842c(&uStack_48,uVar5,&uStack_4c,&uStack_40);
    uVar4 = uStack_48;
    uStack_48 = 0;
    func_0x0001089f892c(&uStack_48);
  }
  *param_1 = uVar4;
  return;
}



/* Entry: 108989b3c; end: 108989b3f;  */

bool FUN_108989b3c(long param_1)

{
  return *(int *)(param_1 + 8) == 1;
}



/* Entry: 108989b40; end: 108989b73;  */

long * FUN_108989b40(long *param_1)

{
  if ((long *)*param_1 != (long *)0x0) {
    (**(code **)(*(long *)*param_1 + 8))();
  }
  return param_1;
}



/* Entry: 108989b74; end: 108989baf;  */

void FUN_108989b74(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined8 *unaff_x19;
  
  func_0x000108989d88();
  *param_1 = &PTR_FUN_110aa2698;
  *unaff_x19 = param_1;
  piVar3 = (int *)(param_1 + 1);
  *piVar3 = 0;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
    if (bVar2) {
      *piVar3 = *piVar3 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  return;
}



/* Entry: 108989bb0; end: 108989bc7;  */

void FUN_108989bb0(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  piVar1 = (int *)(param_1 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return;
}



/* Entry: 108989bc8; end: 108989c0b;  */

bool FUN_108989bc8(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  
  piVar1 = (int *)(param_1 + 8);
  do {
    iVar2 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar2 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((param_1 != 0) && (iVar2 == 1)) {
    func_0x000108989dbc();
  }
  return iVar2 != 1;
}



/* Entry: 108989c0c; end: 108989c23;  */

void FUN_108989c0c(void)

{
  return;
}



/* Entry: 108989c24; end: 108989c9b;  */

void FUN_108989c24(undefined8 param_1,undefined8 param_2)

{
  undefined4 *unaff_x19;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined4 uStack_6c;
  char cStack_28;
  
  func_0x000108989d94(param_2);
  if (cStack_28 != '\x01') {
    *(undefined1 *)unaff_x19 = 0;
  }
  else {
    *unaff_x19 = uStack_7c;
    *(undefined8 *)(unaff_x19 + 2) = uStack_78;
    unaff_x19[4] = uStack_6c;
    *(undefined8 *)(unaff_x19 + 5) = 0x7c83000001770;
    *(undefined2 *)(unaff_x19 + 7) = 0x100;
  }
  *(bool *)(unaff_x19 + 8) = cStack_28 == '\x01';
  func_0x000108989d80();
  return;
}



/* Entry: 108989c9c; end: 108989d03;  */

void FUN_108989c9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *unaff_x19;
  undefined1 auStack_90 [88];
  char cStack_38;
  
  func_0x000108989d94(param_3);
  if (cStack_38 == '\x01') {
    func_0x0001089f89c4(param_2,auStack_90,param_4);
    func_0x000108989d80();
  }
  else {
    func_0x000108989d80();
    *unaff_x19 = 0;
  }
  return;
}



/* Entry: 108989d04; end: 108989d07;  */

bool FUN_108989d04(long param_1)

{
  return *(int *)(param_1 + 8) == 1;
}



/* Entry: 108989d08; end: 108989d37;  */

long FUN_108989d08(long param_1)

{
  if (*(char *)(param_1 + 0x58) == '\x01') {
    func_0x00010810d030(param_1 + 0x38);
  }
  return param_1;
}



/* Entry: 108989d38; end: 108989d6b;  */

long * FUN_108989d38(long *param_1)

{
  if ((long *)*param_1 != (long *)0x0) {
    (**(code **)(*(long *)*param_1 + 8))();
  }
  return param_1;
}



/* Entry: 108989d6c; end: 108989ddb;  */

bool FUN_108989d6c(long param_1)

{
  return *(int *)(param_1 + 8) == 1;
}



/* Entry: 108989ddc; end: 108989f8b;  */

void FUN_108989ddc(long param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long *plVar3;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  uVar2 = *(ulong *)(param_2 + 0x10);
  plVar3 = (long *)*(long *)(param_2 + 8);
  if (-1 < (char)*(byte *)(param_2 + 0x1f)) {
    uVar2 = (ulong)*(byte *)(param_2 + 0x1f);
    plVar3 = (long *)(param_2 + 8);
  }
  uVar1 = 1;
  if (*(char *)(param_2 + 0x30) != '\0') {
    uVar1 = 2;
  }
  func_0x0001089f77b0(param_1,plVar3,uVar2,*(undefined4 *)(param_2 + 0x20),uVar1);
  *(undefined8 *)(param_1 + 0x20) = 2;
  func_0x00010898a27c();
  func_0x00010898a268();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc();
  func_0x00010898a274();
  func_0x00010898a27c();
  func_0x00010898a268();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc();
  func_0x00010898a274();
  __ZNSt3__19to_stringEj(auStack_48,*(undefined4 *)(param_2 + 0x24));
  func_0x000107c278b8(auStack_60,&UNK_10f4edd4d);
  func_0x00010898a28c();
  func_0x000107c27b9c();
  func_0x00010898a284();
  func_0x00010898a274();
  __ZNSt3__19to_stringEj(auStack_48,*(undefined4 *)(param_2 + 0x28));
  func_0x000107c278b8(auStack_60,&UNK_10f4edd53);
  func_0x00010898a28c();
  func_0x000107c27b9c();
  func_0x00010898a284();
  func_0x00010898a274();
  func_0x00010898a27c();
  func_0x00010898a268();
  func_0x00010898a298();
  func_0x00010898a274();
  func_0x00010898a27c();
  func_0x00010898a268();
  func_0x00010898a298();
  func_0x00010898a274();
  return;
}



/* Entry: 108989f8c; end: 108989fbf;  */

long FUN_108989f8c(long param_1,undefined8 param_2)

{
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_10898a04c(param_1,param_2,&UNK_10dd5b8f9,&uStack_18,&uStack_19);
  return param_1 + 0x38;
}



/* Entry: 108989fc0; end: 108989fe7;  */

undefined * FUN_108989fc0(int param_1)

{
  if (param_1 - 99U < 4) {
    return (&PTR_DAT_110aa2720)[param_1 - 99U];
  }
  return &UNK_10f4edd85;
}



/* Entry: 108989fe8; end: 10898a04b;  */

void FUN_108989fe8(undefined8 param_1)

{
  func_0x000107c2793c(&UNK_10f4edd8d);
  func_0x000107c3173c(param_1);
  return;
}



/* Entry: 10898a04c; end: 10898a107;  */

undefined1  [16]
FUN_10898a04c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  bool bVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar2 = param_1;
  FUN_10898a108(param_1,&uStack_48,param_2);
  lVar4 = *plVar2;
  bVar1 = lVar4 == 0;
  if (bVar1) {
    lVar4 = 0x50;
    __Znwm();
    uStack_50 = 1;
    param_4 = (undefined8 *)*param_4;
    uVar3 = param_4[2];
    uVar5 = *param_4;
    *(undefined8 *)(lVar4 + 0x28) = param_4[1];
    *(undefined8 *)(lVar4 + 0x20) = uVar5;
    *(undefined8 *)(lVar4 + 0x30) = uVar3;
    param_4[1] = 0;
    param_4[2] = 0;
    *param_4 = 0;
    *(undefined8 *)(lVar4 + 0x38) = 0;
    *(undefined8 *)(lVar4 + 0x40) = 0;
    *(undefined8 *)(lVar4 + 0x48) = 0;
    plStack_58 = param_1 + 1;
    FUN_10898a18c(param_1,uStack_48,plVar2,lVar4);
    uStack_60 = 0;
    func_0x00010898a1e0(&uStack_60);
  }
  auVar6[8] = bVar1;
  auVar6._0_8_ = lVar4;
  auVar6._9_7_ = 0;
  return auVar6;
}



/* Entry: 10898a108; end: 10898a18b;  */

long * FUN_10898a108(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + 8);
  plVar2 = (long *)*plVar3;
  plVar4 = plVar3;
  while (plVar2 != (long *)0x0) {
    while (plVar4 = plVar2, uVar1 = param_3, func_0x000107c27bd4(param_3,plVar4 + 4),
          ((uint)uVar1 >> 7 & 1) != 0) {
      plVar2 = (long *)*plVar4;
      plVar3 = plVar4;
      if ((long *)*plVar4 == (long *)0x0) goto LAB_10898a174;
    }
    plVar2 = plVar4 + 4;
    func_0x000107c27bd4(plVar2,param_3);
    if (((uint)plVar2 >> 7 & 1) == 0) break;
    plVar3 = plVar4 + 1;
    plVar2 = (long *)*plVar3;
  }
LAB_10898a174:
  *param_2 = plVar4;
  return plVar3;
}



/* Entry: 10898a18c; end: 10898a207;  */

void FUN_10898a18c(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  func_0x000107c27be4(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 10898a208; end: 10898a21f;  */

void FUN_10898a208(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    func_0x000107c278c0(lVar1 + 0x20);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 10898a220; end: 10898a267;  */

void FUN_10898a220(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x000107c278c0(param_2 + 0x20);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10898a268; end: 10898a2a3;  */

long FUN_10898a268(void)

{
  long lVar1;
  long unaff_x19;
  undefined1 uStack_19;
  undefined1 *puStack_18;
  
  lVar1 = unaff_x19 + 0x28;
  puStack_18 = &stack0x00000018;
  FUN_10898a04c(lVar1,puStack_18,&UNK_10dd5b8f9,&puStack_18,&uStack_19);
  return lVar1 + 0x38;
}



/* Entry: 10898a2a4; end: 10898a2c7;  */

void FUN_10898a2a4(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  FUN_10898a2c8(&uStack_18);
  return;
}



/* Entry: 10898a2c8; end: 10898a3e7;  */

void FUN_10898a2c8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,long *param_4,
                  long *param_5,long *param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  uVar2 = 0x80;
  __Znwm();
  uVar3 = *param_2;
  puStack_58 = (undefined8 *)*param_4;
  if (puStack_58 != (undefined8 *)0x0) {
    (**(code **)*puStack_58)();
  }
  puStack_60 = (undefined8 *)*param_5;
  if (puStack_60 != (undefined8 *)0x0) {
    (**(code **)*puStack_60)();
  }
  lStack_68 = *param_6;
  *param_6 = 0;
  FUN_10898a3e8(uVar2,uVar3,param_3,&puStack_58,&puStack_60,&lStack_68);
  lVar1 = lStack_68;
  *param_1 = uVar2;
  lStack_68 = 0;
  if (lVar1 != 0) {
    func_0x00010898b854();
  }
  FUN_108981388(&puStack_60);
  FUN_108982f1c(&puStack_58);
  return;
}



/* Entry: 10898a3e8; end: 10898ad9f;  */

undefined8 *
FUN_10898a3e8(undefined8 *param_1,long param_2,undefined8 *param_3,long *param_4,long *param_5,
             long *param_6)

{
  ulong uVar1;
  code *pcVar2;
  long *plVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  long ****pppplVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  undefined ***pppuVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  long lVar12;
  long extraout_x8;
  code *extraout_x8_00;
  long *plVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long ****pppplVar19;
  undefined1 uVar20;
  long *plStack_1f8;
  undefined **ppuStack_1f0;
  undefined8 uStack_1e8;
  ulong uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 uStack_1c8;
  undefined4 uStack_1c4;
  undefined2 uStack_1c0;
  undefined1 uStack_1be;
  undefined2 uStack_1bd;
  undefined1 uStack_1bb;
  undefined1 uStack_1b8;
  undefined4 uStack_1b4;
  undefined1 uStack_1b0;
  undefined1 uStack_1ac;
  undefined1 uStack_1a8;
  undefined8 uStack_1a4;
  undefined4 uStack_19c;
  undefined1 uStack_198;
  undefined1 uStack_194;
  undefined8 uStack_190;
  undefined1 uStack_188;
  undefined8 uStack_184;
  undefined4 uStack_17c;
  undefined1 uStack_178;
  undefined8 uStack_174;
  undefined8 uStack_16c;
  undefined8 uStack_164;
  undefined1 uStack_15c;
  undefined1 uStack_158;
  undefined1 uStack_157;
  undefined1 uStack_154;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined8 uStack_13c;
  undefined8 uStack_134;
  undefined8 uStack_12c;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  undefined **ppuStack_110;
  long *plStack_108;
  long ***ppplStack_100;
  undefined8 uStack_f8;
  undefined8 ***pppuStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  undefined1 uStack_c1;
  long lStack_c0;
  long ***ppplStack_b8;
  long **applStack_b0 [3];
  long ***ppplStack_98;
  long alStack_90 [3];
  undefined **appuStack_78 [3];
  
  *param_1 = &PTR_FUN_110aa2750;
  plVar3 = param_1 + 1;
  *plVar3 = 0;
  uVar11 = *param_3;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((long)param_1 + 0x14) = uVar11;
  lVar12 = *param_4;
  *param_4 = 0;
  plVar13 = param_1 + 6;
  *plVar13 = lVar12;
  lVar12 = *param_5;
  *param_5 = 0;
  plVar16 = param_1 + 7;
  *plVar16 = lVar12;
  lVar12 = *param_6;
  *param_6 = 0;
  plVar17 = param_1 + 8;
  *plVar17 = lVar12;
  uVar11 = 0x1f8;
  __Znwm();
  FUN_10898b9bc();
  plVar18 = param_1 + 10;
  *plVar18 = 0;
  param_1[9] = uVar11;
  pppuStack_f0 = (undefined8 ****)0x0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
            (&pppuStack_f0,&UNK_10f4ede62);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
            (&pppuStack_f0,&UNK_10f4ede90);
  lVar12 = 0x10;
  __Znwm();
  func_0x00010899e7ec();
  uVar1 = uStack_e8;
  ppppuVar7 = (undefined8 ****)pppuStack_f0;
  if (-1 < (long)uStack_e0) {
    uVar1 = uStack_e0 >> 0x38;
    ppppuVar7 = &pppuStack_f0;
  }
  func_0x0001089f9344(appuStack_78,ppppuVar7,uVar1);
  uStack_1e8 = 0;
  ppuStack_1f0 = (undefined **)0x0;
  uStack_1e0 = 0;
  uStack_1d0 = 0;
  uStack_1d8 = uVar11;
  alStack_90[0] = lVar12;
  func_0x0001089f8ff8(&ppuStack_1f0,alStack_90);
  if (alStack_90[0] != 0) {
    func_0x00010898b814();
  }
  ppuStack_110 = appuStack_78[0];
  func_0x0001089f8f90(&ppuStack_1f0,&ppuStack_110);
  if (ppuStack_110 != (undefined **)0x0) {
    func_0x00010898b814();
  }
  func_0x0001089f91a8(param_1 + 0xb,&ppuStack_1f0);
  FUN_10898b0bc(&ppuStack_1f0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppuStack_f0);
  func_0x000107c316c8(alStack_90,&UNK_10f4edda0);
  func_0x00010899e768(&ppuStack_1f0,param_2);
  lVar12 = *plVar3;
  *plVar3 = (long)ppuStack_1f0;
  if (lVar12 != 0) {
    func_0x00010898b820();
  }
  func_0x000108afb010();
  func_0x000108afb1bc();
  plVar3 = (long *)0x18;
  __Znwm();
  *plVar3 = (long)&PTR_FUN_110aa27c8;
  plVar3[1] = param_2;
  func_0x00010898b924(plVar3);
  *(long *)(extraout_x8 + 0x10) = *plVar3;
  *plVar3 = extraout_x8;
  pppuVar4 = (undefined ***)*plVar18;
  *plVar18 = extraout_x8;
  if (pppuVar4 != (undefined ***)0x0) {
    func_0x00010898b820();
  }
  if (*plVar13 == 0) {
    FUN_1089899cc(&ppuStack_1f0);
    func_0x000108982a3c(plVar13,&ppuStack_1f0);
    pppuVar4 = &ppuStack_1f0;
    FUN_108982f1c();
  }
  if (*plVar16 == 0) {
    func_0x0001089899f8(&ppuStack_1f0);
    func_0x000108980928(plVar16,&ppuStack_1f0);
    pppuVar4 = &ppuStack_1f0;
    FUN_108981388();
  }
  if (*(char *)(param_1 + 3) == '\x01') {
    ppplStack_98 = (long ***)0x0;
  }
  else {
    pppuVar4 = (undefined ***)(param_1 + 0xb);
    FUN_108a57908(&ppplStack_98,pppuVar4,0);
    pppplVar19 = (long ****)ppplStack_98;
    if ((long ****)ppplStack_98 != (long ****)0x0) {
      pppuStack_f0 = (undefined8 ***)((ulong)pppuStack_f0 & 0xffffffff00000000);
      func_0x00010898b934((*ppplStack_98)[4]);
      FUN_1089a3c0c();
      func_0x00010898b8a4();
      uStack_1d0 = CONCAT44(uStack_1d0._4_4_,0x6d);
      pppuVar9 = &ppuStack_1f0;
      FUN_108957ee4(pppuVar9,0x10003);
      func_0x000107c278b8(applStack_b0,&UNK_10f4eddd6);
      pppuVar5 = pppuVar9;
      FUN_108957f58(pppuVar9,applStack_b0,(ulong)pppuStack_f0 & 0xffffffff);
      func_0x00010898b840(*pppuVar4,pppuVar5);
      func_0x00010898b8d8();
      pppplVar6 = (long ****)applStack_b0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      func_0x00010898b908();
      if (*plVar17 != 0) {
        ppplStack_b8 = (long ***)pppplVar19;
        (*(code *)**pppplVar19)(pppplVar19);
        lStack_c0 = *plVar17;
        *plVar17 = 0;
        func_0x000108a570f8(&ppuStack_1f0,&ppplStack_b8,&lStack_c0);
        func_0x00010898adc4(&ppplStack_98,&ppuStack_1f0);
        FUN_10898b52c(&ppuStack_1f0);
        lVar12 = lStack_c0;
        lStack_c0 = 0;
        if (lVar12 != 0) {
          func_0x00010898b854();
        }
        pppplVar6 = &ppplStack_b8;
        FUN_10898b52c();
        pppplVar19 = (long ****)ppplStack_98;
      }
      uStack_c1 = 0;
      func_0x00010898b8e8((*pppplVar19)[6]);
      if ((int)pppplVar6 == 0) {
        func_0x00010898b950((*pppplVar19)[0xd]);
        if ((int)pppplVar6 == 0) {
          func_0x00010898b8e8((*pppplVar19)[0x1d]);
          func_0x00010898b934((*pppplVar19)[0x31]);
          pppplVar6 = pppplVar19;
          (*(code *)(*pppplVar19)[0x32])(pppplVar19,uStack_c1);
          func_0x00010898b950((*pppplVar19)[0xf]);
          if ((int)pppplVar6 == 0) {
            func_0x00010898b8e8((*pppplVar19)[0x1f]);
            func_0x00010898b934((*pppplVar19)[0x34]);
            (*(code *)(*pppplVar19)[0x35])(pppplVar19,uStack_c1);
            func_0x00010898b8a4();
            uStack_1d0 = CONCAT44(uStack_1d0._4_4_,0x43);
            pppuVar4 = &ppuStack_1f0;
            func_0x00010898b98c(pppuVar4,0x11);
            ppppuVar7 = &pppuStack_f0;
            func_0x000108942850(ppppuVar7,pppuVar4);
            func_0x00010898b908();
            func_0x00010898b8e8((*pppplVar19)[0x38]);
            if ((int)ppppuVar7 == 0) {
              FUN_1089a3c0c();
              ppppuVar8 = ppppuVar7;
              func_0x00010898b874();
LAB_10898a820:
              func_0x00010898b840(*ppppuVar7,ppppuVar8);
              uVar15 = 1;
              func_0x00010898b8d8();
            }
            else {
              func_0x00010898b8f0((*pppplVar19)[0x3b]);
              if ((int)ppppuVar7 != 0) {
                FUN_1089a3c0c();
                ppppuVar8 = ppppuVar7;
                func_0x00010898b884();
                goto LAB_10898a820;
              }
              FUN_1089a3c0c();
              func_0x00010898b82c();
              func_0x00010898b840(*pppuVar9,ppppuVar7);
              func_0x00010898b8d8();
              uVar15 = 0;
            }
            func_0x00010898b8a4();
            uStack_1d0 = CONCAT44(uStack_1d0._4_4_,0x43);
            pppuVar4 = &ppuStack_1f0;
            func_0x00010898b98c(pppuVar4,0x10);
            ppppuVar7 = &pppuStack_f0;
            FUN_10898aeb4(ppppuVar7,pppuVar4);
            func_0x00010898b908();
            func_0x00010898b8e8((*pppplVar19)[0x39]);
            if ((int)ppppuVar7 == 0) {
              FUN_1089a3c0c();
              ppppuVar8 = ppppuVar7;
              func_0x00010898b874();
LAB_10898a89c:
              func_0x00010898b840(*ppppuVar7,ppppuVar8);
              uVar20 = 1;
              func_0x00010898b8d8();
            }
            else {
              func_0x00010898b8f0((*pppplVar19)[0x3c]);
              if ((int)ppppuVar7 != 0) {
                FUN_1089a3c0c();
                ppppuVar8 = ppppuVar7;
                func_0x00010898b884();
                goto LAB_10898a89c;
              }
              FUN_1089a3c0c();
              func_0x00010898b82c();
              func_0x00010898b840(*pppuVar9,ppppuVar7);
              func_0x00010898b8d8();
              uVar20 = 0;
            }
            func_0x00010898b8a4();
            uStack_1d0 = CONCAT44(uStack_1d0._4_4_,0x43);
            pppuVar4 = &ppuStack_1f0;
            func_0x00010898b98c(pppuVar4,0x12);
            ppppuVar7 = &pppuStack_f0;
            FUN_10898aeb4(ppppuVar7,pppuVar4);
            func_0x00010898b908();
            func_0x00010898b8e8((*pppplVar19)[0x3a]);
            if ((int)ppppuVar7 == 0) {
              FUN_1089a3c0c();
              ppppuVar8 = ppppuVar7;
              func_0x00010898b874();
            }
            else {
              func_0x00010898b8f0((*pppplVar19)[0x3d]);
              if ((int)ppppuVar7 == 0) {
                FUN_1089a3c0c();
                func_0x00010898b82c();
                func_0x00010898b840(*pppuVar9,ppppuVar7);
                func_0x00010898b8d8();
                uVar14 = 0;
                goto LAB_10898a928;
              }
              FUN_1089a3c0c();
              ppppuVar8 = ppppuVar7;
              func_0x00010898b884();
            }
            func_0x00010898b840(*ppppuVar7,ppppuVar8);
            uVar14 = 1;
            func_0x00010898b8d8();
LAB_10898a928:
            plStack_108 = (long *)0x0;
            ppplStack_100 = (long ***)0x0;
            uStack_f8 = 0;
            func_0x000108a58edc(&ppuStack_1f0);
            ppuStack_110 = ppuStack_1f0;
            ppuStack_1f0 = &PTR_DAT_110aa8ea0;
            uStack_1e8 = CONCAT26(uStack_1e8._6_2_,48000);
            uStack_1e0 = uStack_1e0 & 0xffffff0000000000;
            uStack_1d8 = CONCAT35(uStack_1d8._5_3_,0x3f800000);
            uStack_1d0 = NEON_fmov(0x3f800000,4);
            uStack_1c8 = 0;
            uStack_1c4 = 0xff;
            uStack_1c0 = 0x100;
            uStack_1bd = 0;
            uStack_1bb = 1;
            uStack_1b4 = 1;
            uStack_1b0 = 0;
            uStack_1ac = 0;
            uStack_1a8 = 0;
            uStack_1a4 = 0x300000000;
            uStack_19c = 9;
            uStack_198 = 1;
            uStack_194 = 1;
            uStack_190 = 0x4600000000;
            uStack_188 = 1;
            uStack_184 = 0x3dcccccd0000000f;
            uStack_17c = 300;
            uStack_178 = 0;
            uStack_16c = 0x500000005;
            uStack_174 = 0x500000000;
            uStack_164 = 0x40400000bf800000;
            uStack_15c = 1;
            uStack_157 = 0;
            uStack_154 = 0;
            uStack_148 = 0x40c0000041700000;
            uStack_150 = 0x4248000040a00000;
            uStack_140 = 0xc2480000;
            uStack_118 = 0;
            uStack_11c = 0;
            uStack_124 = 0;
            uStack_120 = 0;
            uStack_12c = 0;
            uStack_134 = 0;
            uStack_13c = 0;
            uStack_1be = uVar15;
            uStack_1b8 = uVar14;
            uStack_158 = uVar20;
            func_0x0001089f6514(&plStack_1f8,&ppuStack_1f0,param_1 + 0xb);
            plVar13 = plStack_1f8;
            plStack_1f8 = (long *)0x0;
            appuStack_78[0] = (undefined **)plStack_108;
            plStack_108 = plVar13;
            FUN_10898b5ac(appuStack_78);
            FUN_10898b5ac(&plStack_1f8);
            if ((long ****)ppplStack_98 != (long ****)0x0) {
              (*(code *)**ppplStack_98)(ppplStack_98);
            }
            if (ppplStack_100 != (long ***)0x0) {
              func_0x00010898b840();
              (*extraout_x8_00)();
            }
            ppplStack_100 = ppplStack_98;
            func_0x000108a08be8(&plStack_1f8,&ppuStack_110);
            (**(code **)(*plStack_1f8 + 0x28))();
            func_0x00010898b934((*ppplStack_98)[5]);
            func_0x00010898adc4(param_1 + 4,&ppplStack_98);
            plVar13 = plStack_1f8;
            plStack_1f8 = (long *)0x0;
            appuStack_78[0] = (undefined **)param_1[5];
            param_1[5] = plVar13;
            FUN_10898b5d8(appuStack_78);
            FUN_10898b5d8(&plStack_1f8);
            FUN_10898b604(&ppuStack_1f0);
            func_0x000108a16aac(&ppuStack_110);
            func_0x000104c03ee4(&pppuStack_f0);
            FUN_10898b52c(&ppplStack_98);
            func_0x000107c316d0(alStack_90);
            return param_1;
          }
          func_0x00010898b93c();
          func_0x000108b80bdc();
        }
        else {
          func_0x00010898b93c();
          func_0x000108b80bdc();
        }
      }
      else {
        func_0x00010898b93c();
        func_0x000108b80bdc();
      }
      func_0x00010898b994();
      ___cxa_throw(pppplVar6);
      goto LAB_10898ac60;
    }
  }
  FUN_1089a3c0c();
  func_0x00010898b8a4();
  uStack_1d0 = CONCAT44(uStack_1d0._4_4_,0x6d);
  pppuVar9 = &ppuStack_1f0;
  FUN_108957ee4(pppuVar9,0x10004);
  ppuVar10 = *pppuVar4;
  func_0x00010898b840(ppuVar10,pppuVar9);
  func_0x00010898b8d8();
  func_0x00010898b908();
  func_0x00010898b93c();
  func_0x000108b80bdc();
  func_0x00010898b994();
  ___cxa_throw(ppuVar10);
LAB_10898ac60:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10898ac64);
  (*pcVar2)();
}



/* Entry: 10898ada0; end: 10898ae07;  */

void FUN_10898ada0(long param_1)

{
  func_0x00010898b894();
  if (param_1 != 0) {
    func_0x00010898b820();
  }
  return;
}



/* Entry: 10898ae08; end: 10898ae5f;  */

undefined8 FUN_10898ae08(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c278b8(auStack_38,PTR_DAT_113289a88);
  func_0x00010898b980();
  func_0x00010898b868();
  return param_2;
}



/* Entry: 10898ae60; end: 10898aeb3;  */

undefined8 FUN_10898ae60(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c278b8(auStack_38,PTR_DAT_113289a80);
  func_0x00010898b980();
  func_0x00010898b868();
  return param_2;
}



/* Entry: 10898aeb4; end: 10898aee7;  */

long FUN_10898aeb4(long param_1,long param_2)

{
  func_0x000107c27d2c(param_1 + 8,param_2 + 8);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  return param_1;
}



/* Entry: 10898aee8; end: 10898aeeb;  */

undefined8 * FUN_10898aee8(undefined8 *param_1)

{
  long lVar1;
  code *extraout_x8;
  code *extraout_x8_00;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined1 auStack_48 [24];
  
  *param_1 = &PTR_FUN_110aa2750;
  func_0x000107c316c8(auStack_48,&UNK_10f4edec4);
  plVar2 = param_1 + 4;
  if ((long *)*plVar2 != (long *)0x0) {
    (**(code **)(*(long *)*plVar2 + 0xc0))();
    (**(code **)(*(long *)*plVar2 + 0xd8))();
    (**(code **)(*(long *)*plVar2 + 0x28))((long *)*plVar2,0);
    (**(code **)(*(long *)*plVar2 + 0x38))();
  }
  plVar3 = param_1 + 5;
  if (*plVar3 != 0) {
    func_0x00010898b840();
    (*extraout_x8)();
  }
  *plVar3 = 0;
  if (*plVar2 != 0) {
    func_0x00010898b840();
    (*extraout_x8_00)();
  }
  plVar4 = param_1 + 9;
  lVar1 = *plVar4;
  param_1[4] = 0;
  *plVar4 = 0;
  if (lVar1 != 0) {
    func_0x00010898b814();
  }
  func_0x000107c316d0(auStack_48);
  FUN_10898b0bc(param_1 + 0xb);
  FUN_10898ada0(param_1 + 10);
  FUN_10898b674(plVar4);
  FUN_10898b7c4(param_1 + 8);
  FUN_108981388(param_1 + 7);
  FUN_108982f1c(param_1 + 6);
  FUN_10898b5d8(plVar3);
  FUN_10898b52c(plVar2);
  func_0x00010898b128(param_1 + 1);
  return param_1;
}



/* Entry: 10898aeec; end: 10898aeff;  */

void FUN_10898aeec(void)

{
  FUN_10898b698();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10898af00; end: 10898b06f;  */

void FUN_10898af00(undefined8 param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  code *extraout_x8;
  undefined8 *puVar5;
  long lStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined8 *puStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [72];
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined8 *puStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  undefined1 uStack_50;
  undefined1 uStack_48;
  
  lStack_e8 = *(long *)(param_2 + 0x58);
  if (lStack_e8 != 0) {
    piVar1 = (int *)(lStack_e8 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_d8 = *(undefined8 *)(param_2 + 0x68);
  uStack_e0 = *(undefined8 *)(param_2 + 0x60);
  uStack_c8 = *(undefined8 *)(param_2 + 0x78);
  uStack_d0 = *(undefined8 *)(param_2 + 0x70);
  uStack_c0 = 0x493e000000000;
  uStack_b8 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  plStack_a8 = (long *)0x0;
  puStack_b0 = (undefined8 *)0x0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_5f = 0;
  uStack_67 = 0;
  uStack_60 = 0;
  puVar5 = *(undefined8 **)(param_2 + 0x28);
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5);
    if (puStack_b0 != (undefined8 *)0x0) {
      func_0x00010898b840();
      (*extraout_x8)();
    }
  }
  plVar4 = *(long **)(param_2 + 0x28);
  puStack_b0 = puVar5;
  (**(code **)(*plVar4 + 0x20))();
  lStack_190 = lStack_e8;
  uStack_168 = uStack_c0;
  uStack_160 = uStack_b8;
  puStack_158 = puStack_b0;
  uStack_180 = uStack_d8;
  uStack_188 = uStack_e0;
  uStack_170 = uStack_c8;
  uStack_178 = uStack_d0;
  lStack_e8 = 0;
  puStack_b0 = (undefined8 *)0x0;
  uStack_148 = uStack_a0;
  uStack_140 = uStack_98;
  uStack_138 = uStack_90;
  uStack_90 = 0;
  plStack_150 = plVar4;
  plStack_a8 = plVar4;
  _memcpy(auStack_130,&uStack_88,0x41);
  func_0x000108a19170(param_1,&lStack_190);
  func_0x000108a1cbb8(&lStack_190);
  func_0x000108a1cbb8(&lStack_e8);
  return;
}



/* Entry: 10898b070; end: 10898b0bb;  */

void FUN_10898b070(long *param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x30);
  *param_1 = (long)puVar1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010898b964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)();
    return;
  }
  return;
}



/* Entry: 10898b0bc; end: 10898b0e3;  */

void FUN_10898b0bc(long param_1)

{
  func_0x00010898b8fc();
  if (param_1 != 0) {
    FUN_10898b0e4();
  }
  return;
}



/* Entry: 10898b0e4; end: 10898b14b;  */

bool FUN_10898b0e4(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  
  piVar1 = (int *)(param_1 + 8);
  do {
    iVar2 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar2 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((param_1 != 0) && (iVar2 == 1)) {
    func_0x00010898b814();
  }
  return iVar2 != 1;
}



/* Entry: 10898b14c; end: 10898b14f;  */

void FUN_10898b14c(void)

{
  return;
}



/* Entry: 10898b150; end: 10898b227;  */

void FUN_10898b150(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 auStack_58 [16];
  undefined8 uStack_48;
  undefined8 *puStack_38;
  
  lVar2 = *(long *)(param_1 + 8);
  FUN_10897dc10(auStack_58);
  puVar1 = (undefined8 *)0x40;
  __Znwm();
  *(undefined4 *)(puVar1 + 1) = 0;
  *puVar1 = &PTR_FUN_110aa2818;
  puVar1[2] = 0;
  puVar1[3] = param_1;
  FUN_10897dc10(puVar1 + 4,auStack_58);
  puStack_38 = puVar1;
  func_0x000104c04b3c(lVar2,lVar2 + 0x70,&puStack_38,0,lVar2 + 0x10);
  puVar1 = puStack_38;
  puStack_38 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010898b814();
  }
  func_0x00010898b860(uStack_48);
  return;
}



/* Entry: 10898b228; end: 10898b3a7;  */

void FUN_10898b228(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  undefined1 uVar3;
  bool bVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  long lStack_70;
  long lStack_68;
  undefined8 *puStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 *puStack_48;
  
  plVar8 = *(long **)(param_1 + 8);
  puVar5 = auStack_90;
  FUN_10897dc10();
  __ZNSt3__16chrono12steady_clock3nowEv();
  lStack_68 = plVar8[0xf];
  lStack_70 = plVar8[0xe];
  if (plVar8[0xf] != 0) {
    plVar1 = (long *)(plVar8[0xf] + 8);
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  __ZNSt3__15mutex4lockEv(plVar8 + 2);
  uVar3 = (char)plVar8[1] != '\0';
  bVar4 = (char)plVar8[1] == '\x01';
  if (bVar4) {
    func_0x00010898b9a8();
    if (!(bool)uVar3 || bVar4) {
      FUN_108b851fc(plVar8);
      func_0x00010898b9a8();
      if (!(bool)uVar3) goto LAB_10898b328;
    }
    lVar7 = plVar8[0x34];
    plVar8[0x34] = lVar7 + 1;
    puVar6 = (undefined8 *)0x40;
    __Znwm();
    *(undefined4 *)(puVar6 + 1) = 0;
    *puVar6 = &PTR_FUN_110aa2858;
    puVar6[2] = lVar7 + 1;
    puVar6[3] = param_1;
    FUN_10897dc10(puVar6 + 4,auStack_90);
    lStack_50 = lStack_68;
    lStack_58 = lStack_70;
    lStack_70 = 0;
    lStack_68 = 0;
    puStack_60 = puVar6;
    puStack_48 = puVar5 + param_3 * 1000;
    (**(code **)(*plVar8 + 0x10))(plVar8,&puStack_60);
    FUN_10897dd3c(&puStack_60);
  }
LAB_10898b328:
  __ZNSt3__15mutex6unlockEv(plVar8 + 2);
  func_0x00010897dd64(&lStack_70);
  func_0x00010898b860(uStack_80);
  return;
}



/* Entry: 10898b3a8; end: 10898b3df;  */

undefined8 FUN_10898b3a8(undefined8 *param_1)

{
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  
  func_0x00010898b8b4();
  *param_1 = extraout_x9;
  return extraout_x8;
}



/* Entry: 10898b3e0; end: 10898b433;  */

undefined8 FUN_10898b3e0(undefined8 param_1)

{
  FUN_10898b7e8(&PTR_FUN_110aa2818);
  return param_1;
}



/* Entry: 10898b434; end: 10898b463;  */

void FUN_10898b434(void)

{
  func_0x00010898b910();
  func_0x00010898b944();
  func_0x00010898b800();
  return;
}



/* Entry: 10898b464; end: 10898b4a7;  */

void FUN_10898b464(undefined8 *param_1,long param_2)

{
  undefined8 extraout_x8;
  undefined8 uVar1;
  
  func_0x00010898b924(param_1);
  uVar1 = *param_1;
  *param_1 = extraout_x8;
  (**(code **)(param_2 + 0x18))(param_2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10898b4a8; end: 10898b4fb;  */

undefined8 FUN_10898b4a8(undefined8 param_1)

{
  FUN_10898b7e8(&PTR_FUN_110aa2858);
  return param_1;
}



/* Entry: 10898b4fc; end: 10898b52b;  */

void FUN_10898b4fc(void)

{
  func_0x00010898b910();
  func_0x00010898b944();
  func_0x00010898b800();
  return;
}



/* Entry: 10898b52c; end: 10898b557;  */

void FUN_10898b52c(long param_1)

{
  code *extraout_x8;
  
  func_0x00010898b8fc();
  if (param_1 != 0) {
    func_0x00010898b840();
    (*extraout_x8)();
  }
  return;
}



/* Entry: 10898b558; end: 10898b57f;  */

void FUN_10898b558(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0xc) = 0x500000005;
  *(undefined8 *)(param_1 + 4) = 0x500000000;
  *(undefined8 *)(param_1 + 0x14) = 0x40400000bf800000;
  param_1[0x1c] = 1;
  return;
}



/* Entry: 10898b580; end: 10898b5ab;  */

void FUN_10898b580(long *param_1)

{
  func_0x00010898b894();
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x28))();
  }
  return;
}



/* Entry: 10898b5ac; end: 10898b5d7;  */

void FUN_10898b5ac(long param_1)

{
  code *extraout_x8;
  
  func_0x00010898b8fc();
  if (param_1 != 0) {
    func_0x00010898b840();
    (*extraout_x8)();
  }
  return;
}



/* Entry: 10898b5d8; end: 10898b603;  */

void FUN_10898b5d8(long param_1)

{
  code *extraout_x8;
  
  func_0x00010898b8fc();
  if (param_1 != 0) {
    func_0x00010898b840();
    (*extraout_x8)();
  }
  return;
}



/* Entry: 10898b604; end: 10898b673;  */

undefined8 * FUN_10898b604(undefined8 *param_1)

{
  long lVar1;
  code *extraout_x8;
  
  *param_1 = &PTR_DAT_110aa8ea0;
  lVar1 = param_1[0x1b];
  param_1[0x1b] = 0;
  if (lVar1 != 0) {
    func_0x00010898b820();
  }
  if (param_1[0x1a] != 0) {
    func_0x00010898b840();
    (*extraout_x8)();
  }
  FUN_10898b580(param_1 + 0x19);
  FUN_10898b580(param_1 + 0x18);
  lVar1 = param_1[0x17];
  param_1[0x17] = 0;
  if (lVar1 != 0) {
    func_0x00010898b814();
  }
  return param_1;
}



/* Entry: 10898b674; end: 10898b697;  */

void FUN_10898b674(long param_1)

{
  func_0x00010898b894();
  if (param_1 != 0) {
    func_0x00010898b814();
  }
  return;
}



/* Entry: 10898b698; end: 10898b7c3;  */

undefined8 * FUN_10898b698(undefined8 *param_1)

{
  long lVar1;
  code *extraout_x8;
  code *extraout_x8_00;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined1 auStack_48 [24];
  
  *param_1 = &PTR_FUN_110aa2750;
  func_0x000107c316c8(auStack_48,&UNK_10f4edec4);
  plVar2 = param_1 + 4;
  if ((long *)*plVar2 != (long *)0x0) {
    (**(code **)(*(long *)*plVar2 + 0xc0))();
    (**(code **)(*(long *)*plVar2 + 0xd8))();
    (**(code **)(*(long *)*plVar2 + 0x28))((long *)*plVar2,0);
    (**(code **)(*(long *)*plVar2 + 0x38))();
  }
  plVar3 = param_1 + 5;
  if (*plVar3 != 0) {
    func_0x00010898b840();
    (*extraout_x8)();
  }
  *plVar3 = 0;
  if (*plVar2 != 0) {
    func_0x00010898b840();
    (*extraout_x8_00)();
  }
  plVar4 = param_1 + 9;
  lVar1 = *plVar4;
  param_1[4] = 0;
  *plVar4 = 0;
  if (lVar1 != 0) {
    func_0x00010898b814();
  }
  func_0x000107c316d0(auStack_48);
  FUN_10898b0bc(param_1 + 0xb);
  FUN_10898ada0(param_1 + 10);
  FUN_10898b674(plVar4);
  FUN_10898b7c4(param_1 + 8);
  FUN_108981388(param_1 + 7);
  FUN_108982f1c(param_1 + 6);
  FUN_10898b5d8(plVar3);
  FUN_10898b52c(plVar2);
  func_0x00010898b128(param_1 + 1);
  return param_1;
}



/* Entry: 10898b7c4; end: 10898b7e7;  */

void FUN_10898b7c4(long param_1)

{
  func_0x00010898b894();
  if (param_1 != 0) {
    func_0x00010898b854();
  }
  return;
}



/* Entry: 10898b7e8; end: 10898b9bb;  */

void FUN_10898b7e8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010898b7fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_2[6])(1,param_2 + 4,param_2 + 4);
  return;
}



/* Entry: 10898b9bc; end: 10898ba1f;  */

void FUN_10898b9bc(undefined8 *param_1)

{
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  long unaff_x19;
  undefined1 auStack_38 [24];
  
  func_0x00010898bf18();
  *param_1 = extraout_x8;
  param_1[1] = extraout_x9;
  func_0x000107c278b8(auStack_38,&UNK_10f4eded8);
  func_0x00010bcd0c00(unaff_x19 + 0x10,auStack_38,1,0,2000);
  func_0x00010898bebc();
  return;
}



/* Entry: 10898ba20; end: 10898ba43;  */

void FUN_10898ba20(undefined8 *param_1)

{
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  
  func_0x00010898bf18();
  *param_1 = extraout_x8;
  param_1[1] = extraout_x9;
  func_0x00010bcd1160(param_1 + 2);
  return;
}



/* Entry: 10898ba44; end: 10898ba4f;  */

void FUN_10898ba44(undefined8 *param_1)

{
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  
  func_0x00010898bf18();
  *param_1 = extraout_x8;
  param_1[1] = extraout_x9;
  func_0x00010bcd1160(param_1 + 2);
  return;
}



/* Entry: 10898ba50; end: 10898ba63;  */

void FUN_10898ba50(void)

{
  FUN_10898ba20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10898ba64; end: 10898ba6b;  */

void FUN_10898ba64(long param_1)

{
  FUN_10898ba20(param_1 + -8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10898ba6c; end: 10898bb0b;  */

void FUN_10898ba6c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = (undefined8 *)0xa8;
  __Znwm();
  *puVar1 = &PTR_DAT_110aa2958;
  uStack_50 = param_3;
  uStack_48 = param_4;
  func_0x000107c27958(auStack_68,&uStack_50);
  func_0x00010898bf0c(puVar1 + 1,auStack_68);
  func_0x00010898bebc();
  *param_1 = puVar1;
  return;
}



/* Entry: 10898bb0c; end: 10898bb63;  */

void FUN_10898bb0c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xa0;
  __Znwm();
  func_0x00010898bf0c();
  *param_1 = uVar1;
  return;
}



/* Entry: 10898bb64; end: 10898bb73;  */

void FUN_10898bb64(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xa0;
  __Znwm();
  func_0x00010898bf0c();
  *param_1 = uVar1;
  return;
}



/* Entry: 10898bb74; end: 10898bc1b;  */

long * FUN_10898bb74(long param_1)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  long *plVar3;
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [16];
  undefined8 uStack_178;
  long alStack_168 [2];
  code *pcStack_158;
  undefined1 auStack_150 [96];
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [16];
  undefined8 uStack_a8;
  code *pcStack_98;
  undefined1 auStack_90 [96];
  
  func_0x00010898bec4();
  FUN_10897dc10(auStack_b8);
  pcStack_98 = FUN_10898bd1c;
  FUN_10898bd9c(auStack_90,auStack_c0);
  plVar3 = (long *)(param_1 + 8);
  (**(code **)(*plVar3 + 0x10))(plVar3,&pcStack_98);
  func_0x00010898beac();
  func_0x00010898be48(uStack_a8);
  func_0x00010898bedc();
  if ((bool)in_ZR) {
    return plVar3;
  }
  ___stack_chk_fail();
  func_0x00010898beac();
  puVar2 = auStack_b8;
  func_0x00010898be48(uStack_a8);
  func_0x00010898be50();
  func_0x00010898bec4();
  puVar1 = auStack_188;
  FUN_10897dc10(puVar1);
  __ZNSt3__16chrono12steady_clock3nowEv();
  pcStack_158 = FUN_10898bdd0;
  FUN_10898be00(auStack_150,auStack_190);
  func_0x00010bcce9b8(alStack_168,plVar3 + 1,&pcStack_158,puVar1 + (long)puVar2 * 1000);
  func_0x00010898be94();
  plVar3 = alStack_168;
  func_0x000107c27f44();
  func_0x00010898be48(uStack_178);
  func_0x00010898bedc();
  if ((bool)in_ZR) {
    return plVar3;
  }
  ___stack_chk_fail();
  func_0x00010898be94();
  func_0x00010898be48(uStack_178);
  func_0x00010898be50();
  *plVar3 = (long)&PTR_DAT_110aa2958;
  func_0x00010bcce910(plVar3 + 1);
  return plVar3;
}



/* Entry: 10898bc1c; end: 10898bcdb;  */

undefined8 * FUN_10898bc1c(long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [16];
  undefined8 uStack_b8;
  undefined8 auStack_a8 [2];
  code *pcStack_98;
  undefined1 auStack_90 [96];
  
  func_0x00010898bec4();
  puVar1 = auStack_c8;
  FUN_10897dc10(puVar1);
  __ZNSt3__16chrono12steady_clock3nowEv();
  pcStack_98 = FUN_10898bdd0;
  FUN_10898be00(auStack_90,auStack_d0);
  func_0x00010bcce9b8(auStack_a8,param_1 + 8,&pcStack_98,puVar1 + param_3 * 1000);
  func_0x00010898be94();
  puVar2 = auStack_a8;
  func_0x000107c27f44();
  func_0x00010898be48(uStack_b8);
  func_0x00010898bedc();
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010898be94();
  func_0x00010898be48(uStack_b8);
  func_0x00010898be50();
  *puVar2 = &PTR_DAT_110aa2958;
  func_0x00010bcce910(puVar2 + 1);
  return puVar2;
}



/* Entry: 10898bcdc; end: 10898bd07;  */

undefined8 * FUN_10898bcdc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110aa2958;
  func_0x00010bcce910(param_1 + 1);
  return param_1;
}


