/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108c77ad4; end: 108c77b9f;  */

undefined8 FUN_108c77ad4(long param_1)

{
  code *extraout_x8;
  long lVar1;
  
  func_0x000107c27c90(param_1 + 0xa0);
  if (*(long *)(param_1 + 0x20) != 0) {
    *(undefined1 *)(param_1 + 0xb2) = 1;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  if (*(long *)(param_1 + 0xd0) == 0) {
    func_0x000104c019cc();
    func_0x000104c01ae0();
    (*extraout_x8)();
  }
  lVar1 = *(long *)(*(long *)(param_1 + 200) + 0x20);
  if (lVar1 == 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 200) + 0x28);
    if (lVar1 == 0) {
      return 1;
    }
    if (*(long *)(lVar1 + 0x20) == *(long *)(lVar1 + 0x28)) {
      return 1;
    }
    func_0x000104c0070c(param_1 + 0xa0);
  }
  else {
    if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x30)) {
      return 1;
    }
    func_0x0001004b972c(param_1 + 0xa0);
  }
  return 0;
}



/* Entry: 108c77ba0; end: 108c77bb3;  */

void FUN_108c77ba0(void)

{
  func_0x000108c786b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c77bb4; end: 108c77c2b;  */

undefined8 FUN_108c77bb4(long param_1)

{
  long unaff_x19;
  undefined1 *unaff_x21;
  
  func_0x000107c34e9c();
  if (*(char *)(param_1 + 0x78) == '\x01') {
    func_0x000107c27c70(*(undefined8 *)(unaff_x19 + 0x50));
    func_0x000108c78f5c();
    *unaff_x21 = *(undefined1 *)(unaff_x19 + 0x160);
  }
  else {
    func_0x000108c78f50();
    *(undefined1 *)(unaff_x19 + 0x31) = 0;
    *(undefined1 *)(unaff_x19 + 0x160) = *unaff_x21;
    FUN_108c77d98();
    if ((int)unaff_x19 == 0) {
      return 0;
    }
    func_0x000108c78f5c(0);
  }
  func_0x000108c78d00();
  func_0x000108c78d58();
  return 1;
}



/* Entry: 108c77c2c; end: 108c77c73;  */

void FUN_108c77c2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  code *UNRECOVERED_JUMPTABLE)

{
  long unaff_x19;
  undefined8 in_register_00005008;
  undefined8 in_register_00005028;
  undefined8 in_register_00005048;
  
  func_0x000107c34ea8();
  *(undefined1 *)(param_4 + 0x78) = 0;
  func_0x000107c34e70();
  func_0x000107c34ec0();
  *(undefined8 *)(unaff_x19 + 0x70) = in_register_00005048;
  *(undefined8 *)(unaff_x19 + 0x68) = param_3;
  *(undefined8 *)(unaff_x19 + 0x60) = in_register_00005028;
  *(undefined8 *)(unaff_x19 + 0x58) = param_2;
  *(undefined8 *)(unaff_x19 + 0x50) = in_register_00005008;
  *(undefined8 *)(unaff_x19 + 0x48) = param_1;
  func_0x000108c77dbc();
  if ((int)unaff_x19 != 0) {
    func_0x000108c78db0();
                    /* WARNING: Could not recover jumptable at 0x000108c78e88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* Entry: 108c77c74; end: 108c77c8b;  */

undefined8 FUN_108c77c74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108c77c8c; end: 108c77d57;  */

void FUN_108c77c8c(void)

{
  undefined1 in_ZR;
  int iVar1;
  long *plVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar3;
  long lStack_230;
  undefined8 auStack_228 [60];
  undefined8 uStack_48;
  
  func_0x000107c34e78();
  func_0x000107c27cac();
  plVar2 = plRam0000000113815c70;
  if ((((byte)UNRECOVERED_JUMPTABLE[0x31] & 1) != 0) &&
     (((byte)UNRECOVERED_JUMPTABLE[0x30] & 1) == 0)) {
    auStack_228[lStack_230 * 10] = 2;
    auStack_228[lStack_230 * 10 + 1] = 0;
    lStack_230 = lStack_230 + 1;
  }
  uVar3 = *(undefined8 *)(UNRECOVERED_JUMPTABLE + 0x58);
  (**(code **)(*(long *)UNRECOVERED_JUMPTABLE + 0x20))();
  (**(code **)(*plVar2 + 0x108))(plVar2,uVar3,auStack_228,lStack_230,UNRECOVERED_JUMPTABLE,0);
  if ((int)plVar2 != 0) {
    plVar2 = plRam0000000113815c70;
    func_0x000108c78c78();
  }
  func_0x000107c34e74(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    *(undefined1 *)(plVar2 + 0xf) = 1;
    func_0x000108c78dc0();
    iVar1 = (int)plVar2;
    func_0x000108c78d3c();
    func_0x000108c78c54();
    if (iVar1 != 0) {
      func_0x000108c78c98();
                    /* WARNING: Could not recover jumptable at 0x000108c78d84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    return;
  }
  return;
}



/* Entry: 108c77d58; end: 108c77d97;  */

void FUN_108c77d58(long param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = (int)param_1;
  *(undefined1 *)(param_1 + 0x78) = 1;
  func_0x000108c78dc0();
  func_0x000108c78d3c();
  func_0x000108c78c54();
  if (iVar1 == 0) {
    return;
  }
  func_0x000108c78c98();
                    /* WARNING: Could not recover jumptable at 0x000108c78d84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 108c77d98; end: 108c77e8f;  */

undefined8 FUN_108c77d98(long param_1)

{
  code *extraout_x8;
  long lVar1;
  
  func_0x000107c27c90(param_1 + 0x80);
  if (*(long *)(param_1 + 0xb0) == 0) {
    func_0x000104c019cc();
    func_0x000104c01ae0();
    (*extraout_x8)();
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0xa8) + 0x20);
  if (lVar1 == 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0xa8) + 0x28);
    if (lVar1 == 0) {
      return 1;
    }
    if (*(long *)(lVar1 + 0x20) == *(long *)(lVar1 + 0x28)) {
      return 1;
    }
    func_0x000104c0070c(param_1 + 0x80);
  }
  else {
    if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x30)) {
      return 1;
    }
    func_0x0001004b972c(param_1 + 0x80);
  }
  return 0;
}



/* Entry: 108c77e90; end: 108c77ea3;  */

void FUN_108c77e90(void)

{
  func_0x000108c78678();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c77ea4; end: 108c77fc7;  */

void FUN_108c77ea4(long param_1)

{
  int iVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined1 *unaff_x21;
  
  func_0x000107c34e9c();
  if (*(char *)(param_1 + 0x68) == '\x01') {
    func_0x000107c27c70(*(undefined8 *)(unaff_x19 + 0x40));
    *unaff_x20 = *(undefined8 *)(unaff_x19 + 0x30);
    *unaff_x21 = *(undefined1 *)(unaff_x19 + 0x150);
  }
  else {
    FUN_108c76c58(unaff_x19 + 8);
    *(undefined1 *)(unaff_x19 + 0x150) = *unaff_x21;
    func_0x000107c27c90(unaff_x19 + 0x70);
    if (*(char *)(unaff_x19 + 8) == '\x01') {
      *(undefined1 *)(unaff_x19 + 0x81) = 1;
    }
    else {
      *(undefined8 *)(unaff_x19 + 0x128) = 0;
      *(undefined8 *)(unaff_x19 + 0x130) = 0;
    }
    iVar1 = (int)unaff_x19 + 0x70;
    func_0x000107c27c98();
    if (iVar1 == 0) {
      return;
    }
    *unaff_x20 = *(undefined8 *)(unaff_x19 + 0x30);
  }
  func_0x000108c78d00();
  func_0x000108c78d58();
  return;
}



/* Entry: 108c77fc8; end: 108c77feb;  */

undefined8 FUN_108c77fc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108c77fec; end: 108c78043;  */

void FUN_108c77fec(long param_1)

{
  undefined1 in_ZR;
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  long *unaff_x23;
  undefined8 uStack_48;
  
  func_0x000107c34e78();
  func_0x000107c2a948();
  func_0x000107c34ebc();
  func_0x000107c34e90();
  func_0x000107c34e80();
  if ((int)param_1 != 0) {
    param_1 = *unaff_x23;
    func_0x000108c78c78();
  }
  func_0x000107c34e74(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  *(undefined1 *)(param_1 + 0x68) = 1;
  func_0x000108c78dc0();
  iVar1 = (int)param_1;
  func_0x000108c78d3c();
  func_0x000108c78c54();
  if (iVar1 == 0) {
    return;
  }
  func_0x000108c78c98();
                    /* WARNING: Could not recover jumptable at 0x000108c78d84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 108c78044; end: 108c78083;  */

void FUN_108c78044(long param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = (int)param_1;
  *(undefined1 *)(param_1 + 0x68) = 1;
  func_0x000108c78dc0();
  func_0x000108c78d3c();
  func_0x000108c78c54();
  if (iVar1 == 0) {
    return;
  }
  func_0x000108c78c98();
                    /* WARNING: Could not recover jumptable at 0x000108c78d84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 108c78084; end: 108c780e3;  */

void FUN_108c78084(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c34ea8();
  FUN_108c780f0();
  lVar1 = *(long *)(unaff_x20 + 0x18);
  if (lVar1 == 0) {
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
  }
  else if (lVar1 == unaff_x20) {
    *(long *)(unaff_x19 + 0x18) = unaff_x19;
    (**(code **)(**(long **)(unaff_x20 + 0x18) + 0x18))();
  }
  else {
    *(long *)(unaff_x19 + 0x18) = lVar1;
    *(undefined8 *)(unaff_x20 + 0x18) = 0;
  }
  return;
}



/* Entry: 108c780e4; end: 108c780ef;  */

void FUN_108c780e4(long param_1,int param_2)

{
  int iVar1;
  code *extraout_x8;
  undefined1 uStack_21;
  
  uStack_21 = param_2 != 0;
  iVar1 = (int)*(undefined8 *)(param_1 + 0x40);
  func_0x000108c78d94();
  (*extraout_x8)();
  if (iVar1 != 0) {
    FUN_108c78178(param_1 + 0x20,&uStack_21);
  }
  return;
}



/* Entry: 108c780f0; end: 108c78177;  */

long FUN_108c780f0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (lVar1 == param_1) {
    uVar2 = 0x20;
  }
  else {
    if (lVar1 == 0) {
      return param_1;
    }
    uVar2 = 0x28;
  }
  func_0x000108c78f20(uVar2);
  return param_1;
}



/* Entry: 108c78178; end: 108c7819b;  */

void FUN_108c78178(undefined8 param_1,undefined1 *param_2)

{
  FUN_108c7819c(param_1,*param_2);
  return;
}



/* Entry: 108c7819c; end: 108c781d3;  */

void FUN_108c7819c(long param_1,undefined1 param_2)

{
  long *plVar1;
  undefined1 uStack_11;
  
  plVar1 = *(long **)(param_1 + 0x18);
  uStack_11 = param_2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,&uStack_11);
    return;
  }
  func_0x000104bfeb48();
  return;
}



/* Entry: 108c781d4; end: 108c781db;  */

void FUN_108c781d4(void)

{
  return;
}



/* Entry: 108c781dc; end: 108c78203;  */

void FUN_108c781dc(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x000108c78d70();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_FUN_110abe990;
  param_1[1] = uVar1;
  return;
}



/* Entry: 108c78204; end: 108c78223;  */

void FUN_108c78204(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110abe990;
  param_2[1] = uVar1;
  return;
}



/* Entry: 108c78224; end: 108c782a7;  */

void FUN_108c78224(long param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  long extraout_x8;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined4 auStack_a0 [2];
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined4 auStack_68 [2];
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  plVar6 = *(long **)(*(long *)(param_1 + 8) + 0x40);
  if (*param_2 == '\x01') {
    plVar5 = plVar6;
    (**(code **)(*plVar6 + 0x20))(plVar6,*(undefined8 *)(*(long *)(param_1 + 8) + 0x20));
    uVar3 = (uint)plVar5 ^ 1;
  }
  else {
    uVar3 = 0;
  }
  (**(code **)(*plVar6 + 0x28))();
  func_0x000108c78f74();
  plVar5 = plVar6 + 299;
  do {
    lVar4 = *plVar5;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    lVar4 = plVar6[0x7b];
    lStack_58 = plVar6[0x7d];
    lStack_60 = plVar6[0x7c];
    lStack_50 = plVar6[0x7e];
    plVar6[0x7d] = 0;
    plVar6[0x7c] = 0;
    plVar6[0x7e] = 0;
    lStack_38 = plVar6[0x81];
    lStack_40 = plVar6[0x80];
    lStack_48 = plVar6[0x7f];
    plVar6[0x81] = 0;
    plVar6[0x80] = 0;
    plVar6[0x7f] = 0;
    plVar5 = (long *)plVar6[8];
    auStack_68[0] = (int)lVar4;
    (**(code **)*plVar6)();
    func_0x000108c78cbc();
    (**(code **)(extraout_x8 + 0x128))();
    if (uVar3 == 0) {
      lStack_90 = lStack_58;
      lStack_98 = lStack_60;
      lStack_88 = lStack_50;
      lStack_60 = 0;
      lStack_58 = 0;
      lStack_78 = lStack_40;
      lStack_80 = lStack_48;
      lStack_70 = lStack_38;
      lStack_50 = 0;
      lStack_48 = 0;
      lStack_40 = 0;
      lStack_38 = 0;
      auStack_a0[0] = (int)lVar4;
      (**(code **)(*plVar5 + 0x18))(plVar5,auStack_a0);
      func_0x000108c78ea0();
    }
    else {
      (**(code **)(*plVar5 + 0x10))(plVar5,auStack_68);
    }
    func_0x000107c27cbc(auStack_68);
  }
  return;
}



/* Entry: 108c782a8; end: 108c782b3;  */

undefined ** FUN_108c782a8(void)

{
  return &PTR_DAT_110abea00;
}



/* Entry: 108c782b4; end: 108c783ef;  */

void FUN_108c782b4(undefined8 *param_1,int param_2)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  long extraout_x8;
  long lVar4;
  long *plVar5;
  undefined4 auStack_a0 [2];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 auStack_68 [2];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  plVar5 = param_1 + 299;
  do {
    lVar4 = *plVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 + -1 == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x7b);
    uStack_58 = param_1[0x7d];
    uStack_60 = param_1[0x7c];
    uStack_50 = param_1[0x7e];
    param_1[0x7d] = 0;
    param_1[0x7c] = 0;
    param_1[0x7e] = 0;
    uStack_38 = param_1[0x81];
    uStack_40 = param_1[0x80];
    uStack_48 = param_1[0x7f];
    param_1[0x81] = 0;
    param_1[0x80] = 0;
    param_1[0x7f] = 0;
    plVar5 = (long *)param_1[8];
    auStack_68[0] = uVar1;
    (**(code **)*param_1)();
    func_0x000108c78cbc();
    (**(code **)(extraout_x8 + 0x128))();
    if (param_2 == 0) {
      uStack_90 = uStack_58;
      uStack_98 = uStack_60;
      uStack_88 = uStack_50;
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_78 = uStack_40;
      uStack_80 = uStack_48;
      uStack_70 = uStack_38;
      uStack_50 = 0;
      uStack_48 = 0;
      uStack_40 = 0;
      uStack_38 = 0;
      auStack_a0[0] = uVar1;
      (**(code **)(*plVar5 + 0x18))(plVar5,auStack_a0);
      func_0x000108c78ea0();
    }
    else {
      (**(code **)(*plVar5 + 0x10))(plVar5,auStack_68);
    }
    func_0x000107c27cbc(auStack_68);
  }
  return;
}



/* Entry: 108c783f0; end: 108c7842b;  */

long FUN_108c783f0(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x18) == param_1) {
    uVar1 = 0x20;
  }
  else {
    if (*(long *)(param_1 + 0x18) == 0) {
      return param_1;
    }
    uVar1 = 0x28;
  }
  func_0x000108c78f20(uVar1);
  return param_1;
}



/* Entry: 108c7842c; end: 108c78433;  */

void FUN_108c7842c(void)

{
  return;
}



/* Entry: 108c78434; end: 108c7845b;  */

void FUN_108c78434(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x000108c78d70();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_FUN_110abea20;
  param_1[1] = uVar1;
  return;
}



/* Entry: 108c7845c; end: 108c7847b;  */

void FUN_108c7845c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110abea20;
  param_2[1] = uVar1;
  return;
}



/* Entry: 108c7847c; end: 108c784c7;  */

void FUN_108c7847c(undefined8 *param_1,int param_2)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  long extraout_x8;
  long extraout_x8_00;
  long lVar4;
  long *plVar5;
  undefined4 auStack_a0 [2];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 auStack_68 [2];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000108c78e14();
  (**(code **)(extraout_x8_00 + 0x38))();
  func_0x000108c78f74();
  plVar5 = param_1 + 299;
  do {
    lVar4 = *plVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 + -1 == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x7b);
    uStack_58 = param_1[0x7d];
    uStack_60 = param_1[0x7c];
    uStack_50 = param_1[0x7e];
    param_1[0x7d] = 0;
    param_1[0x7c] = 0;
    param_1[0x7e] = 0;
    uStack_38 = param_1[0x81];
    uStack_40 = param_1[0x80];
    uStack_48 = param_1[0x7f];
    param_1[0x81] = 0;
    param_1[0x80] = 0;
    param_1[0x7f] = 0;
    plVar5 = (long *)param_1[8];
    auStack_68[0] = uVar1;
    (**(code **)*param_1)();
    func_0x000108c78cbc();
    (**(code **)(extraout_x8 + 0x128))();
    if (param_2 == 0) {
      uStack_90 = uStack_58;
      uStack_98 = uStack_60;
      uStack_88 = uStack_50;
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_78 = uStack_40;
      uStack_80 = uStack_48;
      uStack_70 = uStack_38;
      uStack_50 = 0;
      uStack_48 = 0;
      uStack_40 = 0;
      uStack_38 = 0;
      auStack_a0[0] = uVar1;
      (**(code **)(*plVar5 + 0x18))(plVar5,auStack_a0);
      func_0x000108c78ea0();
    }
    else {
      (**(code **)(*plVar5 + 0x10))(plVar5,auStack_68);
    }
    func_0x000107c27cbc(auStack_68);
  }
  return;
}



/* Entry: 108c784c8; end: 108c784db;  */

undefined ** FUN_108c784c8(void)

{
  return &PTR_DAT_110abea80;
}



/* Entry: 108c784dc; end: 108c78503;  */

void FUN_108c784dc(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x000108c78d70();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_DAT_110abeaa0;
  param_1[1] = uVar1;
  return;
}



/* Entry: 108c78504; end: 108c78523;  */

void FUN_108c78504(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_110abeaa0;
  param_2[1] = uVar1;
  return;
}



/* Entry: 108c78524; end: 108c7856f;  */

void FUN_108c78524(undefined8 *param_1,int param_2)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  long extraout_x8;
  long extraout_x8_00;
  long lVar4;
  long *plVar5;
  undefined4 auStack_a0 [2];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 auStack_68 [2];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000108c78e14();
  (**(code **)(extraout_x8_00 + 0x30))();
  func_0x000108c78f74();
  plVar5 = param_1 + 299;
  do {
    lVar4 = *plVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 + -1 == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x7b);
    uStack_58 = param_1[0x7d];
    uStack_60 = param_1[0x7c];
    uStack_50 = param_1[0x7e];
    param_1[0x7d] = 0;
    param_1[0x7c] = 0;
    param_1[0x7e] = 0;
    uStack_38 = param_1[0x81];
    uStack_40 = param_1[0x80];
    uStack_48 = param_1[0x7f];
    param_1[0x81] = 0;
    param_1[0x80] = 0;
    param_1[0x7f] = 0;
    plVar5 = (long *)param_1[8];
    auStack_68[0] = uVar1;
    (**(code **)*param_1)();
    func_0x000108c78cbc();
    (**(code **)(extraout_x8 + 0x128))();
    if (param_2 == 0) {
      uStack_90 = uStack_58;
      uStack_98 = uStack_60;
      uStack_88 = uStack_50;
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_78 = uStack_40;
      uStack_80 = uStack_48;
      uStack_70 = uStack_38;
      uStack_50 = 0;
      uStack_48 = 0;
      uStack_40 = 0;
      uStack_38 = 0;
      auStack_a0[0] = uVar1;
      (**(code **)(*plVar5 + 0x18))(plVar5,auStack_a0);
      func_0x000108c78ea0();
    }
    else {
      (**(code **)(*plVar5 + 0x10))(plVar5,auStack_68);
    }
    func_0x000107c27cbc(auStack_68);
  }
  return;
}



/* Entry: 108c78570; end: 108c78583;  */

undefined ** FUN_108c78570(void)

{
  return &PTR_DAT_110abeb00;
}



/* Entry: 108c78584; end: 108c785ab;  */

void FUN_108c78584(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x000108c78d70();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_DAT_110abeb20;
  param_1[1] = uVar1;
  return;
}



/* Entry: 108c785ac; end: 108c785d7;  */

void FUN_108c785ac(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_110abeb20;
  param_2[1] = uVar1;
  return;
}



/* Entry: 108c785d8; end: 108c785ff;  */

void FUN_108c785d8(undefined8 param_1)

{
  func_0x000108c78e8c();
  func_0x000108c78e0c(param_1,&PTR_DAT_110abeb80);
  func_0x000108c78da0();
  return;
}



/* Entry: 108c78600; end: 108c7860b;  */

undefined ** FUN_108c78600(void)

{
  return &PTR_DAT_110abeb80;
}



/* Entry: 108c7860c; end: 108c78637;  */

long FUN_108c7860c(long param_1)

{
  FUN_108c78638();
  FUN_108c783f0(param_1 + 0x20);
  return param_1;
}



/* Entry: 108c78638; end: 108c787cf;  */

void FUN_108c78638(long param_1)

{
  long extraout_x8;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    FUN_108c780f0(param_1 + 0x20);
    func_0x000108c78cbc();
                    /* WARNING: Could not recover jumptable at 0x000108c7866c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(extraout_x8 + 0x128))();
    return;
  }
  return;
}



/* Entry: 108c787d0; end: 108c787ff;  */

undefined8 * FUN_108c787d0(undefined8 *param_1)

{
  long extraout_x8;
  
  func_0x000108c78cbc(param_1,*param_1);
  (**(code **)(extraout_x8 + 0x88))();
  return param_1;
}



/* Entry: 108c78800; end: 108c78807;  */

void FUN_108c78800(void)

{
  return;
}



/* Entry: 108c78808; end: 108c7882f;  */

void FUN_108c78808(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x000108c78d70();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_FUN_110abeba0;
  param_1[1] = uVar1;
  return;
}



/* Entry: 108c78830; end: 108c7884f;  */

void FUN_108c78830(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110abeba0;
  param_2[1] = uVar1;
  return;
}



/* Entry: 108c78850; end: 108c7889b;  */

void FUN_108c78850(undefined8 *param_1,int param_2)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  long extraout_x8;
  long extraout_x8_00;
  long lVar4;
  long *plVar5;
  undefined4 auStack_a0 [2];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 auStack_68 [2];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000108c78e14();
  (**(code **)(extraout_x8_00 + 0x40))();
  func_0x000108c78f74();
  plVar5 = param_1 + 299;
  do {
    lVar4 = *plVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 + -1 == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x7b);
    uStack_58 = param_1[0x7d];
    uStack_60 = param_1[0x7c];
    uStack_50 = param_1[0x7e];
    param_1[0x7d] = 0;
    param_1[0x7c] = 0;
    param_1[0x7e] = 0;
    uStack_38 = param_1[0x81];
    uStack_40 = param_1[0x80];
    uStack_48 = param_1[0x7f];
    param_1[0x81] = 0;
    param_1[0x80] = 0;
    param_1[0x7f] = 0;
    plVar5 = (long *)param_1[8];
    auStack_68[0] = uVar1;
    (**(code **)*param_1)();
    func_0x000108c78cbc();
    (**(code **)(extraout_x8 + 0x128))();
    if (param_2 == 0) {
      uStack_90 = uStack_58;
      uStack_98 = uStack_60;
      uStack_88 = uStack_50;
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_78 = uStack_40;
      uStack_80 = uStack_48;
      uStack_70 = uStack_38;
      uStack_50 = 0;
      uStack_48 = 0;
      uStack_40 = 0;
      uStack_38 = 0;
      auStack_a0[0] = uVar1;
      (**(code **)(*plVar5 + 0x18))(plVar5,auStack_a0);
      func_0x000108c78ea0();
    }
    else {
      (**(code **)(*plVar5 + 0x10))(plVar5,auStack_68);
    }
    func_0x000107c27cbc(auStack_68);
  }
  return;
}



/* Entry: 108c7889c; end: 108c788af;  */

undefined ** FUN_108c7889c(void)

{
  return &PTR_DAT_110abec00;
}



/* Entry: 108c788b0; end: 108c78907;  */

void FUN_108c788b0(long param_1,undefined8 param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  code *extraout_x8_00;
  long unaff_x19;
  undefined8 unaff_x20;
  
  if (*(char *)(param_1 + 0x50) == '\x01') {
    func_0x000108c78cbc();
    func_0x000108c78de4(*(undefined8 *)(extraout_x8 + 0x10));
    UNRECOVERED_JUMPTABLE = (code *)0x211;
    (*extraout_x8_00)();
  }
  *(undefined1 *)(param_1 + 0x50) = 1;
  func_0x0001004b93b8(param_1,param_2);
  lVar2 = *(long *)(param_1 + 0x18);
  lVar1 = lVar2 + 0xb8;
  func_0x0001004b9428();
  *(undefined1 *)(unaff_x19 + 0x330) = 0;
  *(undefined1 *)(unaff_x19 + 0x311) = 1;
  *(int *)(unaff_x19 + 0x314) = (int)lVar2;
  *(long *)(unaff_x19 + 800) = lVar1;
  if ((*(byte *)(*(long *)(unaff_x19 + 0x18) + 0x150) & 1) != 0) {
    return;
  }
  *(undefined8 *)(unaff_x19 + 0x388) = unaff_x20;
  func_0x0001004b9444(*(undefined8 *)(unaff_x19 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0001004b9458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 108c78908; end: 108c789ff;  */

void FUN_108c78908(long param_1,undefined8 param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  code *extraout_x8;
  char *pcVar1;
  code *extraout_x8_00;
  undefined8 extraout_x8_01;
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x000107c34ea8();
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
    func_0x000108c78ce4(uRam0000000113815c70);
    UNRECOVERED_JUMPTABLE = (code *)0x21e;
    (*extraout_x8)();
  }
  pcVar1 = *(char **)(unaff_x19 + 0x18);
  if (*pcVar1 == '\x01') {
    func_0x000108c78d94(uRam0000000113815c70);
    func_0x000108c78de4();
    UNRECOVERED_JUMPTABLE = (code *)0x21f;
    (*extraout_x8_00)();
    pcVar1 = *(char **)(unaff_x19 + 0x18);
  }
  *(undefined8 *)(unaff_x19 + 0x78) = unaff_x20;
  func_0x000107c34ec8(pcVar1,*(undefined8 *)(unaff_x19 + 0x20));
  *(undefined8 *)(unaff_x19 + 0x68) = extraout_x8_01;
  func_0x000107c34ecc();
                    /* WARNING: Could not recover jumptable at 0x0001004b9458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 108c78a00; end: 108c78a4f;  */

void FUN_108c78a00(long param_1,undefined8 param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  code *extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x000107c34ea8();
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
    func_0x000108c78cbc();
    func_0x000108c78d10();
    UNRECOVERED_JUMPTABLE = (code *)0x245;
    (*extraout_x8)();
  }
  *(undefined8 *)(unaff_x19 + 0x388) = unaff_x20;
  *(undefined1 *)(unaff_x19 + 0x379) = 1;
  func_0x000107c34ecc(*(undefined8 *)(unaff_x19 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x000108c78a4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 108c78a50; end: 108c78ad7;  */

void FUN_108c78a50(long param_1)

{
  code *extraout_x8;
  code *extraout_x8_00;
  long unaff_x19;
  int unaff_w20;
  undefined8 unaff_x21;
  undefined1 auStack_68 [56];
  
  func_0x000107c34e9c();
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
    func_0x000108c78ce4(uRam0000000113815c70);
    (*extraout_x8)();
  }
  *(undefined8 *)(unaff_x19 + 0x388) = unaff_x21;
  FUN_108c78c00(auStack_68,unaff_x19 + 0x338);
  func_0x000108c78df8();
  if (unaff_w20 != 0) {
    func_0x000108c78d94(uRam0000000113815c70);
    func_0x000108c78de4();
    (*extraout_x8_00)();
  }
  func_0x000108c78d94(*(undefined8 *)(unaff_x19 + 0x20));
  func_0x000108c78ef4();
  return;
}



/* Entry: 108c78ad8; end: 108c78b93;  */

void FUN_108c78ad8(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  code *extraout_x8;
  ulong uVar1;
  code *extraout_x8_00;
  undefined1 auStack_78 [56];
  
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
    func_0x000108c78ce4(uRam0000000113815c70);
    (*extraout_x8)();
  }
  *(undefined8 *)(param_1 + 0x388) = param_4;
  uVar1 = param_3;
  if ((param_3 >> 0x20 & 1) != 0) {
    uVar1 = param_3 | 1;
    *(undefined1 *)(param_1 + 0x379) = 1;
  }
  FUN_108c78c00(auStack_78,param_1 + 0x338,param_2,param_3 & 0xffffffff00000000 | uVar1 & 0xffffffff
               );
  func_0x000108c78df8();
  if ((int)uVar1 != 0) {
    func_0x000108c78d48();
    func_0x000108c78de4();
    (*extraout_x8_00)();
  }
  func_0x000108c78d94(*(undefined8 *)(param_1 + 0x20));
  func_0x000108c78ef4();
  return;
}



/* Entry: 108c78b94; end: 108c78bc3;  */

long FUN_108c78b94(long param_1)

{
  func_0x000104c01188(param_1 + 0x4a8);
  func_0x000104c01224(param_1 + 0x300);
  FUN_108c76e2c(param_1 + 0x198);
  func_0x000104c011f4(param_1 + 0x50);
  return param_1 + -8;
}



/* Entry: 108c78bc4; end: 108c78bff;  */

long FUN_108c78bc4(long param_1)

{
  func_0x000104c01188(param_1 + 0x4b0);
  func_0x000104c01224(param_1 + 0x308);
  FUN_108c76e2c(param_1 + 0x1a0);
  func_0x000104c011f4(param_1 + 0x58);
  return param_1;
}



/* Entry: 108c78c00; end: 108c78c53;  */

void FUN_108c78c00(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 uStack_21;
  
  func_0x000107c34ea8(param_3);
  *(int *)(param_2 + 0x18) = (int)param_4;
  *(char *)(param_2 + 0x1c) = (char)((ulong)param_4 >> 0x20);
  FUN_108c76fe8();
  if ((uStack_21 & 1) == 0) {
    func_0x000104c00744(unaff_x20 + 0x10);
  }
  return;
}



/* Entry: 108c78c54; end: 108c78f7f;  */

void FUN_108c78c54(void)

{
  long *unaff_x19;
  
                    /* WARNING: Could not recover jumptable at 0x000108c78c74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x19 + 0x108))();
  return;
}



/* Entry: 108c78f80; end: 108c78faf;  */

long FUN_108c78f80(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_108c78fb0(param_1);
  return param_1;
}



/* Entry: 108c78fb0; end: 108c78fd7;  */

/* WARNING: Possible PIC construction at 0x000108c78fc4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108c78fc8) */

void FUN_108c78fb0(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x10) ^ 2;
  if ((uVar1 & 3) != 0) {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    func_0x000107c60ca0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(uVar1);
  return;
}



/* Entry: 108c78fd8; end: 108c78fdb;  */

long FUN_108c78fd8(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_108c78fb0(param_1);
  return param_1;
}



/* Entry: 108c78fdc; end: 108c78fef;  */

void FUN_108c78fdc(void)

{
  FUN_108c78f80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c78ff0; end: 108c78ffb;  */

undefined ** FUN_108c78ff0(void)

{
  return &PTR_DAT_110abed90;
}



/* Entry: 108c78ffc; end: 108c790df;  */

long * FUN_108c78ffc(long param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  
  puVar7 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)puVar7 + 0x17);
  if (lVar3 < 0) {
    lVar3 = puVar7[1];
    if (lVar3 == 0) goto LAB_108c79068;
    puVar1 = (undefined8 *)*puVar7;
  }
  else {
    puVar1 = puVar7;
    if (*(char *)((long)puVar7 + 0x17) == '\0') goto LAB_108c79068;
  }
  func_0x000107c303d4(puVar1,lVar3,1,&UNK_10f50efce);
  plVar2 = param_3;
  func_0x000107c280a0(param_3,1,puVar7,param_2);
  param_2 = plVar2;
LAB_108c79068:
  uVar4 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar4 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar4 + 8);
  }
  plVar2 = param_2;
  if (lVar3 != 0) {
    plVar2 = param_3;
    func_0x000107c280a0(param_3,2,uVar4,param_2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar3 = *(long *)(uVar5 + 8);
      uVar4 = *(ulong *)(uVar5 + 0x10);
    }
    else {
      lVar3 = uVar5 + 8;
    }
    if (*param_3 - (long)plVar2 < (long)(int)uVar4) {
      while( true ) {
        iVar8 = ((int)*param_3 - (int)plVar2) + 0x10;
        iVar6 = (int)uVar4;
        uVar4 = (ulong)(uint)(iVar6 - iVar8);
        if (iVar6 - iVar8 == 0 || iVar6 < iVar8) break;
        func_0x00010b4d5738();
        lVar3 = (long)plVar2 + (long)iVar8;
        plVar2 = param_3;
        func_0x000107c303e4(param_3,lVar3);
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar2 + (long)iVar6);
    }
    _memcpy(plVar2,lVar3,uVar4 & 0xffffffff);
    return (long *)((long)plVar2 + (long)(int)uVar4);
  }
  return plVar2;
}



/* Entry: 108c790e0; end: 108c7916f;  */

long FUN_108c790e0(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar1 + 0x17) < '\0') {
    if (*(long *)(uVar1 + 8) == 0) goto LAB_108c79118;
  }
  else if (*(char *)(uVar1 + 0x17) == '\0') {
LAB_108c79118:
    lVar3 = 0;
    goto LAB_108c7911c;
  }
  func_0x000107c282a0();
  lVar3 = uVar1 + 1;
LAB_108c7911c:
  uVar1 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c28098();
    lVar3 = lVar3 + uVar1 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar1 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar1 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x20) = (int)lVar3;
  return lVar3;
}



/* Entry: 108c79170; end: 108c79173;  */

void FUN_108c79170(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x10,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar1,uVar2);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 108c79174; end: 108c7924b;  */

void FUN_108c79174(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x10,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar1,uVar2);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 108c7924c; end: 108c7927b;  */

void FUN_108c7924c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_2 + 8) = uVar2;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  return;
}



/* Entry: 108c7927c; end: 108c792cb;  */

void FUN_108c7927c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x28);
  }
  *puVar1 = &PTR_FUN_110abed50;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 108c792cc; end: 108c792d3;  */

void FUN_108c792cc(void)

{
  return;
}



/* Entry: 108c792d4; end: 108c792ff; +[SCGrapheneProfileMetric profileAction] */

void FUN_108c792d4(void)

{
  _objc_alloc(PTR_PTR_1126b3d60);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c79300; end: 108c7932b; +[SCGrapheneProfileMetric profileView] */

void FUN_108c79300(void)

{
  _objc_alloc(PTR_PTR_1126b3d60);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c7932c; end: 108c79357; +[SCGrapheneProfileMetric profileViewEmittedNative] */

void FUN_108c7932c(void)

{
  _objc_alloc(PTR_PTR_1126b3d60);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c79358; end: 108c79383; +[SCGrapheneProfileMetric profileViewDuplicateDetected] */

void FUN_108c79358(void)

{
  _objc_alloc(PTR_PTR_1126b3d60);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c79384; end: 108c793af; +[SCGrapheneProfileMetric profileActionRawFallback] */

void FUN_108c79384(void)

{
  _objc_alloc(PTR_PTR_1126b3d60);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c793b0; end: 108c793db; +[SCGrapheneProfileMetric psmCarouselView] */

void FUN_108c793b0(void)

{
  _objc_alloc(PTR_PTR_1126b3d60);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c793dc; end: 108c79407; +[SCGrapheneProfileMetric psmOperaSess] */

void FUN_108c793dc(void)

{
  _objc_alloc(PTR_PTR_1126b3d60);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c79408; end: 108c79433; +[SCGrapheneProfileMetric psmOperaSessMediaViewed] */

void FUN_108c79408(void)

{
  _objc_alloc(PTR_PTR_1126b3d60);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c79434; end: 108c7945f; +[SCGrapheneProfileMetric psmOperaSessTimeViewed] */

void FUN_108c79434(void)

{
  _objc_alloc(PTR_PTR_1126b3d60);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c79460; end: 108c7948b; +[SCGrapheneProfileMetric psmGetData] */

void FUN_108c79460(void)

{
  _objc_alloc(PTR_PTR_1126b3d60);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c7948c; end: 108c794b7; +[SCGrapheneProfileMetric psmGetLatency] */

void FUN_108c7948c(void)

{
  _objc_alloc(PTR_PTR_1126b3d60);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c794b8; end: 108c794e3; +[SCGrapheneProfileMetric psmGetMsgs] */

void FUN_108c794b8(void)

{
  _objc_alloc(PTR_PTR_1126b3d60);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c794e4; end: 108c7950f; +[SCGrapheneProfileMetric psaGetData] */

void FUN_108c794e4(void)

{
  _objc_alloc(PTR_PTR_1126b3d60);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c79510; end: 108c7953b; +[SCGrapheneProfileMetric psaGetLatency] */

void FUN_108c79510(void)

{
  _objc_alloc(PTR_PTR_1126b3d60);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c7953c; end: 108c79567; +[SCGrapheneProfileMetric psaGetMsgs] */

void FUN_108c7953c(void)

{
  _objc_alloc(PTR_PTR_1126b3d60);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c79568; end: 108c79593; +[SCGrapheneProfileMetric snapcodeTooltip] */

void FUN_108c79568(void)

{
  _objc_alloc(PTR_PTR_1126b3d60);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c79594; end: 108c795bf; +[SCGrapheneProfileMetric timezoneImpressionProfile] */

void FUN_108c79594(void)

{
  _objc_alloc(PTR_PTR_1126b3d60);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c795c0; end: 108c7965f; -[SCGrapheneProfileMetric description] */

void FUN_108c795c0(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dbf098;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110dbf098,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126fdf08;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 108c79660; end: 108c79843; -[SCGrapheneRegistry profileGraphene] */

void FUN_108c79660(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x108c796e8;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam000000011372e180 != -1) {
    func_0x000107c27d9c(0x11372e180,&puStack_48);
  }
  uVar1 = uRam000000011372e178;
  _objc_retain(uRam000000011372e178);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108c79844; end: 108c798b7; -[SCGrapheneProfileMetric2 init] */

undefined1 * FUN_108c79844(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fdf10;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108c798b8; end: 108c79a2b;  */

void FUN_108c798b8(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined4 uStack_884;
  undefined8 *puStack_880;
  undefined8 *puStack_878;
  undefined8 uStack_870;
  undefined **ppuStack_868;
  undefined4 uStack_860;
  undefined4 uStack_850;
  undefined *puStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  long *plStack_808;
  long *plStack_800;
  undefined1 uStack_7f1;
  undefined **ppuStack_7f0;
  undefined4 uStack_7e8;
  undefined2 uStack_7d8;
  undefined2 uStack_7d6;
  undefined1 *puStack_7b8;
  undefined ***pppuStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  long *plStack_790;
  long *plStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 *puStack_6c0;
  undefined8 auStack_6b8 [2];
  char cStack_6a1;
  undefined8 auStack_6a0 [2];
  char cStack_689;
  long lStack_688;
  undefined8 *puStack_680;
  undefined8 *puStack_678;
  undefined8 *puStack_670;
  long *plStack_668;
  undefined *puStack_660;
  undefined *puStack_658;
  undefined8 ***pppuStack_650;
  code *pcStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined1 *puStack_628;
  undefined8 auStack_620 [2];
  char cStack_609;
  long lStack_608;
  undefined8 *puStack_600;
  undefined8 *puStack_5f8;
  undefined8 *puStack_5f0;
  long *plStack_5e8;
  undefined *puStack_5e0;
  undefined *puStack_5d8;
  undefined8 ***pppuStack_5d0;
  code *pcStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined1 *puStack_5a8;
  undefined8 auStack_5a0 [2];
  char cStack_589;
  long lStack_588;
  undefined8 *puStack_580;
  undefined8 *puStack_578;
  undefined8 *puStack_570;
  long *plStack_568;
  undefined *puStack_560;
  undefined *puStack_558;
  undefined8 ***pppuStack_550;
  code *pcStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined1 *puStack_528;
  undefined8 auStack_520 [2];
  char cStack_509;
  long lStack_508;
  undefined8 *puStack_500;
  undefined8 *puStack_4f8;
  undefined8 *puStack_4f0;
  long *plStack_4e8;
  undefined *puStack_4e0;
  undefined *puStack_4d8;
  undefined8 ***pppuStack_4d0;
  code *pcStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined1 *puStack_4a8;
  undefined8 auStack_4a0 [2];
  char cStack_489;
  long lStack_488;
  undefined8 *puStack_480;
  undefined8 *puStack_478;
  undefined8 *puStack_470;
  long *plStack_468;
  undefined *puStack_460;
  undefined *puStack_458;
  undefined8 ***pppuStack_450;
  code *pcStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined1 *puStack_428;
  undefined8 auStack_420 [2];
  char cStack_409;
  long lStack_408;
  undefined8 *puStack_400;
  undefined8 *puStack_3f8;
  undefined8 *puStack_3f0;
  long *plStack_3e8;
  undefined *puStack_3e0;
  undefined *puStack_3d8;
  undefined8 ***pppuStack_3d0;
  code *pcStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined1 *puStack_3a8;
  undefined8 auStack_3a0 [2];
  char cStack_389;
  long lStack_388;
  undefined8 *puStack_380;
  undefined8 *puStack_378;
  undefined8 *puStack_370;
  long *plStack_368;
  undefined *puStack_360;
  undefined *puStack_358;
  undefined8 ***pppuStack_350;
  code *pcStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined1 *puStack_328;
  undefined8 auStack_320 [2];
  char cStack_309;
  long lStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  undefined8 *puStack_2f0;
  long *plStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined8 ***pppuStack_2d0;
  code *pcStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 *puStack_2a8;
  undefined8 auStack_2a0 [2];
  char cStack_289;
  long lStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined8 *puStack_270;
  long *plStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined8 ***pppuStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined8 auStack_220 [2];
  char cStack_209;
  long lStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined *puStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 auStack_198 [2];
  char cStack_181;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined *puStack_148;
  undefined8 *puStack_140;
  undefined *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar3 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f50f15d;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x23 = auStack_60;
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110abede8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110abede8,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar5 = puVar3;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = puVar3;
      param_4 = param_3;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_108c79a2c;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar3 = puVar5;
  puVar11 = param_4;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar5);
  puVar10 = (undefined8 *)0x0;
  if (puVar2 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f50f15d;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x24 = auStack_f8;
    func_0x000107c278b8(auStack_f8,puVar2);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f50f15d;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar3 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x000107c278b8(auStack_e0,puVar3);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x000107c27984(&uStack_118,auStack_f8,&lStack_c8,2);
    puVar7 = &UNK_110abee38;
    unaff_x23 = &uStack_118;
    puVar3 = &uStack_118;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110abee38,puVar3,param_4);
    puStack_100 = unaff_x23;
    func_0x000107c278ac(&puStack_100);
    lVar14 = 0;
    puVar10 = auStack_f8;
    puVar11 = param_4;
    do {
      if ((&cStack_c9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(puVar5);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(puVar5);
  _objc_release(puVar1);
  puVar4 = puVar2;
  __Unwind_Resume();
  pcStack_128 = FUN_108c79c5c;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar7;
  puVar9 = puVar3;
  puVar12 = puVar11;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar10;
  puStack_148 = puVar2;
  puStack_140 = puVar5;
  puStack_138 = puVar1;
  ppuStack_130 = &puStack_90;
  _objc_retain(puVar7);
  _objc_retain(puVar3);
  puVar5 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar4 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f50f15d;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    unaff_x24 = auStack_198;
    func_0x000107c278b8(auStack_198,puVar1);
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f50f15d;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar5 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x000107c278b8(auStack_180,puVar5);
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    func_0x000107c27984(&uStack_1b8,auStack_198,&lStack_168,2);
    puVar8 = &UNK_110abee88;
    unaff_x23 = &uStack_1b8;
    puVar9 = &uStack_1b8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110abee88,puVar9,puVar11);
    puStack_1a0 = unaff_x23;
    func_0x000107c278ac(&puStack_1a0);
    lVar14 = 0;
    puVar5 = auStack_198;
    puVar12 = puVar11;
    do {
      if ((&cStack_169)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_180 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(puVar3);
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  if (cStack_181 < '\0') {
    __ZdlPv(auStack_198[0]);
  }
  _objc_release(puVar3);
  _objc_release(puVar7);
  puVar4 = puVar1;
  __Unwind_Resume();
  puVar11 = &uStack_240;
  pcStack_1c8 = FUN_108c79e8c;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar8;
  puVar10 = puVar9;
  puStack_200 = unaff_x24;
  puStack_1f8 = unaff_x23;
  puStack_1f0 = puVar5;
  puStack_1e8 = puVar1;
  puStack_1e0 = puVar3;
  puStack_1d8 = puVar7;
  pppuStack_1d0 = &ppuStack_130;
  _objc_retain(puVar8);
  plVar13 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar4 + 8);
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar1 = &UNK_10f50f15d;
    }
    else {
      puVar1 = puVar8;
      _objc_retainAutorelease(puVar8);
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    unaff_x23 = auStack_220;
    func_0x000107c278b8(auStack_220,puVar1);
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    func_0x000107c27984(&uStack_240,auStack_220,&lStack_208,1);
    puVar2 = &UNK_110abeed8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110abeed8,&uStack_240,puVar9);
    puStack_228 = (undefined1 *)&uStack_240;
    func_0x000107c278ac(&puStack_228);
    puVar10 = puVar11;
    puVar12 = puVar9;
    puVar5 = &uStack_240;
    if (cStack_209 < '\0') {
      __ZdlPv(auStack_220[0]);
      puVar10 = puVar11;
      puVar12 = puVar9;
      puVar5 = &uStack_240;
    }
  }
  puVar1 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  _objc_release(puVar8);
  puVar4 = puVar1;
  __Unwind_Resume();
  puVar11 = &uStack_2c0;
  pcStack_248 = FUN_108c7a000;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar2;
  puVar3 = puVar10;
  puStack_280 = unaff_x24;
  puStack_278 = unaff_x23;
  puStack_270 = puVar5;
  plStack_268 = plVar13;
  puStack_260 = puVar1;
  puStack_258 = puVar8;
  pppuStack_250 = &pppuStack_1d0;
  _objc_retain(puVar2);
  plVar13 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar4 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar1 = &UNK_10f50f15d;
    }
    else {
      puVar1 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x23 = auStack_2a0;
    func_0x000107c278b8(auStack_2a0,puVar1);
    uStack_2c0 = 0;
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    func_0x000107c27984(&uStack_2c0,auStack_2a0,&lStack_288,1);
    puVar7 = &UNK_110abef28;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110abef28,&uStack_2c0,puVar10);
    puStack_2a8 = (undefined1 *)&uStack_2c0;
    func_0x000107c278ac(&puStack_2a8);
    puVar3 = puVar11;
    puVar12 = puVar10;
    puVar5 = &uStack_2c0;
    if (cStack_289 < '\0') {
      __ZdlPv(auStack_2a0[0]);
      puVar3 = puVar11;
      puVar12 = puVar10;
      puVar5 = &uStack_2c0;
    }
  }
  puVar1 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  puVar4 = puVar1;
  __Unwind_Resume();
  puVar11 = &uStack_340;
  pcStack_2c8 = FUN_108c7a174;
  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar7;
  puVar10 = puVar3;
  puStack_300 = unaff_x24;
  puStack_2f8 = unaff_x23;
  puStack_2f0 = puVar5;
  plStack_2e8 = plVar13;
  puStack_2e0 = puVar1;
  puStack_2d8 = puVar2;
  pppuStack_2d0 = &pppuStack_250;
  _objc_retain(puVar7);
  plVar13 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar4 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f50f15d;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    unaff_x23 = auStack_320;
    func_0x000107c278b8(auStack_320,puVar1);
    uStack_340 = 0;
    uStack_338 = 0;
    uStack_330 = 0;
    func_0x000107c27984(&uStack_340,auStack_320,&lStack_308,1);
    puVar8 = &UNK_110abef78;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110abef78,&uStack_340,puVar3);
    puStack_328 = (undefined1 *)&uStack_340;
    func_0x000107c278ac(&puStack_328);
    puVar10 = puVar11;
    puVar12 = puVar3;
    puVar5 = &uStack_340;
    if (cStack_309 < '\0') {
      __ZdlPv(auStack_320[0]);
      puVar10 = puVar11;
      puVar12 = puVar3;
      puVar5 = &uStack_340;
    }
  }
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  puVar4 = puVar1;
  __Unwind_Resume();
  puVar11 = &uStack_3c0;
  pcStack_348 = FUN_108c7a2e8;
  lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar8;
  puVar3 = puVar10;
  puStack_380 = unaff_x24;
  puStack_378 = unaff_x23;
  puStack_370 = puVar5;
  plStack_368 = plVar13;
  puStack_360 = puVar1;
  puStack_358 = puVar7;
  pppuStack_350 = &pppuStack_2d0;
  _objc_retain(puVar8);
  plVar13 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar4 + 8);
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar1 = &UNK_10f50f15d;
    }
    else {
      puVar1 = puVar8;
      _objc_retainAutorelease(puVar8);
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    unaff_x23 = auStack_3a0;
    func_0x000107c278b8(auStack_3a0,puVar1);
    uStack_3c0 = 0;
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    func_0x000107c27984(&uStack_3c0,auStack_3a0,&lStack_388,1);
    puVar2 = &UNK_110abefc8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110abefc8,&uStack_3c0,puVar10);
    puStack_3a8 = (undefined1 *)&uStack_3c0;
    func_0x000107c278ac(&puStack_3a8);
    puVar3 = puVar11;
    puVar12 = puVar10;
    puVar5 = &uStack_3c0;
    if (cStack_389 < '\0') {
      __ZdlPv(auStack_3a0[0]);
      puVar3 = puVar11;
      puVar12 = puVar10;
      puVar5 = &uStack_3c0;
    }
  }
  puVar1 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_388) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  _objc_release(puVar8);
  puVar4 = puVar1;
  __Unwind_Resume();
  puVar11 = &uStack_440;
  pcStack_3c8 = FUN_108c7a45c;
  lStack_408 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar2;
  puVar10 = puVar3;
  puStack_400 = unaff_x24;
  puStack_3f8 = unaff_x23;
  puStack_3f0 = puVar5;
  plStack_3e8 = plVar13;
  puStack_3e0 = puVar1;
  puStack_3d8 = puVar8;
  pppuStack_3d0 = &pppuStack_350;
  _objc_retain(puVar2);
  plVar13 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar4 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar1 = &UNK_10f50f15d;
    }
    else {
      puVar1 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x23 = auStack_420;
    func_0x000107c278b8(auStack_420,puVar1);
    uStack_440 = 0;
    uStack_438 = 0;
    uStack_430 = 0;
    func_0x000107c27984(&uStack_440,auStack_420,&lStack_408,1);
    puVar7 = &UNK_110abf018;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110abf018,&uStack_440,puVar3);
    puStack_428 = (undefined1 *)&uStack_440;
    func_0x000107c278ac(&puStack_428);
    puVar10 = puVar11;
    puVar12 = puVar3;
    puVar5 = &uStack_440;
    if (cStack_409 < '\0') {
      __ZdlPv(auStack_420[0]);
      puVar10 = puVar11;
      puVar12 = puVar3;
      puVar5 = &uStack_440;
    }
  }
  puVar1 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_408) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  puVar4 = puVar1;
  __Unwind_Resume();
  puVar11 = &uStack_4c0;
  pcStack_448 = FUN_108c7a5d0;
  lStack_488 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar7;
  puVar3 = puVar10;
  puStack_480 = unaff_x24;
  puStack_478 = unaff_x23;
  puStack_470 = puVar5;
  plStack_468 = plVar13;
  puStack_460 = puVar1;
  puStack_458 = puVar2;
  pppuStack_450 = &pppuStack_3d0;
  _objc_retain(puVar7);
  plVar13 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar4 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f50f15d;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    unaff_x23 = auStack_4a0;
    func_0x000107c278b8(auStack_4a0,puVar1);
    uStack_4c0 = 0;
    uStack_4b8 = 0;
    uStack_4b0 = 0;
    func_0x000107c27984(&uStack_4c0,auStack_4a0,&lStack_488,1);
    puVar8 = &UNK_110abf068;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110abf068,&uStack_4c0,puVar10);
    puStack_4a8 = (undefined1 *)&uStack_4c0;
    func_0x000107c278ac(&puStack_4a8);
    puVar3 = puVar11;
    puVar12 = puVar10;
    puVar5 = &uStack_4c0;
    if (cStack_489 < '\0') {
      __ZdlPv(auStack_4a0[0]);
      puVar3 = puVar11;
      puVar12 = puVar10;
      puVar5 = &uStack_4c0;
    }
  }
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_488) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  puVar4 = puVar1;
  __Unwind_Resume();
  puVar11 = &uStack_540;
  pcStack_4c8 = FUN_108c7a744;
  lStack_508 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar8;
  puVar10 = puVar3;
  puStack_500 = unaff_x24;
  puStack_4f8 = unaff_x23;
  puStack_4f0 = puVar5;
  plStack_4e8 = plVar13;
  puStack_4e0 = puVar1;
  puStack_4d8 = puVar7;
  pppuStack_4d0 = &pppuStack_450;
  _objc_retain(puVar8);
  plVar13 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar4 + 8);
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar1 = &UNK_10f50f15d;
    }
    else {
      puVar1 = puVar8;
      _objc_retainAutorelease(puVar8);
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    unaff_x23 = auStack_520;
    func_0x000107c278b8(auStack_520,puVar1);
    uStack_540 = 0;
    uStack_538 = 0;
    uStack_530 = 0;
    func_0x000107c27984(&uStack_540,auStack_520,&lStack_508,1);
    puVar2 = &UNK_110abf0b8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110abf0b8,&uStack_540,puVar3);
    puStack_528 = (undefined1 *)&uStack_540;
    func_0x000107c278ac(&puStack_528);
    puVar10 = puVar11;
    puVar12 = puVar3;
    puVar5 = &uStack_540;
    if (cStack_509 < '\0') {
      __ZdlPv(auStack_520[0]);
      puVar10 = puVar11;
      puVar12 = puVar3;
      puVar5 = &uStack_540;
    }
  }
  puVar1 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_508) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  _objc_release(puVar8);
  puVar4 = puVar1;
  __Unwind_Resume();
  puVar11 = &uStack_5c0;
  pcStack_548 = FUN_108c7a8b8;
  lStack_588 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar2;
  puVar3 = puVar10;
  puStack_580 = unaff_x24;
  puStack_578 = unaff_x23;
  puStack_570 = puVar5;
  plStack_568 = plVar13;
  puStack_560 = puVar1;
  puStack_558 = puVar8;
  pppuStack_550 = &pppuStack_4d0;
  _objc_retain(puVar2);
  plVar13 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar4 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar1 = &UNK_10f50f15d;
    }
    else {
      puVar1 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x23 = auStack_5a0;
    func_0x000107c278b8(auStack_5a0,puVar1);
    uStack_5c0 = 0;
    uStack_5b8 = 0;
    uStack_5b0 = 0;
    func_0x000107c27984(&uStack_5c0,auStack_5a0,&lStack_588,1);
    puVar7 = &UNK_110abf108;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110abf108,&uStack_5c0,puVar10);
    puStack_5a8 = (undefined1 *)&uStack_5c0;
    func_0x000107c278ac(&puStack_5a8);
    puVar3 = puVar11;
    puVar12 = puVar10;
    puVar5 = &uStack_5c0;
    if (cStack_589 < '\0') {
      __ZdlPv(auStack_5a0[0]);
      puVar3 = puVar11;
      puVar12 = puVar10;
      puVar5 = &uStack_5c0;
    }
  }
  puVar1 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_588) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  puVar4 = puVar1;
  __Unwind_Resume();
  puVar11 = &uStack_640;
  pcStack_5c8 = FUN_108c7aa2c;
  lStack_608 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar7;
  puVar10 = puVar3;
  puStack_600 = unaff_x24;
  puStack_5f8 = unaff_x23;
  puStack_5f0 = puVar5;
  plStack_5e8 = plVar13;
  puStack_5e0 = puVar1;
  puStack_5d8 = puVar2;
  pppuStack_5d0 = &pppuStack_550;
  _objc_retain(puVar7);
  plVar13 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar4 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f50f15d;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    unaff_x23 = auStack_620;
    func_0x000107c278b8(auStack_620,puVar1);
    uStack_640 = 0;
    uStack_638 = 0;
    uStack_630 = 0;
    func_0x000107c27984(&uStack_640,auStack_620,&lStack_608,1);
    puVar8 = &UNK_110abf158;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110abf158,&uStack_640,puVar3);
    puStack_628 = (undefined1 *)&uStack_640;
    func_0x000107c278ac(&puStack_628);
    puVar10 = puVar11;
    puVar12 = puVar3;
    puVar5 = &uStack_640;
    if (cStack_609 < '\0') {
      __ZdlPv(auStack_620[0]);
      puVar10 = puVar11;
      puVar12 = puVar3;
      puVar5 = &uStack_640;
    }
  }
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_608) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  puVar4 = puVar1;
  __Unwind_Resume();
  pcStack_648 = FUN_108c7aba0;
  lStack_688 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar8;
  puStack_680 = unaff_x24;
  puStack_678 = unaff_x23;
  puStack_670 = puVar5;
  plStack_668 = plVar13;
  puStack_660 = puVar1;
  puStack_658 = puVar7;
  pppuStack_650 = &pppuStack_5d0;
  _objc_retain(puVar8);
  _objc_retain(puVar10);
  if (puVar4 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar4 + 8);
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar1 = &UNK_10f50f15d;
    }
    else {
      puVar1 = puVar8;
      _objc_retainAutorelease(puVar8);
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    func_0x000107c278b8(auStack_6b8,puVar1);
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f50f15d;
    }
    else {
      _objc_retainAutorelease(puVar10);
      puVar5 = puVar10;
      func_0x00010bdc3520(puVar10);
    }
    _objc_release(puVar10);
    func_0x000107c278b8(auStack_6a0,puVar5);
    uStack_6d8 = 0;
    uStack_6d0 = 0;
    uStack_6c8 = 0;
    func_0x000107c27984(&uStack_6d8,auStack_6b8,&lStack_688,2);
    puVar2 = &UNK_110abf1a8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110abf1a8,&uStack_6d8,puVar12);
    puStack_6c0 = &uStack_6d8;
    func_0x000107c278ac(&puStack_6c0);
    lVar14 = 0;
    do {
      if ((&cStack_689)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_6a0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(puVar10);
  puVar1 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_688) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar10);
  if (cStack_6a1 < '\0') {
    __ZdlPv(auStack_6b8[0]);
  }
  _objc_release(puVar10);
  _objc_release(puVar8);
  __Unwind_Resume();
  _objc_retain();
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  _objc_opt_class(PTR_PTR_1126db3e8);
  if (puVar1 == (undefined *)0x0) {
    uStack_750 = 0;
    uStack_768 = 0;
    uStack_770 = 0;
    uStack_758 = 0;
    uStack_760 = 0;
    uStack_778 = 0;
    uStack_780 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_780,puVar1);
  }
  puVar6 = &uStack_7f1;
  FUN_108c7b6ec();
  uStack_860 = 0xf;
  uStack_850 = 0x100;
  _objc_retain(puVar2);
  ppuStack_868 = &PTR_DAT_110862760;
  uStack_828 = 0;
  uStack_830 = 0;
  uStack_818 = 0;
  uStack_820 = 0;
  plStack_808 = (long *)0x0;
  uStack_810 = 0;
  plStack_800 = (long *)0x0;
  uStack_7d6 = *(undefined2 *)(puVar6 + 0x1a);
  uStack_7e8 = 10;
  uStack_7d8 = 0x100;
  ppuStack_7f0 = &PTR_SUB_110862700;
  uStack_7a0 = 0;
  uStack_7a8 = 0;
  plStack_790 = (long *)0x0;
  uStack_798 = 0;
  plStack_788 = (long *)0x0;
  puStack_880 = (undefined8 *)0x0;
  puStack_878 = (undefined8 *)0x0;
  uStack_870 = 0;
  uStack_884 = 0;
  puVar3 = &uStack_780;
  puStack_838 = puVar2;
  puStack_7b8 = puVar6;
  pppuStack_7b0 = &ppuStack_868;
  func_0x000107c310cc(puVar3,&ppuStack_7f0,&puStack_880,&uStack_884);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  if (puStack_880 != (undefined8 *)0x0) {
    puStack_878 = puStack_880;
    __ZdlPv();
  }
  plVar13 = plStack_788;
  ppuStack_7f0 = &PTR_SUB_110862700;
  plStack_788 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  plVar13 = plStack_790;
  plStack_790 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  puStack_880 = &uStack_7a8;
  func_0x000107c27dd4(&puStack_880);
  plVar13 = plStack_800;
  ppuStack_868 = &PTR_DAT_110862760;
  plStack_800 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  plVar13 = plStack_808;
  plStack_808 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  puStack_880 = &uStack_820;
  func_0x000107c27dd4(&puStack_880);
  _objc_release(puStack_838);
  func_0x000107c27da8(&uStack_758);
  _objc_release(uStack_768);
  _objc_release(uStack_770);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar2 = PTR_PTR_1126db3f0;
  FUN_108c7bee8(PTR_PTR_1126db3f0,puVar5);
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 != (undefined *)0x0) {
    func_0x00010c25ed40(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(puVar2);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108c79a2c; end: 108c79c5b;  */

void FUN_108c79a2c(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined4 uStack_804;
  undefined8 *puStack_800;
  undefined8 *puStack_7f8;
  undefined8 uStack_7f0;
  undefined **ppuStack_7e8;
  undefined4 uStack_7e0;
  undefined4 uStack_7d0;
  undefined *puStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  long *plStack_788;
  long *plStack_780;
  undefined1 uStack_771;
  undefined **ppuStack_770;
  undefined4 uStack_768;
  undefined2 uStack_758;
  undefined2 uStack_756;
  undefined1 *puStack_738;
  undefined ***pppuStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  long *plStack_710;
  long *plStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 *puStack_640;
  undefined8 auStack_638 [2];
  char cStack_621;
  undefined8 auStack_620 [2];
  char cStack_609;
  long lStack_608;
  undefined8 *puStack_600;
  undefined8 *puStack_5f8;
  undefined8 *puStack_5f0;
  long *plStack_5e8;
  undefined *puStack_5e0;
  undefined *puStack_5d8;
  undefined8 ***pppuStack_5d0;
  code *pcStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined1 *puStack_5a8;
  undefined8 auStack_5a0 [2];
  char cStack_589;
  long lStack_588;
  undefined8 *puStack_580;
  undefined8 *puStack_578;
  undefined8 *puStack_570;
  long *plStack_568;
  undefined *puStack_560;
  undefined *puStack_558;
  undefined8 ***pppuStack_550;
  code *pcStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined1 *puStack_528;
  undefined8 auStack_520 [2];
  char cStack_509;
  long lStack_508;
  undefined8 *puStack_500;
  undefined8 *puStack_4f8;
  undefined8 *puStack_4f0;
  long *plStack_4e8;
  undefined *puStack_4e0;
  undefined *puStack_4d8;
  undefined8 ***pppuStack_4d0;
  code *pcStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined1 *puStack_4a8;
  undefined8 auStack_4a0 [2];
  char cStack_489;
  long lStack_488;
  undefined8 *puStack_480;
  undefined8 *puStack_478;
  undefined8 *puStack_470;
  long *plStack_468;
  undefined *puStack_460;
  undefined *puStack_458;
  undefined8 ***pppuStack_450;
  code *pcStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined1 *puStack_428;
  undefined8 auStack_420 [2];
  char cStack_409;
  long lStack_408;
  undefined8 *puStack_400;
  undefined8 *puStack_3f8;
  undefined8 *puStack_3f0;
  long *plStack_3e8;
  undefined *puStack_3e0;
  undefined *puStack_3d8;
  undefined8 ***pppuStack_3d0;
  code *pcStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined1 *puStack_3a8;
  undefined8 auStack_3a0 [2];
  char cStack_389;
  long lStack_388;
  undefined8 *puStack_380;
  undefined8 *puStack_378;
  undefined8 *puStack_370;
  long *plStack_368;
  undefined *puStack_360;
  undefined *puStack_358;
  undefined8 ***pppuStack_350;
  code *pcStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined1 *puStack_328;
  undefined8 auStack_320 [2];
  char cStack_309;
  long lStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  undefined8 *puStack_2f0;
  long *plStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined8 ***pppuStack_2d0;
  code *pcStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 *puStack_2a8;
  undefined8 auStack_2a0 [2];
  char cStack_289;
  long lStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined8 *puStack_270;
  long *plStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined8 ***pppuStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined8 auStack_220 [2];
  char cStack_209;
  long lStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  long *plStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 *puStack_1a8;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined *puStack_168;
  undefined8 *puStack_160;
  undefined *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar2 = param_3;
  puVar10 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar5 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar14 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f50f15d;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x000107c278b8(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f50f15d;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x000107c27984(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_110abee38;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110abee38,puVar2,param_4);
    puStack_80 = unaff_x23;
    func_0x000107c278ac(&puStack_80);
    lVar13 = 0;
    puVar5 = auStack_78;
    puVar10 = param_4;
    do {
      if ((&cStack_49)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_a8 = FUN_108c79c5c;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar1;
  puVar9 = puVar2;
  puVar12 = puVar10;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar5;
  puStack_c8 = puVar3;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  puVar5 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f50f15d;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x24 = auStack_118;
    func_0x000107c278b8(auStack_118,puVar3);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f50f15d;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar5 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x000107c278b8(auStack_100,puVar5);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x000107c27984(&uStack_138,auStack_118,&lStack_e8,2);
    puVar8 = &UNK_110abee88;
    unaff_x23 = &uStack_138;
    puVar9 = &uStack_138;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110abee88,puVar9,puVar10);
    puStack_120 = unaff_x23;
    func_0x000107c278ac(&puStack_120);
    lVar13 = 0;
    puVar5 = auStack_118;
    puVar12 = puVar10;
    do {
      if ((&cStack_e9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(puVar2);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar6 = puVar3;
  __Unwind_Resume();
  puVar11 = &uStack_1c0;
  pcStack_148 = FUN_108c79e8c;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar8;
  puVar10 = puVar9;
  puStack_180 = unaff_x24;
  puStack_178 = unaff_x23;
  puStack_170 = puVar5;
  puStack_168 = puVar3;
  puStack_160 = puVar2;
  puStack_158 = puVar1;
  ppuStack_150 = &puStack_b0;
  _objc_retain(puVar8);
  plVar14 = (long *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar6 + 8);
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar1 = &UNK_10f50f15d;
    }
    else {
      puVar1 = puVar8;
      _objc_retainAutorelease(puVar8);
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    unaff_x23 = auStack_1a0;
    func_0x000107c278b8(auStack_1a0,puVar1);
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    func_0x000107c27984(&uStack_1c0,auStack_1a0,&lStack_188,1);
    puVar4 = &UNK_110abeed8;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110abeed8,&uStack_1c0,puVar9);
    puStack_1a8 = (undefined1 *)&uStack_1c0;
    func_0x000107c278ac(&puStack_1a8);
    puVar10 = puVar11;
    puVar12 = puVar9;
    puVar5 = &uStack_1c0;
    if (cStack_189 < '\0') {
      __ZdlPv(auStack_1a0[0]);
      puVar10 = puVar11;
      puVar12 = puVar9;
      puVar5 = &uStack_1c0;
    }
  }
  puVar1 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  _objc_release(puVar8);
  puVar6 = puVar1;
  __Unwind_Resume();
  puVar9 = &uStack_240;
  pcStack_1c8 = FUN_108c7a000;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar4;
  puVar2 = puVar10;
  puStack_200 = unaff_x24;
  puStack_1f8 = unaff_x23;
  puStack_1f0 = puVar5;
  plStack_1e8 = plVar14;
  puStack_1e0 = puVar1;
  puStack_1d8 = puVar8;
  pppuStack_1d0 = &ppuStack_150;
  _objc_retain(puVar4);
  plVar14 = (long *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar6 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar1 = &UNK_10f50f15d;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    unaff_x23 = auStack_220;
    func_0x000107c278b8(auStack_220,puVar1);
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    func_0x000107c27984(&uStack_240,auStack_220,&lStack_208,1);
    puVar3 = &UNK_110abef28;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110abef28,&uStack_240,puVar10);
    puStack_228 = (undefined1 *)&uStack_240;
    func_0x000107c278ac(&puStack_228);
    puVar2 = puVar9;
    puVar12 = puVar10;
    puVar5 = &uStack_240;
    if (cStack_209 < '\0') {
      __ZdlPv(auStack_220[0]);
      puVar2 = puVar9;
      puVar12 = puVar10;
      puVar5 = &uStack_240;
    }
  }
  puVar1 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  puVar6 = puVar1;
  __Unwind_Resume();
  puVar9 = &uStack_2c0;
  pcStack_248 = FUN_108c7a174;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar3;
  puVar10 = puVar2;
  puStack_280 = unaff_x24;
  puStack_278 = unaff_x23;
  puStack_270 = puVar5;
  plStack_268 = plVar14;
  puStack_260 = puVar1;
  puStack_258 = puVar4;
  pppuStack_250 = &pppuStack_1d0;
  _objc_retain(puVar3);
  plVar14 = (long *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar6 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar1 = &UNK_10f50f15d;
    }
    else {
      puVar1 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    unaff_x23 = auStack_2a0;
    func_0x000107c278b8(auStack_2a0,puVar1);
    uStack_2c0 = 0;
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    func_0x000107c27984(&uStack_2c0,auStack_2a0,&lStack_288,1);
    puVar8 = &UNK_110abef78;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110abef78,&uStack_2c0,puVar2);
    puStack_2a8 = (undefined1 *)&uStack_2c0;
    func_0x000107c278ac(&puStack_2a8);
    puVar10 = puVar9;
    puVar12 = puVar2;
    puVar5 = &uStack_2c0;
    if (cStack_289 < '\0') {
      __ZdlPv(auStack_2a0[0]);
      puVar10 = puVar9;
      puVar12 = puVar2;
      puVar5 = &uStack_2c0;
    }
  }
  puVar1 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  puVar6 = puVar1;
  __Unwind_Resume();
  puVar9 = &uStack_340;
  pcStack_2c8 = FUN_108c7a2e8;
  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar8;
  puVar2 = puVar10;
  puStack_300 = unaff_x24;
  puStack_2f8 = unaff_x23;
  puStack_2f0 = puVar5;
  plStack_2e8 = plVar14;
  puStack_2e0 = puVar1;
  puStack_2d8 = puVar3;
  pppuStack_2d0 = &pppuStack_250;
  _objc_retain(puVar8);
  plVar14 = (long *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar6 + 8);
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar1 = &UNK_10f50f15d;
    }
    else {
      puVar1 = puVar8;
      _objc_retainAutorelease(puVar8);
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    unaff_x23 = auStack_320;
    func_0x000107c278b8(auStack_320,puVar1);
    uStack_340 = 0;
    uStack_338 = 0;
    uStack_330 = 0;
    func_0x000107c27984(&uStack_340,auStack_320,&lStack_308,1);
    puVar4 = &UNK_110abefc8;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110abefc8,&uStack_340,puVar10);
    puStack_328 = (undefined1 *)&uStack_340;
    func_0x000107c278ac(&puStack_328);
    puVar2 = puVar9;
    puVar12 = puVar10;
    puVar5 = &uStack_340;
    if (cStack_309 < '\0') {
      __ZdlPv(auStack_320[0]);
      puVar2 = puVar9;
      puVar12 = puVar10;
      puVar5 = &uStack_340;
    }
  }
  puVar1 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  _objc_release(puVar8);
  puVar6 = puVar1;
  __Unwind_Resume();
  puVar9 = &uStack_3c0;
  pcStack_348 = FUN_108c7a45c;
  lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar4;
  puVar10 = puVar2;
  puStack_380 = unaff_x24;
  puStack_378 = unaff_x23;
  puStack_370 = puVar5;
  plStack_368 = plVar14;
  puStack_360 = puVar1;
  puStack_358 = puVar8;
  pppuStack_350 = &pppuStack_2d0;
  _objc_retain(puVar4);
  plVar14 = (long *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar6 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar1 = &UNK_10f50f15d;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    unaff_x23 = auStack_3a0;
    func_0x000107c278b8(auStack_3a0,puVar1);
    uStack_3c0 = 0;
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    func_0x000107c27984(&uStack_3c0,auStack_3a0,&lStack_388,1);
    puVar3 = &UNK_110abf018;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110abf018,&uStack_3c0,puVar2);
    puStack_3a8 = (undefined1 *)&uStack_3c0;
    func_0x000107c278ac(&puStack_3a8);
    puVar10 = puVar9;
    puVar12 = puVar2;
    puVar5 = &uStack_3c0;
    if (cStack_389 < '\0') {
      __ZdlPv(auStack_3a0[0]);
      puVar10 = puVar9;
      puVar12 = puVar2;
      puVar5 = &uStack_3c0;
    }
  }
  puVar1 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_388) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  puVar6 = puVar1;
  __Unwind_Resume();
  puVar9 = &uStack_440;
  pcStack_3c8 = FUN_108c7a5d0;
  lStack_408 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar3;
  puVar2 = puVar10;
  puStack_400 = unaff_x24;
  puStack_3f8 = unaff_x23;
  puStack_3f0 = puVar5;
  plStack_3e8 = plVar14;
  puStack_3e0 = puVar1;
  puStack_3d8 = puVar4;
  pppuStack_3d0 = &pppuStack_350;
  _objc_retain(puVar3);
  plVar14 = (long *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar6 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar1 = &UNK_10f50f15d;
    }
    else {
      puVar1 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    unaff_x23 = auStack_420;
    func_0x000107c278b8(auStack_420,puVar1);
    uStack_440 = 0;
    uStack_438 = 0;
    uStack_430 = 0;
    func_0x000107c27984(&uStack_440,auStack_420,&lStack_408,1);
    puVar8 = &UNK_110abf068;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110abf068,&uStack_440,puVar10);
    puStack_428 = (undefined1 *)&uStack_440;
    func_0x000107c278ac(&puStack_428);
    puVar2 = puVar9;
    puVar12 = puVar10;
    puVar5 = &uStack_440;
    if (cStack_409 < '\0') {
      __ZdlPv(auStack_420[0]);
      puVar2 = puVar9;
      puVar12 = puVar10;
      puVar5 = &uStack_440;
    }
  }
  puVar1 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_408) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  puVar6 = puVar1;
  __Unwind_Resume();
  puVar9 = &uStack_4c0;
  pcStack_448 = FUN_108c7a744;
  lStack_488 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar8;
  puVar10 = puVar2;
  puStack_480 = unaff_x24;
  puStack_478 = unaff_x23;
  puStack_470 = puVar5;
  plStack_468 = plVar14;
  puStack_460 = puVar1;
  puStack_458 = puVar3;
  pppuStack_450 = &pppuStack_3d0;
  _objc_retain(puVar8);
  plVar14 = (long *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar6 + 8);
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar1 = &UNK_10f50f15d;
    }
    else {
      puVar1 = puVar8;
      _objc_retainAutorelease(puVar8);
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    unaff_x23 = auStack_4a0;
    func_0x000107c278b8(auStack_4a0,puVar1);
    uStack_4c0 = 0;
    uStack_4b8 = 0;
    uStack_4b0 = 0;
    func_0x000107c27984(&uStack_4c0,auStack_4a0,&lStack_488,1);
    puVar4 = &UNK_110abf0b8;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110abf0b8,&uStack_4c0,puVar2);
    puStack_4a8 = (undefined1 *)&uStack_4c0;
    func_0x000107c278ac(&puStack_4a8);
    puVar10 = puVar9;
    puVar12 = puVar2;
    puVar5 = &uStack_4c0;
    if (cStack_489 < '\0') {
      __ZdlPv(auStack_4a0[0]);
      puVar10 = puVar9;
      puVar12 = puVar2;
      puVar5 = &uStack_4c0;
    }
  }
  puVar1 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_488) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  _objc_release(puVar8);
  puVar6 = puVar1;
  __Unwind_Resume();
  puVar9 = &uStack_540;
  pcStack_4c8 = FUN_108c7a8b8;
  lStack_508 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar4;
  puVar2 = puVar10;
  puStack_500 = unaff_x24;
  puStack_4f8 = unaff_x23;
  puStack_4f0 = puVar5;
  plStack_4e8 = plVar14;
  puStack_4e0 = puVar1;
  puStack_4d8 = puVar8;
  pppuStack_4d0 = &pppuStack_450;
  _objc_retain(puVar4);
  plVar14 = (long *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar6 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar1 = &UNK_10f50f15d;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    unaff_x23 = auStack_520;
    func_0x000107c278b8(auStack_520,puVar1);
    uStack_540 = 0;
    uStack_538 = 0;
    uStack_530 = 0;
    func_0x000107c27984(&uStack_540,auStack_520,&lStack_508,1);
    puVar3 = &UNK_110abf108;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110abf108,&uStack_540,puVar10);
    puStack_528 = (undefined1 *)&uStack_540;
    func_0x000107c278ac(&puStack_528);
    puVar2 = puVar9;
    puVar12 = puVar10;
    puVar5 = &uStack_540;
    if (cStack_509 < '\0') {
      __ZdlPv(auStack_520[0]);
      puVar2 = puVar9;
      puVar12 = puVar10;
      puVar5 = &uStack_540;
    }
  }
  puVar1 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_508) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  puVar6 = puVar1;
  __Unwind_Resume();
  puVar9 = &uStack_5c0;
  pcStack_548 = FUN_108c7aa2c;
  lStack_588 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar3;
  puVar10 = puVar2;
  puStack_580 = unaff_x24;
  puStack_578 = unaff_x23;
  puStack_570 = puVar5;
  plStack_568 = plVar14;
  puStack_560 = puVar1;
  puStack_558 = puVar4;
  pppuStack_550 = &pppuStack_4d0;
  _objc_retain(puVar3);
  plVar14 = (long *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar6 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar1 = &UNK_10f50f15d;
    }
    else {
      puVar1 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    unaff_x23 = auStack_5a0;
    func_0x000107c278b8(auStack_5a0,puVar1);
    uStack_5c0 = 0;
    uStack_5b8 = 0;
    uStack_5b0 = 0;
    func_0x000107c27984(&uStack_5c0,auStack_5a0,&lStack_588,1);
    puVar8 = &UNK_110abf158;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110abf158,&uStack_5c0,puVar2);
    puStack_5a8 = (undefined1 *)&uStack_5c0;
    func_0x000107c278ac(&puStack_5a8);
    puVar10 = puVar9;
    puVar12 = puVar2;
    puVar5 = &uStack_5c0;
    if (cStack_589 < '\0') {
      __ZdlPv(auStack_5a0[0]);
      puVar10 = puVar9;
      puVar12 = puVar2;
      puVar5 = &uStack_5c0;
    }
  }
  puVar1 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_588) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  puVar6 = puVar1;
  __Unwind_Resume();
  pcStack_5c8 = FUN_108c7aba0;
  lStack_608 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar8;
  puStack_600 = unaff_x24;
  puStack_5f8 = unaff_x23;
  puStack_5f0 = puVar5;
  plStack_5e8 = plVar14;
  puStack_5e0 = puVar1;
  puStack_5d8 = puVar3;
  pppuStack_5d0 = &pppuStack_550;
  _objc_retain(puVar8);
  _objc_retain(puVar10);
  if (puVar6 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar6 + 8);
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar1 = &UNK_10f50f15d;
    }
    else {
      puVar1 = puVar8;
      _objc_retainAutorelease(puVar8);
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    func_0x000107c278b8(auStack_638,puVar1);
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f50f15d;
    }
    else {
      _objc_retainAutorelease(puVar10);
      puVar2 = puVar10;
      func_0x00010bdc3520(puVar10);
    }
    _objc_release(puVar10);
    func_0x000107c278b8(auStack_620,puVar2);
    uStack_658 = 0;
    uStack_650 = 0;
    uStack_648 = 0;
    func_0x000107c27984(&uStack_658,auStack_638,&lStack_608,2);
    puVar4 = &UNK_110abf1a8;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110abf1a8,&uStack_658,puVar12);
    puStack_640 = &uStack_658;
    func_0x000107c278ac(&puStack_640);
    lVar13 = 0;
    do {
      if ((&cStack_609)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_620 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(puVar10);
  puVar1 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_608) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar10);
  if (cStack_621 < '\0') {
    __ZdlPv(auStack_638[0]);
  }
  _objc_release(puVar10);
  _objc_release(puVar8);
  __Unwind_Resume();
  _objc_retain();
  _objc_retain(puVar1);
  _objc_retain(puVar4);
  _objc_opt_class(PTR_PTR_1126db3e8);
  if (puVar1 == (undefined *)0x0) {
    uStack_6d0 = 0;
    uStack_6e8 = 0;
    uStack_6f0 = 0;
    uStack_6d8 = 0;
    uStack_6e0 = 0;
    uStack_6f8 = 0;
    uStack_700 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_700,puVar1);
  }
  puVar7 = &uStack_771;
  FUN_108c7b6ec();
  uStack_7e0 = 0xf;
  uStack_7d0 = 0x100;
  _objc_retain(puVar4);
  ppuStack_7e8 = &PTR_DAT_110862760;
  uStack_7a8 = 0;
  uStack_7b0 = 0;
  uStack_798 = 0;
  uStack_7a0 = 0;
  plStack_788 = (long *)0x0;
  uStack_790 = 0;
  plStack_780 = (long *)0x0;
  uStack_756 = *(undefined2 *)(puVar7 + 0x1a);
  uStack_768 = 10;
  uStack_758 = 0x100;
  ppuStack_770 = &PTR_SUB_110862700;
  uStack_720 = 0;
  uStack_728 = 0;
  plStack_710 = (long *)0x0;
  uStack_718 = 0;
  plStack_708 = (long *)0x0;
  puStack_800 = (undefined8 *)0x0;
  puStack_7f8 = (undefined8 *)0x0;
  uStack_7f0 = 0;
  uStack_804 = 0;
  puVar5 = &uStack_700;
  puStack_7b8 = puVar4;
  puStack_738 = puVar7;
  pppuStack_730 = &ppuStack_7e8;
  func_0x000107c310cc(puVar5,&ppuStack_770,&puStack_800,&uStack_804);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar5;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  if (puStack_800 != (undefined8 *)0x0) {
    puStack_7f8 = puStack_800;
    __ZdlPv();
  }
  plVar14 = plStack_708;
  ppuStack_770 = &PTR_SUB_110862700;
  plStack_708 = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 8))();
  }
  plVar14 = plStack_710;
  plStack_710 = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 8))();
  }
  puStack_800 = &uStack_728;
  func_0x000107c27dd4(&puStack_800);
  plVar14 = plStack_780;
  ppuStack_7e8 = &PTR_DAT_110862760;
  plStack_780 = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 8))();
  }
  plVar14 = plStack_788;
  plStack_788 = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 8))();
  }
  puStack_800 = &uStack_7a0;
  func_0x000107c27dd4(&puStack_800);
  _objc_release(puStack_7b8);
  func_0x000107c27da8(&uStack_6d8);
  _objc_release(uStack_6e8);
  _objc_release(uStack_6f0);
  _objc_release(puVar4);
  _objc_release(puVar1);
  puVar3 = PTR_PTR_1126db3f0;
  FUN_108c7bee8(PTR_PTR_1126db3f0,puVar2);
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 != (undefined *)0x0) {
    func_0x00010c25ed40(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108c79c5c; end: 108c79e8b;  */

void FUN_108c79c5c(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined4 uStack_764;
  undefined8 *puStack_760;
  undefined8 *puStack_758;
  undefined8 uStack_750;
  undefined **ppuStack_748;
  undefined4 uStack_740;
  undefined4 uStack_730;
  undefined *puStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  long *plStack_6e8;
  long *plStack_6e0;
  undefined1 uStack_6d1;
  undefined **ppuStack_6d0;
  undefined4 uStack_6c8;
  undefined2 uStack_6b8;
  undefined2 uStack_6b6;
  undefined1 *puStack_698;
  undefined ***pppuStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  long *plStack_670;
  long *plStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 *puStack_5a0;
  undefined8 auStack_598 [2];
  char cStack_581;
  undefined8 auStack_580 [2];
  char cStack_569;
  long lStack_568;
  undefined8 *puStack_560;
  undefined8 *puStack_558;
  undefined8 *puStack_550;
  long *plStack_548;
  undefined *puStack_540;
  undefined *puStack_538;
  undefined8 ***pppuStack_530;
  code *pcStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined1 *puStack_508;
  undefined8 auStack_500 [2];
  char cStack_4e9;
  long lStack_4e8;
  undefined8 *puStack_4e0;
  undefined8 *puStack_4d8;
  undefined8 *puStack_4d0;
  long *plStack_4c8;
  undefined *puStack_4c0;
  undefined *puStack_4b8;
  undefined8 ***pppuStack_4b0;
  code *pcStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined1 *puStack_488;
  undefined8 auStack_480 [2];
  char cStack_469;
  long lStack_468;
  undefined8 *puStack_460;
  undefined8 *puStack_458;
  undefined8 *puStack_450;
  long *plStack_448;
  undefined *puStack_440;
  undefined *puStack_438;
  undefined8 ***pppuStack_430;
  code *pcStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined1 *puStack_408;
  undefined8 auStack_400 [2];
  char cStack_3e9;
  long lStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 *puStack_3d0;
  long *plStack_3c8;
  undefined *puStack_3c0;
  undefined *puStack_3b8;
  undefined8 ***pppuStack_3b0;
  code *pcStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined1 *puStack_388;
  undefined8 auStack_380 [2];
  char cStack_369;
  long lStack_368;
  undefined8 *puStack_360;
  undefined8 *puStack_358;
  undefined8 *puStack_350;
  long *plStack_348;
  undefined *puStack_340;
  undefined *puStack_338;
  undefined8 ***pppuStack_330;
  code *pcStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined1 *puStack_308;
  undefined8 auStack_300 [2];
  char cStack_2e9;
  long lStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 *puStack_2d0;
  long *plStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined8 ***pppuStack_2b0;
  code *pcStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 *puStack_288;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 *puStack_250;
  long *plStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  long *plStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  long *plStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar2 = param_3;
  puVar11 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar7 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f50f15d;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x000107c278b8(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f50f15d;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x000107c27984(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_110abee88;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110abee88,puVar2,param_4);
    puStack_80 = unaff_x23;
    func_0x000107c278ac(&puStack_80);
    lVar12 = 0;
    puVar7 = auStack_78;
    puVar11 = param_4;
    do {
      if ((&cStack_49)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  puVar4 = puVar3;
  __Unwind_Resume();
  puVar10 = &uStack_120;
  pcStack_a8 = FUN_108c79e8c;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar1;
  puVar9 = puVar2;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar7;
  puStack_c8 = puVar3;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  plVar13 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f50f15d;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x23 = auStack_100;
    func_0x000107c278b8(auStack_100,puVar3);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    func_0x000107c27984(&uStack_120,auStack_100,&lStack_e8,1);
    puVar8 = &UNK_110abeed8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110abeed8,&uStack_120,puVar2);
    puStack_108 = (undefined1 *)&uStack_120;
    func_0x000107c278ac(&puStack_108);
    puVar9 = puVar10;
    puVar11 = puVar2;
    puVar7 = &uStack_120;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      puVar9 = puVar10;
      puVar11 = puVar2;
      puVar7 = &uStack_120;
    }
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar5 = puVar3;
  __Unwind_Resume();
  puVar10 = &uStack_1a0;
  pcStack_128 = FUN_108c7a000;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar8;
  puVar2 = puVar9;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar7;
  plStack_148 = plVar13;
  puStack_140 = puVar3;
  puStack_138 = puVar1;
  ppuStack_130 = &puStack_b0;
  _objc_retain(puVar8);
  plVar13 = (long *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar5 + 8);
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar1 = &UNK_10f50f15d;
    }
    else {
      puVar1 = puVar8;
      _objc_retainAutorelease(puVar8);
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    unaff_x23 = auStack_180;
    func_0x000107c278b8(auStack_180,puVar1);
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    func_0x000107c27984(&uStack_1a0,auStack_180,&lStack_168,1);
    puVar4 = &UNK_110abef28;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110abef28,&uStack_1a0,puVar9);
    puStack_188 = (undefined1 *)&uStack_1a0;
    func_0x000107c278ac(&puStack_188);
    puVar2 = puVar10;
    puVar11 = puVar9;
    puVar7 = &uStack_1a0;
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
      puVar2 = puVar10;
      puVar11 = puVar9;
      puVar7 = &uStack_1a0;
    }
  }
  puVar1 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  _objc_release(puVar8);
  puVar5 = puVar1;
  __Unwind_Resume();
  puVar10 = &uStack_220;
  pcStack_1a8 = FUN_108c7a174;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar4;
  puVar9 = puVar2;
  puStack_1e0 = unaff_x24;
  puStack_1d8 = unaff_x23;
  puStack_1d0 = puVar7;
  plStack_1c8 = plVar13;
  puStack_1c0 = puVar1;
  puStack_1b8 = puVar8;
  pppuStack_1b0 = &ppuStack_130;
  _objc_retain(puVar4);
  plVar13 = (long *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar5 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar1 = &UNK_10f50f15d;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    unaff_x23 = auStack_200;
    func_0x000107c278b8(auStack_200,puVar1);
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    func_0x000107c27984(&uStack_220,auStack_200,&lStack_1e8,1);
    puVar3 = &UNK_110abef78;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110abef78,&uStack_220,puVar2);
    puStack_208 = (undefined1 *)&uStack_220;
    func_0x000107c278ac(&puStack_208);
    puVar9 = puVar10;
    puVar11 = puVar2;
    puVar7 = &uStack_220;
    if (cStack_1e9 < '\0') {
      __ZdlPv(auStack_200[0]);
      puVar9 = puVar10;
      puVar11 = puVar2;
      puVar7 = &uStack_220;
    }
  }
  puVar1 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  puVar5 = puVar1;
  __Unwind_Resume();
  puVar10 = &uStack_2a0;
  pcStack_228 = FUN_108c7a2e8;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar3;
  puVar2 = puVar9;
  puStack_260 = unaff_x24;
  puStack_258 = unaff_x23;
  puStack_250 = puVar7;
  plStack_248 = plVar13;
  puStack_240 = puVar1;
  puStack_238 = puVar4;
  pppuStack_230 = &pppuStack_1b0;
  _objc_retain(puVar3);
  plVar13 = (long *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar5 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar1 = &UNK_10f50f15d;
    }
    else {
      puVar1 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    unaff_x23 = auStack_280;
    func_0x000107c278b8(auStack_280,puVar1);
    uStack_2a0 = 0;
    uStack_298 = 0;
    uStack_290 = 0;
    func_0x000107c27984(&uStack_2a0,auStack_280,&lStack_268,1);
    puVar8 = &UNK_110abefc8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110abefc8,&uStack_2a0,puVar9);
    puStack_288 = (undefined1 *)&uStack_2a0;
    func_0x000107c278ac(&puStack_288);
    puVar2 = puVar10;
    puVar11 = puVar9;
    puVar7 = &uStack_2a0;
    if (cStack_269 < '\0') {
      __ZdlPv(auStack_280[0]);
      puVar2 = puVar10;
      puVar11 = puVar9;
      puVar7 = &uStack_2a0;
    }
  }
  puVar1 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  puVar5 = puVar1;
  __Unwind_Resume();
  puVar10 = &uStack_320;
  pcStack_2a8 = FUN_108c7a45c;
  lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar8;
  puVar9 = puVar2;
  puStack_2e0 = unaff_x24;
  puStack_2d8 = unaff_x23;
  puStack_2d0 = puVar7;
  plStack_2c8 = plVar13;
  puStack_2c0 = puVar1;
  puStack_2b8 = puVar3;
  pppuStack_2b0 = &pppuStack_230;
  _objc_retain(puVar8);
  plVar13 = (long *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar5 + 8);
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar1 = &UNK_10f50f15d;
    }
    else {
      puVar1 = puVar8;
      _objc_retainAutorelease(puVar8);
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    unaff_x23 = auStack_300;
    func_0x000107c278b8(auStack_300,puVar1);
    uStack_320 = 0;
    uStack_318 = 0;
    uStack_310 = 0;
    func_0x000107c27984(&uStack_320,auStack_300,&lStack_2e8,1);
    puVar4 = &UNK_110abf018;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110abf018,&uStack_320,puVar2);
    puStack_308 = (undefined1 *)&uStack_320;
    func_0x000107c278ac(&puStack_308);
    puVar9 = puVar10;
    puVar11 = puVar2;
    puVar7 = &uStack_320;
    if (cStack_2e9 < '\0') {
      __ZdlPv(auStack_300[0]);
      puVar9 = puVar10;
      puVar11 = puVar2;
      puVar7 = &uStack_320;
    }
  }
  puVar1 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  _objc_release(puVar8);
  puVar5 = puVar1;
  __Unwind_Resume();
  puVar10 = &uStack_3a0;
  pcStack_328 = FUN_108c7a5d0;
  lStack_368 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar4;
  puVar2 = puVar9;
  puStack_360 = unaff_x24;
  puStack_358 = unaff_x23;
  puStack_350 = puVar7;
  plStack_348 = plVar13;
  puStack_340 = puVar1;
  puStack_338 = puVar8;
  pppuStack_330 = &pppuStack_2b0;
  _objc_retain(puVar4);
  plVar13 = (long *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar5 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar1 = &UNK_10f50f15d;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    unaff_x23 = auStack_380;
    func_0x000107c278b8(auStack_380,puVar1);
    uStack_3a0 = 0;
    uStack_398 = 0;
    uStack_390 = 0;
    func_0x000107c27984(&uStack_3a0,auStack_380,&lStack_368,1);
    puVar3 = &UNK_110abf068;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110abf068,&uStack_3a0,puVar9);
    puStack_388 = (undefined1 *)&uStack_3a0;
    func_0x000107c278ac(&puStack_388);
    puVar2 = puVar10;
    puVar11 = puVar9;
    puVar7 = &uStack_3a0;
    if (cStack_369 < '\0') {
      __ZdlPv(auStack_380[0]);
      puVar2 = puVar10;
      puVar11 = puVar9;
      puVar7 = &uStack_3a0;
    }
  }
  puVar1 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_368) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  puVar5 = puVar1;
  __Unwind_Resume();
  puVar10 = &uStack_420;
  pcStack_3a8 = FUN_108c7a744;
  lStack_3e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar3;
  puVar9 = puVar2;
  puStack_3e0 = unaff_x24;
  puStack_3d8 = unaff_x23;
  puStack_3d0 = puVar7;
  plStack_3c8 = plVar13;
  puStack_3c0 = puVar1;
  puStack_3b8 = puVar4;
  pppuStack_3b0 = &pppuStack_330;
  _objc_retain(puVar3);
  plVar13 = (long *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar5 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar1 = &UNK_10f50f15d;
    }
    else {
      puVar1 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    unaff_x23 = auStack_400;
    func_0x000107c278b8(auStack_400,puVar1);
    uStack_420 = 0;
    uStack_418 = 0;
    uStack_410 = 0;
    func_0x000107c27984(&uStack_420,auStack_400,&lStack_3e8,1);
    puVar8 = &UNK_110abf0b8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110abf0b8,&uStack_420,puVar2);
    puStack_408 = (undefined1 *)&uStack_420;
    func_0x000107c278ac(&puStack_408);
    puVar9 = puVar10;
    puVar11 = puVar2;
    puVar7 = &uStack_420;
    if (cStack_3e9 < '\0') {
      __ZdlPv(auStack_400[0]);
      puVar9 = puVar10;
      puVar11 = puVar2;
      puVar7 = &uStack_420;
    }
  }
  puVar1 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  puVar5 = puVar1;
  __Unwind_Resume();
  puVar10 = &uStack_4a0;
  pcStack_428 = FUN_108c7a8b8;
  lStack_468 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar8;
  puVar2 = puVar9;
  puStack_460 = unaff_x24;
  puStack_458 = unaff_x23;
  puStack_450 = puVar7;
  plStack_448 = plVar13;
  puStack_440 = puVar1;
  puStack_438 = puVar3;
  pppuStack_430 = &pppuStack_3b0;
  _objc_retain(puVar8);
  plVar13 = (long *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar5 + 8);
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar1 = &UNK_10f50f15d;
    }
    else {
      puVar1 = puVar8;
      _objc_retainAutorelease(puVar8);
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    unaff_x23 = auStack_480;
    func_0x000107c278b8(auStack_480,puVar1);
    uStack_4a0 = 0;
    uStack_498 = 0;
    uStack_490 = 0;
    func_0x000107c27984(&uStack_4a0,auStack_480,&lStack_468,1);
    puVar4 = &UNK_110abf108;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110abf108,&uStack_4a0,puVar9);
    puStack_488 = (undefined1 *)&uStack_4a0;
    func_0x000107c278ac(&puStack_488);
    puVar2 = puVar10;
    puVar11 = puVar9;
    puVar7 = &uStack_4a0;
    if (cStack_469 < '\0') {
      __ZdlPv(auStack_480[0]);
      puVar2 = puVar10;
      puVar11 = puVar9;
      puVar7 = &uStack_4a0;
    }
  }
  puVar1 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_468) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  _objc_release(puVar8);
  puVar5 = puVar1;
  __Unwind_Resume();
  puVar10 = &uStack_520;
  pcStack_4a8 = FUN_108c7aa2c;
  lStack_4e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar4;
  puVar9 = puVar2;
  puStack_4e0 = unaff_x24;
  puStack_4d8 = unaff_x23;
  puStack_4d0 = puVar7;
  plStack_4c8 = plVar13;
  puStack_4c0 = puVar1;
  puStack_4b8 = puVar8;
  pppuStack_4b0 = &pppuStack_430;
  _objc_retain(puVar4);
  plVar13 = (long *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar5 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar1 = &UNK_10f50f15d;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    unaff_x23 = auStack_500;
    func_0x000107c278b8(auStack_500,puVar1);
    uStack_520 = 0;
    uStack_518 = 0;
    uStack_510 = 0;
    func_0x000107c27984(&uStack_520,auStack_500,&lStack_4e8,1);
    puVar3 = &UNK_110abf158;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110abf158,&uStack_520,puVar2);
    puStack_508 = (undefined1 *)&uStack_520;
    func_0x000107c278ac(&puStack_508);
    puVar9 = puVar10;
    puVar11 = puVar2;
    puVar7 = &uStack_520;
    if (cStack_4e9 < '\0') {
      __ZdlPv(auStack_500[0]);
      puVar9 = puVar10;
      puVar11 = puVar2;
      puVar7 = &uStack_520;
    }
  }
  puVar1 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  puVar5 = puVar1;
  __Unwind_Resume();
  pcStack_528 = FUN_108c7aba0;
  lStack_568 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar3;
  puStack_560 = unaff_x24;
  puStack_558 = unaff_x23;
  puStack_550 = puVar7;
  plStack_548 = plVar13;
  puStack_540 = puVar1;
  puStack_538 = puVar4;
  pppuStack_530 = &pppuStack_4b0;
  _objc_retain(puVar3);
  _objc_retain(puVar9);
  if (puVar5 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar5 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar1 = &UNK_10f50f15d;
    }
    else {
      puVar1 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    func_0x000107c278b8(auStack_598,puVar1);
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f50f15d;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar2 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x000107c278b8(auStack_580,puVar2);
    uStack_5b8 = 0;
    uStack_5b0 = 0;
    uStack_5a8 = 0;
    func_0x000107c27984(&uStack_5b8,auStack_598,&lStack_568,2);
    puVar8 = &UNK_110abf1a8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110abf1a8,&uStack_5b8,puVar11);
    puStack_5a0 = &uStack_5b8;
    func_0x000107c278ac(&puStack_5a0);
    lVar12 = 0;
    do {
      if ((&cStack_569)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_580 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar9);
  puVar1 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_568) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  if (cStack_581 < '\0') {
    __ZdlPv(auStack_598[0]);
  }
  _objc_release(puVar9);
  _objc_release(puVar3);
  __Unwind_Resume();
  _objc_retain();
  _objc_retain(puVar1);
  _objc_retain(puVar8);
  _objc_opt_class(PTR_PTR_1126db3e8);
  if (puVar1 == (undefined *)0x0) {
    uStack_630 = 0;
    uStack_648 = 0;
    uStack_650 = 0;
    uStack_638 = 0;
    uStack_640 = 0;
    uStack_658 = 0;
    uStack_660 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_660,puVar1);
  }
  puVar6 = &uStack_6d1;
  FUN_108c7b6ec();
  uStack_740 = 0xf;
  uStack_730 = 0x100;
  _objc_retain(puVar8);
  ppuStack_748 = &PTR_DAT_110862760;
  uStack_708 = 0;
  uStack_710 = 0;
  uStack_6f8 = 0;
  uStack_700 = 0;
  plStack_6e8 = (long *)0x0;
  uStack_6f0 = 0;
  plStack_6e0 = (long *)0x0;
  uStack_6b6 = *(undefined2 *)(puVar6 + 0x1a);
  uStack_6c8 = 10;
  uStack_6b8 = 0x100;
  ppuStack_6d0 = &PTR_SUB_110862700;
  uStack_680 = 0;
  uStack_688 = 0;
  plStack_670 = (long *)0x0;
  uStack_678 = 0;
  plStack_668 = (long *)0x0;
  puStack_760 = (undefined8 *)0x0;
  puStack_758 = (undefined8 *)0x0;
  uStack_750 = 0;
  uStack_764 = 0;
  puVar7 = &uStack_660;
  puStack_718 = puVar8;
  puStack_698 = puVar6;
  pppuStack_690 = &ppuStack_748;
  func_0x000107c310cc(puVar7,&ppuStack_6d0,&puStack_760,&uStack_764);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar7;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  if (puStack_760 != (undefined8 *)0x0) {
    puStack_758 = puStack_760;
    __ZdlPv();
  }
  plVar13 = plStack_668;
  ppuStack_6d0 = &PTR_SUB_110862700;
  plStack_668 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  plVar13 = plStack_670;
  plStack_670 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  puStack_760 = &uStack_688;
  func_0x000107c27dd4(&puStack_760);
  plVar13 = plStack_6e0;
  ppuStack_748 = &PTR_DAT_110862760;
  plStack_6e0 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  plVar13 = plStack_6e8;
  plStack_6e8 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  puStack_760 = &uStack_700;
  func_0x000107c27dd4(&puStack_760);
  _objc_release(puStack_718);
  func_0x000107c27da8(&uStack_638);
  _objc_release(uStack_648);
  _objc_release(uStack_650);
  _objc_release(puVar8);
  _objc_release(puVar1);
  puVar3 = PTR_PTR_1126db3f0;
  FUN_108c7bee8(PTR_PTR_1126db3f0,puVar2);
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 != (undefined *)0x0) {
    func_0x00010c25ed40(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108c79e8c; end: 108c79fff;  */

void FUN_108c79e8c(long param_1,undefined *param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  long lVar10;
  undefined4 uStack_6c4;
  undefined8 *puStack_6c0;
  undefined8 *puStack_6b8;
  undefined8 uStack_6b0;
  undefined **ppuStack_6a8;
  undefined4 uStack_6a0;
  undefined4 uStack_690;
  undefined *puStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  long *plStack_648;
  long *plStack_640;
  undefined1 uStack_631;
  undefined **ppuStack_630;
  undefined4 uStack_628;
  undefined2 uStack_618;
  undefined2 uStack_616;
  undefined1 *puStack_5f8;
  undefined ***pppuStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  long *plStack_5d0;
  long *plStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 *puStack_500;
  undefined8 auStack_4f8 [2];
  char cStack_4e1;
  undefined8 auStack_4e0 [2];
  char cStack_4c9;
  long lStack_4c8;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined1 *puStack_468;
  undefined8 auStack_460 [2];
  char cStack_449;
  long lStack_448;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined1 *puStack_3e8;
  undefined8 auStack_3e0 [2];
  char cStack_3c9;
  long lStack_3c8;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 *puStack_368;
  undefined8 auStack_360 [2];
  char cStack_349;
  long lStack_348;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 *puStack_2e8;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar3 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar9 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f50f15d;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110abeed8;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110abeed8,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar3 = (undefined *)puVar6;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar3 = (undefined *)puVar6;
      param_4 = param_3;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar6 = &uStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar8 = puVar3;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f50f15d;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x000107c27984(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar7 = &UNK_110abef28;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110abef28,&uStack_100,puVar3);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x000107c278ac(&puStack_e8);
    puVar8 = (undefined *)puVar6;
    param_4 = puVar3;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar8 = (undefined *)puVar6;
      param_4 = puVar3;
    }
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar6 = &uStack_180;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar7;
  puVar2 = puVar8;
  _objc_retain(puVar7);
  if (puVar3 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar3 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f50f15d;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x000107c278b8(auStack_160,puVar1);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x000107c27984(&uStack_180,auStack_160,&lStack_148,1);
    puVar1 = &UNK_110abef78;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110abef78,&uStack_180,puVar8);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x000107c278ac(&puStack_168);
    puVar2 = (undefined *)puVar6;
    param_4 = puVar8;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar2 = (undefined *)puVar6;
      param_4 = puVar8;
    }
  }
  puVar3 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  __Unwind_Resume();
  puVar6 = &uStack_200;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar8 = puVar2;
  _objc_retain(puVar1);
  if (puVar3 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar3 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f50f15d;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_1e0,puVar3);
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    func_0x000107c27984(&uStack_200,auStack_1e0,&lStack_1c8,1);
    puVar7 = &UNK_110abefc8;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110abefc8,&uStack_200,puVar2);
    puStack_1e8 = (undefined1 *)&uStack_200;
    func_0x000107c278ac(&puStack_1e8);
    puVar8 = (undefined *)puVar6;
    param_4 = puVar2;
    if (cStack_1c9 < '\0') {
      __ZdlPv(auStack_1e0[0]);
      puVar8 = (undefined *)puVar6;
      param_4 = puVar2;
    }
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar6 = &uStack_280;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar7;
  puVar2 = puVar8;
  _objc_retain(puVar7);
  if (puVar3 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar3 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f50f15d;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x000107c278b8(auStack_260,puVar1);
    uStack_280 = 0;
    uStack_278 = 0;
    uStack_270 = 0;
    func_0x000107c27984(&uStack_280,auStack_260,&lStack_248,1);
    puVar1 = &UNK_110abf018;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110abf018,&uStack_280,puVar8);
    puStack_268 = (undefined1 *)&uStack_280;
    func_0x000107c278ac(&puStack_268);
    puVar2 = (undefined *)puVar6;
    param_4 = puVar8;
    if (cStack_249 < '\0') {
      __ZdlPv(auStack_260[0]);
      puVar2 = (undefined *)puVar6;
      param_4 = puVar8;
    }
  }
  puVar3 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  __Unwind_Resume();
  puVar6 = &uStack_300;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar8 = puVar2;
  _objc_retain(puVar1);
  if (puVar3 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar3 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f50f15d;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_2e0,puVar3);
    uStack_300 = 0;
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    func_0x000107c27984(&uStack_300,auStack_2e0,&lStack_2c8,1);
    puVar7 = &UNK_110abf068;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110abf068,&uStack_300,puVar2);
    puStack_2e8 = (undefined1 *)&uStack_300;
    func_0x000107c278ac(&puStack_2e8);
    puVar8 = (undefined *)puVar6;
    param_4 = puVar2;
    if (cStack_2c9 < '\0') {
      __ZdlPv(auStack_2e0[0]);
      puVar8 = (undefined *)puVar6;
      param_4 = puVar2;
    }
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar6 = &uStack_380;
  lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar7;
  puVar2 = puVar8;
  _objc_retain(puVar7);
  if (puVar3 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar3 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f50f15d;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x000107c278b8(auStack_360,puVar1);
    uStack_380 = 0;
    uStack_378 = 0;
    uStack_370 = 0;
    func_0x000107c27984(&uStack_380,auStack_360,&lStack_348,1);
    puVar1 = &UNK_110abf0b8;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110abf0b8,&uStack_380,puVar8);
    puStack_368 = (undefined1 *)&uStack_380;
    func_0x000107c278ac(&puStack_368);
    puVar2 = (undefined *)puVar6;
    param_4 = puVar8;
    if (cStack_349 < '\0') {
      __ZdlPv(auStack_360[0]);
      puVar2 = (undefined *)puVar6;
      param_4 = puVar8;
    }
  }
  puVar3 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_348) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  __Unwind_Resume();
  puVar6 = &uStack_400;
  lStack_3c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar8 = puVar2;
  _objc_retain(puVar1);
  if (puVar3 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar3 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f50f15d;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_3e0,puVar3);
    uStack_400 = 0;
    uStack_3f8 = 0;
    uStack_3f0 = 0;
    func_0x000107c27984(&uStack_400,auStack_3e0,&lStack_3c8,1);
    puVar7 = &UNK_110abf108;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110abf108,&uStack_400,puVar2);
    puStack_3e8 = (undefined1 *)&uStack_400;
    func_0x000107c278ac(&puStack_3e8);
    puVar8 = (undefined *)puVar6;
    param_4 = puVar2;
    if (cStack_3c9 < '\0') {
      __ZdlPv(auStack_3e0[0]);
      puVar8 = (undefined *)puVar6;
      param_4 = puVar2;
    }
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar6 = &uStack_480;
  lStack_448 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar7;
  puVar2 = puVar8;
  _objc_retain(puVar7);
  if (puVar3 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar3 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f50f15d;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x000107c278b8(auStack_460,puVar1);
    uStack_480 = 0;
    uStack_478 = 0;
    uStack_470 = 0;
    func_0x000107c27984(&uStack_480,auStack_460,&lStack_448,1);
    puVar1 = &UNK_110abf158;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110abf158,&uStack_480,puVar8);
    puStack_468 = (undefined1 *)&uStack_480;
    func_0x000107c278ac(&puStack_468);
    puVar2 = (undefined *)puVar6;
    param_4 = puVar8;
    if (cStack_449 < '\0') {
      __ZdlPv(auStack_460[0]);
      puVar2 = (undefined *)puVar6;
      param_4 = puVar8;
    }
  }
  puVar3 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_448) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  __Unwind_Resume();
  lStack_4c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  if (puVar3 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar3 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f50f15d;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_4f8,puVar3);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar3 = &UNK_10f50f15d;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar3 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x000107c278b8(auStack_4e0,puVar3);
    uStack_518 = 0;
    uStack_510 = 0;
    uStack_508 = 0;
    func_0x000107c27984(&uStack_518,auStack_4f8,&lStack_4c8,2);
    puVar7 = &UNK_110abf1a8;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110abf1a8,&uStack_518,param_4);
    puStack_500 = &uStack_518;
    func_0x000107c278ac(&puStack_500);
    lVar10 = 0;
    do {
      if ((&cStack_4c9)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_4e0 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  _objc_release(puVar2);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_4e1 < '\0') {
    __ZdlPv(auStack_4f8[0]);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  __Unwind_Resume();
  _objc_retain();
  _objc_retain(puVar3);
  _objc_retain(puVar7);
  _objc_opt_class(PTR_PTR_1126db3e8);
  if (puVar3 == (undefined *)0x0) {
    uStack_590 = 0;
    uStack_5a8 = 0;
    uStack_5b0 = 0;
    uStack_598 = 0;
    uStack_5a0 = 0;
    uStack_5b8 = 0;
    uStack_5c0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_5c0,puVar3);
  }
  puVar4 = &uStack_631;
  FUN_108c7b6ec();
  uStack_6a0 = 0xf;
  uStack_690 = 0x100;
  _objc_retain(puVar7);
  ppuStack_6a8 = &PTR_DAT_110862760;
  uStack_668 = 0;
  uStack_670 = 0;
  uStack_658 = 0;
  uStack_660 = 0;
  plStack_648 = (long *)0x0;
  uStack_650 = 0;
  plStack_640 = (long *)0x0;
  uStack_616 = *(undefined2 *)(puVar4 + 0x1a);
  uStack_628 = 10;
  uStack_618 = 0x100;
  ppuStack_630 = &PTR_SUB_110862700;
  uStack_5e0 = 0;
  uStack_5e8 = 0;
  plStack_5d0 = (long *)0x0;
  uStack_5d8 = 0;
  plStack_5c8 = (long *)0x0;
  puStack_6c0 = (undefined8 *)0x0;
  puStack_6b8 = (undefined8 *)0x0;
  uStack_6b0 = 0;
  uStack_6c4 = 0;
  puVar5 = &uStack_5c0;
  puStack_678 = puVar7;
  puStack_5f8 = puVar4;
  pppuStack_5f0 = &ppuStack_6a8;
  func_0x000107c310cc(puVar5,&ppuStack_630,&puStack_6c0,&uStack_6c4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  if (puStack_6c0 != (undefined8 *)0x0) {
    puStack_6b8 = puStack_6c0;
    __ZdlPv();
  }
  plVar9 = plStack_5c8;
  ppuStack_630 = &PTR_SUB_110862700;
  plStack_5c8 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))();
  }
  plVar9 = plStack_5d0;
  plStack_5d0 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))();
  }
  puStack_6c0 = &uStack_5e8;
  func_0x000107c27dd4(&puStack_6c0);
  plVar9 = plStack_640;
  ppuStack_6a8 = &PTR_DAT_110862760;
  plStack_640 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))();
  }
  plVar9 = plStack_648;
  plStack_648 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))();
  }
  puStack_6c0 = &uStack_660;
  func_0x000107c27dd4(&puStack_6c0);
  _objc_release(puStack_678);
  func_0x000107c27da8(&uStack_598);
  _objc_release(uStack_5a8);
  _objc_release(uStack_5b0);
  _objc_release(puVar7);
  _objc_release(puVar3);
  puVar1 = PTR_PTR_1126db3f0;
  FUN_108c7bee8(PTR_PTR_1126db3f0,puVar6);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    func_0x00010c25ed40(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 108c7a000; end: 108c7a173;  */

void FUN_108c7a000(long param_1,undefined *param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  long lVar10;
  undefined4 uStack_644;
  undefined8 *puStack_640;
  undefined8 *puStack_638;
  undefined8 uStack_630;
  undefined **ppuStack_628;
  undefined4 uStack_620;
  undefined4 uStack_610;
  undefined *puStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  long *plStack_5c8;
  long *plStack_5c0;
  undefined1 uStack_5b1;
  undefined **ppuStack_5b0;
  undefined4 uStack_5a8;
  undefined2 uStack_598;
  undefined2 uStack_596;
  undefined1 *puStack_578;
  undefined ***pppuStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  long *plStack_550;
  long *plStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 *puStack_480;
  undefined8 auStack_478 [2];
  char cStack_461;
  undefined8 auStack_460 [2];
  char cStack_449;
  long lStack_448;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined1 *puStack_3e8;
  undefined8 auStack_3e0 [2];
  char cStack_3c9;
  long lStack_3c8;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 *puStack_368;
  undefined8 auStack_360 [2];
  char cStack_349;
  long lStack_348;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 *puStack_2e8;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar3 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar9 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f50f15d;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110abef28;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110abef28,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar3 = (undefined *)puVar6;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar3 = (undefined *)puVar6;
      param_4 = param_3;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar6 = &uStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar8 = puVar3;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f50f15d;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x000107c27984(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar7 = &UNK_110abef78;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110abef78,&uStack_100,puVar3);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x000107c278ac(&puStack_e8);
    puVar8 = (undefined *)puVar6;
    param_4 = puVar3;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar8 = (undefined *)puVar6;
      param_4 = puVar3;
    }
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar6 = &uStack_180;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar7;
  puVar2 = puVar8;
  _objc_retain(puVar7);
  if (puVar3 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar3 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f50f15d;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x000107c278b8(auStack_160,puVar1);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x000107c27984(&uStack_180,auStack_160,&lStack_148,1);
    puVar1 = &UNK_110abefc8;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110abefc8,&uStack_180,puVar8);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x000107c278ac(&puStack_168);
    puVar2 = (undefined *)puVar6;
    param_4 = puVar8;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar2 = (undefined *)puVar6;
      param_4 = puVar8;
    }
  }
  puVar3 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  __Unwind_Resume();
  puVar6 = &uStack_200;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar8 = puVar2;
  _objc_retain(puVar1);
  if (puVar3 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar3 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f50f15d;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_1e0,puVar3);
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    func_0x000107c27984(&uStack_200,auStack_1e0,&lStack_1c8,1);
    puVar7 = &UNK_110abf018;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110abf018,&uStack_200,puVar2);
    puStack_1e8 = (undefined1 *)&uStack_200;
    func_0x000107c278ac(&puStack_1e8);
    puVar8 = (undefined *)puVar6;
    param_4 = puVar2;
    if (cStack_1c9 < '\0') {
      __ZdlPv(auStack_1e0[0]);
      puVar8 = (undefined *)puVar6;
      param_4 = puVar2;
    }
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar6 = &uStack_280;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar7;
  puVar2 = puVar8;
  _objc_retain(puVar7);
  if (puVar3 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar3 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f50f15d;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x000107c278b8(auStack_260,puVar1);
    uStack_280 = 0;
    uStack_278 = 0;
    uStack_270 = 0;
    func_0x000107c27984(&uStack_280,auStack_260,&lStack_248,1);
    puVar1 = &UNK_110abf068;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110abf068,&uStack_280,puVar8);
    puStack_268 = (undefined1 *)&uStack_280;
    func_0x000107c278ac(&puStack_268);
    puVar2 = (undefined *)puVar6;
    param_4 = puVar8;
    if (cStack_249 < '\0') {
      __ZdlPv(auStack_260[0]);
      puVar2 = (undefined *)puVar6;
      param_4 = puVar8;
    }
  }
  puVar3 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  __Unwind_Resume();
  puVar6 = &uStack_300;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar8 = puVar2;
  _objc_retain(puVar1);
  if (puVar3 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar3 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f50f15d;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_2e0,puVar3);
    uStack_300 = 0;
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    func_0x000107c27984(&uStack_300,auStack_2e0,&lStack_2c8,1);
    puVar7 = &UNK_110abf0b8;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110abf0b8,&uStack_300,puVar2);
    puStack_2e8 = (undefined1 *)&uStack_300;
    func_0x000107c278ac(&puStack_2e8);
    puVar8 = (undefined *)puVar6;
    param_4 = puVar2;
    if (cStack_2c9 < '\0') {
      __ZdlPv(auStack_2e0[0]);
      puVar8 = (undefined *)puVar6;
      param_4 = puVar2;
    }
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar6 = &uStack_380;
  lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar7;
  puVar2 = puVar8;
  _objc_retain(puVar7);
  if (puVar3 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar3 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f50f15d;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x000107c278b8(auStack_360,puVar1);
    uStack_380 = 0;
    uStack_378 = 0;
    uStack_370 = 0;
    func_0x000107c27984(&uStack_380,auStack_360,&lStack_348,1);
    puVar1 = &UNK_110abf108;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110abf108,&uStack_380,puVar8);
    puStack_368 = (undefined1 *)&uStack_380;
    func_0x000107c278ac(&puStack_368);
    puVar2 = (undefined *)puVar6;
    param_4 = puVar8;
    if (cStack_349 < '\0') {
      __ZdlPv(auStack_360[0]);
      puVar2 = (undefined *)puVar6;
      param_4 = puVar8;
    }
  }
  puVar3 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_348) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  __Unwind_Resume();
  puVar6 = &uStack_400;
  lStack_3c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar8 = puVar2;
  _objc_retain(puVar1);
  if (puVar3 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar3 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f50f15d;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_3e0,puVar3);
    uStack_400 = 0;
    uStack_3f8 = 0;
    uStack_3f0 = 0;
    func_0x000107c27984(&uStack_400,auStack_3e0,&lStack_3c8,1);
    puVar7 = &UNK_110abf158;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110abf158,&uStack_400,puVar2);
    puStack_3e8 = (undefined1 *)&uStack_400;
    func_0x000107c278ac(&puStack_3e8);
    puVar8 = (undefined *)puVar6;
    param_4 = puVar2;
    if (cStack_3c9 < '\0') {
      __ZdlPv(auStack_3e0[0]);
      puVar8 = (undefined *)puVar6;
      param_4 = puVar2;
    }
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  lStack_448 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar7;
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  if (puVar3 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar3 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f50f15d;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x000107c278b8(auStack_478,puVar1);
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar1 = &UNK_10f50f15d;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar1 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x000107c278b8(auStack_460,puVar1);
    uStack_498 = 0;
    uStack_490 = 0;
    uStack_488 = 0;
    func_0x000107c27984(&uStack_498,auStack_478,&lStack_448,2);
    puVar1 = &UNK_110abf1a8;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110abf1a8,&uStack_498,param_4);
    puStack_480 = &uStack_498;
    func_0x000107c278ac(&puStack_480);
    lVar10 = 0;
    do {
      if ((&cStack_449)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_460 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  _objc_release(puVar8);
  puVar3 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_448) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  if (cStack_461 < '\0') {
    __ZdlPv(auStack_478[0]);
  }
  _objc_release(puVar8);
  _objc_release(puVar7);
  __Unwind_Resume();
  _objc_retain();
  _objc_retain(puVar3);
  _objc_retain(puVar1);
  _objc_opt_class(PTR_PTR_1126db3e8);
  if (puVar3 == (undefined *)0x0) {
    uStack_510 = 0;
    uStack_528 = 0;
    uStack_530 = 0;
    uStack_518 = 0;
    uStack_520 = 0;
    uStack_538 = 0;
    uStack_540 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_540,puVar3);
  }
  puVar4 = &uStack_5b1;
  FUN_108c7b6ec();
  uStack_620 = 0xf;
  uStack_610 = 0x100;
  _objc_retain(puVar1);
  ppuStack_628 = &PTR_DAT_110862760;
  uStack_5e8 = 0;
  uStack_5f0 = 0;
  uStack_5d8 = 0;
  uStack_5e0 = 0;
  plStack_5c8 = (long *)0x0;
  uStack_5d0 = 0;
  plStack_5c0 = (long *)0x0;
  uStack_596 = *(undefined2 *)(puVar4 + 0x1a);
  uStack_5a8 = 10;
  uStack_598 = 0x100;
  ppuStack_5b0 = &PTR_SUB_110862700;
  uStack_560 = 0;
  uStack_568 = 0;
  plStack_550 = (long *)0x0;
  uStack_558 = 0;
  plStack_548 = (long *)0x0;
  puStack_640 = (undefined8 *)0x0;
  puStack_638 = (undefined8 *)0x0;
  uStack_630 = 0;
  uStack_644 = 0;
  puVar5 = &uStack_540;
  puStack_5f8 = puVar1;
  puStack_578 = puVar4;
  pppuStack_570 = &ppuStack_628;
  func_0x000107c310cc(puVar5,&ppuStack_5b0,&puStack_640,&uStack_644);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  if (puStack_640 != (undefined8 *)0x0) {
    puStack_638 = puStack_640;
    __ZdlPv();
  }
  plVar9 = plStack_548;
  ppuStack_5b0 = &PTR_SUB_110862700;
  plStack_548 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))();
  }
  plVar9 = plStack_550;
  plStack_550 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))();
  }
  puStack_640 = &uStack_568;
  func_0x000107c27dd4(&puStack_640);
  plVar9 = plStack_5c0;
  ppuStack_628 = &PTR_DAT_110862760;
  plStack_5c0 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))();
  }
  plVar9 = plStack_5c8;
  plStack_5c8 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))();
  }
  puStack_640 = &uStack_5e0;
  func_0x000107c27dd4(&puStack_640);
  _objc_release(puStack_5f8);
  func_0x000107c27da8(&uStack_518);
  _objc_release(uStack_528);
  _objc_release(uStack_530);
  _objc_release(puVar1);
  _objc_release(puVar3);
  puVar1 = PTR_PTR_1126db3f0;
  FUN_108c7bee8(PTR_PTR_1126db3f0,puVar6);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    func_0x00010c25ed40(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 108c7a174; end: 108c7a2e7;  */

void FUN_108c7a174(long param_1,undefined *param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  long lVar10;
  undefined4 uStack_5c4;
  undefined8 *puStack_5c0;
  undefined8 *puStack_5b8;
  undefined8 uStack_5b0;
  undefined **ppuStack_5a8;
  undefined4 uStack_5a0;
  undefined4 uStack_590;
  undefined *puStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  long *plStack_548;
  long *plStack_540;
  undefined1 uStack_531;
  undefined **ppuStack_530;
  undefined4 uStack_528;
  undefined2 uStack_518;
  undefined2 uStack_516;
  undefined1 *puStack_4f8;
  undefined ***pppuStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  long *plStack_4d0;
  long *plStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 *puStack_400;
  undefined8 auStack_3f8 [2];
  char cStack_3e1;
  undefined8 auStack_3e0 [2];
  char cStack_3c9;
  long lStack_3c8;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 *puStack_368;
  undefined8 auStack_360 [2];
  char cStack_349;
  long lStack_348;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 *puStack_2e8;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar3 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar9 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f50f15d;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110abef78;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110abef78,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar3 = (undefined *)puVar6;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar3 = (undefined *)puVar6;
      param_4 = param_3;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar6 = &uStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar8 = puVar3;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f50f15d;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x000107c27984(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar7 = &UNK_110abefc8;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110abefc8,&uStack_100,puVar3);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x000107c278ac(&puStack_e8);
    puVar8 = (undefined *)puVar6;
    param_4 = puVar3;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar8 = (undefined *)puVar6;
      param_4 = puVar3;
    }
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar6 = &uStack_180;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar7;
  puVar2 = puVar8;
  _objc_retain(puVar7);
  if (puVar3 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar3 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f50f15d;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x000107c278b8(auStack_160,puVar1);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x000107c27984(&uStack_180,auStack_160,&lStack_148,1);
    puVar1 = &UNK_110abf018;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110abf018,&uStack_180,puVar8);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x000107c278ac(&puStack_168);
    puVar2 = (undefined *)puVar6;
    param_4 = puVar8;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar2 = (undefined *)puVar6;
      param_4 = puVar8;
    }
  }
  puVar3 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  __Unwind_Resume();
  puVar6 = &uStack_200;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar8 = puVar2;
  _objc_retain(puVar1);
  if (puVar3 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar3 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f50f15d;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_1e0,puVar3);
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    func_0x000107c27984(&uStack_200,auStack_1e0,&lStack_1c8,1);
    puVar7 = &UNK_110abf068;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110abf068,&uStack_200,puVar2);
    puStack_1e8 = (undefined1 *)&uStack_200;
    func_0x000107c278ac(&puStack_1e8);
    puVar8 = (undefined *)puVar6;
    param_4 = puVar2;
    if (cStack_1c9 < '\0') {
      __ZdlPv(auStack_1e0[0]);
      puVar8 = (undefined *)puVar6;
      param_4 = puVar2;
    }
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar6 = &uStack_280;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar7;
  puVar2 = puVar8;
  _objc_retain(puVar7);
  if (puVar3 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar3 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f50f15d;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x000107c278b8(auStack_260,puVar1);
    uStack_280 = 0;
    uStack_278 = 0;
    uStack_270 = 0;
    func_0x000107c27984(&uStack_280,auStack_260,&lStack_248,1);
    puVar1 = &UNK_110abf0b8;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110abf0b8,&uStack_280,puVar8);
    puStack_268 = (undefined1 *)&uStack_280;
    func_0x000107c278ac(&puStack_268);
    puVar2 = (undefined *)puVar6;
    param_4 = puVar8;
    if (cStack_249 < '\0') {
      __ZdlPv(auStack_260[0]);
      puVar2 = (undefined *)puVar6;
      param_4 = puVar8;
    }
  }
  puVar3 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  __Unwind_Resume();
  puVar6 = &uStack_300;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar8 = puVar2;
  _objc_retain(puVar1);
  if (puVar3 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar3 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f50f15d;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_2e0,puVar3);
    uStack_300 = 0;
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    func_0x000107c27984(&uStack_300,auStack_2e0,&lStack_2c8,1);
    puVar7 = &UNK_110abf108;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110abf108,&uStack_300,puVar2);
    puStack_2e8 = (undefined1 *)&uStack_300;
    func_0x000107c278ac(&puStack_2e8);
    puVar8 = (undefined *)puVar6;
    param_4 = puVar2;
    if (cStack_2c9 < '\0') {
      __ZdlPv(auStack_2e0[0]);
      puVar8 = (undefined *)puVar6;
      param_4 = puVar2;
    }
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar6 = &uStack_380;
  lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar7;
  puVar2 = puVar8;
  _objc_retain(puVar7);
  if (puVar3 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar3 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f50f15d;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x000107c278b8(auStack_360,puVar1);
    uStack_380 = 0;
    uStack_378 = 0;
    uStack_370 = 0;
    func_0x000107c27984(&uStack_380,auStack_360,&lStack_348,1);
    puVar1 = &UNK_110abf158;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110abf158,&uStack_380,puVar8);
    puStack_368 = (undefined1 *)&uStack_380;
    func_0x000107c278ac(&puStack_368);
    puVar2 = (undefined *)puVar6;
    param_4 = puVar8;
    if (cStack_349 < '\0') {
      __ZdlPv(auStack_360[0]);
      puVar2 = (undefined *)puVar6;
      param_4 = puVar8;
    }
  }
  puVar3 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_348) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  __Unwind_Resume();
  lStack_3c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  if (puVar3 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar3 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f50f15d;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_3f8,puVar3);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar3 = &UNK_10f50f15d;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar3 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x000107c278b8(auStack_3e0,puVar3);
    uStack_418 = 0;
    uStack_410 = 0;
    uStack_408 = 0;
    func_0x000107c27984(&uStack_418,auStack_3f8,&lStack_3c8,2);
    puVar7 = &UNK_110abf1a8;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110abf1a8,&uStack_418,param_4);
    puStack_400 = &uStack_418;
    func_0x000107c278ac(&puStack_400);
    lVar10 = 0;
    do {
      if ((&cStack_3c9)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_3e0 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  _objc_release(puVar2);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_3e1 < '\0') {
    __ZdlPv(auStack_3f8[0]);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  __Unwind_Resume();
  _objc_retain();
  _objc_retain(puVar3);
  _objc_retain(puVar7);
  _objc_opt_class(PTR_PTR_1126db3e8);
  if (puVar3 == (undefined *)0x0) {
    uStack_490 = 0;
    uStack_4a8 = 0;
    uStack_4b0 = 0;
    uStack_498 = 0;
    uStack_4a0 = 0;
    uStack_4b8 = 0;
    uStack_4c0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_4c0,puVar3);
  }
  puVar4 = &uStack_531;
  FUN_108c7b6ec();
  uStack_5a0 = 0xf;
  uStack_590 = 0x100;
  _objc_retain(puVar7);
  ppuStack_5a8 = &PTR_DAT_110862760;
  uStack_568 = 0;
  uStack_570 = 0;
  uStack_558 = 0;
  uStack_560 = 0;
  plStack_548 = (long *)0x0;
  uStack_550 = 0;
  plStack_540 = (long *)0x0;
  uStack_516 = *(undefined2 *)(puVar4 + 0x1a);
  uStack_528 = 10;
  uStack_518 = 0x100;
  ppuStack_530 = &PTR_SUB_110862700;
  uStack_4e0 = 0;
  uStack_4e8 = 0;
  plStack_4d0 = (long *)0x0;
  uStack_4d8 = 0;
  plStack_4c8 = (long *)0x0;
  puStack_5c0 = (undefined8 *)0x0;
  puStack_5b8 = (undefined8 *)0x0;
  uStack_5b0 = 0;
  uStack_5c4 = 0;
  puVar5 = &uStack_4c0;
  puStack_578 = puVar7;
  puStack_4f8 = puVar4;
  pppuStack_4f0 = &ppuStack_5a8;
  func_0x000107c310cc(puVar5,&ppuStack_530,&puStack_5c0,&uStack_5c4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  if (puStack_5c0 != (undefined8 *)0x0) {
    puStack_5b8 = puStack_5c0;
    __ZdlPv();
  }
  plVar9 = plStack_4c8;
  ppuStack_530 = &PTR_SUB_110862700;
  plStack_4c8 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))();
  }
  plVar9 = plStack_4d0;
  plStack_4d0 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))();
  }
  puStack_5c0 = &uStack_4e8;
  func_0x000107c27dd4(&puStack_5c0);
  plVar9 = plStack_540;
  ppuStack_5a8 = &PTR_DAT_110862760;
  plStack_540 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))();
  }
  plVar9 = plStack_548;
  plStack_548 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))();
  }
  puStack_5c0 = &uStack_560;
  func_0x000107c27dd4(&puStack_5c0);
  _objc_release(puStack_578);
  func_0x000107c27da8(&uStack_498);
  _objc_release(uStack_4a8);
  _objc_release(uStack_4b0);
  _objc_release(puVar7);
  _objc_release(puVar3);
  puVar1 = PTR_PTR_1126db3f0;
  FUN_108c7bee8(PTR_PTR_1126db3f0,puVar6);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    func_0x00010c25ed40(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 108c7a2e8; end: 108c7a45b;  */

void FUN_108c7a2e8(long param_1,undefined *param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  long lVar10;
  undefined4 uStack_544;
  undefined8 *puStack_540;
  undefined8 *puStack_538;
  undefined8 uStack_530;
  undefined **ppuStack_528;
  undefined4 uStack_520;
  undefined4 uStack_510;
  undefined *puStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  long *plStack_4c8;
  long *plStack_4c0;
  undefined1 uStack_4b1;
  undefined **ppuStack_4b0;
  undefined4 uStack_4a8;
  undefined2 uStack_498;
  undefined2 uStack_496;
  undefined1 *puStack_478;
  undefined ***pppuStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  long *plStack_450;
  long *plStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 *puStack_380;
  undefined8 auStack_378 [2];
  char cStack_361;
  undefined8 auStack_360 [2];
  char cStack_349;
  long lStack_348;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 *puStack_2e8;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar3 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar9 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f50f15d;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110abefc8;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110abefc8,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar3 = (undefined *)puVar6;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar3 = (undefined *)puVar6;
      param_4 = param_3;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar6 = &uStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar8 = puVar3;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f50f15d;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x000107c27984(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar7 = &UNK_110abf018;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110abf018,&uStack_100,puVar3);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x000107c278ac(&puStack_e8);
    puVar8 = (undefined *)puVar6;
    param_4 = puVar3;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar8 = (undefined *)puVar6;
      param_4 = puVar3;
    }
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar6 = &uStack_180;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar7;
  puVar2 = puVar8;
  _objc_retain(puVar7);
  if (puVar3 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar3 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f50f15d;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x000107c278b8(auStack_160,puVar1);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x000107c27984(&uStack_180,auStack_160,&lStack_148,1);
    puVar1 = &UNK_110abf068;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110abf068,&uStack_180,puVar8);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x000107c278ac(&puStack_168);
    puVar2 = (undefined *)puVar6;
    param_4 = puVar8;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar2 = (undefined *)puVar6;
      param_4 = puVar8;
    }
  }
  puVar3 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  __Unwind_Resume();
  puVar6 = &uStack_200;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar8 = puVar2;
  _objc_retain(puVar1);
  if (puVar3 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar3 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f50f15d;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_1e0,puVar3);
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    func_0x000107c27984(&uStack_200,auStack_1e0,&lStack_1c8,1);
    puVar7 = &UNK_110abf0b8;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110abf0b8,&uStack_200,puVar2);
    puStack_1e8 = (undefined1 *)&uStack_200;
    func_0x000107c278ac(&puStack_1e8);
    puVar8 = (undefined *)puVar6;
    param_4 = puVar2;
    if (cStack_1c9 < '\0') {
      __ZdlPv(auStack_1e0[0]);
      puVar8 = (undefined *)puVar6;
      param_4 = puVar2;
    }
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar6 = &uStack_280;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar7;
  puVar2 = puVar8;
  _objc_retain(puVar7);
  if (puVar3 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar3 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f50f15d;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x000107c278b8(auStack_260,puVar1);
    uStack_280 = 0;
    uStack_278 = 0;
    uStack_270 = 0;
    func_0x000107c27984(&uStack_280,auStack_260,&lStack_248,1);
    puVar1 = &UNK_110abf108;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110abf108,&uStack_280,puVar8);
    puStack_268 = (undefined1 *)&uStack_280;
    func_0x000107c278ac(&puStack_268);
    puVar2 = (undefined *)puVar6;
    param_4 = puVar8;
    if (cStack_249 < '\0') {
      __ZdlPv(auStack_260[0]);
      puVar2 = (undefined *)puVar6;
      param_4 = puVar8;
    }
  }
  puVar3 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  __Unwind_Resume();
  puVar6 = &uStack_300;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar8 = puVar2;
  _objc_retain(puVar1);
  if (puVar3 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar3 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f50f15d;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_2e0,puVar3);
    uStack_300 = 0;
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    func_0x000107c27984(&uStack_300,auStack_2e0,&lStack_2c8,1);
    puVar7 = &UNK_110abf158;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110abf158,&uStack_300,puVar2);
    puStack_2e8 = (undefined1 *)&uStack_300;
    func_0x000107c278ac(&puStack_2e8);
    puVar8 = (undefined *)puVar6;
    param_4 = puVar2;
    if (cStack_2c9 < '\0') {
      __ZdlPv(auStack_2e0[0]);
      puVar8 = (undefined *)puVar6;
      param_4 = puVar2;
    }
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar7;
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  if (puVar3 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar3 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f50f15d;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x000107c278b8(auStack_378,puVar1);
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar1 = &UNK_10f50f15d;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar1 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x000107c278b8(auStack_360,puVar1);
    uStack_398 = 0;
    uStack_390 = 0;
    uStack_388 = 0;
    func_0x000107c27984(&uStack_398,auStack_378,&lStack_348,2);
    puVar1 = &UNK_110abf1a8;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110abf1a8,&uStack_398,param_4);
    puStack_380 = &uStack_398;
    func_0x000107c278ac(&puStack_380);
    lVar10 = 0;
    do {
      if ((&cStack_349)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_360 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  _objc_release(puVar8);
  puVar3 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_348) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  if (cStack_361 < '\0') {
    __ZdlPv(auStack_378[0]);
  }
  _objc_release(puVar8);
  _objc_release(puVar7);
  __Unwind_Resume();
  _objc_retain();
  _objc_retain(puVar3);
  _objc_retain(puVar1);
  _objc_opt_class(PTR_PTR_1126db3e8);
  if (puVar3 == (undefined *)0x0) {
    uStack_410 = 0;
    uStack_428 = 0;
    uStack_430 = 0;
    uStack_418 = 0;
    uStack_420 = 0;
    uStack_438 = 0;
    uStack_440 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_440,puVar3);
  }
  puVar4 = &uStack_4b1;
  FUN_108c7b6ec();
  uStack_520 = 0xf;
  uStack_510 = 0x100;
  _objc_retain(puVar1);
  ppuStack_528 = &PTR_DAT_110862760;
  uStack_4e8 = 0;
  uStack_4f0 = 0;
  uStack_4d8 = 0;
  uStack_4e0 = 0;
  plStack_4c8 = (long *)0x0;
  uStack_4d0 = 0;
  plStack_4c0 = (long *)0x0;
  uStack_496 = *(undefined2 *)(puVar4 + 0x1a);
  uStack_4a8 = 10;
  uStack_498 = 0x100;
  ppuStack_4b0 = &PTR_SUB_110862700;
  uStack_460 = 0;
  uStack_468 = 0;
  plStack_450 = (long *)0x0;
  uStack_458 = 0;
  plStack_448 = (long *)0x0;
  puStack_540 = (undefined8 *)0x0;
  puStack_538 = (undefined8 *)0x0;
  uStack_530 = 0;
  uStack_544 = 0;
  puVar5 = &uStack_440;
  puStack_4f8 = puVar1;
  puStack_478 = puVar4;
  pppuStack_470 = &ppuStack_528;
  func_0x000107c310cc(puVar5,&ppuStack_4b0,&puStack_540,&uStack_544);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  if (puStack_540 != (undefined8 *)0x0) {
    puStack_538 = puStack_540;
    __ZdlPv();
  }
  plVar9 = plStack_448;
  ppuStack_4b0 = &PTR_SUB_110862700;
  plStack_448 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))();
  }
  plVar9 = plStack_450;
  plStack_450 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))();
  }
  puStack_540 = &uStack_468;
  func_0x000107c27dd4(&puStack_540);
  plVar9 = plStack_4c0;
  ppuStack_528 = &PTR_DAT_110862760;
  plStack_4c0 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))();
  }
  plVar9 = plStack_4c8;
  plStack_4c8 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))();
  }
  puStack_540 = &uStack_4e0;
  func_0x000107c27dd4(&puStack_540);
  _objc_release(puStack_4f8);
  func_0x000107c27da8(&uStack_418);
  _objc_release(uStack_428);
  _objc_release(uStack_430);
  _objc_release(puVar1);
  _objc_release(puVar3);
  puVar1 = PTR_PTR_1126db3f0;
  FUN_108c7bee8(PTR_PTR_1126db3f0,puVar6);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    func_0x00010c25ed40(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 108c7a45c; end: 108c7a5cf;  */

void FUN_108c7a45c(long param_1,undefined *param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  long lVar10;
  undefined4 uStack_4c4;
  undefined8 *puStack_4c0;
  undefined8 *puStack_4b8;
  undefined8 uStack_4b0;
  undefined **ppuStack_4a8;
  undefined4 uStack_4a0;
  undefined4 uStack_490;
  undefined *puStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  long *plStack_448;
  long *plStack_440;
  undefined1 uStack_431;
  undefined **ppuStack_430;
  undefined4 uStack_428;
  undefined2 uStack_418;
  undefined2 uStack_416;
  undefined1 *puStack_3f8;
  undefined ***pppuStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  long *plStack_3d0;
  long *plStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 *puStack_300;
  undefined8 auStack_2f8 [2];
  char cStack_2e1;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar3 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar9 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f50f15d;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110abf018;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110abf018,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar3 = (undefined *)puVar6;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar3 = (undefined *)puVar6;
      param_4 = param_3;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar6 = &uStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar8 = puVar3;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f50f15d;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x000107c27984(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar7 = &UNK_110abf068;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110abf068,&uStack_100,puVar3);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x000107c278ac(&puStack_e8);
    puVar8 = (undefined *)puVar6;
    param_4 = puVar3;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar8 = (undefined *)puVar6;
      param_4 = puVar3;
    }
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar6 = &uStack_180;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar7;
  puVar2 = puVar8;
  _objc_retain(puVar7);
  if (puVar3 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar3 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f50f15d;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x000107c278b8(auStack_160,puVar1);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x000107c27984(&uStack_180,auStack_160,&lStack_148,1);
    puVar1 = &UNK_110abf0b8;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110abf0b8,&uStack_180,puVar8);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x000107c278ac(&puStack_168);
    puVar2 = (undefined *)puVar6;
    param_4 = puVar8;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar2 = (undefined *)puVar6;
      param_4 = puVar8;
    }
  }
  puVar3 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  __Unwind_Resume();
  puVar6 = &uStack_200;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar8 = puVar2;
  _objc_retain(puVar1);
  if (puVar3 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar3 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f50f15d;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_1e0,puVar3);
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    func_0x000107c27984(&uStack_200,auStack_1e0,&lStack_1c8,1);
    puVar7 = &UNK_110abf108;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110abf108,&uStack_200,puVar2);
    puStack_1e8 = (undefined1 *)&uStack_200;
    func_0x000107c278ac(&puStack_1e8);
    puVar8 = (undefined *)puVar6;
    param_4 = puVar2;
    if (cStack_1c9 < '\0') {
      __ZdlPv(auStack_1e0[0]);
      puVar8 = (undefined *)puVar6;
      param_4 = puVar2;
    }
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar6 = &uStack_280;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar7;
  puVar2 = puVar8;
  _objc_retain(puVar7);
  if (puVar3 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar3 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f50f15d;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x000107c278b8(auStack_260,puVar1);
    uStack_280 = 0;
    uStack_278 = 0;
    uStack_270 = 0;
    func_0x000107c27984(&uStack_280,auStack_260,&lStack_248,1);
    puVar1 = &UNK_110abf158;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110abf158,&uStack_280,puVar8);
    puStack_268 = (undefined1 *)&uStack_280;
    func_0x000107c278ac(&puStack_268);
    puVar2 = (undefined *)puVar6;
    param_4 = puVar8;
    if (cStack_249 < '\0') {
      __ZdlPv(auStack_260[0]);
      puVar2 = (undefined *)puVar6;
      param_4 = puVar8;
    }
  }
  puVar3 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  __Unwind_Resume();
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  if (puVar3 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar3 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f50f15d;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_2f8,puVar3);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar3 = &UNK_10f50f15d;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar3 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x000107c278b8(auStack_2e0,puVar3);
    uStack_318 = 0;
    uStack_310 = 0;
    uStack_308 = 0;
    func_0x000107c27984(&uStack_318,auStack_2f8,&lStack_2c8,2);
    puVar7 = &UNK_110abf1a8;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110abf1a8,&uStack_318,param_4);
    puStack_300 = &uStack_318;
    func_0x000107c278ac(&puStack_300);
    lVar10 = 0;
    do {
      if ((&cStack_2c9)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2e0 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  _objc_release(puVar2);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_2e1 < '\0') {
    __ZdlPv(auStack_2f8[0]);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  __Unwind_Resume();
  _objc_retain();
  _objc_retain(puVar3);
  _objc_retain(puVar7);
  _objc_opt_class(PTR_PTR_1126db3e8);
  if (puVar3 == (undefined *)0x0) {
    uStack_390 = 0;
    uStack_3a8 = 0;
    uStack_3b0 = 0;
    uStack_398 = 0;
    uStack_3a0 = 0;
    uStack_3b8 = 0;
    uStack_3c0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_3c0,puVar3);
  }
  puVar4 = &uStack_431;
  FUN_108c7b6ec();
  uStack_4a0 = 0xf;
  uStack_490 = 0x100;
  _objc_retain(puVar7);
  ppuStack_4a8 = &PTR_DAT_110862760;
  uStack_468 = 0;
  uStack_470 = 0;
  uStack_458 = 0;
  uStack_460 = 0;
  plStack_448 = (long *)0x0;
  uStack_450 = 0;
  plStack_440 = (long *)0x0;
  uStack_416 = *(undefined2 *)(puVar4 + 0x1a);
  uStack_428 = 10;
  uStack_418 = 0x100;
  ppuStack_430 = &PTR_SUB_110862700;
  uStack_3e0 = 0;
  uStack_3e8 = 0;
  plStack_3d0 = (long *)0x0;
  uStack_3d8 = 0;
  plStack_3c8 = (long *)0x0;
  puStack_4c0 = (undefined8 *)0x0;
  puStack_4b8 = (undefined8 *)0x0;
  uStack_4b0 = 0;
  uStack_4c4 = 0;
  puVar5 = &uStack_3c0;
  puStack_478 = puVar7;
  puStack_3f8 = puVar4;
  pppuStack_3f0 = &ppuStack_4a8;
  func_0x000107c310cc(puVar5,&ppuStack_430,&puStack_4c0,&uStack_4c4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  if (puStack_4c0 != (undefined8 *)0x0) {
    puStack_4b8 = puStack_4c0;
    __ZdlPv();
  }
  plVar9 = plStack_3c8;
  ppuStack_430 = &PTR_SUB_110862700;
  plStack_3c8 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))();
  }
  plVar9 = plStack_3d0;
  plStack_3d0 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))();
  }
  puStack_4c0 = &uStack_3e8;
  func_0x000107c27dd4(&puStack_4c0);
  plVar9 = plStack_440;
  ppuStack_4a8 = &PTR_DAT_110862760;
  plStack_440 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))();
  }
  plVar9 = plStack_448;
  plStack_448 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))();
  }
  puStack_4c0 = &uStack_460;
  func_0x000107c27dd4(&puStack_4c0);
  _objc_release(puStack_478);
  func_0x000107c27da8(&uStack_398);
  _objc_release(uStack_3a8);
  _objc_release(uStack_3b0);
  _objc_release(puVar7);
  _objc_release(puVar3);
  puVar1 = PTR_PTR_1126db3f0;
  FUN_108c7bee8(PTR_PTR_1126db3f0,puVar6);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    func_0x00010c25ed40(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 108c7a5d0; end: 108c7a743;  */

void FUN_108c7a5d0(long param_1,undefined *param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  long lVar10;
  undefined4 uStack_444;
  undefined8 *puStack_440;
  undefined8 *puStack_438;
  undefined8 uStack_430;
  undefined **ppuStack_428;
  undefined4 uStack_420;
  undefined4 uStack_410;
  undefined *puStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  long *plStack_3c8;
  long *plStack_3c0;
  undefined1 uStack_3b1;
  undefined **ppuStack_3b0;
  undefined4 uStack_3a8;
  undefined2 uStack_398;
  undefined2 uStack_396;
  undefined1 *puStack_378;
  undefined ***pppuStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  long *plStack_350;
  long *plStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 *puStack_280;
  undefined8 auStack_278 [2];
  char cStack_261;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar3 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar9 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f50f15d;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110abf068;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110abf068,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar3 = (undefined *)puVar6;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar3 = (undefined *)puVar6;
      param_4 = param_3;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar6 = &uStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar8 = puVar3;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f50f15d;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x000107c27984(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar7 = &UNK_110abf0b8;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110abf0b8,&uStack_100,puVar3);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x000107c278ac(&puStack_e8);
    puVar8 = (undefined *)puVar6;
    param_4 = puVar3;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar8 = (undefined *)puVar6;
      param_4 = puVar3;
    }
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar6 = &uStack_180;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar7;
  puVar2 = puVar8;
  _objc_retain(puVar7);
  if (puVar3 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar3 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f50f15d;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x000107c278b8(auStack_160,puVar1);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x000107c27984(&uStack_180,auStack_160,&lStack_148,1);
    puVar1 = &UNK_110abf108;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110abf108,&uStack_180,puVar8);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x000107c278ac(&puStack_168);
    puVar2 = (undefined *)puVar6;
    param_4 = puVar8;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar2 = (undefined *)puVar6;
      param_4 = puVar8;
    }
  }
  puVar3 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  __Unwind_Resume();
  puVar6 = &uStack_200;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar8 = puVar2;
  _objc_retain(puVar1);
  if (puVar3 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar3 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f50f15d;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_1e0,puVar3);
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    func_0x000107c27984(&uStack_200,auStack_1e0,&lStack_1c8,1);
    puVar7 = &UNK_110abf158;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110abf158,&uStack_200,puVar2);
    puStack_1e8 = (undefined1 *)&uStack_200;
    func_0x000107c278ac(&puStack_1e8);
    puVar8 = (undefined *)puVar6;
    param_4 = puVar2;
    if (cStack_1c9 < '\0') {
      __ZdlPv(auStack_1e0[0]);
      puVar8 = (undefined *)puVar6;
      param_4 = puVar2;
    }
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar7;
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  if (puVar3 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar3 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f50f15d;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x000107c278b8(auStack_278,puVar1);
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar1 = &UNK_10f50f15d;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar1 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x000107c278b8(auStack_260,puVar1);
    uStack_298 = 0;
    uStack_290 = 0;
    uStack_288 = 0;
    func_0x000107c27984(&uStack_298,auStack_278,&lStack_248,2);
    puVar1 = &UNK_110abf1a8;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110abf1a8,&uStack_298,param_4);
    puStack_280 = &uStack_298;
    func_0x000107c278ac(&puStack_280);
    lVar10 = 0;
    do {
      if ((&cStack_249)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_260 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  _objc_release(puVar8);
  puVar3 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  if (cStack_261 < '\0') {
    __ZdlPv(auStack_278[0]);
  }
  _objc_release(puVar8);
  _objc_release(puVar7);
  __Unwind_Resume();
  _objc_retain();
  _objc_retain(puVar3);
  _objc_retain(puVar1);
  _objc_opt_class(PTR_PTR_1126db3e8);
  if (puVar3 == (undefined *)0x0) {
    uStack_310 = 0;
    uStack_328 = 0;
    uStack_330 = 0;
    uStack_318 = 0;
    uStack_320 = 0;
    uStack_338 = 0;
    uStack_340 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_340,puVar3);
  }
  puVar4 = &uStack_3b1;
  FUN_108c7b6ec();
  uStack_420 = 0xf;
  uStack_410 = 0x100;
  _objc_retain(puVar1);
  ppuStack_428 = &PTR_DAT_110862760;
  uStack_3e8 = 0;
  uStack_3f0 = 0;
  uStack_3d8 = 0;
  uStack_3e0 = 0;
  plStack_3c8 = (long *)0x0;
  uStack_3d0 = 0;
  plStack_3c0 = (long *)0x0;
  uStack_396 = *(undefined2 *)(puVar4 + 0x1a);
  uStack_3a8 = 10;
  uStack_398 = 0x100;
  ppuStack_3b0 = &PTR_SUB_110862700;
  uStack_360 = 0;
  uStack_368 = 0;
  plStack_350 = (long *)0x0;
  uStack_358 = 0;
  plStack_348 = (long *)0x0;
  puStack_440 = (undefined8 *)0x0;
  puStack_438 = (undefined8 *)0x0;
  uStack_430 = 0;
  uStack_444 = 0;
  puVar5 = &uStack_340;
  puStack_3f8 = puVar1;
  puStack_378 = puVar4;
  pppuStack_370 = &ppuStack_428;
  func_0x000107c310cc(puVar5,&ppuStack_3b0,&puStack_440,&uStack_444);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  if (puStack_440 != (undefined8 *)0x0) {
    puStack_438 = puStack_440;
    __ZdlPv();
  }
  plVar9 = plStack_348;
  ppuStack_3b0 = &PTR_SUB_110862700;
  plStack_348 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))();
  }
  plVar9 = plStack_350;
  plStack_350 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))();
  }
  puStack_440 = &uStack_368;
  func_0x000107c27dd4(&puStack_440);
  plVar9 = plStack_3c0;
  ppuStack_428 = &PTR_DAT_110862760;
  plStack_3c0 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))();
  }
  plVar9 = plStack_3c8;
  plStack_3c8 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))();
  }
  puStack_440 = &uStack_3e0;
  func_0x000107c27dd4(&puStack_440);
  _objc_release(puStack_3f8);
  func_0x000107c27da8(&uStack_318);
  _objc_release(uStack_328);
  _objc_release(uStack_330);
  _objc_release(puVar1);
  _objc_release(puVar3);
  puVar1 = PTR_PTR_1126db3f0;
  FUN_108c7bee8(PTR_PTR_1126db3f0,puVar6);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    func_0x00010c25ed40(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 108c7a744; end: 108c7a8b7;  */

void FUN_108c7a744(long param_1,undefined *param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  long lVar10;
  undefined4 uStack_3c4;
  undefined8 *puStack_3c0;
  undefined8 *puStack_3b8;
  undefined8 uStack_3b0;
  undefined **ppuStack_3a8;
  undefined4 uStack_3a0;
  undefined4 uStack_390;
  undefined *puStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  long *plStack_348;
  long *plStack_340;
  undefined1 uStack_331;
  undefined **ppuStack_330;
  undefined4 uStack_328;
  undefined2 uStack_318;
  undefined2 uStack_316;
  undefined1 *puStack_2f8;
  undefined ***pppuStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  long *plStack_2d0;
  long *plStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 *puStack_200;
  undefined8 auStack_1f8 [2];
  char cStack_1e1;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar3 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar9 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f50f15d;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110abf0b8;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110abf0b8,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar3 = (undefined *)puVar6;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar3 = (undefined *)puVar6;
      param_4 = param_3;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar6 = &uStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar8 = puVar3;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f50f15d;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x000107c27984(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar7 = &UNK_110abf108;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110abf108,&uStack_100,puVar3);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x000107c278ac(&puStack_e8);
    puVar8 = (undefined *)puVar6;
    param_4 = puVar3;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar8 = (undefined *)puVar6;
      param_4 = puVar3;
    }
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar6 = &uStack_180;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar7;
  puVar2 = puVar8;
  _objc_retain(puVar7);
  if (puVar3 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar3 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f50f15d;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x000107c278b8(auStack_160,puVar1);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x000107c27984(&uStack_180,auStack_160,&lStack_148,1);
    puVar1 = &UNK_110abf158;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110abf158,&uStack_180,puVar8);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x000107c278ac(&puStack_168);
    puVar2 = (undefined *)puVar6;
    param_4 = puVar8;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar2 = (undefined *)puVar6;
      param_4 = puVar8;
    }
  }
  puVar3 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  __Unwind_Resume();
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  if (puVar3 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar3 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f50f15d;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_1f8,puVar3);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar3 = &UNK_10f50f15d;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar3 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x000107c278b8(auStack_1e0,puVar3);
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_208 = 0;
    func_0x000107c27984(&uStack_218,auStack_1f8,&lStack_1c8,2);
    puVar7 = &UNK_110abf1a8;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110abf1a8,&uStack_218,param_4);
    puStack_200 = &uStack_218;
    func_0x000107c278ac(&puStack_200);
    lVar10 = 0;
    do {
      if ((&cStack_1c9)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1e0 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  _objc_release(puVar2);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_1e1 < '\0') {
    __ZdlPv(auStack_1f8[0]);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  __Unwind_Resume();
  _objc_retain();
  _objc_retain(puVar3);
  _objc_retain(puVar7);
  _objc_opt_class(PTR_PTR_1126db3e8);
  if (puVar3 == (undefined *)0x0) {
    uStack_290 = 0;
    uStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_298 = 0;
    uStack_2a0 = 0;
    uStack_2b8 = 0;
    uStack_2c0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_2c0,puVar3);
  }
  puVar4 = &uStack_331;
  FUN_108c7b6ec();
  uStack_3a0 = 0xf;
  uStack_390 = 0x100;
  _objc_retain(puVar7);
  ppuStack_3a8 = &PTR_DAT_110862760;
  uStack_368 = 0;
  uStack_370 = 0;
  uStack_358 = 0;
  uStack_360 = 0;
  plStack_348 = (long *)0x0;
  uStack_350 = 0;
  plStack_340 = (long *)0x0;
  uStack_316 = *(undefined2 *)(puVar4 + 0x1a);
  uStack_328 = 10;
  uStack_318 = 0x100;
  ppuStack_330 = &PTR_SUB_110862700;
  uStack_2e0 = 0;
  uStack_2e8 = 0;
  plStack_2d0 = (long *)0x0;
  uStack_2d8 = 0;
  plStack_2c8 = (long *)0x0;
  puStack_3c0 = (undefined8 *)0x0;
  puStack_3b8 = (undefined8 *)0x0;
  uStack_3b0 = 0;
  uStack_3c4 = 0;
  puVar5 = &uStack_2c0;
  puStack_378 = puVar7;
  puStack_2f8 = puVar4;
  pppuStack_2f0 = &ppuStack_3a8;
  func_0x000107c310cc(puVar5,&ppuStack_330,&puStack_3c0,&uStack_3c4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  if (puStack_3c0 != (undefined8 *)0x0) {
    puStack_3b8 = puStack_3c0;
    __ZdlPv();
  }
  plVar9 = plStack_2c8;
  ppuStack_330 = &PTR_SUB_110862700;
  plStack_2c8 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))();
  }
  plVar9 = plStack_2d0;
  plStack_2d0 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))();
  }
  puStack_3c0 = &uStack_2e8;
  func_0x000107c27dd4(&puStack_3c0);
  plVar9 = plStack_340;
  ppuStack_3a8 = &PTR_DAT_110862760;
  plStack_340 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))();
  }
  plVar9 = plStack_348;
  plStack_348 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))();
  }
  puStack_3c0 = &uStack_360;
  func_0x000107c27dd4(&puStack_3c0);
  _objc_release(puStack_378);
  func_0x000107c27da8(&uStack_298);
  _objc_release(uStack_2a8);
  _objc_release(uStack_2b0);
  _objc_release(puVar7);
  _objc_release(puVar3);
  puVar1 = PTR_PTR_1126db3f0;
  FUN_108c7bee8(PTR_PTR_1126db3f0,puVar6);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    func_0x00010c25ed40(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 108c7a8b8; end: 108c7aa2b;  */

void FUN_108c7a8b8(long param_1,undefined *param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  long lVar10;
  undefined4 uStack_344;
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  undefined8 uStack_330;
  undefined **ppuStack_328;
  undefined4 uStack_320;
  undefined4 uStack_310;
  undefined *puStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  long *plStack_2c8;
  long *plStack_2c0;
  undefined1 uStack_2b1;
  undefined **ppuStack_2b0;
  undefined4 uStack_2a8;
  undefined2 uStack_298;
  undefined2 uStack_296;
  undefined1 *puStack_278;
  undefined ***pppuStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long *plStack_250;
  long *plStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 *puStack_180;
  undefined8 auStack_178 [2];
  char cStack_161;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar3 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar9 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f50f15d;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110abf108;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110abf108,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar3 = (undefined *)puVar6;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar3 = (undefined *)puVar6;
      param_4 = param_3;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar6 = &uStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar8 = puVar3;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f50f15d;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x000107c27984(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar7 = &UNK_110abf158;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110abf158,&uStack_100,puVar3);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x000107c278ac(&puStack_e8);
    puVar8 = (undefined *)puVar6;
    param_4 = puVar3;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar8 = (undefined *)puVar6;
      param_4 = puVar3;
    }
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar7;
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  if (puVar3 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar3 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f50f15d;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x000107c278b8(auStack_178,puVar1);
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar1 = &UNK_10f50f15d;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar1 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x000107c278b8(auStack_160,puVar1);
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_188 = 0;
    func_0x000107c27984(&uStack_198,auStack_178,&lStack_148,2);
    puVar1 = &UNK_110abf1a8;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110abf1a8,&uStack_198,param_4);
    puStack_180 = &uStack_198;
    func_0x000107c278ac(&puStack_180);
    lVar10 = 0;
    do {
      if ((&cStack_149)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_160 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  _objc_release(puVar8);
  puVar3 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  if (cStack_161 < '\0') {
    __ZdlPv(auStack_178[0]);
  }
  _objc_release(puVar8);
  _objc_release(puVar7);
  __Unwind_Resume();
  _objc_retain();
  _objc_retain(puVar3);
  _objc_retain(puVar1);
  _objc_opt_class(PTR_PTR_1126db3e8);
  if (puVar3 == (undefined *)0x0) {
    uStack_210 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_240,puVar3);
  }
  puVar4 = &uStack_2b1;
  FUN_108c7b6ec();
  uStack_320 = 0xf;
  uStack_310 = 0x100;
  _objc_retain(puVar1);
  ppuStack_328 = &PTR_DAT_110862760;
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  plStack_2c8 = (long *)0x0;
  uStack_2d0 = 0;
  plStack_2c0 = (long *)0x0;
  uStack_296 = *(undefined2 *)(puVar4 + 0x1a);
  uStack_2a8 = 10;
  uStack_298 = 0x100;
  ppuStack_2b0 = &PTR_SUB_110862700;
  uStack_260 = 0;
  uStack_268 = 0;
  plStack_250 = (long *)0x0;
  uStack_258 = 0;
  plStack_248 = (long *)0x0;
  puStack_340 = (undefined8 *)0x0;
  puStack_338 = (undefined8 *)0x0;
  uStack_330 = 0;
  uStack_344 = 0;
  puVar5 = &uStack_240;
  puStack_2f8 = puVar1;
  puStack_278 = puVar4;
  pppuStack_270 = &ppuStack_328;
  func_0x000107c310cc(puVar5,&ppuStack_2b0,&puStack_340,&uStack_344);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  if (puStack_340 != (undefined8 *)0x0) {
    puStack_338 = puStack_340;
    __ZdlPv();
  }
  plVar9 = plStack_248;
  ppuStack_2b0 = &PTR_SUB_110862700;
  plStack_248 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))();
  }
  plVar9 = plStack_250;
  plStack_250 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))();
  }
  puStack_340 = &uStack_268;
  func_0x000107c27dd4(&puStack_340);
  plVar9 = plStack_2c0;
  ppuStack_328 = &PTR_DAT_110862760;
  plStack_2c0 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))();
  }
  plVar9 = plStack_2c8;
  plStack_2c8 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))();
  }
  puStack_340 = &uStack_2e0;
  func_0x000107c27dd4(&puStack_340);
  _objc_release(puStack_2f8);
  func_0x000107c27da8(&uStack_218);
  _objc_release(uStack_228);
  _objc_release(uStack_230);
  _objc_release(puVar1);
  _objc_release(puVar3);
  puVar1 = PTR_PTR_1126db3f0;
  FUN_108c7bee8(PTR_PTR_1126db3f0,puVar6);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    func_0x00010c25ed40(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 108c7aa2c; end: 108c7ab9f;  */

void FUN_108c7aa2c(long param_1,undefined *param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  undefined4 uStack_2c4;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 uStack_2b0;
  undefined **ppuStack_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_290;
  undefined *puStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  long *plStack_248;
  long *plStack_240;
  undefined1 uStack_231;
  undefined **ppuStack_230;
  undefined4 uStack_228;
  undefined2 uStack_218;
  undefined2 uStack_216;
  undefined1 *puStack_1f8;
  undefined ***pppuStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long *plStack_1d0;
  long *plStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar7 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar8 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f50f15d;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110abf158;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110abf158,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar7 = (undefined *)puVar5;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar7 = (undefined *)puVar5;
      param_4 = param_3;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar1;
  _objc_retain(puVar1);
  _objc_retain(puVar7);
  if (puVar2 != (undefined *)0x0) {
    plVar8 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f50f15d;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_f8,puVar2);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar2 = &UNK_10f50f15d;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar2 = puVar7;
      func_0x00010bdc3520(puVar7);
    }
    _objc_release(puVar7);
    func_0x000107c278b8(auStack_e0,puVar2);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x000107c27984(&uStack_118,auStack_f8,&lStack_c8,2);
    puVar6 = &UNK_110abf1a8;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110abf1a8,&uStack_118,param_4);
    puStack_100 = &uStack_118;
    func_0x000107c278ac(&puStack_100);
    lVar9 = 0;
    do {
      if ((&cStack_c9)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  _objc_release(puVar7);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(puVar7);
  _objc_release(puVar1);
  __Unwind_Resume();
  _objc_retain();
  _objc_retain(puVar2);
  _objc_retain(puVar6);
  _objc_opt_class(PTR_PTR_1126db3e8);
  if (puVar2 == (undefined *)0x0) {
    uStack_190 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_1c0,puVar2);
  }
  puVar3 = &uStack_231;
  FUN_108c7b6ec();
  uStack_2a0 = 0xf;
  uStack_290 = 0x100;
  _objc_retain(puVar6);
  ppuStack_2a8 = &PTR_DAT_110862760;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  plStack_248 = (long *)0x0;
  uStack_250 = 0;
  plStack_240 = (long *)0x0;
  uStack_216 = *(undefined2 *)(puVar3 + 0x1a);
  uStack_228 = 10;
  uStack_218 = 0x100;
  ppuStack_230 = &PTR_SUB_110862700;
  uStack_1e0 = 0;
  uStack_1e8 = 0;
  plStack_1d0 = (long *)0x0;
  uStack_1d8 = 0;
  plStack_1c8 = (long *)0x0;
  puStack_2c0 = (undefined8 *)0x0;
  puStack_2b8 = (undefined8 *)0x0;
  uStack_2b0 = 0;
  uStack_2c4 = 0;
  puVar4 = &uStack_1c0;
  puStack_278 = puVar6;
  puStack_1f8 = puVar3;
  pppuStack_1f0 = &ppuStack_2a8;
  func_0x000107c310cc(puVar4,&ppuStack_230,&puStack_2c0,&uStack_2c4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  if (puStack_2c0 != (undefined8 *)0x0) {
    puStack_2b8 = puStack_2c0;
    __ZdlPv();
  }
  plVar8 = plStack_1c8;
  ppuStack_230 = &PTR_SUB_110862700;
  plStack_1c8 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  plVar8 = plStack_1d0;
  plStack_1d0 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  puStack_2c0 = &uStack_1e8;
  func_0x000107c27dd4(&puStack_2c0);
  plVar8 = plStack_240;
  ppuStack_2a8 = &PTR_DAT_110862760;
  plStack_240 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  plVar8 = plStack_248;
  plStack_248 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  puStack_2c0 = &uStack_260;
  func_0x000107c27dd4(&puStack_2c0);
  _objc_release(puStack_278);
  func_0x000107c27da8(&uStack_198);
  _objc_release(uStack_1a8);
  _objc_release(uStack_1b0);
  _objc_release(puVar6);
  _objc_release(puVar2);
  puVar1 = PTR_PTR_1126db3f0;
  FUN_108c7bee8(PTR_PTR_1126db3f0,puVar5);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    func_0x00010c25ed40(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108c7aba0; end: 108c7adcf;  */

void FUN_108c7aba0(long param_1,undefined *param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined4 uStack_244;
  undefined8 *puStack_240;
  undefined8 *puStack_238;
  undefined8 uStack_230;
  undefined **ppuStack_228;
  undefined4 uStack_220;
  undefined4 uStack_210;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long *plStack_1c8;
  long *plStack_1c0;
  undefined1 uStack_1b1;
  undefined **ppuStack_1b0;
  undefined4 uStack_1a8;
  undefined2 uStack_198;
  undefined2 uStack_196;
  undefined1 *puStack_178;
  undefined ***pppuStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long *plStack_150;
  long *plStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f50f15d;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f50f15d;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x000107c27984(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_110abf1a8;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110abf1a8,&uStack_98,param_4);
    puStack_80 = &uStack_98;
    func_0x000107c278ac(&puStack_80);
    lVar6 = 0;
    do {
      if ((&cStack_49)[lVar6] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar6));
      }
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != -0x30);
  }
  _objc_release(param_3);
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  _objc_retain();
  _objc_retain(puVar2);
  _objc_retain(puVar1);
  _objc_opt_class(PTR_PTR_1126db3e8);
  if (puVar2 == (undefined *)0x0) {
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_140,puVar2);
  }
  puVar3 = &uStack_1b1;
  FUN_108c7b6ec();
  uStack_220 = 0xf;
  uStack_210 = 0x100;
  _objc_retain(puVar1);
  ppuStack_228 = &PTR_DAT_110862760;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  plStack_1c8 = (long *)0x0;
  uStack_1d0 = 0;
  plStack_1c0 = (long *)0x0;
  uStack_196 = *(undefined2 *)(puVar3 + 0x1a);
  uStack_1a8 = 10;
  uStack_198 = 0x100;
  ppuStack_1b0 = &PTR_SUB_110862700;
  uStack_160 = 0;
  uStack_168 = 0;
  plStack_150 = (long *)0x0;
  uStack_158 = 0;
  plStack_148 = (long *)0x0;
  puStack_240 = (undefined8 *)0x0;
  puStack_238 = (undefined8 *)0x0;
  uStack_230 = 0;
  uStack_244 = 0;
  puVar4 = &uStack_140;
  puStack_1f8 = puVar1;
  puStack_178 = puVar3;
  pppuStack_170 = &ppuStack_228;
  func_0x000107c310cc(puVar4,&ppuStack_1b0,&puStack_240,&uStack_244);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  if (puStack_240 != (undefined8 *)0x0) {
    puStack_238 = puStack_240;
    __ZdlPv();
  }
  plVar7 = plStack_148;
  ppuStack_1b0 = &PTR_SUB_110862700;
  plStack_148 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 8))();
  }
  plVar7 = plStack_150;
  plStack_150 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 8))();
  }
  puStack_240 = &uStack_168;
  func_0x000107c27dd4(&puStack_240);
  plVar7 = plStack_1c0;
  ppuStack_228 = &PTR_DAT_110862760;
  plStack_1c0 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 8))();
  }
  plVar7 = plStack_1c8;
  plStack_1c8 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 8))();
  }
  puStack_240 = &uStack_1e0;
  func_0x000107c27dd4(&puStack_240);
  _objc_release(puStack_1f8);
  func_0x000107c27da8(&uStack_118);
  _objc_release(uStack_128);
  _objc_release(uStack_130);
  _objc_release(puVar1);
  _objc_release(puVar2);
  puVar1 = PTR_PTR_1126db3f0;
  FUN_108c7bee8(PTR_PTR_1126db3f0,puVar5);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    func_0x00010c25ed40(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}


